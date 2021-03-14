let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let Background2 = browser.currentScene.createNode("Background");
Background2.skyColor = new MFColor(new float[0.3,0.3,0.3]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Background2;

let NavigationInfo3 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[1] = NavigationInfo3;

let Group4 = browser.currentScene.createNode("Group");
Group4.DEF = "Original_WorldInfo";
let WorldInfo5 = browser.currentScene.createNode("WorldInfo");
WorldInfo5.info = new MFString(new java.lang.String[" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]);
WorldInfo5.title = "HANIM 200x Default Joint Centers, LOA3";
Group4.children = new MFNode();

Group4.children[0] = WorldInfo5;

browser.currentScene.children[2] = Group4;

//TODO move viewpoints to be internal to HAnimHumanoid
//Viewpoint centerOfRotation=\"0 0.9149 0.0016\" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human.
let Viewpoint6 = browser.currentScene.createNode("Viewpoint");
Viewpoint6.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint6.description = "Humanoid LOA 3 Front";
Viewpoint6.position = new SFVec3f(new float[0,0.4,4]);
browser.currentScene.children[3] = Viewpoint6;

let Viewpoint7 = browser.currentScene.createNode("Viewpoint");
Viewpoint7.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint7.description = "Humanoid LOA 3 Front Close";
Viewpoint7.position = new SFVec3f(new float[0,0.8,2]);
browser.currentScene.children[4] = Viewpoint7;

let Viewpoint8 = browser.currentScene.createNode("Viewpoint");
Viewpoint8.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint8.description = "Humanoid LOA 3 Front Closer";
Viewpoint8.position = new SFVec3f(new float[0,1.2,1]);
browser.currentScene.children[5] = Viewpoint8;

let Viewpoint9 = browser.currentScene.createNode("Viewpoint");
Viewpoint9.centerOfRotation = new SFVec3f(new float[0,1.5,0.0016]);
Viewpoint9.description = "Humanoid LOA 3 Front Face";
Viewpoint9.position = new SFVec3f(new float[0,1.63,1]);
browser.currentScene.children[6] = Viewpoint9;

let Viewpoint10 = browser.currentScene.createNode("Viewpoint");
Viewpoint10.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint10.description = "Humanoid LOA 3 Right Side";
Viewpoint10.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint10.position = new SFVec3f(new float[2.6,0.8,0]);
browser.currentScene.children[7] = Viewpoint10;

let Viewpoint11 = browser.currentScene.createNode("Viewpoint");
Viewpoint11.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint11.description = "Humanoid LOA 3 Right Side Close";
Viewpoint11.orientation = new SFRotation(new float[0,1,0,1.2]);
Viewpoint11.position = new SFVec3f(new float[1,0.8,0.5]);
browser.currentScene.children[8] = Viewpoint11;

let Viewpoint12 = browser.currentScene.createNode("Viewpoint");
Viewpoint12.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint12.description = "Humanoid LOA 3 Left Side Close";
Viewpoint12.orientation = new SFRotation(new float[0,1,0,-1.2]);
Viewpoint12.position = new SFVec3f(new float[-1,0.8,0.5]);
browser.currentScene.children[9] = Viewpoint12;

let Viewpoint13 = browser.currentScene.createNode("Viewpoint");
Viewpoint13.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint13.description = "Humanoid LOA 3 Left Side";
Viewpoint13.orientation = new SFRotation(new float[0,1,0,-1.5708]);
Viewpoint13.position = new SFVec3f(new float[-2.6,0.8,0]);
browser.currentScene.children[10] = Viewpoint13;

let Viewpoint14 = browser.currentScene.createNode("Viewpoint");
Viewpoint14.centerOfRotation = new SFVec3f(new float[0,0.9149,0.0016]);
Viewpoint14.description = "Humanoid LOA 3 Top";
Viewpoint14.orientation = new SFRotation(new float[1,0,0,-1.5708]);
Viewpoint14.position = new SFVec3f(new float[0,3.5,0]);
browser.currentScene.children[11] = Viewpoint14;

let HAnimHumanoid15 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid15.name = "humanoid";
HAnimHumanoid15.DEF = "hanim_humanoid";
HAnimHumanoid15.version = "2.0";
let HAnimJoint16 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint16.name = "humanoid_root";
HAnimJoint16.DEF = "hanim_humanoid_root";
HAnimJoint16.center = new SFVec3f(new float[0,0.824,0.0277]);
let HAnimSegment17 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment17.name = "sacrum";
HAnimSegment17.DEF = "hanim_sacrum";
//Visualization sphere for <HAnimJoint name='humanoid_root'/> is placed within <HAnimSegment name='sacrum'/>
let TouchSensor18 = browser.currentScene.createNode("TouchSensor");
TouchSensor18.description = "HAnimJoint humanoid_root, HAnimSegment sacrum";
HAnimSegment17.children = new MFNode();

HAnimSegment17.children[0] = TouchSensor18;

let Transform19 = browser.currentScene.createNode("Transform");
Transform19.translation = new SFVec3f(new float[0,0.824,0.0277]);
let Shape20 = browser.currentScene.createNode("Shape");
Shape20.DEF = "HAnimJointShape";
let Sphere21 = browser.currentScene.createNode("Sphere");
Sphere21.radius = 0.006;
Shape20.geometry = Sphere21;

let Appearance22 = browser.currentScene.createNode("Appearance");
Appearance22.DEF = "HAnimJointAppearance";
let Material23 = browser.currentScene.createNode("Material");
Material23.diffuseColor = new SFColor(new float[1,0.5,0]);
Material23.transparency = 0.5;
Appearance22.material = Material23;

Shape20.appearance = Appearance22;

Transform19.children = new MFNode();

Transform19.children[0] = Shape20;

HAnimSegment17.children[1] = Transform19;

//HAnimSegment visualization line from current <HAnimJoint name='humanoid_root'/> to child <HAnimJoint name='sacroiliac'/>
let Shape24 = browser.currentScene.createNode("Shape");
let LineSet25 = browser.currentScene.createNode("LineSet");
LineSet25.vertexCount = new MFInt32(new int[2]);
let Coordinate26 = browser.currentScene.createNode("Coordinate");
Coordinate26.point = new MFVec3f(new float[0,0.824,0.0277,0,0.9149,0.0016]);
LineSet25.coord = Coordinate26;

let ColorRGBA27 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA27.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA27.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
LineSet25.color = ColorRGBA27;

Shape24.geometry = LineSet25;

HAnimSegment17.children[2] = Shape24;

//HAnimSegment visualization line from current <HAnimJoint name='humanoid_root'/> to child <HAnimJoint name='vl5'/>
let Shape28 = browser.currentScene.createNode("Shape");
let LineSet29 = browser.currentScene.createNode("LineSet");
LineSet29.vertexCount = new MFInt32(new int[2]);
let Coordinate30 = browser.currentScene.createNode("Coordinate");
Coordinate30.point = new MFVec3f(new float[0,0.824,0.0277,0.0028,1.0568,-0.0776]);
LineSet29.coord = Coordinate30;

let ColorRGBA31 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA31.USE = "HAnimSegmentLineColorRGBA";
LineSet29.color = ColorRGBA31;

Shape28.geometry = LineSet29;

HAnimSegment17.children[3] = Shape28;

HAnimJoint16.children = new MFNode();

HAnimJoint16.children[0] = HAnimSegment17;

let HAnimJoint32 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint32.name = "sacroiliac";
HAnimJoint32.DEF = "hanim_sacroiliac";
HAnimJoint32.center = new SFVec3f(new float[0,0.9149,0.0016]);
let HAnimSegment33 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment33.name = "pelvis";
HAnimSegment33.DEF = "hanim_pelvis";
//Visualization sphere for <HAnimJoint name='sacroiliac'/> is placed within <HAnimSegment name='pelvis'/>
let TouchSensor34 = browser.currentScene.createNode("TouchSensor");
TouchSensor34.description = "HAnimJoint sacroiliac, HAnimSegment pelvis";
HAnimSegment33.children = new MFNode();

HAnimSegment33.children[0] = TouchSensor34;

let Transform35 = browser.currentScene.createNode("Transform");
Transform35.translation = new SFVec3f(new float[0,0.9149,0.0016]);
let Shape36 = browser.currentScene.createNode("Shape");
Shape36.USE = "HAnimJointShape";
Transform35.children = new MFNode();

Transform35.children[0] = Shape36;

HAnimSegment33.children[1] = Transform35;

//HAnimSegment visualization line from current <HAnimJoint name='sacroiliac'/> to child <HAnimJoint name='l_hip'/>
let Shape37 = browser.currentScene.createNode("Shape");
let LineSet38 = browser.currentScene.createNode("LineSet");
LineSet38.vertexCount = new MFInt32(new int[2]);
let Coordinate39 = browser.currentScene.createNode("Coordinate");
Coordinate39.point = new MFVec3f(new float[0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
LineSet38.coord = Coordinate39;

let ColorRGBA40 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA40.USE = "HAnimSegmentLineColorRGBA";
LineSet38.color = ColorRGBA40;

Shape37.geometry = LineSet38;

HAnimSegment33.children[2] = Shape37;

//HAnimSegment visualization line from current <HAnimJoint name='sacroiliac'/> to child <HAnimJoint name='r_hip'/>
let Shape41 = browser.currentScene.createNode("Shape");
let LineSet42 = browser.currentScene.createNode("LineSet");
LineSet42.vertexCount = new MFInt32(new int[2]);
let Coordinate43 = browser.currentScene.createNode("Coordinate");
Coordinate43.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0961,0.9124,-0.0001]);
LineSet42.coord = Coordinate43;

let ColorRGBA44 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA44.USE = "HAnimSegmentLineColorRGBA";
LineSet42.color = ColorRGBA44;

Shape41.geometry = LineSet42;

HAnimSegment33.children[3] = Shape41;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_iliocristale_pt'/>
let Shape45 = browser.currentScene.createNode("Shape");
let LineSet46 = browser.currentScene.createNode("LineSet");
LineSet46.vertexCount = new MFInt32(new int[2]);
let Coordinate47 = browser.currentScene.createNode("Coordinate");
Coordinate47.point = new MFVec3f(new float[0,0.9149,0.0016,-0.1525,1.0628,0.0035]);
LineSet46.coord = Coordinate47;

let ColorRGBA48 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA48.DEF = "HAnimSiteLineColorRGBA";
ColorRGBA48.color = new MFColorRGBA(new float[1,0,0,1,1,0,0,0.1]);
LineSet46.color = ColorRGBA48;

Shape45.geometry = LineSet46;

HAnimSegment33.children[4] = Shape45;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_trochanterion_pt'/>
let Shape49 = browser.currentScene.createNode("Shape");
let LineSet50 = browser.currentScene.createNode("LineSet");
LineSet50.vertexCount = new MFInt32(new int[2]);
let Coordinate51 = browser.currentScene.createNode("Coordinate");
Coordinate51.point = new MFVec3f(new float[0,0.9149,0.0016,-0.1689,0.8419,0.0352]);
LineSet50.coord = Coordinate51;

let ColorRGBA52 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA52.USE = "HAnimSiteLineColorRGBA";
LineSet50.color = ColorRGBA52;

Shape49.geometry = LineSet50;

HAnimSegment33.children[5] = Shape49;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_iliocristale_pt'/>
let Shape53 = browser.currentScene.createNode("Shape");
let LineSet54 = browser.currentScene.createNode("LineSet");
LineSet54.vertexCount = new MFInt32(new int[2]);
let Coordinate55 = browser.currentScene.createNode("Coordinate");
Coordinate55.point = new MFVec3f(new float[0,0.9149,0.0016,0.1612,1.0537,0.0008]);
LineSet54.coord = Coordinate55;

let ColorRGBA56 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA56.USE = "HAnimSiteLineColorRGBA";
LineSet54.color = ColorRGBA56;

Shape53.geometry = LineSet54;

HAnimSegment33.children[6] = Shape53;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_trochanterion_pt'/>
let Shape57 = browser.currentScene.createNode("Shape");
let LineSet58 = browser.currentScene.createNode("LineSet");
LineSet58.vertexCount = new MFInt32(new int[2]);
let Coordinate59 = browser.currentScene.createNode("Coordinate");
Coordinate59.point = new MFVec3f(new float[0,0.9149,0.0016,0.1677,0.8336,0.0303]);
LineSet58.coord = Coordinate59;

let ColorRGBA60 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA60.USE = "HAnimSiteLineColorRGBA";
LineSet58.color = ColorRGBA60;

Shape57.geometry = LineSet58;

HAnimSegment33.children[7] = Shape57;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_asis_pt'/>
let Shape61 = browser.currentScene.createNode("Shape");
let LineSet62 = browser.currentScene.createNode("LineSet");
LineSet62.vertexCount = new MFInt32(new int[2]);
let Coordinate63 = browser.currentScene.createNode("Coordinate");
Coordinate63.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0887,1.0021,0.1112]);
LineSet62.coord = Coordinate63;

let ColorRGBA64 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA64.USE = "HAnimSiteLineColorRGBA";
LineSet62.color = ColorRGBA64;

Shape61.geometry = LineSet62;

HAnimSegment33.children[8] = Shape61;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_asis_pt'/>
let Shape65 = browser.currentScene.createNode("Shape");
let LineSet66 = browser.currentScene.createNode("LineSet");
LineSet66.vertexCount = new MFInt32(new int[2]);
let Coordinate67 = browser.currentScene.createNode("Coordinate");
Coordinate67.point = new MFVec3f(new float[0,0.9149,0.0016,0.0925,0.9983,0.1052]);
LineSet66.coord = Coordinate67;

let ColorRGBA68 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA68.USE = "HAnimSiteLineColorRGBA";
LineSet66.color = ColorRGBA68;

Shape65.geometry = LineSet66;

HAnimSegment33.children[9] = Shape65;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_psis_pt'/>
let Shape69 = browser.currentScene.createNode("Shape");
let LineSet70 = browser.currentScene.createNode("LineSet");
LineSet70.vertexCount = new MFInt32(new int[2]);
let Coordinate71 = browser.currentScene.createNode("Coordinate");
Coordinate71.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0716,1.019,-0.1138]);
LineSet70.coord = Coordinate71;

let ColorRGBA72 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA72.USE = "HAnimSiteLineColorRGBA";
LineSet70.color = ColorRGBA72;

Shape69.geometry = LineSet70;

HAnimSegment33.children[10] = Shape69;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_psis_pt'/>
let Shape73 = browser.currentScene.createNode("Shape");
let LineSet74 = browser.currentScene.createNode("LineSet");
LineSet74.vertexCount = new MFInt32(new int[2]);
let Coordinate75 = browser.currentScene.createNode("Coordinate");
Coordinate75.point = new MFVec3f(new float[0,0.9149,0.0016,0.0774,1.019,-0.1151]);
LineSet74.coord = Coordinate75;

let ColorRGBA76 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA76.USE = "HAnimSiteLineColorRGBA";
LineSet74.color = ColorRGBA76;

Shape73.geometry = LineSet74;

HAnimSegment33.children[11] = Shape73;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='crotch_pt'/>
let Shape77 = browser.currentScene.createNode("Shape");
let LineSet78 = browser.currentScene.createNode("LineSet");
LineSet78.vertexCount = new MFInt32(new int[2]);
let Coordinate79 = browser.currentScene.createNode("Coordinate");
Coordinate79.point = new MFVec3f(new float[0,0.9149,0.0016,0.0034,0.8266,0.0257]);
LineSet78.coord = Coordinate79;

let ColorRGBA80 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA80.USE = "HAnimSiteLineColorRGBA";
LineSet78.color = ColorRGBA80;

Shape77.geometry = LineSet78;

HAnimSegment33.children[12] = Shape77;

let HAnimSite81 = browser.currentScene.createNode("HAnimSite");
HAnimSite81.name = "r_iliocristale_pt_pt";
HAnimSite81.DEF = "hanim_r_iliocristale_pt";
HAnimSite81.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
//HAnimSite visualization shape
let TouchSensor82 = browser.currentScene.createNode("TouchSensor");
TouchSensor82.description = "HAnimSite r_iliocristale_pt";
HAnimSite81.children = new MFNode();

HAnimSite81.children[0] = TouchSensor82;

let Shape83 = browser.currentScene.createNode("Shape");
Shape83.DEF = "HAnimSiteShape";
let IndexedFaceSet84 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet84.DEF = "DiamondIFS";
IndexedFaceSet84.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet84.creaseAngle = 0.5;
IndexedFaceSet84.solid = False;
let Coordinate85 = browser.currentScene.createNode("Coordinate");
Coordinate85.point = new MFVec3f(new float[0,0.008,0,-0.008,0,0,0,0,0.008,0.008,0,0,0,0,-0.008,0,-0.008,0]);
IndexedFaceSet84.coord = Coordinate85;

Shape83.geometry = IndexedFaceSet84;

let Appearance86 = browser.currentScene.createNode("Appearance");
let Material87 = browser.currentScene.createNode("Material");
Material87.diffuseColor = new SFColor(new float[1,0,0]);
Appearance86.material = Material87;

Shape83.appearance = Appearance86;

HAnimSite81.children[1] = Shape83;

HAnimSegment33.children[13] = HAnimSite81;

let HAnimSite88 = browser.currentScene.createNode("HAnimSite");
HAnimSite88.name = "r_trochanterion_pt_pt";
HAnimSite88.DEF = "hanim_r_trochanterion_pt";
HAnimSite88.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
//HAnimSite visualization shape
let TouchSensor89 = browser.currentScene.createNode("TouchSensor");
TouchSensor89.description = "HAnimSite r_trochanterion_pt";
HAnimSite88.children = new MFNode();

HAnimSite88.children[0] = TouchSensor89;

let Shape90 = browser.currentScene.createNode("Shape");
Shape90.USE = "HAnimSiteShape";
HAnimSite88.children[1] = Shape90;

HAnimSegment33.children[14] = HAnimSite88;

let HAnimSite91 = browser.currentScene.createNode("HAnimSite");
HAnimSite91.name = "l_iliocristale_pt_pt";
HAnimSite91.DEF = "hanim_l_iliocristale_pt";
HAnimSite91.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
//HAnimSite visualization shape
let TouchSensor92 = browser.currentScene.createNode("TouchSensor");
TouchSensor92.description = "HAnimSite l_iliocristale_pt";
HAnimSite91.children = new MFNode();

HAnimSite91.children[0] = TouchSensor92;

let Shape93 = browser.currentScene.createNode("Shape");
Shape93.USE = "HAnimSiteShape";
HAnimSite91.children[1] = Shape93;

HAnimSegment33.children[15] = HAnimSite91;

let HAnimSite94 = browser.currentScene.createNode("HAnimSite");
HAnimSite94.name = "l_trochanterion_pt_pt";
HAnimSite94.DEF = "hanim_l_trochanterion_pt";
HAnimSite94.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
//HAnimSite visualization shape
let TouchSensor95 = browser.currentScene.createNode("TouchSensor");
TouchSensor95.description = "HAnimSite l_trochanterion_pt";
HAnimSite94.children = new MFNode();

HAnimSite94.children[0] = TouchSensor95;

let Shape96 = browser.currentScene.createNode("Shape");
Shape96.USE = "HAnimSiteShape";
HAnimSite94.children[1] = Shape96;

HAnimSegment33.children[16] = HAnimSite94;

let HAnimSite97 = browser.currentScene.createNode("HAnimSite");
HAnimSite97.name = "r_asis_pt_pt";
HAnimSite97.DEF = "hanim_r_asis_pt";
HAnimSite97.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
//HAnimSite visualization shape
let TouchSensor98 = browser.currentScene.createNode("TouchSensor");
TouchSensor98.description = "HAnimSite r_asis_pt";
HAnimSite97.children = new MFNode();

HAnimSite97.children[0] = TouchSensor98;

let Shape99 = browser.currentScene.createNode("Shape");
Shape99.USE = "HAnimSiteShape";
HAnimSite97.children[1] = Shape99;

HAnimSegment33.children[17] = HAnimSite97;

let HAnimSite100 = browser.currentScene.createNode("HAnimSite");
HAnimSite100.name = "l_asis_pt_pt";
HAnimSite100.DEF = "hanim_l_asis_pt";
HAnimSite100.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
//HAnimSite visualization shape
let TouchSensor101 = browser.currentScene.createNode("TouchSensor");
TouchSensor101.description = "HAnimSite l_asis_pt";
HAnimSite100.children = new MFNode();

HAnimSite100.children[0] = TouchSensor101;

let Shape102 = browser.currentScene.createNode("Shape");
Shape102.USE = "HAnimSiteShape";
HAnimSite100.children[1] = Shape102;

HAnimSegment33.children[18] = HAnimSite100;

let HAnimSite103 = browser.currentScene.createNode("HAnimSite");
HAnimSite103.name = "r_psis_pt_pt";
HAnimSite103.DEF = "hanim_r_psis_pt";
HAnimSite103.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
//HAnimSite visualization shape
let TouchSensor104 = browser.currentScene.createNode("TouchSensor");
TouchSensor104.description = "HAnimSite r_psis_pt";
HAnimSite103.children = new MFNode();

HAnimSite103.children[0] = TouchSensor104;

let Shape105 = browser.currentScene.createNode("Shape");
Shape105.USE = "HAnimSiteShape";
HAnimSite103.children[1] = Shape105;

HAnimSegment33.children[19] = HAnimSite103;

let HAnimSite106 = browser.currentScene.createNode("HAnimSite");
HAnimSite106.name = "l_psis_pt_pt";
HAnimSite106.DEF = "hanim_l_psis_pt";
HAnimSite106.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
//HAnimSite visualization shape
let TouchSensor107 = browser.currentScene.createNode("TouchSensor");
TouchSensor107.description = "HAnimSite l_psis_pt";
HAnimSite106.children = new MFNode();

HAnimSite106.children[0] = TouchSensor107;

let Shape108 = browser.currentScene.createNode("Shape");
Shape108.USE = "HAnimSiteShape";
HAnimSite106.children[1] = Shape108;

HAnimSegment33.children[20] = HAnimSite106;

let HAnimSite109 = browser.currentScene.createNode("HAnimSite");
HAnimSite109.name = "crotch_pt_pt";
HAnimSite109.DEF = "hanim_crotch_pt";
HAnimSite109.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
//HAnimSite visualization shape
let TouchSensor110 = browser.currentScene.createNode("TouchSensor");
TouchSensor110.description = "HAnimSite crotch_pt";
HAnimSite109.children = new MFNode();

HAnimSite109.children[0] = TouchSensor110;

let Shape111 = browser.currentScene.createNode("Shape");
Shape111.USE = "HAnimSiteShape";
HAnimSite109.children[1] = Shape111;

HAnimSegment33.children[21] = HAnimSite109;

HAnimJoint32.children = new MFNode();

HAnimJoint32.children[0] = HAnimSegment33;

let HAnimJoint112 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint112.name = "l_hip";
HAnimJoint112.DEF = "hanim_l_hip";
HAnimJoint112.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
let HAnimSegment113 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment113.name = "l_thigh";
HAnimSegment113.DEF = "hanim_l_thigh";
//Visualization sphere for <HAnimJoint name='l_hip'/> is placed within <HAnimSegment name='l_thigh'/>
let TouchSensor114 = browser.currentScene.createNode("TouchSensor");
TouchSensor114.description = "HAnimJoint l_hip, HAnimSegment l_thigh";
HAnimSegment113.children = new MFNode();

HAnimSegment113.children[0] = TouchSensor114;

let Transform115 = browser.currentScene.createNode("Transform");
Transform115.translation = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
let Shape116 = browser.currentScene.createNode("Shape");
Shape116.USE = "HAnimJointShape";
Transform115.children = new MFNode();

Transform115.children[0] = Shape116;

HAnimSegment113.children[1] = Transform115;

//HAnimSegment visualization line from current <HAnimJoint name='l_hip'/> to child <HAnimJoint name='l_knee'/>
let Shape117 = browser.currentScene.createNode("Shape");
let LineSet118 = browser.currentScene.createNode("LineSet");
LineSet118.vertexCount = new MFInt32(new int[2]);
let Coordinate119 = browser.currentScene.createNode("Coordinate");
Coordinate119.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
LineSet118.coord = Coordinate119;

let ColorRGBA120 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA120.USE = "HAnimSegmentLineColorRGBA";
LineSet118.color = ColorRGBA120;

Shape117.geometry = LineSet118;

HAnimSegment113.children[2] = Shape117;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_knee_crease_pt'/>
let Shape121 = browser.currentScene.createNode("Shape");
let LineSet122 = browser.currentScene.createNode("LineSet");
LineSet122.vertexCount = new MFInt32(new int[2]);
let Coordinate123 = browser.currentScene.createNode("Coordinate");
Coordinate123.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309]);
LineSet122.coord = Coordinate123;

let ColorRGBA124 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA124.USE = "HAnimSiteLineColorRGBA";
LineSet122.color = ColorRGBA124;

Shape121.geometry = LineSet122;

HAnimSegment113.children[3] = Shape121;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_lateral_epicn_pt'/>
let Shape125 = browser.currentScene.createNode("Shape");
let LineSet126 = browser.currentScene.createNode("LineSet");
LineSet126.vertexCount = new MFInt32(new int[2]);
let Coordinate127 = browser.currentScene.createNode("Coordinate");
Coordinate127.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297]);
LineSet126.coord = Coordinate127;

let ColorRGBA128 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA128.USE = "HAnimSiteLineColorRGBA";
LineSet126.color = ColorRGBA128;

Shape125.geometry = LineSet126;

HAnimSegment113.children[4] = Shape125;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_medial_epicn_pt'/>
let Shape129 = browser.currentScene.createNode("Shape");
let LineSet130 = browser.currentScene.createNode("LineSet");
LineSet130.vertexCount = new MFInt32(new int[2]);
let Coordinate131 = browser.currentScene.createNode("Coordinate");
Coordinate131.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303]);
LineSet130.coord = Coordinate131;

let ColorRGBA132 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA132.USE = "HAnimSiteLineColorRGBA";
LineSet130.color = ColorRGBA132;

Shape129.geometry = LineSet130;

HAnimSegment113.children[5] = Shape129;

let HAnimSite133 = browser.currentScene.createNode("HAnimSite");
HAnimSite133.name = "l_knee_crease_pt_pt";
HAnimSite133.DEF = "hanim_l_knee_crease_pt";
HAnimSite133.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
//HAnimSite visualization shape
let TouchSensor134 = browser.currentScene.createNode("TouchSensor");
TouchSensor134.description = "HAnimSite l_knee_crease_pt";
HAnimSite133.children = new MFNode();

HAnimSite133.children[0] = TouchSensor134;

let Shape135 = browser.currentScene.createNode("Shape");
Shape135.USE = "HAnimSiteShape";
HAnimSite133.children[1] = Shape135;

HAnimSegment113.children[6] = HAnimSite133;

let HAnimSite136 = browser.currentScene.createNode("HAnimSite");
HAnimSite136.name = "l_femoral_lateral_epicn_pt_pt";
HAnimSite136.DEF = "hanim_l_femoral_lateral_epicn_pt";
HAnimSite136.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
//HAnimSite visualization shape
let TouchSensor137 = browser.currentScene.createNode("TouchSensor");
TouchSensor137.description = "HAnimSite l_femoral_lateral_epicn_pt";
HAnimSite136.children = new MFNode();

HAnimSite136.children[0] = TouchSensor137;

let Shape138 = browser.currentScene.createNode("Shape");
Shape138.USE = "HAnimSiteShape";
HAnimSite136.children[1] = Shape138;

HAnimSegment113.children[7] = HAnimSite136;

let HAnimSite139 = browser.currentScene.createNode("HAnimSite");
HAnimSite139.name = "l_femoral_medial_epicn_pt_pt";
HAnimSite139.DEF = "hanim_l_femoral_medial_epicn_pt";
HAnimSite139.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
//HAnimSite visualization shape
let TouchSensor140 = browser.currentScene.createNode("TouchSensor");
TouchSensor140.description = "HAnimSite l_femoral_medial_epicn_pt";
HAnimSite139.children = new MFNode();

HAnimSite139.children[0] = TouchSensor140;

let Shape141 = browser.currentScene.createNode("Shape");
Shape141.USE = "HAnimSiteShape";
HAnimSite139.children[1] = Shape141;

HAnimSegment113.children[8] = HAnimSite139;

HAnimJoint112.children = new MFNode();

HAnimJoint112.children[0] = HAnimSegment113;

let HAnimJoint142 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint142.name = "l_knee";
HAnimJoint142.DEF = "hanim_l_knee";
HAnimJoint142.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
let HAnimSegment143 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment143.name = "l_calf";
HAnimSegment143.DEF = "hanim_l_calf";
//Visualization sphere for <HAnimJoint name='l_knee'/> is placed within <HAnimSegment name='l_calf'/>
let TouchSensor144 = browser.currentScene.createNode("TouchSensor");
TouchSensor144.description = "HAnimJoint l_knee, HAnimSegment l_calf";
HAnimSegment143.children = new MFNode();

HAnimSegment143.children[0] = TouchSensor144;

let Transform145 = browser.currentScene.createNode("Transform");
Transform145.translation = new SFVec3f(new float[0.104,0.4867,0.0308]);
let Shape146 = browser.currentScene.createNode("Shape");
Shape146.USE = "HAnimJointShape";
Transform145.children = new MFNode();

Transform145.children[0] = Shape146;

HAnimSegment143.children[1] = Transform145;

//HAnimSegment visualization line from current <HAnimJoint name='l_knee'/> to child <HAnimJoint name='l_talocrural'/>
let Shape147 = browser.currentScene.createNode("Shape");
let LineSet148 = browser.currentScene.createNode("LineSet");
LineSet148.vertexCount = new MFInt32(new int[2]);
let Coordinate149 = browser.currentScene.createNode("Coordinate");
Coordinate149.point = new MFVec3f(new float[0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
LineSet148.coord = Coordinate149;

let ColorRGBA150 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA150.USE = "HAnimSegmentLineColorRGBA";
LineSet148.color = ColorRGBA150;

Shape147.geometry = LineSet148;

HAnimSegment143.children[2] = Shape147;

HAnimJoint142.children = new MFNode();

HAnimJoint142.children[0] = HAnimSegment143;

let HAnimJoint151 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint151.name = "l_talocrural";
HAnimJoint151.DEF = "hanim_l_talocrural";
HAnimJoint151.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let HAnimSegment152 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment152.name = "l_talus";
HAnimSegment152.DEF = "hanim_l_talus";
//Visualization sphere for <HAnimJoint name='l_talocrural'/> is placed within <HAnimSegment name='l_talus'/>
let TouchSensor153 = browser.currentScene.createNode("TouchSensor");
TouchSensor153.description = "HAnimJoint l_talocrural, HAnimSegment l_talus";
HAnimSegment152.children = new MFNode();

HAnimSegment152.children[0] = TouchSensor153;

let Transform154 = browser.currentScene.createNode("Transform");
Transform154.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Shape155 = browser.currentScene.createNode("Shape");
Shape155.USE = "HAnimJointShape";
Transform154.children = new MFNode();

Transform154.children[0] = Shape155;

HAnimSegment152.children[1] = Transform154;

//HAnimSegment visualization line from current <HAnimJoint name='l_talocrural'/> to child <HAnimJoint name='l_tarsometatarsal_2'/>
let Shape156 = browser.currentScene.createNode("Shape");
let LineSet157 = browser.currentScene.createNode("LineSet");
LineSet157.vertexCount = new MFInt32(new int[2]);
let Coordinate158 = browser.currentScene.createNode("Coordinate");
Coordinate158.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368]);
LineSet157.coord = Coordinate158;

let ColorRGBA159 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA159.USE = "HAnimSegmentLineColorRGBA";
LineSet157.color = ColorRGBA159;

Shape156.geometry = LineSet157;

HAnimSegment152.children[2] = Shape156;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_talocrural'/> to <HAnimSite name='l_lateral_malleolus_pt'/>
let Shape160 = browser.currentScene.createNode("Shape");
let LineSet161 = browser.currentScene.createNode("LineSet");
LineSet161.vertexCount = new MFInt32(new int[2]);
let Coordinate162 = browser.currentScene.createNode("Coordinate");
Coordinate162.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032]);
LineSet161.coord = Coordinate162;

let ColorRGBA163 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA163.USE = "HAnimSiteLineColorRGBA";
LineSet161.color = ColorRGBA163;

Shape160.geometry = LineSet161;

HAnimSegment152.children[3] = Shape160;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_talocrural'/> to <HAnimSite name='l_medial_malleolus_pt'/>
let Shape164 = browser.currentScene.createNode("Shape");
let LineSet165 = browser.currentScene.createNode("LineSet");
LineSet165.vertexCount = new MFInt32(new int[2]);
let Coordinate166 = browser.currentScene.createNode("Coordinate");
Coordinate166.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881]);
LineSet165.coord = Coordinate166;

let ColorRGBA167 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA167.USE = "HAnimSiteLineColorRGBA";
LineSet165.color = ColorRGBA167;

Shape164.geometry = LineSet165;

HAnimSegment152.children[4] = Shape164;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_talocrural'/> to <HAnimSite name='l_sphyrion_pt'/>
let Shape168 = browser.currentScene.createNode("Shape");
let LineSet169 = browser.currentScene.createNode("LineSet");
LineSet169.vertexCount = new MFInt32(new int[2]);
let Coordinate170 = browser.currentScene.createNode("Coordinate");
Coordinate170.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943]);
LineSet169.coord = Coordinate170;

let ColorRGBA171 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA171.USE = "HAnimSiteLineColorRGBA";
LineSet169.color = ColorRGBA171;

Shape168.geometry = LineSet169;

HAnimSegment152.children[5] = Shape168;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_talocrural'/> to <HAnimSite name='l_calcaneous_post_pt'/>
let Shape172 = browser.currentScene.createNode("Shape");
let LineSet173 = browser.currentScene.createNode("LineSet");
LineSet173.vertexCount = new MFInt32(new int[2]);
let Coordinate174 = browser.currentScene.createNode("Coordinate");
Coordinate174.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171]);
LineSet173.coord = Coordinate174;

let ColorRGBA175 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA175.USE = "HAnimSiteLineColorRGBA";
LineSet173.color = ColorRGBA175;

Shape172.geometry = LineSet173;

HAnimSegment152.children[6] = Shape172;

let HAnimSite176 = browser.currentScene.createNode("HAnimSite");
HAnimSite176.name = "l_lateral_malleolus_pt_pt";
HAnimSite176.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite176.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
//HAnimSite visualization shape
let TouchSensor177 = browser.currentScene.createNode("TouchSensor");
TouchSensor177.description = "HAnimSite l_lateral_malleolus_pt";
HAnimSite176.children = new MFNode();

HAnimSite176.children[0] = TouchSensor177;

let Shape178 = browser.currentScene.createNode("Shape");
Shape178.USE = "HAnimSiteShape";
HAnimSite176.children[1] = Shape178;

HAnimSegment152.children[7] = HAnimSite176;

let HAnimSite179 = browser.currentScene.createNode("HAnimSite");
HAnimSite179.name = "l_medial_malleolus_pt_pt";
HAnimSite179.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite179.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
//HAnimSite visualization shape
let TouchSensor180 = browser.currentScene.createNode("TouchSensor");
TouchSensor180.description = "HAnimSite l_medial_malleolus_pt";
HAnimSite179.children = new MFNode();

HAnimSite179.children[0] = TouchSensor180;

let Shape181 = browser.currentScene.createNode("Shape");
Shape181.USE = "HAnimSiteShape";
HAnimSite179.children[1] = Shape181;

HAnimSegment152.children[8] = HAnimSite179;

let HAnimSite182 = browser.currentScene.createNode("HAnimSite");
HAnimSite182.name = "l_sphyrion_pt_pt";
HAnimSite182.DEF = "hanim_l_sphyrion_pt";
HAnimSite182.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
//HAnimSite visualization shape
let TouchSensor183 = browser.currentScene.createNode("TouchSensor");
TouchSensor183.description = "HAnimSite l_sphyrion_pt";
HAnimSite182.children = new MFNode();

HAnimSite182.children[0] = TouchSensor183;

let Shape184 = browser.currentScene.createNode("Shape");
Shape184.USE = "HAnimSiteShape";
HAnimSite182.children[1] = Shape184;

HAnimSegment152.children[9] = HAnimSite182;

let HAnimSite185 = browser.currentScene.createNode("HAnimSite");
HAnimSite185.name = "l_calcaneous_post_pt_pt";
HAnimSite185.DEF = "hanim_l_calcaneous_post_pt";
HAnimSite185.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
//HAnimSite visualization shape
let TouchSensor186 = browser.currentScene.createNode("TouchSensor");
TouchSensor186.description = "HAnimSite l_calcaneous_post_pt";
HAnimSite185.children = new MFNode();

HAnimSite185.children[0] = TouchSensor186;

let Shape187 = browser.currentScene.createNode("Shape");
Shape187.USE = "HAnimSiteShape";
HAnimSite185.children[1] = Shape187;

HAnimSegment152.children[10] = HAnimSite185;

HAnimJoint151.children = new MFNode();

HAnimJoint151.children[0] = HAnimSegment152;

let HAnimJoint188 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint188.name = "l_tarsometatarsal_2";
HAnimJoint188.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint188.center = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
let HAnimSegment189 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment189.name = "l_metatarsal_2";
HAnimSegment189.DEF = "hanim_l_metatarsal_2";
//Visualization sphere for <HAnimJoint name='l_tarsometatarsal_2'/> is placed within <HAnimSegment name='l_metatarsal_2'/>
let TouchSensor190 = browser.currentScene.createNode("TouchSensor");
TouchSensor190.description = "HAnimJoint l_tarsometatarsal_2, HAnimSegment l_metatarsal_2";
HAnimSegment189.children = new MFNode();

HAnimSegment189.children[0] = TouchSensor190;

let Transform191 = browser.currentScene.createNode("Transform");
Transform191.translation = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
let Shape192 = browser.currentScene.createNode("Shape");
Shape192.USE = "HAnimJointShape";
Transform191.children = new MFNode();

Transform191.children[0] = Shape192;

HAnimSegment189.children[1] = Transform191;

//HAnimSegment visualization line from current <HAnimJoint name='l_tarsometatarsal_2'/> to child <HAnimJoint name='l_metatarsophalangeal_2'/>
let Shape193 = browser.currentScene.createNode("Shape");
let LineSet194 = browser.currentScene.createNode("LineSet");
LineSet194.vertexCount = new MFInt32(new int[2]);
let Coordinate195 = browser.currentScene.createNode("Coordinate");
Coordinate195.point = new MFVec3f(new float[0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368]);
LineSet194.coord = Coordinate195;

let ColorRGBA196 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA196.USE = "HAnimSegmentLineColorRGBA";
LineSet194.color = ColorRGBA196;

Shape193.geometry = LineSet194;

HAnimSegment189.children[2] = Shape193;

HAnimJoint188.children = new MFNode();

HAnimJoint188.children[0] = HAnimSegment189;

let HAnimJoint197 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint197.name = "l_metatarsophalangeal_2";
HAnimJoint197.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint197.center = new SFVec3f(new float[0.1086,0.0001,0.0368]);
let HAnimSegment198 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment198.name = "l_tarsal_proximal_phalanx_2";
HAnimSegment198.DEF = "hanim_l_tarsal_proximal_phalanx_2";
//Visualization sphere for <HAnimJoint name='l_metatarsophalangeal_2'/> is placed within <HAnimSegment name='l_tarsal_proximal_phalanx_2'/>
let TouchSensor199 = browser.currentScene.createNode("TouchSensor");
TouchSensor199.description = "HAnimJoint l_metatarsophalangeal_2, HAnimSegment l_tarsal_proximal_phalanx_2";
HAnimSegment198.children = new MFNode();

HAnimSegment198.children[0] = TouchSensor199;

let Transform200 = browser.currentScene.createNode("Transform");
Transform200.translation = new SFVec3f(new float[0.1086,0.0001,0.0368]);
let Shape201 = browser.currentScene.createNode("Shape");
Shape201.USE = "HAnimJointShape";
Transform200.children = new MFNode();

Transform200.children[0] = Shape201;

HAnimSegment198.children[1] = Transform200;

//HAnimSegment visualization line from current <HAnimJoint name='l_metatarsophalangeal_2'/> to child <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/>
let Shape202 = browser.currentScene.createNode("Shape");
let LineSet203 = browser.currentScene.createNode("LineSet");
LineSet203.vertexCount = new MFInt32(new int[2]);
let Coordinate204 = browser.currentScene.createNode("Coordinate");
Coordinate204.point = new MFVec3f(new float[0.1086,0.0001,0.0368,0.1086,0,0.0762]);
LineSet203.coord = Coordinate204;

let ColorRGBA205 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA205.USE = "HAnimSegmentLineColorRGBA";
LineSet203.color = ColorRGBA205;

Shape202.geometry = LineSet203;

HAnimSegment198.children[2] = Shape202;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsophalangeal_2'/> to <HAnimSite name='l_metatarsal_pha1_pt'/>
let Shape206 = browser.currentScene.createNode("Shape");
let LineSet207 = browser.currentScene.createNode("LineSet");
LineSet207.vertexCount = new MFInt32(new int[2]);
let Coordinate208 = browser.currentScene.createNode("Coordinate");
Coordinate208.point = new MFVec3f(new float[0.1086,0.0001,0.0368,0.0816,0.0232,0.0106]);
LineSet207.coord = Coordinate208;

let ColorRGBA209 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA209.USE = "HAnimSiteLineColorRGBA";
LineSet207.color = ColorRGBA209;

Shape206.geometry = LineSet207;

HAnimSegment198.children[3] = Shape206;

let HAnimSite210 = browser.currentScene.createNode("HAnimSite");
HAnimSite210.name = "l_metatarsal_pha1_pt_pt";
HAnimSite210.DEF = "hanim_l_metatarsal_pha1_pt";
HAnimSite210.translation = new SFVec3f(new float[0.0816,0.0232,0.0106]);
//HAnimSite visualization shape
let TouchSensor211 = browser.currentScene.createNode("TouchSensor");
TouchSensor211.description = "HAnimSite l_metatarsal_pha1_pt";
HAnimSite210.children = new MFNode();

HAnimSite210.children[0] = TouchSensor211;

let Shape212 = browser.currentScene.createNode("Shape");
Shape212.USE = "HAnimSiteShape";
HAnimSite210.children[1] = Shape212;

HAnimSegment198.children[4] = HAnimSite210;

HAnimJoint197.children = new MFNode();

HAnimJoint197.children[0] = HAnimSegment198;

let HAnimJoint213 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint213.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint213.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint213.center = new SFVec3f(new float[0.1086,0,0.0762]);
let HAnimSegment214 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment214.name = "l_tarsal_distal_phalanx_2";
HAnimSegment214.DEF = "hanim_l_tarsal_distal_phalanx_2";
//Visualization sphere for <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> is placed within <HAnimSegment name='l_tarsal_distal_phalanx_2'/>
let TouchSensor215 = browser.currentScene.createNode("TouchSensor");
TouchSensor215.description = "HAnimJoint l_tarsal_distal_interphalangeal_2, HAnimSegment l_tarsal_distal_phalanx_2";
HAnimSegment214.children = new MFNode();

HAnimSegment214.children[0] = TouchSensor215;

let Transform216 = browser.currentScene.createNode("Transform");
Transform216.translation = new SFVec3f(new float[0.1086,0,0.0762]);
let Shape217 = browser.currentScene.createNode("Shape");
Shape217.USE = "HAnimJointShape";
Transform216.children = new MFNode();

Transform216.children[0] = Shape217;

HAnimSegment214.children[1] = Transform216;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='l_forefoot_tip'/>
let Shape218 = browser.currentScene.createNode("Shape");
let LineSet219 = browser.currentScene.createNode("LineSet");
LineSet219.vertexCount = new MFInt32(new int[2]);
let Coordinate220 = browser.currentScene.createNode("Coordinate");
Coordinate220.point = new MFVec3f(new float[0.1086,0,0.0762,0.1354,0.0016,0.1476]);
LineSet219.coord = Coordinate220;

let ColorRGBA221 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA221.USE = "HAnimSiteLineColorRGBA";
LineSet219.color = ColorRGBA221;

Shape218.geometry = LineSet219;

HAnimSegment214.children[2] = Shape218;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='l_metatarsal_pha5_pt'/>
let Shape222 = browser.currentScene.createNode("Shape");
let LineSet223 = browser.currentScene.createNode("LineSet");
LineSet223.vertexCount = new MFInt32(new int[2]);
let Coordinate224 = browser.currentScene.createNode("Coordinate");
Coordinate224.point = new MFVec3f(new float[0.1086,0,0.0762,0.1825,0.007,0.0928]);
LineSet223.coord = Coordinate224;

let ColorRGBA225 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA225.USE = "HAnimSiteLineColorRGBA";
LineSet223.color = ColorRGBA225;

Shape222.geometry = LineSet223;

HAnimSegment214.children[3] = Shape222;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='l_digit2_pt'/>
let Shape226 = browser.currentScene.createNode("Shape");
let LineSet227 = browser.currentScene.createNode("LineSet");
LineSet227.vertexCount = new MFInt32(new int[2]);
let Coordinate228 = browser.currentScene.createNode("Coordinate");
Coordinate228.point = new MFVec3f(new float[0.1086,0,0.0762,0.1195,0.0079,0.1433]);
LineSet227.coord = Coordinate228;

let ColorRGBA229 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA229.USE = "HAnimSiteLineColorRGBA";
LineSet227.color = ColorRGBA229;

Shape226.geometry = LineSet227;

HAnimSegment214.children[4] = Shape226;

let HAnimSite230 = browser.currentScene.createNode("HAnimSite");
HAnimSite230.name = "l_forefoot_tip_pt";
HAnimSite230.DEF = "hanim_l_forefoot_tip";
HAnimSite230.translation = new SFVec3f(new float[0.1354,0.0016,0.1476]);
//HAnimSite visualization shape
let TouchSensor231 = browser.currentScene.createNode("TouchSensor");
TouchSensor231.description = "HAnimSite l_forefoot_tip";
HAnimSite230.children = new MFNode();

HAnimSite230.children[0] = TouchSensor231;

let Shape232 = browser.currentScene.createNode("Shape");
Shape232.USE = "HAnimSiteShape";
HAnimSite230.children[1] = Shape232;

HAnimSegment214.children[5] = HAnimSite230;

let HAnimSite233 = browser.currentScene.createNode("HAnimSite");
HAnimSite233.name = "l_metatarsal_pha5_pt_pt";
HAnimSite233.DEF = "hanim_l_metatarsal_pha5_pt";
HAnimSite233.translation = new SFVec3f(new float[0.1825,0.007,0.0928]);
//HAnimSite visualization shape
let TouchSensor234 = browser.currentScene.createNode("TouchSensor");
TouchSensor234.description = "HAnimSite l_metatarsal_pha5_pt";
HAnimSite233.children = new MFNode();

HAnimSite233.children[0] = TouchSensor234;

let Shape235 = browser.currentScene.createNode("Shape");
Shape235.USE = "HAnimSiteShape";
HAnimSite233.children[1] = Shape235;

HAnimSegment214.children[6] = HAnimSite233;

let HAnimSite236 = browser.currentScene.createNode("HAnimSite");
HAnimSite236.name = "l_digit2_pt_pt";
HAnimSite236.DEF = "hanim_l_digit2_pt";
HAnimSite236.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
//HAnimSite visualization shape
let TouchSensor237 = browser.currentScene.createNode("TouchSensor");
TouchSensor237.description = "HAnimSite l_digit2_pt";
HAnimSite236.children = new MFNode();

HAnimSite236.children[0] = TouchSensor237;

let Shape238 = browser.currentScene.createNode("Shape");
Shape238.USE = "HAnimSiteShape";
HAnimSite236.children[1] = Shape238;

HAnimSegment214.children[7] = HAnimSite236;

HAnimJoint213.children = new MFNode();

HAnimJoint213.children[0] = HAnimSegment214;

HAnimJoint197.children[1] = HAnimJoint213;

HAnimJoint188.children[1] = HAnimJoint197;

HAnimJoint151.children[1] = HAnimJoint188;

HAnimJoint142.children[1] = HAnimJoint151;

HAnimJoint112.children[1] = HAnimJoint142;

HAnimJoint32.children[1] = HAnimJoint112;

let HAnimJoint239 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint239.name = "r_hip";
HAnimJoint239.DEF = "hanim_r_hip";
HAnimJoint239.center = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
let HAnimSegment240 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment240.name = "r_thigh";
HAnimSegment240.DEF = "hanim_r_thigh";
//Visualization sphere for <HAnimJoint name='r_hip'/> is placed within <HAnimSegment name='r_thigh'/>
let TouchSensor241 = browser.currentScene.createNode("TouchSensor");
TouchSensor241.description = "HAnimJoint r_hip, HAnimSegment r_thigh";
HAnimSegment240.children = new MFNode();

HAnimSegment240.children[0] = TouchSensor241;

let Transform242 = browser.currentScene.createNode("Transform");
Transform242.translation = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
let Shape243 = browser.currentScene.createNode("Shape");
Shape243.USE = "HAnimJointShape";
Transform242.children = new MFNode();

Transform242.children[0] = Shape243;

HAnimSegment240.children[1] = Transform242;

//HAnimSegment visualization line from current <HAnimJoint name='r_hip'/> to child <HAnimJoint name='r_knee'/>
let Shape244 = browser.currentScene.createNode("Shape");
let LineSet245 = browser.currentScene.createNode("LineSet");
LineSet245.vertexCount = new MFInt32(new int[2]);
let Coordinate246 = browser.currentScene.createNode("Coordinate");
Coordinate246.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308]);
LineSet245.coord = Coordinate246;

let ColorRGBA247 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA247.USE = "HAnimSegmentLineColorRGBA";
LineSet245.color = ColorRGBA247;

Shape244.geometry = LineSet245;

HAnimSegment240.children[2] = Shape244;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_knee_crease_pt'/>
let Shape248 = browser.currentScene.createNode("Shape");
let LineSet249 = browser.currentScene.createNode("LineSet");
LineSet249.vertexCount = new MFInt32(new int[2]);
let Coordinate250 = browser.currentScene.createNode("Coordinate");
Coordinate250.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326]);
LineSet249.coord = Coordinate250;

let ColorRGBA251 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA251.USE = "HAnimSiteLineColorRGBA";
LineSet249.color = ColorRGBA251;

Shape248.geometry = LineSet249;

HAnimSegment240.children[3] = Shape248;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_lateral_epicn_pt'/>
let Shape252 = browser.currentScene.createNode("Shape");
let LineSet253 = browser.currentScene.createNode("LineSet");
LineSet253.vertexCount = new MFInt32(new int[2]);
let Coordinate254 = browser.currentScene.createNode("Coordinate");
Coordinate254.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031]);
LineSet253.coord = Coordinate254;

let ColorRGBA255 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA255.USE = "HAnimSiteLineColorRGBA";
LineSet253.color = ColorRGBA255;

Shape252.geometry = LineSet253;

HAnimSegment240.children[4] = Shape252;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_medial_epicn_pt'/>
let Shape256 = browser.currentScene.createNode("Shape");
let LineSet257 = browser.currentScene.createNode("LineSet");
LineSet257.vertexCount = new MFInt32(new int[2]);
let Coordinate258 = browser.currentScene.createNode("Coordinate");
Coordinate258.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289]);
LineSet257.coord = Coordinate258;

let ColorRGBA259 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA259.USE = "HAnimSiteLineColorRGBA";
LineSet257.color = ColorRGBA259;

Shape256.geometry = LineSet257;

HAnimSegment240.children[5] = Shape256;

let HAnimSite260 = browser.currentScene.createNode("HAnimSite");
HAnimSite260.name = "r_knee_crease_pt_pt";
HAnimSite260.DEF = "hanim_r_knee_crease_pt";
HAnimSite260.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
//HAnimSite visualization shape
let TouchSensor261 = browser.currentScene.createNode("TouchSensor");
TouchSensor261.description = "HAnimSite r_knee_crease_pt";
HAnimSite260.children = new MFNode();

HAnimSite260.children[0] = TouchSensor261;

let Shape262 = browser.currentScene.createNode("Shape");
Shape262.USE = "HAnimSiteShape";
HAnimSite260.children[1] = Shape262;

HAnimSegment240.children[6] = HAnimSite260;

let HAnimSite263 = browser.currentScene.createNode("HAnimSite");
HAnimSite263.name = "r_femoral_lateral_epicn_pt_pt";
HAnimSite263.DEF = "hanim_r_femoral_lateral_epicn_pt";
HAnimSite263.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
//HAnimSite visualization shape
let TouchSensor264 = browser.currentScene.createNode("TouchSensor");
TouchSensor264.description = "HAnimSite r_femoral_lateral_epicn_pt";
HAnimSite263.children = new MFNode();

HAnimSite263.children[0] = TouchSensor264;

let Shape265 = browser.currentScene.createNode("Shape");
Shape265.USE = "HAnimSiteShape";
HAnimSite263.children[1] = Shape265;

HAnimSegment240.children[7] = HAnimSite263;

let HAnimSite266 = browser.currentScene.createNode("HAnimSite");
HAnimSite266.name = "r_femoral_medial_epicn_pt_pt";
HAnimSite266.DEF = "hanim_r_femoral_medial_epicn_pt";
HAnimSite266.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
//HAnimSite visualization shape
let TouchSensor267 = browser.currentScene.createNode("TouchSensor");
TouchSensor267.description = "HAnimSite r_femoral_medial_epicn_pt";
HAnimSite266.children = new MFNode();

HAnimSite266.children[0] = TouchSensor267;

let Shape268 = browser.currentScene.createNode("Shape");
Shape268.USE = "HAnimSiteShape";
HAnimSite266.children[1] = Shape268;

HAnimSegment240.children[8] = HAnimSite266;

HAnimJoint239.children = new MFNode();

HAnimJoint239.children[0] = HAnimSegment240;

let HAnimJoint269 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint269.name = "r_knee";
HAnimJoint269.DEF = "hanim_r_knee";
HAnimJoint269.center = new SFVec3f(new float[-0.104,0.4867,0.0308]);
let HAnimSegment270 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment270.name = "r_calf";
HAnimSegment270.DEF = "hanim_r_calf";
//Visualization sphere for <HAnimJoint name='r_knee'/> is placed within <HAnimSegment name='r_calf'/>
let TouchSensor271 = browser.currentScene.createNode("TouchSensor");
TouchSensor271.description = "HAnimJoint r_knee, HAnimSegment r_calf";
HAnimSegment270.children = new MFNode();

HAnimSegment270.children[0] = TouchSensor271;

let Transform272 = browser.currentScene.createNode("Transform");
Transform272.translation = new SFVec3f(new float[-0.104,0.4867,0.0308]);
let Shape273 = browser.currentScene.createNode("Shape");
Shape273.USE = "HAnimJointShape";
Transform272.children = new MFNode();

Transform272.children[0] = Shape273;

HAnimSegment270.children[1] = Transform272;

//HAnimSegment visualization line from current <HAnimJoint name='r_knee'/> to child <HAnimJoint name='r_talocrural'/>
let Shape274 = browser.currentScene.createNode("Shape");
let LineSet275 = browser.currentScene.createNode("LineSet");
LineSet275.vertexCount = new MFInt32(new int[2]);
let Coordinate276 = browser.currentScene.createNode("Coordinate");
Coordinate276.point = new MFVec3f(new float[-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736]);
LineSet275.coord = Coordinate276;

let ColorRGBA277 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA277.USE = "HAnimSegmentLineColorRGBA";
LineSet275.color = ColorRGBA277;

Shape274.geometry = LineSet275;

HAnimSegment270.children[2] = Shape274;

HAnimJoint269.children = new MFNode();

HAnimJoint269.children[0] = HAnimSegment270;

let HAnimJoint278 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint278.name = "r_talocrural";
HAnimJoint278.DEF = "hanim_r_talocrural";
HAnimJoint278.center = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
let HAnimSegment279 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment279.name = "r_talus";
HAnimSegment279.DEF = "hanim_r_talus";
//Visualization sphere for <HAnimJoint name='r_talocrural'/> is placed within <HAnimSegment name='r_talus'/>
let TouchSensor280 = browser.currentScene.createNode("TouchSensor");
TouchSensor280.description = "HAnimJoint r_talocrural, HAnimSegment r_talus";
HAnimSegment279.children = new MFNode();

HAnimSegment279.children[0] = TouchSensor280;

let Transform281 = browser.currentScene.createNode("Transform");
Transform281.translation = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
let Shape282 = browser.currentScene.createNode("Shape");
Shape282.USE = "HAnimJointShape";
Transform281.children = new MFNode();

Transform281.children[0] = Shape282;

HAnimSegment279.children[1] = Transform281;

//HAnimSegment visualization line from current <HAnimJoint name='r_talocrural'/> to child <HAnimJoint name='r_tarsometatarsal_2'/>
let Shape283 = browser.currentScene.createNode("Shape");
let LineSet284 = browser.currentScene.createNode("LineSet");
LineSet284.vertexCount = new MFInt32(new int[2]);
let Coordinate285 = browser.currentScene.createNode("Coordinate");
Coordinate285.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368]);
LineSet284.coord = Coordinate285;

let ColorRGBA286 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA286.USE = "HAnimSegmentLineColorRGBA";
LineSet284.color = ColorRGBA286;

Shape283.geometry = LineSet284;

HAnimSegment279.children[2] = Shape283;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_talocrural'/> to <HAnimSite name='r_lateral_malleolus_pt'/>
let Shape287 = browser.currentScene.createNode("Shape");
let LineSet288 = browser.currentScene.createNode("LineSet");
LineSet288.vertexCount = new MFInt32(new int[2]);
let Coordinate289 = browser.currentScene.createNode("Coordinate");
Coordinate289.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075]);
LineSet288.coord = Coordinate289;

let ColorRGBA290 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA290.USE = "HAnimSiteLineColorRGBA";
LineSet288.color = ColorRGBA290;

Shape287.geometry = LineSet288;

HAnimSegment279.children[3] = Shape287;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_talocrural'/> to <HAnimSite name='r_medial_malleolus_pt'/>
let Shape291 = browser.currentScene.createNode("Shape");
let LineSet292 = browser.currentScene.createNode("LineSet");
LineSet292.vertexCount = new MFInt32(new int[2]);
let Coordinate293 = browser.currentScene.createNode("Coordinate");
Coordinate293.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928]);
LineSet292.coord = Coordinate293;

let ColorRGBA294 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA294.USE = "HAnimSiteLineColorRGBA";
LineSet292.color = ColorRGBA294;

Shape291.geometry = LineSet292;

HAnimSegment279.children[4] = Shape291;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_talocrural'/> to <HAnimSite name='r_sphyrion_pt'/>
let Shape295 = browser.currentScene.createNode("Shape");
let LineSet296 = browser.currentScene.createNode("LineSet");
LineSet296.vertexCount = new MFInt32(new int[2]);
let Coordinate297 = browser.currentScene.createNode("Coordinate");
Coordinate297.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002]);
LineSet296.coord = Coordinate297;

let ColorRGBA298 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA298.USE = "HAnimSiteLineColorRGBA";
LineSet296.color = ColorRGBA298;

Shape295.geometry = LineSet296;

HAnimSegment279.children[5] = Shape295;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_talocrural'/> to <HAnimSite name='r_calcaneous_post_pt'/>
let Shape299 = browser.currentScene.createNode("Shape");
let LineSet300 = browser.currentScene.createNode("LineSet");
LineSet300.vertexCount = new MFInt32(new int[2]);
let Coordinate301 = browser.currentScene.createNode("Coordinate");
Coordinate301.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221]);
LineSet300.coord = Coordinate301;

let ColorRGBA302 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA302.USE = "HAnimSiteLineColorRGBA";
LineSet300.color = ColorRGBA302;

Shape299.geometry = LineSet300;

HAnimSegment279.children[6] = Shape299;

let HAnimSite303 = browser.currentScene.createNode("HAnimSite");
HAnimSite303.name = "r_lateral_malleolus_pt_pt";
HAnimSite303.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite303.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
//HAnimSite visualization shape
let TouchSensor304 = browser.currentScene.createNode("TouchSensor");
TouchSensor304.description = "HAnimSite r_lateral_malleolus_pt";
HAnimSite303.children = new MFNode();

HAnimSite303.children[0] = TouchSensor304;

let Shape305 = browser.currentScene.createNode("Shape");
Shape305.USE = "HAnimSiteShape";
HAnimSite303.children[1] = Shape305;

HAnimSegment279.children[7] = HAnimSite303;

let HAnimSite306 = browser.currentScene.createNode("HAnimSite");
HAnimSite306.name = "r_medial_malleolus_pt_pt";
HAnimSite306.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite306.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
//HAnimSite visualization shape
let TouchSensor307 = browser.currentScene.createNode("TouchSensor");
TouchSensor307.description = "HAnimSite r_medial_malleolus_pt";
HAnimSite306.children = new MFNode();

HAnimSite306.children[0] = TouchSensor307;

let Shape308 = browser.currentScene.createNode("Shape");
Shape308.USE = "HAnimSiteShape";
HAnimSite306.children[1] = Shape308;

HAnimSegment279.children[8] = HAnimSite306;

let HAnimSite309 = browser.currentScene.createNode("HAnimSite");
HAnimSite309.name = "r_sphyrion_pt_pt";
HAnimSite309.DEF = "hanim_r_sphyrion_pt";
HAnimSite309.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
//HAnimSite visualization shape
let TouchSensor310 = browser.currentScene.createNode("TouchSensor");
TouchSensor310.description = "HAnimSite r_sphyrion_pt";
HAnimSite309.children = new MFNode();

HAnimSite309.children[0] = TouchSensor310;

let Shape311 = browser.currentScene.createNode("Shape");
Shape311.USE = "HAnimSiteShape";
HAnimSite309.children[1] = Shape311;

HAnimSegment279.children[9] = HAnimSite309;

let HAnimSite312 = browser.currentScene.createNode("HAnimSite");
HAnimSite312.name = "r_calcaneous_post_pt_pt";
HAnimSite312.DEF = "hanim_r_calcaneous_post_pt";
HAnimSite312.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
//HAnimSite visualization shape
let TouchSensor313 = browser.currentScene.createNode("TouchSensor");
TouchSensor313.description = "HAnimSite r_calcaneous_post_pt";
HAnimSite312.children = new MFNode();

HAnimSite312.children[0] = TouchSensor313;

let Shape314 = browser.currentScene.createNode("Shape");
Shape314.USE = "HAnimSiteShape";
HAnimSite312.children[1] = Shape314;

HAnimSegment279.children[10] = HAnimSite312;

HAnimJoint278.children = new MFNode();

HAnimJoint278.children[0] = HAnimSegment279;

let HAnimJoint315 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint315.name = "r_tarsometatarsal_2";
HAnimJoint315.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint315.center = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
let HAnimSegment316 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment316.name = "r_metatarsal_2";
HAnimSegment316.DEF = "hanim_r_metatarsal_2";
//Visualization sphere for <HAnimJoint name='r_tarsometatarsal_2'/> is placed within <HAnimSegment name='r_metatarsal_2'/>
let TouchSensor317 = browser.currentScene.createNode("TouchSensor");
TouchSensor317.description = "HAnimJoint r_tarsometatarsal_2, HAnimSegment r_metatarsal_2";
HAnimSegment316.children = new MFNode();

HAnimSegment316.children[0] = TouchSensor317;

let Transform318 = browser.currentScene.createNode("Transform");
Transform318.translation = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
let Shape319 = browser.currentScene.createNode("Shape");
Shape319.USE = "HAnimJointShape";
Transform318.children = new MFNode();

Transform318.children[0] = Shape319;

HAnimSegment316.children[1] = Transform318;

//HAnimSegment visualization line from current <HAnimJoint name='r_tarsometatarsal_2'/> to child <HAnimJoint name='r_metatarsophalangeal_2'/>
let Shape320 = browser.currentScene.createNode("Shape");
let LineSet321 = browser.currentScene.createNode("LineSet");
LineSet321.vertexCount = new MFInt32(new int[2]);
let Coordinate322 = browser.currentScene.createNode("Coordinate");
Coordinate322.point = new MFVec3f(new float[-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368]);
LineSet321.coord = Coordinate322;

let ColorRGBA323 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA323.USE = "HAnimSegmentLineColorRGBA";
LineSet321.color = ColorRGBA323;

Shape320.geometry = LineSet321;

HAnimSegment316.children[2] = Shape320;

HAnimJoint315.children = new MFNode();

HAnimJoint315.children[0] = HAnimSegment316;

let HAnimJoint324 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint324.name = "r_metatarsophalangeal_2";
HAnimJoint324.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint324.center = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
let HAnimSegment325 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment325.name = "r_tarsal_proximal_phalanx_2";
HAnimSegment325.DEF = "hanim_r_tarsal_proximal_phalanx_2";
//Visualization sphere for <HAnimJoint name='r_metatarsophalangeal_2'/> is placed within <HAnimSegment name='r_tarsal_proximal_phalanx_2'/>
let TouchSensor326 = browser.currentScene.createNode("TouchSensor");
TouchSensor326.description = "HAnimJoint r_metatarsophalangeal_2, HAnimSegment r_tarsal_proximal_phalanx_2";
HAnimSegment325.children = new MFNode();

HAnimSegment325.children[0] = TouchSensor326;

let Transform327 = browser.currentScene.createNode("Transform");
Transform327.translation = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
let Shape328 = browser.currentScene.createNode("Shape");
Shape328.USE = "HAnimJointShape";
Transform327.children = new MFNode();

Transform327.children[0] = Shape328;

HAnimSegment325.children[1] = Transform327;

//HAnimSegment visualization line from current <HAnimJoint name='r_metatarsophalangeal_2'/> to child <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/>
let Shape329 = browser.currentScene.createNode("Shape");
let LineSet330 = browser.currentScene.createNode("LineSet");
LineSet330.vertexCount = new MFInt32(new int[2]);
let Coordinate331 = browser.currentScene.createNode("Coordinate");
Coordinate331.point = new MFVec3f(new float[-0.1086,0.0001,0.0368,-0.1086,0,0.0762]);
LineSet330.coord = Coordinate331;

let ColorRGBA332 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA332.USE = "HAnimSegmentLineColorRGBA";
LineSet330.color = ColorRGBA332;

Shape329.geometry = LineSet330;

HAnimSegment325.children[2] = Shape329;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsophalangeal_2'/> to <HAnimSite name='r_metatarsal_pha1_pt'/>
let Shape333 = browser.currentScene.createNode("Shape");
let LineSet334 = browser.currentScene.createNode("LineSet");
LineSet334.vertexCount = new MFInt32(new int[2]);
let Coordinate335 = browser.currentScene.createNode("Coordinate");
Coordinate335.point = new MFVec3f(new float[-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127]);
LineSet334.coord = Coordinate335;

let ColorRGBA336 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA336.USE = "HAnimSiteLineColorRGBA";
LineSet334.color = ColorRGBA336;

Shape333.geometry = LineSet334;

HAnimSegment325.children[3] = Shape333;

let HAnimSite337 = browser.currentScene.createNode("HAnimSite");
HAnimSite337.name = "r_metatarsal_pha1_pt_pt";
HAnimSite337.DEF = "hanim_r_metatarsal_pha1_pt";
HAnimSite337.translation = new SFVec3f(new float[-0.0521,0.026,0.0127]);
//HAnimSite visualization shape
let TouchSensor338 = browser.currentScene.createNode("TouchSensor");
TouchSensor338.description = "HAnimSite r_metatarsal_pha1_pt";
HAnimSite337.children = new MFNode();

HAnimSite337.children[0] = TouchSensor338;

let Shape339 = browser.currentScene.createNode("Shape");
Shape339.USE = "HAnimSiteShape";
HAnimSite337.children[1] = Shape339;

HAnimSegment325.children[4] = HAnimSite337;

HAnimJoint324.children = new MFNode();

HAnimJoint324.children[0] = HAnimSegment325;

let HAnimJoint340 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint340.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint340.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint340.center = new SFVec3f(new float[-0.1086,0,0.0762]);
let HAnimSegment341 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment341.name = "r_tarsal_distal_phalanx_2";
HAnimSegment341.DEF = "hanim_r_tarsal_distal_phalanx_2";
//Visualization sphere for <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> is placed within <HAnimSegment name='r_tarsal_distal_phalanx_2'/>
let TouchSensor342 = browser.currentScene.createNode("TouchSensor");
TouchSensor342.description = "HAnimJoint r_tarsal_distal_interphalangeal_2, HAnimSegment r_tarsal_distal_phalanx_2";
HAnimSegment341.children = new MFNode();

HAnimSegment341.children[0] = TouchSensor342;

let Transform343 = browser.currentScene.createNode("Transform");
Transform343.translation = new SFVec3f(new float[-0.1086,0,0.0762]);
let Shape344 = browser.currentScene.createNode("Shape");
Shape344.USE = "HAnimJointShape";
Transform343.children = new MFNode();

Transform343.children[0] = Shape344;

HAnimSegment341.children[1] = Transform343;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='r_forefoot_tip'/>
let Shape345 = browser.currentScene.createNode("Shape");
let LineSet346 = browser.currentScene.createNode("LineSet");
LineSet346.vertexCount = new MFInt32(new int[2]);
let Coordinate347 = browser.currentScene.createNode("Coordinate");
Coordinate347.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.1043,0.0227,0.145]);
LineSet346.coord = Coordinate347;

let ColorRGBA348 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA348.USE = "HAnimSiteLineColorRGBA";
LineSet346.color = ColorRGBA348;

Shape345.geometry = LineSet346;

HAnimSegment341.children[2] = Shape345;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='r_metatarsal_pha5_pt'/>
let Shape349 = browser.currentScene.createNode("Shape");
let LineSet350 = browser.currentScene.createNode("LineSet");
LineSet350.vertexCount = new MFInt32(new int[2]);
let Coordinate351 = browser.currentScene.createNode("Coordinate");
Coordinate351.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.1523,0.0166,0.0895]);
LineSet350.coord = Coordinate351;

let ColorRGBA352 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA352.USE = "HAnimSiteLineColorRGBA";
LineSet350.color = ColorRGBA352;

Shape349.geometry = LineSet350;

HAnimSegment341.children[3] = Shape349;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='r_digit2_pt'/>
let Shape353 = browser.currentScene.createNode("Shape");
let LineSet354 = browser.currentScene.createNode("LineSet");
LineSet354.vertexCount = new MFInt32(new int[2]);
let Coordinate355 = browser.currentScene.createNode("Coordinate");
Coordinate355.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.0883,0.0134,0.1383]);
LineSet354.coord = Coordinate355;

let ColorRGBA356 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA356.USE = "HAnimSiteLineColorRGBA";
LineSet354.color = ColorRGBA356;

Shape353.geometry = LineSet354;

HAnimSegment341.children[4] = Shape353;

let HAnimSite357 = browser.currentScene.createNode("HAnimSite");
HAnimSite357.name = "r_forefoot_tip_pt";
HAnimSite357.DEF = "hanim_r_forefoot_tip";
HAnimSite357.translation = new SFVec3f(new float[-0.1043,0.0227,0.145]);
//HAnimSite visualization shape
let TouchSensor358 = browser.currentScene.createNode("TouchSensor");
TouchSensor358.description = "HAnimSite r_forefoot_tip";
HAnimSite357.children = new MFNode();

HAnimSite357.children[0] = TouchSensor358;

let Shape359 = browser.currentScene.createNode("Shape");
Shape359.USE = "HAnimSiteShape";
HAnimSite357.children[1] = Shape359;

HAnimSegment341.children[5] = HAnimSite357;

let HAnimSite360 = browser.currentScene.createNode("HAnimSite");
HAnimSite360.name = "r_metatarsal_pha5_pt_pt";
HAnimSite360.DEF = "hanim_r_metatarsal_pha5_pt";
HAnimSite360.translation = new SFVec3f(new float[-0.1523,0.0166,0.0895]);
//HAnimSite visualization shape
let TouchSensor361 = browser.currentScene.createNode("TouchSensor");
TouchSensor361.description = "HAnimSite r_metatarsal_pha5_pt";
HAnimSite360.children = new MFNode();

HAnimSite360.children[0] = TouchSensor361;

let Shape362 = browser.currentScene.createNode("Shape");
Shape362.USE = "HAnimSiteShape";
HAnimSite360.children[1] = Shape362;

HAnimSegment341.children[6] = HAnimSite360;

let HAnimSite363 = browser.currentScene.createNode("HAnimSite");
HAnimSite363.name = "r_digit2_pt_pt";
HAnimSite363.DEF = "hanim_r_digit2_pt";
HAnimSite363.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
//HAnimSite visualization shape
let TouchSensor364 = browser.currentScene.createNode("TouchSensor");
TouchSensor364.description = "HAnimSite r_digit2_pt";
HAnimSite363.children = new MFNode();

HAnimSite363.children[0] = TouchSensor364;

let Shape365 = browser.currentScene.createNode("Shape");
Shape365.USE = "HAnimSiteShape";
HAnimSite363.children[1] = Shape365;

HAnimSegment341.children[7] = HAnimSite363;

HAnimJoint340.children = new MFNode();

HAnimJoint340.children[0] = HAnimSegment341;

HAnimJoint324.children[1] = HAnimJoint340;

HAnimJoint315.children[1] = HAnimJoint324;

HAnimJoint278.children[1] = HAnimJoint315;

HAnimJoint269.children[1] = HAnimJoint278;

HAnimJoint239.children[1] = HAnimJoint269;

HAnimJoint32.children[2] = HAnimJoint239;

HAnimJoint16.children[1] = HAnimJoint32;

let HAnimJoint366 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint366.name = "vl5";
HAnimJoint366.DEF = "hanim_vl5";
HAnimJoint366.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
let HAnimSegment367 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment367.name = "l5";
HAnimSegment367.DEF = "hanim_l5";
//Visualization sphere for <HAnimJoint name='vl5'/> is placed within <HAnimSegment name='l5'/>
let TouchSensor368 = browser.currentScene.createNode("TouchSensor");
TouchSensor368.description = "HAnimJoint vl5, HAnimSegment l5";
HAnimSegment367.children = new MFNode();

HAnimSegment367.children[0] = TouchSensor368;

let Transform369 = browser.currentScene.createNode("Transform");
Transform369.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
let Shape370 = browser.currentScene.createNode("Shape");
Shape370.USE = "HAnimJointShape";
Transform369.children = new MFNode();

Transform369.children[0] = Shape370;

HAnimSegment367.children[1] = Transform369;

//HAnimSegment visualization line from current <HAnimJoint name='vl5'/> to child <HAnimJoint name='vl4'/>
let Shape371 = browser.currentScene.createNode("Shape");
let LineSet372 = browser.currentScene.createNode("LineSet");
LineSet372.vertexCount = new MFInt32(new int[2]);
let Coordinate373 = browser.currentScene.createNode("Coordinate");
Coordinate373.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet372.coord = Coordinate373;

let ColorRGBA374 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA374.USE = "HAnimSegmentLineColorRGBA";
LineSet372.color = ColorRGBA374;

Shape371.geometry = LineSet372;

HAnimSegment367.children[2] = Shape371;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='waist_preferred_post_pt'/>
let Shape375 = browser.currentScene.createNode("Shape");
let LineSet376 = browser.currentScene.createNode("LineSet");
LineSet376.vertexCount = new MFInt32(new int[2]);
let Coordinate377 = browser.currentScene.createNode("Coordinate");
Coordinate377.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0,1.0915,-0.1091]);
LineSet376.coord = Coordinate377;

let ColorRGBA378 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA378.USE = "HAnimSiteLineColorRGBA";
LineSet376.color = ColorRGBA378;

Shape375.geometry = LineSet376;

HAnimSegment367.children[3] = Shape375;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='navel_pt'/>
let Shape379 = browser.currentScene.createNode("Shape");
let LineSet380 = browser.currentScene.createNode("LineSet");
LineSet380.vertexCount = new MFInt32(new int[2]);
let Coordinate381 = browser.currentScene.createNode("Coordinate");
Coordinate381.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017]);
LineSet380.coord = Coordinate381;

let ColorRGBA382 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA382.USE = "HAnimSiteLineColorRGBA";
LineSet380.color = ColorRGBA382;

Shape379.geometry = LineSet380;

HAnimSegment367.children[4] = Shape379;

let HAnimSite383 = browser.currentScene.createNode("HAnimSite");
HAnimSite383.name = "waist_preferred_post_pt_pt";
HAnimSite383.DEF = "hanim_waist_preferred_post_pt";
HAnimSite383.translation = new SFVec3f(new float[0,1.0915,-0.1091]);
//HAnimSite visualization shape
let TouchSensor384 = browser.currentScene.createNode("TouchSensor");
TouchSensor384.description = "HAnimSite waist_preferred_post_pt";
HAnimSite383.children = new MFNode();

HAnimSite383.children[0] = TouchSensor384;

let Shape385 = browser.currentScene.createNode("Shape");
Shape385.USE = "HAnimSiteShape";
HAnimSite383.children[1] = Shape385;

HAnimSegment367.children[5] = HAnimSite383;

let HAnimSite386 = browser.currentScene.createNode("HAnimSite");
HAnimSite386.name = "navel_pt_pt";
HAnimSite386.DEF = "hanim_navel_pt";
HAnimSite386.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
//HAnimSite visualization shape
let TouchSensor387 = browser.currentScene.createNode("TouchSensor");
TouchSensor387.description = "HAnimSite navel_pt";
HAnimSite386.children = new MFNode();

HAnimSite386.children[0] = TouchSensor387;

let Shape388 = browser.currentScene.createNode("Shape");
Shape388.USE = "HAnimSiteShape";
HAnimSite386.children[1] = Shape388;

HAnimSegment367.children[6] = HAnimSite386;

HAnimJoint366.children = new MFNode();

HAnimJoint366.children[0] = HAnimSegment367;

let HAnimJoint389 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint389.name = "vl4";
HAnimJoint389.DEF = "hanim_vl4";
HAnimJoint389.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
let HAnimSegment390 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment390.name = "l4";
HAnimSegment390.DEF = "hanim_l4";
//Visualization sphere for <HAnimJoint name='vl4'/> is placed within <HAnimSegment name='l4'/>
let TouchSensor391 = browser.currentScene.createNode("TouchSensor");
TouchSensor391.description = "HAnimJoint vl4, HAnimSegment l4";
HAnimSegment390.children = new MFNode();

HAnimSegment390.children[0] = TouchSensor391;

let Transform392 = browser.currentScene.createNode("Transform");
Transform392.translation = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
let Shape393 = browser.currentScene.createNode("Shape");
Shape393.USE = "HAnimJointShape";
Transform392.children = new MFNode();

Transform392.children[0] = Shape393;

HAnimSegment390.children[1] = Transform392;

//HAnimSegment visualization line from current <HAnimJoint name='vl4'/> to child <HAnimJoint name='vl3'/>
let Shape394 = browser.currentScene.createNode("Shape");
let LineSet395 = browser.currentScene.createNode("LineSet");
LineSet395.vertexCount = new MFInt32(new int[2]);
let Coordinate396 = browser.currentScene.createNode("Coordinate");
Coordinate396.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet395.coord = Coordinate396;

let ColorRGBA397 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA397.USE = "HAnimSegmentLineColorRGBA";
LineSet395.color = ColorRGBA397;

Shape394.geometry = LineSet395;

HAnimSegment390.children[2] = Shape394;

HAnimJoint389.children = new MFNode();

HAnimJoint389.children[0] = HAnimSegment390;

let HAnimJoint398 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint398.name = "vl3";
HAnimJoint398.DEF = "hanim_vl3";
HAnimJoint398.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
let HAnimSegment399 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment399.name = "l3";
HAnimSegment399.DEF = "hanim_l3";
//Visualization sphere for <HAnimJoint name='vl3'/> is placed within <HAnimSegment name='l3'/>
let TouchSensor400 = browser.currentScene.createNode("TouchSensor");
TouchSensor400.description = "HAnimJoint vl3, HAnimSegment l3";
HAnimSegment399.children = new MFNode();

HAnimSegment399.children[0] = TouchSensor400;

let Transform401 = browser.currentScene.createNode("Transform");
Transform401.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
let Shape402 = browser.currentScene.createNode("Shape");
Shape402.USE = "HAnimJointShape";
Transform401.children = new MFNode();

Transform401.children[0] = Shape402;

HAnimSegment399.children[1] = Transform401;

//HAnimSegment visualization line from current <HAnimJoint name='vl3'/> to child <HAnimJoint name='vl2'/>
let Shape403 = browser.currentScene.createNode("Shape");
let LineSet404 = browser.currentScene.createNode("LineSet");
LineSet404.vertexCount = new MFInt32(new int[2]);
let Coordinate405 = browser.currentScene.createNode("Coordinate");
Coordinate405.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet404.coord = Coordinate405;

let ColorRGBA406 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA406.USE = "HAnimSegmentLineColorRGBA";
LineSet404.color = ColorRGBA406;

Shape403.geometry = LineSet404;

HAnimSegment399.children[2] = Shape403;

HAnimJoint398.children = new MFNode();

HAnimJoint398.children[0] = HAnimSegment399;

let HAnimJoint407 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint407.name = "vl2";
HAnimJoint407.DEF = "hanim_vl2";
HAnimJoint407.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
let HAnimSegment408 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment408.name = "l2";
HAnimSegment408.DEF = "hanim_l2";
//Visualization sphere for <HAnimJoint name='vl2'/> is placed within <HAnimSegment name='l2'/>
let TouchSensor409 = browser.currentScene.createNode("TouchSensor");
TouchSensor409.description = "HAnimJoint vl2, HAnimSegment l2";
HAnimSegment408.children = new MFNode();

HAnimSegment408.children[0] = TouchSensor409;

let Transform410 = browser.currentScene.createNode("Transform");
Transform410.translation = new SFVec3f(new float[0.0045,1.1546,-0.08]);
let Shape411 = browser.currentScene.createNode("Shape");
Shape411.USE = "HAnimJointShape";
Transform410.children = new MFNode();

Transform410.children[0] = Shape411;

HAnimSegment408.children[1] = Transform410;

//HAnimSegment visualization line from current <HAnimJoint name='vl2'/> to child <HAnimJoint name='vl1'/>
let Shape412 = browser.currentScene.createNode("Shape");
let LineSet413 = browser.currentScene.createNode("LineSet");
LineSet413.vertexCount = new MFInt32(new int[2]);
let Coordinate414 = browser.currentScene.createNode("Coordinate");
Coordinate414.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet413.coord = Coordinate414;

let ColorRGBA415 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA415.USE = "HAnimSegmentLineColorRGBA";
LineSet413.color = ColorRGBA415;

Shape412.geometry = LineSet413;

HAnimSegment408.children[2] = Shape412;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='r_rib10_pt'/>
let Shape416 = browser.currentScene.createNode("Shape");
let LineSet417 = browser.currentScene.createNode("LineSet");
LineSet417.vertexCount = new MFInt32(new int[2]);
let Coordinate418 = browser.currentScene.createNode("Coordinate");
Coordinate418.point = new MFVec3f(new float[0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016]);
LineSet417.coord = Coordinate418;

let ColorRGBA419 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA419.USE = "HAnimSiteLineColorRGBA";
LineSet417.color = ColorRGBA419;

Shape416.geometry = LineSet417;

HAnimSegment408.children[3] = Shape416;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='l_rib10_pt'/>
let Shape420 = browser.currentScene.createNode("Shape");
let LineSet421 = browser.currentScene.createNode("LineSet");
LineSet421.vertexCount = new MFInt32(new int[2]);
let Coordinate422 = browser.currentScene.createNode("Coordinate");
Coordinate422.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0871,1.1925,0.0992]);
LineSet421.coord = Coordinate422;

let ColorRGBA423 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA423.USE = "HAnimSiteLineColorRGBA";
LineSet421.color = ColorRGBA423;

Shape420.geometry = LineSet421;

HAnimSegment408.children[4] = Shape420;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='rib10_midspine_pt'/>
let Shape424 = browser.currentScene.createNode("Shape");
let LineSet425 = browser.currentScene.createNode("LineSet");
LineSet425.vertexCount = new MFInt32(new int[2]);
let Coordinate426 = browser.currentScene.createNode("Coordinate");
Coordinate426.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113]);
LineSet425.coord = Coordinate426;

let ColorRGBA427 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA427.USE = "HAnimSiteLineColorRGBA";
LineSet425.color = ColorRGBA427;

Shape424.geometry = LineSet425;

HAnimSegment408.children[5] = Shape424;

let HAnimSite428 = browser.currentScene.createNode("HAnimSite");
HAnimSite428.name = "r_rib10_pt_pt";
HAnimSite428.DEF = "hanim_r_rib10_pt";
HAnimSite428.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
//HAnimSite visualization shape
let TouchSensor429 = browser.currentScene.createNode("TouchSensor");
TouchSensor429.description = "HAnimSite r_rib10_pt";
HAnimSite428.children = new MFNode();

HAnimSite428.children[0] = TouchSensor429;

let Shape430 = browser.currentScene.createNode("Shape");
Shape430.USE = "HAnimSiteShape";
HAnimSite428.children[1] = Shape430;

HAnimSegment408.children[6] = HAnimSite428;

let HAnimSite431 = browser.currentScene.createNode("HAnimSite");
HAnimSite431.name = "l_rib10_pt_pt";
HAnimSite431.DEF = "hanim_l_rib10_pt";
HAnimSite431.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
//HAnimSite visualization shape
let TouchSensor432 = browser.currentScene.createNode("TouchSensor");
TouchSensor432.description = "HAnimSite l_rib10_pt";
HAnimSite431.children = new MFNode();

HAnimSite431.children[0] = TouchSensor432;

let Shape433 = browser.currentScene.createNode("Shape");
Shape433.USE = "HAnimSiteShape";
HAnimSite431.children[1] = Shape433;

HAnimSegment408.children[7] = HAnimSite431;

let HAnimSite434 = browser.currentScene.createNode("HAnimSite");
HAnimSite434.name = "rib10_midspine_pt_pt";
HAnimSite434.DEF = "hanim_rib10_midspine_pt";
HAnimSite434.translation = new SFVec3f(new float[0.0049,1.1908,-0.1113]);
//HAnimSite visualization shape
let TouchSensor435 = browser.currentScene.createNode("TouchSensor");
TouchSensor435.description = "HAnimSite rib10_midspine_pt";
HAnimSite434.children = new MFNode();

HAnimSite434.children[0] = TouchSensor435;

let Shape436 = browser.currentScene.createNode("Shape");
Shape436.USE = "HAnimSiteShape";
HAnimSite434.children[1] = Shape436;

HAnimSegment408.children[8] = HAnimSite434;

HAnimJoint407.children = new MFNode();

HAnimJoint407.children[0] = HAnimSegment408;

let HAnimJoint437 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint437.name = "vl1";
HAnimJoint437.DEF = "hanim_vl1";
HAnimJoint437.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
let HAnimSegment438 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment438.name = "l1";
HAnimSegment438.DEF = "hanim_l1";
//Visualization sphere for <HAnimJoint name='vl1'/> is placed within <HAnimSegment name='l1'/>
let TouchSensor439 = browser.currentScene.createNode("TouchSensor");
TouchSensor439.description = "HAnimJoint vl1, HAnimSegment l1";
HAnimSegment438.children = new MFNode();

HAnimSegment438.children[0] = TouchSensor439;

let Transform440 = browser.currentScene.createNode("Transform");
Transform440.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
let Shape441 = browser.currentScene.createNode("Shape");
Shape441.USE = "HAnimJointShape";
Transform440.children = new MFNode();

Transform440.children[0] = Shape441;

HAnimSegment438.children[1] = Transform440;

//HAnimSegment visualization line from current <HAnimJoint name='vl1'/> to child <HAnimJoint name='vt12'/>
let Shape442 = browser.currentScene.createNode("Shape");
let LineSet443 = browser.currentScene.createNode("LineSet");
LineSet443.vertexCount = new MFInt32(new int[2]);
let Coordinate444 = browser.currentScene.createNode("Coordinate");
Coordinate444.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet443.coord = Coordinate444;

let ColorRGBA445 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA445.USE = "HAnimSegmentLineColorRGBA";
LineSet443.color = ColorRGBA445;

Shape442.geometry = LineSet443;

HAnimSegment438.children[2] = Shape442;

HAnimJoint437.children = new MFNode();

HAnimJoint437.children[0] = HAnimSegment438;

let HAnimJoint446 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint446.name = "vt12";
HAnimJoint446.DEF = "hanim_vt12";
HAnimJoint446.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
let HAnimSegment447 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment447.name = "t12";
HAnimSegment447.DEF = "hanim_t12";
//Visualization sphere for <HAnimJoint name='vt12'/> is placed within <HAnimSegment name='t12'/>
let TouchSensor448 = browser.currentScene.createNode("TouchSensor");
TouchSensor448.description = "HAnimJoint vt12, HAnimSegment t12";
HAnimSegment447.children = new MFNode();

HAnimSegment447.children[0] = TouchSensor448;

let Transform449 = browser.currentScene.createNode("Transform");
Transform449.translation = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
let Shape450 = browser.currentScene.createNode("Shape");
Shape450.USE = "HAnimJointShape";
Transform449.children = new MFNode();

Transform449.children[0] = Shape450;

HAnimSegment447.children[1] = Transform449;

//HAnimSegment visualization line from current <HAnimJoint name='vt12'/> to child <HAnimJoint name='vt11'/>
let Shape451 = browser.currentScene.createNode("Shape");
let LineSet452 = browser.currentScene.createNode("LineSet");
LineSet452.vertexCount = new MFInt32(new int[2]);
let Coordinate453 = browser.currentScene.createNode("Coordinate");
Coordinate453.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet452.coord = Coordinate453;

let ColorRGBA454 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA454.USE = "HAnimSegmentLineColorRGBA";
LineSet452.color = ColorRGBA454;

Shape451.geometry = LineSet452;

HAnimSegment447.children[2] = Shape451;

HAnimJoint446.children = new MFNode();

HAnimJoint446.children[0] = HAnimSegment447;

let HAnimJoint455 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint455.name = "vt11";
HAnimJoint455.DEF = "hanim_vt11";
HAnimJoint455.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
let HAnimSegment456 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment456.name = "t11";
HAnimSegment456.DEF = "hanim_t11";
//Visualization sphere for <HAnimJoint name='vt11'/> is placed within <HAnimSegment name='t11'/>
let TouchSensor457 = browser.currentScene.createNode("TouchSensor");
TouchSensor457.description = "HAnimJoint vt11, HAnimSegment t11";
HAnimSegment456.children = new MFNode();

HAnimSegment456.children[0] = TouchSensor457;

let Transform458 = browser.currentScene.createNode("Transform");
Transform458.translation = new SFVec3f(new float[0.0053,1.2679,-0.081]);
let Shape459 = browser.currentScene.createNode("Shape");
Shape459.USE = "HAnimJointShape";
Transform458.children = new MFNode();

Transform458.children[0] = Shape459;

HAnimSegment456.children[1] = Transform458;

//HAnimSegment visualization line from current <HAnimJoint name='vt11'/> to child <HAnimJoint name='vt10'/>
let Shape460 = browser.currentScene.createNode("Shape");
let LineSet461 = browser.currentScene.createNode("LineSet");
LineSet461.vertexCount = new MFInt32(new int[2]);
let Coordinate462 = browser.currentScene.createNode("Coordinate");
Coordinate462.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet461.coord = Coordinate462;

let ColorRGBA463 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA463.USE = "HAnimSegmentLineColorRGBA";
LineSet461.color = ColorRGBA463;

Shape460.geometry = LineSet461;

HAnimSegment456.children[2] = Shape460;

HAnimJoint455.children = new MFNode();

HAnimJoint455.children[0] = HAnimSegment456;

let HAnimJoint464 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint464.name = "vt10";
HAnimJoint464.DEF = "hanim_vt10";
HAnimJoint464.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
let HAnimSegment465 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment465.name = "t10";
HAnimSegment465.DEF = "hanim_t10";
//Visualization sphere for <HAnimJoint name='vt10'/> is placed within <HAnimSegment name='t10'/>
let TouchSensor466 = browser.currentScene.createNode("TouchSensor");
TouchSensor466.description = "HAnimJoint vt10, HAnimSegment t10";
HAnimSegment465.children = new MFNode();

HAnimSegment465.children[0] = TouchSensor466;

let Transform467 = browser.currentScene.createNode("Transform");
Transform467.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
let Shape468 = browser.currentScene.createNode("Shape");
Shape468.USE = "HAnimJointShape";
Transform467.children = new MFNode();

Transform467.children[0] = Shape468;

HAnimSegment465.children[1] = Transform467;

//HAnimSegment visualization line from current <HAnimJoint name='vt10'/> to child <HAnimJoint name='vt9'/>
let Shape469 = browser.currentScene.createNode("Shape");
let LineSet470 = browser.currentScene.createNode("LineSet");
LineSet470.vertexCount = new MFInt32(new int[2]);
let Coordinate471 = browser.currentScene.createNode("Coordinate");
Coordinate471.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet470.coord = Coordinate471;

let ColorRGBA472 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA472.USE = "HAnimSegmentLineColorRGBA";
LineSet470.color = ColorRGBA472;

Shape469.geometry = LineSet470;

HAnimSegment465.children[2] = Shape469;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt10'/> to <HAnimSite name='substernale_pt'/>
let Shape473 = browser.currentScene.createNode("Shape");
let LineSet474 = browser.currentScene.createNode("LineSet");
LineSet474.vertexCount = new MFInt32(new int[2]);
let Coordinate475 = browser.currentScene.createNode("Coordinate");
Coordinate475.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147]);
LineSet474.coord = Coordinate475;

let ColorRGBA476 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA476.USE = "HAnimSiteLineColorRGBA";
LineSet474.color = ColorRGBA476;

Shape473.geometry = LineSet474;

HAnimSegment465.children[3] = Shape473;

let HAnimSite477 = browser.currentScene.createNode("HAnimSite");
HAnimSite477.name = "substernale_pt_pt";
HAnimSite477.DEF = "hanim_substernale_pt";
HAnimSite477.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
//HAnimSite visualization shape
let TouchSensor478 = browser.currentScene.createNode("TouchSensor");
TouchSensor478.description = "HAnimSite substernale_pt";
HAnimSite477.children = new MFNode();

HAnimSite477.children[0] = TouchSensor478;

let Shape479 = browser.currentScene.createNode("Shape");
Shape479.USE = "HAnimSiteShape";
HAnimSite477.children[1] = Shape479;

HAnimSegment465.children[4] = HAnimSite477;

HAnimJoint464.children = new MFNode();

HAnimJoint464.children[0] = HAnimSegment465;

let HAnimJoint480 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint480.name = "vt9";
HAnimJoint480.DEF = "hanim_vt9";
HAnimJoint480.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
let HAnimSegment481 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment481.name = "t9";
HAnimSegment481.DEF = "hanim_t9";
//Visualization sphere for <HAnimJoint name='vt9'/> is placed within <HAnimSegment name='t9'/>
let TouchSensor482 = browser.currentScene.createNode("TouchSensor");
TouchSensor482.description = "HAnimJoint vt9, HAnimSegment t9";
HAnimSegment481.children = new MFNode();

HAnimSegment481.children[0] = TouchSensor482;

let Transform483 = browser.currentScene.createNode("Transform");
Transform483.translation = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
let Shape484 = browser.currentScene.createNode("Shape");
Shape484.USE = "HAnimJointShape";
Transform483.children = new MFNode();

Transform483.children[0] = Shape484;

HAnimSegment481.children[1] = Transform483;

//HAnimSegment visualization line from current <HAnimJoint name='vt9'/> to child <HAnimJoint name='vt8'/>
let Shape485 = browser.currentScene.createNode("Shape");
let LineSet486 = browser.currentScene.createNode("LineSet");
LineSet486.vertexCount = new MFInt32(new int[2]);
let Coordinate487 = browser.currentScene.createNode("Coordinate");
Coordinate487.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet486.coord = Coordinate487;

let ColorRGBA488 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA488.USE = "HAnimSegmentLineColorRGBA";
LineSet486.color = ColorRGBA488;

Shape485.geometry = LineSet486;

HAnimSegment481.children[2] = Shape485;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='r_thelion_pt'/>
let Shape489 = browser.currentScene.createNode("Shape");
let LineSet490 = browser.currentScene.createNode("LineSet");
LineSet490.vertexCount = new MFInt32(new int[2]);
let Coordinate491 = browser.currentScene.createNode("Coordinate");
Coordinate491.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217]);
LineSet490.coord = Coordinate491;

let ColorRGBA492 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA492.USE = "HAnimSiteLineColorRGBA";
LineSet490.color = ColorRGBA492;

Shape489.geometry = LineSet490;

HAnimSegment481.children[3] = Shape489;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='l_thelion_pt'/>
let Shape493 = browser.currentScene.createNode("Shape");
let LineSet494 = browser.currentScene.createNode("LineSet");
LineSet494.vertexCount = new MFInt32(new int[2]);
let Coordinate495 = browser.currentScene.createNode("Coordinate");
Coordinate495.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192]);
LineSet494.coord = Coordinate495;

let ColorRGBA496 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA496.USE = "HAnimSiteLineColorRGBA";
LineSet494.color = ColorRGBA496;

Shape493.geometry = LineSet494;

HAnimSegment481.children[4] = Shape493;

let HAnimSite497 = browser.currentScene.createNode("HAnimSite");
HAnimSite497.name = "r_thelion_pt_pt";
HAnimSite497.DEF = "hanim_r_thelion_pt";
HAnimSite497.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
//HAnimSite visualization shape
let TouchSensor498 = browser.currentScene.createNode("TouchSensor");
TouchSensor498.description = "HAnimSite r_thelion_pt";
HAnimSite497.children = new MFNode();

HAnimSite497.children[0] = TouchSensor498;

let Shape499 = browser.currentScene.createNode("Shape");
Shape499.USE = "HAnimSiteShape";
HAnimSite497.children[1] = Shape499;

HAnimSegment481.children[5] = HAnimSite497;

let HAnimSite500 = browser.currentScene.createNode("HAnimSite");
HAnimSite500.name = "l_thelion_pt_pt";
HAnimSite500.DEF = "hanim_l_thelion_pt";
HAnimSite500.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
//HAnimSite visualization shape
let TouchSensor501 = browser.currentScene.createNode("TouchSensor");
TouchSensor501.description = "HAnimSite l_thelion_pt";
HAnimSite500.children = new MFNode();

HAnimSite500.children[0] = TouchSensor501;

let Shape502 = browser.currentScene.createNode("Shape");
Shape502.USE = "HAnimSiteShape";
HAnimSite500.children[1] = Shape502;

HAnimSegment481.children[6] = HAnimSite500;

HAnimJoint480.children = new MFNode();

HAnimJoint480.children[0] = HAnimSegment481;

let HAnimJoint503 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint503.name = "vt8";
HAnimJoint503.DEF = "hanim_vt8";
HAnimJoint503.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
let HAnimSegment504 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment504.name = "t8";
HAnimSegment504.DEF = "hanim_t8";
//Visualization sphere for <HAnimJoint name='vt8'/> is placed within <HAnimSegment name='t8'/>
let TouchSensor505 = browser.currentScene.createNode("TouchSensor");
TouchSensor505.description = "HAnimJoint vt8, HAnimSegment t8";
HAnimSegment504.children = new MFNode();

HAnimSegment504.children[0] = TouchSensor505;

let Transform506 = browser.currentScene.createNode("Transform");
Transform506.translation = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
let Shape507 = browser.currentScene.createNode("Shape");
Shape507.USE = "HAnimJointShape";
Transform506.children = new MFNode();

Transform506.children[0] = Shape507;

HAnimSegment504.children[1] = Transform506;

//HAnimSegment visualization line from current <HAnimJoint name='vt8'/> to child <HAnimJoint name='vt7'/>
let Shape508 = browser.currentScene.createNode("Shape");
let LineSet509 = browser.currentScene.createNode("LineSet");
LineSet509.vertexCount = new MFInt32(new int[2]);
let Coordinate510 = browser.currentScene.createNode("Coordinate");
Coordinate510.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet509.coord = Coordinate510;

let ColorRGBA511 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA511.USE = "HAnimSegmentLineColorRGBA";
LineSet509.color = ColorRGBA511;

Shape508.geometry = LineSet509;

HAnimSegment504.children[2] = Shape508;

HAnimJoint503.children = new MFNode();

HAnimJoint503.children[0] = HAnimSegment504;

let HAnimJoint512 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint512.name = "vt7";
HAnimJoint512.DEF = "hanim_vt7";
HAnimJoint512.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
let HAnimSegment513 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment513.name = "t7";
HAnimSegment513.DEF = "hanim_t7";
//Visualization sphere for <HAnimJoint name='vt7'/> is placed within <HAnimSegment name='t7'/>
let TouchSensor514 = browser.currentScene.createNode("TouchSensor");
TouchSensor514.description = "HAnimJoint vt7, HAnimSegment t7";
HAnimSegment513.children = new MFNode();

HAnimSegment513.children[0] = TouchSensor514;

let Transform515 = browser.currentScene.createNode("Transform");
Transform515.translation = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
let Shape516 = browser.currentScene.createNode("Shape");
Shape516.USE = "HAnimJointShape";
Transform515.children = new MFNode();

Transform515.children[0] = Shape516;

HAnimSegment513.children[1] = Transform515;

//HAnimSegment visualization line from current <HAnimJoint name='vt7'/> to child <HAnimJoint name='vt6'/>
let Shape517 = browser.currentScene.createNode("Shape");
let LineSet518 = browser.currentScene.createNode("LineSet");
LineSet518.vertexCount = new MFInt32(new int[2]);
let Coordinate519 = browser.currentScene.createNode("Coordinate");
Coordinate519.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet518.coord = Coordinate519;

let ColorRGBA520 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA520.USE = "HAnimSegmentLineColorRGBA";
LineSet518.color = ColorRGBA520;

Shape517.geometry = LineSet518;

HAnimSegment513.children[2] = Shape517;

HAnimJoint512.children = new MFNode();

HAnimJoint512.children[0] = HAnimSegment513;

let HAnimJoint521 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint521.name = "vt6";
HAnimJoint521.DEF = "hanim_vt6";
HAnimJoint521.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
let HAnimSegment522 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment522.name = "t6";
HAnimSegment522.DEF = "hanim_t6";
//Visualization sphere for <HAnimJoint name='vt6'/> is placed within <HAnimSegment name='t6'/>
let TouchSensor523 = browser.currentScene.createNode("TouchSensor");
TouchSensor523.description = "HAnimJoint vt6, HAnimSegment t6";
HAnimSegment522.children = new MFNode();

HAnimSegment522.children[0] = TouchSensor523;

let Transform524 = browser.currentScene.createNode("Transform");
Transform524.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
let Shape525 = browser.currentScene.createNode("Shape");
Shape525.USE = "HAnimJointShape";
Transform524.children = new MFNode();

Transform524.children[0] = Shape525;

HAnimSegment522.children[1] = Transform524;

//HAnimSegment visualization line from current <HAnimJoint name='vt6'/> to child <HAnimJoint name='vt5'/>
let Shape526 = browser.currentScene.createNode("Shape");
let LineSet527 = browser.currentScene.createNode("LineSet");
LineSet527.vertexCount = new MFInt32(new int[2]);
let Coordinate528 = browser.currentScene.createNode("Coordinate");
Coordinate528.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet527.coord = Coordinate528;

let ColorRGBA529 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA529.USE = "HAnimSegmentLineColorRGBA";
LineSet527.color = ColorRGBA529;

Shape526.geometry = LineSet527;

HAnimSegment522.children[2] = Shape526;

HAnimJoint521.children = new MFNode();

HAnimJoint521.children[0] = HAnimSegment522;

let HAnimJoint530 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint530.name = "vt5";
HAnimJoint530.DEF = "hanim_vt5";
HAnimJoint530.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
let HAnimSegment531 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment531.name = "t5";
HAnimSegment531.DEF = "hanim_t5";
//Visualization sphere for <HAnimJoint name='vt5'/> is placed within <HAnimSegment name='t5'/>
let TouchSensor532 = browser.currentScene.createNode("TouchSensor");
TouchSensor532.description = "HAnimJoint vt5, HAnimSegment t5";
HAnimSegment531.children = new MFNode();

HAnimSegment531.children[0] = TouchSensor532;

let Transform533 = browser.currentScene.createNode("Transform");
Transform533.translation = new SFVec3f(new float[0.006,1.4102,-0.0745]);
let Shape534 = browser.currentScene.createNode("Shape");
Shape534.USE = "HAnimJointShape";
Transform533.children = new MFNode();

Transform533.children[0] = Shape534;

HAnimSegment531.children[1] = Transform533;

//HAnimSegment visualization line from current <HAnimJoint name='vt5'/> to child <HAnimJoint name='vt4'/>
let Shape535 = browser.currentScene.createNode("Shape");
let LineSet536 = browser.currentScene.createNode("LineSet");
LineSet536.vertexCount = new MFInt32(new int[2]);
let Coordinate537 = browser.currentScene.createNode("Coordinate");
Coordinate537.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet536.coord = Coordinate537;

let ColorRGBA538 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA538.USE = "HAnimSegmentLineColorRGBA";
LineSet536.color = ColorRGBA538;

Shape535.geometry = LineSet536;

HAnimSegment531.children[2] = Shape535;

HAnimJoint530.children = new MFNode();

HAnimJoint530.children[0] = HAnimSegment531;

let HAnimJoint539 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint539.name = "vt4";
HAnimJoint539.DEF = "hanim_vt4";
HAnimJoint539.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
let HAnimSegment540 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment540.name = "t4";
HAnimSegment540.DEF = "hanim_t4";
//Visualization sphere for <HAnimJoint name='vt4'/> is placed within <HAnimSegment name='t4'/>
let TouchSensor541 = browser.currentScene.createNode("TouchSensor");
TouchSensor541.description = "HAnimJoint vt4, HAnimSegment t4";
HAnimSegment540.children = new MFNode();

HAnimSegment540.children[0] = TouchSensor541;

let Transform542 = browser.currentScene.createNode("Transform");
Transform542.translation = new SFVec3f(new float[0.0061,1.432,-0.0675]);
let Shape543 = browser.currentScene.createNode("Shape");
Shape543.USE = "HAnimJointShape";
Transform542.children = new MFNode();

Transform542.children[0] = Shape543;

HAnimSegment540.children[1] = Transform542;

//HAnimSegment visualization line from current <HAnimJoint name='vt4'/> to child <HAnimJoint name='vt3'/>
let Shape544 = browser.currentScene.createNode("Shape");
let LineSet545 = browser.currentScene.createNode("LineSet");
LineSet545.vertexCount = new MFInt32(new int[2]);
let Coordinate546 = browser.currentScene.createNode("Coordinate");
Coordinate546.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet545.coord = Coordinate546;

let ColorRGBA547 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA547.USE = "HAnimSegmentLineColorRGBA";
LineSet545.color = ColorRGBA547;

Shape544.geometry = LineSet545;

HAnimSegment540.children[2] = Shape544;

HAnimJoint539.children = new MFNode();

HAnimJoint539.children[0] = HAnimSegment540;

let HAnimJoint548 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint548.name = "vt3";
HAnimJoint548.DEF = "hanim_vt3";
HAnimJoint548.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
let HAnimSegment549 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment549.name = "t3";
HAnimSegment549.DEF = "hanim_t3";
//Visualization sphere for <HAnimJoint name='vt3'/> is placed within <HAnimSegment name='t3'/>
let TouchSensor550 = browser.currentScene.createNode("TouchSensor");
TouchSensor550.description = "HAnimJoint vt3, HAnimSegment t3";
HAnimSegment549.children = new MFNode();

HAnimSegment549.children[0] = TouchSensor550;

let Transform551 = browser.currentScene.createNode("Transform");
Transform551.translation = new SFVec3f(new float[0.0062,1.4583,-0.057]);
let Shape552 = browser.currentScene.createNode("Shape");
Shape552.USE = "HAnimJointShape";
Transform551.children = new MFNode();

Transform551.children[0] = Shape552;

HAnimSegment549.children[1] = Transform551;

//HAnimSegment visualization line from current <HAnimJoint name='vt3'/> to child <HAnimJoint name='vt2'/>
let Shape553 = browser.currentScene.createNode("Shape");
let LineSet554 = browser.currentScene.createNode("LineSet");
LineSet554.vertexCount = new MFInt32(new int[2]);
let Coordinate555 = browser.currentScene.createNode("Coordinate");
Coordinate555.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet554.coord = Coordinate555;

let ColorRGBA556 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA556.USE = "HAnimSegmentLineColorRGBA";
LineSet554.color = ColorRGBA556;

Shape553.geometry = LineSet554;

HAnimSegment549.children[2] = Shape553;

HAnimJoint548.children = new MFNode();

HAnimJoint548.children[0] = HAnimSegment549;

let HAnimJoint557 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint557.name = "vt2";
HAnimJoint557.DEF = "hanim_vt2";
HAnimJoint557.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
let HAnimSegment558 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment558.name = "t2";
HAnimSegment558.DEF = "hanim_t2";
//Visualization sphere for <HAnimJoint name='vt2'/> is placed within <HAnimSegment name='t2'/>
let TouchSensor559 = browser.currentScene.createNode("TouchSensor");
TouchSensor559.description = "HAnimJoint vt2, HAnimSegment t2";
HAnimSegment558.children = new MFNode();

HAnimSegment558.children[0] = TouchSensor559;

let Transform560 = browser.currentScene.createNode("Transform");
Transform560.translation = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
let Shape561 = browser.currentScene.createNode("Shape");
Shape561.USE = "HAnimJointShape";
Transform560.children = new MFNode();

Transform560.children[0] = Shape561;

HAnimSegment558.children[1] = Transform560;

//HAnimSegment visualization line from current <HAnimJoint name='vt2'/> to child <HAnimJoint name='vt1'/>
let Shape562 = browser.currentScene.createNode("Shape");
let LineSet563 = browser.currentScene.createNode("LineSet");
LineSet563.vertexCount = new MFInt32(new int[2]);
let Coordinate564 = browser.currentScene.createNode("Coordinate");
Coordinate564.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet563.coord = Coordinate564;

let ColorRGBA565 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA565.USE = "HAnimSegmentLineColorRGBA";
LineSet563.color = ColorRGBA565;

Shape562.geometry = LineSet563;

HAnimSegment558.children[2] = Shape562;

HAnimJoint557.children = new MFNode();

HAnimJoint557.children[0] = HAnimSegment558;

let HAnimJoint566 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint566.name = "vt1";
HAnimJoint566.DEF = "hanim_vt1";
HAnimJoint566.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
let HAnimSegment567 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment567.name = "t1";
HAnimSegment567.DEF = "hanim_t1";
//Visualization sphere for <HAnimJoint name='vt1'/> is placed within <HAnimSegment name='t1'/>
let TouchSensor568 = browser.currentScene.createNode("TouchSensor");
TouchSensor568.description = "HAnimJoint vt1, HAnimSegment t1";
HAnimSegment567.children = new MFNode();

HAnimSegment567.children[0] = TouchSensor568;

let Transform569 = browser.currentScene.createNode("Transform");
Transform569.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
let Shape570 = browser.currentScene.createNode("Shape");
Shape570.USE = "HAnimJointShape";
Transform569.children = new MFNode();

Transform569.children[0] = Shape570;

HAnimSegment567.children[1] = Transform569;

//HAnimSegment visualization line from current <HAnimJoint name='vt1'/> to child <HAnimJoint name='vc7'/>
let Shape571 = browser.currentScene.createNode("Shape");
let LineSet572 = browser.currentScene.createNode("LineSet");
LineSet572.vertexCount = new MFInt32(new int[2]);
let Coordinate573 = browser.currentScene.createNode("Coordinate");
Coordinate573.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet572.coord = Coordinate573;

let ColorRGBA574 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA574.USE = "HAnimSegmentLineColorRGBA";
LineSet572.color = ColorRGBA574;

Shape571.geometry = LineSet572;

HAnimSegment567.children[2] = Shape571;

//HAnimSegment visualization line from current <HAnimJoint name='vt1'/> to child <HAnimJoint name='l_sternoclavicular'/>
let Shape575 = browser.currentScene.createNode("Shape");
let LineSet576 = browser.currentScene.createNode("LineSet");
LineSet576.vertexCount = new MFInt32(new int[2]);
let Coordinate577 = browser.currentScene.createNode("Coordinate");
Coordinate577.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet576.coord = Coordinate577;

let ColorRGBA578 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA578.USE = "HAnimSegmentLineColorRGBA";
LineSet576.color = ColorRGBA578;

Shape575.geometry = LineSet576;

HAnimSegment567.children[3] = Shape575;

//HAnimSegment visualization line from current <HAnimJoint name='vt1'/> to child <HAnimJoint name='r_sternoclavicular'/>
let Shape579 = browser.currentScene.createNode("Shape");
let LineSet580 = browser.currentScene.createNode("LineSet");
LineSet580.vertexCount = new MFInt32(new int[2]);
let Coordinate581 = browser.currentScene.createNode("Coordinate");
Coordinate581.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353]);
LineSet580.coord = Coordinate581;

let ColorRGBA582 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA582.USE = "HAnimSegmentLineColorRGBA";
LineSet580.color = ColorRGBA582;

Shape579.geometry = LineSet580;

HAnimSegment567.children[4] = Shape579;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='suprasternale_pt'/>
let Shape583 = browser.currentScene.createNode("Shape");
let LineSet584 = browser.currentScene.createNode("LineSet");
LineSet584.vertexCount = new MFInt32(new int[2]);
let Coordinate585 = browser.currentScene.createNode("Coordinate");
Coordinate585.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551]);
LineSet584.coord = Coordinate585;

let ColorRGBA586 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA586.USE = "HAnimSiteLineColorRGBA";
LineSet584.color = ColorRGBA586;

Shape583.geometry = LineSet584;

HAnimSegment567.children[5] = Shape583;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='cervicale_pt'/>
let Shape587 = browser.currentScene.createNode("Shape");
let LineSet588 = browser.currentScene.createNode("LineSet");
LineSet588.vertexCount = new MFInt32(new int[2]);
let Coordinate589 = browser.currentScene.createNode("Coordinate");
Coordinate589.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815]);
LineSet588.coord = Coordinate589;

let ColorRGBA590 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA590.USE = "HAnimSiteLineColorRGBA";
LineSet588.color = ColorRGBA590;

Shape587.geometry = LineSet588;

HAnimSegment567.children[6] = Shape587;

let HAnimSite591 = browser.currentScene.createNode("HAnimSite");
HAnimSite591.name = "suprasternale_pt_pt";
HAnimSite591.DEF = "hanim_suprasternale_pt";
HAnimSite591.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
//HAnimSite visualization shape
let TouchSensor592 = browser.currentScene.createNode("TouchSensor");
TouchSensor592.description = "HAnimSite suprasternale_pt";
HAnimSite591.children = new MFNode();

HAnimSite591.children[0] = TouchSensor592;

let Shape593 = browser.currentScene.createNode("Shape");
Shape593.USE = "HAnimSiteShape";
HAnimSite591.children[1] = Shape593;

HAnimSegment567.children[7] = HAnimSite591;

let HAnimSite594 = browser.currentScene.createNode("HAnimSite");
HAnimSite594.name = "cervicale_pt_pt";
HAnimSite594.DEF = "hanim_cervicale_pt";
HAnimSite594.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
//HAnimSite visualization shape
let TouchSensor595 = browser.currentScene.createNode("TouchSensor");
TouchSensor595.description = "HAnimSite cervicale_pt";
HAnimSite594.children = new MFNode();

HAnimSite594.children[0] = TouchSensor595;

let Shape596 = browser.currentScene.createNode("Shape");
Shape596.USE = "HAnimSiteShape";
HAnimSite594.children[1] = Shape596;

HAnimSegment567.children[8] = HAnimSite594;

HAnimJoint566.children = new MFNode();

HAnimJoint566.children[0] = HAnimSegment567;

let HAnimJoint597 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint597.name = "vc7";
HAnimJoint597.DEF = "hanim_vc7";
HAnimJoint597.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
let HAnimSegment598 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment598.name = "c7";
HAnimSegment598.DEF = "hanim_c7";
//Visualization sphere for <HAnimJoint name='vc7'/> is placed within <HAnimSegment name='c7'/>
let TouchSensor599 = browser.currentScene.createNode("TouchSensor");
TouchSensor599.description = "HAnimJoint vc7, HAnimSegment c7";
HAnimSegment598.children = new MFNode();

HAnimSegment598.children[0] = TouchSensor599;

let Transform600 = browser.currentScene.createNode("Transform");
Transform600.translation = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
let Shape601 = browser.currentScene.createNode("Shape");
Shape601.USE = "HAnimJointShape";
Transform600.children = new MFNode();

Transform600.children[0] = Shape601;

HAnimSegment598.children[1] = Transform600;

//HAnimSegment visualization line from current <HAnimJoint name='vc7'/> to child <HAnimJoint name='vc6'/>
let Shape602 = browser.currentScene.createNode("Shape");
let LineSet603 = browser.currentScene.createNode("LineSet");
LineSet603.vertexCount = new MFInt32(new int[2]);
let Coordinate604 = browser.currentScene.createNode("Coordinate");
Coordinate604.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet603.coord = Coordinate604;

let ColorRGBA605 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA605.USE = "HAnimSegmentLineColorRGBA";
LineSet603.color = ColorRGBA605;

Shape602.geometry = LineSet603;

HAnimSegment598.children[2] = Shape602;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='r_neck_base_pt'/>
let Shape606 = browser.currentScene.createNode("Shape");
let LineSet607 = browser.currentScene.createNode("LineSet");
LineSet607.vertexCount = new MFInt32(new int[2]);
let Coordinate608 = browser.currentScene.createNode("Coordinate");
Coordinate608.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022]);
LineSet607.coord = Coordinate608;

let ColorRGBA609 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA609.USE = "HAnimSiteLineColorRGBA";
LineSet607.color = ColorRGBA609;

Shape606.geometry = LineSet607;

HAnimSegment598.children[3] = Shape606;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='l_neck_base_pt'/>
let Shape610 = browser.currentScene.createNode("Shape");
let LineSet611 = browser.currentScene.createNode("LineSet");
LineSet611.vertexCount = new MFInt32(new int[2]);
let Coordinate612 = browser.currentScene.createNode("Coordinate");
Coordinate612.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038]);
LineSet611.coord = Coordinate612;

let ColorRGBA613 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA613.USE = "HAnimSiteLineColorRGBA";
LineSet611.color = ColorRGBA613;

Shape610.geometry = LineSet611;

HAnimSegment598.children[4] = Shape610;

let HAnimSite614 = browser.currentScene.createNode("HAnimSite");
HAnimSite614.name = "r_neck_base_pt_pt";
HAnimSite614.DEF = "hanim_r_neck_base_pt";
HAnimSite614.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
//HAnimSite visualization shape
let TouchSensor615 = browser.currentScene.createNode("TouchSensor");
TouchSensor615.description = "HAnimSite r_neck_base_pt";
HAnimSite614.children = new MFNode();

HAnimSite614.children[0] = TouchSensor615;

let Shape616 = browser.currentScene.createNode("Shape");
Shape616.USE = "HAnimSiteShape";
HAnimSite614.children[1] = Shape616;

HAnimSegment598.children[5] = HAnimSite614;

let HAnimSite617 = browser.currentScene.createNode("HAnimSite");
HAnimSite617.name = "l_neck_base_pt_pt";
HAnimSite617.DEF = "hanim_l_neck_base_pt";
HAnimSite617.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
//HAnimSite visualization shape
let TouchSensor618 = browser.currentScene.createNode("TouchSensor");
TouchSensor618.description = "HAnimSite l_neck_base_pt";
HAnimSite617.children = new MFNode();

HAnimSite617.children[0] = TouchSensor618;

let Shape619 = browser.currentScene.createNode("Shape");
Shape619.USE = "HAnimSiteShape";
HAnimSite617.children[1] = Shape619;

HAnimSegment598.children[6] = HAnimSite617;

HAnimJoint597.children = new MFNode();

HAnimJoint597.children[0] = HAnimSegment598;

let HAnimJoint620 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint620.name = "vc6";
HAnimJoint620.DEF = "hanim_vc6";
HAnimJoint620.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
let HAnimSegment621 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment621.name = "c6";
HAnimSegment621.DEF = "hanim_c6";
//Visualization sphere for <HAnimJoint name='vc6'/> is placed within <HAnimSegment name='c6'/>
let TouchSensor622 = browser.currentScene.createNode("TouchSensor");
TouchSensor622.description = "HAnimJoint vc6, HAnimSegment c6";
HAnimSegment621.children = new MFNode();

HAnimSegment621.children[0] = TouchSensor622;

let Transform623 = browser.currentScene.createNode("Transform");
Transform623.translation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
let Shape624 = browser.currentScene.createNode("Shape");
Shape624.USE = "HAnimJointShape";
Transform623.children = new MFNode();

Transform623.children[0] = Shape624;

HAnimSegment621.children[1] = Transform623;

//HAnimSegment visualization line from current <HAnimJoint name='vc6'/> to child <HAnimJoint name='vc5'/>
let Shape625 = browser.currentScene.createNode("Shape");
let LineSet626 = browser.currentScene.createNode("LineSet");
LineSet626.vertexCount = new MFInt32(new int[2]);
let Coordinate627 = browser.currentScene.createNode("Coordinate");
Coordinate627.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet626.coord = Coordinate627;

let ColorRGBA628 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA628.USE = "HAnimSegmentLineColorRGBA";
LineSet626.color = ColorRGBA628;

Shape625.geometry = LineSet626;

HAnimSegment621.children[2] = Shape625;

HAnimJoint620.children = new MFNode();

HAnimJoint620.children[0] = HAnimSegment621;

let HAnimJoint629 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint629.name = "vc5";
HAnimJoint629.DEF = "hanim_vc5";
HAnimJoint629.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
let HAnimSegment630 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment630.name = "c5";
HAnimSegment630.DEF = "hanim_c5";
//Visualization sphere for <HAnimJoint name='vc5'/> is placed within <HAnimSegment name='c5'/>
let TouchSensor631 = browser.currentScene.createNode("TouchSensor");
TouchSensor631.description = "HAnimJoint vc5, HAnimSegment c5";
HAnimSegment630.children = new MFNode();

HAnimSegment630.children[0] = TouchSensor631;

let Transform632 = browser.currentScene.createNode("Transform");
Transform632.translation = new SFVec3f(new float[0.0066,1.552,-0.0082]);
let Shape633 = browser.currentScene.createNode("Shape");
Shape633.USE = "HAnimJointShape";
Transform632.children = new MFNode();

Transform632.children[0] = Shape633;

HAnimSegment630.children[1] = Transform632;

//HAnimSegment visualization line from current <HAnimJoint name='vc5'/> to child <HAnimJoint name='vc4'/>
let Shape634 = browser.currentScene.createNode("Shape");
let LineSet635 = browser.currentScene.createNode("LineSet");
LineSet635.vertexCount = new MFInt32(new int[2]);
let Coordinate636 = browser.currentScene.createNode("Coordinate");
Coordinate636.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet635.coord = Coordinate636;

let ColorRGBA637 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA637.USE = "HAnimSegmentLineColorRGBA";
LineSet635.color = ColorRGBA637;

Shape634.geometry = LineSet635;

HAnimSegment630.children[2] = Shape634;

HAnimJoint629.children = new MFNode();

HAnimJoint629.children[0] = HAnimSegment630;

let HAnimJoint638 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint638.name = "vc4";
HAnimJoint638.DEF = "hanim_vc4";
HAnimJoint638.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
let HAnimSegment639 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment639.name = "c4";
HAnimSegment639.DEF = "hanim_c4";
//Visualization sphere for <HAnimJoint name='vc4'/> is placed within <HAnimSegment name='c4'/>
let TouchSensor640 = browser.currentScene.createNode("TouchSensor");
TouchSensor640.description = "HAnimJoint vc4, HAnimSegment c4";
HAnimSegment639.children = new MFNode();

HAnimSegment639.children[0] = TouchSensor640;

let Transform641 = browser.currentScene.createNode("Transform");
Transform641.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
let Shape642 = browser.currentScene.createNode("Shape");
Shape642.USE = "HAnimJointShape";
Transform641.children = new MFNode();

Transform641.children[0] = Shape642;

HAnimSegment639.children[1] = Transform641;

//HAnimSegment visualization line from current <HAnimJoint name='vc4'/> to child <HAnimJoint name='vc3'/>
let Shape643 = browser.currentScene.createNode("Shape");
let LineSet644 = browser.currentScene.createNode("LineSet");
LineSet644.vertexCount = new MFInt32(new int[2]);
let Coordinate645 = browser.currentScene.createNode("Coordinate");
Coordinate645.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet644.coord = Coordinate645;

let ColorRGBA646 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA646.USE = "HAnimSegmentLineColorRGBA";
LineSet644.color = ColorRGBA646;

Shape643.geometry = LineSet644;

HAnimSegment639.children[2] = Shape643;

HAnimJoint638.children = new MFNode();

HAnimJoint638.children[0] = HAnimSegment639;

let HAnimJoint647 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint647.name = "vc3";
HAnimJoint647.DEF = "hanim_vc3";
HAnimJoint647.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
let HAnimSegment648 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment648.name = "c3";
HAnimSegment648.DEF = "hanim_c3";
//Visualization sphere for <HAnimJoint name='vc3'/> is placed within <HAnimSegment name='c3'/>
let TouchSensor649 = browser.currentScene.createNode("TouchSensor");
TouchSensor649.description = "HAnimJoint vc3, HAnimSegment c3";
HAnimSegment648.children = new MFNode();

HAnimSegment648.children[0] = TouchSensor649;

let Transform650 = browser.currentScene.createNode("Transform");
Transform650.translation = new SFVec3f(new float[0.0066,1.58,-0.0103]);
let Shape651 = browser.currentScene.createNode("Shape");
Shape651.USE = "HAnimJointShape";
Transform650.children = new MFNode();

Transform650.children[0] = Shape651;

HAnimSegment648.children[1] = Transform650;

//HAnimSegment visualization line from current <HAnimJoint name='vc3'/> to child <HAnimJoint name='vc2'/>
let Shape652 = browser.currentScene.createNode("Shape");
let LineSet653 = browser.currentScene.createNode("LineSet");
LineSet653.vertexCount = new MFInt32(new int[2]);
let Coordinate654 = browser.currentScene.createNode("Coordinate");
Coordinate654.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet653.coord = Coordinate654;

let ColorRGBA655 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA655.USE = "HAnimSegmentLineColorRGBA";
LineSet653.color = ColorRGBA655;

Shape652.geometry = LineSet653;

HAnimSegment648.children[2] = Shape652;

HAnimJoint647.children = new MFNode();

HAnimJoint647.children[0] = HAnimSegment648;

let HAnimJoint656 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint656.name = "vc2";
HAnimJoint656.DEF = "hanim_vc2";
HAnimJoint656.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
let HAnimSegment657 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment657.name = "c2";
HAnimSegment657.DEF = "hanim_c2";
//Visualization sphere for <HAnimJoint name='vc2'/> is placed within <HAnimSegment name='c2'/>
let TouchSensor658 = browser.currentScene.createNode("TouchSensor");
TouchSensor658.description = "HAnimJoint vc2, HAnimSegment c2";
HAnimSegment657.children = new MFNode();

HAnimSegment657.children[0] = TouchSensor658;

let Transform659 = browser.currentScene.createNode("Transform");
Transform659.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
let Shape660 = browser.currentScene.createNode("Shape");
Shape660.USE = "HAnimJointShape";
Transform659.children = new MFNode();

Transform659.children[0] = Shape660;

HAnimSegment657.children[1] = Transform659;

//HAnimSegment visualization line from current <HAnimJoint name='vc2'/> to child <HAnimJoint name='vc1'/>
let Shape661 = browser.currentScene.createNode("Shape");
let LineSet662 = browser.currentScene.createNode("LineSet");
LineSet662.vertexCount = new MFInt32(new int[2]);
let Coordinate663 = browser.currentScene.createNode("Coordinate");
Coordinate663.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet662.coord = Coordinate663;

let ColorRGBA664 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA664.USE = "HAnimSegmentLineColorRGBA";
LineSet662.color = ColorRGBA664;

Shape661.geometry = LineSet662;

HAnimSegment657.children[2] = Shape661;

HAnimJoint656.children = new MFNode();

HAnimJoint656.children[0] = HAnimSegment657;

let HAnimJoint665 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint665.name = "vc1";
HAnimJoint665.DEF = "hanim_vc1";
HAnimJoint665.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
let HAnimSegment666 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment666.name = "c1";
HAnimSegment666.DEF = "hanim_c1";
//Visualization sphere for <HAnimJoint name='vc1'/> is placed within <HAnimSegment name='c1'/>
let TouchSensor667 = browser.currentScene.createNode("TouchSensor");
TouchSensor667.description = "HAnimJoint vc1, HAnimSegment c1";
HAnimSegment666.children = new MFNode();

HAnimSegment666.children[0] = TouchSensor667;

let Transform668 = browser.currentScene.createNode("Transform");
Transform668.translation = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
let Shape669 = browser.currentScene.createNode("Shape");
Shape669.USE = "HAnimJointShape";
Transform668.children = new MFNode();

Transform668.children[0] = Shape669;

HAnimSegment666.children[1] = Transform668;

//HAnimSegment visualization line from current <HAnimJoint name='vc1'/> to child <HAnimJoint name='skullbase'/>
let Shape670 = browser.currentScene.createNode("Shape");
let LineSet671 = browser.currentScene.createNode("LineSet");
LineSet671.vertexCount = new MFInt32(new int[2]);
let Coordinate672 = browser.currentScene.createNode("Coordinate");
Coordinate672.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet671.coord = Coordinate672;

let ColorRGBA673 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA673.USE = "HAnimSegmentLineColorRGBA";
LineSet671.color = ColorRGBA673;

Shape670.geometry = LineSet671;

HAnimSegment666.children[2] = Shape670;

HAnimJoint665.children = new MFNode();

HAnimJoint665.children[0] = HAnimSegment666;

let HAnimJoint674 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint674.name = "skullbase";
HAnimJoint674.DEF = "hanim_skullbase";
HAnimJoint674.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
let HAnimSegment675 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment675.name = "skull";
HAnimSegment675.DEF = "hanim_skull";
//Visualization sphere for <HAnimJoint name='skullbase'/> is placed within <HAnimSegment name='skull'/>
let TouchSensor676 = browser.currentScene.createNode("TouchSensor");
TouchSensor676.description = "HAnimJoint skullbase, HAnimSegment skull";
HAnimSegment675.children = new MFNode();

HAnimSegment675.children[0] = TouchSensor676;

let Transform677 = browser.currentScene.createNode("Transform");
Transform677.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
let Shape678 = browser.currentScene.createNode("Shape");
Shape678.USE = "HAnimJointShape";
Transform677.children = new MFNode();

Transform677.children[0] = Shape678;

HAnimSegment675.children[1] = Transform677;

//HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='l_eyeball_joint'/>
let Shape679 = browser.currentScene.createNode("Shape");
let LineSet680 = browser.currentScene.createNode("LineSet");
LineSet680.vertexCount = new MFInt32(new int[2]);
let Coordinate681 = browser.currentScene.createNode("Coordinate");
Coordinate681.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.6332,0.0502]);
LineSet680.coord = Coordinate681;

let ColorRGBA682 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA682.USE = "HAnimSegmentLineColorRGBA";
LineSet680.color = ColorRGBA682;

Shape679.geometry = LineSet680;

HAnimSegment675.children[2] = Shape679;

//HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='l_eyelid_joint'/>
let Shape683 = browser.currentScene.createNode("Shape");
let LineSet684 = browser.currentScene.createNode("LineSet");
LineSet684.vertexCount = new MFInt32(new int[2]);
let Coordinate685 = browser.currentScene.createNode("Coordinate");
Coordinate685.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.6332,0.0502]);
LineSet684.coord = Coordinate685;

let ColorRGBA686 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA686.USE = "HAnimSegmentLineColorRGBA";
LineSet684.color = ColorRGBA686;

Shape683.geometry = LineSet684;

HAnimSegment675.children[3] = Shape683;

//HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='l_eyebrow_joint'/>
let Shape687 = browser.currentScene.createNode("Shape");
let LineSet688 = browser.currentScene.createNode("LineSet");
LineSet688.vertexCount = new MFInt32(new int[2]);
let Coordinate689 = browser.currentScene.createNode("Coordinate");
Coordinate689.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.635,0.0506]);
LineSet688.coord = Coordinate689;

let ColorRGBA690 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA690.USE = "HAnimSegmentLineColorRGBA";
LineSet688.color = ColorRGBA690;

Shape687.geometry = LineSet688;

HAnimSegment675.children[4] = Shape687;

//HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='r_eyeball_joint'/>
let Shape691 = browser.currentScene.createNode("Shape");
let LineSet692 = browser.currentScene.createNode("LineSet");
LineSet692.vertexCount = new MFInt32(new int[2]);
let Coordinate693 = browser.currentScene.createNode("Coordinate");
Coordinate693.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502]);
LineSet692.coord = Coordinate693;

let ColorRGBA694 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA694.USE = "HAnimSegmentLineColorRGBA";
LineSet692.color = ColorRGBA694;

Shape691.geometry = LineSet692;

HAnimSegment675.children[5] = Shape691;

//HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='r_eyelid_joint'/>
let Shape695 = browser.currentScene.createNode("Shape");
let LineSet696 = browser.currentScene.createNode("LineSet");
LineSet696.vertexCount = new MFInt32(new int[2]);
let Coordinate697 = browser.currentScene.createNode("Coordinate");
Coordinate697.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502]);
LineSet696.coord = Coordinate697;

let ColorRGBA698 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA698.USE = "HAnimSegmentLineColorRGBA";
LineSet696.color = ColorRGBA698;

Shape695.geometry = LineSet696;

HAnimSegment675.children[6] = Shape695;

//HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='r_eyebrow_joint'/>
let Shape699 = browser.currentScene.createNode("Shape");
let LineSet700 = browser.currentScene.createNode("LineSet");
LineSet700.vertexCount = new MFInt32(new int[2]);
let Coordinate701 = browser.currentScene.createNode("Coordinate");
Coordinate701.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.635,0.0506]);
LineSet700.coord = Coordinate701;

let ColorRGBA702 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA702.USE = "HAnimSegmentLineColorRGBA";
LineSet700.color = ColorRGBA702;

Shape699.geometry = LineSet700;

HAnimSegment675.children[7] = Shape699;

//HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='temporomandibular'/>
let Shape703 = browser.currentScene.createNode("Shape");
let LineSet704 = browser.currentScene.createNode("LineSet");
LineSet704.vertexCount = new MFInt32(new int[2]);
let Coordinate705 = browser.currentScene.createNode("Coordinate");
Coordinate705.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1.63,0.015]);
LineSet704.coord = Coordinate705;

let ColorRGBA706 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA706.USE = "HAnimSegmentLineColorRGBA";
LineSet704.color = ColorRGBA706;

Shape703.geometry = LineSet704;

HAnimSegment675.children[8] = Shape703;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='skull_tip'/>
let Shape707 = browser.currentScene.createNode("Shape");
let LineSet708 = browser.currentScene.createNode("LineSet");
LineSet708.vertexCount = new MFInt32(new int[2]);
let Coordinate709 = browser.currentScene.createNode("Coordinate");
Coordinate709.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.005,1.7504,0.0055]);
LineSet708.coord = Coordinate709;

let ColorRGBA710 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA710.USE = "HAnimSiteLineColorRGBA";
LineSet708.color = ColorRGBA710;

Shape707.geometry = LineSet708;

HAnimSegment675.children[9] = Shape707;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='sellion_pt'/>
let Shape711 = browser.currentScene.createNode("Shape");
let LineSet712 = browser.currentScene.createNode("LineSet");
LineSet712.vertexCount = new MFInt32(new int[2]);
let Coordinate713 = browser.currentScene.createNode("Coordinate");
Coordinate713.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0058,1.6316,0.0852]);
LineSet712.coord = Coordinate713;

let ColorRGBA714 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA714.USE = "HAnimSiteLineColorRGBA";
LineSet712.color = ColorRGBA714;

Shape711.geometry = LineSet712;

HAnimSegment675.children[10] = Shape711;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_infraorbitale_pt'/>
let Shape715 = browser.currentScene.createNode("Shape");
let LineSet716 = browser.currentScene.createNode("LineSet");
LineSet716.vertexCount = new MFInt32(new int[2]);
let Coordinate717 = browser.currentScene.createNode("Coordinate");
Coordinate717.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752]);
LineSet716.coord = Coordinate717;

let ColorRGBA718 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA718.USE = "HAnimSiteLineColorRGBA";
LineSet716.color = ColorRGBA718;

Shape715.geometry = LineSet716;

HAnimSegment675.children[11] = Shape715;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_infraorbitale_pt'/>
let Shape719 = browser.currentScene.createNode("Shape");
let LineSet720 = browser.currentScene.createNode("LineSet");
LineSet720.vertexCount = new MFInt32(new int[2]);
let Coordinate721 = browser.currentScene.createNode("Coordinate");
Coordinate721.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0341,1.6171,0.0752]);
LineSet720.coord = Coordinate721;

let ColorRGBA722 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA722.USE = "HAnimSiteLineColorRGBA";
LineSet720.color = ColorRGBA722;

Shape719.geometry = LineSet720;

HAnimSegment675.children[12] = Shape719;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='supramenton_pt'/>
let Shape723 = browser.currentScene.createNode("Shape");
let LineSet724 = browser.currentScene.createNode("LineSet");
LineSet724.vertexCount = new MFInt32(new int[2]);
let Coordinate725 = browser.currentScene.createNode("Coordinate");
Coordinate725.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0061,1.541,0.0805]);
LineSet724.coord = Coordinate725;

let ColorRGBA726 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA726.USE = "HAnimSiteLineColorRGBA";
LineSet724.color = ColorRGBA726;

Shape723.geometry = LineSet724;

HAnimSegment675.children[13] = Shape723;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_tragion_pt'/>
let Shape727 = browser.currentScene.createNode("Shape");
let LineSet728 = browser.currentScene.createNode("LineSet");
LineSet728.vertexCount = new MFInt32(new int[2]);
let Coordinate729 = browser.currentScene.createNode("Coordinate");
Coordinate729.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302]);
LineSet728.coord = Coordinate729;

let ColorRGBA730 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA730.USE = "HAnimSiteLineColorRGBA";
LineSet728.color = ColorRGBA730;

Shape727.geometry = LineSet728;

HAnimSegment675.children[14] = Shape727;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_gonion_pt'/>
let Shape731 = browser.currentScene.createNode("Shape");
let LineSet732 = browser.currentScene.createNode("LineSet");
LineSet732.vertexCount = new MFInt32(new int[2]);
let Coordinate733 = browser.currentScene.createNode("Coordinate");
Coordinate733.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.052,1.5529,0.0347]);
LineSet732.coord = Coordinate733;

let ColorRGBA734 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA734.USE = "HAnimSiteLineColorRGBA";
LineSet732.color = ColorRGBA734;

Shape731.geometry = LineSet732;

HAnimSegment675.children[15] = Shape731;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_tragion_pt'/>
let Shape735 = browser.currentScene.createNode("Shape");
let LineSet736 = browser.currentScene.createNode("LineSet");
LineSet736.vertexCount = new MFInt32(new int[2]);
let Coordinate737 = browser.currentScene.createNode("Coordinate");
Coordinate737.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0739,1.6348,0.0282]);
LineSet736.coord = Coordinate737;

let ColorRGBA738 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA738.USE = "HAnimSiteLineColorRGBA";
LineSet736.color = ColorRGBA738;

Shape735.geometry = LineSet736;

HAnimSegment675.children[16] = Shape735;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_gonion_pt'/>
let Shape739 = browser.currentScene.createNode("Shape");
let LineSet740 = browser.currentScene.createNode("LineSet");
LineSet740.vertexCount = new MFInt32(new int[2]);
let Coordinate741 = browser.currentScene.createNode("Coordinate");
Coordinate741.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0631,1.553,0.033]);
LineSet740.coord = Coordinate741;

let ColorRGBA742 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA742.USE = "HAnimSiteLineColorRGBA";
LineSet740.color = ColorRGBA742;

Shape739.geometry = LineSet740;

HAnimSegment675.children[17] = Shape739;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='nuchale_pt'/>
let Shape743 = browser.currentScene.createNode("Shape");
let LineSet744 = browser.currentScene.createNode("LineSet");
LineSet744.vertexCount = new MFInt32(new int[2]);
let Coordinate745 = browser.currentScene.createNode("Coordinate");
Coordinate745.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796]);
LineSet744.coord = Coordinate745;

let ColorRGBA746 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA746.USE = "HAnimSiteLineColorRGBA";
LineSet744.color = ColorRGBA746;

Shape743.geometry = LineSet744;

HAnimSegment675.children[18] = Shape743;

let HAnimSite747 = browser.currentScene.createNode("HAnimSite");
HAnimSite747.name = "skull_tip_pt";
HAnimSite747.DEF = "hanim_skull_tip";
HAnimSite747.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
//TODO move skull_tip x to zero, check others for symmetry
//HAnimSite visualization shape
let TouchSensor748 = browser.currentScene.createNode("TouchSensor");
TouchSensor748.description = "HAnimSite skull_tip";
HAnimSite747.children = new MFNode();

HAnimSite747.children[0] = TouchSensor748;

let Shape749 = browser.currentScene.createNode("Shape");
Shape749.USE = "HAnimSiteShape";
HAnimSite747.children[1] = Shape749;

HAnimSegment675.children[19] = HAnimSite747;

let HAnimSite750 = browser.currentScene.createNode("HAnimSite");
HAnimSite750.name = "sellion_pt_pt";
HAnimSite750.DEF = "hanim_sellion_pt";
HAnimSite750.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
//HAnimSite visualization shape
let TouchSensor751 = browser.currentScene.createNode("TouchSensor");
TouchSensor751.description = "HAnimSite sellion_pt";
HAnimSite750.children = new MFNode();

HAnimSite750.children[0] = TouchSensor751;

let Shape752 = browser.currentScene.createNode("Shape");
Shape752.USE = "HAnimSiteShape";
HAnimSite750.children[1] = Shape752;

HAnimSegment675.children[20] = HAnimSite750;

let HAnimSite753 = browser.currentScene.createNode("HAnimSite");
HAnimSite753.name = "r_infraorbitale_pt_pt";
HAnimSite753.DEF = "hanim_r_infraorbitale_pt";
HAnimSite753.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
//HAnimSite visualization shape
let TouchSensor754 = browser.currentScene.createNode("TouchSensor");
TouchSensor754.description = "HAnimSite r_infraorbitale_pt";
HAnimSite753.children = new MFNode();

HAnimSite753.children[0] = TouchSensor754;

let Shape755 = browser.currentScene.createNode("Shape");
Shape755.USE = "HAnimSiteShape";
HAnimSite753.children[1] = Shape755;

HAnimSegment675.children[21] = HAnimSite753;

let HAnimSite756 = browser.currentScene.createNode("HAnimSite");
HAnimSite756.name = "l_infraorbitale_pt_pt";
HAnimSite756.DEF = "hanim_l_infraorbitale_pt";
HAnimSite756.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
//HAnimSite visualization shape
let TouchSensor757 = browser.currentScene.createNode("TouchSensor");
TouchSensor757.description = "HAnimSite l_infraorbitale_pt";
HAnimSite756.children = new MFNode();

HAnimSite756.children[0] = TouchSensor757;

let Shape758 = browser.currentScene.createNode("Shape");
Shape758.USE = "HAnimSiteShape";
HAnimSite756.children[1] = Shape758;

HAnimSegment675.children[22] = HAnimSite756;

let HAnimSite759 = browser.currentScene.createNode("HAnimSite");
HAnimSite759.name = "supramenton_pt_pt";
HAnimSite759.DEF = "hanim_supramenton_pt";
HAnimSite759.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
//HAnimSite visualization shape
let TouchSensor760 = browser.currentScene.createNode("TouchSensor");
TouchSensor760.description = "HAnimSite supramenton_pt";
HAnimSite759.children = new MFNode();

HAnimSite759.children[0] = TouchSensor760;

let Shape761 = browser.currentScene.createNode("Shape");
Shape761.USE = "HAnimSiteShape";
HAnimSite759.children[1] = Shape761;

HAnimSegment675.children[23] = HAnimSite759;

let HAnimSite762 = browser.currentScene.createNode("HAnimSite");
HAnimSite762.name = "r_tragion_pt_pt";
HAnimSite762.DEF = "hanim_r_tragion_pt";
HAnimSite762.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
//HAnimSite visualization shape
let TouchSensor763 = browser.currentScene.createNode("TouchSensor");
TouchSensor763.description = "HAnimSite r_tragion_pt";
HAnimSite762.children = new MFNode();

HAnimSite762.children[0] = TouchSensor763;

let Shape764 = browser.currentScene.createNode("Shape");
Shape764.USE = "HAnimSiteShape";
HAnimSite762.children[1] = Shape764;

HAnimSegment675.children[24] = HAnimSite762;

let HAnimSite765 = browser.currentScene.createNode("HAnimSite");
HAnimSite765.name = "r_gonion_pt_pt";
HAnimSite765.DEF = "hanim_r_gonion_pt";
HAnimSite765.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
//HAnimSite visualization shape
let TouchSensor766 = browser.currentScene.createNode("TouchSensor");
TouchSensor766.description = "HAnimSite r_gonion_pt";
HAnimSite765.children = new MFNode();

HAnimSite765.children[0] = TouchSensor766;

let Shape767 = browser.currentScene.createNode("Shape");
Shape767.USE = "HAnimSiteShape";
HAnimSite765.children[1] = Shape767;

HAnimSegment675.children[25] = HAnimSite765;

let HAnimSite768 = browser.currentScene.createNode("HAnimSite");
HAnimSite768.name = "l_tragion_pt_pt";
HAnimSite768.DEF = "hanim_l_tragion_pt";
HAnimSite768.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
//HAnimSite visualization shape
let TouchSensor769 = browser.currentScene.createNode("TouchSensor");
TouchSensor769.description = "HAnimSite l_tragion_pt";
HAnimSite768.children = new MFNode();

HAnimSite768.children[0] = TouchSensor769;

let Shape770 = browser.currentScene.createNode("Shape");
Shape770.USE = "HAnimSiteShape";
HAnimSite768.children[1] = Shape770;

HAnimSegment675.children[26] = HAnimSite768;

let HAnimSite771 = browser.currentScene.createNode("HAnimSite");
HAnimSite771.name = "l_gonion_pt_pt";
HAnimSite771.DEF = "hanim_l_gonion_pt";
HAnimSite771.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
//HAnimSite visualization shape
let TouchSensor772 = browser.currentScene.createNode("TouchSensor");
TouchSensor772.description = "HAnimSite l_gonion_pt";
HAnimSite771.children = new MFNode();

HAnimSite771.children[0] = TouchSensor772;

let Shape773 = browser.currentScene.createNode("Shape");
Shape773.USE = "HAnimSiteShape";
HAnimSite771.children[1] = Shape773;

HAnimSegment675.children[27] = HAnimSite771;

let HAnimSite774 = browser.currentScene.createNode("HAnimSite");
HAnimSite774.name = "nuchale_pt_pt";
HAnimSite774.DEF = "hanim_nuchale_pt";
HAnimSite774.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
//HAnimSite visualization shape
let TouchSensor775 = browser.currentScene.createNode("TouchSensor");
TouchSensor775.description = "HAnimSite nuchale_pt";
HAnimSite774.children = new MFNode();

HAnimSite774.children[0] = TouchSensor775;

let Shape776 = browser.currentScene.createNode("Shape");
Shape776.USE = "HAnimSiteShape";
HAnimSite774.children[1] = Shape776;

HAnimSegment675.children[28] = HAnimSite774;

HAnimJoint674.children = new MFNode();

HAnimJoint674.children[0] = HAnimSegment675;

let HAnimJoint777 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint777.name = "l_eyeball_joint";
HAnimJoint777.DEF = "hanim_l_eyeball_joint";
HAnimJoint777.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
let HAnimSegment778 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment778.name = "l_eyeball";
HAnimSegment778.DEF = "hanim_l_eyeball";
//Visualization sphere for <HAnimJoint name='l_eyeball_joint'/> is placed within <HAnimSegment name='l_eyeball'/>
let TouchSensor779 = browser.currentScene.createNode("TouchSensor");
TouchSensor779.description = "HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball";
HAnimSegment778.children = new MFNode();

HAnimSegment778.children[0] = TouchSensor779;

let Transform780 = browser.currentScene.createNode("Transform");
Transform780.translation = new SFVec3f(new float[0.0336,1.6332,0.0502]);
let Shape781 = browser.currentScene.createNode("Shape");
Shape781.USE = "HAnimJointShape";
Transform780.children = new MFNode();

Transform780.children[0] = Shape781;

HAnimSegment778.children[1] = Transform780;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_eyeball_joint'/> to <HAnimSite name='l_eyeball_site_view'/>
let Shape782 = browser.currentScene.createNode("Shape");
let LineSet783 = browser.currentScene.createNode("LineSet");
LineSet783.vertexCount = new MFInt32(new int[2]);
let Coordinate784 = browser.currentScene.createNode("Coordinate");
Coordinate784.point = new MFVec3f(new float[0.0336,1.6332,0.0502,0.034,1.64,0.05]);
LineSet783.coord = Coordinate784;

let ColorRGBA785 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA785.DEF = "HAnimSiteViewpointLineColorRGBA";
ColorRGBA785.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
LineSet783.color = ColorRGBA785;

Shape782.geometry = LineSet783;

HAnimSegment778.children[2] = Shape782;

let HAnimSite786 = browser.currentScene.createNode("HAnimSite");
HAnimSite786.name = "l_eyeball_site_view_pt";
HAnimSite786.DEF = "hanim_l_eyeball_site_view";
HAnimSite786.translation = new SFVec3f(new float[0.034,1.64,0.05]);
//HAnimSite visualization shape
let TouchSensor787 = browser.currentScene.createNode("TouchSensor");
TouchSensor787.description = "HAnimSite l_eyeball_site_view";
HAnimSite786.children = new MFNode();

HAnimSite786.children[0] = TouchSensor787;

let Shape788 = browser.currentScene.createNode("Shape");
Shape788.USE = "HAnimSiteShape";
HAnimSite786.children[1] = Shape788;

let Viewpoint789 = browser.currentScene.createNode("Viewpoint");
Viewpoint789.DEF = "hanim_l_eyeball_site_viewpoint";
Viewpoint789.description = "l_eyeball_site_viewpoint looking forward";
Viewpoint789.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint789.position = new SFVec3f(new float[0,0,0]);
HAnimSite786.children[2] = Viewpoint789;

//HAnimSite/Viewpoint visualization shape
let Anchor790 = browser.currentScene.createNode("Anchor");
Anchor790.description = "HAnimSite hanim_l_eyeball_site_view Viewpoint";
Anchor790.url = new MFString(new java.lang.String["#hanim_l_eyeball_site_viewpoint"]);
let LOD791 = browser.currentScene.createNode("LOD");
LOD791.forceTransitions = True;
LOD791.range = new MFFloat(new float[0.04]);
let WorldInfo792 = browser.currentScene.createNode("WorldInfo");
WorldInfo792.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD791.children = new MFNode();

LOD791.children[0] = WorldInfo792;

let Shape793 = browser.currentScene.createNode("Shape");
Shape793.DEF = "HAnimSiteViewpointShape";
let IndexedFaceSet794 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet794.DEF = "SiteViewpointDiamondIFS";
IndexedFaceSet794.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet794.creaseAngle = 0.5;
let Coordinate795 = browser.currentScene.createNode("Coordinate");
Coordinate795.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet794.coord = Coordinate795;

Shape793.geometry = IndexedFaceSet794;

let Appearance796 = browser.currentScene.createNode("Appearance");
let Material797 = browser.currentScene.createNode("Material");
Material797.diffuseColor = new SFColor(new float[1,1,0]);
Material797.transparency = 0.3;
Appearance796.material = Material797;

Shape793.appearance = Appearance796;

LOD791.children[1] = Shape793;

Anchor790.children = new MFNode();

Anchor790.children[0] = LOD791;

HAnimSite786.children[3] = Anchor790;

HAnimSegment778.children[3] = HAnimSite786;

HAnimJoint777.children = new MFNode();

HAnimJoint777.children[0] = HAnimSegment778;

HAnimJoint674.children[1] = HAnimJoint777;

let HAnimJoint798 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint798.name = "l_eyelid_joint";
HAnimJoint798.DEF = "hanim_l_eyelid_joint";
HAnimJoint798.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
let HAnimSegment799 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment799.name = "l_eyelid";
HAnimSegment799.DEF = "hanim_l_eyelid";
//Visualization sphere for <HAnimJoint name='l_eyelid_joint'/> is placed within <HAnimSegment name='l_eyelid'/>
let TouchSensor800 = browser.currentScene.createNode("TouchSensor");
TouchSensor800.description = "HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid";
HAnimSegment799.children = new MFNode();

HAnimSegment799.children[0] = TouchSensor800;

let Transform801 = browser.currentScene.createNode("Transform");
Transform801.translation = new SFVec3f(new float[0.0336,1.6332,0.0502]);
let Shape802 = browser.currentScene.createNode("Shape");
Shape802.USE = "HAnimJointShape";
Transform801.children = new MFNode();

Transform801.children[0] = Shape802;

HAnimSegment799.children[1] = Transform801;

HAnimJoint798.children = new MFNode();

HAnimJoint798.children[0] = HAnimSegment799;

HAnimJoint674.children[2] = HAnimJoint798;

let HAnimJoint803 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint803.name = "l_eyebrow_joint";
HAnimJoint803.DEF = "hanim_l_eyebrow_joint";
HAnimJoint803.center = new SFVec3f(new float[0.0336,1.635,0.0506]);
let HAnimSegment804 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment804.name = "l_eyebrow";
HAnimSegment804.DEF = "hanim_l_eyebrow";
//Visualization sphere for <HAnimJoint name='l_eyebrow_joint'/> is placed within <HAnimSegment name='l_eyebrow'/>
let TouchSensor805 = browser.currentScene.createNode("TouchSensor");
TouchSensor805.description = "HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow";
HAnimSegment804.children = new MFNode();

HAnimSegment804.children[0] = TouchSensor805;

let Transform806 = browser.currentScene.createNode("Transform");
Transform806.translation = new SFVec3f(new float[0.0336,1.635,0.0506]);
let Shape807 = browser.currentScene.createNode("Shape");
Shape807.USE = "HAnimJointShape";
Transform806.children = new MFNode();

Transform806.children[0] = Shape807;

HAnimSegment804.children[1] = Transform806;

HAnimJoint803.children = new MFNode();

HAnimJoint803.children[0] = HAnimSegment804;

HAnimJoint674.children[3] = HAnimJoint803;

let HAnimJoint808 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint808.name = "r_eyeball_joint";
HAnimJoint808.DEF = "hanim_r_eyeball_joint";
HAnimJoint808.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
let HAnimSegment809 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment809.name = "r_eyeball";
HAnimSegment809.DEF = "hanim_r_eyeball";
//Visualization sphere for <HAnimJoint name='r_eyeball_joint'/> is placed within <HAnimSegment name='r_eyeball'/>
let TouchSensor810 = browser.currentScene.createNode("TouchSensor");
TouchSensor810.description = "HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball";
HAnimSegment809.children = new MFNode();

HAnimSegment809.children[0] = TouchSensor810;

let Transform811 = browser.currentScene.createNode("Transform");
Transform811.translation = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
let Shape812 = browser.currentScene.createNode("Shape");
Shape812.USE = "HAnimJointShape";
Transform811.children = new MFNode();

Transform811.children[0] = Shape812;

HAnimSegment809.children[1] = Transform811;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_eyeball_joint'/> to <HAnimSite name='r_eyeball_site_view'/>
let Shape813 = browser.currentScene.createNode("Shape");
let LineSet814 = browser.currentScene.createNode("LineSet");
LineSet814.vertexCount = new MFInt32(new int[2]);
let Coordinate815 = browser.currentScene.createNode("Coordinate");
Coordinate815.point = new MFVec3f(new float[-0.0336,1.6332,0.0502,-0.034,1.64,0.05]);
LineSet814.coord = Coordinate815;

let ColorRGBA816 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA816.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet814.color = ColorRGBA816;

Shape813.geometry = LineSet814;

HAnimSegment809.children[2] = Shape813;

let HAnimSite817 = browser.currentScene.createNode("HAnimSite");
HAnimSite817.name = "r_eyeball_site_view_pt";
HAnimSite817.DEF = "hanim_r_eyeball_site_view";
HAnimSite817.translation = new SFVec3f(new float[-0.034,1.64,0.05]);
//HAnimSite visualization shape
let TouchSensor818 = browser.currentScene.createNode("TouchSensor");
TouchSensor818.description = "HAnimSite r_eyeball_site_view";
HAnimSite817.children = new MFNode();

HAnimSite817.children[0] = TouchSensor818;

let Shape819 = browser.currentScene.createNode("Shape");
Shape819.USE = "HAnimSiteShape";
HAnimSite817.children[1] = Shape819;

let Viewpoint820 = browser.currentScene.createNode("Viewpoint");
Viewpoint820.DEF = "hanim_r_eyeball_site_viewpoint";
Viewpoint820.description = "r_eyeball_site_viewpoint looking forward";
Viewpoint820.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint820.position = new SFVec3f(new float[0,0,0]);
HAnimSite817.children[2] = Viewpoint820;

//HAnimSite/Viewpoint visualization shape
let Anchor821 = browser.currentScene.createNode("Anchor");
Anchor821.description = "HAnimSite hanim_r_eyeball_site_view Viewpoint";
Anchor821.url = new MFString(new java.lang.String["#hanim_r_eyeball_site_viewpoint"]);
let LOD822 = browser.currentScene.createNode("LOD");
LOD822.forceTransitions = True;
LOD822.range = new MFFloat(new float[0.04]);
let WorldInfo823 = browser.currentScene.createNode("WorldInfo");
WorldInfo823.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD822.children = new MFNode();

LOD822.children[0] = WorldInfo823;

let Shape824 = browser.currentScene.createNode("Shape");
Shape824.USE = "HAnimSiteViewpointShape";
LOD822.children[1] = Shape824;

Anchor821.children = new MFNode();

Anchor821.children[0] = LOD822;

HAnimSite817.children[3] = Anchor821;

HAnimSegment809.children[3] = HAnimSite817;

HAnimJoint808.children = new MFNode();

HAnimJoint808.children[0] = HAnimSegment809;

HAnimJoint674.children[4] = HAnimJoint808;

let HAnimJoint825 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint825.name = "r_eyelid_joint";
HAnimJoint825.DEF = "hanim_r_eyelid_joint";
HAnimJoint825.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
let HAnimSegment826 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment826.name = "r_eyelid";
HAnimSegment826.DEF = "hanim_r_eyelid";
//Visualization sphere for <HAnimJoint name='r_eyelid_joint'/> is placed within <HAnimSegment name='r_eyelid'/>
let TouchSensor827 = browser.currentScene.createNode("TouchSensor");
TouchSensor827.description = "HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid";
HAnimSegment826.children = new MFNode();

HAnimSegment826.children[0] = TouchSensor827;

let Transform828 = browser.currentScene.createNode("Transform");
Transform828.translation = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
let Shape829 = browser.currentScene.createNode("Shape");
Shape829.USE = "HAnimJointShape";
Transform828.children = new MFNode();

Transform828.children[0] = Shape829;

HAnimSegment826.children[1] = Transform828;

HAnimJoint825.children = new MFNode();

HAnimJoint825.children[0] = HAnimSegment826;

HAnimJoint674.children[5] = HAnimJoint825;

let HAnimJoint830 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint830.name = "r_eyebrow_joint";
HAnimJoint830.DEF = "hanim_r_eyebrow_joint";
HAnimJoint830.center = new SFVec3f(new float[-0.0336,1.635,0.0506]);
let HAnimSegment831 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment831.name = "r_eyebrow";
HAnimSegment831.DEF = "hanim_r_eyebrow";
//Visualization sphere for <HAnimJoint name='r_eyebrow_joint'/> is placed within <HAnimSegment name='r_eyebrow'/>
let TouchSensor832 = browser.currentScene.createNode("TouchSensor");
TouchSensor832.description = "HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow";
HAnimSegment831.children = new MFNode();

HAnimSegment831.children[0] = TouchSensor832;

let Transform833 = browser.currentScene.createNode("Transform");
Transform833.translation = new SFVec3f(new float[-0.0336,1.635,0.0506]);
let Shape834 = browser.currentScene.createNode("Shape");
Shape834.USE = "HAnimJointShape";
Transform833.children = new MFNode();

Transform833.children[0] = Shape834;

HAnimSegment831.children[1] = Transform833;

HAnimJoint830.children = new MFNode();

HAnimJoint830.children[0] = HAnimSegment831;

HAnimJoint674.children[6] = HAnimJoint830;

let HAnimJoint835 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint835.name = "temporomandibular";
HAnimJoint835.DEF = "hanim_temporomandibular";
HAnimJoint835.center = new SFVec3f(new float[0,1.63,0.015]);
//Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint
let HAnimSegment836 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment836.name = "jaw";
HAnimSegment836.DEF = "hanim_jaw";
//Visualization sphere for <HAnimJoint name='temporomandibular'/> is placed within <HAnimSegment name='jaw'/>
let TouchSensor837 = browser.currentScene.createNode("TouchSensor");
TouchSensor837.description = "HAnimJoint temporomandibular, HAnimSegment jaw";
HAnimSegment836.children = new MFNode();

HAnimSegment836.children[0] = TouchSensor837;

let Transform838 = browser.currentScene.createNode("Transform");
Transform838.translation = new SFVec3f(new float[0,1.63,0.015]);
let Shape839 = browser.currentScene.createNode("Shape");
Shape839.USE = "HAnimJointShape";
Transform838.children = new MFNode();

Transform838.children[0] = Shape839;

HAnimSegment836.children[1] = Transform838;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_l_site_pt'/>
let Shape840 = browser.currentScene.createNode("Shape");
let LineSet841 = browser.currentScene.createNode("LineSet");
LineSet841.vertexCount = new MFInt32(new int[2]);
let Coordinate842 = browser.currentScene.createNode("Coordinate");
Coordinate842.point = new MFVec3f(new float[0,1.63,0.015,0.045,1.63,0]);
LineSet841.coord = Coordinate842;

let ColorRGBA843 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA843.USE = "HAnimSiteLineColorRGBA";
LineSet841.color = ColorRGBA843;

Shape840.geometry = LineSet841;

HAnimSegment836.children[2] = Shape840;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_r_site_pt'/>
let Shape844 = browser.currentScene.createNode("Shape");
let LineSet845 = browser.currentScene.createNode("LineSet");
LineSet845.vertexCount = new MFInt32(new int[2]);
let Coordinate846 = browser.currentScene.createNode("Coordinate");
Coordinate846.point = new MFVec3f(new float[0,1.63,0.015,-0.045,1.63,0]);
LineSet845.coord = Coordinate846;

let ColorRGBA847 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA847.USE = "HAnimSiteLineColorRGBA";
LineSet845.color = ColorRGBA847;

Shape844.geometry = LineSet845;

HAnimSegment836.children[3] = Shape844;

let HAnimSite848 = browser.currentScene.createNode("HAnimSite");
HAnimSite848.name = "temporomandibular_l_site_pt_pt";
HAnimSite848.DEF = "hanim_temporomandibular_l_site_pt";
HAnimSite848.translation = new SFVec3f(new float[0.045,1.63,0]);
//HAnimSite visualization shape
let TouchSensor849 = browser.currentScene.createNode("TouchSensor");
TouchSensor849.description = "HAnimSite temporomandibular_l_site_pt";
HAnimSite848.children = new MFNode();

HAnimSite848.children[0] = TouchSensor849;

let Shape850 = browser.currentScene.createNode("Shape");
Shape850.USE = "HAnimSiteShape";
HAnimSite848.children[1] = Shape850;

HAnimSegment836.children[4] = HAnimSite848;

let HAnimSite851 = browser.currentScene.createNode("HAnimSite");
HAnimSite851.name = "temporomandibular_r_site_pt_pt";
HAnimSite851.DEF = "hanim_temporomandibular_r_site_pt";
HAnimSite851.translation = new SFVec3f(new float[-0.045,1.63,0]);
//HAnimSite visualization shape
let TouchSensor852 = browser.currentScene.createNode("TouchSensor");
TouchSensor852.description = "HAnimSite temporomandibular_r_site_pt";
HAnimSite851.children = new MFNode();

HAnimSite851.children[0] = TouchSensor852;

let Shape853 = browser.currentScene.createNode("Shape");
Shape853.USE = "HAnimSiteShape";
HAnimSite851.children[1] = Shape853;

HAnimSegment836.children[5] = HAnimSite851;

HAnimJoint835.children = new MFNode();

HAnimJoint835.children[0] = HAnimSegment836;

HAnimJoint674.children[7] = HAnimJoint835;

HAnimJoint665.children[1] = HAnimJoint674;

HAnimJoint656.children[1] = HAnimJoint665;

HAnimJoint647.children[1] = HAnimJoint656;

HAnimJoint638.children[1] = HAnimJoint647;

HAnimJoint629.children[1] = HAnimJoint638;

HAnimJoint620.children[1] = HAnimJoint629;

HAnimJoint597.children[1] = HAnimJoint620;

HAnimJoint566.children[1] = HAnimJoint597;

let HAnimJoint854 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint854.name = "l_sternoclavicular";
HAnimJoint854.DEF = "hanim_l_sternoclavicular";
HAnimJoint854.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
let HAnimSegment855 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment855.name = "l_clavicle";
HAnimSegment855.DEF = "hanim_l_clavicle";
//Visualization sphere for <HAnimJoint name='l_sternoclavicular'/> is placed within <HAnimSegment name='l_clavicle'/>
let TouchSensor856 = browser.currentScene.createNode("TouchSensor");
TouchSensor856.description = "HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle";
HAnimSegment855.children = new MFNode();

HAnimSegment855.children[0] = TouchSensor856;

let Transform857 = browser.currentScene.createNode("Transform");
Transform857.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
let Shape858 = browser.currentScene.createNode("Shape");
Shape858.USE = "HAnimJointShape";
Transform857.children = new MFNode();

Transform857.children[0] = Shape858;

HAnimSegment855.children[1] = Transform857;

//HAnimSegment visualization line from current <HAnimJoint name='l_sternoclavicular'/> to child <HAnimJoint name='l_acromioclavicular'/>
let Shape859 = browser.currentScene.createNode("Shape");
let LineSet860 = browser.currentScene.createNode("LineSet");
LineSet860.vertexCount = new MFInt32(new int[2]);
let Coordinate861 = browser.currentScene.createNode("Coordinate");
Coordinate861.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet860.coord = Coordinate861;

let ColorRGBA862 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA862.USE = "HAnimSegmentLineColorRGBA";
LineSet860.color = ColorRGBA862;

Shape859.geometry = LineSet860;

HAnimSegment855.children[2] = Shape859;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_clavicale_pt'/>
let Shape863 = browser.currentScene.createNode("Shape");
let LineSet864 = browser.currentScene.createNode("LineSet");
LineSet864.vertexCount = new MFInt32(new int[2]);
let Coordinate865 = browser.currentScene.createNode("Coordinate");
Coordinate865.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0271,1.4943,0.0394]);
LineSet864.coord = Coordinate865;

let ColorRGBA866 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA866.USE = "HAnimSiteLineColorRGBA";
LineSet864.color = ColorRGBA866;

Shape863.geometry = LineSet864;

HAnimSegment855.children[3] = Shape863;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_acromion_pt'/>
let Shape867 = browser.currentScene.createNode("Shape");
let LineSet868 = browser.currentScene.createNode("LineSet");
LineSet868.vertexCount = new MFInt32(new int[2]);
let Coordinate869 = browser.currentScene.createNode("Coordinate");
Coordinate869.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.2032,1.476,-0.049]);
LineSet868.coord = Coordinate869;

let ColorRGBA870 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA870.USE = "HAnimSiteLineColorRGBA";
LineSet868.color = ColorRGBA870;

Shape867.geometry = LineSet868;

HAnimSegment855.children[4] = Shape867;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_ant_pt'/>
let Shape871 = browser.currentScene.createNode("Shape");
let LineSet872 = browser.currentScene.createNode("LineSet");
LineSet872.vertexCount = new MFInt32(new int[2]);
let Coordinate873 = browser.currentScene.createNode("Coordinate");
Coordinate873.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075]);
LineSet872.coord = Coordinate873;

let ColorRGBA874 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA874.USE = "HAnimSiteLineColorRGBA";
LineSet872.color = ColorRGBA874;

Shape871.geometry = LineSet872;

HAnimSegment855.children[5] = Shape871;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_post_pt'/>
let Shape875 = browser.currentScene.createNode("Shape");
let LineSet876 = browser.currentScene.createNode("LineSet");
LineSet876.vertexCount = new MFInt32(new int[2]);
let Coordinate877 = browser.currentScene.createNode("Coordinate");
Coordinate877.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875]);
LineSet876.coord = Coordinate877;

let ColorRGBA878 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA878.USE = "HAnimSiteLineColorRGBA";
LineSet876.color = ColorRGBA878;

Shape875.geometry = LineSet876;

HAnimSegment855.children[6] = Shape875;

let HAnimSite879 = browser.currentScene.createNode("HAnimSite");
HAnimSite879.name = "l_clavicale_pt_pt";
HAnimSite879.DEF = "hanim_l_clavicale_pt";
HAnimSite879.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
//HAnimSite visualization shape
let TouchSensor880 = browser.currentScene.createNode("TouchSensor");
TouchSensor880.description = "HAnimSite l_clavicale_pt";
HAnimSite879.children = new MFNode();

HAnimSite879.children[0] = TouchSensor880;

let Shape881 = browser.currentScene.createNode("Shape");
Shape881.USE = "HAnimSiteShape";
HAnimSite879.children[1] = Shape881;

HAnimSegment855.children[7] = HAnimSite879;

let HAnimSite882 = browser.currentScene.createNode("HAnimSite");
HAnimSite882.name = "l_acromion_pt_pt";
HAnimSite882.DEF = "hanim_l_acromion_pt";
HAnimSite882.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
//HAnimSite visualization shape
let TouchSensor883 = browser.currentScene.createNode("TouchSensor");
TouchSensor883.description = "HAnimSite l_acromion_pt";
HAnimSite882.children = new MFNode();

HAnimSite882.children[0] = TouchSensor883;

let Shape884 = browser.currentScene.createNode("Shape");
Shape884.USE = "HAnimSiteShape";
HAnimSite882.children[1] = Shape884;

HAnimSegment855.children[8] = HAnimSite882;

let HAnimSite885 = browser.currentScene.createNode("HAnimSite");
HAnimSite885.name = "l_axilla_ant_pt_pt";
HAnimSite885.DEF = "hanim_l_axilla_ant_pt";
HAnimSite885.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
//HAnimSite visualization shape
let TouchSensor886 = browser.currentScene.createNode("TouchSensor");
TouchSensor886.description = "HAnimSite l_axilla_ant_pt";
HAnimSite885.children = new MFNode();

HAnimSite885.children[0] = TouchSensor886;

let Shape887 = browser.currentScene.createNode("Shape");
Shape887.USE = "HAnimSiteShape";
HAnimSite885.children[1] = Shape887;

HAnimSegment855.children[9] = HAnimSite885;

let HAnimSite888 = browser.currentScene.createNode("HAnimSite");
HAnimSite888.name = "l_axilla_post_pt_pt";
HAnimSite888.DEF = "hanim_l_axilla_post_pt";
HAnimSite888.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
//HAnimSite visualization shape
let TouchSensor889 = browser.currentScene.createNode("TouchSensor");
TouchSensor889.description = "HAnimSite l_axilla_post_pt";
HAnimSite888.children = new MFNode();

HAnimSite888.children[0] = TouchSensor889;

let Shape890 = browser.currentScene.createNode("Shape");
Shape890.USE = "HAnimSiteShape";
HAnimSite888.children[1] = Shape890;

HAnimSegment855.children[10] = HAnimSite888;

HAnimJoint854.children = new MFNode();

HAnimJoint854.children[0] = HAnimSegment855;

let HAnimJoint891 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint891.name = "l_acromioclavicular";
HAnimJoint891.DEF = "hanim_l_acromioclavicular";
HAnimJoint891.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
let HAnimSegment892 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment892.name = "l_scapula";
HAnimSegment892.DEF = "hanim_l_scapula";
//Visualization sphere for <HAnimJoint name='l_acromioclavicular'/> is placed within <HAnimSegment name='l_scapula'/>
let TouchSensor893 = browser.currentScene.createNode("TouchSensor");
TouchSensor893.description = "HAnimJoint l_acromioclavicular, HAnimSegment l_scapula";
HAnimSegment892.children = new MFNode();

HAnimSegment892.children[0] = TouchSensor893;

let Transform894 = browser.currentScene.createNode("Transform");
Transform894.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
let Shape895 = browser.currentScene.createNode("Shape");
Shape895.USE = "HAnimJointShape";
Transform894.children = new MFNode();

Transform894.children[0] = Shape895;

HAnimSegment892.children[1] = Transform894;

//HAnimSegment visualization line from current <HAnimJoint name='l_acromioclavicular'/> to child <HAnimJoint name='l_shoulder'/>
let Shape896 = browser.currentScene.createNode("Shape");
let LineSet897 = browser.currentScene.createNode("LineSet");
LineSet897.vertexCount = new MFInt32(new int[2]);
let Coordinate898 = browser.currentScene.createNode("Coordinate");
Coordinate898.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet897.coord = Coordinate898;

let ColorRGBA899 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA899.USE = "HAnimSegmentLineColorRGBA";
LineSet897.color = ColorRGBA899;

Shape896.geometry = LineSet897;

HAnimSegment892.children[2] = Shape896;

HAnimJoint891.children = new MFNode();

HAnimJoint891.children[0] = HAnimSegment892;

let HAnimJoint900 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint900.name = "l_shoulder";
HAnimJoint900.DEF = "hanim_l_shoulder";
HAnimJoint900.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
let HAnimSegment901 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment901.name = "l_upperarm";
HAnimSegment901.DEF = "hanim_l_upperarm";
//Visualization sphere for <HAnimJoint name='l_shoulder'/> is placed within <HAnimSegment name='l_upperarm'/>
let TouchSensor902 = browser.currentScene.createNode("TouchSensor");
TouchSensor902.description = "HAnimJoint l_shoulder, HAnimSegment l_upperarm";
HAnimSegment901.children = new MFNode();

HAnimSegment901.children[0] = TouchSensor902;

let Transform903 = browser.currentScene.createNode("Transform");
Transform903.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
let Shape904 = browser.currentScene.createNode("Shape");
Shape904.USE = "HAnimJointShape";
Transform903.children = new MFNode();

Transform903.children[0] = Shape904;

HAnimSegment901.children[1] = Transform903;

//HAnimSegment visualization line from current <HAnimJoint name='l_shoulder'/> to child <HAnimJoint name='l_elbow'/>
let Shape905 = browser.currentScene.createNode("Shape");
let LineSet906 = browser.currentScene.createNode("LineSet");
LineSet906.vertexCount = new MFInt32(new int[2]);
let Coordinate907 = browser.currentScene.createNode("Coordinate");
Coordinate907.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet906.coord = Coordinate907;

let ColorRGBA908 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA908.USE = "HAnimSegmentLineColorRGBA";
LineSet906.color = ColorRGBA908;

Shape905.geometry = LineSet906;

HAnimSegment901.children[2] = Shape905;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_shoulder'/> to <HAnimSite name='l_humeral_lateral_epicn_pt'/>
let Shape909 = browser.currentScene.createNode("Shape");
let LineSet910 = browser.currentScene.createNode("LineSet");
LineSet910.vertexCount = new MFInt32(new int[2]);
let Coordinate911 = browser.currentScene.createNode("Coordinate");
Coordinate911.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.228,1.1482,-0.11]);
LineSet910.coord = Coordinate911;

let ColorRGBA912 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA912.USE = "HAnimSiteLineColorRGBA";
LineSet910.color = ColorRGBA912;

Shape909.geometry = LineSet910;

HAnimSegment901.children[3] = Shape909;

let HAnimSite913 = browser.currentScene.createNode("HAnimSite");
HAnimSite913.name = "l_humeral_lateral_epicn_pt_pt";
HAnimSite913.DEF = "hanim_l_humeral_lateral_epicn_pt";
HAnimSite913.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
//HAnimSite visualization shape
let TouchSensor914 = browser.currentScene.createNode("TouchSensor");
TouchSensor914.description = "HAnimSite l_humeral_lateral_epicn_pt";
HAnimSite913.children = new MFNode();

HAnimSite913.children[0] = TouchSensor914;

let Shape915 = browser.currentScene.createNode("Shape");
Shape915.USE = "HAnimSiteShape";
HAnimSite913.children[1] = Shape915;

HAnimSegment901.children[4] = HAnimSite913;

HAnimJoint900.children = new MFNode();

HAnimJoint900.children[0] = HAnimSegment901;

let HAnimJoint916 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint916.name = "l_elbow";
HAnimJoint916.DEF = "hanim_l_elbow";
HAnimJoint916.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
let HAnimSegment917 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment917.name = "l_forearm";
HAnimSegment917.DEF = "hanim_l_forearm";
//Visualization sphere for <HAnimJoint name='l_elbow'/> is placed within <HAnimSegment name='l_forearm'/>
let TouchSensor918 = browser.currentScene.createNode("TouchSensor");
TouchSensor918.description = "HAnimJoint l_elbow, HAnimSegment l_forearm";
HAnimSegment917.children = new MFNode();

HAnimSegment917.children[0] = TouchSensor918;

let Transform919 = browser.currentScene.createNode("Transform");
Transform919.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
let Shape920 = browser.currentScene.createNode("Shape");
Shape920.USE = "HAnimJointShape";
Transform919.children = new MFNode();

Transform919.children[0] = Shape920;

HAnimSegment917.children[1] = Transform919;

//HAnimSegment visualization line from current <HAnimJoint name='l_elbow'/> to child <HAnimJoint name='l_radiocarpal'/>
let Shape921 = browser.currentScene.createNode("Shape");
let LineSet922 = browser.currentScene.createNode("LineSet");
LineSet922.vertexCount = new MFInt32(new int[2]);
let Coordinate923 = browser.currentScene.createNode("Coordinate");
Coordinate923.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet922.coord = Coordinate923;

let ColorRGBA924 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA924.USE = "HAnimSegmentLineColorRGBA";
LineSet922.color = ColorRGBA924;

Shape921.geometry = LineSet922;

HAnimSegment917.children[2] = Shape921;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radial_styloid_pt'/>
let Shape925 = browser.currentScene.createNode("Shape");
let LineSet926 = browser.currentScene.createNode("LineSet");
LineSet926.vertexCount = new MFInt32(new int[2]);
let Coordinate927 = browser.currentScene.createNode("Coordinate");
Coordinate927.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415]);
LineSet926.coord = Coordinate927;

let ColorRGBA928 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA928.USE = "HAnimSiteLineColorRGBA";
LineSet926.color = ColorRGBA928;

Shape925.geometry = LineSet926;

HAnimSegment917.children[3] = Shape925;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_olecranon_pt'/>
let Shape929 = browser.currentScene.createNode("Shape");
let LineSet930 = browser.currentScene.createNode("LineSet");
LineSet930.vertexCount = new MFInt32(new int[2]);
let Coordinate931 = browser.currentScene.createNode("Coordinate");
Coordinate931.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123]);
LineSet930.coord = Coordinate931;

let ColorRGBA932 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA932.USE = "HAnimSiteLineColorRGBA";
LineSet930.color = ColorRGBA932;

Shape929.geometry = LineSet930;

HAnimSegment917.children[4] = Shape929;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_humeral_medial_epicn_pt'/>
let Shape933 = browser.currentScene.createNode("Shape");
let LineSet934 = browser.currentScene.createNode("LineSet");
LineSet934.vertexCount = new MFInt32(new int[2]);
let Coordinate935 = browser.currentScene.createNode("Coordinate");
Coordinate935.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113]);
LineSet934.coord = Coordinate935;

let ColorRGBA936 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA936.USE = "HAnimSiteLineColorRGBA";
LineSet934.color = ColorRGBA936;

Shape933.geometry = LineSet934;

HAnimSegment917.children[5] = Shape933;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radiale_pt'/>
let Shape937 = browser.currentScene.createNode("Shape");
let LineSet938 = browser.currentScene.createNode("LineSet");
LineSet938.vertexCount = new MFInt32(new int[2]);
let Coordinate939 = browser.currentScene.createNode("Coordinate");
Coordinate939.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167]);
LineSet938.coord = Coordinate939;

let ColorRGBA940 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA940.USE = "HAnimSiteLineColorRGBA";
LineSet938.color = ColorRGBA940;

Shape937.geometry = LineSet938;

HAnimSegment917.children[6] = Shape937;

let HAnimSite941 = browser.currentScene.createNode("HAnimSite");
HAnimSite941.name = "l_radial_styloid_pt_pt";
HAnimSite941.DEF = "hanim_l_radial_styloid_pt";
HAnimSite941.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
//HAnimSite visualization shape
let TouchSensor942 = browser.currentScene.createNode("TouchSensor");
TouchSensor942.description = "HAnimSite l_radial_styloid_pt";
HAnimSite941.children = new MFNode();

HAnimSite941.children[0] = TouchSensor942;

let Shape943 = browser.currentScene.createNode("Shape");
Shape943.USE = "HAnimSiteShape";
HAnimSite941.children[1] = Shape943;

HAnimSegment917.children[7] = HAnimSite941;

let HAnimSite944 = browser.currentScene.createNode("HAnimSite");
HAnimSite944.name = "l_olecranon_pt_pt";
HAnimSite944.DEF = "hanim_l_olecranon_pt";
HAnimSite944.translation = new SFVec3f(new float[0.1962,1.1375,-0.1123]);
//HAnimSite visualization shape
let TouchSensor945 = browser.currentScene.createNode("TouchSensor");
TouchSensor945.description = "HAnimSite l_olecranon_pt";
HAnimSite944.children = new MFNode();

HAnimSite944.children[0] = TouchSensor945;

let Shape946 = browser.currentScene.createNode("Shape");
Shape946.USE = "HAnimSiteShape";
HAnimSite944.children[1] = Shape946;

HAnimSegment917.children[8] = HAnimSite944;

let HAnimSite947 = browser.currentScene.createNode("HAnimSite");
HAnimSite947.name = "l_humeral_medial_epicn_pt_pt";
HAnimSite947.DEF = "hanim_l_humeral_medial_epicn_pt";
HAnimSite947.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
//HAnimSite visualization shape
let TouchSensor948 = browser.currentScene.createNode("TouchSensor");
TouchSensor948.description = "HAnimSite l_humeral_medial_epicn_pt";
HAnimSite947.children = new MFNode();

HAnimSite947.children[0] = TouchSensor948;

let Shape949 = browser.currentScene.createNode("Shape");
Shape949.USE = "HAnimSiteShape";
HAnimSite947.children[1] = Shape949;

HAnimSegment917.children[9] = HAnimSite947;

let HAnimSite950 = browser.currentScene.createNode("HAnimSite");
HAnimSite950.name = "l_radiale_pt_pt";
HAnimSite950.DEF = "hanim_l_radiale_pt";
HAnimSite950.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
//HAnimSite visualization shape
let TouchSensor951 = browser.currentScene.createNode("TouchSensor");
TouchSensor951.description = "HAnimSite l_radiale_pt";
HAnimSite950.children = new MFNode();

HAnimSite950.children[0] = TouchSensor951;

let Shape952 = browser.currentScene.createNode("Shape");
Shape952.USE = "HAnimSiteShape";
HAnimSite950.children[1] = Shape952;

HAnimSegment917.children[10] = HAnimSite950;

HAnimJoint916.children = new MFNode();

HAnimJoint916.children[0] = HAnimSegment917;

let HAnimJoint953 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint953.name = "l_radiocarpal";
HAnimJoint953.DEF = "hanim_l_radiocarpal";
HAnimJoint953.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
let HAnimSegment954 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment954.name = "l_carpal";
HAnimSegment954.DEF = "hanim_l_carpal";
//Visualization sphere for <HAnimJoint name='l_radiocarpal'/> is placed within <HAnimSegment name='l_carpal'/>
let TouchSensor955 = browser.currentScene.createNode("TouchSensor");
TouchSensor955.description = "HAnimJoint l_radiocarpal, HAnimSegment l_carpal";
HAnimSegment954.children = new MFNode();

HAnimSegment954.children[0] = TouchSensor955;

let Transform956 = browser.currentScene.createNode("Transform");
Transform956.translation = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
let Shape957 = browser.currentScene.createNode("Shape");
Shape957.USE = "HAnimJointShape";
Transform956.children = new MFNode();

Transform956.children[0] = Shape957;

HAnimSegment954.children[1] = Transform956;

//HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_thumb1'/>
let Shape958 = browser.currentScene.createNode("Shape");
let LineSet959 = browser.currentScene.createNode("LineSet");
LineSet959.vertexCount = new MFInt32(new int[2]);
let Coordinate960 = browser.currentScene.createNode("Coordinate");
Coordinate960.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534]);
LineSet959.coord = Coordinate960;

let ColorRGBA961 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA961.USE = "HAnimSegmentLineColorRGBA";
LineSet959.color = ColorRGBA961;

Shape958.geometry = LineSet959;

HAnimSegment954.children[2] = Shape958;

//HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_index0'/>
let Shape962 = browser.currentScene.createNode("Shape");
let LineSet963 = browser.currentScene.createNode("LineSet");
LineSet963.vertexCount = new MFInt32(new int[2]);
let Coordinate964 = browser.currentScene.createNode("Coordinate");
Coordinate964.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028]);
LineSet963.coord = Coordinate964;

let ColorRGBA965 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA965.USE = "HAnimSegmentLineColorRGBA";
LineSet963.color = ColorRGBA965;

Shape962.geometry = LineSet963;

HAnimSegment954.children[3] = Shape962;

//HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_middle0'/>
let Shape966 = browser.currentScene.createNode("Shape");
let LineSet967 = browser.currentScene.createNode("LineSet");
LineSet967.vertexCount = new MFInt32(new int[2]);
let Coordinate968 = browser.currentScene.createNode("Coordinate");
Coordinate968.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053]);
LineSet967.coord = Coordinate968;

let ColorRGBA969 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA969.USE = "HAnimSegmentLineColorRGBA";
LineSet967.color = ColorRGBA969;

Shape966.geometry = LineSet967;

HAnimSegment954.children[4] = Shape966;

//HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_ring0'/>
let Shape970 = browser.currentScene.createNode("Shape");
let LineSet971 = browser.currentScene.createNode("LineSet");
LineSet971.vertexCount = new MFInt32(new int[2]);
let Coordinate972 = browser.currentScene.createNode("Coordinate");
Coordinate972.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794]);
LineSet971.coord = Coordinate972;

let ColorRGBA973 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA973.USE = "HAnimSegmentLineColorRGBA";
LineSet971.color = ColorRGBA973;

Shape970.geometry = LineSet971;

HAnimSegment954.children[5] = Shape970;

//HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_pinky0'/>
let Shape974 = browser.currentScene.createNode("Shape");
let LineSet975 = browser.currentScene.createNode("LineSet");
LineSet975.vertexCount = new MFInt32(new int[2]);
let Coordinate976 = browser.currentScene.createNode("Coordinate");
Coordinate976.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036]);
LineSet975.coord = Coordinate976;

let ColorRGBA977 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA977.USE = "HAnimSegmentLineColorRGBA";
LineSet975.color = ColorRGBA977;

Shape974.geometry = LineSet975;

HAnimSegment954.children[6] = Shape974;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_radiocarpal'/> to <HAnimSite name='l_metacarpal_pha2_pt'/>
let Shape978 = browser.currentScene.createNode("Shape");
let LineSet979 = browser.currentScene.createNode("LineSet");
LineSet979.vertexCount = new MFInt32(new int[2]);
let Coordinate980 = browser.currentScene.createNode("Coordinate");
Coordinate980.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237]);
LineSet979.coord = Coordinate980;

let ColorRGBA981 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA981.USE = "HAnimSiteLineColorRGBA";
LineSet979.color = ColorRGBA981;

Shape978.geometry = LineSet979;

HAnimSegment954.children[7] = Shape978;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_radiocarpal'/> to <HAnimSite name='l_ulnar_styloid_pt'/>
let Shape982 = browser.currentScene.createNode("Shape");
let LineSet983 = browser.currentScene.createNode("LineSet");
LineSet983.vertexCount = new MFInt32(new int[2]);
let Coordinate984 = browser.currentScene.createNode("Coordinate");
Coordinate984.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648]);
LineSet983.coord = Coordinate984;

let ColorRGBA985 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA985.USE = "HAnimSiteLineColorRGBA";
LineSet983.color = ColorRGBA985;

Shape982.geometry = LineSet983;

HAnimSegment954.children[8] = Shape982;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_radiocarpal'/> to <HAnimSite name='l_metacarpal_pha5_pt'/>
let Shape986 = browser.currentScene.createNode("Shape");
let LineSet987 = browser.currentScene.createNode("LineSet");
LineSet987.vertexCount = new MFInt32(new int[2]);
let Coordinate988 = browser.currentScene.createNode("Coordinate");
Coordinate988.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122]);
LineSet987.coord = Coordinate988;

let ColorRGBA989 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA989.USE = "HAnimSiteLineColorRGBA";
LineSet987.color = ColorRGBA989;

Shape986.geometry = LineSet987;

HAnimSegment954.children[9] = Shape986;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_radiocarpal'/> to <HAnimSite name='l_hand_front_view'/>
let Shape990 = browser.currentScene.createNode("Shape");
let LineSet991 = browser.currentScene.createNode("LineSet");
LineSet991.vertexCount = new MFInt32(new int[2]);
let Coordinate992 = browser.currentScene.createNode("Coordinate");
Coordinate992.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.3,0.75,0.45]);
LineSet991.coord = Coordinate992;

let ColorRGBA993 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA993.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet991.color = ColorRGBA993;

Shape990.geometry = LineSet991;

HAnimSegment954.children[10] = Shape990;

let HAnimSite994 = browser.currentScene.createNode("HAnimSite");
HAnimSite994.name = "l_metacarpal_pha2_pt_pt";
HAnimSite994.DEF = "hanim_l_metacarpal_pha2_pt";
HAnimSite994.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
//HAnimSite visualization shape
let TouchSensor995 = browser.currentScene.createNode("TouchSensor");
TouchSensor995.description = "HAnimSite l_metacarpal_pha2_pt";
HAnimSite994.children = new MFNode();

HAnimSite994.children[0] = TouchSensor995;

let Shape996 = browser.currentScene.createNode("Shape");
Shape996.USE = "HAnimSiteShape";
HAnimSite994.children[1] = Shape996;

HAnimSegment954.children[11] = HAnimSite994;

let HAnimSite997 = browser.currentScene.createNode("HAnimSite");
HAnimSite997.name = "l_ulnar_styloid_pt_pt";
HAnimSite997.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite997.translation = new SFVec3f(new float[0.2142,0.8529,-0.0648]);
//HAnimSite visualization shape
let TouchSensor998 = browser.currentScene.createNode("TouchSensor");
TouchSensor998.description = "HAnimSite l_ulnar_styloid_pt";
HAnimSite997.children = new MFNode();

HAnimSite997.children[0] = TouchSensor998;

let Shape999 = browser.currentScene.createNode("Shape");
Shape999.USE = "HAnimSiteShape";
HAnimSite997.children[1] = Shape999;

HAnimSegment954.children[12] = HAnimSite997;

let HAnimSite1000 = browser.currentScene.createNode("HAnimSite");
HAnimSite1000.name = "l_metacarpal_pha5_pt_pt";
HAnimSite1000.DEF = "hanim_l_metacarpal_pha5_pt";
HAnimSite1000.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
//HAnimSite visualization shape
let TouchSensor1001 = browser.currentScene.createNode("TouchSensor");
TouchSensor1001.description = "HAnimSite l_metacarpal_pha5_pt";
HAnimSite1000.children = new MFNode();

HAnimSite1000.children[0] = TouchSensor1001;

let Shape1002 = browser.currentScene.createNode("Shape");
Shape1002.USE = "HAnimSiteShape";
HAnimSite1000.children[1] = Shape1002;

HAnimSegment954.children[13] = HAnimSite1000;

let HAnimSite1003 = browser.currentScene.createNode("HAnimSite");
HAnimSite1003.name = "l_hand_front_view_pt";
HAnimSite1003.DEF = "hanim_l_hand_front_view";
HAnimSite1003.translation = new SFVec3f(new float[0.3,0.75,0.45]);
//HAnimSite visualization shape
let TouchSensor1004 = browser.currentScene.createNode("TouchSensor");
TouchSensor1004.description = "HAnimSite l_hand_front_view";
HAnimSite1003.children = new MFNode();

HAnimSite1003.children[0] = TouchSensor1004;

let Shape1005 = browser.currentScene.createNode("Shape");
Shape1005.USE = "HAnimSiteShape";
HAnimSite1003.children[1] = Shape1005;

let Viewpoint1006 = browser.currentScene.createNode("Viewpoint");
Viewpoint1006.DEF = "hanim_l_hand_front_viewpoint";
Viewpoint1006.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint1006.description = "left hand front";
Viewpoint1006.position = new SFVec3f(new float[0,0,0]);
HAnimSite1003.children[2] = Viewpoint1006;

//HAnimSite/Viewpoint visualization shape
let Anchor1007 = browser.currentScene.createNode("Anchor");
Anchor1007.description = "HAnimSite hanim_l_hand_front_view Viewpoint";
Anchor1007.url = new MFString(new java.lang.String["#hanim_l_hand_front_viewpoint"]);
let LOD1008 = browser.currentScene.createNode("LOD");
LOD1008.forceTransitions = True;
LOD1008.range = new MFFloat(new float[0.04]);
let WorldInfo1009 = browser.currentScene.createNode("WorldInfo");
WorldInfo1009.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1008.children = new MFNode();

LOD1008.children[0] = WorldInfo1009;

let Shape1010 = browser.currentScene.createNode("Shape");
Shape1010.USE = "HAnimSiteViewpointShape";
LOD1008.children[1] = Shape1010;

Anchor1007.children = new MFNode();

Anchor1007.children[0] = LOD1008;

HAnimSite1003.children[3] = Anchor1007;

HAnimSegment954.children[14] = HAnimSite1003;

HAnimJoint953.children = new MFNode();

HAnimJoint953.children[0] = HAnimSegment954;

let HAnimJoint1011 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1011.name = "l_thumb1";
HAnimJoint1011.DEF = "hanim_l_thumb1";
HAnimJoint1011.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
let HAnimSegment1012 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1012.name = "l_metacarpal_1";
HAnimSegment1012.DEF = "hanim_l_metacarpal_1";
//Visualization sphere for <HAnimJoint name='l_thumb1'/> is placed within <HAnimSegment name='l_metacarpal_1'/>
let TouchSensor1013 = browser.currentScene.createNode("TouchSensor");
TouchSensor1013.description = "HAnimJoint l_thumb1, HAnimSegment l_metacarpal_1";
HAnimSegment1012.children = new MFNode();

HAnimSegment1012.children[0] = TouchSensor1013;

let Transform1014 = browser.currentScene.createNode("Transform");
Transform1014.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
let Shape1015 = browser.currentScene.createNode("Shape");
Shape1015.USE = "HAnimJointShape";
Transform1014.children = new MFNode();

Transform1014.children[0] = Shape1015;

HAnimSegment1012.children[1] = Transform1014;

//HAnimSegment visualization line from current <HAnimJoint name='l_thumb1'/> to child <HAnimJoint name='l_thumb2'/>
let Shape1016 = browser.currentScene.createNode("Shape");
let LineSet1017 = browser.currentScene.createNode("LineSet");
LineSet1017.vertexCount = new MFInt32(new int[2]);
let Coordinate1018 = browser.currentScene.createNode("Coordinate");
Coordinate1018.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet1017.coord = Coordinate1018;

let ColorRGBA1019 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1019.USE = "HAnimSegmentLineColorRGBA";
LineSet1017.color = ColorRGBA1019;

Shape1016.geometry = LineSet1017;

HAnimSegment1012.children[2] = Shape1016;

HAnimJoint1011.children = new MFNode();

HAnimJoint1011.children[0] = HAnimSegment1012;

let HAnimJoint1020 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1020.name = "l_thumb2";
HAnimJoint1020.DEF = "hanim_l_thumb2";
HAnimJoint1020.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
let HAnimSegment1021 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1021.name = "l_carpal_proximal_phalanx_1";
HAnimSegment1021.DEF = "hanim_l_carpal_proximal_phalanx_1";
//Visualization sphere for <HAnimJoint name='l_thumb2'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_1'/>
let TouchSensor1022 = browser.currentScene.createNode("TouchSensor");
TouchSensor1022.description = "HAnimJoint l_thumb2, HAnimSegment l_carpal_proximal_phalanx_1";
HAnimSegment1021.children = new MFNode();

HAnimSegment1021.children[0] = TouchSensor1022;

let Transform1023 = browser.currentScene.createNode("Transform");
Transform1023.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
let Shape1024 = browser.currentScene.createNode("Shape");
Shape1024.USE = "HAnimJointShape";
Transform1023.children = new MFNode();

Transform1023.children[0] = Shape1024;

HAnimSegment1021.children[1] = Transform1023;

//HAnimSegment visualization line from current <HAnimJoint name='l_thumb2'/> to child <HAnimJoint name='l_thumb3'/>
let Shape1025 = browser.currentScene.createNode("Shape");
let LineSet1026 = browser.currentScene.createNode("LineSet");
LineSet1026.vertexCount = new MFInt32(new int[2]);
let Coordinate1027 = browser.currentScene.createNode("Coordinate");
Coordinate1027.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet1026.coord = Coordinate1027;

let ColorRGBA1028 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1028.USE = "HAnimSegmentLineColorRGBA";
LineSet1026.color = ColorRGBA1028;

Shape1025.geometry = LineSet1026;

HAnimSegment1021.children[2] = Shape1025;

HAnimJoint1020.children = new MFNode();

HAnimJoint1020.children[0] = HAnimSegment1021;

let HAnimJoint1029 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1029.name = "l_thumb3";
HAnimJoint1029.DEF = "hanim_l_thumb3";
HAnimJoint1029.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
let HAnimSegment1030 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1030.name = "l_carpal_distal_phalanx_1";
HAnimSegment1030.DEF = "hanim_l_carpal_distal_phalanx_1";
//Visualization sphere for <HAnimJoint name='l_thumb3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_1'/>
let TouchSensor1031 = browser.currentScene.createNode("TouchSensor");
TouchSensor1031.description = "HAnimJoint l_thumb3, HAnimSegment l_carpal_distal_phalanx_1";
HAnimSegment1030.children = new MFNode();

HAnimSegment1030.children[0] = TouchSensor1031;

let Transform1032 = browser.currentScene.createNode("Transform");
Transform1032.translation = new SFVec3f(new float[0.1955,0.8159,0.0464]);
let Shape1033 = browser.currentScene.createNode("Shape");
Shape1033.USE = "HAnimJointShape";
Transform1032.children = new MFNode();

Transform1032.children[0] = Shape1033;

HAnimSegment1030.children[1] = Transform1032;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_thumb3'/> to <HAnimSite name='l_thumb_distal_tip'/>
let Shape1034 = browser.currentScene.createNode("Shape");
let LineSet1035 = browser.currentScene.createNode("LineSet");
LineSet1035.vertexCount = new MFInt32(new int[2]);
let Coordinate1036 = browser.currentScene.createNode("Coordinate");
Coordinate1036.point = new MFVec3f(new float[0.1955,0.8159,0.0464,0.1982,0.8061,0.0759]);
LineSet1035.coord = Coordinate1036;

let ColorRGBA1037 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1037.USE = "HAnimSiteLineColorRGBA";
LineSet1035.color = ColorRGBA1037;

Shape1034.geometry = LineSet1035;

HAnimSegment1030.children[2] = Shape1034;

let HAnimSite1038 = browser.currentScene.createNode("HAnimSite");
HAnimSite1038.name = "l_thumb_distal_tip_pt";
HAnimSite1038.DEF = "hanim_l_thumb_distal_tip";
HAnimSite1038.translation = new SFVec3f(new float[0.1982,0.8061,0.0759]);
//HAnimSite visualization shape
let TouchSensor1039 = browser.currentScene.createNode("TouchSensor");
TouchSensor1039.description = "HAnimSite l_thumb_distal_tip";
HAnimSite1038.children = new MFNode();

HAnimSite1038.children[0] = TouchSensor1039;

let Shape1040 = browser.currentScene.createNode("Shape");
Shape1040.USE = "HAnimSiteShape";
HAnimSite1038.children[1] = Shape1040;

HAnimSegment1030.children[3] = HAnimSite1038;

HAnimJoint1029.children = new MFNode();

HAnimJoint1029.children[0] = HAnimSegment1030;

HAnimJoint1020.children[1] = HAnimJoint1029;

HAnimJoint1011.children[1] = HAnimJoint1020;

HAnimJoint953.children[1] = HAnimJoint1011;

let HAnimJoint1041 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1041.name = "l_index0";
HAnimJoint1041.DEF = "hanim_l_index0";
HAnimJoint1041.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
let HAnimSegment1042 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1042.name = "l_metacarpal_2";
HAnimSegment1042.DEF = "hanim_l_metacarpal_2";
//Visualization sphere for <HAnimJoint name='l_index0'/> is placed within <HAnimSegment name='l_metacarpal_2'/>
let TouchSensor1043 = browser.currentScene.createNode("TouchSensor");
TouchSensor1043.description = "HAnimJoint l_index0, HAnimSegment l_metacarpal_2";
HAnimSegment1042.children = new MFNode();

HAnimSegment1042.children[0] = TouchSensor1043;

let Transform1044 = browser.currentScene.createNode("Transform");
Transform1044.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
let Shape1045 = browser.currentScene.createNode("Shape");
Shape1045.USE = "HAnimJointShape";
Transform1044.children = new MFNode();

Transform1044.children[0] = Shape1045;

HAnimSegment1042.children[1] = Transform1044;

//HAnimSegment visualization line from current <HAnimJoint name='l_index0'/> to child <HAnimJoint name='l_index1'/>
let Shape1046 = browser.currentScene.createNode("Shape");
let LineSet1047 = browser.currentScene.createNode("LineSet");
LineSet1047.vertexCount = new MFInt32(new int[2]);
let Coordinate1048 = browser.currentScene.createNode("Coordinate");
Coordinate1048.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet1047.coord = Coordinate1048;

let ColorRGBA1049 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1049.USE = "HAnimSegmentLineColorRGBA";
LineSet1047.color = ColorRGBA1049;

Shape1046.geometry = LineSet1047;

HAnimSegment1042.children[2] = Shape1046;

HAnimJoint1041.children = new MFNode();

HAnimJoint1041.children[0] = HAnimSegment1042;

let HAnimJoint1050 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1050.name = "l_index1";
HAnimJoint1050.DEF = "hanim_l_index1";
HAnimJoint1050.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
let HAnimSegment1051 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1051.name = "l_carpal_proximal_phalanx_2";
HAnimSegment1051.DEF = "hanim_l_carpal_proximal_phalanx_2";
//Visualization sphere for <HAnimJoint name='l_index1'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_2'/>
let TouchSensor1052 = browser.currentScene.createNode("TouchSensor");
TouchSensor1052.description = "HAnimJoint l_index1, HAnimSegment l_carpal_proximal_phalanx_2";
HAnimSegment1051.children = new MFNode();

HAnimSegment1051.children[0] = TouchSensor1052;

let Transform1053 = browser.currentScene.createNode("Transform");
Transform1053.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
let Shape1054 = browser.currentScene.createNode("Shape");
Shape1054.USE = "HAnimJointShape";
Transform1053.children = new MFNode();

Transform1053.children[0] = Shape1054;

HAnimSegment1051.children[1] = Transform1053;

//HAnimSegment visualization line from current <HAnimJoint name='l_index1'/> to child <HAnimJoint name='l_index2'/>
let Shape1055 = browser.currentScene.createNode("Shape");
let LineSet1056 = browser.currentScene.createNode("LineSet");
LineSet1056.vertexCount = new MFInt32(new int[2]);
let Coordinate1057 = browser.currentScene.createNode("Coordinate");
Coordinate1057.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet1056.coord = Coordinate1057;

let ColorRGBA1058 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1058.USE = "HAnimSegmentLineColorRGBA";
LineSet1056.color = ColorRGBA1058;

Shape1055.geometry = LineSet1056;

HAnimSegment1051.children[2] = Shape1055;

HAnimJoint1050.children = new MFNode();

HAnimJoint1050.children[0] = HAnimSegment1051;

let HAnimJoint1059 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1059.name = "l_index2";
HAnimJoint1059.DEF = "hanim_l_index2";
HAnimJoint1059.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
let HAnimSegment1060 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1060.name = "l_carpal_middle_phalanx_2";
HAnimSegment1060.DEF = "hanim_l_carpal_middle_phalanx_2";
//Visualization sphere for <HAnimJoint name='l_index2'/> is placed within <HAnimSegment name='l_carpal_middle_phalanx_2'/>
let TouchSensor1061 = browser.currentScene.createNode("TouchSensor");
TouchSensor1061.description = "HAnimJoint l_index2, HAnimSegment l_carpal_middle_phalanx_2";
HAnimSegment1060.children = new MFNode();

HAnimSegment1060.children[0] = TouchSensor1061;

let Transform1062 = browser.currentScene.createNode("Transform");
Transform1062.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
let Shape1063 = browser.currentScene.createNode("Shape");
Shape1063.USE = "HAnimJointShape";
Transform1062.children = new MFNode();

Transform1062.children[0] = Shape1063;

HAnimSegment1060.children[1] = Transform1062;

//HAnimSegment visualization line from current <HAnimJoint name='l_index2'/> to child <HAnimJoint name='l_index3'/>
let Shape1064 = browser.currentScene.createNode("Shape");
let LineSet1065 = browser.currentScene.createNode("LineSet");
LineSet1065.vertexCount = new MFInt32(new int[2]);
let Coordinate1066 = browser.currentScene.createNode("Coordinate");
Coordinate1066.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet1065.coord = Coordinate1066;

let ColorRGBA1067 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1067.USE = "HAnimSegmentLineColorRGBA";
LineSet1065.color = ColorRGBA1067;

Shape1064.geometry = LineSet1065;

HAnimSegment1060.children[2] = Shape1064;

HAnimJoint1059.children = new MFNode();

HAnimJoint1059.children[0] = HAnimSegment1060;

let HAnimJoint1068 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1068.name = "l_index3";
HAnimJoint1068.DEF = "hanim_l_index3";
HAnimJoint1068.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
let HAnimSegment1069 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1069.name = "l_carpal_distal_phalanx_2";
HAnimSegment1069.DEF = "hanim_l_carpal_distal_phalanx_2";
//Visualization sphere for <HAnimJoint name='l_index3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_2'/>
let TouchSensor1070 = browser.currentScene.createNode("TouchSensor");
TouchSensor1070.description = "HAnimJoint l_index3, HAnimSegment l_carpal_distal_phalanx_2";
HAnimSegment1069.children = new MFNode();

HAnimSegment1069.children[0] = TouchSensor1070;

let Transform1071 = browser.currentScene.createNode("Transform");
Transform1071.translation = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
let Shape1072 = browser.currentScene.createNode("Shape");
Shape1072.USE = "HAnimJointShape";
Transform1071.children = new MFNode();

Transform1071.children[0] = Shape1072;

HAnimSegment1069.children[1] = Transform1071;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_index_distal_tip'/>
let Shape1073 = browser.currentScene.createNode("Shape");
let LineSet1074 = browser.currentScene.createNode("LineSet");
LineSet1074.vertexCount = new MFInt32(new int[2]);
let Coordinate1075 = browser.currentScene.createNode("Coordinate");
Coordinate1075.point = new MFVec3f(new float[0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245]);
LineSet1074.coord = Coordinate1075;

let ColorRGBA1076 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1076.USE = "HAnimSiteLineColorRGBA";
LineSet1074.color = ColorRGBA1076;

Shape1073.geometry = LineSet1074;

HAnimSegment1069.children[2] = Shape1073;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_dactylion_pt'/>
let Shape1077 = browser.currentScene.createNode("Shape");
let LineSet1078 = browser.currentScene.createNode("LineSet");
LineSet1078.vertexCount = new MFInt32(new int[2]);
let Coordinate1079 = browser.currentScene.createNode("Coordinate");
Coordinate1079.point = new MFVec3f(new float[0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482]);
LineSet1078.coord = Coordinate1079;

let ColorRGBA1080 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1080.USE = "HAnimSiteLineColorRGBA";
LineSet1078.color = ColorRGBA1080;

Shape1077.geometry = LineSet1078;

HAnimSegment1069.children[3] = Shape1077;

let HAnimSite1081 = browser.currentScene.createNode("HAnimSite");
HAnimSite1081.name = "l_index_distal_tip_pt";
HAnimSite1081.DEF = "hanim_l_index_distal_tip";
HAnimSite1081.translation = new SFVec3f(new float[0.2089,0.6858,-0.0245]);
//HAnimSite visualization shape
let TouchSensor1082 = browser.currentScene.createNode("TouchSensor");
TouchSensor1082.description = "HAnimSite l_index_distal_tip";
HAnimSite1081.children = new MFNode();

HAnimSite1081.children[0] = TouchSensor1082;

let Shape1083 = browser.currentScene.createNode("Shape");
Shape1083.USE = "HAnimSiteShape";
HAnimSite1081.children[1] = Shape1083;

HAnimSegment1069.children[4] = HAnimSite1081;

let HAnimSite1084 = browser.currentScene.createNode("HAnimSite");
HAnimSite1084.name = "l_dactylion_pt_pt";
HAnimSite1084.DEF = "hanim_l_dactylion_pt";
HAnimSite1084.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
//HAnimSite visualization shape
let TouchSensor1085 = browser.currentScene.createNode("TouchSensor");
TouchSensor1085.description = "HAnimSite l_dactylion_pt";
HAnimSite1084.children = new MFNode();

HAnimSite1084.children[0] = TouchSensor1085;

let Shape1086 = browser.currentScene.createNode("Shape");
Shape1086.USE = "HAnimSiteShape";
HAnimSite1084.children[1] = Shape1086;

HAnimSegment1069.children[5] = HAnimSite1084;

HAnimJoint1068.children = new MFNode();

HAnimJoint1068.children[0] = HAnimSegment1069;

HAnimJoint1059.children[1] = HAnimJoint1068;

HAnimJoint1050.children[1] = HAnimJoint1059;

HAnimJoint1041.children[1] = HAnimJoint1050;

HAnimJoint953.children[2] = HAnimJoint1041;

let HAnimJoint1087 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1087.name = "l_middle0";
HAnimJoint1087.DEF = "hanim_l_middle0";
HAnimJoint1087.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
let HAnimSegment1088 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1088.name = "l_metacarpal_3";
HAnimSegment1088.DEF = "hanim_l_metacarpal_3";
//Visualization sphere for <HAnimJoint name='l_middle0'/> is placed within <HAnimSegment name='l_metacarpal_3'/>
let TouchSensor1089 = browser.currentScene.createNode("TouchSensor");
TouchSensor1089.description = "HAnimJoint l_middle0, HAnimSegment l_metacarpal_3";
HAnimSegment1088.children = new MFNode();

HAnimSegment1088.children[0] = TouchSensor1089;

let Transform1090 = browser.currentScene.createNode("Transform");
Transform1090.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
let Shape1091 = browser.currentScene.createNode("Shape");
Shape1091.USE = "HAnimJointShape";
Transform1090.children = new MFNode();

Transform1090.children[0] = Shape1091;

HAnimSegment1088.children[1] = Transform1090;

//HAnimSegment visualization line from current <HAnimJoint name='l_middle0'/> to child <HAnimJoint name='l_middle1'/>
let Shape1092 = browser.currentScene.createNode("Shape");
let LineSet1093 = browser.currentScene.createNode("LineSet");
LineSet1093.vertexCount = new MFInt32(new int[2]);
let Coordinate1094 = browser.currentScene.createNode("Coordinate");
Coordinate1094.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet1093.coord = Coordinate1094;

let ColorRGBA1095 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1095.USE = "HAnimSegmentLineColorRGBA";
LineSet1093.color = ColorRGBA1095;

Shape1092.geometry = LineSet1093;

HAnimSegment1088.children[2] = Shape1092;

HAnimJoint1087.children = new MFNode();

HAnimJoint1087.children[0] = HAnimSegment1088;

let HAnimJoint1096 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1096.name = "l_middle1";
HAnimJoint1096.DEF = "hanim_l_middle1";
HAnimJoint1096.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
let HAnimSegment1097 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1097.name = "l_carpal_proximal_phalanx_3";
HAnimSegment1097.DEF = "hanim_l_carpal_proximal_phalanx_3";
//Visualization sphere for <HAnimJoint name='l_middle1'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_3'/>
let TouchSensor1098 = browser.currentScene.createNode("TouchSensor");
TouchSensor1098.description = "HAnimJoint l_middle1, HAnimSegment l_carpal_proximal_phalanx_3";
HAnimSegment1097.children = new MFNode();

HAnimSegment1097.children[0] = TouchSensor1098;

let Transform1099 = browser.currentScene.createNode("Transform");
Transform1099.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
let Shape1100 = browser.currentScene.createNode("Shape");
Shape1100.USE = "HAnimJointShape";
Transform1099.children = new MFNode();

Transform1099.children[0] = Shape1100;

HAnimSegment1097.children[1] = Transform1099;

//HAnimSegment visualization line from current <HAnimJoint name='l_middle1'/> to child <HAnimJoint name='l_middle2'/>
let Shape1101 = browser.currentScene.createNode("Shape");
let LineSet1102 = browser.currentScene.createNode("LineSet");
LineSet1102.vertexCount = new MFInt32(new int[2]);
let Coordinate1103 = browser.currentScene.createNode("Coordinate");
Coordinate1103.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet1102.coord = Coordinate1103;

let ColorRGBA1104 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1104.USE = "HAnimSegmentLineColorRGBA";
LineSet1102.color = ColorRGBA1104;

Shape1101.geometry = LineSet1102;

HAnimSegment1097.children[2] = Shape1101;

HAnimJoint1096.children = new MFNode();

HAnimJoint1096.children[0] = HAnimSegment1097;

let HAnimJoint1105 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1105.name = "l_middle2";
HAnimJoint1105.DEF = "hanim_l_middle2";
HAnimJoint1105.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
let HAnimSegment1106 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1106.name = "l_carpal_middle_phalanx_3";
HAnimSegment1106.DEF = "hanim_l_carpal_middle_phalanx_3";
//Visualization sphere for <HAnimJoint name='l_middle2'/> is placed within <HAnimSegment name='l_carpal_middle_phalanx_3'/>
let TouchSensor1107 = browser.currentScene.createNode("TouchSensor");
TouchSensor1107.description = "HAnimJoint l_middle2, HAnimSegment l_carpal_middle_phalanx_3";
HAnimSegment1106.children = new MFNode();

HAnimSegment1106.children[0] = TouchSensor1107;

let Transform1108 = browser.currentScene.createNode("Transform");
Transform1108.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
let Shape1109 = browser.currentScene.createNode("Shape");
Shape1109.USE = "HAnimJointShape";
Transform1108.children = new MFNode();

Transform1108.children[0] = Shape1109;

HAnimSegment1106.children[1] = Transform1108;

//HAnimSegment visualization line from current <HAnimJoint name='l_middle2'/> to child <HAnimJoint name='l_middle3'/>
let Shape1110 = browser.currentScene.createNode("Shape");
let LineSet1111 = browser.currentScene.createNode("LineSet");
LineSet1111.vertexCount = new MFInt32(new int[2]);
let Coordinate1112 = browser.currentScene.createNode("Coordinate");
Coordinate1112.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet1111.coord = Coordinate1112;

let ColorRGBA1113 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1113.USE = "HAnimSegmentLineColorRGBA";
LineSet1111.color = ColorRGBA1113;

Shape1110.geometry = LineSet1111;

HAnimSegment1106.children[2] = Shape1110;

HAnimJoint1105.children = new MFNode();

HAnimJoint1105.children[0] = HAnimSegment1106;

let HAnimJoint1114 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1114.name = "l_middle3";
HAnimJoint1114.DEF = "hanim_l_middle3";
HAnimJoint1114.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
let HAnimSegment1115 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1115.name = "l_carpal_distal_phalanx_3";
HAnimSegment1115.DEF = "hanim_l_carpal_distal_phalanx_3";
//Visualization sphere for <HAnimJoint name='l_middle3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_3'/>
let TouchSensor1116 = browser.currentScene.createNode("TouchSensor");
TouchSensor1116.description = "HAnimJoint l_middle3, HAnimSegment l_carpal_distal_phalanx_3";
HAnimSegment1115.children = new MFNode();

HAnimSegment1115.children[0] = TouchSensor1116;

let Transform1117 = browser.currentScene.createNode("Transform");
Transform1117.translation = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
let Shape1118 = browser.currentScene.createNode("Shape");
Shape1118.USE = "HAnimJointShape";
Transform1117.children = new MFNode();

Transform1117.children[0] = Shape1118;

HAnimSegment1115.children[1] = Transform1117;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_middle3'/> to <HAnimSite name='l_middle_distal_tip'/>
let Shape1119 = browser.currentScene.createNode("Shape");
let LineSet1120 = browser.currentScene.createNode("LineSet");
LineSet1120.vertexCount = new MFInt32(new int[2]);
let Coordinate1121 = browser.currentScene.createNode("Coordinate");
Coordinate1121.point = new MFVec3f(new float[0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491]);
LineSet1120.coord = Coordinate1121;

let ColorRGBA1122 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1122.USE = "HAnimSiteLineColorRGBA";
LineSet1120.color = ColorRGBA1122;

Shape1119.geometry = LineSet1120;

HAnimSegment1115.children[2] = Shape1119;

let HAnimSite1123 = browser.currentScene.createNode("HAnimSite");
HAnimSite1123.name = "l_middle_distal_tip_pt";
HAnimSite1123.DEF = "hanim_l_middle_distal_tip";
HAnimSite1123.translation = new SFVec3f(new float[0.208,0.6731,-0.0491]);
//HAnimSite visualization shape
let TouchSensor1124 = browser.currentScene.createNode("TouchSensor");
TouchSensor1124.description = "HAnimSite l_middle_distal_tip";
HAnimSite1123.children = new MFNode();

HAnimSite1123.children[0] = TouchSensor1124;

let Shape1125 = browser.currentScene.createNode("Shape");
Shape1125.USE = "HAnimSiteShape";
HAnimSite1123.children[1] = Shape1125;

HAnimSegment1115.children[3] = HAnimSite1123;

HAnimJoint1114.children = new MFNode();

HAnimJoint1114.children[0] = HAnimSegment1115;

HAnimJoint1105.children[1] = HAnimJoint1114;

HAnimJoint1096.children[1] = HAnimJoint1105;

HAnimJoint1087.children[1] = HAnimJoint1096;

HAnimJoint953.children[3] = HAnimJoint1087;

let HAnimJoint1126 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1126.name = "l_ring0";
HAnimJoint1126.DEF = "hanim_l_ring0";
HAnimJoint1126.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
let HAnimSegment1127 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1127.name = "l_metacarpal_4";
HAnimSegment1127.DEF = "hanim_l_metacarpal_4";
//Visualization sphere for <HAnimJoint name='l_ring0'/> is placed within <HAnimSegment name='l_metacarpal_4'/>
let TouchSensor1128 = browser.currentScene.createNode("TouchSensor");
TouchSensor1128.description = "HAnimJoint l_ring0, HAnimSegment l_metacarpal_4";
HAnimSegment1127.children = new MFNode();

HAnimSegment1127.children[0] = TouchSensor1128;

let Transform1129 = browser.currentScene.createNode("Transform");
Transform1129.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
let Shape1130 = browser.currentScene.createNode("Shape");
Shape1130.USE = "HAnimJointShape";
Transform1129.children = new MFNode();

Transform1129.children[0] = Shape1130;

HAnimSegment1127.children[1] = Transform1129;

//HAnimSegment visualization line from current <HAnimJoint name='l_ring0'/> to child <HAnimJoint name='l_ring1'/>
let Shape1131 = browser.currentScene.createNode("Shape");
let LineSet1132 = browser.currentScene.createNode("LineSet");
LineSet1132.vertexCount = new MFInt32(new int[2]);
let Coordinate1133 = browser.currentScene.createNode("Coordinate");
Coordinate1133.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet1132.coord = Coordinate1133;

let ColorRGBA1134 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1134.USE = "HAnimSegmentLineColorRGBA";
LineSet1132.color = ColorRGBA1134;

Shape1131.geometry = LineSet1132;

HAnimSegment1127.children[2] = Shape1131;

HAnimJoint1126.children = new MFNode();

HAnimJoint1126.children[0] = HAnimSegment1127;

let HAnimJoint1135 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1135.name = "l_ring1";
HAnimJoint1135.DEF = "hanim_l_ring1";
HAnimJoint1135.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
let HAnimSegment1136 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1136.name = "l_carpal_proximal_phalanx_4";
HAnimSegment1136.DEF = "hanim_l_carpal_proximal_phalanx_4";
//Visualization sphere for <HAnimJoint name='l_ring1'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_4'/>
let TouchSensor1137 = browser.currentScene.createNode("TouchSensor");
TouchSensor1137.description = "HAnimJoint l_ring1, HAnimSegment l_carpal_proximal_phalanx_4";
HAnimSegment1136.children = new MFNode();

HAnimSegment1136.children[0] = TouchSensor1137;

let Transform1138 = browser.currentScene.createNode("Transform");
Transform1138.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
let Shape1139 = browser.currentScene.createNode("Shape");
Shape1139.USE = "HAnimJointShape";
Transform1138.children = new MFNode();

Transform1138.children[0] = Shape1139;

HAnimSegment1136.children[1] = Transform1138;

//HAnimSegment visualization line from current <HAnimJoint name='l_ring1'/> to child <HAnimJoint name='l_ring2'/>
let Shape1140 = browser.currentScene.createNode("Shape");
let LineSet1141 = browser.currentScene.createNode("LineSet");
LineSet1141.vertexCount = new MFInt32(new int[2]);
let Coordinate1142 = browser.currentScene.createNode("Coordinate");
Coordinate1142.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet1141.coord = Coordinate1142;

let ColorRGBA1143 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1143.USE = "HAnimSegmentLineColorRGBA";
LineSet1141.color = ColorRGBA1143;

Shape1140.geometry = LineSet1141;

HAnimSegment1136.children[2] = Shape1140;

HAnimJoint1135.children = new MFNode();

HAnimJoint1135.children[0] = HAnimSegment1136;

let HAnimJoint1144 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1144.name = "l_ring2";
HAnimJoint1144.DEF = "hanim_l_ring2";
HAnimJoint1144.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
let HAnimSegment1145 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1145.name = "l_carpal_middle_phalanx_4";
HAnimSegment1145.DEF = "hanim_l_carpal_middle_phalanx_4";
//Visualization sphere for <HAnimJoint name='l_ring2'/> is placed within <HAnimSegment name='l_carpal_middle_phalanx_4'/>
let TouchSensor1146 = browser.currentScene.createNode("TouchSensor");
TouchSensor1146.description = "HAnimJoint l_ring2, HAnimSegment l_carpal_middle_phalanx_4";
HAnimSegment1145.children = new MFNode();

HAnimSegment1145.children[0] = TouchSensor1146;

let Transform1147 = browser.currentScene.createNode("Transform");
Transform1147.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
let Shape1148 = browser.currentScene.createNode("Shape");
Shape1148.USE = "HAnimJointShape";
Transform1147.children = new MFNode();

Transform1147.children[0] = Shape1148;

HAnimSegment1145.children[1] = Transform1147;

//HAnimSegment visualization line from current <HAnimJoint name='l_ring2'/> to child <HAnimJoint name='l_ring3'/>
let Shape1149 = browser.currentScene.createNode("Shape");
let LineSet1150 = browser.currentScene.createNode("LineSet");
LineSet1150.vertexCount = new MFInt32(new int[2]);
let Coordinate1151 = browser.currentScene.createNode("Coordinate");
Coordinate1151.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet1150.coord = Coordinate1151;

let ColorRGBA1152 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1152.USE = "HAnimSegmentLineColorRGBA";
LineSet1150.color = ColorRGBA1152;

Shape1149.geometry = LineSet1150;

HAnimSegment1145.children[2] = Shape1149;

HAnimJoint1144.children = new MFNode();

HAnimJoint1144.children[0] = HAnimSegment1145;

let HAnimJoint1153 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1153.name = "l_ring3";
HAnimJoint1153.DEF = "hanim_l_ring3";
HAnimJoint1153.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
let HAnimSegment1154 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1154.name = "l_carpal_distal_phalanx_4";
HAnimSegment1154.DEF = "hanim_l_carpal_distal_phalanx_4";
//Visualization sphere for <HAnimJoint name='l_ring3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_4'/>
let TouchSensor1155 = browser.currentScene.createNode("TouchSensor");
TouchSensor1155.description = "HAnimJoint l_ring3, HAnimSegment l_carpal_distal_phalanx_4";
HAnimSegment1154.children = new MFNode();

HAnimSegment1154.children[0] = TouchSensor1155;

let Transform1156 = browser.currentScene.createNode("Transform");
Transform1156.translation = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
let Shape1157 = browser.currentScene.createNode("Shape");
Shape1157.USE = "HAnimJointShape";
Transform1156.children = new MFNode();

Transform1156.children[0] = Shape1157;

HAnimSegment1154.children[1] = Transform1156;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ring3'/> to <HAnimSite name='l_ring_distal_tip'/>
let Shape1158 = browser.currentScene.createNode("Shape");
let LineSet1159 = browser.currentScene.createNode("LineSet");
LineSet1159.vertexCount = new MFInt32(new int[2]);
let Coordinate1160 = browser.currentScene.createNode("Coordinate");
Coordinate1160.point = new MFVec3f(new float[0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756]);
LineSet1159.coord = Coordinate1160;

let ColorRGBA1161 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1161.USE = "HAnimSiteLineColorRGBA";
LineSet1159.color = ColorRGBA1161;

Shape1158.geometry = LineSet1159;

HAnimSegment1154.children[2] = Shape1158;

let HAnimSite1162 = browser.currentScene.createNode("HAnimSite");
HAnimSite1162.name = "l_ring_distal_tip_pt";
HAnimSite1162.DEF = "hanim_l_ring_distal_tip";
HAnimSite1162.translation = new SFVec3f(new float[0.2035,0.675,-0.0756]);
//HAnimSite visualization shape
let TouchSensor1163 = browser.currentScene.createNode("TouchSensor");
TouchSensor1163.description = "HAnimSite l_ring_distal_tip";
HAnimSite1162.children = new MFNode();

HAnimSite1162.children[0] = TouchSensor1163;

let Shape1164 = browser.currentScene.createNode("Shape");
Shape1164.USE = "HAnimSiteShape";
HAnimSite1162.children[1] = Shape1164;

HAnimSegment1154.children[3] = HAnimSite1162;

HAnimJoint1153.children = new MFNode();

HAnimJoint1153.children[0] = HAnimSegment1154;

HAnimJoint1144.children[1] = HAnimJoint1153;

HAnimJoint1135.children[1] = HAnimJoint1144;

HAnimJoint1126.children[1] = HAnimJoint1135;

HAnimJoint953.children[4] = HAnimJoint1126;

let HAnimJoint1165 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1165.name = "l_pinky0";
HAnimJoint1165.DEF = "hanim_l_pinky0";
HAnimJoint1165.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
let HAnimSegment1166 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1166.name = "l_metacarpal_5";
HAnimSegment1166.DEF = "hanim_l_metacarpal_5";
//Visualization sphere for <HAnimJoint name='l_pinky0'/> is placed within <HAnimSegment name='l_metacarpal_5'/>
let TouchSensor1167 = browser.currentScene.createNode("TouchSensor");
TouchSensor1167.description = "HAnimJoint l_pinky0, HAnimSegment l_metacarpal_5";
HAnimSegment1166.children = new MFNode();

HAnimSegment1166.children[0] = TouchSensor1167;

let Transform1168 = browser.currentScene.createNode("Transform");
Transform1168.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
let Shape1169 = browser.currentScene.createNode("Shape");
Shape1169.USE = "HAnimJointShape";
Transform1168.children = new MFNode();

Transform1168.children[0] = Shape1169;

HAnimSegment1166.children[1] = Transform1168;

//HAnimSegment visualization line from current <HAnimJoint name='l_pinky0'/> to child <HAnimJoint name='l_pinky1'/>
let Shape1170 = browser.currentScene.createNode("Shape");
let LineSet1171 = browser.currentScene.createNode("LineSet");
LineSet1171.vertexCount = new MFInt32(new int[2]);
let Coordinate1172 = browser.currentScene.createNode("Coordinate");
Coordinate1172.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet1171.coord = Coordinate1172;

let ColorRGBA1173 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1173.USE = "HAnimSegmentLineColorRGBA";
LineSet1171.color = ColorRGBA1173;

Shape1170.geometry = LineSet1171;

HAnimSegment1166.children[2] = Shape1170;

HAnimJoint1165.children = new MFNode();

HAnimJoint1165.children[0] = HAnimSegment1166;

let HAnimJoint1174 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1174.name = "l_pinky1";
HAnimJoint1174.DEF = "hanim_l_pinky1";
HAnimJoint1174.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
let HAnimSegment1175 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1175.name = "l_carpal_proximal_phalanx_5";
HAnimSegment1175.DEF = "hanim_l_carpal_proximal_phalanx_5";
//Visualization sphere for <HAnimJoint name='l_pinky1'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_5'/>
let TouchSensor1176 = browser.currentScene.createNode("TouchSensor");
TouchSensor1176.description = "HAnimJoint l_pinky1, HAnimSegment l_carpal_proximal_phalanx_5";
HAnimSegment1175.children = new MFNode();

HAnimSegment1175.children[0] = TouchSensor1176;

let Transform1177 = browser.currentScene.createNode("Transform");
Transform1177.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
let Shape1178 = browser.currentScene.createNode("Shape");
Shape1178.USE = "HAnimJointShape";
Transform1177.children = new MFNode();

Transform1177.children[0] = Shape1178;

HAnimSegment1175.children[1] = Transform1177;

//HAnimSegment visualization line from current <HAnimJoint name='l_pinky1'/> to child <HAnimJoint name='l_pinky2'/>
let Shape1179 = browser.currentScene.createNode("Shape");
let LineSet1180 = browser.currentScene.createNode("LineSet");
LineSet1180.vertexCount = new MFInt32(new int[2]);
let Coordinate1181 = browser.currentScene.createNode("Coordinate");
Coordinate1181.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet1180.coord = Coordinate1181;

let ColorRGBA1182 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1182.USE = "HAnimSegmentLineColorRGBA";
LineSet1180.color = ColorRGBA1182;

Shape1179.geometry = LineSet1180;

HAnimSegment1175.children[2] = Shape1179;

HAnimJoint1174.children = new MFNode();

HAnimJoint1174.children[0] = HAnimSegment1175;

let HAnimJoint1183 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1183.name = "l_pinky2";
HAnimJoint1183.DEF = "hanim_l_pinky2";
HAnimJoint1183.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
let HAnimSegment1184 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1184.name = "l_carpal_middle_phalanx_5";
HAnimSegment1184.DEF = "hanim_l_carpal_middle_phalanx_5";
//Visualization sphere for <HAnimJoint name='l_pinky2'/> is placed within <HAnimSegment name='l_carpal_middle_phalanx_5'/>
let TouchSensor1185 = browser.currentScene.createNode("TouchSensor");
TouchSensor1185.description = "HAnimJoint l_pinky2, HAnimSegment l_carpal_middle_phalanx_5";
HAnimSegment1184.children = new MFNode();

HAnimSegment1184.children[0] = TouchSensor1185;

let Transform1186 = browser.currentScene.createNode("Transform");
Transform1186.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
let Shape1187 = browser.currentScene.createNode("Shape");
Shape1187.USE = "HAnimJointShape";
Transform1186.children = new MFNode();

Transform1186.children[0] = Shape1187;

HAnimSegment1184.children[1] = Transform1186;

//HAnimSegment visualization line from current <HAnimJoint name='l_pinky2'/> to child <HAnimJoint name='l_pinky3'/>
let Shape1188 = browser.currentScene.createNode("Shape");
let LineSet1189 = browser.currentScene.createNode("LineSet");
LineSet1189.vertexCount = new MFInt32(new int[2]);
let Coordinate1190 = browser.currentScene.createNode("Coordinate");
Coordinate1190.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet1189.coord = Coordinate1190;

let ColorRGBA1191 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1191.USE = "HAnimSegmentLineColorRGBA";
LineSet1189.color = ColorRGBA1191;

Shape1188.geometry = LineSet1189;

HAnimSegment1184.children[2] = Shape1188;

HAnimJoint1183.children = new MFNode();

HAnimJoint1183.children[0] = HAnimSegment1184;

let HAnimJoint1192 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1192.name = "l_pinky3";
HAnimJoint1192.DEF = "hanim_l_pinky3";
HAnimJoint1192.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
let HAnimSegment1193 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1193.name = "l_carpal_distal_phalanx_5";
HAnimSegment1193.DEF = "hanim_l_carpal_distal_phalanx_5";
//Visualization sphere for <HAnimJoint name='l_pinky3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_5'/>
let TouchSensor1194 = browser.currentScene.createNode("TouchSensor");
TouchSensor1194.description = "HAnimJoint l_pinky3, HAnimSegment l_carpal_distal_phalanx_5";
HAnimSegment1193.children = new MFNode();

HAnimSegment1193.children[0] = TouchSensor1194;

let Transform1195 = browser.currentScene.createNode("Transform");
Transform1195.translation = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
let Shape1196 = browser.currentScene.createNode("Shape");
Shape1196.USE = "HAnimJointShape";
Transform1195.children = new MFNode();

Transform1195.children[0] = Shape1196;

HAnimSegment1193.children[1] = Transform1195;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_pinky3'/> to <HAnimSite name='l_pinky_distal_tip'/>
let Shape1197 = browser.currentScene.createNode("Shape");
let LineSet1198 = browser.currentScene.createNode("LineSet");
LineSet1198.vertexCount = new MFInt32(new int[2]);
let Coordinate1199 = browser.currentScene.createNode("Coordinate");
Coordinate1199.point = new MFVec3f(new float[0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012]);
LineSet1198.coord = Coordinate1199;

let ColorRGBA1200 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1200.USE = "HAnimSiteLineColorRGBA";
LineSet1198.color = ColorRGBA1200;

Shape1197.geometry = LineSet1198;

HAnimSegment1193.children[2] = Shape1197;

let HAnimSite1201 = browser.currentScene.createNode("HAnimSite");
HAnimSite1201.name = "l_pinky_distal_tip_pt";
HAnimSite1201.DEF = "hanim_l_pinky_distal_tip";
HAnimSite1201.translation = new SFVec3f(new float[0.2014,0.7009,-0.1012]);
//HAnimSite visualization shape
let TouchSensor1202 = browser.currentScene.createNode("TouchSensor");
TouchSensor1202.description = "HAnimSite l_pinky_distal_tip";
HAnimSite1201.children = new MFNode();

HAnimSite1201.children[0] = TouchSensor1202;

let Shape1203 = browser.currentScene.createNode("Shape");
Shape1203.USE = "HAnimSiteShape";
HAnimSite1201.children[1] = Shape1203;

HAnimSegment1193.children[3] = HAnimSite1201;

HAnimJoint1192.children = new MFNode();

HAnimJoint1192.children[0] = HAnimSegment1193;

HAnimJoint1183.children[1] = HAnimJoint1192;

HAnimJoint1174.children[1] = HAnimJoint1183;

HAnimJoint1165.children[1] = HAnimJoint1174;

HAnimJoint953.children[5] = HAnimJoint1165;

HAnimJoint916.children[1] = HAnimJoint953;

HAnimJoint900.children[1] = HAnimJoint916;

HAnimJoint891.children[1] = HAnimJoint900;

HAnimJoint854.children[1] = HAnimJoint891;

HAnimJoint566.children[2] = HAnimJoint854;

let HAnimJoint1204 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1204.name = "r_sternoclavicular";
HAnimJoint1204.DEF = "hanim_r_sternoclavicular";
HAnimJoint1204.center = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
let HAnimSegment1205 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1205.name = "r_clavicle";
HAnimSegment1205.DEF = "hanim_r_clavicle";
//Visualization sphere for <HAnimJoint name='r_sternoclavicular'/> is placed within <HAnimSegment name='r_clavicle'/>
let TouchSensor1206 = browser.currentScene.createNode("TouchSensor");
TouchSensor1206.description = "HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle";
HAnimSegment1205.children = new MFNode();

HAnimSegment1205.children[0] = TouchSensor1206;

let Transform1207 = browser.currentScene.createNode("Transform");
Transform1207.translation = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
let Shape1208 = browser.currentScene.createNode("Shape");
Shape1208.USE = "HAnimJointShape";
Transform1207.children = new MFNode();

Transform1207.children[0] = Shape1208;

HAnimSegment1205.children[1] = Transform1207;

//HAnimSegment visualization line from current <HAnimJoint name='r_sternoclavicular'/> to child <HAnimJoint name='r_acromioclavicular'/>
let Shape1209 = browser.currentScene.createNode("Shape");
let LineSet1210 = browser.currentScene.createNode("LineSet");
LineSet1210.vertexCount = new MFInt32(new int[2]);
let Coordinate1211 = browser.currentScene.createNode("Coordinate");
Coordinate1211.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424]);
LineSet1210.coord = Coordinate1211;

let ColorRGBA1212 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1212.USE = "HAnimSegmentLineColorRGBA";
LineSet1210.color = ColorRGBA1212;

Shape1209.geometry = LineSet1210;

HAnimSegment1205.children[2] = Shape1209;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_clavicale_pt'/>
let Shape1213 = browser.currentScene.createNode("Shape");
let LineSet1214 = browser.currentScene.createNode("LineSet");
LineSet1214.vertexCount = new MFInt32(new int[2]);
let Coordinate1215 = browser.currentScene.createNode("Coordinate");
Coordinate1215.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04]);
LineSet1214.coord = Coordinate1215;

let ColorRGBA1216 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1216.USE = "HAnimSiteLineColorRGBA";
LineSet1214.color = ColorRGBA1216;

Shape1213.geometry = LineSet1214;

HAnimSegment1205.children[3] = Shape1213;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_acromion_pt'/>
let Shape1217 = browser.currentScene.createNode("Shape");
let LineSet1218 = browser.currentScene.createNode("LineSet");
LineSet1218.vertexCount = new MFInt32(new int[2]);
let Coordinate1219 = browser.currentScene.createNode("Coordinate");
Coordinate1219.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431]);
LineSet1218.coord = Coordinate1219;

let ColorRGBA1220 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1220.USE = "HAnimSiteLineColorRGBA";
LineSet1218.color = ColorRGBA1220;

Shape1217.geometry = LineSet1218;

HAnimSegment1205.children[4] = Shape1217;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_ant_pt'/>
let Shape1221 = browser.currentScene.createNode("Shape");
let LineSet1222 = browser.currentScene.createNode("LineSet");
LineSet1222.vertexCount = new MFInt32(new int[2]);
let Coordinate1223 = browser.currentScene.createNode("Coordinate");
Coordinate1223.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031]);
LineSet1222.coord = Coordinate1223;

let ColorRGBA1224 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1224.USE = "HAnimSiteLineColorRGBA";
LineSet1222.color = ColorRGBA1224;

Shape1221.geometry = LineSet1222;

HAnimSegment1205.children[5] = Shape1221;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_post_pt'/>
let Shape1225 = browser.currentScene.createNode("Shape");
let LineSet1226 = browser.currentScene.createNode("LineSet");
LineSet1226.vertexCount = new MFInt32(new int[2]);
let Coordinate1227 = browser.currentScene.createNode("Coordinate");
Coordinate1227.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826]);
LineSet1226.coord = Coordinate1227;

let ColorRGBA1228 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1228.USE = "HAnimSiteLineColorRGBA";
LineSet1226.color = ColorRGBA1228;

Shape1225.geometry = LineSet1226;

HAnimSegment1205.children[6] = Shape1225;

let HAnimSite1229 = browser.currentScene.createNode("HAnimSite");
HAnimSite1229.name = "r_clavicale_pt_pt";
HAnimSite1229.DEF = "hanim_r_clavicale_pt";
HAnimSite1229.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
//HAnimSite visualization shape
let TouchSensor1230 = browser.currentScene.createNode("TouchSensor");
TouchSensor1230.description = "HAnimSite r_clavicale_pt";
HAnimSite1229.children = new MFNode();

HAnimSite1229.children[0] = TouchSensor1230;

let Shape1231 = browser.currentScene.createNode("Shape");
Shape1231.USE = "HAnimSiteShape";
HAnimSite1229.children[1] = Shape1231;

HAnimSegment1205.children[7] = HAnimSite1229;

let HAnimSite1232 = browser.currentScene.createNode("HAnimSite");
HAnimSite1232.name = "r_acromion_pt_pt";
HAnimSite1232.DEF = "hanim_r_acromion_pt";
HAnimSite1232.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
//HAnimSite visualization shape
let TouchSensor1233 = browser.currentScene.createNode("TouchSensor");
TouchSensor1233.description = "HAnimSite r_acromion_pt";
HAnimSite1232.children = new MFNode();

HAnimSite1232.children[0] = TouchSensor1233;

let Shape1234 = browser.currentScene.createNode("Shape");
Shape1234.USE = "HAnimSiteShape";
HAnimSite1232.children[1] = Shape1234;

HAnimSegment1205.children[8] = HAnimSite1232;

let HAnimSite1235 = browser.currentScene.createNode("HAnimSite");
HAnimSite1235.name = "r_axilla_ant_pt_pt";
HAnimSite1235.DEF = "hanim_r_axilla_ant_pt";
HAnimSite1235.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
//HAnimSite visualization shape
let TouchSensor1236 = browser.currentScene.createNode("TouchSensor");
TouchSensor1236.description = "HAnimSite r_axilla_ant_pt";
HAnimSite1235.children = new MFNode();

HAnimSite1235.children[0] = TouchSensor1236;

let Shape1237 = browser.currentScene.createNode("Shape");
Shape1237.USE = "HAnimSiteShape";
HAnimSite1235.children[1] = Shape1237;

HAnimSegment1205.children[9] = HAnimSite1235;

let HAnimSite1238 = browser.currentScene.createNode("HAnimSite");
HAnimSite1238.name = "r_axilla_post_pt_pt";
HAnimSite1238.DEF = "hanim_r_axilla_post_pt";
HAnimSite1238.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
//HAnimSite visualization shape
let TouchSensor1239 = browser.currentScene.createNode("TouchSensor");
TouchSensor1239.description = "HAnimSite r_axilla_post_pt";
HAnimSite1238.children = new MFNode();

HAnimSite1238.children[0] = TouchSensor1239;

let Shape1240 = browser.currentScene.createNode("Shape");
Shape1240.USE = "HAnimSiteShape";
HAnimSite1238.children[1] = Shape1240;

HAnimSegment1205.children[10] = HAnimSite1238;

HAnimJoint1204.children = new MFNode();

HAnimJoint1204.children[0] = HAnimSegment1205;

let HAnimJoint1241 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1241.name = "r_acromioclavicular";
HAnimJoint1241.DEF = "hanim_r_acromioclavicular";
HAnimJoint1241.center = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
let HAnimSegment1242 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1242.name = "r_scapula";
HAnimSegment1242.DEF = "hanim_r_scapula";
//Visualization sphere for <HAnimJoint name='r_acromioclavicular'/> is placed within <HAnimSegment name='r_scapula'/>
let TouchSensor1243 = browser.currentScene.createNode("TouchSensor");
TouchSensor1243.description = "HAnimJoint r_acromioclavicular, HAnimSegment r_scapula";
HAnimSegment1242.children = new MFNode();

HAnimSegment1242.children[0] = TouchSensor1243;

let Transform1244 = browser.currentScene.createNode("Transform");
Transform1244.translation = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
let Shape1245 = browser.currentScene.createNode("Shape");
Shape1245.USE = "HAnimJointShape";
Transform1244.children = new MFNode();

Transform1244.children[0] = Shape1245;

HAnimSegment1242.children[1] = Transform1244;

//HAnimSegment visualization line from current <HAnimJoint name='r_acromioclavicular'/> to child <HAnimJoint name='r_shoulder'/>
let Shape1246 = browser.currentScene.createNode("Shape");
let LineSet1247 = browser.currentScene.createNode("LineSet");
LineSet1247.vertexCount = new MFInt32(new int[2]);
let Coordinate1248 = browser.currentScene.createNode("Coordinate");
Coordinate1248.point = new MFVec3f(new float[-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387]);
LineSet1247.coord = Coordinate1248;

let ColorRGBA1249 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1249.USE = "HAnimSegmentLineColorRGBA";
LineSet1247.color = ColorRGBA1249;

Shape1246.geometry = LineSet1247;

HAnimSegment1242.children[2] = Shape1246;

HAnimJoint1241.children = new MFNode();

HAnimJoint1241.children[0] = HAnimSegment1242;

let HAnimJoint1250 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1250.name = "r_shoulder";
HAnimJoint1250.DEF = "hanim_r_shoulder";
HAnimJoint1250.center = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
let HAnimSegment1251 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1251.name = "r_upperarm";
HAnimSegment1251.DEF = "hanim_r_upperarm";
//Visualization sphere for <HAnimJoint name='r_shoulder'/> is placed within <HAnimSegment name='r_upperarm'/>
let TouchSensor1252 = browser.currentScene.createNode("TouchSensor");
TouchSensor1252.description = "HAnimJoint r_shoulder, HAnimSegment r_upperarm";
HAnimSegment1251.children = new MFNode();

HAnimSegment1251.children[0] = TouchSensor1252;

let Transform1253 = browser.currentScene.createNode("Transform");
Transform1253.translation = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
let Shape1254 = browser.currentScene.createNode("Shape");
Shape1254.USE = "HAnimJointShape";
Transform1253.children = new MFNode();

Transform1253.children[0] = Shape1254;

HAnimSegment1251.children[1] = Transform1253;

//HAnimSegment visualization line from current <HAnimJoint name='r_shoulder'/> to child <HAnimJoint name='r_elbow'/>
let Shape1255 = browser.currentScene.createNode("Shape");
let LineSet1256 = browser.currentScene.createNode("LineSet");
LineSet1256.vertexCount = new MFInt32(new int[2]);
let Coordinate1257 = browser.currentScene.createNode("Coordinate");
Coordinate1257.point = new MFVec3f(new float[-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682]);
LineSet1256.coord = Coordinate1257;

let ColorRGBA1258 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1258.USE = "HAnimSegmentLineColorRGBA";
LineSet1256.color = ColorRGBA1258;

Shape1255.geometry = LineSet1256;

HAnimSegment1251.children[2] = Shape1255;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_shoulder'/> to <HAnimSite name='r_humeral_lateral_epicn_pt'/>
let Shape1259 = browser.currentScene.createNode("Shape");
let LineSet1260 = browser.currentScene.createNode("LineSet");
LineSet1260.vertexCount = new MFInt32(new int[2]);
let Coordinate1261 = browser.currentScene.createNode("Coordinate");
Coordinate1261.point = new MFVec3f(new float[-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033]);
LineSet1260.coord = Coordinate1261;

let ColorRGBA1262 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1262.USE = "HAnimSiteLineColorRGBA";
LineSet1260.color = ColorRGBA1262;

Shape1259.geometry = LineSet1260;

HAnimSegment1251.children[3] = Shape1259;

let HAnimSite1263 = browser.currentScene.createNode("HAnimSite");
HAnimSite1263.name = "r_humeral_lateral_epicn_pt_pt";
HAnimSite1263.DEF = "hanim_r_humeral_lateral_epicn_pt";
HAnimSite1263.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
//HAnimSite visualization shape
let TouchSensor1264 = browser.currentScene.createNode("TouchSensor");
TouchSensor1264.description = "HAnimSite r_humeral_lateral_epicn_pt";
HAnimSite1263.children = new MFNode();

HAnimSite1263.children[0] = TouchSensor1264;

let Shape1265 = browser.currentScene.createNode("Shape");
Shape1265.USE = "HAnimSiteShape";
HAnimSite1263.children[1] = Shape1265;

HAnimSegment1251.children[4] = HAnimSite1263;

HAnimJoint1250.children = new MFNode();

HAnimJoint1250.children[0] = HAnimSegment1251;

let HAnimJoint1266 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1266.name = "r_elbow";
HAnimJoint1266.DEF = "hanim_r_elbow";
HAnimJoint1266.center = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
let HAnimSegment1267 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1267.name = "r_forearm";
HAnimSegment1267.DEF = "hanim_r_forearm";
//Visualization sphere for <HAnimJoint name='r_elbow'/> is placed within <HAnimSegment name='r_forearm'/>
let TouchSensor1268 = browser.currentScene.createNode("TouchSensor");
TouchSensor1268.description = "HAnimJoint r_elbow, HAnimSegment r_forearm";
HAnimSegment1267.children = new MFNode();

HAnimSegment1267.children[0] = TouchSensor1268;

let Transform1269 = browser.currentScene.createNode("Transform");
Transform1269.translation = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
let Shape1270 = browser.currentScene.createNode("Shape");
Shape1270.USE = "HAnimJointShape";
Transform1269.children = new MFNode();

Transform1269.children[0] = Shape1270;

HAnimSegment1267.children[1] = Transform1269;

//HAnimSegment visualization line from current <HAnimJoint name='r_elbow'/> to child <HAnimJoint name='r_radiocarpal'/>
let Shape1271 = browser.currentScene.createNode("Shape");
let LineSet1272 = browser.currentScene.createNode("LineSet");
LineSet1272.vertexCount = new MFInt32(new int[2]);
let Coordinate1273 = browser.currentScene.createNode("Coordinate");
Coordinate1273.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583]);
LineSet1272.coord = Coordinate1273;

let ColorRGBA1274 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1274.USE = "HAnimSegmentLineColorRGBA";
LineSet1272.color = ColorRGBA1274;

Shape1271.geometry = LineSet1272;

HAnimSegment1267.children[2] = Shape1271;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radial_styloid_pt'/>
let Shape1275 = browser.currentScene.createNode("Shape");
let LineSet1276 = browser.currentScene.createNode("LineSet");
LineSet1276.vertexCount = new MFInt32(new int[2]);
let Coordinate1277 = browser.currentScene.createNode("Coordinate");
Coordinate1277.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036]);
LineSet1276.coord = Coordinate1277;

let ColorRGBA1278 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1278.USE = "HAnimSiteLineColorRGBA";
LineSet1276.color = ColorRGBA1278;

Shape1275.geometry = LineSet1276;

HAnimSegment1267.children[3] = Shape1275;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_olecranon_pt'/>
let Shape1279 = browser.currentScene.createNode("Shape");
let LineSet1280 = browser.currentScene.createNode("LineSet");
LineSet1280.vertexCount = new MFInt32(new int[2]);
let Coordinate1281 = browser.currentScene.createNode("Coordinate");
Coordinate1281.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065]);
LineSet1280.coord = Coordinate1281;

let ColorRGBA1282 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1282.USE = "HAnimSiteLineColorRGBA";
LineSet1280.color = ColorRGBA1282;

Shape1279.geometry = LineSet1280;

HAnimSegment1267.children[4] = Shape1279;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_humeral_medial_epicn_pt'/>
let Shape1283 = browser.currentScene.createNode("Shape");
let LineSet1284 = browser.currentScene.createNode("LineSet");
LineSet1284.vertexCount = new MFInt32(new int[2]);
let Coordinate1285 = browser.currentScene.createNode("Coordinate");
Coordinate1285.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062]);
LineSet1284.coord = Coordinate1285;

let ColorRGBA1286 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1286.USE = "HAnimSiteLineColorRGBA";
LineSet1284.color = ColorRGBA1286;

Shape1283.geometry = LineSet1284;

HAnimSegment1267.children[5] = Shape1283;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radiale_pt'/>
let Shape1287 = browser.currentScene.createNode("Shape");
let LineSet1288 = browser.currentScene.createNode("LineSet");
LineSet1288.vertexCount = new MFInt32(new int[2]);
let Coordinate1289 = browser.currentScene.createNode("Coordinate");
Coordinate1289.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091]);
LineSet1288.coord = Coordinate1289;

let ColorRGBA1290 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1290.USE = "HAnimSiteLineColorRGBA";
LineSet1288.color = ColorRGBA1290;

Shape1287.geometry = LineSet1288;

HAnimSegment1267.children[6] = Shape1287;

let HAnimSite1291 = browser.currentScene.createNode("HAnimSite");
HAnimSite1291.name = "r_radial_styloid_pt_pt";
HAnimSite1291.DEF = "hanim_r_radial_styloid_pt";
HAnimSite1291.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
//HAnimSite visualization shape
let TouchSensor1292 = browser.currentScene.createNode("TouchSensor");
TouchSensor1292.description = "HAnimSite r_radial_styloid_pt";
HAnimSite1291.children = new MFNode();

HAnimSite1291.children[0] = TouchSensor1292;

let Shape1293 = browser.currentScene.createNode("Shape");
Shape1293.USE = "HAnimSiteShape";
HAnimSite1291.children[1] = Shape1293;

HAnimSegment1267.children[7] = HAnimSite1291;

let HAnimSite1294 = browser.currentScene.createNode("HAnimSite");
HAnimSite1294.name = "r_olecranon_pt_pt";
HAnimSite1294.DEF = "hanim_r_olecranon_pt";
HAnimSite1294.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
//HAnimSite visualization shape
let TouchSensor1295 = browser.currentScene.createNode("TouchSensor");
TouchSensor1295.description = "HAnimSite r_olecranon_pt";
HAnimSite1294.children = new MFNode();

HAnimSite1294.children[0] = TouchSensor1295;

let Shape1296 = browser.currentScene.createNode("Shape");
Shape1296.USE = "HAnimSiteShape";
HAnimSite1294.children[1] = Shape1296;

HAnimSegment1267.children[8] = HAnimSite1294;

let HAnimSite1297 = browser.currentScene.createNode("HAnimSite");
HAnimSite1297.name = "r_humeral_medial_epicn_pt_pt";
HAnimSite1297.DEF = "hanim_r_humeral_medial_epicn_pt";
HAnimSite1297.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
//HAnimSite visualization shape
let TouchSensor1298 = browser.currentScene.createNode("TouchSensor");
TouchSensor1298.description = "HAnimSite r_humeral_medial_epicn_pt";
HAnimSite1297.children = new MFNode();

HAnimSite1297.children[0] = TouchSensor1298;

let Shape1299 = browser.currentScene.createNode("Shape");
Shape1299.USE = "HAnimSiteShape";
HAnimSite1297.children[1] = Shape1299;

HAnimSegment1267.children[9] = HAnimSite1297;

let HAnimSite1300 = browser.currentScene.createNode("HAnimSite");
HAnimSite1300.name = "r_radiale_pt_pt";
HAnimSite1300.DEF = "hanim_r_radiale_pt";
HAnimSite1300.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
//HAnimSite visualization shape
let TouchSensor1301 = browser.currentScene.createNode("TouchSensor");
TouchSensor1301.description = "HAnimSite r_radiale_pt";
HAnimSite1300.children = new MFNode();

HAnimSite1300.children[0] = TouchSensor1301;

let Shape1302 = browser.currentScene.createNode("Shape");
Shape1302.USE = "HAnimSiteShape";
HAnimSite1300.children[1] = Shape1302;

HAnimSegment1267.children[10] = HAnimSite1300;

HAnimJoint1266.children = new MFNode();

HAnimJoint1266.children[0] = HAnimSegment1267;

let HAnimJoint1303 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1303.name = "r_radiocarpal";
HAnimJoint1303.DEF = "hanim_r_radiocarpal";
HAnimJoint1303.center = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
let HAnimSegment1304 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1304.name = "r_carpal";
HAnimSegment1304.DEF = "hanim_r_carpal";
//Visualization sphere for <HAnimJoint name='r_radiocarpal'/> is placed within <HAnimSegment name='r_carpal'/>
let TouchSensor1305 = browser.currentScene.createNode("TouchSensor");
TouchSensor1305.description = "HAnimJoint r_radiocarpal, HAnimSegment r_carpal";
HAnimSegment1304.children = new MFNode();

HAnimSegment1304.children[0] = TouchSensor1305;

let Transform1306 = browser.currentScene.createNode("Transform");
Transform1306.translation = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
let Shape1307 = browser.currentScene.createNode("Shape");
Shape1307.USE = "HAnimJointShape";
Transform1306.children = new MFNode();

Transform1306.children[0] = Shape1307;

HAnimSegment1304.children[1] = Transform1306;

//HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_thumb1'/>
let Shape1308 = browser.currentScene.createNode("Shape");
let LineSet1309 = browser.currentScene.createNode("LineSet");
LineSet1309.vertexCount = new MFInt32(new int[2]);
let Coordinate1310 = browser.currentScene.createNode("Coordinate");
Coordinate1310.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534]);
LineSet1309.coord = Coordinate1310;

let ColorRGBA1311 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1311.USE = "HAnimSegmentLineColorRGBA";
LineSet1309.color = ColorRGBA1311;

Shape1308.geometry = LineSet1309;

HAnimSegment1304.children[2] = Shape1308;

//HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_index0'/>
let Shape1312 = browser.currentScene.createNode("Shape");
let LineSet1313 = browser.currentScene.createNode("LineSet");
LineSet1313.vertexCount = new MFInt32(new int[2]);
let Coordinate1314 = browser.currentScene.createNode("Coordinate");
Coordinate1314.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028]);
LineSet1313.coord = Coordinate1314;

let ColorRGBA1315 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1315.USE = "HAnimSegmentLineColorRGBA";
LineSet1313.color = ColorRGBA1315;

Shape1312.geometry = LineSet1313;

HAnimSegment1304.children[3] = Shape1312;

//HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_middle0'/>
let Shape1316 = browser.currentScene.createNode("Shape");
let LineSet1317 = browser.currentScene.createNode("LineSet");
LineSet1317.vertexCount = new MFInt32(new int[2]);
let Coordinate1318 = browser.currentScene.createNode("Coordinate");
Coordinate1318.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053]);
LineSet1317.coord = Coordinate1318;

let ColorRGBA1319 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1319.USE = "HAnimSegmentLineColorRGBA";
LineSet1317.color = ColorRGBA1319;

Shape1316.geometry = LineSet1317;

HAnimSegment1304.children[4] = Shape1316;

//HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_ring0'/>
let Shape1320 = browser.currentScene.createNode("Shape");
let LineSet1321 = browser.currentScene.createNode("LineSet");
LineSet1321.vertexCount = new MFInt32(new int[2]);
let Coordinate1322 = browser.currentScene.createNode("Coordinate");
Coordinate1322.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794]);
LineSet1321.coord = Coordinate1322;

let ColorRGBA1323 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1323.USE = "HAnimSegmentLineColorRGBA";
LineSet1321.color = ColorRGBA1323;

Shape1320.geometry = LineSet1321;

HAnimSegment1304.children[5] = Shape1320;

//HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_pinky0'/>
let Shape1324 = browser.currentScene.createNode("Shape");
let LineSet1325 = browser.currentScene.createNode("LineSet");
LineSet1325.vertexCount = new MFInt32(new int[2]);
let Coordinate1326 = browser.currentScene.createNode("Coordinate");
Coordinate1326.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036]);
LineSet1325.coord = Coordinate1326;

let ColorRGBA1327 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1327.USE = "HAnimSegmentLineColorRGBA";
LineSet1325.color = ColorRGBA1327;

Shape1324.geometry = LineSet1325;

HAnimSegment1304.children[6] = Shape1324;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_radiocarpal'/> to <HAnimSite name='r_metacarpal_pha2_pt'/>
let Shape1328 = browser.currentScene.createNode("Shape");
let LineSet1329 = browser.currentScene.createNode("LineSet");
LineSet1329.vertexCount = new MFInt32(new int[2]);
let Coordinate1330 = browser.currentScene.createNode("Coordinate");
Coordinate1330.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177]);
LineSet1329.coord = Coordinate1330;

let ColorRGBA1331 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1331.USE = "HAnimSiteLineColorRGBA";
LineSet1329.color = ColorRGBA1331;

Shape1328.geometry = LineSet1329;

HAnimSegment1304.children[7] = Shape1328;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_radiocarpal'/> to <HAnimSite name='r_ulnar_styloid_pt'/>
let Shape1332 = browser.currentScene.createNode("Shape");
let LineSet1333 = browser.currentScene.createNode("LineSet");
LineSet1333.vertexCount = new MFInt32(new int[2]);
let Coordinate1334 = browser.currentScene.createNode("Coordinate");
Coordinate1334.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584]);
LineSet1333.coord = Coordinate1334;

let ColorRGBA1335 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1335.USE = "HAnimSiteLineColorRGBA";
LineSet1333.color = ColorRGBA1335;

Shape1332.geometry = LineSet1333;

HAnimSegment1304.children[8] = Shape1332;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_radiocarpal'/> to <HAnimSite name='r_metacarpal_pha5_pt'/>
let Shape1336 = browser.currentScene.createNode("Shape");
let LineSet1337 = browser.currentScene.createNode("LineSet");
LineSet1337.vertexCount = new MFInt32(new int[2]);
let Coordinate1338 = browser.currentScene.createNode("Coordinate");
Coordinate1338.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064]);
LineSet1337.coord = Coordinate1338;

let ColorRGBA1339 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1339.USE = "HAnimSiteLineColorRGBA";
LineSet1337.color = ColorRGBA1339;

Shape1336.geometry = LineSet1337;

HAnimSegment1304.children[9] = Shape1336;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_radiocarpal'/> to <HAnimSite name='r_hand_front_view'/>
let Shape1340 = browser.currentScene.createNode("Shape");
let LineSet1341 = browser.currentScene.createNode("LineSet");
LineSet1341.vertexCount = new MFInt32(new int[2]);
let Coordinate1342 = browser.currentScene.createNode("Coordinate");
Coordinate1342.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.3,0.75,0.45]);
LineSet1341.coord = Coordinate1342;

let ColorRGBA1343 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1343.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet1341.color = ColorRGBA1343;

Shape1340.geometry = LineSet1341;

HAnimSegment1304.children[10] = Shape1340;

let HAnimSite1344 = browser.currentScene.createNode("HAnimSite");
HAnimSite1344.name = "r_metacarpal_pha2_pt_pt";
HAnimSite1344.DEF = "hanim_r_metacarpal_pha2_pt";
HAnimSite1344.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
//HAnimSite visualization shape
let TouchSensor1345 = browser.currentScene.createNode("TouchSensor");
TouchSensor1345.description = "HAnimSite r_metacarpal_pha2_pt";
HAnimSite1344.children = new MFNode();

HAnimSite1344.children[0] = TouchSensor1345;

let Shape1346 = browser.currentScene.createNode("Shape");
Shape1346.USE = "HAnimSiteShape";
HAnimSite1344.children[1] = Shape1346;

HAnimSegment1304.children[11] = HAnimSite1344;

let HAnimSite1347 = browser.currentScene.createNode("HAnimSite");
HAnimSite1347.name = "r_ulnar_styloid_pt_pt";
HAnimSite1347.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite1347.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
//HAnimSite visualization shape
let TouchSensor1348 = browser.currentScene.createNode("TouchSensor");
TouchSensor1348.description = "HAnimSite r_ulnar_styloid_pt";
HAnimSite1347.children = new MFNode();

HAnimSite1347.children[0] = TouchSensor1348;

let Shape1349 = browser.currentScene.createNode("Shape");
Shape1349.USE = "HAnimSiteShape";
HAnimSite1347.children[1] = Shape1349;

HAnimSegment1304.children[12] = HAnimSite1347;

let HAnimSite1350 = browser.currentScene.createNode("HAnimSite");
HAnimSite1350.name = "r_metacarpal_pha5_pt_pt";
HAnimSite1350.DEF = "hanim_r_metacarpal_pha5_pt";
HAnimSite1350.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
//HAnimSite visualization shape
let TouchSensor1351 = browser.currentScene.createNode("TouchSensor");
TouchSensor1351.description = "HAnimSite r_metacarpal_pha5_pt";
HAnimSite1350.children = new MFNode();

HAnimSite1350.children[0] = TouchSensor1351;

let Shape1352 = browser.currentScene.createNode("Shape");
Shape1352.USE = "HAnimSiteShape";
HAnimSite1350.children[1] = Shape1352;

HAnimSegment1304.children[13] = HAnimSite1350;

let HAnimSite1353 = browser.currentScene.createNode("HAnimSite");
HAnimSite1353.name = "r_hand_front_view_pt";
HAnimSite1353.DEF = "hanim_r_hand_front_view";
HAnimSite1353.translation = new SFVec3f(new float[-0.3,0.75,0.45]);
//HAnimSite visualization shape
let TouchSensor1354 = browser.currentScene.createNode("TouchSensor");
TouchSensor1354.description = "HAnimSite r_hand_front_view";
HAnimSite1353.children = new MFNode();

HAnimSite1353.children[0] = TouchSensor1354;

let Shape1355 = browser.currentScene.createNode("Shape");
Shape1355.USE = "HAnimSiteShape";
HAnimSite1353.children[1] = Shape1355;

let Viewpoint1356 = browser.currentScene.createNode("Viewpoint");
Viewpoint1356.DEF = "hanim_r_hand_front_viewpoint";
Viewpoint1356.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint1356.description = "right hand front";
Viewpoint1356.position = new SFVec3f(new float[0,0,0]);
HAnimSite1353.children[2] = Viewpoint1356;

//HAnimSite/Viewpoint visualization shape
let Anchor1357 = browser.currentScene.createNode("Anchor");
Anchor1357.description = "HAnimSite hanim_r_hand_front_view Viewpoint";
Anchor1357.url = new MFString(new java.lang.String["#hanim_r_hand_front_viewpoint"]);
let LOD1358 = browser.currentScene.createNode("LOD");
LOD1358.forceTransitions = True;
LOD1358.range = new MFFloat(new float[0.04]);
let WorldInfo1359 = browser.currentScene.createNode("WorldInfo");
WorldInfo1359.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1358.children = new MFNode();

LOD1358.children[0] = WorldInfo1359;

let Shape1360 = browser.currentScene.createNode("Shape");
Shape1360.USE = "HAnimSiteViewpointShape";
LOD1358.children[1] = Shape1360;

Anchor1357.children = new MFNode();

Anchor1357.children[0] = LOD1358;

HAnimSite1353.children[3] = Anchor1357;

HAnimSegment1304.children[14] = HAnimSite1353;

HAnimJoint1303.children = new MFNode();

HAnimJoint1303.children[0] = HAnimSegment1304;

let HAnimJoint1361 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1361.name = "r_thumb1";
HAnimJoint1361.DEF = "hanim_r_thumb1";
HAnimJoint1361.center = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
let HAnimSegment1362 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1362.name = "r_metacarpal_1";
HAnimSegment1362.DEF = "hanim_r_metacarpal_1";
//Visualization sphere for <HAnimJoint name='r_thumb1'/> is placed within <HAnimSegment name='r_metacarpal_1'/>
let TouchSensor1363 = browser.currentScene.createNode("TouchSensor");
TouchSensor1363.description = "HAnimJoint r_thumb1, HAnimSegment r_metacarpal_1";
HAnimSegment1362.children = new MFNode();

HAnimSegment1362.children[0] = TouchSensor1363;

let Transform1364 = browser.currentScene.createNode("Transform");
Transform1364.translation = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
let Shape1365 = browser.currentScene.createNode("Shape");
Shape1365.USE = "HAnimJointShape";
Transform1364.children = new MFNode();

Transform1364.children[0] = Shape1365;

HAnimSegment1362.children[1] = Transform1364;

//HAnimSegment visualization line from current <HAnimJoint name='r_thumb1'/> to child <HAnimJoint name='r_thumb2'/>
let Shape1366 = browser.currentScene.createNode("Shape");
let LineSet1367 = browser.currentScene.createNode("LineSet");
LineSet1367.vertexCount = new MFInt32(new int[2]);
let Coordinate1368 = browser.currentScene.createNode("Coordinate");
Coordinate1368.point = new MFVec3f(new float[-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246]);
LineSet1367.coord = Coordinate1368;

let ColorRGBA1369 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1369.USE = "HAnimSegmentLineColorRGBA";
LineSet1367.color = ColorRGBA1369;

Shape1366.geometry = LineSet1367;

HAnimSegment1362.children[2] = Shape1366;

HAnimJoint1361.children = new MFNode();

HAnimJoint1361.children[0] = HAnimSegment1362;

let HAnimJoint1370 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1370.name = "r_thumb2";
HAnimJoint1370.DEF = "hanim_r_thumb2";
HAnimJoint1370.center = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
let HAnimSegment1371 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1371.name = "r_carpal_proximal_phalanx_1";
HAnimSegment1371.DEF = "hanim_r_carpal_proximal_phalanx_1";
//Visualization sphere for <HAnimJoint name='r_thumb2'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_1'/>
let TouchSensor1372 = browser.currentScene.createNode("TouchSensor");
TouchSensor1372.description = "HAnimJoint r_thumb2, HAnimSegment r_carpal_proximal_phalanx_1";
HAnimSegment1371.children = new MFNode();

HAnimSegment1371.children[0] = TouchSensor1372;

let Transform1373 = browser.currentScene.createNode("Transform");
Transform1373.translation = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
let Shape1374 = browser.currentScene.createNode("Shape");
Shape1374.USE = "HAnimJointShape";
Transform1373.children = new MFNode();

Transform1373.children[0] = Shape1374;

HAnimSegment1371.children[1] = Transform1373;

//HAnimSegment visualization line from current <HAnimJoint name='r_thumb2'/> to child <HAnimJoint name='r_thumb3'/>
let Shape1375 = browser.currentScene.createNode("Shape");
let LineSet1376 = browser.currentScene.createNode("LineSet");
LineSet1376.vertexCount = new MFInt32(new int[2]);
let Coordinate1377 = browser.currentScene.createNode("Coordinate");
Coordinate1377.point = new MFVec3f(new float[-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464]);
LineSet1376.coord = Coordinate1377;

let ColorRGBA1378 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1378.USE = "HAnimSegmentLineColorRGBA";
LineSet1376.color = ColorRGBA1378;

Shape1375.geometry = LineSet1376;

HAnimSegment1371.children[2] = Shape1375;

HAnimJoint1370.children = new MFNode();

HAnimJoint1370.children[0] = HAnimSegment1371;

let HAnimJoint1379 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1379.name = "r_thumb3";
HAnimJoint1379.DEF = "hanim_r_thumb3";
HAnimJoint1379.center = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
let HAnimSegment1380 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1380.name = "r_carpal_distal_phalanx_1";
HAnimSegment1380.DEF = "hanim_r_carpal_distal_phalanx_1";
//Visualization sphere for <HAnimJoint name='r_thumb3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_1'/>
let TouchSensor1381 = browser.currentScene.createNode("TouchSensor");
TouchSensor1381.description = "HAnimJoint r_thumb3, HAnimSegment r_carpal_distal_phalanx_1";
HAnimSegment1380.children = new MFNode();

HAnimSegment1380.children[0] = TouchSensor1381;

let Transform1382 = browser.currentScene.createNode("Transform");
Transform1382.translation = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
let Shape1383 = browser.currentScene.createNode("Shape");
Shape1383.USE = "HAnimJointShape";
Transform1382.children = new MFNode();

Transform1382.children[0] = Shape1383;

HAnimSegment1380.children[1] = Transform1382;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_thumb3'/> to <HAnimSite name='r_thumb_distal_tip'/>
let Shape1384 = browser.currentScene.createNode("Shape");
let LineSet1385 = browser.currentScene.createNode("LineSet");
LineSet1385.vertexCount = new MFInt32(new int[2]);
let Coordinate1386 = browser.currentScene.createNode("Coordinate");
Coordinate1386.point = new MFVec3f(new float[-0.1955,0.8159,0.0464,-0.1869,0.809,0.082]);
LineSet1385.coord = Coordinate1386;

let ColorRGBA1387 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1387.USE = "HAnimSiteLineColorRGBA";
LineSet1385.color = ColorRGBA1387;

Shape1384.geometry = LineSet1385;

HAnimSegment1380.children[2] = Shape1384;

let HAnimSite1388 = browser.currentScene.createNode("HAnimSite");
HAnimSite1388.name = "r_thumb_distal_tip_pt";
HAnimSite1388.DEF = "hanim_r_thumb_distal_tip";
HAnimSite1388.translation = new SFVec3f(new float[-0.1869,0.809,0.082]);
//HAnimSite visualization shape
let TouchSensor1389 = browser.currentScene.createNode("TouchSensor");
TouchSensor1389.description = "HAnimSite r_thumb_distal_tip";
HAnimSite1388.children = new MFNode();

HAnimSite1388.children[0] = TouchSensor1389;

let Shape1390 = browser.currentScene.createNode("Shape");
Shape1390.USE = "HAnimSiteShape";
HAnimSite1388.children[1] = Shape1390;

HAnimSegment1380.children[3] = HAnimSite1388;

HAnimJoint1379.children = new MFNode();

HAnimJoint1379.children[0] = HAnimSegment1380;

HAnimJoint1370.children[1] = HAnimJoint1379;

HAnimJoint1361.children[1] = HAnimJoint1370;

HAnimJoint1303.children[1] = HAnimJoint1361;

let HAnimJoint1391 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1391.name = "r_index0";
HAnimJoint1391.DEF = "hanim_r_index0";
HAnimJoint1391.center = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
let HAnimSegment1392 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1392.name = "r_metacarpal_2";
HAnimSegment1392.DEF = "hanim_r_metacarpal_2";
//Visualization sphere for <HAnimJoint name='r_index0'/> is placed within <HAnimSegment name='r_metacarpal_2'/>
let TouchSensor1393 = browser.currentScene.createNode("TouchSensor");
TouchSensor1393.description = "HAnimJoint r_index0, HAnimSegment r_metacarpal_2";
HAnimSegment1392.children = new MFNode();

HAnimSegment1392.children[0] = TouchSensor1393;

let Transform1394 = browser.currentScene.createNode("Transform");
Transform1394.translation = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
let Shape1395 = browser.currentScene.createNode("Shape");
Shape1395.USE = "HAnimJointShape";
Transform1394.children = new MFNode();

Transform1394.children[0] = Shape1395;

HAnimSegment1392.children[1] = Transform1394;

//HAnimSegment visualization line from current <HAnimJoint name='r_index0'/> to child <HAnimJoint name='r_index1'/>
let Shape1396 = browser.currentScene.createNode("Shape");
let LineSet1397 = browser.currentScene.createNode("LineSet");
LineSet1397.vertexCount = new MFInt32(new int[2]);
let Coordinate1398 = browser.currentScene.createNode("Coordinate");
Coordinate1398.point = new MFVec3f(new float[-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028]);
LineSet1397.coord = Coordinate1398;

let ColorRGBA1399 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1399.USE = "HAnimSegmentLineColorRGBA";
LineSet1397.color = ColorRGBA1399;

Shape1396.geometry = LineSet1397;

HAnimSegment1392.children[2] = Shape1396;

HAnimJoint1391.children = new MFNode();

HAnimJoint1391.children[0] = HAnimSegment1392;

let HAnimJoint1400 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1400.name = "r_index1";
HAnimJoint1400.DEF = "hanim_r_index1";
HAnimJoint1400.center = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
let HAnimSegment1401 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1401.name = "r_carpal_proximal_phalanx_2";
HAnimSegment1401.DEF = "hanim_r_carpal_proximal_phalanx_2";
//Visualization sphere for <HAnimJoint name='r_index1'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_2'/>
let TouchSensor1402 = browser.currentScene.createNode("TouchSensor");
TouchSensor1402.description = "HAnimJoint r_index1, HAnimSegment r_carpal_proximal_phalanx_2";
HAnimSegment1401.children = new MFNode();

HAnimSegment1401.children[0] = TouchSensor1402;

let Transform1403 = browser.currentScene.createNode("Transform");
Transform1403.translation = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
let Shape1404 = browser.currentScene.createNode("Shape");
Shape1404.USE = "HAnimJointShape";
Transform1403.children = new MFNode();

Transform1403.children[0] = Shape1404;

HAnimSegment1401.children[1] = Transform1403;

//HAnimSegment visualization line from current <HAnimJoint name='r_index1'/> to child <HAnimJoint name='r_index2'/>
let Shape1405 = browser.currentScene.createNode("Shape");
let LineSet1406 = browser.currentScene.createNode("LineSet");
LineSet1406.vertexCount = new MFInt32(new int[2]);
let Coordinate1407 = browser.currentScene.createNode("Coordinate");
Coordinate1407.point = new MFVec3f(new float[-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248]);
LineSet1406.coord = Coordinate1407;

let ColorRGBA1408 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1408.USE = "HAnimSegmentLineColorRGBA";
LineSet1406.color = ColorRGBA1408;

Shape1405.geometry = LineSet1406;

HAnimSegment1401.children[2] = Shape1405;

HAnimJoint1400.children = new MFNode();

HAnimJoint1400.children[0] = HAnimSegment1401;

let HAnimJoint1409 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1409.name = "r_index2";
HAnimJoint1409.DEF = "hanim_r_index2";
HAnimJoint1409.center = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
let HAnimSegment1410 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1410.name = "r_carpal_middle_phalanx_2";
HAnimSegment1410.DEF = "hanim_r_carpal_middle_phalanx_2";
//Visualization sphere for <HAnimJoint name='r_index2'/> is placed within <HAnimSegment name='r_carpal_middle_phalanx_2'/>
let TouchSensor1411 = browser.currentScene.createNode("TouchSensor");
TouchSensor1411.description = "HAnimJoint r_index2, HAnimSegment r_carpal_middle_phalanx_2";
HAnimSegment1410.children = new MFNode();

HAnimSegment1410.children[0] = TouchSensor1411;

let Transform1412 = browser.currentScene.createNode("Transform");
Transform1412.translation = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
let Shape1413 = browser.currentScene.createNode("Shape");
Shape1413.USE = "HAnimJointShape";
Transform1412.children = new MFNode();

Transform1412.children[0] = Shape1413;

HAnimSegment1410.children[1] = Transform1412;

//HAnimSegment visualization line from current <HAnimJoint name='r_index2'/> to child <HAnimJoint name='r_index3'/>
let Shape1414 = browser.currentScene.createNode("Shape");
let LineSet1415 = browser.currentScene.createNode("LineSet");
LineSet1415.vertexCount = new MFInt32(new int[2]);
let Coordinate1416 = browser.currentScene.createNode("Coordinate");
Coordinate1416.point = new MFVec3f(new float[-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236]);
LineSet1415.coord = Coordinate1416;

let ColorRGBA1417 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1417.USE = "HAnimSegmentLineColorRGBA";
LineSet1415.color = ColorRGBA1417;

Shape1414.geometry = LineSet1415;

HAnimSegment1410.children[2] = Shape1414;

HAnimJoint1409.children = new MFNode();

HAnimJoint1409.children[0] = HAnimSegment1410;

let HAnimJoint1418 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1418.name = "r_index3";
HAnimJoint1418.DEF = "hanim_r_index3";
HAnimJoint1418.center = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
let HAnimSegment1419 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1419.name = "r_carpal_distal_phalanx_2";
HAnimSegment1419.DEF = "hanim_r_carpal_distal_phalanx_2";
//Visualization sphere for <HAnimJoint name='r_index3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_2'/>
let TouchSensor1420 = browser.currentScene.createNode("TouchSensor");
TouchSensor1420.description = "HAnimJoint r_index3, HAnimSegment r_carpal_distal_phalanx_2";
HAnimSegment1419.children = new MFNode();

HAnimSegment1419.children[0] = TouchSensor1420;

let Transform1421 = browser.currentScene.createNode("Transform");
Transform1421.translation = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
let Shape1422 = browser.currentScene.createNode("Shape");
Shape1422.USE = "HAnimJointShape";
Transform1421.children = new MFNode();

Transform1421.children[0] = Shape1422;

HAnimSegment1419.children[1] = Transform1421;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_index_distal_tip'/>
let Shape1423 = browser.currentScene.createNode("Shape");
let LineSet1424 = browser.currentScene.createNode("LineSet");
LineSet1424.vertexCount = new MFInt32(new int[2]);
let Coordinate1425 = browser.currentScene.createNode("Coordinate");
Coordinate1425.point = new MFVec3f(new float[-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018]);
LineSet1424.coord = Coordinate1425;

let ColorRGBA1426 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1426.USE = "HAnimSiteLineColorRGBA";
LineSet1424.color = ColorRGBA1426;

Shape1423.geometry = LineSet1424;

HAnimSegment1419.children[2] = Shape1423;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_dactylion_pt'/>
let Shape1427 = browser.currentScene.createNode("Shape");
let LineSet1428 = browser.currentScene.createNode("LineSet");
LineSet1428.vertexCount = new MFInt32(new int[2]);
let Coordinate1429 = browser.currentScene.createNode("Coordinate");
Coordinate1429.point = new MFVec3f(new float[-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423]);
LineSet1428.coord = Coordinate1429;

let ColorRGBA1430 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1430.USE = "HAnimSiteLineColorRGBA";
LineSet1428.color = ColorRGBA1430;

Shape1427.geometry = LineSet1428;

HAnimSegment1419.children[3] = Shape1427;

let HAnimSite1431 = browser.currentScene.createNode("HAnimSite");
HAnimSite1431.name = "r_index_distal_tip_pt";
HAnimSite1431.DEF = "hanim_r_index_distal_tip";
HAnimSite1431.translation = new SFVec3f(new float[-0.198,0.6883,-0.018]);
//HAnimSite visualization shape
let TouchSensor1432 = browser.currentScene.createNode("TouchSensor");
TouchSensor1432.description = "HAnimSite r_index_distal_tip";
HAnimSite1431.children = new MFNode();

HAnimSite1431.children[0] = TouchSensor1432;

let Shape1433 = browser.currentScene.createNode("Shape");
Shape1433.USE = "HAnimSiteShape";
HAnimSite1431.children[1] = Shape1433;

HAnimSegment1419.children[4] = HAnimSite1431;

let HAnimSite1434 = browser.currentScene.createNode("HAnimSite");
HAnimSite1434.name = "r_dactylion_pt_pt";
HAnimSite1434.DEF = "hanim_r_dactylion_pt";
HAnimSite1434.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
//HAnimSite visualization shape
let TouchSensor1435 = browser.currentScene.createNode("TouchSensor");
TouchSensor1435.description = "HAnimSite r_dactylion_pt";
HAnimSite1434.children = new MFNode();

HAnimSite1434.children[0] = TouchSensor1435;

let Shape1436 = browser.currentScene.createNode("Shape");
Shape1436.USE = "HAnimSiteShape";
HAnimSite1434.children[1] = Shape1436;

HAnimSegment1419.children[5] = HAnimSite1434;

HAnimJoint1418.children = new MFNode();

HAnimJoint1418.children[0] = HAnimSegment1419;

HAnimJoint1409.children[1] = HAnimJoint1418;

HAnimJoint1400.children[1] = HAnimJoint1409;

HAnimJoint1391.children[1] = HAnimJoint1400;

HAnimJoint1303.children[2] = HAnimJoint1391;

let HAnimJoint1437 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1437.name = "r_middle0";
HAnimJoint1437.DEF = "hanim_r_middle0";
HAnimJoint1437.center = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
let HAnimSegment1438 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1438.name = "r_metacarpal_3";
HAnimSegment1438.DEF = "hanim_r_metacarpal_3";
//Visualization sphere for <HAnimJoint name='r_middle0'/> is placed within <HAnimSegment name='r_metacarpal_3'/>
let TouchSensor1439 = browser.currentScene.createNode("TouchSensor");
TouchSensor1439.description = "HAnimJoint r_middle0, HAnimSegment r_metacarpal_3";
HAnimSegment1438.children = new MFNode();

HAnimSegment1438.children[0] = TouchSensor1439;

let Transform1440 = browser.currentScene.createNode("Transform");
Transform1440.translation = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
let Shape1441 = browser.currentScene.createNode("Shape");
Shape1441.USE = "HAnimJointShape";
Transform1440.children = new MFNode();

Transform1440.children[0] = Shape1441;

HAnimSegment1438.children[1] = Transform1440;

//HAnimSegment visualization line from current <HAnimJoint name='r_middle0'/> to child <HAnimJoint name='r_middle1'/>
let Shape1442 = browser.currentScene.createNode("Shape");
let LineSet1443 = browser.currentScene.createNode("LineSet");
LineSet1443.vertexCount = new MFInt32(new int[2]);
let Coordinate1444 = browser.currentScene.createNode("Coordinate");
Coordinate1444.point = new MFVec3f(new float[-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053]);
LineSet1443.coord = Coordinate1444;

let ColorRGBA1445 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1445.USE = "HAnimSegmentLineColorRGBA";
LineSet1443.color = ColorRGBA1445;

Shape1442.geometry = LineSet1443;

HAnimSegment1438.children[2] = Shape1442;

HAnimJoint1437.children = new MFNode();

HAnimJoint1437.children[0] = HAnimSegment1438;

let HAnimJoint1446 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1446.name = "r_middle1";
HAnimJoint1446.DEF = "hanim_r_middle1";
HAnimJoint1446.center = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
let HAnimSegment1447 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1447.name = "r_carpal_proximal_phalanx_3";
HAnimSegment1447.DEF = "hanim_r_carpal_proximal_phalanx_3";
//Visualization sphere for <HAnimJoint name='r_middle1'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_3'/>
let TouchSensor1448 = browser.currentScene.createNode("TouchSensor");
TouchSensor1448.description = "HAnimJoint r_middle1, HAnimSegment r_carpal_proximal_phalanx_3";
HAnimSegment1447.children = new MFNode();

HAnimSegment1447.children[0] = TouchSensor1448;

let Transform1449 = browser.currentScene.createNode("Transform");
Transform1449.translation = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
let Shape1450 = browser.currentScene.createNode("Shape");
Shape1450.USE = "HAnimJointShape";
Transform1449.children = new MFNode();

Transform1449.children[0] = Shape1450;

HAnimSegment1447.children[1] = Transform1449;

//HAnimSegment visualization line from current <HAnimJoint name='r_middle1'/> to child <HAnimJoint name='r_middle2'/>
let Shape1451 = browser.currentScene.createNode("Shape");
let LineSet1452 = browser.currentScene.createNode("LineSet");
LineSet1452.vertexCount = new MFInt32(new int[2]);
let Coordinate1453 = browser.currentScene.createNode("Coordinate");
Coordinate1453.point = new MFVec3f(new float[-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503]);
LineSet1452.coord = Coordinate1453;

let ColorRGBA1454 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1454.USE = "HAnimSegmentLineColorRGBA";
LineSet1452.color = ColorRGBA1454;

Shape1451.geometry = LineSet1452;

HAnimSegment1447.children[2] = Shape1451;

HAnimJoint1446.children = new MFNode();

HAnimJoint1446.children[0] = HAnimSegment1447;

let HAnimJoint1455 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1455.name = "r_middle2";
HAnimJoint1455.DEF = "hanim_r_middle2";
HAnimJoint1455.center = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
let HAnimSegment1456 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1456.name = "r_carpal_middle_phalanx_3";
HAnimSegment1456.DEF = "hanim_r_carpal_middle_phalanx_3";
//Visualization sphere for <HAnimJoint name='r_middle2'/> is placed within <HAnimSegment name='r_carpal_middle_phalanx_3'/>
let TouchSensor1457 = browser.currentScene.createNode("TouchSensor");
TouchSensor1457.description = "HAnimJoint r_middle2, HAnimSegment r_carpal_middle_phalanx_3";
HAnimSegment1456.children = new MFNode();

HAnimSegment1456.children[0] = TouchSensor1457;

let Transform1458 = browser.currentScene.createNode("Transform");
Transform1458.translation = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
let Shape1459 = browser.currentScene.createNode("Shape");
Shape1459.USE = "HAnimJointShape";
Transform1458.children = new MFNode();

Transform1458.children[0] = Shape1459;

HAnimSegment1456.children[1] = Transform1458;

//HAnimSegment visualization line from current <HAnimJoint name='r_middle2'/> to child <HAnimJoint name='r_middle3'/>
let Shape1460 = browser.currentScene.createNode("Shape");
let LineSet1461 = browser.currentScene.createNode("LineSet");
LineSet1461.vertexCount = new MFInt32(new int[2]);
let Coordinate1462 = browser.currentScene.createNode("Coordinate");
Coordinate1462.point = new MFVec3f(new float[-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494]);
LineSet1461.coord = Coordinate1462;

let ColorRGBA1463 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1463.USE = "HAnimSegmentLineColorRGBA";
LineSet1461.color = ColorRGBA1463;

Shape1460.geometry = LineSet1461;

HAnimSegment1456.children[2] = Shape1460;

HAnimJoint1455.children = new MFNode();

HAnimJoint1455.children[0] = HAnimSegment1456;

let HAnimJoint1464 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1464.name = "r_middle3";
HAnimJoint1464.DEF = "hanim_r_middle3";
HAnimJoint1464.center = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
let HAnimSegment1465 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1465.name = "r_carpal_distal_phalanx_3";
HAnimSegment1465.DEF = "hanim_r_carpal_distal_phalanx_3";
//Visualization sphere for <HAnimJoint name='r_middle3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_3'/>
let TouchSensor1466 = browser.currentScene.createNode("TouchSensor");
TouchSensor1466.description = "HAnimJoint r_middle3, HAnimSegment r_carpal_distal_phalanx_3";
HAnimSegment1465.children = new MFNode();

HAnimSegment1465.children[0] = TouchSensor1466;

let Transform1467 = browser.currentScene.createNode("Transform");
Transform1467.translation = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
let Shape1468 = browser.currentScene.createNode("Shape");
Shape1468.USE = "HAnimJointShape";
Transform1467.children = new MFNode();

Transform1467.children[0] = Shape1468;

HAnimSegment1465.children[1] = Transform1467;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_middle3'/> to <HAnimSite name='r_middle_distal_tip'/>
let Shape1469 = browser.currentScene.createNode("Shape");
let LineSet1470 = browser.currentScene.createNode("LineSet");
LineSet1470.vertexCount = new MFInt32(new int[2]);
let Coordinate1471 = browser.currentScene.createNode("Coordinate");
Coordinate1471.point = new MFVec3f(new float[-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427]);
LineSet1470.coord = Coordinate1471;

let ColorRGBA1472 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1472.USE = "HAnimSiteLineColorRGBA";
LineSet1470.color = ColorRGBA1472;

Shape1469.geometry = LineSet1470;

HAnimSegment1465.children[2] = Shape1469;

let HAnimSite1473 = browser.currentScene.createNode("HAnimSite");
HAnimSite1473.name = "r_middle_distal_tip_pt";
HAnimSite1473.DEF = "hanim_r_middle_distal_tip";
HAnimSite1473.translation = new SFVec3f(new float[-0.1969,0.6758,-0.0427]);
//HAnimSite visualization shape
let TouchSensor1474 = browser.currentScene.createNode("TouchSensor");
TouchSensor1474.description = "HAnimSite r_middle_distal_tip";
HAnimSite1473.children = new MFNode();

HAnimSite1473.children[0] = TouchSensor1474;

let Shape1475 = browser.currentScene.createNode("Shape");
Shape1475.USE = "HAnimSiteShape";
HAnimSite1473.children[1] = Shape1475;

HAnimSegment1465.children[3] = HAnimSite1473;

HAnimJoint1464.children = new MFNode();

HAnimJoint1464.children[0] = HAnimSegment1465;

HAnimJoint1455.children[1] = HAnimJoint1464;

HAnimJoint1446.children[1] = HAnimJoint1455;

HAnimJoint1437.children[1] = HAnimJoint1446;

HAnimJoint1303.children[3] = HAnimJoint1437;

let HAnimJoint1476 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1476.name = "r_ring0";
HAnimJoint1476.DEF = "hanim_r_ring0";
HAnimJoint1476.center = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
let HAnimSegment1477 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1477.name = "r_metacarpal_4";
HAnimSegment1477.DEF = "hanim_r_metacarpal_4";
//Visualization sphere for <HAnimJoint name='r_ring0'/> is placed within <HAnimSegment name='r_metacarpal_4'/>
let TouchSensor1478 = browser.currentScene.createNode("TouchSensor");
TouchSensor1478.description = "HAnimJoint r_ring0, HAnimSegment r_metacarpal_4";
HAnimSegment1477.children = new MFNode();

HAnimSegment1477.children[0] = TouchSensor1478;

let Transform1479 = browser.currentScene.createNode("Transform");
Transform1479.translation = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
let Shape1480 = browser.currentScene.createNode("Shape");
Shape1480.USE = "HAnimJointShape";
Transform1479.children = new MFNode();

Transform1479.children[0] = Shape1480;

HAnimSegment1477.children[1] = Transform1479;

//HAnimSegment visualization line from current <HAnimJoint name='r_ring0'/> to child <HAnimJoint name='r_ring1'/>
let Shape1481 = browser.currentScene.createNode("Shape");
let LineSet1482 = browser.currentScene.createNode("LineSet");
LineSet1482.vertexCount = new MFInt32(new int[2]);
let Coordinate1483 = browser.currentScene.createNode("Coordinate");
Coordinate1483.point = new MFVec3f(new float[-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794]);
LineSet1482.coord = Coordinate1483;

let ColorRGBA1484 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1484.USE = "HAnimSegmentLineColorRGBA";
LineSet1482.color = ColorRGBA1484;

Shape1481.geometry = LineSet1482;

HAnimSegment1477.children[2] = Shape1481;

HAnimJoint1476.children = new MFNode();

HAnimJoint1476.children[0] = HAnimSegment1477;

let HAnimJoint1485 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1485.name = "r_ring1";
HAnimJoint1485.DEF = "hanim_r_ring1";
HAnimJoint1485.center = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
let HAnimSegment1486 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1486.name = "r_carpal_proximal_phalanx_4";
HAnimSegment1486.DEF = "hanim_r_carpal_proximal_phalanx_4";
//Visualization sphere for <HAnimJoint name='r_ring1'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_4'/>
let TouchSensor1487 = browser.currentScene.createNode("TouchSensor");
TouchSensor1487.description = "HAnimJoint r_ring1, HAnimSegment r_carpal_proximal_phalanx_4";
HAnimSegment1486.children = new MFNode();

HAnimSegment1486.children[0] = TouchSensor1487;

let Transform1488 = browser.currentScene.createNode("Transform");
Transform1488.translation = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
let Shape1489 = browser.currentScene.createNode("Shape");
Shape1489.USE = "HAnimJointShape";
Transform1488.children = new MFNode();

Transform1488.children[0] = Shape1489;

HAnimSegment1486.children[1] = Transform1488;

//HAnimSegment visualization line from current <HAnimJoint name='r_ring1'/> to child <HAnimJoint name='r_ring2'/>
let Shape1490 = browser.currentScene.createNode("Shape");
let LineSet1491 = browser.currentScene.createNode("LineSet");
LineSet1491.vertexCount = new MFInt32(new int[2]);
let Coordinate1492 = browser.currentScene.createNode("Coordinate");
Coordinate1492.point = new MFVec3f(new float[-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777]);
LineSet1491.coord = Coordinate1492;

let ColorRGBA1493 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1493.USE = "HAnimSegmentLineColorRGBA";
LineSet1491.color = ColorRGBA1493;

Shape1490.geometry = LineSet1491;

HAnimSegment1486.children[2] = Shape1490;

HAnimJoint1485.children = new MFNode();

HAnimJoint1485.children[0] = HAnimSegment1486;

let HAnimJoint1494 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1494.name = "r_ring2";
HAnimJoint1494.DEF = "hanim_r_ring2";
HAnimJoint1494.center = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
let HAnimSegment1495 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1495.name = "r_carpal_middle_phalanx_4";
HAnimSegment1495.DEF = "hanim_r_carpal_middle_phalanx_4";
//Visualization sphere for <HAnimJoint name='r_ring2'/> is placed within <HAnimSegment name='r_carpal_middle_phalanx_4'/>
let TouchSensor1496 = browser.currentScene.createNode("TouchSensor");
TouchSensor1496.description = "HAnimJoint r_ring2, HAnimSegment r_carpal_middle_phalanx_4";
HAnimSegment1495.children = new MFNode();

HAnimSegment1495.children[0] = TouchSensor1496;

let Transform1497 = browser.currentScene.createNode("Transform");
Transform1497.translation = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
let Shape1498 = browser.currentScene.createNode("Shape");
Shape1498.USE = "HAnimJointShape";
Transform1497.children = new MFNode();

Transform1497.children[0] = Shape1498;

HAnimSegment1495.children[1] = Transform1497;

//HAnimSegment visualization line from current <HAnimJoint name='r_ring2'/> to child <HAnimJoint name='r_ring3'/>
let Shape1499 = browser.currentScene.createNode("Shape");
let LineSet1500 = browser.currentScene.createNode("LineSet");
LineSet1500.vertexCount = new MFInt32(new int[2]);
let Coordinate1501 = browser.currentScene.createNode("Coordinate");
Coordinate1501.point = new MFVec3f(new float[-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767]);
LineSet1500.coord = Coordinate1501;

let ColorRGBA1502 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1502.USE = "HAnimSegmentLineColorRGBA";
LineSet1500.color = ColorRGBA1502;

Shape1499.geometry = LineSet1500;

HAnimSegment1495.children[2] = Shape1499;

HAnimJoint1494.children = new MFNode();

HAnimJoint1494.children[0] = HAnimSegment1495;

let HAnimJoint1503 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1503.name = "r_ring3";
HAnimJoint1503.DEF = "hanim_r_ring3";
HAnimJoint1503.center = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
let HAnimSegment1504 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1504.name = "r_carpal_distal_phalanx_4";
HAnimSegment1504.DEF = "hanim_r_carpal_distal_phalanx_4";
//Visualization sphere for <HAnimJoint name='r_ring3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_4'/>
let TouchSensor1505 = browser.currentScene.createNode("TouchSensor");
TouchSensor1505.description = "HAnimJoint r_ring3, HAnimSegment r_carpal_distal_phalanx_4";
HAnimSegment1504.children = new MFNode();

HAnimSegment1504.children[0] = TouchSensor1505;

let Transform1506 = browser.currentScene.createNode("Transform");
Transform1506.translation = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
let Shape1507 = browser.currentScene.createNode("Shape");
Shape1507.USE = "HAnimJointShape";
Transform1506.children = new MFNode();

Transform1506.children[0] = Shape1507;

HAnimSegment1504.children[1] = Transform1506;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ring3'/> to <HAnimSite name='r_ring_distal_tip'/>
let Shape1508 = browser.currentScene.createNode("Shape");
let LineSet1509 = browser.currentScene.createNode("LineSet");
LineSet1509.vertexCount = new MFInt32(new int[2]);
let Coordinate1510 = browser.currentScene.createNode("Coordinate");
Coordinate1510.point = new MFVec3f(new float[-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693]);
LineSet1509.coord = Coordinate1510;

let ColorRGBA1511 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1511.USE = "HAnimSiteLineColorRGBA";
LineSet1509.color = ColorRGBA1511;

Shape1508.geometry = LineSet1509;

HAnimSegment1504.children[2] = Shape1508;

let HAnimSite1512 = browser.currentScene.createNode("HAnimSite");
HAnimSite1512.name = "r_ring_distal_tip_pt";
HAnimSite1512.DEF = "hanim_r_ring_distal_tip";
HAnimSite1512.translation = new SFVec3f(new float[-0.1934,0.6778,-0.0693]);
//HAnimSite visualization shape
let TouchSensor1513 = browser.currentScene.createNode("TouchSensor");
TouchSensor1513.description = "HAnimSite r_ring_distal_tip";
HAnimSite1512.children = new MFNode();

HAnimSite1512.children[0] = TouchSensor1513;

let Shape1514 = browser.currentScene.createNode("Shape");
Shape1514.USE = "HAnimSiteShape";
HAnimSite1512.children[1] = Shape1514;

HAnimSegment1504.children[3] = HAnimSite1512;

HAnimJoint1503.children = new MFNode();

HAnimJoint1503.children[0] = HAnimSegment1504;

HAnimJoint1494.children[1] = HAnimJoint1503;

HAnimJoint1485.children[1] = HAnimJoint1494;

HAnimJoint1476.children[1] = HAnimJoint1485;

HAnimJoint1303.children[4] = HAnimJoint1476;

let HAnimJoint1515 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1515.name = "r_pinky0";
HAnimJoint1515.DEF = "hanim_r_pinky0";
HAnimJoint1515.center = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
let HAnimSegment1516 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1516.name = "r_metacarpal_5";
HAnimSegment1516.DEF = "hanim_r_metacarpal_5";
//Visualization sphere for <HAnimJoint name='r_pinky0'/> is placed within <HAnimSegment name='r_metacarpal_5'/>
let TouchSensor1517 = browser.currentScene.createNode("TouchSensor");
TouchSensor1517.description = "HAnimJoint r_pinky0, HAnimSegment r_metacarpal_5";
HAnimSegment1516.children = new MFNode();

HAnimSegment1516.children[0] = TouchSensor1517;

let Transform1518 = browser.currentScene.createNode("Transform");
Transform1518.translation = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
let Shape1519 = browser.currentScene.createNode("Shape");
Shape1519.USE = "HAnimJointShape";
Transform1518.children = new MFNode();

Transform1518.children[0] = Shape1519;

HAnimSegment1516.children[1] = Transform1518;

//HAnimSegment visualization line from current <HAnimJoint name='r_pinky0'/> to child <HAnimJoint name='r_pinky1'/>
let Shape1520 = browser.currentScene.createNode("Shape");
let LineSet1521 = browser.currentScene.createNode("LineSet");
LineSet1521.vertexCount = new MFInt32(new int[2]);
let Coordinate1522 = browser.currentScene.createNode("Coordinate");
Coordinate1522.point = new MFVec3f(new float[-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036]);
LineSet1521.coord = Coordinate1522;

let ColorRGBA1523 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1523.USE = "HAnimSegmentLineColorRGBA";
LineSet1521.color = ColorRGBA1523;

Shape1520.geometry = LineSet1521;

HAnimSegment1516.children[2] = Shape1520;

HAnimJoint1515.children = new MFNode();

HAnimJoint1515.children[0] = HAnimSegment1516;

let HAnimJoint1524 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1524.name = "r_pinky1";
HAnimJoint1524.DEF = "hanim_r_pinky1";
HAnimJoint1524.center = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
let HAnimSegment1525 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1525.name = "r_carpal_proximal_phalanx_5";
HAnimSegment1525.DEF = "hanim_r_carpal_proximal_phalanx_5";
//Visualization sphere for <HAnimJoint name='r_pinky1'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_5'/>
let TouchSensor1526 = browser.currentScene.createNode("TouchSensor");
TouchSensor1526.description = "HAnimJoint r_pinky1, HAnimSegment r_carpal_proximal_phalanx_5";
HAnimSegment1525.children = new MFNode();

HAnimSegment1525.children[0] = TouchSensor1526;

let Transform1527 = browser.currentScene.createNode("Transform");
Transform1527.translation = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
let Shape1528 = browser.currentScene.createNode("Shape");
Shape1528.USE = "HAnimJointShape";
Transform1527.children = new MFNode();

Transform1527.children[0] = Shape1528;

HAnimSegment1525.children[1] = Transform1527;

//HAnimSegment visualization line from current <HAnimJoint name='r_pinky1'/> to child <HAnimJoint name='r_pinky2'/>
let Shape1529 = browser.currentScene.createNode("Shape");
let LineSet1530 = browser.currentScene.createNode("LineSet");
LineSet1530.vertexCount = new MFInt32(new int[2]);
let Coordinate1531 = browser.currentScene.createNode("Coordinate");
Coordinate1531.point = new MFVec3f(new float[-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024]);
LineSet1530.coord = Coordinate1531;

let ColorRGBA1532 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1532.USE = "HAnimSegmentLineColorRGBA";
LineSet1530.color = ColorRGBA1532;

Shape1529.geometry = LineSet1530;

HAnimSegment1525.children[2] = Shape1529;

HAnimJoint1524.children = new MFNode();

HAnimJoint1524.children[0] = HAnimSegment1525;

let HAnimJoint1533 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1533.name = "r_pinky2";
HAnimJoint1533.DEF = "hanim_r_pinky2";
HAnimJoint1533.center = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
let HAnimSegment1534 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1534.name = "r_carpal_middle_phalanx_5";
HAnimSegment1534.DEF = "hanim_r_carpal_middle_phalanx_5";
//Visualization sphere for <HAnimJoint name='r_pinky2'/> is placed within <HAnimSegment name='r_carpal_middle_phalanx_5'/>
let TouchSensor1535 = browser.currentScene.createNode("TouchSensor");
TouchSensor1535.description = "HAnimJoint r_pinky2, HAnimSegment r_carpal_middle_phalanx_5";
HAnimSegment1534.children = new MFNode();

HAnimSegment1534.children[0] = TouchSensor1535;

let Transform1536 = browser.currentScene.createNode("Transform");
Transform1536.translation = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
let Shape1537 = browser.currentScene.createNode("Shape");
Shape1537.USE = "HAnimJointShape";
Transform1536.children = new MFNode();

Transform1536.children[0] = Shape1537;

HAnimSegment1534.children[1] = Transform1536;

//HAnimSegment visualization line from current <HAnimJoint name='r_pinky2'/> to child <HAnimJoint name='r_pinky3'/>
let Shape1538 = browser.currentScene.createNode("Shape");
let LineSet1539 = browser.currentScene.createNode("LineSet");
LineSet1539.vertexCount = new MFInt32(new int[2]);
let Coordinate1540 = browser.currentScene.createNode("Coordinate");
Coordinate1540.point = new MFVec3f(new float[-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017]);
LineSet1539.coord = Coordinate1540;

let ColorRGBA1541 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1541.USE = "HAnimSegmentLineColorRGBA";
LineSet1539.color = ColorRGBA1541;

Shape1538.geometry = LineSet1539;

HAnimSegment1534.children[2] = Shape1538;

HAnimJoint1533.children = new MFNode();

HAnimJoint1533.children[0] = HAnimSegment1534;

let HAnimJoint1542 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1542.name = "r_pinky3";
HAnimJoint1542.DEF = "hanim_r_pinky3";
HAnimJoint1542.center = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
let HAnimSegment1543 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1543.name = "r_carpal_distal_phalanx_5";
HAnimSegment1543.DEF = "hanim_r_carpal_distal_phalanx_5";
//Visualization sphere for <HAnimJoint name='r_pinky3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_5'/>
let TouchSensor1544 = browser.currentScene.createNode("TouchSensor");
TouchSensor1544.description = "HAnimJoint r_pinky3, HAnimSegment r_carpal_distal_phalanx_5";
HAnimSegment1543.children = new MFNode();

HAnimSegment1543.children[0] = TouchSensor1544;

let Transform1545 = browser.currentScene.createNode("Transform");
Transform1545.translation = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
let Shape1546 = browser.currentScene.createNode("Shape");
Shape1546.USE = "HAnimJointShape";
Transform1545.children = new MFNode();

Transform1545.children[0] = Shape1546;

HAnimSegment1543.children[1] = Transform1545;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_pinky3'/> to <HAnimSite name='r_pinky_distal_tip'/>
let Shape1547 = browser.currentScene.createNode("Shape");
let LineSet1548 = browser.currentScene.createNode("LineSet");
LineSet1548.vertexCount = new MFInt32(new int[2]);
let Coordinate1549 = browser.currentScene.createNode("Coordinate");
Coordinate1549.point = new MFVec3f(new float[-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949]);
LineSet1548.coord = Coordinate1549;

let ColorRGBA1550 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1550.USE = "HAnimSiteLineColorRGBA";
LineSet1548.color = ColorRGBA1550;

Shape1547.geometry = LineSet1548;

HAnimSegment1543.children[2] = Shape1547;

let HAnimSite1551 = browser.currentScene.createNode("HAnimSite");
HAnimSite1551.name = "r_pinky_distal_tip_pt";
HAnimSite1551.DEF = "hanim_r_pinky_distal_tip";
HAnimSite1551.translation = new SFVec3f(new float[-0.1938,0.7035,-0.0949]);
//HAnimSite visualization shape
let TouchSensor1552 = browser.currentScene.createNode("TouchSensor");
TouchSensor1552.description = "HAnimSite r_pinky_distal_tip";
HAnimSite1551.children = new MFNode();

HAnimSite1551.children[0] = TouchSensor1552;

let Shape1553 = browser.currentScene.createNode("Shape");
Shape1553.USE = "HAnimSiteShape";
HAnimSite1551.children[1] = Shape1553;

HAnimSegment1543.children[3] = HAnimSite1551;

HAnimJoint1542.children = new MFNode();

HAnimJoint1542.children[0] = HAnimSegment1543;

HAnimJoint1533.children[1] = HAnimJoint1542;

HAnimJoint1524.children[1] = HAnimJoint1533;

HAnimJoint1515.children[1] = HAnimJoint1524;

HAnimJoint1303.children[5] = HAnimJoint1515;

HAnimJoint1266.children[1] = HAnimJoint1303;

HAnimJoint1250.children[1] = HAnimJoint1266;

HAnimJoint1241.children[1] = HAnimJoint1250;

HAnimJoint1204.children[1] = HAnimJoint1241;

HAnimJoint566.children[3] = HAnimJoint1204;

HAnimJoint557.children[1] = HAnimJoint566;

HAnimJoint548.children[1] = HAnimJoint557;

HAnimJoint539.children[1] = HAnimJoint548;

HAnimJoint530.children[1] = HAnimJoint539;

HAnimJoint521.children[1] = HAnimJoint530;

HAnimJoint512.children[1] = HAnimJoint521;

HAnimJoint503.children[1] = HAnimJoint512;

HAnimJoint480.children[1] = HAnimJoint503;

HAnimJoint464.children[1] = HAnimJoint480;

HAnimJoint455.children[1] = HAnimJoint464;

HAnimJoint446.children[1] = HAnimJoint455;

HAnimJoint437.children[1] = HAnimJoint446;

HAnimJoint407.children[1] = HAnimJoint437;

HAnimJoint398.children[1] = HAnimJoint407;

HAnimJoint389.children[1] = HAnimJoint398;

HAnimJoint366.children[1] = HAnimJoint389;

HAnimJoint16.children[2] = HAnimJoint366;

HAnimHumanoid15.joints = new MFNode();

HAnimHumanoid15.joints[0] = HAnimJoint16;

//HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is expected
//USE nodes go here for access by inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation
//TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default
//right between the eyes, stationary position not animating except with body itself
let HAnimSite1554 = browser.currentScene.createNode("HAnimSite");
HAnimSite1554.name = "l_inclined_view";
HAnimSite1554.DEF = "hanim_l_inclined_view";
HAnimSite1554.rotation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
HAnimSite1554.translation = new SFVec3f(new float[1.62,1.05,2.06]);
//HAnimSite visualization shape
let TouchSensor1555 = browser.currentScene.createNode("TouchSensor");
TouchSensor1555.description = "HAnimSite l_inclined_view";
HAnimSite1554.children = new MFNode();

HAnimSite1554.children[0] = TouchSensor1555;

let Shape1556 = browser.currentScene.createNode("Shape");
Shape1556.USE = "HAnimSiteShape";
HAnimSite1554.children[1] = Shape1556;

let Viewpoint1557 = browser.currentScene.createNode("Viewpoint");
Viewpoint1557.DEF = "hanim_l_inclined_viewpoint";
Viewpoint1557.description = "left inclined";
Viewpoint1557.position = new SFVec3f(new float[0,0,0]);
HAnimSite1554.children[2] = Viewpoint1557;

//HAnimSite/Viewpoint visualization shape
let Anchor1558 = browser.currentScene.createNode("Anchor");
Anchor1558.description = "HAnimSite hanim_l_inclined_view Viewpoint";
Anchor1558.url = new MFString(new java.lang.String["#hanim_l_inclined_viewpoint"]);
let LOD1559 = browser.currentScene.createNode("LOD");
LOD1559.forceTransitions = True;
LOD1559.range = new MFFloat(new float[0.04]);
let WorldInfo1560 = browser.currentScene.createNode("WorldInfo");
WorldInfo1560.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1559.children = new MFNode();

LOD1559.children[0] = WorldInfo1560;

let Shape1561 = browser.currentScene.createNode("Shape");
Shape1561.USE = "HAnimSiteViewpointShape";
LOD1559.children[1] = Shape1561;

Anchor1558.children = new MFNode();

Anchor1558.children[0] = LOD1559;

HAnimSite1554.children[3] = Anchor1558;

HAnimHumanoid15.viewpoints[1] = HAnimSite1554;

let HAnimSite1562 = browser.currentScene.createNode("HAnimSite");
HAnimSite1562.name = "r_inclined_view";
HAnimSite1562.DEF = "hanim_r_inclined_view";
HAnimSite1562.rotation = new SFRotation(new float[-0.113,-0.993,0.0347,0.671]);
HAnimSite1562.translation = new SFVec3f(new float[-1.62,1.05,2.06]);
//HAnimSite visualization shape
let TouchSensor1563 = browser.currentScene.createNode("TouchSensor");
TouchSensor1563.description = "HAnimSite r_inclined_view";
HAnimSite1562.children = new MFNode();

HAnimSite1562.children[0] = TouchSensor1563;

let Shape1564 = browser.currentScene.createNode("Shape");
Shape1564.USE = "HAnimSiteShape";
HAnimSite1562.children[1] = Shape1564;

let Viewpoint1565 = browser.currentScene.createNode("Viewpoint");
Viewpoint1565.DEF = "hanim_r_inclined_viewpoint";
Viewpoint1565.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1565.description = "right inclined";
Viewpoint1565.position = new SFVec3f(new float[0,0,0]);
HAnimSite1562.children[2] = Viewpoint1565;

//HAnimSite/Viewpoint visualization shape
let Anchor1566 = browser.currentScene.createNode("Anchor");
Anchor1566.description = "HAnimSite hanim_r_inclined_view Viewpoint";
Anchor1566.url = new MFString(new java.lang.String["#hanim_r_inclined_viewpoint"]);
let LOD1567 = browser.currentScene.createNode("LOD");
LOD1567.forceTransitions = True;
LOD1567.range = new MFFloat(new float[0.04]);
let WorldInfo1568 = browser.currentScene.createNode("WorldInfo");
WorldInfo1568.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1567.children = new MFNode();

LOD1567.children[0] = WorldInfo1568;

let Shape1569 = browser.currentScene.createNode("Shape");
Shape1569.USE = "HAnimSiteViewpointShape";
LOD1567.children[1] = Shape1569;

Anchor1566.children = new MFNode();

Anchor1566.children[0] = LOD1567;

HAnimSite1562.children[3] = Anchor1566;

HAnimHumanoid15.viewpoints[2] = HAnimSite1562;

let HAnimSite1570 = browser.currentScene.createNode("HAnimSite");
HAnimSite1570.name = "front_view";
HAnimSite1570.DEF = "hanim_front_view";
HAnimSite1570.translation = new SFVec3f(new float[0,0.85,2.58]);
//HAnimSite visualization shape
let TouchSensor1571 = browser.currentScene.createNode("TouchSensor");
TouchSensor1571.description = "HAnimSite front_view";
HAnimSite1570.children = new MFNode();

HAnimSite1570.children[0] = TouchSensor1571;

let Shape1572 = browser.currentScene.createNode("Shape");
Shape1572.USE = "HAnimSiteShape";
HAnimSite1570.children[1] = Shape1572;

let Viewpoint1573 = browser.currentScene.createNode("Viewpoint");
Viewpoint1573.DEF = "hanim_front_viewpoint";
Viewpoint1573.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1573.description = "front";
Viewpoint1573.position = new SFVec3f(new float[0,0,0]);
HAnimSite1570.children[2] = Viewpoint1573;

//HAnimSite/Viewpoint visualization shape
let Anchor1574 = browser.currentScene.createNode("Anchor");
Anchor1574.description = "HAnimSite hanim_front_view Viewpoint";
Anchor1574.url = new MFString(new java.lang.String["#hanim_front_viewpoint"]);
let LOD1575 = browser.currentScene.createNode("LOD");
LOD1575.forceTransitions = True;
LOD1575.range = new MFFloat(new float[0.04]);
let WorldInfo1576 = browser.currentScene.createNode("WorldInfo");
WorldInfo1576.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1575.children = new MFNode();

LOD1575.children[0] = WorldInfo1576;

let Shape1577 = browser.currentScene.createNode("Shape");
Shape1577.USE = "HAnimSiteViewpointShape";
LOD1575.children[1] = Shape1577;

Anchor1574.children = new MFNode();

Anchor1574.children[0] = LOD1575;

HAnimSite1570.children[3] = Anchor1574;

HAnimHumanoid15.viewpoints[3] = HAnimSite1570;

let HAnimSite1578 = browser.currentScene.createNode("HAnimSite");
HAnimSite1578.name = "back_view";
HAnimSite1578.DEF = "hanim_back_view";
HAnimSite1578.rotation = new SFRotation(new float[0,1,0,3.14]);
HAnimSite1578.translation = new SFVec3f(new float[0,0.85,-2.58]);
//HAnimSite visualization shape
let TouchSensor1579 = browser.currentScene.createNode("TouchSensor");
TouchSensor1579.description = "HAnimSite back_view";
HAnimSite1578.children = new MFNode();

HAnimSite1578.children[0] = TouchSensor1579;

let Shape1580 = browser.currentScene.createNode("Shape");
Shape1580.USE = "HAnimSiteShape";
HAnimSite1578.children[1] = Shape1580;

let Viewpoint1581 = browser.currentScene.createNode("Viewpoint");
Viewpoint1581.DEF = "hanim_back_viewpoint";
Viewpoint1581.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1581.description = "back";
Viewpoint1581.position = new SFVec3f(new float[0,0,0]);
HAnimSite1578.children[2] = Viewpoint1581;

//HAnimSite/Viewpoint visualization shape
let Anchor1582 = browser.currentScene.createNode("Anchor");
Anchor1582.description = "HAnimSite hanim_back_view Viewpoint";
Anchor1582.url = new MFString(new java.lang.String["#hanim_back_viewpoint"]);
let LOD1583 = browser.currentScene.createNode("LOD");
LOD1583.forceTransitions = True;
LOD1583.range = new MFFloat(new float[0.04]);
let WorldInfo1584 = browser.currentScene.createNode("WorldInfo");
WorldInfo1584.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1583.children = new MFNode();

LOD1583.children[0] = WorldInfo1584;

let Shape1585 = browser.currentScene.createNode("Shape");
Shape1585.USE = "HAnimSiteViewpointShape";
LOD1583.children[1] = Shape1585;

Anchor1582.children = new MFNode();

Anchor1582.children[0] = LOD1583;

HAnimSite1578.children[3] = Anchor1582;

HAnimHumanoid15.viewpoints[4] = HAnimSite1578;

let HAnimSite1586 = browser.currentScene.createNode("HAnimSite");
HAnimSite1586.name = "l_side_view";
HAnimSite1586.DEF = "hanim_l_side_view";
HAnimSite1586.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite1586.translation = new SFVec3f(new float[2.6,0.854,0]);
//HAnimSite visualization shape
let TouchSensor1587 = browser.currentScene.createNode("TouchSensor");
TouchSensor1587.description = "HAnimSite l_side_view";
HAnimSite1586.children = new MFNode();

HAnimSite1586.children[0] = TouchSensor1587;

let Shape1588 = browser.currentScene.createNode("Shape");
Shape1588.USE = "HAnimSiteShape";
HAnimSite1586.children[1] = Shape1588;

let Viewpoint1589 = browser.currentScene.createNode("Viewpoint");
Viewpoint1589.DEF = "hanim_l_side_viewpoint";
Viewpoint1589.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1589.description = "left side";
Viewpoint1589.position = new SFVec3f(new float[0,0,0]);
HAnimSite1586.children[2] = Viewpoint1589;

//HAnimSite/Viewpoint visualization shape
let Anchor1590 = browser.currentScene.createNode("Anchor");
Anchor1590.description = "HAnimSite hanim_l_side_view Viewpoint";
Anchor1590.url = new MFString(new java.lang.String["#hanim_l_side_viewpoint"]);
let LOD1591 = browser.currentScene.createNode("LOD");
LOD1591.forceTransitions = True;
LOD1591.range = new MFFloat(new float[0.04]);
let WorldInfo1592 = browser.currentScene.createNode("WorldInfo");
WorldInfo1592.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1591.children = new MFNode();

LOD1591.children[0] = WorldInfo1592;

let Shape1593 = browser.currentScene.createNode("Shape");
Shape1593.USE = "HAnimSiteViewpointShape";
LOD1591.children[1] = Shape1593;

Anchor1590.children = new MFNode();

Anchor1590.children[0] = LOD1591;

HAnimSite1586.children[3] = Anchor1590;

HAnimHumanoid15.viewpoints[5] = HAnimSite1586;

let HAnimSite1594 = browser.currentScene.createNode("HAnimSite");
HAnimSite1594.name = "Top_view";
HAnimSite1594.DEF = "hanim_Top_view";
HAnimSite1594.rotation = new SFRotation(new float[1,0,0,-1.57]);
HAnimSite1594.translation = new SFVec3f(new float[0,3.5,0]);
//HAnimSite visualization shape
let TouchSensor1595 = browser.currentScene.createNode("TouchSensor");
TouchSensor1595.description = "HAnimSite Top_view";
HAnimSite1594.children = new MFNode();

HAnimSite1594.children[0] = TouchSensor1595;

let Shape1596 = browser.currentScene.createNode("Shape");
Shape1596.USE = "HAnimSiteShape";
HAnimSite1594.children[1] = Shape1596;

let Viewpoint1597 = browser.currentScene.createNode("Viewpoint");
Viewpoint1597.DEF = "hanim_Top_viewpoint";
Viewpoint1597.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1597.description = "Top";
Viewpoint1597.position = new SFVec3f(new float[0,0,0]);
HAnimSite1594.children[2] = Viewpoint1597;

//HAnimSite/Viewpoint visualization shape
let Anchor1598 = browser.currentScene.createNode("Anchor");
Anchor1598.description = "HAnimSite hanim_Top_view Viewpoint";
Anchor1598.url = new MFString(new java.lang.String["#hanim_Top_viewpoint"]);
let LOD1599 = browser.currentScene.createNode("LOD");
LOD1599.forceTransitions = True;
LOD1599.range = new MFFloat(new float[0.04]);
let WorldInfo1600 = browser.currentScene.createNode("WorldInfo");
WorldInfo1600.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1599.children = new MFNode();

LOD1599.children[0] = WorldInfo1600;

let Shape1601 = browser.currentScene.createNode("Shape");
Shape1601.USE = "HAnimSiteViewpointShape";
LOD1599.children[1] = Shape1601;

Anchor1598.children = new MFNode();

Anchor1598.children[0] = LOD1599;

HAnimSite1594.children[3] = Anchor1598;

HAnimHumanoid15.viewpoints[6] = HAnimSite1594;

let HAnimSite1602 = browser.currentScene.createNode("HAnimSite");
HAnimSite1602.name = "front_close_view";
HAnimSite1602.DEF = "hanim_front_close_view";
HAnimSite1602.translation = new SFVec3f(new float[0,0.854,1.575]);
//HAnimSite visualization shape
let TouchSensor1603 = browser.currentScene.createNode("TouchSensor");
TouchSensor1603.description = "HAnimSite front_close_view";
HAnimSite1602.children = new MFNode();

HAnimSite1602.children[0] = TouchSensor1603;

let Shape1604 = browser.currentScene.createNode("Shape");
Shape1604.USE = "HAnimSiteShape";
HAnimSite1602.children[1] = Shape1604;

let Viewpoint1605 = browser.currentScene.createNode("Viewpoint");
Viewpoint1605.DEF = "hanim_front_close_viewpoint";
Viewpoint1605.centerOfRotation = new SFVec3f(new float[0,0,1.575]);
Viewpoint1605.description = "front close";
Viewpoint1605.position = new SFVec3f(new float[0,0,0]);
HAnimSite1602.children[2] = Viewpoint1605;

//HAnimSite/Viewpoint visualization shape
let Anchor1606 = browser.currentScene.createNode("Anchor");
Anchor1606.description = "HAnimSite hanim_front_close_view Viewpoint";
Anchor1606.url = new MFString(new java.lang.String["#hanim_front_close_viewpoint"]);
let LOD1607 = browser.currentScene.createNode("LOD");
LOD1607.forceTransitions = True;
LOD1607.range = new MFFloat(new float[0.04]);
let WorldInfo1608 = browser.currentScene.createNode("WorldInfo");
WorldInfo1608.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1607.children = new MFNode();

LOD1607.children[0] = WorldInfo1608;

let Shape1609 = browser.currentScene.createNode("Shape");
Shape1609.USE = "HAnimSiteViewpointShape";
LOD1607.children[1] = Shape1609;

Anchor1606.children = new MFNode();

Anchor1606.children[0] = LOD1607;

HAnimSite1602.children[3] = Anchor1606;

HAnimHumanoid15.viewpoints[7] = HAnimSite1602;

let HAnimSite1610 = browser.currentScene.createNode("HAnimSite");
HAnimSite1610.name = "side_close_view";
HAnimSite1610.DEF = "hanim_side_close_view";
HAnimSite1610.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite1610.translation = new SFVec3f(new float[1.56,0.854,0]);
//HAnimSite visualization shape
let TouchSensor1611 = browser.currentScene.createNode("TouchSensor");
TouchSensor1611.description = "HAnimSite side_close_view";
HAnimSite1610.children = new MFNode();

HAnimSite1610.children[0] = TouchSensor1611;

let Shape1612 = browser.currentScene.createNode("Shape");
Shape1612.USE = "HAnimSiteShape";
HAnimSite1610.children[1] = Shape1612;

let Viewpoint1613 = browser.currentScene.createNode("Viewpoint");
Viewpoint1613.DEF = "hanim_side_close_viewpoint";
Viewpoint1613.centerOfRotation = new SFVec3f(new float[1.6,0,0]);
Viewpoint1613.description = "side close";
Viewpoint1613.position = new SFVec3f(new float[0,0,0]);
HAnimSite1610.children[2] = Viewpoint1613;

//HAnimSite/Viewpoint visualization shape
let Anchor1614 = browser.currentScene.createNode("Anchor");
Anchor1614.description = "HAnimSite hanim_side_close_view Viewpoint";
Anchor1614.url = new MFString(new java.lang.String["#hanim_side_close_viewpoint"]);
let LOD1615 = browser.currentScene.createNode("LOD");
LOD1615.forceTransitions = True;
LOD1615.range = new MFFloat(new float[0.04]);
let WorldInfo1616 = browser.currentScene.createNode("WorldInfo");
WorldInfo1616.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1615.children = new MFNode();

LOD1615.children[0] = WorldInfo1616;

let Shape1617 = browser.currentScene.createNode("Shape");
Shape1617.USE = "HAnimSiteViewpointShape";
LOD1615.children[1] = Shape1617;

Anchor1614.children = new MFNode();

Anchor1614.children[0] = LOD1615;

HAnimSite1610.children[3] = Anchor1614;

HAnimHumanoid15.viewpoints[8] = HAnimSite1610;

let HAnimSite1618 = browser.currentScene.createNode("HAnimSite");
HAnimSite1618.name = "head_front_close_view";
HAnimSite1618.DEF = "hanim_head_front_close_view";
HAnimSite1618.translation = new SFVec3f(new float[0,1.5,1]);
//HAnimSite visualization shape
let TouchSensor1619 = browser.currentScene.createNode("TouchSensor");
TouchSensor1619.description = "HAnimSite head_front_close_view";
HAnimSite1618.children = new MFNode();

HAnimSite1618.children[0] = TouchSensor1619;

let Shape1620 = browser.currentScene.createNode("Shape");
Shape1620.USE = "HAnimSiteShape";
HAnimSite1618.children[1] = Shape1620;

let Viewpoint1621 = browser.currentScene.createNode("Viewpoint");
Viewpoint1621.DEF = "hanim_head_front_close_viewpoint";
Viewpoint1621.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint1621.description = "head front close";
Viewpoint1621.position = new SFVec3f(new float[0,0,0]);
HAnimSite1618.children[2] = Viewpoint1621;

//HAnimSite/Viewpoint visualization shape
let Anchor1622 = browser.currentScene.createNode("Anchor");
Anchor1622.description = "HAnimSite hanim_head_front_close_view Viewpoint";
Anchor1622.url = new MFString(new java.lang.String["#hanim_head_front_close_viewpoint"]);
let LOD1623 = browser.currentScene.createNode("LOD");
LOD1623.forceTransitions = True;
LOD1623.range = new MFFloat(new float[0.04]);
let WorldInfo1624 = browser.currentScene.createNode("WorldInfo");
WorldInfo1624.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1623.children = new MFNode();

LOD1623.children[0] = WorldInfo1624;

let Shape1625 = browser.currentScene.createNode("Shape");
Shape1625.USE = "HAnimSiteViewpointShape";
LOD1623.children[1] = Shape1625;

Anchor1622.children = new MFNode();

Anchor1622.children[0] = LOD1623;

HAnimSite1618.children[3] = Anchor1622;

HAnimHumanoid15.viewpoints[9] = HAnimSite1618;

let HAnimSite1626 = browser.currentScene.createNode("HAnimSite");
HAnimSite1626.name = "chest_front_close_view";
HAnimSite1626.DEF = "hanim_chest_front_close_view";
HAnimSite1626.translation = new SFVec3f(new float[0,1.2,1]);
//HAnimSite visualization shape
let TouchSensor1627 = browser.currentScene.createNode("TouchSensor");
TouchSensor1627.description = "HAnimSite chest_front_close_view";
HAnimSite1626.children = new MFNode();

HAnimSite1626.children[0] = TouchSensor1627;

let Shape1628 = browser.currentScene.createNode("Shape");
Shape1628.USE = "HAnimSiteShape";
HAnimSite1626.children[1] = Shape1628;

let Viewpoint1629 = browser.currentScene.createNode("Viewpoint");
Viewpoint1629.DEF = "hanim_chest_front_close_viewpoint";
Viewpoint1629.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint1629.description = "chest front close";
Viewpoint1629.position = new SFVec3f(new float[0,0,0]);
HAnimSite1626.children[2] = Viewpoint1629;

//HAnimSite/Viewpoint visualization shape
let Anchor1630 = browser.currentScene.createNode("Anchor");
Anchor1630.description = "HAnimSite hanim_chest_front_close_view Viewpoint";
Anchor1630.url = new MFString(new java.lang.String["#hanim_chest_front_close_viewpoint"]);
let LOD1631 = browser.currentScene.createNode("LOD");
LOD1631.forceTransitions = True;
LOD1631.range = new MFFloat(new float[0.04]);
let WorldInfo1632 = browser.currentScene.createNode("WorldInfo");
WorldInfo1632.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1631.children = new MFNode();

LOD1631.children[0] = WorldInfo1632;

let Shape1633 = browser.currentScene.createNode("Shape");
Shape1633.USE = "HAnimSiteViewpointShape";
LOD1631.children[1] = Shape1633;

Anchor1630.children = new MFNode();

Anchor1630.children[0] = LOD1631;

HAnimSite1626.children[3] = Anchor1630;

HAnimHumanoid15.viewpoints[10] = HAnimSite1626;

let HAnimSite1634 = browser.currentScene.createNode("HAnimSite");
HAnimSite1634.name = "pelvis_front_close_view";
HAnimSite1634.DEF = "hanim_pelvis_front_close_view";
HAnimSite1634.translation = new SFVec3f(new float[0,0.8,1]);
//HAnimSite visualization shape
let TouchSensor1635 = browser.currentScene.createNode("TouchSensor");
TouchSensor1635.description = "HAnimSite pelvis_front_close_view";
HAnimSite1634.children = new MFNode();

HAnimSite1634.children[0] = TouchSensor1635;

let Shape1636 = browser.currentScene.createNode("Shape");
Shape1636.USE = "HAnimSiteShape";
HAnimSite1634.children[1] = Shape1636;

let Viewpoint1637 = browser.currentScene.createNode("Viewpoint");
Viewpoint1637.DEF = "hanim_pelvis_front_close_viewpoint";
Viewpoint1637.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint1637.description = "pelvis front close";
Viewpoint1637.position = new SFVec3f(new float[0,0,0]);
HAnimSite1634.children[2] = Viewpoint1637;

//HAnimSite/Viewpoint visualization shape
let Anchor1638 = browser.currentScene.createNode("Anchor");
Anchor1638.description = "HAnimSite hanim_pelvis_front_close_view Viewpoint";
Anchor1638.url = new MFString(new java.lang.String["#hanim_pelvis_front_close_viewpoint"]);
let LOD1639 = browser.currentScene.createNode("LOD");
LOD1639.forceTransitions = True;
LOD1639.range = new MFFloat(new float[0.04]);
let WorldInfo1640 = browser.currentScene.createNode("WorldInfo");
WorldInfo1640.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1639.children = new MFNode();

LOD1639.children[0] = WorldInfo1640;

let Shape1641 = browser.currentScene.createNode("Shape");
Shape1641.USE = "HAnimSiteViewpointShape";
LOD1639.children[1] = Shape1641;

Anchor1638.children = new MFNode();

Anchor1638.children[0] = LOD1639;

HAnimSite1634.children[3] = Anchor1638;

HAnimHumanoid15.viewpoints[11] = HAnimSite1634;

let HAnimSite1642 = browser.currentScene.createNode("HAnimSite");
HAnimSite1642.name = "knees_front_close_view";
HAnimSite1642.DEF = "hanim_knees_front_close_view";
HAnimSite1642.translation = new SFVec3f(new float[0,0.4,1]);
//HAnimSite visualization shape
let TouchSensor1643 = browser.currentScene.createNode("TouchSensor");
TouchSensor1643.description = "HAnimSite knees_front_close_view";
HAnimSite1642.children = new MFNode();

HAnimSite1642.children[0] = TouchSensor1643;

let Shape1644 = browser.currentScene.createNode("Shape");
Shape1644.USE = "HAnimSiteShape";
HAnimSite1642.children[1] = Shape1644;

let Viewpoint1645 = browser.currentScene.createNode("Viewpoint");
Viewpoint1645.DEF = "hanim_knees_front_close_viewpoint";
Viewpoint1645.centerOfRotation = new SFVec3f(new float[0,0.4,0]);
Viewpoint1645.description = "knees front close";
Viewpoint1645.position = new SFVec3f(new float[0,0,0]);
HAnimSite1642.children[2] = Viewpoint1645;

//HAnimSite/Viewpoint visualization shape
let Anchor1646 = browser.currentScene.createNode("Anchor");
Anchor1646.description = "HAnimSite hanim_knees_front_close_view Viewpoint";
Anchor1646.url = new MFString(new java.lang.String["#hanim_knees_front_close_viewpoint"]);
let LOD1647 = browser.currentScene.createNode("LOD");
LOD1647.forceTransitions = True;
LOD1647.range = new MFFloat(new float[0.04]);
let WorldInfo1648 = browser.currentScene.createNode("WorldInfo");
WorldInfo1648.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1647.children = new MFNode();

LOD1647.children[0] = WorldInfo1648;

let Shape1649 = browser.currentScene.createNode("Shape");
Shape1649.USE = "HAnimSiteViewpointShape";
LOD1647.children[1] = Shape1649;

Anchor1646.children = new MFNode();

Anchor1646.children[0] = LOD1647;

HAnimSite1642.children[3] = Anchor1646;

HAnimHumanoid15.viewpoints[12] = HAnimSite1642;

let HAnimSite1650 = browser.currentScene.createNode("HAnimSite");
HAnimSite1650.name = "feet_front_close_view";
HAnimSite1650.DEF = "hanim_feet_front_close_view";
HAnimSite1650.translation = new SFVec3f(new float[0,0,1]);
//HAnimSite visualization shape
let TouchSensor1651 = browser.currentScene.createNode("TouchSensor");
TouchSensor1651.description = "HAnimSite feet_front_close_view";
HAnimSite1650.children = new MFNode();

HAnimSite1650.children[0] = TouchSensor1651;

let Shape1652 = browser.currentScene.createNode("Shape");
Shape1652.USE = "HAnimSiteShape";
HAnimSite1650.children[1] = Shape1652;

let Viewpoint1653 = browser.currentScene.createNode("Viewpoint");
Viewpoint1653.DEF = "hanim_feet_front_close_viewpoint";
Viewpoint1653.description = "feet front close";
Viewpoint1653.position = new SFVec3f(new float[0,0,0]);
HAnimSite1650.children[2] = Viewpoint1653;

//HAnimSite/Viewpoint visualization shape
let Anchor1654 = browser.currentScene.createNode("Anchor");
Anchor1654.description = "HAnimSite hanim_feet_front_close_view Viewpoint";
Anchor1654.url = new MFString(new java.lang.String["#hanim_feet_front_close_viewpoint"]);
let LOD1655 = browser.currentScene.createNode("LOD");
LOD1655.forceTransitions = True;
LOD1655.range = new MFFloat(new float[0.04]);
let WorldInfo1656 = browser.currentScene.createNode("WorldInfo");
WorldInfo1656.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1655.children = new MFNode();

LOD1655.children[0] = WorldInfo1656;

let Shape1657 = browser.currentScene.createNode("Shape");
Shape1657.USE = "HAnimSiteViewpointShape";
LOD1655.children[1] = Shape1657;

Anchor1654.children = new MFNode();

Anchor1654.children[0] = LOD1655;

HAnimSite1650.children[3] = Anchor1654;

HAnimHumanoid15.viewpoints[13] = HAnimSite1650;

let HAnimSite1658 = browser.currentScene.createNode("HAnimSite");
HAnimSite1658.name = "eye_level_view";
HAnimSite1658.DEF = "hanim_eye_level_view";
HAnimSite1658.translation = new SFVec3f(new float[0,1.6332,0.0502]);
//HAnimSite visualization shape
let TouchSensor1659 = browser.currentScene.createNode("TouchSensor");
TouchSensor1659.description = "HAnimSite eye_level_view";
HAnimSite1658.children = new MFNode();

HAnimSite1658.children[0] = TouchSensor1659;

let Shape1660 = browser.currentScene.createNode("Shape");
Shape1660.USE = "HAnimSiteShape";
HAnimSite1658.children[1] = Shape1660;

let Viewpoint1661 = browser.currentScene.createNode("Viewpoint");
Viewpoint1661.DEF = "hanim_eye_level_viewpoint";
Viewpoint1661.description = "eye level looking forward";
Viewpoint1661.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint1661.position = new SFVec3f(new float[0,0,0]);
HAnimSite1658.children[2] = Viewpoint1661;

//HAnimSite/Viewpoint visualization shape
let Anchor1662 = browser.currentScene.createNode("Anchor");
Anchor1662.description = "HAnimSite hanim_eye_level_view Viewpoint";
Anchor1662.url = new MFString(new java.lang.String["#hanim_eye_level_viewpoint"]);
let LOD1663 = browser.currentScene.createNode("LOD");
LOD1663.forceTransitions = True;
LOD1663.range = new MFFloat(new float[0.04]);
let WorldInfo1664 = browser.currentScene.createNode("WorldInfo");
WorldInfo1664.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1663.children = new MFNode();

LOD1663.children[0] = WorldInfo1664;

let Shape1665 = browser.currentScene.createNode("Shape");
Shape1665.USE = "HAnimSiteViewpointShape";
LOD1663.children[1] = Shape1665;

Anchor1662.children = new MFNode();

Anchor1662.children[0] = LOD1663;

HAnimSite1658.children[3] = Anchor1662;

HAnimHumanoid15.viewpoints[14] = HAnimSite1658;

let HAnimSite1666 = browser.currentScene.createNode("HAnimSite");
HAnimSite1666.USE = "hanim_l_eyeball_site_view";
HAnimHumanoid15.viewpoints[15] = HAnimSite1666;

let HAnimSite1667 = browser.currentScene.createNode("HAnimSite");
HAnimSite1667.USE = "hanim_r_eyeball_site_view";
HAnimHumanoid15.viewpoints[16] = HAnimSite1667;

let HAnimSite1668 = browser.currentScene.createNode("HAnimSite");
HAnimSite1668.USE = "hanim_l_hand_front_view";
HAnimHumanoid15.viewpoints[17] = HAnimSite1668;

let HAnimSite1669 = browser.currentScene.createNode("HAnimSite");
HAnimSite1669.USE = "hanim_r_hand_front_view";
HAnimHumanoid15.viewpoints[18] = HAnimSite1669;

let HAnimJoint1670 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1670.USE = "hanim_humanoid_root";
HAnimHumanoid15.joints[19] = HAnimJoint1670;

let HAnimJoint1671 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1671.USE = "hanim_sacroiliac";
HAnimHumanoid15.joints[20] = HAnimJoint1671;

let HAnimJoint1672 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1672.USE = "hanim_vl5";
HAnimHumanoid15.joints[21] = HAnimJoint1672;

let HAnimJoint1673 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1673.USE = "hanim_vl4";
HAnimHumanoid15.joints[22] = HAnimJoint1673;

let HAnimJoint1674 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1674.USE = "hanim_vl3";
HAnimHumanoid15.joints[23] = HAnimJoint1674;

let HAnimJoint1675 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1675.USE = "hanim_vl2";
HAnimHumanoid15.joints[24] = HAnimJoint1675;

let HAnimJoint1676 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1676.USE = "hanim_vl1";
HAnimHumanoid15.joints[25] = HAnimJoint1676;

let HAnimJoint1677 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1677.USE = "hanim_vt12";
HAnimHumanoid15.joints[26] = HAnimJoint1677;

let HAnimJoint1678 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1678.USE = "hanim_vt11";
HAnimHumanoid15.joints[27] = HAnimJoint1678;

let HAnimJoint1679 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1679.USE = "hanim_vt10";
HAnimHumanoid15.joints[28] = HAnimJoint1679;

let HAnimJoint1680 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1680.USE = "hanim_vt9";
HAnimHumanoid15.joints[29] = HAnimJoint1680;

let HAnimJoint1681 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1681.USE = "hanim_vt8";
HAnimHumanoid15.joints[30] = HAnimJoint1681;

let HAnimJoint1682 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1682.USE = "hanim_vt7";
HAnimHumanoid15.joints[31] = HAnimJoint1682;

let HAnimJoint1683 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1683.USE = "hanim_vt6";
HAnimHumanoid15.joints[32] = HAnimJoint1683;

let HAnimJoint1684 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1684.USE = "hanim_vt5";
HAnimHumanoid15.joints[33] = HAnimJoint1684;

let HAnimJoint1685 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1685.USE = "hanim_vt4";
HAnimHumanoid15.joints[34] = HAnimJoint1685;

let HAnimJoint1686 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1686.USE = "hanim_vt3";
HAnimHumanoid15.joints[35] = HAnimJoint1686;

let HAnimJoint1687 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1687.USE = "hanim_vt2";
HAnimHumanoid15.joints[36] = HAnimJoint1687;

let HAnimJoint1688 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1688.USE = "hanim_vt1";
HAnimHumanoid15.joints[37] = HAnimJoint1688;

let HAnimJoint1689 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1689.USE = "hanim_vc7";
HAnimHumanoid15.joints[38] = HAnimJoint1689;

let HAnimJoint1690 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1690.USE = "hanim_vc6";
HAnimHumanoid15.joints[39] = HAnimJoint1690;

let HAnimJoint1691 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1691.USE = "hanim_vc5";
HAnimHumanoid15.joints[40] = HAnimJoint1691;

let HAnimJoint1692 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1692.USE = "hanim_vc4";
HAnimHumanoid15.joints[41] = HAnimJoint1692;

let HAnimJoint1693 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1693.USE = "hanim_vc3";
HAnimHumanoid15.joints[42] = HAnimJoint1693;

let HAnimJoint1694 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1694.USE = "hanim_vc2";
HAnimHumanoid15.joints[43] = HAnimJoint1694;

let HAnimJoint1695 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1695.USE = "hanim_vc1";
HAnimHumanoid15.joints[44] = HAnimJoint1695;

let HAnimJoint1696 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1696.USE = "hanim_skullbase";
HAnimHumanoid15.joints[45] = HAnimJoint1696;

let HAnimJoint1697 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1697.USE = "hanim_temporomandibular";
HAnimHumanoid15.joints[46] = HAnimJoint1697;

let HAnimJoint1698 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1698.USE = "hanim_l_acromioclavicular";
HAnimHumanoid15.joints[47] = HAnimJoint1698;

let HAnimJoint1699 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1699.USE = "hanim_r_acromioclavicular";
HAnimHumanoid15.joints[48] = HAnimJoint1699;

let HAnimJoint1700 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1700.USE = "hanim_l_elbow";
HAnimHumanoid15.joints[49] = HAnimJoint1700;

let HAnimJoint1701 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1701.USE = "hanim_r_elbow";
HAnimHumanoid15.joints[50] = HAnimJoint1701;

let HAnimJoint1702 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1702.USE = "hanim_l_eyeball_joint";
HAnimHumanoid15.joints[51] = HAnimJoint1702;

let HAnimJoint1703 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1703.USE = "hanim_r_eyeball_joint";
HAnimHumanoid15.joints[52] = HAnimJoint1703;

let HAnimJoint1704 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1704.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid15.joints[53] = HAnimJoint1704;

let HAnimJoint1705 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1705.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid15.joints[54] = HAnimJoint1705;

let HAnimJoint1706 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1706.USE = "hanim_l_eyelid_joint";
HAnimHumanoid15.joints[55] = HAnimJoint1706;

let HAnimJoint1707 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1707.USE = "hanim_r_eyelid_joint";
HAnimHumanoid15.joints[56] = HAnimJoint1707;

let HAnimJoint1708 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1708.USE = "hanim_l_hip";
HAnimHumanoid15.joints[57] = HAnimJoint1708;

let HAnimJoint1709 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1709.USE = "hanim_r_hip";
HAnimHumanoid15.joints[58] = HAnimJoint1709;

let HAnimJoint1710 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1710.USE = "hanim_l_index0";
HAnimHumanoid15.joints[59] = HAnimJoint1710;

let HAnimJoint1711 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1711.USE = "hanim_r_index0";
HAnimHumanoid15.joints[60] = HAnimJoint1711;

let HAnimJoint1712 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1712.USE = "hanim_l_index1";
HAnimHumanoid15.joints[61] = HAnimJoint1712;

let HAnimJoint1713 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1713.USE = "hanim_r_index1";
HAnimHumanoid15.joints[62] = HAnimJoint1713;

let HAnimJoint1714 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1714.USE = "hanim_l_index2";
HAnimHumanoid15.joints[63] = HAnimJoint1714;

let HAnimJoint1715 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1715.USE = "hanim_r_index2";
HAnimHumanoid15.joints[64] = HAnimJoint1715;

let HAnimJoint1716 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1716.USE = "hanim_l_index3";
HAnimHumanoid15.joints[65] = HAnimJoint1716;

let HAnimJoint1717 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1717.USE = "hanim_r_index3";
HAnimHumanoid15.joints[66] = HAnimJoint1717;

let HAnimJoint1718 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1718.USE = "hanim_l_knee";
HAnimHumanoid15.joints[67] = HAnimJoint1718;

let HAnimJoint1719 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1719.USE = "hanim_r_knee";
HAnimHumanoid15.joints[68] = HAnimJoint1719;

let HAnimJoint1720 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1720.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid15.joints[69] = HAnimJoint1720;

let HAnimJoint1721 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1721.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid15.joints[70] = HAnimJoint1721;

let HAnimJoint1722 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1722.USE = "hanim_l_middle0";
HAnimHumanoid15.joints[71] = HAnimJoint1722;

let HAnimJoint1723 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1723.USE = "hanim_r_middle0";
HAnimHumanoid15.joints[72] = HAnimJoint1723;

let HAnimJoint1724 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1724.USE = "hanim_l_middle1";
HAnimHumanoid15.joints[73] = HAnimJoint1724;

let HAnimJoint1725 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1725.USE = "hanim_r_middle1";
HAnimHumanoid15.joints[74] = HAnimJoint1725;

let HAnimJoint1726 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1726.USE = "hanim_l_middle2";
HAnimHumanoid15.joints[75] = HAnimJoint1726;

let HAnimJoint1727 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1727.USE = "hanim_r_middle2";
HAnimHumanoid15.joints[76] = HAnimJoint1727;

let HAnimJoint1728 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1728.USE = "hanim_l_middle3";
HAnimHumanoid15.joints[77] = HAnimJoint1728;

let HAnimJoint1729 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1729.USE = "hanim_r_middle3";
HAnimHumanoid15.joints[78] = HAnimJoint1729;

let HAnimJoint1730 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1730.USE = "hanim_l_pinky0";
HAnimHumanoid15.joints[79] = HAnimJoint1730;

let HAnimJoint1731 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1731.USE = "hanim_r_pinky0";
HAnimHumanoid15.joints[80] = HAnimJoint1731;

let HAnimJoint1732 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1732.USE = "hanim_l_pinky1";
HAnimHumanoid15.joints[81] = HAnimJoint1732;

let HAnimJoint1733 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1733.USE = "hanim_r_pinky1";
HAnimHumanoid15.joints[82] = HAnimJoint1733;

let HAnimJoint1734 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1734.USE = "hanim_l_pinky2";
HAnimHumanoid15.joints[83] = HAnimJoint1734;

let HAnimJoint1735 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1735.USE = "hanim_r_pinky2";
HAnimHumanoid15.joints[84] = HAnimJoint1735;

let HAnimJoint1736 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1736.USE = "hanim_l_pinky3";
HAnimHumanoid15.joints[85] = HAnimJoint1736;

let HAnimJoint1737 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1737.USE = "hanim_r_pinky3";
HAnimHumanoid15.joints[86] = HAnimJoint1737;

let HAnimJoint1738 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1738.USE = "hanim_l_radiocarpal";
HAnimHumanoid15.joints[87] = HAnimJoint1738;

let HAnimJoint1739 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1739.USE = "hanim_r_radiocarpal";
HAnimHumanoid15.joints[88] = HAnimJoint1739;

let HAnimJoint1740 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1740.USE = "hanim_l_ring0";
HAnimHumanoid15.joints[89] = HAnimJoint1740;

let HAnimJoint1741 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1741.USE = "hanim_r_ring0";
HAnimHumanoid15.joints[90] = HAnimJoint1741;

let HAnimJoint1742 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1742.USE = "hanim_l_ring1";
HAnimHumanoid15.joints[91] = HAnimJoint1742;

let HAnimJoint1743 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1743.USE = "hanim_r_ring1";
HAnimHumanoid15.joints[92] = HAnimJoint1743;

let HAnimJoint1744 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1744.USE = "hanim_l_ring2";
HAnimHumanoid15.joints[93] = HAnimJoint1744;

let HAnimJoint1745 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1745.USE = "hanim_r_ring2";
HAnimHumanoid15.joints[94] = HAnimJoint1745;

let HAnimJoint1746 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1746.USE = "hanim_l_ring3";
HAnimHumanoid15.joints[95] = HAnimJoint1746;

let HAnimJoint1747 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1747.USE = "hanim_r_ring3";
HAnimHumanoid15.joints[96] = HAnimJoint1747;

let HAnimJoint1748 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1748.USE = "hanim_l_shoulder";
HAnimHumanoid15.joints[97] = HAnimJoint1748;

let HAnimJoint1749 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1749.USE = "hanim_r_shoulder";
HAnimHumanoid15.joints[98] = HAnimJoint1749;

let HAnimJoint1750 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1750.USE = "hanim_l_sternoclavicular";
HAnimHumanoid15.joints[99] = HAnimJoint1750;

let HAnimJoint1751 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1751.USE = "hanim_r_sternoclavicular";
HAnimHumanoid15.joints[100] = HAnimJoint1751;

let HAnimJoint1752 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1752.USE = "hanim_l_talocrural";
HAnimHumanoid15.joints[101] = HAnimJoint1752;

let HAnimJoint1753 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1753.USE = "hanim_r_talocrural";
HAnimHumanoid15.joints[102] = HAnimJoint1753;

let HAnimJoint1754 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1754.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid15.joints[103] = HAnimJoint1754;

let HAnimJoint1755 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1755.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid15.joints[104] = HAnimJoint1755;

let HAnimJoint1756 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1756.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid15.joints[105] = HAnimJoint1756;

let HAnimJoint1757 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1757.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid15.joints[106] = HAnimJoint1757;

let HAnimJoint1758 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1758.USE = "hanim_l_thumb1";
HAnimHumanoid15.joints[107] = HAnimJoint1758;

let HAnimJoint1759 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1759.USE = "hanim_r_thumb1";
HAnimHumanoid15.joints[108] = HAnimJoint1759;

let HAnimJoint1760 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1760.USE = "hanim_l_thumb2";
HAnimHumanoid15.joints[109] = HAnimJoint1760;

let HAnimJoint1761 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1761.USE = "hanim_r_thumb2";
HAnimHumanoid15.joints[110] = HAnimJoint1761;

let HAnimJoint1762 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1762.USE = "hanim_l_thumb3";
HAnimHumanoid15.joints[111] = HAnimJoint1762;

let HAnimJoint1763 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1763.USE = "hanim_r_thumb3";
HAnimHumanoid15.joints[112] = HAnimJoint1763;

let HAnimSegment1764 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1764.USE = "hanim_pelvis";
HAnimHumanoid15.segments[113] = HAnimSegment1764;

let HAnimSegment1765 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1765.USE = "hanim_skull";
HAnimHumanoid15.segments[114] = HAnimSegment1765;

let HAnimSegment1766 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1766.USE = "hanim_jaw";
HAnimHumanoid15.segments[115] = HAnimSegment1766;

let HAnimSegment1767 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1767.USE = "hanim_c1";
HAnimHumanoid15.segments[116] = HAnimSegment1767;

let HAnimSegment1768 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1768.USE = "hanim_c2";
HAnimHumanoid15.segments[117] = HAnimSegment1768;

let HAnimSegment1769 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1769.USE = "hanim_c3";
HAnimHumanoid15.segments[118] = HAnimSegment1769;

let HAnimSegment1770 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1770.USE = "hanim_c4";
HAnimHumanoid15.segments[119] = HAnimSegment1770;

let HAnimSegment1771 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1771.USE = "hanim_c5";
HAnimHumanoid15.segments[120] = HAnimSegment1771;

let HAnimSegment1772 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1772.USE = "hanim_c6";
HAnimHumanoid15.segments[121] = HAnimSegment1772;

let HAnimSegment1773 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1773.USE = "hanim_c7";
HAnimHumanoid15.segments[122] = HAnimSegment1773;

let HAnimSegment1774 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1774.USE = "hanim_t1";
HAnimHumanoid15.segments[123] = HAnimSegment1774;

let HAnimSegment1775 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1775.USE = "hanim_t2";
HAnimHumanoid15.segments[124] = HAnimSegment1775;

let HAnimSegment1776 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1776.USE = "hanim_t3";
HAnimHumanoid15.segments[125] = HAnimSegment1776;

let HAnimSegment1777 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1777.USE = "hanim_t4";
HAnimHumanoid15.segments[126] = HAnimSegment1777;

let HAnimSegment1778 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1778.USE = "hanim_t5";
HAnimHumanoid15.segments[127] = HAnimSegment1778;

let HAnimSegment1779 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1779.USE = "hanim_t6";
HAnimHumanoid15.segments[128] = HAnimSegment1779;

let HAnimSegment1780 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1780.USE = "hanim_t7";
HAnimHumanoid15.segments[129] = HAnimSegment1780;

let HAnimSegment1781 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1781.USE = "hanim_t8";
HAnimHumanoid15.segments[130] = HAnimSegment1781;

let HAnimSegment1782 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1782.USE = "hanim_t9";
HAnimHumanoid15.segments[131] = HAnimSegment1782;

let HAnimSegment1783 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1783.USE = "hanim_t10";
HAnimHumanoid15.segments[132] = HAnimSegment1783;

let HAnimSegment1784 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1784.USE = "hanim_t11";
HAnimHumanoid15.segments[133] = HAnimSegment1784;

let HAnimSegment1785 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1785.USE = "hanim_t12";
HAnimHumanoid15.segments[134] = HAnimSegment1785;

let HAnimSegment1786 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1786.USE = "hanim_l1";
HAnimHumanoid15.segments[135] = HAnimSegment1786;

let HAnimSegment1787 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1787.USE = "hanim_l2";
HAnimHumanoid15.segments[136] = HAnimSegment1787;

let HAnimSegment1788 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1788.USE = "hanim_l3";
HAnimHumanoid15.segments[137] = HAnimSegment1788;

let HAnimSegment1789 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1789.USE = "hanim_l4";
HAnimHumanoid15.segments[138] = HAnimSegment1789;

let HAnimSegment1790 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1790.USE = "hanim_l5";
HAnimHumanoid15.segments[139] = HAnimSegment1790;

let HAnimSegment1791 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1791.USE = "hanim_sacrum";
HAnimHumanoid15.segments[140] = HAnimSegment1791;

let HAnimSegment1792 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1792.USE = "hanim_l_calf";
HAnimHumanoid15.segments[141] = HAnimSegment1792;

let HAnimSegment1793 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1793.USE = "hanim_r_calf";
HAnimHumanoid15.segments[142] = HAnimSegment1793;

let HAnimSegment1794 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1794.USE = "hanim_l_carpal";
HAnimHumanoid15.segments[143] = HAnimSegment1794;

let HAnimSegment1795 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1795.USE = "hanim_r_carpal";
HAnimHumanoid15.segments[144] = HAnimSegment1795;

let HAnimSegment1796 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1796.USE = "hanim_l_carpal_distal_phalanx_1";
HAnimHumanoid15.segments[145] = HAnimSegment1796;

let HAnimSegment1797 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1797.USE = "hanim_r_carpal_distal_phalanx_1";
HAnimHumanoid15.segments[146] = HAnimSegment1797;

let HAnimSegment1798 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1798.USE = "hanim_l_carpal_distal_phalanx_2";
HAnimHumanoid15.segments[147] = HAnimSegment1798;

let HAnimSegment1799 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1799.USE = "hanim_r_carpal_distal_phalanx_2";
HAnimHumanoid15.segments[148] = HAnimSegment1799;

let HAnimSegment1800 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1800.USE = "hanim_l_carpal_distal_phalanx_3";
HAnimHumanoid15.segments[149] = HAnimSegment1800;

let HAnimSegment1801 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1801.USE = "hanim_r_carpal_distal_phalanx_3";
HAnimHumanoid15.segments[150] = HAnimSegment1801;

let HAnimSegment1802 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1802.USE = "hanim_l_carpal_distal_phalanx_4";
HAnimHumanoid15.segments[151] = HAnimSegment1802;

let HAnimSegment1803 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1803.USE = "hanim_r_carpal_distal_phalanx_4";
HAnimHumanoid15.segments[152] = HAnimSegment1803;

let HAnimSegment1804 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1804.USE = "hanim_l_carpal_distal_phalanx_5";
HAnimHumanoid15.segments[153] = HAnimSegment1804;

let HAnimSegment1805 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1805.USE = "hanim_r_carpal_distal_phalanx_5";
HAnimHumanoid15.segments[154] = HAnimSegment1805;

let HAnimSegment1806 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1806.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid15.segments[155] = HAnimSegment1806;

let HAnimSegment1807 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1807.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid15.segments[156] = HAnimSegment1807;

let HAnimSegment1808 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1808.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid15.segments[157] = HAnimSegment1808;

let HAnimSegment1809 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1809.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid15.segments[158] = HAnimSegment1809;

let HAnimSegment1810 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1810.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid15.segments[159] = HAnimSegment1810;

let HAnimSegment1811 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1811.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid15.segments[160] = HAnimSegment1811;

let HAnimSegment1812 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1812.USE = "hanim_l_carpal_middle_phalanx_5";
HAnimHumanoid15.segments[161] = HAnimSegment1812;

let HAnimSegment1813 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1813.USE = "hanim_r_carpal_middle_phalanx_5";
HAnimHumanoid15.segments[162] = HAnimSegment1813;

let HAnimSegment1814 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1814.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid15.segments[163] = HAnimSegment1814;

let HAnimSegment1815 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1815.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid15.segments[164] = HAnimSegment1815;

let HAnimSegment1816 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1816.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid15.segments[165] = HAnimSegment1816;

let HAnimSegment1817 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1817.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid15.segments[166] = HAnimSegment1817;

let HAnimSegment1818 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1818.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid15.segments[167] = HAnimSegment1818;

let HAnimSegment1819 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1819.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid15.segments[168] = HAnimSegment1819;

let HAnimSegment1820 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1820.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid15.segments[169] = HAnimSegment1820;

let HAnimSegment1821 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1821.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid15.segments[170] = HAnimSegment1821;

let HAnimSegment1822 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1822.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid15.segments[171] = HAnimSegment1822;

let HAnimSegment1823 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1823.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid15.segments[172] = HAnimSegment1823;

let HAnimSegment1824 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1824.USE = "hanim_l_clavicle";
HAnimHumanoid15.segments[173] = HAnimSegment1824;

let HAnimSegment1825 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1825.USE = "hanim_r_clavicle";
HAnimHumanoid15.segments[174] = HAnimSegment1825;

let HAnimSegment1826 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1826.USE = "hanim_l_eyeball";
HAnimHumanoid15.segments[175] = HAnimSegment1826;

let HAnimSegment1827 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1827.USE = "hanim_r_eyeball";
HAnimHumanoid15.segments[176] = HAnimSegment1827;

let HAnimSegment1828 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1828.USE = "hanim_l_eyebrow";
HAnimHumanoid15.segments[177] = HAnimSegment1828;

let HAnimSegment1829 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1829.USE = "hanim_r_eyebrow";
HAnimHumanoid15.segments[178] = HAnimSegment1829;

let HAnimSegment1830 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1830.USE = "hanim_l_eyelid";
HAnimHumanoid15.segments[179] = HAnimSegment1830;

let HAnimSegment1831 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1831.USE = "hanim_r_eyelid";
HAnimHumanoid15.segments[180] = HAnimSegment1831;

let HAnimSegment1832 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1832.USE = "hanim_l_forearm";
HAnimHumanoid15.segments[181] = HAnimSegment1832;

let HAnimSegment1833 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1833.USE = "hanim_r_forearm";
HAnimHumanoid15.segments[182] = HAnimSegment1833;

let HAnimSegment1834 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1834.USE = "hanim_l_metacarpal_1";
HAnimHumanoid15.segments[183] = HAnimSegment1834;

let HAnimSegment1835 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1835.USE = "hanim_r_metacarpal_1";
HAnimHumanoid15.segments[184] = HAnimSegment1835;

let HAnimSegment1836 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1836.USE = "hanim_l_metacarpal_2";
HAnimHumanoid15.segments[185] = HAnimSegment1836;

let HAnimSegment1837 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1837.USE = "hanim_r_metacarpal_2";
HAnimHumanoid15.segments[186] = HAnimSegment1837;

let HAnimSegment1838 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1838.USE = "hanim_l_metacarpal_3";
HAnimHumanoid15.segments[187] = HAnimSegment1838;

let HAnimSegment1839 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1839.USE = "hanim_r_metacarpal_3";
HAnimHumanoid15.segments[188] = HAnimSegment1839;

let HAnimSegment1840 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1840.USE = "hanim_l_metacarpal_4";
HAnimHumanoid15.segments[189] = HAnimSegment1840;

let HAnimSegment1841 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1841.USE = "hanim_r_metacarpal_4";
HAnimHumanoid15.segments[190] = HAnimSegment1841;

let HAnimSegment1842 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1842.USE = "hanim_l_metacarpal_5";
HAnimHumanoid15.segments[191] = HAnimSegment1842;

let HAnimSegment1843 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1843.USE = "hanim_r_metacarpal_5";
HAnimHumanoid15.segments[192] = HAnimSegment1843;

let HAnimSegment1844 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1844.USE = "hanim_l_metatarsal_2";
HAnimHumanoid15.segments[193] = HAnimSegment1844;

let HAnimSegment1845 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1845.USE = "hanim_r_metatarsal_2";
HAnimHumanoid15.segments[194] = HAnimSegment1845;

let HAnimSegment1846 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1846.USE = "hanim_l_scapula";
HAnimHumanoid15.segments[195] = HAnimSegment1846;

let HAnimSegment1847 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1847.USE = "hanim_r_scapula";
HAnimHumanoid15.segments[196] = HAnimSegment1847;

let HAnimSegment1848 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1848.USE = "hanim_l_talus";
HAnimHumanoid15.segments[197] = HAnimSegment1848;

let HAnimSegment1849 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1849.USE = "hanim_r_talus";
HAnimHumanoid15.segments[198] = HAnimSegment1849;

let HAnimSegment1850 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1850.USE = "hanim_l_tarsal_distal_phalanx_2";
HAnimHumanoid15.segments[199] = HAnimSegment1850;

let HAnimSegment1851 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1851.USE = "hanim_r_tarsal_distal_phalanx_2";
HAnimHumanoid15.segments[200] = HAnimSegment1851;

let HAnimSegment1852 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1852.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid15.segments[201] = HAnimSegment1852;

let HAnimSegment1853 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1853.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid15.segments[202] = HAnimSegment1853;

let HAnimSegment1854 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1854.USE = "hanim_l_thigh";
HAnimHumanoid15.segments[203] = HAnimSegment1854;

let HAnimSegment1855 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1855.USE = "hanim_r_thigh";
HAnimHumanoid15.segments[204] = HAnimSegment1855;

let HAnimSegment1856 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1856.USE = "hanim_l_upperarm";
HAnimHumanoid15.segments[205] = HAnimSegment1856;

let HAnimSegment1857 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1857.USE = "hanim_r_upperarm";
HAnimHumanoid15.segments[206] = HAnimSegment1857;

let HAnimSite1858 = browser.currentScene.createNode("HAnimSite");
HAnimSite1858.USE = "hanim_crotch_pt";
HAnimHumanoid15.viewpoints[207] = HAnimSite1858;

let HAnimSite1859 = browser.currentScene.createNode("HAnimSite");
HAnimSite1859.USE = "hanim_skull_tip";
HAnimHumanoid15.viewpoints[208] = HAnimSite1859;

let HAnimSite1860 = browser.currentScene.createNode("HAnimSite");
HAnimSite1860.USE = "hanim_sellion_pt";
HAnimHumanoid15.viewpoints[209] = HAnimSite1860;

let HAnimSite1861 = browser.currentScene.createNode("HAnimSite");
HAnimSite1861.USE = "hanim_supramenton_pt";
HAnimHumanoid15.viewpoints[210] = HAnimSite1861;

let HAnimSite1862 = browser.currentScene.createNode("HAnimSite");
HAnimSite1862.USE = "hanim_nuchale_pt";
HAnimHumanoid15.viewpoints[211] = HAnimSite1862;

let HAnimSite1863 = browser.currentScene.createNode("HAnimSite");
HAnimSite1863.USE = "hanim_suprasternale_pt";
HAnimHumanoid15.viewpoints[212] = HAnimSite1863;

let HAnimSite1864 = browser.currentScene.createNode("HAnimSite");
HAnimSite1864.USE = "hanim_cervicale_pt";
HAnimHumanoid15.viewpoints[213] = HAnimSite1864;

let HAnimSite1865 = browser.currentScene.createNode("HAnimSite");
HAnimSite1865.USE = "hanim_substernale_pt";
HAnimHumanoid15.viewpoints[214] = HAnimSite1865;

let HAnimSite1866 = browser.currentScene.createNode("HAnimSite");
HAnimSite1866.USE = "hanim_rib10_midspine_pt";
HAnimHumanoid15.viewpoints[215] = HAnimSite1866;

let HAnimSite1867 = browser.currentScene.createNode("HAnimSite");
HAnimSite1867.USE = "hanim_waist_preferred_post_pt";
HAnimHumanoid15.viewpoints[216] = HAnimSite1867;

let HAnimSite1868 = browser.currentScene.createNode("HAnimSite");
HAnimSite1868.USE = "hanim_navel_pt";
HAnimHumanoid15.viewpoints[217] = HAnimSite1868;

let HAnimSite1869 = browser.currentScene.createNode("HAnimSite");
HAnimSite1869.USE = "hanim_l_acromion_pt";
HAnimHumanoid15.viewpoints[218] = HAnimSite1869;

let HAnimSite1870 = browser.currentScene.createNode("HAnimSite");
HAnimSite1870.USE = "hanim_r_acromion_pt";
HAnimHumanoid15.viewpoints[219] = HAnimSite1870;

let HAnimSite1871 = browser.currentScene.createNode("HAnimSite");
HAnimSite1871.USE = "hanim_r_asis_pt";
HAnimHumanoid15.viewpoints[220] = HAnimSite1871;

let HAnimSite1872 = browser.currentScene.createNode("HAnimSite");
HAnimSite1872.USE = "hanim_l_asis_pt";
HAnimHumanoid15.viewpoints[221] = HAnimSite1872;

let HAnimSite1873 = browser.currentScene.createNode("HAnimSite");
HAnimSite1873.USE = "hanim_l_axilla_ant_pt";
HAnimHumanoid15.viewpoints[222] = HAnimSite1873;

let HAnimSite1874 = browser.currentScene.createNode("HAnimSite");
HAnimSite1874.USE = "hanim_r_axilla_ant_pt";
HAnimHumanoid15.viewpoints[223] = HAnimSite1874;

let HAnimSite1875 = browser.currentScene.createNode("HAnimSite");
HAnimSite1875.USE = "hanim_l_axilla_post_pt";
HAnimHumanoid15.viewpoints[224] = HAnimSite1875;

let HAnimSite1876 = browser.currentScene.createNode("HAnimSite");
HAnimSite1876.USE = "hanim_r_axilla_post_pt";
HAnimHumanoid15.viewpoints[225] = HAnimSite1876;

let HAnimSite1877 = browser.currentScene.createNode("HAnimSite");
HAnimSite1877.USE = "hanim_l_calcaneous_post_pt";
HAnimHumanoid15.viewpoints[226] = HAnimSite1877;

let HAnimSite1878 = browser.currentScene.createNode("HAnimSite");
HAnimSite1878.USE = "hanim_r_calcaneous_post_pt";
HAnimHumanoid15.viewpoints[227] = HAnimSite1878;

let HAnimSite1879 = browser.currentScene.createNode("HAnimSite");
HAnimSite1879.USE = "hanim_l_clavicale_pt";
HAnimHumanoid15.viewpoints[228] = HAnimSite1879;

let HAnimSite1880 = browser.currentScene.createNode("HAnimSite");
HAnimSite1880.USE = "hanim_r_clavicale_pt";
HAnimHumanoid15.viewpoints[229] = HAnimSite1880;

let HAnimSite1881 = browser.currentScene.createNode("HAnimSite");
HAnimSite1881.USE = "hanim_l_dactylion_pt";
HAnimHumanoid15.viewpoints[230] = HAnimSite1881;

let HAnimSite1882 = browser.currentScene.createNode("HAnimSite");
HAnimSite1882.USE = "hanim_r_dactylion_pt";
HAnimHumanoid15.viewpoints[231] = HAnimSite1882;

let HAnimSite1883 = browser.currentScene.createNode("HAnimSite");
HAnimSite1883.USE = "hanim_l_digit2_pt";
HAnimHumanoid15.viewpoints[232] = HAnimSite1883;

let HAnimSite1884 = browser.currentScene.createNode("HAnimSite");
HAnimSite1884.USE = "hanim_r_digit2_pt";
HAnimHumanoid15.viewpoints[233] = HAnimSite1884;

let HAnimSite1885 = browser.currentScene.createNode("HAnimSite");
HAnimSite1885.USE = "hanim_l_femoral_lateral_epicn_pt";
HAnimHumanoid15.viewpoints[234] = HAnimSite1885;

let HAnimSite1886 = browser.currentScene.createNode("HAnimSite");
HAnimSite1886.USE = "hanim_r_femoral_lateral_epicn_pt";
HAnimHumanoid15.viewpoints[235] = HAnimSite1886;

let HAnimSite1887 = browser.currentScene.createNode("HAnimSite");
HAnimSite1887.USE = "hanim_l_femoral_medial_epicn_pt";
HAnimHumanoid15.viewpoints[236] = HAnimSite1887;

let HAnimSite1888 = browser.currentScene.createNode("HAnimSite");
HAnimSite1888.USE = "hanim_r_femoral_medial_epicn_pt";
HAnimHumanoid15.viewpoints[237] = HAnimSite1888;

let HAnimSite1889 = browser.currentScene.createNode("HAnimSite");
HAnimSite1889.USE = "hanim_l_forefoot_tip";
HAnimHumanoid15.viewpoints[238] = HAnimSite1889;

let HAnimSite1890 = browser.currentScene.createNode("HAnimSite");
HAnimSite1890.USE = "hanim_r_forefoot_tip";
HAnimHumanoid15.viewpoints[239] = HAnimSite1890;

let HAnimSite1891 = browser.currentScene.createNode("HAnimSite");
HAnimSite1891.USE = "hanim_r_gonion_pt";
HAnimHumanoid15.viewpoints[240] = HAnimSite1891;

let HAnimSite1892 = browser.currentScene.createNode("HAnimSite");
HAnimSite1892.USE = "hanim_l_gonion_pt";
HAnimHumanoid15.viewpoints[241] = HAnimSite1892;

let HAnimSite1893 = browser.currentScene.createNode("HAnimSite");
HAnimSite1893.USE = "hanim_l_humeral_lateral_epicn_pt";
HAnimHumanoid15.viewpoints[242] = HAnimSite1893;

let HAnimSite1894 = browser.currentScene.createNode("HAnimSite");
HAnimSite1894.USE = "hanim_r_humeral_lateral_epicn_pt";
HAnimHumanoid15.viewpoints[243] = HAnimSite1894;

let HAnimSite1895 = browser.currentScene.createNode("HAnimSite");
HAnimSite1895.USE = "hanim_l_humeral_medial_epicn_pt";
HAnimHumanoid15.viewpoints[244] = HAnimSite1895;

let HAnimSite1896 = browser.currentScene.createNode("HAnimSite");
HAnimSite1896.USE = "hanim_r_humeral_medial_epicn_pt";
HAnimHumanoid15.viewpoints[245] = HAnimSite1896;

let HAnimSite1897 = browser.currentScene.createNode("HAnimSite");
HAnimSite1897.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid15.viewpoints[246] = HAnimSite1897;

let HAnimSite1898 = browser.currentScene.createNode("HAnimSite");
HAnimSite1898.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid15.viewpoints[247] = HAnimSite1898;

let HAnimSite1899 = browser.currentScene.createNode("HAnimSite");
HAnimSite1899.USE = "hanim_l_index_distal_tip";
HAnimHumanoid15.viewpoints[248] = HAnimSite1899;

let HAnimSite1900 = browser.currentScene.createNode("HAnimSite");
HAnimSite1900.USE = "hanim_r_index_distal_tip";
HAnimHumanoid15.viewpoints[249] = HAnimSite1900;

let HAnimSite1901 = browser.currentScene.createNode("HAnimSite");
HAnimSite1901.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid15.viewpoints[250] = HAnimSite1901;

let HAnimSite1902 = browser.currentScene.createNode("HAnimSite");
HAnimSite1902.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid15.viewpoints[251] = HAnimSite1902;

let HAnimSite1903 = browser.currentScene.createNode("HAnimSite");
HAnimSite1903.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid15.viewpoints[252] = HAnimSite1903;

let HAnimSite1904 = browser.currentScene.createNode("HAnimSite");
HAnimSite1904.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid15.viewpoints[253] = HAnimSite1904;

let HAnimSite1905 = browser.currentScene.createNode("HAnimSite");
HAnimSite1905.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid15.viewpoints[254] = HAnimSite1905;

let HAnimSite1906 = browser.currentScene.createNode("HAnimSite");
HAnimSite1906.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid15.viewpoints[255] = HAnimSite1906;

let HAnimSite1907 = browser.currentScene.createNode("HAnimSite");
HAnimSite1907.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid15.viewpoints[256] = HAnimSite1907;

let HAnimSite1908 = browser.currentScene.createNode("HAnimSite");
HAnimSite1908.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid15.viewpoints[257] = HAnimSite1908;

let HAnimSite1909 = browser.currentScene.createNode("HAnimSite");
HAnimSite1909.USE = "hanim_l_metacarpal_pha2_pt";
HAnimHumanoid15.viewpoints[258] = HAnimSite1909;

let HAnimSite1910 = browser.currentScene.createNode("HAnimSite");
HAnimSite1910.USE = "hanim_r_metacarpal_pha2_pt";
HAnimHumanoid15.viewpoints[259] = HAnimSite1910;

let HAnimSite1911 = browser.currentScene.createNode("HAnimSite");
HAnimSite1911.USE = "hanim_l_metacarpal_pha5_pt";
HAnimHumanoid15.viewpoints[260] = HAnimSite1911;

let HAnimSite1912 = browser.currentScene.createNode("HAnimSite");
HAnimSite1912.USE = "hanim_r_metacarpal_pha5_pt";
HAnimHumanoid15.viewpoints[261] = HAnimSite1912;

let HAnimSite1913 = browser.currentScene.createNode("HAnimSite");
HAnimSite1913.USE = "hanim_l_metatarsal_pha1_pt";
HAnimHumanoid15.viewpoints[262] = HAnimSite1913;

let HAnimSite1914 = browser.currentScene.createNode("HAnimSite");
HAnimSite1914.USE = "hanim_r_metatarsal_pha1_pt";
HAnimHumanoid15.viewpoints[263] = HAnimSite1914;

let HAnimSite1915 = browser.currentScene.createNode("HAnimSite");
HAnimSite1915.USE = "hanim_l_metatarsal_pha5_pt";
HAnimHumanoid15.viewpoints[264] = HAnimSite1915;

let HAnimSite1916 = browser.currentScene.createNode("HAnimSite");
HAnimSite1916.USE = "hanim_r_metatarsal_pha5_pt";
HAnimHumanoid15.viewpoints[265] = HAnimSite1916;

let HAnimSite1917 = browser.currentScene.createNode("HAnimSite");
HAnimSite1917.USE = "hanim_l_middle_distal_tip";
HAnimHumanoid15.viewpoints[266] = HAnimSite1917;

let HAnimSite1918 = browser.currentScene.createNode("HAnimSite");
HAnimSite1918.USE = "hanim_r_middle_distal_tip";
HAnimHumanoid15.viewpoints[267] = HAnimSite1918;

let HAnimSite1919 = browser.currentScene.createNode("HAnimSite");
HAnimSite1919.USE = "hanim_r_neck_base_pt";
HAnimHumanoid15.viewpoints[268] = HAnimSite1919;

let HAnimSite1920 = browser.currentScene.createNode("HAnimSite");
HAnimSite1920.USE = "hanim_l_neck_base_pt";
HAnimHumanoid15.viewpoints[269] = HAnimSite1920;

let HAnimSite1921 = browser.currentScene.createNode("HAnimSite");
HAnimSite1921.USE = "hanim_l_olecranon_pt";
HAnimHumanoid15.viewpoints[270] = HAnimSite1921;

let HAnimSite1922 = browser.currentScene.createNode("HAnimSite");
HAnimSite1922.USE = "hanim_r_olecranon_pt";
HAnimHumanoid15.viewpoints[271] = HAnimSite1922;

let HAnimSite1923 = browser.currentScene.createNode("HAnimSite");
HAnimSite1923.USE = "hanim_l_pinky_distal_tip";
HAnimHumanoid15.viewpoints[272] = HAnimSite1923;

let HAnimSite1924 = browser.currentScene.createNode("HAnimSite");
HAnimSite1924.USE = "hanim_r_pinky_distal_tip";
HAnimHumanoid15.viewpoints[273] = HAnimSite1924;

let HAnimSite1925 = browser.currentScene.createNode("HAnimSite");
HAnimSite1925.USE = "hanim_r_psis_pt";
HAnimHumanoid15.viewpoints[274] = HAnimSite1925;

let HAnimSite1926 = browser.currentScene.createNode("HAnimSite");
HAnimSite1926.USE = "hanim_l_psis_pt";
HAnimHumanoid15.viewpoints[275] = HAnimSite1926;

let HAnimSite1927 = browser.currentScene.createNode("HAnimSite");
HAnimSite1927.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid15.viewpoints[276] = HAnimSite1927;

let HAnimSite1928 = browser.currentScene.createNode("HAnimSite");
HAnimSite1928.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid15.viewpoints[277] = HAnimSite1928;

let HAnimSite1929 = browser.currentScene.createNode("HAnimSite");
HAnimSite1929.USE = "hanim_l_radiale_pt";
HAnimHumanoid15.viewpoints[278] = HAnimSite1929;

let HAnimSite1930 = browser.currentScene.createNode("HAnimSite");
HAnimSite1930.USE = "hanim_r_radiale_pt";
HAnimHumanoid15.viewpoints[279] = HAnimSite1930;

let HAnimSite1931 = browser.currentScene.createNode("HAnimSite");
HAnimSite1931.USE = "hanim_r_rib10_pt";
HAnimHumanoid15.viewpoints[280] = HAnimSite1931;

let HAnimSite1932 = browser.currentScene.createNode("HAnimSite");
HAnimSite1932.USE = "hanim_l_rib10_pt";
HAnimHumanoid15.viewpoints[281] = HAnimSite1932;

let HAnimSite1933 = browser.currentScene.createNode("HAnimSite");
HAnimSite1933.USE = "hanim_l_ring_distal_tip";
HAnimHumanoid15.viewpoints[282] = HAnimSite1933;

let HAnimSite1934 = browser.currentScene.createNode("HAnimSite");
HAnimSite1934.USE = "hanim_r_ring_distal_tip";
HAnimHumanoid15.viewpoints[283] = HAnimSite1934;

let HAnimSite1935 = browser.currentScene.createNode("HAnimSite");
HAnimSite1935.USE = "hanim_temporomandibular_l_site_pt";
HAnimHumanoid15.viewpoints[284] = HAnimSite1935;

let HAnimSite1936 = browser.currentScene.createNode("HAnimSite");
HAnimSite1936.USE = "hanim_temporomandibular_r_site_pt";
HAnimHumanoid15.viewpoints[285] = HAnimSite1936;

let HAnimSite1937 = browser.currentScene.createNode("HAnimSite");
HAnimSite1937.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid15.viewpoints[286] = HAnimSite1937;

let HAnimSite1938 = browser.currentScene.createNode("HAnimSite");
HAnimSite1938.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid15.viewpoints[287] = HAnimSite1938;

let HAnimSite1939 = browser.currentScene.createNode("HAnimSite");
HAnimSite1939.USE = "hanim_r_thelion_pt";
HAnimHumanoid15.viewpoints[288] = HAnimSite1939;

let HAnimSite1940 = browser.currentScene.createNode("HAnimSite");
HAnimSite1940.USE = "hanim_l_thelion_pt";
HAnimHumanoid15.viewpoints[289] = HAnimSite1940;

let HAnimSite1941 = browser.currentScene.createNode("HAnimSite");
HAnimSite1941.USE = "hanim_l_thumb_distal_tip";
HAnimHumanoid15.viewpoints[290] = HAnimSite1941;

let HAnimSite1942 = browser.currentScene.createNode("HAnimSite");
HAnimSite1942.USE = "hanim_r_thumb_distal_tip";
HAnimHumanoid15.viewpoints[291] = HAnimSite1942;

let HAnimSite1943 = browser.currentScene.createNode("HAnimSite");
HAnimSite1943.USE = "hanim_r_tragion_pt";
HAnimHumanoid15.viewpoints[292] = HAnimSite1943;

let HAnimSite1944 = browser.currentScene.createNode("HAnimSite");
HAnimSite1944.USE = "hanim_l_tragion_pt";
HAnimHumanoid15.viewpoints[293] = HAnimSite1944;

let HAnimSite1945 = browser.currentScene.createNode("HAnimSite");
HAnimSite1945.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid15.viewpoints[294] = HAnimSite1945;

let HAnimSite1946 = browser.currentScene.createNode("HAnimSite");
HAnimSite1946.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid15.viewpoints[295] = HAnimSite1946;

let HAnimSite1947 = browser.currentScene.createNode("HAnimSite");
HAnimSite1947.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid15.viewpoints[296] = HAnimSite1947;

let HAnimSite1948 = browser.currentScene.createNode("HAnimSite");
HAnimSite1948.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid15.viewpoints[297] = HAnimSite1948;

browser.currentScene.children[12] = HAnimHumanoid15;

