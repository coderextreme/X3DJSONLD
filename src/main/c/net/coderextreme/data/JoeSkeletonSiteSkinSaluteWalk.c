#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "H-Anim";
component2.level = 2;
head1.component = new MFNode();

head1.component[0] = component2;

//TODO fix X3D Tooltips entry for HAnim component
meta meta3 = createNode("meta");
meta3.name = "title";
meta3.content = "JoeSkeletonSiteSkinSaluteWalk.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "Attempting to show skeleton, skin, sites and animation";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "reference";
meta5.content = "JoeSkeletonSiteSkinSaluteWalk.original.x3dv";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "creator";
meta6.content = "Joe D. Williams";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "created";
meta7.content = "9 January 2004";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "translated";
meta8.content = "4 December 2022";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "modified";
meta9.content = "4 December 2022";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "translator";
meta10.content = "Michalis Kamburelis";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "translator";
meta11.content = "Don Brutzman";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "identifier";
meta12.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/MotionAnimation/JoeSkeletonSiteSkinSaluteWalk.x3d";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "generator";
meta13.content = "tovrmlx3d, https://castle-engine.io/view3dscene.php#section_converting";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "generator";
meta14.content = "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "filename";
meta15.content = "hanimLOA3A8320080320..x3dv 20080627";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "warning";
meta16.content = "Under development, numerous errors and warnings";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "TODO";
meta17.content = "Provide feedback to tovrmlx3d converter";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "TODO";
meta18.content = "HAnimJoint cannot contain X3DChildNode elements, only HAnimJoint HAnimSegmet HAnimSite - improve diagnostics.";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "TODO";
meta19.content = "ensure name prefix \"Joe_\" applied to all contained DEF values (not name field), perhaps correction automatically applied by X3DTidy";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "TODO";
meta20.content = "This is an HAnimV1 loa model, might need to convert to X3D4 to note loa value";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "license";
meta21.content = "../license.html";
head1.meta[19] = meta21;

head = head1;

Group Group23 = createNode("Group");
Group23.DEF = "JointCenters_WorldInfo";
WorldInfo WorldInfo24 = createNode("WorldInfo");
WorldInfo24.info = new MFString(new java.lang.String["By Joe for Joe"]);
WorldInfo24.title = "HAnim V1 LOA3 Skeleton Joint centers and Site translations Adapted for approximatrion of ManGLoss Site Location Example and HANIM 200x Default Joint Centers, LOA3";
Group23.children = new MFNode();

Group23.children[0] = WorldInfo24;

children = new MFNode();

children[0] = Group23;

Group Group25 = createNode("Group");
Transform Transform26 = createNode("Transform");
Transform26.scale = new SFVec3f(new float[10,10,10]);
Transform26.translation = new SFVec3f(new float[0,3,0]);
Shape Shape27 = createNode("Shape");
Shape27.DEF = "jointbox";
IndexedFaceSet IndexedFaceSet28 = createNode("IndexedFaceSet");
IndexedFaceSet28.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet28.creaseAngle = 0.10000000149011612;
Coordinate Coordinate29 = createNode("Coordinate");
Coordinate29.point = new MFVec3f(new float[0,0.009999999776482582,0,-0.009999999776482582,0,0,0,0,0.015699999406933784,0.009999999776482582,0,0,0,0,-0.009999999776482582,0,-0.009999999776482582,0]);
IndexedFaceSet28.coord = Coordinate29;

Color Color30 = createNode("Color");
Color30.color = new MFColor(new float[1,0,0,0,0,1,0,1,0,1,1,1,0,1,1,1,1,0]);
IndexedFaceSet28.color = Color30;

Shape27.geometry = IndexedFaceSet28;

Appearance Appearance31 = createNode("Appearance");
Material Material32 = createNode("Material");
Material32.ambientIntensity = 0.5;
Material32.diffuseColor = new SFColor(new float[0,0,0]);
Material32.shininess = 1;
Material32.transparency = 1;
Appearance31.material = Material32;

Shape27.appearance = Appearance31;

Transform26.children = new MFNode();

Transform26.children[0] = Shape27;

Group25.children = new MFNode();

Group25.children[0] = Transform26;

Transform Transform33 = createNode("Transform");
Transform33.scale = new SFVec3f(new float[0.10000000149011612,0.10000000149011612,0.10000000149011612]);
Transform33.translation = new SFVec3f(new float[0,0.10000000149011612,0]);
Shape Shape34 = createNode("Shape");
Shape34.DEF = "sitebox";
IndexedFaceSet IndexedFaceSet35 = createNode("IndexedFaceSet");
IndexedFaceSet35.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet35.creaseAngle = 0.10000000149011612;
Coordinate Coordinate36 = createNode("Coordinate");
Coordinate36.point = new MFVec3f(new float[0,0.009999999776482582,0,-0.009999999776482582,0,0,0,0,0.009999999776482582,0.009999999776482582,0,0,0,0,-0.009999999776482582,0,-0.009999999776482582,0]);
IndexedFaceSet35.coord = Coordinate36;

Shape34.geometry = IndexedFaceSet35;

Appearance Appearance37 = createNode("Appearance");
Material Material38 = createNode("Material");
Material38.ambientIntensity = 1;
Material38.diffuseColor = new SFColor(new float[1,0,0]);
Material38.emissiveColor = new SFColor(new float[1,0,0]);
Material38.shininess = 0.699999988079071;
Material38.specularColor = new SFColor(new float[1,0,0]);
Material38.transparency = 0.6000000238418579;
Appearance37.material = Material38;

Shape34.appearance = Appearance37;

Transform33.children = new MFNode();

Transform33.children[0] = Shape34;

Group25.children[1] = Transform33;

Transform Transform39 = createNode("Transform");
Transform39.scale = new SFVec3f(new float[0.10000000149011612,0.10000000149011612,0.10000000149011612]);
Transform39.translation = new SFVec3f(new float[0,0.20000000298023224,0]);
Shape Shape40 = createNode("Shape");
IndexedLineSet IndexedLineSet41 = createNode("IndexedLineSet");
IndexedLineSet41.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate42 = createNode("Coordinate");
Coordinate42.point = new MFVec3f(new float[0,0,0,0,0.00009999999747378752,0]);
IndexedLineSet41.coord = Coordinate42;

Shape40.geometry = IndexedLineSet41;

Appearance Appearance43 = createNode("Appearance");
Appearance43.DEF = "SegmentLine";
Material Material44 = createNode("Material");
Material44.diffuseColor = new SFColor(new float[0,1,0]);
Material44.emissiveColor = new SFColor(new float[0,1,0]);
Material44.specularColor = new SFColor(new float[0,1,0]);
Material44.transparency = 0.800000011920929;
Appearance43.material = Material44;

Shape40.appearance = Appearance43;

Transform39.children = new MFNode();

Transform39.children[0] = Shape40;

Group25.children[2] = Transform39;

Transform Transform45 = createNode("Transform");
Transform45.scale = new SFVec3f(new float[0.10000000149011612,0.10000000149011612,0.10000000149011612]);
Transform45.translation = new SFVec3f(new float[0,0.30000001192092896,0]);
Shape Shape46 = createNode("Shape");
Shape46.DEF = "skinsphere";
Sphere Sphere47 = createNode("Sphere");
Sphere47.radius = 0.004999999888241291;
Shape46.geometry = Sphere47;

Appearance Appearance48 = createNode("Appearance");
Material Material49 = createNode("Material");
Material49.ambientIntensity = 0.5;
Material49.diffuseColor = new SFColor(new float[0,1,0]);
Material49.emissiveColor = new SFColor(new float[0,1,0]);
Material49.shininess = 1;
Material49.specularColor = new SFColor(new float[0,1,0]);
Appearance48.material = Material49;

Shape46.appearance = Appearance48;

Transform45.children = new MFNode();

Transform45.children[0] = Shape46;

Group25.children[3] = Transform45;

children[1] = Group25;

Group Group50 = createNode("Group");
Group50.DEF = "SpecHumanoid";
Group Group51 = createNode("Group");
Group51.DEF = "JoeISOHumanoid";
HAnimHumanoid HAnimHumanoid52 = createNode("HAnimHumanoid");
HAnimHumanoid52.name = "Joe";
HAnimHumanoid52.DEF = "JoeHumanoid";
HAnimHumanoid52.version = "1.0";
HAnimJoint HAnimJoint53 = createNode("HAnimJoint");
HAnimJoint53.name = "HumanoidRoot";
HAnimJoint53.DEF = "Joe_HumanoidRoot";
HAnimJoint53.center = new SFVec3f(new float[0,0.875,0]);
HAnimJoint53.translation = new SFVec3f(new float[0,0.875,0]);
HAnimJoint53.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint53.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment54 = createNode("HAnimSegment");
HAnimSegment54.name = "sacrum";
HAnimSegment54.DEF = "Joe_sacrum";
Shape Shape55 = createNode("Shape");
Shape55.USE = "jointbox";
HAnimSegment54.children = new MFNode();

HAnimSegment54.children[0] = Shape55;

Shape Shape56 = createNode("Shape");
IndexedLineSet IndexedLineSet57 = createNode("IndexedLineSet");
IndexedLineSet57.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate58 = createNode("Coordinate");
Coordinate58.point = new MFVec3f(new float[0,0.875,0,0,0.9200000166893005,0]);
IndexedLineSet57.coord = Coordinate58;

Shape56.geometry = IndexedLineSet57;

Appearance Appearance59 = createNode("Appearance");
Appearance59.USE = "SegmentLine";
Shape56.appearance = Appearance59;

HAnimSegment54.children[1] = Shape56;

HAnimJoint53.children = new MFNode();

HAnimJoint53.children[0] = HAnimSegment54;

HAnimJoint HAnimJoint60 = createNode("HAnimJoint");
HAnimJoint60.name = "sacroiliac";
HAnimJoint60.DEF = "Joe_sacroiliac";
HAnimJoint60.center = new SFVec3f(new float[0,0.9200000166893005,0]);
HAnimJoint60.skinCoordIndex = new MFInt32(new int[17,19,20,21,22,23,26,27,73,82,89,91,93]);
HAnimJoint60.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,0.3499999940395355,0.3499999940395355,1]);
HAnimJoint60.translation = new SFVec3f(new float[0,0.914900004863739,0.0015999999595806003]);
HAnimJoint60.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint60.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment61 = createNode("HAnimSegment");
HAnimSegment61.name = "pelvis";
HAnimSegment61.DEF = "Joe_pelvis";
Shape Shape62 = createNode("Shape");
Shape62.USE = "jointbox";
HAnimSegment61.children = new MFNode();

HAnimSegment61.children[0] = Shape62;

Shape Shape63 = createNode("Shape");
IndexedLineSet IndexedLineSet64 = createNode("IndexedLineSet");
IndexedLineSet64.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
Coordinate Coordinate65 = createNode("Coordinate");
Coordinate65.point = new MFVec3f(new float[0,0.9200000166893005,0,0.09610000252723694,0.9124000072479248,0,-0.0949999988079071,0.9171000123023987,0.002899999963119626,0,1.0449999570846558,-0.0949999988079071]);
IndexedLineSet64.coord = Coordinate65;

Shape63.geometry = IndexedLineSet64;

Appearance Appearance66 = createNode("Appearance");
Appearance66.USE = "SegmentLine";
Shape63.appearance = Appearance66;

HAnimSegment61.children[1] = Shape63;

HAnimSite HAnimSite67 = createNode("HAnimSite");
HAnimSite67.name = "l_iliocristale";
HAnimSite67.DEF = "Joe_l_iliocristale";
HAnimSite67.translation = new SFVec3f(new float[0.14249999821186066,1.065000057220459,0.0032999999821186066]);
Shape Shape68 = createNode("Shape");
Shape68.USE = "sitebox";
HAnimSite67.children = new MFNode();

HAnimSite67.children[0] = Shape68;

HAnimSegment61.children[2] = HAnimSite67;

HAnimSite HAnimSite69 = createNode("HAnimSite");
HAnimSite69.name = "l_trochanterion";
HAnimSite69.DEF = "Joe_l_trochanterion";
HAnimSite69.translation = new SFVec3f(new float[0.15000000596046448,0.8999999761581421,-0.009999999776482582]);
Shape Shape70 = createNode("Shape");
Shape70.USE = "sitebox";
HAnimSite69.children = new MFNode();

HAnimSite69.children[0] = Shape70;

HAnimSegment61.children[3] = HAnimSite69;

HAnimSite HAnimSite71 = createNode("HAnimSite");
HAnimSite71.name = "r_iliocristale";
HAnimSite71.DEF = "Joe_r_iliocristale";
HAnimSite71.translation = new SFVec3f(new float[-0.14249999821186066,1.065000057220459,0.0032999999821186066]);
Shape Shape72 = createNode("Shape");
Shape72.USE = "sitebox";
HAnimSite71.children = new MFNode();

HAnimSite71.children[0] = Shape72;

HAnimSegment61.children[4] = HAnimSite71;

HAnimSite HAnimSite73 = createNode("HAnimSite");
HAnimSite73.name = "r_trochanterion";
HAnimSite73.DEF = "Joe_r_trochanterion";
HAnimSite73.translation = new SFVec3f(new float[-0.15000000596046448,0.8999999761581421,-0.009999999776482582]);
Shape Shape74 = createNode("Shape");
Shape74.USE = "sitebox";
HAnimSite73.children = new MFNode();

HAnimSite73.children[0] = Shape74;

HAnimSegment61.children[5] = HAnimSite73;

HAnimSite HAnimSite75 = createNode("HAnimSite");
HAnimSite75.name = "l_asis";
HAnimSite75.DEF = "Joe_l_asis";
HAnimSite75.translation = new SFVec3f(new float[0.09350000321865082,1.0299999713897705,0.07500000298023224]);
Shape Shape76 = createNode("Shape");
Shape76.USE = "sitebox";
HAnimSite75.children = new MFNode();

HAnimSite75.children[0] = Shape76;

HAnimSegment61.children[6] = HAnimSite75;

HAnimSite HAnimSite77 = createNode("HAnimSite");
HAnimSite77.name = "r_asis";
HAnimSite77.DEF = "Joe_r_asis";
HAnimSite77.translation = new SFVec3f(new float[-0.09350000321865082,1.0299999713897705,0.07500000298023224]);
Shape Shape78 = createNode("Shape");
Shape78.USE = "sitebox";
HAnimSite77.children = new MFNode();

HAnimSite77.children[0] = Shape78;

HAnimSegment61.children[7] = HAnimSite77;

HAnimSite HAnimSite79 = createNode("HAnimSite");
HAnimSite79.name = "l_psis";
HAnimSite79.DEF = "Joe_l_psis";
HAnimSite79.translation = new SFVec3f(new float[0.07729999721050262,1.0190000534057617,-0.11999999731779099]);
Shape Shape80 = createNode("Shape");
Shape80.USE = "sitebox";
HAnimSite79.children = new MFNode();

HAnimSite79.children[0] = Shape80;

HAnimSegment61.children[8] = HAnimSite79;

HAnimSite HAnimSite81 = createNode("HAnimSite");
HAnimSite81.name = "r_psis";
HAnimSite81.DEF = "Joe_r_psis";
HAnimSite81.translation = new SFVec3f(new float[-0.07729999721050262,1.0190000534057617,-0.11999999731779099]);
Shape Shape82 = createNode("Shape");
Shape82.USE = "sitebox";
HAnimSite81.children = new MFNode();

HAnimSite81.children[0] = Shape82;

HAnimSegment61.children[9] = HAnimSite81;

HAnimSite HAnimSite83 = createNode("HAnimSite");
HAnimSite83.name = "floormarker";
HAnimSite83.DEF = "Joe_floormarker";
Transform Transform84 = createNode("Transform");
Transform84.scale = new SFVec3f(new float[3,3,3]);
Shape Shape85 = createNode("Shape");
Shape85.USE = "sitebox";
Transform84.children = new MFNode();

Transform84.children[0] = Shape85;

HAnimSite83.children = new MFNode();

HAnimSite83.children[0] = Transform84;

HAnimSegment61.children[10] = HAnimSite83;

HAnimSite HAnimSite86 = createNode("HAnimSite");
HAnimSite86.name = "crotch";
HAnimSite86.DEF = "Joe_crotch";
HAnimSite86.translation = new SFVec3f(new float[0,0.8700000047683716,-0.02199999988079071]);
Shape Shape87 = createNode("Shape");
Shape87.USE = "sitebox";
HAnimSite86.children = new MFNode();

HAnimSite86.children[0] = Shape87;

HAnimSegment61.children[11] = HAnimSite86;

Transform Transform88 = createNode("Transform");
Transform88.translation = new SFVec3f(new float[0,0.9200000166893005,0.07999999821186066]);
Shape Shape89 = createNode("Shape");
Shape89.USE = "skinsphere";
Transform88.children = new MFNode();

Transform88.children[0] = Shape89;

HAnimSegment61.children[12] = Transform88;

Transform Transform90 = createNode("Transform");
Transform90.translation = new SFVec3f(new float[0,0.8700000047683716,-0.02199999988079071]);
Shape Shape91 = createNode("Shape");
Shape91.USE = "skinsphere";
Transform90.children = new MFNode();

Transform90.children[0] = Shape91;

HAnimSegment61.children[13] = Transform90;

HAnimJoint60.children = new MFNode();

HAnimJoint60.children[0] = HAnimSegment61;

HAnimJoint HAnimJoint92 = createNode("HAnimJoint");
HAnimJoint92.name = "l_hip";
HAnimJoint92.DEF = "Joe_l_hip";
HAnimJoint92.center = new SFVec3f(new float[0.10000000149011612,0.9200000166893005,0]);
HAnimJoint92.skinCoordIndex = new MFInt32(new int[89,90,94,95,96,97]);
HAnimJoint92.skinCoordWeight = new MFFloat(new float[0.6499999761581421,1,1,1,1,1]);
HAnimJoint92.translation = new SFVec3f(new float[0.10000000149011612,0.9200000166893005,0]);
HAnimJoint92.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint92.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment93 = createNode("HAnimSegment");
HAnimSegment93.name = "l_thigh";
HAnimSegment93.DEF = "Joe_l_thigh";
Shape Shape94 = createNode("Shape");
Shape94.USE = "jointbox";
HAnimSegment93.children = new MFNode();

HAnimSegment93.children[0] = Shape94;

Shape Shape95 = createNode("Shape");
IndexedLineSet IndexedLineSet96 = createNode("IndexedLineSet");
IndexedLineSet96.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate97 = createNode("Coordinate");
Coordinate97.point = new MFVec3f(new float[0.10000000149011612,0.9200000166893005,0,0.11500000208616257,0.4659999907016754,0]);
IndexedLineSet96.coord = Coordinate97;

Shape95.geometry = IndexedLineSet96;

Appearance Appearance98 = createNode("Appearance");
Appearance98.USE = "SegmentLine";
Shape95.appearance = Appearance98;

HAnimSegment93.children[1] = Shape95;

HAnimSite HAnimSite99 = createNode("HAnimSite");
HAnimSite99.name = "l_knee_crease";
HAnimSite99.DEF = "Joe_l_knee_crease";
HAnimSite99.translation = new SFVec3f(new float[0.11500000208616257,0.4659999907016754,-0.054999999701976776]);
Shape Shape100 = createNode("Shape");
Shape100.USE = "sitebox";
HAnimSite99.children = new MFNode();

HAnimSite99.children[0] = Shape100;

HAnimSegment93.children[2] = HAnimSite99;

HAnimSite HAnimSite101 = createNode("HAnimSite");
HAnimSite101.name = "l_femoral_lateral_epicn";
HAnimSite101.DEF = "Joe_l_femoral_lateral_epicn";
HAnimSite101.translation = new SFVec3f(new float[0.17000000178813934,0.4659999907016754,0]);
Shape Shape102 = createNode("Shape");
Shape102.USE = "sitebox";
HAnimSite101.children = new MFNode();

HAnimSite101.children[0] = Shape102;

HAnimSegment93.children[3] = HAnimSite101;

HAnimSite HAnimSite103 = createNode("HAnimSite");
HAnimSite103.name = "l_femoral_medial_epicn";
HAnimSite103.DEF = "Joe_l_femoral_medial_epicn";
HAnimSite103.translation = new SFVec3f(new float[0.05000000074505806,0.4659999907016754,0]);
Shape Shape104 = createNode("Shape");
Shape104.USE = "sitebox";
HAnimSite103.children = new MFNode();

HAnimSite103.children[0] = Shape104;

HAnimSegment93.children[4] = HAnimSite103;

Transform Transform105 = createNode("Transform");
Transform105.translation = new SFVec3f(new float[0.10000000149011612,0.8999999761581421,0.07750000059604645]);
Shape Shape106 = createNode("Shape");
Shape106.USE = "skinsphere";
Transform105.children = new MFNode();

Transform105.children[0] = Shape106;

HAnimSegment93.children[5] = Transform105;

Transform Transform107 = createNode("Transform");
Transform107.translation = new SFVec3f(new float[0.07900000363588333,0.9200000166893005,-0.14000000059604645]);
Shape Shape108 = createNode("Shape");
Shape108.USE = "skinsphere";
Transform107.children = new MFNode();

Transform107.children[0] = Shape108;

HAnimSegment93.children[6] = Transform107;

Transform Transform109 = createNode("Transform");
Transform109.translation = new SFVec3f(new float[0.17100000381469727,0.6499999761581421,0]);
Shape Shape110 = createNode("Shape");
Shape110.USE = "skinsphere";
Transform109.children = new MFNode();

Transform109.children[0] = Shape110;

HAnimSegment93.children[7] = Transform109;

Transform Transform111 = createNode("Transform");
Transform111.translation = new SFVec3f(new float[0.019999999552965164,0.6499999761581421,0]);
Shape Shape112 = createNode("Shape");
Shape112.USE = "skinsphere";
Transform111.children = new MFNode();

Transform111.children[0] = Shape112;

HAnimSegment93.children[8] = Transform111;

Transform Transform113 = createNode("Transform");
Transform113.translation = new SFVec3f(new float[0.10000000149011612,0.6499999761581421,-0.07999999821186066]);
Shape Shape114 = createNode("Shape");
Shape114.USE = "skinsphere";
Transform113.children = new MFNode();

Transform113.children[0] = Shape114;

HAnimSegment93.children[9] = Transform113;

Transform Transform115 = createNode("Transform");
Transform115.translation = new SFVec3f(new float[0.10000000149011612,0.6499999761581421,0.07000000029802322]);
Shape Shape116 = createNode("Shape");
Shape116.USE = "skinsphere";
Transform115.children = new MFNode();

Transform115.children[0] = Shape116;

HAnimSegment93.children[10] = Transform115;

HAnimJoint92.children = new MFNode();

HAnimJoint92.children[0] = HAnimSegment93;

HAnimJoint HAnimJoint117 = createNode("HAnimJoint");
HAnimJoint117.name = "l_knee";
HAnimJoint117.DEF = "Joe_l_knee";
HAnimJoint117.center = new SFVec3f(new float[0.11500000208616257,0.4659999907016754,0]);
HAnimJoint117.skinCoordIndex = new MFInt32(new int[334,335,336,337,338,339,340,341]);
HAnimJoint117.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint117.translation = new SFVec3f(new float[0.11500000208616257,0.4659999907016754,0]);
HAnimJoint117.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint117.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment118 = createNode("HAnimSegment");
HAnimSegment118.name = "l_calf";
HAnimSegment118.DEF = "Joe_l_calf";
Shape Shape119 = createNode("Shape");
Shape119.USE = "jointbox";
HAnimSegment118.children = new MFNode();

HAnimSegment118.children[0] = Shape119;

Shape Shape120 = createNode("Shape");
IndexedLineSet IndexedLineSet121 = createNode("IndexedLineSet");
IndexedLineSet121.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate122 = createNode("Coordinate");
Coordinate122.point = new MFVec3f(new float[0.11500000208616257,0.4659999907016754,0,0.10000000149011612,0.0689999982714653,0]);
IndexedLineSet121.coord = Coordinate122;

Shape120.geometry = IndexedLineSet121;

Appearance Appearance123 = createNode("Appearance");
Appearance123.USE = "SegmentLine";
Shape120.appearance = Appearance123;

HAnimSegment118.children[1] = Shape120;

HAnimSite HAnimSite124 = createNode("HAnimSite");
HAnimSite124.name = "l_lateral_malleolus";
HAnimSite124.DEF = "Joe_l_lateral_malleolus";
HAnimSite124.translation = new SFVec3f(new float[0.15000000596046448,0.07000000029802322,0]);
Shape Shape125 = createNode("Shape");
Shape125.USE = "sitebox";
HAnimSite124.children = new MFNode();

HAnimSite124.children[0] = Shape125;

HAnimSegment118.children[2] = HAnimSite124;

HAnimSite HAnimSite126 = createNode("HAnimSite");
HAnimSite126.name = "l_medial_malleolus";
HAnimSite126.DEF = "Joe_l_medial_malleolus";
HAnimSite126.translation = new SFVec3f(new float[0.08500000089406967,0.0860000029206276,0.012500000186264515]);
Shape Shape127 = createNode("Shape");
Shape127.USE = "sitebox";
HAnimSite126.children = new MFNode();

HAnimSite126.children[0] = Shape127;

HAnimSegment118.children[3] = HAnimSite126;

Transform Transform128 = createNode("Transform");
Transform128.translation = new SFVec3f(new float[0.11500000208616257,0.4659999907016754,0.05999999865889549]);
Shape Shape129 = createNode("Shape");
Shape129.USE = "skinsphere";
Transform128.children = new MFNode();

Transform128.children[0] = Shape129;

HAnimSegment118.children[4] = Transform128;

Transform Transform130 = createNode("Transform");
Transform130.translation = new SFVec3f(new float[0.11500000208616257,0.4659999907016754,-0.054999999701976776]);
Shape Shape131 = createNode("Shape");
Shape131.USE = "skinsphere";
Transform130.children = new MFNode();

Transform130.children[0] = Shape131;

HAnimSegment118.children[5] = Transform130;

Transform Transform132 = createNode("Transform");
Transform132.translation = new SFVec3f(new float[0.17000000178813934,0.4659999907016754,0]);
Shape Shape133 = createNode("Shape");
Shape133.USE = "skinsphere";
Transform132.children = new MFNode();

Transform132.children[0] = Shape133;

HAnimSegment118.children[6] = Transform132;

Transform Transform134 = createNode("Transform");
Transform134.translation = new SFVec3f(new float[0.05000000074505806,0.4659999907016754,0]);
Shape Shape135 = createNode("Shape");
Shape135.USE = "skinsphere";
Transform134.children = new MFNode();

Transform134.children[0] = Shape135;

HAnimSegment118.children[7] = Transform134;

Transform Transform136 = createNode("Transform");
Transform136.translation = new SFVec3f(new float[0.17000000178813934,0.30000001192092896,0]);
Shape Shape137 = createNode("Shape");
Shape137.USE = "skinsphere";
Transform136.children = new MFNode();

Transform136.children[0] = Shape137;

HAnimSegment118.children[8] = Transform136;

Transform Transform138 = createNode("Transform");
Transform138.translation = new SFVec3f(new float[0.05999999865889549,0.30000001192092896,0]);
Shape Shape139 = createNode("Shape");
Shape139.USE = "skinsphere";
Transform138.children = new MFNode();

Transform138.children[0] = Shape139;

HAnimSegment118.children[9] = Transform138;

Transform Transform140 = createNode("Transform");
Transform140.translation = new SFVec3f(new float[0.10000000149011612,0.30000001192092896,-0.05000000074505806]);
Shape Shape141 = createNode("Shape");
Shape141.USE = "skinsphere";
Transform140.children = new MFNode();

Transform140.children[0] = Shape141;

HAnimSegment118.children[10] = Transform140;

Transform Transform142 = createNode("Transform");
Transform142.translation = new SFVec3f(new float[0.10000000149011612,0.30000001192092896,0.05000000074505806]);
Shape Shape143 = createNode("Shape");
Shape143.USE = "skinsphere";
Transform142.children = new MFNode();

Transform142.children[0] = Shape143;

HAnimSegment118.children[11] = Transform142;

HAnimJoint117.children = new MFNode();

HAnimJoint117.children[0] = HAnimSegment118;

HAnimJoint HAnimJoint144 = createNode("HAnimJoint");
HAnimJoint144.name = "l_ankle";
HAnimJoint144.DEF = "Joe_l_ankle";
HAnimJoint144.center = new SFVec3f(new float[0.11500000208616257,0.0689999982714653,0]);
HAnimJoint144.skinCoordIndex = new MFInt32(new int[342,343,344,345]);
HAnimJoint144.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint144.translation = new SFVec3f(new float[0.11500000208616257,0.0689999982714653,0]);
HAnimJoint144.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint144.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment145 = createNode("HAnimSegment");
HAnimSegment145.name = "l_hindfoot";
HAnimSegment145.DEF = "Joe_l_hindfoot";
Shape Shape146 = createNode("Shape");
Shape146.USE = "jointbox";
HAnimSegment145.children = new MFNode();

HAnimSegment145.children[0] = Shape146;

Shape Shape147 = createNode("Shape");
IndexedLineSet IndexedLineSet148 = createNode("IndexedLineSet");
IndexedLineSet148.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate149 = createNode("Coordinate");
Coordinate149.point = new MFVec3f(new float[0.10000000149011612,0.0689999982714653,0,0.11500000208616257,0.03099999949336052,0.029999999329447746]);
IndexedLineSet148.coord = Coordinate149;

Shape147.geometry = IndexedLineSet148;

Appearance Appearance150 = createNode("Appearance");
Appearance150.USE = "SegmentLine";
Shape147.appearance = Appearance150;

HAnimSegment145.children[1] = Shape147;

HAnimSite HAnimSite151 = createNode("HAnimSite");
HAnimSite151.name = "l_sphyrion";
HAnimSite151.DEF = "Joe_l_sphyrion";
HAnimSite151.translation = new SFVec3f(new float[0.09000000357627869,0.0560000017285347,0.012500000186264515]);
Shape Shape152 = createNode("Shape");
Shape152.USE = "sitebox";
HAnimSite151.children = new MFNode();

HAnimSite151.children[0] = Shape152;

HAnimSegment145.children[2] = HAnimSite151;

HAnimSite HAnimSite153 = createNode("HAnimSite");
HAnimSite153.name = "l_calcaneous_post";
HAnimSite153.DEF = "Joe_l_calcaneous_post";
HAnimSite153.translation = new SFVec3f(new float[0.11500000208616257,0.03999999910593033,-0.054999999701976776]);
Shape Shape154 = createNode("Shape");
Shape154.USE = "sitebox";
HAnimSite153.children = new MFNode();

HAnimSite153.children[0] = Shape154;

HAnimSegment145.children[3] = HAnimSite153;

Transform Transform155 = createNode("Transform");
Transform155.translation = new SFVec3f(new float[0.15000000596046448,0.07000000029802322,0]);
Shape Shape156 = createNode("Shape");
Shape156.USE = "skinsphere";
Transform155.children = new MFNode();

Transform155.children[0] = Shape156;

HAnimSegment145.children[4] = Transform155;

Transform Transform157 = createNode("Transform");
Transform157.translation = new SFVec3f(new float[0.08500000089406967,0.0860000029206276,0.012500000186264515]);
Shape Shape158 = createNode("Shape");
Shape158.USE = "skinsphere";
Transform157.children = new MFNode();

Transform157.children[0] = Shape158;

HAnimSegment145.children[5] = Transform157;

Transform Transform159 = createNode("Transform");
Transform159.translation = new SFVec3f(new float[0.11500000208616257,0.0689999982714653,-0.04500000178813934]);
Shape Shape160 = createNode("Shape");
Shape160.USE = "skinsphere";
Transform159.children = new MFNode();

Transform159.children[0] = Shape160;

HAnimSegment145.children[6] = Transform159;

Transform Transform161 = createNode("Transform");
Transform161.translation = new SFVec3f(new float[0.11699999868869781,0.09749999642372131,0.061500001698732376]);
Shape Shape162 = createNode("Shape");
Shape162.USE = "skinsphere";
Transform161.children = new MFNode();

Transform161.children[0] = Shape162;

HAnimSegment145.children[7] = Transform161;

HAnimJoint144.children = new MFNode();

HAnimJoint144.children[0] = HAnimSegment145;

HAnimJoint HAnimJoint163 = createNode("HAnimJoint");
HAnimJoint163.name = "l_subtalar";
HAnimJoint163.DEF = "Joe_l_subtalar";
HAnimJoint163.center = new SFVec3f(new float[0.11500000208616257,0.03099999949336052,0.029999999329447746]);
HAnimJoint163.skinCoordIndex = new MFInt32(new int[346,347,348,71]);
HAnimJoint163.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint163.translation = new SFVec3f(new float[0.11500000208616257,0.03099999949336052,0.029999999329447746]);
HAnimJoint163.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint163.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment164 = createNode("HAnimSegment");
HAnimSegment164.name = "l_midproximal";
HAnimSegment164.DEF = "Joe_l_l_midproximal";
Shape Shape165 = createNode("Shape");
Shape165.USE = "jointbox";
HAnimSegment164.children = new MFNode();

HAnimSegment164.children[0] = Shape165;

Shape Shape166 = createNode("Shape");
IndexedLineSet IndexedLineSet167 = createNode("IndexedLineSet");
IndexedLineSet167.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate168 = createNode("Coordinate");
Coordinate168.point = new MFVec3f(new float[0.11500000208616257,0.03099999949336052,0.029999999329447746,0.11500000208616257,0.03700000047683716,0.09000000357627869]);
IndexedLineSet167.coord = Coordinate168;

Shape166.geometry = IndexedLineSet167;

Appearance Appearance169 = createNode("Appearance");
Appearance169.USE = "SegmentLine";
Shape166.appearance = Appearance169;

HAnimSegment164.children[1] = Shape166;

Transform Transform170 = createNode("Transform");
Transform170.translation = new SFVec3f(new float[0.13750000298023224,0.006000000052154064,-0.029999999329447746]);
Shape Shape171 = createNode("Shape");
Shape171.USE = "skinsphere";
Transform170.children = new MFNode();

Transform170.children[0] = Shape171;

HAnimSegment164.children[2] = Transform170;

Transform Transform172 = createNode("Transform");
Transform172.translation = new SFVec3f(new float[0.0949999988079071,0.006000000052154064,-0.029999999329447746]);
Shape Shape173 = createNode("Shape");
Shape173.USE = "skinsphere";
Transform172.children = new MFNode();

Transform172.children[0] = Shape173;

HAnimSegment164.children[3] = Transform172;

Transform Transform174 = createNode("Transform");
Transform174.translation = new SFVec3f(new float[0.11500000208616257,0.014999999664723873,-0.04500000178813934]);
Shape Shape175 = createNode("Shape");
Shape175.USE = "skinsphere";
Transform174.children = new MFNode();

Transform174.children[0] = Shape175;

HAnimSegment164.children[4] = Transform174;

HAnimJoint163.children = new MFNode();

HAnimJoint163.children[0] = HAnimSegment164;

HAnimJoint HAnimJoint176 = createNode("HAnimJoint");
HAnimJoint176.name = "l_midtarsal";
HAnimJoint176.DEF = "Joe_l_midtarsal";
HAnimJoint176.center = new SFVec3f(new float[0.11500000208616257,0.03700000047683716,0.09000000357627869]);
HAnimJoint176.skinCoordIndex = new MFInt32(new int[349,350,351,352]);
HAnimJoint176.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint176.translation = new SFVec3f(new float[0.11500000208616257,0.03700000047683716,0.09000000357627869]);
HAnimJoint176.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint176.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment177 = createNode("HAnimSegment");
HAnimSegment177.name = "l_middistal";
HAnimSegment177.DEF = "Joe_l_middistal";
Shape Shape178 = createNode("Shape");
Shape178.USE = "jointbox";
HAnimSegment177.children = new MFNode();

HAnimSegment177.children[0] = Shape178;

Shape Shape179 = createNode("Shape");
IndexedLineSet IndexedLineSet180 = createNode("IndexedLineSet");
IndexedLineSet180.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate181 = createNode("Coordinate");
Coordinate181.point = new MFVec3f(new float[0.11500000208616257,0.03700000047683716,0.09000000357627869,0.11500000208616257,0.019999999552965164,0.12200000137090683]);
IndexedLineSet180.coord = Coordinate181;

Shape179.geometry = IndexedLineSet180;

Appearance Appearance182 = createNode("Appearance");
Appearance182.USE = "SegmentLine";
Shape179.appearance = Appearance182;

HAnimSegment177.children[1] = Shape179;

HAnimSite HAnimSite183 = createNode("HAnimSite");
HAnimSite183.name = "l_metatarsal_pha1";
HAnimSite183.DEF = "Joe_l_metatarsal_pha1";
HAnimSite183.translation = new SFVec3f(new float[0.08699999749660492,0.009999999776482582,0.12200000137090683]);
Shape Shape184 = createNode("Shape");
Shape184.USE = "sitebox";
HAnimSite183.children = new MFNode();

HAnimSite183.children[0] = Shape184;

HAnimSegment177.children[2] = HAnimSite183;

Transform Transform185 = createNode("Transform");
Transform185.translation = new SFVec3f(new float[0.11500000208616257,0.05999999865889549,0.10000000149011612]);
Shape Shape186 = createNode("Shape");
Shape186.USE = "skinsphere";
Transform185.children = new MFNode();

Transform185.children[0] = Shape186;

HAnimSegment177.children[3] = Transform185;

Transform Transform187 = createNode("Transform");
Transform187.translation = new SFVec3f(new float[0.11500000208616257,0,0.07000000029802322]);
Shape Shape188 = createNode("Shape");
Shape188.USE = "skinsphere";
Transform187.children = new MFNode();

Transform187.children[0] = Shape188;

HAnimSegment177.children[4] = Transform187;

Transform Transform189 = createNode("Transform");
Transform189.translation = new SFVec3f(new float[0.16500000655651093,0,0.07000000029802322]);
Shape Shape190 = createNode("Shape");
Shape190.USE = "skinsphere";
Transform189.children = new MFNode();

Transform189.children[0] = Shape190;

HAnimSegment177.children[5] = Transform189;

Transform Transform191 = createNode("Transform");
Transform191.translation = new SFVec3f(new float[0.0949999988079071,0,0.07000000029802322]);
Shape Shape192 = createNode("Shape");
Shape192.USE = "skinsphere";
Transform191.children = new MFNode();

Transform191.children[0] = Shape192;

HAnimSegment177.children[6] = Transform191;

HAnimJoint176.children = new MFNode();

HAnimJoint176.children[0] = HAnimSegment177;

HAnimJoint HAnimJoint193 = createNode("HAnimJoint");
HAnimJoint193.name = "l_metatarsal";
HAnimJoint193.DEF = "Joe_l_metatarsal";
HAnimJoint193.center = new SFVec3f(new float[0.11500000208616257,0.019999999552965164,0.12200000137090683]);
HAnimJoint193.skinCoordIndex = new MFInt32(new int[353,354,355,356,357,358,359,360,361]);
HAnimJoint193.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint193.translation = new SFVec3f(new float[0.11500000208616257,0.019999999552965164,0.12999999523162842]);
HAnimJoint193.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint193.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment194 = createNode("HAnimSegment");
HAnimSegment194.name = "l_forefoot";
HAnimSegment194.DEF = "Joe_l_forefoot";
Shape Shape195 = createNode("Shape");
Shape195.USE = "jointbox";
HAnimSegment194.children = new MFNode();

HAnimSegment194.children[0] = Shape195;

Shape Shape196 = createNode("Shape");
IndexedLineSet IndexedLineSet197 = createNode("IndexedLineSet");
IndexedLineSet197.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate198 = createNode("Coordinate");
Coordinate198.point = new MFVec3f(new float[0.11500000208616257,0.019999999552965164,0.12200000137090683,0.13199999928474426,0.013000000268220901,0.1899999976158142]);
IndexedLineSet197.coord = Coordinate198;

Shape196.geometry = IndexedLineSet197;

Appearance Appearance199 = createNode("Appearance");
Appearance199.USE = "SegmentLine";
Shape196.appearance = Appearance199;

HAnimSegment194.children[1] = Shape196;

HAnimSite HAnimSite200 = createNode("HAnimSite");
HAnimSite200.name = "l_metatarsal_pha5";
HAnimSite200.DEF = "Joe_l_metatarsal_pha5";
HAnimSite200.translation = new SFVec3f(new float[0.16500000655651093,0.009999999776482582,0.11999999731779099]);
Shape Shape201 = createNode("Shape");
Shape201.USE = "sitebox";
HAnimSite200.children = new MFNode();

HAnimSite200.children[0] = Shape201;

HAnimSegment194.children[2] = HAnimSite200;

HAnimSite HAnimSite202 = createNode("HAnimSite");
HAnimSite202.name = "l_digit2";
HAnimSite202.DEF = "Joe_l_digit2";
HAnimSite202.translation = new SFVec3f(new float[0.10999999940395355,0.010999999940395355,0.1899999976158142]);
Shape Shape203 = createNode("Shape");
Shape203.USE = "sitebox";
HAnimSite202.children = new MFNode();

HAnimSite202.children[0] = Shape203;

HAnimSegment194.children[3] = HAnimSite202;

Transform Transform204 = createNode("Transform");
Transform204.translation = new SFVec3f(new float[0.11500000208616257,0.03999999910593033,0.12999999523162842]);
Shape Shape205 = createNode("Shape");
Shape205.USE = "skinsphere";
Transform204.children = new MFNode();

Transform204.children[0] = Shape205;

HAnimSegment194.children[4] = Transform204;

Transform Transform206 = createNode("Transform");
Transform206.translation = new SFVec3f(new float[0.125,0,0.11999999731779099]);
Shape Shape207 = createNode("Shape");
Shape207.USE = "skinsphere";
Transform206.children = new MFNode();

Transform206.children[0] = Shape207;

HAnimSegment194.children[5] = Transform206;

Transform Transform208 = createNode("Transform");
Transform208.translation = new SFVec3f(new float[0.16500000655651093,0,0.11999999731779099]);
Shape Shape209 = createNode("Shape");
Shape209.USE = "skinsphere";
Transform208.children = new MFNode();

Transform208.children[0] = Shape209;

HAnimSegment194.children[6] = Transform208;

Transform Transform210 = createNode("Transform");
Transform210.translation = new SFVec3f(new float[0.08699999749660492,0,0.12200000137090683]);
Shape Shape211 = createNode("Shape");
Shape211.USE = "skinsphere";
Transform210.children = new MFNode();

Transform210.children[0] = Shape211;

HAnimSegment194.children[7] = Transform210;

Transform Transform212 = createNode("Transform");
Transform212.translation = new SFVec3f(new float[0.09000000357627869,0.012000000104308128,0.18799999356269836]);
Shape Shape213 = createNode("Shape");
Shape213.USE = "skinsphere";
Transform212.children = new MFNode();

Transform212.children[0] = Shape213;

HAnimSegment194.children[8] = Transform212;

Transform Transform214 = createNode("Transform");
Transform214.translation = new SFVec3f(new float[0.10999999940395355,0.010999999940395355,0.1899999976158142]);
Shape Shape215 = createNode("Shape");
Shape215.USE = "skinsphere";
Transform214.children = new MFNode();

Transform214.children[0] = Shape215;

HAnimSegment194.children[9] = Transform214;

Transform Transform216 = createNode("Transform");
Transform216.translation = new SFVec3f(new float[0.12800000607967377,0.010999999940395355,0.1850000023841858]);
Shape Shape217 = createNode("Shape");
Shape217.USE = "skinsphere";
Transform216.children = new MFNode();

Transform216.children[0] = Shape217;

HAnimSegment194.children[10] = Transform216;

Transform Transform218 = createNode("Transform");
Transform218.translation = new SFVec3f(new float[0.1420000046491623,0.010999999940395355,0.17800000309944153]);
Shape Shape219 = createNode("Shape");
Shape219.USE = "skinsphere";
Transform218.children = new MFNode();

Transform218.children[0] = Shape219;

HAnimSegment194.children[11] = Transform218;

Transform Transform220 = createNode("Transform");
Transform220.translation = new SFVec3f(new float[0.15399999916553497,0.009999999776482582,0.1679999977350235]);
Shape Shape221 = createNode("Shape");
Shape221.USE = "skinsphere";
Transform220.children = new MFNode();

Transform220.children[0] = Shape221;

HAnimSegment194.children[12] = Transform220;

HAnimJoint193.children = new MFNode();

HAnimJoint193.children[0] = HAnimSegment194;

HAnimJoint176.children[1] = HAnimJoint193;

HAnimJoint163.children[1] = HAnimJoint176;

HAnimJoint144.children[1] = HAnimJoint163;

HAnimJoint117.children[1] = HAnimJoint144;

HAnimJoint92.children[1] = HAnimJoint117;

HAnimJoint60.children[1] = HAnimJoint92;

HAnimJoint HAnimJoint222 = createNode("HAnimJoint");
HAnimJoint222.name = "r_hip";
HAnimJoint222.DEF = "Joe_r_hip";
HAnimJoint222.center = new SFVec3f(new float[-0.10000000149011612,0.9200000166893005,0]);
HAnimJoint222.skinCoordIndex = new MFInt32(new int[91,92,98,99,100,101]);
HAnimJoint222.skinCoordWeight = new MFFloat(new float[0.6499999761581421,1,1,1,1,1]);
HAnimJoint222.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint222.llimit = new MFFloat(new float[0,0,0]);
Transform Transform223 = createNode("Transform");
Transform223.translation = new SFVec3f(new float[-0.10000000149011612,0.9200000166893005,0]);
Shape Shape224 = createNode("Shape");
Shape224.USE = "jointbox";
Transform223.children = new MFNode();

Transform223.children[0] = Shape224;

HAnimJoint222.children = new MFNode();

HAnimJoint222.children[0] = Transform223;

HAnimSegment HAnimSegment225 = createNode("HAnimSegment");
HAnimSegment225.name = "r_thigh";
HAnimSegment225.DEF = "Joe_r_thigh";
Shape Shape226 = createNode("Shape");
IndexedLineSet IndexedLineSet227 = createNode("IndexedLineSet");
IndexedLineSet227.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate228 = createNode("Coordinate");
Coordinate228.point = new MFVec3f(new float[-0.10000000149011612,0.9200000166893005,0,-0.10000000149011612,0.49129998683929443,0]);
IndexedLineSet227.coord = Coordinate228;

Shape226.geometry = IndexedLineSet227;

Appearance Appearance229 = createNode("Appearance");
Appearance229.USE = "SegmentLine";
Shape226.appearance = Appearance229;

HAnimSegment225.children = new MFNode();

HAnimSegment225.children[0] = Shape226;

HAnimSite HAnimSite230 = createNode("HAnimSite");
HAnimSite230.name = "r_knee_crease";
HAnimSite230.DEF = "Joe_r_knee_crease";
HAnimSite230.translation = new SFVec3f(new float[-0.11500000208616257,0.4659999907016754,-0.054999999701976776]);
Shape Shape231 = createNode("Shape");
Shape231.USE = "sitebox";
HAnimSite230.children = new MFNode();

HAnimSite230.children[0] = Shape231;

HAnimSegment225.children[1] = HAnimSite230;

HAnimSite HAnimSite232 = createNode("HAnimSite");
HAnimSite232.name = "r_femoral_lateral_epicn";
HAnimSite232.DEF = "Joe_r_femoral_lateral_epicn";
HAnimSite232.translation = new SFVec3f(new float[-0.17000000178813934,0.4659999907016754,0]);
Shape Shape233 = createNode("Shape");
Shape233.USE = "sitebox";
HAnimSite232.children = new MFNode();

HAnimSite232.children[0] = Shape233;

HAnimSegment225.children[2] = HAnimSite232;

HAnimSite HAnimSite234 = createNode("HAnimSite");
HAnimSite234.name = "r_femoral_medial_epicn";
HAnimSite234.DEF = "Joe_r_femoral_medial_epicn";
HAnimSite234.translation = new SFVec3f(new float[-0.05000000074505806,0.4659999907016754,0]);
Shape Shape235 = createNode("Shape");
Shape235.USE = "sitebox";
HAnimSite234.children = new MFNode();

HAnimSite234.children[0] = Shape235;

HAnimSegment225.children[3] = HAnimSite234;

Transform Transform236 = createNode("Transform");
Transform236.translation = new SFVec3f(new float[-0.07900000363588333,0.9200000166893005,-0.14000000059604645]);
Shape Shape237 = createNode("Shape");
Shape237.USE = "skinsphere";
Transform236.children = new MFNode();

Transform236.children[0] = Shape237;

HAnimSegment225.children[4] = Transform236;

Transform Transform238 = createNode("Transform");
Transform238.translation = new SFVec3f(new float[-0.10000000149011612,0.8999999761581421,0.07500000298023224]);
Shape Shape239 = createNode("Shape");
Shape239.USE = "skinsphere";
Transform238.children = new MFNode();

Transform238.children[0] = Shape239;

HAnimSegment225.children[5] = Transform238;

Transform Transform240 = createNode("Transform");
Transform240.translation = new SFVec3f(new float[-0.17100000381469727,0.6499999761581421,0]);
Shape Shape241 = createNode("Shape");
Shape241.USE = "skinsphere";
Transform240.children = new MFNode();

Transform240.children[0] = Shape241;

HAnimSegment225.children[6] = Transform240;

Transform Transform242 = createNode("Transform");
Transform242.translation = new SFVec3f(new float[-0.019999999552965164,0.6499999761581421,0]);
Shape Shape243 = createNode("Shape");
Shape243.USE = "skinsphere";
Transform242.children = new MFNode();

Transform242.children[0] = Shape243;

HAnimSegment225.children[7] = Transform242;

Transform Transform244 = createNode("Transform");
Transform244.translation = new SFVec3f(new float[-0.10000000149011612,0.6499999761581421,-0.07999999821186066]);
Shape Shape245 = createNode("Shape");
Shape245.USE = "skinsphere";
Transform244.children = new MFNode();

Transform244.children[0] = Shape245;

HAnimSegment225.children[8] = Transform244;

Transform Transform246 = createNode("Transform");
Transform246.translation = new SFVec3f(new float[-0.10000000149011612,0.6499999761581421,0.07000000029802322]);
Shape Shape247 = createNode("Shape");
Shape247.USE = "skinsphere";
Transform246.children = new MFNode();

Transform246.children[0] = Shape247;

HAnimSegment225.children[9] = Transform246;

HAnimJoint222.children[1] = HAnimSegment225;

HAnimJoint HAnimJoint248 = createNode("HAnimJoint");
HAnimJoint248.name = "r_knee";
HAnimJoint248.DEF = "Joe_r_knee";
HAnimJoint248.center = new SFVec3f(new float[-0.05000000074505806,0.4659999907016754,0]);
HAnimJoint248.skinCoordIndex = new MFInt32(new int[362,363,364,365,366,367,368,369]);
HAnimJoint248.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint248.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint248.llimit = new MFFloat(new float[0,0,0]);
Transform Transform249 = createNode("Transform");
Transform249.translation = new SFVec3f(new float[-0.10000000149011612,0.49129998683929443,0]);
Shape Shape250 = createNode("Shape");
Shape250.USE = "jointbox";
Transform249.children = new MFNode();

Transform249.children[0] = Shape250;

HAnimJoint248.children = new MFNode();

HAnimJoint248.children[0] = Transform249;

HAnimSegment HAnimSegment251 = createNode("HAnimSegment");
HAnimSegment251.name = "r_calf";
HAnimSegment251.DEF = "Joe_r_calf";
Shape Shape252 = createNode("Shape");
IndexedLineSet IndexedLineSet253 = createNode("IndexedLineSet");
IndexedLineSet253.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate254 = createNode("Coordinate");
Coordinate254.point = new MFVec3f(new float[-0.10000000149011612,0.49129998683929443,0,-0.10000000149011612,0.07119999825954437,0]);
IndexedLineSet253.coord = Coordinate254;

Shape252.geometry = IndexedLineSet253;

Appearance Appearance255 = createNode("Appearance");
Appearance255.USE = "SegmentLine";
Shape252.appearance = Appearance255;

HAnimSegment251.children = new MFNode();

HAnimSegment251.children[0] = Shape252;

HAnimSite HAnimSite256 = createNode("HAnimSite");
HAnimSite256.name = "r_lateral_malleolus";
HAnimSite256.DEF = "Joe_r_lateral_malleolus";
HAnimSite256.translation = new SFVec3f(new float[-0.15000000596046448,0.07000000029802322,0]);
Shape Shape257 = createNode("Shape");
Shape257.USE = "sitebox";
HAnimSite256.children = new MFNode();

HAnimSite256.children[0] = Shape257;

HAnimSegment251.children[1] = HAnimSite256;

HAnimSite HAnimSite258 = createNode("HAnimSite");
HAnimSite258.name = "r_medial_malleolus";
HAnimSite258.DEF = "Joe_r_medial_malleolus";
HAnimSite258.translation = new SFVec3f(new float[-0.08500000089406967,0.0860000029206276,0.012500000186264515]);
Shape Shape259 = createNode("Shape");
Shape259.USE = "sitebox";
HAnimSite258.children = new MFNode();

HAnimSite258.children[0] = Shape259;

HAnimSegment251.children[2] = HAnimSite258;

Transform Transform260 = createNode("Transform");
Transform260.translation = new SFVec3f(new float[-0.11500000208616257,0.4659999907016754,0.05999999865889549]);
Shape Shape261 = createNode("Shape");
Shape261.USE = "skinsphere";
Transform260.children = new MFNode();

Transform260.children[0] = Shape261;

HAnimSegment251.children[3] = Transform260;

Transform Transform262 = createNode("Transform");
Transform262.translation = new SFVec3f(new float[-0.11500000208616257,0.4659999907016754,-0.054999999701976776]);
Shape Shape263 = createNode("Shape");
Shape263.USE = "skinsphere";
Transform262.children = new MFNode();

Transform262.children[0] = Shape263;

HAnimSegment251.children[4] = Transform262;

Transform Transform264 = createNode("Transform");
Transform264.translation = new SFVec3f(new float[-0.17000000178813934,0.4659999907016754,0]);
Shape Shape265 = createNode("Shape");
Shape265.USE = "skinsphere";
Transform264.children = new MFNode();

Transform264.children[0] = Shape265;

HAnimSegment251.children[5] = Transform264;

Transform Transform266 = createNode("Transform");
Transform266.translation = new SFVec3f(new float[-0.05000000074505806,0.4659999907016754,0]);
Shape Shape267 = createNode("Shape");
Shape267.USE = "skinsphere";
Transform266.children = new MFNode();

Transform266.children[0] = Shape267;

HAnimSegment251.children[6] = Transform266;

Transform Transform268 = createNode("Transform");
Transform268.translation = new SFVec3f(new float[-0.17000000178813934,0.30000001192092896,0]);
Shape Shape269 = createNode("Shape");
Shape269.USE = "skinsphere";
Transform268.children = new MFNode();

Transform268.children[0] = Shape269;

HAnimSegment251.children[7] = Transform268;

Transform Transform270 = createNode("Transform");
Transform270.translation = new SFVec3f(new float[-0.05999999865889549,0.30000001192092896,0]);
Shape Shape271 = createNode("Shape");
Shape271.USE = "skinsphere";
Transform270.children = new MFNode();

Transform270.children[0] = Shape271;

HAnimSegment251.children[8] = Transform270;

Transform Transform272 = createNode("Transform");
Transform272.translation = new SFVec3f(new float[-0.10000000149011612,0.30000001192092896,-0.05000000074505806]);
Shape Shape273 = createNode("Shape");
Shape273.USE = "skinsphere";
Transform272.children = new MFNode();

Transform272.children[0] = Shape273;

HAnimSegment251.children[9] = Transform272;

Transform Transform274 = createNode("Transform");
Transform274.translation = new SFVec3f(new float[-0.10000000149011612,0.30000001192092896,0.05000000074505806]);
Shape Shape275 = createNode("Shape");
Shape275.USE = "skinsphere";
Transform274.children = new MFNode();

Transform274.children[0] = Shape275;

HAnimSegment251.children[10] = Transform274;

HAnimJoint248.children[1] = HAnimSegment251;

HAnimJoint HAnimJoint276 = createNode("HAnimJoint");
HAnimJoint276.name = "r_ankle";
HAnimJoint276.DEF = "Joe_r_ankle";
HAnimJoint276.center = new SFVec3f(new float[-0.11500000208616257,0.0689999982714653,0]);
HAnimJoint276.skinCoordIndex = new MFInt32(new int[370,371,372,373]);
HAnimJoint276.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint276.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint276.llimit = new MFFloat(new float[0,0,0]);
Transform Transform277 = createNode("Transform");
Transform277.translation = new SFVec3f(new float[-0.10000000149011612,0.07119999825954437,0]);
Shape Shape278 = createNode("Shape");
Shape278.USE = "jointbox";
Transform277.children = new MFNode();

Transform277.children[0] = Shape278;

HAnimJoint276.children = new MFNode();

HAnimJoint276.children[0] = Transform277;

HAnimSegment HAnimSegment279 = createNode("HAnimSegment");
HAnimSegment279.name = "r_hindfoot";
HAnimSegment279.DEF = "Joe_r_hindfoot";
Shape Shape280 = createNode("Shape");
IndexedLineSet IndexedLineSet281 = createNode("IndexedLineSet");
IndexedLineSet281.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate282 = createNode("Coordinate");
Coordinate282.point = new MFVec3f(new float[-0.10000000149011612,0.07119999825954437,0,-0.10000000149011612,0.014999999664723873,-0.009999999776482582]);
IndexedLineSet281.coord = Coordinate282;

Shape280.geometry = IndexedLineSet281;

Appearance Appearance283 = createNode("Appearance");
Appearance283.USE = "SegmentLine";
Shape280.appearance = Appearance283;

HAnimSegment279.children = new MFNode();

HAnimSegment279.children[0] = Shape280;

HAnimSite HAnimSite284 = createNode("HAnimSite");
HAnimSite284.name = "r_sphyrion";
HAnimSite284.DEF = "Joe_r_sphyrion";
HAnimSite284.translation = new SFVec3f(new float[-0.09000000357627869,0.0560000017285347,0.012500000186264515]);
Shape Shape285 = createNode("Shape");
Shape285.USE = "sitebox";
HAnimSite284.children = new MFNode();

HAnimSite284.children[0] = Shape285;

HAnimSegment279.children[1] = HAnimSite284;

HAnimSite HAnimSite286 = createNode("HAnimSite");
HAnimSite286.name = "r_calcaneous_post";
HAnimSite286.DEF = "Joe_r_calcaneous_post";
HAnimSite286.translation = new SFVec3f(new float[-0.11500000208616257,0.03999999910593033,-0.054999999701976776]);
Shape Shape287 = createNode("Shape");
Shape287.USE = "sitebox";
HAnimSite286.children = new MFNode();

HAnimSite286.children[0] = Shape287;

HAnimSegment279.children[2] = HAnimSite286;

Transform Transform288 = createNode("Transform");
Transform288.translation = new SFVec3f(new float[-0.15000000596046448,0.07000000029802322,0]);
Shape Shape289 = createNode("Shape");
Shape289.USE = "skinsphere";
Transform288.children = new MFNode();

Transform288.children[0] = Shape289;

HAnimSegment279.children[3] = Transform288;

Transform Transform290 = createNode("Transform");
Transform290.translation = new SFVec3f(new float[-0.08500000089406967,0.0860000029206276,0.012500000186264515]);
Shape Shape291 = createNode("Shape");
Shape291.USE = "skinsphere";
Transform290.children = new MFNode();

Transform290.children[0] = Shape291;

HAnimSegment279.children[4] = Transform290;

Transform Transform292 = createNode("Transform");
Transform292.translation = new SFVec3f(new float[-0.11500000208616257,0.0689999982714653,-0.04500000178813934]);
Shape Shape293 = createNode("Shape");
Shape293.USE = "skinsphere";
Transform292.children = new MFNode();

Transform292.children[0] = Shape293;

HAnimSegment279.children[5] = Transform292;

Transform Transform294 = createNode("Transform");
Transform294.translation = new SFVec3f(new float[-0.11699999868869781,0.09749999642372131,0.061500001698732376]);
Shape Shape295 = createNode("Shape");
Shape295.USE = "skinsphere";
Transform294.children = new MFNode();

Transform294.children[0] = Shape295;

HAnimSegment279.children[6] = Transform294;

HAnimJoint276.children[1] = HAnimSegment279;

HAnimJoint HAnimJoint296 = createNode("HAnimJoint");
HAnimJoint296.name = "r_subtalar";
HAnimJoint296.DEF = "Joe_r_subtalar";
HAnimJoint296.center = new SFVec3f(new float[-0.10000000149011612,0.014999999664723873,-0.009999999776482582]);
HAnimJoint296.skinCoordIndex = new MFInt32(new int[374,375,376]);
HAnimJoint296.skinCoordWeight = new MFFloat(new float[1,1,1]);
HAnimJoint296.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint296.llimit = new MFFloat(new float[0,0,0]);
Transform Transform297 = createNode("Transform");
Transform297.translation = new SFVec3f(new float[-0.10000000149011612,0.014999999664723873,-0.009999999776482582]);
Shape Shape298 = createNode("Shape");
Shape298.USE = "jointbox";
Transform297.children = new MFNode();

Transform297.children[0] = Shape298;

HAnimJoint296.children = new MFNode();

HAnimJoint296.children[0] = Transform297;

HAnimSegment HAnimSegment299 = createNode("HAnimSegment");
HAnimSegment299.name = "r_midproximal";
HAnimSegment299.DEF = "Joe_r_midproximal";
Shape Shape300 = createNode("Shape");
IndexedLineSet IndexedLineSet301 = createNode("IndexedLineSet");
IndexedLineSet301.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate302 = createNode("Coordinate");
Coordinate302.point = new MFVec3f(new float[-0.10000000149011612,0.014999999664723873,-0.009999999776482582,-0.10000000149011612,0.019999999552965164,0.07000000029802322]);
IndexedLineSet301.coord = Coordinate302;

Shape300.geometry = IndexedLineSet301;

Appearance Appearance303 = createNode("Appearance");
Appearance303.USE = "SegmentLine";
Shape300.appearance = Appearance303;

HAnimSegment299.children = new MFNode();

HAnimSegment299.children[0] = Shape300;

Transform Transform304 = createNode("Transform");
Transform304.translation = new SFVec3f(new float[-0.13750000298023224,0.006000000052154064,-0.029999999329447746]);
Shape Shape305 = createNode("Shape");
Shape305.USE = "skinsphere";
Transform304.children = new MFNode();

Transform304.children[0] = Shape305;

HAnimSegment299.children[1] = Transform304;

Transform Transform306 = createNode("Transform");
Transform306.translation = new SFVec3f(new float[-0.0949999988079071,0.006000000052154064,-0.029999999329447746]);
Shape Shape307 = createNode("Shape");
Shape307.USE = "skinsphere";
Transform306.children = new MFNode();

Transform306.children[0] = Shape307;

HAnimSegment299.children[2] = Transform306;

Transform Transform308 = createNode("Transform");
Transform308.translation = new SFVec3f(new float[-0.0949999988079071,0.006000000052154064,-0.029999999329447746]);
Shape Shape309 = createNode("Shape");
Shape309.USE = "skinsphere";
Transform308.children = new MFNode();

Transform308.children[0] = Shape309;

HAnimSegment299.children[3] = Transform308;

HAnimJoint296.children[1] = HAnimSegment299;

HAnimJoint HAnimJoint310 = createNode("HAnimJoint");
HAnimJoint310.name = "r_midtarsal";
HAnimJoint310.DEF = "Joe_r_midtarsal";
HAnimJoint310.center = new SFVec3f(new float[-0.11500000208616257,0.03700000047683716,0.09000000357627869]);
HAnimJoint310.skinCoordIndex = new MFInt32(new int[377,378,379,380]);
HAnimJoint310.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint310.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint310.llimit = new MFFloat(new float[0,0,0]);
Transform Transform311 = createNode("Transform");
Transform311.translation = new SFVec3f(new float[-0.10000000149011612,0.019999999552965164,0.07000000029802322]);
Shape Shape312 = createNode("Shape");
Shape312.USE = "jointbox";
Transform311.children = new MFNode();

Transform311.children[0] = Shape312;

HAnimJoint310.children = new MFNode();

HAnimJoint310.children[0] = Transform311;

HAnimSegment HAnimSegment313 = createNode("HAnimSegment");
HAnimSegment313.name = "r_middistal";
HAnimSegment313.DEF = "Joe_r_middistal";
Shape Shape314 = createNode("Shape");
IndexedLineSet IndexedLineSet315 = createNode("IndexedLineSet");
IndexedLineSet315.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate316 = createNode("Coordinate");
Coordinate316.point = new MFVec3f(new float[-0.10000000149011612,0.019999999552965164,0.07000000029802322,-0.10000000149011612,0.009999999776482582,0.14000000059604645]);
IndexedLineSet315.coord = Coordinate316;

Shape314.geometry = IndexedLineSet315;

Appearance Appearance317 = createNode("Appearance");
Appearance317.USE = "SegmentLine";
Shape314.appearance = Appearance317;

HAnimSegment313.children = new MFNode();

HAnimSegment313.children[0] = Shape314;

HAnimSite HAnimSite318 = createNode("HAnimSite");
HAnimSite318.name = "r_metatarsal_pha1";
HAnimSite318.DEF = "Joe_r_metatarsal_pha1";
HAnimSite318.translation = new SFVec3f(new float[-0.11500000208616257,0.019999999552965164,0.12200000137090683]);
Shape Shape319 = createNode("Shape");
Shape319.USE = "sitebox";
HAnimSite318.children = new MFNode();

HAnimSite318.children[0] = Shape319;

HAnimSegment313.children[1] = HAnimSite318;

Transform Transform320 = createNode("Transform");
Transform320.translation = new SFVec3f(new float[-0.11500000208616257,0.05999999865889549,0.10000000149011612]);
Shape Shape321 = createNode("Shape");
Shape321.USE = "skinsphere";
Transform320.children = new MFNode();

Transform320.children[0] = Shape321;

HAnimSegment313.children[2] = Transform320;

Transform Transform322 = createNode("Transform");
Transform322.translation = new SFVec3f(new float[-0.11500000208616257,0,0.07000000029802322]);
Shape Shape323 = createNode("Shape");
Shape323.USE = "skinsphere";
Transform322.children = new MFNode();

Transform322.children[0] = Shape323;

HAnimSegment313.children[3] = Transform322;

Transform Transform324 = createNode("Transform");
Transform324.translation = new SFVec3f(new float[-0.16500000655651093,0,0.07000000029802322]);
Shape Shape325 = createNode("Shape");
Shape325.USE = "skinsphere";
Transform324.children = new MFNode();

Transform324.children[0] = Shape325;

HAnimSegment313.children[4] = Transform324;

Transform Transform326 = createNode("Transform");
Transform326.translation = new SFVec3f(new float[-0.16500000655651093,0,0.07000000029802322]);
Shape Shape327 = createNode("Shape");
Shape327.USE = "skinsphere";
Transform326.children = new MFNode();

Transform326.children[0] = Shape327;

HAnimSegment313.children[5] = Transform326;

HAnimJoint310.children[1] = HAnimSegment313;

HAnimJoint HAnimJoint328 = createNode("HAnimJoint");
HAnimJoint328.name = "r_metatarsal";
HAnimJoint328.DEF = "Joe_r_metatarsal";
HAnimJoint328.center = new SFVec3f(new float[-0.10000000149011612,0.009999999776482582,0.14000000059604645]);
HAnimJoint328.skinCoordIndex = new MFInt32(new int[381,382,383,384,385,386,387,388,389]);
HAnimJoint328.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint328.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint328.llimit = new MFFloat(new float[0,0,0]);
Transform Transform329 = createNode("Transform");
Transform329.translation = new SFVec3f(new float[-0.10859999805688858,0.009999999776482582,0.14000000059604645]);
Shape Shape330 = createNode("Shape");
Shape330.USE = "jointbox";
Transform329.children = new MFNode();

Transform329.children[0] = Shape330;

HAnimJoint328.children = new MFNode();

HAnimJoint328.children[0] = Transform329;

HAnimSegment HAnimSegment331 = createNode("HAnimSegment");
HAnimSegment331.name = "r_forefoot";
HAnimSegment331.DEF = "Joe_r_forefoot";
Shape Shape332 = createNode("Shape");
IndexedLineSet IndexedLineSet333 = createNode("IndexedLineSet");
IndexedLineSet333.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate334 = createNode("Coordinate");
Coordinate334.point = new MFVec3f(new float[-0.10000000149011612,0.009999999776482582,0.14000000059604645,-0.10429999977350235,0.0015999999595806003,0.20000000298023224]);
IndexedLineSet333.coord = Coordinate334;

Shape332.geometry = IndexedLineSet333;

Appearance Appearance335 = createNode("Appearance");
Appearance335.USE = "SegmentLine";
Shape332.appearance = Appearance335;

HAnimSegment331.children = new MFNode();

HAnimSegment331.children[0] = Shape332;

HAnimSite HAnimSite336 = createNode("HAnimSite");
HAnimSite336.name = "r_metatarsal_pha5";
HAnimSite336.DEF = "Joe_r_metatarsal_pha5";
HAnimSite336.translation = new SFVec3f(new float[-0.16500000655651093,0.009999999776482582,0.11999999731779099]);
Shape Shape337 = createNode("Shape");
Shape337.USE = "sitebox";
HAnimSite336.children = new MFNode();

HAnimSite336.children[0] = Shape337;

HAnimSegment331.children[1] = HAnimSite336;

HAnimSite HAnimSite338 = createNode("HAnimSite");
HAnimSite338.name = "r_digit2";
HAnimSite338.DEF = "Joe_r_digit2";
HAnimSite338.translation = new SFVec3f(new float[-0.10999999940395355,0.010999999940395355,0.1899999976158142]);
Shape Shape339 = createNode("Shape");
Shape339.USE = "sitebox";
HAnimSite338.children = new MFNode();

HAnimSite338.children[0] = Shape339;

HAnimSegment331.children[2] = HAnimSite338;

Transform Transform340 = createNode("Transform");
Transform340.translation = new SFVec3f(new float[-0.11500000208616257,0.03999999910593033,0.12999999523162842]);
Shape Shape341 = createNode("Shape");
Shape341.USE = "skinsphere";
Transform340.children = new MFNode();

Transform340.children[0] = Shape341;

HAnimSegment331.children[3] = Transform340;

Transform Transform342 = createNode("Transform");
Transform342.translation = new SFVec3f(new float[-0.125,0,0.11999999731779099]);
Shape Shape343 = createNode("Shape");
Shape343.USE = "skinsphere";
Transform342.children = new MFNode();

Transform342.children[0] = Shape343;

HAnimSegment331.children[4] = Transform342;

Transform Transform344 = createNode("Transform");
Transform344.translation = new SFVec3f(new float[-0.16500000655651093,0,0.11999999731779099]);
Shape Shape345 = createNode("Shape");
Shape345.USE = "skinsphere";
Transform344.children = new MFNode();

Transform344.children[0] = Shape345;

HAnimSegment331.children[5] = Transform344;

Transform Transform346 = createNode("Transform");
Transform346.translation = new SFVec3f(new float[-0.08699999749660492,0,0.12200000137090683]);
Shape Shape347 = createNode("Shape");
Shape347.USE = "skinsphere";
Transform346.children = new MFNode();

Transform346.children[0] = Shape347;

HAnimSegment331.children[6] = Transform346;

Transform Transform348 = createNode("Transform");
Transform348.translation = new SFVec3f(new float[-0.09000000357627869,0.012000000104308128,0.18799999356269836]);
Shape Shape349 = createNode("Shape");
Shape349.USE = "skinsphere";
Transform348.children = new MFNode();

Transform348.children[0] = Shape349;

HAnimSegment331.children[7] = Transform348;

Transform Transform350 = createNode("Transform");
Transform350.translation = new SFVec3f(new float[-0.10999999940395355,0.010999999940395355,0.1899999976158142]);
Shape Shape351 = createNode("Shape");
Shape351.USE = "skinsphere";
Transform350.children = new MFNode();

Transform350.children[0] = Shape351;

HAnimSegment331.children[8] = Transform350;

Transform Transform352 = createNode("Transform");
Transform352.translation = new SFVec3f(new float[-0.12800000607967377,0.010999999940395355,0.1850000023841858]);
Shape Shape353 = createNode("Shape");
Shape353.USE = "skinsphere";
Transform352.children = new MFNode();

Transform352.children[0] = Shape353;

HAnimSegment331.children[9] = Transform352;

Transform Transform354 = createNode("Transform");
Transform354.translation = new SFVec3f(new float[-0.1420000046491623,0.010999999940395355,0.17800000309944153]);
Shape Shape355 = createNode("Shape");
Shape355.USE = "skinsphere";
Transform354.children = new MFNode();

Transform354.children[0] = Shape355;

HAnimSegment331.children[10] = Transform354;

Transform Transform356 = createNode("Transform");
Transform356.translation = new SFVec3f(new float[-0.15399999916553497,0.009999999776482582,0.1679999977350235]);
Shape Shape357 = createNode("Shape");
Shape357.USE = "skinsphere";
Transform356.children = new MFNode();

Transform356.children[0] = Shape357;

HAnimSegment331.children[11] = Transform356;

HAnimJoint328.children[1] = HAnimSegment331;

HAnimJoint310.children[2] = HAnimJoint328;

HAnimJoint296.children[2] = HAnimJoint310;

HAnimJoint276.children[2] = HAnimJoint296;

HAnimJoint248.children[2] = HAnimJoint276;

HAnimJoint222.children[2] = HAnimJoint248;

HAnimJoint60.children[2] = HAnimJoint222;

HAnimJoint53.children[1] = HAnimJoint60;

HAnimJoint HAnimJoint358 = createNode("HAnimJoint");
HAnimJoint358.name = "vl5";
HAnimJoint358.DEF = "Joe_vl5";
HAnimJoint358.center = new SFVec3f(new float[0,1.0449999570846558,-0.0949999988079071]);
HAnimJoint358.skinCoordIndex = new MFInt32(new int[28,76]);
HAnimJoint358.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint358.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint358.llimit = new MFFloat(new float[0,0,0]);
Transform Transform359 = createNode("Transform");
Transform359.translation = new SFVec3f(new float[0,1.0449999570846558,-0.0949999988079071]);
Shape Shape360 = createNode("Shape");
Shape360.USE = "jointbox";
Transform359.children = new MFNode();

Transform359.children[0] = Shape360;

HAnimJoint358.children = new MFNode();

HAnimJoint358.children[0] = Transform359;

HAnimSegment HAnimSegment361 = createNode("HAnimSegment");
HAnimSegment361.name = "toPelvis";
HAnimSegment361.DEF = "Joe_toPelvisMarker";
Shape Shape362 = createNode("Shape");
IndexedLineSet IndexedLineSet363 = createNode("IndexedLineSet");
IndexedLineSet363.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate364 = createNode("Coordinate");
Coordinate364.point = new MFVec3f(new float[0,1.0449999570846558,-0.0949999988079071,0,0.914900004863739,0.0015999999595806003]);
IndexedLineSet363.coord = Coordinate364;

Shape362.geometry = IndexedLineSet363;

Appearance Appearance365 = createNode("Appearance");
Appearance365.USE = "SegmentLine";
Shape362.appearance = Appearance365;

HAnimSegment361.children = new MFNode();

HAnimSegment361.children[0] = Shape362;

HAnimJoint358.children[1] = HAnimSegment361;

HAnimSegment HAnimSegment366 = createNode("HAnimSegment");
HAnimSegment366.name = "l5";
HAnimSegment366.DEF = "Joe_l5";
Shape Shape367 = createNode("Shape");
IndexedLineSet IndexedLineSet368 = createNode("IndexedLineSet");
IndexedLineSet368.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate369 = createNode("Coordinate");
Coordinate369.point = new MFVec3f(new float[0,1.0449999570846558,-0.0949999988079071,0,1.0679999589920044,-0.08500000089406967]);
IndexedLineSet368.coord = Coordinate369;

Shape367.geometry = IndexedLineSet368;

Appearance Appearance370 = createNode("Appearance");
Appearance370.USE = "SegmentLine";
Shape367.appearance = Appearance370;

HAnimSegment366.children = new MFNode();

HAnimSegment366.children[0] = Shape367;

HAnimSite HAnimSite371 = createNode("HAnimSite");
HAnimSite371.name = "waist_preferred_post";
HAnimSite371.DEF = "Joe_waist_preferred_post";
HAnimSite371.translation = new SFVec3f(new float[0,1.0915000438690186,-0.10909999907016754]);
Shape Shape372 = createNode("Shape");
Shape372.USE = "sitebox";
HAnimSite371.children = new MFNode();

HAnimSite371.children[0] = Shape372;

HAnimSegment366.children[1] = HAnimSite371;

HAnimSite HAnimSite373 = createNode("HAnimSite");
HAnimSite373.name = "navel";
HAnimSite373.DEF = "Joe_navel";
HAnimSite373.translation = new SFVec3f(new float[0,1.0722500085830688,0.09000000357627869]);
Shape Shape374 = createNode("Shape");
Shape374.USE = "sitebox";
HAnimSite373.children = new MFNode();

HAnimSite373.children[0] = Shape374;

HAnimSegment366.children[2] = HAnimSite373;

HAnimJoint358.children[2] = HAnimSegment366;

HAnimJoint HAnimJoint375 = createNode("HAnimJoint");
HAnimJoint375.name = "vl4";
HAnimJoint375.DEF = "Joe_vl4";
HAnimJoint375.center = new SFVec3f(new float[0,1.0679999589920044,-0.08500000089406967]);
HAnimJoint375.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint375.llimit = new MFFloat(new float[0,0,0]);
Transform Transform376 = createNode("Transform");
Transform376.translation = new SFVec3f(new float[0,1.0679999589920044,-0.08500000089406967]);
Shape Shape377 = createNode("Shape");
Shape377.USE = "jointbox";
Transform376.children = new MFNode();

Transform376.children[0] = Shape377;

HAnimJoint375.children = new MFNode();

HAnimJoint375.children[0] = Transform376;

HAnimSegment HAnimSegment378 = createNode("HAnimSegment");
HAnimSegment378.name = "l4";
HAnimSegment378.DEF = "Joe_l4";
Shape Shape379 = createNode("Shape");
IndexedLineSet IndexedLineSet380 = createNode("IndexedLineSet");
IndexedLineSet380.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate381 = createNode("Coordinate");
Coordinate381.point = new MFVec3f(new float[0,1.0679999589920044,-0.08500000089406967,0,1.0920000076293945,-0.07249999791383743]);
IndexedLineSet380.coord = Coordinate381;

Shape379.geometry = IndexedLineSet380;

Appearance Appearance382 = createNode("Appearance");
Appearance382.USE = "SegmentLine";
Shape379.appearance = Appearance382;

HAnimSegment378.children = new MFNode();

HAnimSegment378.children[0] = Shape379;

HAnimJoint375.children[1] = HAnimSegment378;

HAnimJoint HAnimJoint383 = createNode("HAnimJoint");
HAnimJoint383.name = "vl3";
HAnimJoint383.DEF = "Joe_vl3";
HAnimJoint383.center = new SFVec3f(new float[0,1.0920000076293945,-0.07249999791383743]);
HAnimJoint383.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint383.llimit = new MFFloat(new float[0,0,0]);
Transform Transform384 = createNode("Transform");
Transform384.translation = new SFVec3f(new float[0,1.0920000076293945,-0.07249999791383743]);
Shape Shape385 = createNode("Shape");
Shape385.USE = "jointbox";
Transform384.children = new MFNode();

Transform384.children[0] = Shape385;

HAnimJoint383.children = new MFNode();

HAnimJoint383.children[0] = Transform384;

HAnimSegment HAnimSegment386 = createNode("HAnimSegment");
HAnimSegment386.name = "l3";
HAnimSegment386.DEF = "Joe_l3";
Shape Shape387 = createNode("Shape");
IndexedLineSet IndexedLineSet388 = createNode("IndexedLineSet");
IndexedLineSet388.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate389 = createNode("Coordinate");
Coordinate389.point = new MFVec3f(new float[0,1.0920000076293945,-0.07249999791383743,0,1.1200000047683716,-0.06499999761581421]);
IndexedLineSet388.coord = Coordinate389;

Shape387.geometry = IndexedLineSet388;

Appearance Appearance390 = createNode("Appearance");
Appearance390.USE = "SegmentLine";
Shape387.appearance = Appearance390;

HAnimSegment386.children = new MFNode();

HAnimSegment386.children[0] = Shape387;

HAnimJoint383.children[1] = HAnimSegment386;

HAnimJoint HAnimJoint391 = createNode("HAnimJoint");
HAnimJoint391.name = "vl2";
HAnimJoint391.DEF = "Joe_vl2";
HAnimJoint391.center = new SFVec3f(new float[0,1.1200000047683716,-0.06499999761581421]);
HAnimJoint391.skinCoordIndex = new MFInt32(new int[16,18,25,83,84,85,86,87,88]);
HAnimJoint391.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,0.699999988079071,1,0.800000011920929]);
HAnimJoint391.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint391.llimit = new MFFloat(new float[0,0,0]);
Transform Transform392 = createNode("Transform");
Transform392.translation = new SFVec3f(new float[0,1.1200000047683716,-0.06499999761581421]);
Shape Shape393 = createNode("Shape");
Shape393.USE = "jointbox";
Transform392.children = new MFNode();

Transform392.children[0] = Shape393;

HAnimJoint391.children = new MFNode();

HAnimJoint391.children[0] = Transform392;

HAnimSegment HAnimSegment394 = createNode("HAnimSegment");
HAnimSegment394.name = "l2";
HAnimSegment394.DEF = "Joe_l2";
Shape Shape395 = createNode("Shape");
IndexedLineSet IndexedLineSet396 = createNode("IndexedLineSet");
IndexedLineSet396.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate397 = createNode("Coordinate");
Coordinate397.point = new MFVec3f(new float[0,1.1200000047683716,-0.06499999761581421,0,1.145900011062622,-0.0625]);
IndexedLineSet396.coord = Coordinate397;

Shape395.geometry = IndexedLineSet396;

Appearance Appearance398 = createNode("Appearance");
Appearance398.USE = "SegmentLine";
Shape395.appearance = Appearance398;

HAnimSegment394.children = new MFNode();

HAnimSegment394.children[0] = Shape395;

HAnimSite HAnimSite399 = createNode("HAnimSite");
HAnimSite399.name = "r_rib10";
HAnimSite399.DEF = "Joe_r_rib10";
HAnimSite399.translation = new SFVec3f(new float[-0.08699999749660492,1.190000057220459,0.09000000357627869]);
Shape Shape400 = createNode("Shape");
Shape400.USE = "sitebox";
HAnimSite399.children = new MFNode();

HAnimSite399.children[0] = Shape400;

HAnimSegment394.children[1] = HAnimSite399;

HAnimSite HAnimSite401 = createNode("HAnimSite");
HAnimSite401.name = "l_rib10";
HAnimSite401.DEF = "Joe_l_rib10";
HAnimSite401.translation = new SFVec3f(new float[0.08699999749660492,1.190000057220459,0.09000000357627869]);
Shape Shape402 = createNode("Shape");
Shape402.USE = "sitebox";
HAnimSite401.children = new MFNode();

HAnimSite401.children[0] = Shape402;

HAnimSegment394.children[2] = HAnimSite401;

HAnimSite HAnimSite403 = createNode("HAnimSite");
HAnimSite403.name = "rib10_midspine";
HAnimSite403.DEF = "Joe_rib10_midspine";
HAnimSite403.translation = new SFVec3f(new float[0,1.1907999515533447,-0.11129999905824661]);
Shape Shape404 = createNode("Shape");
Shape404.USE = "sitebox";
HAnimSite403.children = new MFNode();

HAnimSite403.children[0] = Shape404;

HAnimSegment394.children[3] = HAnimSite403;

Transform Transform405 = createNode("Transform");
Transform405.translation = new SFVec3f(new float[-0.08699999749660492,1.190000057220459,-0.09000000357627869]);
Shape Shape406 = createNode("Shape");
Shape406.USE = "skinsphere";
Transform405.children = new MFNode();

Transform405.children[0] = Shape406;

HAnimSegment394.children[4] = Transform405;

Transform Transform407 = createNode("Transform");
Transform407.translation = new SFVec3f(new float[0.08699999749660492,1.190000057220459,-0.09000000357627869]);
Shape Shape408 = createNode("Shape");
Shape408.USE = "skinsphere";
Transform407.children = new MFNode();

Transform407.children[0] = Shape408;

HAnimSegment394.children[5] = Transform407;

Transform Transform409 = createNode("Transform");
Transform409.translation = new SFVec3f(new float[0.1720000058412552,1.3200000524520874,-0.029999999329447746]);
Shape Shape410 = createNode("Shape");
Shape410.USE = "skinsphere";
Transform409.children = new MFNode();

Transform409.children[0] = Shape410;

HAnimSegment394.children[6] = Transform409;

Transform Transform411 = createNode("Transform");
Transform411.translation = new SFVec3f(new float[-0.1720000058412552,1.3200000524520874,-0.029999999329447746]);
Shape Shape412 = createNode("Shape");
Shape412.USE = "skinsphere";
Transform411.children = new MFNode();

Transform411.children[0] = Shape412;

HAnimSegment394.children[7] = Transform411;

Transform Transform413 = createNode("Transform");
Transform413.translation = new SFVec3f(new float[0.15000000596046448,1.2300000190734863,-0.014999999664723873]);
Shape Shape414 = createNode("Shape");
Shape414.USE = "skinsphere";
Transform413.children = new MFNode();

Transform413.children[0] = Shape414;

HAnimSegment394.children[8] = Transform413;

Transform Transform415 = createNode("Transform");
Transform415.translation = new SFVec3f(new float[-0.15000000596046448,1.2300000190734863,-0.014999999664723873]);
Shape Shape416 = createNode("Shape");
Shape416.USE = "skinsphere";
Transform415.children = new MFNode();

Transform415.children[0] = Shape416;

HAnimSegment394.children[9] = Transform415;

HAnimJoint391.children[1] = HAnimSegment394;

HAnimJoint HAnimJoint417 = createNode("HAnimJoint");
HAnimJoint417.name = "vl1";
HAnimJoint417.DEF = "Joe_vl1";
HAnimJoint417.center = new SFVec3f(new float[0,1.145900011062622,-0.0625]);
HAnimJoint417.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint417.llimit = new MFFloat(new float[0,0,0]);
Transform Transform418 = createNode("Transform");
Transform418.translation = new SFVec3f(new float[0,1.145900011062622,-0.0625]);
Shape Shape419 = createNode("Shape");
Shape419.USE = "jointbox";
Transform418.children = new MFNode();

Transform418.children[0] = Shape419;

HAnimJoint417.children = new MFNode();

HAnimJoint417.children[0] = Transform418;

HAnimSegment HAnimSegment420 = createNode("HAnimSegment");
HAnimSegment420.name = "l1";
HAnimSegment420.DEF = "Joe_l1";
Shape Shape421 = createNode("Shape");
IndexedLineSet IndexedLineSet422 = createNode("IndexedLineSet");
IndexedLineSet422.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate423 = createNode("Coordinate");
Coordinate423.point = new MFVec3f(new float[0,1.145900011062622,-0.0625,0,1.1790000200271606,-0.06800000369548798]);
IndexedLineSet422.coord = Coordinate423;

Shape421.geometry = IndexedLineSet422;

Appearance Appearance424 = createNode("Appearance");
Appearance424.USE = "SegmentLine";
Shape421.appearance = Appearance424;

HAnimSegment420.children = new MFNode();

HAnimSegment420.children[0] = Shape421;

HAnimJoint417.children[1] = HAnimSegment420;

HAnimJoint HAnimJoint425 = createNode("HAnimJoint");
HAnimJoint425.name = "vt12";
HAnimJoint425.DEF = "Joe_vt12";
HAnimJoint425.center = new SFVec3f(new float[0,1.1790000200271606,-0.06800000369548798]);
HAnimJoint425.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint425.llimit = new MFFloat(new float[0,0,0]);
Transform Transform426 = createNode("Transform");
Transform426.translation = new SFVec3f(new float[0,1.1790000200271606,-0.06800000369548798]);
Shape Shape427 = createNode("Shape");
Shape427.USE = "jointbox";
Transform426.children = new MFNode();

Transform426.children[0] = Shape427;

HAnimJoint425.children = new MFNode();

HAnimJoint425.children[0] = Transform426;

HAnimSegment HAnimSegment428 = createNode("HAnimSegment");
HAnimSegment428.name = "t12";
HAnimSegment428.DEF = "Joe_t12";
Shape Shape429 = createNode("Shape");
IndexedLineSet IndexedLineSet430 = createNode("IndexedLineSet");
IndexedLineSet430.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate431 = createNode("Coordinate");
Coordinate431.point = new MFVec3f(new float[0,1.1790000200271606,-0.06800000369548798,0,1.2419999837875366,-0.09000000357627869]);
IndexedLineSet430.coord = Coordinate431;

Shape429.geometry = IndexedLineSet430;

Appearance Appearance432 = createNode("Appearance");
Appearance432.USE = "SegmentLine";
Shape429.appearance = Appearance432;

HAnimSegment428.children = new MFNode();

HAnimSegment428.children[0] = Shape429;

HAnimJoint425.children[1] = HAnimSegment428;

HAnimJoint HAnimJoint433 = createNode("HAnimJoint");
HAnimJoint433.name = "vt11";
HAnimJoint433.DEF = "Joe_vt11";
HAnimJoint433.center = new SFVec3f(new float[0,1.267899990081787,-0.08100000023841858]);
HAnimJoint433.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint433.llimit = new MFFloat(new float[0,0,0]);
Transform Transform434 = createNode("Transform");
Transform434.translation = new SFVec3f(new float[0,1.2144999504089355,-0.0754999965429306]);
Shape Shape435 = createNode("Shape");
Shape435.USE = "jointbox";
Transform434.children = new MFNode();

Transform434.children[0] = Shape435;

HAnimJoint433.children = new MFNode();

HAnimJoint433.children[0] = Transform434;

HAnimSegment HAnimSegment436 = createNode("HAnimSegment");
HAnimSegment436.name = "t11";
HAnimSegment436.DEF = "Joe_t11";
Shape Shape437 = createNode("Shape");
IndexedLineSet IndexedLineSet438 = createNode("IndexedLineSet");
IndexedLineSet438.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate439 = createNode("Coordinate");
Coordinate439.point = new MFVec3f(new float[0,1.2144999504089355,-0.0754999965429306,0,1.2419999837875366,-0.09000000357627869]);
IndexedLineSet438.coord = Coordinate439;

Shape437.geometry = IndexedLineSet438;

Appearance Appearance440 = createNode("Appearance");
Appearance440.USE = "SegmentLine";
Shape437.appearance = Appearance440;

HAnimSegment436.children = new MFNode();

HAnimSegment436.children[0] = Shape437;

HAnimJoint433.children[1] = HAnimSegment436;

HAnimJoint HAnimJoint441 = createNode("HAnimJoint");
HAnimJoint441.name = "vt10";
HAnimJoint441.DEF = "Joe_vt10";
HAnimJoint441.center = new SFVec3f(new float[0,1.2419999837875366,-0.09000000357627869]);
HAnimJoint441.skinCoordIndex = new MFInt32(new int[15]);
HAnimJoint441.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint441.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint441.llimit = new MFFloat(new float[0,0,0]);
Transform Transform442 = createNode("Transform");
Transform442.translation = new SFVec3f(new float[0,1.2419999837875366,-0.09000000357627869]);
Shape Shape443 = createNode("Shape");
Shape443.USE = "jointbox";
Transform442.children = new MFNode();

Transform442.children[0] = Shape443;

HAnimJoint441.children = new MFNode();

HAnimJoint441.children[0] = Transform442;

HAnimSegment HAnimSegment444 = createNode("HAnimSegment");
HAnimSegment444.name = "t10";
HAnimSegment444.DEF = "Joe_t10";
Shape Shape445 = createNode("Shape");
IndexedLineSet IndexedLineSet446 = createNode("IndexedLineSet");
IndexedLineSet446.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate447 = createNode("Coordinate");
Coordinate447.point = new MFVec3f(new float[0,1.2419999837875366,-0.09000000357627869,0,1.2680000066757202,-0.10000000149011612]);
IndexedLineSet446.coord = Coordinate447;

Shape445.geometry = IndexedLineSet446;

Appearance Appearance448 = createNode("Appearance");
Appearance448.USE = "SegmentLine";
Shape445.appearance = Appearance448;

HAnimSegment444.children = new MFNode();

HAnimSegment444.children[0] = Shape445;

HAnimSite HAnimSite449 = createNode("HAnimSite");
HAnimSite449.name = "substernale";
HAnimSite449.DEF = "Joe_substernale";
HAnimSite449.translation = new SFVec3f(new float[0,1.25,0.11299999803304672]);
Shape Shape450 = createNode("Shape");
Shape450.USE = "sitebox";
HAnimSite449.children = new MFNode();

HAnimSite449.children[0] = Shape450;

HAnimSegment444.children[1] = HAnimSite449;

HAnimJoint441.children[1] = HAnimSegment444;

HAnimJoint HAnimJoint451 = createNode("HAnimJoint");
HAnimJoint451.name = "vt9";
HAnimJoint451.DEF = "Joe_vt9";
HAnimJoint451.center = new SFVec3f(new float[0,1.2680000066757202,-0.10000000149011612]);
HAnimJoint451.skinCoordIndex = new MFInt32(new int[13,14]);
HAnimJoint451.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint451.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint451.llimit = new MFFloat(new float[0,0,0]);
Transform Transform452 = createNode("Transform");
Transform452.translation = new SFVec3f(new float[0,1.2680000066757202,-0.10000000149011612]);
Shape Shape453 = createNode("Shape");
Shape453.USE = "jointbox";
Transform452.children = new MFNode();

Transform452.children[0] = Shape453;

HAnimJoint451.children = new MFNode();

HAnimJoint451.children[0] = Transform452;

HAnimSegment HAnimSegment454 = createNode("HAnimSegment");
HAnimSegment454.name = "t9";
HAnimSegment454.DEF = "Joe_t9";
Shape Shape455 = createNode("Shape");
IndexedLineSet IndexedLineSet456 = createNode("IndexedLineSet");
IndexedLineSet456.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate457 = createNode("Coordinate");
Coordinate457.point = new MFVec3f(new float[0,1.2680000066757202,-0.10000000149011612,0,1.2940000295639038,-0.10999999940395355]);
IndexedLineSet456.coord = Coordinate457;

Shape455.geometry = IndexedLineSet456;

Appearance Appearance458 = createNode("Appearance");
Appearance458.USE = "SegmentLine";
Shape455.appearance = Appearance458;

HAnimSegment454.children = new MFNode();

HAnimSegment454.children[0] = Shape455;

HAnimSite HAnimSite459 = createNode("HAnimSite");
HAnimSite459.name = "r_thelion";
HAnimSite459.DEF = "Joe_r_thelion";
HAnimSite459.translation = new SFVec3f(new float[-0.11349999904632568,1.3179999589920044,0.0949999988079071]);
Shape Shape460 = createNode("Shape");
Shape460.USE = "sitebox";
HAnimSite459.children = new MFNode();

HAnimSite459.children[0] = Shape460;

HAnimSegment454.children[1] = HAnimSite459;

HAnimSite HAnimSite461 = createNode("HAnimSite");
HAnimSite461.name = "l_thelion";
HAnimSite461.DEF = "Joe_l_thelion";
HAnimSite461.translation = new SFVec3f(new float[0.11349999904632568,1.3179999589920044,0.0949999988079071]);
Shape Shape462 = createNode("Shape");
Shape462.USE = "sitebox";
HAnimSite461.children = new MFNode();

HAnimSite461.children[0] = Shape462;

HAnimSegment454.children[2] = HAnimSite461;

HAnimJoint451.children[1] = HAnimSegment454;

HAnimJoint HAnimJoint463 = createNode("HAnimJoint");
HAnimJoint463.name = "vt8";
HAnimJoint463.DEF = "Joe_vt8";
HAnimJoint463.center = new SFVec3f(new float[0,1.2940000295639038,-0.10999999940395355]);
HAnimJoint463.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint463.llimit = new MFFloat(new float[0,0,0]);
Transform Transform464 = createNode("Transform");
Transform464.translation = new SFVec3f(new float[0,1.2940000295639038,-0.10999999940395355]);
Shape Shape465 = createNode("Shape");
Shape465.USE = "jointbox";
Transform464.children = new MFNode();

Transform464.children[0] = Shape465;

HAnimJoint463.children = new MFNode();

HAnimJoint463.children[0] = Transform464;

HAnimSegment HAnimSegment466 = createNode("HAnimSegment");
HAnimSegment466.name = "t8";
HAnimSegment466.DEF = "Joe_t8";
Shape Shape467 = createNode("Shape");
IndexedLineSet IndexedLineSet468 = createNode("IndexedLineSet");
IndexedLineSet468.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate469 = createNode("Coordinate");
Coordinate469.point = new MFVec3f(new float[0,1.2940000295639038,-0.10999999940395355,0,1.3519999980926514,-0.11999999731779099]);
IndexedLineSet468.coord = Coordinate469;

Shape467.geometry = IndexedLineSet468;

Appearance Appearance470 = createNode("Appearance");
Appearance470.USE = "SegmentLine";
Shape467.appearance = Appearance470;

HAnimSegment466.children = new MFNode();

HAnimSegment466.children[0] = Shape467;

HAnimJoint463.children[1] = HAnimSegment466;

HAnimJoint HAnimJoint471 = createNode("HAnimJoint");
HAnimJoint471.name = "vt7";
HAnimJoint471.DEF = "Joe_vt7";
HAnimJoint471.center = new SFVec3f(new float[0,1.3229999542236328,-0.11550000309944153]);
HAnimJoint471.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint471.llimit = new MFFloat(new float[0,0,0]);
Transform Transform472 = createNode("Transform");
Transform472.translation = new SFVec3f(new float[0,1.3229999542236328,-0.11550000309944153]);
Shape Shape473 = createNode("Shape");
Shape473.USE = "jointbox";
Transform472.children = new MFNode();

Transform472.children[0] = Shape473;

HAnimJoint471.children = new MFNode();

HAnimJoint471.children[0] = Transform472;

HAnimSegment HAnimSegment474 = createNode("HAnimSegment");
HAnimSegment474.name = "t7";
HAnimSegment474.DEF = "Joe_t7";
Shape Shape475 = createNode("Shape");
IndexedLineSet IndexedLineSet476 = createNode("IndexedLineSet");
IndexedLineSet476.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate477 = createNode("Coordinate");
Coordinate477.point = new MFVec3f(new float[0,1.3519999980926514,-0.11999999731779099,0,1.38100004196167,-0.12349999696016312]);
IndexedLineSet476.coord = Coordinate477;

Shape475.geometry = IndexedLineSet476;

Appearance Appearance478 = createNode("Appearance");
Appearance478.USE = "SegmentLine";
Shape475.appearance = Appearance478;

HAnimSegment474.children = new MFNode();

HAnimSegment474.children[0] = Shape475;

HAnimJoint471.children[1] = HAnimSegment474;

HAnimJoint HAnimJoint479 = createNode("HAnimJoint");
HAnimJoint479.name = "vt6";
HAnimJoint479.DEF = "Joe_vt6";
HAnimJoint479.center = new SFVec3f(new float[0,1.3519999980926514,-0.11999999731779099]);
HAnimJoint479.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint479.llimit = new MFFloat(new float[0,0,0]);
Transform Transform480 = createNode("Transform");
Transform480.translation = new SFVec3f(new float[0,1.3519999980926514,-0.11999999731779099]);
Shape Shape481 = createNode("Shape");
Shape481.USE = "jointbox";
Transform480.children = new MFNode();

Transform480.children[0] = Shape481;

HAnimJoint479.children = new MFNode();

HAnimJoint479.children[0] = Transform480;

HAnimSegment HAnimSegment482 = createNode("HAnimSegment");
HAnimSegment482.name = "t6";
HAnimSegment482.DEF = "Joe_t6";
Shape Shape483 = createNode("Shape");
IndexedLineSet IndexedLineSet484 = createNode("IndexedLineSet");
IndexedLineSet484.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate485 = createNode("Coordinate");
Coordinate485.point = new MFVec3f(new float[0,1.38100004196167,-0.12349999696016312,0,1.409999966621399,-0.12349999696016312]);
IndexedLineSet484.coord = Coordinate485;

Shape483.geometry = IndexedLineSet484;

Appearance Appearance486 = createNode("Appearance");
Appearance486.USE = "SegmentLine";
Shape483.appearance = Appearance486;

HAnimSegment482.children = new MFNode();

HAnimSegment482.children[0] = Shape483;

HAnimJoint479.children[1] = HAnimSegment482;

HAnimJoint HAnimJoint487 = createNode("HAnimJoint");
HAnimJoint487.name = "vt5";
HAnimJoint487.DEF = "Joe_vt5";
HAnimJoint487.center = new SFVec3f(new float[0,1.38100004196167,-0.12349999696016312]);
HAnimJoint487.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint487.llimit = new MFFloat(new float[0,0,0]);
Transform Transform488 = createNode("Transform");
Transform488.translation = new SFVec3f(new float[0,1.38100004196167,-0.12349999696016312]);
Shape Shape489 = createNode("Shape");
Shape489.USE = "jointbox";
Transform488.children = new MFNode();

Transform488.children[0] = Shape489;

HAnimJoint487.children = new MFNode();

HAnimJoint487.children[0] = Transform488;

HAnimSegment HAnimSegment490 = createNode("HAnimSegment");
HAnimSegment490.name = "t5";
HAnimSegment490.DEF = "Joe_t5";
Shape Shape491 = createNode("Shape");
IndexedLineSet IndexedLineSet492 = createNode("IndexedLineSet");
IndexedLineSet492.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate493 = createNode("Coordinate");
Coordinate493.point = new MFVec3f(new float[0,1.409999966621399,-0.12349999696016312,0,1.437999963760376,-0.11999999731779099]);
IndexedLineSet492.coord = Coordinate493;

Shape491.geometry = IndexedLineSet492;

Appearance Appearance494 = createNode("Appearance");
Appearance494.USE = "SegmentLine";
Shape491.appearance = Appearance494;

HAnimSegment490.children = new MFNode();

HAnimSegment490.children[0] = Shape491;

HAnimJoint487.children[1] = HAnimSegment490;

HAnimJoint HAnimJoint495 = createNode("HAnimJoint");
HAnimJoint495.name = "vt4";
HAnimJoint495.DEF = "Joe_vt4";
HAnimJoint495.center = new SFVec3f(new float[0,1.409999966621399,-0.12349999696016312]);
HAnimJoint495.skinCoordIndex = new MFInt32(new int[81]);
HAnimJoint495.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint495.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint495.llimit = new MFFloat(new float[0,0,0]);
Transform Transform496 = createNode("Transform");
Transform496.translation = new SFVec3f(new float[0,1.409999966621399,-0.12349999696016312]);
Shape Shape497 = createNode("Shape");
Shape497.USE = "jointbox";
Transform496.children = new MFNode();

Transform496.children[0] = Shape497;

HAnimJoint495.children = new MFNode();

HAnimJoint495.children[0] = Transform496;

Transform Transform498 = createNode("Transform");
Transform498.translation = new SFVec3f(new float[0,1.409999966621399,-0.14499999582767487]);
Shape Shape499 = createNode("Shape");
Shape499.USE = "skinsphere";
Transform498.children = new MFNode();

Transform498.children[0] = Shape499;

HAnimJoint495.children[1] = Transform498;

HAnimSegment HAnimSegment500 = createNode("HAnimSegment");
HAnimSegment500.name = "t4";
HAnimSegment500.DEF = "Joe_t4";
Shape Shape501 = createNode("Shape");
IndexedLineSet IndexedLineSet502 = createNode("IndexedLineSet");
IndexedLineSet502.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate503 = createNode("Coordinate");
Coordinate503.point = new MFVec3f(new float[0,1.409999966621399,-0.12349999696016312,0,1.437999963760376,-0.11999999731779099]);
IndexedLineSet502.coord = Coordinate503;

Shape501.geometry = IndexedLineSet502;

Appearance Appearance504 = createNode("Appearance");
Appearance504.USE = "SegmentLine";
Shape501.appearance = Appearance504;

HAnimSegment500.children = new MFNode();

HAnimSegment500.children[0] = Shape501;

HAnimJoint495.children[2] = HAnimSegment500;

HAnimJoint HAnimJoint505 = createNode("HAnimJoint");
HAnimJoint505.name = "vt3";
HAnimJoint505.DEF = "Joe_vt3";
HAnimJoint505.center = new SFVec3f(new float[0,1.437999963760376,-0.11999999731779099]);
HAnimJoint505.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint505.llimit = new MFFloat(new float[0,0,0]);
Transform Transform506 = createNode("Transform");
Transform506.translation = new SFVec3f(new float[0,1.437999963760376,-0.11999999731779099]);
Shape Shape507 = createNode("Shape");
Shape507.USE = "jointbox";
Transform506.children = new MFNode();

Transform506.children[0] = Shape507;

HAnimJoint505.children = new MFNode();

HAnimJoint505.children[0] = Transform506;

HAnimSegment HAnimSegment508 = createNode("HAnimSegment");
HAnimSegment508.name = "t3";
HAnimSegment508.DEF = "Joe_t3";
Shape Shape509 = createNode("Shape");
IndexedLineSet IndexedLineSet510 = createNode("IndexedLineSet");
IndexedLineSet510.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate511 = createNode("Coordinate");
Coordinate511.point = new MFVec3f(new float[0,1.437999963760376,-0.11999999731779099,0,1.468000054359436,-0.10499999672174454]);
IndexedLineSet510.coord = Coordinate511;

Shape509.geometry = IndexedLineSet510;

Appearance Appearance512 = createNode("Appearance");
Appearance512.USE = "SegmentLine";
Shape509.appearance = Appearance512;

HAnimSegment508.children = new MFNode();

HAnimSegment508.children[0] = Shape509;

HAnimJoint505.children[1] = HAnimSegment508;

HAnimJoint HAnimJoint513 = createNode("HAnimJoint");
HAnimJoint513.name = "vt2";
HAnimJoint513.DEF = "Joe_vt2";
HAnimJoint513.center = new SFVec3f(new float[0,1.468000054359436,-0.10499999672174454]);
HAnimJoint513.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint513.llimit = new MFFloat(new float[0,0,0]);
Transform Transform514 = createNode("Transform");
Transform514.translation = new SFVec3f(new float[0,1.468000054359436,-0.10499999672174454]);
Shape Shape515 = createNode("Shape");
Shape515.USE = "jointbox";
Transform514.children = new MFNode();

Transform514.children[0] = Shape515;

HAnimJoint513.children = new MFNode();

HAnimJoint513.children[0] = Transform514;

HAnimSegment HAnimSegment516 = createNode("HAnimSegment");
HAnimSegment516.name = "t2";
HAnimSegment516.DEF = "Joe_t2";
Shape Shape517 = createNode("Shape");
IndexedLineSet IndexedLineSet518 = createNode("IndexedLineSet");
IndexedLineSet518.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate519 = createNode("Coordinate");
Coordinate519.point = new MFVec3f(new float[0,1.468000054359436,-0.10499999672174454,0,1.496999979019165,-0.09000000357627869]);
IndexedLineSet518.coord = Coordinate519;

Shape517.geometry = IndexedLineSet518;

Appearance Appearance520 = createNode("Appearance");
Appearance520.USE = "SegmentLine";
Shape517.appearance = Appearance520;

HAnimSegment516.children = new MFNode();

HAnimSegment516.children[0] = Shape517;

HAnimJoint513.children[1] = HAnimSegment516;

HAnimJoint HAnimJoint521 = createNode("HAnimJoint");
HAnimJoint521.name = "vt1";
HAnimJoint521.DEF = "Joe_vt1";
HAnimJoint521.center = new SFVec3f(new float[0,1.496999979019165,-0.09000000357627869]);
HAnimJoint521.skinCoordIndex = new MFInt32(new int[11,24]);
HAnimJoint521.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint521.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint521.llimit = new MFFloat(new float[0,0,0]);
Transform Transform522 = createNode("Transform");
Transform522.translation = new SFVec3f(new float[0,1.496999979019165,-0.09000000357627869]);
Shape Shape523 = createNode("Shape");
Shape523.USE = "jointbox";
Transform522.children = new MFNode();

Transform522.children[0] = Shape523;

HAnimJoint521.children = new MFNode();

HAnimJoint521.children[0] = Transform522;

HAnimSegment HAnimSegment524 = createNode("HAnimSegment");
HAnimSegment524.name = "t1";
HAnimSegment524.DEF = "Joe_t1";
Shape Shape525 = createNode("Shape");
IndexedLineSet IndexedLineSet526 = createNode("IndexedLineSet");
IndexedLineSet526.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate527 = createNode("Coordinate");
Coordinate527.point = new MFVec3f(new float[0,1.496999979019165,-0.09000000357627869,0,1.524999976158142,-0.07199999690055847]);
IndexedLineSet526.coord = Coordinate527;

Shape525.geometry = IndexedLineSet526;

Appearance Appearance528 = createNode("Appearance");
Appearance528.USE = "SegmentLine";
Shape525.appearance = Appearance528;

HAnimSegment524.children = new MFNode();

HAnimSegment524.children[0] = Shape525;

HAnimSite HAnimSite529 = createNode("HAnimSite");
HAnimSite529.name = "suprasternale";
HAnimSite529.DEF = "Joe_suprasternale";
HAnimSite529.translation = new SFVec3f(new float[0,1.440000057220459,0.029999999329447746]);
Shape Shape530 = createNode("Shape");
Shape530.USE = "sitebox";
HAnimSite529.children = new MFNode();

HAnimSite529.children[0] = Shape530;

HAnimSegment524.children[1] = HAnimSite529;

HAnimSite HAnimSite531 = createNode("HAnimSite");
HAnimSite531.name = "cervicale";
HAnimSite531.DEF = "Joe_cervicale";
HAnimSite531.translation = new SFVec3f(new float[0,1.5299999713897705,-0.08399999886751175]);
Shape Shape532 = createNode("Shape");
Shape532.USE = "sitebox";
HAnimSite531.children = new MFNode();

HAnimSite531.children[0] = Shape532;

HAnimSegment524.children[2] = HAnimSite531;

HAnimJoint521.children[1] = HAnimSegment524;

HAnimJoint HAnimJoint533 = createNode("HAnimJoint");
HAnimJoint533.name = "vc7";
HAnimJoint533.DEF = "Joe_vc7";
HAnimJoint533.center = new SFVec3f(new float[0,1.524999976158142,-0.07199999690055847]);
HAnimJoint533.skinCoordIndex = new MFInt32(new int[74,75]);
HAnimJoint533.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint533.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint533.llimit = new MFFloat(new float[0,0,0]);
Transform Transform534 = createNode("Transform");
Transform534.translation = new SFVec3f(new float[0,1.524999976158142,-0.07199999690055847]);
Shape Shape535 = createNode("Shape");
Shape535.USE = "jointbox";
Transform534.children = new MFNode();

Transform534.children[0] = Shape535;

HAnimJoint533.children = new MFNode();

HAnimJoint533.children[0] = Transform534;

HAnimSegment HAnimSegment536 = createNode("HAnimSegment");
HAnimSegment536.name = "c7";
HAnimSegment536.DEF = "Joe_c7";
Shape Shape537 = createNode("Shape");
IndexedLineSet IndexedLineSet538 = createNode("IndexedLineSet");
IndexedLineSet538.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
Coordinate Coordinate539 = createNode("Coordinate");
Coordinate539.point = new MFVec3f(new float[0,1.524999976158142,-0.07199999690055847,0.0820000022649765,1.448799967765808,-0.03530000150203705,-0.029999999329447746,1.4600000381469727,0.019999999552965164,0,1.5399999618530273,-0.05000000074505806]);
IndexedLineSet538.coord = Coordinate539;

Shape537.geometry = IndexedLineSet538;

Appearance Appearance540 = createNode("Appearance");
Appearance540.USE = "SegmentLine";
Shape537.appearance = Appearance540;

HAnimSegment536.children = new MFNode();

HAnimSegment536.children[0] = Shape537;

HAnimSite HAnimSite541 = createNode("HAnimSite");
HAnimSite541.name = "r_neck_base";
HAnimSite541.DEF = "Joe_r_neck_base";
HAnimSite541.translation = new SFVec3f(new float[-0.06459999829530716,1.5148999691009521,-0.03849999979138374]);
Shape Shape542 = createNode("Shape");
Shape542.USE = "sitebox";
HAnimSite541.children = new MFNode();

HAnimSite541.children[0] = Shape542;

HAnimSegment536.children[1] = HAnimSite541;

HAnimSite HAnimSite543 = createNode("HAnimSite");
HAnimSite543.name = "l_neck_base";
HAnimSite543.DEF = "Joe_l_neck_base";
HAnimSite543.translation = new SFVec3f(new float[0.06459999829530716,1.5148999691009521,-0.03849999979138374]);
Shape Shape544 = createNode("Shape");
Shape544.USE = "sitebox";
HAnimSite543.children = new MFNode();

HAnimSite543.children[0] = Shape544;

HAnimSegment536.children[2] = HAnimSite543;

HAnimJoint533.children[1] = HAnimSegment536;

HAnimJoint HAnimJoint545 = createNode("HAnimJoint");
HAnimJoint545.name = "vc6";
HAnimJoint545.DEF = "Joe_vc6";
HAnimJoint545.center = new SFVec3f(new float[0,1.5399999618530273,-0.05000000074505806]);
HAnimJoint545.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint545.llimit = new MFFloat(new float[0,0,0]);
Transform Transform546 = createNode("Transform");
Transform546.translation = new SFVec3f(new float[0,1.5399999618530273,-0.05000000074505806]);
Shape Shape547 = createNode("Shape");
Shape547.USE = "jointbox";
Transform546.children = new MFNode();

Transform546.children[0] = Shape547;

HAnimJoint545.children = new MFNode();

HAnimJoint545.children[0] = Transform546;

HAnimSegment HAnimSegment548 = createNode("HAnimSegment");
HAnimSegment548.name = "c6";
HAnimSegment548.DEF = "Joe_c6";
Shape Shape549 = createNode("Shape");
IndexedLineSet IndexedLineSet550 = createNode("IndexedLineSet");
IndexedLineSet550.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate551 = createNode("Coordinate");
Coordinate551.point = new MFVec3f(new float[0,1.5399999618530273,-0.05000000074505806,0,1.5674999952316284,-0.025599999353289604]);
IndexedLineSet550.coord = Coordinate551;

Shape549.geometry = IndexedLineSet550;

Appearance Appearance552 = createNode("Appearance");
Appearance552.USE = "SegmentLine";
Shape549.appearance = Appearance552;

HAnimSegment548.children = new MFNode();

HAnimSegment548.children[0] = Shape549;

HAnimJoint545.children[1] = HAnimSegment548;

HAnimJoint HAnimJoint553 = createNode("HAnimJoint");
HAnimJoint553.name = "vc5";
HAnimJoint553.DEF = "Joe_vc5";
HAnimJoint553.center = new SFVec3f(new float[0,1.5520000457763672,-0.03500000014901161]);
HAnimJoint553.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint553.llimit = new MFFloat(new float[0,0,0]);
Transform Transform554 = createNode("Transform");
Transform554.translation = new SFVec3f(new float[0,1.5520000457763672,-0.03500000014901161]);
Shape Shape555 = createNode("Shape");
Shape555.USE = "jointbox";
Transform554.children = new MFNode();

Transform554.children[0] = Shape555;

HAnimJoint553.children = new MFNode();

HAnimJoint553.children[0] = Transform554;

HAnimSegment HAnimSegment556 = createNode("HAnimSegment");
HAnimSegment556.name = "c5";
HAnimSegment556.DEF = "Joe_c5";
Shape Shape557 = createNode("Shape");
IndexedLineSet IndexedLineSet558 = createNode("IndexedLineSet");
IndexedLineSet558.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate559 = createNode("Coordinate");
Coordinate559.point = new MFVec3f(new float[0,1.5674999952316284,-0.025599999353289604,0,1.5822499990463257,-0.01850000023841858]);
IndexedLineSet558.coord = Coordinate559;

Shape557.geometry = IndexedLineSet558;

Appearance Appearance560 = createNode("Appearance");
Appearance560.USE = "SegmentLine";
Shape557.appearance = Appearance560;

HAnimSegment556.children = new MFNode();

HAnimSegment556.children[0] = Shape557;

HAnimJoint553.children[1] = HAnimSegment556;

HAnimJoint HAnimJoint561 = createNode("HAnimJoint");
HAnimJoint561.name = "vc4";
HAnimJoint561.DEF = "Joe_vc4";
HAnimJoint561.center = new SFVec3f(new float[0,1.5674999952316284,-0.025599999353289604]);
HAnimJoint561.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint561.llimit = new MFFloat(new float[0,0,0]);
Transform Transform562 = createNode("Transform");
Transform562.translation = new SFVec3f(new float[0,1.5674999952316284,-0.025599999353289604]);
Shape Shape563 = createNode("Shape");
Shape563.USE = "jointbox";
Transform562.children = new MFNode();

Transform562.children[0] = Shape563;

HAnimJoint561.children = new MFNode();

HAnimJoint561.children[0] = Transform562;

HAnimSegment HAnimSegment564 = createNode("HAnimSegment");
HAnimSegment564.name = "c4";
HAnimSegment564.DEF = "Joe_c4";
Shape Shape565 = createNode("Shape");
IndexedLineSet IndexedLineSet566 = createNode("IndexedLineSet");
IndexedLineSet566.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate567 = createNode("Coordinate");
Coordinate567.point = new MFVec3f(new float[0,1.5822499990463257,-0.01850000023841858,0,1.5950000286102295,-0.017500000074505806]);
IndexedLineSet566.coord = Coordinate567;

Shape565.geometry = IndexedLineSet566;

Appearance Appearance568 = createNode("Appearance");
Appearance568.USE = "SegmentLine";
Shape565.appearance = Appearance568;

HAnimSegment564.children = new MFNode();

HAnimSegment564.children[0] = Shape565;

HAnimJoint561.children[1] = HAnimSegment564;

HAnimJoint HAnimJoint569 = createNode("HAnimJoint");
HAnimJoint569.name = "vc3";
HAnimJoint569.DEF = "Joe_vc3";
HAnimJoint569.center = new SFVec3f(new float[0,1.5822499990463257,-0.01850000023841858]);
HAnimJoint569.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint569.llimit = new MFFloat(new float[0,0,0]);
Transform Transform570 = createNode("Transform");
Transform570.translation = new SFVec3f(new float[0,1.5822499990463257,-0.01850000023841858]);
Shape Shape571 = createNode("Shape");
Shape571.USE = "jointbox";
Transform570.children = new MFNode();

Transform570.children[0] = Shape571;

HAnimJoint569.children = new MFNode();

HAnimJoint569.children[0] = Transform570;

HAnimSegment HAnimSegment572 = createNode("HAnimSegment");
HAnimSegment572.name = "c3";
HAnimSegment572.DEF = "Joe_c3";
Shape Shape573 = createNode("Shape");
IndexedLineSet IndexedLineSet574 = createNode("IndexedLineSet");
IndexedLineSet574.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate575 = createNode("Coordinate");
Coordinate575.point = new MFVec3f(new float[0,1.5950000286102295,-0.017500000074505806,0,1.6100000143051147,-0.014999999664723873]);
IndexedLineSet574.coord = Coordinate575;

Shape573.geometry = IndexedLineSet574;

Appearance Appearance576 = createNode("Appearance");
Appearance576.USE = "SegmentLine";
Shape573.appearance = Appearance576;

HAnimSegment572.children = new MFNode();

HAnimSegment572.children[0] = Shape573;

HAnimJoint569.children[1] = HAnimSegment572;

HAnimJoint HAnimJoint577 = createNode("HAnimJoint");
HAnimJoint577.name = "vc2";
HAnimJoint577.DEF = "Joe_vc2";
HAnimJoint577.center = new SFVec3f(new float[0,1.5950000286102295,-0.017500000074505806]);
HAnimJoint577.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint577.llimit = new MFFloat(new float[0,0,0]);
Transform Transform578 = createNode("Transform");
Transform578.translation = new SFVec3f(new float[0,1.5950000286102295,-0.017500000074505806]);
Shape Shape579 = createNode("Shape");
Shape579.USE = "jointbox";
Transform578.children = new MFNode();

Transform578.children[0] = Shape579;

HAnimJoint577.children = new MFNode();

HAnimJoint577.children[0] = Transform578;

HAnimSegment HAnimSegment580 = createNode("HAnimSegment");
HAnimSegment580.name = "c2";
HAnimSegment580.DEF = "Joe_c2";
Shape Shape581 = createNode("Shape");
IndexedLineSet IndexedLineSet582 = createNode("IndexedLineSet");
IndexedLineSet582.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate583 = createNode("Coordinate");
Coordinate583.point = new MFVec3f(new float[0,1.6100000143051147,-0.014999999664723873,0,1.614400029182434,-0.0034000000450760126]);
IndexedLineSet582.coord = Coordinate583;

Shape581.geometry = IndexedLineSet582;

Appearance Appearance584 = createNode("Appearance");
Appearance584.USE = "SegmentLine";
Shape581.appearance = Appearance584;

HAnimSegment580.children = new MFNode();

HAnimSegment580.children[0] = Shape581;

HAnimJoint577.children[1] = HAnimSegment580;

HAnimJoint HAnimJoint585 = createNode("HAnimJoint");
HAnimJoint585.name = "vc1";
HAnimJoint585.DEF = "Joe_vc1";
HAnimJoint585.center = new SFVec3f(new float[0,1.6100000143051147,-0.014999999664723873]);
HAnimJoint585.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint585.llimit = new MFFloat(new float[0,0,0]);
Transform Transform586 = createNode("Transform");
Transform586.translation = new SFVec3f(new float[0,1.6100000143051147,-0.014999999664723873]);
Shape Shape587 = createNode("Shape");
Shape587.USE = "jointbox";
Transform586.children = new MFNode();

Transform586.children[0] = Shape587;

HAnimJoint585.children = new MFNode();

HAnimJoint585.children[0] = Transform586;

HAnimSegment HAnimSegment588 = createNode("HAnimSegment");
HAnimSegment588.name = "c1";
HAnimSegment588.DEF = "Joe_c1";
Shape Shape589 = createNode("Shape");
IndexedLineSet IndexedLineSet590 = createNode("IndexedLineSet");
IndexedLineSet590.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate591 = createNode("Coordinate");
Coordinate591.point = new MFVec3f(new float[0,1.614400029182434,-0.0034000000450760126,0,1.6299999952316284,-0.009999999776482582]);
IndexedLineSet590.coord = Coordinate591;

Shape589.geometry = IndexedLineSet590;

Appearance Appearance592 = createNode("Appearance");
Appearance592.USE = "SegmentLine";
Shape589.appearance = Appearance592;

HAnimSegment588.children = new MFNode();

HAnimSegment588.children[0] = Shape589;

HAnimJoint585.children[1] = HAnimSegment588;

HAnimJoint HAnimJoint593 = createNode("HAnimJoint");
HAnimJoint593.name = "skullbase";
HAnimJoint593.DEF = "Joe_skullbase";
HAnimJoint593.center = new SFVec3f(new float[0,1.6299999952316284,-0.009999999776482582]);
HAnimJoint593.skinCoordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9]);
HAnimJoint593.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1]);
HAnimJoint593.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint593.llimit = new MFFloat(new float[0,0,0]);
Transform Transform594 = createNode("Transform");
Transform594.translation = new SFVec3f(new float[0,1.6299999952316284,-0.009999999776482582]);
Transform Transform595 = createNode("Transform");
Transform595.scale = new SFVec3f(new float[2,2,2]);
Shape Shape596 = createNode("Shape");
Shape596.USE = "jointbox";
Transform595.children = new MFNode();

Transform595.children[0] = Shape596;

Transform594.children = new MFNode();

Transform594.children[0] = Transform595;

HAnimJoint593.children = new MFNode();

HAnimJoint593.children[0] = Transform594;

HAnimSegment HAnimSegment597 = createNode("HAnimSegment");
HAnimSegment597.name = "skull";
HAnimSegment597.DEF = "Joe_skull";
Shape Shape598 = createNode("Shape");
IndexedLineSet IndexedLineSet599 = createNode("IndexedLineSet");
IndexedLineSet599.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1]);
Coordinate Coordinate600 = createNode("Coordinate");
Coordinate600.point = new MFVec3f(new float[0,1.6299999952316284,-0.009999999776482582,0.03400000184774399,1.659000039100647,0.05999999865889549,-0.03400000184774399,1.6549999713897705,0.06499999761581421]);
IndexedLineSet599.coord = Coordinate600;

Shape598.geometry = IndexedLineSet599;

Appearance Appearance601 = createNode("Appearance");
Appearance601.USE = "SegmentLine";
Shape598.appearance = Appearance601;

HAnimSegment597.children = new MFNode();

HAnimSegment597.children[0] = Shape598;

HAnimSite HAnimSite602 = createNode("HAnimSite");
HAnimSite602.name = "skull_tip";
HAnimSite602.DEF = "Joe_skull_tip";
HAnimSite602.translation = new SFVec3f(new float[0,1.7699999809265137,0]);
Shape Shape603 = createNode("Shape");
Shape603.USE = "sitebox";
HAnimSite602.children = new MFNode();

HAnimSite602.children[0] = Shape603;

HAnimSegment597.children[1] = HAnimSite602;

HAnimSite HAnimSite604 = createNode("HAnimSite");
HAnimSite604.name = "sellion";
HAnimSite604.DEF = "Joe_sellion";
HAnimSite604.translation = new SFVec3f(new float[0,1.6649999618530273,0.09000000357627869]);
Shape Shape605 = createNode("Shape");
Shape605.USE = "sitebox";
HAnimSite604.children = new MFNode();

HAnimSite604.children[0] = Shape605;

HAnimSegment597.children[2] = HAnimSite604;

HAnimSite HAnimSite606 = createNode("HAnimSite");
HAnimSite606.name = "r_infraorbitale";
HAnimSite606.DEF = "Joe_r_infraorbitale";
HAnimSite606.translation = new SFVec3f(new float[-0.032999999821186066,1.6200000047683716,0.08699999749660492]);
Shape Shape607 = createNode("Shape");
Shape607.USE = "sitebox";
HAnimSite606.children = new MFNode();

HAnimSite606.children[0] = Shape607;

HAnimSegment597.children[3] = HAnimSite606;

HAnimSite HAnimSite608 = createNode("HAnimSite");
HAnimSite608.name = "l_infraorbitale";
HAnimSite608.DEF = "Joe_l_infraorbitale";
HAnimSite608.translation = new SFVec3f(new float[0.032999999821186066,1.6200000047683716,0.08699999749660492]);
Shape Shape609 = createNode("Shape");
Shape609.USE = "sitebox";
HAnimSite608.children = new MFNode();

HAnimSite608.children[0] = Shape609;

HAnimSegment597.children[4] = HAnimSite608;

HAnimSite HAnimSite610 = createNode("HAnimSite");
HAnimSite610.name = "supramenton";
HAnimSite610.DEF = "Joe_supramenton";
HAnimSite610.translation = new SFVec3f(new float[0,1.5499999523162842,0.09700000286102295]);
Shape Shape611 = createNode("Shape");
Shape611.USE = "sitebox";
HAnimSite610.children = new MFNode();

HAnimSite610.children[0] = Shape611;

HAnimSegment597.children[5] = HAnimSite610;

HAnimSite HAnimSite612 = createNode("HAnimSite");
HAnimSite612.name = "r_tragion";
HAnimSite612.DEF = "Joe_r_tragion";
HAnimSite612.translation = new SFVec3f(new float[-0.07699999958276749,1.6399999856948853,-0.009999999776482582]);
Shape Shape613 = createNode("Shape");
Shape613.USE = "sitebox";
HAnimSite612.children = new MFNode();

HAnimSite612.children[0] = Shape613;

HAnimSegment597.children[6] = HAnimSite612;

HAnimSite HAnimSite614 = createNode("HAnimSite");
HAnimSite614.name = "r_gonion";
HAnimSite614.DEF = "Joe_r_gonion";
HAnimSite614.translation = new SFVec3f(new float[-0.052000001072883606,1.5800000429153442,0.014999999664723873]);
Shape Shape615 = createNode("Shape");
Shape615.USE = "sitebox";
HAnimSite614.children = new MFNode();

HAnimSite614.children[0] = Shape615;

HAnimSegment597.children[7] = HAnimSite614;

HAnimSite HAnimSite616 = createNode("HAnimSite");
HAnimSite616.name = "l_tragion";
HAnimSite616.DEF = "Joe_l_tragion";
HAnimSite616.translation = new SFVec3f(new float[0.07699999958276749,1.6399999856948853,-0.009999999776482582]);
Shape Shape617 = createNode("Shape");
Shape617.USE = "sitebox";
HAnimSite616.children = new MFNode();

HAnimSite616.children[0] = Shape617;

HAnimSegment597.children[8] = HAnimSite616;

HAnimSite HAnimSite618 = createNode("HAnimSite");
HAnimSite618.name = "l_gonion";
HAnimSite618.DEF = "Joe_l_gonion";
HAnimSite618.translation = new SFVec3f(new float[0.06310000270605087,1.5800000429153442,0.014999999664723873]);
Shape Shape619 = createNode("Shape");
Shape619.USE = "sitebox";
HAnimSite618.children = new MFNode();

HAnimSite618.children[0] = Shape619;

HAnimSegment597.children[9] = HAnimSite618;

HAnimSite HAnimSite620 = createNode("HAnimSite");
HAnimSite620.name = "nuchale";
HAnimSite620.DEF = "Joe_nuchale";
HAnimSite620.translation = new SFVec3f(new float[0,1.625,-0.0925000011920929]);
Shape Shape621 = createNode("Shape");
Shape621.USE = "sitebox";
HAnimSite620.children = new MFNode();

HAnimSite620.children[0] = Shape621;

HAnimSegment597.children[10] = HAnimSite620;

HAnimJoint593.children[1] = HAnimSegment597;

HAnimJoint HAnimJoint622 = createNode("HAnimJoint");
HAnimJoint622.name = "l_eyeball_joint";
HAnimJoint622.DEF = "Joe_l_eyeball_joint";
HAnimJoint622.center = new SFVec3f(new float[0.03400000184774399,1.659000039100647,0.05999999865889549]);
HAnimJoint622.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint622.llimit = new MFFloat(new float[0,0,0]);
Transform Transform623 = createNode("Transform");
Transform623.scale = new SFVec3f(new float[1,1,1.399999976158142]);
Transform623.translation = new SFVec3f(new float[0.03400000184774399,1.6549999713897705,0.06499999761581421]);
Shape Shape624 = createNode("Shape");
Shape624.USE = "jointbox";
Transform623.children = new MFNode();

Transform623.children[0] = Shape624;

HAnimJoint622.children = new MFNode();

HAnimJoint622.children[0] = Transform623;

HAnimSegment HAnimSegment625 = createNode("HAnimSegment");
HAnimSegment625.name = "l_eyeball";
HAnimSegment625.DEF = "Joe_l_eyeball";
Shape Shape626 = createNode("Shape");
IndexedLineSet IndexedLineSet627 = createNode("IndexedLineSet");
IndexedLineSet627.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate628 = createNode("Coordinate");
Coordinate628.point = new MFVec3f(new float[0.03400000184774399,1.6549999713897705,0.06499999761581421,-0.03400000184774399,1.6549999713897705,0.06499999761581421]);
IndexedLineSet627.coord = Coordinate628;

Shape626.geometry = IndexedLineSet627;

Appearance Appearance629 = createNode("Appearance");
Appearance629.USE = "SegmentLine";
Shape626.appearance = Appearance629;

HAnimSegment625.children = new MFNode();

HAnimSegment625.children[0] = Shape626;

HAnimJoint622.children[1] = HAnimSegment625;

HAnimJoint593.children[2] = HAnimJoint622;

HAnimJoint HAnimJoint630 = createNode("HAnimJoint");
HAnimJoint630.name = "r_eyeball_joint";
HAnimJoint630.DEF = "Joe_r_eyeball_joint";
HAnimJoint630.center = new SFVec3f(new float[-0.03400000184774399,1.659000039100647,0.05999999865889549]);
HAnimJoint630.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint630.llimit = new MFFloat(new float[0,0,0]);
Transform Transform631 = createNode("Transform");
Transform631.scale = new SFVec3f(new float[1,1,1.399999976158142]);
Transform631.translation = new SFVec3f(new float[-0.03400000184774399,1.6549999713897705,0.06499999761581421]);
Shape Shape632 = createNode("Shape");
Shape632.USE = "jointbox";
Transform631.children = new MFNode();

Transform631.children[0] = Shape632;

HAnimJoint630.children = new MFNode();

HAnimJoint630.children[0] = Transform631;

HAnimSegment HAnimSegment633 = createNode("HAnimSegment");
HAnimSegment633.name = "r_eyeball";
HAnimSegment633.DEF = "Joe_r_eyeball";
Shape Shape634 = createNode("Shape");
IndexedLineSet IndexedLineSet635 = createNode("IndexedLineSet");
IndexedLineSet635.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate636 = createNode("Coordinate");
Coordinate636.point = new MFVec3f(new float[0.03400000184774399,1.6549999713897705,0.06499999761581421,-0.03400000184774399,1.6549999713897705,0.06499999761581421]);
IndexedLineSet635.coord = Coordinate636;

Shape634.geometry = IndexedLineSet635;

Appearance Appearance637 = createNode("Appearance");
Appearance637.USE = "SegmentLine";
Shape634.appearance = Appearance637;

HAnimSegment633.children = new MFNode();

HAnimSegment633.children[0] = Shape634;

HAnimJoint630.children[1] = HAnimSegment633;

HAnimJoint593.children[3] = HAnimJoint630;

HAnimJoint585.children[2] = HAnimJoint593;

HAnimJoint577.children[2] = HAnimJoint585;

HAnimJoint569.children[2] = HAnimJoint577;

HAnimJoint561.children[2] = HAnimJoint569;

HAnimJoint553.children[2] = HAnimJoint561;

HAnimJoint545.children[2] = HAnimJoint553;

HAnimJoint533.children[2] = HAnimJoint545;

HAnimJoint521.children[2] = HAnimJoint533;

HAnimJoint HAnimJoint638 = createNode("HAnimJoint");
HAnimJoint638.name = "l_sternoclavicular";
HAnimJoint638.DEF = "Joe_l_sternoclavicular";
HAnimJoint638.center = new SFVec3f(new float[0.0820000022649765,1.448799967765808,-0.03530000150203705]);
HAnimJoint638.skinCoordIndex = new MFInt32(new int[12]);
HAnimJoint638.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint638.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint638.llimit = new MFFloat(new float[0,0,0]);
Transform Transform639 = createNode("Transform");
Transform639.translation = new SFVec3f(new float[0.0820000022649765,1.448799967765808,-0.03530000150203705]);
Shape Shape640 = createNode("Shape");
Shape640.USE = "jointbox";
Transform639.children = new MFNode();

Transform639.children[0] = Shape640;

HAnimJoint638.children = new MFNode();

HAnimJoint638.children[0] = Transform639;

HAnimSegment HAnimSegment641 = createNode("HAnimSegment");
HAnimSegment641.name = "l_clavicle";
HAnimSegment641.DEF = "Joe_l_clavicle";
Shape Shape642 = createNode("Shape");
IndexedLineSet IndexedLineSet643 = createNode("IndexedLineSet");
IndexedLineSet643.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate644 = createNode("Coordinate");
Coordinate644.point = new MFVec3f(new float[0.0820000022649765,1.448799967765808,-0.03530000150203705,0.09619999676942825,1.426900029182434,-0.042399998754262924]);
IndexedLineSet643.coord = Coordinate644;

Shape642.geometry = IndexedLineSet643;

Appearance Appearance645 = createNode("Appearance");
Appearance645.USE = "SegmentLine";
Shape642.appearance = Appearance645;

HAnimSegment641.children = new MFNode();

HAnimSegment641.children[0] = Shape642;

HAnimSite HAnimSite646 = createNode("HAnimSite");
HAnimSite646.name = "l_clavicale";
HAnimSite646.DEF = "Joe_l_clavicale";
HAnimSite646.translation = new SFVec3f(new float[0.029999999329447746,1.4600000381469727,0.03500000014901161]);
Shape Shape647 = createNode("Shape");
Shape647.USE = "sitebox";
HAnimSite646.children = new MFNode();

HAnimSite646.children[0] = Shape647;

HAnimSegment641.children[1] = HAnimSite646;

HAnimJoint638.children[1] = HAnimSegment641;

HAnimJoint HAnimJoint648 = createNode("HAnimJoint");
HAnimJoint648.name = "l_acromioclavicular";
HAnimJoint648.DEF = "Joe_l_acromioclavicular";
HAnimJoint648.center = new SFVec3f(new float[0.09619999676942825,1.426900029182434,-0.042399998754262924]);
HAnimJoint648.skinCoordIndex = new MFInt32(new int[79]);
HAnimJoint648.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint648.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint648.llimit = new MFFloat(new float[0,0,0]);
Transform Transform649 = createNode("Transform");
Transform649.translation = new SFVec3f(new float[0.09619999676942825,1.426900029182434,-0.042399998754262924]);
Shape Shape650 = createNode("Shape");
Shape650.USE = "jointbox";
Transform649.children = new MFNode();

Transform649.children[0] = Shape650;

HAnimJoint648.children = new MFNode();

HAnimJoint648.children[0] = Transform649;

HAnimSegment HAnimSegment651 = createNode("HAnimSegment");
HAnimSegment651.name = "l_scapula";
HAnimSegment651.DEF = "Joe_l_scapula";
Shape Shape652 = createNode("Shape");
IndexedLineSet IndexedLineSet653 = createNode("IndexedLineSet");
IndexedLineSet653.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate654 = createNode("Coordinate");
Coordinate654.point = new MFVec3f(new float[0.09619999676942825,1.426900029182434,-0.042399998754262924,0.20000000298023224,1.440000057220459,-0.03999999910593033]);
IndexedLineSet653.coord = Coordinate654;

Shape652.geometry = IndexedLineSet653;

Appearance Appearance655 = createNode("Appearance");
Appearance655.USE = "SegmentLine";
Shape652.appearance = Appearance655;

HAnimSegment651.children = new MFNode();

HAnimSegment651.children[0] = Shape652;

HAnimSite HAnimSite656 = createNode("HAnimSite");
HAnimSite656.name = "l_acromion";
HAnimSite656.DEF = "Joe_l_acromion";
HAnimSite656.translation = new SFVec3f(new float[0.17499999701976776,1.4824999570846558,-0.05999999865889549]);
Shape Shape657 = createNode("Shape");
Shape657.USE = "sitebox";
HAnimSite656.children = new MFNode();

HAnimSite656.children[0] = Shape657;

HAnimSegment651.children[1] = HAnimSite656;

HAnimSite HAnimSite658 = createNode("HAnimSite");
HAnimSite658.name = "l_axilla_ant";
HAnimSite658.DEF = "Joe_l_axilla_ant";
HAnimSite658.translation = new SFVec3f(new float[0.17000000178813934,1.3799999952316284,0.007000000216066837]);
Shape Shape659 = createNode("Shape");
Shape659.USE = "sitebox";
HAnimSite658.children = new MFNode();

HAnimSite658.children[0] = Shape659;

HAnimSegment651.children[2] = HAnimSite658;

HAnimSite HAnimSite660 = createNode("HAnimSite");
HAnimSite660.name = "l_axilla_post";
HAnimSite660.DEF = "Joe_l_axilla_post";
HAnimSite660.translation = new SFVec3f(new float[0.1599999964237213,1.3799999952316284,-0.125]);
Shape Shape661 = createNode("Shape");
Shape661.USE = "sitebox";
HAnimSite660.children = new MFNode();

HAnimSite660.children[0] = Shape661;

HAnimSegment651.children[3] = HAnimSite660;

Transform Transform662 = createNode("Transform");
Transform662.translation = new SFVec3f(new float[0.10999999940395355,1.4270000457763672,-0.13750000298023224]);
Shape Shape663 = createNode("Shape");
Shape663.USE = "skinsphere";
Transform662.children = new MFNode();

Transform662.children[0] = Shape663;

HAnimSegment651.children[4] = Transform662;

HAnimJoint648.children[1] = HAnimSegment651;

HAnimJoint HAnimJoint664 = createNode("HAnimJoint");
HAnimJoint664.name = "l_shoulder";
HAnimJoint664.DEF = "Joe_l_shoulder";
HAnimJoint664.center = new SFVec3f(new float[0.20000000298023224,1.440000057220459,-0.03999999910593033]);
HAnimJoint664.skinCoordIndex = new MFInt32(new int[41,42,44,80,102,103,104,105]);
HAnimJoint664.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint664.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint664.llimit = new MFFloat(new float[0,0,0]);
Transform Transform665 = createNode("Transform");
Transform665.translation = new SFVec3f(new float[0.20000000298023224,1.440000057220459,-0.03999999910593033]);
Shape Shape666 = createNode("Shape");
Shape666.USE = "jointbox";
Transform665.children = new MFNode();

Transform665.children[0] = Shape666;

HAnimJoint664.children = new MFNode();

HAnimJoint664.children[0] = Transform665;

HAnimSegment HAnimSegment667 = createNode("HAnimSegment");
HAnimSegment667.name = "l_upperarm";
HAnimSegment667.DEF = "Joe_l_upperarm";
Shape Shape668 = createNode("Shape");
IndexedLineSet IndexedLineSet669 = createNode("IndexedLineSet");
IndexedLineSet669.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate670 = createNode("Coordinate");
Coordinate670.point = new MFVec3f(new float[0.2029000073671341,1.440000057220459,-0.03869999945163727,0.20000000298023224,1.138800024986267,-0.03999999910593033]);
IndexedLineSet669.coord = Coordinate670;

Shape668.geometry = IndexedLineSet669;

Appearance Appearance671 = createNode("Appearance");
Appearance671.USE = "SegmentLine";
Shape668.appearance = Appearance671;

HAnimSegment667.children = new MFNode();

HAnimSegment667.children[0] = Shape668;

HAnimSite HAnimSite672 = createNode("HAnimSite");
HAnimSite672.name = "l_humeral_medial_epicn";
HAnimSite672.DEF = "Joe_l_humeral_medial_epicn";
HAnimSite672.translation = new SFVec3f(new float[0.16500000655651093,1.138800024986267,-0.03999999910593033]);
Shape Shape673 = createNode("Shape");
Shape673.USE = "sitebox";
HAnimSite672.children = new MFNode();

HAnimSite672.children[0] = Shape673;

HAnimSegment667.children[1] = HAnimSite672;

HAnimSite HAnimSite674 = createNode("HAnimSite");
HAnimSite674.name = "l_radiale";
HAnimSite674.DEF = "Joe_l_radiale";
HAnimSite674.translation = new SFVec3f(new float[0.23000000417232513,1.1330000162124634,-0.054999999701976776]);
Shape Shape675 = createNode("Shape");
Shape675.USE = "sitebox";
HAnimSite674.children = new MFNode();

HAnimSite674.children[0] = Shape675;

HAnimSegment667.children[2] = HAnimSite674;

HAnimSite HAnimSite676 = createNode("HAnimSite");
HAnimSite676.name = "l_humeral_lateral_epicn";
HAnimSite676.DEF = "Joe_l_humeral_lateral_epicn";
HAnimSite676.translation = new SFVec3f(new float[0.24400000274181366,1.138800024986267,-0.03999999910593033]);
Shape Shape677 = createNode("Shape");
Shape677.USE = "sitebox";
HAnimSite676.children = new MFNode();

HAnimSite676.children[0] = Shape677;

HAnimSegment667.children[3] = HAnimSite676;

Transform Transform678 = createNode("Transform");
Transform678.translation = new SFVec3f(new float[0.23499999940395355,1.4199999570846558,-0.0625]);
Shape Shape679 = createNode("Shape");
Shape679.USE = "skinsphere";
Transform678.children = new MFNode();

Transform678.children[0] = Shape679;

HAnimSegment667.children[4] = Transform678;

Transform Transform680 = createNode("Transform");
Transform680.translation = new SFVec3f(new float[0.25,1.2699999809265137,-0.03999999910593033]);
Shape Shape681 = createNode("Shape");
Shape681.USE = "skinsphere";
Transform680.children = new MFNode();

Transform680.children[0] = Shape681;

HAnimSegment667.children[5] = Transform680;

Transform Transform682 = createNode("Transform");
Transform682.translation = new SFVec3f(new float[0.17000000178813934,1.2699999809265137,-0.03999999910593033]);
Shape Shape683 = createNode("Shape");
Shape683.USE = "skinsphere";
Transform682.children = new MFNode();

Transform682.children[0] = Shape683;

HAnimSegment667.children[6] = Transform682;

Transform Transform684 = createNode("Transform");
Transform684.translation = new SFVec3f(new float[0.20000000298023224,1.2699999809265137,-0.09000000357627869]);
Shape Shape685 = createNode("Shape");
Shape685.USE = "skinsphere";
Transform684.children = new MFNode();

Transform684.children[0] = Shape685;

HAnimSegment667.children[7] = Transform684;

Transform Transform686 = createNode("Transform");
Transform686.translation = new SFVec3f(new float[0.20000000298023224,1.2699999809265137,0.019999999552965164]);
Shape Shape687 = createNode("Shape");
Shape687.USE = "skinsphere";
Transform686.children = new MFNode();

Transform686.children[0] = Shape687;

HAnimSegment667.children[8] = Transform686;

HAnimJoint664.children[1] = HAnimSegment667;

HAnimJoint HAnimJoint688 = createNode("HAnimJoint");
HAnimJoint688.name = "l_elbow";
HAnimJoint688.DEF = "Joe_l_elbow";
HAnimJoint688.center = new SFVec3f(new float[0.20000000298023224,1.138800024986267,-0.03999999910593033]);
HAnimJoint688.skinCoordIndex = new MFInt32(new int[45,46,47,109,110,111,112,113,115,116,117,118]);
HAnimJoint688.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint688.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint688.llimit = new MFFloat(new float[0,0,0]);
Transform Transform689 = createNode("Transform");
Transform689.translation = new SFVec3f(new float[0.20000000298023224,1.138800024986267,-0.03999999910593033]);
Shape Shape690 = createNode("Shape");
Shape690.USE = "jointbox";
Transform689.children = new MFNode();

Transform689.children[0] = Shape690;

HAnimJoint688.children = new MFNode();

HAnimJoint688.children[0] = Transform689;

HAnimSegment HAnimSegment691 = createNode("HAnimSegment");
HAnimSegment691.name = "l_forearm";
HAnimSegment691.DEF = "Joe_l_forearm";
Shape Shape692 = createNode("Shape");
IndexedLineSet IndexedLineSet693 = createNode("IndexedLineSet");
IndexedLineSet693.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate694 = createNode("Coordinate");
Coordinate694.point = new MFVec3f(new float[0.20000000298023224,1.138800024986267,-0.03999999910593033,0.20000000298023224,0.8700000047683716,-0.03999999910593033]);
IndexedLineSet693.coord = Coordinate694;

Shape692.geometry = IndexedLineSet693;

Appearance Appearance695 = createNode("Appearance");
Appearance695.USE = "SegmentLine";
Shape692.appearance = Appearance695;

HAnimSegment691.children = new MFNode();

HAnimSegment691.children[0] = Shape692;

HAnimSite HAnimSite696 = createNode("HAnimSite");
HAnimSite696.name = "l_radial_styloid";
HAnimSite696.DEF = "Joe_l_radial_styloid";
HAnimSite696.translation = new SFVec3f(new float[0.19009999930858612,0.8644999861717224,-0.04149999842047691]);
Shape Shape697 = createNode("Shape");
Shape697.USE = "sitebox";
HAnimSite696.children = new MFNode();

HAnimSite696.children[0] = Shape697;

HAnimSegment691.children[1] = HAnimSite696;

HAnimSite HAnimSite698 = createNode("HAnimSite");
HAnimSite698.name = "l_olecranon";
HAnimSite698.DEF = "Joe_l_olecranon";
HAnimSite698.translation = new SFVec3f(new float[0.20000000298023224,1.138800024986267,-0.07999999821186066]);
Shape Shape699 = createNode("Shape");
Shape699.USE = "sitebox";
HAnimSite698.children = new MFNode();

HAnimSite698.children[0] = Shape699;

HAnimSegment691.children[2] = HAnimSite698;

Transform Transform700 = createNode("Transform");
Transform700.translation = new SFVec3f(new float[0.20000000298023224,1.138800024986267,-0.013000000268220901]);
Shape Shape701 = createNode("Shape");
Shape701.USE = "skinsphere";
Transform700.children = new MFNode();

Transform700.children[0] = Shape701;

HAnimSegment691.children[3] = Transform700;

Transform Transform702 = createNode("Transform");
Transform702.translation = new SFVec3f(new float[0.22499999403953552,1,-0.009999999776482582]);
Shape Shape703 = createNode("Shape");
Shape703.USE = "skinsphere";
Transform702.children = new MFNode();

Transform702.children[0] = Shape703;

HAnimSegment691.children[4] = Transform702;

Transform Transform704 = createNode("Transform");
Transform704.translation = new SFVec3f(new float[0.22499999403953552,1,-0.07000000029802322]);
Shape Shape705 = createNode("Shape");
Shape705.USE = "skinsphere";
Transform704.children = new MFNode();

Transform704.children[0] = Shape705;

HAnimSegment691.children[5] = Transform704;

Transform Transform706 = createNode("Transform");
Transform706.translation = new SFVec3f(new float[0.1850000023841858,1,-0.009999999776482582]);
Shape Shape707 = createNode("Shape");
Shape707.USE = "skinsphere";
Transform706.children = new MFNode();

Transform706.children[0] = Shape707;

HAnimSegment691.children[6] = Transform706;

Transform Transform708 = createNode("Transform");
Transform708.translation = new SFVec3f(new float[0.1850000023841858,1,-0.07000000029802322]);
Shape Shape709 = createNode("Shape");
Shape709.USE = "skinsphere";
Transform708.children = new MFNode();

Transform708.children[0] = Shape709;

HAnimSegment691.children[7] = Transform708;

HAnimJoint688.children[1] = HAnimSegment691;

HAnimJoint HAnimJoint710 = createNode("HAnimJoint");
HAnimJoint710.name = "l_wrist";
HAnimJoint710.DEF = "Joe_l_wrist";
HAnimJoint710.center = new SFVec3f(new float[0.20000000298023224,0.8700000047683716,-0.03999999910593033]);
HAnimJoint710.skinCoordIndex = new MFInt32(new int[119,120,121,122,123,124,125,126]);
HAnimJoint710.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint710.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint710.llimit = new MFFloat(new float[0,0,0]);
Transform Transform711 = createNode("Transform");
Transform711.translation = new SFVec3f(new float[0.20000000298023224,0.8700000047683716,-0.03999999910593033]);
Shape Shape712 = createNode("Shape");
Shape712.USE = "jointbox";
Transform711.children = new MFNode();

Transform711.children[0] = Shape712;

HAnimJoint710.children = new MFNode();

HAnimJoint710.children[0] = Transform711;

HAnimSegment HAnimSegment713 = createNode("HAnimSegment");
HAnimSegment713.name = "l_hand";
HAnimSegment713.DEF = "Joe_l_hand";
Shape Shape714 = createNode("Shape");
IndexedLineSet IndexedLineSet715 = createNode("IndexedLineSet");
IndexedLineSet715.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]);
Coordinate Coordinate716 = createNode("Coordinate");
Coordinate716.point = new MFVec3f(new float[0.20000000298023224,0.8700000047683716,-0.03999999910593033,0.1923999935388565,0.8471999764442444,-0.05339999869465828,0.19830000400543213,0.8023999929428101,-0.02800000086426735,0.19869999587535858,0.8029000163078308,-0.05299999937415123,0.1956000030040741,0.8019000291824341,-0.07940000295639038,0.19249999523162842,0.8065999746322632,-0.10360000282526016]);
IndexedLineSet715.coord = Coordinate716;

Shape714.geometry = IndexedLineSet715;

Appearance Appearance717 = createNode("Appearance");
Appearance717.USE = "SegmentLine";
Shape714.appearance = Appearance717;

HAnimSegment713.children = new MFNode();

HAnimSegment713.children[0] = Shape714;

HAnimSite HAnimSite718 = createNode("HAnimSite");
HAnimSite718.name = "l_metacarpal_pha2";
HAnimSite718.DEF = "Joe_l_metacarpal_pha2";
HAnimSite718.translation = new SFVec3f(new float[0.20090000331401825,0.8138999938964844,-0.02370000071823597]);
Shape Shape719 = createNode("Shape");
Shape719.USE = "sitebox";
HAnimSite718.children = new MFNode();

HAnimSite718.children[0] = Shape719;

HAnimSegment713.children[1] = HAnimSite718;

HAnimSite HAnimSite720 = createNode("HAnimSite");
HAnimSite720.name = "l_ulnar_styloid";
HAnimSite720.DEF = "Joe_l_ulnar_styloid";
HAnimSite720.translation = new SFVec3f(new float[0.2142000049352646,0.8529000282287598,-0.06480000168085098]);
Shape Shape721 = createNode("Shape");
Shape721.USE = "sitebox";
HAnimSite720.children = new MFNode();

HAnimSite720.children[0] = Shape721;

HAnimSegment713.children[2] = HAnimSite720;

HAnimSite HAnimSite722 = createNode("HAnimSite");
HAnimSite722.name = "l_metacarpal_pha5";
HAnimSite722.DEF = "Joe_l_metacarpal_pha5";
HAnimSite722.translation = new SFVec3f(new float[0.19290000200271606,0.7860000133514404,-0.11219999939203262]);
Shape Shape723 = createNode("Shape");
Shape723.USE = "sitebox";
HAnimSite722.children = new MFNode();

HAnimSite722.children[0] = Shape723;

HAnimSegment713.children[3] = HAnimSite722;

HAnimJoint710.children[1] = HAnimSegment713;

HAnimJoint HAnimJoint724 = createNode("HAnimJoint");
HAnimJoint724.name = "l_thumb1";
HAnimJoint724.DEF = "Joe_l_thumb1";
HAnimJoint724.center = new SFVec3f(new float[0.1923999935388565,0.8471999764442444,-0.05339999869465828]);
HAnimJoint724.skinCoordIndex = new MFInt32(new int[127,128]);
HAnimJoint724.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint724.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint724.llimit = new MFFloat(new float[0,0,0]);
Transform Transform725 = createNode("Transform");
Transform725.translation = new SFVec3f(new float[0.1923999935388565,0.8471999764442444,-0.05339999869465828]);
Shape Shape726 = createNode("Shape");
Shape726.USE = "jointbox";
Transform725.children = new MFNode();

Transform725.children[0] = Shape726;

HAnimJoint724.children = new MFNode();

HAnimJoint724.children[0] = Transform725;

HAnimSegment HAnimSegment727 = createNode("HAnimSegment");
HAnimSegment727.name = "l_thumb_metacarpal";
HAnimSegment727.DEF = "Joe_l_thumb_metacarpal";
Shape Shape728 = createNode("Shape");
IndexedLineSet IndexedLineSet729 = createNode("IndexedLineSet");
IndexedLineSet729.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate730 = createNode("Coordinate");
Coordinate730.point = new MFVec3f(new float[0.1923999935388565,0.8471999764442444,-0.05339999869465828,0.19509999454021454,0.8226000070571899,0.02459999918937683]);
IndexedLineSet729.coord = Coordinate730;

Shape728.geometry = IndexedLineSet729;

Appearance Appearance731 = createNode("Appearance");
Appearance731.USE = "SegmentLine";
Shape728.appearance = Appearance731;

HAnimSegment727.children = new MFNode();

HAnimSegment727.children[0] = Shape728;

HAnimJoint724.children[1] = HAnimSegment727;

HAnimJoint HAnimJoint732 = createNode("HAnimJoint");
HAnimJoint732.name = "l_thumb2";
HAnimJoint732.DEF = "Joe_l_thumb2";
HAnimJoint732.center = new SFVec3f(new float[0.19509999454021454,0.8226000070571899,0.02459999918937683]);
HAnimJoint732.skinCoordIndex = new MFInt32(new int[138,139,140,141,142,143]);
HAnimJoint732.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1]);
HAnimJoint732.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint732.llimit = new MFFloat(new float[0,0,0]);
Transform Transform733 = createNode("Transform");
Transform733.translation = new SFVec3f(new float[0.19509999454021454,0.8226000070571899,0.02459999918937683]);
Shape Shape734 = createNode("Shape");
Shape734.USE = "jointbox";
Transform733.children = new MFNode();

Transform733.children[0] = Shape734;

HAnimJoint732.children = new MFNode();

HAnimJoint732.children[0] = Transform733;

HAnimSegment HAnimSegment735 = createNode("HAnimSegment");
HAnimSegment735.name = "l_thumb_distal";
HAnimSegment735.DEF = "Joe_l_thumb_proximal";
Shape Shape736 = createNode("Shape");
IndexedLineSet IndexedLineSet737 = createNode("IndexedLineSet");
IndexedLineSet737.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate738 = createNode("Coordinate");
Coordinate738.point = new MFVec3f(new float[0.19509999454021454,0.8226000070571899,0.02459999918937683,0.19550000131130219,0.8159000277519226,0.04639999940991402]);
IndexedLineSet737.coord = Coordinate738;

Shape736.geometry = IndexedLineSet737;

Appearance Appearance739 = createNode("Appearance");
Appearance739.USE = "SegmentLine";
Shape736.appearance = Appearance739;

HAnimSegment735.children = new MFNode();

HAnimSegment735.children[0] = Shape736;

HAnimJoint732.children[1] = HAnimSegment735;

HAnimJoint HAnimJoint740 = createNode("HAnimJoint");
HAnimJoint740.name = "l_thumb3";
HAnimJoint740.DEF = "Joe_l_thumb3";
HAnimJoint740.center = new SFVec3f(new float[0.19550000131130219,0.8159000277519226,0.04639999940991402]);
HAnimJoint740.skinCoordIndex = new MFInt32(new int[144,145,146,147,148,149,150,151,152]);
HAnimJoint740.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint740.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint740.llimit = new MFFloat(new float[0,0,0]);
Transform Transform741 = createNode("Transform");
Transform741.translation = new SFVec3f(new float[0.19550000131130219,0.8159000277519226,0.04639999940991402]);
Shape Shape742 = createNode("Shape");
Shape742.USE = "jointbox";
Transform741.children = new MFNode();

Transform741.children[0] = Shape742;

HAnimJoint740.children = new MFNode();

HAnimJoint740.children[0] = Transform741;

HAnimSegment HAnimSegment743 = createNode("HAnimSegment");
HAnimSegment743.name = "l_thumb_distal";
HAnimSegment743.DEF = "Joe_l_thumb_distal";
Shape Shape744 = createNode("Shape");
IndexedLineSet IndexedLineSet745 = createNode("IndexedLineSet");
IndexedLineSet745.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate746 = createNode("Coordinate");
Coordinate746.point = new MFVec3f(new float[0.19550000131130219,0.8159000277519226,0.04639999940991402,0.19820000231266022,0.8061000108718872,0.07590000331401825]);
IndexedLineSet745.coord = Coordinate746;

Shape744.geometry = IndexedLineSet745;

Appearance Appearance747 = createNode("Appearance");
Appearance747.USE = "SegmentLine";
Shape744.appearance = Appearance747;

HAnimSegment743.children = new MFNode();

HAnimSegment743.children[0] = Shape744;

HAnimSite HAnimSite748 = createNode("HAnimSite");
HAnimSite748.name = "l_thumb_distal_tip";
HAnimSite748.DEF = "Joe_l_thumb_distal_tip";
HAnimSite748.translation = new SFVec3f(new float[0.19820000231266022,0.8061000108718872,0.07590000331401825]);
Shape Shape749 = createNode("Shape");
Shape749.USE = "sitebox";
HAnimSite748.children = new MFNode();

HAnimSite748.children[0] = Shape749;

HAnimSegment743.children[1] = HAnimSite748;

HAnimJoint740.children[1] = HAnimSegment743;

HAnimJoint732.children[2] = HAnimJoint740;

HAnimJoint724.children[2] = HAnimJoint732;

HAnimJoint710.children[2] = HAnimJoint724;

HAnimJoint HAnimJoint750 = createNode("HAnimJoint");
HAnimJoint750.name = "l_index0";
HAnimJoint750.DEF = "Joe_l_index0";
HAnimJoint750.center = new SFVec3f(new float[0.19830000400543213,0.8023999929428101,-0.02800000086426735]);
HAnimJoint750.skinCoordIndex = new MFInt32(new int[129,130]);
HAnimJoint750.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint750.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint750.llimit = new MFFloat(new float[0,0,0]);
Transform Transform751 = createNode("Transform");
Transform751.translation = new SFVec3f(new float[0.19830000400543213,0.8023999929428101,-0.02800000086426735]);
Shape Shape752 = createNode("Shape");
Shape752.USE = "jointbox";
Transform751.children = new MFNode();

Transform751.children[0] = Shape752;

HAnimJoint750.children = new MFNode();

HAnimJoint750.children[0] = Transform751;

HAnimSegment HAnimSegment753 = createNode("HAnimSegment");
HAnimSegment753.name = "l_index_metacarpal";
HAnimSegment753.DEF = "Joe_l_index_metacarpal";
Shape Shape754 = createNode("Shape");
IndexedLineSet IndexedLineSet755 = createNode("IndexedLineSet");
IndexedLineSet755.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate756 = createNode("Coordinate");
Coordinate756.point = new MFVec3f(new float[0.19830000400543213,0.8023999929428101,-0.02800000086426735,0.19830000400543213,0.781499981880188,-0.02800000086426735]);
IndexedLineSet755.coord = Coordinate756;

Shape754.geometry = IndexedLineSet755;

Appearance Appearance757 = createNode("Appearance");
Appearance757.USE = "SegmentLine";
Shape754.appearance = Appearance757;

HAnimSegment753.children = new MFNode();

HAnimSegment753.children[0] = Shape754;

HAnimJoint750.children[1] = HAnimSegment753;

HAnimJoint HAnimJoint758 = createNode("HAnimJoint");
HAnimJoint758.name = "l_index1";
HAnimJoint758.DEF = "Joe_l_index1";
HAnimJoint758.center = new SFVec3f(new float[0.19830000400543213,0.781499981880188,-0.02800000086426735]);
HAnimJoint758.skinCoordIndex = new MFInt32(new int[138,139,140,153,154,155,163]);
HAnimJoint758.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1,0.5]);
HAnimJoint758.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint758.llimit = new MFFloat(new float[0,0,0]);
Transform Transform759 = createNode("Transform");
Transform759.translation = new SFVec3f(new float[0.19830000400543213,0.781499981880188,-0.02800000086426735]);
Shape Shape760 = createNode("Shape");
Shape760.USE = "jointbox";
Transform759.children = new MFNode();

Transform759.children[0] = Shape760;

HAnimJoint758.children = new MFNode();

HAnimJoint758.children[0] = Transform759;

HAnimSegment HAnimSegment761 = createNode("HAnimSegment");
HAnimSegment761.name = "l_index_proximal";
HAnimSegment761.DEF = "Joe_l_index_proximal";
Shape Shape762 = createNode("Shape");
IndexedLineSet IndexedLineSet763 = createNode("IndexedLineSet");
IndexedLineSet763.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate764 = createNode("Coordinate");
Coordinate764.point = new MFVec3f(new float[0.19830000400543213,0.781499981880188,-0.02800000086426735,0.20170000195503235,0.736299991607666,-0.024800000712275505]);
IndexedLineSet763.coord = Coordinate764;

Shape762.geometry = IndexedLineSet763;

Appearance Appearance765 = createNode("Appearance");
Appearance765.USE = "SegmentLine";
Shape762.appearance = Appearance765;

HAnimSegment761.children = new MFNode();

HAnimSegment761.children[0] = Shape762;

HAnimJoint758.children[1] = HAnimSegment761;

HAnimJoint HAnimJoint766 = createNode("HAnimJoint");
HAnimJoint766.name = "l_index2";
HAnimJoint766.DEF = "Joe_l_index2";
HAnimJoint766.center = new SFVec3f(new float[0.20170000195503235,0.736299991607666,-0.024800000712275505]);
HAnimJoint766.skinCoordIndex = new MFInt32(new int[166,167,168,169]);
HAnimJoint766.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint766.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint766.llimit = new MFFloat(new float[0,0,0]);
Transform Transform767 = createNode("Transform");
Transform767.translation = new SFVec3f(new float[0.20170000195503235,0.736299991607666,-0.024800000712275505]);
Shape Shape768 = createNode("Shape");
Shape768.USE = "jointbox";
Transform767.children = new MFNode();

Transform767.children[0] = Shape768;

HAnimJoint766.children = new MFNode();

HAnimJoint766.children[0] = Transform767;

HAnimSegment HAnimSegment769 = createNode("HAnimSegment");
HAnimSegment769.name = "l_index_middle";
HAnimSegment769.DEF = "Joe_l_index_middle";
Shape Shape770 = createNode("Shape");
IndexedLineSet IndexedLineSet771 = createNode("IndexedLineSet");
IndexedLineSet771.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate772 = createNode("Coordinate");
Coordinate772.point = new MFVec3f(new float[0.20170000195503235,0.736299991607666,-0.024800000712275505,0.20280000567436218,0.7139000296592712,-0.023600000888109207]);
IndexedLineSet771.coord = Coordinate772;

Shape770.geometry = IndexedLineSet771;

Appearance Appearance773 = createNode("Appearance");
Appearance773.USE = "SegmentLine";
Shape770.appearance = Appearance773;

HAnimSegment769.children = new MFNode();

HAnimSegment769.children[0] = Shape770;

HAnimJoint766.children[1] = HAnimSegment769;

HAnimJoint HAnimJoint774 = createNode("HAnimJoint");
HAnimJoint774.name = "l_index3";
HAnimJoint774.DEF = "Joe_l_index3";
HAnimJoint774.center = new SFVec3f(new float[0.20280000567436218,0.7139000296592712,-0.023600000888109207]);
HAnimJoint774.skinCoordIndex = new MFInt32(new int[170,171,172,173,174,175,176,177,178]);
HAnimJoint774.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint774.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint774.llimit = new MFFloat(new float[0,0,0]);
Transform Transform775 = createNode("Transform");
Transform775.translation = new SFVec3f(new float[0.20280000567436218,0.7139000296592712,-0.023600000888109207]);
Shape Shape776 = createNode("Shape");
Shape776.USE = "jointbox";
Transform775.children = new MFNode();

Transform775.children[0] = Shape776;

HAnimJoint774.children = new MFNode();

HAnimJoint774.children[0] = Transform775;

HAnimSegment HAnimSegment777 = createNode("HAnimSegment");
HAnimSegment777.name = "l_index_distal";
HAnimSegment777.DEF = "Joe_l_index_distal";
Shape Shape778 = createNode("Shape");
IndexedLineSet IndexedLineSet779 = createNode("IndexedLineSet");
IndexedLineSet779.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate780 = createNode("Coordinate");
Coordinate780.point = new MFVec3f(new float[0.20280000567436218,0.7139000296592712,-0.023600000888109207,0.20890000462532043,0.6858000159263611,-0.02449999935925007]);
IndexedLineSet779.coord = Coordinate780;

Shape778.geometry = IndexedLineSet779;

Appearance Appearance781 = createNode("Appearance");
Appearance781.USE = "SegmentLine";
Shape778.appearance = Appearance781;

HAnimSegment777.children = new MFNode();

HAnimSegment777.children[0] = Shape778;

HAnimSite HAnimSite782 = createNode("HAnimSite");
HAnimSite782.name = "l_index_distal_tip";
HAnimSite782.DEF = "Joe_l_index_distal_tip";
HAnimSite782.translation = new SFVec3f(new float[0.20890000462532043,0.6858000159263611,-0.02449999935925007]);
Shape Shape783 = createNode("Shape");
Shape783.USE = "sitebox";
HAnimSite782.children = new MFNode();

HAnimSite782.children[0] = Shape783;

HAnimSegment777.children[1] = HAnimSite782;

HAnimSite HAnimSite784 = createNode("HAnimSite");
HAnimSite784.name = "l_dactylion";
HAnimSite784.DEF = "Joe_l_dactylion";
HAnimSite784.translation = new SFVec3f(new float[0.20559999346733093,0.6743000149726868,-0.04820000007748604]);
Shape Shape785 = createNode("Shape");
Shape785.USE = "sitebox";
HAnimSite784.children = new MFNode();

HAnimSite784.children[0] = Shape785;

HAnimSegment777.children[2] = HAnimSite784;

HAnimJoint774.children[1] = HAnimSegment777;

HAnimJoint766.children[2] = HAnimJoint774;

HAnimJoint758.children[2] = HAnimJoint766;

HAnimJoint750.children[2] = HAnimJoint758;

HAnimJoint710.children[3] = HAnimJoint750;

HAnimJoint HAnimJoint786 = createNode("HAnimJoint");
HAnimJoint786.name = "l_middle0";
HAnimJoint786.DEF = "Joe_l_middle0";
HAnimJoint786.center = new SFVec3f(new float[0.19869999587535858,0.8029000163078308,-0.05299999937415123]);
HAnimJoint786.skinCoordIndex = new MFInt32(new int[131,132]);
HAnimJoint786.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint786.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint786.llimit = new MFFloat(new float[0,0,0]);
Transform Transform787 = createNode("Transform");
Transform787.translation = new SFVec3f(new float[0.19869999587535858,0.8029000163078308,-0.05299999937415123]);
Shape Shape788 = createNode("Shape");
Shape788.USE = "jointbox";
Transform787.children = new MFNode();

Transform787.children[0] = Shape788;

HAnimJoint786.children = new MFNode();

HAnimJoint786.children[0] = Transform787;

HAnimSegment HAnimSegment789 = createNode("HAnimSegment");
HAnimSegment789.name = "l_middle_metacarpal";
HAnimSegment789.DEF = "Joe_l_middle_metacarpal";
Shape Shape790 = createNode("Shape");
IndexedLineSet IndexedLineSet791 = createNode("IndexedLineSet");
IndexedLineSet791.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate792 = createNode("Coordinate");
Coordinate792.point = new MFVec3f(new float[0.19869999587535858,0.8029000163078308,-0.05299999937415123,0.19869999587535858,0.7817999720573425,-0.05299999937415123]);
IndexedLineSet791.coord = Coordinate792;

Shape790.geometry = IndexedLineSet791;

Appearance Appearance793 = createNode("Appearance");
Appearance793.USE = "SegmentLine";
Shape790.appearance = Appearance793;

HAnimSegment789.children = new MFNode();

HAnimSegment789.children[0] = Shape790;

HAnimJoint786.children[1] = HAnimSegment789;

HAnimJoint HAnimJoint794 = createNode("HAnimJoint");
HAnimJoint794.name = "l_middle1";
HAnimJoint794.DEF = "Joe_l_middle1";
HAnimJoint794.center = new SFVec3f(new float[0.19869999587535858,0.7817999720573425,-0.05299999937415123]);
HAnimJoint794.skinCoordIndex = new MFInt32(new int[156,157,163,164]);
HAnimJoint794.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimJoint794.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint794.llimit = new MFFloat(new float[0,0,0]);
Transform Transform795 = createNode("Transform");
Transform795.translation = new SFVec3f(new float[0.19869999587535858,0.7817999720573425,-0.05299999937415123]);
Shape Shape796 = createNode("Shape");
Shape796.USE = "jointbox";
Transform795.children = new MFNode();

Transform795.children[0] = Shape796;

HAnimJoint794.children = new MFNode();

HAnimJoint794.children[0] = Transform795;

HAnimSegment HAnimSegment797 = createNode("HAnimSegment");
HAnimSegment797.name = "l_middle_proximal";
HAnimSegment797.DEF = "Joe_l_middle_proximal";
Shape Shape798 = createNode("Shape");
IndexedLineSet IndexedLineSet799 = createNode("IndexedLineSet");
IndexedLineSet799.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate800 = createNode("Coordinate");
Coordinate800.point = new MFVec3f(new float[0.19869999587535858,0.7817999720573425,-0.05299999937415123,0.2012999951839447,0.7272999882698059,-0.0502999983727932]);
IndexedLineSet799.coord = Coordinate800;

Shape798.geometry = IndexedLineSet799;

Appearance Appearance801 = createNode("Appearance");
Appearance801.USE = "SegmentLine";
Shape798.appearance = Appearance801;

HAnimSegment797.children = new MFNode();

HAnimSegment797.children[0] = Shape798;

HAnimJoint794.children[1] = HAnimSegment797;

HAnimJoint HAnimJoint802 = createNode("HAnimJoint");
HAnimJoint802.name = "l_middle2";
HAnimJoint802.DEF = "Joe_l_middle2";
HAnimJoint802.center = new SFVec3f(new float[0.2012999951839447,0.7272999882698059,-0.0502999983727932]);
HAnimJoint802.skinCoordIndex = new MFInt32(new int[179,180,181,182]);
HAnimJoint802.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint802.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint802.llimit = new MFFloat(new float[0,0,0]);
Transform Transform803 = createNode("Transform");
Transform803.translation = new SFVec3f(new float[0.2012999951839447,0.7272999882698059,-0.0502999983727932]);
Shape Shape804 = createNode("Shape");
Shape804.USE = "jointbox";
Transform803.children = new MFNode();

Transform803.children[0] = Shape804;

HAnimJoint802.children = new MFNode();

HAnimJoint802.children[0] = Transform803;

HAnimSegment HAnimSegment805 = createNode("HAnimSegment");
HAnimSegment805.name = "l_middle_middle";
HAnimSegment805.DEF = "Joe_l_middle_middle";
Shape Shape806 = createNode("Shape");
IndexedLineSet IndexedLineSet807 = createNode("IndexedLineSet");
IndexedLineSet807.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate808 = createNode("Coordinate");
Coordinate808.point = new MFVec3f(new float[0.2012999951839447,0.7272999882698059,-0.0502999983727932,0.20260000228881836,0.7010999917984009,-0.049400001764297485]);
IndexedLineSet807.coord = Coordinate808;

Shape806.geometry = IndexedLineSet807;

Appearance Appearance809 = createNode("Appearance");
Appearance809.USE = "SegmentLine";
Shape806.appearance = Appearance809;

HAnimSegment805.children = new MFNode();

HAnimSegment805.children[0] = Shape806;

HAnimJoint802.children[1] = HAnimSegment805;

HAnimJoint HAnimJoint810 = createNode("HAnimJoint");
HAnimJoint810.name = "l_middle3";
HAnimJoint810.DEF = "Joe_l_middle3";
HAnimJoint810.center = new SFVec3f(new float[0.20260000228881836,0.7010999917984009,-0.049400001764297485]);
HAnimJoint810.skinCoordIndex = new MFInt32(new int[183,184,185,186,187,188,189,190,191]);
HAnimJoint810.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint810.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint810.llimit = new MFFloat(new float[0,0,0]);
Transform Transform811 = createNode("Transform");
Transform811.translation = new SFVec3f(new float[0.20260000228881836,0.7010999917984009,-0.049400001764297485]);
Shape Shape812 = createNode("Shape");
Shape812.USE = "jointbox";
Transform811.children = new MFNode();

Transform811.children[0] = Shape812;

HAnimJoint810.children = new MFNode();

HAnimJoint810.children[0] = Transform811;

HAnimSegment HAnimSegment813 = createNode("HAnimSegment");
HAnimSegment813.name = "l_middle_distal";
HAnimSegment813.DEF = "Joe_l_middle_distal";
Shape Shape814 = createNode("Shape");
IndexedLineSet IndexedLineSet815 = createNode("IndexedLineSet");
IndexedLineSet815.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate816 = createNode("Coordinate");
Coordinate816.point = new MFVec3f(new float[0.20260000228881836,0.7010999917984009,-0.049400001764297485,0.20800000429153442,0.6730999946594238,-0.04910000041127205]);
IndexedLineSet815.coord = Coordinate816;

Shape814.geometry = IndexedLineSet815;

Appearance Appearance817 = createNode("Appearance");
Appearance817.USE = "SegmentLine";
Shape814.appearance = Appearance817;

HAnimSegment813.children = new MFNode();

HAnimSegment813.children[0] = Shape814;

HAnimSite HAnimSite818 = createNode("HAnimSite");
HAnimSite818.name = "l_middle_distal_tip";
HAnimSite818.DEF = "Joe_l_middle_distal_tip";
HAnimSite818.translation = new SFVec3f(new float[0.20800000429153442,0.6730999946594238,-0.04910000041127205]);
Shape Shape819 = createNode("Shape");
Shape819.USE = "sitebox";
HAnimSite818.children = new MFNode();

HAnimSite818.children[0] = Shape819;

HAnimSegment813.children[1] = HAnimSite818;

HAnimJoint810.children[1] = HAnimSegment813;

HAnimJoint802.children[2] = HAnimJoint810;

HAnimJoint794.children[2] = HAnimJoint802;

HAnimJoint786.children[2] = HAnimJoint794;

HAnimJoint710.children[4] = HAnimJoint786;

HAnimJoint HAnimJoint820 = createNode("HAnimJoint");
HAnimJoint820.name = "l_ring0";
HAnimJoint820.DEF = "Joe_l_ring0";
HAnimJoint820.center = new SFVec3f(new float[0.1956000030040741,0.8019000291824341,-0.07940000295639038]);
HAnimJoint820.skinCoordIndex = new MFInt32(new int[133,134]);
HAnimJoint820.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint820.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint820.llimit = new MFFloat(new float[0,0,0]);
Transform Transform821 = createNode("Transform");
Transform821.translation = new SFVec3f(new float[0.1956000030040741,0.8019000291824341,-0.07940000295639038]);
Shape Shape822 = createNode("Shape");
Shape822.USE = "jointbox";
Transform821.children = new MFNode();

Transform821.children[0] = Shape822;

HAnimJoint820.children = new MFNode();

HAnimJoint820.children[0] = Transform821;

HAnimSegment HAnimSegment823 = createNode("HAnimSegment");
HAnimSegment823.name = "l_ring_metacarpal";
HAnimSegment823.DEF = "Joe_l_ring_metacarpal";
Shape Shape824 = createNode("Shape");
IndexedLineSet IndexedLineSet825 = createNode("IndexedLineSet");
IndexedLineSet825.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate826 = createNode("Coordinate");
Coordinate826.point = new MFVec3f(new float[0.1956000030040741,0.8019000291824341,-0.07940000295639038,0.1956000030040741,0.781499981880188,-0.07940000295639038]);
IndexedLineSet825.coord = Coordinate826;

Shape824.geometry = IndexedLineSet825;

Appearance Appearance827 = createNode("Appearance");
Appearance827.USE = "SegmentLine";
Shape824.appearance = Appearance827;

HAnimSegment823.children = new MFNode();

HAnimSegment823.children[0] = Shape824;

HAnimJoint820.children[1] = HAnimSegment823;

HAnimJoint HAnimJoint828 = createNode("HAnimJoint");
HAnimJoint828.name = "l_ring1";
HAnimJoint828.DEF = "Joe_l_ring1";
HAnimJoint828.center = new SFVec3f(new float[0.1956000030040741,0.781499981880188,-0.07940000295639038]);
HAnimJoint828.skinCoordIndex = new MFInt32(new int[158,159,164,165]);
HAnimJoint828.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimJoint828.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint828.llimit = new MFFloat(new float[0,0,0]);
Transform Transform829 = createNode("Transform");
Transform829.translation = new SFVec3f(new float[0.1956000030040741,0.781499981880188,-0.07940000295639038]);
Shape Shape830 = createNode("Shape");
Shape830.USE = "jointbox";
Transform829.children = new MFNode();

Transform829.children[0] = Shape830;

HAnimJoint828.children = new MFNode();

HAnimJoint828.children[0] = Transform829;

HAnimSegment HAnimSegment831 = createNode("HAnimSegment");
HAnimSegment831.name = "l_ring_proximal";
HAnimSegment831.DEF = "Joe_l_ring_proximal";
Shape Shape832 = createNode("Shape");
IndexedLineSet IndexedLineSet833 = createNode("IndexedLineSet");
IndexedLineSet833.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate834 = createNode("Coordinate");
Coordinate834.point = new MFVec3f(new float[0.1956000030040741,0.781499981880188,-0.07940000295639038,0.1973000019788742,0.7286999821662903,-0.07769999653100967]);
IndexedLineSet833.coord = Coordinate834;

Shape832.geometry = IndexedLineSet833;

Appearance Appearance835 = createNode("Appearance");
Appearance835.USE = "SegmentLine";
Shape832.appearance = Appearance835;

HAnimSegment831.children = new MFNode();

HAnimSegment831.children[0] = Shape832;

HAnimJoint828.children[1] = HAnimSegment831;

HAnimJoint HAnimJoint836 = createNode("HAnimJoint");
HAnimJoint836.name = "l_ring2";
HAnimJoint836.DEF = "Joe_l_ring2";
HAnimJoint836.center = new SFVec3f(new float[0.1973000019788742,0.7286999821662903,-0.07769999653100967]);
HAnimJoint836.skinCoordIndex = new MFInt32(new int[192,193,194,195]);
HAnimJoint836.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint836.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint836.llimit = new MFFloat(new float[0,0,0]);
Transform Transform837 = createNode("Transform");
Transform837.translation = new SFVec3f(new float[0.1973000019788742,0.7286999821662903,-0.07769999653100967]);
Shape Shape838 = createNode("Shape");
Shape838.USE = "jointbox";
Transform837.children = new MFNode();

Transform837.children[0] = Shape838;

HAnimJoint836.children = new MFNode();

HAnimJoint836.children[0] = Transform837;

HAnimSegment HAnimSegment839 = createNode("HAnimSegment");
HAnimSegment839.name = "l_ring_middle";
HAnimSegment839.DEF = "Joe_l_ring_middle";
Shape Shape840 = createNode("Shape");
IndexedLineSet IndexedLineSet841 = createNode("IndexedLineSet");
IndexedLineSet841.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate842 = createNode("Coordinate");
Coordinate842.point = new MFVec3f(new float[0.1973000019788742,0.7286999821662903,-0.07769999653100967,0.19830000400543213,0.7045000195503235,-0.07670000195503235]);
IndexedLineSet841.coord = Coordinate842;

Shape840.geometry = IndexedLineSet841;

Appearance Appearance843 = createNode("Appearance");
Appearance843.USE = "SegmentLine";
Shape840.appearance = Appearance843;

HAnimSegment839.children = new MFNode();

HAnimSegment839.children[0] = Shape840;

HAnimJoint836.children[1] = HAnimSegment839;

HAnimJoint HAnimJoint844 = createNode("HAnimJoint");
HAnimJoint844.name = "l_ring3";
HAnimJoint844.DEF = "Joe_l_ring3";
HAnimJoint844.center = new SFVec3f(new float[0.19830000400543213,0.7045000195503235,-0.07670000195503235]);
HAnimJoint844.skinCoordIndex = new MFInt32(new int[196,197,198,199,200,201,202,203,204]);
HAnimJoint844.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint844.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint844.llimit = new MFFloat(new float[0,0,0]);
Transform Transform845 = createNode("Transform");
Transform845.translation = new SFVec3f(new float[0.19830000400543213,0.7045000195503235,-0.07670000195503235]);
Shape Shape846 = createNode("Shape");
Shape846.USE = "jointbox";
Transform845.children = new MFNode();

Transform845.children[0] = Shape846;

HAnimJoint844.children = new MFNode();

HAnimJoint844.children[0] = Transform845;

HAnimSegment HAnimSegment847 = createNode("HAnimSegment");
HAnimSegment847.name = "l_ring_distal";
HAnimSegment847.DEF = "Joe_l_ring_distal";
Shape Shape848 = createNode("Shape");
IndexedLineSet IndexedLineSet849 = createNode("IndexedLineSet");
IndexedLineSet849.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate850 = createNode("Coordinate");
Coordinate850.point = new MFVec3f(new float[0.19830000400543213,0.7045000195503235,-0.07670000195503235,0.20350000262260437,0.675000011920929,-0.07559999823570251]);
IndexedLineSet849.coord = Coordinate850;

Shape848.geometry = IndexedLineSet849;

Appearance Appearance851 = createNode("Appearance");
Appearance851.USE = "SegmentLine";
Shape848.appearance = Appearance851;

HAnimSegment847.children = new MFNode();

HAnimSegment847.children[0] = Shape848;

HAnimSite HAnimSite852 = createNode("HAnimSite");
HAnimSite852.name = "l_ring_distal_tip";
HAnimSite852.DEF = "Joe_l_ring_distal_tip";
HAnimSite852.translation = new SFVec3f(new float[0.20350000262260437,0.675000011920929,-0.07559999823570251]);
Shape Shape853 = createNode("Shape");
Shape853.USE = "sitebox";
HAnimSite852.children = new MFNode();

HAnimSite852.children[0] = Shape853;

HAnimSegment847.children[1] = HAnimSite852;

HAnimJoint844.children[1] = HAnimSegment847;

HAnimJoint836.children[2] = HAnimJoint844;

HAnimJoint828.children[2] = HAnimJoint836;

HAnimJoint820.children[2] = HAnimJoint828;

HAnimJoint710.children[5] = HAnimJoint820;

HAnimJoint HAnimJoint854 = createNode("HAnimJoint");
HAnimJoint854.name = "l_pinky0";
HAnimJoint854.DEF = "Joe_l_pinky0";
HAnimJoint854.center = new SFVec3f(new float[0.19249999523162842,0.8065999746322632,-0.10360000282526016]);
HAnimJoint854.skinCoordIndex = new MFInt32(new int[135,136,137,165]);
HAnimJoint854.skinCoordWeight = new MFFloat(new float[1,1,1,0.5]);
HAnimJoint854.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint854.llimit = new MFFloat(new float[0,0,0]);
Transform Transform855 = createNode("Transform");
Transform855.translation = new SFVec3f(new float[0.19249999523162842,0.8065999746322632,-0.10360000282526016]);
Shape Shape856 = createNode("Shape");
Shape856.USE = "jointbox";
Transform855.children = new MFNode();

Transform855.children[0] = Shape856;

HAnimJoint854.children = new MFNode();

HAnimJoint854.children[0] = Transform855;

HAnimSegment HAnimSegment857 = createNode("HAnimSegment");
HAnimSegment857.name = "l_pinky_metacarpal";
HAnimSegment857.DEF = "Joe_l_pinky_metacarpal";
Shape Shape858 = createNode("Shape");
IndexedLineSet IndexedLineSet859 = createNode("IndexedLineSet");
IndexedLineSet859.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate860 = createNode("Coordinate");
Coordinate860.point = new MFVec3f(new float[0.19249999523162842,0.8065999746322632,-0.10360000282526016,0.19249999523162842,0.7865999937057495,-0.10360000282526016]);
IndexedLineSet859.coord = Coordinate860;

Shape858.geometry = IndexedLineSet859;

Appearance Appearance861 = createNode("Appearance");
Appearance861.USE = "SegmentLine";
Shape858.appearance = Appearance861;

HAnimSegment857.children = new MFNode();

HAnimSegment857.children[0] = Shape858;

HAnimJoint854.children[1] = HAnimSegment857;

HAnimJoint HAnimJoint862 = createNode("HAnimJoint");
HAnimJoint862.name = "l_pinky1";
HAnimJoint862.DEF = "Joe_l_pinky1";
HAnimJoint862.center = new SFVec3f(new float[0.19249999523162842,0.7865999937057495,-0.10360000282526016]);
HAnimJoint862.skinCoordIndex = new MFInt32(new int[160,161,162]);
HAnimJoint862.skinCoordWeight = new MFFloat(new float[1,1,1]);
HAnimJoint862.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint862.llimit = new MFFloat(new float[0,0,0]);
Transform Transform863 = createNode("Transform");
Transform863.translation = new SFVec3f(new float[0.19249999523162842,0.7865999937057495,-0.10360000282526016]);
Shape Shape864 = createNode("Shape");
Shape864.USE = "jointbox";
Transform863.children = new MFNode();

Transform863.children[0] = Shape864;

HAnimJoint862.children = new MFNode();

HAnimJoint862.children[0] = Transform863;

HAnimSegment HAnimSegment865 = createNode("HAnimSegment");
HAnimSegment865.name = "l_pinky_proximal";
HAnimSegment865.DEF = "Joe_l_pinky_proximal";
Shape Shape866 = createNode("Shape");
IndexedLineSet IndexedLineSet867 = createNode("IndexedLineSet");
IndexedLineSet867.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate868 = createNode("Coordinate");
Coordinate868.point = new MFVec3f(new float[0.19249999523162842,0.7865999937057495,-0.10360000282526016,0.19380000233650208,0.745199978351593,-0.10239999741315842]);
IndexedLineSet867.coord = Coordinate868;

Shape866.geometry = IndexedLineSet867;

Appearance Appearance869 = createNode("Appearance");
Appearance869.USE = "SegmentLine";
Shape866.appearance = Appearance869;

HAnimSegment865.children = new MFNode();

HAnimSegment865.children[0] = Shape866;

HAnimJoint862.children[1] = HAnimSegment865;

HAnimJoint HAnimJoint870 = createNode("HAnimJoint");
HAnimJoint870.name = "l_pinky2";
HAnimJoint870.DEF = "Joe_l_pinky2";
HAnimJoint870.center = new SFVec3f(new float[0.19380000233650208,0.745199978351593,-0.10239999741315842]);
HAnimJoint870.skinCoordIndex = new MFInt32(new int[205,206,207,208]);
HAnimJoint870.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint870.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint870.llimit = new MFFloat(new float[0,0,0]);
Transform Transform871 = createNode("Transform");
Transform871.translation = new SFVec3f(new float[0.19380000233650208,0.745199978351593,-0.10239999741315842]);
Shape Shape872 = createNode("Shape");
Shape872.USE = "jointbox";
Transform871.children = new MFNode();

Transform871.children[0] = Shape872;

HAnimJoint870.children = new MFNode();

HAnimJoint870.children[0] = Transform871;

HAnimSegment HAnimSegment873 = createNode("HAnimSegment");
HAnimSegment873.name = "l_pinky_middle";
HAnimSegment873.DEF = "Joe_l_pinky_middle";
Shape Shape874 = createNode("Shape");
IndexedLineSet IndexedLineSet875 = createNode("IndexedLineSet");
IndexedLineSet875.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate876 = createNode("Coordinate");
Coordinate876.point = new MFVec3f(new float[0.19380000233650208,0.745199978351593,-0.10239999741315842,0.19480000436306,0.7276999950408936,-0.10170000046491623]);
IndexedLineSet875.coord = Coordinate876;

Shape874.geometry = IndexedLineSet875;

Appearance Appearance877 = createNode("Appearance");
Appearance877.USE = "SegmentLine";
Shape874.appearance = Appearance877;

HAnimSegment873.children = new MFNode();

HAnimSegment873.children[0] = Shape874;

HAnimJoint870.children[1] = HAnimSegment873;

HAnimJoint HAnimJoint878 = createNode("HAnimJoint");
HAnimJoint878.name = "l_pinky3";
HAnimJoint878.DEF = "Joe_l_pinky3";
HAnimJoint878.center = new SFVec3f(new float[0.19480000436306,0.7276999950408936,-0.10170000046491623]);
HAnimJoint878.skinCoordIndex = new MFInt32(new int[209,210,211,212,213,214,215,216,217]);
HAnimJoint878.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint878.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint878.llimit = new MFFloat(new float[0,0,0]);
Transform Transform879 = createNode("Transform");
Transform879.translation = new SFVec3f(new float[0.19480000436306,0.7276999950408936,-0.10170000046491623]);
Shape Shape880 = createNode("Shape");
Shape880.USE = "jointbox";
Transform879.children = new MFNode();

Transform879.children[0] = Shape880;

HAnimJoint878.children = new MFNode();

HAnimJoint878.children[0] = Transform879;

HAnimSegment HAnimSegment881 = createNode("HAnimSegment");
HAnimSegment881.name = "l_pinky_distal";
HAnimSegment881.DEF = "Joe_l_pinky_distal";
Shape Shape882 = createNode("Shape");
IndexedLineSet IndexedLineSet883 = createNode("IndexedLineSet");
IndexedLineSet883.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate884 = createNode("Coordinate");
Coordinate884.point = new MFVec3f(new float[0.19480000436306,0.7276999950408936,-0.10170000046491623,0.2013999968767166,0.7009000182151794,-0.10119999945163727]);
IndexedLineSet883.coord = Coordinate884;

Shape882.geometry = IndexedLineSet883;

Appearance Appearance885 = createNode("Appearance");
Appearance885.USE = "SegmentLine";
Shape882.appearance = Appearance885;

HAnimSegment881.children = new MFNode();

HAnimSegment881.children[0] = Shape882;

HAnimSite HAnimSite886 = createNode("HAnimSite");
HAnimSite886.name = "l_pinky_distal_tip";
HAnimSite886.DEF = "Joe_l_pinky_distal_tip";
HAnimSite886.translation = new SFVec3f(new float[0.2013999968767166,0.7009000182151794,-0.10119999945163727]);
Shape Shape887 = createNode("Shape");
Shape887.USE = "sitebox";
HAnimSite886.children = new MFNode();

HAnimSite886.children[0] = Shape887;

HAnimSegment881.children[1] = HAnimSite886;

HAnimJoint878.children[1] = HAnimSegment881;

HAnimJoint870.children[2] = HAnimJoint878;

HAnimJoint862.children[2] = HAnimJoint870;

HAnimJoint854.children[2] = HAnimJoint862;

HAnimJoint710.children[6] = HAnimJoint854;

HAnimJoint688.children[2] = HAnimJoint710;

HAnimJoint664.children[2] = HAnimJoint688;

HAnimJoint648.children[2] = HAnimJoint664;

HAnimJoint638.children[2] = HAnimJoint648;

HAnimJoint521.children[3] = HAnimJoint638;

HAnimJoint513.children[2] = HAnimJoint521;

HAnimJoint HAnimJoint888 = createNode("HAnimJoint");
HAnimJoint888.name = "r_sternoclavicular";
HAnimJoint888.DEF = "Joe_r_sternoclavicular";
HAnimJoint888.center = new SFVec3f(new float[-0.029999999329447746,1.4600000381469727,0]);
HAnimJoint888.skinCoordIndex = new MFInt32(new int[10]);
HAnimJoint888.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint888.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint888.llimit = new MFFloat(new float[0,0,0]);
Transform Transform889 = createNode("Transform");
Transform889.translation = new SFVec3f(new float[-0.029999999329447746,1.4600000381469727,0.019999999552965164]);
Shape Shape890 = createNode("Shape");
Shape890.USE = "jointbox";
Transform889.children = new MFNode();

Transform889.children[0] = Shape890;

HAnimJoint888.children = new MFNode();

HAnimJoint888.children[0] = Transform889;

HAnimSegment HAnimSegment891 = createNode("HAnimSegment");
HAnimSegment891.name = "r_clavicle";
HAnimSegment891.DEF = "Joe_r_clavicle";
Shape Shape892 = createNode("Shape");
IndexedLineSet IndexedLineSet893 = createNode("IndexedLineSet");
IndexedLineSet893.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate894 = createNode("Coordinate");
Coordinate894.point = new MFVec3f(new float[-0.029999999329447746,1.4600000381469727,0.019999999552965164,-0.09000000357627869,1.409999966621399,-0.09000000357627869]);
IndexedLineSet893.coord = Coordinate894;

Shape892.geometry = IndexedLineSet893;

Appearance Appearance895 = createNode("Appearance");
Appearance895.USE = "SegmentLine";
Shape892.appearance = Appearance895;

HAnimSegment891.children = new MFNode();

HAnimSegment891.children[0] = Shape892;

HAnimSite HAnimSite896 = createNode("HAnimSite");
HAnimSite896.name = "r_clavicale";
HAnimSite896.DEF = "Joe_r_clavicale";
HAnimSite896.translation = new SFVec3f(new float[-0.029999999329447746,1.4600000381469727,0.03500000014901161]);
Shape Shape897 = createNode("Shape");
Shape897.USE = "sitebox";
HAnimSite896.children = new MFNode();

HAnimSite896.children[0] = Shape897;

HAnimSegment891.children[1] = HAnimSite896;

HAnimJoint888.children[1] = HAnimSegment891;

HAnimJoint HAnimJoint898 = createNode("HAnimJoint");
HAnimJoint898.name = "r_acromioclavicular";
HAnimJoint898.DEF = "Joe_r_acromioclavicular";
HAnimJoint898.center = new SFVec3f(new float[-0.09000000357627869,1.409999966621399,-0.10999999940395355]);
HAnimJoint898.skinCoordIndex = new MFInt32(new int[77,29]);
HAnimJoint898.skinCoordWeight = new MFFloat(new float[1,0.8999999761581421]);
HAnimJoint898.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint898.llimit = new MFFloat(new float[0,0,0]);
Transform Transform899 = createNode("Transform");
Transform899.translation = new SFVec3f(new float[-0.09000000357627869,1.409999966621399,-0.09000000357627869]);
Shape Shape900 = createNode("Shape");
Shape900.USE = "jointbox";
Transform899.children = new MFNode();

Transform899.children[0] = Shape900;

HAnimJoint898.children = new MFNode();

HAnimJoint898.children[0] = Transform899;

HAnimSegment HAnimSegment901 = createNode("HAnimSegment");
HAnimSegment901.name = "r_scapula";
HAnimSegment901.DEF = "Joe_r_scapula";
Shape Shape902 = createNode("Shape");
IndexedLineSet IndexedLineSet903 = createNode("IndexedLineSet");
IndexedLineSet903.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate904 = createNode("Coordinate");
Coordinate904.point = new MFVec3f(new float[-0.09000000357627869,1.409999966621399,-0.09000000357627869,-0.20000000298023224,1.440000057220459,-0.03999999910593033]);
IndexedLineSet903.coord = Coordinate904;

Shape902.geometry = IndexedLineSet903;

Appearance Appearance905 = createNode("Appearance");
Appearance905.USE = "SegmentLine";
Shape902.appearance = Appearance905;

HAnimSegment901.children = new MFNode();

HAnimSegment901.children[0] = Shape902;

HAnimSite HAnimSite906 = createNode("HAnimSite");
HAnimSite906.name = "r_acromion";
HAnimSite906.DEF = "Joe_r_acromion";
HAnimSite906.translation = new SFVec3f(new float[-0.17800000309944153,1.4824999570846558,-0.0625]);
Shape Shape907 = createNode("Shape");
Shape907.USE = "sitebox";
HAnimSite906.children = new MFNode();

HAnimSite906.children[0] = Shape907;

HAnimSegment901.children[1] = HAnimSite906;

HAnimSite HAnimSite908 = createNode("HAnimSite");
HAnimSite908.name = "r_axilla_ant";
HAnimSite908.DEF = "Joe_r_axilla_ant";
HAnimSite908.translation = new SFVec3f(new float[-0.17000000178813934,1.3799999952316284,0.007000000216066837]);
Shape Shape909 = createNode("Shape");
Shape909.USE = "sitebox";
HAnimSite908.children = new MFNode();

HAnimSite908.children[0] = Shape909;

HAnimSegment901.children[2] = HAnimSite908;

HAnimSite HAnimSite910 = createNode("HAnimSite");
HAnimSite910.name = "r_axilla_post";
HAnimSite910.DEF = "Joe_r_axilla_post";
HAnimSite910.translation = new SFVec3f(new float[-0.1599999964237213,1.3799999952316284,-0.12700000405311584]);
Shape Shape911 = createNode("Shape");
Shape911.USE = "sitebox";
HAnimSite910.children = new MFNode();

HAnimSite910.children[0] = Shape911;

HAnimSegment901.children[3] = HAnimSite910;

Transform Transform912 = createNode("Transform");
Transform912.translation = new SFVec3f(new float[-0.10999999940395355,1.4270000457763672,-0.13750000298023224]);
Shape Shape913 = createNode("Shape");
Shape913.USE = "skinsphere";
Transform912.children = new MFNode();

Transform912.children[0] = Shape913;

HAnimSegment901.children[4] = Transform912;

HAnimJoint898.children[1] = HAnimSegment901;

HAnimJoint HAnimJoint914 = createNode("HAnimJoint");
HAnimJoint914.name = "r_shoulder";
HAnimJoint914.DEF = "Joe_r_shoulder";
HAnimJoint914.center = new SFVec3f(new float[-0.20000000298023224,1.440000057220459,-0.03999999910593033]);
HAnimJoint914.skinCoordIndex = new MFInt32(new int[29,30,32,78,218,219,220,221,86,88]);
HAnimJoint914.skinCoordWeight = new MFFloat(new float[0.10000000149011612,1,1,1,1,1,1,1,0.30000001192092896,0.20000000298023224]);
HAnimJoint914.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint914.llimit = new MFFloat(new float[0,0,0]);
Transform Transform915 = createNode("Transform");
Transform915.translation = new SFVec3f(new float[-0.20000000298023224,1.440000057220459,-0.03999999910593033]);
Shape Shape916 = createNode("Shape");
Shape916.USE = "jointbox";
Transform915.children = new MFNode();

Transform915.children[0] = Shape916;

HAnimJoint914.children = new MFNode();

HAnimJoint914.children[0] = Transform915;

HAnimSegment HAnimSegment917 = createNode("HAnimSegment");
HAnimSegment917.name = "r_upperarm";
HAnimSegment917.DEF = "Joe_r_upperarm";
Shape Shape918 = createNode("Shape");
IndexedLineSet IndexedLineSet919 = createNode("IndexedLineSet");
IndexedLineSet919.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate920 = createNode("Coordinate");
Coordinate920.point = new MFVec3f(new float[-0.20000000298023224,1.440000057220459,-0.03999999910593033,-0.20000000298023224,1.138800024986267,-0.03999999910593033]);
IndexedLineSet919.coord = Coordinate920;

Shape918.geometry = IndexedLineSet919;

Appearance Appearance921 = createNode("Appearance");
Appearance921.USE = "SegmentLine";
Shape918.appearance = Appearance921;

HAnimSegment917.children = new MFNode();

HAnimSegment917.children[0] = Shape918;

HAnimSite HAnimSite922 = createNode("HAnimSite");
HAnimSite922.name = "r_humeral_medial_epicn";
HAnimSite922.DEF = "Joe_r_humeral_medial_epicn";
HAnimSite922.translation = new SFVec3f(new float[-0.16500000655651093,1.138800024986267,-0.03999999910593033]);
Shape Shape923 = createNode("Shape");
Shape923.USE = "sitebox";
HAnimSite922.children = new MFNode();

HAnimSite922.children[0] = Shape923;

HAnimSegment917.children[1] = HAnimSite922;

HAnimSite HAnimSite924 = createNode("HAnimSite");
HAnimSite924.name = "r_radiale";
HAnimSite924.DEF = "Joe_r_radiale";
HAnimSite924.translation = new SFVec3f(new float[-0.23000000417232513,1.1330000162124634,-0.054999999701976776]);
Shape Shape925 = createNode("Shape");
Shape925.USE = "sitebox";
HAnimSite924.children = new MFNode();

HAnimSite924.children[0] = Shape925;

HAnimSegment917.children[2] = HAnimSite924;

HAnimSite HAnimSite926 = createNode("HAnimSite");
HAnimSite926.name = "r_humeral_lateral_epicn";
HAnimSite926.DEF = "Joe_r_humeral_lateral_epicn";
HAnimSite926.translation = new SFVec3f(new float[-0.24400000274181366,1.138800024986267,-0.03999999910593033]);
Shape Shape927 = createNode("Shape");
Shape927.USE = "sitebox";
HAnimSite926.children = new MFNode();

HAnimSite926.children[0] = Shape927;

HAnimSegment917.children[3] = HAnimSite926;

Transform Transform928 = createNode("Transform");
Transform928.translation = new SFVec3f(new float[-0.17800000309944153,1.4824999570846558,-0.0625]);
Shape Shape929 = createNode("Shape");
Shape929.USE = "skinsphere";
Transform928.children = new MFNode();

Transform928.children[0] = Shape929;

HAnimSegment917.children[4] = Transform928;

Transform Transform930 = createNode("Transform");
Transform930.translation = new SFVec3f(new float[-0.17000000178813934,1.3799999952316284,0.007000000216066837]);
Shape Shape931 = createNode("Shape");
Shape931.USE = "skinsphere";
Transform930.children = new MFNode();

Transform930.children[0] = Shape931;

HAnimSegment917.children[5] = Transform930;

Transform Transform932 = createNode("Transform");
Transform932.translation = new SFVec3f(new float[-0.1599999964237213,1.3799999952316284,-0.12700000405311584]);
Shape Shape933 = createNode("Shape");
Shape933.USE = "skinsphere";
Transform932.children = new MFNode();

Transform932.children[0] = Shape933;

HAnimSegment917.children[6] = Transform932;

Transform Transform934 = createNode("Transform");
Transform934.translation = new SFVec3f(new float[-0.23499999940395355,1.4199999570846558,-0.0625]);
Shape Shape935 = createNode("Shape");
Shape935.USE = "skinsphere";
Transform934.children = new MFNode();

Transform934.children[0] = Shape935;

HAnimSegment917.children[7] = Transform934;

Transform Transform936 = createNode("Transform");
Transform936.translation = new SFVec3f(new float[-0.23000000417232513,1.2350000143051147,-0.03999999910593033]);
Shape Shape937 = createNode("Shape");
Shape937.USE = "skinsphere";
Transform936.children = new MFNode();

Transform936.children[0] = Shape937;

HAnimSegment917.children[8] = Transform936;

Transform Transform938 = createNode("Transform");
Transform938.translation = new SFVec3f(new float[-0.1599999964237213,1.2300000190734863,-0.03999999910593033]);
Shape Shape939 = createNode("Shape");
Shape939.USE = "skinsphere";
Transform938.children = new MFNode();

Transform938.children[0] = Shape939;

HAnimSegment917.children[9] = Transform938;

Transform Transform940 = createNode("Transform");
Transform940.translation = new SFVec3f(new float[-0.20000000298023224,1.2300000190734863,-0.10499999672174454]);
Shape Shape941 = createNode("Shape");
Shape941.USE = "skinsphere";
Transform940.children = new MFNode();

Transform940.children[0] = Shape941;

HAnimSegment917.children[10] = Transform940;

Transform Transform942 = createNode("Transform");
Transform942.translation = new SFVec3f(new float[-0.20000000298023224,1.2350000143051147,0.019999999552965164]);
Shape Shape943 = createNode("Shape");
Shape943.USE = "skinsphere";
Transform942.children = new MFNode();

Transform942.children[0] = Shape943;

HAnimSegment917.children[11] = Transform942;

HAnimJoint914.children[1] = HAnimSegment917;

HAnimJoint HAnimJoint944 = createNode("HAnimJoint");
HAnimJoint944.name = "r_elbow";
HAnimJoint944.DEF = "Joe_r_elbow";
HAnimJoint944.center = new SFVec3f(new float[-0.20000000298023224,1.138800024986267,-0.03999999910593033]);
HAnimJoint944.skinCoordIndex = new MFInt32(new int[33,34,35,225,226,227,228,229,231,232,233,234]);
HAnimJoint944.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint944.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint944.llimit = new MFFloat(new float[0,0,0]);
Transform Transform945 = createNode("Transform");
Transform945.translation = new SFVec3f(new float[-0.20000000298023224,1.138800024986267,-0.03999999910593033]);
Shape Shape946 = createNode("Shape");
Shape946.USE = "jointbox";
Transform945.children = new MFNode();

Transform945.children[0] = Shape946;

HAnimJoint944.children = new MFNode();

HAnimJoint944.children[0] = Transform945;

HAnimSegment HAnimSegment947 = createNode("HAnimSegment");
HAnimSegment947.name = "r_forearm";
HAnimSegment947.DEF = "Joe_r_forearm";
Shape Shape948 = createNode("Shape");
IndexedLineSet IndexedLineSet949 = createNode("IndexedLineSet");
IndexedLineSet949.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate950 = createNode("Coordinate");
Coordinate950.point = new MFVec3f(new float[-0.20000000298023224,1.138800024986267,-0.03999999910593033,-0.20000000298023224,0.8899999856948853,-0.03999999910593033]);
IndexedLineSet949.coord = Coordinate950;

Shape948.geometry = IndexedLineSet949;

Appearance Appearance951 = createNode("Appearance");
Appearance951.USE = "SegmentLine";
Shape948.appearance = Appearance951;

HAnimSegment947.children = new MFNode();

HAnimSegment947.children[0] = Shape948;

HAnimSite HAnimSite952 = createNode("HAnimSite");
HAnimSite952.name = "r_radial_styloid";
HAnimSite952.DEF = "Joe_r_radial_styloid";
HAnimSite952.translation = new SFVec3f(new float[-0.20000000298023224,0.8999999761581421,-0.014999999664723873]);
Shape Shape953 = createNode("Shape");
Shape953.USE = "sitebox";
HAnimSite952.children = new MFNode();

HAnimSite952.children[0] = Shape953;

HAnimSegment947.children[1] = HAnimSite952;

HAnimSite HAnimSite954 = createNode("HAnimSite");
HAnimSite954.name = "r_olecranon";
HAnimSite954.DEF = "Joe_r_olecranon";
HAnimSite954.translation = new SFVec3f(new float[-0.20000000298023224,1.138800024986267,-0.07999999821186066]);
Shape Shape955 = createNode("Shape");
Shape955.USE = "sitebox";
HAnimSite954.children = new MFNode();

HAnimSite954.children[0] = Shape955;

HAnimSegment947.children[2] = HAnimSite954;

Transform Transform956 = createNode("Transform");
Transform956.translation = new SFVec3f(new float[-0.20000000298023224,1.138800024986267,0.013000000268220901]);
Shape Shape957 = createNode("Shape");
Shape957.USE = "skinsphere";
Transform956.children = new MFNode();

Transform956.children[0] = Shape957;

HAnimSegment947.children[3] = Transform956;

Transform Transform958 = createNode("Transform");
Transform958.translation = new SFVec3f(new float[-0.22499999403953552,1,-0.009999999776482582]);
Shape Shape959 = createNode("Shape");
Shape959.USE = "skinsphere";
Transform958.children = new MFNode();

Transform958.children[0] = Shape959;

HAnimSegment947.children[4] = Transform958;

Transform Transform960 = createNode("Transform");
Transform960.translation = new SFVec3f(new float[-0.22499999403953552,1,-0.07000000029802322]);
Shape Shape961 = createNode("Shape");
Shape961.USE = "skinsphere";
Transform960.children = new MFNode();

Transform960.children[0] = Shape961;

HAnimSegment947.children[5] = Transform960;

Transform Transform962 = createNode("Transform");
Transform962.translation = new SFVec3f(new float[-0.1850000023841858,1,-0.009999999776482582]);
Shape Shape963 = createNode("Shape");
Shape963.USE = "skinsphere";
Transform962.children = new MFNode();

Transform962.children[0] = Shape963;

HAnimSegment947.children[6] = Transform962;

Transform Transform964 = createNode("Transform");
Transform964.translation = new SFVec3f(new float[-0.1850000023841858,1,-0.07000000029802322]);
Shape Shape965 = createNode("Shape");
Shape965.USE = "skinsphere";
Transform964.children = new MFNode();

Transform964.children[0] = Shape965;

HAnimSegment947.children[7] = Transform964;

HAnimJoint944.children[1] = HAnimSegment947;

HAnimJoint HAnimJoint966 = createNode("HAnimJoint");
HAnimJoint966.name = "r_wrist";
HAnimJoint966.DEF = "Joe_r_wrist";
HAnimJoint966.center = new SFVec3f(new float[-0.20000000298023224,0.8899999856948853,-0.03999999910593033]);
HAnimJoint966.skinCoordIndex = new MFInt32(new int[235,236,237,238,239,240,241,242]);
HAnimJoint966.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint966.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint966.llimit = new MFFloat(new float[0,0,0]);
Transform Transform967 = createNode("Transform");
Transform967.translation = new SFVec3f(new float[-0.20000000298023224,0.8899999856948853,-0.03999999910593033]);
Shape Shape968 = createNode("Shape");
Shape968.USE = "jointbox";
Transform967.children = new MFNode();

Transform967.children[0] = Shape968;

HAnimJoint966.children = new MFNode();

HAnimJoint966.children[0] = Transform967;

HAnimSegment HAnimSegment969 = createNode("HAnimSegment");
HAnimSegment969.name = "r_hand";
HAnimSegment969.DEF = "Joe_r_hand";
Shape Shape970 = createNode("Shape");
IndexedLineSet IndexedLineSet971 = createNode("IndexedLineSet");
IndexedLineSet971.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]);
Coordinate Coordinate972 = createNode("Coordinate");
Coordinate972.point = new MFVec3f(new float[-0.20000000298023224,0.8899999856948853,-0.03999999910593033,-0.20000000298023224,0.8500000238418579,0,-0.20000000298023224,0.8399999737739563,-0.014999999664723873,-0.20000000298023224,0.8349999785423279,-0.03999999910593033,-0.20000000298023224,0.8349999785423279,-0.06499999761581421,-0.20000000298023224,0.8399999737739563,-0.08500000089406967]);
IndexedLineSet971.coord = Coordinate972;

Shape970.geometry = IndexedLineSet971;

Appearance Appearance973 = createNode("Appearance");
Appearance973.USE = "SegmentLine";
Shape970.appearance = Appearance973;

HAnimSegment969.children = new MFNode();

HAnimSegment969.children[0] = Shape970;

HAnimSite HAnimSite974 = createNode("HAnimSite");
HAnimSite974.name = "r_ulnar_styloid";
HAnimSite974.DEF = "Joe_r_ulnar_styloid";
HAnimSite974.translation = new SFVec3f(new float[-0.20000000298023224,0.8999999761581421,-0.08500000089406967]);
Shape Shape975 = createNode("Shape");
Shape975.USE = "sitebox";
HAnimSite974.children = new MFNode();

HAnimSite974.children[0] = Shape975;

HAnimSegment969.children[1] = HAnimSite974;

HAnimJoint966.children[1] = HAnimSegment969;

HAnimJoint HAnimJoint976 = createNode("HAnimJoint");
HAnimJoint976.name = "r_thumb1";
HAnimJoint976.DEF = "Joe_r_thumb1";
HAnimJoint976.center = new SFVec3f(new float[-0.20000000298023224,0.8500000238418579,0]);
HAnimJoint976.skinCoordIndex = new MFInt32(new int[243,244]);
HAnimJoint976.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint976.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint976.llimit = new MFFloat(new float[0,0,0]);
Transform Transform977 = createNode("Transform");
Transform977.translation = new SFVec3f(new float[-0.20000000298023224,0.8500000238418579,0]);
Shape Shape978 = createNode("Shape");
Shape978.USE = "jointbox";
Transform977.children = new MFNode();

Transform977.children[0] = Shape978;

HAnimJoint976.children = new MFNode();

HAnimJoint976.children[0] = Transform977;

HAnimSegment HAnimSegment979 = createNode("HAnimSegment");
HAnimSegment979.name = "r_thumb_metacarpal";
HAnimSegment979.DEF = "Joe_r_thumb_metacarpal";
Shape Shape980 = createNode("Shape");
IndexedLineSet IndexedLineSet981 = createNode("IndexedLineSet");
IndexedLineSet981.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate982 = createNode("Coordinate");
Coordinate982.point = new MFVec3f(new float[-0.20000000298023224,0.8500000238418579,0,-0.20000000298023224,0.8199999928474426,0.029999999329447746]);
IndexedLineSet981.coord = Coordinate982;

Shape980.geometry = IndexedLineSet981;

Appearance Appearance983 = createNode("Appearance");
Appearance983.USE = "SegmentLine";
Shape980.appearance = Appearance983;

HAnimSegment979.children = new MFNode();

HAnimSegment979.children[0] = Shape980;

HAnimJoint976.children[1] = HAnimSegment979;

HAnimJoint HAnimJoint984 = createNode("HAnimJoint");
HAnimJoint984.name = "r_thumb2";
HAnimJoint984.DEF = "Joe_r_thumb2";
HAnimJoint984.center = new SFVec3f(new float[-0.20000000298023224,0.8199999928474426,0.029999999329447746]);
HAnimJoint984.skinCoordIndex = new MFInt32(new int[254,255,256,257,258,259]);
HAnimJoint984.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1]);
HAnimJoint984.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint984.llimit = new MFFloat(new float[0,0,0]);
Transform Transform985 = createNode("Transform");
Transform985.translation = new SFVec3f(new float[-0.20000000298023224,0.8199999928474426,0.029999999329447746]);
Shape Shape986 = createNode("Shape");
Shape986.USE = "jointbox";
Transform985.children = new MFNode();

Transform985.children[0] = Shape986;

HAnimJoint984.children = new MFNode();

HAnimJoint984.children[0] = Transform985;

HAnimSegment HAnimSegment987 = createNode("HAnimSegment");
HAnimSegment987.name = "r_thumb_proximal";
HAnimSegment987.DEF = "Joe_r_thumb_proximal";
Shape Shape988 = createNode("Shape");
IndexedLineSet IndexedLineSet989 = createNode("IndexedLineSet");
IndexedLineSet989.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate990 = createNode("Coordinate");
Coordinate990.point = new MFVec3f(new float[-0.20000000298023224,0.8199999928474426,0.029999999329447746,-0.20000000298023224,0.800000011920929,0.05000000074505806]);
IndexedLineSet989.coord = Coordinate990;

Shape988.geometry = IndexedLineSet989;

Appearance Appearance991 = createNode("Appearance");
Appearance991.USE = "SegmentLine";
Shape988.appearance = Appearance991;

HAnimSegment987.children = new MFNode();

HAnimSegment987.children[0] = Shape988;

HAnimJoint984.children[1] = HAnimSegment987;

HAnimJoint HAnimJoint992 = createNode("HAnimJoint");
HAnimJoint992.name = "r_thumb3";
HAnimJoint992.DEF = "Joe_r_thumb3";
HAnimJoint992.center = new SFVec3f(new float[-0.20000000298023224,0.800000011920929,0.05000000074505806]);
HAnimJoint992.skinCoordIndex = new MFInt32(new int[260,261,262,263,264,265,266,267,268]);
HAnimJoint992.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint992.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint992.llimit = new MFFloat(new float[0,0,0]);
Transform Transform993 = createNode("Transform");
Transform993.translation = new SFVec3f(new float[-0.20000000298023224,0.800000011920929,0.05000000074505806]);
Shape Shape994 = createNode("Shape");
Shape994.USE = "jointbox";
Transform993.children = new MFNode();

Transform993.children[0] = Shape994;

HAnimJoint992.children = new MFNode();

HAnimJoint992.children[0] = Transform993;

Transform Transform995 = createNode("Transform");
Transform995.DEF = "Thumbnail";
Transform995.translation = new SFVec3f(new float[-0.20000000298023224,0.7850000262260437,0.07500000298023224]);
Shape Shape996 = createNode("Shape");
Shape996.USE = "sitebox";
Transform995.children = new MFNode();

Transform995.children[0] = Shape996;

HAnimJoint992.children[1] = Transform995;

HAnimSegment HAnimSegment997 = createNode("HAnimSegment");
HAnimSegment997.name = "r_thumb_distal";
HAnimSegment997.DEF = "Joe_r_thumb_distal";
Shape Shape998 = createNode("Shape");
IndexedLineSet IndexedLineSet999 = createNode("IndexedLineSet");
IndexedLineSet999.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1000 = createNode("Coordinate");
Coordinate1000.point = new MFVec3f(new float[-0.20000000298023224,0.800000011920929,0.05000000074505806,-0.20000000298023224,0.7799999713897705,0.07000000029802322]);
IndexedLineSet999.coord = Coordinate1000;

Shape998.geometry = IndexedLineSet999;

Appearance Appearance1001 = createNode("Appearance");
Appearance1001.USE = "SegmentLine";
Shape998.appearance = Appearance1001;

HAnimSegment997.children = new MFNode();

HAnimSegment997.children[0] = Shape998;

HAnimSite HAnimSite1002 = createNode("HAnimSite");
HAnimSite1002.name = "r_thumb_distal_tip";
HAnimSite1002.DEF = "Joe_r_thumb_distal_tip";
HAnimSite1002.translation = new SFVec3f(new float[-0.20000000298023224,0.7799999713897705,0.07000000029802322]);
Shape Shape1003 = createNode("Shape");
Shape1003.USE = "sitebox";
HAnimSite1002.children = new MFNode();

HAnimSite1002.children[0] = Shape1003;

HAnimSegment997.children[1] = HAnimSite1002;

HAnimJoint992.children[2] = HAnimSegment997;

HAnimJoint984.children[2] = HAnimJoint992;

HAnimJoint976.children[2] = HAnimJoint984;

HAnimJoint966.children[2] = HAnimJoint976;

HAnimJoint HAnimJoint1004 = createNode("HAnimJoint");
HAnimJoint1004.name = "r_index0";
HAnimJoint1004.DEF = "Joe_r_index0";
HAnimJoint1004.center = new SFVec3f(new float[-0.20000000298023224,0.8399999737739563,-0.014999999664723873]);
HAnimJoint1004.skinCoordIndex = new MFInt32(new int[245,246]);
HAnimJoint1004.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint1004.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1004.llimit = new MFFloat(new float[0,0,0]);
Transform Transform1005 = createNode("Transform");
Transform1005.translation = new SFVec3f(new float[-0.20000000298023224,0.8399999737739563,-0.014999999664723873]);
Shape Shape1006 = createNode("Shape");
Shape1006.USE = "jointbox";
Transform1005.children = new MFNode();

Transform1005.children[0] = Shape1006;

HAnimJoint1004.children = new MFNode();

HAnimJoint1004.children[0] = Transform1005;

HAnimSegment HAnimSegment1007 = createNode("HAnimSegment");
HAnimSegment1007.name = "r_index_metacarpal";
HAnimSegment1007.DEF = "Joe_r_index_metacarpal";
Shape Shape1008 = createNode("Shape");
IndexedLineSet IndexedLineSet1009 = createNode("IndexedLineSet");
IndexedLineSet1009.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1010 = createNode("Coordinate");
Coordinate1010.point = new MFVec3f(new float[-0.20000000298023224,0.8399999737739563,-0.014999999664723873,-0.20000000298023224,0.7929999828338623,-0.014999999664723873]);
IndexedLineSet1009.coord = Coordinate1010;

Shape1008.geometry = IndexedLineSet1009;

Appearance Appearance1011 = createNode("Appearance");
Appearance1011.USE = "SegmentLine";
Shape1008.appearance = Appearance1011;

HAnimSegment1007.children = new MFNode();

HAnimSegment1007.children[0] = Shape1008;

HAnimSite HAnimSite1012 = createNode("HAnimSite");
HAnimSite1012.name = "r_metacarpal_pha2";
HAnimSite1012.DEF = "Joe_r_metacarpal_pha2";
HAnimSite1012.translation = new SFVec3f(new float[-0.20000000298023224,0.7929999828338623,-0.004999999888241291]);
Shape Shape1013 = createNode("Shape");
Shape1013.USE = "sitebox";
HAnimSite1012.children = new MFNode();

HAnimSite1012.children[0] = Shape1013;

HAnimSegment1007.children[1] = HAnimSite1012;

HAnimJoint1004.children[1] = HAnimSegment1007;

HAnimJoint HAnimJoint1014 = createNode("HAnimJoint");
HAnimJoint1014.name = "r_index1";
HAnimJoint1014.DEF = "Joe_r_index1";
HAnimJoint1014.center = new SFVec3f(new float[-0.20000000298023224,0.7929999828338623,-0.014999999664723873]);
HAnimJoint1014.skinCoordIndex = new MFInt32(new int[254,255,256,269,270,271,279]);
HAnimJoint1014.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1,0.5]);
HAnimJoint1014.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1014.llimit = new MFFloat(new float[0,0,0]);
Transform Transform1015 = createNode("Transform");
Transform1015.translation = new SFVec3f(new float[-0.20000000298023224,0.7929999828338623,-0.014999999664723873]);
Shape Shape1016 = createNode("Shape");
Shape1016.USE = "jointbox";
Transform1015.children = new MFNode();

Transform1015.children[0] = Shape1016;

HAnimJoint1014.children = new MFNode();

HAnimJoint1014.children[0] = Transform1015;

HAnimSegment HAnimSegment1017 = createNode("HAnimSegment");
HAnimSegment1017.name = "r_index_proximal";
HAnimSegment1017.DEF = "Joe_r_index_proximal";
Shape Shape1018 = createNode("Shape");
IndexedLineSet IndexedLineSet1019 = createNode("IndexedLineSet");
IndexedLineSet1019.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1020 = createNode("Coordinate");
Coordinate1020.point = new MFVec3f(new float[-0.20000000298023224,0.7929999828338623,-0.014999999664723873,-0.20000000298023224,0.7450000047683716,-0.014999999664723873]);
IndexedLineSet1019.coord = Coordinate1020;

Shape1018.geometry = IndexedLineSet1019;

Appearance Appearance1021 = createNode("Appearance");
Appearance1021.USE = "SegmentLine";
Shape1018.appearance = Appearance1021;

HAnimSegment1017.children = new MFNode();

HAnimSegment1017.children[0] = Shape1018;

HAnimJoint1014.children[1] = HAnimSegment1017;

HAnimJoint HAnimJoint1022 = createNode("HAnimJoint");
HAnimJoint1022.name = "r_index2";
HAnimJoint1022.DEF = "Joe_r_index2";
HAnimJoint1022.center = new SFVec3f(new float[-0.20000000298023224,0.7450000047683716,-0.014999999664723873]);
HAnimJoint1022.skinCoordIndex = new MFInt32(new int[282,283,284,285]);
HAnimJoint1022.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint1022.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1022.llimit = new MFFloat(new float[0,0,0]);
Transform Transform1023 = createNode("Transform");
Transform1023.translation = new SFVec3f(new float[-0.20000000298023224,0.7450000047683716,-0.014999999664723873]);
Shape Shape1024 = createNode("Shape");
Shape1024.USE = "jointbox";
Transform1023.children = new MFNode();

Transform1023.children[0] = Shape1024;

HAnimJoint1022.children = new MFNode();

HAnimJoint1022.children[0] = Transform1023;

HAnimSegment HAnimSegment1025 = createNode("HAnimSegment");
HAnimSegment1025.name = "r_index_middle";
HAnimSegment1025.DEF = "Joe_r_index_middle";
Shape Shape1026 = createNode("Shape");
IndexedLineSet IndexedLineSet1027 = createNode("IndexedLineSet");
IndexedLineSet1027.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1028 = createNode("Coordinate");
Coordinate1028.point = new MFVec3f(new float[-0.20000000298023224,0.7450000047683716,-0.014999999664723873,-0.20000000298023224,0.7200000286102295,-0.014999999664723873]);
IndexedLineSet1027.coord = Coordinate1028;

Shape1026.geometry = IndexedLineSet1027;

Appearance Appearance1029 = createNode("Appearance");
Appearance1029.USE = "SegmentLine";
Shape1026.appearance = Appearance1029;

HAnimSegment1025.children = new MFNode();

HAnimSegment1025.children[0] = Shape1026;

HAnimJoint1022.children[1] = HAnimSegment1025;

HAnimJoint HAnimJoint1030 = createNode("HAnimJoint");
HAnimJoint1030.name = "r_index3";
HAnimJoint1030.DEF = "Joe_r_index3";
HAnimJoint1030.center = new SFVec3f(new float[-0.20000000298023224,0.7200000286102295,-0.014999999664723873]);
HAnimJoint1030.skinCoordIndex = new MFInt32(new int[286,287,288,289,290,291,292,293,294]);
HAnimJoint1030.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint1030.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1030.llimit = new MFFloat(new float[0,0,0]);
Transform Transform1031 = createNode("Transform");
Transform1031.translation = new SFVec3f(new float[-0.20000000298023224,0.7200000286102295,-0.014999999664723873]);
Shape Shape1032 = createNode("Shape");
Shape1032.USE = "jointbox";
Transform1031.children = new MFNode();

Transform1031.children[0] = Shape1032;

HAnimJoint1030.children = new MFNode();

HAnimJoint1030.children[0] = Transform1031;

HAnimSegment HAnimSegment1033 = createNode("HAnimSegment");
HAnimSegment1033.name = "r_index_distal";
HAnimSegment1033.DEF = "Joe_r_index_distal";
Shape Shape1034 = createNode("Shape");
IndexedLineSet IndexedLineSet1035 = createNode("IndexedLineSet");
IndexedLineSet1035.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1036 = createNode("Coordinate");
Coordinate1036.point = new MFVec3f(new float[-0.20000000298023224,0.7200000286102295,-0.014999999664723873,-0.20000000298023224,0.6949999928474426,-0.014999999664723873]);
IndexedLineSet1035.coord = Coordinate1036;

Shape1034.geometry = IndexedLineSet1035;

Appearance Appearance1037 = createNode("Appearance");
Appearance1037.USE = "SegmentLine";
Shape1034.appearance = Appearance1037;

HAnimSegment1033.children = new MFNode();

HAnimSegment1033.children[0] = Shape1034;

HAnimSite HAnimSite1038 = createNode("HAnimSite");
HAnimSite1038.name = "r_index_distal_tip";
HAnimSite1038.DEF = "Joe_r_index_distal_tip";
HAnimSite1038.translation = new SFVec3f(new float[-0.20000000298023224,0.6949999928474426,-0.014999999664723873]);
Shape Shape1039 = createNode("Shape");
Shape1039.USE = "sitebox";
HAnimSite1038.children = new MFNode();

HAnimSite1038.children[0] = Shape1039;

HAnimSegment1033.children[1] = HAnimSite1038;

HAnimJoint1030.children[1] = HAnimSegment1033;

HAnimJoint1022.children[2] = HAnimJoint1030;

HAnimJoint1014.children[2] = HAnimJoint1022;

HAnimJoint1004.children[2] = HAnimJoint1014;

HAnimJoint966.children[3] = HAnimJoint1004;

HAnimJoint HAnimJoint1040 = createNode("HAnimJoint");
HAnimJoint1040.name = "r_middle0";
HAnimJoint1040.DEF = "Joe_r_middle0";
HAnimJoint1040.center = new SFVec3f(new float[-0.20000000298023224,0.8349999785423279,-0.03999999910593033]);
HAnimJoint1040.skinCoordIndex = new MFInt32(new int[247,248]);
HAnimJoint1040.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint1040.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1040.llimit = new MFFloat(new float[0,0,0]);
Transform Transform1041 = createNode("Transform");
Transform1041.translation = new SFVec3f(new float[-0.20000000298023224,0.8349999785423279,-0.03999999910593033]);
Shape Shape1042 = createNode("Shape");
Shape1042.USE = "jointbox";
Transform1041.children = new MFNode();

Transform1041.children[0] = Shape1042;

HAnimJoint1040.children = new MFNode();

HAnimJoint1040.children[0] = Transform1041;

HAnimSegment HAnimSegment1043 = createNode("HAnimSegment");
HAnimSegment1043.name = "r_middle_metacarpal";
HAnimSegment1043.DEF = "Joe_r_middle_metacarpal";
Shape Shape1044 = createNode("Shape");
IndexedLineSet IndexedLineSet1045 = createNode("IndexedLineSet");
IndexedLineSet1045.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1046 = createNode("Coordinate");
Coordinate1046.point = new MFVec3f(new float[-0.20000000298023224,0.8349999785423279,-0.03999999910593033,-0.20000000298023224,0.7879999876022339,-0.03999999910593033]);
IndexedLineSet1045.coord = Coordinate1046;

Shape1044.geometry = IndexedLineSet1045;

Appearance Appearance1047 = createNode("Appearance");
Appearance1047.USE = "SegmentLine";
Shape1044.appearance = Appearance1047;

HAnimSegment1043.children = new MFNode();

HAnimSegment1043.children[0] = Shape1044;

HAnimJoint1040.children[1] = HAnimSegment1043;

HAnimJoint HAnimJoint1048 = createNode("HAnimJoint");
HAnimJoint1048.name = "r_middle1";
HAnimJoint1048.DEF = "Joe_r_middle1";
HAnimJoint1048.center = new SFVec3f(new float[-0.20000000298023224,0.7879999876022339,-0.03999999910593033]);
HAnimJoint1048.skinCoordIndex = new MFInt32(new int[272,273,279,280]);
HAnimJoint1048.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimJoint1048.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1048.llimit = new MFFloat(new float[0,0,0]);
Transform Transform1049 = createNode("Transform");
Transform1049.translation = new SFVec3f(new float[-0.20000000298023224,0.7879999876022339,-0.03999999910593033]);
Shape Shape1050 = createNode("Shape");
Shape1050.USE = "jointbox";
Transform1049.children = new MFNode();

Transform1049.children[0] = Shape1050;

HAnimJoint1048.children = new MFNode();

HAnimJoint1048.children[0] = Transform1049;

HAnimSegment HAnimSegment1051 = createNode("HAnimSegment");
HAnimSegment1051.name = "r_middle_proximal";
HAnimSegment1051.DEF = "Joe_r_middle_proximal";
Shape Shape1052 = createNode("Shape");
IndexedLineSet IndexedLineSet1053 = createNode("IndexedLineSet");
IndexedLineSet1053.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1054 = createNode("Coordinate");
Coordinate1054.point = new MFVec3f(new float[-0.20000000298023224,0.7879999876022339,-0.03999999910593033,-0.20000000298023224,0.7400000095367432,-0.03999999910593033]);
IndexedLineSet1053.coord = Coordinate1054;

Shape1052.geometry = IndexedLineSet1053;

Appearance Appearance1055 = createNode("Appearance");
Appearance1055.USE = "SegmentLine";
Shape1052.appearance = Appearance1055;

HAnimSegment1051.children = new MFNode();

HAnimSegment1051.children[0] = Shape1052;

HAnimJoint1048.children[1] = HAnimSegment1051;

HAnimJoint HAnimJoint1056 = createNode("HAnimJoint");
HAnimJoint1056.name = "r_middle2";
HAnimJoint1056.DEF = "Joe_r_middle2";
HAnimJoint1056.center = new SFVec3f(new float[-0.20000000298023224,0.7400000095367432,-0.03999999910593033]);
HAnimJoint1056.skinCoordIndex = new MFInt32(new int[295,296,297,298]);
HAnimJoint1056.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint1056.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1056.llimit = new MFFloat(new float[0,0,0]);
Transform Transform1057 = createNode("Transform");
Transform1057.translation = new SFVec3f(new float[-0.20000000298023224,0.7400000095367432,-0.03999999910593033]);
Shape Shape1058 = createNode("Shape");
Shape1058.USE = "jointbox";
Transform1057.children = new MFNode();

Transform1057.children[0] = Shape1058;

HAnimJoint1056.children = new MFNode();

HAnimJoint1056.children[0] = Transform1057;

HAnimSegment HAnimSegment1059 = createNode("HAnimSegment");
HAnimSegment1059.name = "r_middle_middle";
HAnimSegment1059.DEF = "Joe_r_middle_middle";
Shape Shape1060 = createNode("Shape");
IndexedLineSet IndexedLineSet1061 = createNode("IndexedLineSet");
IndexedLineSet1061.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1062 = createNode("Coordinate");
Coordinate1062.point = new MFVec3f(new float[-0.20000000298023224,0.7400000095367432,-0.03999999910593033,-0.20000000298023224,0.7142000198364258,-0.03999999910593033]);
IndexedLineSet1061.coord = Coordinate1062;

Shape1060.geometry = IndexedLineSet1061;

Appearance Appearance1063 = createNode("Appearance");
Appearance1063.USE = "SegmentLine";
Shape1060.appearance = Appearance1063;

HAnimSegment1059.children = new MFNode();

HAnimSegment1059.children[0] = Shape1060;

HAnimJoint1056.children[1] = HAnimSegment1059;

HAnimJoint HAnimJoint1064 = createNode("HAnimJoint");
HAnimJoint1064.name = "r_middle3";
HAnimJoint1064.DEF = "Joe_r_middle3";
HAnimJoint1064.center = new SFVec3f(new float[-0.20000000298023224,0.7142000198364258,-0.03999999910593033]);
HAnimJoint1064.skinCoordIndex = new MFInt32(new int[299,300,301,302,303,304,305,306,307]);
HAnimJoint1064.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint1064.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1064.llimit = new MFFloat(new float[0,0,0]);
Transform Transform1065 = createNode("Transform");
Transform1065.translation = new SFVec3f(new float[-0.20000000298023224,0.7142000198364258,-0.03999999910593033]);
Shape Shape1066 = createNode("Shape");
Shape1066.USE = "jointbox";
Transform1065.children = new MFNode();

Transform1065.children[0] = Shape1066;

HAnimJoint1064.children = new MFNode();

HAnimJoint1064.children[0] = Transform1065;

HAnimSegment HAnimSegment1067 = createNode("HAnimSegment");
HAnimSegment1067.name = "r_middle_distal";
HAnimSegment1067.DEF = "Joe_r_middle_distal";
Shape Shape1068 = createNode("Shape");
IndexedLineSet IndexedLineSet1069 = createNode("IndexedLineSet");
IndexedLineSet1069.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1070 = createNode("Coordinate");
Coordinate1070.point = new MFVec3f(new float[-0.20000000298023224,0.7142000198364258,-0.03999999910593033,-0.20000000298023224,0.6758000254631042,-0.03999999910593033]);
IndexedLineSet1069.coord = Coordinate1070;

Shape1068.geometry = IndexedLineSet1069;

Appearance Appearance1071 = createNode("Appearance");
Appearance1071.USE = "SegmentLine";
Shape1068.appearance = Appearance1071;

HAnimSegment1067.children = new MFNode();

HAnimSegment1067.children[0] = Shape1068;

HAnimSite HAnimSite1072 = createNode("HAnimSite");
HAnimSite1072.name = "r_dactylion";
HAnimSite1072.DEF = "Joe_r_dactylion";
HAnimSite1072.translation = new SFVec3f(new float[-0.20000000298023224,0.6800000071525574,-0.03999999910593033]);
Shape Shape1073 = createNode("Shape");
Shape1073.USE = "sitebox";
HAnimSite1072.children = new MFNode();

HAnimSite1072.children[0] = Shape1073;

HAnimSegment1067.children[1] = HAnimSite1072;

HAnimSite HAnimSite1074 = createNode("HAnimSite");
HAnimSite1074.name = "r_middle_distal_tip";
HAnimSite1074.DEF = "Joe_r_middle_distal_tip";
HAnimSite1074.translation = new SFVec3f(new float[-0.20000000298023224,0.6800000071525574,-0.03999999910593033]);
Shape Shape1075 = createNode("Shape");
Shape1075.USE = "sitebox";
HAnimSite1074.children = new MFNode();

HAnimSite1074.children[0] = Shape1075;

HAnimSegment1067.children[2] = HAnimSite1074;

HAnimJoint1064.children[1] = HAnimSegment1067;

HAnimJoint1056.children[2] = HAnimJoint1064;

HAnimJoint1048.children[2] = HAnimJoint1056;

HAnimJoint1040.children[2] = HAnimJoint1048;

HAnimJoint966.children[4] = HAnimJoint1040;

HAnimJoint HAnimJoint1076 = createNode("HAnimJoint");
HAnimJoint1076.name = "r_ring0";
HAnimJoint1076.DEF = "Joe_r_ring0";
HAnimJoint1076.center = new SFVec3f(new float[-0.20000000298023224,0.8349999785423279,-0.06499999761581421]);
HAnimJoint1076.skinCoordIndex = new MFInt32(new int[249,250]);
HAnimJoint1076.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint1076.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1076.llimit = new MFFloat(new float[0,0,0]);
Transform Transform1077 = createNode("Transform");
Transform1077.translation = new SFVec3f(new float[-0.20000000298023224,0.8349999785423279,-0.06499999761581421]);
Shape Shape1078 = createNode("Shape");
Shape1078.USE = "jointbox";
Transform1077.children = new MFNode();

Transform1077.children[0] = Shape1078;

HAnimJoint1076.children = new MFNode();

HAnimJoint1076.children[0] = Transform1077;

HAnimSegment HAnimSegment1079 = createNode("HAnimSegment");
HAnimSegment1079.name = "r_ring_metacarpal";
HAnimSegment1079.DEF = "Joe_r_ring_metacarpal";
Shape Shape1080 = createNode("Shape");
IndexedLineSet IndexedLineSet1081 = createNode("IndexedLineSet");
IndexedLineSet1081.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1082 = createNode("Coordinate");
Coordinate1082.point = new MFVec3f(new float[-0.20000000298023224,0.8349999785423279,-0.06499999761581421,-0.20000000298023224,0.7929999828338623,-0.06499999761581421]);
IndexedLineSet1081.coord = Coordinate1082;

Shape1080.geometry = IndexedLineSet1081;

Appearance Appearance1083 = createNode("Appearance");
Appearance1083.USE = "SegmentLine";
Shape1080.appearance = Appearance1083;

HAnimSegment1079.children = new MFNode();

HAnimSegment1079.children[0] = Shape1080;

HAnimJoint1076.children[1] = HAnimSegment1079;

HAnimJoint HAnimJoint1084 = createNode("HAnimJoint");
HAnimJoint1084.name = "r_ring1";
HAnimJoint1084.DEF = "Joe_r_ring1";
HAnimJoint1084.center = new SFVec3f(new float[-0.20000000298023224,0.7929999828338623,-0.06499999761581421]);
HAnimJoint1084.skinCoordIndex = new MFInt32(new int[274,275,280,281]);
HAnimJoint1084.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimJoint1084.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1084.llimit = new MFFloat(new float[0,0,0]);
Transform Transform1085 = createNode("Transform");
Transform1085.translation = new SFVec3f(new float[-0.20000000298023224,0.7929999828338623,-0.06499999761581421]);
Shape Shape1086 = createNode("Shape");
Shape1086.USE = "jointbox";
Transform1085.children = new MFNode();

Transform1085.children[0] = Shape1086;

HAnimJoint1084.children = new MFNode();

HAnimJoint1084.children[0] = Transform1085;

HAnimSegment HAnimSegment1087 = createNode("HAnimSegment");
HAnimSegment1087.name = "r_ring_proximal";
HAnimSegment1087.DEF = "Joe_r_ring_proximal";
Shape Shape1088 = createNode("Shape");
IndexedLineSet IndexedLineSet1089 = createNode("IndexedLineSet");
IndexedLineSet1089.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1090 = createNode("Coordinate");
Coordinate1090.point = new MFVec3f(new float[-0.20000000298023224,0.7929999828338623,-0.06499999761581421,-0.20000000298023224,0.7400000095367432,-0.06499999761581421]);
IndexedLineSet1089.coord = Coordinate1090;

Shape1088.geometry = IndexedLineSet1089;

Appearance Appearance1091 = createNode("Appearance");
Appearance1091.USE = "SegmentLine";
Shape1088.appearance = Appearance1091;

HAnimSegment1087.children = new MFNode();

HAnimSegment1087.children[0] = Shape1088;

HAnimJoint1084.children[1] = HAnimSegment1087;

HAnimJoint HAnimJoint1092 = createNode("HAnimJoint");
HAnimJoint1092.name = "r_ring2";
HAnimJoint1092.DEF = "Joe_r_ring2";
HAnimJoint1092.center = new SFVec3f(new float[-0.20000000298023224,0.7400000095367432,-0.06499999761581421]);
HAnimJoint1092.skinCoordIndex = new MFInt32(new int[308,309,310,311]);
HAnimJoint1092.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint1092.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1092.llimit = new MFFloat(new float[0,0,0]);
Transform Transform1093 = createNode("Transform");
Transform1093.translation = new SFVec3f(new float[-0.20000000298023224,0.7400000095367432,-0.06499999761581421]);
Shape Shape1094 = createNode("Shape");
Shape1094.USE = "jointbox";
Transform1093.children = new MFNode();

Transform1093.children[0] = Shape1094;

HAnimJoint1092.children = new MFNode();

HAnimJoint1092.children[0] = Transform1093;

HAnimSegment HAnimSegment1095 = createNode("HAnimSegment");
HAnimSegment1095.name = "r_ring_middle";
HAnimSegment1095.DEF = "Joe_r_ring_middle";
Shape Shape1096 = createNode("Shape");
IndexedLineSet IndexedLineSet1097 = createNode("IndexedLineSet");
IndexedLineSet1097.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1098 = createNode("Coordinate");
Coordinate1098.point = new MFVec3f(new float[-0.20000000298023224,0.7400000095367432,-0.06499999761581421,-0.20000000298023224,0.7177000045776367,-0.06499999761581421]);
IndexedLineSet1097.coord = Coordinate1098;

Shape1096.geometry = IndexedLineSet1097;

Appearance Appearance1099 = createNode("Appearance");
Appearance1099.USE = "SegmentLine";
Shape1096.appearance = Appearance1099;

HAnimSegment1095.children = new MFNode();

HAnimSegment1095.children[0] = Shape1096;

HAnimJoint1092.children[1] = HAnimSegment1095;

HAnimJoint HAnimJoint1100 = createNode("HAnimJoint");
HAnimJoint1100.name = "r_ring3";
HAnimJoint1100.DEF = "Joe_r_ring3";
HAnimJoint1100.center = new SFVec3f(new float[-0.20000000298023224,0.7177000045776367,-0.06499999761581421]);
HAnimJoint1100.skinCoordIndex = new MFInt32(new int[312,313,314,315,316,317,318,319,320]);
HAnimJoint1100.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint1100.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1100.llimit = new MFFloat(new float[0,0,0]);
Transform Transform1101 = createNode("Transform");
Transform1101.translation = new SFVec3f(new float[-0.20000000298023224,0.7177000045776367,-0.06499999761581421]);
Shape Shape1102 = createNode("Shape");
Shape1102.USE = "jointbox";
Transform1101.children = new MFNode();

Transform1101.children[0] = Shape1102;

HAnimJoint1100.children = new MFNode();

HAnimJoint1100.children[0] = Transform1101;

HAnimSegment HAnimSegment1103 = createNode("HAnimSegment");
HAnimSegment1103.name = "r_ring_distal";
HAnimSegment1103.DEF = "Joe_r_ring_distal";
Shape Shape1104 = createNode("Shape");
IndexedLineSet IndexedLineSet1105 = createNode("IndexedLineSet");
IndexedLineSet1105.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1106 = createNode("Coordinate");
Coordinate1106.point = new MFVec3f(new float[-0.20000000298023224,0.7177000045776367,-0.06499999761581421,-0.20000000298023224,0.6949999928474426,-0.06499999761581421]);
IndexedLineSet1105.coord = Coordinate1106;

Shape1104.geometry = IndexedLineSet1105;

Appearance Appearance1107 = createNode("Appearance");
Appearance1107.USE = "SegmentLine";
Shape1104.appearance = Appearance1107;

HAnimSegment1103.children = new MFNode();

HAnimSegment1103.children[0] = Shape1104;

HAnimSite HAnimSite1108 = createNode("HAnimSite");
HAnimSite1108.name = "r_ring_distal_tip";
HAnimSite1108.DEF = "Joe_r_ring_distal_tip";
HAnimSite1108.translation = new SFVec3f(new float[-0.20000000298023224,0.6949999928474426,-0.06499999761581421]);
Shape Shape1109 = createNode("Shape");
Shape1109.USE = "sitebox";
HAnimSite1108.children = new MFNode();

HAnimSite1108.children[0] = Shape1109;

HAnimSegment1103.children[1] = HAnimSite1108;

HAnimJoint1100.children[1] = HAnimSegment1103;

HAnimJoint1092.children[2] = HAnimJoint1100;

HAnimJoint1084.children[2] = HAnimJoint1092;

HAnimJoint1076.children[2] = HAnimJoint1084;

HAnimJoint966.children[5] = HAnimJoint1076;

HAnimJoint HAnimJoint1110 = createNode("HAnimJoint");
HAnimJoint1110.name = "r_pinky0";
HAnimJoint1110.DEF = "Joe_r_pinky0";
HAnimJoint1110.center = new SFVec3f(new float[-0.20000000298023224,0.8399999737739563,-0.08500000089406967]);
HAnimJoint1110.skinCoordIndex = new MFInt32(new int[251,252,253,281]);
HAnimJoint1110.skinCoordWeight = new MFFloat(new float[1,1,1,0.5]);
HAnimJoint1110.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1110.llimit = new MFFloat(new float[0,0,0]);
Transform Transform1111 = createNode("Transform");
Transform1111.translation = new SFVec3f(new float[-0.20000000298023224,0.8399999737739563,-0.08500000089406967]);
Shape Shape1112 = createNode("Shape");
Shape1112.USE = "jointbox";
Transform1111.children = new MFNode();

Transform1111.children[0] = Shape1112;

HAnimJoint1110.children = new MFNode();

HAnimJoint1110.children[0] = Transform1111;

HAnimSegment HAnimSegment1113 = createNode("HAnimSegment");
HAnimSegment1113.name = "r_pinky_metacarpal";
HAnimSegment1113.DEF = "Joe_r_pinky_metacarpal";
Shape Shape1114 = createNode("Shape");
IndexedLineSet IndexedLineSet1115 = createNode("IndexedLineSet");
IndexedLineSet1115.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1116 = createNode("Coordinate");
Coordinate1116.point = new MFVec3f(new float[-0.20000000298023224,0.8399999737739563,-0.08500000089406967,-0.20000000298023224,0.7900000214576721,-0.08500000089406967]);
IndexedLineSet1115.coord = Coordinate1116;

Shape1114.geometry = IndexedLineSet1115;

Appearance Appearance1117 = createNode("Appearance");
Appearance1117.USE = "SegmentLine";
Shape1114.appearance = Appearance1117;

HAnimSegment1113.children = new MFNode();

HAnimSegment1113.children[0] = Shape1114;

HAnimSite HAnimSite1118 = createNode("HAnimSite");
HAnimSite1118.name = "r_metacarpal_pha5";
HAnimSite1118.DEF = "Joe_r_metacarpal_pha5";
HAnimSite1118.translation = new SFVec3f(new float[-0.20000000298023224,0.7900000214576721,-0.0949999988079071]);
Shape Shape1119 = createNode("Shape");
Shape1119.USE = "sitebox";
HAnimSite1118.children = new MFNode();

HAnimSite1118.children[0] = Shape1119;

HAnimSegment1113.children[1] = HAnimSite1118;

HAnimJoint1110.children[1] = HAnimSegment1113;

HAnimJoint HAnimJoint1120 = createNode("HAnimJoint");
HAnimJoint1120.name = "r_pinky1";
HAnimJoint1120.DEF = "Joe_r_pinky1";
HAnimJoint1120.center = new SFVec3f(new float[-0.20000000298023224,0.7900000214576721,-0.08500000089406967]);
HAnimJoint1120.skinCoordIndex = new MFInt32(new int[276,277,278]);
HAnimJoint1120.skinCoordWeight = new MFFloat(new float[1,1,1]);
HAnimJoint1120.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1120.llimit = new MFFloat(new float[0,0,0]);
Transform Transform1121 = createNode("Transform");
Transform1121.translation = new SFVec3f(new float[-0.20000000298023224,0.7900000214576721,-0.08500000089406967]);
Shape Shape1122 = createNode("Shape");
Shape1122.USE = "jointbox";
Transform1121.children = new MFNode();

Transform1121.children[0] = Shape1122;

HAnimJoint1120.children = new MFNode();

HAnimJoint1120.children[0] = Transform1121;

HAnimSegment HAnimSegment1123 = createNode("HAnimSegment");
HAnimSegment1123.name = "r_pinky_proximal";
HAnimSegment1123.DEF = "Joe_r_pinky_proximal";
Shape Shape1124 = createNode("Shape");
IndexedLineSet IndexedLineSet1125 = createNode("IndexedLineSet");
IndexedLineSet1125.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1126 = createNode("Coordinate");
Coordinate1126.point = new MFVec3f(new float[-0.20000000298023224,0.7900000214576721,-0.08500000089406967,-0.20000000298023224,0.7549999952316284,-0.08500000089406967]);
IndexedLineSet1125.coord = Coordinate1126;

Shape1124.geometry = IndexedLineSet1125;

Appearance Appearance1127 = createNode("Appearance");
Appearance1127.USE = "SegmentLine";
Shape1124.appearance = Appearance1127;

HAnimSegment1123.children = new MFNode();

HAnimSegment1123.children[0] = Shape1124;

HAnimJoint1120.children[1] = HAnimSegment1123;

HAnimJoint HAnimJoint1128 = createNode("HAnimJoint");
HAnimJoint1128.name = "r_pinky2";
HAnimJoint1128.DEF = "Joe_r_pinky2";
HAnimJoint1128.center = new SFVec3f(new float[-0.20000000298023224,0.7549999952316284,-0.08500000089406967]);
HAnimJoint1128.skinCoordIndex = new MFInt32(new int[321,322,323,324]);
HAnimJoint1128.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint1128.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1128.llimit = new MFFloat(new float[0,0,0]);
Transform Transform1129 = createNode("Transform");
Transform1129.translation = new SFVec3f(new float[-0.20000000298023224,0.7549999952316284,-0.08500000089406967]);
Shape Shape1130 = createNode("Shape");
Shape1130.USE = "jointbox";
Transform1129.children = new MFNode();

Transform1129.children[0] = Shape1130;

HAnimJoint1128.children = new MFNode();

HAnimJoint1128.children[0] = Transform1129;

HAnimSegment HAnimSegment1131 = createNode("HAnimSegment");
HAnimSegment1131.name = "r_pinky_middle";
HAnimSegment1131.DEF = "Joe_r_pinky_middle";
Shape Shape1132 = createNode("Shape");
IndexedLineSet IndexedLineSet1133 = createNode("IndexedLineSet");
IndexedLineSet1133.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1134 = createNode("Coordinate");
Coordinate1134.point = new MFVec3f(new float[-0.20000000298023224,0.7549999952316284,-0.08500000089406967,-0.20000000298023224,0.7350000143051147,-0.08500000089406967]);
IndexedLineSet1133.coord = Coordinate1134;

Shape1132.geometry = IndexedLineSet1133;

Appearance Appearance1135 = createNode("Appearance");
Appearance1135.USE = "SegmentLine";
Shape1132.appearance = Appearance1135;

HAnimSegment1131.children = new MFNode();

HAnimSegment1131.children[0] = Shape1132;

HAnimJoint1128.children[1] = HAnimSegment1131;

HAnimJoint HAnimJoint1136 = createNode("HAnimJoint");
HAnimJoint1136.name = "r_pinky3";
HAnimJoint1136.DEF = "Joe_r_pinky3";
HAnimJoint1136.center = new SFVec3f(new float[-0.20000000298023224,0.7350000143051147,-0.09000000357627869]);
HAnimJoint1136.skinCoordIndex = new MFInt32(new int[325,326,327,328,329,330,331,332,333]);
HAnimJoint1136.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint1136.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1136.llimit = new MFFloat(new float[0,0,0]);
Transform Transform1137 = createNode("Transform");
Transform1137.translation = new SFVec3f(new float[-0.20000000298023224,0.7350000143051147,-0.08500000089406967]);
Shape Shape1138 = createNode("Shape");
Shape1138.USE = "jointbox";
Transform1137.children = new MFNode();

Transform1137.children[0] = Shape1138;

HAnimJoint1136.children = new MFNode();

HAnimJoint1136.children[0] = Transform1137;

HAnimSegment HAnimSegment1139 = createNode("HAnimSegment");
HAnimSegment1139.name = "r_pinky_distal";
HAnimSegment1139.DEF = "Joe_r_pinky_distal";
Shape Shape1140 = createNode("Shape");
IndexedLineSet IndexedLineSet1141 = createNode("IndexedLineSet");
IndexedLineSet1141.coordIndex = new MFInt32(new int[0,1,-1]);
Coordinate Coordinate1142 = createNode("Coordinate");
Coordinate1142.point = new MFVec3f(new float[-0.20000000298023224,0.7350000143051147,-0.08500000089406967,-0.20000000298023224,0.7200000286102295,-0.08500000089406967]);
IndexedLineSet1141.coord = Coordinate1142;

Shape1140.geometry = IndexedLineSet1141;

Appearance Appearance1143 = createNode("Appearance");
Appearance1143.USE = "SegmentLine";
Shape1140.appearance = Appearance1143;

HAnimSegment1139.children = new MFNode();

HAnimSegment1139.children[0] = Shape1140;

HAnimSite HAnimSite1144 = createNode("HAnimSite");
HAnimSite1144.name = "r_pinky_distal_tip";
HAnimSite1144.DEF = "Joe_r_pinky_distal_tip";
HAnimSite1144.translation = new SFVec3f(new float[-0.20000000298023224,0.7200000286102295,-0.08500000089406967]);
Shape Shape1145 = createNode("Shape");
Shape1145.USE = "sitebox";
HAnimSite1144.children = new MFNode();

HAnimSite1144.children[0] = Shape1145;

HAnimSegment1139.children[1] = HAnimSite1144;

HAnimJoint1136.children[1] = HAnimSegment1139;

HAnimJoint1128.children[2] = HAnimJoint1136;

HAnimJoint1120.children[2] = HAnimJoint1128;

HAnimJoint1110.children[2] = HAnimJoint1120;

HAnimJoint966.children[6] = HAnimJoint1110;

HAnimJoint944.children[2] = HAnimJoint966;

HAnimJoint914.children[2] = HAnimJoint944;

HAnimJoint898.children[2] = HAnimJoint914;

HAnimJoint888.children[2] = HAnimJoint898;

HAnimJoint513.children[3] = HAnimJoint888;

HAnimJoint505.children[2] = HAnimJoint513;

HAnimJoint495.children[3] = HAnimJoint505;

HAnimJoint487.children[2] = HAnimJoint495;

HAnimJoint479.children[2] = HAnimJoint487;

HAnimJoint471.children[2] = HAnimJoint479;

HAnimJoint463.children[2] = HAnimJoint471;

HAnimJoint451.children[2] = HAnimJoint463;

HAnimJoint441.children[2] = HAnimJoint451;

HAnimJoint433.children[2] = HAnimJoint441;

HAnimJoint425.children[2] = HAnimJoint433;

HAnimJoint417.children[2] = HAnimJoint425;

HAnimJoint391.children[2] = HAnimJoint417;

HAnimJoint383.children[2] = HAnimJoint391;

HAnimJoint375.children[2] = HAnimJoint383;

HAnimJoint358.children[3] = HAnimJoint375;

HAnimJoint53.children[2] = HAnimJoint358;

HAnimHumanoid52.joints = new MFNode();

HAnimHumanoid52.joints[0] = HAnimJoint53;

HAnimJoint HAnimJoint1146 = createNode("HAnimJoint");
HAnimJoint1146.USE = "Joe_sacroiliac";
HAnimHumanoid52.joints[1] = HAnimJoint1146;

HAnimJoint HAnimJoint1147 = createNode("HAnimJoint");
HAnimJoint1147.USE = "Joe_l_hip";
HAnimHumanoid52.joints[2] = HAnimJoint1147;

HAnimJoint HAnimJoint1148 = createNode("HAnimJoint");
HAnimJoint1148.USE = "Joe_l_knee";
HAnimHumanoid52.joints[3] = HAnimJoint1148;

HAnimJoint HAnimJoint1149 = createNode("HAnimJoint");
HAnimJoint1149.USE = "Joe_l_ankle";
HAnimHumanoid52.joints[4] = HAnimJoint1149;

HAnimJoint HAnimJoint1150 = createNode("HAnimJoint");
HAnimJoint1150.USE = "Joe_l_subtalar";
HAnimHumanoid52.joints[5] = HAnimJoint1150;

HAnimJoint HAnimJoint1151 = createNode("HAnimJoint");
HAnimJoint1151.USE = "Joe_l_midtarsal";
HAnimHumanoid52.joints[6] = HAnimJoint1151;

HAnimJoint HAnimJoint1152 = createNode("HAnimJoint");
HAnimJoint1152.USE = "Joe_l_metatarsal";
HAnimHumanoid52.joints[7] = HAnimJoint1152;

HAnimJoint HAnimJoint1153 = createNode("HAnimJoint");
HAnimJoint1153.USE = "Joe_r_hip";
HAnimHumanoid52.joints[8] = HAnimJoint1153;

HAnimJoint HAnimJoint1154 = createNode("HAnimJoint");
HAnimJoint1154.USE = "Joe_r_knee";
HAnimHumanoid52.joints[9] = HAnimJoint1154;

HAnimJoint HAnimJoint1155 = createNode("HAnimJoint");
HAnimJoint1155.USE = "Joe_r_ankle";
HAnimHumanoid52.joints[10] = HAnimJoint1155;

HAnimJoint HAnimJoint1156 = createNode("HAnimJoint");
HAnimJoint1156.USE = "Joe_r_subtalar";
HAnimHumanoid52.joints[11] = HAnimJoint1156;

HAnimJoint HAnimJoint1157 = createNode("HAnimJoint");
HAnimJoint1157.USE = "Joe_r_midtarsal";
HAnimHumanoid52.joints[12] = HAnimJoint1157;

HAnimJoint HAnimJoint1158 = createNode("HAnimJoint");
HAnimJoint1158.USE = "Joe_r_metatarsal";
HAnimHumanoid52.joints[13] = HAnimJoint1158;

HAnimJoint HAnimJoint1159 = createNode("HAnimJoint");
HAnimJoint1159.USE = "Joe_vl5";
HAnimHumanoid52.joints[14] = HAnimJoint1159;

HAnimJoint HAnimJoint1160 = createNode("HAnimJoint");
HAnimJoint1160.USE = "Joe_vl4";
HAnimHumanoid52.joints[15] = HAnimJoint1160;

HAnimJoint HAnimJoint1161 = createNode("HAnimJoint");
HAnimJoint1161.USE = "Joe_vl3";
HAnimHumanoid52.joints[16] = HAnimJoint1161;

HAnimJoint HAnimJoint1162 = createNode("HAnimJoint");
HAnimJoint1162.USE = "Joe_vl2";
HAnimHumanoid52.joints[17] = HAnimJoint1162;

HAnimJoint HAnimJoint1163 = createNode("HAnimJoint");
HAnimJoint1163.USE = "Joe_vl1";
HAnimHumanoid52.joints[18] = HAnimJoint1163;

HAnimJoint HAnimJoint1164 = createNode("HAnimJoint");
HAnimJoint1164.USE = "Joe_vt12";
HAnimHumanoid52.joints[19] = HAnimJoint1164;

HAnimJoint HAnimJoint1165 = createNode("HAnimJoint");
HAnimJoint1165.USE = "Joe_vt11";
HAnimHumanoid52.joints[20] = HAnimJoint1165;

HAnimJoint HAnimJoint1166 = createNode("HAnimJoint");
HAnimJoint1166.USE = "Joe_vt10";
HAnimHumanoid52.joints[21] = HAnimJoint1166;

HAnimJoint HAnimJoint1167 = createNode("HAnimJoint");
HAnimJoint1167.USE = "Joe_vt9";
HAnimHumanoid52.joints[22] = HAnimJoint1167;

HAnimJoint HAnimJoint1168 = createNode("HAnimJoint");
HAnimJoint1168.USE = "Joe_vt8";
HAnimHumanoid52.joints[23] = HAnimJoint1168;

HAnimJoint HAnimJoint1169 = createNode("HAnimJoint");
HAnimJoint1169.USE = "Joe_vt7";
HAnimHumanoid52.joints[24] = HAnimJoint1169;

HAnimJoint HAnimJoint1170 = createNode("HAnimJoint");
HAnimJoint1170.USE = "Joe_vt6";
HAnimHumanoid52.joints[25] = HAnimJoint1170;

HAnimJoint HAnimJoint1171 = createNode("HAnimJoint");
HAnimJoint1171.USE = "Joe_vt5";
HAnimHumanoid52.joints[26] = HAnimJoint1171;

HAnimJoint HAnimJoint1172 = createNode("HAnimJoint");
HAnimJoint1172.USE = "Joe_vt4";
HAnimHumanoid52.joints[27] = HAnimJoint1172;

HAnimJoint HAnimJoint1173 = createNode("HAnimJoint");
HAnimJoint1173.USE = "Joe_vt3";
HAnimHumanoid52.joints[28] = HAnimJoint1173;

HAnimJoint HAnimJoint1174 = createNode("HAnimJoint");
HAnimJoint1174.USE = "Joe_vt2";
HAnimHumanoid52.joints[29] = HAnimJoint1174;

HAnimJoint HAnimJoint1175 = createNode("HAnimJoint");
HAnimJoint1175.USE = "Joe_vt1";
HAnimHumanoid52.joints[30] = HAnimJoint1175;

HAnimJoint HAnimJoint1176 = createNode("HAnimJoint");
HAnimJoint1176.USE = "Joe_vc7";
HAnimHumanoid52.joints[31] = HAnimJoint1176;

HAnimJoint HAnimJoint1177 = createNode("HAnimJoint");
HAnimJoint1177.USE = "Joe_vc6";
HAnimHumanoid52.joints[32] = HAnimJoint1177;

HAnimJoint HAnimJoint1178 = createNode("HAnimJoint");
HAnimJoint1178.USE = "Joe_vc5";
HAnimHumanoid52.joints[33] = HAnimJoint1178;

HAnimJoint HAnimJoint1179 = createNode("HAnimJoint");
HAnimJoint1179.USE = "Joe_vc4";
HAnimHumanoid52.joints[34] = HAnimJoint1179;

HAnimJoint HAnimJoint1180 = createNode("HAnimJoint");
HAnimJoint1180.USE = "Joe_vc3";
HAnimHumanoid52.joints[35] = HAnimJoint1180;

HAnimJoint HAnimJoint1181 = createNode("HAnimJoint");
HAnimJoint1181.USE = "Joe_vc2";
HAnimHumanoid52.joints[36] = HAnimJoint1181;

HAnimJoint HAnimJoint1182 = createNode("HAnimJoint");
HAnimJoint1182.USE = "Joe_vc1";
HAnimHumanoid52.joints[37] = HAnimJoint1182;

HAnimJoint HAnimJoint1183 = createNode("HAnimJoint");
HAnimJoint1183.USE = "Joe_skullbase";
HAnimHumanoid52.joints[38] = HAnimJoint1183;

HAnimJoint HAnimJoint1184 = createNode("HAnimJoint");
HAnimJoint1184.USE = "Joe_l_eyeball_joint";
HAnimHumanoid52.joints[39] = HAnimJoint1184;

HAnimJoint HAnimJoint1185 = createNode("HAnimJoint");
HAnimJoint1185.USE = "Joe_r_eyeball_joint";
HAnimHumanoid52.joints[40] = HAnimJoint1185;

HAnimJoint HAnimJoint1186 = createNode("HAnimJoint");
HAnimJoint1186.USE = "Joe_l_sternoclavicular";
HAnimHumanoid52.joints[41] = HAnimJoint1186;

HAnimJoint HAnimJoint1187 = createNode("HAnimJoint");
HAnimJoint1187.USE = "Joe_l_acromioclavicular";
HAnimHumanoid52.joints[42] = HAnimJoint1187;

HAnimJoint HAnimJoint1188 = createNode("HAnimJoint");
HAnimJoint1188.USE = "Joe_l_shoulder";
HAnimHumanoid52.joints[43] = HAnimJoint1188;

HAnimJoint HAnimJoint1189 = createNode("HAnimJoint");
HAnimJoint1189.USE = "Joe_l_elbow";
HAnimHumanoid52.joints[44] = HAnimJoint1189;

HAnimJoint HAnimJoint1190 = createNode("HAnimJoint");
HAnimJoint1190.USE = "Joe_l_wrist";
HAnimHumanoid52.joints[45] = HAnimJoint1190;

HAnimJoint HAnimJoint1191 = createNode("HAnimJoint");
HAnimJoint1191.USE = "Joe_l_thumb1";
HAnimHumanoid52.joints[46] = HAnimJoint1191;

HAnimJoint HAnimJoint1192 = createNode("HAnimJoint");
HAnimJoint1192.USE = "Joe_l_thumb2";
HAnimHumanoid52.joints[47] = HAnimJoint1192;

HAnimJoint HAnimJoint1193 = createNode("HAnimJoint");
HAnimJoint1193.USE = "Joe_l_thumb3";
HAnimHumanoid52.joints[48] = HAnimJoint1193;

HAnimJoint HAnimJoint1194 = createNode("HAnimJoint");
HAnimJoint1194.USE = "Joe_l_index0";
HAnimHumanoid52.joints[49] = HAnimJoint1194;

HAnimJoint HAnimJoint1195 = createNode("HAnimJoint");
HAnimJoint1195.USE = "Joe_l_index1";
HAnimHumanoid52.joints[50] = HAnimJoint1195;

HAnimJoint HAnimJoint1196 = createNode("HAnimJoint");
HAnimJoint1196.USE = "Joe_l_index2";
HAnimHumanoid52.joints[51] = HAnimJoint1196;

HAnimJoint HAnimJoint1197 = createNode("HAnimJoint");
HAnimJoint1197.USE = "Joe_l_index3";
HAnimHumanoid52.joints[52] = HAnimJoint1197;

HAnimJoint HAnimJoint1198 = createNode("HAnimJoint");
HAnimJoint1198.USE = "Joe_l_middle0";
HAnimHumanoid52.joints[53] = HAnimJoint1198;

HAnimJoint HAnimJoint1199 = createNode("HAnimJoint");
HAnimJoint1199.USE = "Joe_l_middle1";
HAnimHumanoid52.joints[54] = HAnimJoint1199;

HAnimJoint HAnimJoint1200 = createNode("HAnimJoint");
HAnimJoint1200.USE = "Joe_l_middle2";
HAnimHumanoid52.joints[55] = HAnimJoint1200;

HAnimJoint HAnimJoint1201 = createNode("HAnimJoint");
HAnimJoint1201.USE = "Joe_l_middle3";
HAnimHumanoid52.joints[56] = HAnimJoint1201;

HAnimJoint HAnimJoint1202 = createNode("HAnimJoint");
HAnimJoint1202.USE = "Joe_l_ring0";
HAnimHumanoid52.joints[57] = HAnimJoint1202;

HAnimJoint HAnimJoint1203 = createNode("HAnimJoint");
HAnimJoint1203.USE = "Joe_l_ring1";
HAnimHumanoid52.joints[58] = HAnimJoint1203;

HAnimJoint HAnimJoint1204 = createNode("HAnimJoint");
HAnimJoint1204.USE = "Joe_l_ring2";
HAnimHumanoid52.joints[59] = HAnimJoint1204;

HAnimJoint HAnimJoint1205 = createNode("HAnimJoint");
HAnimJoint1205.USE = "Joe_l_ring3";
HAnimHumanoid52.joints[60] = HAnimJoint1205;

HAnimJoint HAnimJoint1206 = createNode("HAnimJoint");
HAnimJoint1206.USE = "Joe_l_pinky0";
HAnimHumanoid52.joints[61] = HAnimJoint1206;

HAnimJoint HAnimJoint1207 = createNode("HAnimJoint");
HAnimJoint1207.USE = "Joe_l_pinky1";
HAnimHumanoid52.joints[62] = HAnimJoint1207;

HAnimJoint HAnimJoint1208 = createNode("HAnimJoint");
HAnimJoint1208.USE = "Joe_l_pinky2";
HAnimHumanoid52.joints[63] = HAnimJoint1208;

HAnimJoint HAnimJoint1209 = createNode("HAnimJoint");
HAnimJoint1209.USE = "Joe_l_pinky3";
HAnimHumanoid52.joints[64] = HAnimJoint1209;

HAnimJoint HAnimJoint1210 = createNode("HAnimJoint");
HAnimJoint1210.USE = "Joe_r_sternoclavicular";
HAnimHumanoid52.joints[65] = HAnimJoint1210;

HAnimJoint HAnimJoint1211 = createNode("HAnimJoint");
HAnimJoint1211.USE = "Joe_r_acromioclavicular";
HAnimHumanoid52.joints[66] = HAnimJoint1211;

HAnimJoint HAnimJoint1212 = createNode("HAnimJoint");
HAnimJoint1212.USE = "Joe_r_shoulder";
HAnimHumanoid52.joints[67] = HAnimJoint1212;

HAnimJoint HAnimJoint1213 = createNode("HAnimJoint");
HAnimJoint1213.USE = "Joe_r_elbow";
HAnimHumanoid52.joints[68] = HAnimJoint1213;

HAnimJoint HAnimJoint1214 = createNode("HAnimJoint");
HAnimJoint1214.USE = "Joe_r_wrist";
HAnimHumanoid52.joints[69] = HAnimJoint1214;

HAnimJoint HAnimJoint1215 = createNode("HAnimJoint");
HAnimJoint1215.USE = "Joe_r_thumb1";
HAnimHumanoid52.joints[70] = HAnimJoint1215;

HAnimJoint HAnimJoint1216 = createNode("HAnimJoint");
HAnimJoint1216.USE = "Joe_r_thumb2";
HAnimHumanoid52.joints[71] = HAnimJoint1216;

HAnimJoint HAnimJoint1217 = createNode("HAnimJoint");
HAnimJoint1217.USE = "Joe_r_thumb3";
HAnimHumanoid52.joints[72] = HAnimJoint1217;

HAnimJoint HAnimJoint1218 = createNode("HAnimJoint");
HAnimJoint1218.USE = "Joe_r_index0";
HAnimHumanoid52.joints[73] = HAnimJoint1218;

HAnimJoint HAnimJoint1219 = createNode("HAnimJoint");
HAnimJoint1219.USE = "Joe_r_index1";
HAnimHumanoid52.joints[74] = HAnimJoint1219;

HAnimJoint HAnimJoint1220 = createNode("HAnimJoint");
HAnimJoint1220.USE = "Joe_r_index2";
HAnimHumanoid52.joints[75] = HAnimJoint1220;

HAnimJoint HAnimJoint1221 = createNode("HAnimJoint");
HAnimJoint1221.USE = "Joe_r_index3";
HAnimHumanoid52.joints[76] = HAnimJoint1221;

HAnimJoint HAnimJoint1222 = createNode("HAnimJoint");
HAnimJoint1222.USE = "Joe_r_middle0";
HAnimHumanoid52.joints[77] = HAnimJoint1222;

HAnimJoint HAnimJoint1223 = createNode("HAnimJoint");
HAnimJoint1223.USE = "Joe_r_middle1";
HAnimHumanoid52.joints[78] = HAnimJoint1223;

HAnimJoint HAnimJoint1224 = createNode("HAnimJoint");
HAnimJoint1224.USE = "Joe_r_middle2";
HAnimHumanoid52.joints[79] = HAnimJoint1224;

HAnimJoint HAnimJoint1225 = createNode("HAnimJoint");
HAnimJoint1225.USE = "Joe_r_middle3";
HAnimHumanoid52.joints[80] = HAnimJoint1225;

HAnimJoint HAnimJoint1226 = createNode("HAnimJoint");
HAnimJoint1226.USE = "Joe_r_ring0";
HAnimHumanoid52.joints[81] = HAnimJoint1226;

HAnimJoint HAnimJoint1227 = createNode("HAnimJoint");
HAnimJoint1227.USE = "Joe_r_ring1";
HAnimHumanoid52.joints[82] = HAnimJoint1227;

HAnimJoint HAnimJoint1228 = createNode("HAnimJoint");
HAnimJoint1228.USE = "Joe_r_ring2";
HAnimHumanoid52.joints[83] = HAnimJoint1228;

HAnimJoint HAnimJoint1229 = createNode("HAnimJoint");
HAnimJoint1229.USE = "Joe_r_ring3";
HAnimHumanoid52.joints[84] = HAnimJoint1229;

HAnimJoint HAnimJoint1230 = createNode("HAnimJoint");
HAnimJoint1230.USE = "Joe_r_pinky0";
HAnimHumanoid52.joints[85] = HAnimJoint1230;

HAnimJoint HAnimJoint1231 = createNode("HAnimJoint");
HAnimJoint1231.USE = "Joe_r_pinky1";
HAnimHumanoid52.joints[86] = HAnimJoint1231;

HAnimJoint HAnimJoint1232 = createNode("HAnimJoint");
HAnimJoint1232.USE = "Joe_r_pinky2";
HAnimHumanoid52.joints[87] = HAnimJoint1232;

HAnimJoint HAnimJoint1233 = createNode("HAnimJoint");
HAnimJoint1233.USE = "Joe_r_pinky3";
HAnimHumanoid52.joints[88] = HAnimJoint1233;

Shape Shape1234 = createNode("Shape");
IndexedFaceSet IndexedFaceSet1235 = createNode("IndexedFaceSet");
IndexedFaceSet1235.coordIndex = new MFInt32(new int[0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
IndexedFaceSet1235.creaseAngle = 3.0999999046325684;
Coordinate Coordinate1236 = createNode("Coordinate");
Coordinate1236.DEF = "JoeSkinCoord";
Coordinate1236.point = new MFVec3f(new float[0,1.7699999809265137,0,0,1.6649999618530273,0.09000000357627869,-0.032999999821186066,1.6200000047683716,0.08699999749660492,0.032999999821186066,1.6200000047683716,0.08699999749660492,0,1.5499999523162842,0.09700000286102295,-0.07699999958276749,1.6399999856948853,-0.009999999776482582,-0.05270000174641609,1.5800000429153442,0.014999999664723873,0.07699999958276749,1.6399999856948853,-0.009999999776482582,0.05270000174641609,1.5800000429153442,0.014999999664723873,0,1.625,-0.0925000011920929,-0.029999999329447746,1.4600000381469727,0.03500000014901161,0,1.440000057220459,0.029999999329447746,0.029999999329447746,1.4600000381469727,0.03500000014901161,-0.11349999904632568,1.3179999589920044,0.0949999988079071,0.11349999904632568,1.3179999589920044,0.0949999988079071,0,1.25,0.11299999803304672,-0.08699999749660492,1.190000057220459,0.09000000357627869,-0.09350000321865082,1.0299999713897705,0.07500000298023224,0.08699999749660492,1.190000057220459,0.09000000357627869,0.09350000321865082,1.0299999713897705,0.07500000298023224,-0.14249999821186066,1.065000057220459,0.0032999999821186066,-0.15000000596046448,0.8999999761581421,-0.009999999776482582,0.14249999821186066,1.065000057220459,0.0032999999821186066,0.15000000596046448,0.8999999761581421,-0.009999999776482582,0,1.5299999713897705,-0.08399999886751175,0.004900000058114529,1.1907999515533447,-0.1120000034570694,-0.07729999721050262,1.0190000534057617,-0.11999999731779099,0.07729999721050262,1.0190000534057617,-0.11999999731779099,0.004999999888241291,1.0915000438690186,-0.10909999907016754,-0.17800000309944153,1.4824999570846558,-0.06199999898672104,-0.17000000178813934,1.3799999952316284,0.007000000216066837,-0.18799999356269836,0.8676000237464905,-0.035999998450279236,-0.1599999964237213,1.3799999952316284,-0.12700000405311584,-0.20000000298023224,1.138800024986267,-0.07999999821186066,-0.24400000274181366,1.138800024986267,-0.03999999910593033,-0.16500000655651093,1.138800024986267,-0.03999999910593033,-0.23000000417232513,1.1330000162124634,-0.054999999701976776,-0.19769999384880066,0.8169999718666077,-0.01769999973475933,-0.1941000074148178,0.6769999861717224,-0.04230000078678131,-0.21170000731945038,0.8560000061988831,-0.058400001376867294,-0.19300000369548798,0.7889999747276306,-0.10639999806880951,0.17499999701976776,1.4824999570846558,-0.05999999865889549,0.17000000178813934,1.3799999952316284,0.007000000216066837,0.1899999976158142,0.8644999861717224,-0.04149999842047691,0.1599999964237213,1.3799999952316284,-0.125,0.20000000298023224,1.138800024986267,-0.07999999821186066,0.16500000655651093,1.138800024986267,-0.03999999910593033,0.24400000274181366,1.138800024986267,-0.03999999910593033,0.23000000417232513,1.1330000162124634,-0.054999999701976776,0.20090000331401825,0.8138999938964844,-0.02370000071823597,0.20559999346733093,0.6743000149726868,-0.04820000007748604,0.2142000049352646,0.8529000282287598,-0.06480000168085098,0.19290000200271606,0.7860000133514404,-0.11219999939203262,-0.10000000149011612,0.49129998683929443,-0.029999999329447746,-0.17000000178813934,0.4659999907016754,0,-0.05000000074505806,0.4659999907016754,0,-0.16500000655651093,0.009999999776482582,0.11999999731779099,-0.15000000596046448,0.07000000029802322,0,-0.08500000089406967,0.0860000029206276,0.012500000186264515,-0.09000000357627869,0.0560000017285347,0.012500000186264515,-0.11500000208616257,0.019999999552965164,0.12200000137090683,-0.11500000208616257,0.03999999910593033,-0.054999999701976776,-0.10999999940395355,0.010999999940395355,0.1899999976158142,0.09929999709129333,0.4880000054836273,-0.03099999949336052,0.17000000178813934,0.4659999907016754,0,0.05000000074505806,0.48669999837875366,0,0.16500000655651093,0.009999999776482582,0.11999999731779099,0.15000000596046448,0.07000000029802322,0,0.08500000089406967,0.0860000029206276,0.012500000186264515,0.09000000357627869,0.0560000017285347,0.012500000186264515,0.11500000208616257,0.019999999552965164,0.12200000137090683,0.11500000208616257,0.03999999910593033,-0.054999999701976776,0.10999999940395355,0.010999999940395355,0.1899999976158142,0,0.875,0,-0.06459999829530716,1.5149999856948853,-0.03799999877810478,0.06459999829530716,1.5148999691009521,-0.03799999877810478,0,1.0722500085830688,0.09000000357627869,-0.10999999940395355,1.4270000457763672,-0.13750000298023224,-0.23499999940395355,1.4199999570846558,-0.0625,0.10999999940395355,1.4270000457763672,-0.13750000298023224,0.23499999940395355,1.4199999570846558,-0.0625,0,1.409999966621399,-0.14499999582767487,0,0.925000011920929,0.07999999821186066,-0.08699999749660492,1.190000057220459,-0.09000000357627869,0.08699999749660492,1.190000057220459,-0.09000000357627869,0.1720000058412552,1.3200000524520874,-0.029999999329447746,-0.1720000058412552,1.3200000524520874,-0.029999999329447746,0.15000000596046448,1.2300000190734863,-0.014999999664723873,-0.15000000596046448,1.2300000190734863,-0.014999999664723873,0.07900000363588333,0.9200000166893005,-0.14000000059604645,0.10000000149011612,0.8999999761581421,0.07699999958276749,-0.07900000363588333,0.9200000166893005,-0.14000000059604645,-0.10000000149011612,0.8999999761581421,0.07500000298023224,0,0.8700000047683716,0,0.17100000381469727,0.6499999761581421,0,0.019999999552965164,0.6499999761581421,0,0.10000000149011612,0.6499999761581421,-0.07999999821186066,0.10000000149011612,0.6499999761581421,0.07000000029802322,-0.17100000381469727,0.6499999761581421,0,-0.019999999552965164,0.6499999761581421,0,-0.10000000149011612,0.6499999761581421,-0.07999999821186066,-0.10000000149011612,0.6499999761581421,0.07000000029802322,0.25,1.2699999809265137,-0.03999999910593033,0.17000000178813934,1.2699999809265137,-0.03999999910593033,0.20000000298023224,1.2699999809265137,-0.09000000357627869,0.20000000298023224,1.2699999809265137,0.019999999552965164,0.24400000274181366,1.138800024986267,-0.03999999910593033,0.16500000655651093,1.138800024986267,-0.03999999910593033,0.20000000298023224,1.138800024986267,-0.07999999821186066,0.20000000298023224,1.138800024986267,-0.013000000268220901,0.22499999403953552,1,-0.009999999776482582,0.22499999403953552,1,-0.07000000029802322,0.1850000023841858,1,-0.009999999776482582,0.1850000023841858,1,-0.07000000029802322,0.20000000298023224,1.138800024986267,-0.03999999910593033,0.22499999403953552,0.9200000166893005,-0.03999999910593033,0.17499999701976776,0.9200000166893005,-0.03999999910593033,0.20000000298023224,0.9200000166893005,-0.06499999761581421,0.20000000298023224,0.9200000166893005,-0.014999999664723873,0.22499999403953552,0.8899999856948853,-0.03999999910593033,0.17499999701976776,0.8899999856948853,-0.03999999910593033,0.20000000298023224,0.8899999856948853,-0.06499999761581421,0.20000000298023224,0.8899999856948853,-0.014999999664723873,0.21799999475479126,0.8600000143051147,-0.03999999910593033,0.18400000035762787,0.8600000143051147,-0.03999999910593033,0.20000000298023224,0.8700000047683716,-0.07000000029802322,0.20000000298023224,0.8700000047683716,0,0.20999999344348907,0.8500000238418579,0,0.18539999425411224,0.8500000238418579,0,0.21199999749660492,0.8399999737739563,-0.014999999664723873,0.18299999833106995,0.8399999737739563,-0.014999999664723873,0.21299999952316284,0.8349999785423279,-0.03999999910593033,0.1899999976158142,0.8349999785423279,-0.03999999910593033,0.210999995470047,0.8349999785423279,-0.06499999761581421,0.19200000166893005,0.8349999785423279,-0.06499999761581421,0.20800000429153442,0.8399999737739563,-0.08500000089406967,0.1899999976158142,0.8399999737739563,-0.08500000089406967,0.20000000298023224,0.8399999737739563,-0.0949999988079071,0.2150000035762787,0.8199999928474426,0,0.19300000369548798,0.8149999976158142,0.004999999888241291,0.1979999989271164,0.800000011920929,0.012000000104308128,0.20999999344348907,0.8199999928474426,0.029999999329447746,0.1899999976158142,0.8199999928474426,0.029999999329447746,0.20000000298023224,0.8349999785423279,0.039000000804662704,0.21199999749660492,0.800000011920929,0.05000000074505806,0.18799999356269836,0.800000011920929,0.05000000074505806,0.20000000298023224,0.8069999814033508,0.05700000002980232,0.20000000298023224,0.7929999828338623,0.03500000014901161,0.20000000298023224,0.7739999890327454,0.07599999755620956,0.21199999749660492,0.7799999713897705,0.07000000029802322,0.18799999356269836,0.7799999713897705,0.07000000029802322,0.20000000298023224,0.7850000262260437,0.07500000298023224,0.20000000298023224,0.7699999809265137,0.06199999898672104,0.2150000035762787,0.7929999828338623,-0.014999999664723873,0.18700000643730164,0.7929999828338623,-0.014999999664723873,0.20000000298023224,0.7929999828338623,-0.004999999888241291,0.2150000035762787,0.7879999876022339,-0.03999999910593033,0.18700000643730164,0.7879999876022339,-0.03999999910593033,0.2150000035762787,0.7929999828338623,-0.06499999761581421,0.18700000643730164,0.7929999828338623,-0.06499999761581421,0.20999999344348907,0.7900000214576721,-0.08500000089406967,0.1899999976158142,0.7900000214576721,-0.08500000089406967,0.20000000298023224,0.7900000214576721,-0.0949999988079071,0.1899999976158142,0.7699999809265137,-0.027499999850988388,0.1899999976158142,0.7699999809265137,-0.05249999836087227,0.1899999976158142,0.7799999713897705,-0.07750000059604645,0.21199999749660492,0.7450000047683716,-0.014999999664723873,0.18799999356269836,0.7450000047683716,-0.019999999552965164,0.20000000298023224,0.7450000047683716,-0.025499999523162842,0.20000000298023224,0.7450000047683716,-0.0044999998062849045,0.210999995470047,0.7200000286102295,-0.014999999664723873,0.1889999955892563,0.7200000286102295,-0.014999999664723873,0.20000000298023224,0.7200000286102295,-0.025200000032782555,0.20000000298023224,0.7200000286102295,-0.004800000227987766,0.20999999344348907,0.6949999928474426,-0.014999999664723873,0.1899999976158142,0.6949999928474426,-0.014999999664723873,0.20000000298023224,0.6949999928474426,-0.02500000037252903,0.20000000298023224,0.6949999928474426,-0.004999999888241291,0.20000000298023224,0.6850000023841858,-0.014999999664723873,0.2150000035762787,0.7400000095367432,-0.03999999910593033,0.1850000023841858,0.7400000095367432,-0.03999999910593033,0.20000000298023224,0.7400000095367432,-0.054999999701976776,0.20000000298023224,0.7400000095367432,-0.02500000037252903,0.20999999344348907,0.7142000198364258,-0.03999999910593033,0.1899999976158142,0.7142000198364258,-0.03999999910593033,0.20000000298023224,0.7142000198364258,-0.05299999937415123,0.20000000298023224,0.7142000198364258,-0.027000000700354576,0.20999999344348907,0.6800000071525574,-0.03999999910593033,0.1899999976158142,0.6800000071525574,-0.03999999910593033,0.20000000298023224,0.6800000071525574,-0.05000000074505806,0.20000000298023224,0.6800000071525574,-0.029999999329447746,0.20000000298023224,0.6700000166893005,-0.03999999910593033,0.21199999749660492,0.7400000095367432,-0.06499999761581421,0.18799999356269836,0.7400000095367432,-0.06499999761581421,0.20000000298023224,0.7400000095367432,-0.07559999823570251,0.20000000298023224,0.7400000095367432,-0.05420000106096268,0.20999999344348907,0.7177000045776367,-0.06499999761581421,0.1899999976158142,0.7177000045776367,-0.06499999761581421,0.20000000298023224,0.7177000045776367,-0.07509999722242355,0.20000000298023224,0.7177000045776367,-0.05490000173449516,0.20999999344348907,0.6949999928474426,-0.06499999761581421,0.1899999976158142,0.6949999928474426,-0.06499999761581421,0.20000000298023224,0.6949999928474426,-0.07500000298023224,0.20000000298023224,0.6949999928474426,-0.054999999701976776,0.20000000298023224,0.6850000023841858,-0.06499999761581421,0.210999995470047,0.7549999952316284,-0.08500000089406967,0.1889999955892563,0.7549999952316284,-0.08500000089406967,0.20000000298023224,0.7549999952316284,-0.09520000219345093,0.20000000298023224,0.7549999952316284,-0.07479999959468842,0.20999999344348907,0.7350000143051147,-0.08500000089406967,0.1899999976158142,0.7350000143051147,-0.08500000089406967,0.20000000298023224,0.7350000143051147,-0.09510000050067902,0.20000000298023224,0.7350000143051147,-0.07490000128746033,0.20999999344348907,0.7200000286102295,-0.08500000089406967,0.1899999976158142,0.7200000286102295,-0.08500000089406967,0.20000000298023224,0.7200000286102295,-0.0949999988079071,0.20000000298023224,0.7200000286102295,-0.07500000298023224,0.20000000298023224,0.7099999785423279,-0.08500000089406967,-0.23000000417232513,1.2300000190734863,-0.03999999910593033,-0.1599999964237213,1.2300000190734863,-0.03999999910593033,-0.20000000298023224,1.2350000143051147,-0.10499999672174454,-0.20000000298023224,1.2350000143051147,0.019999999552965164,-0.24400000274181366,1.138800024986267,-0.03999999910593033,-0.16500000655651093,1.138800024986267,-0.03999999910593033,-0.20000000298023224,1.138800024986267,-0.07999999821186066,-0.20000000298023224,1.138800024986267,0.013000000268220901,-0.22499999403953552,1,-0.009999999776482582,-0.22499999403953552,1,-0.07000000029802322,-0.1850000023841858,1,-0.009999999776482582,-0.1850000023841858,1,-0.07000000029802322,-0.20000000298023224,1.138800024986267,-0.03999999910593033,-0.22499999403953552,0.9200000166893005,-0.03999999910593033,-0.17499999701976776,0.9200000166893005,-0.03999999910593033,-0.20000000298023224,0.9200000166893005,-0.06499999761581421,-0.20000000298023224,0.9200000166893005,-0.014999999664723873,-0.22499999403953552,0.8899999856948853,-0.03999999910593033,-0.17499999701976776,0.8899999856948853,-0.03999999910593033,-0.20000000298023224,0.8899999856948853,-0.06499999761581421,-0.20000000298023224,0.8899999856948853,-0.014999999664723873,-0.21799999475479126,0.8600000143051147,-0.03999999910593033,-0.18400000035762787,0.8600000143051147,-0.03999999910593033,-0.20000000298023224,0.8700000047683716,-0.07000000029802322,-0.20000000298023224,0.8700000047683716,0,-0.20999999344348907,0.8500000238418579,0,-0.18539999425411224,0.8500000238418579,0,-0.21199999749660492,0.8399999737739563,-0.014999999664723873,-0.18299999833106995,0.8399999737739563,-0.014999999664723873,-0.21299999952316284,0.8349999785423279,-0.03999999910593033,-0.1899999976158142,0.8349999785423279,-0.03999999910593033,-0.210999995470047,0.8349999785423279,-0.06499999761581421,-0.19200000166893005,0.8349999785423279,-0.06499999761581421,-0.20800000429153442,0.8399999737739563,-0.08500000089406967,-0.1899999976158142,0.8399999737739563,-0.08500000089406967,-0.20000000298023224,0.8399999737739563,-0.0949999988079071,-0.2150000035762787,0.8199999928474426,0,-0.19300000369548798,0.8149999976158142,0.004999999888241291,-0.1979999989271164,0.800000011920929,0.012000000104308128,-0.20999999344348907,0.8199999928474426,0.029999999329447746,-0.1899999976158142,0.8199999928474426,0.029999999329447746,-0.20000000298023224,0.8349999785423279,0.039000000804662704,-0.21199999749660492,0.800000011920929,0.05000000074505806,-0.18799999356269836,0.800000011920929,0.05000000074505806,-0.20000000298023224,0.8069999814033508,0.05700000002980232,-0.20000000298023224,0.7929999828338623,0.03500000014901161,-0.20000000298023224,0.7739999890327454,0.07599999755620956,-0.21199999749660492,0.7799999713897705,0.07000000029802322,-0.18799999356269836,0.7799999713897705,0.07000000029802322,-0.20000000298023224,0.7850000262260437,0.07500000298023224,-0.20000000298023224,0.7699999809265137,0.06199999898672104,-0.2150000035762787,0.7929999828338623,-0.014999999664723873,-0.18700000643730164,0.7929999828338623,-0.014999999664723873,-0.20000000298023224,0.7929999828338623,-0.004999999888241291,-0.2150000035762787,0.7879999876022339,-0.03999999910593033,-0.18700000643730164,0.7879999876022339,-0.03999999910593033,-0.2150000035762787,0.7929999828338623,-0.06499999761581421,-0.18700000643730164,0.7929999828338623,-0.06499999761581421,-0.20999999344348907,0.7900000214576721,-0.08500000089406967,-0.1899999976158142,0.7900000214576721,-0.08500000089406967,-0.20000000298023224,0.7900000214576721,-0.0949999988079071,-0.1899999976158142,0.7699999809265137,-0.027499999850988388,-0.1899999976158142,0.7699999809265137,-0.05249999836087227,-0.1899999976158142,0.7799999713897705,-0.07750000059604645,-0.21199999749660492,0.7450000047683716,-0.014999999664723873,-0.18799999356269836,0.7450000047683716,-0.019999999552965164,-0.20000000298023224,0.7450000047683716,-0.025499999523162842,-0.20000000298023224,0.7450000047683716,-0.0044999998062849045,-0.210999995470047,0.7200000286102295,-0.014999999664723873,-0.1889999955892563,0.7200000286102295,-0.014999999664723873,-0.20000000298023224,0.7200000286102295,-0.025200000032782555,-0.20000000298023224,0.7200000286102295,-0.004800000227987766,-0.20999999344348907,0.6949999928474426,-0.014999999664723873,-0.1899999976158142,0.6949999928474426,-0.014999999664723873,-0.20000000298023224,0.6949999928474426,-0.02500000037252903,-0.20000000298023224,0.6949999928474426,-0.004999999888241291,-0.20000000298023224,0.6850000023841858,-0.014999999664723873,-0.2150000035762787,0.7400000095367432,-0.03999999910593033,-0.1850000023841858,0.7400000095367432,-0.03999999910593033,-0.20000000298023224,0.7400000095367432,-0.054999999701976776,-0.20000000298023224,0.7400000095367432,-0.02500000037252903,-0.20999999344348907,0.7142000198364258,-0.03999999910593033,-0.1899999976158142,0.7142000198364258,-0.03999999910593033,-0.20000000298023224,0.7142000198364258,-0.05299999937415123,-0.20000000298023224,0.7142000198364258,-0.027000000700354576,-0.20999999344348907,0.6800000071525574,-0.03999999910593033,-0.1899999976158142,0.6800000071525574,-0.03999999910593033,-0.20000000298023224,0.6800000071525574,-0.05000000074505806,-0.20000000298023224,0.6800000071525574,-0.029999999329447746,-0.20000000298023224,0.6700000166893005,-0.03999999910593033,-0.21199999749660492,0.7400000095367432,-0.06499999761581421,-0.18799999356269836,0.7400000095367432,-0.06499999761581421,-0.20000000298023224,0.7400000095367432,-0.07559999823570251,-0.20000000298023224,0.7400000095367432,-0.05420000106096268,-0.20999999344348907,0.7177000045776367,-0.06499999761581421,-0.1899999976158142,0.7177000045776367,-0.06499999761581421,-0.20000000298023224,0.7177000045776367,-0.07509999722242355,-0.20000000298023224,0.7177000045776367,-0.05490000173449516,-0.20999999344348907,0.6949999928474426,-0.06499999761581421,-0.1899999976158142,0.6949999928474426,-0.06499999761581421,-0.20000000298023224,0.6949999928474426,-0.07500000298023224,-0.20000000298023224,0.6949999928474426,-0.054999999701976776,-0.20000000298023224,0.6850000023841858,-0.06499999761581421,-0.210999995470047,0.7549999952316284,-0.08500000089406967,-0.1889999955892563,0.7549999952316284,-0.08500000089406967,-0.20000000298023224,0.7549999952316284,-0.09520000219345093,-0.20000000298023224,0.7549999952316284,-0.07479999959468842,-0.20999999344348907,0.7350000143051147,-0.08500000089406967,-0.1899999976158142,0.7350000143051147,-0.08500000089406967,-0.20000000298023224,0.7350000143051147,-0.09510000050067902,-0.20000000298023224,0.7350000143051147,-0.07490000128746033,-0.20999999344348907,0.7200000286102295,-0.08500000089406967,-0.1899999976158142,0.7200000286102295,-0.08500000089406967,-0.20000000298023224,0.7200000286102295,-0.0949999988079071,-0.20000000298023224,0.7200000286102295,-0.07500000298023224,-0.20000000298023224,0.7099999785423279,-0.08500000089406967,0.11500000208616257,0.4659999907016754,0.05999999865889549,0.11500000208616257,0.4659999907016754,-0.054999999701976776,0.15000000596046448,0.4659999907016754,0,0.05000000074505806,0.4659999907016754,0,0.17000000178813934,0.30000001192092896,0,0.05999999865889549,0.30000001192092896,0,0.10000000149011612,0.30000001192092896,-0.05000000074505806,0.10000000149011612,0.30000001192092896,0.05000000074505806,0.15000000596046448,0.07000000029802322,0,0.08500000089406967,0.0860000029206276,0.012500000186264515,0.11500000208616257,0.0689999982714653,-0.04500000178813934,0.11699999868869781,0.09749999642372131,0.061500001698732376,0.13750000298023224,0.006000000052154064,-0.029999999329447746,0.0949999988079071,0.006000000052154064,-0.029999999329447746,0.11500000208616257,0.014999999664723873,-0.04500000178813934,0.11500000208616257,0.05999999865889549,0.10000000149011612,0.11500000208616257,0,0.07000000029802322,0.16500000655651093,0,0.07000000029802322,0.0949999988079071,0,0.07000000029802322,0.11500000208616257,0.03999999910593033,0.12999999523162842,0.125,0,0.11999999731779099,0.16500000655651093,0,0.11999999731779099,0.08699999749660492,0,0.12200000137090683,0.09000000357627869,0.012000000104308128,0.18799999356269836,0.10999999940395355,0.010999999940395355,0.1899999976158142,0.12800000607967377,0.010999999940395355,0.1850000023841858,0.1420000046491623,0.010999999940395355,0.17800000309944153,0.15399999916553497,0.009999999776482582,0.1679999977350235,-0.11500000208616257,0.4659999907016754,0.05999999865889549,-0.11500000208616257,0.4659999907016754,-0.054999999701976776,-0.17000000178813934,0.4659999907016754,0,-0.05000000074505806,0.4659999907016754,0,-0.17000000178813934,0.30000001192092896,0,-0.05999999865889549,0.30000001192092896,0,-0.10000000149011612,0.30000001192092896,-0.05000000074505806,-0.10000000149011612,0.30000001192092896,0.05000000074505806,-0.15000000596046448,0.07000000029802322,0,-0.08500000089406967,0.0860000029206276,0.012500000186264515,-0.11500000208616257,0.0689999982714653,-0.04500000178813934,-0.11699999868869781,0.09749999642372131,0.06199999898672104,-0.13750000298023224,0.006000000052154064,-0.029999999329447746,-0.0949999988079071,0.006000000052154064,-0.029999999329447746,-0.0949999988079071,0.006000000052154064,-0.029999999329447746,-0.11500000208616257,0.05999999865889549,0.10000000149011612,-0.11500000208616257,0,0.07000000029802322,-0.16500000655651093,0,0.07000000029802322,-0.0949999988079071,0,0.07000000029802322,-0.11500000208616257,0.03999999910593033,0.12999999523162842,-0.125,0,0.11999999731779099,-0.16500000655651093,0,0.11999999731779099,-0.08699999749660492,0,0.12200000137090683,-0.09000000357627869,0.012000000104308128,0.18799999356269836,-0.10999999940395355,0.010999999940395355,0.1899999976158142,-0.12800000607967377,0.010999999940395355,0.1850000023841858,-0.1420000046491623,0.010999999940395355,0.17800000309944153,-0.15399999916553497,0.009999999776482582,0.1679999977350235]);
IndexedFaceSet1235.coord = Coordinate1236;

Color Color1237 = createNode("Color");
Color1237.color = new MFColor(new float[1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1]);
IndexedFaceSet1235.color = Color1237;

Shape1234.geometry = IndexedFaceSet1235;

Appearance Appearance1238 = createNode("Appearance");
ImageTexture ImageTexture1239 = createNode("ImageTexture");
ImageTexture1239.url = new MFString(new java.lang.String["zBlueSpiralBkg2.gif"]);
Appearance1238.texture = ImageTexture1239;

Material Material1240 = createNode("Material");
Material1240.ambientIntensity = 0.6000000238418579;
Material1240.diffuseColor = new SFColor(new float[0,0,0]);
Material1240.shininess = 0.6000000238418579;
Appearance1238.material = Material1240;

Shape1234.appearance = Appearance1238;

HAnimHumanoid52.skin[89] = Shape1234;

Coordinate Coordinate1241 = createNode("Coordinate");
Coordinate1241.USE = "JoeSkinCoord";
HAnimHumanoid52.skinCoord = Coordinate1241;

HAnimJoint HAnimJoint1242 = createNode("HAnimJoint");
HAnimJoint1242.USE = "Joe_HumanoidRoot";
HAnimHumanoid52.joints[90] = HAnimJoint1242;

Group51.children = new MFNode();

Group51.children[0] = HAnimHumanoid52;

Group50.children = new MFNode();

Group50.children[0] = Group51;

children[2] = Group50;

TimeSensor TimeSensor1243 = createNode("TimeSensor");
TimeSensor1243.DEF = "Time1";
TimeSensor1243.cycleInterval = 2.86;
TimeSensor1243.loop = True;
children[3] = TimeSensor1243;

TimeSensor TimeSensor1244 = createNode("TimeSensor");
TimeSensor1244.DEF = "Time2";
TimeSensor1244.cycleInterval = 5.72;
TimeSensor1244.loop = True;
children[4] = TimeSensor1244;

OrientationInterpolator OrientationInterpolator1245 = createNode("OrientationInterpolator");
OrientationInterpolator1245.DEF = "Pitch";
OrientationInterpolator1245.key = new MFFloat(new float[0,0.20000000298023224,0.4000000059604645,0.6000000238418579,0.800000011920929,1]);
OrientationInterpolator1245.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,1.25600004196167,1,0,0,2.51200008392334,1,0,0,3.7679998874664307,1,0,0,5.02400016784668,1,0,0,6.28000020980835]);
children[5] = OrientationInterpolator1245;

OrientationInterpolator OrientationInterpolator1246 = createNode("OrientationInterpolator");
OrientationInterpolator1246.DEF = "Yaw";
OrientationInterpolator1246.key = new MFFloat(new float[0,0.20000000298023224,0.4000000059604645,0.6000000238418579,0.800000011920929,1]);
OrientationInterpolator1246.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,1.25600004196167,0,1,0,2.51200008392334,0,1,0,3.7679998874664307,0,1,0,5.02400016784668,0,1,0,6.28000020980835]);
children[6] = OrientationInterpolator1246;

OrientationInterpolator OrientationInterpolator1247 = createNode("OrientationInterpolator");
OrientationInterpolator1247.DEF = "Roll";
OrientationInterpolator1247.key = new MFFloat(new float[0,0.20000000298023224,0.4000000059604645,0.6000000238418579,0.800000011920929,1]);
OrientationInterpolator1247.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.25600004196167,0,0,1,2.51200008392334,0,0,1,3.7679998874664307,0,0,1,5.02400016784668,0,0,1,6.28000020980835]);
children[7] = OrientationInterpolator1247;

OrientationInterpolator OrientationInterpolator1248 = createNode("OrientationInterpolator");
OrientationInterpolator1248.DEF = "vc6Yaw";
OrientationInterpolator1248.key = new MFFloat(new float[0,0.20000000298023224,0.4000000059604645,0.5,0.6000000238418579,0.699999988079071,0.800000011920929,0.8999999761581421,1]);
OrientationInterpolator1248.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0.699999988079071,0,1,0,0,0,1,0,0,-1,0,0,0.5,-0.4000000059604645,-1,0,0.699999988079071,-0.4000000059604645,-1,0,0.4000000059604645,0,1,0,0,0,1,0,0]);
children[8] = OrientationInterpolator1248;

ROUTE ROUTE1249 = createNode("ROUTE");
ROUTE1249.fromField = "fraction_changed";
ROUTE1249.fromNode = "Time2";
ROUTE1249.toField = "set_fraction";
ROUTE1249.toNode = "vc6Yaw";
children[9] = ROUTE1249;

ROUTE ROUTE1250 = createNode("ROUTE");
ROUTE1250.fromField = "value_changed";
ROUTE1250.fromNode = "vc6Yaw";
ROUTE1250.toField = "set_rotation";
ROUTE1250.toNode = "Joe_vc6";
children[10] = ROUTE1250;

OrientationInterpolator OrientationInterpolator1251 = createNode("OrientationInterpolator");
OrientationInterpolator1251.DEF = "r_sternoclavicularRoll";
OrientationInterpolator1251.key = new MFFloat(new float[0,0.20000000298023224,0.4000000059604645,0.5,0.699999988079071,0.800000011920929,1]);
OrientationInterpolator1251.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,0.10000000149011612,0,0,-1,0.2199999988079071,0,0.5,-1,0.27000001072883606,0,0,-1,0.10000000149011612,0,0,1,0,0,0,1,0]);
children[11] = OrientationInterpolator1251;

OrientationInterpolator OrientationInterpolator1252 = createNode("OrientationInterpolator");
OrientationInterpolator1252.DEF = "r_acromioclavicularRoll";
OrientationInterpolator1252.key = new MFFloat(new float[0,0.20000000298023224,0.4000000059604645,0.6000000238418579,0.800000011920929,1]);
OrientationInterpolator1252.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,-0.05000000074505806,0,0,1,0,0,0,1,0,0,0,1,0]);
children[12] = OrientationInterpolator1252;

OrientationInterpolator OrientationInterpolator1253 = createNode("OrientationInterpolator");
OrientationInterpolator1253.DEF = "r_shoulderRoll";
OrientationInterpolator1253.key = new MFFloat(new float[0,0.20000000298023224,0.4000000059604645,0.5,0.8500000238418579,1]);
OrientationInterpolator1253.keyValue = new MFRotation(new float[1,0,0,0,0,0,-1,1.659999966621399,-0.25,0,-1,1.7599999904632568,0,0,-1,1.25600004196167,0,0,-1,0.05000000074505806,1,0,0,0]);
children[13] = OrientationInterpolator1253;

OrientationInterpolator OrientationInterpolator1254 = createNode("OrientationInterpolator");
OrientationInterpolator1254.DEF = "r_ForeArmPitch";
OrientationInterpolator1254.key = new MFFloat(new float[0,0.15000000596046448,0.30000001192092896,0.5,0.699999988079071,0.8999999761581421,1]);
OrientationInterpolator1254.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.550000011920929,-1,-0.25,0,2.549999952316284,-1,-0.25,0,2.549999952316284,-1,-0.25,0,2.549999952316284,0,0,1,0,0,0,1,0]);
children[14] = OrientationInterpolator1254;

OrientationInterpolator OrientationInterpolator1255 = createNode("OrientationInterpolator");
OrientationInterpolator1255.DEF = "r_wristRoll";
OrientationInterpolator1255.key = new MFFloat(new float[0,0.20000000298023224,0.4000000059604645,0.6000000238418579,0.6499999761581421,0.75,0.8500000238418579,1]);
OrientationInterpolator1255.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,1,0,-0.550000011920929,0,0,1,0,0,1,0,1.5499999523162842,0,0,-1,1.5499999523162842,0,0,1,0,0,0,1,0]);
children[15] = OrientationInterpolator1255;

OrientationInterpolator OrientationInterpolator1256 = createNode("OrientationInterpolator");
OrientationInterpolator1256.DEF = "r_handPitch";
OrientationInterpolator1256.key = new MFFloat(new float[0,0.20000000298023224,0.4000000059604645,0.6000000238418579,0.800000011920929,1]);
OrientationInterpolator1256.keyValue = new MFRotation(new float[0,0,1,0,0,0,0.009999999776482582,0.25,0,0,-0.009999999776482582,0.029999999329447746,0,0,0.009999999776482582,0.05000000074505806,0,0,0.009999999776482582,0.009999999776482582,0,0,1,0]);
children[16] = OrientationInterpolator1256;

OrientationInterpolator OrientationInterpolator1257 = createNode("OrientationInterpolator");
OrientationInterpolator1257.DEF = "l_shoulderRoll";
OrientationInterpolator1257.key = new MFFloat(new float[0,0.20000000298023224,0.4000000059604645,0.5,0.8500000238418579,1]);
OrientationInterpolator1257.keyValue = new MFRotation(new float[0.25,0,1,1.7599999904632568,0,0,1,1.659999966621399,0.25,0,1,1.7599999904632568,0,0,1,1.25600004196167,0,0,1,0.05000000074505806,0.25,0,1,1.7599999904632568]);
children[17] = OrientationInterpolator1257;

ROUTE ROUTE1258 = createNode("ROUTE");
ROUTE1258.fromField = "fraction_changed";
ROUTE1258.fromNode = "Time2";
ROUTE1258.toField = "set_fraction";
ROUTE1258.toNode = "r_sternoclavicularRoll";
children[18] = ROUTE1258;

ROUTE ROUTE1259 = createNode("ROUTE");
ROUTE1259.fromField = "fraction_changed";
ROUTE1259.fromNode = "Time2";
ROUTE1259.toField = "set_fraction";
ROUTE1259.toNode = "r_acromioclavicularRoll";
children[19] = ROUTE1259;

ROUTE ROUTE1260 = createNode("ROUTE");
ROUTE1260.fromField = "fraction_changed";
ROUTE1260.fromNode = "Time2";
ROUTE1260.toField = "set_fraction";
ROUTE1260.toNode = "r_shoulderRoll";
children[20] = ROUTE1260;

ROUTE ROUTE1261 = createNode("ROUTE");
ROUTE1261.fromField = "fraction_changed";
ROUTE1261.fromNode = "Time2";
ROUTE1261.toField = "set_fraction";
ROUTE1261.toNode = "r_ForeArmPitch";
children[21] = ROUTE1261;

ROUTE ROUTE1262 = createNode("ROUTE");
ROUTE1262.fromField = "fraction_changed";
ROUTE1262.fromNode = "Time2";
ROUTE1262.toField = "set_fraction";
ROUTE1262.toNode = "r_wristRoll";
children[22] = ROUTE1262;

ROUTE ROUTE1263 = createNode("ROUTE");
ROUTE1263.fromField = "fraction_changed";
ROUTE1263.fromNode = "Time2";
ROUTE1263.toField = "set_fraction";
ROUTE1263.toNode = "r_handPitch";
children[23] = ROUTE1263;

ROUTE ROUTE1264 = createNode("ROUTE");
ROUTE1264.fromField = "value_changed";
ROUTE1264.fromNode = "r_sternoclavicularRoll";
ROUTE1264.toField = "set_rotation";
ROUTE1264.toNode = "Joe_r_sternoclavicular";
children[24] = ROUTE1264;

ROUTE ROUTE1265 = createNode("ROUTE");
ROUTE1265.fromField = "value_changed";
ROUTE1265.fromNode = "r_acromioclavicularRoll";
ROUTE1265.toField = "set_rotation";
ROUTE1265.toNode = "Joe_r_acromioclavicular";
children[25] = ROUTE1265;

ROUTE ROUTE1266 = createNode("ROUTE");
ROUTE1266.fromField = "value_changed";
ROUTE1266.fromNode = "r_shoulderRoll";
ROUTE1266.toField = "set_rotation";
ROUTE1266.toNode = "Joe_r_shoulder";
children[26] = ROUTE1266;

ROUTE ROUTE1267 = createNode("ROUTE");
ROUTE1267.fromField = "value_changed";
ROUTE1267.fromNode = "r_ForeArmPitch";
ROUTE1267.toField = "set_rotation";
ROUTE1267.toNode = "Joe_r_elbow";
children[27] = ROUTE1267;

ROUTE ROUTE1268 = createNode("ROUTE");
ROUTE1268.fromField = "value_changed";
ROUTE1268.fromNode = "r_wristRoll";
ROUTE1268.toField = "set_rotation";
ROUTE1268.toNode = "Joe_r_wrist";
children[28] = ROUTE1268;

ROUTE ROUTE1269 = createNode("ROUTE");
ROUTE1269.fromField = "value_changed";
ROUTE1269.fromNode = "l_shoulderRoll";
ROUTE1269.toField = "set_rotation";
ROUTE1269.toNode = "Joe_l_shoulder";
children[29] = ROUTE1269;

Group Group1270 = createNode("Group");
PositionInterpolator PositionInterpolator1271 = createNode("PositionInterpolator");
PositionInterpolator1271.DEF = "HUMANOIDROOT_POSITION_ANIMATOR";
PositionInterpolator1271.key = new MFFloat(new float[0,0.041669998317956924,0.125,0.16670000553131104,0.20829999446868896,0.25,0.29170000553131104,0.375,0.45829999446868896,0.5,0.541700005531311,0.583299994468689,0.625,0.708299994468689,0.75,0.791700005531311,0.875,0.916700005531311,1]);
PositionInterpolator1271.keyValue = new MFVec3f(new float[0,-0.009279999881982803,0,0,-0.0038580000400543213,0,0,-0.008847000077366829,0,0,-0.01486000046133995,0,0,-0.026410000398755074,0,0,-0.039340000599622726,0,0,-0.050200000405311584,0,0,-0.07468999922275543,0,0,-0.027319999411702156,0,0,-0.01607999950647354,0,0,-0.011289999820291996,0,0,-0.0058189998380839825,0,0,-0.0020039998926222324,0,0,-0.0025790000800043344,0,0,-0.014299999922513962,0,0,-0.03799000009894371,0,0,-0.05648000165820122,0,0,-0.04500000178813934,0,0,-0.009279999881982803,0]);
Group1270.children = new MFNode();

Group1270.children[0] = PositionInterpolator1271;

OrientationInterpolator OrientationInterpolator1272 = createNode("OrientationInterpolator");
OrientationInterpolator1272.DEF = "HUMANOIDROOT_ANIMATOR";
OrientationInterpolator1272.key = new MFFloat(new float[0,1]);
OrientationInterpolator1272.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group1270.children[1] = OrientationInterpolator1272;

OrientationInterpolator OrientationInterpolator1273 = createNode("OrientationInterpolator");
OrientationInterpolator1273.DEF = "L_HIP_ANIMATOR";
OrientationInterpolator1273.key = new MFFloat(new float[0,0.25,0.375,0.5,0.666700005531311,0.791700005531311,0.916700005531311,1]);
OrientationInterpolator1273.keyValue = new MFRotation(new float[-0.8730000257492065,0.06094000115990639,0.48399999737739563,0.2865000069141388,0.9962999820709229,-0.010569999925792217,0.08481000363826752,0.24879999458789825,0.9965000152587891,0.01590999960899353,-0.08222000300884247,0.38359999656677246,-0.7017999887466431,-0.03223000094294548,-0.7117000222206116,0.12890000641345978,-1,0,0,0.551800012588501,-0.996399998664856,0.02230999991297722,0.08169999718666077,0.535099983215332,-0.98089998960495,0.04912000149488449,0.18809999525547028,0.5203999876976013,-0.8730000257492065,0.06094000115990639,0.48399999737739563,0.2865000069141388]);
Group1270.children[2] = OrientationInterpolator1273;

OrientationInterpolator OrientationInterpolator1274 = createNode("OrientationInterpolator");
OrientationInterpolator1274.DEF = "L_KNEE_ANIMATOR";
OrientationInterpolator1274.key = new MFFloat(new float[0,0.20829999446868896,0.375,0.5,0.666700005531311,0.791700005531311,0.916700005531311,1]);
OrientationInterpolator1274.keyValue = new MFRotation(new float[1,0,0,0.32260000705718994,1,0,0,0.15559999644756317,1,0,0,0.08677999675273895,1,0,0,0.8751000165939331,1,0,0,1.13100004196167,1,0,0,0.09961000084877014,1,0,0,0.39419999718666077,1,0,0,0.32260000705718994]);
Group1270.children[3] = OrientationInterpolator1274;

OrientationInterpolator OrientationInterpolator1275 = createNode("OrientationInterpolator");
OrientationInterpolator1275.DEF = "L_ANKLE_ANIMATOR";
OrientationInterpolator1275.key = new MFFloat(new float[0,0.125,0.20829999446868896,0.375,0.666700005531311,0.916700005531311,1]);
OrientationInterpolator1275.keyValue = new MFRotation(new float[-1,0,0,0.06710000336170197,-1,0,0,0.2152000069618225,-1,0,0,0.31839999556541443,-1,0,0,0.4717000126838684,-1,0,0,0.29120001196861267,1,0,0,0.22220000624656677,-1,0,0,0.06710000336170197]);
Group1270.children[4] = OrientationInterpolator1275;

OrientationInterpolator OrientationInterpolator1276 = createNode("OrientationInterpolator");
OrientationInterpolator1276.DEF = "R_ANKLE_ANIMATOR";
OrientationInterpolator1276.key = new MFFloat(new float[0,0.125,0.20829999446868896,0.375,0.45829999446868896,0.5,0.666700005531311,0.75,0.7799999713897705,0.916700005531311,1]);
OrientationInterpolator1276.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.353300005197525,-1,0,0,0.10719999670982361,1,0,0,0.4000000059604645,1,0,0,0.12700000405311584,-1,0,0,0.017999999225139618,-1,0,0,0.057999998331069946,-1,0,0,0.23999999463558197,-1,0,0,0.3499999940395355,-1,0,0,0.33000001311302185,0,0,1,0]);
Group1270.children[5] = OrientationInterpolator1276;

OrientationInterpolator OrientationInterpolator1277 = createNode("OrientationInterpolator");
OrientationInterpolator1277.DEF = "L_subtalar_ANIMATOR";
OrientationInterpolator1277.key = new MFFloat(new float[0,0.30000001192092896,1]);
OrientationInterpolator1277.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1270.children[6] = OrientationInterpolator1277;

OrientationInterpolator OrientationInterpolator1278 = createNode("OrientationInterpolator");
OrientationInterpolator1278.DEF = "L_MIDTARSAL_ANIMATOR";
OrientationInterpolator1278.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1278.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,-0.20000000298023224,0,0,1,0]);
Group1270.children[7] = OrientationInterpolator1278;

OrientationInterpolator OrientationInterpolator1279 = createNode("OrientationInterpolator");
OrientationInterpolator1279.DEF = "L_metatarsal_ANIMATOR";
OrientationInterpolator1279.key = new MFFloat(new float[0,0.20000000298023224,0.4000000059604645,0.800000011920929,1]);
OrientationInterpolator1279.keyValue = new MFRotation(new float[-1,0,0,0.30000001192092896,-1,0,0,0.15000000596046448,1,0,0,0.30000001192092896,0,0,1,0,-1,0,0,0.30000001192092896]);
Group1270.children[8] = OrientationInterpolator1279;

OrientationInterpolator OrientationInterpolator1280 = createNode("OrientationInterpolator");
OrientationInterpolator1280.DEF = "R_HIP_ANIMATOR";
OrientationInterpolator1280.key = new MFFloat(new float[0,0.125,0.20829999446868896,0.29170000553131104,0.375,0.5,0.666700005531311,0.791700005531311,0.916700005531311,1]);
OrientationInterpolator1280.keyValue = new MFRotation(new float[-0.5831000208854675,0.035110000520944595,0.8116000294685364,0.14810000360012054,-0.9950000047683716,0.02295999974012375,0.0967399999499321,0.4683000147342682,-1,0.0019000000320374966,0.007960000075399876,0.4731999933719635,-0.9980000257492065,-0.015799999237060547,-0.06102000176906586,0.5078999996185303,-0.991100013256073,-0.03540999814867973,-0.12860000133514404,0.5418999791145325,-0.913100004196167,-0.0624300017952919,-0.40299999713897705,0.3361000120639801,-0.43059998750686646,-0.07962000370025635,-0.8989999890327454,0.07038000226020813,1,0,0,0.257099986076355,0.9890999794006348,-0.028049999848008156,0.1444000005722046,0.3878999948501587,-0.5831000208854675,0.035110000520944595,0.8116000294685364,0.14810000360012054]);
Group1270.children[9] = OrientationInterpolator1280;

OrientationInterpolator OrientationInterpolator1281 = createNode("OrientationInterpolator");
OrientationInterpolator1281.DEF = "R_KNEE_ANIMATOR";
OrientationInterpolator1281.key = new MFFloat(new float[0,0.125,0.20829999446868896,0.29170000553131104,0.375,0.5,0.666700005531311,0.791700005531311,0.916700005531311,1]);
OrientationInterpolator1281.keyValue = new MFRotation(new float[1,0,0,0.8572999835014343,1,0,0,0.8925999999046326,1,0,0,0.535099983215332,1,0,0,0.17560000717639923,1,0,0,0.11940000206232071,1,0,0,0.31529998779296875,1,0,0,0.0935399979352951,1,0,0,0.0855799987912178,1,0,0,0.2475000023841858,1,0,0,0.8572999835014343]);
Group1270.children[10] = OrientationInterpolator1281;

OrientationInterpolator OrientationInterpolator1282 = createNode("OrientationInterpolator");
OrientationInterpolator1282.DEF = "R_subtalar_ANIMATOR";
OrientationInterpolator1282.key = new MFFloat(new float[0,0.22499999403953552,0.25,0.3499999940395355,0.44999998807907104,0.8500000238418579,0.9100000262260437]);
OrientationInterpolator1282.keyValue = new MFRotation(new float[-1,0,0,0.10000000149011612,0,0,1,0,0,0,1,0,1,0,0,0.10000000149011612,0,0,1,0,1,0,0,0.10000000149011612,1,0,0,0.25,-1,0,0,0.10000000149011612]);
Group1270.children[11] = OrientationInterpolator1282;

OrientationInterpolator OrientationInterpolator1283 = createNode("OrientationInterpolator");
OrientationInterpolator1283.DEF = "R_MIDTARSAL_ANIMATOR";
OrientationInterpolator1283.key = new MFFloat(new float[0,0.2199999988079071,1]);
OrientationInterpolator1283.keyValue = new MFRotation(new float[1,0,0,-0.20000000298023224,0,0,1,0,1,0,0,-0.20000000298023224]);
Group1270.children[12] = OrientationInterpolator1283;

OrientationInterpolator OrientationInterpolator1284 = createNode("OrientationInterpolator");
OrientationInterpolator1284.DEF = "R_metatarsal_ANIMATOR";
OrientationInterpolator1284.key = new MFFloat(new float[0,0.20000000298023224,0.4000000059604645,0.800000011920929,1]);
OrientationInterpolator1284.keyValue = new MFRotation(new float[-1,0,0,0.15000000596046448,0,0,1,0,1,0,0,0.30000001192092896,-1,0,0,0.30000001192092896,-1,0,0,0.15000000596046448]);
Group1270.children[13] = OrientationInterpolator1284;

OrientationInterpolator OrientationInterpolator1285 = createNode("OrientationInterpolator");
OrientationInterpolator1285.DEF = "VL5_ANIMATOR";
OrientationInterpolator1285.key = new MFFloat(new float[0,0.20829999446868896,0.375,0.75,0.833299994468689,1]);
OrientationInterpolator1285.keyValue = new MFRotation(new float[0,1,0,0.08259999752044678,-0.01971999928355217,-0.5974000096321106,0.8016999959945679,0.08230999857187271,0.009296000003814697,-0.9648000001907349,0.26269999146461487,0.17339999973773956,-0.012380000203847885,0.9549000263214111,-0.29679998755455017,0.0873199999332428,-0.008124999701976776,0.9690999984741211,-0.24629999697208405,0.15800000727176666,0,1,0,0.08259999752044678]);
Group1270.children[14] = OrientationInterpolator1285;

OrientationInterpolator OrientationInterpolator1286 = createNode("OrientationInterpolator");
OrientationInterpolator1286.DEF = "SKULLBASE_ANIMATOR";
OrientationInterpolator1286.key = new MFFloat(new float[0,0.375,0.41670000553131104,0.5,0.583299994468689,0.666700005531311,0.75,0.833299994468689,0.916700005531311,1]);
OrientationInterpolator1286.keyValue = new MFRotation(new float[0,-1,0,0.08640000224113464,0,1,0,0.18250000476837158,0,1,0,0.15049999952316284,0,1,0,0.10530000180006027,0,1,0,0.04391000047326088,0,-1,0,0.031190000474452972,0,-1,0,0.0793600007891655,0,-1,0,0.1615999937057495,0,-1,0,0.1550000011920929,0,-1,0,0.08641999959945679]);
Group1270.children[15] = OrientationInterpolator1286;

OrientationInterpolator OrientationInterpolator1287 = createNode("OrientationInterpolator");
OrientationInterpolator1287.DEF = "L_SHOULDER_ANIMATOR";
OrientationInterpolator1287.key = new MFFloat(new float[0,0.375,0.916700005531311,1]);
OrientationInterpolator1287.keyValue = new MFRotation(new float[1,0,0.4000000059604645,0.11999999731779099,-1,0,0.4000000059604645,0.1860000044107437,1,0,0.10000000149011612,0.335999995470047,1,0,0.4000000059604645,0.11999999731779099]);
Group1270.children[16] = OrientationInterpolator1287;

OrientationInterpolator OrientationInterpolator1288 = createNode("OrientationInterpolator");
OrientationInterpolator1288.DEF = "L_ELBOW_ANIMATOR";
OrientationInterpolator1288.key = new MFFloat(new float[0,0.375,0.916700005531311,1]);
OrientationInterpolator1288.keyValue = new MFRotation(new float[-1,0,0,0.06599999964237213,-1,0,0,0.4880000054836273,-1,0,0,0.01769999973475933,-1,0,0,0.06598780304193497]);
Group1270.children[17] = OrientationInterpolator1288;

OrientationInterpolator OrientationInterpolator1289 = createNode("OrientationInterpolator");
OrientationInterpolator1289.DEF = "L_WRIST_ANIMATOR";
OrientationInterpolator1289.key = new MFFloat(new float[0,0.375,0.916700005531311,1]);
OrientationInterpolator1289.keyValue = new MFRotation(new float[0,-1,0,0.460999995470047,-0.3301999866962433,-0.9275000095367432,0.17550000548362732,0.5388000011444092,0.03277739882469177,-0.99931401014328,-0.01721850037574768,0.4920330047607422,0,-1,0,0.4611000120639801]);
Group1270.children[18] = OrientationInterpolator1289;

OrientationInterpolator OrientationInterpolator1290 = createNode("OrientationInterpolator");
OrientationInterpolator1290.DEF = "R_SHOULDER_ANIMATOR";
OrientationInterpolator1290.key = new MFFloat(new float[0,0.375,0.916700005531311,1]);
OrientationInterpolator1290.keyValue = new MFRotation(new float[-1,0,-1,0.09200000017881393,1,0,-0.20000000298023224,0.3197000026702881,-1,0,-0.5,0.15639999508857727,-1,0,-1,0.09200000017881393]);
Group1270.children[19] = OrientationInterpolator1290;

OrientationInterpolator OrientationInterpolator1291 = createNode("OrientationInterpolator");
OrientationInterpolator1291.DEF = "R_ELBOW_ANIMATOR";
OrientationInterpolator1291.key = new MFFloat(new float[0,0.375,0.916700005531311,1]);
OrientationInterpolator1291.keyValue = new MFRotation(new float[-1,0,0,0.4115000069141388,-1,0,0,0.0925000011920929,-1,0,0,0.5725679993629456,-1,0,0,0.4115079939365387]);
Group1270.children[20] = OrientationInterpolator1291;

OrientationInterpolator OrientationInterpolator1292 = createNode("OrientationInterpolator");
OrientationInterpolator1292.DEF = "R_WRIST_ANIMATOR";
OrientationInterpolator1292.key = new MFFloat(new float[0,0.375,0.916700005531311,1]);
OrientationInterpolator1292.keyValue = new MFRotation(new float[-0.8129000067710876,0.47589999437332153,-0.33570000529289246,0.13459999859333038,0.15330000221729279,-0.9878000020980835,0.02582000009715557,0.3901999890804291,-0.5701000094413757,0.7603999972343445,-0.3109999895095825,0.3659999966621399,-0.8129000067710876,0.47589999437332153,-0.33570000529289246,0.13459999859333038]);
Group1270.children[21] = OrientationInterpolator1292;

children[30] = Group1270;

ROUTE ROUTE1293 = createNode("ROUTE");
ROUTE1293.fromField = "fraction_changed";
ROUTE1293.fromNode = "Time1";
ROUTE1293.toField = "set_fraction";
ROUTE1293.toNode = "HUMANOIDROOT_POSITION_ANIMATOR";
children[31] = ROUTE1293;

ROUTE ROUTE1294 = createNode("ROUTE");
ROUTE1294.fromField = "fraction_changed";
ROUTE1294.fromNode = "Time1";
ROUTE1294.toField = "set_fraction";
ROUTE1294.toNode = "HUMANOIDROOT_ANIMATOR";
children[32] = ROUTE1294;

ROUTE ROUTE1295 = createNode("ROUTE");
ROUTE1295.fromField = "fraction_changed";
ROUTE1295.fromNode = "Time1";
ROUTE1295.toField = "set_fraction";
ROUTE1295.toNode = "L_HIP_ANIMATOR";
children[33] = ROUTE1295;

ROUTE ROUTE1296 = createNode("ROUTE");
ROUTE1296.fromField = "fraction_changed";
ROUTE1296.fromNode = "Time1";
ROUTE1296.toField = "set_fraction";
ROUTE1296.toNode = "L_KNEE_ANIMATOR";
children[34] = ROUTE1296;

ROUTE ROUTE1297 = createNode("ROUTE");
ROUTE1297.fromField = "fraction_changed";
ROUTE1297.fromNode = "Time1";
ROUTE1297.toField = "set_fraction";
ROUTE1297.toNode = "L_ANKLE_ANIMATOR";
children[35] = ROUTE1297;

ROUTE ROUTE1298 = createNode("ROUTE");
ROUTE1298.fromField = "fraction_changed";
ROUTE1298.fromNode = "Time1";
ROUTE1298.toField = "set_fraction";
ROUTE1298.toNode = "L_subtalar_ANIMATOR";
children[36] = ROUTE1298;

ROUTE ROUTE1299 = createNode("ROUTE");
ROUTE1299.fromField = "fraction_changed";
ROUTE1299.fromNode = "Time1";
ROUTE1299.toField = "set_fraction";
ROUTE1299.toNode = "L_MIDTARSAL_ANIMATOR";
children[37] = ROUTE1299;

ROUTE ROUTE1300 = createNode("ROUTE");
ROUTE1300.fromField = "fraction_changed";
ROUTE1300.fromNode = "Time1";
ROUTE1300.toField = "set_fraction";
ROUTE1300.toNode = "L_metatarsal_ANIMATOR";
children[38] = ROUTE1300;

ROUTE ROUTE1301 = createNode("ROUTE");
ROUTE1301.fromField = "fraction_changed";
ROUTE1301.fromNode = "Time1";
ROUTE1301.toField = "set_fraction";
ROUTE1301.toNode = "R_HIP_ANIMATOR";
children[39] = ROUTE1301;

ROUTE ROUTE1302 = createNode("ROUTE");
ROUTE1302.fromField = "fraction_changed";
ROUTE1302.fromNode = "Time1";
ROUTE1302.toField = "set_fraction";
ROUTE1302.toNode = "R_KNEE_ANIMATOR";
children[40] = ROUTE1302;

ROUTE ROUTE1303 = createNode("ROUTE");
ROUTE1303.fromField = "fraction_changed";
ROUTE1303.fromNode = "Time1";
ROUTE1303.toField = "set_fraction";
ROUTE1303.toNode = "R_ANKLE_ANIMATOR";
children[41] = ROUTE1303;

ROUTE ROUTE1304 = createNode("ROUTE");
ROUTE1304.fromField = "fraction_changed";
ROUTE1304.fromNode = "Time1";
ROUTE1304.toField = "set_fraction";
ROUTE1304.toNode = "R_subtalar_ANIMATOR";
children[42] = ROUTE1304;

ROUTE ROUTE1305 = createNode("ROUTE");
ROUTE1305.fromField = "fraction_changed";
ROUTE1305.fromNode = "Time1";
ROUTE1305.toField = "set_fraction";
ROUTE1305.toNode = "R_MIDTARSAL_ANIMATOR";
children[43] = ROUTE1305;

ROUTE ROUTE1306 = createNode("ROUTE");
ROUTE1306.fromField = "fraction_changed";
ROUTE1306.fromNode = "Time1";
ROUTE1306.toField = "set_fraction";
ROUTE1306.toNode = "R_metatarsal_ANIMATOR";
children[44] = ROUTE1306;

ROUTE ROUTE1307 = createNode("ROUTE");
ROUTE1307.fromField = "fraction_changed";
ROUTE1307.fromNode = "Time1";
ROUTE1307.toField = "set_fraction";
ROUTE1307.toNode = "VL5_ANIMATOR";
children[45] = ROUTE1307;

ROUTE ROUTE1308 = createNode("ROUTE");
ROUTE1308.fromField = "fraction_changed";
ROUTE1308.fromNode = "Time1";
ROUTE1308.toField = "set_fraction";
ROUTE1308.toNode = "SKULLBASE_ANIMATOR";
children[46] = ROUTE1308;

ROUTE ROUTE1309 = createNode("ROUTE");
ROUTE1309.fromField = "fraction_changed";
ROUTE1309.fromNode = "Time1";
ROUTE1309.toField = "set_fraction";
ROUTE1309.toNode = "L_SHOULDER_ANIMATOR";
children[47] = ROUTE1309;

ROUTE ROUTE1310 = createNode("ROUTE");
ROUTE1310.fromField = "fraction_changed";
ROUTE1310.fromNode = "Time1";
ROUTE1310.toField = "set_fraction";
ROUTE1310.toNode = "L_ELBOW_ANIMATOR";
children[48] = ROUTE1310;

ROUTE ROUTE1311 = createNode("ROUTE");
ROUTE1311.fromField = "fraction_changed";
ROUTE1311.fromNode = "Time1";
ROUTE1311.toField = "set_fraction";
ROUTE1311.toNode = "L_WRIST_ANIMATOR";
children[49] = ROUTE1311;

ROUTE ROUTE1312 = createNode("ROUTE");
ROUTE1312.fromField = "value_changed";
ROUTE1312.fromNode = "HUMANOIDROOT_POSITION_ANIMATOR";
ROUTE1312.toField = "set_translation";
ROUTE1312.toNode = "Joe_HumanoidRoot";
children[50] = ROUTE1312;

ROUTE ROUTE1313 = createNode("ROUTE");
ROUTE1313.fromField = "value_changed";
ROUTE1313.fromNode = "HUMANOIDROOT_ANIMATOR";
ROUTE1313.toField = "set_rotation";
ROUTE1313.toNode = "Joe_HumanoidRoot";
children[51] = ROUTE1313;

ROUTE ROUTE1314 = createNode("ROUTE");
ROUTE1314.fromField = "value_changed";
ROUTE1314.fromNode = "L_HIP_ANIMATOR";
ROUTE1314.toField = "set_rotation";
ROUTE1314.toNode = "Joe_l_hip";
children[52] = ROUTE1314;

ROUTE ROUTE1315 = createNode("ROUTE");
ROUTE1315.fromField = "value_changed";
ROUTE1315.fromNode = "L_KNEE_ANIMATOR";
ROUTE1315.toField = "set_rotation";
ROUTE1315.toNode = "Joe_l_knee";
children[53] = ROUTE1315;

ROUTE ROUTE1316 = createNode("ROUTE");
ROUTE1316.fromField = "value_changed";
ROUTE1316.fromNode = "L_ANKLE_ANIMATOR";
ROUTE1316.toField = "set_rotation";
ROUTE1316.toNode = "Joe_l_ankle";
children[54] = ROUTE1316;

ROUTE ROUTE1317 = createNode("ROUTE");
ROUTE1317.fromField = "value_changed";
ROUTE1317.fromNode = "L_MIDTARSAL_ANIMATOR";
ROUTE1317.toField = "set_rotation";
ROUTE1317.toNode = "Joe_l_midtarsal";
children[55] = ROUTE1317;

ROUTE ROUTE1318 = createNode("ROUTE");
ROUTE1318.fromField = "value_changed";
ROUTE1318.fromNode = "L_subtalar_ANIMATOR";
ROUTE1318.toField = "set_rotation";
ROUTE1318.toNode = "Joe_l_subtalar";
children[56] = ROUTE1318;

ROUTE ROUTE1319 = createNode("ROUTE");
ROUTE1319.fromField = "value_changed";
ROUTE1319.fromNode = "L_metatarsal_ANIMATOR";
ROUTE1319.toField = "set_rotation";
ROUTE1319.toNode = "Joe_l_metatarsal";
children[57] = ROUTE1319;

ROUTE ROUTE1320 = createNode("ROUTE");
ROUTE1320.fromField = "value_changed";
ROUTE1320.fromNode = "R_HIP_ANIMATOR";
ROUTE1320.toField = "set_rotation";
ROUTE1320.toNode = "Joe_r_hip";
children[58] = ROUTE1320;

ROUTE ROUTE1321 = createNode("ROUTE");
ROUTE1321.fromField = "value_changed";
ROUTE1321.fromNode = "R_KNEE_ANIMATOR";
ROUTE1321.toField = "set_rotation";
ROUTE1321.toNode = "Joe_r_knee";
children[59] = ROUTE1321;

ROUTE ROUTE1322 = createNode("ROUTE");
ROUTE1322.fromField = "value_changed";
ROUTE1322.fromNode = "R_ANKLE_ANIMATOR";
ROUTE1322.toField = "set_rotation";
ROUTE1322.toNode = "Joe_r_ankle";
children[60] = ROUTE1322;

ROUTE ROUTE1323 = createNode("ROUTE");
ROUTE1323.fromField = "value_changed";
ROUTE1323.fromNode = "R_subtalar_ANIMATOR";
ROUTE1323.toField = "set_rotation";
ROUTE1323.toNode = "Joe_r_subtalar";
children[61] = ROUTE1323;

ROUTE ROUTE1324 = createNode("ROUTE");
ROUTE1324.fromField = "value_changed";
ROUTE1324.fromNode = "R_MIDTARSAL_ANIMATOR";
ROUTE1324.toField = "set_rotation";
ROUTE1324.toNode = "Joe_r_midtarsal";
children[62] = ROUTE1324;

ROUTE ROUTE1325 = createNode("ROUTE");
ROUTE1325.fromField = "value_changed";
ROUTE1325.fromNode = "R_metatarsal_ANIMATOR";
ROUTE1325.toField = "set_rotation";
ROUTE1325.toNode = "Joe_r_metatarsal";
children[63] = ROUTE1325;

ROUTE ROUTE1326 = createNode("ROUTE");
ROUTE1326.fromField = "value_changed";
ROUTE1326.fromNode = "VL5_ANIMATOR";
ROUTE1326.toField = "set_rotation";
ROUTE1326.toNode = "Joe_vl5";
children[64] = ROUTE1326;

ROUTE ROUTE1327 = createNode("ROUTE");
ROUTE1327.fromField = "value_changed";
ROUTE1327.fromNode = "SKULLBASE_ANIMATOR";
ROUTE1327.toField = "set_rotation";
ROUTE1327.toNode = "Joe_skullbase";
children[65] = ROUTE1327;

ROUTE ROUTE1328 = createNode("ROUTE");
ROUTE1328.fromField = "value_changed";
ROUTE1328.fromNode = "L_SHOULDER_ANIMATOR";
ROUTE1328.toField = "set_rotation";
ROUTE1328.toNode = "Joe_l_shoulder";
children[66] = ROUTE1328;

ROUTE ROUTE1329 = createNode("ROUTE");
ROUTE1329.fromField = "value_changed";
ROUTE1329.fromNode = "L_ELBOW_ANIMATOR";
ROUTE1329.toField = "set_rotation";
ROUTE1329.toNode = "Joe_l_elbow";
children[67] = ROUTE1329;

ROUTE ROUTE1330 = createNode("ROUTE");
ROUTE1330.fromField = "value_changed";
ROUTE1330.fromNode = "L_WRIST_ANIMATOR";
ROUTE1330.toField = "set_rotation";
ROUTE1330.toNode = "Joe_l_wrist";
children[68] = ROUTE1330;

ROUTE ROUTE1331 = createNode("ROUTE");
ROUTE1331.fromField = "value_changed";
ROUTE1331.fromNode = "R_SHOULDER_ANIMATOR";
ROUTE1331.toField = "set_rotation";
ROUTE1331.toNode = "Joe_r_shoulder";
children[69] = ROUTE1331;

ROUTE ROUTE1332 = createNode("ROUTE");
ROUTE1332.fromField = "value_changed";
ROUTE1332.fromNode = "R_ELBOW_ANIMATOR";
ROUTE1332.toField = "set_rotation";
ROUTE1332.toNode = "Joe_r_elbow";
children[70] = ROUTE1332;

ROUTE ROUTE1333 = createNode("ROUTE");
ROUTE1333.fromField = "value_changed";
ROUTE1333.fromNode = "R_WRIST_ANIMATOR";
ROUTE1333.toField = "set_rotation";
ROUTE1333.toNode = "Joe_r_wrist";
children[71] = ROUTE1333;

NavigationInfo NavigationInfo1334 = createNode("NavigationInfo");
NavigationInfo1334.avatarSize = new MFFloat(new float[0.25,1.600000023841858,0.75]);
NavigationInfo1334.headlight = False;
children[72] = NavigationInfo1334;

Viewpoint Viewpoint1335 = createNode("Viewpoint");
Viewpoint1335.description = "Front Up View";
Viewpoint1335.orientation = new SFRotation(new float[-1,-1,0,0.550000011920929]);
Viewpoint1335.position = new SFVec3f(new float[-1,2,2.5]);
children[73] = Viewpoint1335;

Viewpoint Viewpoint1336 = createNode("Viewpoint");
Viewpoint1336.description = "From Left View";
Viewpoint1336.orientation = new SFRotation(new float[0.30000001192092896,1,0,-1.5700000524520874]);
Viewpoint1336.position = new SFVec3f(new float[-2.5,1.5,0]);
children[74] = Viewpoint1336;

Viewpoint Viewpoint1337 = createNode("Viewpoint");
Viewpoint1337.description = "Front Mid View";
Viewpoint1337.position = new SFVec3f(new float[0,0.5,1.25]);
children[75] = Viewpoint1337;

Viewpoint Viewpoint1338 = createNode("Viewpoint");
Viewpoint1338.description = "Front Feet View";
Viewpoint1338.position = new SFVec3f(new float[0,0,0.75]);
children[76] = Viewpoint1338;

Viewpoint Viewpoint1339 = createNode("Viewpoint");
Viewpoint1339.description = "From Right View";
Viewpoint1339.orientation = new SFRotation(new float[0,1,0,1.5700000524520874]);
Viewpoint1339.position = new SFVec3f(new float[1,1,0]);
children[77] = Viewpoint1339;

Viewpoint Viewpoint1340 = createNode("Viewpoint");
Viewpoint1340.description = "Front Head View";
Viewpoint1340.position = new SFVec3f(new float[0,1.649999976158142,0.75]);
children[78] = Viewpoint1340;

Viewpoint Viewpoint1341 = createNode("Viewpoint");
Viewpoint1341.description = "Front Mid View";
Viewpoint1341.position = new SFVec3f(new float[0,1,1.75]);
children[79] = Viewpoint1341;

Viewpoint Viewpoint1342 = createNode("Viewpoint");
Viewpoint1342.description = "Rear View";
Viewpoint1342.orientation = new SFRotation(new float[0,1,0,3.140000104904175]);
Viewpoint1342.position = new SFVec3f(new float[0,1.5,-4]);
children[80] = Viewpoint1342;

Viewpoint Viewpoint1343 = createNode("Viewpoint");
Viewpoint1343.description = "Top View";
Viewpoint1343.orientation = new SFRotation(new float[1,0,0,-1.5700000524520874]);
Viewpoint1343.position = new SFVec3f(new float[0,4,0]);
children[81] = Viewpoint1343;

Viewpoint Viewpoint1344 = createNode("Viewpoint");
Viewpoint1344.description = "Bottom View";
Viewpoint1344.orientation = new SFRotation(new float[1,0,0,1.5700000524520874]);
Viewpoint1344.position = new SFVec3f(new float[0,-4,0]);
children[82] = Viewpoint1344;

Background Background1345 = createNode("Background");
Background1345.groundAngle = new MFFloat(new float[1.5700000524520874]);
Background1345.groundColor = new MFColor(new float[0,0.10000000149011612,0,0,0.10000000149011612,0]);
Background1345.skyColor = new MFColor(new float[0,0,0.10000000149011612]);
children[83] = Background1345;

Transform Transform1346 = createNode("Transform");
Transform1346.DEF = "cordsysfloor";
Transform1346.scale = new SFVec3f(new float[0.17499999701976776,0.17499999701976776,0.17499999701976776]);
Inline Inline1347 = createNode("Inline");
Inline1347.url = new MFString(new java.lang.String["JointCoordinateAxes.x3dv"]);
Transform1346.children = new MFNode();

Transform1346.children[0] = Inline1347;

children[84] = Transform1346;

}
