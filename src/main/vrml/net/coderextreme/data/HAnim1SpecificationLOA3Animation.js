let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
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
HAnimHumanoid15.info = new MFString(new java.lang.String["authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=2.0","height=1.7504"]);
HAnimHumanoid15.version = "1.0";
let HAnimJoint16 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint16.name = "humanoid_root";
HAnimJoint16.DEF = "hanim_humanoid_root";
HAnimJoint16.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimJoint16.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment17 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment17.name = "sacrum";
HAnimSegment17.DEF = "hanim_sacrum";
//<HAnimJoint name='humanoid_root'/> visualization sphere within <HAnimSegment name='sacrum'/>
let TouchSensor18 = browser.currentScene.createNode("TouchSensor");
TouchSensor18.description = "HAnimJoint HumanoidRoot, HAnimSegment sacrum";
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='sacroiliac'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='vl5'/>
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
HAnimJoint32.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment33 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment33.name = "pelvis";
HAnimSegment33.DEF = "hanim_pelvis";
//<HAnimJoint name='sacroiliac'/> visualization sphere within <HAnimSegment name='pelvis'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='l_hip'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='r_hip'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_iliocristale'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_trochanterion'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_iliocristale'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_trochanterion'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_asis'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_asis'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_psis'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_psis'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='crotch'/>
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
HAnimSite81.name = "r_iliocristale_pt";
HAnimSite81.DEF = "hanim_r_iliocristale_pt";
HAnimSite81.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
//HAnimSite visualization shape
let TouchSensor82 = browser.currentScene.createNode("TouchSensor");
TouchSensor82.description = "HAnimSite r_iliocristale";
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
HAnimSite88.name = "r_trochanterion_pt";
HAnimSite88.DEF = "hanim_r_trochanterion_pt";
HAnimSite88.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
//HAnimSite visualization shape
let TouchSensor89 = browser.currentScene.createNode("TouchSensor");
TouchSensor89.description = "HAnimSite r_trochanterion";
HAnimSite88.children = new MFNode();

HAnimSite88.children[0] = TouchSensor89;

let Shape90 = browser.currentScene.createNode("Shape");
Shape90.USE = "HAnimSiteShape";
HAnimSite88.children[1] = Shape90;

HAnimSegment33.children[14] = HAnimSite88;

let HAnimSite91 = browser.currentScene.createNode("HAnimSite");
HAnimSite91.name = "l_iliocristale_pt";
HAnimSite91.DEF = "hanim_l_iliocristale_pt";
HAnimSite91.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
//HAnimSite visualization shape
let TouchSensor92 = browser.currentScene.createNode("TouchSensor");
TouchSensor92.description = "HAnimSite l_iliocristale";
HAnimSite91.children = new MFNode();

HAnimSite91.children[0] = TouchSensor92;

let Shape93 = browser.currentScene.createNode("Shape");
Shape93.USE = "HAnimSiteShape";
HAnimSite91.children[1] = Shape93;

HAnimSegment33.children[15] = HAnimSite91;

let HAnimSite94 = browser.currentScene.createNode("HAnimSite");
HAnimSite94.name = "l_trochanterion_pt";
HAnimSite94.DEF = "hanim_l_trochanterion_pt";
HAnimSite94.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
//HAnimSite visualization shape
let TouchSensor95 = browser.currentScene.createNode("TouchSensor");
TouchSensor95.description = "HAnimSite l_trochanterion";
HAnimSite94.children = new MFNode();

HAnimSite94.children[0] = TouchSensor95;

let Shape96 = browser.currentScene.createNode("Shape");
Shape96.USE = "HAnimSiteShape";
HAnimSite94.children[1] = Shape96;

HAnimSegment33.children[16] = HAnimSite94;

let HAnimSite97 = browser.currentScene.createNode("HAnimSite");
HAnimSite97.name = "r_asis_pt";
HAnimSite97.DEF = "hanim_r_asis_pt";
HAnimSite97.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
//HAnimSite visualization shape
let TouchSensor98 = browser.currentScene.createNode("TouchSensor");
TouchSensor98.description = "HAnimSite r_asis";
HAnimSite97.children = new MFNode();

HAnimSite97.children[0] = TouchSensor98;

let Shape99 = browser.currentScene.createNode("Shape");
Shape99.USE = "HAnimSiteShape";
HAnimSite97.children[1] = Shape99;

HAnimSegment33.children[17] = HAnimSite97;

let HAnimSite100 = browser.currentScene.createNode("HAnimSite");
HAnimSite100.name = "l_asis_pt";
HAnimSite100.DEF = "hanim_l_asis_pt";
HAnimSite100.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
//HAnimSite visualization shape
let TouchSensor101 = browser.currentScene.createNode("TouchSensor");
TouchSensor101.description = "HAnimSite l_asis";
HAnimSite100.children = new MFNode();

HAnimSite100.children[0] = TouchSensor101;

let Shape102 = browser.currentScene.createNode("Shape");
Shape102.USE = "HAnimSiteShape";
HAnimSite100.children[1] = Shape102;

HAnimSegment33.children[18] = HAnimSite100;

let HAnimSite103 = browser.currentScene.createNode("HAnimSite");
HAnimSite103.name = "r_psis_pt";
HAnimSite103.DEF = "hanim_r_psis_pt";
HAnimSite103.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
//HAnimSite visualization shape
let TouchSensor104 = browser.currentScene.createNode("TouchSensor");
TouchSensor104.description = "HAnimSite r_psis";
HAnimSite103.children = new MFNode();

HAnimSite103.children[0] = TouchSensor104;

let Shape105 = browser.currentScene.createNode("Shape");
Shape105.USE = "HAnimSiteShape";
HAnimSite103.children[1] = Shape105;

HAnimSegment33.children[19] = HAnimSite103;

let HAnimSite106 = browser.currentScene.createNode("HAnimSite");
HAnimSite106.name = "l_psis_pt";
HAnimSite106.DEF = "hanim_l_psis_pt";
HAnimSite106.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
//HAnimSite visualization shape
let TouchSensor107 = browser.currentScene.createNode("TouchSensor");
TouchSensor107.description = "HAnimSite l_psis";
HAnimSite106.children = new MFNode();

HAnimSite106.children[0] = TouchSensor107;

let Shape108 = browser.currentScene.createNode("Shape");
Shape108.USE = "HAnimSiteShape";
HAnimSite106.children[1] = Shape108;

HAnimSegment33.children[20] = HAnimSite106;

let HAnimSite109 = browser.currentScene.createNode("HAnimSite");
HAnimSite109.name = "crotch_pt";
HAnimSite109.DEF = "hanim_crotch_pt";
HAnimSite109.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
//HAnimSite visualization shape
let TouchSensor110 = browser.currentScene.createNode("TouchSensor");
TouchSensor110.description = "HAnimSite crotch";
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
HAnimJoint112.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment113 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment113.name = "l_thigh";
HAnimSegment113.DEF = "hanim_l_thigh";
//<HAnimJoint name='l_hip'/> visualization sphere within <HAnimSegment name='l_thigh'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_hip'/> to <HAnimJoint name='l_knee'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_knee_crease'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_lateral_epicn'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_medial_epicn'/>
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
HAnimSite133.name = "l_knee_crease_pt";
HAnimSite133.DEF = "hanim_l_knee_crease_pt";
HAnimSite133.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
//HAnimSite visualization shape
let TouchSensor134 = browser.currentScene.createNode("TouchSensor");
TouchSensor134.description = "HAnimSite l_knee_crease";
HAnimSite133.children = new MFNode();

HAnimSite133.children[0] = TouchSensor134;

let Shape135 = browser.currentScene.createNode("Shape");
Shape135.USE = "HAnimSiteShape";
HAnimSite133.children[1] = Shape135;

HAnimSegment113.children[6] = HAnimSite133;

let HAnimSite136 = browser.currentScene.createNode("HAnimSite");
HAnimSite136.name = "l_femoral_lateral_epicn_pt";
HAnimSite136.DEF = "hanim_l_femoral_lateral_epicn_pt";
HAnimSite136.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
//HAnimSite visualization shape
let TouchSensor137 = browser.currentScene.createNode("TouchSensor");
TouchSensor137.description = "HAnimSite l_femoral_lateral_epicn";
HAnimSite136.children = new MFNode();

HAnimSite136.children[0] = TouchSensor137;

let Shape138 = browser.currentScene.createNode("Shape");
Shape138.USE = "HAnimSiteShape";
HAnimSite136.children[1] = Shape138;

HAnimSegment113.children[7] = HAnimSite136;

let HAnimSite139 = browser.currentScene.createNode("HAnimSite");
HAnimSite139.name = "l_femoral_medial_epicn_pt";
HAnimSite139.DEF = "hanim_l_femoral_medial_epicn_pt";
HAnimSite139.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
//HAnimSite visualization shape
let TouchSensor140 = browser.currentScene.createNode("TouchSensor");
TouchSensor140.description = "HAnimSite l_femoral_medial_epicn";
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
HAnimJoint142.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment143 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment143.name = "l_calf";
HAnimSegment143.DEF = "hanim_l_calf";
//<HAnimJoint name='l_knee'/> visualization sphere within <HAnimSegment name='l_calf'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_knee'/> to <HAnimJoint name='l_ankle'/>
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
HAnimJoint151.name = "l_ankle";
HAnimJoint151.DEF = "hanim_l_ankle";
HAnimJoint151.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint151.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment152 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment152.name = "l_hindfoot";
HAnimSegment152.DEF = "hanim_l_hindfoot";
//<HAnimJoint name='l_ankle'/> visualization sphere within <HAnimSegment name='l_hindfoot'/>
let TouchSensor153 = browser.currentScene.createNode("TouchSensor");
TouchSensor153.description = "HAnimJoint l_ankle, HAnimSegment l_hindfoot";
HAnimSegment152.children = new MFNode();

HAnimSegment152.children[0] = TouchSensor153;

let Transform154 = browser.currentScene.createNode("Transform");
Transform154.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Shape155 = browser.currentScene.createNode("Shape");
Shape155.USE = "HAnimJointShape";
Transform154.children = new MFNode();

Transform154.children[0] = Shape155;

HAnimSegment152.children[1] = Transform154;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ankle'/> to <HAnimJoint name='l_subtalar'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_lateral_malleolus'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_medial_malleolus'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_sphyrion'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_calcaneous_post'/>
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
HAnimSite176.name = "l_lateral_malleolus_pt";
HAnimSite176.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite176.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
//HAnimSite visualization shape
let TouchSensor177 = browser.currentScene.createNode("TouchSensor");
TouchSensor177.description = "HAnimSite l_lateral_malleolus";
HAnimSite176.children = new MFNode();

HAnimSite176.children[0] = TouchSensor177;

let Shape178 = browser.currentScene.createNode("Shape");
Shape178.USE = "HAnimSiteShape";
HAnimSite176.children[1] = Shape178;

HAnimSegment152.children[7] = HAnimSite176;

let HAnimSite179 = browser.currentScene.createNode("HAnimSite");
HAnimSite179.name = "l_medial_malleolus_pt";
HAnimSite179.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite179.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
//HAnimSite visualization shape
let TouchSensor180 = browser.currentScene.createNode("TouchSensor");
TouchSensor180.description = "HAnimSite l_medial_malleolus";
HAnimSite179.children = new MFNode();

HAnimSite179.children[0] = TouchSensor180;

let Shape181 = browser.currentScene.createNode("Shape");
Shape181.USE = "HAnimSiteShape";
HAnimSite179.children[1] = Shape181;

HAnimSegment152.children[8] = HAnimSite179;

let HAnimSite182 = browser.currentScene.createNode("HAnimSite");
HAnimSite182.name = "l_sphyrion_pt";
HAnimSite182.DEF = "hanim_l_sphyrion_pt";
HAnimSite182.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
//HAnimSite visualization shape
let TouchSensor183 = browser.currentScene.createNode("TouchSensor");
TouchSensor183.description = "HAnimSite l_sphyrion";
HAnimSite182.children = new MFNode();

HAnimSite182.children[0] = TouchSensor183;

let Shape184 = browser.currentScene.createNode("Shape");
Shape184.USE = "HAnimSiteShape";
HAnimSite182.children[1] = Shape184;

HAnimSegment152.children[9] = HAnimSite182;

let HAnimSite185 = browser.currentScene.createNode("HAnimSite");
HAnimSite185.name = "l_calcaneous_post_pt";
HAnimSite185.DEF = "hanim_l_calcaneous_post_pt";
HAnimSite185.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
//HAnimSite visualization shape
let TouchSensor186 = browser.currentScene.createNode("TouchSensor");
TouchSensor186.description = "HAnimSite l_calcaneous_post";
HAnimSite185.children = new MFNode();

HAnimSite185.children[0] = TouchSensor186;

let Shape187 = browser.currentScene.createNode("Shape");
Shape187.USE = "HAnimSiteShape";
HAnimSite185.children[1] = Shape187;

HAnimSegment152.children[10] = HAnimSite185;

HAnimJoint151.children = new MFNode();

HAnimJoint151.children[0] = HAnimSegment152;

let HAnimJoint188 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint188.name = "l_subtalar";
HAnimJoint188.DEF = "hanim_l_subtalar";
HAnimJoint188.center = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
HAnimJoint188.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment189 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment189.name = "l_midproximal";
HAnimSegment189.DEF = "hanim_l_midproximal";
//<HAnimJoint name='l_subtalar'/> visualization sphere within <HAnimSegment name='l_midproximal'/>
let TouchSensor190 = browser.currentScene.createNode("TouchSensor");
TouchSensor190.description = "HAnimJoint l_subtalar, HAnimSegment l_midproximal";
HAnimSegment189.children = new MFNode();

HAnimSegment189.children[0] = TouchSensor190;

let Transform191 = browser.currentScene.createNode("Transform");
Transform191.translation = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
let Shape192 = browser.currentScene.createNode("Shape");
Shape192.USE = "HAnimJointShape";
Transform191.children = new MFNode();

Transform191.children[0] = Shape192;

HAnimSegment189.children[1] = Transform191;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_subtalar'/> to <HAnimJoint name='l_midtarsal'/>
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
HAnimJoint197.name = "l_midtarsal";
HAnimJoint197.DEF = "hanim_l_midtarsal";
HAnimJoint197.center = new SFVec3f(new float[0.1086,0.0001,0.0368]);
HAnimJoint197.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment198 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment198.name = "l_middistal";
HAnimSegment198.DEF = "hanim_l_middistal";
//<HAnimJoint name='l_midtarsal'/> visualization sphere within <HAnimSegment name='l_middistal'/>
let TouchSensor199 = browser.currentScene.createNode("TouchSensor");
TouchSensor199.description = "HAnimJoint l_midtarsal, HAnimSegment l_middistal";
HAnimSegment198.children = new MFNode();

HAnimSegment198.children[0] = TouchSensor199;

let Transform200 = browser.currentScene.createNode("Transform");
Transform200.translation = new SFVec3f(new float[0.1086,0.0001,0.0368]);
let Shape201 = browser.currentScene.createNode("Shape");
Shape201.USE = "HAnimJointShape";
Transform200.children = new MFNode();

Transform200.children[0] = Shape201;

HAnimSegment198.children[1] = Transform200;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_midtarsal'/> to <HAnimJoint name='l_metatarsal'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_midtarsal'/> to <HAnimSite name='l_metatarsal_pha1'/>
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
HAnimSite210.name = "l_metatarsal_pha1_pt";
HAnimSite210.DEF = "hanim_l_metatarsal_pha1_pt";
HAnimSite210.translation = new SFVec3f(new float[0.0816,0.0232,0.0106]);
//HAnimSite visualization shape
let TouchSensor211 = browser.currentScene.createNode("TouchSensor");
TouchSensor211.description = "HAnimSite l_metatarsal_pha1";
HAnimSite210.children = new MFNode();

HAnimSite210.children[0] = TouchSensor211;

let Shape212 = browser.currentScene.createNode("Shape");
Shape212.USE = "HAnimSiteShape";
HAnimSite210.children[1] = Shape212;

HAnimSegment198.children[4] = HAnimSite210;

HAnimJoint197.children = new MFNode();

HAnimJoint197.children[0] = HAnimSegment198;

let HAnimJoint213 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint213.name = "l_metatarsal";
HAnimJoint213.DEF = "hanim_l_metatarsal";
HAnimJoint213.center = new SFVec3f(new float[0.1086,0,0.0762]);
HAnimJoint213.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment214 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment214.name = "l_forefoot";
HAnimSegment214.DEF = "hanim_l_forefoot";
//<HAnimJoint name='l_metatarsal'/> visualization sphere within <HAnimSegment name='l_forefoot'/>
let TouchSensor215 = browser.currentScene.createNode("TouchSensor");
TouchSensor215.description = "HAnimJoint l_metatarsal, HAnimSegment l_forefoot";
HAnimSegment214.children = new MFNode();

HAnimSegment214.children[0] = TouchSensor215;

let Transform216 = browser.currentScene.createNode("Transform");
Transform216.translation = new SFVec3f(new float[0.1086,0,0.0762]);
let Shape217 = browser.currentScene.createNode("Shape");
Shape217.USE = "HAnimJointShape";
Transform216.children = new MFNode();

Transform216.children[0] = Shape217;

HAnimSegment214.children[1] = Transform216;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_forefoot_tip'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_metatarsal_pha5'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_digit2'/>
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
HAnimSite230.name = "l_forefoot_tip";
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
HAnimSite233.name = "l_metatarsal_pha5_pt";
HAnimSite233.DEF = "hanim_l_metatarsal_pha5_pt";
HAnimSite233.translation = new SFVec3f(new float[0.1825,0.007,0.0928]);
//HAnimSite visualization shape
let TouchSensor234 = browser.currentScene.createNode("TouchSensor");
TouchSensor234.description = "HAnimSite l_metatarsal_pha5";
HAnimSite233.children = new MFNode();

HAnimSite233.children[0] = TouchSensor234;

let Shape235 = browser.currentScene.createNode("Shape");
Shape235.USE = "HAnimSiteShape";
HAnimSite233.children[1] = Shape235;

HAnimSegment214.children[6] = HAnimSite233;

let HAnimSite236 = browser.currentScene.createNode("HAnimSite");
HAnimSite236.name = "l_digit2_pt";
HAnimSite236.DEF = "hanim_l_digit2_pt";
HAnimSite236.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
//HAnimSite visualization shape
let TouchSensor237 = browser.currentScene.createNode("TouchSensor");
TouchSensor237.description = "HAnimSite l_digit2";
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
HAnimJoint239.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment240 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment240.name = "r_thigh";
HAnimSegment240.DEF = "hanim_r_thigh";
//<HAnimJoint name='r_hip'/> visualization sphere within <HAnimSegment name='r_thigh'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_hip'/> to <HAnimJoint name='r_knee'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_knee_crease'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_lateral_epicn'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_medial_epicn'/>
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
HAnimSite260.name = "r_knee_crease_pt";
HAnimSite260.DEF = "hanim_r_knee_crease_pt";
HAnimSite260.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
//HAnimSite visualization shape
let TouchSensor261 = browser.currentScene.createNode("TouchSensor");
TouchSensor261.description = "HAnimSite r_knee_crease";
HAnimSite260.children = new MFNode();

HAnimSite260.children[0] = TouchSensor261;

let Shape262 = browser.currentScene.createNode("Shape");
Shape262.USE = "HAnimSiteShape";
HAnimSite260.children[1] = Shape262;

HAnimSegment240.children[6] = HAnimSite260;

let HAnimSite263 = browser.currentScene.createNode("HAnimSite");
HAnimSite263.name = "r_femoral_lateral_epicn_pt";
HAnimSite263.DEF = "hanim_r_femoral_lateral_epicn_pt";
HAnimSite263.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
//HAnimSite visualization shape
let TouchSensor264 = browser.currentScene.createNode("TouchSensor");
TouchSensor264.description = "HAnimSite r_femoral_lateral_epicn";
HAnimSite263.children = new MFNode();

HAnimSite263.children[0] = TouchSensor264;

let Shape265 = browser.currentScene.createNode("Shape");
Shape265.USE = "HAnimSiteShape";
HAnimSite263.children[1] = Shape265;

HAnimSegment240.children[7] = HAnimSite263;

let HAnimSite266 = browser.currentScene.createNode("HAnimSite");
HAnimSite266.name = "r_femoral_medial_epicn_pt";
HAnimSite266.DEF = "hanim_r_femoral_medial_epicn_pt";
HAnimSite266.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
//HAnimSite visualization shape
let TouchSensor267 = browser.currentScene.createNode("TouchSensor");
TouchSensor267.description = "HAnimSite r_femoral_medial_epicn";
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
HAnimJoint269.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment270 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment270.name = "r_calf";
HAnimSegment270.DEF = "hanim_r_calf";
//<HAnimJoint name='r_knee'/> visualization sphere within <HAnimSegment name='r_calf'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_knee'/> to <HAnimJoint name='r_ankle'/>
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
HAnimJoint278.name = "r_ankle";
HAnimJoint278.DEF = "hanim_r_ankle";
HAnimJoint278.center = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
HAnimJoint278.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment279 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment279.name = "r_hindfoot";
HAnimSegment279.DEF = "hanim_r_hindfoot";
//<HAnimJoint name='r_ankle'/> visualization sphere within <HAnimSegment name='r_hindfoot'/>
let TouchSensor280 = browser.currentScene.createNode("TouchSensor");
TouchSensor280.description = "HAnimJoint r_ankle, HAnimSegment r_hindfoot";
HAnimSegment279.children = new MFNode();

HAnimSegment279.children[0] = TouchSensor280;

let Transform281 = browser.currentScene.createNode("Transform");
Transform281.translation = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
let Shape282 = browser.currentScene.createNode("Shape");
Shape282.USE = "HAnimJointShape";
Transform281.children = new MFNode();

Transform281.children[0] = Shape282;

HAnimSegment279.children[1] = Transform281;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ankle'/> to <HAnimJoint name='r_subtalar'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_lateral_malleolus'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_medial_malleolus'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_sphyrion'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_calcaneous_post'/>
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
HAnimSite303.name = "r_lateral_malleolus_pt";
HAnimSite303.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite303.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
//HAnimSite visualization shape
let TouchSensor304 = browser.currentScene.createNode("TouchSensor");
TouchSensor304.description = "HAnimSite r_lateral_malleolus";
HAnimSite303.children = new MFNode();

HAnimSite303.children[0] = TouchSensor304;

let Shape305 = browser.currentScene.createNode("Shape");
Shape305.USE = "HAnimSiteShape";
HAnimSite303.children[1] = Shape305;

HAnimSegment279.children[7] = HAnimSite303;

let HAnimSite306 = browser.currentScene.createNode("HAnimSite");
HAnimSite306.name = "r_medial_malleolus_pt";
HAnimSite306.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite306.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
//HAnimSite visualization shape
let TouchSensor307 = browser.currentScene.createNode("TouchSensor");
TouchSensor307.description = "HAnimSite r_medial_malleolus";
HAnimSite306.children = new MFNode();

HAnimSite306.children[0] = TouchSensor307;

let Shape308 = browser.currentScene.createNode("Shape");
Shape308.USE = "HAnimSiteShape";
HAnimSite306.children[1] = Shape308;

HAnimSegment279.children[8] = HAnimSite306;

let HAnimSite309 = browser.currentScene.createNode("HAnimSite");
HAnimSite309.name = "r_sphyrion_pt";
HAnimSite309.DEF = "hanim_r_sphyrion_pt";
HAnimSite309.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
//HAnimSite visualization shape
let TouchSensor310 = browser.currentScene.createNode("TouchSensor");
TouchSensor310.description = "HAnimSite r_sphyrion";
HAnimSite309.children = new MFNode();

HAnimSite309.children[0] = TouchSensor310;

let Shape311 = browser.currentScene.createNode("Shape");
Shape311.USE = "HAnimSiteShape";
HAnimSite309.children[1] = Shape311;

HAnimSegment279.children[9] = HAnimSite309;

let HAnimSite312 = browser.currentScene.createNode("HAnimSite");
HAnimSite312.name = "r_calcaneous_post_pt";
HAnimSite312.DEF = "hanim_r_calcaneous_post_pt";
HAnimSite312.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
//HAnimSite visualization shape
let TouchSensor313 = browser.currentScene.createNode("TouchSensor");
TouchSensor313.description = "HAnimSite r_calcaneous_post";
HAnimSite312.children = new MFNode();

HAnimSite312.children[0] = TouchSensor313;

let Shape314 = browser.currentScene.createNode("Shape");
Shape314.USE = "HAnimSiteShape";
HAnimSite312.children[1] = Shape314;

HAnimSegment279.children[10] = HAnimSite312;

HAnimJoint278.children = new MFNode();

HAnimJoint278.children[0] = HAnimSegment279;

let HAnimJoint315 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint315.name = "r_subtalar";
HAnimJoint315.DEF = "hanim_r_subtalar";
HAnimJoint315.center = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
HAnimJoint315.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment316 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment316.name = "r_midproximal";
HAnimSegment316.DEF = "hanim_r_midproximal";
//<HAnimJoint name='r_subtalar'/> visualization sphere within <HAnimSegment name='r_midproximal'/>
let TouchSensor317 = browser.currentScene.createNode("TouchSensor");
TouchSensor317.description = "HAnimJoint r_subtalar, HAnimSegment r_midproximal";
HAnimSegment316.children = new MFNode();

HAnimSegment316.children[0] = TouchSensor317;

let Transform318 = browser.currentScene.createNode("Transform");
Transform318.translation = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
let Shape319 = browser.currentScene.createNode("Shape");
Shape319.USE = "HAnimJointShape";
Transform318.children = new MFNode();

Transform318.children[0] = Shape319;

HAnimSegment316.children[1] = Transform318;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_subtalar'/> to <HAnimJoint name='r_midtarsal'/>
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
HAnimJoint324.name = "r_midtarsal";
HAnimJoint324.DEF = "hanim_r_midtarsal";
HAnimJoint324.center = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
HAnimJoint324.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment325 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment325.name = "r_middistal";
HAnimSegment325.DEF = "hanim_r_middistal";
//<HAnimJoint name='r_midtarsal'/> visualization sphere within <HAnimSegment name='r_middistal'/>
let TouchSensor326 = browser.currentScene.createNode("TouchSensor");
TouchSensor326.description = "HAnimJoint r_midtarsal, HAnimSegment r_middistal";
HAnimSegment325.children = new MFNode();

HAnimSegment325.children[0] = TouchSensor326;

let Transform327 = browser.currentScene.createNode("Transform");
Transform327.translation = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
let Shape328 = browser.currentScene.createNode("Shape");
Shape328.USE = "HAnimJointShape";
Transform327.children = new MFNode();

Transform327.children[0] = Shape328;

HAnimSegment325.children[1] = Transform327;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_midtarsal'/> to <HAnimJoint name='r_metatarsal'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_midtarsal'/> to <HAnimSite name='r_metatarsal_pha1'/>
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
HAnimSite337.name = "r_metatarsal_pha1_pt";
HAnimSite337.DEF = "hanim_r_metatarsal_pha1_pt";
HAnimSite337.translation = new SFVec3f(new float[-0.0521,0.026,0.0127]);
//HAnimSite visualization shape
let TouchSensor338 = browser.currentScene.createNode("TouchSensor");
TouchSensor338.description = "HAnimSite r_metatarsal_pha1";
HAnimSite337.children = new MFNode();

HAnimSite337.children[0] = TouchSensor338;

let Shape339 = browser.currentScene.createNode("Shape");
Shape339.USE = "HAnimSiteShape";
HAnimSite337.children[1] = Shape339;

HAnimSegment325.children[4] = HAnimSite337;

HAnimJoint324.children = new MFNode();

HAnimJoint324.children[0] = HAnimSegment325;

let HAnimJoint340 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint340.name = "r_metatarsal";
HAnimJoint340.DEF = "hanim_r_metatarsal";
HAnimJoint340.center = new SFVec3f(new float[-0.1086,0,0.0762]);
HAnimJoint340.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment341 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment341.name = "r_forefoot";
HAnimSegment341.DEF = "hanim_r_forefoot";
//<HAnimJoint name='r_metatarsal'/> visualization sphere within <HAnimSegment name='r_forefoot'/>
let TouchSensor342 = browser.currentScene.createNode("TouchSensor");
TouchSensor342.description = "HAnimJoint r_metatarsal, HAnimSegment r_forefoot";
HAnimSegment341.children = new MFNode();

HAnimSegment341.children[0] = TouchSensor342;

let Transform343 = browser.currentScene.createNode("Transform");
Transform343.translation = new SFVec3f(new float[-0.1086,0,0.0762]);
let Shape344 = browser.currentScene.createNode("Shape");
Shape344.USE = "HAnimJointShape";
Transform343.children = new MFNode();

Transform343.children[0] = Shape344;

HAnimSegment341.children[1] = Transform343;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_forefoot_tip'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_metatarsal_pha5'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_digit2'/>
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
HAnimSite357.name = "r_forefoot_tip";
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
HAnimSite360.name = "r_metatarsal_pha5_pt";
HAnimSite360.DEF = "hanim_r_metatarsal_pha5_pt";
HAnimSite360.translation = new SFVec3f(new float[-0.1523,0.0166,0.0895]);
//HAnimSite visualization shape
let TouchSensor361 = browser.currentScene.createNode("TouchSensor");
TouchSensor361.description = "HAnimSite r_metatarsal_pha5";
HAnimSite360.children = new MFNode();

HAnimSite360.children[0] = TouchSensor361;

let Shape362 = browser.currentScene.createNode("Shape");
Shape362.USE = "HAnimSiteShape";
HAnimSite360.children[1] = Shape362;

HAnimSegment341.children[6] = HAnimSite360;

let HAnimSite363 = browser.currentScene.createNode("HAnimSite");
HAnimSite363.name = "r_digit2_pt";
HAnimSite363.DEF = "hanim_r_digit2_pt";
HAnimSite363.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
//HAnimSite visualization shape
let TouchSensor364 = browser.currentScene.createNode("TouchSensor");
TouchSensor364.description = "HAnimSite r_digit2";
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
HAnimJoint366.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment367 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment367.name = "l5";
HAnimSegment367.DEF = "hanim_l5";
//<HAnimJoint name='vl5'/> visualization sphere within <HAnimSegment name='l5'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl5'/> to <HAnimJoint name='vl4'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='waist_preferred_post'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='navel'/>
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
HAnimSite383.name = "waist_preferred_post_pt";
HAnimSite383.DEF = "hanim_waist_preferred_post_pt";
HAnimSite383.translation = new SFVec3f(new float[0,1.0915,-0.1091]);
//HAnimSite visualization shape
let TouchSensor384 = browser.currentScene.createNode("TouchSensor");
TouchSensor384.description = "HAnimSite waist_preferred_post";
HAnimSite383.children = new MFNode();

HAnimSite383.children[0] = TouchSensor384;

let Shape385 = browser.currentScene.createNode("Shape");
Shape385.USE = "HAnimSiteShape";
HAnimSite383.children[1] = Shape385;

HAnimSegment367.children[5] = HAnimSite383;

let HAnimSite386 = browser.currentScene.createNode("HAnimSite");
HAnimSite386.name = "navel_pt";
HAnimSite386.DEF = "hanim_navel_pt";
HAnimSite386.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
//HAnimSite visualization shape
let TouchSensor387 = browser.currentScene.createNode("TouchSensor");
TouchSensor387.description = "HAnimSite navel";
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
HAnimJoint389.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment390 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment390.name = "l4";
HAnimSegment390.DEF = "hanim_l4";
//<HAnimJoint name='vl4'/> visualization sphere within <HAnimSegment name='l4'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl4'/> to <HAnimJoint name='vl3'/>
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
HAnimJoint398.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment399 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment399.name = "l3";
HAnimSegment399.DEF = "hanim_l3";
//<HAnimJoint name='vl3'/> visualization sphere within <HAnimSegment name='l3'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl3'/> to <HAnimJoint name='vl2'/>
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
HAnimJoint407.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment408 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment408.name = "l2";
HAnimSegment408.DEF = "hanim_l2";
//<HAnimJoint name='vl2'/> visualization sphere within <HAnimSegment name='l2'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl2'/> to <HAnimJoint name='vl1'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='r_rib10'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='l_rib10'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='rib10_midspine'/>
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
HAnimSite428.name = "r_rib10_pt";
HAnimSite428.DEF = "hanim_r_rib10_pt";
HAnimSite428.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
//HAnimSite visualization shape
let TouchSensor429 = browser.currentScene.createNode("TouchSensor");
TouchSensor429.description = "HAnimSite r_rib10";
HAnimSite428.children = new MFNode();

HAnimSite428.children[0] = TouchSensor429;

let Shape430 = browser.currentScene.createNode("Shape");
Shape430.USE = "HAnimSiteShape";
HAnimSite428.children[1] = Shape430;

HAnimSegment408.children[6] = HAnimSite428;

let HAnimSite431 = browser.currentScene.createNode("HAnimSite");
HAnimSite431.name = "l_rib10_pt";
HAnimSite431.DEF = "hanim_l_rib10_pt";
HAnimSite431.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
//HAnimSite visualization shape
let TouchSensor432 = browser.currentScene.createNode("TouchSensor");
TouchSensor432.description = "HAnimSite l_rib10";
HAnimSite431.children = new MFNode();

HAnimSite431.children[0] = TouchSensor432;

let Shape433 = browser.currentScene.createNode("Shape");
Shape433.USE = "HAnimSiteShape";
HAnimSite431.children[1] = Shape433;

HAnimSegment408.children[7] = HAnimSite431;

let HAnimSite434 = browser.currentScene.createNode("HAnimSite");
HAnimSite434.name = "rib10_midspine_pt";
HAnimSite434.DEF = "hanim_rib10_midspine_pt";
HAnimSite434.translation = new SFVec3f(new float[0.0049,1.1908,-0.1113]);
//HAnimSite visualization shape
let TouchSensor435 = browser.currentScene.createNode("TouchSensor");
TouchSensor435.description = "HAnimSite rib10_midspine";
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
HAnimJoint437.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment438 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment438.name = "l1";
HAnimSegment438.DEF = "hanim_l1";
//<HAnimJoint name='vl1'/> visualization sphere within <HAnimSegment name='l1'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='vl1'/> to <HAnimJoint name='vt12'/>
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
HAnimJoint446.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment447 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment447.name = "t12";
HAnimSegment447.DEF = "hanim_t12";
//<HAnimJoint name='vt12'/> visualization sphere within <HAnimSegment name='t12'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt12'/> to <HAnimJoint name='vt11'/>
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
HAnimJoint455.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment456 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment456.name = "t11";
HAnimSegment456.DEF = "hanim_t11";
//<HAnimJoint name='vt11'/> visualization sphere within <HAnimSegment name='t11'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt11'/> to <HAnimJoint name='vt10'/>
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
HAnimJoint464.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment465 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment465.name = "t10";
HAnimSegment465.DEF = "hanim_t10";
//<HAnimJoint name='vt10'/> visualization sphere within <HAnimSegment name='t10'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt10'/> to <HAnimJoint name='vt9'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt10'/> to <HAnimSite name='substernale'/>
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
HAnimSite477.name = "substernale_pt";
HAnimSite477.DEF = "hanim_substernale_pt";
HAnimSite477.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
//HAnimSite visualization shape
let TouchSensor478 = browser.currentScene.createNode("TouchSensor");
TouchSensor478.description = "HAnimSite substernale";
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
HAnimJoint480.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment481 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment481.name = "t9";
HAnimSegment481.DEF = "hanim_t9";
//<HAnimJoint name='vt9'/> visualization sphere within <HAnimSegment name='t9'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt9'/> to <HAnimJoint name='vt8'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='r_thelion'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='l_thelion'/>
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
HAnimSite497.name = "r_thelion_pt";
HAnimSite497.DEF = "hanim_r_thelion_pt";
HAnimSite497.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
//HAnimSite visualization shape
let TouchSensor498 = browser.currentScene.createNode("TouchSensor");
TouchSensor498.description = "HAnimSite r_thelion";
HAnimSite497.children = new MFNode();

HAnimSite497.children[0] = TouchSensor498;

let Shape499 = browser.currentScene.createNode("Shape");
Shape499.USE = "HAnimSiteShape";
HAnimSite497.children[1] = Shape499;

HAnimSegment481.children[5] = HAnimSite497;

let HAnimSite500 = browser.currentScene.createNode("HAnimSite");
HAnimSite500.name = "l_thelion_pt";
HAnimSite500.DEF = "hanim_l_thelion_pt";
HAnimSite500.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
//HAnimSite visualization shape
let TouchSensor501 = browser.currentScene.createNode("TouchSensor");
TouchSensor501.description = "HAnimSite l_thelion";
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
HAnimJoint503.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment504 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment504.name = "t8";
HAnimSegment504.DEF = "hanim_t8";
//<HAnimJoint name='vt8'/> visualization sphere within <HAnimSegment name='t8'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt8'/> to <HAnimJoint name='vt7'/>
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
HAnimJoint512.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment513 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment513.name = "t7";
HAnimSegment513.DEF = "hanim_t7";
//<HAnimJoint name='vt7'/> visualization sphere within <HAnimSegment name='t7'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt7'/> to <HAnimJoint name='vt6'/>
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
HAnimJoint521.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment522 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment522.name = "t6";
HAnimSegment522.DEF = "hanim_t6";
//<HAnimJoint name='vt6'/> visualization sphere within <HAnimSegment name='t6'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt6'/> to <HAnimJoint name='vt5'/>
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
HAnimJoint530.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment531 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment531.name = "t5";
HAnimSegment531.DEF = "hanim_t5";
//<HAnimJoint name='vt5'/> visualization sphere within <HAnimSegment name='t5'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt5'/> to <HAnimJoint name='vt4'/>
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
HAnimJoint539.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment540 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment540.name = "t4";
HAnimSegment540.DEF = "hanim_t4";
//<HAnimJoint name='vt4'/> visualization sphere within <HAnimSegment name='t4'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt4'/> to <HAnimJoint name='vt3'/>
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
HAnimJoint548.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment549 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment549.name = "t3";
HAnimSegment549.DEF = "hanim_t3";
//<HAnimJoint name='vt3'/> visualization sphere within <HAnimSegment name='t3'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt3'/> to <HAnimJoint name='vt2'/>
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
HAnimJoint557.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment558 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment558.name = "t2";
HAnimSegment558.DEF = "hanim_t2";
//<HAnimJoint name='vt2'/> visualization sphere within <HAnimSegment name='t2'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt2'/> to <HAnimJoint name='vt1'/>
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
HAnimJoint566.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment567 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment567.name = "t1";
HAnimSegment567.DEF = "hanim_t1";
//<HAnimJoint name='vt1'/> visualization sphere within <HAnimSegment name='t1'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='vc7'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='l_sternoclavicular'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='r_sternoclavicular'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='suprasternale'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='cervicale'/>
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
HAnimSite591.name = "suprasternale_pt";
HAnimSite591.DEF = "hanim_suprasternale_pt";
HAnimSite591.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
//HAnimSite visualization shape
let TouchSensor592 = browser.currentScene.createNode("TouchSensor");
TouchSensor592.description = "HAnimSite suprasternale";
HAnimSite591.children = new MFNode();

HAnimSite591.children[0] = TouchSensor592;

let Shape593 = browser.currentScene.createNode("Shape");
Shape593.USE = "HAnimSiteShape";
HAnimSite591.children[1] = Shape593;

HAnimSegment567.children[7] = HAnimSite591;

let HAnimSite594 = browser.currentScene.createNode("HAnimSite");
HAnimSite594.name = "cervicale_pt";
HAnimSite594.DEF = "hanim_cervicale_pt";
HAnimSite594.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
//HAnimSite visualization shape
let TouchSensor595 = browser.currentScene.createNode("TouchSensor");
TouchSensor595.description = "HAnimSite cervicale";
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
HAnimJoint597.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment598 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment598.name = "c7";
HAnimSegment598.DEF = "hanim_c7";
//<HAnimJoint name='vc7'/> visualization sphere within <HAnimSegment name='c7'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc7'/> to <HAnimJoint name='vc6'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='r_neck_base'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='l_neck_base'/>
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
HAnimSite614.name = "r_neck_base_pt";
HAnimSite614.DEF = "hanim_r_neck_base_pt";
HAnimSite614.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
//HAnimSite visualization shape
let TouchSensor615 = browser.currentScene.createNode("TouchSensor");
TouchSensor615.description = "HAnimSite r_neck_base";
HAnimSite614.children = new MFNode();

HAnimSite614.children[0] = TouchSensor615;

let Shape616 = browser.currentScene.createNode("Shape");
Shape616.USE = "HAnimSiteShape";
HAnimSite614.children[1] = Shape616;

HAnimSegment598.children[5] = HAnimSite614;

let HAnimSite617 = browser.currentScene.createNode("HAnimSite");
HAnimSite617.name = "l_neck_base_pt";
HAnimSite617.DEF = "hanim_l_neck_base_pt";
HAnimSite617.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
//HAnimSite visualization shape
let TouchSensor618 = browser.currentScene.createNode("TouchSensor");
TouchSensor618.description = "HAnimSite l_neck_base";
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
HAnimJoint620.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment621 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment621.name = "c6";
HAnimSegment621.DEF = "hanim_c6";
//<HAnimJoint name='vc6'/> visualization sphere within <HAnimSegment name='c6'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc6'/> to <HAnimJoint name='vc5'/>
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
HAnimJoint629.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment630 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment630.name = "c5";
HAnimSegment630.DEF = "hanim_c5";
//<HAnimJoint name='vc5'/> visualization sphere within <HAnimSegment name='c5'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc5'/> to <HAnimJoint name='vc4'/>
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
HAnimJoint638.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment639 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment639.name = "c4";
HAnimSegment639.DEF = "hanim_c4";
//<HAnimJoint name='vc4'/> visualization sphere within <HAnimSegment name='c4'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc4'/> to <HAnimJoint name='vc3'/>
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
HAnimJoint647.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment648 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment648.name = "c3";
HAnimSegment648.DEF = "hanim_c3";
//<HAnimJoint name='vc3'/> visualization sphere within <HAnimSegment name='c3'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc3'/> to <HAnimJoint name='vc2'/>
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
HAnimJoint656.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment657 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment657.name = "c2";
HAnimSegment657.DEF = "hanim_c2";
//<HAnimJoint name='vc2'/> visualization sphere within <HAnimSegment name='c2'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc2'/> to <HAnimJoint name='vc1'/>
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
HAnimJoint665.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment666 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment666.name = "c1";
HAnimSegment666.DEF = "hanim_c1";
//<HAnimJoint name='vc1'/> visualization sphere within <HAnimSegment name='c1'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='vc1'/> to <HAnimJoint name='skullbase'/>
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
HAnimJoint674.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment675 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment675.name = "skull";
HAnimSegment675.DEF = "hanim_skull";
//<HAnimJoint name='skullbase'/> visualization sphere within <HAnimSegment name='skull'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyeball_joint'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyelid_joint'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyebrow_joint'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyeball_joint'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyelid_joint'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyebrow_joint'/>
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

//HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='temporomandibular'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='sellion'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_infraorbitale'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_infraorbitale'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='supramenton'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_tragion'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_gonion'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_tragion'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_gonion'/>
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

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='nuchale'/>
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

//TODO move skull_tip x to zero
let HAnimSite747 = browser.currentScene.createNode("HAnimSite");
HAnimSite747.name = "skull_tip";
HAnimSite747.DEF = "hanim_skull_tip";
HAnimSite747.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
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
HAnimSite750.name = "sellion_pt";
HAnimSite750.DEF = "hanim_sellion_pt";
HAnimSite750.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
//HAnimSite visualization shape
let TouchSensor751 = browser.currentScene.createNode("TouchSensor");
TouchSensor751.description = "HAnimSite sellion";
HAnimSite750.children = new MFNode();

HAnimSite750.children[0] = TouchSensor751;

let Shape752 = browser.currentScene.createNode("Shape");
Shape752.USE = "HAnimSiteShape";
HAnimSite750.children[1] = Shape752;

HAnimSegment675.children[20] = HAnimSite750;

let HAnimSite753 = browser.currentScene.createNode("HAnimSite");
HAnimSite753.name = "r_infraorbitale_pt";
HAnimSite753.DEF = "hanim_r_infraorbitale_pt";
HAnimSite753.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
//HAnimSite visualization shape
let TouchSensor754 = browser.currentScene.createNode("TouchSensor");
TouchSensor754.description = "HAnimSite r_infraorbitale";
HAnimSite753.children = new MFNode();

HAnimSite753.children[0] = TouchSensor754;

let Shape755 = browser.currentScene.createNode("Shape");
Shape755.USE = "HAnimSiteShape";
HAnimSite753.children[1] = Shape755;

HAnimSegment675.children[21] = HAnimSite753;

let HAnimSite756 = browser.currentScene.createNode("HAnimSite");
HAnimSite756.name = "l_infraorbitale_pt";
HAnimSite756.DEF = "hanim_l_infraorbitale_pt";
HAnimSite756.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
//HAnimSite visualization shape
let TouchSensor757 = browser.currentScene.createNode("TouchSensor");
TouchSensor757.description = "HAnimSite l_infraorbitale";
HAnimSite756.children = new MFNode();

HAnimSite756.children[0] = TouchSensor757;

let Shape758 = browser.currentScene.createNode("Shape");
Shape758.USE = "HAnimSiteShape";
HAnimSite756.children[1] = Shape758;

HAnimSegment675.children[22] = HAnimSite756;

let HAnimSite759 = browser.currentScene.createNode("HAnimSite");
HAnimSite759.name = "supramenton_pt";
HAnimSite759.DEF = "hanim_supramenton_pt";
HAnimSite759.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
//HAnimSite visualization shape
let TouchSensor760 = browser.currentScene.createNode("TouchSensor");
TouchSensor760.description = "HAnimSite supramenton";
HAnimSite759.children = new MFNode();

HAnimSite759.children[0] = TouchSensor760;

let Shape761 = browser.currentScene.createNode("Shape");
Shape761.USE = "HAnimSiteShape";
HAnimSite759.children[1] = Shape761;

HAnimSegment675.children[23] = HAnimSite759;

let HAnimSite762 = browser.currentScene.createNode("HAnimSite");
HAnimSite762.name = "r_tragion_pt";
HAnimSite762.DEF = "hanim_r_tragion_pt";
HAnimSite762.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
//HAnimSite visualization shape
let TouchSensor763 = browser.currentScene.createNode("TouchSensor");
TouchSensor763.description = "HAnimSite r_tragion";
HAnimSite762.children = new MFNode();

HAnimSite762.children[0] = TouchSensor763;

let Shape764 = browser.currentScene.createNode("Shape");
Shape764.USE = "HAnimSiteShape";
HAnimSite762.children[1] = Shape764;

HAnimSegment675.children[24] = HAnimSite762;

let HAnimSite765 = browser.currentScene.createNode("HAnimSite");
HAnimSite765.name = "r_gonion_pt";
HAnimSite765.DEF = "hanim_r_gonion_pt";
HAnimSite765.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
//HAnimSite visualization shape
let TouchSensor766 = browser.currentScene.createNode("TouchSensor");
TouchSensor766.description = "HAnimSite r_gonion";
HAnimSite765.children = new MFNode();

HAnimSite765.children[0] = TouchSensor766;

let Shape767 = browser.currentScene.createNode("Shape");
Shape767.USE = "HAnimSiteShape";
HAnimSite765.children[1] = Shape767;

HAnimSegment675.children[25] = HAnimSite765;

let HAnimSite768 = browser.currentScene.createNode("HAnimSite");
HAnimSite768.name = "l_tragion_pt";
HAnimSite768.DEF = "hanim_l_tragion_pt";
HAnimSite768.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
//HAnimSite visualization shape
let TouchSensor769 = browser.currentScene.createNode("TouchSensor");
TouchSensor769.description = "HAnimSite l_tragion";
HAnimSite768.children = new MFNode();

HAnimSite768.children[0] = TouchSensor769;

let Shape770 = browser.currentScene.createNode("Shape");
Shape770.USE = "HAnimSiteShape";
HAnimSite768.children[1] = Shape770;

HAnimSegment675.children[26] = HAnimSite768;

let HAnimSite771 = browser.currentScene.createNode("HAnimSite");
HAnimSite771.name = "l_gonion_pt";
HAnimSite771.DEF = "hanim_l_gonion_pt";
HAnimSite771.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
//HAnimSite visualization shape
let TouchSensor772 = browser.currentScene.createNode("TouchSensor");
TouchSensor772.description = "HAnimSite l_gonion";
HAnimSite771.children = new MFNode();

HAnimSite771.children[0] = TouchSensor772;

let Shape773 = browser.currentScene.createNode("Shape");
Shape773.USE = "HAnimSiteShape";
HAnimSite771.children[1] = Shape773;

HAnimSegment675.children[27] = HAnimSite771;

let HAnimSite774 = browser.currentScene.createNode("HAnimSite");
HAnimSite774.name = "nuchale_pt";
HAnimSite774.DEF = "hanim_nuchale_pt";
HAnimSite774.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
//HAnimSite visualization shape
let TouchSensor775 = browser.currentScene.createNode("TouchSensor");
TouchSensor775.description = "HAnimSite nuchale";
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
HAnimJoint777.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment778 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment778.name = "l_eyeball";
HAnimSegment778.DEF = "hanim_l_eyeball";
//<HAnimJoint name='l_eyeball_joint'/> visualization sphere within <HAnimSegment name='l_eyeball'/>
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
ColorRGBA785.color = new MFColorRGBA(new float[0,0,1,1,0,0,1,0.1]);
LineSet783.color = ColorRGBA785;

Shape782.geometry = LineSet783;

HAnimSegment778.children[2] = Shape782;

let HAnimSite786 = browser.currentScene.createNode("HAnimSite");
HAnimSite786.name = "l_eyeball_site_view";
HAnimSite786.DEF = "hanim_l_eyeball_site_view";
HAnimSite786.translation = new SFVec3f(new float[0.034,1.64,0.05]);
let Viewpoint787 = browser.currentScene.createNode("Viewpoint");
Viewpoint787.DEF = "hanim_l_eyeball_site_viewpoint";
Viewpoint787.description = "l_eyeball_site_viewpoint looking forward";
Viewpoint787.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint787.position = new SFVec3f(new float[0,0,0]);
HAnimSite786.children = new MFNode();

HAnimSite786.children[0] = Viewpoint787;

//HAnimSite/Viewpoint visualization shape
let Anchor788 = browser.currentScene.createNode("Anchor");
Anchor788.description = "HAnimSite Viewpoint hanim_l_eyeball_site_view";
Anchor788.url = new MFString(new java.lang.String["#hanim_l_eyeball_site_viewpoint"]);
let LOD789 = browser.currentScene.createNode("LOD");
LOD789.forceTransitions = True;
LOD789.range = new MFFloat(new float[0.04]);
let WorldInfo790 = browser.currentScene.createNode("WorldInfo");
WorldInfo790.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD789.children = new MFNode();

LOD789.children[0] = WorldInfo790;

let Shape791 = browser.currentScene.createNode("Shape");
Shape791.DEF = "HAnimSiteViewpointShape";
let IndexedFaceSet792 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet792.DEF = "SiteViewpointDiamondIFS";
IndexedFaceSet792.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet792.creaseAngle = 0.5;
let Coordinate793 = browser.currentScene.createNode("Coordinate");
Coordinate793.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet792.coord = Coordinate793;

Shape791.geometry = IndexedFaceSet792;

let Appearance794 = browser.currentScene.createNode("Appearance");
let Material795 = browser.currentScene.createNode("Material");
Material795.diffuseColor = new SFColor(new float[0,0,1]);
Material795.transparency = 0.6;
Appearance794.material = Material795;

Shape791.appearance = Appearance794;

LOD789.children[1] = Shape791;

Anchor788.children = new MFNode();

Anchor788.children[0] = LOD789;

HAnimSite786.children[1] = Anchor788;

HAnimSegment778.children[3] = HAnimSite786;

HAnimJoint777.children = new MFNode();

HAnimJoint777.children[0] = HAnimSegment778;

HAnimJoint674.children[1] = HAnimJoint777;

let HAnimJoint796 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint796.name = "l_eyelid_joint";
HAnimJoint796.DEF = "hanim_l_eyelid_joint";
HAnimJoint796.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimJoint796.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment797 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment797.name = "l_eyelid";
HAnimSegment797.DEF = "hanim_l_eyelid";
//<HAnimJoint name='l_eyelid_joint'/> visualization sphere within <HAnimSegment name='l_eyelid'/>
let TouchSensor798 = browser.currentScene.createNode("TouchSensor");
TouchSensor798.description = "HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid";
HAnimSegment797.children = new MFNode();

HAnimSegment797.children[0] = TouchSensor798;

let Transform799 = browser.currentScene.createNode("Transform");
Transform799.translation = new SFVec3f(new float[0.0336,1.6332,0.0502]);
let Shape800 = browser.currentScene.createNode("Shape");
Shape800.USE = "HAnimJointShape";
Transform799.children = new MFNode();

Transform799.children[0] = Shape800;

HAnimSegment797.children[1] = Transform799;

HAnimJoint796.children = new MFNode();

HAnimJoint796.children[0] = HAnimSegment797;

HAnimJoint674.children[2] = HAnimJoint796;

let HAnimJoint801 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint801.name = "l_eyebrow_joint";
HAnimJoint801.DEF = "hanim_l_eyebrow_joint";
HAnimJoint801.center = new SFVec3f(new float[0.0336,1.635,0.0506]);
HAnimJoint801.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment802 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment802.name = "l_eyebrow";
HAnimSegment802.DEF = "hanim_l_eyebrow";
//<HAnimJoint name='l_eyebrow_joint'/> visualization sphere within <HAnimSegment name='l_eyebrow'/>
let TouchSensor803 = browser.currentScene.createNode("TouchSensor");
TouchSensor803.description = "HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow";
HAnimSegment802.children = new MFNode();

HAnimSegment802.children[0] = TouchSensor803;

let Transform804 = browser.currentScene.createNode("Transform");
Transform804.translation = new SFVec3f(new float[0.0336,1.635,0.0506]);
let Shape805 = browser.currentScene.createNode("Shape");
Shape805.USE = "HAnimJointShape";
Transform804.children = new MFNode();

Transform804.children[0] = Shape805;

HAnimSegment802.children[1] = Transform804;

HAnimJoint801.children = new MFNode();

HAnimJoint801.children[0] = HAnimSegment802;

HAnimJoint674.children[3] = HAnimJoint801;

let HAnimJoint806 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint806.name = "r_eyeball_joint";
HAnimJoint806.DEF = "hanim_r_eyeball_joint";
HAnimJoint806.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimJoint806.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment807 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment807.name = "r_eyeball";
HAnimSegment807.DEF = "hanim_r_eyeball";
//<HAnimJoint name='r_eyeball_joint'/> visualization sphere within <HAnimSegment name='r_eyeball'/>
let TouchSensor808 = browser.currentScene.createNode("TouchSensor");
TouchSensor808.description = "HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball";
HAnimSegment807.children = new MFNode();

HAnimSegment807.children[0] = TouchSensor808;

let Transform809 = browser.currentScene.createNode("Transform");
Transform809.translation = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
let Shape810 = browser.currentScene.createNode("Shape");
Shape810.USE = "HAnimJointShape";
Transform809.children = new MFNode();

Transform809.children[0] = Shape810;

HAnimSegment807.children[1] = Transform809;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_eyeball_joint'/> to <HAnimSite name='r_eyeball_site_view'/>
let Shape811 = browser.currentScene.createNode("Shape");
let LineSet812 = browser.currentScene.createNode("LineSet");
LineSet812.vertexCount = new MFInt32(new int[2]);
let Coordinate813 = browser.currentScene.createNode("Coordinate");
Coordinate813.point = new MFVec3f(new float[-0.0336,1.6332,0.0502,-0.034,1.64,0.05]);
LineSet812.coord = Coordinate813;

let ColorRGBA814 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA814.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet812.color = ColorRGBA814;

Shape811.geometry = LineSet812;

HAnimSegment807.children[2] = Shape811;

let HAnimSite815 = browser.currentScene.createNode("HAnimSite");
HAnimSite815.name = "r_eyeball_site_view";
HAnimSite815.DEF = "hanim_r_eyeball_site_view";
HAnimSite815.translation = new SFVec3f(new float[-0.034,1.64,0.05]);
let Viewpoint816 = browser.currentScene.createNode("Viewpoint");
Viewpoint816.DEF = "hanim_r_eyeball_site_viewpoint";
Viewpoint816.description = "r_eyeball_site_viewpoint looking forward";
Viewpoint816.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint816.position = new SFVec3f(new float[0,0,0]);
HAnimSite815.children = new MFNode();

HAnimSite815.children[0] = Viewpoint816;

//HAnimSite/Viewpoint visualization shape
let Anchor817 = browser.currentScene.createNode("Anchor");
Anchor817.description = "HAnimSite Viewpoint hanim_r_eyeball_site_view";
Anchor817.url = new MFString(new java.lang.String["#hanim_r_eyeball_site_viewpoint"]);
let LOD818 = browser.currentScene.createNode("LOD");
LOD818.forceTransitions = True;
LOD818.range = new MFFloat(new float[0.04]);
let WorldInfo819 = browser.currentScene.createNode("WorldInfo");
WorldInfo819.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD818.children = new MFNode();

LOD818.children[0] = WorldInfo819;

let Shape820 = browser.currentScene.createNode("Shape");
Shape820.USE = "HAnimSiteViewpointShape";
LOD818.children[1] = Shape820;

Anchor817.children = new MFNode();

Anchor817.children[0] = LOD818;

HAnimSite815.children[1] = Anchor817;

HAnimSegment807.children[3] = HAnimSite815;

HAnimJoint806.children = new MFNode();

HAnimJoint806.children[0] = HAnimSegment807;

HAnimJoint674.children[4] = HAnimJoint806;

let HAnimJoint821 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint821.name = "r_eyelid_joint";
HAnimJoint821.DEF = "hanim_r_eyelid_joint";
HAnimJoint821.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimJoint821.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment822 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment822.name = "r_eyelid";
HAnimSegment822.DEF = "hanim_r_eyelid";
//<HAnimJoint name='r_eyelid_joint'/> visualization sphere within <HAnimSegment name='r_eyelid'/>
let TouchSensor823 = browser.currentScene.createNode("TouchSensor");
TouchSensor823.description = "HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid";
HAnimSegment822.children = new MFNode();

HAnimSegment822.children[0] = TouchSensor823;

let Transform824 = browser.currentScene.createNode("Transform");
Transform824.translation = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
let Shape825 = browser.currentScene.createNode("Shape");
Shape825.USE = "HAnimJointShape";
Transform824.children = new MFNode();

Transform824.children[0] = Shape825;

HAnimSegment822.children[1] = Transform824;

HAnimJoint821.children = new MFNode();

HAnimJoint821.children[0] = HAnimSegment822;

HAnimJoint674.children[5] = HAnimJoint821;

let HAnimJoint826 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint826.name = "r_eyebrow_joint";
HAnimJoint826.DEF = "hanim_r_eyebrow_joint";
HAnimJoint826.center = new SFVec3f(new float[-0.0336,1.635,0.0506]);
HAnimJoint826.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment827 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment827.name = "r_eyebrow";
HAnimSegment827.DEF = "hanim_r_eyebrow";
//<HAnimJoint name='r_eyebrow_joint'/> visualization sphere within <HAnimSegment name='r_eyebrow'/>
let TouchSensor828 = browser.currentScene.createNode("TouchSensor");
TouchSensor828.description = "HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow";
HAnimSegment827.children = new MFNode();

HAnimSegment827.children[0] = TouchSensor828;

let Transform829 = browser.currentScene.createNode("Transform");
Transform829.translation = new SFVec3f(new float[-0.0336,1.635,0.0506]);
let Shape830 = browser.currentScene.createNode("Shape");
Shape830.USE = "HAnimJointShape";
Transform829.children = new MFNode();

Transform829.children[0] = Shape830;

HAnimSegment827.children[1] = Transform829;

HAnimJoint826.children = new MFNode();

HAnimJoint826.children[0] = HAnimSegment827;

HAnimJoint674.children[6] = HAnimJoint826;

//Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint
let HAnimJoint831 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint831.name = "temporomandibular";
HAnimJoint831.DEF = "hanim_temporomandibular";
HAnimJoint831.center = new SFVec3f(new float[0,1.63,0.015]);
HAnimJoint831.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment832 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment832.name = "jaw";
HAnimSegment832.DEF = "hanim_jaw";
//<HAnimJoint name='temporomandibular'/> visualization sphere within <HAnimSegment name='jaw'/>
let TouchSensor833 = browser.currentScene.createNode("TouchSensor");
TouchSensor833.description = "HAnimJoint temporomandibular, HAnimSegment jaw";
HAnimSegment832.children = new MFNode();

HAnimSegment832.children[0] = TouchSensor833;

let Transform834 = browser.currentScene.createNode("Transform");
Transform834.translation = new SFVec3f(new float[0,1.63,0.015]);
let Shape835 = browser.currentScene.createNode("Shape");
Shape835.USE = "HAnimJointShape";
Transform834.children = new MFNode();

Transform834.children[0] = Shape835;

HAnimSegment832.children[1] = Transform834;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_l_site'/>
let Shape836 = browser.currentScene.createNode("Shape");
let LineSet837 = browser.currentScene.createNode("LineSet");
LineSet837.vertexCount = new MFInt32(new int[2]);
let Coordinate838 = browser.currentScene.createNode("Coordinate");
Coordinate838.point = new MFVec3f(new float[0,1.63,0.015,0.045,1.63,0]);
LineSet837.coord = Coordinate838;

let ColorRGBA839 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA839.USE = "HAnimSiteLineColorRGBA";
LineSet837.color = ColorRGBA839;

Shape836.geometry = LineSet837;

HAnimSegment832.children[2] = Shape836;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_r_site'/>
let Shape840 = browser.currentScene.createNode("Shape");
let LineSet841 = browser.currentScene.createNode("LineSet");
LineSet841.vertexCount = new MFInt32(new int[2]);
let Coordinate842 = browser.currentScene.createNode("Coordinate");
Coordinate842.point = new MFVec3f(new float[0,1.63,0.015,-0.045,1.63,0]);
LineSet841.coord = Coordinate842;

let ColorRGBA843 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA843.USE = "HAnimSiteLineColorRGBA";
LineSet841.color = ColorRGBA843;

Shape840.geometry = LineSet841;

HAnimSegment832.children[3] = Shape840;

let HAnimSite844 = browser.currentScene.createNode("HAnimSite");
HAnimSite844.name = "temporomandibular_l_site_pt";
HAnimSite844.DEF = "hanim_temporomandibular_l_site_pt";
HAnimSite844.translation = new SFVec3f(new float[0.045,1.63,0]);
//HAnimSite visualization shape
let TouchSensor845 = browser.currentScene.createNode("TouchSensor");
TouchSensor845.description = "HAnimSite temporomandibular_l_site";
HAnimSite844.children = new MFNode();

HAnimSite844.children[0] = TouchSensor845;

let Shape846 = browser.currentScene.createNode("Shape");
Shape846.USE = "HAnimSiteShape";
HAnimSite844.children[1] = Shape846;

HAnimSegment832.children[4] = HAnimSite844;

let HAnimSite847 = browser.currentScene.createNode("HAnimSite");
HAnimSite847.name = "temporomandibular_r_site_pt";
HAnimSite847.DEF = "hanim_temporomandibular_r_site_pt";
HAnimSite847.translation = new SFVec3f(new float[-0.045,1.63,0]);
//HAnimSite visualization shape
let TouchSensor848 = browser.currentScene.createNode("TouchSensor");
TouchSensor848.description = "HAnimSite temporomandibular_r_site";
HAnimSite847.children = new MFNode();

HAnimSite847.children[0] = TouchSensor848;

let Shape849 = browser.currentScene.createNode("Shape");
Shape849.USE = "HAnimSiteShape";
HAnimSite847.children[1] = Shape849;

HAnimSegment832.children[5] = HAnimSite847;

HAnimJoint831.children = new MFNode();

HAnimJoint831.children[0] = HAnimSegment832;

HAnimJoint674.children[7] = HAnimJoint831;

HAnimJoint665.children[1] = HAnimJoint674;

HAnimJoint656.children[1] = HAnimJoint665;

HAnimJoint647.children[1] = HAnimJoint656;

HAnimJoint638.children[1] = HAnimJoint647;

HAnimJoint629.children[1] = HAnimJoint638;

HAnimJoint620.children[1] = HAnimJoint629;

HAnimJoint597.children[1] = HAnimJoint620;

HAnimJoint566.children[1] = HAnimJoint597;

let HAnimJoint850 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint850.name = "l_sternoclavicular";
HAnimJoint850.DEF = "hanim_l_sternoclavicular";
HAnimJoint850.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint850.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment851 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment851.name = "l_clavicle";
HAnimSegment851.DEF = "hanim_l_clavicle";
//<HAnimJoint name='l_sternoclavicular'/> visualization sphere within <HAnimSegment name='l_clavicle'/>
let TouchSensor852 = browser.currentScene.createNode("TouchSensor");
TouchSensor852.description = "HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle";
HAnimSegment851.children = new MFNode();

HAnimSegment851.children[0] = TouchSensor852;

let Transform853 = browser.currentScene.createNode("Transform");
Transform853.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
let Shape854 = browser.currentScene.createNode("Shape");
Shape854.USE = "HAnimJointShape";
Transform853.children = new MFNode();

Transform853.children[0] = Shape854;

HAnimSegment851.children[1] = Transform853;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_sternoclavicular'/> to <HAnimJoint name='l_acromioclavicular'/>
let Shape855 = browser.currentScene.createNode("Shape");
let LineSet856 = browser.currentScene.createNode("LineSet");
LineSet856.vertexCount = new MFInt32(new int[2]);
let Coordinate857 = browser.currentScene.createNode("Coordinate");
Coordinate857.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet856.coord = Coordinate857;

let ColorRGBA858 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA858.USE = "HAnimSegmentLineColorRGBA";
LineSet856.color = ColorRGBA858;

Shape855.geometry = LineSet856;

HAnimSegment851.children[2] = Shape855;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_clavicale'/>
let Shape859 = browser.currentScene.createNode("Shape");
let LineSet860 = browser.currentScene.createNode("LineSet");
LineSet860.vertexCount = new MFInt32(new int[2]);
let Coordinate861 = browser.currentScene.createNode("Coordinate");
Coordinate861.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0271,1.4943,0.0394]);
LineSet860.coord = Coordinate861;

let ColorRGBA862 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA862.USE = "HAnimSiteLineColorRGBA";
LineSet860.color = ColorRGBA862;

Shape859.geometry = LineSet860;

HAnimSegment851.children[3] = Shape859;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_acromion'/>
let Shape863 = browser.currentScene.createNode("Shape");
let LineSet864 = browser.currentScene.createNode("LineSet");
LineSet864.vertexCount = new MFInt32(new int[2]);
let Coordinate865 = browser.currentScene.createNode("Coordinate");
Coordinate865.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.2032,1.476,-0.049]);
LineSet864.coord = Coordinate865;

let ColorRGBA866 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA866.USE = "HAnimSiteLineColorRGBA";
LineSet864.color = ColorRGBA866;

Shape863.geometry = LineSet864;

HAnimSegment851.children[4] = Shape863;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_ant'/>
let Shape867 = browser.currentScene.createNode("Shape");
let LineSet868 = browser.currentScene.createNode("LineSet");
LineSet868.vertexCount = new MFInt32(new int[2]);
let Coordinate869 = browser.currentScene.createNode("Coordinate");
Coordinate869.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075]);
LineSet868.coord = Coordinate869;

let ColorRGBA870 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA870.USE = "HAnimSiteLineColorRGBA";
LineSet868.color = ColorRGBA870;

Shape867.geometry = LineSet868;

HAnimSegment851.children[5] = Shape867;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_post'/>
let Shape871 = browser.currentScene.createNode("Shape");
let LineSet872 = browser.currentScene.createNode("LineSet");
LineSet872.vertexCount = new MFInt32(new int[2]);
let Coordinate873 = browser.currentScene.createNode("Coordinate");
Coordinate873.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875]);
LineSet872.coord = Coordinate873;

let ColorRGBA874 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA874.USE = "HAnimSiteLineColorRGBA";
LineSet872.color = ColorRGBA874;

Shape871.geometry = LineSet872;

HAnimSegment851.children[6] = Shape871;

let HAnimSite875 = browser.currentScene.createNode("HAnimSite");
HAnimSite875.name = "l_clavicale_pt";
HAnimSite875.DEF = "hanim_l_clavicale_pt";
HAnimSite875.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
//HAnimSite visualization shape
let TouchSensor876 = browser.currentScene.createNode("TouchSensor");
TouchSensor876.description = "HAnimSite l_clavicale";
HAnimSite875.children = new MFNode();

HAnimSite875.children[0] = TouchSensor876;

let Shape877 = browser.currentScene.createNode("Shape");
Shape877.USE = "HAnimSiteShape";
HAnimSite875.children[1] = Shape877;

HAnimSegment851.children[7] = HAnimSite875;

let HAnimSite878 = browser.currentScene.createNode("HAnimSite");
HAnimSite878.name = "l_acromion_pt";
HAnimSite878.DEF = "hanim_l_acromion_pt";
HAnimSite878.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
//HAnimSite visualization shape
let TouchSensor879 = browser.currentScene.createNode("TouchSensor");
TouchSensor879.description = "HAnimSite l_acromion";
HAnimSite878.children = new MFNode();

HAnimSite878.children[0] = TouchSensor879;

let Shape880 = browser.currentScene.createNode("Shape");
Shape880.USE = "HAnimSiteShape";
HAnimSite878.children[1] = Shape880;

HAnimSegment851.children[8] = HAnimSite878;

let HAnimSite881 = browser.currentScene.createNode("HAnimSite");
HAnimSite881.name = "l_axilla_ant_pt";
HAnimSite881.DEF = "hanim_l_axilla_ant_pt";
HAnimSite881.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
//HAnimSite visualization shape
let TouchSensor882 = browser.currentScene.createNode("TouchSensor");
TouchSensor882.description = "HAnimSite l_axilla_ant";
HAnimSite881.children = new MFNode();

HAnimSite881.children[0] = TouchSensor882;

let Shape883 = browser.currentScene.createNode("Shape");
Shape883.USE = "HAnimSiteShape";
HAnimSite881.children[1] = Shape883;

HAnimSegment851.children[9] = HAnimSite881;

let HAnimSite884 = browser.currentScene.createNode("HAnimSite");
HAnimSite884.name = "l_axilla_post_pt";
HAnimSite884.DEF = "hanim_l_axilla_post_pt";
HAnimSite884.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
//HAnimSite visualization shape
let TouchSensor885 = browser.currentScene.createNode("TouchSensor");
TouchSensor885.description = "HAnimSite l_axilla_post";
HAnimSite884.children = new MFNode();

HAnimSite884.children[0] = TouchSensor885;

let Shape886 = browser.currentScene.createNode("Shape");
Shape886.USE = "HAnimSiteShape";
HAnimSite884.children[1] = Shape886;

HAnimSegment851.children[10] = HAnimSite884;

HAnimJoint850.children = new MFNode();

HAnimJoint850.children[0] = HAnimSegment851;

let HAnimJoint887 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint887.name = "l_acromioclavicular";
HAnimJoint887.DEF = "hanim_l_acromioclavicular";
HAnimJoint887.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint887.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment888 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment888.name = "l_scapula";
HAnimSegment888.DEF = "hanim_l_scapula";
//<HAnimJoint name='l_acromioclavicular'/> visualization sphere within <HAnimSegment name='l_scapula'/>
let TouchSensor889 = browser.currentScene.createNode("TouchSensor");
TouchSensor889.description = "HAnimJoint l_acromioclavicular, HAnimSegment l_scapula";
HAnimSegment888.children = new MFNode();

HAnimSegment888.children[0] = TouchSensor889;

let Transform890 = browser.currentScene.createNode("Transform");
Transform890.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
let Shape891 = browser.currentScene.createNode("Shape");
Shape891.USE = "HAnimJointShape";
Transform890.children = new MFNode();

Transform890.children[0] = Shape891;

HAnimSegment888.children[1] = Transform890;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_acromioclavicular'/> to <HAnimJoint name='l_shoulder'/>
let Shape892 = browser.currentScene.createNode("Shape");
let LineSet893 = browser.currentScene.createNode("LineSet");
LineSet893.vertexCount = new MFInt32(new int[2]);
let Coordinate894 = browser.currentScene.createNode("Coordinate");
Coordinate894.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet893.coord = Coordinate894;

let ColorRGBA895 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA895.USE = "HAnimSegmentLineColorRGBA";
LineSet893.color = ColorRGBA895;

Shape892.geometry = LineSet893;

HAnimSegment888.children[2] = Shape892;

HAnimJoint887.children = new MFNode();

HAnimJoint887.children[0] = HAnimSegment888;

let HAnimJoint896 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint896.name = "l_shoulder";
HAnimJoint896.DEF = "hanim_l_shoulder";
HAnimJoint896.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint896.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment897 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment897.name = "l_upperarm";
HAnimSegment897.DEF = "hanim_l_upperarm";
//<HAnimJoint name='l_shoulder'/> visualization sphere within <HAnimSegment name='l_upperarm'/>
let TouchSensor898 = browser.currentScene.createNode("TouchSensor");
TouchSensor898.description = "HAnimJoint l_shoulder, HAnimSegment l_upperarm";
HAnimSegment897.children = new MFNode();

HAnimSegment897.children[0] = TouchSensor898;

let Transform899 = browser.currentScene.createNode("Transform");
Transform899.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
let Shape900 = browser.currentScene.createNode("Shape");
Shape900.USE = "HAnimJointShape";
Transform899.children = new MFNode();

Transform899.children[0] = Shape900;

HAnimSegment897.children[1] = Transform899;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_shoulder'/> to <HAnimJoint name='l_elbow'/>
let Shape901 = browser.currentScene.createNode("Shape");
let LineSet902 = browser.currentScene.createNode("LineSet");
LineSet902.vertexCount = new MFInt32(new int[2]);
let Coordinate903 = browser.currentScene.createNode("Coordinate");
Coordinate903.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet902.coord = Coordinate903;

let ColorRGBA904 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA904.USE = "HAnimSegmentLineColorRGBA";
LineSet902.color = ColorRGBA904;

Shape901.geometry = LineSet902;

HAnimSegment897.children[2] = Shape901;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_shoulder'/> to <HAnimSite name='l_humeral_lateral_epicn'/>
let Shape905 = browser.currentScene.createNode("Shape");
let LineSet906 = browser.currentScene.createNode("LineSet");
LineSet906.vertexCount = new MFInt32(new int[2]);
let Coordinate907 = browser.currentScene.createNode("Coordinate");
Coordinate907.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.228,1.1482,-0.11]);
LineSet906.coord = Coordinate907;

let ColorRGBA908 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA908.USE = "HAnimSiteLineColorRGBA";
LineSet906.color = ColorRGBA908;

Shape905.geometry = LineSet906;

HAnimSegment897.children[3] = Shape905;

let HAnimSite909 = browser.currentScene.createNode("HAnimSite");
HAnimSite909.name = "l_humeral_lateral_epicn_pt";
HAnimSite909.DEF = "hanim_l_humeral_lateral_epicn_pt";
HAnimSite909.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
//HAnimSite visualization shape
let TouchSensor910 = browser.currentScene.createNode("TouchSensor");
TouchSensor910.description = "HAnimSite l_humeral_lateral_epicn";
HAnimSite909.children = new MFNode();

HAnimSite909.children[0] = TouchSensor910;

let Shape911 = browser.currentScene.createNode("Shape");
Shape911.USE = "HAnimSiteShape";
HAnimSite909.children[1] = Shape911;

HAnimSegment897.children[4] = HAnimSite909;

HAnimJoint896.children = new MFNode();

HAnimJoint896.children[0] = HAnimSegment897;

let HAnimJoint912 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint912.name = "l_elbow";
HAnimJoint912.DEF = "hanim_l_elbow";
HAnimJoint912.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint912.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment913 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment913.name = "l_forearm";
HAnimSegment913.DEF = "hanim_l_forearm";
//<HAnimJoint name='l_elbow'/> visualization sphere within <HAnimSegment name='l_forearm'/>
let TouchSensor914 = browser.currentScene.createNode("TouchSensor");
TouchSensor914.description = "HAnimJoint l_elbow, HAnimSegment l_forearm";
HAnimSegment913.children = new MFNode();

HAnimSegment913.children[0] = TouchSensor914;

let Transform915 = browser.currentScene.createNode("Transform");
Transform915.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
let Shape916 = browser.currentScene.createNode("Shape");
Shape916.USE = "HAnimJointShape";
Transform915.children = new MFNode();

Transform915.children[0] = Shape916;

HAnimSegment913.children[1] = Transform915;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_elbow'/> to <HAnimJoint name='l_wrist'/>
let Shape917 = browser.currentScene.createNode("Shape");
let LineSet918 = browser.currentScene.createNode("LineSet");
LineSet918.vertexCount = new MFInt32(new int[2]);
let Coordinate919 = browser.currentScene.createNode("Coordinate");
Coordinate919.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet918.coord = Coordinate919;

let ColorRGBA920 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA920.USE = "HAnimSegmentLineColorRGBA";
LineSet918.color = ColorRGBA920;

Shape917.geometry = LineSet918;

HAnimSegment913.children[2] = Shape917;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radial_styloid'/>
let Shape921 = browser.currentScene.createNode("Shape");
let LineSet922 = browser.currentScene.createNode("LineSet");
LineSet922.vertexCount = new MFInt32(new int[2]);
let Coordinate923 = browser.currentScene.createNode("Coordinate");
Coordinate923.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415]);
LineSet922.coord = Coordinate923;

let ColorRGBA924 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA924.USE = "HAnimSiteLineColorRGBA";
LineSet922.color = ColorRGBA924;

Shape921.geometry = LineSet922;

HAnimSegment913.children[3] = Shape921;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_olecranon'/>
let Shape925 = browser.currentScene.createNode("Shape");
let LineSet926 = browser.currentScene.createNode("LineSet");
LineSet926.vertexCount = new MFInt32(new int[2]);
let Coordinate927 = browser.currentScene.createNode("Coordinate");
Coordinate927.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123]);
LineSet926.coord = Coordinate927;

let ColorRGBA928 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA928.USE = "HAnimSiteLineColorRGBA";
LineSet926.color = ColorRGBA928;

Shape925.geometry = LineSet926;

HAnimSegment913.children[4] = Shape925;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_humeral_medial_epicn'/>
let Shape929 = browser.currentScene.createNode("Shape");
let LineSet930 = browser.currentScene.createNode("LineSet");
LineSet930.vertexCount = new MFInt32(new int[2]);
let Coordinate931 = browser.currentScene.createNode("Coordinate");
Coordinate931.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113]);
LineSet930.coord = Coordinate931;

let ColorRGBA932 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA932.USE = "HAnimSiteLineColorRGBA";
LineSet930.color = ColorRGBA932;

Shape929.geometry = LineSet930;

HAnimSegment913.children[5] = Shape929;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radiale'/>
let Shape933 = browser.currentScene.createNode("Shape");
let LineSet934 = browser.currentScene.createNode("LineSet");
LineSet934.vertexCount = new MFInt32(new int[2]);
let Coordinate935 = browser.currentScene.createNode("Coordinate");
Coordinate935.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167]);
LineSet934.coord = Coordinate935;

let ColorRGBA936 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA936.USE = "HAnimSiteLineColorRGBA";
LineSet934.color = ColorRGBA936;

Shape933.geometry = LineSet934;

HAnimSegment913.children[6] = Shape933;

let HAnimSite937 = browser.currentScene.createNode("HAnimSite");
HAnimSite937.name = "l_radial_styloid_pt";
HAnimSite937.DEF = "hanim_l_radial_styloid_pt";
HAnimSite937.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
//HAnimSite visualization shape
let TouchSensor938 = browser.currentScene.createNode("TouchSensor");
TouchSensor938.description = "HAnimSite l_radial_styloid";
HAnimSite937.children = new MFNode();

HAnimSite937.children[0] = TouchSensor938;

let Shape939 = browser.currentScene.createNode("Shape");
Shape939.USE = "HAnimSiteShape";
HAnimSite937.children[1] = Shape939;

HAnimSegment913.children[7] = HAnimSite937;

let HAnimSite940 = browser.currentScene.createNode("HAnimSite");
HAnimSite940.name = "l_olecranon_pt";
HAnimSite940.DEF = "hanim_l_olecranon_pt";
HAnimSite940.translation = new SFVec3f(new float[0.1962,1.1375,-0.1123]);
//HAnimSite visualization shape
let TouchSensor941 = browser.currentScene.createNode("TouchSensor");
TouchSensor941.description = "HAnimSite l_olecranon";
HAnimSite940.children = new MFNode();

HAnimSite940.children[0] = TouchSensor941;

let Shape942 = browser.currentScene.createNode("Shape");
Shape942.USE = "HAnimSiteShape";
HAnimSite940.children[1] = Shape942;

HAnimSegment913.children[8] = HAnimSite940;

let HAnimSite943 = browser.currentScene.createNode("HAnimSite");
HAnimSite943.name = "l_humeral_medial_epicn_pt";
HAnimSite943.DEF = "hanim_l_humeral_medial_epicn_pt";
HAnimSite943.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
//HAnimSite visualization shape
let TouchSensor944 = browser.currentScene.createNode("TouchSensor");
TouchSensor944.description = "HAnimSite l_humeral_medial_epicn";
HAnimSite943.children = new MFNode();

HAnimSite943.children[0] = TouchSensor944;

let Shape945 = browser.currentScene.createNode("Shape");
Shape945.USE = "HAnimSiteShape";
HAnimSite943.children[1] = Shape945;

HAnimSegment913.children[9] = HAnimSite943;

let HAnimSite946 = browser.currentScene.createNode("HAnimSite");
HAnimSite946.name = "l_radiale_pt";
HAnimSite946.DEF = "hanim_l_radiale_pt";
HAnimSite946.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
//HAnimSite visualization shape
let TouchSensor947 = browser.currentScene.createNode("TouchSensor");
TouchSensor947.description = "HAnimSite l_radiale";
HAnimSite946.children = new MFNode();

HAnimSite946.children[0] = TouchSensor947;

let Shape948 = browser.currentScene.createNode("Shape");
Shape948.USE = "HAnimSiteShape";
HAnimSite946.children[1] = Shape948;

HAnimSegment913.children[10] = HAnimSite946;

HAnimJoint912.children = new MFNode();

HAnimJoint912.children[0] = HAnimSegment913;

let HAnimJoint949 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint949.name = "l_wrist";
HAnimJoint949.DEF = "hanim_l_wrist";
HAnimJoint949.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint949.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment950 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment950.name = "l_hand";
HAnimSegment950.DEF = "hanim_l_hand";
//<HAnimJoint name='l_wrist'/> visualization sphere within <HAnimSegment name='l_hand'/>
let TouchSensor951 = browser.currentScene.createNode("TouchSensor");
TouchSensor951.description = "HAnimJoint l_wrist, HAnimSegment l_hand";
HAnimSegment950.children = new MFNode();

HAnimSegment950.children[0] = TouchSensor951;

let Transform952 = browser.currentScene.createNode("Transform");
Transform952.translation = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
let Shape953 = browser.currentScene.createNode("Shape");
Shape953.USE = "HAnimJointShape";
Transform952.children = new MFNode();

Transform952.children[0] = Shape953;

HAnimSegment950.children[1] = Transform952;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_thumb1'/>
let Shape954 = browser.currentScene.createNode("Shape");
let LineSet955 = browser.currentScene.createNode("LineSet");
LineSet955.vertexCount = new MFInt32(new int[2]);
let Coordinate956 = browser.currentScene.createNode("Coordinate");
Coordinate956.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534]);
LineSet955.coord = Coordinate956;

let ColorRGBA957 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA957.USE = "HAnimSegmentLineColorRGBA";
LineSet955.color = ColorRGBA957;

Shape954.geometry = LineSet955;

HAnimSegment950.children[2] = Shape954;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_index0'/>
let Shape958 = browser.currentScene.createNode("Shape");
let LineSet959 = browser.currentScene.createNode("LineSet");
LineSet959.vertexCount = new MFInt32(new int[2]);
let Coordinate960 = browser.currentScene.createNode("Coordinate");
Coordinate960.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028]);
LineSet959.coord = Coordinate960;

let ColorRGBA961 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA961.USE = "HAnimSegmentLineColorRGBA";
LineSet959.color = ColorRGBA961;

Shape958.geometry = LineSet959;

HAnimSegment950.children[3] = Shape958;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_middle0'/>
let Shape962 = browser.currentScene.createNode("Shape");
let LineSet963 = browser.currentScene.createNode("LineSet");
LineSet963.vertexCount = new MFInt32(new int[2]);
let Coordinate964 = browser.currentScene.createNode("Coordinate");
Coordinate964.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053]);
LineSet963.coord = Coordinate964;

let ColorRGBA965 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA965.USE = "HAnimSegmentLineColorRGBA";
LineSet963.color = ColorRGBA965;

Shape962.geometry = LineSet963;

HAnimSegment950.children[4] = Shape962;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_ring0'/>
let Shape966 = browser.currentScene.createNode("Shape");
let LineSet967 = browser.currentScene.createNode("LineSet");
LineSet967.vertexCount = new MFInt32(new int[2]);
let Coordinate968 = browser.currentScene.createNode("Coordinate");
Coordinate968.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794]);
LineSet967.coord = Coordinate968;

let ColorRGBA969 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA969.USE = "HAnimSegmentLineColorRGBA";
LineSet967.color = ColorRGBA969;

Shape966.geometry = LineSet967;

HAnimSegment950.children[5] = Shape966;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_pinky0'/>
let Shape970 = browser.currentScene.createNode("Shape");
let LineSet971 = browser.currentScene.createNode("LineSet");
LineSet971.vertexCount = new MFInt32(new int[2]);
let Coordinate972 = browser.currentScene.createNode("Coordinate");
Coordinate972.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036]);
LineSet971.coord = Coordinate972;

let ColorRGBA973 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA973.USE = "HAnimSegmentLineColorRGBA";
LineSet971.color = ColorRGBA973;

Shape970.geometry = LineSet971;

HAnimSegment950.children[6] = Shape970;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha2'/>
let Shape974 = browser.currentScene.createNode("Shape");
let LineSet975 = browser.currentScene.createNode("LineSet");
LineSet975.vertexCount = new MFInt32(new int[2]);
let Coordinate976 = browser.currentScene.createNode("Coordinate");
Coordinate976.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237]);
LineSet975.coord = Coordinate976;

let ColorRGBA977 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA977.USE = "HAnimSiteLineColorRGBA";
LineSet975.color = ColorRGBA977;

Shape974.geometry = LineSet975;

HAnimSegment950.children[7] = Shape974;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_ulnar_styloid'/>
let Shape978 = browser.currentScene.createNode("Shape");
let LineSet979 = browser.currentScene.createNode("LineSet");
LineSet979.vertexCount = new MFInt32(new int[2]);
let Coordinate980 = browser.currentScene.createNode("Coordinate");
Coordinate980.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648]);
LineSet979.coord = Coordinate980;

let ColorRGBA981 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA981.USE = "HAnimSiteLineColorRGBA";
LineSet979.color = ColorRGBA981;

Shape978.geometry = LineSet979;

HAnimSegment950.children[8] = Shape978;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha5'/>
let Shape982 = browser.currentScene.createNode("Shape");
let LineSet983 = browser.currentScene.createNode("LineSet");
LineSet983.vertexCount = new MFInt32(new int[2]);
let Coordinate984 = browser.currentScene.createNode("Coordinate");
Coordinate984.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122]);
LineSet983.coord = Coordinate984;

let ColorRGBA985 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA985.USE = "HAnimSiteLineColorRGBA";
LineSet983.color = ColorRGBA985;

Shape982.geometry = LineSet983;

HAnimSegment950.children[9] = Shape982;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_hand_front_view'/>
let Shape986 = browser.currentScene.createNode("Shape");
let LineSet987 = browser.currentScene.createNode("LineSet");
LineSet987.vertexCount = new MFInt32(new int[2]);
let Coordinate988 = browser.currentScene.createNode("Coordinate");
Coordinate988.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.3,0.75,0.45]);
LineSet987.coord = Coordinate988;

let ColorRGBA989 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA989.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet987.color = ColorRGBA989;

Shape986.geometry = LineSet987;

HAnimSegment950.children[10] = Shape986;

let HAnimSite990 = browser.currentScene.createNode("HAnimSite");
HAnimSite990.name = "l_metacarpal_pha2_pt";
HAnimSite990.DEF = "hanim_l_metacarpal_pha2_pt";
HAnimSite990.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
//HAnimSite visualization shape
let TouchSensor991 = browser.currentScene.createNode("TouchSensor");
TouchSensor991.description = "HAnimSite l_metacarpal_pha2";
HAnimSite990.children = new MFNode();

HAnimSite990.children[0] = TouchSensor991;

let Shape992 = browser.currentScene.createNode("Shape");
Shape992.USE = "HAnimSiteShape";
HAnimSite990.children[1] = Shape992;

HAnimSegment950.children[11] = HAnimSite990;

let HAnimSite993 = browser.currentScene.createNode("HAnimSite");
HAnimSite993.name = "l_ulnar_styloid_pt";
HAnimSite993.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite993.translation = new SFVec3f(new float[0.2142,0.8529,-0.0648]);
//HAnimSite visualization shape
let TouchSensor994 = browser.currentScene.createNode("TouchSensor");
TouchSensor994.description = "HAnimSite l_ulnar_styloid";
HAnimSite993.children = new MFNode();

HAnimSite993.children[0] = TouchSensor994;

let Shape995 = browser.currentScene.createNode("Shape");
Shape995.USE = "HAnimSiteShape";
HAnimSite993.children[1] = Shape995;

HAnimSegment950.children[12] = HAnimSite993;

let HAnimSite996 = browser.currentScene.createNode("HAnimSite");
HAnimSite996.name = "l_metacarpal_pha5_pt";
HAnimSite996.DEF = "hanim_l_metacarpal_pha5_pt";
HAnimSite996.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
//HAnimSite visualization shape
let TouchSensor997 = browser.currentScene.createNode("TouchSensor");
TouchSensor997.description = "HAnimSite l_metacarpal_pha5";
HAnimSite996.children = new MFNode();

HAnimSite996.children[0] = TouchSensor997;

let Shape998 = browser.currentScene.createNode("Shape");
Shape998.USE = "HAnimSiteShape";
HAnimSite996.children[1] = Shape998;

HAnimSegment950.children[13] = HAnimSite996;

let HAnimSite999 = browser.currentScene.createNode("HAnimSite");
HAnimSite999.name = "l_hand_front_view";
HAnimSite999.DEF = "hanim_l_hand_front_view";
HAnimSite999.translation = new SFVec3f(new float[0.3,0.75,0.45]);
let Viewpoint1000 = browser.currentScene.createNode("Viewpoint");
Viewpoint1000.DEF = "hanim_l_hand_front_viewpoint";
Viewpoint1000.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint1000.description = "left hand front";
Viewpoint1000.position = new SFVec3f(new float[0,0,0]);
HAnimSite999.children = new MFNode();

HAnimSite999.children[0] = Viewpoint1000;

//HAnimSite/Viewpoint visualization shape
let Anchor1001 = browser.currentScene.createNode("Anchor");
Anchor1001.description = "HAnimSite Viewpoint hanim_l_hand_front_view";
Anchor1001.url = new MFString(new java.lang.String["#hanim_l_hand_front_viewpoint"]);
let LOD1002 = browser.currentScene.createNode("LOD");
LOD1002.forceTransitions = True;
LOD1002.range = new MFFloat(new float[0.04]);
let WorldInfo1003 = browser.currentScene.createNode("WorldInfo");
WorldInfo1003.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1002.children = new MFNode();

LOD1002.children[0] = WorldInfo1003;

let Shape1004 = browser.currentScene.createNode("Shape");
Shape1004.USE = "HAnimSiteViewpointShape";
LOD1002.children[1] = Shape1004;

Anchor1001.children = new MFNode();

Anchor1001.children[0] = LOD1002;

HAnimSite999.children[1] = Anchor1001;

HAnimSegment950.children[14] = HAnimSite999;

HAnimJoint949.children = new MFNode();

HAnimJoint949.children[0] = HAnimSegment950;

let HAnimJoint1005 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1005.name = "l_thumb1";
HAnimJoint1005.DEF = "hanim_l_thumb1";
HAnimJoint1005.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint1005.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1006 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1006.name = "l_thumb_metacarpal";
HAnimSegment1006.DEF = "hanim_l_thumb_metacarpal";
//<HAnimJoint name='l_thumb1'/> visualization sphere within <HAnimSegment name='l_thumb_metacarpal'/>
let TouchSensor1007 = browser.currentScene.createNode("TouchSensor");
TouchSensor1007.description = "HAnimJoint l_thumb1, HAnimSegment l_thumb_metacarpal";
HAnimSegment1006.children = new MFNode();

HAnimSegment1006.children[0] = TouchSensor1007;

let Transform1008 = browser.currentScene.createNode("Transform");
Transform1008.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
let Shape1009 = browser.currentScene.createNode("Shape");
Shape1009.USE = "HAnimJointShape";
Transform1008.children = new MFNode();

Transform1008.children[0] = Shape1009;

HAnimSegment1006.children[1] = Transform1008;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb1'/> to <HAnimJoint name='l_thumb2'/>
let Shape1010 = browser.currentScene.createNode("Shape");
let LineSet1011 = browser.currentScene.createNode("LineSet");
LineSet1011.vertexCount = new MFInt32(new int[2]);
let Coordinate1012 = browser.currentScene.createNode("Coordinate");
Coordinate1012.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet1011.coord = Coordinate1012;

let ColorRGBA1013 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1013.USE = "HAnimSegmentLineColorRGBA";
LineSet1011.color = ColorRGBA1013;

Shape1010.geometry = LineSet1011;

HAnimSegment1006.children[2] = Shape1010;

HAnimJoint1005.children = new MFNode();

HAnimJoint1005.children[0] = HAnimSegment1006;

let HAnimJoint1014 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1014.name = "l_thumb2";
HAnimJoint1014.DEF = "hanim_l_thumb2";
HAnimJoint1014.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint1014.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1015 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1015.name = "l_thumb_proximal";
HAnimSegment1015.DEF = "hanim_l_thumb_proximal";
//<HAnimJoint name='l_thumb2'/> visualization sphere within <HAnimSegment name='l_thumb_proximal'/>
let TouchSensor1016 = browser.currentScene.createNode("TouchSensor");
TouchSensor1016.description = "HAnimJoint l_thumb2, HAnimSegment l_thumb_proximal";
HAnimSegment1015.children = new MFNode();

HAnimSegment1015.children[0] = TouchSensor1016;

let Transform1017 = browser.currentScene.createNode("Transform");
Transform1017.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
let Shape1018 = browser.currentScene.createNode("Shape");
Shape1018.USE = "HAnimJointShape";
Transform1017.children = new MFNode();

Transform1017.children[0] = Shape1018;

HAnimSegment1015.children[1] = Transform1017;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb2'/> to <HAnimJoint name='l_thumb3'/>
let Shape1019 = browser.currentScene.createNode("Shape");
let LineSet1020 = browser.currentScene.createNode("LineSet");
LineSet1020.vertexCount = new MFInt32(new int[2]);
let Coordinate1021 = browser.currentScene.createNode("Coordinate");
Coordinate1021.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet1020.coord = Coordinate1021;

let ColorRGBA1022 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1022.USE = "HAnimSegmentLineColorRGBA";
LineSet1020.color = ColorRGBA1022;

Shape1019.geometry = LineSet1020;

HAnimSegment1015.children[2] = Shape1019;

HAnimJoint1014.children = new MFNode();

HAnimJoint1014.children[0] = HAnimSegment1015;

let HAnimJoint1023 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1023.name = "l_thumb3";
HAnimJoint1023.DEF = "hanim_l_thumb3";
HAnimJoint1023.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint1023.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1024 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1024.name = "l_thumb_distal";
HAnimSegment1024.DEF = "hanim_l_thumb_distal";
//<HAnimJoint name='l_thumb3'/> visualization sphere within <HAnimSegment name='l_thumb_distal'/>
let TouchSensor1025 = browser.currentScene.createNode("TouchSensor");
TouchSensor1025.description = "HAnimJoint l_thumb3, HAnimSegment l_thumb_distal";
HAnimSegment1024.children = new MFNode();

HAnimSegment1024.children[0] = TouchSensor1025;

let Transform1026 = browser.currentScene.createNode("Transform");
Transform1026.translation = new SFVec3f(new float[0.1955,0.8159,0.0464]);
let Shape1027 = browser.currentScene.createNode("Shape");
Shape1027.USE = "HAnimJointShape";
Transform1026.children = new MFNode();

Transform1026.children[0] = Shape1027;

HAnimSegment1024.children[1] = Transform1026;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_thumb3'/> to <HAnimSite name='l_thumb_distal_tip'/>
let Shape1028 = browser.currentScene.createNode("Shape");
let LineSet1029 = browser.currentScene.createNode("LineSet");
LineSet1029.vertexCount = new MFInt32(new int[2]);
let Coordinate1030 = browser.currentScene.createNode("Coordinate");
Coordinate1030.point = new MFVec3f(new float[0.1955,0.8159,0.0464,0.1982,0.8061,0.0759]);
LineSet1029.coord = Coordinate1030;

let ColorRGBA1031 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1031.USE = "HAnimSiteLineColorRGBA";
LineSet1029.color = ColorRGBA1031;

Shape1028.geometry = LineSet1029;

HAnimSegment1024.children[2] = Shape1028;

let HAnimSite1032 = browser.currentScene.createNode("HAnimSite");
HAnimSite1032.name = "l_thumb_distal_tip";
HAnimSite1032.DEF = "hanim_l_thumb_distal_tip";
HAnimSite1032.translation = new SFVec3f(new float[0.1982,0.8061,0.0759]);
//HAnimSite visualization shape
let TouchSensor1033 = browser.currentScene.createNode("TouchSensor");
TouchSensor1033.description = "HAnimSite l_thumb_distal_tip";
HAnimSite1032.children = new MFNode();

HAnimSite1032.children[0] = TouchSensor1033;

let Shape1034 = browser.currentScene.createNode("Shape");
Shape1034.USE = "HAnimSiteShape";
HAnimSite1032.children[1] = Shape1034;

HAnimSegment1024.children[3] = HAnimSite1032;

HAnimJoint1023.children = new MFNode();

HAnimJoint1023.children[0] = HAnimSegment1024;

HAnimJoint1014.children[1] = HAnimJoint1023;

HAnimJoint1005.children[1] = HAnimJoint1014;

HAnimJoint949.children[1] = HAnimJoint1005;

let HAnimJoint1035 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1035.name = "l_index0";
HAnimJoint1035.DEF = "hanim_l_index0";
HAnimJoint1035.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint1035.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1036 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1036.name = "l_index_metacarpal";
HAnimSegment1036.DEF = "hanim_l_index_metacarpal";
//<HAnimJoint name='l_index0'/> visualization sphere within <HAnimSegment name='l_index_metacarpal'/>
let TouchSensor1037 = browser.currentScene.createNode("TouchSensor");
TouchSensor1037.description = "HAnimJoint l_index0, HAnimSegment l_index_metacarpal";
HAnimSegment1036.children = new MFNode();

HAnimSegment1036.children[0] = TouchSensor1037;

let Transform1038 = browser.currentScene.createNode("Transform");
Transform1038.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
let Shape1039 = browser.currentScene.createNode("Shape");
Shape1039.USE = "HAnimJointShape";
Transform1038.children = new MFNode();

Transform1038.children[0] = Shape1039;

HAnimSegment1036.children[1] = Transform1038;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index0'/> to <HAnimJoint name='l_index1'/>
let Shape1040 = browser.currentScene.createNode("Shape");
let LineSet1041 = browser.currentScene.createNode("LineSet");
LineSet1041.vertexCount = new MFInt32(new int[2]);
let Coordinate1042 = browser.currentScene.createNode("Coordinate");
Coordinate1042.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet1041.coord = Coordinate1042;

let ColorRGBA1043 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1043.USE = "HAnimSegmentLineColorRGBA";
LineSet1041.color = ColorRGBA1043;

Shape1040.geometry = LineSet1041;

HAnimSegment1036.children[2] = Shape1040;

HAnimJoint1035.children = new MFNode();

HAnimJoint1035.children[0] = HAnimSegment1036;

let HAnimJoint1044 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1044.name = "l_index1";
HAnimJoint1044.DEF = "hanim_l_index1";
HAnimJoint1044.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint1044.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1045 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1045.name = "l_index_proximal";
HAnimSegment1045.DEF = "hanim_l_index_proximal";
//<HAnimJoint name='l_index1'/> visualization sphere within <HAnimSegment name='l_index_proximal'/>
let TouchSensor1046 = browser.currentScene.createNode("TouchSensor");
TouchSensor1046.description = "HAnimJoint l_index1, HAnimSegment l_index_proximal";
HAnimSegment1045.children = new MFNode();

HAnimSegment1045.children[0] = TouchSensor1046;

let Transform1047 = browser.currentScene.createNode("Transform");
Transform1047.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
let Shape1048 = browser.currentScene.createNode("Shape");
Shape1048.USE = "HAnimJointShape";
Transform1047.children = new MFNode();

Transform1047.children[0] = Shape1048;

HAnimSegment1045.children[1] = Transform1047;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index1'/> to <HAnimJoint name='l_index2'/>
let Shape1049 = browser.currentScene.createNode("Shape");
let LineSet1050 = browser.currentScene.createNode("LineSet");
LineSet1050.vertexCount = new MFInt32(new int[2]);
let Coordinate1051 = browser.currentScene.createNode("Coordinate");
Coordinate1051.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet1050.coord = Coordinate1051;

let ColorRGBA1052 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1052.USE = "HAnimSegmentLineColorRGBA";
LineSet1050.color = ColorRGBA1052;

Shape1049.geometry = LineSet1050;

HAnimSegment1045.children[2] = Shape1049;

HAnimJoint1044.children = new MFNode();

HAnimJoint1044.children[0] = HAnimSegment1045;

let HAnimJoint1053 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1053.name = "l_index2";
HAnimJoint1053.DEF = "hanim_l_index2";
HAnimJoint1053.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint1053.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1054 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1054.name = "l_index_middle";
HAnimSegment1054.DEF = "hanim_l_index_middle";
//<HAnimJoint name='l_index2'/> visualization sphere within <HAnimSegment name='l_index_middle'/>
let TouchSensor1055 = browser.currentScene.createNode("TouchSensor");
TouchSensor1055.description = "HAnimJoint l_index2, HAnimSegment l_index_middle";
HAnimSegment1054.children = new MFNode();

HAnimSegment1054.children[0] = TouchSensor1055;

let Transform1056 = browser.currentScene.createNode("Transform");
Transform1056.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
let Shape1057 = browser.currentScene.createNode("Shape");
Shape1057.USE = "HAnimJointShape";
Transform1056.children = new MFNode();

Transform1056.children[0] = Shape1057;

HAnimSegment1054.children[1] = Transform1056;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_index2'/> to <HAnimJoint name='l_index3'/>
let Shape1058 = browser.currentScene.createNode("Shape");
let LineSet1059 = browser.currentScene.createNode("LineSet");
LineSet1059.vertexCount = new MFInt32(new int[2]);
let Coordinate1060 = browser.currentScene.createNode("Coordinate");
Coordinate1060.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet1059.coord = Coordinate1060;

let ColorRGBA1061 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1061.USE = "HAnimSegmentLineColorRGBA";
LineSet1059.color = ColorRGBA1061;

Shape1058.geometry = LineSet1059;

HAnimSegment1054.children[2] = Shape1058;

HAnimJoint1053.children = new MFNode();

HAnimJoint1053.children[0] = HAnimSegment1054;

let HAnimJoint1062 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1062.name = "l_index3";
HAnimJoint1062.DEF = "hanim_l_index3";
HAnimJoint1062.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint1062.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1063 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1063.name = "l_index_distal";
HAnimSegment1063.DEF = "hanim_l_index_distal";
//<HAnimJoint name='l_index3'/> visualization sphere within <HAnimSegment name='l_index_distal'/>
let TouchSensor1064 = browser.currentScene.createNode("TouchSensor");
TouchSensor1064.description = "HAnimJoint l_index3, HAnimSegment l_index_distal";
HAnimSegment1063.children = new MFNode();

HAnimSegment1063.children[0] = TouchSensor1064;

let Transform1065 = browser.currentScene.createNode("Transform");
Transform1065.translation = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
let Shape1066 = browser.currentScene.createNode("Shape");
Shape1066.USE = "HAnimJointShape";
Transform1065.children = new MFNode();

Transform1065.children[0] = Shape1066;

HAnimSegment1063.children[1] = Transform1065;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_index_distal_tip'/>
let Shape1067 = browser.currentScene.createNode("Shape");
let LineSet1068 = browser.currentScene.createNode("LineSet");
LineSet1068.vertexCount = new MFInt32(new int[2]);
let Coordinate1069 = browser.currentScene.createNode("Coordinate");
Coordinate1069.point = new MFVec3f(new float[0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245]);
LineSet1068.coord = Coordinate1069;

let ColorRGBA1070 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1070.USE = "HAnimSiteLineColorRGBA";
LineSet1068.color = ColorRGBA1070;

Shape1067.geometry = LineSet1068;

HAnimSegment1063.children[2] = Shape1067;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_dactylion'/>
let Shape1071 = browser.currentScene.createNode("Shape");
let LineSet1072 = browser.currentScene.createNode("LineSet");
LineSet1072.vertexCount = new MFInt32(new int[2]);
let Coordinate1073 = browser.currentScene.createNode("Coordinate");
Coordinate1073.point = new MFVec3f(new float[0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482]);
LineSet1072.coord = Coordinate1073;

let ColorRGBA1074 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1074.USE = "HAnimSiteLineColorRGBA";
LineSet1072.color = ColorRGBA1074;

Shape1071.geometry = LineSet1072;

HAnimSegment1063.children[3] = Shape1071;

let HAnimSite1075 = browser.currentScene.createNode("HAnimSite");
HAnimSite1075.name = "l_index_distal_tip";
HAnimSite1075.DEF = "hanim_l_index_distal_tip";
HAnimSite1075.translation = new SFVec3f(new float[0.2089,0.6858,-0.0245]);
//HAnimSite visualization shape
let TouchSensor1076 = browser.currentScene.createNode("TouchSensor");
TouchSensor1076.description = "HAnimSite l_index_distal_tip";
HAnimSite1075.children = new MFNode();

HAnimSite1075.children[0] = TouchSensor1076;

let Shape1077 = browser.currentScene.createNode("Shape");
Shape1077.USE = "HAnimSiteShape";
HAnimSite1075.children[1] = Shape1077;

HAnimSegment1063.children[4] = HAnimSite1075;

let HAnimSite1078 = browser.currentScene.createNode("HAnimSite");
HAnimSite1078.name = "l_dactylion_pt";
HAnimSite1078.DEF = "hanim_l_dactylion_pt";
HAnimSite1078.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
//HAnimSite visualization shape
let TouchSensor1079 = browser.currentScene.createNode("TouchSensor");
TouchSensor1079.description = "HAnimSite l_dactylion";
HAnimSite1078.children = new MFNode();

HAnimSite1078.children[0] = TouchSensor1079;

let Shape1080 = browser.currentScene.createNode("Shape");
Shape1080.USE = "HAnimSiteShape";
HAnimSite1078.children[1] = Shape1080;

HAnimSegment1063.children[5] = HAnimSite1078;

HAnimJoint1062.children = new MFNode();

HAnimJoint1062.children[0] = HAnimSegment1063;

HAnimJoint1053.children[1] = HAnimJoint1062;

HAnimJoint1044.children[1] = HAnimJoint1053;

HAnimJoint1035.children[1] = HAnimJoint1044;

HAnimJoint949.children[2] = HAnimJoint1035;

let HAnimJoint1081 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1081.name = "l_middle0";
HAnimJoint1081.DEF = "hanim_l_middle0";
HAnimJoint1081.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint1081.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1082 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1082.name = "l_middle_metacarpal";
HAnimSegment1082.DEF = "hanim_l_middle_metacarpal";
//<HAnimJoint name='l_middle0'/> visualization sphere within <HAnimSegment name='l_middle_metacarpal'/>
let TouchSensor1083 = browser.currentScene.createNode("TouchSensor");
TouchSensor1083.description = "HAnimJoint l_middle0, HAnimSegment l_middle_metacarpal";
HAnimSegment1082.children = new MFNode();

HAnimSegment1082.children[0] = TouchSensor1083;

let Transform1084 = browser.currentScene.createNode("Transform");
Transform1084.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
let Shape1085 = browser.currentScene.createNode("Shape");
Shape1085.USE = "HAnimJointShape";
Transform1084.children = new MFNode();

Transform1084.children[0] = Shape1085;

HAnimSegment1082.children[1] = Transform1084;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle0'/> to <HAnimJoint name='l_middle1'/>
let Shape1086 = browser.currentScene.createNode("Shape");
let LineSet1087 = browser.currentScene.createNode("LineSet");
LineSet1087.vertexCount = new MFInt32(new int[2]);
let Coordinate1088 = browser.currentScene.createNode("Coordinate");
Coordinate1088.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet1087.coord = Coordinate1088;

let ColorRGBA1089 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1089.USE = "HAnimSegmentLineColorRGBA";
LineSet1087.color = ColorRGBA1089;

Shape1086.geometry = LineSet1087;

HAnimSegment1082.children[2] = Shape1086;

HAnimJoint1081.children = new MFNode();

HAnimJoint1081.children[0] = HAnimSegment1082;

let HAnimJoint1090 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1090.name = "l_middle1";
HAnimJoint1090.DEF = "hanim_l_middle1";
HAnimJoint1090.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint1090.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1091 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1091.name = "l_middle_proximal";
HAnimSegment1091.DEF = "hanim_l_middle_proximal";
//<HAnimJoint name='l_middle1'/> visualization sphere within <HAnimSegment name='l_middle_proximal'/>
let TouchSensor1092 = browser.currentScene.createNode("TouchSensor");
TouchSensor1092.description = "HAnimJoint l_middle1, HAnimSegment l_middle_proximal";
HAnimSegment1091.children = new MFNode();

HAnimSegment1091.children[0] = TouchSensor1092;

let Transform1093 = browser.currentScene.createNode("Transform");
Transform1093.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
let Shape1094 = browser.currentScene.createNode("Shape");
Shape1094.USE = "HAnimJointShape";
Transform1093.children = new MFNode();

Transform1093.children[0] = Shape1094;

HAnimSegment1091.children[1] = Transform1093;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle1'/> to <HAnimJoint name='l_middle2'/>
let Shape1095 = browser.currentScene.createNode("Shape");
let LineSet1096 = browser.currentScene.createNode("LineSet");
LineSet1096.vertexCount = new MFInt32(new int[2]);
let Coordinate1097 = browser.currentScene.createNode("Coordinate");
Coordinate1097.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet1096.coord = Coordinate1097;

let ColorRGBA1098 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1098.USE = "HAnimSegmentLineColorRGBA";
LineSet1096.color = ColorRGBA1098;

Shape1095.geometry = LineSet1096;

HAnimSegment1091.children[2] = Shape1095;

HAnimJoint1090.children = new MFNode();

HAnimJoint1090.children[0] = HAnimSegment1091;

let HAnimJoint1099 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1099.name = "l_middle2";
HAnimJoint1099.DEF = "hanim_l_middle2";
HAnimJoint1099.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint1099.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1100 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1100.name = "l_middle_middle";
HAnimSegment1100.DEF = "hanim_l_middle_middle";
//<HAnimJoint name='l_middle2'/> visualization sphere within <HAnimSegment name='l_middle_middle'/>
let TouchSensor1101 = browser.currentScene.createNode("TouchSensor");
TouchSensor1101.description = "HAnimJoint l_middle2, HAnimSegment l_middle_middle";
HAnimSegment1100.children = new MFNode();

HAnimSegment1100.children[0] = TouchSensor1101;

let Transform1102 = browser.currentScene.createNode("Transform");
Transform1102.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
let Shape1103 = browser.currentScene.createNode("Shape");
Shape1103.USE = "HAnimJointShape";
Transform1102.children = new MFNode();

Transform1102.children[0] = Shape1103;

HAnimSegment1100.children[1] = Transform1102;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle2'/> to <HAnimJoint name='l_middle3'/>
let Shape1104 = browser.currentScene.createNode("Shape");
let LineSet1105 = browser.currentScene.createNode("LineSet");
LineSet1105.vertexCount = new MFInt32(new int[2]);
let Coordinate1106 = browser.currentScene.createNode("Coordinate");
Coordinate1106.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet1105.coord = Coordinate1106;

let ColorRGBA1107 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1107.USE = "HAnimSegmentLineColorRGBA";
LineSet1105.color = ColorRGBA1107;

Shape1104.geometry = LineSet1105;

HAnimSegment1100.children[2] = Shape1104;

HAnimJoint1099.children = new MFNode();

HAnimJoint1099.children[0] = HAnimSegment1100;

let HAnimJoint1108 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1108.name = "l_middle3";
HAnimJoint1108.DEF = "hanim_l_middle3";
HAnimJoint1108.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint1108.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1109 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1109.name = "l_middle_distal";
HAnimSegment1109.DEF = "hanim_l_middle_distal";
//<HAnimJoint name='l_middle3'/> visualization sphere within <HAnimSegment name='l_middle_distal'/>
let TouchSensor1110 = browser.currentScene.createNode("TouchSensor");
TouchSensor1110.description = "HAnimJoint l_middle3, HAnimSegment l_middle_distal";
HAnimSegment1109.children = new MFNode();

HAnimSegment1109.children[0] = TouchSensor1110;

let Transform1111 = browser.currentScene.createNode("Transform");
Transform1111.translation = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
let Shape1112 = browser.currentScene.createNode("Shape");
Shape1112.USE = "HAnimJointShape";
Transform1111.children = new MFNode();

Transform1111.children[0] = Shape1112;

HAnimSegment1109.children[1] = Transform1111;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_middle3'/> to <HAnimSite name='l_middle_distal_tip'/>
let Shape1113 = browser.currentScene.createNode("Shape");
let LineSet1114 = browser.currentScene.createNode("LineSet");
LineSet1114.vertexCount = new MFInt32(new int[2]);
let Coordinate1115 = browser.currentScene.createNode("Coordinate");
Coordinate1115.point = new MFVec3f(new float[0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491]);
LineSet1114.coord = Coordinate1115;

let ColorRGBA1116 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1116.USE = "HAnimSiteLineColorRGBA";
LineSet1114.color = ColorRGBA1116;

Shape1113.geometry = LineSet1114;

HAnimSegment1109.children[2] = Shape1113;

let HAnimSite1117 = browser.currentScene.createNode("HAnimSite");
HAnimSite1117.name = "l_middle_distal_tip";
HAnimSite1117.DEF = "hanim_l_middle_distal_tip";
HAnimSite1117.translation = new SFVec3f(new float[0.208,0.6731,-0.0491]);
//HAnimSite visualization shape
let TouchSensor1118 = browser.currentScene.createNode("TouchSensor");
TouchSensor1118.description = "HAnimSite l_middle_distal_tip";
HAnimSite1117.children = new MFNode();

HAnimSite1117.children[0] = TouchSensor1118;

let Shape1119 = browser.currentScene.createNode("Shape");
Shape1119.USE = "HAnimSiteShape";
HAnimSite1117.children[1] = Shape1119;

HAnimSegment1109.children[3] = HAnimSite1117;

HAnimJoint1108.children = new MFNode();

HAnimJoint1108.children[0] = HAnimSegment1109;

HAnimJoint1099.children[1] = HAnimJoint1108;

HAnimJoint1090.children[1] = HAnimJoint1099;

HAnimJoint1081.children[1] = HAnimJoint1090;

HAnimJoint949.children[3] = HAnimJoint1081;

let HAnimJoint1120 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1120.name = "l_ring0";
HAnimJoint1120.DEF = "hanim_l_ring0";
HAnimJoint1120.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint1120.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1121 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1121.name = "l_ring_metacarpal";
HAnimSegment1121.DEF = "hanim_l_ring_metacarpal";
//<HAnimJoint name='l_ring0'/> visualization sphere within <HAnimSegment name='l_ring_metacarpal'/>
let TouchSensor1122 = browser.currentScene.createNode("TouchSensor");
TouchSensor1122.description = "HAnimJoint l_ring0, HAnimSegment l_ring_metacarpal";
HAnimSegment1121.children = new MFNode();

HAnimSegment1121.children[0] = TouchSensor1122;

let Transform1123 = browser.currentScene.createNode("Transform");
Transform1123.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
let Shape1124 = browser.currentScene.createNode("Shape");
Shape1124.USE = "HAnimJointShape";
Transform1123.children = new MFNode();

Transform1123.children[0] = Shape1124;

HAnimSegment1121.children[1] = Transform1123;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring0'/> to <HAnimJoint name='l_ring1'/>
let Shape1125 = browser.currentScene.createNode("Shape");
let LineSet1126 = browser.currentScene.createNode("LineSet");
LineSet1126.vertexCount = new MFInt32(new int[2]);
let Coordinate1127 = browser.currentScene.createNode("Coordinate");
Coordinate1127.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet1126.coord = Coordinate1127;

let ColorRGBA1128 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1128.USE = "HAnimSegmentLineColorRGBA";
LineSet1126.color = ColorRGBA1128;

Shape1125.geometry = LineSet1126;

HAnimSegment1121.children[2] = Shape1125;

HAnimJoint1120.children = new MFNode();

HAnimJoint1120.children[0] = HAnimSegment1121;

let HAnimJoint1129 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1129.name = "l_ring1";
HAnimJoint1129.DEF = "hanim_l_ring1";
HAnimJoint1129.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint1129.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1130 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1130.name = "l_ring_proximal";
HAnimSegment1130.DEF = "hanim_l_ring_proximal";
//<HAnimJoint name='l_ring1'/> visualization sphere within <HAnimSegment name='l_ring_proximal'/>
let TouchSensor1131 = browser.currentScene.createNode("TouchSensor");
TouchSensor1131.description = "HAnimJoint l_ring1, HAnimSegment l_ring_proximal";
HAnimSegment1130.children = new MFNode();

HAnimSegment1130.children[0] = TouchSensor1131;

let Transform1132 = browser.currentScene.createNode("Transform");
Transform1132.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
let Shape1133 = browser.currentScene.createNode("Shape");
Shape1133.USE = "HAnimJointShape";
Transform1132.children = new MFNode();

Transform1132.children[0] = Shape1133;

HAnimSegment1130.children[1] = Transform1132;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring1'/> to <HAnimJoint name='l_ring2'/>
let Shape1134 = browser.currentScene.createNode("Shape");
let LineSet1135 = browser.currentScene.createNode("LineSet");
LineSet1135.vertexCount = new MFInt32(new int[2]);
let Coordinate1136 = browser.currentScene.createNode("Coordinate");
Coordinate1136.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet1135.coord = Coordinate1136;

let ColorRGBA1137 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1137.USE = "HAnimSegmentLineColorRGBA";
LineSet1135.color = ColorRGBA1137;

Shape1134.geometry = LineSet1135;

HAnimSegment1130.children[2] = Shape1134;

HAnimJoint1129.children = new MFNode();

HAnimJoint1129.children[0] = HAnimSegment1130;

let HAnimJoint1138 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1138.name = "l_ring2";
HAnimJoint1138.DEF = "hanim_l_ring2";
HAnimJoint1138.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint1138.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1139 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1139.name = "l_ring_middle";
HAnimSegment1139.DEF = "hanim_l_ring_middle";
//<HAnimJoint name='l_ring2'/> visualization sphere within <HAnimSegment name='l_ring_middle'/>
let TouchSensor1140 = browser.currentScene.createNode("TouchSensor");
TouchSensor1140.description = "HAnimJoint l_ring2, HAnimSegment l_ring_middle";
HAnimSegment1139.children = new MFNode();

HAnimSegment1139.children[0] = TouchSensor1140;

let Transform1141 = browser.currentScene.createNode("Transform");
Transform1141.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
let Shape1142 = browser.currentScene.createNode("Shape");
Shape1142.USE = "HAnimJointShape";
Transform1141.children = new MFNode();

Transform1141.children[0] = Shape1142;

HAnimSegment1139.children[1] = Transform1141;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring2'/> to <HAnimJoint name='l_ring3'/>
let Shape1143 = browser.currentScene.createNode("Shape");
let LineSet1144 = browser.currentScene.createNode("LineSet");
LineSet1144.vertexCount = new MFInt32(new int[2]);
let Coordinate1145 = browser.currentScene.createNode("Coordinate");
Coordinate1145.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet1144.coord = Coordinate1145;

let ColorRGBA1146 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1146.USE = "HAnimSegmentLineColorRGBA";
LineSet1144.color = ColorRGBA1146;

Shape1143.geometry = LineSet1144;

HAnimSegment1139.children[2] = Shape1143;

HAnimJoint1138.children = new MFNode();

HAnimJoint1138.children[0] = HAnimSegment1139;

let HAnimJoint1147 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1147.name = "l_ring3";
HAnimJoint1147.DEF = "hanim_l_ring3";
HAnimJoint1147.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint1147.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1148 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1148.name = "l_ring_distal";
HAnimSegment1148.DEF = "hanim_l_ring_distal";
//<HAnimJoint name='l_ring3'/> visualization sphere within <HAnimSegment name='l_ring_distal'/>
let TouchSensor1149 = browser.currentScene.createNode("TouchSensor");
TouchSensor1149.description = "HAnimJoint l_ring3, HAnimSegment l_ring_distal";
HAnimSegment1148.children = new MFNode();

HAnimSegment1148.children[0] = TouchSensor1149;

let Transform1150 = browser.currentScene.createNode("Transform");
Transform1150.translation = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
let Shape1151 = browser.currentScene.createNode("Shape");
Shape1151.USE = "HAnimJointShape";
Transform1150.children = new MFNode();

Transform1150.children[0] = Shape1151;

HAnimSegment1148.children[1] = Transform1150;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ring3'/> to <HAnimSite name='l_ring_distal_tip'/>
let Shape1152 = browser.currentScene.createNode("Shape");
let LineSet1153 = browser.currentScene.createNode("LineSet");
LineSet1153.vertexCount = new MFInt32(new int[2]);
let Coordinate1154 = browser.currentScene.createNode("Coordinate");
Coordinate1154.point = new MFVec3f(new float[0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756]);
LineSet1153.coord = Coordinate1154;

let ColorRGBA1155 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1155.USE = "HAnimSiteLineColorRGBA";
LineSet1153.color = ColorRGBA1155;

Shape1152.geometry = LineSet1153;

HAnimSegment1148.children[2] = Shape1152;

let HAnimSite1156 = browser.currentScene.createNode("HAnimSite");
HAnimSite1156.name = "l_ring_distal_tip";
HAnimSite1156.DEF = "hanim_l_ring_distal_tip";
HAnimSite1156.translation = new SFVec3f(new float[0.2035,0.675,-0.0756]);
//HAnimSite visualization shape
let TouchSensor1157 = browser.currentScene.createNode("TouchSensor");
TouchSensor1157.description = "HAnimSite l_ring_distal_tip";
HAnimSite1156.children = new MFNode();

HAnimSite1156.children[0] = TouchSensor1157;

let Shape1158 = browser.currentScene.createNode("Shape");
Shape1158.USE = "HAnimSiteShape";
HAnimSite1156.children[1] = Shape1158;

HAnimSegment1148.children[3] = HAnimSite1156;

HAnimJoint1147.children = new MFNode();

HAnimJoint1147.children[0] = HAnimSegment1148;

HAnimJoint1138.children[1] = HAnimJoint1147;

HAnimJoint1129.children[1] = HAnimJoint1138;

HAnimJoint1120.children[1] = HAnimJoint1129;

HAnimJoint949.children[4] = HAnimJoint1120;

let HAnimJoint1159 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1159.name = "l_pinky0";
HAnimJoint1159.DEF = "hanim_l_pinky0";
HAnimJoint1159.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint1159.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1160 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1160.name = "l_pinky_metacarpal";
HAnimSegment1160.DEF = "hanim_l_pinky_metacarpal";
//<HAnimJoint name='l_pinky0'/> visualization sphere within <HAnimSegment name='l_pinky_metacarpal'/>
let TouchSensor1161 = browser.currentScene.createNode("TouchSensor");
TouchSensor1161.description = "HAnimJoint l_pinky0, HAnimSegment l_pinky_metacarpal";
HAnimSegment1160.children = new MFNode();

HAnimSegment1160.children[0] = TouchSensor1161;

let Transform1162 = browser.currentScene.createNode("Transform");
Transform1162.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
let Shape1163 = browser.currentScene.createNode("Shape");
Shape1163.USE = "HAnimJointShape";
Transform1162.children = new MFNode();

Transform1162.children[0] = Shape1163;

HAnimSegment1160.children[1] = Transform1162;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky0'/> to <HAnimJoint name='l_pinky1'/>
let Shape1164 = browser.currentScene.createNode("Shape");
let LineSet1165 = browser.currentScene.createNode("LineSet");
LineSet1165.vertexCount = new MFInt32(new int[2]);
let Coordinate1166 = browser.currentScene.createNode("Coordinate");
Coordinate1166.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet1165.coord = Coordinate1166;

let ColorRGBA1167 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1167.USE = "HAnimSegmentLineColorRGBA";
LineSet1165.color = ColorRGBA1167;

Shape1164.geometry = LineSet1165;

HAnimSegment1160.children[2] = Shape1164;

HAnimJoint1159.children = new MFNode();

HAnimJoint1159.children[0] = HAnimSegment1160;

let HAnimJoint1168 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1168.name = "l_pinky1";
HAnimJoint1168.DEF = "hanim_l_pinky1";
HAnimJoint1168.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint1168.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1169 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1169.name = "l_pinky_proximal";
HAnimSegment1169.DEF = "hanim_l_pinky_proximal";
//<HAnimJoint name='l_pinky1'/> visualization sphere within <HAnimSegment name='l_pinky_proximal'/>
let TouchSensor1170 = browser.currentScene.createNode("TouchSensor");
TouchSensor1170.description = "HAnimJoint l_pinky1, HAnimSegment l_pinky_proximal";
HAnimSegment1169.children = new MFNode();

HAnimSegment1169.children[0] = TouchSensor1170;

let Transform1171 = browser.currentScene.createNode("Transform");
Transform1171.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
let Shape1172 = browser.currentScene.createNode("Shape");
Shape1172.USE = "HAnimJointShape";
Transform1171.children = new MFNode();

Transform1171.children[0] = Shape1172;

HAnimSegment1169.children[1] = Transform1171;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky1'/> to <HAnimJoint name='l_pinky2'/>
let Shape1173 = browser.currentScene.createNode("Shape");
let LineSet1174 = browser.currentScene.createNode("LineSet");
LineSet1174.vertexCount = new MFInt32(new int[2]);
let Coordinate1175 = browser.currentScene.createNode("Coordinate");
Coordinate1175.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet1174.coord = Coordinate1175;

let ColorRGBA1176 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1176.USE = "HAnimSegmentLineColorRGBA";
LineSet1174.color = ColorRGBA1176;

Shape1173.geometry = LineSet1174;

HAnimSegment1169.children[2] = Shape1173;

HAnimJoint1168.children = new MFNode();

HAnimJoint1168.children[0] = HAnimSegment1169;

let HAnimJoint1177 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1177.name = "l_pinky2";
HAnimJoint1177.DEF = "hanim_l_pinky2";
HAnimJoint1177.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint1177.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1178 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1178.name = "l_pinky_middle";
HAnimSegment1178.DEF = "hanim_l_pinky_middle";
//<HAnimJoint name='l_pinky2'/> visualization sphere within <HAnimSegment name='l_pinky_middle'/>
let TouchSensor1179 = browser.currentScene.createNode("TouchSensor");
TouchSensor1179.description = "HAnimJoint l_pinky2, HAnimSegment l_pinky_middle";
HAnimSegment1178.children = new MFNode();

HAnimSegment1178.children[0] = TouchSensor1179;

let Transform1180 = browser.currentScene.createNode("Transform");
Transform1180.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
let Shape1181 = browser.currentScene.createNode("Shape");
Shape1181.USE = "HAnimJointShape";
Transform1180.children = new MFNode();

Transform1180.children[0] = Shape1181;

HAnimSegment1178.children[1] = Transform1180;

//HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky2'/> to <HAnimJoint name='l_pinky3'/>
let Shape1182 = browser.currentScene.createNode("Shape");
let LineSet1183 = browser.currentScene.createNode("LineSet");
LineSet1183.vertexCount = new MFInt32(new int[2]);
let Coordinate1184 = browser.currentScene.createNode("Coordinate");
Coordinate1184.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet1183.coord = Coordinate1184;

let ColorRGBA1185 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1185.USE = "HAnimSegmentLineColorRGBA";
LineSet1183.color = ColorRGBA1185;

Shape1182.geometry = LineSet1183;

HAnimSegment1178.children[2] = Shape1182;

HAnimJoint1177.children = new MFNode();

HAnimJoint1177.children[0] = HAnimSegment1178;

let HAnimJoint1186 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1186.name = "l_pinky3";
HAnimJoint1186.DEF = "hanim_l_pinky3";
HAnimJoint1186.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint1186.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1187 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1187.name = "l_pinky_distal";
HAnimSegment1187.DEF = "hanim_l_pinky_distal";
//<HAnimJoint name='l_pinky3'/> visualization sphere within <HAnimSegment name='l_pinky_distal'/>
let TouchSensor1188 = browser.currentScene.createNode("TouchSensor");
TouchSensor1188.description = "HAnimJoint l_pinky3, HAnimSegment l_pinky_distal";
HAnimSegment1187.children = new MFNode();

HAnimSegment1187.children[0] = TouchSensor1188;

let Transform1189 = browser.currentScene.createNode("Transform");
Transform1189.translation = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
let Shape1190 = browser.currentScene.createNode("Shape");
Shape1190.USE = "HAnimJointShape";
Transform1189.children = new MFNode();

Transform1189.children[0] = Shape1190;

HAnimSegment1187.children[1] = Transform1189;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_pinky3'/> to <HAnimSite name='l_pinky_distal_tip'/>
let Shape1191 = browser.currentScene.createNode("Shape");
let LineSet1192 = browser.currentScene.createNode("LineSet");
LineSet1192.vertexCount = new MFInt32(new int[2]);
let Coordinate1193 = browser.currentScene.createNode("Coordinate");
Coordinate1193.point = new MFVec3f(new float[0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012]);
LineSet1192.coord = Coordinate1193;

let ColorRGBA1194 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1194.USE = "HAnimSiteLineColorRGBA";
LineSet1192.color = ColorRGBA1194;

Shape1191.geometry = LineSet1192;

HAnimSegment1187.children[2] = Shape1191;

let HAnimSite1195 = browser.currentScene.createNode("HAnimSite");
HAnimSite1195.name = "l_pinky_distal_tip";
HAnimSite1195.DEF = "hanim_l_pinky_distal_tip";
HAnimSite1195.translation = new SFVec3f(new float[0.2014,0.7009,-0.1012]);
//HAnimSite visualization shape
let TouchSensor1196 = browser.currentScene.createNode("TouchSensor");
TouchSensor1196.description = "HAnimSite l_pinky_distal_tip";
HAnimSite1195.children = new MFNode();

HAnimSite1195.children[0] = TouchSensor1196;

let Shape1197 = browser.currentScene.createNode("Shape");
Shape1197.USE = "HAnimSiteShape";
HAnimSite1195.children[1] = Shape1197;

HAnimSegment1187.children[3] = HAnimSite1195;

HAnimJoint1186.children = new MFNode();

HAnimJoint1186.children[0] = HAnimSegment1187;

HAnimJoint1177.children[1] = HAnimJoint1186;

HAnimJoint1168.children[1] = HAnimJoint1177;

HAnimJoint1159.children[1] = HAnimJoint1168;

HAnimJoint949.children[5] = HAnimJoint1159;

HAnimJoint912.children[1] = HAnimJoint949;

HAnimJoint896.children[1] = HAnimJoint912;

HAnimJoint887.children[1] = HAnimJoint896;

HAnimJoint850.children[1] = HAnimJoint887;

HAnimJoint566.children[2] = HAnimJoint850;

let HAnimJoint1198 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1198.name = "r_sternoclavicular";
HAnimJoint1198.DEF = "hanim_r_sternoclavicular";
HAnimJoint1198.center = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
HAnimJoint1198.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1199 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1199.name = "r_clavicle";
HAnimSegment1199.DEF = "hanim_r_clavicle";
//<HAnimJoint name='r_sternoclavicular'/> visualization sphere within <HAnimSegment name='r_clavicle'/>
let TouchSensor1200 = browser.currentScene.createNode("TouchSensor");
TouchSensor1200.description = "HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle";
HAnimSegment1199.children = new MFNode();

HAnimSegment1199.children[0] = TouchSensor1200;

let Transform1201 = browser.currentScene.createNode("Transform");
Transform1201.translation = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
let Shape1202 = browser.currentScene.createNode("Shape");
Shape1202.USE = "HAnimJointShape";
Transform1201.children = new MFNode();

Transform1201.children[0] = Shape1202;

HAnimSegment1199.children[1] = Transform1201;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_sternoclavicular'/> to <HAnimJoint name='r_acromioclavicular'/>
let Shape1203 = browser.currentScene.createNode("Shape");
let LineSet1204 = browser.currentScene.createNode("LineSet");
LineSet1204.vertexCount = new MFInt32(new int[2]);
let Coordinate1205 = browser.currentScene.createNode("Coordinate");
Coordinate1205.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424]);
LineSet1204.coord = Coordinate1205;

let ColorRGBA1206 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1206.USE = "HAnimSegmentLineColorRGBA";
LineSet1204.color = ColorRGBA1206;

Shape1203.geometry = LineSet1204;

HAnimSegment1199.children[2] = Shape1203;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_clavicale'/>
let Shape1207 = browser.currentScene.createNode("Shape");
let LineSet1208 = browser.currentScene.createNode("LineSet");
LineSet1208.vertexCount = new MFInt32(new int[2]);
let Coordinate1209 = browser.currentScene.createNode("Coordinate");
Coordinate1209.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04]);
LineSet1208.coord = Coordinate1209;

let ColorRGBA1210 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1210.USE = "HAnimSiteLineColorRGBA";
LineSet1208.color = ColorRGBA1210;

Shape1207.geometry = LineSet1208;

HAnimSegment1199.children[3] = Shape1207;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_acromion'/>
let Shape1211 = browser.currentScene.createNode("Shape");
let LineSet1212 = browser.currentScene.createNode("LineSet");
LineSet1212.vertexCount = new MFInt32(new int[2]);
let Coordinate1213 = browser.currentScene.createNode("Coordinate");
Coordinate1213.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431]);
LineSet1212.coord = Coordinate1213;

let ColorRGBA1214 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1214.USE = "HAnimSiteLineColorRGBA";
LineSet1212.color = ColorRGBA1214;

Shape1211.geometry = LineSet1212;

HAnimSegment1199.children[4] = Shape1211;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_ant'/>
let Shape1215 = browser.currentScene.createNode("Shape");
let LineSet1216 = browser.currentScene.createNode("LineSet");
LineSet1216.vertexCount = new MFInt32(new int[2]);
let Coordinate1217 = browser.currentScene.createNode("Coordinate");
Coordinate1217.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031]);
LineSet1216.coord = Coordinate1217;

let ColorRGBA1218 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1218.USE = "HAnimSiteLineColorRGBA";
LineSet1216.color = ColorRGBA1218;

Shape1215.geometry = LineSet1216;

HAnimSegment1199.children[5] = Shape1215;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_post'/>
let Shape1219 = browser.currentScene.createNode("Shape");
let LineSet1220 = browser.currentScene.createNode("LineSet");
LineSet1220.vertexCount = new MFInt32(new int[2]);
let Coordinate1221 = browser.currentScene.createNode("Coordinate");
Coordinate1221.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826]);
LineSet1220.coord = Coordinate1221;

let ColorRGBA1222 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1222.USE = "HAnimSiteLineColorRGBA";
LineSet1220.color = ColorRGBA1222;

Shape1219.geometry = LineSet1220;

HAnimSegment1199.children[6] = Shape1219;

let HAnimSite1223 = browser.currentScene.createNode("HAnimSite");
HAnimSite1223.name = "r_clavicale_pt";
HAnimSite1223.DEF = "hanim_r_clavicale_pt";
HAnimSite1223.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
//HAnimSite visualization shape
let TouchSensor1224 = browser.currentScene.createNode("TouchSensor");
TouchSensor1224.description = "HAnimSite r_clavicale";
HAnimSite1223.children = new MFNode();

HAnimSite1223.children[0] = TouchSensor1224;

let Shape1225 = browser.currentScene.createNode("Shape");
Shape1225.USE = "HAnimSiteShape";
HAnimSite1223.children[1] = Shape1225;

HAnimSegment1199.children[7] = HAnimSite1223;

let HAnimSite1226 = browser.currentScene.createNode("HAnimSite");
HAnimSite1226.name = "r_acromion_pt";
HAnimSite1226.DEF = "hanim_r_acromion_pt";
HAnimSite1226.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
//HAnimSite visualization shape
let TouchSensor1227 = browser.currentScene.createNode("TouchSensor");
TouchSensor1227.description = "HAnimSite r_acromion";
HAnimSite1226.children = new MFNode();

HAnimSite1226.children[0] = TouchSensor1227;

let Shape1228 = browser.currentScene.createNode("Shape");
Shape1228.USE = "HAnimSiteShape";
HAnimSite1226.children[1] = Shape1228;

HAnimSegment1199.children[8] = HAnimSite1226;

let HAnimSite1229 = browser.currentScene.createNode("HAnimSite");
HAnimSite1229.name = "r_axilla_ant_pt";
HAnimSite1229.DEF = "hanim_r_axilla_ant_pt";
HAnimSite1229.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
//HAnimSite visualization shape
let TouchSensor1230 = browser.currentScene.createNode("TouchSensor");
TouchSensor1230.description = "HAnimSite r_axilla_ant";
HAnimSite1229.children = new MFNode();

HAnimSite1229.children[0] = TouchSensor1230;

let Shape1231 = browser.currentScene.createNode("Shape");
Shape1231.USE = "HAnimSiteShape";
HAnimSite1229.children[1] = Shape1231;

HAnimSegment1199.children[9] = HAnimSite1229;

let HAnimSite1232 = browser.currentScene.createNode("HAnimSite");
HAnimSite1232.name = "r_axilla_post_pt";
HAnimSite1232.DEF = "hanim_r_axilla_post_pt";
HAnimSite1232.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
//HAnimSite visualization shape
let TouchSensor1233 = browser.currentScene.createNode("TouchSensor");
TouchSensor1233.description = "HAnimSite r_axilla_post";
HAnimSite1232.children = new MFNode();

HAnimSite1232.children[0] = TouchSensor1233;

let Shape1234 = browser.currentScene.createNode("Shape");
Shape1234.USE = "HAnimSiteShape";
HAnimSite1232.children[1] = Shape1234;

HAnimSegment1199.children[10] = HAnimSite1232;

HAnimJoint1198.children = new MFNode();

HAnimJoint1198.children[0] = HAnimSegment1199;

let HAnimJoint1235 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1235.name = "r_acromioclavicular";
HAnimJoint1235.DEF = "hanim_r_acromioclavicular";
HAnimJoint1235.center = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
HAnimJoint1235.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1236 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1236.name = "r_scapula";
HAnimSegment1236.DEF = "hanim_r_scapula";
//<HAnimJoint name='r_acromioclavicular'/> visualization sphere within <HAnimSegment name='r_scapula'/>
let TouchSensor1237 = browser.currentScene.createNode("TouchSensor");
TouchSensor1237.description = "HAnimJoint r_acromioclavicular, HAnimSegment r_scapula";
HAnimSegment1236.children = new MFNode();

HAnimSegment1236.children[0] = TouchSensor1237;

let Transform1238 = browser.currentScene.createNode("Transform");
Transform1238.translation = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
let Shape1239 = browser.currentScene.createNode("Shape");
Shape1239.USE = "HAnimJointShape";
Transform1238.children = new MFNode();

Transform1238.children[0] = Shape1239;

HAnimSegment1236.children[1] = Transform1238;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_acromioclavicular'/> to <HAnimJoint name='r_shoulder'/>
let Shape1240 = browser.currentScene.createNode("Shape");
let LineSet1241 = browser.currentScene.createNode("LineSet");
LineSet1241.vertexCount = new MFInt32(new int[2]);
let Coordinate1242 = browser.currentScene.createNode("Coordinate");
Coordinate1242.point = new MFVec3f(new float[-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387]);
LineSet1241.coord = Coordinate1242;

let ColorRGBA1243 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1243.USE = "HAnimSegmentLineColorRGBA";
LineSet1241.color = ColorRGBA1243;

Shape1240.geometry = LineSet1241;

HAnimSegment1236.children[2] = Shape1240;

HAnimJoint1235.children = new MFNode();

HAnimJoint1235.children[0] = HAnimSegment1236;

let HAnimJoint1244 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1244.name = "r_shoulder";
HAnimJoint1244.DEF = "hanim_r_shoulder";
HAnimJoint1244.center = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
HAnimJoint1244.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1245 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1245.name = "r_upperarm";
HAnimSegment1245.DEF = "hanim_r_upperarm";
//<HAnimJoint name='r_shoulder'/> visualization sphere within <HAnimSegment name='r_upperarm'/>
let TouchSensor1246 = browser.currentScene.createNode("TouchSensor");
TouchSensor1246.description = "HAnimJoint r_shoulder, HAnimSegment r_upperarm";
HAnimSegment1245.children = new MFNode();

HAnimSegment1245.children[0] = TouchSensor1246;

let Transform1247 = browser.currentScene.createNode("Transform");
Transform1247.translation = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
let Shape1248 = browser.currentScene.createNode("Shape");
Shape1248.USE = "HAnimJointShape";
Transform1247.children = new MFNode();

Transform1247.children[0] = Shape1248;

HAnimSegment1245.children[1] = Transform1247;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_shoulder'/> to <HAnimJoint name='r_elbow'/>
let Shape1249 = browser.currentScene.createNode("Shape");
let LineSet1250 = browser.currentScene.createNode("LineSet");
LineSet1250.vertexCount = new MFInt32(new int[2]);
let Coordinate1251 = browser.currentScene.createNode("Coordinate");
Coordinate1251.point = new MFVec3f(new float[-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682]);
LineSet1250.coord = Coordinate1251;

let ColorRGBA1252 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1252.USE = "HAnimSegmentLineColorRGBA";
LineSet1250.color = ColorRGBA1252;

Shape1249.geometry = LineSet1250;

HAnimSegment1245.children[2] = Shape1249;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_shoulder'/> to <HAnimSite name='r_humeral_lateral_epicn'/>
let Shape1253 = browser.currentScene.createNode("Shape");
let LineSet1254 = browser.currentScene.createNode("LineSet");
LineSet1254.vertexCount = new MFInt32(new int[2]);
let Coordinate1255 = browser.currentScene.createNode("Coordinate");
Coordinate1255.point = new MFVec3f(new float[-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033]);
LineSet1254.coord = Coordinate1255;

let ColorRGBA1256 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1256.USE = "HAnimSiteLineColorRGBA";
LineSet1254.color = ColorRGBA1256;

Shape1253.geometry = LineSet1254;

HAnimSegment1245.children[3] = Shape1253;

let HAnimSite1257 = browser.currentScene.createNode("HAnimSite");
HAnimSite1257.name = "r_humeral_lateral_epicn_pt";
HAnimSite1257.DEF = "hanim_r_humeral_lateral_epicn_pt";
HAnimSite1257.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
//HAnimSite visualization shape
let TouchSensor1258 = browser.currentScene.createNode("TouchSensor");
TouchSensor1258.description = "HAnimSite r_humeral_lateral_epicn";
HAnimSite1257.children = new MFNode();

HAnimSite1257.children[0] = TouchSensor1258;

let Shape1259 = browser.currentScene.createNode("Shape");
Shape1259.USE = "HAnimSiteShape";
HAnimSite1257.children[1] = Shape1259;

HAnimSegment1245.children[4] = HAnimSite1257;

HAnimJoint1244.children = new MFNode();

HAnimJoint1244.children[0] = HAnimSegment1245;

let HAnimJoint1260 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1260.name = "r_elbow";
HAnimJoint1260.DEF = "hanim_r_elbow";
HAnimJoint1260.center = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
HAnimJoint1260.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1261 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1261.name = "r_forearm";
HAnimSegment1261.DEF = "hanim_r_forearm";
//<HAnimJoint name='r_elbow'/> visualization sphere within <HAnimSegment name='r_forearm'/>
let TouchSensor1262 = browser.currentScene.createNode("TouchSensor");
TouchSensor1262.description = "HAnimJoint r_elbow, HAnimSegment r_forearm";
HAnimSegment1261.children = new MFNode();

HAnimSegment1261.children[0] = TouchSensor1262;

let Transform1263 = browser.currentScene.createNode("Transform");
Transform1263.translation = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
let Shape1264 = browser.currentScene.createNode("Shape");
Shape1264.USE = "HAnimJointShape";
Transform1263.children = new MFNode();

Transform1263.children[0] = Shape1264;

HAnimSegment1261.children[1] = Transform1263;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_elbow'/> to <HAnimJoint name='r_wrist'/>
let Shape1265 = browser.currentScene.createNode("Shape");
let LineSet1266 = browser.currentScene.createNode("LineSet");
LineSet1266.vertexCount = new MFInt32(new int[2]);
let Coordinate1267 = browser.currentScene.createNode("Coordinate");
Coordinate1267.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583]);
LineSet1266.coord = Coordinate1267;

let ColorRGBA1268 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1268.USE = "HAnimSegmentLineColorRGBA";
LineSet1266.color = ColorRGBA1268;

Shape1265.geometry = LineSet1266;

HAnimSegment1261.children[2] = Shape1265;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radial_styloid'/>
let Shape1269 = browser.currentScene.createNode("Shape");
let LineSet1270 = browser.currentScene.createNode("LineSet");
LineSet1270.vertexCount = new MFInt32(new int[2]);
let Coordinate1271 = browser.currentScene.createNode("Coordinate");
Coordinate1271.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036]);
LineSet1270.coord = Coordinate1271;

let ColorRGBA1272 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1272.USE = "HAnimSiteLineColorRGBA";
LineSet1270.color = ColorRGBA1272;

Shape1269.geometry = LineSet1270;

HAnimSegment1261.children[3] = Shape1269;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_olecranon'/>
let Shape1273 = browser.currentScene.createNode("Shape");
let LineSet1274 = browser.currentScene.createNode("LineSet");
LineSet1274.vertexCount = new MFInt32(new int[2]);
let Coordinate1275 = browser.currentScene.createNode("Coordinate");
Coordinate1275.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065]);
LineSet1274.coord = Coordinate1275;

let ColorRGBA1276 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1276.USE = "HAnimSiteLineColorRGBA";
LineSet1274.color = ColorRGBA1276;

Shape1273.geometry = LineSet1274;

HAnimSegment1261.children[4] = Shape1273;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_humeral_medial_epicn'/>
let Shape1277 = browser.currentScene.createNode("Shape");
let LineSet1278 = browser.currentScene.createNode("LineSet");
LineSet1278.vertexCount = new MFInt32(new int[2]);
let Coordinate1279 = browser.currentScene.createNode("Coordinate");
Coordinate1279.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062]);
LineSet1278.coord = Coordinate1279;

let ColorRGBA1280 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1280.USE = "HAnimSiteLineColorRGBA";
LineSet1278.color = ColorRGBA1280;

Shape1277.geometry = LineSet1278;

HAnimSegment1261.children[5] = Shape1277;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radiale'/>
let Shape1281 = browser.currentScene.createNode("Shape");
let LineSet1282 = browser.currentScene.createNode("LineSet");
LineSet1282.vertexCount = new MFInt32(new int[2]);
let Coordinate1283 = browser.currentScene.createNode("Coordinate");
Coordinate1283.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091]);
LineSet1282.coord = Coordinate1283;

let ColorRGBA1284 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1284.USE = "HAnimSiteLineColorRGBA";
LineSet1282.color = ColorRGBA1284;

Shape1281.geometry = LineSet1282;

HAnimSegment1261.children[6] = Shape1281;

let HAnimSite1285 = browser.currentScene.createNode("HAnimSite");
HAnimSite1285.name = "r_radial_styloid_pt";
HAnimSite1285.DEF = "hanim_r_radial_styloid_pt";
HAnimSite1285.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
//HAnimSite visualization shape
let TouchSensor1286 = browser.currentScene.createNode("TouchSensor");
TouchSensor1286.description = "HAnimSite r_radial_styloid";
HAnimSite1285.children = new MFNode();

HAnimSite1285.children[0] = TouchSensor1286;

let Shape1287 = browser.currentScene.createNode("Shape");
Shape1287.USE = "HAnimSiteShape";
HAnimSite1285.children[1] = Shape1287;

HAnimSegment1261.children[7] = HAnimSite1285;

let HAnimSite1288 = browser.currentScene.createNode("HAnimSite");
HAnimSite1288.name = "r_olecranon_pt";
HAnimSite1288.DEF = "hanim_r_olecranon_pt";
HAnimSite1288.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
//HAnimSite visualization shape
let TouchSensor1289 = browser.currentScene.createNode("TouchSensor");
TouchSensor1289.description = "HAnimSite r_olecranon";
HAnimSite1288.children = new MFNode();

HAnimSite1288.children[0] = TouchSensor1289;

let Shape1290 = browser.currentScene.createNode("Shape");
Shape1290.USE = "HAnimSiteShape";
HAnimSite1288.children[1] = Shape1290;

HAnimSegment1261.children[8] = HAnimSite1288;

let HAnimSite1291 = browser.currentScene.createNode("HAnimSite");
HAnimSite1291.name = "r_humeral_medial_epicn_pt";
HAnimSite1291.DEF = "hanim_r_humeral_medial_epicn_pt";
HAnimSite1291.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
//HAnimSite visualization shape
let TouchSensor1292 = browser.currentScene.createNode("TouchSensor");
TouchSensor1292.description = "HAnimSite r_humeral_medial_epicn";
HAnimSite1291.children = new MFNode();

HAnimSite1291.children[0] = TouchSensor1292;

let Shape1293 = browser.currentScene.createNode("Shape");
Shape1293.USE = "HAnimSiteShape";
HAnimSite1291.children[1] = Shape1293;

HAnimSegment1261.children[9] = HAnimSite1291;

let HAnimSite1294 = browser.currentScene.createNode("HAnimSite");
HAnimSite1294.name = "r_radiale_pt";
HAnimSite1294.DEF = "hanim_r_radiale_pt";
HAnimSite1294.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
//HAnimSite visualization shape
let TouchSensor1295 = browser.currentScene.createNode("TouchSensor");
TouchSensor1295.description = "HAnimSite r_radiale";
HAnimSite1294.children = new MFNode();

HAnimSite1294.children[0] = TouchSensor1295;

let Shape1296 = browser.currentScene.createNode("Shape");
Shape1296.USE = "HAnimSiteShape";
HAnimSite1294.children[1] = Shape1296;

HAnimSegment1261.children[10] = HAnimSite1294;

HAnimJoint1260.children = new MFNode();

HAnimJoint1260.children[0] = HAnimSegment1261;

let HAnimJoint1297 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1297.name = "r_wrist";
HAnimJoint1297.DEF = "hanim_r_wrist";
HAnimJoint1297.center = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
HAnimJoint1297.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1298 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1298.name = "r_hand";
HAnimSegment1298.DEF = "hanim_r_hand";
//<HAnimJoint name='r_wrist'/> visualization sphere within <HAnimSegment name='r_hand'/>
let TouchSensor1299 = browser.currentScene.createNode("TouchSensor");
TouchSensor1299.description = "HAnimJoint r_wrist, HAnimSegment r_hand";
HAnimSegment1298.children = new MFNode();

HAnimSegment1298.children[0] = TouchSensor1299;

let Transform1300 = browser.currentScene.createNode("Transform");
Transform1300.translation = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
let Shape1301 = browser.currentScene.createNode("Shape");
Shape1301.USE = "HAnimJointShape";
Transform1300.children = new MFNode();

Transform1300.children[0] = Shape1301;

HAnimSegment1298.children[1] = Transform1300;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_thumb1'/>
let Shape1302 = browser.currentScene.createNode("Shape");
let LineSet1303 = browser.currentScene.createNode("LineSet");
LineSet1303.vertexCount = new MFInt32(new int[2]);
let Coordinate1304 = browser.currentScene.createNode("Coordinate");
Coordinate1304.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534]);
LineSet1303.coord = Coordinate1304;

let ColorRGBA1305 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1305.USE = "HAnimSegmentLineColorRGBA";
LineSet1303.color = ColorRGBA1305;

Shape1302.geometry = LineSet1303;

HAnimSegment1298.children[2] = Shape1302;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_index0'/>
let Shape1306 = browser.currentScene.createNode("Shape");
let LineSet1307 = browser.currentScene.createNode("LineSet");
LineSet1307.vertexCount = new MFInt32(new int[2]);
let Coordinate1308 = browser.currentScene.createNode("Coordinate");
Coordinate1308.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028]);
LineSet1307.coord = Coordinate1308;

let ColorRGBA1309 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1309.USE = "HAnimSegmentLineColorRGBA";
LineSet1307.color = ColorRGBA1309;

Shape1306.geometry = LineSet1307;

HAnimSegment1298.children[3] = Shape1306;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_middle0'/>
let Shape1310 = browser.currentScene.createNode("Shape");
let LineSet1311 = browser.currentScene.createNode("LineSet");
LineSet1311.vertexCount = new MFInt32(new int[2]);
let Coordinate1312 = browser.currentScene.createNode("Coordinate");
Coordinate1312.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053]);
LineSet1311.coord = Coordinate1312;

let ColorRGBA1313 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1313.USE = "HAnimSegmentLineColorRGBA";
LineSet1311.color = ColorRGBA1313;

Shape1310.geometry = LineSet1311;

HAnimSegment1298.children[4] = Shape1310;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_ring0'/>
let Shape1314 = browser.currentScene.createNode("Shape");
let LineSet1315 = browser.currentScene.createNode("LineSet");
LineSet1315.vertexCount = new MFInt32(new int[2]);
let Coordinate1316 = browser.currentScene.createNode("Coordinate");
Coordinate1316.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794]);
LineSet1315.coord = Coordinate1316;

let ColorRGBA1317 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1317.USE = "HAnimSegmentLineColorRGBA";
LineSet1315.color = ColorRGBA1317;

Shape1314.geometry = LineSet1315;

HAnimSegment1298.children[5] = Shape1314;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_pinky0'/>
let Shape1318 = browser.currentScene.createNode("Shape");
let LineSet1319 = browser.currentScene.createNode("LineSet");
LineSet1319.vertexCount = new MFInt32(new int[2]);
let Coordinate1320 = browser.currentScene.createNode("Coordinate");
Coordinate1320.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036]);
LineSet1319.coord = Coordinate1320;

let ColorRGBA1321 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1321.USE = "HAnimSegmentLineColorRGBA";
LineSet1319.color = ColorRGBA1321;

Shape1318.geometry = LineSet1319;

HAnimSegment1298.children[6] = Shape1318;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha2'/>
let Shape1322 = browser.currentScene.createNode("Shape");
let LineSet1323 = browser.currentScene.createNode("LineSet");
LineSet1323.vertexCount = new MFInt32(new int[2]);
let Coordinate1324 = browser.currentScene.createNode("Coordinate");
Coordinate1324.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177]);
LineSet1323.coord = Coordinate1324;

let ColorRGBA1325 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1325.USE = "HAnimSiteLineColorRGBA";
LineSet1323.color = ColorRGBA1325;

Shape1322.geometry = LineSet1323;

HAnimSegment1298.children[7] = Shape1322;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_ulnar_styloid'/>
let Shape1326 = browser.currentScene.createNode("Shape");
let LineSet1327 = browser.currentScene.createNode("LineSet");
LineSet1327.vertexCount = new MFInt32(new int[2]);
let Coordinate1328 = browser.currentScene.createNode("Coordinate");
Coordinate1328.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584]);
LineSet1327.coord = Coordinate1328;

let ColorRGBA1329 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1329.USE = "HAnimSiteLineColorRGBA";
LineSet1327.color = ColorRGBA1329;

Shape1326.geometry = LineSet1327;

HAnimSegment1298.children[8] = Shape1326;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha5'/>
let Shape1330 = browser.currentScene.createNode("Shape");
let LineSet1331 = browser.currentScene.createNode("LineSet");
LineSet1331.vertexCount = new MFInt32(new int[2]);
let Coordinate1332 = browser.currentScene.createNode("Coordinate");
Coordinate1332.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064]);
LineSet1331.coord = Coordinate1332;

let ColorRGBA1333 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1333.USE = "HAnimSiteLineColorRGBA";
LineSet1331.color = ColorRGBA1333;

Shape1330.geometry = LineSet1331;

HAnimSegment1298.children[9] = Shape1330;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_hand_front_view'/>
let Shape1334 = browser.currentScene.createNode("Shape");
let LineSet1335 = browser.currentScene.createNode("LineSet");
LineSet1335.vertexCount = new MFInt32(new int[2]);
let Coordinate1336 = browser.currentScene.createNode("Coordinate");
Coordinate1336.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.3,0.75,0.45]);
LineSet1335.coord = Coordinate1336;

let ColorRGBA1337 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1337.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet1335.color = ColorRGBA1337;

Shape1334.geometry = LineSet1335;

HAnimSegment1298.children[10] = Shape1334;

let HAnimSite1338 = browser.currentScene.createNode("HAnimSite");
HAnimSite1338.name = "r_metacarpal_pha2_pt";
HAnimSite1338.DEF = "hanim_r_metacarpal_pha2_pt";
HAnimSite1338.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
//HAnimSite visualization shape
let TouchSensor1339 = browser.currentScene.createNode("TouchSensor");
TouchSensor1339.description = "HAnimSite r_metacarpal_pha2";
HAnimSite1338.children = new MFNode();

HAnimSite1338.children[0] = TouchSensor1339;

let Shape1340 = browser.currentScene.createNode("Shape");
Shape1340.USE = "HAnimSiteShape";
HAnimSite1338.children[1] = Shape1340;

HAnimSegment1298.children[11] = HAnimSite1338;

let HAnimSite1341 = browser.currentScene.createNode("HAnimSite");
HAnimSite1341.name = "r_ulnar_styloid_pt";
HAnimSite1341.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite1341.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
//HAnimSite visualization shape
let TouchSensor1342 = browser.currentScene.createNode("TouchSensor");
TouchSensor1342.description = "HAnimSite r_ulnar_styloid";
HAnimSite1341.children = new MFNode();

HAnimSite1341.children[0] = TouchSensor1342;

let Shape1343 = browser.currentScene.createNode("Shape");
Shape1343.USE = "HAnimSiteShape";
HAnimSite1341.children[1] = Shape1343;

HAnimSegment1298.children[12] = HAnimSite1341;

let HAnimSite1344 = browser.currentScene.createNode("HAnimSite");
HAnimSite1344.name = "r_metacarpal_pha5_pt";
HAnimSite1344.DEF = "hanim_r_metacarpal_pha5_pt";
HAnimSite1344.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
//HAnimSite visualization shape
let TouchSensor1345 = browser.currentScene.createNode("TouchSensor");
TouchSensor1345.description = "HAnimSite r_metacarpal_pha5";
HAnimSite1344.children = new MFNode();

HAnimSite1344.children[0] = TouchSensor1345;

let Shape1346 = browser.currentScene.createNode("Shape");
Shape1346.USE = "HAnimSiteShape";
HAnimSite1344.children[1] = Shape1346;

HAnimSegment1298.children[13] = HAnimSite1344;

let HAnimSite1347 = browser.currentScene.createNode("HAnimSite");
HAnimSite1347.name = "r_hand_front_view";
HAnimSite1347.DEF = "hanim_r_hand_front_view";
HAnimSite1347.translation = new SFVec3f(new float[-0.3,0.75,0.45]);
let Viewpoint1348 = browser.currentScene.createNode("Viewpoint");
Viewpoint1348.DEF = "hanim_r_hand_front_viewpoint";
Viewpoint1348.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint1348.description = "right hand front";
Viewpoint1348.position = new SFVec3f(new float[0,0,0]);
HAnimSite1347.children = new MFNode();

HAnimSite1347.children[0] = Viewpoint1348;

//HAnimSite/Viewpoint visualization shape
let Anchor1349 = browser.currentScene.createNode("Anchor");
Anchor1349.description = "HAnimSite Viewpoint hanim_r_hand_front_view";
Anchor1349.url = new MFString(new java.lang.String["#hanim_r_hand_front_viewpoint"]);
let LOD1350 = browser.currentScene.createNode("LOD");
LOD1350.forceTransitions = True;
LOD1350.range = new MFFloat(new float[0.04]);
let WorldInfo1351 = browser.currentScene.createNode("WorldInfo");
WorldInfo1351.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1350.children = new MFNode();

LOD1350.children[0] = WorldInfo1351;

let Shape1352 = browser.currentScene.createNode("Shape");
Shape1352.USE = "HAnimSiteViewpointShape";
LOD1350.children[1] = Shape1352;

Anchor1349.children = new MFNode();

Anchor1349.children[0] = LOD1350;

HAnimSite1347.children[1] = Anchor1349;

HAnimSegment1298.children[14] = HAnimSite1347;

HAnimJoint1297.children = new MFNode();

HAnimJoint1297.children[0] = HAnimSegment1298;

let HAnimJoint1353 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1353.name = "r_thumb1";
HAnimJoint1353.DEF = "hanim_r_thumb1";
HAnimJoint1353.center = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
HAnimJoint1353.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1354 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1354.name = "r_thumb_metacarpal";
HAnimSegment1354.DEF = "hanim_r_thumb_metacarpal";
//<HAnimJoint name='r_thumb1'/> visualization sphere within <HAnimSegment name='r_thumb_metacarpal'/>
let TouchSensor1355 = browser.currentScene.createNode("TouchSensor");
TouchSensor1355.description = "HAnimJoint r_thumb1, HAnimSegment r_thumb_metacarpal";
HAnimSegment1354.children = new MFNode();

HAnimSegment1354.children[0] = TouchSensor1355;

let Transform1356 = browser.currentScene.createNode("Transform");
Transform1356.translation = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
let Shape1357 = browser.currentScene.createNode("Shape");
Shape1357.USE = "HAnimJointShape";
Transform1356.children = new MFNode();

Transform1356.children[0] = Shape1357;

HAnimSegment1354.children[1] = Transform1356;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb1'/> to <HAnimJoint name='r_thumb2'/>
let Shape1358 = browser.currentScene.createNode("Shape");
let LineSet1359 = browser.currentScene.createNode("LineSet");
LineSet1359.vertexCount = new MFInt32(new int[2]);
let Coordinate1360 = browser.currentScene.createNode("Coordinate");
Coordinate1360.point = new MFVec3f(new float[-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246]);
LineSet1359.coord = Coordinate1360;

let ColorRGBA1361 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1361.USE = "HAnimSegmentLineColorRGBA";
LineSet1359.color = ColorRGBA1361;

Shape1358.geometry = LineSet1359;

HAnimSegment1354.children[2] = Shape1358;

HAnimJoint1353.children = new MFNode();

HAnimJoint1353.children[0] = HAnimSegment1354;

let HAnimJoint1362 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1362.name = "r_thumb2";
HAnimJoint1362.DEF = "hanim_r_thumb2";
HAnimJoint1362.center = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
HAnimJoint1362.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1363 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1363.name = "r_thumb_proximal";
HAnimSegment1363.DEF = "hanim_r_thumb_proximal";
//<HAnimJoint name='r_thumb2'/> visualization sphere within <HAnimSegment name='r_thumb_proximal'/>
let TouchSensor1364 = browser.currentScene.createNode("TouchSensor");
TouchSensor1364.description = "HAnimJoint r_thumb2, HAnimSegment r_thumb_proximal";
HAnimSegment1363.children = new MFNode();

HAnimSegment1363.children[0] = TouchSensor1364;

let Transform1365 = browser.currentScene.createNode("Transform");
Transform1365.translation = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
let Shape1366 = browser.currentScene.createNode("Shape");
Shape1366.USE = "HAnimJointShape";
Transform1365.children = new MFNode();

Transform1365.children[0] = Shape1366;

HAnimSegment1363.children[1] = Transform1365;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb2'/> to <HAnimJoint name='r_thumb3'/>
let Shape1367 = browser.currentScene.createNode("Shape");
let LineSet1368 = browser.currentScene.createNode("LineSet");
LineSet1368.vertexCount = new MFInt32(new int[2]);
let Coordinate1369 = browser.currentScene.createNode("Coordinate");
Coordinate1369.point = new MFVec3f(new float[-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464]);
LineSet1368.coord = Coordinate1369;

let ColorRGBA1370 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1370.USE = "HAnimSegmentLineColorRGBA";
LineSet1368.color = ColorRGBA1370;

Shape1367.geometry = LineSet1368;

HAnimSegment1363.children[2] = Shape1367;

HAnimJoint1362.children = new MFNode();

HAnimJoint1362.children[0] = HAnimSegment1363;

let HAnimJoint1371 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1371.name = "r_thumb3";
HAnimJoint1371.DEF = "hanim_r_thumb3";
HAnimJoint1371.center = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
HAnimJoint1371.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1372 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1372.name = "r_thumb_distal";
HAnimSegment1372.DEF = "hanim_r_thumb_distal";
//<HAnimJoint name='r_thumb3'/> visualization sphere within <HAnimSegment name='r_thumb_distal'/>
let TouchSensor1373 = browser.currentScene.createNode("TouchSensor");
TouchSensor1373.description = "HAnimJoint r_thumb3, HAnimSegment r_thumb_distal";
HAnimSegment1372.children = new MFNode();

HAnimSegment1372.children[0] = TouchSensor1373;

let Transform1374 = browser.currentScene.createNode("Transform");
Transform1374.translation = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
let Shape1375 = browser.currentScene.createNode("Shape");
Shape1375.USE = "HAnimJointShape";
Transform1374.children = new MFNode();

Transform1374.children[0] = Shape1375;

HAnimSegment1372.children[1] = Transform1374;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_thumb3'/> to <HAnimSite name='r_thumb_distal_tip'/>
let Shape1376 = browser.currentScene.createNode("Shape");
let LineSet1377 = browser.currentScene.createNode("LineSet");
LineSet1377.vertexCount = new MFInt32(new int[2]);
let Coordinate1378 = browser.currentScene.createNode("Coordinate");
Coordinate1378.point = new MFVec3f(new float[-0.1955,0.8159,0.0464,-0.1869,0.809,0.082]);
LineSet1377.coord = Coordinate1378;

let ColorRGBA1379 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1379.USE = "HAnimSiteLineColorRGBA";
LineSet1377.color = ColorRGBA1379;

Shape1376.geometry = LineSet1377;

HAnimSegment1372.children[2] = Shape1376;

let HAnimSite1380 = browser.currentScene.createNode("HAnimSite");
HAnimSite1380.name = "r_thumb_distal_tip";
HAnimSite1380.DEF = "hanim_r_thumb_distal_tip";
HAnimSite1380.translation = new SFVec3f(new float[-0.1869,0.809,0.082]);
//HAnimSite visualization shape
let TouchSensor1381 = browser.currentScene.createNode("TouchSensor");
TouchSensor1381.description = "HAnimSite r_thumb_distal_tip";
HAnimSite1380.children = new MFNode();

HAnimSite1380.children[0] = TouchSensor1381;

let Shape1382 = browser.currentScene.createNode("Shape");
Shape1382.USE = "HAnimSiteShape";
HAnimSite1380.children[1] = Shape1382;

HAnimSegment1372.children[3] = HAnimSite1380;

HAnimJoint1371.children = new MFNode();

HAnimJoint1371.children[0] = HAnimSegment1372;

HAnimJoint1362.children[1] = HAnimJoint1371;

HAnimJoint1353.children[1] = HAnimJoint1362;

HAnimJoint1297.children[1] = HAnimJoint1353;

let HAnimJoint1383 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1383.name = "r_index0";
HAnimJoint1383.DEF = "hanim_r_index0";
HAnimJoint1383.center = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
HAnimJoint1383.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1384 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1384.name = "r_index_metacarpal";
HAnimSegment1384.DEF = "hanim_r_index_metacarpal";
//<HAnimJoint name='r_index0'/> visualization sphere within <HAnimSegment name='r_index_metacarpal'/>
let TouchSensor1385 = browser.currentScene.createNode("TouchSensor");
TouchSensor1385.description = "HAnimJoint r_index0, HAnimSegment r_index_metacarpal";
HAnimSegment1384.children = new MFNode();

HAnimSegment1384.children[0] = TouchSensor1385;

let Transform1386 = browser.currentScene.createNode("Transform");
Transform1386.translation = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
let Shape1387 = browser.currentScene.createNode("Shape");
Shape1387.USE = "HAnimJointShape";
Transform1386.children = new MFNode();

Transform1386.children[0] = Shape1387;

HAnimSegment1384.children[1] = Transform1386;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index0'/> to <HAnimJoint name='r_index1'/>
let Shape1388 = browser.currentScene.createNode("Shape");
let LineSet1389 = browser.currentScene.createNode("LineSet");
LineSet1389.vertexCount = new MFInt32(new int[2]);
let Coordinate1390 = browser.currentScene.createNode("Coordinate");
Coordinate1390.point = new MFVec3f(new float[-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028]);
LineSet1389.coord = Coordinate1390;

let ColorRGBA1391 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1391.USE = "HAnimSegmentLineColorRGBA";
LineSet1389.color = ColorRGBA1391;

Shape1388.geometry = LineSet1389;

HAnimSegment1384.children[2] = Shape1388;

HAnimJoint1383.children = new MFNode();

HAnimJoint1383.children[0] = HAnimSegment1384;

let HAnimJoint1392 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1392.name = "r_index1";
HAnimJoint1392.DEF = "hanim_r_index1";
HAnimJoint1392.center = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
HAnimJoint1392.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1393 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1393.name = "r_index_proximal";
HAnimSegment1393.DEF = "hanim_r_index_proximal";
//<HAnimJoint name='r_index1'/> visualization sphere within <HAnimSegment name='r_index_proximal'/>
let TouchSensor1394 = browser.currentScene.createNode("TouchSensor");
TouchSensor1394.description = "HAnimJoint r_index1, HAnimSegment r_index_proximal";
HAnimSegment1393.children = new MFNode();

HAnimSegment1393.children[0] = TouchSensor1394;

let Transform1395 = browser.currentScene.createNode("Transform");
Transform1395.translation = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
let Shape1396 = browser.currentScene.createNode("Shape");
Shape1396.USE = "HAnimJointShape";
Transform1395.children = new MFNode();

Transform1395.children[0] = Shape1396;

HAnimSegment1393.children[1] = Transform1395;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index1'/> to <HAnimJoint name='r_index2'/>
let Shape1397 = browser.currentScene.createNode("Shape");
let LineSet1398 = browser.currentScene.createNode("LineSet");
LineSet1398.vertexCount = new MFInt32(new int[2]);
let Coordinate1399 = browser.currentScene.createNode("Coordinate");
Coordinate1399.point = new MFVec3f(new float[-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248]);
LineSet1398.coord = Coordinate1399;

let ColorRGBA1400 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1400.USE = "HAnimSegmentLineColorRGBA";
LineSet1398.color = ColorRGBA1400;

Shape1397.geometry = LineSet1398;

HAnimSegment1393.children[2] = Shape1397;

HAnimJoint1392.children = new MFNode();

HAnimJoint1392.children[0] = HAnimSegment1393;

let HAnimJoint1401 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1401.name = "r_index2";
HAnimJoint1401.DEF = "hanim_r_index2";
HAnimJoint1401.center = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
HAnimJoint1401.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1402 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1402.name = "r_index_middle";
HAnimSegment1402.DEF = "hanim_r_index_middle";
//<HAnimJoint name='r_index2'/> visualization sphere within <HAnimSegment name='r_index_middle'/>
let TouchSensor1403 = browser.currentScene.createNode("TouchSensor");
TouchSensor1403.description = "HAnimJoint r_index2, HAnimSegment r_index_middle";
HAnimSegment1402.children = new MFNode();

HAnimSegment1402.children[0] = TouchSensor1403;

let Transform1404 = browser.currentScene.createNode("Transform");
Transform1404.translation = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
let Shape1405 = browser.currentScene.createNode("Shape");
Shape1405.USE = "HAnimJointShape";
Transform1404.children = new MFNode();

Transform1404.children[0] = Shape1405;

HAnimSegment1402.children[1] = Transform1404;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_index2'/> to <HAnimJoint name='r_index3'/>
let Shape1406 = browser.currentScene.createNode("Shape");
let LineSet1407 = browser.currentScene.createNode("LineSet");
LineSet1407.vertexCount = new MFInt32(new int[2]);
let Coordinate1408 = browser.currentScene.createNode("Coordinate");
Coordinate1408.point = new MFVec3f(new float[-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236]);
LineSet1407.coord = Coordinate1408;

let ColorRGBA1409 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1409.USE = "HAnimSegmentLineColorRGBA";
LineSet1407.color = ColorRGBA1409;

Shape1406.geometry = LineSet1407;

HAnimSegment1402.children[2] = Shape1406;

HAnimJoint1401.children = new MFNode();

HAnimJoint1401.children[0] = HAnimSegment1402;

let HAnimJoint1410 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1410.name = "r_index3";
HAnimJoint1410.DEF = "hanim_r_index3";
HAnimJoint1410.center = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
HAnimJoint1410.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1411 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1411.name = "r_index_distal";
HAnimSegment1411.DEF = "hanim_r_index_distal";
//<HAnimJoint name='r_index3'/> visualization sphere within <HAnimSegment name='r_index_distal'/>
let TouchSensor1412 = browser.currentScene.createNode("TouchSensor");
TouchSensor1412.description = "HAnimJoint r_index3, HAnimSegment r_index_distal";
HAnimSegment1411.children = new MFNode();

HAnimSegment1411.children[0] = TouchSensor1412;

let Transform1413 = browser.currentScene.createNode("Transform");
Transform1413.translation = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
let Shape1414 = browser.currentScene.createNode("Shape");
Shape1414.USE = "HAnimJointShape";
Transform1413.children = new MFNode();

Transform1413.children[0] = Shape1414;

HAnimSegment1411.children[1] = Transform1413;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_index_distal_tip'/>
let Shape1415 = browser.currentScene.createNode("Shape");
let LineSet1416 = browser.currentScene.createNode("LineSet");
LineSet1416.vertexCount = new MFInt32(new int[2]);
let Coordinate1417 = browser.currentScene.createNode("Coordinate");
Coordinate1417.point = new MFVec3f(new float[-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018]);
LineSet1416.coord = Coordinate1417;

let ColorRGBA1418 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1418.USE = "HAnimSiteLineColorRGBA";
LineSet1416.color = ColorRGBA1418;

Shape1415.geometry = LineSet1416;

HAnimSegment1411.children[2] = Shape1415;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_dactylion'/>
let Shape1419 = browser.currentScene.createNode("Shape");
let LineSet1420 = browser.currentScene.createNode("LineSet");
LineSet1420.vertexCount = new MFInt32(new int[2]);
let Coordinate1421 = browser.currentScene.createNode("Coordinate");
Coordinate1421.point = new MFVec3f(new float[-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423]);
LineSet1420.coord = Coordinate1421;

let ColorRGBA1422 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1422.USE = "HAnimSiteLineColorRGBA";
LineSet1420.color = ColorRGBA1422;

Shape1419.geometry = LineSet1420;

HAnimSegment1411.children[3] = Shape1419;

let HAnimSite1423 = browser.currentScene.createNode("HAnimSite");
HAnimSite1423.name = "r_index_distal_tip";
HAnimSite1423.DEF = "hanim_r_index_distal_tip";
HAnimSite1423.translation = new SFVec3f(new float[-0.198,0.6883,-0.018]);
//HAnimSite visualization shape
let TouchSensor1424 = browser.currentScene.createNode("TouchSensor");
TouchSensor1424.description = "HAnimSite r_index_distal_tip";
HAnimSite1423.children = new MFNode();

HAnimSite1423.children[0] = TouchSensor1424;

let Shape1425 = browser.currentScene.createNode("Shape");
Shape1425.USE = "HAnimSiteShape";
HAnimSite1423.children[1] = Shape1425;

HAnimSegment1411.children[4] = HAnimSite1423;

let HAnimSite1426 = browser.currentScene.createNode("HAnimSite");
HAnimSite1426.name = "r_dactylion_pt";
HAnimSite1426.DEF = "hanim_r_dactylion_pt";
HAnimSite1426.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
//HAnimSite visualization shape
let TouchSensor1427 = browser.currentScene.createNode("TouchSensor");
TouchSensor1427.description = "HAnimSite r_dactylion";
HAnimSite1426.children = new MFNode();

HAnimSite1426.children[0] = TouchSensor1427;

let Shape1428 = browser.currentScene.createNode("Shape");
Shape1428.USE = "HAnimSiteShape";
HAnimSite1426.children[1] = Shape1428;

HAnimSegment1411.children[5] = HAnimSite1426;

HAnimJoint1410.children = new MFNode();

HAnimJoint1410.children[0] = HAnimSegment1411;

HAnimJoint1401.children[1] = HAnimJoint1410;

HAnimJoint1392.children[1] = HAnimJoint1401;

HAnimJoint1383.children[1] = HAnimJoint1392;

HAnimJoint1297.children[2] = HAnimJoint1383;

let HAnimJoint1429 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1429.name = "r_middle0";
HAnimJoint1429.DEF = "hanim_r_middle0";
HAnimJoint1429.center = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
HAnimJoint1429.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1430 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1430.name = "r_middle_metacarpal";
HAnimSegment1430.DEF = "hanim_r_middle_metacarpal";
//<HAnimJoint name='r_middle0'/> visualization sphere within <HAnimSegment name='r_middle_metacarpal'/>
let TouchSensor1431 = browser.currentScene.createNode("TouchSensor");
TouchSensor1431.description = "HAnimJoint r_middle0, HAnimSegment r_middle_metacarpal";
HAnimSegment1430.children = new MFNode();

HAnimSegment1430.children[0] = TouchSensor1431;

let Transform1432 = browser.currentScene.createNode("Transform");
Transform1432.translation = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
let Shape1433 = browser.currentScene.createNode("Shape");
Shape1433.USE = "HAnimJointShape";
Transform1432.children = new MFNode();

Transform1432.children[0] = Shape1433;

HAnimSegment1430.children[1] = Transform1432;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle0'/> to <HAnimJoint name='r_middle1'/>
let Shape1434 = browser.currentScene.createNode("Shape");
let LineSet1435 = browser.currentScene.createNode("LineSet");
LineSet1435.vertexCount = new MFInt32(new int[2]);
let Coordinate1436 = browser.currentScene.createNode("Coordinate");
Coordinate1436.point = new MFVec3f(new float[-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053]);
LineSet1435.coord = Coordinate1436;

let ColorRGBA1437 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1437.USE = "HAnimSegmentLineColorRGBA";
LineSet1435.color = ColorRGBA1437;

Shape1434.geometry = LineSet1435;

HAnimSegment1430.children[2] = Shape1434;

HAnimJoint1429.children = new MFNode();

HAnimJoint1429.children[0] = HAnimSegment1430;

let HAnimJoint1438 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1438.name = "r_middle1";
HAnimJoint1438.DEF = "hanim_r_middle1";
HAnimJoint1438.center = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
HAnimJoint1438.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1439 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1439.name = "r_middle_proximal";
HAnimSegment1439.DEF = "hanim_r_middle_proximal";
//<HAnimJoint name='r_middle1'/> visualization sphere within <HAnimSegment name='r_middle_proximal'/>
let TouchSensor1440 = browser.currentScene.createNode("TouchSensor");
TouchSensor1440.description = "HAnimJoint r_middle1, HAnimSegment r_middle_proximal";
HAnimSegment1439.children = new MFNode();

HAnimSegment1439.children[0] = TouchSensor1440;

let Transform1441 = browser.currentScene.createNode("Transform");
Transform1441.translation = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
let Shape1442 = browser.currentScene.createNode("Shape");
Shape1442.USE = "HAnimJointShape";
Transform1441.children = new MFNode();

Transform1441.children[0] = Shape1442;

HAnimSegment1439.children[1] = Transform1441;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle1'/> to <HAnimJoint name='r_middle2'/>
let Shape1443 = browser.currentScene.createNode("Shape");
let LineSet1444 = browser.currentScene.createNode("LineSet");
LineSet1444.vertexCount = new MFInt32(new int[2]);
let Coordinate1445 = browser.currentScene.createNode("Coordinate");
Coordinate1445.point = new MFVec3f(new float[-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503]);
LineSet1444.coord = Coordinate1445;

let ColorRGBA1446 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1446.USE = "HAnimSegmentLineColorRGBA";
LineSet1444.color = ColorRGBA1446;

Shape1443.geometry = LineSet1444;

HAnimSegment1439.children[2] = Shape1443;

HAnimJoint1438.children = new MFNode();

HAnimJoint1438.children[0] = HAnimSegment1439;

let HAnimJoint1447 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1447.name = "r_middle2";
HAnimJoint1447.DEF = "hanim_r_middle2";
HAnimJoint1447.center = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
HAnimJoint1447.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1448 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1448.name = "r_middle_middle";
HAnimSegment1448.DEF = "hanim_r_middle_middle";
//<HAnimJoint name='r_middle2'/> visualization sphere within <HAnimSegment name='r_middle_middle'/>
let TouchSensor1449 = browser.currentScene.createNode("TouchSensor");
TouchSensor1449.description = "HAnimJoint r_middle2, HAnimSegment r_middle_middle";
HAnimSegment1448.children = new MFNode();

HAnimSegment1448.children[0] = TouchSensor1449;

let Transform1450 = browser.currentScene.createNode("Transform");
Transform1450.translation = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
let Shape1451 = browser.currentScene.createNode("Shape");
Shape1451.USE = "HAnimJointShape";
Transform1450.children = new MFNode();

Transform1450.children[0] = Shape1451;

HAnimSegment1448.children[1] = Transform1450;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle2'/> to <HAnimJoint name='r_middle3'/>
let Shape1452 = browser.currentScene.createNode("Shape");
let LineSet1453 = browser.currentScene.createNode("LineSet");
LineSet1453.vertexCount = new MFInt32(new int[2]);
let Coordinate1454 = browser.currentScene.createNode("Coordinate");
Coordinate1454.point = new MFVec3f(new float[-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494]);
LineSet1453.coord = Coordinate1454;

let ColorRGBA1455 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1455.USE = "HAnimSegmentLineColorRGBA";
LineSet1453.color = ColorRGBA1455;

Shape1452.geometry = LineSet1453;

HAnimSegment1448.children[2] = Shape1452;

HAnimJoint1447.children = new MFNode();

HAnimJoint1447.children[0] = HAnimSegment1448;

let HAnimJoint1456 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1456.name = "r_middle3";
HAnimJoint1456.DEF = "hanim_r_middle3";
HAnimJoint1456.center = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
HAnimJoint1456.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1457 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1457.name = "r_middle_distal";
HAnimSegment1457.DEF = "hanim_r_middle_distal";
//<HAnimJoint name='r_middle3'/> visualization sphere within <HAnimSegment name='r_middle_distal'/>
let TouchSensor1458 = browser.currentScene.createNode("TouchSensor");
TouchSensor1458.description = "HAnimJoint r_middle3, HAnimSegment r_middle_distal";
HAnimSegment1457.children = new MFNode();

HAnimSegment1457.children[0] = TouchSensor1458;

let Transform1459 = browser.currentScene.createNode("Transform");
Transform1459.translation = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
let Shape1460 = browser.currentScene.createNode("Shape");
Shape1460.USE = "HAnimJointShape";
Transform1459.children = new MFNode();

Transform1459.children[0] = Shape1460;

HAnimSegment1457.children[1] = Transform1459;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_middle3'/> to <HAnimSite name='r_middle_distal_tip'/>
let Shape1461 = browser.currentScene.createNode("Shape");
let LineSet1462 = browser.currentScene.createNode("LineSet");
LineSet1462.vertexCount = new MFInt32(new int[2]);
let Coordinate1463 = browser.currentScene.createNode("Coordinate");
Coordinate1463.point = new MFVec3f(new float[-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427]);
LineSet1462.coord = Coordinate1463;

let ColorRGBA1464 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1464.USE = "HAnimSiteLineColorRGBA";
LineSet1462.color = ColorRGBA1464;

Shape1461.geometry = LineSet1462;

HAnimSegment1457.children[2] = Shape1461;

let HAnimSite1465 = browser.currentScene.createNode("HAnimSite");
HAnimSite1465.name = "r_middle_distal_tip";
HAnimSite1465.DEF = "hanim_r_middle_distal_tip";
HAnimSite1465.translation = new SFVec3f(new float[-0.1969,0.6758,-0.0427]);
//HAnimSite visualization shape
let TouchSensor1466 = browser.currentScene.createNode("TouchSensor");
TouchSensor1466.description = "HAnimSite r_middle_distal_tip";
HAnimSite1465.children = new MFNode();

HAnimSite1465.children[0] = TouchSensor1466;

let Shape1467 = browser.currentScene.createNode("Shape");
Shape1467.USE = "HAnimSiteShape";
HAnimSite1465.children[1] = Shape1467;

HAnimSegment1457.children[3] = HAnimSite1465;

HAnimJoint1456.children = new MFNode();

HAnimJoint1456.children[0] = HAnimSegment1457;

HAnimJoint1447.children[1] = HAnimJoint1456;

HAnimJoint1438.children[1] = HAnimJoint1447;

HAnimJoint1429.children[1] = HAnimJoint1438;

HAnimJoint1297.children[3] = HAnimJoint1429;

let HAnimJoint1468 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1468.name = "r_ring0";
HAnimJoint1468.DEF = "hanim_r_ring0";
HAnimJoint1468.center = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
HAnimJoint1468.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1469 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1469.name = "r_ring_metacarpal";
HAnimSegment1469.DEF = "hanim_r_ring_metacarpal";
//<HAnimJoint name='r_ring0'/> visualization sphere within <HAnimSegment name='r_ring_metacarpal'/>
let TouchSensor1470 = browser.currentScene.createNode("TouchSensor");
TouchSensor1470.description = "HAnimJoint r_ring0, HAnimSegment r_ring_metacarpal";
HAnimSegment1469.children = new MFNode();

HAnimSegment1469.children[0] = TouchSensor1470;

let Transform1471 = browser.currentScene.createNode("Transform");
Transform1471.translation = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
let Shape1472 = browser.currentScene.createNode("Shape");
Shape1472.USE = "HAnimJointShape";
Transform1471.children = new MFNode();

Transform1471.children[0] = Shape1472;

HAnimSegment1469.children[1] = Transform1471;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring0'/> to <HAnimJoint name='r_ring1'/>
let Shape1473 = browser.currentScene.createNode("Shape");
let LineSet1474 = browser.currentScene.createNode("LineSet");
LineSet1474.vertexCount = new MFInt32(new int[2]);
let Coordinate1475 = browser.currentScene.createNode("Coordinate");
Coordinate1475.point = new MFVec3f(new float[-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794]);
LineSet1474.coord = Coordinate1475;

let ColorRGBA1476 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1476.USE = "HAnimSegmentLineColorRGBA";
LineSet1474.color = ColorRGBA1476;

Shape1473.geometry = LineSet1474;

HAnimSegment1469.children[2] = Shape1473;

HAnimJoint1468.children = new MFNode();

HAnimJoint1468.children[0] = HAnimSegment1469;

let HAnimJoint1477 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1477.name = "r_ring1";
HAnimJoint1477.DEF = "hanim_r_ring1";
HAnimJoint1477.center = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
HAnimJoint1477.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1478 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1478.name = "r_ring_proximal";
HAnimSegment1478.DEF = "hanim_r_ring_proximal";
//<HAnimJoint name='r_ring1'/> visualization sphere within <HAnimSegment name='r_ring_proximal'/>
let TouchSensor1479 = browser.currentScene.createNode("TouchSensor");
TouchSensor1479.description = "HAnimJoint r_ring1, HAnimSegment r_ring_proximal";
HAnimSegment1478.children = new MFNode();

HAnimSegment1478.children[0] = TouchSensor1479;

let Transform1480 = browser.currentScene.createNode("Transform");
Transform1480.translation = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
let Shape1481 = browser.currentScene.createNode("Shape");
Shape1481.USE = "HAnimJointShape";
Transform1480.children = new MFNode();

Transform1480.children[0] = Shape1481;

HAnimSegment1478.children[1] = Transform1480;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring1'/> to <HAnimJoint name='r_ring2'/>
let Shape1482 = browser.currentScene.createNode("Shape");
let LineSet1483 = browser.currentScene.createNode("LineSet");
LineSet1483.vertexCount = new MFInt32(new int[2]);
let Coordinate1484 = browser.currentScene.createNode("Coordinate");
Coordinate1484.point = new MFVec3f(new float[-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777]);
LineSet1483.coord = Coordinate1484;

let ColorRGBA1485 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1485.USE = "HAnimSegmentLineColorRGBA";
LineSet1483.color = ColorRGBA1485;

Shape1482.geometry = LineSet1483;

HAnimSegment1478.children[2] = Shape1482;

HAnimJoint1477.children = new MFNode();

HAnimJoint1477.children[0] = HAnimSegment1478;

let HAnimJoint1486 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1486.name = "r_ring2";
HAnimJoint1486.DEF = "hanim_r_ring2";
HAnimJoint1486.center = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
HAnimJoint1486.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1487 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1487.name = "r_ring_middle";
HAnimSegment1487.DEF = "hanim_r_ring_middle";
//<HAnimJoint name='r_ring2'/> visualization sphere within <HAnimSegment name='r_ring_middle'/>
let TouchSensor1488 = browser.currentScene.createNode("TouchSensor");
TouchSensor1488.description = "HAnimJoint r_ring2, HAnimSegment r_ring_middle";
HAnimSegment1487.children = new MFNode();

HAnimSegment1487.children[0] = TouchSensor1488;

let Transform1489 = browser.currentScene.createNode("Transform");
Transform1489.translation = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
let Shape1490 = browser.currentScene.createNode("Shape");
Shape1490.USE = "HAnimJointShape";
Transform1489.children = new MFNode();

Transform1489.children[0] = Shape1490;

HAnimSegment1487.children[1] = Transform1489;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring2'/> to <HAnimJoint name='r_ring3'/>
let Shape1491 = browser.currentScene.createNode("Shape");
let LineSet1492 = browser.currentScene.createNode("LineSet");
LineSet1492.vertexCount = new MFInt32(new int[2]);
let Coordinate1493 = browser.currentScene.createNode("Coordinate");
Coordinate1493.point = new MFVec3f(new float[-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767]);
LineSet1492.coord = Coordinate1493;

let ColorRGBA1494 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1494.USE = "HAnimSegmentLineColorRGBA";
LineSet1492.color = ColorRGBA1494;

Shape1491.geometry = LineSet1492;

HAnimSegment1487.children[2] = Shape1491;

HAnimJoint1486.children = new MFNode();

HAnimJoint1486.children[0] = HAnimSegment1487;

let HAnimJoint1495 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1495.name = "r_ring3";
HAnimJoint1495.DEF = "hanim_r_ring3";
HAnimJoint1495.center = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
HAnimJoint1495.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1496 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1496.name = "r_ring_distal";
HAnimSegment1496.DEF = "hanim_r_ring_distal";
//<HAnimJoint name='r_ring3'/> visualization sphere within <HAnimSegment name='r_ring_distal'/>
let TouchSensor1497 = browser.currentScene.createNode("TouchSensor");
TouchSensor1497.description = "HAnimJoint r_ring3, HAnimSegment r_ring_distal";
HAnimSegment1496.children = new MFNode();

HAnimSegment1496.children[0] = TouchSensor1497;

let Transform1498 = browser.currentScene.createNode("Transform");
Transform1498.translation = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
let Shape1499 = browser.currentScene.createNode("Shape");
Shape1499.USE = "HAnimJointShape";
Transform1498.children = new MFNode();

Transform1498.children[0] = Shape1499;

HAnimSegment1496.children[1] = Transform1498;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ring3'/> to <HAnimSite name='r_ring_distal_tip'/>
let Shape1500 = browser.currentScene.createNode("Shape");
let LineSet1501 = browser.currentScene.createNode("LineSet");
LineSet1501.vertexCount = new MFInt32(new int[2]);
let Coordinate1502 = browser.currentScene.createNode("Coordinate");
Coordinate1502.point = new MFVec3f(new float[-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693]);
LineSet1501.coord = Coordinate1502;

let ColorRGBA1503 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1503.USE = "HAnimSiteLineColorRGBA";
LineSet1501.color = ColorRGBA1503;

Shape1500.geometry = LineSet1501;

HAnimSegment1496.children[2] = Shape1500;

let HAnimSite1504 = browser.currentScene.createNode("HAnimSite");
HAnimSite1504.name = "r_ring_distal_tip";
HAnimSite1504.DEF = "hanim_r_ring_distal_tip";
HAnimSite1504.translation = new SFVec3f(new float[-0.1934,0.6778,-0.0693]);
//HAnimSite visualization shape
let TouchSensor1505 = browser.currentScene.createNode("TouchSensor");
TouchSensor1505.description = "HAnimSite r_ring_distal_tip";
HAnimSite1504.children = new MFNode();

HAnimSite1504.children[0] = TouchSensor1505;

let Shape1506 = browser.currentScene.createNode("Shape");
Shape1506.USE = "HAnimSiteShape";
HAnimSite1504.children[1] = Shape1506;

HAnimSegment1496.children[3] = HAnimSite1504;

HAnimJoint1495.children = new MFNode();

HAnimJoint1495.children[0] = HAnimSegment1496;

HAnimJoint1486.children[1] = HAnimJoint1495;

HAnimJoint1477.children[1] = HAnimJoint1486;

HAnimJoint1468.children[1] = HAnimJoint1477;

HAnimJoint1297.children[4] = HAnimJoint1468;

let HAnimJoint1507 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1507.name = "r_pinky0";
HAnimJoint1507.DEF = "hanim_r_pinky0";
HAnimJoint1507.center = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
HAnimJoint1507.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1508 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1508.name = "r_pinky_metacarpal";
HAnimSegment1508.DEF = "hanim_r_pinky_metacarpal";
//<HAnimJoint name='r_pinky0'/> visualization sphere within <HAnimSegment name='r_pinky_metacarpal'/>
let TouchSensor1509 = browser.currentScene.createNode("TouchSensor");
TouchSensor1509.description = "HAnimJoint r_pinky0, HAnimSegment r_pinky_metacarpal";
HAnimSegment1508.children = new MFNode();

HAnimSegment1508.children[0] = TouchSensor1509;

let Transform1510 = browser.currentScene.createNode("Transform");
Transform1510.translation = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
let Shape1511 = browser.currentScene.createNode("Shape");
Shape1511.USE = "HAnimJointShape";
Transform1510.children = new MFNode();

Transform1510.children[0] = Shape1511;

HAnimSegment1508.children[1] = Transform1510;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky0'/> to <HAnimJoint name='r_pinky1'/>
let Shape1512 = browser.currentScene.createNode("Shape");
let LineSet1513 = browser.currentScene.createNode("LineSet");
LineSet1513.vertexCount = new MFInt32(new int[2]);
let Coordinate1514 = browser.currentScene.createNode("Coordinate");
Coordinate1514.point = new MFVec3f(new float[-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036]);
LineSet1513.coord = Coordinate1514;

let ColorRGBA1515 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1515.USE = "HAnimSegmentLineColorRGBA";
LineSet1513.color = ColorRGBA1515;

Shape1512.geometry = LineSet1513;

HAnimSegment1508.children[2] = Shape1512;

HAnimJoint1507.children = new MFNode();

HAnimJoint1507.children[0] = HAnimSegment1508;

let HAnimJoint1516 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1516.name = "r_pinky1";
HAnimJoint1516.DEF = "hanim_r_pinky1";
HAnimJoint1516.center = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
HAnimJoint1516.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1517 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1517.name = "r_pinky_proximal";
HAnimSegment1517.DEF = "hanim_r_pinky_proximal";
//<HAnimJoint name='r_pinky1'/> visualization sphere within <HAnimSegment name='r_pinky_proximal'/>
let TouchSensor1518 = browser.currentScene.createNode("TouchSensor");
TouchSensor1518.description = "HAnimJoint r_pinky1, HAnimSegment r_pinky_proximal";
HAnimSegment1517.children = new MFNode();

HAnimSegment1517.children[0] = TouchSensor1518;

let Transform1519 = browser.currentScene.createNode("Transform");
Transform1519.translation = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
let Shape1520 = browser.currentScene.createNode("Shape");
Shape1520.USE = "HAnimJointShape";
Transform1519.children = new MFNode();

Transform1519.children[0] = Shape1520;

HAnimSegment1517.children[1] = Transform1519;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky1'/> to <HAnimJoint name='r_pinky2'/>
let Shape1521 = browser.currentScene.createNode("Shape");
let LineSet1522 = browser.currentScene.createNode("LineSet");
LineSet1522.vertexCount = new MFInt32(new int[2]);
let Coordinate1523 = browser.currentScene.createNode("Coordinate");
Coordinate1523.point = new MFVec3f(new float[-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024]);
LineSet1522.coord = Coordinate1523;

let ColorRGBA1524 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1524.USE = "HAnimSegmentLineColorRGBA";
LineSet1522.color = ColorRGBA1524;

Shape1521.geometry = LineSet1522;

HAnimSegment1517.children[2] = Shape1521;

HAnimJoint1516.children = new MFNode();

HAnimJoint1516.children[0] = HAnimSegment1517;

let HAnimJoint1525 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1525.name = "r_pinky2";
HAnimJoint1525.DEF = "hanim_r_pinky2";
HAnimJoint1525.center = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
HAnimJoint1525.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1526 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1526.name = "r_pinky_middle";
HAnimSegment1526.DEF = "hanim_r_pinky_middle";
//<HAnimJoint name='r_pinky2'/> visualization sphere within <HAnimSegment name='r_pinky_middle'/>
let TouchSensor1527 = browser.currentScene.createNode("TouchSensor");
TouchSensor1527.description = "HAnimJoint r_pinky2, HAnimSegment r_pinky_middle";
HAnimSegment1526.children = new MFNode();

HAnimSegment1526.children[0] = TouchSensor1527;

let Transform1528 = browser.currentScene.createNode("Transform");
Transform1528.translation = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
let Shape1529 = browser.currentScene.createNode("Shape");
Shape1529.USE = "HAnimJointShape";
Transform1528.children = new MFNode();

Transform1528.children[0] = Shape1529;

HAnimSegment1526.children[1] = Transform1528;

//HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky2'/> to <HAnimJoint name='r_pinky3'/>
let Shape1530 = browser.currentScene.createNode("Shape");
let LineSet1531 = browser.currentScene.createNode("LineSet");
LineSet1531.vertexCount = new MFInt32(new int[2]);
let Coordinate1532 = browser.currentScene.createNode("Coordinate");
Coordinate1532.point = new MFVec3f(new float[-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017]);
LineSet1531.coord = Coordinate1532;

let ColorRGBA1533 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1533.USE = "HAnimSegmentLineColorRGBA";
LineSet1531.color = ColorRGBA1533;

Shape1530.geometry = LineSet1531;

HAnimSegment1526.children[2] = Shape1530;

HAnimJoint1525.children = new MFNode();

HAnimJoint1525.children[0] = HAnimSegment1526;

let HAnimJoint1534 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1534.name = "r_pinky3";
HAnimJoint1534.DEF = "hanim_r_pinky3";
HAnimJoint1534.center = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
HAnimJoint1534.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1535 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1535.name = "r_pinky_distal";
HAnimSegment1535.DEF = "hanim_r_pinky_distal";
//<HAnimJoint name='r_pinky3'/> visualization sphere within <HAnimSegment name='r_pinky_distal'/>
let TouchSensor1536 = browser.currentScene.createNode("TouchSensor");
TouchSensor1536.description = "HAnimJoint r_pinky3, HAnimSegment r_pinky_distal";
HAnimSegment1535.children = new MFNode();

HAnimSegment1535.children[0] = TouchSensor1536;

let Transform1537 = browser.currentScene.createNode("Transform");
Transform1537.translation = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
let Shape1538 = browser.currentScene.createNode("Shape");
Shape1538.USE = "HAnimJointShape";
Transform1537.children = new MFNode();

Transform1537.children[0] = Shape1538;

HAnimSegment1535.children[1] = Transform1537;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_pinky3'/> to <HAnimSite name='r_pinky_distal_tip'/>
let Shape1539 = browser.currentScene.createNode("Shape");
let LineSet1540 = browser.currentScene.createNode("LineSet");
LineSet1540.vertexCount = new MFInt32(new int[2]);
let Coordinate1541 = browser.currentScene.createNode("Coordinate");
Coordinate1541.point = new MFVec3f(new float[-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949]);
LineSet1540.coord = Coordinate1541;

let ColorRGBA1542 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1542.USE = "HAnimSiteLineColorRGBA";
LineSet1540.color = ColorRGBA1542;

Shape1539.geometry = LineSet1540;

HAnimSegment1535.children[2] = Shape1539;

let HAnimSite1543 = browser.currentScene.createNode("HAnimSite");
HAnimSite1543.name = "r_pinky_distal_tip";
HAnimSite1543.DEF = "hanim_r_pinky_distal_tip";
HAnimSite1543.translation = new SFVec3f(new float[-0.1938,0.7035,-0.0949]);
//HAnimSite visualization shape
let TouchSensor1544 = browser.currentScene.createNode("TouchSensor");
TouchSensor1544.description = "HAnimSite r_pinky_distal_tip";
HAnimSite1543.children = new MFNode();

HAnimSite1543.children[0] = TouchSensor1544;

let Shape1545 = browser.currentScene.createNode("Shape");
Shape1545.USE = "HAnimSiteShape";
HAnimSite1543.children[1] = Shape1545;

HAnimSegment1535.children[3] = HAnimSite1543;

HAnimJoint1534.children = new MFNode();

HAnimJoint1534.children[0] = HAnimSegment1535;

HAnimJoint1525.children[1] = HAnimJoint1534;

HAnimJoint1516.children[1] = HAnimJoint1525;

HAnimJoint1507.children[1] = HAnimJoint1516;

HAnimJoint1297.children[5] = HAnimJoint1507;

HAnimJoint1260.children[1] = HAnimJoint1297;

HAnimJoint1244.children[1] = HAnimJoint1260;

HAnimJoint1235.children[1] = HAnimJoint1244;

HAnimJoint1198.children[1] = HAnimJoint1235;

HAnimJoint566.children[3] = HAnimJoint1198;

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

//USE nodes for inverse kinematics (IK) engines and other tools
//Top-level HAnimSite/Viewpoint nodes for viewing the humanoid without being affected by body motion
let HAnimSite1546 = browser.currentScene.createNode("HAnimSite");
HAnimSite1546.name = "l_inclined_view";
HAnimSite1546.DEF = "hanim_l_inclined_view";
HAnimSite1546.rotation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
HAnimSite1546.translation = new SFVec3f(new float[1.62,1.05,2.06]);
let Viewpoint1547 = browser.currentScene.createNode("Viewpoint");
Viewpoint1547.DEF = "hanim_l_inclined_viewpoint";
Viewpoint1547.description = "left inclined";
Viewpoint1547.position = new SFVec3f(new float[0,0,0]);
HAnimSite1546.children = new MFNode();

HAnimSite1546.children[0] = Viewpoint1547;

//HAnimSite/Viewpoint visualization shape
let Anchor1548 = browser.currentScene.createNode("Anchor");
Anchor1548.description = "HAnimSite Viewpoint hanim_l_inclined_view";
Anchor1548.url = new MFString(new java.lang.String["#hanim_l_inclined_viewpoint"]);
let LOD1549 = browser.currentScene.createNode("LOD");
LOD1549.forceTransitions = True;
LOD1549.range = new MFFloat(new float[0.04]);
let WorldInfo1550 = browser.currentScene.createNode("WorldInfo");
WorldInfo1550.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1549.children = new MFNode();

LOD1549.children[0] = WorldInfo1550;

let Shape1551 = browser.currentScene.createNode("Shape");
Shape1551.USE = "HAnimSiteViewpointShape";
LOD1549.children[1] = Shape1551;

Anchor1548.children = new MFNode();

Anchor1548.children[0] = LOD1549;

HAnimSite1546.children[1] = Anchor1548;

HAnimHumanoid15.viewpoints[1] = HAnimSite1546;

let HAnimSite1552 = browser.currentScene.createNode("HAnimSite");
HAnimSite1552.name = "r_inclined_view";
HAnimSite1552.DEF = "hanim_r_inclined_view";
HAnimSite1552.rotation = new SFRotation(new float[-0.113,-0.993,0.0347,0.671]);
HAnimSite1552.translation = new SFVec3f(new float[-1.62,1.05,2.06]);
let Viewpoint1553 = browser.currentScene.createNode("Viewpoint");
Viewpoint1553.DEF = "hanim_r_inclined_viewpoint";
Viewpoint1553.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1553.description = "right inclined";
Viewpoint1553.position = new SFVec3f(new float[0,0,0]);
HAnimSite1552.children = new MFNode();

HAnimSite1552.children[0] = Viewpoint1553;

//HAnimSite/Viewpoint visualization shape
let Anchor1554 = browser.currentScene.createNode("Anchor");
Anchor1554.description = "HAnimSite Viewpoint hanim_r_inclined_view";
Anchor1554.url = new MFString(new java.lang.String["#hanim_r_inclined_viewpoint"]);
let LOD1555 = browser.currentScene.createNode("LOD");
LOD1555.forceTransitions = True;
LOD1555.range = new MFFloat(new float[0.04]);
let WorldInfo1556 = browser.currentScene.createNode("WorldInfo");
WorldInfo1556.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1555.children = new MFNode();

LOD1555.children[0] = WorldInfo1556;

let Shape1557 = browser.currentScene.createNode("Shape");
Shape1557.USE = "HAnimSiteViewpointShape";
LOD1555.children[1] = Shape1557;

Anchor1554.children = new MFNode();

Anchor1554.children[0] = LOD1555;

HAnimSite1552.children[1] = Anchor1554;

HAnimHumanoid15.viewpoints[2] = HAnimSite1552;

let HAnimSite1558 = browser.currentScene.createNode("HAnimSite");
HAnimSite1558.name = "front_view";
HAnimSite1558.DEF = "hanim_front_view";
HAnimSite1558.translation = new SFVec3f(new float[0,0.85,2.58]);
let Viewpoint1559 = browser.currentScene.createNode("Viewpoint");
Viewpoint1559.DEF = "hanim_front_viewpoint";
Viewpoint1559.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1559.description = "front";
Viewpoint1559.position = new SFVec3f(new float[0,0,0]);
HAnimSite1558.children = new MFNode();

HAnimSite1558.children[0] = Viewpoint1559;

//HAnimSite/Viewpoint visualization shape
let Anchor1560 = browser.currentScene.createNode("Anchor");
Anchor1560.description = "HAnimSite Viewpoint hanim_front_view";
Anchor1560.url = new MFString(new java.lang.String["#hanim_front_viewpoint"]);
let LOD1561 = browser.currentScene.createNode("LOD");
LOD1561.forceTransitions = True;
LOD1561.range = new MFFloat(new float[0.04]);
let WorldInfo1562 = browser.currentScene.createNode("WorldInfo");
WorldInfo1562.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1561.children = new MFNode();

LOD1561.children[0] = WorldInfo1562;

let Shape1563 = browser.currentScene.createNode("Shape");
Shape1563.USE = "HAnimSiteViewpointShape";
LOD1561.children[1] = Shape1563;

Anchor1560.children = new MFNode();

Anchor1560.children[0] = LOD1561;

HAnimSite1558.children[1] = Anchor1560;

HAnimHumanoid15.viewpoints[3] = HAnimSite1558;

let HAnimSite1564 = browser.currentScene.createNode("HAnimSite");
HAnimSite1564.name = "back_view";
HAnimSite1564.DEF = "hanim_back_view";
HAnimSite1564.rotation = new SFRotation(new float[0,1,0,3.14]);
HAnimSite1564.translation = new SFVec3f(new float[0,0.85,-2.58]);
let Viewpoint1565 = browser.currentScene.createNode("Viewpoint");
Viewpoint1565.DEF = "hanim_back_viewpoint";
Viewpoint1565.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1565.description = "back";
Viewpoint1565.position = new SFVec3f(new float[0,0,0]);
HAnimSite1564.children = new MFNode();

HAnimSite1564.children[0] = Viewpoint1565;

//HAnimSite/Viewpoint visualization shape
let Anchor1566 = browser.currentScene.createNode("Anchor");
Anchor1566.description = "HAnimSite Viewpoint hanim_back_view";
Anchor1566.url = new MFString(new java.lang.String["#hanim_back_viewpoint"]);
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

HAnimSite1564.children[1] = Anchor1566;

HAnimHumanoid15.viewpoints[4] = HAnimSite1564;

let HAnimSite1570 = browser.currentScene.createNode("HAnimSite");
HAnimSite1570.name = "l_side_view";
HAnimSite1570.DEF = "hanim_l_side_view";
HAnimSite1570.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite1570.translation = new SFVec3f(new float[2.6,0.854,0]);
let Viewpoint1571 = browser.currentScene.createNode("Viewpoint");
Viewpoint1571.DEF = "hanim_l_side_viewpoint";
Viewpoint1571.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1571.description = "left side";
Viewpoint1571.position = new SFVec3f(new float[0,0,0]);
HAnimSite1570.children = new MFNode();

HAnimSite1570.children[0] = Viewpoint1571;

//HAnimSite/Viewpoint visualization shape
let Anchor1572 = browser.currentScene.createNode("Anchor");
Anchor1572.description = "HAnimSite Viewpoint hanim_l_side_view";
Anchor1572.url = new MFString(new java.lang.String["#hanim_l_side_viewpoint"]);
let LOD1573 = browser.currentScene.createNode("LOD");
LOD1573.forceTransitions = True;
LOD1573.range = new MFFloat(new float[0.04]);
let WorldInfo1574 = browser.currentScene.createNode("WorldInfo");
WorldInfo1574.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1573.children = new MFNode();

LOD1573.children[0] = WorldInfo1574;

let Shape1575 = browser.currentScene.createNode("Shape");
Shape1575.USE = "HAnimSiteViewpointShape";
LOD1573.children[1] = Shape1575;

Anchor1572.children = new MFNode();

Anchor1572.children[0] = LOD1573;

HAnimSite1570.children[1] = Anchor1572;

HAnimHumanoid15.viewpoints[5] = HAnimSite1570;

let HAnimSite1576 = browser.currentScene.createNode("HAnimSite");
HAnimSite1576.name = "Top_view";
HAnimSite1576.DEF = "hanim_Top_view";
HAnimSite1576.rotation = new SFRotation(new float[1,0,0,-1.57]);
HAnimSite1576.translation = new SFVec3f(new float[0,3.5,0]);
let Viewpoint1577 = browser.currentScene.createNode("Viewpoint");
Viewpoint1577.DEF = "hanim_Top_viewpoint";
Viewpoint1577.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1577.description = "Top";
Viewpoint1577.position = new SFVec3f(new float[0,0,0]);
HAnimSite1576.children = new MFNode();

HAnimSite1576.children[0] = Viewpoint1577;

//HAnimSite/Viewpoint visualization shape
let Anchor1578 = browser.currentScene.createNode("Anchor");
Anchor1578.description = "HAnimSite Viewpoint hanim_Top_view";
Anchor1578.url = new MFString(new java.lang.String["#hanim_Top_viewpoint"]);
let LOD1579 = browser.currentScene.createNode("LOD");
LOD1579.forceTransitions = True;
LOD1579.range = new MFFloat(new float[0.04]);
let WorldInfo1580 = browser.currentScene.createNode("WorldInfo");
WorldInfo1580.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1579.children = new MFNode();

LOD1579.children[0] = WorldInfo1580;

let Shape1581 = browser.currentScene.createNode("Shape");
Shape1581.USE = "HAnimSiteViewpointShape";
LOD1579.children[1] = Shape1581;

Anchor1578.children = new MFNode();

Anchor1578.children[0] = LOD1579;

HAnimSite1576.children[1] = Anchor1578;

HAnimHumanoid15.viewpoints[6] = HAnimSite1576;

let HAnimSite1582 = browser.currentScene.createNode("HAnimSite");
HAnimSite1582.name = "front_close_view";
HAnimSite1582.DEF = "hanim_front_close_view";
HAnimSite1582.translation = new SFVec3f(new float[0,0.854,1.575]);
let Viewpoint1583 = browser.currentScene.createNode("Viewpoint");
Viewpoint1583.DEF = "hanim_front_close_viewpoint";
Viewpoint1583.centerOfRotation = new SFVec3f(new float[0,0,1.575]);
Viewpoint1583.description = "front close";
Viewpoint1583.position = new SFVec3f(new float[0,0,0]);
HAnimSite1582.children = new MFNode();

HAnimSite1582.children[0] = Viewpoint1583;

//HAnimSite/Viewpoint visualization shape
let Anchor1584 = browser.currentScene.createNode("Anchor");
Anchor1584.description = "HAnimSite Viewpoint hanim_front_close_view";
Anchor1584.url = new MFString(new java.lang.String["#hanim_front_close_viewpoint"]);
let LOD1585 = browser.currentScene.createNode("LOD");
LOD1585.forceTransitions = True;
LOD1585.range = new MFFloat(new float[0.04]);
let WorldInfo1586 = browser.currentScene.createNode("WorldInfo");
WorldInfo1586.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1585.children = new MFNode();

LOD1585.children[0] = WorldInfo1586;

let Shape1587 = browser.currentScene.createNode("Shape");
Shape1587.USE = "HAnimSiteViewpointShape";
LOD1585.children[1] = Shape1587;

Anchor1584.children = new MFNode();

Anchor1584.children[0] = LOD1585;

HAnimSite1582.children[1] = Anchor1584;

HAnimHumanoid15.viewpoints[7] = HAnimSite1582;

let HAnimSite1588 = browser.currentScene.createNode("HAnimSite");
HAnimSite1588.name = "side_close_view";
HAnimSite1588.DEF = "hanim_side_close_view";
HAnimSite1588.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite1588.translation = new SFVec3f(new float[1.56,0.854,0]);
let Viewpoint1589 = browser.currentScene.createNode("Viewpoint");
Viewpoint1589.DEF = "hanim_side_close_viewpoint";
Viewpoint1589.centerOfRotation = new SFVec3f(new float[1.6,0,0]);
Viewpoint1589.description = "side close";
Viewpoint1589.position = new SFVec3f(new float[0,0,0]);
HAnimSite1588.children = new MFNode();

HAnimSite1588.children[0] = Viewpoint1589;

//HAnimSite/Viewpoint visualization shape
let Anchor1590 = browser.currentScene.createNode("Anchor");
Anchor1590.description = "HAnimSite Viewpoint hanim_side_close_view";
Anchor1590.url = new MFString(new java.lang.String["#hanim_side_close_viewpoint"]);
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

HAnimSite1588.children[1] = Anchor1590;

HAnimHumanoid15.viewpoints[8] = HAnimSite1588;

let HAnimSite1594 = browser.currentScene.createNode("HAnimSite");
HAnimSite1594.name = "head_front_close_view";
HAnimSite1594.DEF = "hanim_head_front_close_view";
HAnimSite1594.translation = new SFVec3f(new float[0,1.5,1]);
let Viewpoint1595 = browser.currentScene.createNode("Viewpoint");
Viewpoint1595.DEF = "hanim_head_front_close_viewpoint";
Viewpoint1595.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint1595.description = "head front close";
Viewpoint1595.position = new SFVec3f(new float[0,0,0]);
HAnimSite1594.children = new MFNode();

HAnimSite1594.children[0] = Viewpoint1595;

//HAnimSite/Viewpoint visualization shape
let Anchor1596 = browser.currentScene.createNode("Anchor");
Anchor1596.description = "HAnimSite Viewpoint hanim_head_front_close_view";
Anchor1596.url = new MFString(new java.lang.String["#hanim_head_front_close_viewpoint"]);
let LOD1597 = browser.currentScene.createNode("LOD");
LOD1597.forceTransitions = True;
LOD1597.range = new MFFloat(new float[0.04]);
let WorldInfo1598 = browser.currentScene.createNode("WorldInfo");
WorldInfo1598.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1597.children = new MFNode();

LOD1597.children[0] = WorldInfo1598;

let Shape1599 = browser.currentScene.createNode("Shape");
Shape1599.USE = "HAnimSiteViewpointShape";
LOD1597.children[1] = Shape1599;

Anchor1596.children = new MFNode();

Anchor1596.children[0] = LOD1597;

HAnimSite1594.children[1] = Anchor1596;

HAnimHumanoid15.viewpoints[9] = HAnimSite1594;

let HAnimSite1600 = browser.currentScene.createNode("HAnimSite");
HAnimSite1600.name = "chest_front_close_view";
HAnimSite1600.DEF = "hanim_chest_front_close_view";
HAnimSite1600.translation = new SFVec3f(new float[0,1.2,1]);
let Viewpoint1601 = browser.currentScene.createNode("Viewpoint");
Viewpoint1601.DEF = "hanim_chest_front_close_viewpoint";
Viewpoint1601.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint1601.description = "chest front close";
Viewpoint1601.position = new SFVec3f(new float[0,0,0]);
HAnimSite1600.children = new MFNode();

HAnimSite1600.children[0] = Viewpoint1601;

//HAnimSite/Viewpoint visualization shape
let Anchor1602 = browser.currentScene.createNode("Anchor");
Anchor1602.description = "HAnimSite Viewpoint hanim_chest_front_close_view";
Anchor1602.url = new MFString(new java.lang.String["#hanim_chest_front_close_viewpoint"]);
let LOD1603 = browser.currentScene.createNode("LOD");
LOD1603.forceTransitions = True;
LOD1603.range = new MFFloat(new float[0.04]);
let WorldInfo1604 = browser.currentScene.createNode("WorldInfo");
WorldInfo1604.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1603.children = new MFNode();

LOD1603.children[0] = WorldInfo1604;

let Shape1605 = browser.currentScene.createNode("Shape");
Shape1605.USE = "HAnimSiteViewpointShape";
LOD1603.children[1] = Shape1605;

Anchor1602.children = new MFNode();

Anchor1602.children[0] = LOD1603;

HAnimSite1600.children[1] = Anchor1602;

HAnimHumanoid15.viewpoints[10] = HAnimSite1600;

let HAnimSite1606 = browser.currentScene.createNode("HAnimSite");
HAnimSite1606.name = "pelvis_front_close_view";
HAnimSite1606.DEF = "hanim_pelvis_front_close_view";
HAnimSite1606.translation = new SFVec3f(new float[0,0.8,1]);
let Viewpoint1607 = browser.currentScene.createNode("Viewpoint");
Viewpoint1607.DEF = "hanim_pelvis_front_close_viewpoint";
Viewpoint1607.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint1607.description = "pelvis front close";
Viewpoint1607.position = new SFVec3f(new float[0,0,0]);
HAnimSite1606.children = new MFNode();

HAnimSite1606.children[0] = Viewpoint1607;

//HAnimSite/Viewpoint visualization shape
let Anchor1608 = browser.currentScene.createNode("Anchor");
Anchor1608.description = "HAnimSite Viewpoint hanim_pelvis_front_close_view";
Anchor1608.url = new MFString(new java.lang.String["#hanim_pelvis_front_close_viewpoint"]);
let LOD1609 = browser.currentScene.createNode("LOD");
LOD1609.forceTransitions = True;
LOD1609.range = new MFFloat(new float[0.04]);
let WorldInfo1610 = browser.currentScene.createNode("WorldInfo");
WorldInfo1610.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1609.children = new MFNode();

LOD1609.children[0] = WorldInfo1610;

let Shape1611 = browser.currentScene.createNode("Shape");
Shape1611.USE = "HAnimSiteViewpointShape";
LOD1609.children[1] = Shape1611;

Anchor1608.children = new MFNode();

Anchor1608.children[0] = LOD1609;

HAnimSite1606.children[1] = Anchor1608;

HAnimHumanoid15.viewpoints[11] = HAnimSite1606;

let HAnimSite1612 = browser.currentScene.createNode("HAnimSite");
HAnimSite1612.name = "knees_front_close_view";
HAnimSite1612.DEF = "hanim_knees_front_close_view";
HAnimSite1612.translation = new SFVec3f(new float[0,0.4,1]);
let Viewpoint1613 = browser.currentScene.createNode("Viewpoint");
Viewpoint1613.DEF = "hanim_knees_front_close_viewpoint";
Viewpoint1613.centerOfRotation = new SFVec3f(new float[0,0.4,0]);
Viewpoint1613.description = "knees front close";
Viewpoint1613.position = new SFVec3f(new float[0,0,0]);
HAnimSite1612.children = new MFNode();

HAnimSite1612.children[0] = Viewpoint1613;

//HAnimSite/Viewpoint visualization shape
let Anchor1614 = browser.currentScene.createNode("Anchor");
Anchor1614.description = "HAnimSite Viewpoint hanim_knees_front_close_view";
Anchor1614.url = new MFString(new java.lang.String["#hanim_knees_front_close_viewpoint"]);
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

HAnimSite1612.children[1] = Anchor1614;

HAnimHumanoid15.viewpoints[12] = HAnimSite1612;

let HAnimSite1618 = browser.currentScene.createNode("HAnimSite");
HAnimSite1618.name = "feet_front_close_view";
HAnimSite1618.DEF = "hanim_feet_front_close_view";
HAnimSite1618.translation = new SFVec3f(new float[0,0,1]);
let Viewpoint1619 = browser.currentScene.createNode("Viewpoint");
Viewpoint1619.DEF = "hanim_feet_front_close_viewpoint";
Viewpoint1619.description = "feet front close";
Viewpoint1619.position = new SFVec3f(new float[0,0,0]);
HAnimSite1618.children = new MFNode();

HAnimSite1618.children[0] = Viewpoint1619;

//HAnimSite/Viewpoint visualization shape
let Anchor1620 = browser.currentScene.createNode("Anchor");
Anchor1620.description = "HAnimSite Viewpoint hanim_feet_front_close_view";
Anchor1620.url = new MFString(new java.lang.String["#hanim_feet_front_close_viewpoint"]);
let LOD1621 = browser.currentScene.createNode("LOD");
LOD1621.forceTransitions = True;
LOD1621.range = new MFFloat(new float[0.04]);
let WorldInfo1622 = browser.currentScene.createNode("WorldInfo");
WorldInfo1622.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1621.children = new MFNode();

LOD1621.children[0] = WorldInfo1622;

let Shape1623 = browser.currentScene.createNode("Shape");
Shape1623.USE = "HAnimSiteViewpointShape";
LOD1621.children[1] = Shape1623;

Anchor1620.children = new MFNode();

Anchor1620.children[0] = LOD1621;

HAnimSite1618.children[1] = Anchor1620;

HAnimHumanoid15.viewpoints[13] = HAnimSite1618;

let HAnimSite1624 = browser.currentScene.createNode("HAnimSite");
HAnimSite1624.name = "eye_level_view";
HAnimSite1624.DEF = "hanim_eye_level_view";
HAnimSite1624.translation = new SFVec3f(new float[0,1.6332,0.0502]);
let Viewpoint1625 = browser.currentScene.createNode("Viewpoint");
Viewpoint1625.DEF = "hanim_eye_level_viewpoint";
Viewpoint1625.description = "eye level looking forward";
Viewpoint1625.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint1625.position = new SFVec3f(new float[0,0,0]);
HAnimSite1624.children = new MFNode();

HAnimSite1624.children[0] = Viewpoint1625;

//HAnimSite/Viewpoint visualization shape
let Anchor1626 = browser.currentScene.createNode("Anchor");
Anchor1626.description = "HAnimSite Viewpoint hanim_eye_level_view";
Anchor1626.url = new MFString(new java.lang.String["#hanim_eye_level_viewpoint"]);
let LOD1627 = browser.currentScene.createNode("LOD");
LOD1627.forceTransitions = True;
LOD1627.range = new MFFloat(new float[0.04]);
let WorldInfo1628 = browser.currentScene.createNode("WorldInfo");
WorldInfo1628.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1627.children = new MFNode();

LOD1627.children[0] = WorldInfo1628;

let Shape1629 = browser.currentScene.createNode("Shape");
Shape1629.USE = "HAnimSiteViewpointShape";
LOD1627.children[1] = Shape1629;

Anchor1626.children = new MFNode();

Anchor1626.children[0] = LOD1627;

HAnimSite1624.children[1] = Anchor1626;

HAnimHumanoid15.viewpoints[14] = HAnimSite1624;

let HAnimSite1630 = browser.currentScene.createNode("HAnimSite");
HAnimSite1630.USE = "hanim_l_eyeball_site_view";
HAnimHumanoid15.viewpoints[15] = HAnimSite1630;

let HAnimSite1631 = browser.currentScene.createNode("HAnimSite");
HAnimSite1631.USE = "hanim_r_eyeball_site_view";
HAnimHumanoid15.viewpoints[16] = HAnimSite1631;

let HAnimSite1632 = browser.currentScene.createNode("HAnimSite");
HAnimSite1632.USE = "hanim_l_hand_front_view";
HAnimHumanoid15.viewpoints[17] = HAnimSite1632;

let HAnimSite1633 = browser.currentScene.createNode("HAnimSite");
HAnimSite1633.USE = "hanim_r_hand_front_view";
HAnimHumanoid15.viewpoints[18] = HAnimSite1633;

let HAnimJoint1634 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1634.USE = "hanim_humanoid_root";
HAnimHumanoid15.joints[19] = HAnimJoint1634;

let HAnimJoint1635 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1635.USE = "hanim_sacroiliac";
HAnimHumanoid15.joints[20] = HAnimJoint1635;

let HAnimJoint1636 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1636.USE = "hanim_vl5";
HAnimHumanoid15.joints[21] = HAnimJoint1636;

let HAnimJoint1637 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1637.USE = "hanim_vl4";
HAnimHumanoid15.joints[22] = HAnimJoint1637;

let HAnimJoint1638 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1638.USE = "hanim_vl3";
HAnimHumanoid15.joints[23] = HAnimJoint1638;

let HAnimJoint1639 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1639.USE = "hanim_vl2";
HAnimHumanoid15.joints[24] = HAnimJoint1639;

let HAnimJoint1640 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1640.USE = "hanim_vl1";
HAnimHumanoid15.joints[25] = HAnimJoint1640;

let HAnimJoint1641 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1641.USE = "hanim_vt12";
HAnimHumanoid15.joints[26] = HAnimJoint1641;

let HAnimJoint1642 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1642.USE = "hanim_vt11";
HAnimHumanoid15.joints[27] = HAnimJoint1642;

let HAnimJoint1643 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1643.USE = "hanim_vt10";
HAnimHumanoid15.joints[28] = HAnimJoint1643;

let HAnimJoint1644 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1644.USE = "hanim_vt9";
HAnimHumanoid15.joints[29] = HAnimJoint1644;

let HAnimJoint1645 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1645.USE = "hanim_vt8";
HAnimHumanoid15.joints[30] = HAnimJoint1645;

let HAnimJoint1646 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1646.USE = "hanim_vt7";
HAnimHumanoid15.joints[31] = HAnimJoint1646;

let HAnimJoint1647 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1647.USE = "hanim_vt6";
HAnimHumanoid15.joints[32] = HAnimJoint1647;

let HAnimJoint1648 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1648.USE = "hanim_vt5";
HAnimHumanoid15.joints[33] = HAnimJoint1648;

let HAnimJoint1649 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1649.USE = "hanim_vt4";
HAnimHumanoid15.joints[34] = HAnimJoint1649;

let HAnimJoint1650 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1650.USE = "hanim_vt3";
HAnimHumanoid15.joints[35] = HAnimJoint1650;

let HAnimJoint1651 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1651.USE = "hanim_vt2";
HAnimHumanoid15.joints[36] = HAnimJoint1651;

let HAnimJoint1652 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1652.USE = "hanim_vt1";
HAnimHumanoid15.joints[37] = HAnimJoint1652;

let HAnimJoint1653 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1653.USE = "hanim_vc7";
HAnimHumanoid15.joints[38] = HAnimJoint1653;

let HAnimJoint1654 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1654.USE = "hanim_vc6";
HAnimHumanoid15.joints[39] = HAnimJoint1654;

let HAnimJoint1655 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1655.USE = "hanim_vc5";
HAnimHumanoid15.joints[40] = HAnimJoint1655;

let HAnimJoint1656 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1656.USE = "hanim_vc4";
HAnimHumanoid15.joints[41] = HAnimJoint1656;

let HAnimJoint1657 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1657.USE = "hanim_vc3";
HAnimHumanoid15.joints[42] = HAnimJoint1657;

let HAnimJoint1658 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1658.USE = "hanim_vc2";
HAnimHumanoid15.joints[43] = HAnimJoint1658;

let HAnimJoint1659 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1659.USE = "hanim_vc1";
HAnimHumanoid15.joints[44] = HAnimJoint1659;

let HAnimJoint1660 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1660.USE = "hanim_skullbase";
HAnimHumanoid15.joints[45] = HAnimJoint1660;

let HAnimJoint1661 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1661.USE = "hanim_temporomandibular";
HAnimHumanoid15.joints[46] = HAnimJoint1661;

let HAnimJoint1662 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1662.USE = "hanim_l_acromioclavicular";
HAnimHumanoid15.joints[47] = HAnimJoint1662;

let HAnimJoint1663 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1663.USE = "hanim_r_acromioclavicular";
HAnimHumanoid15.joints[48] = HAnimJoint1663;

let HAnimJoint1664 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1664.USE = "hanim_l_ankle";
HAnimHumanoid15.joints[49] = HAnimJoint1664;

let HAnimJoint1665 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1665.USE = "hanim_r_ankle";
HAnimHumanoid15.joints[50] = HAnimJoint1665;

let HAnimJoint1666 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1666.USE = "hanim_l_elbow";
HAnimHumanoid15.joints[51] = HAnimJoint1666;

let HAnimJoint1667 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1667.USE = "hanim_r_elbow";
HAnimHumanoid15.joints[52] = HAnimJoint1667;

let HAnimJoint1668 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1668.USE = "hanim_l_eyeball_joint";
HAnimHumanoid15.joints[53] = HAnimJoint1668;

let HAnimJoint1669 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1669.USE = "hanim_r_eyeball_joint";
HAnimHumanoid15.joints[54] = HAnimJoint1669;

let HAnimJoint1670 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1670.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid15.joints[55] = HAnimJoint1670;

let HAnimJoint1671 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1671.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid15.joints[56] = HAnimJoint1671;

let HAnimJoint1672 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1672.USE = "hanim_l_eyelid_joint";
HAnimHumanoid15.joints[57] = HAnimJoint1672;

let HAnimJoint1673 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1673.USE = "hanim_r_eyelid_joint";
HAnimHumanoid15.joints[58] = HAnimJoint1673;

let HAnimJoint1674 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1674.USE = "hanim_l_hip";
HAnimHumanoid15.joints[59] = HAnimJoint1674;

let HAnimJoint1675 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1675.USE = "hanim_r_hip";
HAnimHumanoid15.joints[60] = HAnimJoint1675;

let HAnimJoint1676 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1676.USE = "hanim_l_index0";
HAnimHumanoid15.joints[61] = HAnimJoint1676;

let HAnimJoint1677 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1677.USE = "hanim_r_index0";
HAnimHumanoid15.joints[62] = HAnimJoint1677;

let HAnimJoint1678 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1678.USE = "hanim_l_index1";
HAnimHumanoid15.joints[63] = HAnimJoint1678;

let HAnimJoint1679 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1679.USE = "hanim_r_index1";
HAnimHumanoid15.joints[64] = HAnimJoint1679;

let HAnimJoint1680 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1680.USE = "hanim_l_index2";
HAnimHumanoid15.joints[65] = HAnimJoint1680;

let HAnimJoint1681 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1681.USE = "hanim_r_index2";
HAnimHumanoid15.joints[66] = HAnimJoint1681;

let HAnimJoint1682 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1682.USE = "hanim_l_index3";
HAnimHumanoid15.joints[67] = HAnimJoint1682;

let HAnimJoint1683 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1683.USE = "hanim_r_index3";
HAnimHumanoid15.joints[68] = HAnimJoint1683;

let HAnimJoint1684 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1684.USE = "hanim_l_knee";
HAnimHumanoid15.joints[69] = HAnimJoint1684;

let HAnimJoint1685 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1685.USE = "hanim_r_knee";
HAnimHumanoid15.joints[70] = HAnimJoint1685;

let HAnimJoint1686 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1686.USE = "hanim_l_metatarsal";
HAnimHumanoid15.joints[71] = HAnimJoint1686;

let HAnimJoint1687 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1687.USE = "hanim_r_metatarsal";
HAnimHumanoid15.joints[72] = HAnimJoint1687;

let HAnimJoint1688 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1688.USE = "hanim_l_middle0";
HAnimHumanoid15.joints[73] = HAnimJoint1688;

let HAnimJoint1689 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1689.USE = "hanim_r_middle0";
HAnimHumanoid15.joints[74] = HAnimJoint1689;

let HAnimJoint1690 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1690.USE = "hanim_l_middle1";
HAnimHumanoid15.joints[75] = HAnimJoint1690;

let HAnimJoint1691 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1691.USE = "hanim_r_middle1";
HAnimHumanoid15.joints[76] = HAnimJoint1691;

let HAnimJoint1692 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1692.USE = "hanim_l_middle2";
HAnimHumanoid15.joints[77] = HAnimJoint1692;

let HAnimJoint1693 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1693.USE = "hanim_r_middle2";
HAnimHumanoid15.joints[78] = HAnimJoint1693;

let HAnimJoint1694 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1694.USE = "hanim_l_middle3";
HAnimHumanoid15.joints[79] = HAnimJoint1694;

let HAnimJoint1695 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1695.USE = "hanim_r_middle3";
HAnimHumanoid15.joints[80] = HAnimJoint1695;

let HAnimJoint1696 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1696.USE = "hanim_l_midtarsal";
HAnimHumanoid15.joints[81] = HAnimJoint1696;

let HAnimJoint1697 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1697.USE = "hanim_r_midtarsal";
HAnimHumanoid15.joints[82] = HAnimJoint1697;

let HAnimJoint1698 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1698.USE = "hanim_l_pinky0";
HAnimHumanoid15.joints[83] = HAnimJoint1698;

let HAnimJoint1699 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1699.USE = "hanim_r_pinky0";
HAnimHumanoid15.joints[84] = HAnimJoint1699;

let HAnimJoint1700 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1700.USE = "hanim_l_pinky1";
HAnimHumanoid15.joints[85] = HAnimJoint1700;

let HAnimJoint1701 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1701.USE = "hanim_r_pinky1";
HAnimHumanoid15.joints[86] = HAnimJoint1701;

let HAnimJoint1702 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1702.USE = "hanim_l_pinky2";
HAnimHumanoid15.joints[87] = HAnimJoint1702;

let HAnimJoint1703 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1703.USE = "hanim_r_pinky2";
HAnimHumanoid15.joints[88] = HAnimJoint1703;

let HAnimJoint1704 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1704.USE = "hanim_l_pinky3";
HAnimHumanoid15.joints[89] = HAnimJoint1704;

let HAnimJoint1705 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1705.USE = "hanim_r_pinky3";
HAnimHumanoid15.joints[90] = HAnimJoint1705;

let HAnimJoint1706 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1706.USE = "hanim_l_ring0";
HAnimHumanoid15.joints[91] = HAnimJoint1706;

let HAnimJoint1707 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1707.USE = "hanim_r_ring0";
HAnimHumanoid15.joints[92] = HAnimJoint1707;

let HAnimJoint1708 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1708.USE = "hanim_l_ring1";
HAnimHumanoid15.joints[93] = HAnimJoint1708;

let HAnimJoint1709 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1709.USE = "hanim_r_ring1";
HAnimHumanoid15.joints[94] = HAnimJoint1709;

let HAnimJoint1710 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1710.USE = "hanim_l_ring2";
HAnimHumanoid15.joints[95] = HAnimJoint1710;

let HAnimJoint1711 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1711.USE = "hanim_r_ring2";
HAnimHumanoid15.joints[96] = HAnimJoint1711;

let HAnimJoint1712 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1712.USE = "hanim_l_ring3";
HAnimHumanoid15.joints[97] = HAnimJoint1712;

let HAnimJoint1713 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1713.USE = "hanim_r_ring3";
HAnimHumanoid15.joints[98] = HAnimJoint1713;

let HAnimJoint1714 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1714.USE = "hanim_l_shoulder";
HAnimHumanoid15.joints[99] = HAnimJoint1714;

let HAnimJoint1715 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1715.USE = "hanim_r_shoulder";
HAnimHumanoid15.joints[100] = HAnimJoint1715;

let HAnimJoint1716 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1716.USE = "hanim_l_sternoclavicular";
HAnimHumanoid15.joints[101] = HAnimJoint1716;

let HAnimJoint1717 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1717.USE = "hanim_r_sternoclavicular";
HAnimHumanoid15.joints[102] = HAnimJoint1717;

let HAnimJoint1718 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1718.USE = "hanim_l_subtalar";
HAnimHumanoid15.joints[103] = HAnimJoint1718;

let HAnimJoint1719 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1719.USE = "hanim_r_subtalar";
HAnimHumanoid15.joints[104] = HAnimJoint1719;

let HAnimJoint1720 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1720.USE = "hanim_l_thumb1";
HAnimHumanoid15.joints[105] = HAnimJoint1720;

let HAnimJoint1721 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1721.USE = "hanim_r_thumb1";
HAnimHumanoid15.joints[106] = HAnimJoint1721;

let HAnimJoint1722 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1722.USE = "hanim_l_thumb2";
HAnimHumanoid15.joints[107] = HAnimJoint1722;

let HAnimJoint1723 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1723.USE = "hanim_r_thumb2";
HAnimHumanoid15.joints[108] = HAnimJoint1723;

let HAnimJoint1724 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1724.USE = "hanim_l_thumb3";
HAnimHumanoid15.joints[109] = HAnimJoint1724;

let HAnimJoint1725 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1725.USE = "hanim_r_thumb3";
HAnimHumanoid15.joints[110] = HAnimJoint1725;

let HAnimJoint1726 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1726.USE = "hanim_l_wrist";
HAnimHumanoid15.joints[111] = HAnimJoint1726;

let HAnimJoint1727 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1727.USE = "hanim_r_wrist";
HAnimHumanoid15.joints[112] = HAnimJoint1727;

let HAnimSegment1728 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1728.USE = "hanim_pelvis";
HAnimHumanoid15.segments[113] = HAnimSegment1728;

let HAnimSegment1729 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1729.USE = "hanim_skull";
HAnimHumanoid15.segments[114] = HAnimSegment1729;

let HAnimSegment1730 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1730.USE = "hanim_jaw";
HAnimHumanoid15.segments[115] = HAnimSegment1730;

let HAnimSegment1731 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1731.USE = "hanim_c1";
HAnimHumanoid15.segments[116] = HAnimSegment1731;

let HAnimSegment1732 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1732.USE = "hanim_c2";
HAnimHumanoid15.segments[117] = HAnimSegment1732;

let HAnimSegment1733 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1733.USE = "hanim_c3";
HAnimHumanoid15.segments[118] = HAnimSegment1733;

let HAnimSegment1734 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1734.USE = "hanim_c4";
HAnimHumanoid15.segments[119] = HAnimSegment1734;

let HAnimSegment1735 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1735.USE = "hanim_c5";
HAnimHumanoid15.segments[120] = HAnimSegment1735;

let HAnimSegment1736 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1736.USE = "hanim_c6";
HAnimHumanoid15.segments[121] = HAnimSegment1736;

let HAnimSegment1737 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1737.USE = "hanim_c7";
HAnimHumanoid15.segments[122] = HAnimSegment1737;

let HAnimSegment1738 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1738.USE = "hanim_t1";
HAnimHumanoid15.segments[123] = HAnimSegment1738;

let HAnimSegment1739 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1739.USE = "hanim_t2";
HAnimHumanoid15.segments[124] = HAnimSegment1739;

let HAnimSegment1740 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1740.USE = "hanim_t3";
HAnimHumanoid15.segments[125] = HAnimSegment1740;

let HAnimSegment1741 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1741.USE = "hanim_t4";
HAnimHumanoid15.segments[126] = HAnimSegment1741;

let HAnimSegment1742 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1742.USE = "hanim_t5";
HAnimHumanoid15.segments[127] = HAnimSegment1742;

let HAnimSegment1743 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1743.USE = "hanim_t6";
HAnimHumanoid15.segments[128] = HAnimSegment1743;

let HAnimSegment1744 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1744.USE = "hanim_t7";
HAnimHumanoid15.segments[129] = HAnimSegment1744;

let HAnimSegment1745 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1745.USE = "hanim_t8";
HAnimHumanoid15.segments[130] = HAnimSegment1745;

let HAnimSegment1746 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1746.USE = "hanim_t9";
HAnimHumanoid15.segments[131] = HAnimSegment1746;

let HAnimSegment1747 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1747.USE = "hanim_t10";
HAnimHumanoid15.segments[132] = HAnimSegment1747;

let HAnimSegment1748 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1748.USE = "hanim_t11";
HAnimHumanoid15.segments[133] = HAnimSegment1748;

let HAnimSegment1749 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1749.USE = "hanim_t12";
HAnimHumanoid15.segments[134] = HAnimSegment1749;

let HAnimSegment1750 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1750.USE = "hanim_l1";
HAnimHumanoid15.segments[135] = HAnimSegment1750;

let HAnimSegment1751 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1751.USE = "hanim_l2";
HAnimHumanoid15.segments[136] = HAnimSegment1751;

let HAnimSegment1752 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1752.USE = "hanim_l3";
HAnimHumanoid15.segments[137] = HAnimSegment1752;

let HAnimSegment1753 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1753.USE = "hanim_l4";
HAnimHumanoid15.segments[138] = HAnimSegment1753;

let HAnimSegment1754 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1754.USE = "hanim_l5";
HAnimHumanoid15.segments[139] = HAnimSegment1754;

let HAnimSegment1755 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1755.USE = "hanim_sacrum";
HAnimHumanoid15.segments[140] = HAnimSegment1755;

let HAnimSegment1756 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1756.USE = "hanim_l_calf";
HAnimHumanoid15.segments[141] = HAnimSegment1756;

let HAnimSegment1757 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1757.USE = "hanim_r_calf";
HAnimHumanoid15.segments[142] = HAnimSegment1757;

let HAnimSegment1758 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1758.USE = "hanim_l_clavicle";
HAnimHumanoid15.segments[143] = HAnimSegment1758;

let HAnimSegment1759 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1759.USE = "hanim_r_clavicle";
HAnimHumanoid15.segments[144] = HAnimSegment1759;

let HAnimSegment1760 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1760.USE = "hanim_l_eyeball";
HAnimHumanoid15.segments[145] = HAnimSegment1760;

let HAnimSegment1761 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1761.USE = "hanim_r_eyeball";
HAnimHumanoid15.segments[146] = HAnimSegment1761;

let HAnimSegment1762 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1762.USE = "hanim_l_eyebrow";
HAnimHumanoid15.segments[147] = HAnimSegment1762;

let HAnimSegment1763 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1763.USE = "hanim_r_eyebrow";
HAnimHumanoid15.segments[148] = HAnimSegment1763;

let HAnimSegment1764 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1764.USE = "hanim_l_eyelid";
HAnimHumanoid15.segments[149] = HAnimSegment1764;

let HAnimSegment1765 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1765.USE = "hanim_r_eyelid";
HAnimHumanoid15.segments[150] = HAnimSegment1765;

let HAnimSegment1766 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1766.USE = "hanim_l_forearm";
HAnimHumanoid15.segments[151] = HAnimSegment1766;

let HAnimSegment1767 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1767.USE = "hanim_r_forearm";
HAnimHumanoid15.segments[152] = HAnimSegment1767;

let HAnimSegment1768 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1768.USE = "hanim_l_forefoot";
HAnimHumanoid15.segments[153] = HAnimSegment1768;

let HAnimSegment1769 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1769.USE = "hanim_r_forefoot";
HAnimHumanoid15.segments[154] = HAnimSegment1769;

let HAnimSegment1770 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1770.USE = "hanim_l_hand";
HAnimHumanoid15.segments[155] = HAnimSegment1770;

let HAnimSegment1771 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1771.USE = "hanim_r_hand";
HAnimHumanoid15.segments[156] = HAnimSegment1771;

let HAnimSegment1772 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1772.USE = "hanim_l_hindfoot";
HAnimHumanoid15.segments[157] = HAnimSegment1772;

let HAnimSegment1773 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1773.USE = "hanim_r_hindfoot";
HAnimHumanoid15.segments[158] = HAnimSegment1773;

let HAnimSegment1774 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1774.USE = "hanim_l_index_distal";
HAnimHumanoid15.segments[159] = HAnimSegment1774;

let HAnimSegment1775 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1775.USE = "hanim_r_index_distal";
HAnimHumanoid15.segments[160] = HAnimSegment1775;

let HAnimSegment1776 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1776.USE = "hanim_l_index_metacarpal";
HAnimHumanoid15.segments[161] = HAnimSegment1776;

let HAnimSegment1777 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1777.USE = "hanim_r_index_metacarpal";
HAnimHumanoid15.segments[162] = HAnimSegment1777;

let HAnimSegment1778 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1778.USE = "hanim_l_index_middle";
HAnimHumanoid15.segments[163] = HAnimSegment1778;

let HAnimSegment1779 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1779.USE = "hanim_r_index_middle";
HAnimHumanoid15.segments[164] = HAnimSegment1779;

let HAnimSegment1780 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1780.USE = "hanim_l_index_proximal";
HAnimHumanoid15.segments[165] = HAnimSegment1780;

let HAnimSegment1781 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1781.USE = "hanim_r_index_proximal";
HAnimHumanoid15.segments[166] = HAnimSegment1781;

let HAnimSegment1782 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1782.USE = "hanim_l_middistal";
HAnimHumanoid15.segments[167] = HAnimSegment1782;

let HAnimSegment1783 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1783.USE = "hanim_r_middistal";
HAnimHumanoid15.segments[168] = HAnimSegment1783;

let HAnimSegment1784 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1784.USE = "hanim_l_middle_distal";
HAnimHumanoid15.segments[169] = HAnimSegment1784;

let HAnimSegment1785 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1785.USE = "hanim_r_middle_distal";
HAnimHumanoid15.segments[170] = HAnimSegment1785;

let HAnimSegment1786 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1786.USE = "hanim_l_middle_metacarpal";
HAnimHumanoid15.segments[171] = HAnimSegment1786;

let HAnimSegment1787 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1787.USE = "hanim_r_middle_metacarpal";
HAnimHumanoid15.segments[172] = HAnimSegment1787;

let HAnimSegment1788 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1788.USE = "hanim_l_middle_middle";
HAnimHumanoid15.segments[173] = HAnimSegment1788;

let HAnimSegment1789 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1789.USE = "hanim_r_middle_middle";
HAnimHumanoid15.segments[174] = HAnimSegment1789;

let HAnimSegment1790 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1790.USE = "hanim_l_middle_proximal";
HAnimHumanoid15.segments[175] = HAnimSegment1790;

let HAnimSegment1791 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1791.USE = "hanim_r_middle_proximal";
HAnimHumanoid15.segments[176] = HAnimSegment1791;

let HAnimSegment1792 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1792.USE = "hanim_l_midproximal";
HAnimHumanoid15.segments[177] = HAnimSegment1792;

let HAnimSegment1793 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1793.USE = "hanim_r_midproximal";
HAnimHumanoid15.segments[178] = HAnimSegment1793;

let HAnimSegment1794 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1794.USE = "hanim_l_pinky_distal";
HAnimHumanoid15.segments[179] = HAnimSegment1794;

let HAnimSegment1795 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1795.USE = "hanim_r_pinky_distal";
HAnimHumanoid15.segments[180] = HAnimSegment1795;

let HAnimSegment1796 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1796.USE = "hanim_l_pinky_metacarpal";
HAnimHumanoid15.segments[181] = HAnimSegment1796;

let HAnimSegment1797 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1797.USE = "hanim_r_pinky_metacarpal";
HAnimHumanoid15.segments[182] = HAnimSegment1797;

let HAnimSegment1798 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1798.USE = "hanim_l_pinky_middle";
HAnimHumanoid15.segments[183] = HAnimSegment1798;

let HAnimSegment1799 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1799.USE = "hanim_r_pinky_middle";
HAnimHumanoid15.segments[184] = HAnimSegment1799;

let HAnimSegment1800 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1800.USE = "hanim_l_pinky_proximal";
HAnimHumanoid15.segments[185] = HAnimSegment1800;

let HAnimSegment1801 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1801.USE = "hanim_r_pinky_proximal";
HAnimHumanoid15.segments[186] = HAnimSegment1801;

let HAnimSegment1802 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1802.USE = "hanim_l_ring_distal";
HAnimHumanoid15.segments[187] = HAnimSegment1802;

let HAnimSegment1803 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1803.USE = "hanim_r_ring_distal";
HAnimHumanoid15.segments[188] = HAnimSegment1803;

let HAnimSegment1804 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1804.USE = "hanim_l_ring_metacarpal";
HAnimHumanoid15.segments[189] = HAnimSegment1804;

let HAnimSegment1805 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1805.USE = "hanim_r_ring_metacarpal";
HAnimHumanoid15.segments[190] = HAnimSegment1805;

let HAnimSegment1806 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1806.USE = "hanim_l_ring_middle";
HAnimHumanoid15.segments[191] = HAnimSegment1806;

let HAnimSegment1807 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1807.USE = "hanim_r_ring_middle";
HAnimHumanoid15.segments[192] = HAnimSegment1807;

let HAnimSegment1808 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1808.USE = "hanim_l_ring_proximal";
HAnimHumanoid15.segments[193] = HAnimSegment1808;

let HAnimSegment1809 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1809.USE = "hanim_r_ring_proximal";
HAnimHumanoid15.segments[194] = HAnimSegment1809;

let HAnimSegment1810 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1810.USE = "hanim_l_scapula";
HAnimHumanoid15.segments[195] = HAnimSegment1810;

let HAnimSegment1811 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1811.USE = "hanim_r_scapula";
HAnimHumanoid15.segments[196] = HAnimSegment1811;

let HAnimSegment1812 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1812.USE = "hanim_l_thigh";
HAnimHumanoid15.segments[197] = HAnimSegment1812;

let HAnimSegment1813 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1813.USE = "hanim_r_thigh";
HAnimHumanoid15.segments[198] = HAnimSegment1813;

let HAnimSegment1814 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1814.USE = "hanim_l_thumb_distal";
HAnimHumanoid15.segments[199] = HAnimSegment1814;

let HAnimSegment1815 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1815.USE = "hanim_r_thumb_distal";
HAnimHumanoid15.segments[200] = HAnimSegment1815;

let HAnimSegment1816 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1816.USE = "hanim_l_thumb_metacarpal";
HAnimHumanoid15.segments[201] = HAnimSegment1816;

let HAnimSegment1817 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1817.USE = "hanim_r_thumb_metacarpal";
HAnimHumanoid15.segments[202] = HAnimSegment1817;

let HAnimSegment1818 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1818.USE = "hanim_l_thumb_proximal";
HAnimHumanoid15.segments[203] = HAnimSegment1818;

let HAnimSegment1819 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1819.USE = "hanim_r_thumb_proximal";
HAnimHumanoid15.segments[204] = HAnimSegment1819;

let HAnimSegment1820 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1820.USE = "hanim_l_upperarm";
HAnimHumanoid15.segments[205] = HAnimSegment1820;

let HAnimSegment1821 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1821.USE = "hanim_r_upperarm";
HAnimHumanoid15.segments[206] = HAnimSegment1821;

let HAnimSite1822 = browser.currentScene.createNode("HAnimSite");
HAnimSite1822.USE = "hanim_crotch_pt";
HAnimHumanoid15.viewpoints[207] = HAnimSite1822;

let HAnimSite1823 = browser.currentScene.createNode("HAnimSite");
HAnimSite1823.USE = "hanim_skull_tip";
HAnimHumanoid15.viewpoints[208] = HAnimSite1823;

let HAnimSite1824 = browser.currentScene.createNode("HAnimSite");
HAnimSite1824.USE = "hanim_sellion_pt";
HAnimHumanoid15.viewpoints[209] = HAnimSite1824;

let HAnimSite1825 = browser.currentScene.createNode("HAnimSite");
HAnimSite1825.USE = "hanim_supramenton_pt";
HAnimHumanoid15.viewpoints[210] = HAnimSite1825;

let HAnimSite1826 = browser.currentScene.createNode("HAnimSite");
HAnimSite1826.USE = "hanim_nuchale_pt";
HAnimHumanoid15.viewpoints[211] = HAnimSite1826;

let HAnimSite1827 = browser.currentScene.createNode("HAnimSite");
HAnimSite1827.USE = "hanim_suprasternale_pt";
HAnimHumanoid15.viewpoints[212] = HAnimSite1827;

let HAnimSite1828 = browser.currentScene.createNode("HAnimSite");
HAnimSite1828.USE = "hanim_cervicale_pt";
HAnimHumanoid15.viewpoints[213] = HAnimSite1828;

let HAnimSite1829 = browser.currentScene.createNode("HAnimSite");
HAnimSite1829.USE = "hanim_substernale_pt";
HAnimHumanoid15.viewpoints[214] = HAnimSite1829;

let HAnimSite1830 = browser.currentScene.createNode("HAnimSite");
HAnimSite1830.USE = "hanim_rib10_midspine_pt";
HAnimHumanoid15.viewpoints[215] = HAnimSite1830;

let HAnimSite1831 = browser.currentScene.createNode("HAnimSite");
HAnimSite1831.USE = "hanim_waist_preferred_post_pt";
HAnimHumanoid15.viewpoints[216] = HAnimSite1831;

let HAnimSite1832 = browser.currentScene.createNode("HAnimSite");
HAnimSite1832.USE = "hanim_navel_pt";
HAnimHumanoid15.viewpoints[217] = HAnimSite1832;

let HAnimSite1833 = browser.currentScene.createNode("HAnimSite");
HAnimSite1833.USE = "hanim_l_acromion_pt";
HAnimHumanoid15.viewpoints[218] = HAnimSite1833;

let HAnimSite1834 = browser.currentScene.createNode("HAnimSite");
HAnimSite1834.USE = "hanim_r_acromion_pt";
HAnimHumanoid15.viewpoints[219] = HAnimSite1834;

let HAnimSite1835 = browser.currentScene.createNode("HAnimSite");
HAnimSite1835.USE = "hanim_r_asis_pt";
HAnimHumanoid15.viewpoints[220] = HAnimSite1835;

let HAnimSite1836 = browser.currentScene.createNode("HAnimSite");
HAnimSite1836.USE = "hanim_l_asis_pt";
HAnimHumanoid15.viewpoints[221] = HAnimSite1836;

let HAnimSite1837 = browser.currentScene.createNode("HAnimSite");
HAnimSite1837.USE = "hanim_l_axilla_ant_pt";
HAnimHumanoid15.viewpoints[222] = HAnimSite1837;

let HAnimSite1838 = browser.currentScene.createNode("HAnimSite");
HAnimSite1838.USE = "hanim_r_axilla_ant_pt";
HAnimHumanoid15.viewpoints[223] = HAnimSite1838;

let HAnimSite1839 = browser.currentScene.createNode("HAnimSite");
HAnimSite1839.USE = "hanim_l_axilla_post_pt";
HAnimHumanoid15.viewpoints[224] = HAnimSite1839;

let HAnimSite1840 = browser.currentScene.createNode("HAnimSite");
HAnimSite1840.USE = "hanim_r_axilla_post_pt";
HAnimHumanoid15.viewpoints[225] = HAnimSite1840;

let HAnimSite1841 = browser.currentScene.createNode("HAnimSite");
HAnimSite1841.USE = "hanim_l_calcaneous_post_pt";
HAnimHumanoid15.viewpoints[226] = HAnimSite1841;

let HAnimSite1842 = browser.currentScene.createNode("HAnimSite");
HAnimSite1842.USE = "hanim_r_calcaneous_post_pt";
HAnimHumanoid15.viewpoints[227] = HAnimSite1842;

let HAnimSite1843 = browser.currentScene.createNode("HAnimSite");
HAnimSite1843.USE = "hanim_l_clavicale_pt";
HAnimHumanoid15.viewpoints[228] = HAnimSite1843;

let HAnimSite1844 = browser.currentScene.createNode("HAnimSite");
HAnimSite1844.USE = "hanim_r_clavicale_pt";
HAnimHumanoid15.viewpoints[229] = HAnimSite1844;

let HAnimSite1845 = browser.currentScene.createNode("HAnimSite");
HAnimSite1845.USE = "hanim_l_dactylion_pt";
HAnimHumanoid15.viewpoints[230] = HAnimSite1845;

let HAnimSite1846 = browser.currentScene.createNode("HAnimSite");
HAnimSite1846.USE = "hanim_r_dactylion_pt";
HAnimHumanoid15.viewpoints[231] = HAnimSite1846;

let HAnimSite1847 = browser.currentScene.createNode("HAnimSite");
HAnimSite1847.USE = "hanim_l_digit2_pt";
HAnimHumanoid15.viewpoints[232] = HAnimSite1847;

let HAnimSite1848 = browser.currentScene.createNode("HAnimSite");
HAnimSite1848.USE = "hanim_r_digit2_pt";
HAnimHumanoid15.viewpoints[233] = HAnimSite1848;

let HAnimSite1849 = browser.currentScene.createNode("HAnimSite");
HAnimSite1849.USE = "hanim_l_femoral_lateral_epicn_pt";
HAnimHumanoid15.viewpoints[234] = HAnimSite1849;

let HAnimSite1850 = browser.currentScene.createNode("HAnimSite");
HAnimSite1850.USE = "hanim_r_femoral_lateral_epicn_pt";
HAnimHumanoid15.viewpoints[235] = HAnimSite1850;

let HAnimSite1851 = browser.currentScene.createNode("HAnimSite");
HAnimSite1851.USE = "hanim_l_femoral_medial_epicn_pt";
HAnimHumanoid15.viewpoints[236] = HAnimSite1851;

let HAnimSite1852 = browser.currentScene.createNode("HAnimSite");
HAnimSite1852.USE = "hanim_r_femoral_medial_epicn_pt";
HAnimHumanoid15.viewpoints[237] = HAnimSite1852;

let HAnimSite1853 = browser.currentScene.createNode("HAnimSite");
HAnimSite1853.USE = "hanim_l_forefoot_tip";
HAnimHumanoid15.viewpoints[238] = HAnimSite1853;

let HAnimSite1854 = browser.currentScene.createNode("HAnimSite");
HAnimSite1854.USE = "hanim_r_forefoot_tip";
HAnimHumanoid15.viewpoints[239] = HAnimSite1854;

let HAnimSite1855 = browser.currentScene.createNode("HAnimSite");
HAnimSite1855.USE = "hanim_r_gonion_pt";
HAnimHumanoid15.viewpoints[240] = HAnimSite1855;

let HAnimSite1856 = browser.currentScene.createNode("HAnimSite");
HAnimSite1856.USE = "hanim_l_gonion_pt";
HAnimHumanoid15.viewpoints[241] = HAnimSite1856;

let HAnimSite1857 = browser.currentScene.createNode("HAnimSite");
HAnimSite1857.USE = "hanim_l_humeral_lateral_epicn_pt";
HAnimHumanoid15.viewpoints[242] = HAnimSite1857;

let HAnimSite1858 = browser.currentScene.createNode("HAnimSite");
HAnimSite1858.USE = "hanim_r_humeral_lateral_epicn_pt";
HAnimHumanoid15.viewpoints[243] = HAnimSite1858;

let HAnimSite1859 = browser.currentScene.createNode("HAnimSite");
HAnimSite1859.USE = "hanim_l_humeral_medial_epicn_pt";
HAnimHumanoid15.viewpoints[244] = HAnimSite1859;

let HAnimSite1860 = browser.currentScene.createNode("HAnimSite");
HAnimSite1860.USE = "hanim_r_humeral_medial_epicn_pt";
HAnimHumanoid15.viewpoints[245] = HAnimSite1860;

let HAnimSite1861 = browser.currentScene.createNode("HAnimSite");
HAnimSite1861.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid15.viewpoints[246] = HAnimSite1861;

let HAnimSite1862 = browser.currentScene.createNode("HAnimSite");
HAnimSite1862.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid15.viewpoints[247] = HAnimSite1862;

let HAnimSite1863 = browser.currentScene.createNode("HAnimSite");
HAnimSite1863.USE = "hanim_l_index_distal_tip";
HAnimHumanoid15.viewpoints[248] = HAnimSite1863;

let HAnimSite1864 = browser.currentScene.createNode("HAnimSite");
HAnimSite1864.USE = "hanim_r_index_distal_tip";
HAnimHumanoid15.viewpoints[249] = HAnimSite1864;

let HAnimSite1865 = browser.currentScene.createNode("HAnimSite");
HAnimSite1865.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid15.viewpoints[250] = HAnimSite1865;

let HAnimSite1866 = browser.currentScene.createNode("HAnimSite");
HAnimSite1866.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid15.viewpoints[251] = HAnimSite1866;

let HAnimSite1867 = browser.currentScene.createNode("HAnimSite");
HAnimSite1867.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid15.viewpoints[252] = HAnimSite1867;

let HAnimSite1868 = browser.currentScene.createNode("HAnimSite");
HAnimSite1868.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid15.viewpoints[253] = HAnimSite1868;

let HAnimSite1869 = browser.currentScene.createNode("HAnimSite");
HAnimSite1869.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid15.viewpoints[254] = HAnimSite1869;

let HAnimSite1870 = browser.currentScene.createNode("HAnimSite");
HAnimSite1870.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid15.viewpoints[255] = HAnimSite1870;

let HAnimSite1871 = browser.currentScene.createNode("HAnimSite");
HAnimSite1871.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid15.viewpoints[256] = HAnimSite1871;

let HAnimSite1872 = browser.currentScene.createNode("HAnimSite");
HAnimSite1872.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid15.viewpoints[257] = HAnimSite1872;

let HAnimSite1873 = browser.currentScene.createNode("HAnimSite");
HAnimSite1873.USE = "hanim_l_metacarpal_pha2_pt";
HAnimHumanoid15.viewpoints[258] = HAnimSite1873;

let HAnimSite1874 = browser.currentScene.createNode("HAnimSite");
HAnimSite1874.USE = "hanim_r_metacarpal_pha2_pt";
HAnimHumanoid15.viewpoints[259] = HAnimSite1874;

let HAnimSite1875 = browser.currentScene.createNode("HAnimSite");
HAnimSite1875.USE = "hanim_l_metacarpal_pha5_pt";
HAnimHumanoid15.viewpoints[260] = HAnimSite1875;

let HAnimSite1876 = browser.currentScene.createNode("HAnimSite");
HAnimSite1876.USE = "hanim_r_metacarpal_pha5_pt";
HAnimHumanoid15.viewpoints[261] = HAnimSite1876;

let HAnimSite1877 = browser.currentScene.createNode("HAnimSite");
HAnimSite1877.USE = "hanim_l_metatarsal_pha1_pt";
HAnimHumanoid15.viewpoints[262] = HAnimSite1877;

let HAnimSite1878 = browser.currentScene.createNode("HAnimSite");
HAnimSite1878.USE = "hanim_r_metatarsal_pha1_pt";
HAnimHumanoid15.viewpoints[263] = HAnimSite1878;

let HAnimSite1879 = browser.currentScene.createNode("HAnimSite");
HAnimSite1879.USE = "hanim_l_metatarsal_pha5_pt";
HAnimHumanoid15.viewpoints[264] = HAnimSite1879;

let HAnimSite1880 = browser.currentScene.createNode("HAnimSite");
HAnimSite1880.USE = "hanim_r_metatarsal_pha5_pt";
HAnimHumanoid15.viewpoints[265] = HAnimSite1880;

let HAnimSite1881 = browser.currentScene.createNode("HAnimSite");
HAnimSite1881.USE = "hanim_l_middle_distal_tip";
HAnimHumanoid15.viewpoints[266] = HAnimSite1881;

let HAnimSite1882 = browser.currentScene.createNode("HAnimSite");
HAnimSite1882.USE = "hanim_r_middle_distal_tip";
HAnimHumanoid15.viewpoints[267] = HAnimSite1882;

let HAnimSite1883 = browser.currentScene.createNode("HAnimSite");
HAnimSite1883.USE = "hanim_r_neck_base_pt";
HAnimHumanoid15.viewpoints[268] = HAnimSite1883;

let HAnimSite1884 = browser.currentScene.createNode("HAnimSite");
HAnimSite1884.USE = "hanim_l_neck_base_pt";
HAnimHumanoid15.viewpoints[269] = HAnimSite1884;

let HAnimSite1885 = browser.currentScene.createNode("HAnimSite");
HAnimSite1885.USE = "hanim_l_olecranon_pt";
HAnimHumanoid15.viewpoints[270] = HAnimSite1885;

let HAnimSite1886 = browser.currentScene.createNode("HAnimSite");
HAnimSite1886.USE = "hanim_r_olecranon_pt";
HAnimHumanoid15.viewpoints[271] = HAnimSite1886;

let HAnimSite1887 = browser.currentScene.createNode("HAnimSite");
HAnimSite1887.USE = "hanim_l_pinky_distal_tip";
HAnimHumanoid15.viewpoints[272] = HAnimSite1887;

let HAnimSite1888 = browser.currentScene.createNode("HAnimSite");
HAnimSite1888.USE = "hanim_r_pinky_distal_tip";
HAnimHumanoid15.viewpoints[273] = HAnimSite1888;

let HAnimSite1889 = browser.currentScene.createNode("HAnimSite");
HAnimSite1889.USE = "hanim_r_psis_pt";
HAnimHumanoid15.viewpoints[274] = HAnimSite1889;

let HAnimSite1890 = browser.currentScene.createNode("HAnimSite");
HAnimSite1890.USE = "hanim_l_psis_pt";
HAnimHumanoid15.viewpoints[275] = HAnimSite1890;

let HAnimSite1891 = browser.currentScene.createNode("HAnimSite");
HAnimSite1891.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid15.viewpoints[276] = HAnimSite1891;

let HAnimSite1892 = browser.currentScene.createNode("HAnimSite");
HAnimSite1892.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid15.viewpoints[277] = HAnimSite1892;

let HAnimSite1893 = browser.currentScene.createNode("HAnimSite");
HAnimSite1893.USE = "hanim_l_radiale_pt";
HAnimHumanoid15.viewpoints[278] = HAnimSite1893;

let HAnimSite1894 = browser.currentScene.createNode("HAnimSite");
HAnimSite1894.USE = "hanim_r_radiale_pt";
HAnimHumanoid15.viewpoints[279] = HAnimSite1894;

let HAnimSite1895 = browser.currentScene.createNode("HAnimSite");
HAnimSite1895.USE = "hanim_r_rib10_pt";
HAnimHumanoid15.viewpoints[280] = HAnimSite1895;

let HAnimSite1896 = browser.currentScene.createNode("HAnimSite");
HAnimSite1896.USE = "hanim_l_rib10_pt";
HAnimHumanoid15.viewpoints[281] = HAnimSite1896;

let HAnimSite1897 = browser.currentScene.createNode("HAnimSite");
HAnimSite1897.USE = "hanim_l_ring_distal_tip";
HAnimHumanoid15.viewpoints[282] = HAnimSite1897;

let HAnimSite1898 = browser.currentScene.createNode("HAnimSite");
HAnimSite1898.USE = "hanim_r_ring_distal_tip";
HAnimHumanoid15.viewpoints[283] = HAnimSite1898;

let HAnimSite1899 = browser.currentScene.createNode("HAnimSite");
HAnimSite1899.USE = "hanim_temporomandibular_l_site_pt";
HAnimHumanoid15.viewpoints[284] = HAnimSite1899;

let HAnimSite1900 = browser.currentScene.createNode("HAnimSite");
HAnimSite1900.USE = "hanim_temporomandibular_r_site_pt";
HAnimHumanoid15.viewpoints[285] = HAnimSite1900;

let HAnimSite1901 = browser.currentScene.createNode("HAnimSite");
HAnimSite1901.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid15.viewpoints[286] = HAnimSite1901;

let HAnimSite1902 = browser.currentScene.createNode("HAnimSite");
HAnimSite1902.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid15.viewpoints[287] = HAnimSite1902;

let HAnimSite1903 = browser.currentScene.createNode("HAnimSite");
HAnimSite1903.USE = "hanim_r_thelion_pt";
HAnimHumanoid15.viewpoints[288] = HAnimSite1903;

let HAnimSite1904 = browser.currentScene.createNode("HAnimSite");
HAnimSite1904.USE = "hanim_l_thelion_pt";
HAnimHumanoid15.viewpoints[289] = HAnimSite1904;

let HAnimSite1905 = browser.currentScene.createNode("HAnimSite");
HAnimSite1905.USE = "hanim_l_thumb_distal_tip";
HAnimHumanoid15.viewpoints[290] = HAnimSite1905;

let HAnimSite1906 = browser.currentScene.createNode("HAnimSite");
HAnimSite1906.USE = "hanim_r_thumb_distal_tip";
HAnimHumanoid15.viewpoints[291] = HAnimSite1906;

let HAnimSite1907 = browser.currentScene.createNode("HAnimSite");
HAnimSite1907.USE = "hanim_r_tragion_pt";
HAnimHumanoid15.viewpoints[292] = HAnimSite1907;

let HAnimSite1908 = browser.currentScene.createNode("HAnimSite");
HAnimSite1908.USE = "hanim_l_tragion_pt";
HAnimHumanoid15.viewpoints[293] = HAnimSite1908;

let HAnimSite1909 = browser.currentScene.createNode("HAnimSite");
HAnimSite1909.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid15.viewpoints[294] = HAnimSite1909;

let HAnimSite1910 = browser.currentScene.createNode("HAnimSite");
HAnimSite1910.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid15.viewpoints[295] = HAnimSite1910;

let HAnimSite1911 = browser.currentScene.createNode("HAnimSite");
HAnimSite1911.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid15.viewpoints[296] = HAnimSite1911;

let HAnimSite1912 = browser.currentScene.createNode("HAnimSite");
HAnimSite1912.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid15.viewpoints[297] = HAnimSite1912;

browser.currentScene.children[12] = HAnimHumanoid15;

let Group1913 = browser.currentScene.createNode("Group");
Group1913.DEF = "StopAnimation";
let TimeSensor1914 = browser.currentScene.createNode("TimeSensor");
TimeSensor1914.DEF = "StopTimer";
TimeSensor1914.cycleInterval = 5.73;
TimeSensor1914.loop = True;
Group1913.children = new MFNode();

Group1913.children[0] = TimeSensor1914;

let PositionInterpolator1915 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator1915.DEF = "Stop_HumanoidRoot_TranslationInterpolator";
PositionInterpolator1915.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator1915.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group1913.children[1] = PositionInterpolator1915;

let OrientationInterpolator1916 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1916.DEF = "Stop_HumanoidRoot_RotationInterpolator";
OrientationInterpolator1916.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1916.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[2] = OrientationInterpolator1916;

let OrientationInterpolator1917 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1917.DEF = "Stop_sacroiliac_RotationInterpolator";
OrientationInterpolator1917.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1917.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[3] = OrientationInterpolator1917;

let OrientationInterpolator1918 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1918.DEF = "Stop_l_hip_RotationInterpolator";
OrientationInterpolator1918.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1918.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[4] = OrientationInterpolator1918;

let OrientationInterpolator1919 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1919.DEF = "Stop_l_knee_RotationInterpolator";
OrientationInterpolator1919.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1919.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[5] = OrientationInterpolator1919;

let OrientationInterpolator1920 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1920.DEF = "Stop_l_ankle_RotationInterpolator";
OrientationInterpolator1920.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1920.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[6] = OrientationInterpolator1920;

let OrientationInterpolator1921 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1921.DEF = "Stop_l_subtalar_RotationInterpolator";
OrientationInterpolator1921.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1921.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[7] = OrientationInterpolator1921;

let OrientationInterpolator1922 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1922.DEF = "Stop_l_midtarsal_RotationInterpolator";
OrientationInterpolator1922.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1922.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[8] = OrientationInterpolator1922;

let OrientationInterpolator1923 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1923.DEF = "Stop_l_metatarsal_RotationInterpolator";
OrientationInterpolator1923.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1923.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[9] = OrientationInterpolator1923;

let OrientationInterpolator1924 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1924.DEF = "Stop_r_hip_RotationInterpolator";
OrientationInterpolator1924.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1924.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[10] = OrientationInterpolator1924;

let OrientationInterpolator1925 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1925.DEF = "Stop_r_knee_RotationInterpolator";
OrientationInterpolator1925.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1925.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[11] = OrientationInterpolator1925;

let OrientationInterpolator1926 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1926.DEF = "Stop_r_ankle_RotationInterpolator";
OrientationInterpolator1926.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1926.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[12] = OrientationInterpolator1926;

let OrientationInterpolator1927 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1927.DEF = "Stop_r_subtalar_RotationInterpolator";
OrientationInterpolator1927.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1927.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[13] = OrientationInterpolator1927;

let OrientationInterpolator1928 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1928.DEF = "Stop_r_midtarsal_RotationInterpolator";
OrientationInterpolator1928.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1928.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[14] = OrientationInterpolator1928;

let OrientationInterpolator1929 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1929.DEF = "Stop_r_metatarsal_RotationInterpolator";
OrientationInterpolator1929.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1929.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[15] = OrientationInterpolator1929;

let OrientationInterpolator1930 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1930.DEF = "Stop_vl5_RotationInterpolator";
OrientationInterpolator1930.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1930.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[16] = OrientationInterpolator1930;

let OrientationInterpolator1931 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1931.DEF = "Stop_vl4_RotationInterpolator";
OrientationInterpolator1931.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1931.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[17] = OrientationInterpolator1931;

let OrientationInterpolator1932 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1932.DEF = "Stop_vl3_RotationInterpolator";
OrientationInterpolator1932.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1932.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[18] = OrientationInterpolator1932;

let OrientationInterpolator1933 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1933.DEF = "Stop_vl2_RotationInterpolator";
OrientationInterpolator1933.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1933.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[19] = OrientationInterpolator1933;

let OrientationInterpolator1934 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1934.DEF = "Stop_vl1_RotationInterpolator";
OrientationInterpolator1934.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1934.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[20] = OrientationInterpolator1934;

let OrientationInterpolator1935 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1935.DEF = "Stop_vt12_RotationInterpolator";
OrientationInterpolator1935.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1935.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[21] = OrientationInterpolator1935;

let OrientationInterpolator1936 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1936.DEF = "Stop_vt11_RotationInterpolator";
OrientationInterpolator1936.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1936.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[22] = OrientationInterpolator1936;

let OrientationInterpolator1937 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1937.DEF = "Stop_vt10_RotationInterpolator";
OrientationInterpolator1937.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1937.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[23] = OrientationInterpolator1937;

let OrientationInterpolator1938 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1938.DEF = "Stop_vt9_RotationInterpolator";
OrientationInterpolator1938.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1938.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[24] = OrientationInterpolator1938;

let OrientationInterpolator1939 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1939.DEF = "Stop_vt8_RotationInterpolator";
OrientationInterpolator1939.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1939.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[25] = OrientationInterpolator1939;

let OrientationInterpolator1940 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1940.DEF = "Stop_vt7_RotationInterpolator";
OrientationInterpolator1940.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1940.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[26] = OrientationInterpolator1940;

let OrientationInterpolator1941 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1941.DEF = "Stop_vt6_RotationInterpolator";
OrientationInterpolator1941.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1941.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[27] = OrientationInterpolator1941;

let OrientationInterpolator1942 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1942.DEF = "Stop_vt5_RotationInterpolator";
OrientationInterpolator1942.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1942.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[28] = OrientationInterpolator1942;

let OrientationInterpolator1943 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1943.DEF = "Stop_vt4_RotationInterpolator";
OrientationInterpolator1943.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1943.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[29] = OrientationInterpolator1943;

let OrientationInterpolator1944 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1944.DEF = "Stop_vt3_RotationInterpolator";
OrientationInterpolator1944.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1944.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[30] = OrientationInterpolator1944;

let OrientationInterpolator1945 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1945.DEF = "Stop_vt2_RotationInterpolator";
OrientationInterpolator1945.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1945.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[31] = OrientationInterpolator1945;

let OrientationInterpolator1946 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1946.DEF = "Stop_vt1_RotationInterpolator";
OrientationInterpolator1946.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1946.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[32] = OrientationInterpolator1946;

let OrientationInterpolator1947 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1947.DEF = "Stop_vc7_RotationInterpolator";
OrientationInterpolator1947.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1947.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[33] = OrientationInterpolator1947;

let OrientationInterpolator1948 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1948.DEF = "Stop_vc6_RotationInterpolator";
OrientationInterpolator1948.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1948.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[34] = OrientationInterpolator1948;

let OrientationInterpolator1949 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1949.DEF = "Stop_vc5_RotationInterpolator";
OrientationInterpolator1949.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1949.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[35] = OrientationInterpolator1949;

let OrientationInterpolator1950 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1950.DEF = "Stop_vc4_RotationInterpolator";
OrientationInterpolator1950.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1950.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[36] = OrientationInterpolator1950;

let OrientationInterpolator1951 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1951.DEF = "Stop_vc3_RotationInterpolator";
OrientationInterpolator1951.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1951.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[37] = OrientationInterpolator1951;

let OrientationInterpolator1952 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1952.DEF = "Stop_vc2_RotationInterpolator";
OrientationInterpolator1952.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1952.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[38] = OrientationInterpolator1952;

let OrientationInterpolator1953 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1953.DEF = "Stop_vc1_RotationInterpolator";
OrientationInterpolator1953.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1953.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[39] = OrientationInterpolator1953;

let OrientationInterpolator1954 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1954.DEF = "Stop_skullbase_RotationInterpolator";
OrientationInterpolator1954.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1954.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[40] = OrientationInterpolator1954;

let OrientationInterpolator1955 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1955.DEF = "Stop_l_eyeball_joint_RotationInterpolator";
OrientationInterpolator1955.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1955.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[41] = OrientationInterpolator1955;

let OrientationInterpolator1956 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1956.DEF = "Stop_r_eyeball_joint_RotationInterpolator";
OrientationInterpolator1956.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1956.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[42] = OrientationInterpolator1956;

let OrientationInterpolator1957 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1957.DEF = "Stop_l_sternoclavicular_RotationInterpolator";
OrientationInterpolator1957.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1957.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[43] = OrientationInterpolator1957;

let OrientationInterpolator1958 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1958.DEF = "Stop_l_acromioclavicular_RotationInterpolator";
OrientationInterpolator1958.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1958.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[44] = OrientationInterpolator1958;

let OrientationInterpolator1959 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1959.DEF = "Stop_l_shoulder_RotationInterpolator";
OrientationInterpolator1959.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1959.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[45] = OrientationInterpolator1959;

let OrientationInterpolator1960 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1960.DEF = "Stop_l_elbow_RotationInterpolator";
OrientationInterpolator1960.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1960.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[46] = OrientationInterpolator1960;

let OrientationInterpolator1961 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1961.DEF = "Stop_l_wrist_RotationInterpolator";
OrientationInterpolator1961.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1961.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[47] = OrientationInterpolator1961;

let OrientationInterpolator1962 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1962.DEF = "Stop_l_thumb1_RotationInterpolator";
OrientationInterpolator1962.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1962.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[48] = OrientationInterpolator1962;

let OrientationInterpolator1963 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1963.DEF = "Stop_l_thumb2_RotationInterpolator";
OrientationInterpolator1963.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1963.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[49] = OrientationInterpolator1963;

let OrientationInterpolator1964 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1964.DEF = "Stop_l_thumb3_RotationInterpolator";
OrientationInterpolator1964.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1964.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[50] = OrientationInterpolator1964;

let OrientationInterpolator1965 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1965.DEF = "Stop_l_index0_RotationInterpolator";
OrientationInterpolator1965.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1965.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[51] = OrientationInterpolator1965;

let OrientationInterpolator1966 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1966.DEF = "Stop_l_index1_RotationInterpolator";
OrientationInterpolator1966.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1966.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[52] = OrientationInterpolator1966;

let OrientationInterpolator1967 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1967.DEF = "Stop_l_index2_RotationInterpolator";
OrientationInterpolator1967.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1967.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[53] = OrientationInterpolator1967;

let OrientationInterpolator1968 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1968.DEF = "Stop_l_index3_RotationInterpolator";
OrientationInterpolator1968.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1968.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[54] = OrientationInterpolator1968;

let OrientationInterpolator1969 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1969.DEF = "Stop_l_middle0_RotationInterpolator";
OrientationInterpolator1969.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1969.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[55] = OrientationInterpolator1969;

let OrientationInterpolator1970 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1970.DEF = "Stop_l_middle1_RotationInterpolator";
OrientationInterpolator1970.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1970.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[56] = OrientationInterpolator1970;

let OrientationInterpolator1971 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1971.DEF = "Stop_l_middle2_RotationInterpolator";
OrientationInterpolator1971.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1971.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[57] = OrientationInterpolator1971;

let OrientationInterpolator1972 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1972.DEF = "Stop_l_middle3_RotationInterpolator";
OrientationInterpolator1972.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1972.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[58] = OrientationInterpolator1972;

let OrientationInterpolator1973 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1973.DEF = "Stop_l_ring0_RotationInterpolator";
OrientationInterpolator1973.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1973.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[59] = OrientationInterpolator1973;

let OrientationInterpolator1974 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1974.DEF = "Stop_l_ring1_RotationInterpolator";
OrientationInterpolator1974.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1974.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[60] = OrientationInterpolator1974;

let OrientationInterpolator1975 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1975.DEF = "Stop_l_ring2_RotationInterpolator";
OrientationInterpolator1975.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1975.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[61] = OrientationInterpolator1975;

let OrientationInterpolator1976 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1976.DEF = "Stop_l_ring3_RotationInterpolator";
OrientationInterpolator1976.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1976.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[62] = OrientationInterpolator1976;

let OrientationInterpolator1977 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1977.DEF = "Stop_l_pinky0_RotationInterpolator";
OrientationInterpolator1977.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1977.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[63] = OrientationInterpolator1977;

let OrientationInterpolator1978 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1978.DEF = "Stop_l_pinky1_RotationInterpolator";
OrientationInterpolator1978.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1978.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[64] = OrientationInterpolator1978;

let OrientationInterpolator1979 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1979.DEF = "Stop_l_pinky2_RotationInterpolator";
OrientationInterpolator1979.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1979.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[65] = OrientationInterpolator1979;

let OrientationInterpolator1980 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1980.DEF = "Stop_l_pinky3_RotationInterpolator";
OrientationInterpolator1980.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1980.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[66] = OrientationInterpolator1980;

let OrientationInterpolator1981 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1981.DEF = "Stop_r_sternoclavicular_RotationInterpolator";
OrientationInterpolator1981.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1981.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[67] = OrientationInterpolator1981;

let OrientationInterpolator1982 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1982.DEF = "Stop_r_acromioclavicular_RotationInterpolator";
OrientationInterpolator1982.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1982.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[68] = OrientationInterpolator1982;

let OrientationInterpolator1983 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1983.DEF = "Stop_r_shoulder_RotationInterpolator";
OrientationInterpolator1983.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1983.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[69] = OrientationInterpolator1983;

let OrientationInterpolator1984 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1984.DEF = "Stop_r_elbow_RotationInterpolator";
OrientationInterpolator1984.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1984.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[70] = OrientationInterpolator1984;

let OrientationInterpolator1985 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1985.DEF = "Stop_r_wrist_RotationInterpolator";
OrientationInterpolator1985.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1985.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[71] = OrientationInterpolator1985;

let OrientationInterpolator1986 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1986.DEF = "Stop_r_thumb1_RotationInterpolator";
OrientationInterpolator1986.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1986.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[72] = OrientationInterpolator1986;

let OrientationInterpolator1987 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1987.DEF = "Stop_r_thumb2_RotationInterpolator";
OrientationInterpolator1987.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1987.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[73] = OrientationInterpolator1987;

let OrientationInterpolator1988 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1988.DEF = "Stop_r_thumb3_RotationInterpolator";
OrientationInterpolator1988.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1988.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[74] = OrientationInterpolator1988;

let OrientationInterpolator1989 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1989.DEF = "Stop_r_index0_RotationInterpolator";
OrientationInterpolator1989.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1989.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[75] = OrientationInterpolator1989;

let OrientationInterpolator1990 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1990.DEF = "Stop_r_index1_RotationInterpolator";
OrientationInterpolator1990.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1990.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[76] = OrientationInterpolator1990;

let OrientationInterpolator1991 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1991.DEF = "Stop_r_index2_RotationInterpolator";
OrientationInterpolator1991.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1991.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[77] = OrientationInterpolator1991;

let OrientationInterpolator1992 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1992.DEF = "Stop_r_index3_RotationInterpolator";
OrientationInterpolator1992.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1992.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[78] = OrientationInterpolator1992;

let OrientationInterpolator1993 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1993.DEF = "Stop_r_middle0_RotationInterpolator";
OrientationInterpolator1993.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1993.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[79] = OrientationInterpolator1993;

let OrientationInterpolator1994 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1994.DEF = "Stop_r_middle1_RotationInterpolator";
OrientationInterpolator1994.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1994.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[80] = OrientationInterpolator1994;

let OrientationInterpolator1995 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1995.DEF = "Stop_r_middle2_RotationInterpolator";
OrientationInterpolator1995.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1995.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[81] = OrientationInterpolator1995;

let OrientationInterpolator1996 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1996.DEF = "Stop_r_middle3_RotationInterpolator";
OrientationInterpolator1996.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1996.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[82] = OrientationInterpolator1996;

let OrientationInterpolator1997 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1997.DEF = "Stop_r_ring0_RotationInterpolator";
OrientationInterpolator1997.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1997.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[83] = OrientationInterpolator1997;

let OrientationInterpolator1998 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1998.DEF = "Stop_r_ring1_RotationInterpolator";
OrientationInterpolator1998.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1998.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[84] = OrientationInterpolator1998;

let OrientationInterpolator1999 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1999.DEF = "Stop_r_ring2_RotationInterpolator";
OrientationInterpolator1999.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1999.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[85] = OrientationInterpolator1999;

let OrientationInterpolator2000 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2000.DEF = "Stop_r_ring3_RotationInterpolator";
OrientationInterpolator2000.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2000.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[86] = OrientationInterpolator2000;

let OrientationInterpolator2001 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2001.DEF = "Stop_r_pinky0_RotationInterpolator";
OrientationInterpolator2001.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2001.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[87] = OrientationInterpolator2001;

let OrientationInterpolator2002 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2002.DEF = "Stop_r_pinky1_RotationInterpolator";
OrientationInterpolator2002.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2002.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[88] = OrientationInterpolator2002;

let OrientationInterpolator2003 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2003.DEF = "Stop_r_pinky2_RotationInterpolator";
OrientationInterpolator2003.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2003.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[89] = OrientationInterpolator2003;

let OrientationInterpolator2004 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2004.DEF = "Stop_r_pinky3_RotationInterpolator";
OrientationInterpolator2004.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2004.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1913.children[90] = OrientationInterpolator2004;

let ROUTE2005 = browser.currentScene.createNode("ROUTE");
ROUTE2005.fromField = "fraction_changed";
ROUTE2005.fromNode = "StopTimer";
ROUTE2005.toField = "set_fraction";
ROUTE2005.toNode = "Stop_HumanoidRoot_TranslationInterpolator";
Group1913.children[91] = ROUTE2005;

let ROUTE2006 = browser.currentScene.createNode("ROUTE");
ROUTE2006.fromField = "fraction_changed";
ROUTE2006.fromNode = "StopTimer";
ROUTE2006.toField = "set_fraction";
ROUTE2006.toNode = "Stop_HumanoidRoot_RotationInterpolator";
Group1913.children[92] = ROUTE2006;

let ROUTE2007 = browser.currentScene.createNode("ROUTE");
ROUTE2007.fromField = "fraction_changed";
ROUTE2007.fromNode = "StopTimer";
ROUTE2007.toField = "set_fraction";
ROUTE2007.toNode = "Stop_sacroiliac_RotationInterpolator";
Group1913.children[93] = ROUTE2007;

let ROUTE2008 = browser.currentScene.createNode("ROUTE");
ROUTE2008.fromField = "fraction_changed";
ROUTE2008.fromNode = "StopTimer";
ROUTE2008.toField = "set_fraction";
ROUTE2008.toNode = "Stop_l_hip_RotationInterpolator";
Group1913.children[94] = ROUTE2008;

let ROUTE2009 = browser.currentScene.createNode("ROUTE");
ROUTE2009.fromField = "fraction_changed";
ROUTE2009.fromNode = "StopTimer";
ROUTE2009.toField = "set_fraction";
ROUTE2009.toNode = "Stop_l_knee_RotationInterpolator";
Group1913.children[95] = ROUTE2009;

let ROUTE2010 = browser.currentScene.createNode("ROUTE");
ROUTE2010.fromField = "fraction_changed";
ROUTE2010.fromNode = "StopTimer";
ROUTE2010.toField = "set_fraction";
ROUTE2010.toNode = "Stop_l_ankle_RotationInterpolator";
Group1913.children[96] = ROUTE2010;

let ROUTE2011 = browser.currentScene.createNode("ROUTE");
ROUTE2011.fromField = "fraction_changed";
ROUTE2011.fromNode = "StopTimer";
ROUTE2011.toField = "set_fraction";
ROUTE2011.toNode = "Stop_l_subtalar_RotationInterpolator";
Group1913.children[97] = ROUTE2011;

let ROUTE2012 = browser.currentScene.createNode("ROUTE");
ROUTE2012.fromField = "fraction_changed";
ROUTE2012.fromNode = "StopTimer";
ROUTE2012.toField = "set_fraction";
ROUTE2012.toNode = "Stop_l_midtarsal_RotationInterpolator";
Group1913.children[98] = ROUTE2012;

let ROUTE2013 = browser.currentScene.createNode("ROUTE");
ROUTE2013.fromField = "fraction_changed";
ROUTE2013.fromNode = "StopTimer";
ROUTE2013.toField = "set_fraction";
ROUTE2013.toNode = "Stop_l_metatarsal_RotationInterpolator";
Group1913.children[99] = ROUTE2013;

let ROUTE2014 = browser.currentScene.createNode("ROUTE");
ROUTE2014.fromField = "fraction_changed";
ROUTE2014.fromNode = "StopTimer";
ROUTE2014.toField = "set_fraction";
ROUTE2014.toNode = "Stop_r_hip_RotationInterpolator";
Group1913.children[100] = ROUTE2014;

let ROUTE2015 = browser.currentScene.createNode("ROUTE");
ROUTE2015.fromField = "fraction_changed";
ROUTE2015.fromNode = "StopTimer";
ROUTE2015.toField = "set_fraction";
ROUTE2015.toNode = "Stop_r_knee_RotationInterpolator";
Group1913.children[101] = ROUTE2015;

let ROUTE2016 = browser.currentScene.createNode("ROUTE");
ROUTE2016.fromField = "fraction_changed";
ROUTE2016.fromNode = "StopTimer";
ROUTE2016.toField = "set_fraction";
ROUTE2016.toNode = "Stop_r_ankle_RotationInterpolator";
Group1913.children[102] = ROUTE2016;

let ROUTE2017 = browser.currentScene.createNode("ROUTE");
ROUTE2017.fromField = "fraction_changed";
ROUTE2017.fromNode = "StopTimer";
ROUTE2017.toField = "set_fraction";
ROUTE2017.toNode = "Stop_r_subtalar_RotationInterpolator";
Group1913.children[103] = ROUTE2017;

let ROUTE2018 = browser.currentScene.createNode("ROUTE");
ROUTE2018.fromField = "fraction_changed";
ROUTE2018.fromNode = "StopTimer";
ROUTE2018.toField = "set_fraction";
ROUTE2018.toNode = "Stop_r_midtarsal_RotationInterpolator";
Group1913.children[104] = ROUTE2018;

let ROUTE2019 = browser.currentScene.createNode("ROUTE");
ROUTE2019.fromField = "fraction_changed";
ROUTE2019.fromNode = "StopTimer";
ROUTE2019.toField = "set_fraction";
ROUTE2019.toNode = "Stop_r_metatarsal_RotationInterpolator";
Group1913.children[105] = ROUTE2019;

let ROUTE2020 = browser.currentScene.createNode("ROUTE");
ROUTE2020.fromField = "fraction_changed";
ROUTE2020.fromNode = "StopTimer";
ROUTE2020.toField = "set_fraction";
ROUTE2020.toNode = "Stop_vl5_RotationInterpolator";
Group1913.children[106] = ROUTE2020;

let ROUTE2021 = browser.currentScene.createNode("ROUTE");
ROUTE2021.fromField = "fraction_changed";
ROUTE2021.fromNode = "StopTimer";
ROUTE2021.toField = "set_fraction";
ROUTE2021.toNode = "Stop_vl4_RotationInterpolator";
Group1913.children[107] = ROUTE2021;

let ROUTE2022 = browser.currentScene.createNode("ROUTE");
ROUTE2022.fromField = "fraction_changed";
ROUTE2022.fromNode = "StopTimer";
ROUTE2022.toField = "set_fraction";
ROUTE2022.toNode = "Stop_vl3_RotationInterpolator";
Group1913.children[108] = ROUTE2022;

let ROUTE2023 = browser.currentScene.createNode("ROUTE");
ROUTE2023.fromField = "fraction_changed";
ROUTE2023.fromNode = "StopTimer";
ROUTE2023.toField = "set_fraction";
ROUTE2023.toNode = "Stop_vl2_RotationInterpolator";
Group1913.children[109] = ROUTE2023;

let ROUTE2024 = browser.currentScene.createNode("ROUTE");
ROUTE2024.fromField = "fraction_changed";
ROUTE2024.fromNode = "StopTimer";
ROUTE2024.toField = "set_fraction";
ROUTE2024.toNode = "Stop_vl1_RotationInterpolator";
Group1913.children[110] = ROUTE2024;

let ROUTE2025 = browser.currentScene.createNode("ROUTE");
ROUTE2025.fromField = "fraction_changed";
ROUTE2025.fromNode = "StopTimer";
ROUTE2025.toField = "set_fraction";
ROUTE2025.toNode = "Stop_vt12_RotationInterpolator";
Group1913.children[111] = ROUTE2025;

let ROUTE2026 = browser.currentScene.createNode("ROUTE");
ROUTE2026.fromField = "fraction_changed";
ROUTE2026.fromNode = "StopTimer";
ROUTE2026.toField = "set_fraction";
ROUTE2026.toNode = "Stop_vt11_RotationInterpolator";
Group1913.children[112] = ROUTE2026;

let ROUTE2027 = browser.currentScene.createNode("ROUTE");
ROUTE2027.fromField = "fraction_changed";
ROUTE2027.fromNode = "StopTimer";
ROUTE2027.toField = "set_fraction";
ROUTE2027.toNode = "Stop_vt10_RotationInterpolator";
Group1913.children[113] = ROUTE2027;

let ROUTE2028 = browser.currentScene.createNode("ROUTE");
ROUTE2028.fromField = "fraction_changed";
ROUTE2028.fromNode = "StopTimer";
ROUTE2028.toField = "set_fraction";
ROUTE2028.toNode = "Stop_vt9_RotationInterpolator";
Group1913.children[114] = ROUTE2028;

let ROUTE2029 = browser.currentScene.createNode("ROUTE");
ROUTE2029.fromField = "fraction_changed";
ROUTE2029.fromNode = "StopTimer";
ROUTE2029.toField = "set_fraction";
ROUTE2029.toNode = "Stop_vt8_RotationInterpolator";
Group1913.children[115] = ROUTE2029;

let ROUTE2030 = browser.currentScene.createNode("ROUTE");
ROUTE2030.fromField = "fraction_changed";
ROUTE2030.fromNode = "StopTimer";
ROUTE2030.toField = "set_fraction";
ROUTE2030.toNode = "Stop_vt7_RotationInterpolator";
Group1913.children[116] = ROUTE2030;

let ROUTE2031 = browser.currentScene.createNode("ROUTE");
ROUTE2031.fromField = "fraction_changed";
ROUTE2031.fromNode = "StopTimer";
ROUTE2031.toField = "set_fraction";
ROUTE2031.toNode = "Stop_vt6_RotationInterpolator";
Group1913.children[117] = ROUTE2031;

let ROUTE2032 = browser.currentScene.createNode("ROUTE");
ROUTE2032.fromField = "fraction_changed";
ROUTE2032.fromNode = "StopTimer";
ROUTE2032.toField = "set_fraction";
ROUTE2032.toNode = "Stop_vt5_RotationInterpolator";
Group1913.children[118] = ROUTE2032;

let ROUTE2033 = browser.currentScene.createNode("ROUTE");
ROUTE2033.fromField = "fraction_changed";
ROUTE2033.fromNode = "StopTimer";
ROUTE2033.toField = "set_fraction";
ROUTE2033.toNode = "Stop_vt4_RotationInterpolator";
Group1913.children[119] = ROUTE2033;

let ROUTE2034 = browser.currentScene.createNode("ROUTE");
ROUTE2034.fromField = "fraction_changed";
ROUTE2034.fromNode = "StopTimer";
ROUTE2034.toField = "set_fraction";
ROUTE2034.toNode = "Stop_vt3_RotationInterpolator";
Group1913.children[120] = ROUTE2034;

let ROUTE2035 = browser.currentScene.createNode("ROUTE");
ROUTE2035.fromField = "fraction_changed";
ROUTE2035.fromNode = "StopTimer";
ROUTE2035.toField = "set_fraction";
ROUTE2035.toNode = "Stop_vt2_RotationInterpolator";
Group1913.children[121] = ROUTE2035;

let ROUTE2036 = browser.currentScene.createNode("ROUTE");
ROUTE2036.fromField = "fraction_changed";
ROUTE2036.fromNode = "StopTimer";
ROUTE2036.toField = "set_fraction";
ROUTE2036.toNode = "Stop_vt1_RotationInterpolator";
Group1913.children[122] = ROUTE2036;

let ROUTE2037 = browser.currentScene.createNode("ROUTE");
ROUTE2037.fromField = "fraction_changed";
ROUTE2037.fromNode = "StopTimer";
ROUTE2037.toField = "set_fraction";
ROUTE2037.toNode = "Stop_vc7_RotationInterpolator";
Group1913.children[123] = ROUTE2037;

let ROUTE2038 = browser.currentScene.createNode("ROUTE");
ROUTE2038.fromField = "fraction_changed";
ROUTE2038.fromNode = "StopTimer";
ROUTE2038.toField = "set_fraction";
ROUTE2038.toNode = "Stop_vc6_RotationInterpolator";
Group1913.children[124] = ROUTE2038;

let ROUTE2039 = browser.currentScene.createNode("ROUTE");
ROUTE2039.fromField = "fraction_changed";
ROUTE2039.fromNode = "StopTimer";
ROUTE2039.toField = "set_fraction";
ROUTE2039.toNode = "Stop_vc5_RotationInterpolator";
Group1913.children[125] = ROUTE2039;

let ROUTE2040 = browser.currentScene.createNode("ROUTE");
ROUTE2040.fromField = "fraction_changed";
ROUTE2040.fromNode = "StopTimer";
ROUTE2040.toField = "set_fraction";
ROUTE2040.toNode = "Stop_vc4_RotationInterpolator";
Group1913.children[126] = ROUTE2040;

let ROUTE2041 = browser.currentScene.createNode("ROUTE");
ROUTE2041.fromField = "fraction_changed";
ROUTE2041.fromNode = "StopTimer";
ROUTE2041.toField = "set_fraction";
ROUTE2041.toNode = "Stop_vc3_RotationInterpolator";
Group1913.children[127] = ROUTE2041;

let ROUTE2042 = browser.currentScene.createNode("ROUTE");
ROUTE2042.fromField = "fraction_changed";
ROUTE2042.fromNode = "StopTimer";
ROUTE2042.toField = "set_fraction";
ROUTE2042.toNode = "Stop_vc2_RotationInterpolator";
Group1913.children[128] = ROUTE2042;

let ROUTE2043 = browser.currentScene.createNode("ROUTE");
ROUTE2043.fromField = "fraction_changed";
ROUTE2043.fromNode = "StopTimer";
ROUTE2043.toField = "set_fraction";
ROUTE2043.toNode = "Stop_vc1_RotationInterpolator";
Group1913.children[129] = ROUTE2043;

let ROUTE2044 = browser.currentScene.createNode("ROUTE");
ROUTE2044.fromField = "fraction_changed";
ROUTE2044.fromNode = "StopTimer";
ROUTE2044.toField = "set_fraction";
ROUTE2044.toNode = "Stop_skullbase_RotationInterpolator";
Group1913.children[130] = ROUTE2044;

let ROUTE2045 = browser.currentScene.createNode("ROUTE");
ROUTE2045.fromField = "fraction_changed";
ROUTE2045.fromNode = "StopTimer";
ROUTE2045.toField = "set_fraction";
ROUTE2045.toNode = "Stop_l_eyeball_joint_RotationInterpolator";
Group1913.children[131] = ROUTE2045;

let ROUTE2046 = browser.currentScene.createNode("ROUTE");
ROUTE2046.fromField = "fraction_changed";
ROUTE2046.fromNode = "StopTimer";
ROUTE2046.toField = "set_fraction";
ROUTE2046.toNode = "Stop_r_eyeball_joint_RotationInterpolator";
Group1913.children[132] = ROUTE2046;

let ROUTE2047 = browser.currentScene.createNode("ROUTE");
ROUTE2047.fromField = "fraction_changed";
ROUTE2047.fromNode = "StopTimer";
ROUTE2047.toField = "set_fraction";
ROUTE2047.toNode = "Stop_l_sternoclavicular_RotationInterpolator";
Group1913.children[133] = ROUTE2047;

let ROUTE2048 = browser.currentScene.createNode("ROUTE");
ROUTE2048.fromField = "fraction_changed";
ROUTE2048.fromNode = "StopTimer";
ROUTE2048.toField = "set_fraction";
ROUTE2048.toNode = "Stop_l_acromioclavicular_RotationInterpolator";
Group1913.children[134] = ROUTE2048;

let ROUTE2049 = browser.currentScene.createNode("ROUTE");
ROUTE2049.fromField = "fraction_changed";
ROUTE2049.fromNode = "StopTimer";
ROUTE2049.toField = "set_fraction";
ROUTE2049.toNode = "Stop_l_shoulder_RotationInterpolator";
Group1913.children[135] = ROUTE2049;

let ROUTE2050 = browser.currentScene.createNode("ROUTE");
ROUTE2050.fromField = "fraction_changed";
ROUTE2050.fromNode = "StopTimer";
ROUTE2050.toField = "set_fraction";
ROUTE2050.toNode = "Stop_l_elbow_RotationInterpolator";
Group1913.children[136] = ROUTE2050;

let ROUTE2051 = browser.currentScene.createNode("ROUTE");
ROUTE2051.fromField = "fraction_changed";
ROUTE2051.fromNode = "StopTimer";
ROUTE2051.toField = "set_fraction";
ROUTE2051.toNode = "Stop_l_wrist_RotationInterpolator";
Group1913.children[137] = ROUTE2051;

let ROUTE2052 = browser.currentScene.createNode("ROUTE");
ROUTE2052.fromField = "fraction_changed";
ROUTE2052.fromNode = "StopTimer";
ROUTE2052.toField = "set_fraction";
ROUTE2052.toNode = "Stop_l_thumb1_RotationInterpolator";
Group1913.children[138] = ROUTE2052;

let ROUTE2053 = browser.currentScene.createNode("ROUTE");
ROUTE2053.fromField = "fraction_changed";
ROUTE2053.fromNode = "StopTimer";
ROUTE2053.toField = "set_fraction";
ROUTE2053.toNode = "Stop_l_thumb2_RotationInterpolator";
Group1913.children[139] = ROUTE2053;

let ROUTE2054 = browser.currentScene.createNode("ROUTE");
ROUTE2054.fromField = "fraction_changed";
ROUTE2054.fromNode = "StopTimer";
ROUTE2054.toField = "set_fraction";
ROUTE2054.toNode = "Stop_l_thumb3_RotationInterpolator";
Group1913.children[140] = ROUTE2054;

let ROUTE2055 = browser.currentScene.createNode("ROUTE");
ROUTE2055.fromField = "fraction_changed";
ROUTE2055.fromNode = "StopTimer";
ROUTE2055.toField = "set_fraction";
ROUTE2055.toNode = "Stop_l_index0_RotationInterpolator";
Group1913.children[141] = ROUTE2055;

let ROUTE2056 = browser.currentScene.createNode("ROUTE");
ROUTE2056.fromField = "fraction_changed";
ROUTE2056.fromNode = "StopTimer";
ROUTE2056.toField = "set_fraction";
ROUTE2056.toNode = "Stop_l_index1_RotationInterpolator";
Group1913.children[142] = ROUTE2056;

let ROUTE2057 = browser.currentScene.createNode("ROUTE");
ROUTE2057.fromField = "fraction_changed";
ROUTE2057.fromNode = "StopTimer";
ROUTE2057.toField = "set_fraction";
ROUTE2057.toNode = "Stop_l_index2_RotationInterpolator";
Group1913.children[143] = ROUTE2057;

let ROUTE2058 = browser.currentScene.createNode("ROUTE");
ROUTE2058.fromField = "fraction_changed";
ROUTE2058.fromNode = "StopTimer";
ROUTE2058.toField = "set_fraction";
ROUTE2058.toNode = "Stop_l_index3_RotationInterpolator";
Group1913.children[144] = ROUTE2058;

let ROUTE2059 = browser.currentScene.createNode("ROUTE");
ROUTE2059.fromField = "fraction_changed";
ROUTE2059.fromNode = "StopTimer";
ROUTE2059.toField = "set_fraction";
ROUTE2059.toNode = "Stop_l_middle0_RotationInterpolator";
Group1913.children[145] = ROUTE2059;

let ROUTE2060 = browser.currentScene.createNode("ROUTE");
ROUTE2060.fromField = "fraction_changed";
ROUTE2060.fromNode = "StopTimer";
ROUTE2060.toField = "set_fraction";
ROUTE2060.toNode = "Stop_l_middle1_RotationInterpolator";
Group1913.children[146] = ROUTE2060;

let ROUTE2061 = browser.currentScene.createNode("ROUTE");
ROUTE2061.fromField = "fraction_changed";
ROUTE2061.fromNode = "StopTimer";
ROUTE2061.toField = "set_fraction";
ROUTE2061.toNode = "Stop_l_middle2_RotationInterpolator";
Group1913.children[147] = ROUTE2061;

let ROUTE2062 = browser.currentScene.createNode("ROUTE");
ROUTE2062.fromField = "fraction_changed";
ROUTE2062.fromNode = "StopTimer";
ROUTE2062.toField = "set_fraction";
ROUTE2062.toNode = "Stop_l_middle3_RotationInterpolator";
Group1913.children[148] = ROUTE2062;

let ROUTE2063 = browser.currentScene.createNode("ROUTE");
ROUTE2063.fromField = "fraction_changed";
ROUTE2063.fromNode = "StopTimer";
ROUTE2063.toField = "set_fraction";
ROUTE2063.toNode = "Stop_l_ring0_RotationInterpolator";
Group1913.children[149] = ROUTE2063;

let ROUTE2064 = browser.currentScene.createNode("ROUTE");
ROUTE2064.fromField = "fraction_changed";
ROUTE2064.fromNode = "StopTimer";
ROUTE2064.toField = "set_fraction";
ROUTE2064.toNode = "Stop_l_ring1_RotationInterpolator";
Group1913.children[150] = ROUTE2064;

let ROUTE2065 = browser.currentScene.createNode("ROUTE");
ROUTE2065.fromField = "fraction_changed";
ROUTE2065.fromNode = "StopTimer";
ROUTE2065.toField = "set_fraction";
ROUTE2065.toNode = "Stop_l_ring2_RotationInterpolator";
Group1913.children[151] = ROUTE2065;

let ROUTE2066 = browser.currentScene.createNode("ROUTE");
ROUTE2066.fromField = "fraction_changed";
ROUTE2066.fromNode = "StopTimer";
ROUTE2066.toField = "set_fraction";
ROUTE2066.toNode = "Stop_l_ring3_RotationInterpolator";
Group1913.children[152] = ROUTE2066;

let ROUTE2067 = browser.currentScene.createNode("ROUTE");
ROUTE2067.fromField = "fraction_changed";
ROUTE2067.fromNode = "StopTimer";
ROUTE2067.toField = "set_fraction";
ROUTE2067.toNode = "Stop_l_pinky0_RotationInterpolator";
Group1913.children[153] = ROUTE2067;

let ROUTE2068 = browser.currentScene.createNode("ROUTE");
ROUTE2068.fromField = "fraction_changed";
ROUTE2068.fromNode = "StopTimer";
ROUTE2068.toField = "set_fraction";
ROUTE2068.toNode = "Stop_l_pinky1_RotationInterpolator";
Group1913.children[154] = ROUTE2068;

let ROUTE2069 = browser.currentScene.createNode("ROUTE");
ROUTE2069.fromField = "fraction_changed";
ROUTE2069.fromNode = "StopTimer";
ROUTE2069.toField = "set_fraction";
ROUTE2069.toNode = "Stop_l_pinky2_RotationInterpolator";
Group1913.children[155] = ROUTE2069;

let ROUTE2070 = browser.currentScene.createNode("ROUTE");
ROUTE2070.fromField = "fraction_changed";
ROUTE2070.fromNode = "StopTimer";
ROUTE2070.toField = "set_fraction";
ROUTE2070.toNode = "Stop_l_pinky3_RotationInterpolator";
Group1913.children[156] = ROUTE2070;

let ROUTE2071 = browser.currentScene.createNode("ROUTE");
ROUTE2071.fromField = "fraction_changed";
ROUTE2071.fromNode = "StopTimer";
ROUTE2071.toField = "set_fraction";
ROUTE2071.toNode = "Stop_r_sternoclavicular_RotationInterpolator";
Group1913.children[157] = ROUTE2071;

let ROUTE2072 = browser.currentScene.createNode("ROUTE");
ROUTE2072.fromField = "fraction_changed";
ROUTE2072.fromNode = "StopTimer";
ROUTE2072.toField = "set_fraction";
ROUTE2072.toNode = "Stop_r_acromioclavicular_RotationInterpolator";
Group1913.children[158] = ROUTE2072;

let ROUTE2073 = browser.currentScene.createNode("ROUTE");
ROUTE2073.fromField = "fraction_changed";
ROUTE2073.fromNode = "StopTimer";
ROUTE2073.toField = "set_fraction";
ROUTE2073.toNode = "Stop_r_shoulder_RotationInterpolator";
Group1913.children[159] = ROUTE2073;

let ROUTE2074 = browser.currentScene.createNode("ROUTE");
ROUTE2074.fromField = "fraction_changed";
ROUTE2074.fromNode = "StopTimer";
ROUTE2074.toField = "set_fraction";
ROUTE2074.toNode = "Stop_r_elbow_RotationInterpolator";
Group1913.children[160] = ROUTE2074;

let ROUTE2075 = browser.currentScene.createNode("ROUTE");
ROUTE2075.fromField = "fraction_changed";
ROUTE2075.fromNode = "StopTimer";
ROUTE2075.toField = "set_fraction";
ROUTE2075.toNode = "Stop_r_wrist_RotationInterpolator";
Group1913.children[161] = ROUTE2075;

let ROUTE2076 = browser.currentScene.createNode("ROUTE");
ROUTE2076.fromField = "fraction_changed";
ROUTE2076.fromNode = "StopTimer";
ROUTE2076.toField = "set_fraction";
ROUTE2076.toNode = "Stop_r_thumb1_RotationInterpolator";
Group1913.children[162] = ROUTE2076;

let ROUTE2077 = browser.currentScene.createNode("ROUTE");
ROUTE2077.fromField = "fraction_changed";
ROUTE2077.fromNode = "StopTimer";
ROUTE2077.toField = "set_fraction";
ROUTE2077.toNode = "Stop_r_thumb2_RotationInterpolator";
Group1913.children[163] = ROUTE2077;

let ROUTE2078 = browser.currentScene.createNode("ROUTE");
ROUTE2078.fromField = "fraction_changed";
ROUTE2078.fromNode = "StopTimer";
ROUTE2078.toField = "set_fraction";
ROUTE2078.toNode = "Stop_r_thumb3_RotationInterpolator";
Group1913.children[164] = ROUTE2078;

let ROUTE2079 = browser.currentScene.createNode("ROUTE");
ROUTE2079.fromField = "fraction_changed";
ROUTE2079.fromNode = "StopTimer";
ROUTE2079.toField = "set_fraction";
ROUTE2079.toNode = "Stop_r_index0_RotationInterpolator";
Group1913.children[165] = ROUTE2079;

let ROUTE2080 = browser.currentScene.createNode("ROUTE");
ROUTE2080.fromField = "fraction_changed";
ROUTE2080.fromNode = "StopTimer";
ROUTE2080.toField = "set_fraction";
ROUTE2080.toNode = "Stop_r_index1_RotationInterpolator";
Group1913.children[166] = ROUTE2080;

let ROUTE2081 = browser.currentScene.createNode("ROUTE");
ROUTE2081.fromField = "fraction_changed";
ROUTE2081.fromNode = "StopTimer";
ROUTE2081.toField = "set_fraction";
ROUTE2081.toNode = "Stop_r_index2_RotationInterpolator";
Group1913.children[167] = ROUTE2081;

let ROUTE2082 = browser.currentScene.createNode("ROUTE");
ROUTE2082.fromField = "fraction_changed";
ROUTE2082.fromNode = "StopTimer";
ROUTE2082.toField = "set_fraction";
ROUTE2082.toNode = "Stop_r_index3_RotationInterpolator";
Group1913.children[168] = ROUTE2082;

let ROUTE2083 = browser.currentScene.createNode("ROUTE");
ROUTE2083.fromField = "fraction_changed";
ROUTE2083.fromNode = "StopTimer";
ROUTE2083.toField = "set_fraction";
ROUTE2083.toNode = "Stop_r_middle0_RotationInterpolator";
Group1913.children[169] = ROUTE2083;

let ROUTE2084 = browser.currentScene.createNode("ROUTE");
ROUTE2084.fromField = "fraction_changed";
ROUTE2084.fromNode = "StopTimer";
ROUTE2084.toField = "set_fraction";
ROUTE2084.toNode = "Stop_r_middle1_RotationInterpolator";
Group1913.children[170] = ROUTE2084;

let ROUTE2085 = browser.currentScene.createNode("ROUTE");
ROUTE2085.fromField = "fraction_changed";
ROUTE2085.fromNode = "StopTimer";
ROUTE2085.toField = "set_fraction";
ROUTE2085.toNode = "Stop_r_middle2_RotationInterpolator";
Group1913.children[171] = ROUTE2085;

let ROUTE2086 = browser.currentScene.createNode("ROUTE");
ROUTE2086.fromField = "fraction_changed";
ROUTE2086.fromNode = "StopTimer";
ROUTE2086.toField = "set_fraction";
ROUTE2086.toNode = "Stop_r_middle3_RotationInterpolator";
Group1913.children[172] = ROUTE2086;

let ROUTE2087 = browser.currentScene.createNode("ROUTE");
ROUTE2087.fromField = "fraction_changed";
ROUTE2087.fromNode = "StopTimer";
ROUTE2087.toField = "set_fraction";
ROUTE2087.toNode = "Stop_r_ring0_RotationInterpolator";
Group1913.children[173] = ROUTE2087;

let ROUTE2088 = browser.currentScene.createNode("ROUTE");
ROUTE2088.fromField = "fraction_changed";
ROUTE2088.fromNode = "StopTimer";
ROUTE2088.toField = "set_fraction";
ROUTE2088.toNode = "Stop_r_ring1_RotationInterpolator";
Group1913.children[174] = ROUTE2088;

let ROUTE2089 = browser.currentScene.createNode("ROUTE");
ROUTE2089.fromField = "fraction_changed";
ROUTE2089.fromNode = "StopTimer";
ROUTE2089.toField = "set_fraction";
ROUTE2089.toNode = "Stop_r_ring2_RotationInterpolator";
Group1913.children[175] = ROUTE2089;

let ROUTE2090 = browser.currentScene.createNode("ROUTE");
ROUTE2090.fromField = "fraction_changed";
ROUTE2090.fromNode = "StopTimer";
ROUTE2090.toField = "set_fraction";
ROUTE2090.toNode = "Stop_r_ring3_RotationInterpolator";
Group1913.children[176] = ROUTE2090;

let ROUTE2091 = browser.currentScene.createNode("ROUTE");
ROUTE2091.fromField = "fraction_changed";
ROUTE2091.fromNode = "StopTimer";
ROUTE2091.toField = "set_fraction";
ROUTE2091.toNode = "Stop_r_pinky0_RotationInterpolator";
Group1913.children[177] = ROUTE2091;

let ROUTE2092 = browser.currentScene.createNode("ROUTE");
ROUTE2092.fromField = "fraction_changed";
ROUTE2092.fromNode = "StopTimer";
ROUTE2092.toField = "set_fraction";
ROUTE2092.toNode = "Stop_r_pinky1_RotationInterpolator";
Group1913.children[178] = ROUTE2092;

let ROUTE2093 = browser.currentScene.createNode("ROUTE");
ROUTE2093.fromField = "fraction_changed";
ROUTE2093.fromNode = "StopTimer";
ROUTE2093.toField = "set_fraction";
ROUTE2093.toNode = "Stop_r_pinky2_RotationInterpolator";
Group1913.children[179] = ROUTE2093;

let ROUTE2094 = browser.currentScene.createNode("ROUTE");
ROUTE2094.fromField = "fraction_changed";
ROUTE2094.fromNode = "StopTimer";
ROUTE2094.toField = "set_fraction";
ROUTE2094.toNode = "Stop_r_pinky3_RotationInterpolator";
Group1913.children[180] = ROUTE2094;

let ROUTE2095 = browser.currentScene.createNode("ROUTE");
ROUTE2095.fromField = "value_changed";
ROUTE2095.fromNode = "Stop_HumanoidRoot_TranslationInterpolator";
ROUTE2095.toField = "translation";
ROUTE2095.toNode = "hanim_humanoid_root";
Group1913.children[181] = ROUTE2095;

let ROUTE2096 = browser.currentScene.createNode("ROUTE");
ROUTE2096.fromField = "value_changed";
ROUTE2096.fromNode = "Stop_HumanoidRoot_RotationInterpolator";
ROUTE2096.toField = "rotation";
ROUTE2096.toNode = "hanim_humanoid_root";
Group1913.children[182] = ROUTE2096;

let ROUTE2097 = browser.currentScene.createNode("ROUTE");
ROUTE2097.fromField = "value_changed";
ROUTE2097.fromNode = "Stop_sacroiliac_RotationInterpolator";
ROUTE2097.toField = "rotation";
ROUTE2097.toNode = "hanim_sacroiliac";
Group1913.children[183] = ROUTE2097;

let ROUTE2098 = browser.currentScene.createNode("ROUTE");
ROUTE2098.fromField = "value_changed";
ROUTE2098.fromNode = "Stop_l_hip_RotationInterpolator";
ROUTE2098.toField = "rotation";
ROUTE2098.toNode = "hanim_l_hip";
Group1913.children[184] = ROUTE2098;

let ROUTE2099 = browser.currentScene.createNode("ROUTE");
ROUTE2099.fromField = "value_changed";
ROUTE2099.fromNode = "Stop_l_knee_RotationInterpolator";
ROUTE2099.toField = "rotation";
ROUTE2099.toNode = "hanim_l_knee";
Group1913.children[185] = ROUTE2099;

let ROUTE2100 = browser.currentScene.createNode("ROUTE");
ROUTE2100.fromField = "value_changed";
ROUTE2100.fromNode = "Stop_l_ankle_RotationInterpolator";
ROUTE2100.toField = "rotation";
ROUTE2100.toNode = "hanim_l_ankle";
Group1913.children[186] = ROUTE2100;

let ROUTE2101 = browser.currentScene.createNode("ROUTE");
ROUTE2101.fromField = "value_changed";
ROUTE2101.fromNode = "Stop_l_subtalar_RotationInterpolator";
ROUTE2101.toField = "rotation";
ROUTE2101.toNode = "hanim_l_subtalar";
Group1913.children[187] = ROUTE2101;

let ROUTE2102 = browser.currentScene.createNode("ROUTE");
ROUTE2102.fromField = "value_changed";
ROUTE2102.fromNode = "Stop_l_midtarsal_RotationInterpolator";
ROUTE2102.toField = "rotation";
ROUTE2102.toNode = "hanim_l_midtarsal";
Group1913.children[188] = ROUTE2102;

let ROUTE2103 = browser.currentScene.createNode("ROUTE");
ROUTE2103.fromField = "value_changed";
ROUTE2103.fromNode = "Stop_l_metatarsal_RotationInterpolator";
ROUTE2103.toField = "rotation";
ROUTE2103.toNode = "hanim_l_metatarsal";
Group1913.children[189] = ROUTE2103;

let ROUTE2104 = browser.currentScene.createNode("ROUTE");
ROUTE2104.fromField = "value_changed";
ROUTE2104.fromNode = "Stop_r_hip_RotationInterpolator";
ROUTE2104.toField = "rotation";
ROUTE2104.toNode = "hanim_r_hip";
Group1913.children[190] = ROUTE2104;

let ROUTE2105 = browser.currentScene.createNode("ROUTE");
ROUTE2105.fromField = "value_changed";
ROUTE2105.fromNode = "Stop_r_knee_RotationInterpolator";
ROUTE2105.toField = "rotation";
ROUTE2105.toNode = "hanim_r_knee";
Group1913.children[191] = ROUTE2105;

let ROUTE2106 = browser.currentScene.createNode("ROUTE");
ROUTE2106.fromField = "value_changed";
ROUTE2106.fromNode = "Stop_r_ankle_RotationInterpolator";
ROUTE2106.toField = "rotation";
ROUTE2106.toNode = "hanim_r_ankle";
Group1913.children[192] = ROUTE2106;

let ROUTE2107 = browser.currentScene.createNode("ROUTE");
ROUTE2107.fromField = "value_changed";
ROUTE2107.fromNode = "Stop_r_subtalar_RotationInterpolator";
ROUTE2107.toField = "rotation";
ROUTE2107.toNode = "hanim_r_subtalar";
Group1913.children[193] = ROUTE2107;

let ROUTE2108 = browser.currentScene.createNode("ROUTE");
ROUTE2108.fromField = "value_changed";
ROUTE2108.fromNode = "Stop_r_midtarsal_RotationInterpolator";
ROUTE2108.toField = "rotation";
ROUTE2108.toNode = "hanim_r_midtarsal";
Group1913.children[194] = ROUTE2108;

let ROUTE2109 = browser.currentScene.createNode("ROUTE");
ROUTE2109.fromField = "value_changed";
ROUTE2109.fromNode = "Stop_r_metatarsal_RotationInterpolator";
ROUTE2109.toField = "rotation";
ROUTE2109.toNode = "hanim_r_metatarsal";
Group1913.children[195] = ROUTE2109;

let ROUTE2110 = browser.currentScene.createNode("ROUTE");
ROUTE2110.fromField = "value_changed";
ROUTE2110.fromNode = "Stop_vl5_RotationInterpolator";
ROUTE2110.toField = "rotation";
ROUTE2110.toNode = "hanim_vl5";
Group1913.children[196] = ROUTE2110;

let ROUTE2111 = browser.currentScene.createNode("ROUTE");
ROUTE2111.fromField = "value_changed";
ROUTE2111.fromNode = "Stop_vl4_RotationInterpolator";
ROUTE2111.toField = "rotation";
ROUTE2111.toNode = "hanim_vl4";
Group1913.children[197] = ROUTE2111;

let ROUTE2112 = browser.currentScene.createNode("ROUTE");
ROUTE2112.fromField = "value_changed";
ROUTE2112.fromNode = "Stop_vl3_RotationInterpolator";
ROUTE2112.toField = "rotation";
ROUTE2112.toNode = "hanim_vl3";
Group1913.children[198] = ROUTE2112;

let ROUTE2113 = browser.currentScene.createNode("ROUTE");
ROUTE2113.fromField = "value_changed";
ROUTE2113.fromNode = "Stop_vl2_RotationInterpolator";
ROUTE2113.toField = "rotation";
ROUTE2113.toNode = "hanim_vl2";
Group1913.children[199] = ROUTE2113;

let ROUTE2114 = browser.currentScene.createNode("ROUTE");
ROUTE2114.fromField = "value_changed";
ROUTE2114.fromNode = "Stop_vl1_RotationInterpolator";
ROUTE2114.toField = "rotation";
ROUTE2114.toNode = "hanim_vl1";
Group1913.children[200] = ROUTE2114;

let ROUTE2115 = browser.currentScene.createNode("ROUTE");
ROUTE2115.fromField = "value_changed";
ROUTE2115.fromNode = "Stop_vt12_RotationInterpolator";
ROUTE2115.toField = "rotation";
ROUTE2115.toNode = "hanim_vt12";
Group1913.children[201] = ROUTE2115;

let ROUTE2116 = browser.currentScene.createNode("ROUTE");
ROUTE2116.fromField = "value_changed";
ROUTE2116.fromNode = "Stop_vt11_RotationInterpolator";
ROUTE2116.toField = "rotation";
ROUTE2116.toNode = "hanim_vt11";
Group1913.children[202] = ROUTE2116;

let ROUTE2117 = browser.currentScene.createNode("ROUTE");
ROUTE2117.fromField = "value_changed";
ROUTE2117.fromNode = "Stop_vt10_RotationInterpolator";
ROUTE2117.toField = "rotation";
ROUTE2117.toNode = "hanim_vt10";
Group1913.children[203] = ROUTE2117;

let ROUTE2118 = browser.currentScene.createNode("ROUTE");
ROUTE2118.fromField = "value_changed";
ROUTE2118.fromNode = "Stop_vt9_RotationInterpolator";
ROUTE2118.toField = "rotation";
ROUTE2118.toNode = "hanim_vt9";
Group1913.children[204] = ROUTE2118;

let ROUTE2119 = browser.currentScene.createNode("ROUTE");
ROUTE2119.fromField = "value_changed";
ROUTE2119.fromNode = "Stop_vt8_RotationInterpolator";
ROUTE2119.toField = "rotation";
ROUTE2119.toNode = "hanim_vt8";
Group1913.children[205] = ROUTE2119;

let ROUTE2120 = browser.currentScene.createNode("ROUTE");
ROUTE2120.fromField = "value_changed";
ROUTE2120.fromNode = "Stop_vt7_RotationInterpolator";
ROUTE2120.toField = "rotation";
ROUTE2120.toNode = "hanim_vt7";
Group1913.children[206] = ROUTE2120;

let ROUTE2121 = browser.currentScene.createNode("ROUTE");
ROUTE2121.fromField = "value_changed";
ROUTE2121.fromNode = "Stop_vt6_RotationInterpolator";
ROUTE2121.toField = "rotation";
ROUTE2121.toNode = "hanim_vt6";
Group1913.children[207] = ROUTE2121;

let ROUTE2122 = browser.currentScene.createNode("ROUTE");
ROUTE2122.fromField = "value_changed";
ROUTE2122.fromNode = "Stop_vt5_RotationInterpolator";
ROUTE2122.toField = "rotation";
ROUTE2122.toNode = "hanim_vt5";
Group1913.children[208] = ROUTE2122;

let ROUTE2123 = browser.currentScene.createNode("ROUTE");
ROUTE2123.fromField = "value_changed";
ROUTE2123.fromNode = "Stop_vt4_RotationInterpolator";
ROUTE2123.toField = "rotation";
ROUTE2123.toNode = "hanim_vt4";
Group1913.children[209] = ROUTE2123;

let ROUTE2124 = browser.currentScene.createNode("ROUTE");
ROUTE2124.fromField = "value_changed";
ROUTE2124.fromNode = "Stop_vt3_RotationInterpolator";
ROUTE2124.toField = "rotation";
ROUTE2124.toNode = "hanim_vt3";
Group1913.children[210] = ROUTE2124;

let ROUTE2125 = browser.currentScene.createNode("ROUTE");
ROUTE2125.fromField = "value_changed";
ROUTE2125.fromNode = "Stop_vt2_RotationInterpolator";
ROUTE2125.toField = "rotation";
ROUTE2125.toNode = "hanim_vt2";
Group1913.children[211] = ROUTE2125;

let ROUTE2126 = browser.currentScene.createNode("ROUTE");
ROUTE2126.fromField = "value_changed";
ROUTE2126.fromNode = "Stop_vt1_RotationInterpolator";
ROUTE2126.toField = "rotation";
ROUTE2126.toNode = "hanim_vt1";
Group1913.children[212] = ROUTE2126;

let ROUTE2127 = browser.currentScene.createNode("ROUTE");
ROUTE2127.fromField = "value_changed";
ROUTE2127.fromNode = "Stop_vc7_RotationInterpolator";
ROUTE2127.toField = "rotation";
ROUTE2127.toNode = "hanim_vc7";
Group1913.children[213] = ROUTE2127;

let ROUTE2128 = browser.currentScene.createNode("ROUTE");
ROUTE2128.fromField = "value_changed";
ROUTE2128.fromNode = "Stop_vc6_RotationInterpolator";
ROUTE2128.toField = "rotation";
ROUTE2128.toNode = "hanim_vc6";
Group1913.children[214] = ROUTE2128;

let ROUTE2129 = browser.currentScene.createNode("ROUTE");
ROUTE2129.fromField = "value_changed";
ROUTE2129.fromNode = "Stop_vc5_RotationInterpolator";
ROUTE2129.toField = "rotation";
ROUTE2129.toNode = "hanim_vc5";
Group1913.children[215] = ROUTE2129;

let ROUTE2130 = browser.currentScene.createNode("ROUTE");
ROUTE2130.fromField = "value_changed";
ROUTE2130.fromNode = "Stop_vc4_RotationInterpolator";
ROUTE2130.toField = "rotation";
ROUTE2130.toNode = "hanim_vc4";
Group1913.children[216] = ROUTE2130;

let ROUTE2131 = browser.currentScene.createNode("ROUTE");
ROUTE2131.fromField = "value_changed";
ROUTE2131.fromNode = "Stop_vc3_RotationInterpolator";
ROUTE2131.toField = "rotation";
ROUTE2131.toNode = "hanim_vc3";
Group1913.children[217] = ROUTE2131;

let ROUTE2132 = browser.currentScene.createNode("ROUTE");
ROUTE2132.fromField = "value_changed";
ROUTE2132.fromNode = "Stop_vc2_RotationInterpolator";
ROUTE2132.toField = "rotation";
ROUTE2132.toNode = "hanim_vc2";
Group1913.children[218] = ROUTE2132;

let ROUTE2133 = browser.currentScene.createNode("ROUTE");
ROUTE2133.fromField = "value_changed";
ROUTE2133.fromNode = "Stop_vc1_RotationInterpolator";
ROUTE2133.toField = "rotation";
ROUTE2133.toNode = "hanim_vc1";
Group1913.children[219] = ROUTE2133;

let ROUTE2134 = browser.currentScene.createNode("ROUTE");
ROUTE2134.fromField = "value_changed";
ROUTE2134.fromNode = "Stop_skullbase_RotationInterpolator";
ROUTE2134.toField = "rotation";
ROUTE2134.toNode = "hanim_skullbase";
Group1913.children[220] = ROUTE2134;

let ROUTE2135 = browser.currentScene.createNode("ROUTE");
ROUTE2135.fromField = "value_changed";
ROUTE2135.fromNode = "Stop_l_eyeball_joint_RotationInterpolator";
ROUTE2135.toField = "rotation";
ROUTE2135.toNode = "hanim_l_eyeball_joint";
Group1913.children[221] = ROUTE2135;

let ROUTE2136 = browser.currentScene.createNode("ROUTE");
ROUTE2136.fromField = "value_changed";
ROUTE2136.fromNode = "Stop_r_eyeball_joint_RotationInterpolator";
ROUTE2136.toField = "rotation";
ROUTE2136.toNode = "hanim_r_eyeball_joint";
Group1913.children[222] = ROUTE2136;

let ROUTE2137 = browser.currentScene.createNode("ROUTE");
ROUTE2137.fromField = "value_changed";
ROUTE2137.fromNode = "Stop_l_sternoclavicular_RotationInterpolator";
ROUTE2137.toField = "rotation";
ROUTE2137.toNode = "hanim_l_sternoclavicular";
Group1913.children[223] = ROUTE2137;

let ROUTE2138 = browser.currentScene.createNode("ROUTE");
ROUTE2138.fromField = "value_changed";
ROUTE2138.fromNode = "Stop_l_acromioclavicular_RotationInterpolator";
ROUTE2138.toField = "rotation";
ROUTE2138.toNode = "hanim_l_acromioclavicular";
Group1913.children[224] = ROUTE2138;

let ROUTE2139 = browser.currentScene.createNode("ROUTE");
ROUTE2139.fromField = "value_changed";
ROUTE2139.fromNode = "Stop_l_shoulder_RotationInterpolator";
ROUTE2139.toField = "rotation";
ROUTE2139.toNode = "hanim_l_shoulder";
Group1913.children[225] = ROUTE2139;

let ROUTE2140 = browser.currentScene.createNode("ROUTE");
ROUTE2140.fromField = "value_changed";
ROUTE2140.fromNode = "Stop_l_elbow_RotationInterpolator";
ROUTE2140.toField = "rotation";
ROUTE2140.toNode = "hanim_l_elbow";
Group1913.children[226] = ROUTE2140;

let ROUTE2141 = browser.currentScene.createNode("ROUTE");
ROUTE2141.fromField = "value_changed";
ROUTE2141.fromNode = "Stop_l_wrist_RotationInterpolator";
ROUTE2141.toField = "rotation";
ROUTE2141.toNode = "hanim_l_wrist";
Group1913.children[227] = ROUTE2141;

let ROUTE2142 = browser.currentScene.createNode("ROUTE");
ROUTE2142.fromField = "value_changed";
ROUTE2142.fromNode = "Stop_l_thumb1_RotationInterpolator";
ROUTE2142.toField = "rotation";
ROUTE2142.toNode = "hanim_l_thumb1";
Group1913.children[228] = ROUTE2142;

let ROUTE2143 = browser.currentScene.createNode("ROUTE");
ROUTE2143.fromField = "value_changed";
ROUTE2143.fromNode = "Stop_l_thumb2_RotationInterpolator";
ROUTE2143.toField = "rotation";
ROUTE2143.toNode = "hanim_l_thumb2";
Group1913.children[229] = ROUTE2143;

let ROUTE2144 = browser.currentScene.createNode("ROUTE");
ROUTE2144.fromField = "value_changed";
ROUTE2144.fromNode = "Stop_l_thumb3_RotationInterpolator";
ROUTE2144.toField = "rotation";
ROUTE2144.toNode = "hanim_l_thumb3";
Group1913.children[230] = ROUTE2144;

let ROUTE2145 = browser.currentScene.createNode("ROUTE");
ROUTE2145.fromField = "value_changed";
ROUTE2145.fromNode = "Stop_l_index0_RotationInterpolator";
ROUTE2145.toField = "rotation";
ROUTE2145.toNode = "hanim_l_index0";
Group1913.children[231] = ROUTE2145;

let ROUTE2146 = browser.currentScene.createNode("ROUTE");
ROUTE2146.fromField = "value_changed";
ROUTE2146.fromNode = "Stop_l_index1_RotationInterpolator";
ROUTE2146.toField = "rotation";
ROUTE2146.toNode = "hanim_l_index1";
Group1913.children[232] = ROUTE2146;

let ROUTE2147 = browser.currentScene.createNode("ROUTE");
ROUTE2147.fromField = "value_changed";
ROUTE2147.fromNode = "Stop_l_index2_RotationInterpolator";
ROUTE2147.toField = "rotation";
ROUTE2147.toNode = "hanim_l_index2";
Group1913.children[233] = ROUTE2147;

let ROUTE2148 = browser.currentScene.createNode("ROUTE");
ROUTE2148.fromField = "value_changed";
ROUTE2148.fromNode = "Stop_l_index3_RotationInterpolator";
ROUTE2148.toField = "rotation";
ROUTE2148.toNode = "hanim_l_index3";
Group1913.children[234] = ROUTE2148;

let ROUTE2149 = browser.currentScene.createNode("ROUTE");
ROUTE2149.fromField = "value_changed";
ROUTE2149.fromNode = "Stop_l_middle0_RotationInterpolator";
ROUTE2149.toField = "rotation";
ROUTE2149.toNode = "hanim_l_middle0";
Group1913.children[235] = ROUTE2149;

let ROUTE2150 = browser.currentScene.createNode("ROUTE");
ROUTE2150.fromField = "value_changed";
ROUTE2150.fromNode = "Stop_l_middle1_RotationInterpolator";
ROUTE2150.toField = "rotation";
ROUTE2150.toNode = "hanim_l_middle1";
Group1913.children[236] = ROUTE2150;

let ROUTE2151 = browser.currentScene.createNode("ROUTE");
ROUTE2151.fromField = "value_changed";
ROUTE2151.fromNode = "Stop_l_middle2_RotationInterpolator";
ROUTE2151.toField = "rotation";
ROUTE2151.toNode = "hanim_l_middle2";
Group1913.children[237] = ROUTE2151;

let ROUTE2152 = browser.currentScene.createNode("ROUTE");
ROUTE2152.fromField = "value_changed";
ROUTE2152.fromNode = "Stop_l_middle3_RotationInterpolator";
ROUTE2152.toField = "rotation";
ROUTE2152.toNode = "hanim_l_middle3";
Group1913.children[238] = ROUTE2152;

let ROUTE2153 = browser.currentScene.createNode("ROUTE");
ROUTE2153.fromField = "value_changed";
ROUTE2153.fromNode = "Stop_l_ring0_RotationInterpolator";
ROUTE2153.toField = "rotation";
ROUTE2153.toNode = "hanim_l_ring0";
Group1913.children[239] = ROUTE2153;

let ROUTE2154 = browser.currentScene.createNode("ROUTE");
ROUTE2154.fromField = "value_changed";
ROUTE2154.fromNode = "Stop_l_ring1_RotationInterpolator";
ROUTE2154.toField = "rotation";
ROUTE2154.toNode = "hanim_l_ring1";
Group1913.children[240] = ROUTE2154;

let ROUTE2155 = browser.currentScene.createNode("ROUTE");
ROUTE2155.fromField = "value_changed";
ROUTE2155.fromNode = "Stop_l_ring2_RotationInterpolator";
ROUTE2155.toField = "rotation";
ROUTE2155.toNode = "hanim_l_ring2";
Group1913.children[241] = ROUTE2155;

let ROUTE2156 = browser.currentScene.createNode("ROUTE");
ROUTE2156.fromField = "value_changed";
ROUTE2156.fromNode = "Stop_l_ring3_RotationInterpolator";
ROUTE2156.toField = "rotation";
ROUTE2156.toNode = "hanim_l_ring3";
Group1913.children[242] = ROUTE2156;

let ROUTE2157 = browser.currentScene.createNode("ROUTE");
ROUTE2157.fromField = "value_changed";
ROUTE2157.fromNode = "Stop_l_pinky0_RotationInterpolator";
ROUTE2157.toField = "rotation";
ROUTE2157.toNode = "hanim_l_pinky0";
Group1913.children[243] = ROUTE2157;

let ROUTE2158 = browser.currentScene.createNode("ROUTE");
ROUTE2158.fromField = "value_changed";
ROUTE2158.fromNode = "Stop_l_pinky1_RotationInterpolator";
ROUTE2158.toField = "rotation";
ROUTE2158.toNode = "hanim_l_pinky1";
Group1913.children[244] = ROUTE2158;

let ROUTE2159 = browser.currentScene.createNode("ROUTE");
ROUTE2159.fromField = "value_changed";
ROUTE2159.fromNode = "Stop_l_pinky2_RotationInterpolator";
ROUTE2159.toField = "rotation";
ROUTE2159.toNode = "hanim_l_pinky2";
Group1913.children[245] = ROUTE2159;

let ROUTE2160 = browser.currentScene.createNode("ROUTE");
ROUTE2160.fromField = "value_changed";
ROUTE2160.fromNode = "Stop_l_pinky3_RotationInterpolator";
ROUTE2160.toField = "rotation";
ROUTE2160.toNode = "hanim_l_pinky3";
Group1913.children[246] = ROUTE2160;

let ROUTE2161 = browser.currentScene.createNode("ROUTE");
ROUTE2161.fromField = "value_changed";
ROUTE2161.fromNode = "Stop_r_sternoclavicular_RotationInterpolator";
ROUTE2161.toField = "rotation";
ROUTE2161.toNode = "hanim_r_sternoclavicular";
Group1913.children[247] = ROUTE2161;

let ROUTE2162 = browser.currentScene.createNode("ROUTE");
ROUTE2162.fromField = "value_changed";
ROUTE2162.fromNode = "Stop_r_acromioclavicular_RotationInterpolator";
ROUTE2162.toField = "rotation";
ROUTE2162.toNode = "hanim_r_acromioclavicular";
Group1913.children[248] = ROUTE2162;

let ROUTE2163 = browser.currentScene.createNode("ROUTE");
ROUTE2163.fromField = "value_changed";
ROUTE2163.fromNode = "Stop_r_shoulder_RotationInterpolator";
ROUTE2163.toField = "rotation";
ROUTE2163.toNode = "hanim_r_shoulder";
Group1913.children[249] = ROUTE2163;

let ROUTE2164 = browser.currentScene.createNode("ROUTE");
ROUTE2164.fromField = "value_changed";
ROUTE2164.fromNode = "Stop_r_elbow_RotationInterpolator";
ROUTE2164.toField = "rotation";
ROUTE2164.toNode = "hanim_r_elbow";
Group1913.children[250] = ROUTE2164;

let ROUTE2165 = browser.currentScene.createNode("ROUTE");
ROUTE2165.fromField = "value_changed";
ROUTE2165.fromNode = "Stop_r_wrist_RotationInterpolator";
ROUTE2165.toField = "rotation";
ROUTE2165.toNode = "hanim_r_wrist";
Group1913.children[251] = ROUTE2165;

let ROUTE2166 = browser.currentScene.createNode("ROUTE");
ROUTE2166.fromField = "value_changed";
ROUTE2166.fromNode = "Stop_r_thumb1_RotationInterpolator";
ROUTE2166.toField = "rotation";
ROUTE2166.toNode = "hanim_r_thumb1";
Group1913.children[252] = ROUTE2166;

let ROUTE2167 = browser.currentScene.createNode("ROUTE");
ROUTE2167.fromField = "value_changed";
ROUTE2167.fromNode = "Stop_r_thumb2_RotationInterpolator";
ROUTE2167.toField = "rotation";
ROUTE2167.toNode = "hanim_r_thumb2";
Group1913.children[253] = ROUTE2167;

let ROUTE2168 = browser.currentScene.createNode("ROUTE");
ROUTE2168.fromField = "value_changed";
ROUTE2168.fromNode = "Stop_r_thumb3_RotationInterpolator";
ROUTE2168.toField = "rotation";
ROUTE2168.toNode = "hanim_r_thumb3";
Group1913.children[254] = ROUTE2168;

let ROUTE2169 = browser.currentScene.createNode("ROUTE");
ROUTE2169.fromField = "value_changed";
ROUTE2169.fromNode = "Stop_r_index0_RotationInterpolator";
ROUTE2169.toField = "rotation";
ROUTE2169.toNode = "hanim_r_index0";
Group1913.children[255] = ROUTE2169;

let ROUTE2170 = browser.currentScene.createNode("ROUTE");
ROUTE2170.fromField = "value_changed";
ROUTE2170.fromNode = "Stop_r_index1_RotationInterpolator";
ROUTE2170.toField = "rotation";
ROUTE2170.toNode = "hanim_r_index1";
Group1913.children[256] = ROUTE2170;

let ROUTE2171 = browser.currentScene.createNode("ROUTE");
ROUTE2171.fromField = "value_changed";
ROUTE2171.fromNode = "Stop_r_index2_RotationInterpolator";
ROUTE2171.toField = "rotation";
ROUTE2171.toNode = "hanim_r_index2";
Group1913.children[257] = ROUTE2171;

let ROUTE2172 = browser.currentScene.createNode("ROUTE");
ROUTE2172.fromField = "value_changed";
ROUTE2172.fromNode = "Stop_r_index3_RotationInterpolator";
ROUTE2172.toField = "rotation";
ROUTE2172.toNode = "hanim_r_index3";
Group1913.children[258] = ROUTE2172;

let ROUTE2173 = browser.currentScene.createNode("ROUTE");
ROUTE2173.fromField = "value_changed";
ROUTE2173.fromNode = "Stop_r_middle0_RotationInterpolator";
ROUTE2173.toField = "rotation";
ROUTE2173.toNode = "hanim_r_middle0";
Group1913.children[259] = ROUTE2173;

let ROUTE2174 = browser.currentScene.createNode("ROUTE");
ROUTE2174.fromField = "value_changed";
ROUTE2174.fromNode = "Stop_r_middle1_RotationInterpolator";
ROUTE2174.toField = "rotation";
ROUTE2174.toNode = "hanim_r_middle1";
Group1913.children[260] = ROUTE2174;

let ROUTE2175 = browser.currentScene.createNode("ROUTE");
ROUTE2175.fromField = "value_changed";
ROUTE2175.fromNode = "Stop_r_middle2_RotationInterpolator";
ROUTE2175.toField = "rotation";
ROUTE2175.toNode = "hanim_r_middle2";
Group1913.children[261] = ROUTE2175;

let ROUTE2176 = browser.currentScene.createNode("ROUTE");
ROUTE2176.fromField = "value_changed";
ROUTE2176.fromNode = "Stop_r_middle3_RotationInterpolator";
ROUTE2176.toField = "rotation";
ROUTE2176.toNode = "hanim_r_middle3";
Group1913.children[262] = ROUTE2176;

let ROUTE2177 = browser.currentScene.createNode("ROUTE");
ROUTE2177.fromField = "value_changed";
ROUTE2177.fromNode = "Stop_r_ring0_RotationInterpolator";
ROUTE2177.toField = "rotation";
ROUTE2177.toNode = "hanim_r_ring0";
Group1913.children[263] = ROUTE2177;

let ROUTE2178 = browser.currentScene.createNode("ROUTE");
ROUTE2178.fromField = "value_changed";
ROUTE2178.fromNode = "Stop_r_ring1_RotationInterpolator";
ROUTE2178.toField = "rotation";
ROUTE2178.toNode = "hanim_r_ring1";
Group1913.children[264] = ROUTE2178;

let ROUTE2179 = browser.currentScene.createNode("ROUTE");
ROUTE2179.fromField = "value_changed";
ROUTE2179.fromNode = "Stop_r_ring2_RotationInterpolator";
ROUTE2179.toField = "rotation";
ROUTE2179.toNode = "hanim_r_ring2";
Group1913.children[265] = ROUTE2179;

let ROUTE2180 = browser.currentScene.createNode("ROUTE");
ROUTE2180.fromField = "value_changed";
ROUTE2180.fromNode = "Stop_r_ring3_RotationInterpolator";
ROUTE2180.toField = "rotation";
ROUTE2180.toNode = "hanim_r_ring3";
Group1913.children[266] = ROUTE2180;

let ROUTE2181 = browser.currentScene.createNode("ROUTE");
ROUTE2181.fromField = "value_changed";
ROUTE2181.fromNode = "Stop_r_pinky0_RotationInterpolator";
ROUTE2181.toField = "rotation";
ROUTE2181.toNode = "hanim_r_pinky0";
Group1913.children[267] = ROUTE2181;

let ROUTE2182 = browser.currentScene.createNode("ROUTE");
ROUTE2182.fromField = "value_changed";
ROUTE2182.fromNode = "Stop_r_pinky1_RotationInterpolator";
ROUTE2182.toField = "rotation";
ROUTE2182.toNode = "hanim_r_pinky1";
Group1913.children[268] = ROUTE2182;

let ROUTE2183 = browser.currentScene.createNode("ROUTE");
ROUTE2183.fromField = "value_changed";
ROUTE2183.fromNode = "Stop_r_pinky2_RotationInterpolator";
ROUTE2183.toField = "rotation";
ROUTE2183.toNode = "hanim_r_pinky2";
Group1913.children[269] = ROUTE2183;

let ROUTE2184 = browser.currentScene.createNode("ROUTE");
ROUTE2184.fromField = "value_changed";
ROUTE2184.fromNode = "Stop_r_pinky3_RotationInterpolator";
ROUTE2184.toField = "rotation";
ROUTE2184.toNode = "hanim_r_pinky3";
Group1913.children[270] = ROUTE2184;

browser.currentScene.children[13] = Group1913;

let Group2185 = browser.currentScene.createNode("Group");
Group2185.DEF = "StandAnimation";
let TimeSensor2186 = browser.currentScene.createNode("TimeSensor");
TimeSensor2186.DEF = "StandTimer";
TimeSensor2186.cycleInterval = 5.73;
TimeSensor2186.loop = True;
Group2185.children = new MFNode();

Group2185.children[0] = TimeSensor2186;

let OrientationInterpolator2187 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2187.DEF = "Stand_r_metatarsal_PitchInterpolator";
OrientationInterpolator2187.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2187.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.015,1,0,0,0.17,-1,0,0,0.025,1,0,0,0.01,1,0,0,0]);
Group2185.children[1] = OrientationInterpolator2187;

let OrientationInterpolator2188 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2188.DEF = "Stand_r_ankle_RotationInterpolator";
OrientationInterpolator2188.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2188.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2185.children[2] = OrientationInterpolator2188;

let OrientationInterpolator2189 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2189.DEF = "Stand_r_knee_RotationInterpolator";
OrientationInterpolator2189.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2189.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2185.children[3] = OrientationInterpolator2189;

let OrientationInterpolator2190 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2190.DEF = "Stand_r_hip_RotationInterpolator";
OrientationInterpolator2190.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2190.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2185.children[4] = OrientationInterpolator2190;

let OrientationInterpolator2191 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2191.DEF = "Stand_l_ankle_RotationInterpolator";
OrientationInterpolator2191.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2191.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2185.children[5] = OrientationInterpolator2191;

let OrientationInterpolator2192 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2192.DEF = "Stand_l_knee_RotationInterpolator";
OrientationInterpolator2192.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2192.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2185.children[6] = OrientationInterpolator2192;

let OrientationInterpolator2193 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2193.DEF = "Stand_l_hip_RotationInterpolator";
OrientationInterpolator2193.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2193.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2185.children[7] = OrientationInterpolator2193;

let OrientationInterpolator2194 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2194.DEF = "Stand_r_wrist_RotationInterpolator";
OrientationInterpolator2194.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2194.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,0.25,0,0,1,0]);
Group2185.children[8] = OrientationInterpolator2194;

let OrientationInterpolator2195 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2195.DEF = "Stand_r_elbow_RotationInterpolator";
OrientationInterpolator2195.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2195.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2185.children[9] = OrientationInterpolator2195;

let OrientationInterpolator2196 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2196.DEF = "Stand_r_shoulder_RotationInterpolator";
OrientationInterpolator2196.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2196.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2185.children[10] = OrientationInterpolator2196;

let OrientationInterpolator2197 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2197.DEF = "Stand_l_wrist_RotationInterpolator";
OrientationInterpolator2197.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2197.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2185.children[11] = OrientationInterpolator2197;

let OrientationInterpolator2198 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2198.DEF = "Stand_l_elbow_RotationInterpolator";
OrientationInterpolator2198.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2198.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2185.children[12] = OrientationInterpolator2198;

let OrientationInterpolator2199 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2199.DEF = "Stand_l_shoulder_RotationInterpolator";
OrientationInterpolator2199.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2199.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2185.children[13] = OrientationInterpolator2199;

let OrientationInterpolator2200 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2200.DEF = "Stand_head_RotationInterpolator";
OrientationInterpolator2200.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2200.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2185.children[14] = OrientationInterpolator2200;

let OrientationInterpolator2201 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2201.DEF = "Stand_neck_RotationInterpolator";
OrientationInterpolator2201.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2201.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5,0,0,1,0]);
Group2185.children[15] = OrientationInterpolator2201;

let OrientationInterpolator2202 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2202.DEF = "Stand_l_eyeball_RotationInterpolator";
OrientationInterpolator2202.key = new MFFloat(new float[0,0.4,0.7,1]);
OrientationInterpolator2202.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0]);
Group2185.children[16] = OrientationInterpolator2202;

let OrientationInterpolator2203 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2203.DEF = "Stand_r_eyeball_RotationInterpolator";
OrientationInterpolator2203.key = new MFFloat(new float[0,0.4,0.7,1]);
OrientationInterpolator2203.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0]);
Group2185.children[17] = OrientationInterpolator2203;

let OrientationInterpolator2204 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2204.DEF = "Stand_lower_body_RotationInterpolator";
OrientationInterpolator2204.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2204.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2185.children[18] = OrientationInterpolator2204;

let OrientationInterpolator2205 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2205.DEF = "Stand_upper_body_RotationInterpolator";
OrientationInterpolator2205.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2205.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2185.children[19] = OrientationInterpolator2205;

let OrientationInterpolator2206 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2206.DEF = "Stand_whole_body_RotationInterpolator";
OrientationInterpolator2206.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2206.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2185.children[20] = OrientationInterpolator2206;

let PositionInterpolator2207 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator2207.DEF = "Stand_whole_body_TranslationInterpolator";
PositionInterpolator2207.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator2207.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group2185.children[21] = PositionInterpolator2207;

let OrientationInterpolator2208 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2208.DEF = "Stand_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2208.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2208.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2185.children[22] = OrientationInterpolator2208;

let OrientationInterpolator2209 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2209.DEF = "Stand_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2209.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2209.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2185.children[23] = OrientationInterpolator2209;

let OrientationInterpolator2210 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2210.DEF = "Stand_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2210.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2210.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2185.children[24] = OrientationInterpolator2210;

let OrientationInterpolator2211 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2211.DEF = "Stand_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2211.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2211.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2185.children[25] = OrientationInterpolator2211;

let OrientationInterpolator2212 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2212.DEF = "Stand_sacroiliac_YawInterpolator";
OrientationInterpolator2212.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2212.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2185.children[26] = OrientationInterpolator2212;

let OrientationInterpolator2213 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2213.DEF = "Stand_vl5_YawInterpolator";
OrientationInterpolator2213.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2213.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2185.children[27] = OrientationInterpolator2213;

let OrientationInterpolator2214 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2214.DEF = "Stand_vc6_YawInterpolator";
OrientationInterpolator2214.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2214.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,-1,0,0,0,0,-1,0,0,0,1,0,0]);
Group2185.children[28] = OrientationInterpolator2214;

let OrientationInterpolator2215 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2215.DEF = "Stand_l_thumb1_PitchInterpolator";
OrientationInterpolator2215.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2215.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2185.children[29] = OrientationInterpolator2215;

let OrientationInterpolator2216 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2216.DEF = "Stand_r_thumb1_PitchInterpolator";
OrientationInterpolator2216.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2216.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,0.1,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group2185.children[30] = OrientationInterpolator2216;

let OrientationInterpolator2217 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2217.DEF = "Stand_r_index1_RollInterpolator";
OrientationInterpolator2217.key = new MFFloat(new float[0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator2217.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.1,0,0,1,0.2,0,0,1,0.3,0,0,1,0,0,0,1,0]);
Group2185.children[31] = OrientationInterpolator2217;

let OrientationInterpolator2218 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2218.DEF = "Stand_r_index2_RollInterpolator";
OrientationInterpolator2218.key = new MFFloat(new float[0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator2218.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.4,0,0,1,0.32,0,0,1,0.25,0,0,1,0.2,0,0,1,0]);
Group2185.children[32] = OrientationInterpolator2218;

let OrientationInterpolator2219 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2219.DEF = "Stand_r_index3_RollInterpolator";
OrientationInterpolator2219.key = new MFFloat(new float[0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator2219.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.3,0,0,1,0.35,0,0,1,0.2,0,0,1,0]);
Group2185.children[33] = OrientationInterpolator2219;

let ROUTE2220 = browser.currentScene.createNode("ROUTE");
ROUTE2220.fromField = "fraction_changed";
ROUTE2220.fromNode = "StandTimer";
ROUTE2220.toField = "set_fraction";
ROUTE2220.toNode = "Stand_r_ankle_RotationInterpolator";
Group2185.children[34] = ROUTE2220;

let ROUTE2221 = browser.currentScene.createNode("ROUTE");
ROUTE2221.fromField = "fraction_changed";
ROUTE2221.fromNode = "StandTimer";
ROUTE2221.toField = "set_fraction";
ROUTE2221.toNode = "Stand_r_knee_RotationInterpolator";
Group2185.children[35] = ROUTE2221;

let ROUTE2222 = browser.currentScene.createNode("ROUTE");
ROUTE2222.fromField = "fraction_changed";
ROUTE2222.fromNode = "StandTimer";
ROUTE2222.toField = "set_fraction";
ROUTE2222.toNode = "Stand_r_hip_RotationInterpolator";
Group2185.children[36] = ROUTE2222;

let ROUTE2223 = browser.currentScene.createNode("ROUTE");
ROUTE2223.fromField = "fraction_changed";
ROUTE2223.fromNode = "StandTimer";
ROUTE2223.toField = "set_fraction";
ROUTE2223.toNode = "Stand_l_ankle_RotationInterpolator";
Group2185.children[37] = ROUTE2223;

let ROUTE2224 = browser.currentScene.createNode("ROUTE");
ROUTE2224.fromField = "fraction_changed";
ROUTE2224.fromNode = "StandTimer";
ROUTE2224.toField = "set_fraction";
ROUTE2224.toNode = "Stand_l_knee_RotationInterpolator";
Group2185.children[38] = ROUTE2224;

let ROUTE2225 = browser.currentScene.createNode("ROUTE");
ROUTE2225.fromField = "fraction_changed";
ROUTE2225.fromNode = "StandTimer";
ROUTE2225.toField = "set_fraction";
ROUTE2225.toNode = "Stand_l_hip_RotationInterpolator";
Group2185.children[39] = ROUTE2225;

let ROUTE2226 = browser.currentScene.createNode("ROUTE");
ROUTE2226.fromField = "fraction_changed";
ROUTE2226.fromNode = "StandTimer";
ROUTE2226.toField = "set_fraction";
ROUTE2226.toNode = "Stand_lower_body_RotationInterpolator";
Group2185.children[40] = ROUTE2226;

let ROUTE2227 = browser.currentScene.createNode("ROUTE");
ROUTE2227.fromField = "fraction_changed";
ROUTE2227.fromNode = "StandTimer";
ROUTE2227.toField = "set_fraction";
ROUTE2227.toNode = "Stand_r_wrist_RotationInterpolator";
Group2185.children[41] = ROUTE2227;

let ROUTE2228 = browser.currentScene.createNode("ROUTE");
ROUTE2228.fromField = "fraction_changed";
ROUTE2228.fromNode = "StandTimer";
ROUTE2228.toField = "set_fraction";
ROUTE2228.toNode = "Stand_r_elbow_RotationInterpolator";
Group2185.children[42] = ROUTE2228;

let ROUTE2229 = browser.currentScene.createNode("ROUTE");
ROUTE2229.fromField = "fraction_changed";
ROUTE2229.fromNode = "StandTimer";
ROUTE2229.toField = "set_fraction";
ROUTE2229.toNode = "Stand_r_shoulder_RotationInterpolator";
Group2185.children[43] = ROUTE2229;

let ROUTE2230 = browser.currentScene.createNode("ROUTE");
ROUTE2230.fromField = "fraction_changed";
ROUTE2230.fromNode = "StandTimer";
ROUTE2230.toField = "set_fraction";
ROUTE2230.toNode = "Stand_l_wrist_RotationInterpolator";
Group2185.children[44] = ROUTE2230;

let ROUTE2231 = browser.currentScene.createNode("ROUTE");
ROUTE2231.fromField = "fraction_changed";
ROUTE2231.fromNode = "StandTimer";
ROUTE2231.toField = "set_fraction";
ROUTE2231.toNode = "Stand_l_elbow_RotationInterpolator";
Group2185.children[45] = ROUTE2231;

let ROUTE2232 = browser.currentScene.createNode("ROUTE");
ROUTE2232.fromField = "fraction_changed";
ROUTE2232.fromNode = "StandTimer";
ROUTE2232.toField = "set_fraction";
ROUTE2232.toNode = "Stand_l_shoulder_RotationInterpolator";
Group2185.children[46] = ROUTE2232;

let ROUTE2233 = browser.currentScene.createNode("ROUTE");
ROUTE2233.fromField = "fraction_changed";
ROUTE2233.fromNode = "StandTimer";
ROUTE2233.toField = "set_fraction";
ROUTE2233.toNode = "Stand_head_RotationInterpolator";
Group2185.children[47] = ROUTE2233;

let ROUTE2234 = browser.currentScene.createNode("ROUTE");
ROUTE2234.fromField = "fraction_changed";
ROUTE2234.fromNode = "StandTimer";
ROUTE2234.toField = "set_fraction";
ROUTE2234.toNode = "Stand_neck_RotationInterpolator";
Group2185.children[48] = ROUTE2234;

let ROUTE2235 = browser.currentScene.createNode("ROUTE");
ROUTE2235.fromField = "fraction_changed";
ROUTE2235.fromNode = "StandTimer";
ROUTE2235.toField = "set_fraction";
ROUTE2235.toNode = "Stand_l_eyeball_RotationInterpolator";
Group2185.children[49] = ROUTE2235;

let ROUTE2236 = browser.currentScene.createNode("ROUTE");
ROUTE2236.fromField = "fraction_changed";
ROUTE2236.fromNode = "StandTimer";
ROUTE2236.toField = "set_fraction";
ROUTE2236.toNode = "Stand_r_eyeball_RotationInterpolator";
Group2185.children[50] = ROUTE2236;

let ROUTE2237 = browser.currentScene.createNode("ROUTE");
ROUTE2237.fromField = "fraction_changed";
ROUTE2237.fromNode = "StandTimer";
ROUTE2237.toField = "set_fraction";
ROUTE2237.toNode = "Stand_upper_body_RotationInterpolator";
Group2185.children[51] = ROUTE2237;

let ROUTE2238 = browser.currentScene.createNode("ROUTE");
ROUTE2238.fromField = "fraction_changed";
ROUTE2238.fromNode = "StandTimer";
ROUTE2238.toField = "set_fraction";
ROUTE2238.toNode = "Stand_whole_body_RotationInterpolator";
Group2185.children[52] = ROUTE2238;

let ROUTE2239 = browser.currentScene.createNode("ROUTE");
ROUTE2239.fromField = "fraction_changed";
ROUTE2239.fromNode = "StandTimer";
ROUTE2239.toField = "set_fraction";
ROUTE2239.toNode = "Stand_whole_body_TranslationInterpolator";
Group2185.children[53] = ROUTE2239;

let ROUTE2240 = browser.currentScene.createNode("ROUTE");
ROUTE2240.fromField = "fraction_changed";
ROUTE2240.fromNode = "StandTimer";
ROUTE2240.toField = "set_fraction";
ROUTE2240.toNode = "Stand_l_sternoclavicular_RollInterpolator";
Group2185.children[54] = ROUTE2240;

let ROUTE2241 = browser.currentScene.createNode("ROUTE");
ROUTE2241.fromField = "fraction_changed";
ROUTE2241.fromNode = "StandTimer";
ROUTE2241.toField = "set_fraction";
ROUTE2241.toNode = "Stand_l_acromioclavicular_RollInterpolator";
Group2185.children[55] = ROUTE2241;

let ROUTE2242 = browser.currentScene.createNode("ROUTE");
ROUTE2242.fromField = "fraction_changed";
ROUTE2242.fromNode = "StandTimer";
ROUTE2242.toField = "set_fraction";
ROUTE2242.toNode = "Stand_r_sternoclavicular_RollInterpolator";
Group2185.children[56] = ROUTE2242;

let ROUTE2243 = browser.currentScene.createNode("ROUTE");
ROUTE2243.fromField = "fraction_changed";
ROUTE2243.fromNode = "StandTimer";
ROUTE2243.toField = "set_fraction";
ROUTE2243.toNode = "Stand_r_acromioclavicular_RollInterpolator";
Group2185.children[57] = ROUTE2243;

let ROUTE2244 = browser.currentScene.createNode("ROUTE");
ROUTE2244.fromField = "fraction_changed";
ROUTE2244.fromNode = "StandTimer";
ROUTE2244.toField = "set_fraction";
ROUTE2244.toNode = "Stand_r_metatarsal_PitchInterpolator";
Group2185.children[58] = ROUTE2244;

let ROUTE2245 = browser.currentScene.createNode("ROUTE");
ROUTE2245.fromField = "fraction_changed";
ROUTE2245.fromNode = "StandTimer";
ROUTE2245.toField = "set_fraction";
ROUTE2245.toNode = "Stand_sacroiliac_YawInterpolator";
Group2185.children[59] = ROUTE2245;

let ROUTE2246 = browser.currentScene.createNode("ROUTE");
ROUTE2246.fromField = "fraction_changed";
ROUTE2246.fromNode = "StandTimer";
ROUTE2246.toField = "set_fraction";
ROUTE2246.toNode = "Stand_vl5_YawInterpolator";
Group2185.children[60] = ROUTE2246;

let ROUTE2247 = browser.currentScene.createNode("ROUTE");
ROUTE2247.fromField = "fraction_changed";
ROUTE2247.fromNode = "StandTimer";
ROUTE2247.toField = "set_fraction";
ROUTE2247.toNode = "Stand_vc6_YawInterpolator";
Group2185.children[61] = ROUTE2247;

let ROUTE2248 = browser.currentScene.createNode("ROUTE");
ROUTE2248.fromField = "fraction_changed";
ROUTE2248.fromNode = "StandTimer";
ROUTE2248.toField = "set_fraction";
ROUTE2248.toNode = "Stand_l_thumb1_PitchInterpolator";
Group2185.children[62] = ROUTE2248;

let ROUTE2249 = browser.currentScene.createNode("ROUTE");
ROUTE2249.fromField = "fraction_changed";
ROUTE2249.fromNode = "StandTimer";
ROUTE2249.toField = "set_fraction";
ROUTE2249.toNode = "Stand_r_thumb1_PitchInterpolator";
Group2185.children[63] = ROUTE2249;

let ROUTE2250 = browser.currentScene.createNode("ROUTE");
ROUTE2250.fromField = "fraction_changed";
ROUTE2250.fromNode = "StandTimer";
ROUTE2250.toField = "set_fraction";
ROUTE2250.toNode = "Stand_r_index1_RollInterpolator";
Group2185.children[64] = ROUTE2250;

let ROUTE2251 = browser.currentScene.createNode("ROUTE");
ROUTE2251.fromField = "fraction_changed";
ROUTE2251.fromNode = "StandTimer";
ROUTE2251.toField = "set_fraction";
ROUTE2251.toNode = "Stand_r_index2_RollInterpolator";
Group2185.children[65] = ROUTE2251;

let ROUTE2252 = browser.currentScene.createNode("ROUTE");
ROUTE2252.fromField = "fraction_changed";
ROUTE2252.fromNode = "StandTimer";
ROUTE2252.toField = "set_fraction";
ROUTE2252.toNode = "Stand_r_index3_RollInterpolator";
Group2185.children[66] = ROUTE2252;

let ROUTE2253 = browser.currentScene.createNode("ROUTE");
ROUTE2253.fromField = "value_changed";
ROUTE2253.fromNode = "Stand_r_ankle_RotationInterpolator";
ROUTE2253.toField = "rotation";
ROUTE2253.toNode = "hanim_r_ankle";
Group2185.children[67] = ROUTE2253;

let ROUTE2254 = browser.currentScene.createNode("ROUTE");
ROUTE2254.fromField = "value_changed";
ROUTE2254.fromNode = "Stand_r_knee_RotationInterpolator";
ROUTE2254.toField = "rotation";
ROUTE2254.toNode = "hanim_r_knee";
Group2185.children[68] = ROUTE2254;

let ROUTE2255 = browser.currentScene.createNode("ROUTE");
ROUTE2255.fromField = "value_changed";
ROUTE2255.fromNode = "Stand_r_hip_RotationInterpolator";
ROUTE2255.toField = "rotation";
ROUTE2255.toNode = "hanim_r_hip";
Group2185.children[69] = ROUTE2255;

let ROUTE2256 = browser.currentScene.createNode("ROUTE");
ROUTE2256.fromField = "value_changed";
ROUTE2256.fromNode = "Stand_l_ankle_RotationInterpolator";
ROUTE2256.toField = "rotation";
ROUTE2256.toNode = "hanim_l_ankle";
Group2185.children[70] = ROUTE2256;

let ROUTE2257 = browser.currentScene.createNode("ROUTE");
ROUTE2257.fromField = "value_changed";
ROUTE2257.fromNode = "Stand_l_knee_RotationInterpolator";
ROUTE2257.toField = "rotation";
ROUTE2257.toNode = "hanim_l_knee";
Group2185.children[71] = ROUTE2257;

let ROUTE2258 = browser.currentScene.createNode("ROUTE");
ROUTE2258.fromField = "value_changed";
ROUTE2258.fromNode = "Stand_l_hip_RotationInterpolator";
ROUTE2258.toField = "rotation";
ROUTE2258.toNode = "hanim_l_hip";
Group2185.children[72] = ROUTE2258;

let ROUTE2259 = browser.currentScene.createNode("ROUTE");
ROUTE2259.fromField = "value_changed";
ROUTE2259.fromNode = "Stand_r_wrist_RotationInterpolator";
ROUTE2259.toField = "rotation";
ROUTE2259.toNode = "hanim_r_wrist";
Group2185.children[73] = ROUTE2259;

let ROUTE2260 = browser.currentScene.createNode("ROUTE");
ROUTE2260.fromField = "value_changed";
ROUTE2260.fromNode = "Stand_r_elbow_RotationInterpolator";
ROUTE2260.toField = "rotation";
ROUTE2260.toNode = "hanim_r_elbow";
Group2185.children[74] = ROUTE2260;

let ROUTE2261 = browser.currentScene.createNode("ROUTE");
ROUTE2261.fromField = "value_changed";
ROUTE2261.fromNode = "Stand_r_shoulder_RotationInterpolator";
ROUTE2261.toField = "rotation";
ROUTE2261.toNode = "hanim_r_shoulder";
Group2185.children[75] = ROUTE2261;

let ROUTE2262 = browser.currentScene.createNode("ROUTE");
ROUTE2262.fromField = "value_changed";
ROUTE2262.fromNode = "Stand_l_wrist_RotationInterpolator";
ROUTE2262.toField = "rotation";
ROUTE2262.toNode = "hanim_l_wrist";
Group2185.children[76] = ROUTE2262;

let ROUTE2263 = browser.currentScene.createNode("ROUTE");
ROUTE2263.fromField = "value_changed";
ROUTE2263.fromNode = "Stand_l_elbow_RotationInterpolator";
ROUTE2263.toField = "rotation";
ROUTE2263.toNode = "hanim_l_elbow";
Group2185.children[77] = ROUTE2263;

let ROUTE2264 = browser.currentScene.createNode("ROUTE");
ROUTE2264.fromField = "value_changed";
ROUTE2264.fromNode = "Stand_l_shoulder_RotationInterpolator";
ROUTE2264.toField = "rotation";
ROUTE2264.toNode = "hanim_l_shoulder";
Group2185.children[78] = ROUTE2264;

let ROUTE2265 = browser.currentScene.createNode("ROUTE");
ROUTE2265.fromField = "value_changed";
ROUTE2265.fromNode = "Stand_head_RotationInterpolator";
ROUTE2265.toField = "rotation";
ROUTE2265.toNode = "hanim_skullbase";
Group2185.children[79] = ROUTE2265;

let ROUTE2266 = browser.currentScene.createNode("ROUTE");
ROUTE2266.fromField = "value_changed";
ROUTE2266.fromNode = "Stand_neck_RotationInterpolator";
ROUTE2266.toField = "rotation";
ROUTE2266.toNode = "hanim_vc7";
Group2185.children[80] = ROUTE2266;

let ROUTE2267 = browser.currentScene.createNode("ROUTE");
ROUTE2267.fromField = "value_changed";
ROUTE2267.fromNode = "Stand_l_eyeball_RotationInterpolator";
ROUTE2267.toField = "rotation";
ROUTE2267.toNode = "hanim_l_eyeball_joint";
Group2185.children[81] = ROUTE2267;

let ROUTE2268 = browser.currentScene.createNode("ROUTE");
ROUTE2268.fromField = "value_changed";
ROUTE2268.fromNode = "Stand_r_eyeball_RotationInterpolator";
ROUTE2268.toField = "rotation";
ROUTE2268.toNode = "hanim_r_eyeball_joint";
Group2185.children[82] = ROUTE2268;

let ROUTE2269 = browser.currentScene.createNode("ROUTE");
ROUTE2269.fromField = "value_changed";
ROUTE2269.fromNode = "Stand_upper_body_RotationInterpolator";
ROUTE2269.toField = "rotation";
ROUTE2269.toNode = "hanim_vl1";
Group2185.children[83] = ROUTE2269;

let ROUTE2270 = browser.currentScene.createNode("ROUTE");
ROUTE2270.fromField = "value_changed";
ROUTE2270.fromNode = "Stand_lower_body_RotationInterpolator";
ROUTE2270.toField = "rotation";
ROUTE2270.toNode = "hanim_sacroiliac";
Group2185.children[84] = ROUTE2270;

let ROUTE2271 = browser.currentScene.createNode("ROUTE");
ROUTE2271.fromField = "value_changed";
ROUTE2271.fromNode = "Stand_whole_body_RotationInterpolator";
ROUTE2271.toField = "rotation";
ROUTE2271.toNode = "hanim_humanoid_root";
Group2185.children[85] = ROUTE2271;

let ROUTE2272 = browser.currentScene.createNode("ROUTE");
ROUTE2272.fromField = "value_changed";
ROUTE2272.fromNode = "Stand_whole_body_TranslationInterpolator";
ROUTE2272.toField = "translation";
ROUTE2272.toNode = "hanim_humanoid_root";
Group2185.children[86] = ROUTE2272;

let ROUTE2273 = browser.currentScene.createNode("ROUTE");
ROUTE2273.fromField = "value_changed";
ROUTE2273.fromNode = "Stand_l_sternoclavicular_RollInterpolator";
ROUTE2273.toField = "rotation";
ROUTE2273.toNode = "hanim_l_sternoclavicular";
Group2185.children[87] = ROUTE2273;

let ROUTE2274 = browser.currentScene.createNode("ROUTE");
ROUTE2274.fromField = "value_changed";
ROUTE2274.fromNode = "Stand_l_acromioclavicular_RollInterpolator";
ROUTE2274.toField = "rotation";
ROUTE2274.toNode = "hanim_l_acromioclavicular";
Group2185.children[88] = ROUTE2274;

let ROUTE2275 = browser.currentScene.createNode("ROUTE");
ROUTE2275.fromField = "value_changed";
ROUTE2275.fromNode = "Stand_r_sternoclavicular_RollInterpolator";
ROUTE2275.toField = "rotation";
ROUTE2275.toNode = "hanim_r_sternoclavicular";
Group2185.children[89] = ROUTE2275;

let ROUTE2276 = browser.currentScene.createNode("ROUTE");
ROUTE2276.fromField = "value_changed";
ROUTE2276.fromNode = "Stand_r_acromioclavicular_RollInterpolator";
ROUTE2276.toField = "rotation";
ROUTE2276.toNode = "hanim_r_acromioclavicular";
Group2185.children[90] = ROUTE2276;

let ROUTE2277 = browser.currentScene.createNode("ROUTE");
ROUTE2277.fromField = "value_changed";
ROUTE2277.fromNode = "Stand_r_metatarsal_PitchInterpolator";
ROUTE2277.toField = "rotation";
ROUTE2277.toNode = "hanim_l_metatarsal";
Group2185.children[91] = ROUTE2277;

let ROUTE2278 = browser.currentScene.createNode("ROUTE");
ROUTE2278.fromField = "value_changed";
ROUTE2278.fromNode = "Stand_r_metatarsal_PitchInterpolator";
ROUTE2278.toField = "rotation";
ROUTE2278.toNode = "hanim_r_metatarsal";
Group2185.children[92] = ROUTE2278;

let ROUTE2279 = browser.currentScene.createNode("ROUTE");
ROUTE2279.fromField = "value_changed";
ROUTE2279.fromNode = "Stand_sacroiliac_YawInterpolator";
ROUTE2279.toField = "rotation";
ROUTE2279.toNode = "hanim_sacroiliac";
Group2185.children[93] = ROUTE2279;

let ROUTE2280 = browser.currentScene.createNode("ROUTE");
ROUTE2280.fromField = "value_changed";
ROUTE2280.fromNode = "Stand_vl5_YawInterpolator";
ROUTE2280.toField = "rotation";
ROUTE2280.toNode = "hanim_vl5";
Group2185.children[94] = ROUTE2280;

let ROUTE2281 = browser.currentScene.createNode("ROUTE");
ROUTE2281.fromField = "value_changed";
ROUTE2281.fromNode = "Stand_vc6_YawInterpolator";
ROUTE2281.toField = "rotation";
ROUTE2281.toNode = "hanim_vc6";
Group2185.children[95] = ROUTE2281;

let ROUTE2282 = browser.currentScene.createNode("ROUTE");
ROUTE2282.fromField = "value_changed";
ROUTE2282.fromNode = "Stand_l_thumb1_PitchInterpolator";
ROUTE2282.toField = "rotation";
ROUTE2282.toNode = "hanim_l_thumb1";
Group2185.children[96] = ROUTE2282;

let ROUTE2283 = browser.currentScene.createNode("ROUTE");
ROUTE2283.fromField = "value_changed";
ROUTE2283.fromNode = "Stand_r_thumb1_PitchInterpolator";
ROUTE2283.toField = "rotation";
ROUTE2283.toNode = "hanim_r_thumb1";
Group2185.children[97] = ROUTE2283;

let ROUTE2284 = browser.currentScene.createNode("ROUTE");
ROUTE2284.fromField = "value_changed";
ROUTE2284.fromNode = "Stand_r_index1_RollInterpolator";
ROUTE2284.toField = "rotation";
ROUTE2284.toNode = "hanim_r_index1";
Group2185.children[98] = ROUTE2284;

let ROUTE2285 = browser.currentScene.createNode("ROUTE");
ROUTE2285.fromField = "value_changed";
ROUTE2285.fromNode = "Stand_r_index2_RollInterpolator";
ROUTE2285.toField = "rotation";
ROUTE2285.toNode = "hanim_r_index2";
Group2185.children[99] = ROUTE2285;

let ROUTE2286 = browser.currentScene.createNode("ROUTE");
ROUTE2286.fromField = "value_changed";
ROUTE2286.fromNode = "Stand_r_index3_RollInterpolator";
ROUTE2286.toField = "rotation";
ROUTE2286.toNode = "hanim_r_index3";
Group2185.children[100] = ROUTE2286;

let ROUTE2287 = browser.currentScene.createNode("ROUTE");
ROUTE2287.fromField = "value_changed";
ROUTE2287.fromNode = "Stand_r_index1_RollInterpolator";
ROUTE2287.toField = "rotation";
ROUTE2287.toNode = "hanim_r_middle1";
Group2185.children[101] = ROUTE2287;

let ROUTE2288 = browser.currentScene.createNode("ROUTE");
ROUTE2288.fromField = "value_changed";
ROUTE2288.fromNode = "Stand_r_index2_RollInterpolator";
ROUTE2288.toField = "rotation";
ROUTE2288.toNode = "hanim_r_middle2";
Group2185.children[102] = ROUTE2288;

let ROUTE2289 = browser.currentScene.createNode("ROUTE");
ROUTE2289.fromField = "value_changed";
ROUTE2289.fromNode = "Stand_r_index3_RollInterpolator";
ROUTE2289.toField = "rotation";
ROUTE2289.toNode = "hanim_r_middle3";
Group2185.children[103] = ROUTE2289;

let ROUTE2290 = browser.currentScene.createNode("ROUTE");
ROUTE2290.fromField = "value_changed";
ROUTE2290.fromNode = "Stand_r_index1_RollInterpolator";
ROUTE2290.toField = "rotation";
ROUTE2290.toNode = "hanim_r_ring1";
Group2185.children[104] = ROUTE2290;

let ROUTE2291 = browser.currentScene.createNode("ROUTE");
ROUTE2291.fromField = "value_changed";
ROUTE2291.fromNode = "Stand_r_index2_RollInterpolator";
ROUTE2291.toField = "rotation";
ROUTE2291.toNode = "hanim_r_ring2";
Group2185.children[105] = ROUTE2291;

let ROUTE2292 = browser.currentScene.createNode("ROUTE");
ROUTE2292.fromField = "value_changed";
ROUTE2292.fromNode = "Stand_r_index3_RollInterpolator";
ROUTE2292.toField = "rotation";
ROUTE2292.toNode = "hanim_r_ring3";
Group2185.children[106] = ROUTE2292;

let ROUTE2293 = browser.currentScene.createNode("ROUTE");
ROUTE2293.fromField = "value_changed";
ROUTE2293.fromNode = "Stand_r_index1_RollInterpolator";
ROUTE2293.toField = "rotation";
ROUTE2293.toNode = "hanim_r_pinky1";
Group2185.children[107] = ROUTE2293;

let ROUTE2294 = browser.currentScene.createNode("ROUTE");
ROUTE2294.fromField = "value_changed";
ROUTE2294.fromNode = "Stand_r_index2_RollInterpolator";
ROUTE2294.toField = "rotation";
ROUTE2294.toNode = "hanim_r_pinky2";
Group2185.children[108] = ROUTE2294;

let ROUTE2295 = browser.currentScene.createNode("ROUTE");
ROUTE2295.fromField = "value_changed";
ROUTE2295.fromNode = "Stand_r_index3_RollInterpolator";
ROUTE2295.toField = "rotation";
ROUTE2295.toNode = "hanim_r_pinky3";
Group2185.children[109] = ROUTE2295;

browser.currentScene.children[14] = Group2185;

let Group2296 = browser.currentScene.createNode("Group");
Group2296.DEF = "PitchesAnimation";
let TimeSensor2297 = browser.currentScene.createNode("TimeSensor");
TimeSensor2297.DEF = "PitchTimer";
TimeSensor2297.cycleInterval = 5.73;
TimeSensor2297.loop = True;
Group2296.children = new MFNode();

Group2296.children[0] = TimeSensor2297;

let OrientationInterpolator2298 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2298.DEF = "Pitch_r_metatarsal_PitchInterpolator";
OrientationInterpolator2298.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2298.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0]);
Group2296.children[1] = OrientationInterpolator2298;

let OrientationInterpolator2299 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2299.DEF = "Pitches_r_ankle_RotationInterpolator";
OrientationInterpolator2299.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2299.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group2296.children[2] = OrientationInterpolator2299;

let OrientationInterpolator2300 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2300.DEF = "Pitches_r_knee_RotationInterpolator";
OrientationInterpolator2300.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2300.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2296.children[3] = OrientationInterpolator2300;

let OrientationInterpolator2301 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2301.DEF = "Pitches_r_hip_RotationInterpolator";
OrientationInterpolator2301.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2301.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group2296.children[4] = OrientationInterpolator2301;

let OrientationInterpolator2302 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2302.DEF = "Pitches_l_ankle_RotationInterpolator";
OrientationInterpolator2302.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2302.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group2296.children[5] = OrientationInterpolator2302;

let OrientationInterpolator2303 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2303.DEF = "Pitches_l_knee_RotationInterpolator";
OrientationInterpolator2303.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2303.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2296.children[6] = OrientationInterpolator2303;

let OrientationInterpolator2304 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2304.DEF = "Pitches_l_hip_RotationInterpolator";
OrientationInterpolator2304.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2304.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group2296.children[7] = OrientationInterpolator2304;

let OrientationInterpolator2305 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2305.DEF = "Pitches_r_wrist_RotationInterpolator";
OrientationInterpolator2305.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2305.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2296.children[8] = OrientationInterpolator2305;

let OrientationInterpolator2306 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2306.DEF = "Pitches_r_elbow_RotationInterpolator";
OrientationInterpolator2306.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2306.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2296.children[9] = OrientationInterpolator2306;

let OrientationInterpolator2307 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2307.DEF = "Pitches_r_shoulder_RotationInterpolator";
OrientationInterpolator2307.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2307.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group2296.children[10] = OrientationInterpolator2307;

let OrientationInterpolator2308 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2308.DEF = "Pitches_l_wrist_RotationInterpolator";
OrientationInterpolator2308.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2308.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2296.children[11] = OrientationInterpolator2308;

let OrientationInterpolator2309 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2309.DEF = "Pitches_l_elbow_RotationInterpolator";
OrientationInterpolator2309.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2309.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2296.children[12] = OrientationInterpolator2309;

let OrientationInterpolator2310 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2310.DEF = "Pitches_l_shoulder_RotationInterpolator";
OrientationInterpolator2310.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2310.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group2296.children[13] = OrientationInterpolator2310;

let OrientationInterpolator2311 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2311.DEF = "Pitches_head_RotationInterpolator";
OrientationInterpolator2311.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2311.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2296.children[14] = OrientationInterpolator2311;

let OrientationInterpolator2312 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2312.DEF = "Pitches_neck_RotationInterpolator";
OrientationInterpolator2312.key = new MFFloat(new float[0,0.25,0.55,1]);
OrientationInterpolator2312.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.55,-1,0,0,1.05,0,0,1,0]);
Group2296.children[15] = OrientationInterpolator2312;

let OrientationInterpolator2313 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2313.DEF = "Pitches_lower_body_RotationInterpolator";
OrientationInterpolator2313.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2313.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2296.children[16] = OrientationInterpolator2313;

let OrientationInterpolator2314 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2314.DEF = "Pitches_upper_body_RotationInterpolator";
OrientationInterpolator2314.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2314.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2296.children[17] = OrientationInterpolator2314;

let OrientationInterpolator2315 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2315.DEF = "Pitches_whole_body_RotationInterpolator";
OrientationInterpolator2315.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2315.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2296.children[18] = OrientationInterpolator2315;

let PositionInterpolator2316 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator2316.DEF = "Pitches_whole_body_TranslationInterpolator";
PositionInterpolator2316.key = new MFFloat(new float[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
PositionInterpolator2316.keyValue = new MFVec3f(new float[0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0]);
Group2296.children[19] = PositionInterpolator2316;

let OrientationInterpolator2317 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2317.DEF = "Pitch_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2317.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2317.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2296.children[20] = OrientationInterpolator2317;

let OrientationInterpolator2318 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2318.DEF = "Pitch_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2318.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2318.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2296.children[21] = OrientationInterpolator2318;

let OrientationInterpolator2319 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2319.DEF = "Pitch_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2319.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2319.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2296.children[22] = OrientationInterpolator2319;

let OrientationInterpolator2320 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2320.DEF = "Pitch_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2320.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2320.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2296.children[23] = OrientationInterpolator2320;

let OrientationInterpolator2321 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2321.DEF = "Pitch_sacroiliac_YawInterpolator";
OrientationInterpolator2321.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2321.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2296.children[24] = OrientationInterpolator2321;

let OrientationInterpolator2322 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2322.DEF = "Pitch_vl5_YawInterpolator";
OrientationInterpolator2322.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2322.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2296.children[25] = OrientationInterpolator2322;

let OrientationInterpolator2323 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2323.DEF = "Pitch_vc6_YawInterpolator";
OrientationInterpolator2323.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2323.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2296.children[26] = OrientationInterpolator2323;

let OrientationInterpolator2324 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2324.DEF = "Pitch_l_thumb1_PitchInterpolator";
OrientationInterpolator2324.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2324.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group2296.children[27] = OrientationInterpolator2324;

let OrientationInterpolator2325 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2325.DEF = "Pitch_r_thumb1_PitchInterpolator";
OrientationInterpolator2325.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2325.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group2296.children[28] = OrientationInterpolator2325;

let ROUTE2326 = browser.currentScene.createNode("ROUTE");
ROUTE2326.fromField = "fraction_changed";
ROUTE2326.fromNode = "PitchTimer";
ROUTE2326.toField = "set_fraction";
ROUTE2326.toNode = "Pitches_r_ankle_RotationInterpolator";
Group2296.children[29] = ROUTE2326;

let ROUTE2327 = browser.currentScene.createNode("ROUTE");
ROUTE2327.fromField = "fraction_changed";
ROUTE2327.fromNode = "PitchTimer";
ROUTE2327.toField = "set_fraction";
ROUTE2327.toNode = "Pitches_r_knee_RotationInterpolator";
Group2296.children[30] = ROUTE2327;

let ROUTE2328 = browser.currentScene.createNode("ROUTE");
ROUTE2328.fromField = "fraction_changed";
ROUTE2328.fromNode = "PitchTimer";
ROUTE2328.toField = "set_fraction";
ROUTE2328.toNode = "Pitches_r_hip_RotationInterpolator";
Group2296.children[31] = ROUTE2328;

let ROUTE2329 = browser.currentScene.createNode("ROUTE");
ROUTE2329.fromField = "fraction_changed";
ROUTE2329.fromNode = "PitchTimer";
ROUTE2329.toField = "set_fraction";
ROUTE2329.toNode = "Pitches_l_ankle_RotationInterpolator";
Group2296.children[32] = ROUTE2329;

let ROUTE2330 = browser.currentScene.createNode("ROUTE");
ROUTE2330.fromField = "fraction_changed";
ROUTE2330.fromNode = "PitchTimer";
ROUTE2330.toField = "set_fraction";
ROUTE2330.toNode = "Pitches_l_knee_RotationInterpolator";
Group2296.children[33] = ROUTE2330;

let ROUTE2331 = browser.currentScene.createNode("ROUTE");
ROUTE2331.fromField = "fraction_changed";
ROUTE2331.fromNode = "PitchTimer";
ROUTE2331.toField = "set_fraction";
ROUTE2331.toNode = "Pitches_l_hip_RotationInterpolator";
Group2296.children[34] = ROUTE2331;

let ROUTE2332 = browser.currentScene.createNode("ROUTE");
ROUTE2332.fromField = "fraction_changed";
ROUTE2332.fromNode = "PitchTimer";
ROUTE2332.toField = "set_fraction";
ROUTE2332.toNode = "Pitches_lower_body_RotationInterpolator";
Group2296.children[35] = ROUTE2332;

let ROUTE2333 = browser.currentScene.createNode("ROUTE");
ROUTE2333.fromField = "fraction_changed";
ROUTE2333.fromNode = "PitchTimer";
ROUTE2333.toField = "set_fraction";
ROUTE2333.toNode = "Pitches_r_wrist_RotationInterpolator";
Group2296.children[36] = ROUTE2333;

let ROUTE2334 = browser.currentScene.createNode("ROUTE");
ROUTE2334.fromField = "fraction_changed";
ROUTE2334.fromNode = "PitchTimer";
ROUTE2334.toField = "set_fraction";
ROUTE2334.toNode = "Pitches_r_elbow_RotationInterpolator";
Group2296.children[37] = ROUTE2334;

let ROUTE2335 = browser.currentScene.createNode("ROUTE");
ROUTE2335.fromField = "fraction_changed";
ROUTE2335.fromNode = "PitchTimer";
ROUTE2335.toField = "set_fraction";
ROUTE2335.toNode = "Pitches_r_shoulder_RotationInterpolator";
Group2296.children[38] = ROUTE2335;

let ROUTE2336 = browser.currentScene.createNode("ROUTE");
ROUTE2336.fromField = "fraction_changed";
ROUTE2336.fromNode = "PitchTimer";
ROUTE2336.toField = "set_fraction";
ROUTE2336.toNode = "Pitches_l_wrist_RotationInterpolator";
Group2296.children[39] = ROUTE2336;

let ROUTE2337 = browser.currentScene.createNode("ROUTE");
ROUTE2337.fromField = "fraction_changed";
ROUTE2337.fromNode = "PitchTimer";
ROUTE2337.toField = "set_fraction";
ROUTE2337.toNode = "Pitches_l_elbow_RotationInterpolator";
Group2296.children[40] = ROUTE2337;

let ROUTE2338 = browser.currentScene.createNode("ROUTE");
ROUTE2338.fromField = "fraction_changed";
ROUTE2338.fromNode = "PitchTimer";
ROUTE2338.toField = "set_fraction";
ROUTE2338.toNode = "Pitches_l_shoulder_RotationInterpolator";
Group2296.children[41] = ROUTE2338;

let ROUTE2339 = browser.currentScene.createNode("ROUTE");
ROUTE2339.fromField = "fraction_changed";
ROUTE2339.fromNode = "PitchTimer";
ROUTE2339.toField = "set_fraction";
ROUTE2339.toNode = "Pitches_head_RotationInterpolator";
Group2296.children[42] = ROUTE2339;

let ROUTE2340 = browser.currentScene.createNode("ROUTE");
ROUTE2340.fromField = "fraction_changed";
ROUTE2340.fromNode = "PitchTimer";
ROUTE2340.toField = "set_fraction";
ROUTE2340.toNode = "Pitches_neck_RotationInterpolator";
Group2296.children[43] = ROUTE2340;

let ROUTE2341 = browser.currentScene.createNode("ROUTE");
ROUTE2341.fromField = "fraction_changed";
ROUTE2341.fromNode = "PitchTimer";
ROUTE2341.toField = "set_fraction";
ROUTE2341.toNode = "Pitches_upper_body_RotationInterpolator";
Group2296.children[44] = ROUTE2341;

let ROUTE2342 = browser.currentScene.createNode("ROUTE");
ROUTE2342.fromField = "fraction_changed";
ROUTE2342.fromNode = "PitchTimer";
ROUTE2342.toField = "set_fraction";
ROUTE2342.toNode = "Pitches_whole_body_RotationInterpolator";
Group2296.children[45] = ROUTE2342;

let ROUTE2343 = browser.currentScene.createNode("ROUTE");
ROUTE2343.fromField = "fraction_changed";
ROUTE2343.fromNode = "PitchTimer";
ROUTE2343.toField = "set_fraction";
ROUTE2343.toNode = "Pitches_whole_body_TranslationInterpolator";
Group2296.children[46] = ROUTE2343;

let ROUTE2344 = browser.currentScene.createNode("ROUTE");
ROUTE2344.fromField = "fraction_changed";
ROUTE2344.fromNode = "PitchTimer";
ROUTE2344.toField = "set_fraction";
ROUTE2344.toNode = "Pitch_l_sternoclavicular_RollInterpolator";
Group2296.children[47] = ROUTE2344;

let ROUTE2345 = browser.currentScene.createNode("ROUTE");
ROUTE2345.fromField = "fraction_changed";
ROUTE2345.fromNode = "PitchTimer";
ROUTE2345.toField = "set_fraction";
ROUTE2345.toNode = "Pitch_l_acromioclavicular_RollInterpolator";
Group2296.children[48] = ROUTE2345;

let ROUTE2346 = browser.currentScene.createNode("ROUTE");
ROUTE2346.fromField = "fraction_changed";
ROUTE2346.fromNode = "PitchTimer";
ROUTE2346.toField = "set_fraction";
ROUTE2346.toNode = "Pitch_r_sternoclavicular_RollInterpolator";
Group2296.children[49] = ROUTE2346;

let ROUTE2347 = browser.currentScene.createNode("ROUTE");
ROUTE2347.fromField = "fraction_changed";
ROUTE2347.fromNode = "PitchTimer";
ROUTE2347.toField = "set_fraction";
ROUTE2347.toNode = "Pitch_r_acromioclavicular_RollInterpolator";
Group2296.children[50] = ROUTE2347;

let ROUTE2348 = browser.currentScene.createNode("ROUTE");
ROUTE2348.fromField = "fraction_changed";
ROUTE2348.fromNode = "PitchTimer";
ROUTE2348.toField = "set_fraction";
ROUTE2348.toNode = "Pitch_r_metatarsal_PitchInterpolator";
Group2296.children[51] = ROUTE2348;

let ROUTE2349 = browser.currentScene.createNode("ROUTE");
ROUTE2349.fromField = "fraction_changed";
ROUTE2349.fromNode = "PitchTimer";
ROUTE2349.toField = "set_fraction";
ROUTE2349.toNode = "Pitch_sacroiliac_YawInterpolator";
Group2296.children[52] = ROUTE2349;

let ROUTE2350 = browser.currentScene.createNode("ROUTE");
ROUTE2350.fromField = "fraction_changed";
ROUTE2350.fromNode = "PitchTimer";
ROUTE2350.toField = "set_fraction";
ROUTE2350.toNode = "Pitch_vl5_YawInterpolator";
Group2296.children[53] = ROUTE2350;

let ROUTE2351 = browser.currentScene.createNode("ROUTE");
ROUTE2351.fromField = "fraction_changed";
ROUTE2351.fromNode = "PitchTimer";
ROUTE2351.toField = "set_fraction";
ROUTE2351.toNode = "Pitch_vc6_YawInterpolator";
Group2296.children[54] = ROUTE2351;

let ROUTE2352 = browser.currentScene.createNode("ROUTE");
ROUTE2352.fromField = "fraction_changed";
ROUTE2352.fromNode = "PitchTimer";
ROUTE2352.toField = "set_fraction";
ROUTE2352.toNode = "Pitch_l_thumb1_PitchInterpolator";
Group2296.children[55] = ROUTE2352;

let ROUTE2353 = browser.currentScene.createNode("ROUTE");
ROUTE2353.fromField = "fraction_changed";
ROUTE2353.fromNode = "PitchTimer";
ROUTE2353.toField = "set_fraction";
ROUTE2353.toNode = "Pitch_r_thumb1_PitchInterpolator";
Group2296.children[56] = ROUTE2353;

let ROUTE2354 = browser.currentScene.createNode("ROUTE");
ROUTE2354.fromField = "value_changed";
ROUTE2354.fromNode = "Pitches_r_ankle_RotationInterpolator";
ROUTE2354.toField = "rotation";
ROUTE2354.toNode = "hanim_r_ankle";
Group2296.children[57] = ROUTE2354;

let ROUTE2355 = browser.currentScene.createNode("ROUTE");
ROUTE2355.fromField = "value_changed";
ROUTE2355.fromNode = "Pitches_r_knee_RotationInterpolator";
ROUTE2355.toField = "rotation";
ROUTE2355.toNode = "hanim_r_knee";
Group2296.children[58] = ROUTE2355;

let ROUTE2356 = browser.currentScene.createNode("ROUTE");
ROUTE2356.fromField = "value_changed";
ROUTE2356.fromNode = "Pitches_r_hip_RotationInterpolator";
ROUTE2356.toField = "rotation";
ROUTE2356.toNode = "hanim_r_hip";
Group2296.children[59] = ROUTE2356;

let ROUTE2357 = browser.currentScene.createNode("ROUTE");
ROUTE2357.fromField = "value_changed";
ROUTE2357.fromNode = "Pitches_l_ankle_RotationInterpolator";
ROUTE2357.toField = "rotation";
ROUTE2357.toNode = "hanim_l_ankle";
Group2296.children[60] = ROUTE2357;

let ROUTE2358 = browser.currentScene.createNode("ROUTE");
ROUTE2358.fromField = "value_changed";
ROUTE2358.fromNode = "Pitches_l_knee_RotationInterpolator";
ROUTE2358.toField = "rotation";
ROUTE2358.toNode = "hanim_l_knee";
Group2296.children[61] = ROUTE2358;

let ROUTE2359 = browser.currentScene.createNode("ROUTE");
ROUTE2359.fromField = "value_changed";
ROUTE2359.fromNode = "Pitches_l_hip_RotationInterpolator";
ROUTE2359.toField = "rotation";
ROUTE2359.toNode = "hanim_l_hip";
Group2296.children[62] = ROUTE2359;

let ROUTE2360 = browser.currentScene.createNode("ROUTE");
ROUTE2360.fromField = "value_changed";
ROUTE2360.fromNode = "Pitches_lower_body_RotationInterpolator";
ROUTE2360.toField = "rotation";
ROUTE2360.toNode = "hanim_sacroiliac";
Group2296.children[63] = ROUTE2360;

let ROUTE2361 = browser.currentScene.createNode("ROUTE");
ROUTE2361.fromField = "value_changed";
ROUTE2361.fromNode = "Pitches_r_wrist_RotationInterpolator";
ROUTE2361.toField = "rotation";
ROUTE2361.toNode = "hanim_r_wrist";
Group2296.children[64] = ROUTE2361;

let ROUTE2362 = browser.currentScene.createNode("ROUTE");
ROUTE2362.fromField = "value_changed";
ROUTE2362.fromNode = "Pitches_r_elbow_RotationInterpolator";
ROUTE2362.toField = "rotation";
ROUTE2362.toNode = "hanim_r_elbow";
Group2296.children[65] = ROUTE2362;

let ROUTE2363 = browser.currentScene.createNode("ROUTE");
ROUTE2363.fromField = "value_changed";
ROUTE2363.fromNode = "Pitches_r_shoulder_RotationInterpolator";
ROUTE2363.toField = "rotation";
ROUTE2363.toNode = "hanim_r_shoulder";
Group2296.children[66] = ROUTE2363;

let ROUTE2364 = browser.currentScene.createNode("ROUTE");
ROUTE2364.fromField = "value_changed";
ROUTE2364.fromNode = "Pitches_l_wrist_RotationInterpolator";
ROUTE2364.toField = "rotation";
ROUTE2364.toNode = "hanim_l_wrist";
Group2296.children[67] = ROUTE2364;

let ROUTE2365 = browser.currentScene.createNode("ROUTE");
ROUTE2365.fromField = "value_changed";
ROUTE2365.fromNode = "Pitches_l_elbow_RotationInterpolator";
ROUTE2365.toField = "rotation";
ROUTE2365.toNode = "hanim_l_elbow";
Group2296.children[68] = ROUTE2365;

let ROUTE2366 = browser.currentScene.createNode("ROUTE");
ROUTE2366.fromField = "value_changed";
ROUTE2366.fromNode = "Pitches_l_shoulder_RotationInterpolator";
ROUTE2366.toField = "rotation";
ROUTE2366.toNode = "hanim_l_shoulder";
Group2296.children[69] = ROUTE2366;

let ROUTE2367 = browser.currentScene.createNode("ROUTE");
ROUTE2367.fromField = "value_changed";
ROUTE2367.fromNode = "Pitches_head_RotationInterpolator";
ROUTE2367.toField = "rotation";
ROUTE2367.toNode = "hanim_skullbase";
Group2296.children[70] = ROUTE2367;

let ROUTE2368 = browser.currentScene.createNode("ROUTE");
ROUTE2368.fromField = "value_changed";
ROUTE2368.fromNode = "Pitches_neck_RotationInterpolator";
ROUTE2368.toField = "rotation";
ROUTE2368.toNode = "hanim_vc4";
Group2296.children[71] = ROUTE2368;

let ROUTE2369 = browser.currentScene.createNode("ROUTE");
ROUTE2369.fromField = "value_changed";
ROUTE2369.fromNode = "Pitches_upper_body_RotationInterpolator";
ROUTE2369.toField = "rotation";
ROUTE2369.toNode = "hanim_vl1";
Group2296.children[72] = ROUTE2369;

let ROUTE2370 = browser.currentScene.createNode("ROUTE");
ROUTE2370.fromField = "value_changed";
ROUTE2370.fromNode = "Pitches_whole_body_RotationInterpolator";
ROUTE2370.toField = "rotation";
ROUTE2370.toNode = "hanim_humanoid_root";
Group2296.children[73] = ROUTE2370;

let ROUTE2371 = browser.currentScene.createNode("ROUTE");
ROUTE2371.fromField = "value_changed";
ROUTE2371.fromNode = "Pitches_whole_body_TranslationInterpolator";
ROUTE2371.toField = "translation";
ROUTE2371.toNode = "hanim_humanoid_root";
Group2296.children[74] = ROUTE2371;

let ROUTE2372 = browser.currentScene.createNode("ROUTE");
ROUTE2372.fromField = "value_changed";
ROUTE2372.fromNode = "Pitch_l_sternoclavicular_RollInterpolator";
ROUTE2372.toField = "rotation";
ROUTE2372.toNode = "hanim_l_sternoclavicular";
Group2296.children[75] = ROUTE2372;

let ROUTE2373 = browser.currentScene.createNode("ROUTE");
ROUTE2373.fromField = "value_changed";
ROUTE2373.fromNode = "Pitch_l_acromioclavicular_RollInterpolator";
ROUTE2373.toField = "rotation";
ROUTE2373.toNode = "hanim_l_acromioclavicular";
Group2296.children[76] = ROUTE2373;

let ROUTE2374 = browser.currentScene.createNode("ROUTE");
ROUTE2374.fromField = "value_changed";
ROUTE2374.fromNode = "Pitch_r_sternoclavicular_RollInterpolator";
ROUTE2374.toField = "rotation";
ROUTE2374.toNode = "hanim_r_sternoclavicular";
Group2296.children[77] = ROUTE2374;

let ROUTE2375 = browser.currentScene.createNode("ROUTE");
ROUTE2375.fromField = "value_changed";
ROUTE2375.fromNode = "Pitch_r_acromioclavicular_RollInterpolator";
ROUTE2375.toField = "rotation";
ROUTE2375.toNode = "hanim_r_acromioclavicular";
Group2296.children[78] = ROUTE2375;

let ROUTE2376 = browser.currentScene.createNode("ROUTE");
ROUTE2376.fromField = "value_changed";
ROUTE2376.fromNode = "Pitch_r_metatarsal_PitchInterpolator";
ROUTE2376.toField = "rotation";
ROUTE2376.toNode = "hanim_l_metatarsal";
Group2296.children[79] = ROUTE2376;

let ROUTE2377 = browser.currentScene.createNode("ROUTE");
ROUTE2377.fromField = "value_changed";
ROUTE2377.fromNode = "Pitch_r_metatarsal_PitchInterpolator";
ROUTE2377.toField = "rotation";
ROUTE2377.toNode = "hanim_r_metatarsal";
Group2296.children[80] = ROUTE2377;

let ROUTE2378 = browser.currentScene.createNode("ROUTE");
ROUTE2378.fromField = "value_changed";
ROUTE2378.fromNode = "Pitch_sacroiliac_YawInterpolator";
ROUTE2378.toField = "rotation";
ROUTE2378.toNode = "hanim_sacroiliac";
Group2296.children[81] = ROUTE2378;

let ROUTE2379 = browser.currentScene.createNode("ROUTE");
ROUTE2379.fromField = "value_changed";
ROUTE2379.fromNode = "Pitch_vl5_YawInterpolator";
ROUTE2379.toField = "rotation";
ROUTE2379.toNode = "hanim_vl5";
Group2296.children[82] = ROUTE2379;

let ROUTE2380 = browser.currentScene.createNode("ROUTE");
ROUTE2380.fromField = "value_changed";
ROUTE2380.fromNode = "Pitch_vc6_YawInterpolator";
ROUTE2380.toField = "rotation";
ROUTE2380.toNode = "hanim_vc6";
Group2296.children[83] = ROUTE2380;

let ROUTE2381 = browser.currentScene.createNode("ROUTE");
ROUTE2381.fromField = "value_changed";
ROUTE2381.fromNode = "Pitch_l_thumb1_PitchInterpolator";
ROUTE2381.toField = "rotation";
ROUTE2381.toNode = "hanim_l_thumb1";
Group2296.children[84] = ROUTE2381;

let ROUTE2382 = browser.currentScene.createNode("ROUTE");
ROUTE2382.fromField = "value_changed";
ROUTE2382.fromNode = "Pitch_r_thumb1_PitchInterpolator";
ROUTE2382.toField = "rotation";
ROUTE2382.toNode = "hanim_r_thumb1";
Group2296.children[85] = ROUTE2382;

browser.currentScene.children[15] = Group2296;

let Group2383 = browser.currentScene.createNode("Group");
Group2383.DEF = "YawsAnimation";
let TimeSensor2384 = browser.currentScene.createNode("TimeSensor");
TimeSensor2384.DEF = "YawTimer";
TimeSensor2384.cycleInterval = 5.73;
TimeSensor2384.loop = True;
Group2383.children = new MFNode();

Group2383.children[0] = TimeSensor2384;

let OrientationInterpolator2385 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2385.DEF = "Yaw_r_metatarsal_PitchInterpolator";
OrientationInterpolator2385.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2385.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2383.children[1] = OrientationInterpolator2385;

let OrientationInterpolator2386 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2386.DEF = "Yaws_r_ankle_RotationInterpolator";
OrientationInterpolator2386.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2386.keyValue = new MFRotation(new float[0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group2383.children[2] = OrientationInterpolator2386;

let OrientationInterpolator2387 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2387.DEF = "Yaws_r_knee_RotationInterpolator";
OrientationInterpolator2387.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2387.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group2383.children[3] = OrientationInterpolator2387;

let OrientationInterpolator2388 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2388.DEF = "Yaws_r_hip_RotationInterpolator";
OrientationInterpolator2388.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2388.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2383.children[4] = OrientationInterpolator2388;

let OrientationInterpolator2389 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2389.DEF = "Yaws_l_ankle_RotationInterpolator";
OrientationInterpolator2389.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2389.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group2383.children[5] = OrientationInterpolator2389;

let OrientationInterpolator2390 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2390.DEF = "Yaws_l_knee_RotationInterpolator";
OrientationInterpolator2390.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2390.keyValue = new MFRotation(new float[0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group2383.children[6] = OrientationInterpolator2390;

let OrientationInterpolator2391 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2391.DEF = "Yaws_l_hip_RotationInterpolator";
OrientationInterpolator2391.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2391.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2383.children[7] = OrientationInterpolator2391;

let OrientationInterpolator2392 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2392.DEF = "Yaws_r_wrist_RotationInterpolator";
OrientationInterpolator2392.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2392.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2383.children[8] = OrientationInterpolator2392;

let OrientationInterpolator2393 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2393.DEF = "Yaws_r_elbow_RotationInterpolator";
OrientationInterpolator2393.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2393.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2383.children[9] = OrientationInterpolator2393;

let OrientationInterpolator2394 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2394.DEF = "Yaws_r_shoulder_RotationInterpolator";
OrientationInterpolator2394.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2394.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2383.children[10] = OrientationInterpolator2394;

let OrientationInterpolator2395 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2395.DEF = "Yaws_l_wrist_RotationInterpolator";
OrientationInterpolator2395.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2395.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2383.children[11] = OrientationInterpolator2395;

let OrientationInterpolator2396 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2396.DEF = "Yaws_l_elbow_RotationInterpolator";
OrientationInterpolator2396.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2396.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2383.children[12] = OrientationInterpolator2396;

let OrientationInterpolator2397 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2397.DEF = "Yaws_l_shoulder_RotationInterpolator";
OrientationInterpolator2397.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2397.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2383.children[13] = OrientationInterpolator2397;

let OrientationInterpolator2398 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2398.DEF = "Yaws_head_RotationInterpolator";
OrientationInterpolator2398.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2398.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2383.children[14] = OrientationInterpolator2398;

let OrientationInterpolator2399 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2399.DEF = "Yaws_neck_RotationInterpolator";
OrientationInterpolator2399.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2399.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group2383.children[15] = OrientationInterpolator2399;

let OrientationInterpolator2400 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2400.DEF = "Yaws_upper_body_RotationInterpolator";
OrientationInterpolator2400.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2400.keyValue = new MFRotation(new float[0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group2383.children[16] = OrientationInterpolator2400;

let OrientationInterpolator2401 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2401.DEF = "Yaws_lower_body_RotationInterpolator";
OrientationInterpolator2401.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2401.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2383.children[17] = OrientationInterpolator2401;

let OrientationInterpolator2402 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2402.DEF = "Yaws_whole_body_RotationInterpolator";
OrientationInterpolator2402.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2402.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2383.children[18] = OrientationInterpolator2402;

let PositionInterpolator2403 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator2403.DEF = "Yaws_whole_body_TranslationInterpolator";
PositionInterpolator2403.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator2403.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group2383.children[19] = PositionInterpolator2403;

let OrientationInterpolator2404 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2404.DEF = "Yaw_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2404.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2404.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2383.children[20] = OrientationInterpolator2404;

let OrientationInterpolator2405 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2405.DEF = "Yaw_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2405.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2405.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2383.children[21] = OrientationInterpolator2405;

let OrientationInterpolator2406 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2406.DEF = "Yaw_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2406.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2406.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2383.children[22] = OrientationInterpolator2406;

let OrientationInterpolator2407 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2407.DEF = "Yaw_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2407.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2407.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2383.children[23] = OrientationInterpolator2407;

let OrientationInterpolator2408 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2408.DEF = "Yaw_sacroiliac_YawInterpolator";
OrientationInterpolator2408.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2408.keyValue = new MFRotation(new float[0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,0,0.24,0,-1,0,0.4,0,1,0,0]);
Group2383.children[24] = OrientationInterpolator2408;

let OrientationInterpolator2409 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2409.DEF = "Yaw_vl5_YawInterpolator";
OrientationInterpolator2409.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2409.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2383.children[25] = OrientationInterpolator2409;

let OrientationInterpolator2410 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2410.DEF = "Yaw_vc6_YawInterpolator";
OrientationInterpolator2410.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2410.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2383.children[26] = OrientationInterpolator2410;

let OrientationInterpolator2411 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2411.DEF = "Yaw_l_thumb1_PitchInterpolator";
OrientationInterpolator2411.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2411.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2383.children[27] = OrientationInterpolator2411;

let OrientationInterpolator2412 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2412.DEF = "Yaw_r_thumb1_PitchInterpolator";
OrientationInterpolator2412.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2412.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2383.children[28] = OrientationInterpolator2412;

let ROUTE2413 = browser.currentScene.createNode("ROUTE");
ROUTE2413.fromField = "fraction_changed";
ROUTE2413.fromNode = "YawTimer";
ROUTE2413.toField = "set_fraction";
ROUTE2413.toNode = "Yaws_r_ankle_RotationInterpolator";
Group2383.children[29] = ROUTE2413;

let ROUTE2414 = browser.currentScene.createNode("ROUTE");
ROUTE2414.fromField = "fraction_changed";
ROUTE2414.fromNode = "YawTimer";
ROUTE2414.toField = "set_fraction";
ROUTE2414.toNode = "Yaws_r_knee_RotationInterpolator";
Group2383.children[30] = ROUTE2414;

let ROUTE2415 = browser.currentScene.createNode("ROUTE");
ROUTE2415.fromField = "fraction_changed";
ROUTE2415.fromNode = "YawTimer";
ROUTE2415.toField = "set_fraction";
ROUTE2415.toNode = "Yaws_r_hip_RotationInterpolator";
Group2383.children[31] = ROUTE2415;

let ROUTE2416 = browser.currentScene.createNode("ROUTE");
ROUTE2416.fromField = "fraction_changed";
ROUTE2416.fromNode = "YawTimer";
ROUTE2416.toField = "set_fraction";
ROUTE2416.toNode = "Yaws_l_ankle_RotationInterpolator";
Group2383.children[32] = ROUTE2416;

let ROUTE2417 = browser.currentScene.createNode("ROUTE");
ROUTE2417.fromField = "fraction_changed";
ROUTE2417.fromNode = "YawTimer";
ROUTE2417.toField = "set_fraction";
ROUTE2417.toNode = "Yaws_l_knee_RotationInterpolator";
Group2383.children[33] = ROUTE2417;

let ROUTE2418 = browser.currentScene.createNode("ROUTE");
ROUTE2418.fromField = "fraction_changed";
ROUTE2418.fromNode = "YawTimer";
ROUTE2418.toField = "set_fraction";
ROUTE2418.toNode = "Yaws_l_hip_RotationInterpolator";
Group2383.children[34] = ROUTE2418;

let ROUTE2419 = browser.currentScene.createNode("ROUTE");
ROUTE2419.fromField = "fraction_changed";
ROUTE2419.fromNode = "YawTimer";
ROUTE2419.toField = "set_fraction";
ROUTE2419.toNode = "Yaws_lower_body_RotationInterpolator";
Group2383.children[35] = ROUTE2419;

let ROUTE2420 = browser.currentScene.createNode("ROUTE");
ROUTE2420.fromField = "fraction_changed";
ROUTE2420.fromNode = "YawTimer";
ROUTE2420.toField = "set_fraction";
ROUTE2420.toNode = "Yaws_r_wrist_RotationInterpolator";
Group2383.children[36] = ROUTE2420;

let ROUTE2421 = browser.currentScene.createNode("ROUTE");
ROUTE2421.fromField = "fraction_changed";
ROUTE2421.fromNode = "YawTimer";
ROUTE2421.toField = "set_fraction";
ROUTE2421.toNode = "Yaws_r_elbow_RotationInterpolator";
Group2383.children[37] = ROUTE2421;

let ROUTE2422 = browser.currentScene.createNode("ROUTE");
ROUTE2422.fromField = "fraction_changed";
ROUTE2422.fromNode = "YawTimer";
ROUTE2422.toField = "set_fraction";
ROUTE2422.toNode = "Yaws_r_shoulder_RotationInterpolator";
Group2383.children[38] = ROUTE2422;

let ROUTE2423 = browser.currentScene.createNode("ROUTE");
ROUTE2423.fromField = "fraction_changed";
ROUTE2423.fromNode = "YawTimer";
ROUTE2423.toField = "set_fraction";
ROUTE2423.toNode = "Yaws_l_wrist_RotationInterpolator";
Group2383.children[39] = ROUTE2423;

let ROUTE2424 = browser.currentScene.createNode("ROUTE");
ROUTE2424.fromField = "fraction_changed";
ROUTE2424.fromNode = "YawTimer";
ROUTE2424.toField = "set_fraction";
ROUTE2424.toNode = "Yaws_l_elbow_RotationInterpolator";
Group2383.children[40] = ROUTE2424;

let ROUTE2425 = browser.currentScene.createNode("ROUTE");
ROUTE2425.fromField = "fraction_changed";
ROUTE2425.fromNode = "YawTimer";
ROUTE2425.toField = "set_fraction";
ROUTE2425.toNode = "Yaws_l_shoulder_RotationInterpolator";
Group2383.children[41] = ROUTE2425;

let ROUTE2426 = browser.currentScene.createNode("ROUTE");
ROUTE2426.fromField = "fraction_changed";
ROUTE2426.fromNode = "YawTimer";
ROUTE2426.toField = "set_fraction";
ROUTE2426.toNode = "Yaws_head_RotationInterpolator";
Group2383.children[42] = ROUTE2426;

let ROUTE2427 = browser.currentScene.createNode("ROUTE");
ROUTE2427.fromField = "fraction_changed";
ROUTE2427.fromNode = "YawTimer";
ROUTE2427.toField = "set_fraction";
ROUTE2427.toNode = "Yaws_neck_RotationInterpolator";
Group2383.children[43] = ROUTE2427;

let ROUTE2428 = browser.currentScene.createNode("ROUTE");
ROUTE2428.fromField = "fraction_changed";
ROUTE2428.fromNode = "YawTimer";
ROUTE2428.toField = "set_fraction";
ROUTE2428.toNode = "Yaws_upper_body_RotationInterpolator";
Group2383.children[44] = ROUTE2428;

let ROUTE2429 = browser.currentScene.createNode("ROUTE");
ROUTE2429.fromField = "fraction_changed";
ROUTE2429.fromNode = "YawTimer";
ROUTE2429.toField = "set_fraction";
ROUTE2429.toNode = "Yaws_whole_body_RotationInterpolator";
Group2383.children[45] = ROUTE2429;

let ROUTE2430 = browser.currentScene.createNode("ROUTE");
ROUTE2430.fromField = "fraction_changed";
ROUTE2430.fromNode = "YawTimer";
ROUTE2430.toField = "set_fraction";
ROUTE2430.toNode = "Yaws_whole_body_TranslationInterpolator";
Group2383.children[46] = ROUTE2430;

let ROUTE2431 = browser.currentScene.createNode("ROUTE");
ROUTE2431.fromField = "fraction_changed";
ROUTE2431.fromNode = "YawTimer";
ROUTE2431.toField = "set_fraction";
ROUTE2431.toNode = "Yaw_l_sternoclavicular_RollInterpolator";
Group2383.children[47] = ROUTE2431;

let ROUTE2432 = browser.currentScene.createNode("ROUTE");
ROUTE2432.fromField = "fraction_changed";
ROUTE2432.fromNode = "YawTimer";
ROUTE2432.toField = "set_fraction";
ROUTE2432.toNode = "Yaw_l_acromioclavicular_RollInterpolator";
Group2383.children[48] = ROUTE2432;

let ROUTE2433 = browser.currentScene.createNode("ROUTE");
ROUTE2433.fromField = "fraction_changed";
ROUTE2433.fromNode = "YawTimer";
ROUTE2433.toField = "set_fraction";
ROUTE2433.toNode = "Yaw_r_sternoclavicular_RollInterpolator";
Group2383.children[49] = ROUTE2433;

let ROUTE2434 = browser.currentScene.createNode("ROUTE");
ROUTE2434.fromField = "fraction_changed";
ROUTE2434.fromNode = "YawTimer";
ROUTE2434.toField = "set_fraction";
ROUTE2434.toNode = "Yaw_r_acromioclavicular_RollInterpolator";
Group2383.children[50] = ROUTE2434;

let ROUTE2435 = browser.currentScene.createNode("ROUTE");
ROUTE2435.fromField = "fraction_changed";
ROUTE2435.fromNode = "YawTimer";
ROUTE2435.toField = "set_fraction";
ROUTE2435.toNode = "Yaw_r_metatarsal_PitchInterpolator";
Group2383.children[51] = ROUTE2435;

let ROUTE2436 = browser.currentScene.createNode("ROUTE");
ROUTE2436.fromField = "fraction_changed";
ROUTE2436.fromNode = "YawTimer";
ROUTE2436.toField = "set_fraction";
ROUTE2436.toNode = "Yaw_sacroiliac_YawInterpolator";
Group2383.children[52] = ROUTE2436;

let ROUTE2437 = browser.currentScene.createNode("ROUTE");
ROUTE2437.fromField = "fraction_changed";
ROUTE2437.fromNode = "YawTimer";
ROUTE2437.toField = "set_fraction";
ROUTE2437.toNode = "Yaw_vl5_YawInterpolator";
Group2383.children[53] = ROUTE2437;

let ROUTE2438 = browser.currentScene.createNode("ROUTE");
ROUTE2438.fromField = "fraction_changed";
ROUTE2438.fromNode = "YawTimer";
ROUTE2438.toField = "set_fraction";
ROUTE2438.toNode = "Yaw_vc6_YawInterpolator";
Group2383.children[54] = ROUTE2438;

let ROUTE2439 = browser.currentScene.createNode("ROUTE");
ROUTE2439.fromField = "fraction_changed";
ROUTE2439.fromNode = "YawTimer";
ROUTE2439.toField = "set_fraction";
ROUTE2439.toNode = "Yaw_l_thumb1_PitchInterpolator";
Group2383.children[55] = ROUTE2439;

let ROUTE2440 = browser.currentScene.createNode("ROUTE");
ROUTE2440.fromField = "fraction_changed";
ROUTE2440.fromNode = "YawTimer";
ROUTE2440.toField = "set_fraction";
ROUTE2440.toNode = "Yaw_r_thumb1_PitchInterpolator";
Group2383.children[56] = ROUTE2440;

let ROUTE2441 = browser.currentScene.createNode("ROUTE");
ROUTE2441.fromField = "value_changed";
ROUTE2441.fromNode = "Yaws_r_ankle_RotationInterpolator";
ROUTE2441.toField = "rotation";
ROUTE2441.toNode = "hanim_r_ankle";
Group2383.children[57] = ROUTE2441;

let ROUTE2442 = browser.currentScene.createNode("ROUTE");
ROUTE2442.fromField = "value_changed";
ROUTE2442.fromNode = "Yaws_r_knee_RotationInterpolator";
ROUTE2442.toField = "rotation";
ROUTE2442.toNode = "hanim_r_knee";
Group2383.children[58] = ROUTE2442;

let ROUTE2443 = browser.currentScene.createNode("ROUTE");
ROUTE2443.fromField = "value_changed";
ROUTE2443.fromNode = "Yaws_r_hip_RotationInterpolator";
ROUTE2443.toField = "rotation";
ROUTE2443.toNode = "hanim_r_hip";
Group2383.children[59] = ROUTE2443;

let ROUTE2444 = browser.currentScene.createNode("ROUTE");
ROUTE2444.fromField = "value_changed";
ROUTE2444.fromNode = "Yaws_l_ankle_RotationInterpolator";
ROUTE2444.toField = "rotation";
ROUTE2444.toNode = "hanim_l_ankle";
Group2383.children[60] = ROUTE2444;

let ROUTE2445 = browser.currentScene.createNode("ROUTE");
ROUTE2445.fromField = "value_changed";
ROUTE2445.fromNode = "Yaws_l_knee_RotationInterpolator";
ROUTE2445.toField = "rotation";
ROUTE2445.toNode = "hanim_l_knee";
Group2383.children[61] = ROUTE2445;

let ROUTE2446 = browser.currentScene.createNode("ROUTE");
ROUTE2446.fromField = "value_changed";
ROUTE2446.fromNode = "Yaws_l_hip_RotationInterpolator";
ROUTE2446.toField = "rotation";
ROUTE2446.toNode = "hanim_l_hip";
Group2383.children[62] = ROUTE2446;

let ROUTE2447 = browser.currentScene.createNode("ROUTE");
ROUTE2447.fromField = "value_changed";
ROUTE2447.fromNode = "Yaws_lower_body_RotationInterpolator";
ROUTE2447.toField = "rotation";
ROUTE2447.toNode = "hanim_sacroiliac";
Group2383.children[63] = ROUTE2447;

let ROUTE2448 = browser.currentScene.createNode("ROUTE");
ROUTE2448.fromField = "value_changed";
ROUTE2448.fromNode = "Yaws_r_wrist_RotationInterpolator";
ROUTE2448.toField = "rotation";
ROUTE2448.toNode = "hanim_r_wrist";
Group2383.children[64] = ROUTE2448;

let ROUTE2449 = browser.currentScene.createNode("ROUTE");
ROUTE2449.fromField = "value_changed";
ROUTE2449.fromNode = "Yaws_r_elbow_RotationInterpolator";
ROUTE2449.toField = "rotation";
ROUTE2449.toNode = "hanim_r_elbow";
Group2383.children[65] = ROUTE2449;

let ROUTE2450 = browser.currentScene.createNode("ROUTE");
ROUTE2450.fromField = "value_changed";
ROUTE2450.fromNode = "Yaws_r_shoulder_RotationInterpolator";
ROUTE2450.toField = "rotation";
ROUTE2450.toNode = "hanim_r_shoulder";
Group2383.children[66] = ROUTE2450;

let ROUTE2451 = browser.currentScene.createNode("ROUTE");
ROUTE2451.fromField = "value_changed";
ROUTE2451.fromNode = "Yaws_l_wrist_RotationInterpolator";
ROUTE2451.toField = "rotation";
ROUTE2451.toNode = "hanim_l_wrist";
Group2383.children[67] = ROUTE2451;

let ROUTE2452 = browser.currentScene.createNode("ROUTE");
ROUTE2452.fromField = "value_changed";
ROUTE2452.fromNode = "Yaws_l_elbow_RotationInterpolator";
ROUTE2452.toField = "rotation";
ROUTE2452.toNode = "hanim_l_elbow";
Group2383.children[68] = ROUTE2452;

let ROUTE2453 = browser.currentScene.createNode("ROUTE");
ROUTE2453.fromField = "value_changed";
ROUTE2453.fromNode = "Yaws_l_shoulder_RotationInterpolator";
ROUTE2453.toField = "rotation";
ROUTE2453.toNode = "hanim_l_shoulder";
Group2383.children[69] = ROUTE2453;

let ROUTE2454 = browser.currentScene.createNode("ROUTE");
ROUTE2454.fromField = "value_changed";
ROUTE2454.fromNode = "Yaws_head_RotationInterpolator";
ROUTE2454.toField = "rotation";
ROUTE2454.toNode = "hanim_skullbase";
Group2383.children[70] = ROUTE2454;

let ROUTE2455 = browser.currentScene.createNode("ROUTE");
ROUTE2455.fromField = "value_changed";
ROUTE2455.fromNode = "Yaws_neck_RotationInterpolator";
ROUTE2455.toField = "rotation";
ROUTE2455.toNode = "hanim_vc4";
Group2383.children[71] = ROUTE2455;

let ROUTE2456 = browser.currentScene.createNode("ROUTE");
ROUTE2456.fromField = "value_changed";
ROUTE2456.fromNode = "Yaws_upper_body_RotationInterpolator";
ROUTE2456.toField = "rotation";
ROUTE2456.toNode = "hanim_vl1";
Group2383.children[72] = ROUTE2456;

let ROUTE2457 = browser.currentScene.createNode("ROUTE");
ROUTE2457.fromField = "value_changed";
ROUTE2457.fromNode = "Yaws_whole_body_RotationInterpolator";
ROUTE2457.toField = "rotation";
ROUTE2457.toNode = "hanim_humanoid_root";
Group2383.children[73] = ROUTE2457;

let ROUTE2458 = browser.currentScene.createNode("ROUTE");
ROUTE2458.fromField = "value_changed";
ROUTE2458.fromNode = "Yaws_whole_body_TranslationInterpolator";
ROUTE2458.toField = "translation";
ROUTE2458.toNode = "hanim_humanoid_root";
Group2383.children[74] = ROUTE2458;

let ROUTE2459 = browser.currentScene.createNode("ROUTE");
ROUTE2459.fromField = "value_changed";
ROUTE2459.fromNode = "Yaw_l_sternoclavicular_RollInterpolator";
ROUTE2459.toField = "rotation";
ROUTE2459.toNode = "hanim_l_sternoclavicular";
Group2383.children[75] = ROUTE2459;

let ROUTE2460 = browser.currentScene.createNode("ROUTE");
ROUTE2460.fromField = "value_changed";
ROUTE2460.fromNode = "Yaw_l_acromioclavicular_RollInterpolator";
ROUTE2460.toField = "rotation";
ROUTE2460.toNode = "hanim_l_acromioclavicular";
Group2383.children[76] = ROUTE2460;

let ROUTE2461 = browser.currentScene.createNode("ROUTE");
ROUTE2461.fromField = "value_changed";
ROUTE2461.fromNode = "Yaw_r_sternoclavicular_RollInterpolator";
ROUTE2461.toField = "rotation";
ROUTE2461.toNode = "hanim_r_sternoclavicular";
Group2383.children[77] = ROUTE2461;

let ROUTE2462 = browser.currentScene.createNode("ROUTE");
ROUTE2462.fromField = "value_changed";
ROUTE2462.fromNode = "Yaw_r_acromioclavicular_RollInterpolator";
ROUTE2462.toField = "rotation";
ROUTE2462.toNode = "hanim_r_acromioclavicular";
Group2383.children[78] = ROUTE2462;

let ROUTE2463 = browser.currentScene.createNode("ROUTE");
ROUTE2463.fromField = "value_changed";
ROUTE2463.fromNode = "Yaw_r_metatarsal_PitchInterpolator";
ROUTE2463.toField = "rotation";
ROUTE2463.toNode = "hanim_l_metatarsal";
Group2383.children[79] = ROUTE2463;

let ROUTE2464 = browser.currentScene.createNode("ROUTE");
ROUTE2464.fromField = "value_changed";
ROUTE2464.fromNode = "Yaw_r_metatarsal_PitchInterpolator";
ROUTE2464.toField = "rotation";
ROUTE2464.toNode = "hanim_r_metatarsal";
Group2383.children[80] = ROUTE2464;

let ROUTE2465 = browser.currentScene.createNode("ROUTE");
ROUTE2465.fromField = "value_changed";
ROUTE2465.fromNode = "Yaw_sacroiliac_YawInterpolator";
ROUTE2465.toField = "rotation";
ROUTE2465.toNode = "hanim_sacroiliac";
Group2383.children[81] = ROUTE2465;

let ROUTE2466 = browser.currentScene.createNode("ROUTE");
ROUTE2466.fromField = "value_changed";
ROUTE2466.fromNode = "Yaw_vl5_YawInterpolator";
ROUTE2466.toField = "rotation";
ROUTE2466.toNode = "hanim_vl5";
Group2383.children[82] = ROUTE2466;

let ROUTE2467 = browser.currentScene.createNode("ROUTE");
ROUTE2467.fromField = "value_changed";
ROUTE2467.fromNode = "Yaw_vc6_YawInterpolator";
ROUTE2467.toField = "rotation";
ROUTE2467.toNode = "hanim_vc6";
Group2383.children[83] = ROUTE2467;

let ROUTE2468 = browser.currentScene.createNode("ROUTE");
ROUTE2468.fromField = "value_changed";
ROUTE2468.fromNode = "Yaw_l_thumb1_PitchInterpolator";
ROUTE2468.toField = "rotation";
ROUTE2468.toNode = "hanim_l_thumb1";
Group2383.children[84] = ROUTE2468;

let ROUTE2469 = browser.currentScene.createNode("ROUTE");
ROUTE2469.fromField = "value_changed";
ROUTE2469.fromNode = "Yaw_r_thumb1_PitchInterpolator";
ROUTE2469.toField = "rotation";
ROUTE2469.toNode = "hanim_r_thumb1";
Group2383.children[85] = ROUTE2469;

browser.currentScene.children[16] = Group2383;

let Group2470 = browser.currentScene.createNode("Group");
Group2470.DEF = "RollsAnimation";
let TimeSensor2471 = browser.currentScene.createNode("TimeSensor");
TimeSensor2471.DEF = "RollTimer";
TimeSensor2471.cycleInterval = 5.73;
TimeSensor2471.loop = True;
Group2470.children = new MFNode();

Group2470.children[0] = TimeSensor2471;

let OrientationInterpolator2472 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2472.DEF = "Roll_r_metatarsal_PitchInterpolator";
OrientationInterpolator2472.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2472.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2470.children[1] = OrientationInterpolator2472;

let OrientationInterpolator2473 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2473.DEF = "Rolls_r_ankle_RotationInterpolator";
OrientationInterpolator2473.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2473.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group2470.children[2] = OrientationInterpolator2473;

let OrientationInterpolator2474 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2474.DEF = "Rolls_r_knee_RotationInterpolator";
OrientationInterpolator2474.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2474.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2470.children[3] = OrientationInterpolator2474;

let OrientationInterpolator2475 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2475.DEF = "Rolls_r_hip_RotationInterpolator";
OrientationInterpolator2475.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2475.keyValue = new MFRotation(new float[0,0,-1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group2470.children[4] = OrientationInterpolator2475;

let OrientationInterpolator2476 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2476.DEF = "Rolls_l_ankle_RotationInterpolator";
OrientationInterpolator2476.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2476.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group2470.children[5] = OrientationInterpolator2476;

let OrientationInterpolator2477 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2477.DEF = "Rolls_l_knee_RotationInterpolator";
OrientationInterpolator2477.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2477.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2470.children[6] = OrientationInterpolator2477;

let OrientationInterpolator2478 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2478.DEF = "Rolls_l_hip_RotationInterpolator";
OrientationInterpolator2478.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2478.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group2470.children[7] = OrientationInterpolator2478;

let OrientationInterpolator2479 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2479.DEF = "Rolls_r_wrist_RotationInterpolator";
OrientationInterpolator2479.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2479.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group2470.children[8] = OrientationInterpolator2479;

let OrientationInterpolator2480 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2480.DEF = "Rolls_r_elbow_RotationInterpolator";
OrientationInterpolator2480.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2480.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2470.children[9] = OrientationInterpolator2480;

let OrientationInterpolator2481 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2481.DEF = "Rolls_r_shoulder_RotationInterpolator";
OrientationInterpolator2481.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2481.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,1.5,0,0,-1,3,0,0,-1,1.5,0,0,1,0]);
Group2470.children[10] = OrientationInterpolator2481;

let OrientationInterpolator2482 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2482.DEF = "Rolls_l_wrist_RotationInterpolator";
OrientationInterpolator2482.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2482.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group2470.children[11] = OrientationInterpolator2482;

let OrientationInterpolator2483 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2483.DEF = "Rolls_l_elbow_RotationInterpolator";
OrientationInterpolator2483.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2483.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2470.children[12] = OrientationInterpolator2483;

let OrientationInterpolator2484 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2484.DEF = "Rolls_l_shoulder_RotationInterpolator";
OrientationInterpolator2484.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2484.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,3,0,0,1,1.5,0,0,1,0]);
Group2470.children[13] = OrientationInterpolator2484;

let OrientationInterpolator2485 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2485.DEF = "Rolls_head_RotationInterpolator";
OrientationInterpolator2485.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2485.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2470.children[14] = OrientationInterpolator2485;

let OrientationInterpolator2486 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2486.DEF = "Rolls_neck_RotationInterpolator";
OrientationInterpolator2486.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2486.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.25,0,0,1,0,0,0,-1,1.25,0,0,1,0]);
Group2470.children[15] = OrientationInterpolator2486;

let OrientationInterpolator2487 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2487.DEF = "Rolls_lower_body_RotationInterpolator";
OrientationInterpolator2487.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2487.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2470.children[16] = OrientationInterpolator2487;

let OrientationInterpolator2488 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2488.DEF = "Rolls_upper_body_RotationInterpolator";
OrientationInterpolator2488.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2488.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2470.children[17] = OrientationInterpolator2488;

let OrientationInterpolator2489 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2489.DEF = "Rolls_whole_body_RotationInterpolator";
OrientationInterpolator2489.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2489.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2470.children[18] = OrientationInterpolator2489;

let PositionInterpolator2490 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator2490.DEF = "Rolls_whole_body_TranslationInterpolator";
PositionInterpolator2490.key = new MFFloat(new float[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
PositionInterpolator2490.keyValue = new MFVec3f(new float[0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0]);
Group2470.children[19] = PositionInterpolator2490;

let OrientationInterpolator2491 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2491.DEF = "Roll_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2491.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2491.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group2470.children[20] = OrientationInterpolator2491;

let OrientationInterpolator2492 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2492.DEF = "Roll_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2492.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2492.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2470.children[21] = OrientationInterpolator2492;

let OrientationInterpolator2493 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2493.DEF = "Roll_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2493.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2493.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group2470.children[22] = OrientationInterpolator2493;

let OrientationInterpolator2494 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2494.DEF = "Roll_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2494.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2494.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2470.children[23] = OrientationInterpolator2494;

let OrientationInterpolator2495 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2495.DEF = "Roll_sacroiliac_YawInterpolator";
OrientationInterpolator2495.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2495.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2470.children[24] = OrientationInterpolator2495;

let OrientationInterpolator2496 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2496.DEF = "Roll_vl5_YawInterpolator";
OrientationInterpolator2496.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2496.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2470.children[25] = OrientationInterpolator2496;

let OrientationInterpolator2497 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2497.DEF = "Roll_vc6_YawInterpolator";
OrientationInterpolator2497.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2497.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2470.children[26] = OrientationInterpolator2497;

let OrientationInterpolator2498 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2498.DEF = "Roll_l_thumb1_PitchInterpolator";
OrientationInterpolator2498.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2498.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2470.children[27] = OrientationInterpolator2498;

let OrientationInterpolator2499 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2499.DEF = "Roll_r_thumb1_PitchInterpolator";
OrientationInterpolator2499.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2499.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2470.children[28] = OrientationInterpolator2499;

let ROUTE2500 = browser.currentScene.createNode("ROUTE");
ROUTE2500.fromField = "fraction_changed";
ROUTE2500.fromNode = "RollTimer";
ROUTE2500.toField = "set_fraction";
ROUTE2500.toNode = "Rolls_r_ankle_RotationInterpolator";
Group2470.children[29] = ROUTE2500;

let ROUTE2501 = browser.currentScene.createNode("ROUTE");
ROUTE2501.fromField = "fraction_changed";
ROUTE2501.fromNode = "RollTimer";
ROUTE2501.toField = "set_fraction";
ROUTE2501.toNode = "Rolls_r_knee_RotationInterpolator";
Group2470.children[30] = ROUTE2501;

let ROUTE2502 = browser.currentScene.createNode("ROUTE");
ROUTE2502.fromField = "fraction_changed";
ROUTE2502.fromNode = "RollTimer";
ROUTE2502.toField = "set_fraction";
ROUTE2502.toNode = "Rolls_r_hip_RotationInterpolator";
Group2470.children[31] = ROUTE2502;

let ROUTE2503 = browser.currentScene.createNode("ROUTE");
ROUTE2503.fromField = "fraction_changed";
ROUTE2503.fromNode = "RollTimer";
ROUTE2503.toField = "set_fraction";
ROUTE2503.toNode = "Rolls_l_ankle_RotationInterpolator";
Group2470.children[32] = ROUTE2503;

let ROUTE2504 = browser.currentScene.createNode("ROUTE");
ROUTE2504.fromField = "fraction_changed";
ROUTE2504.fromNode = "RollTimer";
ROUTE2504.toField = "set_fraction";
ROUTE2504.toNode = "Rolls_l_knee_RotationInterpolator";
Group2470.children[33] = ROUTE2504;

let ROUTE2505 = browser.currentScene.createNode("ROUTE");
ROUTE2505.fromField = "fraction_changed";
ROUTE2505.fromNode = "RollTimer";
ROUTE2505.toField = "set_fraction";
ROUTE2505.toNode = "Rolls_l_hip_RotationInterpolator";
Group2470.children[34] = ROUTE2505;

let ROUTE2506 = browser.currentScene.createNode("ROUTE");
ROUTE2506.fromField = "fraction_changed";
ROUTE2506.fromNode = "RollTimer";
ROUTE2506.toField = "set_fraction";
ROUTE2506.toNode = "Rolls_lower_body_RotationInterpolator";
Group2470.children[35] = ROUTE2506;

let ROUTE2507 = browser.currentScene.createNode("ROUTE");
ROUTE2507.fromField = "fraction_changed";
ROUTE2507.fromNode = "RollTimer";
ROUTE2507.toField = "set_fraction";
ROUTE2507.toNode = "Rolls_r_wrist_RotationInterpolator";
Group2470.children[36] = ROUTE2507;

let ROUTE2508 = browser.currentScene.createNode("ROUTE");
ROUTE2508.fromField = "fraction_changed";
ROUTE2508.fromNode = "RollTimer";
ROUTE2508.toField = "set_fraction";
ROUTE2508.toNode = "Rolls_r_elbow_RotationInterpolator";
Group2470.children[37] = ROUTE2508;

let ROUTE2509 = browser.currentScene.createNode("ROUTE");
ROUTE2509.fromField = "fraction_changed";
ROUTE2509.fromNode = "RollTimer";
ROUTE2509.toField = "set_fraction";
ROUTE2509.toNode = "Rolls_r_shoulder_RotationInterpolator";
Group2470.children[38] = ROUTE2509;

let ROUTE2510 = browser.currentScene.createNode("ROUTE");
ROUTE2510.fromField = "fraction_changed";
ROUTE2510.fromNode = "RollTimer";
ROUTE2510.toField = "set_fraction";
ROUTE2510.toNode = "Rolls_l_wrist_RotationInterpolator";
Group2470.children[39] = ROUTE2510;

let ROUTE2511 = browser.currentScene.createNode("ROUTE");
ROUTE2511.fromField = "fraction_changed";
ROUTE2511.fromNode = "RollTimer";
ROUTE2511.toField = "set_fraction";
ROUTE2511.toNode = "Rolls_l_elbow_RotationInterpolator";
Group2470.children[40] = ROUTE2511;

let ROUTE2512 = browser.currentScene.createNode("ROUTE");
ROUTE2512.fromField = "fraction_changed";
ROUTE2512.fromNode = "RollTimer";
ROUTE2512.toField = "set_fraction";
ROUTE2512.toNode = "Rolls_l_shoulder_RotationInterpolator";
Group2470.children[41] = ROUTE2512;

let ROUTE2513 = browser.currentScene.createNode("ROUTE");
ROUTE2513.fromField = "fraction_changed";
ROUTE2513.fromNode = "RollTimer";
ROUTE2513.toField = "set_fraction";
ROUTE2513.toNode = "Rolls_head_RotationInterpolator";
Group2470.children[42] = ROUTE2513;

let ROUTE2514 = browser.currentScene.createNode("ROUTE");
ROUTE2514.fromField = "fraction_changed";
ROUTE2514.fromNode = "RollTimer";
ROUTE2514.toField = "set_fraction";
ROUTE2514.toNode = "Rolls_neck_RotationInterpolator";
Group2470.children[43] = ROUTE2514;

let ROUTE2515 = browser.currentScene.createNode("ROUTE");
ROUTE2515.fromField = "fraction_changed";
ROUTE2515.fromNode = "RollTimer";
ROUTE2515.toField = "set_fraction";
ROUTE2515.toNode = "Rolls_upper_body_RotationInterpolator";
Group2470.children[44] = ROUTE2515;

let ROUTE2516 = browser.currentScene.createNode("ROUTE");
ROUTE2516.fromField = "fraction_changed";
ROUTE2516.fromNode = "RollTimer";
ROUTE2516.toField = "set_fraction";
ROUTE2516.toNode = "Rolls_whole_body_RotationInterpolator";
Group2470.children[45] = ROUTE2516;

let ROUTE2517 = browser.currentScene.createNode("ROUTE");
ROUTE2517.fromField = "fraction_changed";
ROUTE2517.fromNode = "RollTimer";
ROUTE2517.toField = "set_fraction";
ROUTE2517.toNode = "Rolls_whole_body_TranslationInterpolator";
Group2470.children[46] = ROUTE2517;

let ROUTE2518 = browser.currentScene.createNode("ROUTE");
ROUTE2518.fromField = "fraction_changed";
ROUTE2518.fromNode = "RollTimer";
ROUTE2518.toField = "set_fraction";
ROUTE2518.toNode = "Roll_l_sternoclavicular_RollInterpolator";
Group2470.children[47] = ROUTE2518;

let ROUTE2519 = browser.currentScene.createNode("ROUTE");
ROUTE2519.fromField = "fraction_changed";
ROUTE2519.fromNode = "RollTimer";
ROUTE2519.toField = "set_fraction";
ROUTE2519.toNode = "Roll_l_acromioclavicular_RollInterpolator";
Group2470.children[48] = ROUTE2519;

let ROUTE2520 = browser.currentScene.createNode("ROUTE");
ROUTE2520.fromField = "fraction_changed";
ROUTE2520.fromNode = "RollTimer";
ROUTE2520.toField = "set_fraction";
ROUTE2520.toNode = "Roll_r_sternoclavicular_RollInterpolator";
Group2470.children[49] = ROUTE2520;

let ROUTE2521 = browser.currentScene.createNode("ROUTE");
ROUTE2521.fromField = "fraction_changed";
ROUTE2521.fromNode = "RollTimer";
ROUTE2521.toField = "set_fraction";
ROUTE2521.toNode = "Roll_r_acromioclavicular_RollInterpolator";
Group2470.children[50] = ROUTE2521;

let ROUTE2522 = browser.currentScene.createNode("ROUTE");
ROUTE2522.fromField = "fraction_changed";
ROUTE2522.fromNode = "RollTimer";
ROUTE2522.toField = "set_fraction";
ROUTE2522.toNode = "Roll_r_metatarsal_PitchInterpolator";
Group2470.children[51] = ROUTE2522;

let ROUTE2523 = browser.currentScene.createNode("ROUTE");
ROUTE2523.fromField = "fraction_changed";
ROUTE2523.fromNode = "RollTimer";
ROUTE2523.toField = "set_fraction";
ROUTE2523.toNode = "Roll_sacroiliac_YawInterpolator";
Group2470.children[52] = ROUTE2523;

let ROUTE2524 = browser.currentScene.createNode("ROUTE");
ROUTE2524.fromField = "fraction_changed";
ROUTE2524.fromNode = "RollTimer";
ROUTE2524.toField = "set_fraction";
ROUTE2524.toNode = "Roll_vl5_YawInterpolator";
Group2470.children[53] = ROUTE2524;

let ROUTE2525 = browser.currentScene.createNode("ROUTE");
ROUTE2525.fromField = "fraction_changed";
ROUTE2525.fromNode = "RollTimer";
ROUTE2525.toField = "set_fraction";
ROUTE2525.toNode = "Roll_vc6_YawInterpolator";
Group2470.children[54] = ROUTE2525;

let ROUTE2526 = browser.currentScene.createNode("ROUTE");
ROUTE2526.fromField = "fraction_changed";
ROUTE2526.fromNode = "RollTimer";
ROUTE2526.toField = "set_fraction";
ROUTE2526.toNode = "Roll_l_thumb1_PitchInterpolator";
Group2470.children[55] = ROUTE2526;

let ROUTE2527 = browser.currentScene.createNode("ROUTE");
ROUTE2527.fromField = "fraction_changed";
ROUTE2527.fromNode = "RollTimer";
ROUTE2527.toField = "set_fraction";
ROUTE2527.toNode = "Roll_r_thumb1_PitchInterpolator";
Group2470.children[56] = ROUTE2527;

let ROUTE2528 = browser.currentScene.createNode("ROUTE");
ROUTE2528.fromField = "value_changed";
ROUTE2528.fromNode = "Rolls_r_ankle_RotationInterpolator";
ROUTE2528.toField = "rotation";
ROUTE2528.toNode = "hanim_r_ankle";
Group2470.children[57] = ROUTE2528;

let ROUTE2529 = browser.currentScene.createNode("ROUTE");
ROUTE2529.fromField = "value_changed";
ROUTE2529.fromNode = "Rolls_r_knee_RotationInterpolator";
ROUTE2529.toField = "rotation";
ROUTE2529.toNode = "hanim_r_knee";
Group2470.children[58] = ROUTE2529;

let ROUTE2530 = browser.currentScene.createNode("ROUTE");
ROUTE2530.fromField = "value_changed";
ROUTE2530.fromNode = "Rolls_r_hip_RotationInterpolator";
ROUTE2530.toField = "rotation";
ROUTE2530.toNode = "hanim_r_hip";
Group2470.children[59] = ROUTE2530;

let ROUTE2531 = browser.currentScene.createNode("ROUTE");
ROUTE2531.fromField = "value_changed";
ROUTE2531.fromNode = "Rolls_l_ankle_RotationInterpolator";
ROUTE2531.toField = "rotation";
ROUTE2531.toNode = "hanim_l_ankle";
Group2470.children[60] = ROUTE2531;

let ROUTE2532 = browser.currentScene.createNode("ROUTE");
ROUTE2532.fromField = "value_changed";
ROUTE2532.fromNode = "Rolls_l_knee_RotationInterpolator";
ROUTE2532.toField = "rotation";
ROUTE2532.toNode = "hanim_l_knee";
Group2470.children[61] = ROUTE2532;

let ROUTE2533 = browser.currentScene.createNode("ROUTE");
ROUTE2533.fromField = "value_changed";
ROUTE2533.fromNode = "Rolls_l_hip_RotationInterpolator";
ROUTE2533.toField = "rotation";
ROUTE2533.toNode = "hanim_l_hip";
Group2470.children[62] = ROUTE2533;

let ROUTE2534 = browser.currentScene.createNode("ROUTE");
ROUTE2534.fromField = "value_changed";
ROUTE2534.fromNode = "Rolls_lower_body_RotationInterpolator";
ROUTE2534.toField = "rotation";
ROUTE2534.toNode = "hanim_sacroiliac";
Group2470.children[63] = ROUTE2534;

let ROUTE2535 = browser.currentScene.createNode("ROUTE");
ROUTE2535.fromField = "value_changed";
ROUTE2535.fromNode = "Rolls_r_wrist_RotationInterpolator";
ROUTE2535.toField = "rotation";
ROUTE2535.toNode = "hanim_r_wrist";
Group2470.children[64] = ROUTE2535;

let ROUTE2536 = browser.currentScene.createNode("ROUTE");
ROUTE2536.fromField = "value_changed";
ROUTE2536.fromNode = "Rolls_r_elbow_RotationInterpolator";
ROUTE2536.toField = "rotation";
ROUTE2536.toNode = "hanim_r_elbow";
Group2470.children[65] = ROUTE2536;

let ROUTE2537 = browser.currentScene.createNode("ROUTE");
ROUTE2537.fromField = "value_changed";
ROUTE2537.fromNode = "Rolls_r_shoulder_RotationInterpolator";
ROUTE2537.toField = "rotation";
ROUTE2537.toNode = "hanim_r_shoulder";
Group2470.children[66] = ROUTE2537;

let ROUTE2538 = browser.currentScene.createNode("ROUTE");
ROUTE2538.fromField = "value_changed";
ROUTE2538.fromNode = "Rolls_l_wrist_RotationInterpolator";
ROUTE2538.toField = "rotation";
ROUTE2538.toNode = "hanim_l_wrist";
Group2470.children[67] = ROUTE2538;

let ROUTE2539 = browser.currentScene.createNode("ROUTE");
ROUTE2539.fromField = "value_changed";
ROUTE2539.fromNode = "Rolls_l_elbow_RotationInterpolator";
ROUTE2539.toField = "rotation";
ROUTE2539.toNode = "hanim_l_elbow";
Group2470.children[68] = ROUTE2539;

let ROUTE2540 = browser.currentScene.createNode("ROUTE");
ROUTE2540.fromField = "value_changed";
ROUTE2540.fromNode = "Rolls_l_shoulder_RotationInterpolator";
ROUTE2540.toField = "rotation";
ROUTE2540.toNode = "hanim_l_shoulder";
Group2470.children[69] = ROUTE2540;

let ROUTE2541 = browser.currentScene.createNode("ROUTE");
ROUTE2541.fromField = "value_changed";
ROUTE2541.fromNode = "Rolls_head_RotationInterpolator";
ROUTE2541.toField = "rotation";
ROUTE2541.toNode = "hanim_skullbase";
Group2470.children[70] = ROUTE2541;

let ROUTE2542 = browser.currentScene.createNode("ROUTE");
ROUTE2542.fromField = "value_changed";
ROUTE2542.fromNode = "Rolls_neck_RotationInterpolator";
ROUTE2542.toField = "rotation";
ROUTE2542.toNode = "hanim_vc4";
Group2470.children[71] = ROUTE2542;

let ROUTE2543 = browser.currentScene.createNode("ROUTE");
ROUTE2543.fromField = "value_changed";
ROUTE2543.fromNode = "Rolls_upper_body_RotationInterpolator";
ROUTE2543.toField = "rotation";
ROUTE2543.toNode = "hanim_vl1";
Group2470.children[72] = ROUTE2543;

let ROUTE2544 = browser.currentScene.createNode("ROUTE");
ROUTE2544.fromField = "value_changed";
ROUTE2544.fromNode = "Rolls_whole_body_RotationInterpolator";
ROUTE2544.toField = "rotation";
ROUTE2544.toNode = "hanim_humanoid_root";
Group2470.children[73] = ROUTE2544;

let ROUTE2545 = browser.currentScene.createNode("ROUTE");
ROUTE2545.fromField = "value_changed";
ROUTE2545.fromNode = "Rolls_whole_body_TranslationInterpolator";
ROUTE2545.toField = "translation";
ROUTE2545.toNode = "hanim_humanoid_root";
Group2470.children[74] = ROUTE2545;

let ROUTE2546 = browser.currentScene.createNode("ROUTE");
ROUTE2546.fromField = "value_changed";
ROUTE2546.fromNode = "Roll_l_sternoclavicular_RollInterpolator";
ROUTE2546.toField = "rotation";
ROUTE2546.toNode = "hanim_l_sternoclavicular";
Group2470.children[75] = ROUTE2546;

let ROUTE2547 = browser.currentScene.createNode("ROUTE");
ROUTE2547.fromField = "value_changed";
ROUTE2547.fromNode = "Roll_l_acromioclavicular_RollInterpolator";
ROUTE2547.toField = "rotation";
ROUTE2547.toNode = "hanim_l_acromioclavicular";
Group2470.children[76] = ROUTE2547;

let ROUTE2548 = browser.currentScene.createNode("ROUTE");
ROUTE2548.fromField = "value_changed";
ROUTE2548.fromNode = "Roll_r_sternoclavicular_RollInterpolator";
ROUTE2548.toField = "rotation";
ROUTE2548.toNode = "hanim_r_sternoclavicular";
Group2470.children[77] = ROUTE2548;

let ROUTE2549 = browser.currentScene.createNode("ROUTE");
ROUTE2549.fromField = "value_changed";
ROUTE2549.fromNode = "Roll_r_acromioclavicular_RollInterpolator";
ROUTE2549.toField = "rotation";
ROUTE2549.toNode = "hanim_r_acromioclavicular";
Group2470.children[78] = ROUTE2549;

let ROUTE2550 = browser.currentScene.createNode("ROUTE");
ROUTE2550.fromField = "value_changed";
ROUTE2550.fromNode = "Roll_r_metatarsal_PitchInterpolator";
ROUTE2550.toField = "rotation";
ROUTE2550.toNode = "hanim_l_metatarsal";
Group2470.children[79] = ROUTE2550;

let ROUTE2551 = browser.currentScene.createNode("ROUTE");
ROUTE2551.fromField = "value_changed";
ROUTE2551.fromNode = "Roll_r_metatarsal_PitchInterpolator";
ROUTE2551.toField = "rotation";
ROUTE2551.toNode = "hanim_r_metatarsal";
Group2470.children[80] = ROUTE2551;

let ROUTE2552 = browser.currentScene.createNode("ROUTE");
ROUTE2552.fromField = "value_changed";
ROUTE2552.fromNode = "Roll_sacroiliac_YawInterpolator";
ROUTE2552.toField = "rotation";
ROUTE2552.toNode = "hanim_sacroiliac";
Group2470.children[81] = ROUTE2552;

let ROUTE2553 = browser.currentScene.createNode("ROUTE");
ROUTE2553.fromField = "value_changed";
ROUTE2553.fromNode = "Roll_vl5_YawInterpolator";
ROUTE2553.toField = "rotation";
ROUTE2553.toNode = "hanim_vl5";
Group2470.children[82] = ROUTE2553;

let ROUTE2554 = browser.currentScene.createNode("ROUTE");
ROUTE2554.fromField = "value_changed";
ROUTE2554.fromNode = "Roll_vc6_YawInterpolator";
ROUTE2554.toField = "rotation";
ROUTE2554.toNode = "hanim_vc6";
Group2470.children[83] = ROUTE2554;

let ROUTE2555 = browser.currentScene.createNode("ROUTE");
ROUTE2555.fromField = "value_changed";
ROUTE2555.fromNode = "Roll_l_thumb1_PitchInterpolator";
ROUTE2555.toField = "rotation";
ROUTE2555.toNode = "hanim_l_thumb1";
Group2470.children[84] = ROUTE2555;

let ROUTE2556 = browser.currentScene.createNode("ROUTE");
ROUTE2556.fromField = "value_changed";
ROUTE2556.fromNode = "Roll_r_thumb1_PitchInterpolator";
ROUTE2556.toField = "rotation";
ROUTE2556.toNode = "hanim_r_thumb1";
Group2470.children[85] = ROUTE2556;

browser.currentScene.children[17] = Group2470;

let Group2557 = browser.currentScene.createNode("Group");
Group2557.DEF = "WalkAnimation";
let TimeSensor2558 = browser.currentScene.createNode("TimeSensor");
TimeSensor2558.DEF = "WalkTimer";
TimeSensor2558.cycleInterval = 1.73;
TimeSensor2558.loop = True;
Group2557.children = new MFNode();

Group2557.children[0] = TimeSensor2558;

let OrientationInterpolator2559 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2559.DEF = "Walk_r_metatarsal_PitchInterpolator";
OrientationInterpolator2559.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2559.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2557.children[1] = OrientationInterpolator2559;

let OrientationInterpolator2560 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2560.DEF = "Walk_r_ankle_RotationInterpolator";
OrientationInterpolator2560.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator2560.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,0,0,0.1268,-1,0,0,0.01793,-1,0,0,0.05824,-1,0,0,0.2398,-1,0,0,0.35,-1,0,0,0.3322,0,0,1,0]);
Group2557.children[2] = OrientationInterpolator2560;

let OrientationInterpolator2561 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2561.DEF = "Walk_r_knee_RotationInterpolator";
OrientationInterpolator2561.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator2561.keyValue = new MFRotation(new float[1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.2475,1,0,0,0.8573]);
Group2557.children[3] = OrientationInterpolator2561;

let OrientationInterpolator2562 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2562.DEF = "Walk_r_hip_RotationInterpolator";
OrientationInterpolator2562.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator2562.keyValue = new MFRotation(new float[-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481]);
Group2557.children[4] = OrientationInterpolator2562;

let OrientationInterpolator2563 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2563.DEF = "Walk_l_ankle_RotationInterpolator";
OrientationInterpolator2563.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.6667,0.9167,1]);
OrientationInterpolator2563.keyValue = new MFRotation(new float[-1,0,0,0.06714,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.1222,-1,0,0,0.06714]);
Group2557.children[5] = OrientationInterpolator2563;

let OrientationInterpolator2564 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2564.DEF = "Walk_l_knee_RotationInterpolator";
OrientationInterpolator2564.key = new MFFloat(new float[0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator2564.keyValue = new MFRotation(new float[1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226]);
Group2557.children[6] = OrientationInterpolator2564;

let OrientationInterpolator2565 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2565.DEF = "Walk_l_hip_RotationInterpolator";
OrientationInterpolator2565.key = new MFFloat(new float[0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator2565.keyValue = new MFRotation(new float[-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865]);
Group2557.children[7] = OrientationInterpolator2565;

let OrientationInterpolator2566 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2566.DEF = "Walk_lower_body_RotationInterpolator";
OrientationInterpolator2566.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2566.keyValue = new MFRotation(new float[0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056]);
Group2557.children[8] = OrientationInterpolator2566;

let OrientationInterpolator2567 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2567.DEF = "Walk_r_wrist_RotationInterpolator";
OrientationInterpolator2567.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator2567.keyValue = new MFRotation(new float[-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346]);
Group2557.children[9] = OrientationInterpolator2567;

let OrientationInterpolator2568 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2568.DEF = "Walk_r_elbow_RotationInterpolator";
OrientationInterpolator2568.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator2568.keyValue = new MFRotation(new float[-1,0,0,0.411508,-1,0,0,0.0925011,-1,0,0,0.572568,-1,0,0,0.411508]);
Group2557.children[10] = OrientationInterpolator2568;

let OrientationInterpolator2569 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2569.DEF = "Walk_r_shoulder_RotationInterpolator";
OrientationInterpolator2569.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator2569.keyValue = new MFRotation(new float[-1,0,0,0.09346,1,0,0,0.3197,-1,0,0,0.1564,-1,0,0,0.09346]);
Group2557.children[11] = OrientationInterpolator2569;

let OrientationInterpolator2570 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2570.DEF = "Walk_l_wrist_RotationInterpolator";
OrientationInterpolator2570.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator2570.keyValue = new MFRotation(new float[0,-1,0,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0,-1,0,0.461076]);
Group2557.children[12] = OrientationInterpolator2570;

let OrientationInterpolator2571 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2571.DEF = "Walk_l_elbow_RotationInterpolator";
OrientationInterpolator2571.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator2571.keyValue = new MFRotation(new float[-1,0,0,0.0659878,-1,0,0,0.488383,-1,0,0,0.0177536,-1,0,0,0.0659878]);
Group2557.children[13] = OrientationInterpolator2571;

let OrientationInterpolator2572 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2572.DEF = "Walk_l_shoulder_RotationInterpolator";
OrientationInterpolator2572.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator2572.keyValue = new MFRotation(new float[1,0,0,0.1189,-1,0,0,0.1861,1,0,0,0.3357,1,0,0,0.1189]);
Group2557.children[14] = OrientationInterpolator2572;

let OrientationInterpolator2573 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2573.DEF = "Walk_head_RotationInterpolator";
OrientationInterpolator2573.key = new MFFloat(new float[0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]);
OrientationInterpolator2573.keyValue = new MFRotation(new float[0,-1,0,0.08642,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.04391,0,-1,0,0.03119,0,-1,0,0.07936,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.08642]);
Group2557.children[15] = OrientationInterpolator2573;

let OrientationInterpolator2574 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2574.DEF = "Walk_neck_RotationInterpolator";
OrientationInterpolator2574.key = new MFFloat(new float[0,1]);
OrientationInterpolator2574.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group2557.children[16] = OrientationInterpolator2574;

let OrientationInterpolator2575 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2575.DEF = "Walk_upper_body_RotationInterpolator";
OrientationInterpolator2575.key = new MFFloat(new float[0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator2575.keyValue = new MFRotation(new float[0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826]);
Group2557.children[17] = OrientationInterpolator2575;

let OrientationInterpolator2576 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2576.DEF = "Walk_whole_body_RotationInterpolator";
OrientationInterpolator2576.key = new MFFloat(new float[0,1]);
OrientationInterpolator2576.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group2557.children[18] = OrientationInterpolator2576;

let PositionInterpolator2577 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator2577.DEF = "Walk_whole_body_TranslationInterpolator";
PositionInterpolator2577.key = new MFFloat(new float[0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator2577.keyValue = new MFVec3f(new float[0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0]);
Group2557.children[19] = PositionInterpolator2577;

let OrientationInterpolator2578 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2578.DEF = "Walk_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2578.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2578.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2557.children[20] = OrientationInterpolator2578;

let OrientationInterpolator2579 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2579.DEF = "Walk_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2579.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2579.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2557.children[21] = OrientationInterpolator2579;

let OrientationInterpolator2580 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2580.DEF = "Walk_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2580.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2580.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2557.children[22] = OrientationInterpolator2580;

let OrientationInterpolator2581 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2581.DEF = "Walk_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2581.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2581.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2557.children[23] = OrientationInterpolator2581;

let OrientationInterpolator2582 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2582.DEF = "Walk_sacroiliac_YawInterpolator";
OrientationInterpolator2582.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2582.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2557.children[24] = OrientationInterpolator2582;

let OrientationInterpolator2583 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2583.DEF = "Walk_vl5_YawInterpolator";
OrientationInterpolator2583.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2583.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2557.children[25] = OrientationInterpolator2583;

let OrientationInterpolator2584 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2584.DEF = "Walk_vc6_YawInterpolator";
OrientationInterpolator2584.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2584.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2557.children[26] = OrientationInterpolator2584;

let OrientationInterpolator2585 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2585.DEF = "Walk_l_thumb1_PitchInterpolator";
OrientationInterpolator2585.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2585.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2557.children[27] = OrientationInterpolator2585;

let OrientationInterpolator2586 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2586.DEF = "Walk_r_thumb1_PitchInterpolator";
OrientationInterpolator2586.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2586.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2557.children[28] = OrientationInterpolator2586;

let ROUTE2587 = browser.currentScene.createNode("ROUTE");
ROUTE2587.fromField = "fraction_changed";
ROUTE2587.fromNode = "WalkTimer";
ROUTE2587.toField = "set_fraction";
ROUTE2587.toNode = "Walk_r_ankle_RotationInterpolator";
Group2557.children[29] = ROUTE2587;

let ROUTE2588 = browser.currentScene.createNode("ROUTE");
ROUTE2588.fromField = "fraction_changed";
ROUTE2588.fromNode = "WalkTimer";
ROUTE2588.toField = "set_fraction";
ROUTE2588.toNode = "Walk_r_knee_RotationInterpolator";
Group2557.children[30] = ROUTE2588;

let ROUTE2589 = browser.currentScene.createNode("ROUTE");
ROUTE2589.fromField = "fraction_changed";
ROUTE2589.fromNode = "WalkTimer";
ROUTE2589.toField = "set_fraction";
ROUTE2589.toNode = "Walk_r_hip_RotationInterpolator";
Group2557.children[31] = ROUTE2589;

let ROUTE2590 = browser.currentScene.createNode("ROUTE");
ROUTE2590.fromField = "fraction_changed";
ROUTE2590.fromNode = "WalkTimer";
ROUTE2590.toField = "set_fraction";
ROUTE2590.toNode = "Walk_l_ankle_RotationInterpolator";
Group2557.children[32] = ROUTE2590;

let ROUTE2591 = browser.currentScene.createNode("ROUTE");
ROUTE2591.fromField = "fraction_changed";
ROUTE2591.fromNode = "WalkTimer";
ROUTE2591.toField = "set_fraction";
ROUTE2591.toNode = "Walk_l_knee_RotationInterpolator";
Group2557.children[33] = ROUTE2591;

let ROUTE2592 = browser.currentScene.createNode("ROUTE");
ROUTE2592.fromField = "fraction_changed";
ROUTE2592.fromNode = "WalkTimer";
ROUTE2592.toField = "set_fraction";
ROUTE2592.toNode = "Walk_l_hip_RotationInterpolator";
Group2557.children[34] = ROUTE2592;

let ROUTE2593 = browser.currentScene.createNode("ROUTE");
ROUTE2593.fromField = "fraction_changed";
ROUTE2593.fromNode = "WalkTimer";
ROUTE2593.toField = "set_fraction";
ROUTE2593.toNode = "Walk_lower_body_RotationInterpolator";
Group2557.children[35] = ROUTE2593;

let ROUTE2594 = browser.currentScene.createNode("ROUTE");
ROUTE2594.fromField = "fraction_changed";
ROUTE2594.fromNode = "WalkTimer";
ROUTE2594.toField = "set_fraction";
ROUTE2594.toNode = "Walk_r_wrist_RotationInterpolator";
Group2557.children[36] = ROUTE2594;

let ROUTE2595 = browser.currentScene.createNode("ROUTE");
ROUTE2595.fromField = "fraction_changed";
ROUTE2595.fromNode = "WalkTimer";
ROUTE2595.toField = "set_fraction";
ROUTE2595.toNode = "Walk_r_elbow_RotationInterpolator";
Group2557.children[37] = ROUTE2595;

let ROUTE2596 = browser.currentScene.createNode("ROUTE");
ROUTE2596.fromField = "fraction_changed";
ROUTE2596.fromNode = "WalkTimer";
ROUTE2596.toField = "set_fraction";
ROUTE2596.toNode = "Walk_r_shoulder_RotationInterpolator";
Group2557.children[38] = ROUTE2596;

let ROUTE2597 = browser.currentScene.createNode("ROUTE");
ROUTE2597.fromField = "fraction_changed";
ROUTE2597.fromNode = "WalkTimer";
ROUTE2597.toField = "set_fraction";
ROUTE2597.toNode = "Walk_l_wrist_RotationInterpolator";
Group2557.children[39] = ROUTE2597;

let ROUTE2598 = browser.currentScene.createNode("ROUTE");
ROUTE2598.fromField = "fraction_changed";
ROUTE2598.fromNode = "WalkTimer";
ROUTE2598.toField = "set_fraction";
ROUTE2598.toNode = "Walk_l_elbow_RotationInterpolator";
Group2557.children[40] = ROUTE2598;

let ROUTE2599 = browser.currentScene.createNode("ROUTE");
ROUTE2599.fromField = "fraction_changed";
ROUTE2599.fromNode = "WalkTimer";
ROUTE2599.toField = "set_fraction";
ROUTE2599.toNode = "Walk_l_shoulder_RotationInterpolator";
Group2557.children[41] = ROUTE2599;

let ROUTE2600 = browser.currentScene.createNode("ROUTE");
ROUTE2600.fromField = "fraction_changed";
ROUTE2600.fromNode = "WalkTimer";
ROUTE2600.toField = "set_fraction";
ROUTE2600.toNode = "Walk_head_RotationInterpolator";
Group2557.children[42] = ROUTE2600;

let ROUTE2601 = browser.currentScene.createNode("ROUTE");
ROUTE2601.fromField = "fraction_changed";
ROUTE2601.fromNode = "WalkTimer";
ROUTE2601.toField = "set_fraction";
ROUTE2601.toNode = "Walk_neck_RotationInterpolator";
Group2557.children[43] = ROUTE2601;

let ROUTE2602 = browser.currentScene.createNode("ROUTE");
ROUTE2602.fromField = "fraction_changed";
ROUTE2602.fromNode = "WalkTimer";
ROUTE2602.toField = "set_fraction";
ROUTE2602.toNode = "Walk_upper_body_RotationInterpolator";
Group2557.children[44] = ROUTE2602;

let ROUTE2603 = browser.currentScene.createNode("ROUTE");
ROUTE2603.fromField = "fraction_changed";
ROUTE2603.fromNode = "WalkTimer";
ROUTE2603.toField = "set_fraction";
ROUTE2603.toNode = "Walk_whole_body_RotationInterpolator";
Group2557.children[45] = ROUTE2603;

let ROUTE2604 = browser.currentScene.createNode("ROUTE");
ROUTE2604.fromField = "fraction_changed";
ROUTE2604.fromNode = "WalkTimer";
ROUTE2604.toField = "set_fraction";
ROUTE2604.toNode = "Walk_whole_body_TranslationInterpolator";
Group2557.children[46] = ROUTE2604;

let ROUTE2605 = browser.currentScene.createNode("ROUTE");
ROUTE2605.fromField = "fraction_changed";
ROUTE2605.fromNode = "WalkTimer";
ROUTE2605.toField = "set_fraction";
ROUTE2605.toNode = "Walk_l_sternoclavicular_RollInterpolator";
Group2557.children[47] = ROUTE2605;

let ROUTE2606 = browser.currentScene.createNode("ROUTE");
ROUTE2606.fromField = "fraction_changed";
ROUTE2606.fromNode = "WalkTimer";
ROUTE2606.toField = "set_fraction";
ROUTE2606.toNode = "Walk_l_acromioclavicular_RollInterpolator";
Group2557.children[48] = ROUTE2606;

let ROUTE2607 = browser.currentScene.createNode("ROUTE");
ROUTE2607.fromField = "fraction_changed";
ROUTE2607.fromNode = "WalkTimer";
ROUTE2607.toField = "set_fraction";
ROUTE2607.toNode = "Walk_r_sternoclavicular_RollInterpolator";
Group2557.children[49] = ROUTE2607;

let ROUTE2608 = browser.currentScene.createNode("ROUTE");
ROUTE2608.fromField = "fraction_changed";
ROUTE2608.fromNode = "WalkTimer";
ROUTE2608.toField = "set_fraction";
ROUTE2608.toNode = "Walk_r_acromioclavicular_RollInterpolator";
Group2557.children[50] = ROUTE2608;

let ROUTE2609 = browser.currentScene.createNode("ROUTE");
ROUTE2609.fromField = "fraction_changed";
ROUTE2609.fromNode = "WalkTimer";
ROUTE2609.toField = "set_fraction";
ROUTE2609.toNode = "Walk_r_metatarsal_PitchInterpolator";
Group2557.children[51] = ROUTE2609;

let ROUTE2610 = browser.currentScene.createNode("ROUTE");
ROUTE2610.fromField = "fraction_changed";
ROUTE2610.fromNode = "WalkTimer";
ROUTE2610.toField = "set_fraction";
ROUTE2610.toNode = "Walk_sacroiliac_YawInterpolator";
Group2557.children[52] = ROUTE2610;

let ROUTE2611 = browser.currentScene.createNode("ROUTE");
ROUTE2611.fromField = "fraction_changed";
ROUTE2611.fromNode = "WalkTimer";
ROUTE2611.toField = "set_fraction";
ROUTE2611.toNode = "Walk_vl5_YawInterpolator";
Group2557.children[53] = ROUTE2611;

let ROUTE2612 = browser.currentScene.createNode("ROUTE");
ROUTE2612.fromField = "fraction_changed";
ROUTE2612.fromNode = "WalkTimer";
ROUTE2612.toField = "set_fraction";
ROUTE2612.toNode = "Walk_vc6_YawInterpolator";
Group2557.children[54] = ROUTE2612;

let ROUTE2613 = browser.currentScene.createNode("ROUTE");
ROUTE2613.fromField = "fraction_changed";
ROUTE2613.fromNode = "WalkTimer";
ROUTE2613.toField = "set_fraction";
ROUTE2613.toNode = "Walk_l_thumb1_PitchInterpolator";
Group2557.children[55] = ROUTE2613;

let ROUTE2614 = browser.currentScene.createNode("ROUTE");
ROUTE2614.fromField = "fraction_changed";
ROUTE2614.fromNode = "WalkTimer";
ROUTE2614.toField = "set_fraction";
ROUTE2614.toNode = "Walk_r_thumb1_PitchInterpolator";
Group2557.children[56] = ROUTE2614;

let ROUTE2615 = browser.currentScene.createNode("ROUTE");
ROUTE2615.fromField = "value_changed";
ROUTE2615.fromNode = "Walk_r_ankle_RotationInterpolator";
ROUTE2615.toField = "rotation";
ROUTE2615.toNode = "hanim_r_ankle";
Group2557.children[57] = ROUTE2615;

let ROUTE2616 = browser.currentScene.createNode("ROUTE");
ROUTE2616.fromField = "value_changed";
ROUTE2616.fromNode = "Walk_r_knee_RotationInterpolator";
ROUTE2616.toField = "rotation";
ROUTE2616.toNode = "hanim_r_knee";
Group2557.children[58] = ROUTE2616;

let ROUTE2617 = browser.currentScene.createNode("ROUTE");
ROUTE2617.fromField = "value_changed";
ROUTE2617.fromNode = "Walk_r_hip_RotationInterpolator";
ROUTE2617.toField = "rotation";
ROUTE2617.toNode = "hanim_r_hip";
Group2557.children[59] = ROUTE2617;

let ROUTE2618 = browser.currentScene.createNode("ROUTE");
ROUTE2618.fromField = "value_changed";
ROUTE2618.fromNode = "Walk_l_ankle_RotationInterpolator";
ROUTE2618.toField = "rotation";
ROUTE2618.toNode = "hanim_l_ankle";
Group2557.children[60] = ROUTE2618;

let ROUTE2619 = browser.currentScene.createNode("ROUTE");
ROUTE2619.fromField = "value_changed";
ROUTE2619.fromNode = "Walk_l_knee_RotationInterpolator";
ROUTE2619.toField = "rotation";
ROUTE2619.toNode = "hanim_l_knee";
Group2557.children[61] = ROUTE2619;

let ROUTE2620 = browser.currentScene.createNode("ROUTE");
ROUTE2620.fromField = "value_changed";
ROUTE2620.fromNode = "Walk_l_hip_RotationInterpolator";
ROUTE2620.toField = "rotation";
ROUTE2620.toNode = "hanim_l_hip";
Group2557.children[62] = ROUTE2620;

let ROUTE2621 = browser.currentScene.createNode("ROUTE");
ROUTE2621.fromField = "value_changed";
ROUTE2621.fromNode = "Walk_lower_body_RotationInterpolator";
ROUTE2621.toField = "rotation";
ROUTE2621.toNode = "hanim_sacroiliac";
Group2557.children[63] = ROUTE2621;

let ROUTE2622 = browser.currentScene.createNode("ROUTE");
ROUTE2622.fromField = "value_changed";
ROUTE2622.fromNode = "Walk_r_wrist_RotationInterpolator";
ROUTE2622.toField = "rotation";
ROUTE2622.toNode = "hanim_r_wrist";
Group2557.children[64] = ROUTE2622;

let ROUTE2623 = browser.currentScene.createNode("ROUTE");
ROUTE2623.fromField = "value_changed";
ROUTE2623.fromNode = "Walk_r_elbow_RotationInterpolator";
ROUTE2623.toField = "rotation";
ROUTE2623.toNode = "hanim_r_elbow";
Group2557.children[65] = ROUTE2623;

let ROUTE2624 = browser.currentScene.createNode("ROUTE");
ROUTE2624.fromField = "value_changed";
ROUTE2624.fromNode = "Walk_r_shoulder_RotationInterpolator";
ROUTE2624.toField = "rotation";
ROUTE2624.toNode = "hanim_r_shoulder";
Group2557.children[66] = ROUTE2624;

let ROUTE2625 = browser.currentScene.createNode("ROUTE");
ROUTE2625.fromField = "value_changed";
ROUTE2625.fromNode = "Walk_l_wrist_RotationInterpolator";
ROUTE2625.toField = "rotation";
ROUTE2625.toNode = "hanim_l_wrist";
Group2557.children[67] = ROUTE2625;

let ROUTE2626 = browser.currentScene.createNode("ROUTE");
ROUTE2626.fromField = "value_changed";
ROUTE2626.fromNode = "Walk_l_elbow_RotationInterpolator";
ROUTE2626.toField = "rotation";
ROUTE2626.toNode = "hanim_l_elbow";
Group2557.children[68] = ROUTE2626;

let ROUTE2627 = browser.currentScene.createNode("ROUTE");
ROUTE2627.fromField = "value_changed";
ROUTE2627.fromNode = "Walk_l_shoulder_RotationInterpolator";
ROUTE2627.toField = "rotation";
ROUTE2627.toNode = "hanim_l_shoulder";
Group2557.children[69] = ROUTE2627;

let ROUTE2628 = browser.currentScene.createNode("ROUTE");
ROUTE2628.fromField = "value_changed";
ROUTE2628.fromNode = "Walk_head_RotationInterpolator";
ROUTE2628.toField = "rotation";
ROUTE2628.toNode = "hanim_skullbase";
Group2557.children[70] = ROUTE2628;

let ROUTE2629 = browser.currentScene.createNode("ROUTE");
ROUTE2629.fromField = "value_changed";
ROUTE2629.fromNode = "Walk_neck_RotationInterpolator";
ROUTE2629.toField = "rotation";
ROUTE2629.toNode = "hanim_vc4";
Group2557.children[71] = ROUTE2629;

let ROUTE2630 = browser.currentScene.createNode("ROUTE");
ROUTE2630.fromField = "value_changed";
ROUTE2630.fromNode = "Walk_upper_body_RotationInterpolator";
ROUTE2630.toField = "rotation";
ROUTE2630.toNode = "hanim_vl1";
Group2557.children[72] = ROUTE2630;

let ROUTE2631 = browser.currentScene.createNode("ROUTE");
ROUTE2631.fromField = "value_changed";
ROUTE2631.fromNode = "Walk_whole_body_RotationInterpolator";
ROUTE2631.toField = "rotation";
ROUTE2631.toNode = "hanim_humanoid_root";
Group2557.children[73] = ROUTE2631;

let ROUTE2632 = browser.currentScene.createNode("ROUTE");
ROUTE2632.fromField = "value_changed";
ROUTE2632.fromNode = "Walk_whole_body_TranslationInterpolator";
ROUTE2632.toField = "translation";
ROUTE2632.toNode = "hanim_humanoid_root";
Group2557.children[74] = ROUTE2632;

let ROUTE2633 = browser.currentScene.createNode("ROUTE");
ROUTE2633.fromField = "value_changed";
ROUTE2633.fromNode = "Walk_l_sternoclavicular_RollInterpolator";
ROUTE2633.toField = "rotation";
ROUTE2633.toNode = "hanim_l_sternoclavicular";
Group2557.children[75] = ROUTE2633;

let ROUTE2634 = browser.currentScene.createNode("ROUTE");
ROUTE2634.fromField = "value_changed";
ROUTE2634.fromNode = "Walk_l_acromioclavicular_RollInterpolator";
ROUTE2634.toField = "rotation";
ROUTE2634.toNode = "hanim_l_acromioclavicular";
Group2557.children[76] = ROUTE2634;

let ROUTE2635 = browser.currentScene.createNode("ROUTE");
ROUTE2635.fromField = "value_changed";
ROUTE2635.fromNode = "Walk_r_sternoclavicular_RollInterpolator";
ROUTE2635.toField = "rotation";
ROUTE2635.toNode = "hanim_r_sternoclavicular";
Group2557.children[77] = ROUTE2635;

let ROUTE2636 = browser.currentScene.createNode("ROUTE");
ROUTE2636.fromField = "value_changed";
ROUTE2636.fromNode = "Walk_r_acromioclavicular_RollInterpolator";
ROUTE2636.toField = "rotation";
ROUTE2636.toNode = "hanim_r_acromioclavicular";
Group2557.children[78] = ROUTE2636;

let ROUTE2637 = browser.currentScene.createNode("ROUTE");
ROUTE2637.fromField = "value_changed";
ROUTE2637.fromNode = "Walk_r_metatarsal_PitchInterpolator";
ROUTE2637.toField = "rotation";
ROUTE2637.toNode = "hanim_l_metatarsal";
Group2557.children[79] = ROUTE2637;

let ROUTE2638 = browser.currentScene.createNode("ROUTE");
ROUTE2638.fromField = "value_changed";
ROUTE2638.fromNode = "Walk_r_metatarsal_PitchInterpolator";
ROUTE2638.toField = "rotation";
ROUTE2638.toNode = "hanim_r_metatarsal";
Group2557.children[80] = ROUTE2638;

let ROUTE2639 = browser.currentScene.createNode("ROUTE");
ROUTE2639.fromField = "value_changed";
ROUTE2639.fromNode = "Walk_sacroiliac_YawInterpolator";
ROUTE2639.toField = "rotation";
ROUTE2639.toNode = "hanim_sacroiliac";
Group2557.children[81] = ROUTE2639;

let ROUTE2640 = browser.currentScene.createNode("ROUTE");
ROUTE2640.fromField = "value_changed";
ROUTE2640.fromNode = "Walk_vl5_YawInterpolator";
ROUTE2640.toField = "rotation";
ROUTE2640.toNode = "hanim_vl5";
Group2557.children[82] = ROUTE2640;

let ROUTE2641 = browser.currentScene.createNode("ROUTE");
ROUTE2641.fromField = "value_changed";
ROUTE2641.fromNode = "Walk_vc6_YawInterpolator";
ROUTE2641.toField = "rotation";
ROUTE2641.toNode = "hanim_vc6";
Group2557.children[83] = ROUTE2641;

let ROUTE2642 = browser.currentScene.createNode("ROUTE");
ROUTE2642.fromField = "value_changed";
ROUTE2642.fromNode = "Walk_l_thumb1_PitchInterpolator";
ROUTE2642.toField = "rotation";
ROUTE2642.toNode = "hanim_l_thumb1";
Group2557.children[84] = ROUTE2642;

let ROUTE2643 = browser.currentScene.createNode("ROUTE");
ROUTE2643.fromField = "value_changed";
ROUTE2643.fromNode = "Walk_r_thumb1_PitchInterpolator";
ROUTE2643.toField = "rotation";
ROUTE2643.toNode = "hanim_r_thumb1";
Group2557.children[85] = ROUTE2643;

browser.currentScene.children[18] = Group2557;

let Group2644 = browser.currentScene.createNode("Group");
Group2644.DEF = "RunAnimation";
let TimeSensor2645 = browser.currentScene.createNode("TimeSensor");
TimeSensor2645.DEF = "RunTimer";
TimeSensor2645.cycleInterval = 0.9;
TimeSensor2645.loop = True;
Group2644.children = new MFNode();

Group2644.children[0] = TimeSensor2645;

let OrientationInterpolator2646 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2646.DEF = "Run_r_metatarsal_PitchInterpolator";
OrientationInterpolator2646.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2646.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2644.children[1] = OrientationInterpolator2646;

let OrientationInterpolator2647 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2647.DEF = "Run_l_hip_RotationInterpolator_Run";
OrientationInterpolator2647.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2647.keyValue = new MFRotation(new float[-0.99,0.033,0.04,1.42,-0.99,0.1328,0.067,0.42,0.99,0.014,0.009,0.9,-0.99,0.0703,0.05,0.7,-0.99,0.033,0.04,1.42]);
Group2644.children[2] = OrientationInterpolator2647;

let OrientationInterpolator2648 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2648.DEF = "Run_l_knee_RotationInterpolator_Run";
OrientationInterpolator2648.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2648.keyValue = new MFRotation(new float[1,0,0,1.01,1,0,0,0.426,1,0,0,0.705,1,0,0,2.179,1,0,0,1.01]);
Group2644.children[3] = OrientationInterpolator2648;

let OrientationInterpolator2649 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2649.DEF = "Run_l_ankle_RotationInterpolator_Run";
OrientationInterpolator2649.key = new MFFloat(new float[0,0.22,0.3,0.4,1]);
OrientationInterpolator2649.keyValue = new MFRotation(new float[1,0,0,0.0374,-1,0,0,0.1037,-1,0,0,0.4328,1,0,0,0.1929,1,0,0,0.03574]);
Group2644.children[4] = OrientationInterpolator2649;

let OrientationInterpolator2650 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2650.DEF = "Run_r_hip_RotationInterpolator_Run";
OrientationInterpolator2650.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2650.keyValue = new MFRotation(new float[0.99,-0.014,0.009,0.9,-0.99,-0.0703,-0.05,0.7,-0.99,-0.033,0.04,1.42,-0.99,-0.1328,-0.067,0.42,0.99,-0.014,0.009,0.9]);
Group2644.children[5] = OrientationInterpolator2650;

let OrientationInterpolator2651 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2651.DEF = "Run_r_knee_RotationInterpolator_Run";
OrientationInterpolator2651.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2651.keyValue = new MFRotation(new float[1,0,0,0.705,1,0,0,2.179,1,0,0,1.01,1,0,0,0.426,1,0,0,0.705]);
Group2644.children[6] = OrientationInterpolator2651;

let OrientationInterpolator2652 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2652.DEF = "Run_r_ankle_RotationInterpolator_Run";
OrientationInterpolator2652.key = new MFFloat(new float[0,0.4,0.71,0.8,0.82,1]);
OrientationInterpolator2652.keyValue = new MFRotation(new float[1,0,0,0.2323,-1,0,0,0.07843,-1,0,0,0.32,-1,0,0,0.374,-1,0,0,0.3478,1,0,0,0.2323]);
Group2644.children[7] = OrientationInterpolator2652;

let OrientationInterpolator2653 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2653.DEF = "Run_l_shoulder_RotationInterpolator_Run";
OrientationInterpolator2653.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2653.keyValue = new MFRotation(new float[0.99,-0.074,0.25,1.5,0.99,-0.092,0.44,0.3,-0.99,0.136,0.25,0.85,0.99,-0.081,0.38,0.4,0.99,-0.074,0.25,1.5]);
Group2644.children[8] = OrientationInterpolator2653;

let OrientationInterpolator2654 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2654.DEF = "Run_l_elbow_RotationInterpolator_Run";
OrientationInterpolator2654.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2654.keyValue = new MFRotation(new float[-1,0,0,1.85,-0.99,-0.19,0.18,1.35,-1,0,0,0.975,-0.99,-0.09,-0.02,1.55,-1,0,0,1.85]);
Group2644.children[9] = OrientationInterpolator2654;

let OrientationInterpolator2655 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2655.DEF = "Run_l_wrist_RotationInterpolator_Run";
OrientationInterpolator2655.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2655.keyValue = new MFRotation(new float[-0.25,-1,0.08,0.14,0.25,1,0.08,0.14,0,0,1,0,-0.25,1,0.08,-0.14,-0.25,1,0.08,0.14]);
Group2644.children[10] = OrientationInterpolator2655;

let OrientationInterpolator2656 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2656.DEF = "Run_r_shoulder_RotationInterpolator_Run";
OrientationInterpolator2656.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2656.keyValue = new MFRotation(new float[-0.99,-0.136,-0.25,0.85,0.99,0.081,-0.38,0.4,0.99,0.074,-0.25,1.5,0.99,0.081,-0.38,0.4,-0.99,-0.136,-0.25,0.85]);
Group2644.children[11] = OrientationInterpolator2656;

let OrientationInterpolator2657 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2657.DEF = "Run_r_elbow_RotationInterpolator_Run";
OrientationInterpolator2657.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2657.keyValue = new MFRotation(new float[-1,0,0,0.975,-0.99,0.09,0.02,1.55,-1,0,0,1.85,-0.99,0.19,-0.18,1.35,-1,0,0,0.975]);
Group2644.children[12] = OrientationInterpolator2657;

let OrientationInterpolator2658 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2658.DEF = "Run_r_wrist_RotationInterpolator_Run";
OrientationInterpolator2658.key = new MFFloat(new float[0,1]);
OrientationInterpolator2658.keyValue = new MFRotation(new float[-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273]);
Group2644.children[13] = OrientationInterpolator2658;

let OrientationInterpolator2659 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2659.DEF = "Run_lower_body_RotationInterpolator_Run";
OrientationInterpolator2659.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator2659.keyValue = new MFRotation(new float[0,-1,0,0.125,0,0,1,0,0,1,0,0.125,0,0,1,0,0,-1,0,0.125]);
Group2644.children[14] = OrientationInterpolator2659;

let OrientationInterpolator2660 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2660.DEF = "Run_head_RotationInterpolator_Run";
OrientationInterpolator2660.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2660.keyValue = new MFRotation(new float[1,0,0,0.08,1,0,0,0.12,1,0,0,0.3,1,0,0,0.3,1,0,0,0.08]);
Group2644.children[15] = OrientationInterpolator2660;

let OrientationInterpolator2661 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2661.DEF = "Run_neck_RotationInterpolator_Run";
OrientationInterpolator2661.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator2661.keyValue = new MFRotation(new float[0.7,0,0,0.4,-0.7,-0.7,0,0.4,0,0,0,0.4,-0.7,0.7,0,0.4,0.7,0,0,0.4]);
Group2644.children[16] = OrientationInterpolator2661;

let OrientationInterpolator2662 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2662.DEF = "Run_upper_body_RotationInterpolator_Run";
OrientationInterpolator2662.key = new MFFloat(new float[0,0.2545,0.4909,0.7636,1]);
OrientationInterpolator2662.keyValue = new MFRotation(new float[0.97,0.65,0.086,0.5,0.9,0.003,-0.02,0.38,0.95,-0.68,-0.086,0.5,0.9,0.004,-0.025,0.4,0.97,0.65,0.086,0.5]);
Group2644.children[17] = OrientationInterpolator2662;

let OrientationInterpolator2663 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2663.DEF = "Run_whole_body_RotationInterpolator_Run";
OrientationInterpolator2663.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator2663.keyValue = new MFRotation(new float[1,0,0,0.06,1,0,0,0.167,1,0,0,0.06,1,0,0,0.168,1,0,0,0.06]);
Group2644.children[18] = OrientationInterpolator2663;

let PositionInterpolator2664 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator2664.DEF = "Run_whole_body_TranslationInterpolator_Run";
PositionInterpolator2664.key = new MFFloat(new float[0,0.22,0.3,0.31,0.5,0.69,0.7,0.78,1]);
PositionInterpolator2664.keyValue = new MFVec3f(new float[0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0]);
Group2644.children[19] = PositionInterpolator2664;

let OrientationInterpolator2665 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2665.DEF = "Run_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2665.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2665.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2644.children[20] = OrientationInterpolator2665;

let OrientationInterpolator2666 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2666.DEF = "Run_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2666.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2666.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2644.children[21] = OrientationInterpolator2666;

let OrientationInterpolator2667 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2667.DEF = "Run_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2667.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2667.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2644.children[22] = OrientationInterpolator2667;

let OrientationInterpolator2668 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2668.DEF = "Run_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2668.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2668.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2644.children[23] = OrientationInterpolator2668;

let OrientationInterpolator2669 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2669.DEF = "Run_sacroiliac_YawInterpolator";
OrientationInterpolator2669.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2669.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2644.children[24] = OrientationInterpolator2669;

let OrientationInterpolator2670 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2670.DEF = "Run_vl5_YawInterpolator";
OrientationInterpolator2670.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2670.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2644.children[25] = OrientationInterpolator2670;

let OrientationInterpolator2671 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2671.DEF = "Run_vc6_YawInterpolator";
OrientationInterpolator2671.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2671.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2644.children[26] = OrientationInterpolator2671;

let OrientationInterpolator2672 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2672.DEF = "Run_l_thumb1_PitchInterpolator";
OrientationInterpolator2672.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2672.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group2644.children[27] = OrientationInterpolator2672;

let OrientationInterpolator2673 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2673.DEF = "Run_r_thumb1_PitchInterpolator";
OrientationInterpolator2673.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2673.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group2644.children[28] = OrientationInterpolator2673;

let ROUTE2674 = browser.currentScene.createNode("ROUTE");
ROUTE2674.fromField = "fraction_changed";
ROUTE2674.fromNode = "RunTimer";
ROUTE2674.toField = "set_fraction";
ROUTE2674.toNode = "Run_r_ankle_RotationInterpolator_Run";
Group2644.children[29] = ROUTE2674;

let ROUTE2675 = browser.currentScene.createNode("ROUTE");
ROUTE2675.fromField = "fraction_changed";
ROUTE2675.fromNode = "RunTimer";
ROUTE2675.toField = "set_fraction";
ROUTE2675.toNode = "Run_r_knee_RotationInterpolator_Run";
Group2644.children[30] = ROUTE2675;

let ROUTE2676 = browser.currentScene.createNode("ROUTE");
ROUTE2676.fromField = "fraction_changed";
ROUTE2676.fromNode = "RunTimer";
ROUTE2676.toField = "set_fraction";
ROUTE2676.toNode = "Run_r_hip_RotationInterpolator_Run";
Group2644.children[31] = ROUTE2676;

let ROUTE2677 = browser.currentScene.createNode("ROUTE");
ROUTE2677.fromField = "fraction_changed";
ROUTE2677.fromNode = "RunTimer";
ROUTE2677.toField = "set_fraction";
ROUTE2677.toNode = "Run_l_ankle_RotationInterpolator_Run";
Group2644.children[32] = ROUTE2677;

let ROUTE2678 = browser.currentScene.createNode("ROUTE");
ROUTE2678.fromField = "fraction_changed";
ROUTE2678.fromNode = "RunTimer";
ROUTE2678.toField = "set_fraction";
ROUTE2678.toNode = "Run_l_knee_RotationInterpolator_Run";
Group2644.children[33] = ROUTE2678;

let ROUTE2679 = browser.currentScene.createNode("ROUTE");
ROUTE2679.fromField = "fraction_changed";
ROUTE2679.fromNode = "RunTimer";
ROUTE2679.toField = "set_fraction";
ROUTE2679.toNode = "Run_l_hip_RotationInterpolator_Run";
Group2644.children[34] = ROUTE2679;

let ROUTE2680 = browser.currentScene.createNode("ROUTE");
ROUTE2680.fromField = "fraction_changed";
ROUTE2680.fromNode = "RunTimer";
ROUTE2680.toField = "set_fraction";
ROUTE2680.toNode = "Run_lower_body_RotationInterpolator_Run";
Group2644.children[35] = ROUTE2680;

let ROUTE2681 = browser.currentScene.createNode("ROUTE");
ROUTE2681.fromField = "fraction_changed";
ROUTE2681.fromNode = "RunTimer";
ROUTE2681.toField = "set_fraction";
ROUTE2681.toNode = "Run_r_wrist_RotationInterpolator_Run";
Group2644.children[36] = ROUTE2681;

let ROUTE2682 = browser.currentScene.createNode("ROUTE");
ROUTE2682.fromField = "fraction_changed";
ROUTE2682.fromNode = "RunTimer";
ROUTE2682.toField = "set_fraction";
ROUTE2682.toNode = "Run_r_elbow_RotationInterpolator_Run";
Group2644.children[37] = ROUTE2682;

let ROUTE2683 = browser.currentScene.createNode("ROUTE");
ROUTE2683.fromField = "fraction_changed";
ROUTE2683.fromNode = "RunTimer";
ROUTE2683.toField = "set_fraction";
ROUTE2683.toNode = "Run_r_shoulder_RotationInterpolator_Run";
Group2644.children[38] = ROUTE2683;

let ROUTE2684 = browser.currentScene.createNode("ROUTE");
ROUTE2684.fromField = "fraction_changed";
ROUTE2684.fromNode = "RunTimer";
ROUTE2684.toField = "set_fraction";
ROUTE2684.toNode = "Run_l_wrist_RotationInterpolator_Run";
Group2644.children[39] = ROUTE2684;

let ROUTE2685 = browser.currentScene.createNode("ROUTE");
ROUTE2685.fromField = "fraction_changed";
ROUTE2685.fromNode = "RunTimer";
ROUTE2685.toField = "set_fraction";
ROUTE2685.toNode = "Run_l_elbow_RotationInterpolator_Run";
Group2644.children[40] = ROUTE2685;

let ROUTE2686 = browser.currentScene.createNode("ROUTE");
ROUTE2686.fromField = "fraction_changed";
ROUTE2686.fromNode = "RunTimer";
ROUTE2686.toField = "set_fraction";
ROUTE2686.toNode = "Run_l_shoulder_RotationInterpolator_Run";
Group2644.children[41] = ROUTE2686;

let ROUTE2687 = browser.currentScene.createNode("ROUTE");
ROUTE2687.fromField = "fraction_changed";
ROUTE2687.fromNode = "RunTimer";
ROUTE2687.toField = "set_fraction";
ROUTE2687.toNode = "Run_head_RotationInterpolator_Run";
Group2644.children[42] = ROUTE2687;

let ROUTE2688 = browser.currentScene.createNode("ROUTE");
ROUTE2688.fromField = "fraction_changed";
ROUTE2688.fromNode = "RunTimer";
ROUTE2688.toField = "set_fraction";
ROUTE2688.toNode = "Run_neck_RotationInterpolator_Run";
Group2644.children[43] = ROUTE2688;

let ROUTE2689 = browser.currentScene.createNode("ROUTE");
ROUTE2689.fromField = "fraction_changed";
ROUTE2689.fromNode = "RunTimer";
ROUTE2689.toField = "set_fraction";
ROUTE2689.toNode = "Run_upper_body_RotationInterpolator_Run";
Group2644.children[44] = ROUTE2689;

let ROUTE2690 = browser.currentScene.createNode("ROUTE");
ROUTE2690.fromField = "fraction_changed";
ROUTE2690.fromNode = "RunTimer";
ROUTE2690.toField = "set_fraction";
ROUTE2690.toNode = "Run_whole_body_RotationInterpolator_Run";
Group2644.children[45] = ROUTE2690;

let ROUTE2691 = browser.currentScene.createNode("ROUTE");
ROUTE2691.fromField = "fraction_changed";
ROUTE2691.fromNode = "RunTimer";
ROUTE2691.toField = "set_fraction";
ROUTE2691.toNode = "Run_whole_body_TranslationInterpolator_Run";
Group2644.children[46] = ROUTE2691;

let ROUTE2692 = browser.currentScene.createNode("ROUTE");
ROUTE2692.fromField = "fraction_changed";
ROUTE2692.fromNode = "RunTimer";
ROUTE2692.toField = "set_fraction";
ROUTE2692.toNode = "Run_l_sternoclavicular_RollInterpolator";
Group2644.children[47] = ROUTE2692;

let ROUTE2693 = browser.currentScene.createNode("ROUTE");
ROUTE2693.fromField = "fraction_changed";
ROUTE2693.fromNode = "RunTimer";
ROUTE2693.toField = "set_fraction";
ROUTE2693.toNode = "Run_l_acromioclavicular_RollInterpolator";
Group2644.children[48] = ROUTE2693;

let ROUTE2694 = browser.currentScene.createNode("ROUTE");
ROUTE2694.fromField = "fraction_changed";
ROUTE2694.fromNode = "RunTimer";
ROUTE2694.toField = "set_fraction";
ROUTE2694.toNode = "Run_r_sternoclavicular_RollInterpolator";
Group2644.children[49] = ROUTE2694;

let ROUTE2695 = browser.currentScene.createNode("ROUTE");
ROUTE2695.fromField = "fraction_changed";
ROUTE2695.fromNode = "RunTimer";
ROUTE2695.toField = "set_fraction";
ROUTE2695.toNode = "Run_r_acromioclavicular_RollInterpolator";
Group2644.children[50] = ROUTE2695;

let ROUTE2696 = browser.currentScene.createNode("ROUTE");
ROUTE2696.fromField = "fraction_changed";
ROUTE2696.fromNode = "RunTimer";
ROUTE2696.toField = "set_fraction";
ROUTE2696.toNode = "Run_r_metatarsal_PitchInterpolator";
Group2644.children[51] = ROUTE2696;

let ROUTE2697 = browser.currentScene.createNode("ROUTE");
ROUTE2697.fromField = "fraction_changed";
ROUTE2697.fromNode = "RunTimer";
ROUTE2697.toField = "set_fraction";
ROUTE2697.toNode = "Run_sacroiliac_YawInterpolator";
Group2644.children[52] = ROUTE2697;

let ROUTE2698 = browser.currentScene.createNode("ROUTE");
ROUTE2698.fromField = "fraction_changed";
ROUTE2698.fromNode = "RunTimer";
ROUTE2698.toField = "set_fraction";
ROUTE2698.toNode = "Run_vl5_YawInterpolator";
Group2644.children[53] = ROUTE2698;

let ROUTE2699 = browser.currentScene.createNode("ROUTE");
ROUTE2699.fromField = "fraction_changed";
ROUTE2699.fromNode = "RunTimer";
ROUTE2699.toField = "set_fraction";
ROUTE2699.toNode = "Run_vc6_YawInterpolator";
Group2644.children[54] = ROUTE2699;

let ROUTE2700 = browser.currentScene.createNode("ROUTE");
ROUTE2700.fromField = "fraction_changed";
ROUTE2700.fromNode = "RunTimer";
ROUTE2700.toField = "set_fraction";
ROUTE2700.toNode = "Run_l_thumb1_PitchInterpolator";
Group2644.children[55] = ROUTE2700;

let ROUTE2701 = browser.currentScene.createNode("ROUTE");
ROUTE2701.fromField = "fraction_changed";
ROUTE2701.fromNode = "RunTimer";
ROUTE2701.toField = "set_fraction";
ROUTE2701.toNode = "Run_r_thumb1_PitchInterpolator";
Group2644.children[56] = ROUTE2701;

let ROUTE2702 = browser.currentScene.createNode("ROUTE");
ROUTE2702.fromField = "value_changed";
ROUTE2702.fromNode = "Run_r_ankle_RotationInterpolator_Run";
ROUTE2702.toField = "rotation";
ROUTE2702.toNode = "hanim_r_ankle";
Group2644.children[57] = ROUTE2702;

let ROUTE2703 = browser.currentScene.createNode("ROUTE");
ROUTE2703.fromField = "value_changed";
ROUTE2703.fromNode = "Run_r_knee_RotationInterpolator_Run";
ROUTE2703.toField = "rotation";
ROUTE2703.toNode = "hanim_r_knee";
Group2644.children[58] = ROUTE2703;

let ROUTE2704 = browser.currentScene.createNode("ROUTE");
ROUTE2704.fromField = "value_changed";
ROUTE2704.fromNode = "Run_r_hip_RotationInterpolator_Run";
ROUTE2704.toField = "rotation";
ROUTE2704.toNode = "hanim_r_hip";
Group2644.children[59] = ROUTE2704;

let ROUTE2705 = browser.currentScene.createNode("ROUTE");
ROUTE2705.fromField = "value_changed";
ROUTE2705.fromNode = "Run_l_ankle_RotationInterpolator_Run";
ROUTE2705.toField = "rotation";
ROUTE2705.toNode = "hanim_l_ankle";
Group2644.children[60] = ROUTE2705;

let ROUTE2706 = browser.currentScene.createNode("ROUTE");
ROUTE2706.fromField = "value_changed";
ROUTE2706.fromNode = "Run_l_knee_RotationInterpolator_Run";
ROUTE2706.toField = "rotation";
ROUTE2706.toNode = "hanim_l_knee";
Group2644.children[61] = ROUTE2706;

let ROUTE2707 = browser.currentScene.createNode("ROUTE");
ROUTE2707.fromField = "value_changed";
ROUTE2707.fromNode = "Run_l_hip_RotationInterpolator_Run";
ROUTE2707.toField = "rotation";
ROUTE2707.toNode = "hanim_l_hip";
Group2644.children[62] = ROUTE2707;

let ROUTE2708 = browser.currentScene.createNode("ROUTE");
ROUTE2708.fromField = "value_changed";
ROUTE2708.fromNode = "Run_r_wrist_RotationInterpolator_Run";
ROUTE2708.toField = "rotation";
ROUTE2708.toNode = "hanim_r_wrist";
Group2644.children[63] = ROUTE2708;

let ROUTE2709 = browser.currentScene.createNode("ROUTE");
ROUTE2709.fromField = "value_changed";
ROUTE2709.fromNode = "Run_r_elbow_RotationInterpolator_Run";
ROUTE2709.toField = "rotation";
ROUTE2709.toNode = "hanim_r_elbow";
Group2644.children[64] = ROUTE2709;

let ROUTE2710 = browser.currentScene.createNode("ROUTE");
ROUTE2710.fromField = "value_changed";
ROUTE2710.fromNode = "Run_r_shoulder_RotationInterpolator_Run";
ROUTE2710.toField = "rotation";
ROUTE2710.toNode = "hanim_r_shoulder";
Group2644.children[65] = ROUTE2710;

let ROUTE2711 = browser.currentScene.createNode("ROUTE");
ROUTE2711.fromField = "value_changed";
ROUTE2711.fromNode = "Run_l_wrist_RotationInterpolator_Run";
ROUTE2711.toField = "rotation";
ROUTE2711.toNode = "hanim_l_wrist";
Group2644.children[66] = ROUTE2711;

let ROUTE2712 = browser.currentScene.createNode("ROUTE");
ROUTE2712.fromField = "value_changed";
ROUTE2712.fromNode = "Run_l_elbow_RotationInterpolator_Run";
ROUTE2712.toField = "rotation";
ROUTE2712.toNode = "hanim_l_elbow";
Group2644.children[67] = ROUTE2712;

let ROUTE2713 = browser.currentScene.createNode("ROUTE");
ROUTE2713.fromField = "value_changed";
ROUTE2713.fromNode = "Run_l_shoulder_RotationInterpolator_Run";
ROUTE2713.toField = "rotation";
ROUTE2713.toNode = "hanim_l_shoulder";
Group2644.children[68] = ROUTE2713;

let ROUTE2714 = browser.currentScene.createNode("ROUTE");
ROUTE2714.fromField = "value_changed";
ROUTE2714.fromNode = "Run_lower_body_RotationInterpolator_Run";
ROUTE2714.toField = "rotation";
ROUTE2714.toNode = "hanim_sacroiliac";
Group2644.children[69] = ROUTE2714;

let ROUTE2715 = browser.currentScene.createNode("ROUTE");
ROUTE2715.fromField = "value_changed";
ROUTE2715.fromNode = "Run_head_RotationInterpolator_Run";
ROUTE2715.toField = "rotation";
ROUTE2715.toNode = "hanim_skullbase";
Group2644.children[70] = ROUTE2715;

let ROUTE2716 = browser.currentScene.createNode("ROUTE");
ROUTE2716.fromField = "value_changed";
ROUTE2716.fromNode = "Run_neck_RotationInterpolator_Run";
ROUTE2716.toField = "rotation";
ROUTE2716.toNode = "hanim_vc4";
Group2644.children[71] = ROUTE2716;

let ROUTE2717 = browser.currentScene.createNode("ROUTE");
ROUTE2717.fromField = "value_changed";
ROUTE2717.fromNode = "Run_upper_body_RotationInterpolator_Run";
ROUTE2717.toField = "rotation";
ROUTE2717.toNode = "hanim_vl1";
Group2644.children[72] = ROUTE2717;

let ROUTE2718 = browser.currentScene.createNode("ROUTE");
ROUTE2718.fromField = "value_changed";
ROUTE2718.fromNode = "Run_whole_body_RotationInterpolator_Run";
ROUTE2718.toField = "rotation";
ROUTE2718.toNode = "hanim_humanoid_root";
Group2644.children[73] = ROUTE2718;

let ROUTE2719 = browser.currentScene.createNode("ROUTE");
ROUTE2719.fromField = "value_changed";
ROUTE2719.fromNode = "Run_whole_body_TranslationInterpolator_Run";
ROUTE2719.toField = "translation";
ROUTE2719.toNode = "hanim_humanoid_root";
Group2644.children[74] = ROUTE2719;

let ROUTE2720 = browser.currentScene.createNode("ROUTE");
ROUTE2720.fromField = "value_changed";
ROUTE2720.fromNode = "Run_l_sternoclavicular_RollInterpolator";
ROUTE2720.toField = "rotation";
ROUTE2720.toNode = "hanim_l_sternoclavicular";
Group2644.children[75] = ROUTE2720;

let ROUTE2721 = browser.currentScene.createNode("ROUTE");
ROUTE2721.fromField = "value_changed";
ROUTE2721.fromNode = "Run_l_acromioclavicular_RollInterpolator";
ROUTE2721.toField = "rotation";
ROUTE2721.toNode = "hanim_l_acromioclavicular";
Group2644.children[76] = ROUTE2721;

let ROUTE2722 = browser.currentScene.createNode("ROUTE");
ROUTE2722.fromField = "value_changed";
ROUTE2722.fromNode = "Run_r_sternoclavicular_RollInterpolator";
ROUTE2722.toField = "rotation";
ROUTE2722.toNode = "hanim_r_sternoclavicular";
Group2644.children[77] = ROUTE2722;

let ROUTE2723 = browser.currentScene.createNode("ROUTE");
ROUTE2723.fromField = "value_changed";
ROUTE2723.fromNode = "Run_r_acromioclavicular_RollInterpolator";
ROUTE2723.toField = "rotation";
ROUTE2723.toNode = "hanim_r_acromioclavicular";
Group2644.children[78] = ROUTE2723;

let ROUTE2724 = browser.currentScene.createNode("ROUTE");
ROUTE2724.fromField = "value_changed";
ROUTE2724.fromNode = "Run_r_metatarsal_PitchInterpolator";
ROUTE2724.toField = "rotation";
ROUTE2724.toNode = "hanim_l_metatarsal";
Group2644.children[79] = ROUTE2724;

let ROUTE2725 = browser.currentScene.createNode("ROUTE");
ROUTE2725.fromField = "value_changed";
ROUTE2725.fromNode = "Run_r_metatarsal_PitchInterpolator";
ROUTE2725.toField = "rotation";
ROUTE2725.toNode = "hanim_r_metatarsal";
Group2644.children[80] = ROUTE2725;

let ROUTE2726 = browser.currentScene.createNode("ROUTE");
ROUTE2726.fromField = "value_changed";
ROUTE2726.fromNode = "Run_sacroiliac_YawInterpolator";
ROUTE2726.toField = "rotation";
ROUTE2726.toNode = "hanim_sacroiliac";
Group2644.children[81] = ROUTE2726;

let ROUTE2727 = browser.currentScene.createNode("ROUTE");
ROUTE2727.fromField = "value_changed";
ROUTE2727.fromNode = "Run_vl5_YawInterpolator";
ROUTE2727.toField = "rotation";
ROUTE2727.toNode = "hanim_vl5";
Group2644.children[82] = ROUTE2727;

let ROUTE2728 = browser.currentScene.createNode("ROUTE");
ROUTE2728.fromField = "value_changed";
ROUTE2728.fromNode = "Run_vc6_YawInterpolator";
ROUTE2728.toField = "rotation";
ROUTE2728.toNode = "hanim_vc6";
Group2644.children[83] = ROUTE2728;

let ROUTE2729 = browser.currentScene.createNode("ROUTE");
ROUTE2729.fromField = "value_changed";
ROUTE2729.fromNode = "Run_l_thumb1_PitchInterpolator";
ROUTE2729.toField = "rotation";
ROUTE2729.toNode = "hanim_l_thumb1";
Group2644.children[84] = ROUTE2729;

let ROUTE2730 = browser.currentScene.createNode("ROUTE");
ROUTE2730.fromField = "value_changed";
ROUTE2730.fromNode = "Run_r_thumb1_PitchInterpolator";
ROUTE2730.toField = "rotation";
ROUTE2730.toNode = "hanim_r_thumb1";
Group2644.children[85] = ROUTE2730;

browser.currentScene.children[19] = Group2644;

let Group2731 = browser.currentScene.createNode("Group");
Group2731.DEF = "JumpAnimation";
let TimeSensor2732 = browser.currentScene.createNode("TimeSensor");
TimeSensor2732.DEF = "JumpTimer";
TimeSensor2732.cycleInterval = 3.73;
TimeSensor2732.loop = True;
Group2731.children = new MFNode();

Group2731.children[0] = TimeSensor2732;

let OrientationInterpolator2733 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2733.DEF = "Jump_r_metatarsal_PitchInterpolator";
OrientationInterpolator2733.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2733.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2731.children[1] = OrientationInterpolator2733;

let OrientationInterpolator2734 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2734.DEF = "Jump_r_ankle_RotationInterpolator";
OrientationInterpolator2734.key = new MFFloat(new float[0,0.1,0.15,0.25,0.28,0.32,0.35,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator2734.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.6735,-1,0,0,0.6735,-1,0,0,0.3527,-1,0,0,0.3038,-1,0,0,0.07964,1,0,0,1.3,1,0,0,0.6509,1,0,0,0.3001,-1,0,0,0.2087,-1,0,0,0.3756,-1,0,0,0.3279,-1,0,0,0.1193,0,0,1,0]);
Group2731.children[2] = OrientationInterpolator2734;

let OrientationInterpolator2735 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2735.DEF = "Jump_r_knee_RotationInterpolator";
OrientationInterpolator2735.key = new MFFloat(new float[0,0.2,0.25,0.3,0.64,0.76,0.88,1]);
OrientationInterpolator2735.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,2.5,1,0,0,1.7,0,0,1,0,1,0,0,0.9507,1,0,0,0.5845,1,0,0,0.9054,0,0,1,0]);
Group2731.children[3] = OrientationInterpolator2735;

let OrientationInterpolator2736 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2736.DEF = "Jump_r_hip_RotationInterpolator";
OrientationInterpolator2736.key = new MFFloat(new float[0,0.18,0.24,0.26,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator2736.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.63,-1,0,0,1.7,-1,0,0,1.55,-1,0,0,0.8943,-1,0,0,0.3698,0,0,1,0,-1,0,0,0.4963,-1,0,0,0.3829,-1,0,0,0.5169,0,0,1,0]);
Group2731.children[4] = OrientationInterpolator2736;

let OrientationInterpolator2737 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2737.DEF = "Jump_l_ankle_RotationInterpolator";
OrientationInterpolator2737.key = new MFFloat(new float[0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator2737.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.625,-1,0,0,0.625,-1,0,0,0.3364,-1,0,0,0.2742,-1,0,0,0.05078,1,0,0,0.2833,1,0,0,0.6667,1,0,0,0.2833,-1,0,0,0.2108,-1,0,0,0.375,-1,0,0,0.3146,-1,0,0,0.1174,0,0,1,0]);
Group2731.children[5] = OrientationInterpolator2737;

let OrientationInterpolator2738 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2738.DEF = "Jump_l_knee_RotationInterpolator";
OrientationInterpolator2738.key = new MFFloat(new float[0,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator2738.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,2.047,1,0,0,2.047,0,0,1,0,1,0,0,1.566,1,0,0,0.5913,1,0,0,0.9235,0,0,1,0]);
Group2731.children[6] = OrientationInterpolator2738;

let OrientationInterpolator2739 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2739.DEF = "Jump_l_hip_RotationInterpolator";
OrientationInterpolator2739.key = new MFFloat(new float[0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator2739.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,4.349,1,0,0,4.349,1,0,0,4.615,-1,0,0,0.9136,-1,0,0,0.3614,0,0,1,0,-1,0,0,0.7869,-1,0,0,0.3918,-1,0,0,0.5433,0,0,1,0]);
Group2731.children[7] = OrientationInterpolator2739;

let OrientationInterpolator2740 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2740.DEF = "Jump_lower_body_RotationInterpolator";
OrientationInterpolator2740.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator2740.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.1892,1,0,0,0.1892,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2731.children[8] = OrientationInterpolator2740;

let OrientationInterpolator2741 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2741.DEF = "Jump_r_wrist_RotationInterpolator";
OrientationInterpolator2741.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator2741.keyValue = new MFRotation(new float[0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0]);
Group2731.children[9] = OrientationInterpolator2741;

let OrientationInterpolator2742 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2742.DEF = "Jump_r_elbow_RotationInterpolator";
OrientationInterpolator2742.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator2742.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0]);
Group2731.children[10] = OrientationInterpolator2742;

let OrientationInterpolator2743 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2743.DEF = "Jump_r_shoulder_RotationInterpolator";
OrientationInterpolator2743.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator2743.keyValue = new MFRotation(new float[0,0,1,0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0]);
Group2731.children[11] = OrientationInterpolator2743;

let OrientationInterpolator2744 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2744.DEF = "Jump_l_wrist_RotationInterpolator";
OrientationInterpolator2744.key = new MFFloat(new float[0,0.48,0.52,0.64,0.76,0.88,1]);
OrientationInterpolator2744.keyValue = new MFRotation(new float[0,0,1,0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0,-1,0,0.655922,-0.00050618,-0.999999,0.0012782,1.28397,0,0,1,0]);
Group2731.children[12] = OrientationInterpolator2744;

let OrientationInterpolator2745 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2745.DEF = "Jump_l_elbow_RotationInterpolator";
OrientationInterpolator2745.key = new MFFloat(new float[0,0.28,0.32,0.58,0.72,1]);
OrientationInterpolator2745.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.13,-1,0,0,1.7,-1,0,0,1.7,-1,0,0,0.4,0,0,1,0]);
Group2731.children[13] = OrientationInterpolator2745;

let OrientationInterpolator2746 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2746.DEF = "Jump_l_shoulder_RotationInterpolator";
OrientationInterpolator2746.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator2746.keyValue = new MFRotation(new float[0,0,1,0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1,0.0004113,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0,0,1,0]);
Group2731.children[14] = OrientationInterpolator2746;

let OrientationInterpolator2747 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2747.DEF = "Jump_head_RotationInterpolator";
OrientationInterpolator2747.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator2747.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5989,-1,0,0,0.5989,-1,0,0,0.3216,1,0,0,0.06503,0,0,1,0]);
Group2731.children[15] = OrientationInterpolator2747;

let OrientationInterpolator2748 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2748.DEF = "Jump_neck_RotationInterpolator";
OrientationInterpolator2748.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator2748.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.1942,-1,0,0,0.1942,0,0,1,0,1,0,0,0.2284,0,0,1,0]);
Group2731.children[16] = OrientationInterpolator2748;

let OrientationInterpolator2749 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2749.DEF = "Jump_upper_body_RotationInterpolator";
OrientationInterpolator2749.key = new MFFloat(new float[0,0.22,0.28,0.34,0.71,0.88,1]);
OrientationInterpolator2749.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.05,1,0,0,1.051,-1,0,0,0.257,1,0,0,0.2171,1,0,0,0.3465,0,0,1,0]);
Group2731.children[17] = OrientationInterpolator2749;

let OrientationInterpolator2750 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2750.DEF = "Jump_whole_body_RotationInterpolator";
OrientationInterpolator2750.key = new MFFloat(new float[0,0.28,0.32,0.48,0.64,0.76,1]);
OrientationInterpolator2750.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.3273,1,0,0,0.3273,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2731.children[18] = OrientationInterpolator2750;

let PositionInterpolator2751 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator2751.DEF = "Jump_whole_body_TranslationInterpolator";
PositionInterpolator2751.key = new MFFloat(new float[0,0.04,0.07,0.11,0.15,0.19,0.22,0.25,0.27,0.31,0.33,0.35,0.38,0.53,0.544,0.76,0.8,0.84,0.88,0.92,0.96,1]);
PositionInterpolator2751.keyValue = new MFVec3f(new float[0,0,0,0,-0.01264,-0.01289,0,-0.04712,-0.03738,-0.0003345,-0.1049,-0.05353,-0.0005712,-0.1892,-0.06561,-0.0008233,-0.286,-0.06276,-0.0009591,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.25,-0.1499,-0.0008616,-0.05,-0.06358,-0.0005128,0.15,-0.05488,0.0004779,0.55,0.02732,0.0001728,1.385,0.006873,0.00017,1.395,0.0069,0,0.35,0.02148,0,-0.01299,-0.01057,0,-0.06932,-0.01064,0.0001365,-0.1037,-0.005059,0.0001279,-0.07198,-0.007596,0.000141,-0.01626,-0.004935,0,0,0]);
Group2731.children[19] = PositionInterpolator2751;

let OrientationInterpolator2752 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2752.DEF = "Jump_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2752.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2752.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group2731.children[20] = OrientationInterpolator2752;

let OrientationInterpolator2753 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2753.DEF = "Jump_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2753.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2753.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2731.children[21] = OrientationInterpolator2753;

let OrientationInterpolator2754 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2754.DEF = "Jump_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2754.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2754.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group2731.children[22] = OrientationInterpolator2754;

let OrientationInterpolator2755 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2755.DEF = "Jump_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2755.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2755.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2731.children[23] = OrientationInterpolator2755;

let OrientationInterpolator2756 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2756.DEF = "Jump_sacroiliac_YawInterpolator";
OrientationInterpolator2756.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2756.keyValue = new MFRotation(new float[0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0]);
Group2731.children[24] = OrientationInterpolator2756;

let OrientationInterpolator2757 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2757.DEF = "Jump_vl5_YawInterpolator";
OrientationInterpolator2757.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2757.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,-0.1,0,1,0,0,0,1,0,0,1,0,0,0.6,0,1,0,0.1,0,1,0,0]);
Group2731.children[25] = OrientationInterpolator2757;

let OrientationInterpolator2758 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2758.DEF = "Jump_vc6_YawInterpolator";
OrientationInterpolator2758.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2758.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0.8,0,1,0,0,0,1,0,0,-1,0,0,0.6,0,-1,0,0.8,0,1,0,0]);
Group2731.children[26] = OrientationInterpolator2758;

let OrientationInterpolator2759 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2759.DEF = "Jump_l_thumb1_PitchInterpolator";
OrientationInterpolator2759.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2759.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2731.children[27] = OrientationInterpolator2759;

let OrientationInterpolator2760 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2760.DEF = "Jump_r_thumb1_PitchInterpolator";
OrientationInterpolator2760.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2760.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2731.children[28] = OrientationInterpolator2760;

let ROUTE2761 = browser.currentScene.createNode("ROUTE");
ROUTE2761.fromField = "fraction_changed";
ROUTE2761.fromNode = "JumpTimer";
ROUTE2761.toField = "set_fraction";
ROUTE2761.toNode = "Jump_r_ankle_RotationInterpolator";
Group2731.children[29] = ROUTE2761;

let ROUTE2762 = browser.currentScene.createNode("ROUTE");
ROUTE2762.fromField = "fraction_changed";
ROUTE2762.fromNode = "JumpTimer";
ROUTE2762.toField = "set_fraction";
ROUTE2762.toNode = "Jump_r_knee_RotationInterpolator";
Group2731.children[30] = ROUTE2762;

let ROUTE2763 = browser.currentScene.createNode("ROUTE");
ROUTE2763.fromField = "fraction_changed";
ROUTE2763.fromNode = "JumpTimer";
ROUTE2763.toField = "set_fraction";
ROUTE2763.toNode = "Jump_r_hip_RotationInterpolator";
Group2731.children[31] = ROUTE2763;

let ROUTE2764 = browser.currentScene.createNode("ROUTE");
ROUTE2764.fromField = "fraction_changed";
ROUTE2764.fromNode = "JumpTimer";
ROUTE2764.toField = "set_fraction";
ROUTE2764.toNode = "Jump_l_ankle_RotationInterpolator";
Group2731.children[32] = ROUTE2764;

let ROUTE2765 = browser.currentScene.createNode("ROUTE");
ROUTE2765.fromField = "fraction_changed";
ROUTE2765.fromNode = "JumpTimer";
ROUTE2765.toField = "set_fraction";
ROUTE2765.toNode = "Jump_l_knee_RotationInterpolator";
Group2731.children[33] = ROUTE2765;

let ROUTE2766 = browser.currentScene.createNode("ROUTE");
ROUTE2766.fromField = "fraction_changed";
ROUTE2766.fromNode = "JumpTimer";
ROUTE2766.toField = "set_fraction";
ROUTE2766.toNode = "Jump_l_hip_RotationInterpolator";
Group2731.children[34] = ROUTE2766;

let ROUTE2767 = browser.currentScene.createNode("ROUTE");
ROUTE2767.fromField = "fraction_changed";
ROUTE2767.fromNode = "JumpTimer";
ROUTE2767.toField = "set_fraction";
ROUTE2767.toNode = "Jump_lower_body_RotationInterpolator";
Group2731.children[35] = ROUTE2767;

let ROUTE2768 = browser.currentScene.createNode("ROUTE");
ROUTE2768.fromField = "fraction_changed";
ROUTE2768.fromNode = "JumpTimer";
ROUTE2768.toField = "set_fraction";
ROUTE2768.toNode = "Jump_r_wrist_RotationInterpolator";
Group2731.children[36] = ROUTE2768;

let ROUTE2769 = browser.currentScene.createNode("ROUTE");
ROUTE2769.fromField = "fraction_changed";
ROUTE2769.fromNode = "JumpTimer";
ROUTE2769.toField = "set_fraction";
ROUTE2769.toNode = "Jump_r_elbow_RotationInterpolator";
Group2731.children[37] = ROUTE2769;

let ROUTE2770 = browser.currentScene.createNode("ROUTE");
ROUTE2770.fromField = "fraction_changed";
ROUTE2770.fromNode = "JumpTimer";
ROUTE2770.toField = "set_fraction";
ROUTE2770.toNode = "Jump_r_shoulder_RotationInterpolator";
Group2731.children[38] = ROUTE2770;

let ROUTE2771 = browser.currentScene.createNode("ROUTE");
ROUTE2771.fromField = "fraction_changed";
ROUTE2771.fromNode = "JumpTimer";
ROUTE2771.toField = "set_fraction";
ROUTE2771.toNode = "Jump_l_wrist_RotationInterpolator";
Group2731.children[39] = ROUTE2771;

let ROUTE2772 = browser.currentScene.createNode("ROUTE");
ROUTE2772.fromField = "fraction_changed";
ROUTE2772.fromNode = "JumpTimer";
ROUTE2772.toField = "set_fraction";
ROUTE2772.toNode = "Jump_l_elbow_RotationInterpolator";
Group2731.children[40] = ROUTE2772;

let ROUTE2773 = browser.currentScene.createNode("ROUTE");
ROUTE2773.fromField = "fraction_changed";
ROUTE2773.fromNode = "JumpTimer";
ROUTE2773.toField = "set_fraction";
ROUTE2773.toNode = "Jump_l_shoulder_RotationInterpolator";
Group2731.children[41] = ROUTE2773;

let ROUTE2774 = browser.currentScene.createNode("ROUTE");
ROUTE2774.fromField = "fraction_changed";
ROUTE2774.fromNode = "JumpTimer";
ROUTE2774.toField = "set_fraction";
ROUTE2774.toNode = "Jump_head_RotationInterpolator";
Group2731.children[42] = ROUTE2774;

let ROUTE2775 = browser.currentScene.createNode("ROUTE");
ROUTE2775.fromField = "fraction_changed";
ROUTE2775.fromNode = "JumpTimer";
ROUTE2775.toField = "set_fraction";
ROUTE2775.toNode = "Jump_neck_RotationInterpolator";
Group2731.children[43] = ROUTE2775;

let ROUTE2776 = browser.currentScene.createNode("ROUTE");
ROUTE2776.fromField = "fraction_changed";
ROUTE2776.fromNode = "JumpTimer";
ROUTE2776.toField = "set_fraction";
ROUTE2776.toNode = "Jump_upper_body_RotationInterpolator";
Group2731.children[44] = ROUTE2776;

let ROUTE2777 = browser.currentScene.createNode("ROUTE");
ROUTE2777.fromField = "fraction_changed";
ROUTE2777.fromNode = "JumpTimer";
ROUTE2777.toField = "set_fraction";
ROUTE2777.toNode = "Jump_whole_body_RotationInterpolator";
Group2731.children[45] = ROUTE2777;

let ROUTE2778 = browser.currentScene.createNode("ROUTE");
ROUTE2778.fromField = "fraction_changed";
ROUTE2778.fromNode = "JumpTimer";
ROUTE2778.toField = "set_fraction";
ROUTE2778.toNode = "Jump_whole_body_TranslationInterpolator";
Group2731.children[46] = ROUTE2778;

let ROUTE2779 = browser.currentScene.createNode("ROUTE");
ROUTE2779.fromField = "fraction_changed";
ROUTE2779.fromNode = "JumpTimer";
ROUTE2779.toField = "set_fraction";
ROUTE2779.toNode = "Jump_l_sternoclavicular_RollInterpolator";
Group2731.children[47] = ROUTE2779;

let ROUTE2780 = browser.currentScene.createNode("ROUTE");
ROUTE2780.fromField = "fraction_changed";
ROUTE2780.fromNode = "JumpTimer";
ROUTE2780.toField = "set_fraction";
ROUTE2780.toNode = "Jump_l_acromioclavicular_RollInterpolator";
Group2731.children[48] = ROUTE2780;

let ROUTE2781 = browser.currentScene.createNode("ROUTE");
ROUTE2781.fromField = "fraction_changed";
ROUTE2781.fromNode = "JumpTimer";
ROUTE2781.toField = "set_fraction";
ROUTE2781.toNode = "Jump_r_sternoclavicular_RollInterpolator";
Group2731.children[49] = ROUTE2781;

let ROUTE2782 = browser.currentScene.createNode("ROUTE");
ROUTE2782.fromField = "fraction_changed";
ROUTE2782.fromNode = "JumpTimer";
ROUTE2782.toField = "set_fraction";
ROUTE2782.toNode = "Jump_r_acromioclavicular_RollInterpolator";
Group2731.children[50] = ROUTE2782;

let ROUTE2783 = browser.currentScene.createNode("ROUTE");
ROUTE2783.fromField = "fraction_changed";
ROUTE2783.fromNode = "JumpTimer";
ROUTE2783.toField = "set_fraction";
ROUTE2783.toNode = "Jump_r_metatarsal_PitchInterpolator";
Group2731.children[51] = ROUTE2783;

let ROUTE2784 = browser.currentScene.createNode("ROUTE");
ROUTE2784.fromField = "fraction_changed";
ROUTE2784.fromNode = "JumpTimer";
ROUTE2784.toField = "set_fraction";
ROUTE2784.toNode = "Jump_sacroiliac_YawInterpolator";
Group2731.children[52] = ROUTE2784;

let ROUTE2785 = browser.currentScene.createNode("ROUTE");
ROUTE2785.fromField = "fraction_changed";
ROUTE2785.fromNode = "JumpTimer";
ROUTE2785.toField = "set_fraction";
ROUTE2785.toNode = "Jump_vl5_YawInterpolator";
Group2731.children[53] = ROUTE2785;

let ROUTE2786 = browser.currentScene.createNode("ROUTE");
ROUTE2786.fromField = "fraction_changed";
ROUTE2786.fromNode = "JumpTimer";
ROUTE2786.toField = "set_fraction";
ROUTE2786.toNode = "Jump_vc6_YawInterpolator";
Group2731.children[54] = ROUTE2786;

let ROUTE2787 = browser.currentScene.createNode("ROUTE");
ROUTE2787.fromField = "fraction_changed";
ROUTE2787.fromNode = "JumpTimer";
ROUTE2787.toField = "set_fraction";
ROUTE2787.toNode = "Jump_l_thumb1_PitchInterpolator";
Group2731.children[55] = ROUTE2787;

let ROUTE2788 = browser.currentScene.createNode("ROUTE");
ROUTE2788.fromField = "fraction_changed";
ROUTE2788.fromNode = "JumpTimer";
ROUTE2788.toField = "set_fraction";
ROUTE2788.toNode = "Jump_r_thumb1_PitchInterpolator";
Group2731.children[56] = ROUTE2788;

let ROUTE2789 = browser.currentScene.createNode("ROUTE");
ROUTE2789.fromField = "value_changed";
ROUTE2789.fromNode = "Jump_r_ankle_RotationInterpolator";
ROUTE2789.toField = "rotation";
ROUTE2789.toNode = "hanim_r_ankle";
Group2731.children[57] = ROUTE2789;

let ROUTE2790 = browser.currentScene.createNode("ROUTE");
ROUTE2790.fromField = "value_changed";
ROUTE2790.fromNode = "Jump_r_knee_RotationInterpolator";
ROUTE2790.toField = "rotation";
ROUTE2790.toNode = "hanim_r_knee";
Group2731.children[58] = ROUTE2790;

let ROUTE2791 = browser.currentScene.createNode("ROUTE");
ROUTE2791.fromField = "value_changed";
ROUTE2791.fromNode = "Jump_r_hip_RotationInterpolator";
ROUTE2791.toField = "rotation";
ROUTE2791.toNode = "hanim_r_hip";
Group2731.children[59] = ROUTE2791;

let ROUTE2792 = browser.currentScene.createNode("ROUTE");
ROUTE2792.fromField = "value_changed";
ROUTE2792.fromNode = "Jump_l_ankle_RotationInterpolator";
ROUTE2792.toField = "rotation";
ROUTE2792.toNode = "hanim_l_ankle";
Group2731.children[60] = ROUTE2792;

let ROUTE2793 = browser.currentScene.createNode("ROUTE");
ROUTE2793.fromField = "value_changed";
ROUTE2793.fromNode = "Jump_l_knee_RotationInterpolator";
ROUTE2793.toField = "rotation";
ROUTE2793.toNode = "hanim_l_knee";
Group2731.children[61] = ROUTE2793;

let ROUTE2794 = browser.currentScene.createNode("ROUTE");
ROUTE2794.fromField = "value_changed";
ROUTE2794.fromNode = "Jump_l_hip_RotationInterpolator";
ROUTE2794.toField = "rotation";
ROUTE2794.toNode = "hanim_l_hip";
Group2731.children[62] = ROUTE2794;

let ROUTE2795 = browser.currentScene.createNode("ROUTE");
ROUTE2795.fromField = "value_changed";
ROUTE2795.fromNode = "Jump_lower_body_RotationInterpolator";
ROUTE2795.toField = "rotation";
ROUTE2795.toNode = "hanim_sacroiliac";
Group2731.children[63] = ROUTE2795;

let ROUTE2796 = browser.currentScene.createNode("ROUTE");
ROUTE2796.fromField = "value_changed";
ROUTE2796.fromNode = "Jump_r_wrist_RotationInterpolator";
ROUTE2796.toField = "rotation";
ROUTE2796.toNode = "hanim_r_wrist";
Group2731.children[64] = ROUTE2796;

let ROUTE2797 = browser.currentScene.createNode("ROUTE");
ROUTE2797.fromField = "value_changed";
ROUTE2797.fromNode = "Jump_r_elbow_RotationInterpolator";
ROUTE2797.toField = "rotation";
ROUTE2797.toNode = "hanim_r_elbow";
Group2731.children[65] = ROUTE2797;

let ROUTE2798 = browser.currentScene.createNode("ROUTE");
ROUTE2798.fromField = "value_changed";
ROUTE2798.fromNode = "Jump_r_shoulder_RotationInterpolator";
ROUTE2798.toField = "rotation";
ROUTE2798.toNode = "hanim_r_shoulder";
Group2731.children[66] = ROUTE2798;

let ROUTE2799 = browser.currentScene.createNode("ROUTE");
ROUTE2799.fromField = "value_changed";
ROUTE2799.fromNode = "Jump_l_wrist_RotationInterpolator";
ROUTE2799.toField = "rotation";
ROUTE2799.toNode = "hanim_l_wrist";
Group2731.children[67] = ROUTE2799;

let ROUTE2800 = browser.currentScene.createNode("ROUTE");
ROUTE2800.fromField = "value_changed";
ROUTE2800.fromNode = "Jump_l_elbow_RotationInterpolator";
ROUTE2800.toField = "rotation";
ROUTE2800.toNode = "hanim_l_elbow";
Group2731.children[68] = ROUTE2800;

let ROUTE2801 = browser.currentScene.createNode("ROUTE");
ROUTE2801.fromField = "value_changed";
ROUTE2801.fromNode = "Jump_l_shoulder_RotationInterpolator";
ROUTE2801.toField = "rotation";
ROUTE2801.toNode = "hanim_l_shoulder";
Group2731.children[69] = ROUTE2801;

let ROUTE2802 = browser.currentScene.createNode("ROUTE");
ROUTE2802.fromField = "value_changed";
ROUTE2802.fromNode = "Jump_head_RotationInterpolator";
ROUTE2802.toField = "rotation";
ROUTE2802.toNode = "hanim_skullbase";
Group2731.children[70] = ROUTE2802;

let ROUTE2803 = browser.currentScene.createNode("ROUTE");
ROUTE2803.fromField = "value_changed";
ROUTE2803.fromNode = "Jump_neck_RotationInterpolator";
ROUTE2803.toField = "rotation";
ROUTE2803.toNode = "hanim_vc4";
Group2731.children[71] = ROUTE2803;

let ROUTE2804 = browser.currentScene.createNode("ROUTE");
ROUTE2804.fromField = "value_changed";
ROUTE2804.fromNode = "Jump_upper_body_RotationInterpolator";
ROUTE2804.toField = "rotation";
ROUTE2804.toNode = "hanim_vl1";
Group2731.children[72] = ROUTE2804;

let ROUTE2805 = browser.currentScene.createNode("ROUTE");
ROUTE2805.fromField = "value_changed";
ROUTE2805.fromNode = "Jump_whole_body_RotationInterpolator";
ROUTE2805.toField = "rotation";
ROUTE2805.toNode = "hanim_humanoid_root";
Group2731.children[73] = ROUTE2805;

let ROUTE2806 = browser.currentScene.createNode("ROUTE");
ROUTE2806.fromField = "value_changed";
ROUTE2806.fromNode = "Jump_whole_body_TranslationInterpolator";
ROUTE2806.toField = "translation";
ROUTE2806.toNode = "hanim_humanoid_root";
Group2731.children[74] = ROUTE2806;

let ROUTE2807 = browser.currentScene.createNode("ROUTE");
ROUTE2807.fromField = "value_changed";
ROUTE2807.fromNode = "Jump_l_sternoclavicular_RollInterpolator";
ROUTE2807.toField = "rotation";
ROUTE2807.toNode = "hanim_l_sternoclavicular";
Group2731.children[75] = ROUTE2807;

let ROUTE2808 = browser.currentScene.createNode("ROUTE");
ROUTE2808.fromField = "value_changed";
ROUTE2808.fromNode = "Jump_l_acromioclavicular_RollInterpolator";
ROUTE2808.toField = "rotation";
ROUTE2808.toNode = "hanim_l_acromioclavicular";
Group2731.children[76] = ROUTE2808;

let ROUTE2809 = browser.currentScene.createNode("ROUTE");
ROUTE2809.fromField = "value_changed";
ROUTE2809.fromNode = "Jump_r_sternoclavicular_RollInterpolator";
ROUTE2809.toField = "rotation";
ROUTE2809.toNode = "hanim_r_sternoclavicular";
Group2731.children[77] = ROUTE2809;

let ROUTE2810 = browser.currentScene.createNode("ROUTE");
ROUTE2810.fromField = "value_changed";
ROUTE2810.fromNode = "Jump_r_acromioclavicular_RollInterpolator";
ROUTE2810.toField = "rotation";
ROUTE2810.toNode = "hanim_r_acromioclavicular";
Group2731.children[78] = ROUTE2810;

let ROUTE2811 = browser.currentScene.createNode("ROUTE");
ROUTE2811.fromField = "value_changed";
ROUTE2811.fromNode = "Jump_r_metatarsal_PitchInterpolator";
ROUTE2811.toField = "rotation";
ROUTE2811.toNode = "hanim_l_metatarsal";
Group2731.children[79] = ROUTE2811;

let ROUTE2812 = browser.currentScene.createNode("ROUTE");
ROUTE2812.fromField = "value_changed";
ROUTE2812.fromNode = "Jump_r_metatarsal_PitchInterpolator";
ROUTE2812.toField = "rotation";
ROUTE2812.toNode = "hanim_r_metatarsal";
Group2731.children[80] = ROUTE2812;

let ROUTE2813 = browser.currentScene.createNode("ROUTE");
ROUTE2813.fromField = "value_changed";
ROUTE2813.fromNode = "Jump_sacroiliac_YawInterpolator";
ROUTE2813.toField = "rotation";
ROUTE2813.toNode = "hanim_sacroiliac";
Group2731.children[81] = ROUTE2813;

let ROUTE2814 = browser.currentScene.createNode("ROUTE");
ROUTE2814.fromField = "value_changed";
ROUTE2814.fromNode = "Jump_vl5_YawInterpolator";
ROUTE2814.toField = "rotation";
ROUTE2814.toNode = "hanim_vl5";
Group2731.children[82] = ROUTE2814;

let ROUTE2815 = browser.currentScene.createNode("ROUTE");
ROUTE2815.fromField = "value_changed";
ROUTE2815.fromNode = "Jump_vc6_YawInterpolator";
ROUTE2815.toField = "rotation";
ROUTE2815.toNode = "hanim_vc6";
Group2731.children[83] = ROUTE2815;

let ROUTE2816 = browser.currentScene.createNode("ROUTE");
ROUTE2816.fromField = "value_changed";
ROUTE2816.fromNode = "Jump_l_thumb1_PitchInterpolator";
ROUTE2816.toField = "rotation";
ROUTE2816.toNode = "hanim_l_thumb1";
Group2731.children[84] = ROUTE2816;

let ROUTE2817 = browser.currentScene.createNode("ROUTE");
ROUTE2817.fromField = "value_changed";
ROUTE2817.fromNode = "Jump_r_thumb1_PitchInterpolator";
ROUTE2817.toField = "rotation";
ROUTE2817.toNode = "hanim_r_thumb1";
Group2731.children[85] = ROUTE2817;

browser.currentScene.children[20] = Group2731;

let Group2818 = browser.currentScene.createNode("Group");
Group2818.DEF = "KickAnimation";
let TimeSensor2819 = browser.currentScene.createNode("TimeSensor");
TimeSensor2819.DEF = "KickTimer";
TimeSensor2819.cycleInterval = 3.73;
TimeSensor2819.loop = True;
Group2818.children = new MFNode();

Group2818.children[0] = TimeSensor2819;

let OrientationInterpolator2820 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2820.DEF = "Kick_l_sternoclavicular_RollInterpolator";
OrientationInterpolator2820.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2820.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group2818.children[1] = OrientationInterpolator2820;

let OrientationInterpolator2821 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2821.DEF = "Kick_l_acromioclavicular_RollInterpolator";
OrientationInterpolator2821.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2821.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2818.children[2] = OrientationInterpolator2821;

let OrientationInterpolator2822 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2822.DEF = "Kick_l_shoulder_RollInterpolator";
OrientationInterpolator2822.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2822.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.76,-0.25,0,1,1.76,0,0,1,1.256,0,0,1,0.05,0,0,1,0]);
Group2818.children[3] = OrientationInterpolator2822;

let OrientationInterpolator2823 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2823.DEF = "Kick_l_ForeArm_PitchInterpolator";
OrientationInterpolator2823.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2823.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,-0.55,-1,0.25,0,2.55,1,0,0,0,1,0,0,0,1,0,0,0]);
Group2818.children[4] = OrientationInterpolator2823;

let OrientationInterpolator2824 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2824.DEF = "Kick_l_wrist_RollInterpolator";
OrientationInterpolator2824.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2824.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,1,0,0.55,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2818.children[5] = OrientationInterpolator2824;

let OrientationInterpolator2825 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2825.DEF = "Kick_l_thumb1_PitchInterpolator";
OrientationInterpolator2825.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2825.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2818.children[6] = OrientationInterpolator2825;

let OrientationInterpolator2826 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2826.DEF = "Kick_r_sternoclavicular_RollInterpolator";
OrientationInterpolator2826.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2826.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group2818.children[7] = OrientationInterpolator2826;

let OrientationInterpolator2827 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2827.DEF = "Kick_r_acromioclavicular_RollInterpolator";
OrientationInterpolator2827.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2827.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2818.children[8] = OrientationInterpolator2827;

let OrientationInterpolator2828 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2828.DEF = "Kick_r_shoulder_RollInterpolator";
OrientationInterpolator2828.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2828.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-1.76,0.25,0,1,-1.76,0,0,1,-1.256,0,0,1,-0.05,0,0,1,0]);
Group2818.children[9] = OrientationInterpolator2828;

let OrientationInterpolator2829 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2829.DEF = "Kick_r_ForeArm_PitchInterpolator";
OrientationInterpolator2829.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2829.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,-0.55,1,0.25,0,-2.55,1,0,0,0,1,0,0,0,1,0,0,0]);
Group2818.children[10] = OrientationInterpolator2829;

let OrientationInterpolator2830 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2830.DEF = "Kick_r_wrist_RollInterpolator";
OrientationInterpolator2830.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2830.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,1,0,-0.55,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2818.children[11] = OrientationInterpolator2830;

let OrientationInterpolator2831 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2831.DEF = "Kick_r_thumb1_PitchInterpolator";
OrientationInterpolator2831.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2831.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group2818.children[12] = OrientationInterpolator2831;

let OrientationInterpolator2832 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2832.DEF = "Kick_r_hip_PitchInterpolator";
OrientationInterpolator2832.key = new MFFloat(new float[0,0.2,0.3,0.5,0.6,0.9,1]);
OrientationInterpolator2832.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.9,-1,0,0,1.75,-1,0,0,2.25,-1,0,0,2,1,0,0,0,1,0,0,0]);
Group2818.children[13] = OrientationInterpolator2832;

let OrientationInterpolator2833 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2833.DEF = "Kick_r_knee_PitchInterpolator";
OrientationInterpolator2833.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2833.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.95,1,0,0,1.75,-1,0,0,0.28,1,0,0,0,1,0,0,0]);
Group2818.children[14] = OrientationInterpolator2833;

let OrientationInterpolator2834 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2834.DEF = "Kick_l_hip_PitchInterpolator";
OrientationInterpolator2834.key = new MFFloat(new float[0,0.2,0.3,0.5,0.6,0.9,1]);
OrientationInterpolator2834.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2818.children[15] = OrientationInterpolator2834;

let OrientationInterpolator2835 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2835.DEF = "Kick_l_knee_PitchInterpolator";
OrientationInterpolator2835.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2835.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2818.children[16] = OrientationInterpolator2835;

let OrientationInterpolator2836 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2836.DEF = "Kick_r_ankle_PitchInterpolator";
OrientationInterpolator2836.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2836.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.9,-1,0,0,0.95,1,0,0,0.75,-1,0,0,0.05,1,0,0,0]);
Group2818.children[17] = OrientationInterpolator2836;

let OrientationInterpolator2837 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2837.DEF = "Kick_r_metatarsal_PitchInterpolator";
OrientationInterpolator2837.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator2837.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0]);
Group2818.children[18] = OrientationInterpolator2837;

let OrientationInterpolator2838 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2838.DEF = "Kick_sacroiliac_YawInterpolator";
OrientationInterpolator2838.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator2838.keyValue = new MFRotation(new float[0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0]);
Group2818.children[19] = OrientationInterpolator2838;

let OrientationInterpolator2839 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2839.DEF = "Kick_vl5_YawInterpolator";
OrientationInterpolator2839.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2839.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2818.children[20] = OrientationInterpolator2839;

let OrientationInterpolator2840 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2840.DEF = "Kick_vc6_YawInterpolator";
OrientationInterpolator2840.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator2840.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group2818.children[21] = OrientationInterpolator2840;

let OrientationInterpolator2841 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2841.DEF = "Kick_lower_body_RotationInterpolator";
OrientationInterpolator2841.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2841.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2818.children[22] = OrientationInterpolator2841;

let OrientationInterpolator2842 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2842.DEF = "Kick_upper_body_RotationInterpolator";
OrientationInterpolator2842.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2842.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2818.children[23] = OrientationInterpolator2842;

let OrientationInterpolator2843 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2843.DEF = "Kick_whole_body_RotationInterpolator";
OrientationInterpolator2843.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator2843.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group2818.children[24] = OrientationInterpolator2843;

let PositionInterpolator2844 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator2844.DEF = "Kick_whole_body_TranslationInterpolator";
PositionInterpolator2844.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator2844.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group2818.children[25] = PositionInterpolator2844;

let OrientationInterpolator2845 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator2845.DEF = "Kick_neck_RotationInterpolator";
OrientationInterpolator2845.key = new MFFloat(new float[0,0.25,0.55,1]);
OrientationInterpolator2845.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.7,1,0,0,0.5,0,0,1,0]);
Group2818.children[26] = OrientationInterpolator2845;

let ROUTE2846 = browser.currentScene.createNode("ROUTE");
ROUTE2846.fromField = "fraction_changed";
ROUTE2846.fromNode = "KickTimer";
ROUTE2846.toField = "set_fraction";
ROUTE2846.toNode = "Kick_l_sternoclavicular_RollInterpolator";
Group2818.children[27] = ROUTE2846;

let ROUTE2847 = browser.currentScene.createNode("ROUTE");
ROUTE2847.fromField = "fraction_changed";
ROUTE2847.fromNode = "KickTimer";
ROUTE2847.toField = "set_fraction";
ROUTE2847.toNode = "Kick_l_acromioclavicular_RollInterpolator";
Group2818.children[28] = ROUTE2847;

let ROUTE2848 = browser.currentScene.createNode("ROUTE");
ROUTE2848.fromField = "fraction_changed";
ROUTE2848.fromNode = "KickTimer";
ROUTE2848.toField = "set_fraction";
ROUTE2848.toNode = "Kick_l_shoulder_RollInterpolator";
Group2818.children[29] = ROUTE2848;

let ROUTE2849 = browser.currentScene.createNode("ROUTE");
ROUTE2849.fromField = "fraction_changed";
ROUTE2849.fromNode = "KickTimer";
ROUTE2849.toField = "set_fraction";
ROUTE2849.toNode = "Kick_l_ForeArm_PitchInterpolator";
Group2818.children[30] = ROUTE2849;

let ROUTE2850 = browser.currentScene.createNode("ROUTE");
ROUTE2850.fromField = "fraction_changed";
ROUTE2850.fromNode = "KickTimer";
ROUTE2850.toField = "set_fraction";
ROUTE2850.toNode = "Kick_l_wrist_RollInterpolator";
Group2818.children[31] = ROUTE2850;

let ROUTE2851 = browser.currentScene.createNode("ROUTE");
ROUTE2851.fromField = "fraction_changed";
ROUTE2851.fromNode = "KickTimer";
ROUTE2851.toField = "set_fraction";
ROUTE2851.toNode = "Kick_l_thumb1_PitchInterpolator";
Group2818.children[32] = ROUTE2851;

let ROUTE2852 = browser.currentScene.createNode("ROUTE");
ROUTE2852.fromField = "fraction_changed";
ROUTE2852.fromNode = "KickTimer";
ROUTE2852.toField = "set_fraction";
ROUTE2852.toNode = "Kick_r_sternoclavicular_RollInterpolator";
Group2818.children[33] = ROUTE2852;

let ROUTE2853 = browser.currentScene.createNode("ROUTE");
ROUTE2853.fromField = "fraction_changed";
ROUTE2853.fromNode = "KickTimer";
ROUTE2853.toField = "set_fraction";
ROUTE2853.toNode = "Kick_r_acromioclavicular_RollInterpolator";
Group2818.children[34] = ROUTE2853;

let ROUTE2854 = browser.currentScene.createNode("ROUTE");
ROUTE2854.fromField = "fraction_changed";
ROUTE2854.fromNode = "KickTimer";
ROUTE2854.toField = "set_fraction";
ROUTE2854.toNode = "Kick_r_shoulder_RollInterpolator";
Group2818.children[35] = ROUTE2854;

let ROUTE2855 = browser.currentScene.createNode("ROUTE");
ROUTE2855.fromField = "fraction_changed";
ROUTE2855.fromNode = "KickTimer";
ROUTE2855.toField = "set_fraction";
ROUTE2855.toNode = "Kick_r_ForeArm_PitchInterpolator";
Group2818.children[36] = ROUTE2855;

let ROUTE2856 = browser.currentScene.createNode("ROUTE");
ROUTE2856.fromField = "fraction_changed";
ROUTE2856.fromNode = "KickTimer";
ROUTE2856.toField = "set_fraction";
ROUTE2856.toNode = "Kick_r_wrist_RollInterpolator";
Group2818.children[37] = ROUTE2856;

let ROUTE2857 = browser.currentScene.createNode("ROUTE");
ROUTE2857.fromField = "fraction_changed";
ROUTE2857.fromNode = "KickTimer";
ROUTE2857.toField = "set_fraction";
ROUTE2857.toNode = "Kick_r_thumb1_PitchInterpolator";
Group2818.children[38] = ROUTE2857;

let ROUTE2858 = browser.currentScene.createNode("ROUTE");
ROUTE2858.fromField = "fraction_changed";
ROUTE2858.fromNode = "KickTimer";
ROUTE2858.toField = "set_fraction";
ROUTE2858.toNode = "Kick_r_hip_PitchInterpolator";
Group2818.children[39] = ROUTE2858;

let ROUTE2859 = browser.currentScene.createNode("ROUTE");
ROUTE2859.fromField = "fraction_changed";
ROUTE2859.fromNode = "KickTimer";
ROUTE2859.toField = "set_fraction";
ROUTE2859.toNode = "Kick_r_knee_PitchInterpolator";
Group2818.children[40] = ROUTE2859;

let ROUTE2860 = browser.currentScene.createNode("ROUTE");
ROUTE2860.fromField = "fraction_changed";
ROUTE2860.fromNode = "KickTimer";
ROUTE2860.toField = "set_fraction";
ROUTE2860.toNode = "Kick_l_hip_PitchInterpolator";
Group2818.children[41] = ROUTE2860;

let ROUTE2861 = browser.currentScene.createNode("ROUTE");
ROUTE2861.fromField = "fraction_changed";
ROUTE2861.fromNode = "KickTimer";
ROUTE2861.toField = "set_fraction";
ROUTE2861.toNode = "Kick_l_knee_PitchInterpolator";
Group2818.children[42] = ROUTE2861;

let ROUTE2862 = browser.currentScene.createNode("ROUTE");
ROUTE2862.fromField = "fraction_changed";
ROUTE2862.fromNode = "KickTimer";
ROUTE2862.toField = "set_fraction";
ROUTE2862.toNode = "Kick_r_ankle_PitchInterpolator";
Group2818.children[43] = ROUTE2862;

let ROUTE2863 = browser.currentScene.createNode("ROUTE");
ROUTE2863.fromField = "fraction_changed";
ROUTE2863.fromNode = "KickTimer";
ROUTE2863.toField = "set_fraction";
ROUTE2863.toNode = "Kick_r_metatarsal_PitchInterpolator";
Group2818.children[44] = ROUTE2863;

let ROUTE2864 = browser.currentScene.createNode("ROUTE");
ROUTE2864.fromField = "fraction_changed";
ROUTE2864.fromNode = "KickTimer";
ROUTE2864.toField = "set_fraction";
ROUTE2864.toNode = "Kick_sacroiliac_YawInterpolator";
Group2818.children[45] = ROUTE2864;

let ROUTE2865 = browser.currentScene.createNode("ROUTE");
ROUTE2865.fromField = "fraction_changed";
ROUTE2865.fromNode = "KickTimer";
ROUTE2865.toField = "set_fraction";
ROUTE2865.toNode = "Kick_vl5_YawInterpolator";
Group2818.children[46] = ROUTE2865;

let ROUTE2866 = browser.currentScene.createNode("ROUTE");
ROUTE2866.fromField = "fraction_changed";
ROUTE2866.fromNode = "KickTimer";
ROUTE2866.toField = "set_fraction";
ROUTE2866.toNode = "Kick_vc6_YawInterpolator";
Group2818.children[47] = ROUTE2866;

let ROUTE2867 = browser.currentScene.createNode("ROUTE");
ROUTE2867.fromField = "fraction_changed";
ROUTE2867.fromNode = "KickTimer";
ROUTE2867.toField = "set_fraction";
ROUTE2867.toNode = "Kick_lower_body_RotationInterpolator";
Group2818.children[48] = ROUTE2867;

let ROUTE2868 = browser.currentScene.createNode("ROUTE");
ROUTE2868.fromField = "fraction_changed";
ROUTE2868.fromNode = "KickTimer";
ROUTE2868.toField = "set_fraction";
ROUTE2868.toNode = "Kick_upper_body_RotationInterpolator";
Group2818.children[49] = ROUTE2868;

let ROUTE2869 = browser.currentScene.createNode("ROUTE");
ROUTE2869.fromField = "fraction_changed";
ROUTE2869.fromNode = "KickTimer";
ROUTE2869.toField = "set_fraction";
ROUTE2869.toNode = "Kick_whole_body_RotationInterpolator";
Group2818.children[50] = ROUTE2869;

let ROUTE2870 = browser.currentScene.createNode("ROUTE");
ROUTE2870.fromField = "fraction_changed";
ROUTE2870.fromNode = "KickTimer";
ROUTE2870.toField = "set_fraction";
ROUTE2870.toNode = "Kick_whole_body_TranslationInterpolator";
Group2818.children[51] = ROUTE2870;

let ROUTE2871 = browser.currentScene.createNode("ROUTE");
ROUTE2871.fromField = "fraction_changed";
ROUTE2871.fromNode = "KickTimer";
ROUTE2871.toField = "set_fraction";
ROUTE2871.toNode = "Kick_neck_RotationInterpolator";
Group2818.children[52] = ROUTE2871;

let ROUTE2872 = browser.currentScene.createNode("ROUTE");
ROUTE2872.fromField = "value_changed";
ROUTE2872.fromNode = "Kick_l_sternoclavicular_RollInterpolator";
ROUTE2872.toField = "rotation";
ROUTE2872.toNode = "hanim_l_sternoclavicular";
Group2818.children[53] = ROUTE2872;

let ROUTE2873 = browser.currentScene.createNode("ROUTE");
ROUTE2873.fromField = "value_changed";
ROUTE2873.fromNode = "Kick_l_acromioclavicular_RollInterpolator";
ROUTE2873.toField = "rotation";
ROUTE2873.toNode = "hanim_l_acromioclavicular";
Group2818.children[54] = ROUTE2873;

let ROUTE2874 = browser.currentScene.createNode("ROUTE");
ROUTE2874.fromField = "value_changed";
ROUTE2874.fromNode = "Kick_l_shoulder_RollInterpolator";
ROUTE2874.toField = "rotation";
ROUTE2874.toNode = "hanim_l_shoulder";
Group2818.children[55] = ROUTE2874;

let ROUTE2875 = browser.currentScene.createNode("ROUTE");
ROUTE2875.fromField = "value_changed";
ROUTE2875.fromNode = "Kick_l_ForeArm_PitchInterpolator";
ROUTE2875.toField = "rotation";
ROUTE2875.toNode = "hanim_l_elbow";
Group2818.children[56] = ROUTE2875;

let ROUTE2876 = browser.currentScene.createNode("ROUTE");
ROUTE2876.fromField = "value_changed";
ROUTE2876.fromNode = "Kick_l_wrist_RollInterpolator";
ROUTE2876.toField = "rotation";
ROUTE2876.toNode = "hanim_l_wrist";
Group2818.children[57] = ROUTE2876;

let ROUTE2877 = browser.currentScene.createNode("ROUTE");
ROUTE2877.fromField = "value_changed";
ROUTE2877.fromNode = "Kick_l_thumb1_PitchInterpolator";
ROUTE2877.toField = "rotation";
ROUTE2877.toNode = "hanim_l_thumb1";
Group2818.children[58] = ROUTE2877;

let ROUTE2878 = browser.currentScene.createNode("ROUTE");
ROUTE2878.fromField = "value_changed";
ROUTE2878.fromNode = "Kick_r_sternoclavicular_RollInterpolator";
ROUTE2878.toField = "rotation";
ROUTE2878.toNode = "hanim_r_sternoclavicular";
Group2818.children[59] = ROUTE2878;

let ROUTE2879 = browser.currentScene.createNode("ROUTE");
ROUTE2879.fromField = "value_changed";
ROUTE2879.fromNode = "Kick_r_acromioclavicular_RollInterpolator";
ROUTE2879.toField = "rotation";
ROUTE2879.toNode = "hanim_r_acromioclavicular";
Group2818.children[60] = ROUTE2879;

let ROUTE2880 = browser.currentScene.createNode("ROUTE");
ROUTE2880.fromField = "value_changed";
ROUTE2880.fromNode = "Kick_r_shoulder_RollInterpolator";
ROUTE2880.toField = "rotation";
ROUTE2880.toNode = "hanim_r_shoulder";
Group2818.children[61] = ROUTE2880;

let ROUTE2881 = browser.currentScene.createNode("ROUTE");
ROUTE2881.fromField = "value_changed";
ROUTE2881.fromNode = "Kick_r_ForeArm_PitchInterpolator";
ROUTE2881.toField = "rotation";
ROUTE2881.toNode = "hanim_r_elbow";
Group2818.children[62] = ROUTE2881;

let ROUTE2882 = browser.currentScene.createNode("ROUTE");
ROUTE2882.fromField = "value_changed";
ROUTE2882.fromNode = "Kick_r_wrist_RollInterpolator";
ROUTE2882.toField = "rotation";
ROUTE2882.toNode = "hanim_r_wrist";
Group2818.children[63] = ROUTE2882;

let ROUTE2883 = browser.currentScene.createNode("ROUTE");
ROUTE2883.fromField = "value_changed";
ROUTE2883.fromNode = "Kick_r_thumb1_PitchInterpolator";
ROUTE2883.toField = "rotation";
ROUTE2883.toNode = "hanim_r_thumb1";
Group2818.children[64] = ROUTE2883;

let ROUTE2884 = browser.currentScene.createNode("ROUTE");
ROUTE2884.fromField = "value_changed";
ROUTE2884.fromNode = "Kick_r_hip_PitchInterpolator";
ROUTE2884.toField = "rotation";
ROUTE2884.toNode = "hanim_r_hip";
Group2818.children[65] = ROUTE2884;

let ROUTE2885 = browser.currentScene.createNode("ROUTE");
ROUTE2885.fromField = "value_changed";
ROUTE2885.fromNode = "Kick_r_knee_PitchInterpolator";
ROUTE2885.toField = "rotation";
ROUTE2885.toNode = "hanim_r_knee";
Group2818.children[66] = ROUTE2885;

let ROUTE2886 = browser.currentScene.createNode("ROUTE");
ROUTE2886.fromField = "value_changed";
ROUTE2886.fromNode = "Kick_r_ankle_PitchInterpolator";
ROUTE2886.toField = "rotation";
ROUTE2886.toNode = "hanim_r_ankle";
Group2818.children[67] = ROUTE2886;

let ROUTE2887 = browser.currentScene.createNode("ROUTE");
ROUTE2887.fromField = "value_changed";
ROUTE2887.fromNode = "Kick_r_metatarsal_PitchInterpolator";
ROUTE2887.toField = "rotation";
ROUTE2887.toNode = "hanim_r_metatarsal";
Group2818.children[68] = ROUTE2887;

let ROUTE2888 = browser.currentScene.createNode("ROUTE");
ROUTE2888.fromField = "value_changed";
ROUTE2888.fromNode = "Kick_l_hip_PitchInterpolator";
ROUTE2888.toField = "rotation";
ROUTE2888.toNode = "hanim_l_hip";
Group2818.children[69] = ROUTE2888;

let ROUTE2889 = browser.currentScene.createNode("ROUTE");
ROUTE2889.fromField = "value_changed";
ROUTE2889.fromNode = "Kick_l_knee_PitchInterpolator";
ROUTE2889.toField = "rotation";
ROUTE2889.toNode = "hanim_l_knee";
Group2818.children[70] = ROUTE2889;

let ROUTE2890 = browser.currentScene.createNode("ROUTE");
ROUTE2890.fromField = "value_changed";
ROUTE2890.fromNode = "Kick_r_ankle_PitchInterpolator";
ROUTE2890.toField = "rotation";
ROUTE2890.toNode = "hanim_l_ankle";
Group2818.children[71] = ROUTE2890;

let ROUTE2891 = browser.currentScene.createNode("ROUTE");
ROUTE2891.fromField = "value_changed";
ROUTE2891.fromNode = "Kick_r_metatarsal_PitchInterpolator";
ROUTE2891.toField = "rotation";
ROUTE2891.toNode = "hanim_l_metatarsal";
Group2818.children[72] = ROUTE2891;

let ROUTE2892 = browser.currentScene.createNode("ROUTE");
ROUTE2892.fromField = "value_changed";
ROUTE2892.fromNode = "Kick_sacroiliac_YawInterpolator";
ROUTE2892.toField = "rotation";
ROUTE2892.toNode = "hanim_sacroiliac";
Group2818.children[73] = ROUTE2892;

let ROUTE2893 = browser.currentScene.createNode("ROUTE");
ROUTE2893.fromField = "value_changed";
ROUTE2893.fromNode = "Kick_vl5_YawInterpolator";
ROUTE2893.toField = "rotation";
ROUTE2893.toNode = "hanim_vl5";
Group2818.children[74] = ROUTE2893;

let ROUTE2894 = browser.currentScene.createNode("ROUTE");
ROUTE2894.fromField = "value_changed";
ROUTE2894.fromNode = "Kick_vc6_YawInterpolator";
ROUTE2894.toField = "rotation";
ROUTE2894.toNode = "hanim_vc6";
Group2818.children[75] = ROUTE2894;

let ROUTE2895 = browser.currentScene.createNode("ROUTE");
ROUTE2895.fromField = "value_changed";
ROUTE2895.fromNode = "Kick_upper_body_RotationInterpolator";
ROUTE2895.toField = "rotation";
ROUTE2895.toNode = "hanim_vl1";
Group2818.children[76] = ROUTE2895;

let ROUTE2896 = browser.currentScene.createNode("ROUTE");
ROUTE2896.fromField = "value_changed";
ROUTE2896.fromNode = "Kick_lower_body_RotationInterpolator";
ROUTE2896.toField = "rotation";
ROUTE2896.toNode = "hanim_sacroiliac";
Group2818.children[77] = ROUTE2896;

let ROUTE2897 = browser.currentScene.createNode("ROUTE");
ROUTE2897.fromField = "value_changed";
ROUTE2897.fromNode = "Kick_whole_body_RotationInterpolator";
ROUTE2897.toField = "rotation";
ROUTE2897.toNode = "hanim_humanoid_root";
Group2818.children[78] = ROUTE2897;

let ROUTE2898 = browser.currentScene.createNode("ROUTE");
ROUTE2898.fromField = "value_changed";
ROUTE2898.fromNode = "Kick_whole_body_TranslationInterpolator";
ROUTE2898.toField = "translation";
ROUTE2898.toNode = "hanim_humanoid_root";
Group2818.children[79] = ROUTE2898;

let ROUTE2899 = browser.currentScene.createNode("ROUTE");
ROUTE2899.fromField = "value_changed";
ROUTE2899.fromNode = "Kick_neck_RotationInterpolator";
ROUTE2899.toField = "rotation";
ROUTE2899.toNode = "hanim_vc4";
Group2818.children[80] = ROUTE2899;

browser.currentScene.children[21] = Group2818;

let Group2900 = browser.currentScene.createNode("Group");
Group2900.DEF = "UserInterface";
//Authoring hint: these axes are aligned within local coordinate system
let Transform2901 = browser.currentScene.createNode("Transform");
Transform2901.DEF = "CoordinateAxesAdjustedScale";
Transform2901.scale = new SFVec3f(new float[0.175,0.175,0.175]);
let Inline2902 = browser.currentScene.createNode("Inline");
Inline2902.DEF = "CoordinateAxes";
Inline2902.url = new MFString(new java.lang.String["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"]);
Transform2901.children = new MFNode();

Transform2901.children[0] = Inline2902;

Group2900.children = new MFNode();

Group2900.children[0] = Transform2901;

let Transform2903 = browser.currentScene.createNode("Transform");
Transform2903.DEF = "cordsys";
Transform2903.scale = new SFVec3f(new float[0.175,0.175,0.175]);
//<Inline bboxCenter='0.05143541 0.07883984 0.04731131' bboxSize='2.202872 2.25768 2.194624' url='\"JointCoordinateAxes.x3dv\"'/>
Group2900.children[1] = Transform2903;

let ProximitySensor2904 = browser.currentScene.createNode("ProximitySensor");
ProximitySensor2904.DEF = "HudProximitySensor";
ProximitySensor2904.center = new SFVec3f(new float[0,20,0]);
ProximitySensor2904.size = new SFVec3f(new float[500,100,500]);
Group2900.children[2] = ProximitySensor2904;

let Transform2905 = browser.currentScene.createNode("Transform");
Transform2905.DEF = "Stage";
Transform2905.scale = new SFVec3f(new float[1,0.0125,1]);
Transform2905.translation = new SFVec3f(new float[0,-0.0125,0]);
let Shape2906 = browser.currentScene.createNode("Shape");
let Appearance2907 = browser.currentScene.createNode("Appearance");
let Material2908 = browser.currentScene.createNode("Material");
Material2908.transparency = 0.6;
Appearance2907.material = Material2908;

Shape2906.appearance = Appearance2907;

let Box2909 = browser.currentScene.createNode("Box");
Shape2906.geometry = Box2909;

Transform2905.children = new MFNode();

Transform2905.children[0] = Shape2906;

let Transform2910 = browser.currentScene.createNode("Transform");
Transform2910.DEF = "Circle0";
Transform2910.scale = new SFVec3f(new float[1.175,1,1.175]);
let Shape2911 = browser.currentScene.createNode("Shape");
let Appearance2912 = browser.currentScene.createNode("Appearance");
let Material2913 = browser.currentScene.createNode("Material");
Material2913.diffuseColor = new SFColor(new float[0.9,0,0.7]);
Material2913.emissiveColor = new SFColor(new float[0.424956,0.483976,1]);
Appearance2912.material = Material2913;

Shape2911.appearance = Appearance2912;

let IndexedLineSet2914 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet2914.DEF = "Orbit1";
IndexedLineSet2914.coordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]);
let Coordinate2915 = browser.currentScene.createNode("Coordinate");
Coordinate2915.point = new MFVec3f(new float[1,0,0,0.995,0,-0.105,0.979,0,-0.208,0.951,0,-0.309,0.914,0,-0.407,0.866,0,-0.5,0.809,0,-0.588,0.743,0,-0.669,0.669,0,-0.743,0.588,0,-0.809,0.5,0,-0.866,0.407,0,-0.914,0.309,0,-0.951,0.208,0,-0.978,0.105,0,-0.995,0,0,-1,-0.105,0,-0.994522,-0.208,0,-0.978,-0.309,0,-0.951,-0.407,0,-0.914,-0.5,0,-0.866,-0.588,0,-0.809,-0.669,0,-0.743,-0.743,0,-0.669,-0.809,0,-0.588,-0.866,0,-0.5,-0.914,0,-0.407,-0.951,0,-0.309,-0.978,0,-0.208,-0.995,0,-0.105,-1,0,0,-0.995,0,0.105,-0.978,0,0.208,-0.951,0,0.309,-0.914,0,0.407,-0.866,0,0.5,-0.809,0,0.588,-0.743,0,0.669,-0.669,0,0.743,-0.588,0,0.809,-0.5,0,0.866,-0.407,0,0.914,-0.309,0,0.951,-0.208,0,0.978,-0.105,0,0.995,0,0,1,0.105,0,0.995,0.208,0,0.978,0.309,0,0.951,0.407,0,0.914,0.5,0,0.866,0.588,0,0.809,0.669,0,0.743,0.743,0,0.669,0.809,0,0.588,0.866,0,0.5,0.914,0,0.407,0.951,0,0.309,0.978,0,0.208,0.995,0,0.104,1,0,0]);
IndexedLineSet2914.coord = Coordinate2915;

Shape2911.geometry = IndexedLineSet2914;

Transform2910.children = new MFNode();

Transform2910.children[0] = Shape2911;

Transform2905.children[1] = Transform2910;

let Transform2916 = browser.currentScene.createNode("Transform");
Transform2916.DEF = "Circle1";
Transform2916.scale = new SFVec3f(new float[0.5,1,0.5]);
let Shape2917 = browser.currentScene.createNode("Shape");
let Appearance2918 = browser.currentScene.createNode("Appearance");
let Material2919 = browser.currentScene.createNode("Material");
Material2919.diffuseColor = new SFColor(new float[0.9,0,0.7]);
Material2919.emissiveColor = new SFColor(new float[0.424956,0.483976,1]);
Appearance2918.material = Material2919;

Shape2917.appearance = Appearance2918;

let IndexedLineSet2920 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet2920.USE = "Orbit1";
Shape2917.geometry = IndexedLineSet2920;

Transform2916.children = new MFNode();

Transform2916.children[0] = Shape2917;

Transform2905.children[2] = Transform2916;

let Transform2921 = browser.currentScene.createNode("Transform");
Transform2921.DEF = "Circle2";
Transform2921.scale = new SFVec3f(new float[0.25,1,0.25]);
let Shape2922 = browser.currentScene.createNode("Shape");
let Appearance2923 = browser.currentScene.createNode("Appearance");
let Material2924 = browser.currentScene.createNode("Material");
Material2924.diffuseColor = new SFColor(new float[0.9,0,0.7]);
Material2924.emissiveColor = new SFColor(new float[0.424956,0.483976,1]);
Appearance2923.material = Material2924;

Shape2922.appearance = Appearance2923;

let IndexedLineSet2925 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet2925.USE = "Orbit1";
Shape2922.geometry = IndexedLineSet2925;

Transform2921.children = new MFNode();

Transform2921.children[0] = Shape2922;

Transform2905.children[3] = Transform2921;

Group2900.children[3] = Transform2905;

let Transform2926 = browser.currentScene.createNode("Transform");
Transform2926.DEF = "HudXform";
Transform2926.rotation = new SFRotation(new float[-0.09996068,0.9942513,0.03837026,0.7131352]);
Transform2926.translation = new SFVec3f(new float[1.705442,1.042139,1.989742]);
let Transform2927 = browser.currentScene.createNode("Transform");
Transform2927.scale = new SFVec3f(new float[0.035,0.035,0.035]);
Transform2927.translation = new SFVec3f(new float[-0.42,-0.2,-0.75]);
let Transform2928 = browser.currentScene.createNode("Transform");
Transform2928.DEF = "StandTransform";
Transform2928.translation = new SFVec3f(new float[0,-1,0]);
let TouchSensor2929 = browser.currentScene.createNode("TouchSensor");
TouchSensor2929.DEF = "Stand_Touch";
TouchSensor2929.description = "touch to select";
Transform2928.children = new MFNode();

Transform2928.children[0] = TouchSensor2929;

let Shape2930 = browser.currentScene.createNode("Shape");
Shape2930.DEF = "StandTextShape";
let Appearance2931 = browser.currentScene.createNode("Appearance");
let Material2932 = browser.currentScene.createNode("Material");
Material2932.DEF = "text_color";
Material2932.ambientIntensity = 1;
Material2932.diffuseColor = new SFColor(new float[0.819,0.521,0.169]);
Material2932.emissiveColor = new SFColor(new float[0.819,0.521,0.169]);
Material2932.specularColor = new SFColor(new float[0.819,0.521,0.169]);
Appearance2931.material = Material2932;

Shape2930.appearance = Appearance2931;

let Text2933 = browser.currentScene.createNode("Text");
Text2933.string = new MFString(new java.lang.String["Stand"]);
Shape2930.geometry = Text2933;

Transform2928.children[1] = Shape2930;

let Shape2934 = browser.currentScene.createNode("Shape");
Shape2934.DEF = "Stand_Back";
let Appearance2935 = browser.currentScene.createNode("Appearance");
let Material2936 = browser.currentScene.createNode("Material");
Material2936.DEF = "Clear";
Material2936.ambientIntensity = 1;
Material2936.diffuseColor = new SFColor(new float[0,0.5,0]);
Material2936.emissiveColor = new SFColor(new float[0,0.5,0]);
Material2936.transparency = 0.8;
Appearance2935.material = Material2936;

Shape2934.appearance = Appearance2935;

let IndexedFaceSet2937 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2937.DEF = "Backing";
IndexedFaceSet2937.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
let Coordinate2938 = browser.currentScene.createNode("Coordinate");
Coordinate2938.point = new MFVec3f(new float[-0.2,-1.2,-0.01,2.5,-1.2,-0.01,2.5,0.75,-0.01,-0.2,0.75,-0.01]);
IndexedFaceSet2937.coord = Coordinate2938;

Shape2934.geometry = IndexedFaceSet2937;

Transform2928.children[2] = Shape2934;

Transform2927.children = new MFNode();

Transform2927.children[0] = Transform2928;

let Transform2939 = browser.currentScene.createNode("Transform");
Transform2939.DEF = "PitchTransform";
Transform2939.translation = new SFVec3f(new float[3,-1,0]);
let TouchSensor2940 = browser.currentScene.createNode("TouchSensor");
TouchSensor2940.DEF = "Pitch_Touch";
TouchSensor2940.description = "touch to select";
Transform2939.children = new MFNode();

Transform2939.children[0] = TouchSensor2940;

let Shape2941 = browser.currentScene.createNode("Shape");
Shape2941.DEF = "PitchTextShape";
let Appearance2942 = browser.currentScene.createNode("Appearance");
let Material2943 = browser.currentScene.createNode("Material");
Material2943.USE = "text_color";
Appearance2942.material = Material2943;

Shape2941.appearance = Appearance2942;

let Text2944 = browser.currentScene.createNode("Text");
Text2944.string = new MFString(new java.lang.String["Pitch"]);
Shape2941.geometry = Text2944;

Transform2939.children[1] = Shape2941;

let Shape2945 = browser.currentScene.createNode("Shape");
Shape2945.DEF = "Pitch_Back";
let Appearance2946 = browser.currentScene.createNode("Appearance");
let Material2947 = browser.currentScene.createNode("Material");
Material2947.USE = "Clear";
Appearance2946.material = Material2947;

Shape2945.appearance = Appearance2946;

let IndexedFaceSet2948 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2948.USE = "Backing";
Shape2945.geometry = IndexedFaceSet2948;

Transform2939.children[2] = Shape2945;

Transform2927.children[1] = Transform2939;

let Transform2949 = browser.currentScene.createNode("Transform");
Transform2949.DEF = "YawTransform";
Transform2949.translation = new SFVec3f(new float[6,-1,0]);
let TouchSensor2950 = browser.currentScene.createNode("TouchSensor");
TouchSensor2950.DEF = "Yaw_Touch";
TouchSensor2950.description = "touch to select";
Transform2949.children = new MFNode();

Transform2949.children[0] = TouchSensor2950;

let Shape2951 = browser.currentScene.createNode("Shape");
Shape2951.DEF = "YawText";
let Appearance2952 = browser.currentScene.createNode("Appearance");
let Material2953 = browser.currentScene.createNode("Material");
Material2953.USE = "text_color";
Appearance2952.material = Material2953;

Shape2951.appearance = Appearance2952;

let Text2954 = browser.currentScene.createNode("Text");
Text2954.string = new MFString(new java.lang.String["Yaw"]);
Shape2951.geometry = Text2954;

Transform2949.children[1] = Shape2951;

let Shape2955 = browser.currentScene.createNode("Shape");
Shape2955.DEF = "Yaw_Back";
let Appearance2956 = browser.currentScene.createNode("Appearance");
let Material2957 = browser.currentScene.createNode("Material");
Material2957.USE = "Clear";
Appearance2956.material = Material2957;

Shape2955.appearance = Appearance2956;

let IndexedFaceSet2958 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2958.USE = "Backing";
Shape2955.geometry = IndexedFaceSet2958;

Transform2949.children[2] = Shape2955;

Transform2927.children[2] = Transform2949;

let Transform2959 = browser.currentScene.createNode("Transform");
Transform2959.DEF = "RollTransform";
Transform2959.translation = new SFVec3f(new float[9,-1,0]);
let TouchSensor2960 = browser.currentScene.createNode("TouchSensor");
TouchSensor2960.DEF = "Roll_Touch";
TouchSensor2960.description = "touch to select";
Transform2959.children = new MFNode();

Transform2959.children[0] = TouchSensor2960;

let Shape2961 = browser.currentScene.createNode("Shape");
Shape2961.DEF = "_RollInterpolator";
let Appearance2962 = browser.currentScene.createNode("Appearance");
let Material2963 = browser.currentScene.createNode("Material");
Material2963.USE = "text_color";
Appearance2962.material = Material2963;

Shape2961.appearance = Appearance2962;

let Text2964 = browser.currentScene.createNode("Text");
Text2964.string = new MFString(new java.lang.String["Roll"]);
Shape2961.geometry = Text2964;

Transform2959.children[1] = Shape2961;

let Shape2965 = browser.currentScene.createNode("Shape");
Shape2965.DEF = "Roll_Back";
let Appearance2966 = browser.currentScene.createNode("Appearance");
let Material2967 = browser.currentScene.createNode("Material");
Material2967.USE = "Clear";
Appearance2966.material = Material2967;

Shape2965.appearance = Appearance2966;

let IndexedFaceSet2968 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2968.USE = "Backing";
Shape2965.geometry = IndexedFaceSet2968;

Transform2959.children[2] = Shape2965;

Transform2927.children[3] = Transform2959;

let Transform2969 = browser.currentScene.createNode("Transform");
Transform2969.DEF = "WalkTransform";
Transform2969.translation = new SFVec3f(new float[12,-1,0]);
let TouchSensor2970 = browser.currentScene.createNode("TouchSensor");
TouchSensor2970.DEF = "Walk_Touch";
TouchSensor2970.description = "touch to select";
Transform2969.children = new MFNode();

Transform2969.children[0] = TouchSensor2970;

let Shape2971 = browser.currentScene.createNode("Shape");
Shape2971.DEF = "WalkText";
let Appearance2972 = browser.currentScene.createNode("Appearance");
let Material2973 = browser.currentScene.createNode("Material");
Material2973.USE = "text_color";
Appearance2972.material = Material2973;

Shape2971.appearance = Appearance2972;

let Text2974 = browser.currentScene.createNode("Text");
Text2974.string = new MFString(new java.lang.String["Walk"]);
Shape2971.geometry = Text2974;

Transform2969.children[1] = Shape2971;

let Shape2975 = browser.currentScene.createNode("Shape");
Shape2975.DEF = "Walk_Back";
let Appearance2976 = browser.currentScene.createNode("Appearance");
let Material2977 = browser.currentScene.createNode("Material");
Material2977.USE = "Clear";
Appearance2976.material = Material2977;

Shape2975.appearance = Appearance2976;

let IndexedFaceSet2978 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2978.USE = "Backing";
Shape2975.geometry = IndexedFaceSet2978;

Transform2969.children[2] = Shape2975;

Transform2927.children[4] = Transform2969;

let Transform2979 = browser.currentScene.createNode("Transform");
Transform2979.DEF = "RunTransform";
Transform2979.translation = new SFVec3f(new float[15,-1,0]);
let TouchSensor2980 = browser.currentScene.createNode("TouchSensor");
TouchSensor2980.DEF = "Run_Touch";
TouchSensor2980.description = "touch to select";
Transform2979.children = new MFNode();

Transform2979.children[0] = TouchSensor2980;

let Shape2981 = browser.currentScene.createNode("Shape");
Shape2981.DEF = "RunText";
let Appearance2982 = browser.currentScene.createNode("Appearance");
let Material2983 = browser.currentScene.createNode("Material");
Material2983.USE = "text_color";
Appearance2982.material = Material2983;

Shape2981.appearance = Appearance2982;

let Text2984 = browser.currentScene.createNode("Text");
Text2984.string = new MFString(new java.lang.String["Run"]);
Shape2981.geometry = Text2984;

Transform2979.children[1] = Shape2981;

let Shape2985 = browser.currentScene.createNode("Shape");
Shape2985.DEF = "Run_Back";
let Appearance2986 = browser.currentScene.createNode("Appearance");
let Material2987 = browser.currentScene.createNode("Material");
Material2987.USE = "Clear";
Appearance2986.material = Material2987;

Shape2985.appearance = Appearance2986;

let IndexedFaceSet2988 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2988.USE = "Backing";
Shape2985.geometry = IndexedFaceSet2988;

Transform2979.children[2] = Shape2985;

Transform2927.children[5] = Transform2979;

let Transform2989 = browser.currentScene.createNode("Transform");
Transform2989.DEF = "JumpTransform";
Transform2989.translation = new SFVec3f(new float[18,-1,0]);
let TouchSensor2990 = browser.currentScene.createNode("TouchSensor");
TouchSensor2990.DEF = "Jump_Touch";
TouchSensor2990.description = "touch to select";
Transform2989.children = new MFNode();

Transform2989.children[0] = TouchSensor2990;

let Shape2991 = browser.currentScene.createNode("Shape");
Shape2991.DEF = "Jump";
let Appearance2992 = browser.currentScene.createNode("Appearance");
let Material2993 = browser.currentScene.createNode("Material");
Material2993.USE = "text_color";
Appearance2992.material = Material2993;

Shape2991.appearance = Appearance2992;

let Text2994 = browser.currentScene.createNode("Text");
Text2994.string = new MFString(new java.lang.String["Jump"]);
Shape2991.geometry = Text2994;

Transform2989.children[1] = Shape2991;

let Shape2995 = browser.currentScene.createNode("Shape");
Shape2995.DEF = "Jump_Back";
let Appearance2996 = browser.currentScene.createNode("Appearance");
let Material2997 = browser.currentScene.createNode("Material");
Material2997.USE = "Clear";
Appearance2996.material = Material2997;

Shape2995.appearance = Appearance2996;

let IndexedFaceSet2998 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2998.USE = "Backing";
Shape2995.geometry = IndexedFaceSet2998;

Transform2989.children[2] = Shape2995;

Transform2927.children[6] = Transform2989;

let Transform2999 = browser.currentScene.createNode("Transform");
Transform2999.DEF = "KickTransform";
Transform2999.translation = new SFVec3f(new float[21,-1,0]);
let TouchSensor3000 = browser.currentScene.createNode("TouchSensor");
TouchSensor3000.DEF = "Kick_Touch";
TouchSensor3000.description = "touch to select";
Transform2999.children = new MFNode();

Transform2999.children[0] = TouchSensor3000;

let Shape3001 = browser.currentScene.createNode("Shape");
Shape3001.DEF = "KickText";
let Appearance3002 = browser.currentScene.createNode("Appearance");
let Material3003 = browser.currentScene.createNode("Material");
Material3003.USE = "text_color";
Appearance3002.material = Material3003;

Shape3001.appearance = Appearance3002;

let Text3004 = browser.currentScene.createNode("Text");
Text3004.string = new MFString(new java.lang.String["Kick"]);
Shape3001.geometry = Text3004;

Transform2999.children[1] = Shape3001;

let Shape3005 = browser.currentScene.createNode("Shape");
Shape3005.DEF = "Kick_Back";
let Appearance3006 = browser.currentScene.createNode("Appearance");
let Material3007 = browser.currentScene.createNode("Material");
Material3007.USE = "Clear";
Appearance3006.material = Material3007;

Shape3005.appearance = Appearance3006;

let IndexedFaceSet3008 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet3008.USE = "Backing";
Shape3005.geometry = IndexedFaceSet3008;

Transform2999.children[2] = Shape3005;

Transform2927.children[7] = Transform2999;

let Transform3009 = browser.currentScene.createNode("Transform");
Transform3009.DEF = "Stop_Text";
Transform3009.translation = new SFVec3f(new float[0,1.4,0]);
let TouchSensor3010 = browser.currentScene.createNode("TouchSensor");
TouchSensor3010.DEF = "Stop_Touch";
TouchSensor3010.description = "touch to select";
Transform3009.children = new MFNode();

Transform3009.children[0] = TouchSensor3010;

let Shape3011 = browser.currentScene.createNode("Shape");
Shape3011.DEF = "StopText";
let Appearance3012 = browser.currentScene.createNode("Appearance");
let Material3013 = browser.currentScene.createNode("Material");
Material3013.USE = "text_color";
Appearance3012.material = Material3013;

Shape3011.appearance = Appearance3012;

let Text3014 = browser.currentScene.createNode("Text");
Text3014.string = new MFString(new java.lang.String["Stop","Default Pose"]);
Shape3011.geometry = Text3014;

Transform3009.children[1] = Shape3011;

let Shape3015 = browser.currentScene.createNode("Shape");
Shape3015.DEF = "Stop_Back";
let Appearance3016 = browser.currentScene.createNode("Appearance");
let Material3017 = browser.currentScene.createNode("Material");
Material3017.USE = "Clear";
Appearance3016.material = Material3017;

Shape3015.appearance = Appearance3016;

let IndexedFaceSet3018 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet3018.USE = "Backing";
Shape3015.geometry = IndexedFaceSet3018;

Transform3009.children[2] = Shape3015;

Transform2927.children[8] = Transform3009;

Transform2926.children = new MFNode();

Transform2926.children[0] = Transform2927;

Group2900.children[4] = Transform2926;

let ROUTE3019 = browser.currentScene.createNode("ROUTE");
ROUTE3019.fromField = "position_changed";
ROUTE3019.fromNode = "HudProximitySensor";
ROUTE3019.toField = "translation";
ROUTE3019.toNode = "HudXform";
Group2900.children[5] = ROUTE3019;

let ROUTE3020 = browser.currentScene.createNode("ROUTE");
ROUTE3020.fromField = "orientation_changed";
ROUTE3020.fromNode = "HudProximitySensor";
ROUTE3020.toField = "rotation";
ROUTE3020.toNode = "HudXform";
Group2900.children[6] = ROUTE3020;

browser.currentScene.children[22] = Group2900;

let Group3021 = browser.currentScene.createNode("Group");
Group3021.DEF = "BehaviorSynchronization";
let ROUTE3022 = browser.currentScene.createNode("ROUTE");
ROUTE3022.fromField = "touchTime";
ROUTE3022.fromNode = "Stand_Touch";
ROUTE3022.toField = "stopTime";
ROUTE3022.toNode = "PitchTimer";
Group3021.children = new MFNode();

Group3021.children[0] = ROUTE3022;

let ROUTE3023 = browser.currentScene.createNode("ROUTE");
ROUTE3023.fromField = "touchTime";
ROUTE3023.fromNode = "Stand_Touch";
ROUTE3023.toField = "stopTime";
ROUTE3023.toNode = "YawTimer";
Group3021.children[1] = ROUTE3023;

let ROUTE3024 = browser.currentScene.createNode("ROUTE");
ROUTE3024.fromField = "touchTime";
ROUTE3024.fromNode = "Stand_Touch";
ROUTE3024.toField = "stopTime";
ROUTE3024.toNode = "RollTimer";
Group3021.children[2] = ROUTE3024;

let ROUTE3025 = browser.currentScene.createNode("ROUTE");
ROUTE3025.fromField = "touchTime";
ROUTE3025.fromNode = "Stand_Touch";
ROUTE3025.toField = "stopTime";
ROUTE3025.toNode = "WalkTimer";
Group3021.children[3] = ROUTE3025;

let ROUTE3026 = browser.currentScene.createNode("ROUTE");
ROUTE3026.fromField = "touchTime";
ROUTE3026.fromNode = "Stand_Touch";
ROUTE3026.toField = "stopTime";
ROUTE3026.toNode = "RunTimer";
Group3021.children[4] = ROUTE3026;

let ROUTE3027 = browser.currentScene.createNode("ROUTE");
ROUTE3027.fromField = "touchTime";
ROUTE3027.fromNode = "Stand_Touch";
ROUTE3027.toField = "stopTime";
ROUTE3027.toNode = "JumpTimer";
Group3021.children[5] = ROUTE3027;

let ROUTE3028 = browser.currentScene.createNode("ROUTE");
ROUTE3028.fromField = "touchTime";
ROUTE3028.fromNode = "Stand_Touch";
ROUTE3028.toField = "stopTime";
ROUTE3028.toNode = "KickTimer";
Group3021.children[6] = ROUTE3028;

let ROUTE3029 = browser.currentScene.createNode("ROUTE");
ROUTE3029.fromField = "touchTime";
ROUTE3029.fromNode = "Stand_Touch";
ROUTE3029.toField = "stopTime";
ROUTE3029.toNode = "StopTimer";
Group3021.children[7] = ROUTE3029;

let ROUTE3030 = browser.currentScene.createNode("ROUTE");
ROUTE3030.fromField = "touchTime";
ROUTE3030.fromNode = "Stand_Touch";
ROUTE3030.toField = "startTime";
ROUTE3030.toNode = "StandTimer";
Group3021.children[8] = ROUTE3030;

let ROUTE3031 = browser.currentScene.createNode("ROUTE");
ROUTE3031.fromField = "touchTime";
ROUTE3031.fromNode = "Pitch_Touch";
ROUTE3031.toField = "stopTime";
ROUTE3031.toNode = "StandTimer";
Group3021.children[9] = ROUTE3031;

let ROUTE3032 = browser.currentScene.createNode("ROUTE");
ROUTE3032.fromField = "touchTime";
ROUTE3032.fromNode = "Pitch_Touch";
ROUTE3032.toField = "stopTime";
ROUTE3032.toNode = "YawTimer";
Group3021.children[10] = ROUTE3032;

let ROUTE3033 = browser.currentScene.createNode("ROUTE");
ROUTE3033.fromField = "touchTime";
ROUTE3033.fromNode = "Pitch_Touch";
ROUTE3033.toField = "stopTime";
ROUTE3033.toNode = "RollTimer";
Group3021.children[11] = ROUTE3033;

let ROUTE3034 = browser.currentScene.createNode("ROUTE");
ROUTE3034.fromField = "touchTime";
ROUTE3034.fromNode = "Pitch_Touch";
ROUTE3034.toField = "stopTime";
ROUTE3034.toNode = "WalkTimer";
Group3021.children[12] = ROUTE3034;

let ROUTE3035 = browser.currentScene.createNode("ROUTE");
ROUTE3035.fromField = "touchTime";
ROUTE3035.fromNode = "Pitch_Touch";
ROUTE3035.toField = "stopTime";
ROUTE3035.toNode = "RunTimer";
Group3021.children[13] = ROUTE3035;

let ROUTE3036 = browser.currentScene.createNode("ROUTE");
ROUTE3036.fromField = "touchTime";
ROUTE3036.fromNode = "Pitch_Touch";
ROUTE3036.toField = "stopTime";
ROUTE3036.toNode = "JumpTimer";
Group3021.children[14] = ROUTE3036;

let ROUTE3037 = browser.currentScene.createNode("ROUTE");
ROUTE3037.fromField = "touchTime";
ROUTE3037.fromNode = "Pitch_Touch";
ROUTE3037.toField = "stopTime";
ROUTE3037.toNode = "KickTimer";
Group3021.children[15] = ROUTE3037;

let ROUTE3038 = browser.currentScene.createNode("ROUTE");
ROUTE3038.fromField = "touchTime";
ROUTE3038.fromNode = "Pitch_Touch";
ROUTE3038.toField = "stopTime";
ROUTE3038.toNode = "StopTimer";
Group3021.children[16] = ROUTE3038;

let ROUTE3039 = browser.currentScene.createNode("ROUTE");
ROUTE3039.fromField = "touchTime";
ROUTE3039.fromNode = "Pitch_Touch";
ROUTE3039.toField = "startTime";
ROUTE3039.toNode = "PitchTimer";
Group3021.children[17] = ROUTE3039;

let ROUTE3040 = browser.currentScene.createNode("ROUTE");
ROUTE3040.fromField = "touchTime";
ROUTE3040.fromNode = "Yaw_Touch";
ROUTE3040.toField = "stopTime";
ROUTE3040.toNode = "StandTimer";
Group3021.children[18] = ROUTE3040;

let ROUTE3041 = browser.currentScene.createNode("ROUTE");
ROUTE3041.fromField = "touchTime";
ROUTE3041.fromNode = "Yaw_Touch";
ROUTE3041.toField = "stopTime";
ROUTE3041.toNode = "PitchTimer";
Group3021.children[19] = ROUTE3041;

let ROUTE3042 = browser.currentScene.createNode("ROUTE");
ROUTE3042.fromField = "touchTime";
ROUTE3042.fromNode = "Yaw_Touch";
ROUTE3042.toField = "stopTime";
ROUTE3042.toNode = "RollTimer";
Group3021.children[20] = ROUTE3042;

let ROUTE3043 = browser.currentScene.createNode("ROUTE");
ROUTE3043.fromField = "touchTime";
ROUTE3043.fromNode = "Yaw_Touch";
ROUTE3043.toField = "stopTime";
ROUTE3043.toNode = "WalkTimer";
Group3021.children[21] = ROUTE3043;

let ROUTE3044 = browser.currentScene.createNode("ROUTE");
ROUTE3044.fromField = "touchTime";
ROUTE3044.fromNode = "Yaw_Touch";
ROUTE3044.toField = "stopTime";
ROUTE3044.toNode = "RunTimer";
Group3021.children[22] = ROUTE3044;

let ROUTE3045 = browser.currentScene.createNode("ROUTE");
ROUTE3045.fromField = "touchTime";
ROUTE3045.fromNode = "Yaw_Touch";
ROUTE3045.toField = "stopTime";
ROUTE3045.toNode = "JumpTimer";
Group3021.children[23] = ROUTE3045;

let ROUTE3046 = browser.currentScene.createNode("ROUTE");
ROUTE3046.fromField = "touchTime";
ROUTE3046.fromNode = "Yaw_Touch";
ROUTE3046.toField = "stopTime";
ROUTE3046.toNode = "KickTimer";
Group3021.children[24] = ROUTE3046;

let ROUTE3047 = browser.currentScene.createNode("ROUTE");
ROUTE3047.fromField = "touchTime";
ROUTE3047.fromNode = "Yaw_Touch";
ROUTE3047.toField = "stopTime";
ROUTE3047.toNode = "StopTimer";
Group3021.children[25] = ROUTE3047;

let ROUTE3048 = browser.currentScene.createNode("ROUTE");
ROUTE3048.fromField = "touchTime";
ROUTE3048.fromNode = "Yaw_Touch";
ROUTE3048.toField = "startTime";
ROUTE3048.toNode = "YawTimer";
Group3021.children[26] = ROUTE3048;

let ROUTE3049 = browser.currentScene.createNode("ROUTE");
ROUTE3049.fromField = "touchTime";
ROUTE3049.fromNode = "Walk_Touch";
ROUTE3049.toField = "stopTime";
ROUTE3049.toNode = "StandTimer";
Group3021.children[27] = ROUTE3049;

let ROUTE3050 = browser.currentScene.createNode("ROUTE");
ROUTE3050.fromField = "touchTime";
ROUTE3050.fromNode = "Walk_Touch";
ROUTE3050.toField = "stopTime";
ROUTE3050.toNode = "PitchTimer";
Group3021.children[28] = ROUTE3050;

let ROUTE3051 = browser.currentScene.createNode("ROUTE");
ROUTE3051.fromField = "touchTime";
ROUTE3051.fromNode = "Walk_Touch";
ROUTE3051.toField = "stopTime";
ROUTE3051.toNode = "YawTimer";
Group3021.children[29] = ROUTE3051;

let ROUTE3052 = browser.currentScene.createNode("ROUTE");
ROUTE3052.fromField = "touchTime";
ROUTE3052.fromNode = "Walk_Touch";
ROUTE3052.toField = "stopTime";
ROUTE3052.toNode = "RollTimer";
Group3021.children[30] = ROUTE3052;

let ROUTE3053 = browser.currentScene.createNode("ROUTE");
ROUTE3053.fromField = "touchTime";
ROUTE3053.fromNode = "Walk_Touch";
ROUTE3053.toField = "stopTime";
ROUTE3053.toNode = "RunTimer";
Group3021.children[31] = ROUTE3053;

let ROUTE3054 = browser.currentScene.createNode("ROUTE");
ROUTE3054.fromField = "touchTime";
ROUTE3054.fromNode = "Walk_Touch";
ROUTE3054.toField = "stopTime";
ROUTE3054.toNode = "JumpTimer";
Group3021.children[32] = ROUTE3054;

let ROUTE3055 = browser.currentScene.createNode("ROUTE");
ROUTE3055.fromField = "touchTime";
ROUTE3055.fromNode = "Walk_Touch";
ROUTE3055.toField = "stopTime";
ROUTE3055.toNode = "KickTimer";
Group3021.children[33] = ROUTE3055;

let ROUTE3056 = browser.currentScene.createNode("ROUTE");
ROUTE3056.fromField = "touchTime";
ROUTE3056.fromNode = "Walk_Touch";
ROUTE3056.toField = "stopTime";
ROUTE3056.toNode = "StopTimer";
Group3021.children[34] = ROUTE3056;

let ROUTE3057 = browser.currentScene.createNode("ROUTE");
ROUTE3057.fromField = "touchTime";
ROUTE3057.fromNode = "Walk_Touch";
ROUTE3057.toField = "startTime";
ROUTE3057.toNode = "WalkTimer";
Group3021.children[35] = ROUTE3057;

let ROUTE3058 = browser.currentScene.createNode("ROUTE");
ROUTE3058.fromField = "touchTime";
ROUTE3058.fromNode = "Roll_Touch";
ROUTE3058.toField = "stopTime";
ROUTE3058.toNode = "StandTimer";
Group3021.children[36] = ROUTE3058;

let ROUTE3059 = browser.currentScene.createNode("ROUTE");
ROUTE3059.fromField = "touchTime";
ROUTE3059.fromNode = "Roll_Touch";
ROUTE3059.toField = "stopTime";
ROUTE3059.toNode = "PitchTimer";
Group3021.children[37] = ROUTE3059;

let ROUTE3060 = browser.currentScene.createNode("ROUTE");
ROUTE3060.fromField = "touchTime";
ROUTE3060.fromNode = "Roll_Touch";
ROUTE3060.toField = "stopTime";
ROUTE3060.toNode = "YawTimer";
Group3021.children[38] = ROUTE3060;

let ROUTE3061 = browser.currentScene.createNode("ROUTE");
ROUTE3061.fromField = "touchTime";
ROUTE3061.fromNode = "Roll_Touch";
ROUTE3061.toField = "stopTime";
ROUTE3061.toNode = "WalkTimer";
Group3021.children[39] = ROUTE3061;

let ROUTE3062 = browser.currentScene.createNode("ROUTE");
ROUTE3062.fromField = "touchTime";
ROUTE3062.fromNode = "Roll_Touch";
ROUTE3062.toField = "stopTime";
ROUTE3062.toNode = "RunTimer";
Group3021.children[40] = ROUTE3062;

let ROUTE3063 = browser.currentScene.createNode("ROUTE");
ROUTE3063.fromField = "touchTime";
ROUTE3063.fromNode = "Roll_Touch";
ROUTE3063.toField = "stopTime";
ROUTE3063.toNode = "JumpTimer";
Group3021.children[41] = ROUTE3063;

let ROUTE3064 = browser.currentScene.createNode("ROUTE");
ROUTE3064.fromField = "touchTime";
ROUTE3064.fromNode = "Roll_Touch";
ROUTE3064.toField = "stopTime";
ROUTE3064.toNode = "KickTimer";
Group3021.children[42] = ROUTE3064;

let ROUTE3065 = browser.currentScene.createNode("ROUTE");
ROUTE3065.fromField = "touchTime";
ROUTE3065.fromNode = "Roll_Touch";
ROUTE3065.toField = "stopTime";
ROUTE3065.toNode = "StopTimer";
Group3021.children[43] = ROUTE3065;

let ROUTE3066 = browser.currentScene.createNode("ROUTE");
ROUTE3066.fromField = "touchTime";
ROUTE3066.fromNode = "Roll_Touch";
ROUTE3066.toField = "startTime";
ROUTE3066.toNode = "RollTimer";
Group3021.children[44] = ROUTE3066;

let ROUTE3067 = browser.currentScene.createNode("ROUTE");
ROUTE3067.fromField = "touchTime";
ROUTE3067.fromNode = "Run_Touch";
ROUTE3067.toField = "stopTime";
ROUTE3067.toNode = "StandTimer";
Group3021.children[45] = ROUTE3067;

let ROUTE3068 = browser.currentScene.createNode("ROUTE");
ROUTE3068.fromField = "touchTime";
ROUTE3068.fromNode = "Run_Touch";
ROUTE3068.toField = "stopTime";
ROUTE3068.toNode = "PitchTimer";
Group3021.children[46] = ROUTE3068;

let ROUTE3069 = browser.currentScene.createNode("ROUTE");
ROUTE3069.fromField = "touchTime";
ROUTE3069.fromNode = "Run_Touch";
ROUTE3069.toField = "stopTime";
ROUTE3069.toNode = "YawTimer";
Group3021.children[47] = ROUTE3069;

let ROUTE3070 = browser.currentScene.createNode("ROUTE");
ROUTE3070.fromField = "touchTime";
ROUTE3070.fromNode = "Run_Touch";
ROUTE3070.toField = "stopTime";
ROUTE3070.toNode = "RollTimer";
Group3021.children[48] = ROUTE3070;

let ROUTE3071 = browser.currentScene.createNode("ROUTE");
ROUTE3071.fromField = "touchTime";
ROUTE3071.fromNode = "Run_Touch";
ROUTE3071.toField = "stopTime";
ROUTE3071.toNode = "WalkTimer";
Group3021.children[49] = ROUTE3071;

let ROUTE3072 = browser.currentScene.createNode("ROUTE");
ROUTE3072.fromField = "touchTime";
ROUTE3072.fromNode = "Run_Touch";
ROUTE3072.toField = "stopTime";
ROUTE3072.toNode = "JumpTimer";
Group3021.children[50] = ROUTE3072;

let ROUTE3073 = browser.currentScene.createNode("ROUTE");
ROUTE3073.fromField = "touchTime";
ROUTE3073.fromNode = "Run_Touch";
ROUTE3073.toField = "stopTime";
ROUTE3073.toNode = "KickTimer";
Group3021.children[51] = ROUTE3073;

let ROUTE3074 = browser.currentScene.createNode("ROUTE");
ROUTE3074.fromField = "touchTime";
ROUTE3074.fromNode = "Run_Touch";
ROUTE3074.toField = "stopTime";
ROUTE3074.toNode = "StopTimer";
Group3021.children[52] = ROUTE3074;

let ROUTE3075 = browser.currentScene.createNode("ROUTE");
ROUTE3075.fromField = "touchTime";
ROUTE3075.fromNode = "Run_Touch";
ROUTE3075.toField = "startTime";
ROUTE3075.toNode = "RunTimer";
Group3021.children[53] = ROUTE3075;

let ROUTE3076 = browser.currentScene.createNode("ROUTE");
ROUTE3076.fromField = "touchTime";
ROUTE3076.fromNode = "Jump_Touch";
ROUTE3076.toField = "stopTime";
ROUTE3076.toNode = "StandTimer";
Group3021.children[54] = ROUTE3076;

let ROUTE3077 = browser.currentScene.createNode("ROUTE");
ROUTE3077.fromField = "touchTime";
ROUTE3077.fromNode = "Jump_Touch";
ROUTE3077.toField = "stopTime";
ROUTE3077.toNode = "PitchTimer";
Group3021.children[55] = ROUTE3077;

let ROUTE3078 = browser.currentScene.createNode("ROUTE");
ROUTE3078.fromField = "touchTime";
ROUTE3078.fromNode = "Jump_Touch";
ROUTE3078.toField = "stopTime";
ROUTE3078.toNode = "YawTimer";
Group3021.children[56] = ROUTE3078;

let ROUTE3079 = browser.currentScene.createNode("ROUTE");
ROUTE3079.fromField = "touchTime";
ROUTE3079.fromNode = "Jump_Touch";
ROUTE3079.toField = "stopTime";
ROUTE3079.toNode = "RollTimer";
Group3021.children[57] = ROUTE3079;

let ROUTE3080 = browser.currentScene.createNode("ROUTE");
ROUTE3080.fromField = "touchTime";
ROUTE3080.fromNode = "Jump_Touch";
ROUTE3080.toField = "stopTime";
ROUTE3080.toNode = "WalkTimer";
Group3021.children[58] = ROUTE3080;

let ROUTE3081 = browser.currentScene.createNode("ROUTE");
ROUTE3081.fromField = "touchTime";
ROUTE3081.fromNode = "Jump_Touch";
ROUTE3081.toField = "stopTime";
ROUTE3081.toNode = "RunTimer";
Group3021.children[59] = ROUTE3081;

let ROUTE3082 = browser.currentScene.createNode("ROUTE");
ROUTE3082.fromField = "touchTime";
ROUTE3082.fromNode = "Jump_Touch";
ROUTE3082.toField = "stopTime";
ROUTE3082.toNode = "KickTimer";
Group3021.children[60] = ROUTE3082;

let ROUTE3083 = browser.currentScene.createNode("ROUTE");
ROUTE3083.fromField = "touchTime";
ROUTE3083.fromNode = "Jump_Touch";
ROUTE3083.toField = "stopTime";
ROUTE3083.toNode = "StopTimer";
Group3021.children[61] = ROUTE3083;

let ROUTE3084 = browser.currentScene.createNode("ROUTE");
ROUTE3084.fromField = "touchTime";
ROUTE3084.fromNode = "Jump_Touch";
ROUTE3084.toField = "startTime";
ROUTE3084.toNode = "JumpTimer";
Group3021.children[62] = ROUTE3084;

let ROUTE3085 = browser.currentScene.createNode("ROUTE");
ROUTE3085.fromField = "touchTime";
ROUTE3085.fromNode = "Kick_Touch";
ROUTE3085.toField = "stopTime";
ROUTE3085.toNode = "StandTimer";
Group3021.children[63] = ROUTE3085;

let ROUTE3086 = browser.currentScene.createNode("ROUTE");
ROUTE3086.fromField = "touchTime";
ROUTE3086.fromNode = "Kick_Touch";
ROUTE3086.toField = "stopTime";
ROUTE3086.toNode = "PitchTimer";
Group3021.children[64] = ROUTE3086;

let ROUTE3087 = browser.currentScene.createNode("ROUTE");
ROUTE3087.fromField = "touchTime";
ROUTE3087.fromNode = "Kick_Touch";
ROUTE3087.toField = "stopTime";
ROUTE3087.toNode = "YawTimer";
Group3021.children[65] = ROUTE3087;

let ROUTE3088 = browser.currentScene.createNode("ROUTE");
ROUTE3088.fromField = "touchTime";
ROUTE3088.fromNode = "Kick_Touch";
ROUTE3088.toField = "stopTime";
ROUTE3088.toNode = "RollTimer";
Group3021.children[66] = ROUTE3088;

let ROUTE3089 = browser.currentScene.createNode("ROUTE");
ROUTE3089.fromField = "touchTime";
ROUTE3089.fromNode = "Kick_Touch";
ROUTE3089.toField = "stopTime";
ROUTE3089.toNode = "WalkTimer";
Group3021.children[67] = ROUTE3089;

let ROUTE3090 = browser.currentScene.createNode("ROUTE");
ROUTE3090.fromField = "touchTime";
ROUTE3090.fromNode = "Kick_Touch";
ROUTE3090.toField = "stopTime";
ROUTE3090.toNode = "RunTimer";
Group3021.children[68] = ROUTE3090;

let ROUTE3091 = browser.currentScene.createNode("ROUTE");
ROUTE3091.fromField = "touchTime";
ROUTE3091.fromNode = "Kick_Touch";
ROUTE3091.toField = "stopTime";
ROUTE3091.toNode = "JumpTimer";
Group3021.children[69] = ROUTE3091;

let ROUTE3092 = browser.currentScene.createNode("ROUTE");
ROUTE3092.fromField = "touchTime";
ROUTE3092.fromNode = "Kick_Touch";
ROUTE3092.toField = "stopTime";
ROUTE3092.toNode = "StopTimer";
Group3021.children[70] = ROUTE3092;

let ROUTE3093 = browser.currentScene.createNode("ROUTE");
ROUTE3093.fromField = "touchTime";
ROUTE3093.fromNode = "Kick_Touch";
ROUTE3093.toField = "startTime";
ROUTE3093.toNode = "KickTimer";
Group3021.children[71] = ROUTE3093;

let ROUTE3094 = browser.currentScene.createNode("ROUTE");
ROUTE3094.fromField = "touchTime";
ROUTE3094.fromNode = "Stop_Touch";
ROUTE3094.toField = "stopTime";
ROUTE3094.toNode = "StandTimer";
Group3021.children[72] = ROUTE3094;

let ROUTE3095 = browser.currentScene.createNode("ROUTE");
ROUTE3095.fromField = "touchTime";
ROUTE3095.fromNode = "Stop_Touch";
ROUTE3095.toField = "stopTime";
ROUTE3095.toNode = "PitchTimer";
Group3021.children[73] = ROUTE3095;

let ROUTE3096 = browser.currentScene.createNode("ROUTE");
ROUTE3096.fromField = "touchTime";
ROUTE3096.fromNode = "Stop_Touch";
ROUTE3096.toField = "stopTime";
ROUTE3096.toNode = "YawTimer";
Group3021.children[74] = ROUTE3096;

let ROUTE3097 = browser.currentScene.createNode("ROUTE");
ROUTE3097.fromField = "touchTime";
ROUTE3097.fromNode = "Stop_Touch";
ROUTE3097.toField = "stopTime";
ROUTE3097.toNode = "RollTimer";
Group3021.children[75] = ROUTE3097;

let ROUTE3098 = browser.currentScene.createNode("ROUTE");
ROUTE3098.fromField = "touchTime";
ROUTE3098.fromNode = "Stop_Touch";
ROUTE3098.toField = "stopTime";
ROUTE3098.toNode = "WalkTimer";
Group3021.children[76] = ROUTE3098;

let ROUTE3099 = browser.currentScene.createNode("ROUTE");
ROUTE3099.fromField = "touchTime";
ROUTE3099.fromNode = "Stop_Touch";
ROUTE3099.toField = "stopTime";
ROUTE3099.toNode = "RunTimer";
Group3021.children[77] = ROUTE3099;

let ROUTE3100 = browser.currentScene.createNode("ROUTE");
ROUTE3100.fromField = "touchTime";
ROUTE3100.fromNode = "Stop_Touch";
ROUTE3100.toField = "stopTime";
ROUTE3100.toNode = "JumpTimer";
Group3021.children[78] = ROUTE3100;

let ROUTE3101 = browser.currentScene.createNode("ROUTE");
ROUTE3101.fromField = "touchTime";
ROUTE3101.fromNode = "Stop_Touch";
ROUTE3101.toField = "stopTime";
ROUTE3101.toNode = "KickTimer";
Group3021.children[79] = ROUTE3101;

let ROUTE3102 = browser.currentScene.createNode("ROUTE");
ROUTE3102.fromField = "touchTime";
ROUTE3102.fromNode = "Stop_Touch";
ROUTE3102.toField = "startTime";
ROUTE3102.toNode = "StopTimer";
Group3021.children[80] = ROUTE3102;

browser.currentScene.children[23] = Group3021;

