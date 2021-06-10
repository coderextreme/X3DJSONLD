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
HAnimHumanoid15.loa = 3;
HAnimHumanoid15.version = "2.0";
//HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is allowed
//HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'
//Only one root HAnimJoint is allowed
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
let MetadataSet16 = browser.currentScene.createNode("MetadataSet");
MetadataSet16.name = "HAnimHumanoid.info";
MetadataSet16.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
let MetadataString17 = browser.currentScene.createNode("MetadataString");
MetadataString17.name = "authorName";
MetadataString17.value = new MFString(new java.lang.String["Matthew T. Beitler Joe D. Williams Don Brutzman"]);
MetadataSet16.value = new MFNode();

MetadataSet16.value[0] = MetadataString17;

let MetadataString18 = browser.currentScene.createNode("MetadataString");
MetadataString18.name = "authorEmail";
MetadataString18.value = new MFString(new java.lang.String["HAnim@web3D.org"]);
MetadataSet16.value[1] = MetadataString18;

let MetadataString19 = browser.currentScene.createNode("MetadataString");
MetadataString19.name = "copyright";
MetadataString19.value = new MFString(new java.lang.String["none"]);
MetadataSet16.value[2] = MetadataString19;

let MetadataString20 = browser.currentScene.createNode("MetadataString");
MetadataString20.name = "creationDate";
MetadataString20.value = new MFString(new java.lang.String["12 May 1999"]);
MetadataSet16.value[3] = MetadataString20;

let MetadataFloat21 = browser.currentScene.createNode("MetadataFloat");
MetadataFloat21.name = "height";
MetadataFloat21.value = new MFFloat(new float[1.7504]);
MetadataSet16.value[4] = MetadataFloat21;

let MetadataString22 = browser.currentScene.createNode("MetadataString");
MetadataString22.name = "humanoidVersion";
MetadataString22.value = new MFString(new java.lang.String["2.0"]);
MetadataSet16.value[5] = MetadataString22;

let MetadataString23 = browser.currentScene.createNode("MetadataString");
MetadataString23.name = "usageRestrictions";
MetadataString23.value = new MFString(new java.lang.String["none"]);
MetadataSet16.value[6] = MetadataString23;

HAnimHumanoid15.metadata = MetadataSet16;

let HAnimJoint24 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint24.name = "humanoid_root";
HAnimJoint24.DEF = "hanim_humanoid_root";
HAnimJoint24.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimJoint24.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment25 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment25.name = "sacrum";
HAnimSegment25.DEF = "hanim_sacrum";
//Visualization sphere for <HAnimJoint name='humanoid_root'/> is placed within <HAnimSegment name='sacrum'/>
let TouchSensor26 = browser.currentScene.createNode("TouchSensor");
TouchSensor26.description = "HAnimJoint humanoid_root, HAnimSegment sacrum";
HAnimSegment25.children = new MFNode();

HAnimSegment25.children[0] = TouchSensor26;

let Transform27 = browser.currentScene.createNode("Transform");
Transform27.translation = new SFVec3f(new float[0,0.824,0.0277]);
let Shape28 = browser.currentScene.createNode("Shape");
Shape28.DEF = "HAnimJointShape";
let Sphere29 = browser.currentScene.createNode("Sphere");
Sphere29.radius = 0.006;
Shape28.geometry = Sphere29;

let Appearance30 = browser.currentScene.createNode("Appearance");
Appearance30.DEF = "HAnimJointAppearance";
let Material31 = browser.currentScene.createNode("Material");
Material31.diffuseColor = new SFColor(new float[1,0.5,0]);
Material31.transparency = 0.5;
Appearance30.material = Material31;

Shape28.appearance = Appearance30;

Transform27.children = new MFNode();

Transform27.children[0] = Shape28;

HAnimSegment25.children[1] = Transform27;

//HAnimSegment visualization line from current <HAnimJoint name='humanoid_root'/> to child <HAnimJoint name='sacroiliac'/>
let Shape32 = browser.currentScene.createNode("Shape");
let LineSet33 = browser.currentScene.createNode("LineSet");
LineSet33.vertexCount = new MFInt32(new int[2]);
let Coordinate34 = browser.currentScene.createNode("Coordinate");
Coordinate34.point = new MFVec3f(new float[0,0.824,0.0277,0,0.9149,0.0016]);
LineSet33.coord = Coordinate34;

let ColorRGBA35 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA35.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA35.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
LineSet33.color = ColorRGBA35;

Shape32.geometry = LineSet33;

HAnimSegment25.children[2] = Shape32;

//HAnimSegment visualization line from current <HAnimJoint name='humanoid_root'/> to child <HAnimJoint name='vl5'/>
let Shape36 = browser.currentScene.createNode("Shape");
let LineSet37 = browser.currentScene.createNode("LineSet");
LineSet37.vertexCount = new MFInt32(new int[2]);
let Coordinate38 = browser.currentScene.createNode("Coordinate");
Coordinate38.point = new MFVec3f(new float[0,0.824,0.0277,0.0028,1.0568,-0.0776]);
LineSet37.coord = Coordinate38;

let ColorRGBA39 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA39.USE = "HAnimSegmentLineColorRGBA";
LineSet37.color = ColorRGBA39;

Shape36.geometry = LineSet37;

HAnimSegment25.children[3] = Shape36;

HAnimJoint24.children = new MFNode();

HAnimJoint24.children[0] = HAnimSegment25;

let HAnimJoint40 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint40.name = "sacroiliac";
HAnimJoint40.DEF = "hanim_sacroiliac";
HAnimJoint40.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint40.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment41 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment41.name = "pelvis";
HAnimSegment41.DEF = "hanim_pelvis";
//Visualization sphere for <HAnimJoint name='sacroiliac'/> is placed within <HAnimSegment name='pelvis'/>
let TouchSensor42 = browser.currentScene.createNode("TouchSensor");
TouchSensor42.description = "HAnimJoint sacroiliac, HAnimSegment pelvis";
HAnimSegment41.children = new MFNode();

HAnimSegment41.children[0] = TouchSensor42;

let Transform43 = browser.currentScene.createNode("Transform");
Transform43.translation = new SFVec3f(new float[0,0.9149,0.0016]);
let Shape44 = browser.currentScene.createNode("Shape");
Shape44.USE = "HAnimJointShape";
Transform43.children = new MFNode();

Transform43.children[0] = Shape44;

HAnimSegment41.children[1] = Transform43;

//HAnimSegment visualization line from current <HAnimJoint name='sacroiliac'/> to child <HAnimJoint name='l_hip'/>
let Shape45 = browser.currentScene.createNode("Shape");
let LineSet46 = browser.currentScene.createNode("LineSet");
LineSet46.vertexCount = new MFInt32(new int[2]);
let Coordinate47 = browser.currentScene.createNode("Coordinate");
Coordinate47.point = new MFVec3f(new float[0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
LineSet46.coord = Coordinate47;

let ColorRGBA48 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA48.USE = "HAnimSegmentLineColorRGBA";
LineSet46.color = ColorRGBA48;

Shape45.geometry = LineSet46;

HAnimSegment41.children[2] = Shape45;

//HAnimSegment visualization line from current <HAnimJoint name='sacroiliac'/> to child <HAnimJoint name='r_hip'/>
let Shape49 = browser.currentScene.createNode("Shape");
let LineSet50 = browser.currentScene.createNode("LineSet");
LineSet50.vertexCount = new MFInt32(new int[2]);
let Coordinate51 = browser.currentScene.createNode("Coordinate");
Coordinate51.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0961,0.9124,-0.0001]);
LineSet50.coord = Coordinate51;

let ColorRGBA52 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA52.USE = "HAnimSegmentLineColorRGBA";
LineSet50.color = ColorRGBA52;

Shape49.geometry = LineSet50;

HAnimSegment41.children[3] = Shape49;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_iliocristale_pt'/>
let Shape53 = browser.currentScene.createNode("Shape");
let LineSet54 = browser.currentScene.createNode("LineSet");
LineSet54.vertexCount = new MFInt32(new int[2]);
let Coordinate55 = browser.currentScene.createNode("Coordinate");
Coordinate55.point = new MFVec3f(new float[0,0.9149,0.0016,-0.1525,1.0628,0.0035]);
LineSet54.coord = Coordinate55;

let ColorRGBA56 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA56.DEF = "HAnimSiteLineColorRGBA";
ColorRGBA56.color = new MFColorRGBA(new float[1,0,0,1,1,0,0,0.1]);
LineSet54.color = ColorRGBA56;

Shape53.geometry = LineSet54;

HAnimSegment41.children[4] = Shape53;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_trochanterion_pt'/>
let Shape57 = browser.currentScene.createNode("Shape");
let LineSet58 = browser.currentScene.createNode("LineSet");
LineSet58.vertexCount = new MFInt32(new int[2]);
let Coordinate59 = browser.currentScene.createNode("Coordinate");
Coordinate59.point = new MFVec3f(new float[0,0.9149,0.0016,-0.1689,0.8419,0.0352]);
LineSet58.coord = Coordinate59;

let ColorRGBA60 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA60.USE = "HAnimSiteLineColorRGBA";
LineSet58.color = ColorRGBA60;

Shape57.geometry = LineSet58;

HAnimSegment41.children[5] = Shape57;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_iliocristale_pt'/>
let Shape61 = browser.currentScene.createNode("Shape");
let LineSet62 = browser.currentScene.createNode("LineSet");
LineSet62.vertexCount = new MFInt32(new int[2]);
let Coordinate63 = browser.currentScene.createNode("Coordinate");
Coordinate63.point = new MFVec3f(new float[0,0.9149,0.0016,0.1612,1.0537,0.0008]);
LineSet62.coord = Coordinate63;

let ColorRGBA64 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA64.USE = "HAnimSiteLineColorRGBA";
LineSet62.color = ColorRGBA64;

Shape61.geometry = LineSet62;

HAnimSegment41.children[6] = Shape61;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_trochanterion_pt'/>
let Shape65 = browser.currentScene.createNode("Shape");
let LineSet66 = browser.currentScene.createNode("LineSet");
LineSet66.vertexCount = new MFInt32(new int[2]);
let Coordinate67 = browser.currentScene.createNode("Coordinate");
Coordinate67.point = new MFVec3f(new float[0,0.9149,0.0016,0.1677,0.8336,0.0303]);
LineSet66.coord = Coordinate67;

let ColorRGBA68 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA68.USE = "HAnimSiteLineColorRGBA";
LineSet66.color = ColorRGBA68;

Shape65.geometry = LineSet66;

HAnimSegment41.children[7] = Shape65;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_asis_pt'/>
let Shape69 = browser.currentScene.createNode("Shape");
let LineSet70 = browser.currentScene.createNode("LineSet");
LineSet70.vertexCount = new MFInt32(new int[2]);
let Coordinate71 = browser.currentScene.createNode("Coordinate");
Coordinate71.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0887,1.0021,0.1112]);
LineSet70.coord = Coordinate71;

let ColorRGBA72 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA72.USE = "HAnimSiteLineColorRGBA";
LineSet70.color = ColorRGBA72;

Shape69.geometry = LineSet70;

HAnimSegment41.children[8] = Shape69;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_asis_pt'/>
let Shape73 = browser.currentScene.createNode("Shape");
let LineSet74 = browser.currentScene.createNode("LineSet");
LineSet74.vertexCount = new MFInt32(new int[2]);
let Coordinate75 = browser.currentScene.createNode("Coordinate");
Coordinate75.point = new MFVec3f(new float[0,0.9149,0.0016,0.0925,0.9983,0.1052]);
LineSet74.coord = Coordinate75;

let ColorRGBA76 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA76.USE = "HAnimSiteLineColorRGBA";
LineSet74.color = ColorRGBA76;

Shape73.geometry = LineSet74;

HAnimSegment41.children[9] = Shape73;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_psis_pt'/>
let Shape77 = browser.currentScene.createNode("Shape");
let LineSet78 = browser.currentScene.createNode("LineSet");
LineSet78.vertexCount = new MFInt32(new int[2]);
let Coordinate79 = browser.currentScene.createNode("Coordinate");
Coordinate79.point = new MFVec3f(new float[0,0.9149,0.0016,-0.0716,1.019,-0.1138]);
LineSet78.coord = Coordinate79;

let ColorRGBA80 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA80.USE = "HAnimSiteLineColorRGBA";
LineSet78.color = ColorRGBA80;

Shape77.geometry = LineSet78;

HAnimSegment41.children[10] = Shape77;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_psis_pt'/>
let Shape81 = browser.currentScene.createNode("Shape");
let LineSet82 = browser.currentScene.createNode("LineSet");
LineSet82.vertexCount = new MFInt32(new int[2]);
let Coordinate83 = browser.currentScene.createNode("Coordinate");
Coordinate83.point = new MFVec3f(new float[0,0.9149,0.0016,0.0774,1.019,-0.1151]);
LineSet82.coord = Coordinate83;

let ColorRGBA84 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA84.USE = "HAnimSiteLineColorRGBA";
LineSet82.color = ColorRGBA84;

Shape81.geometry = LineSet82;

HAnimSegment41.children[11] = Shape81;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='crotch_pt'/>
let Shape85 = browser.currentScene.createNode("Shape");
let LineSet86 = browser.currentScene.createNode("LineSet");
LineSet86.vertexCount = new MFInt32(new int[2]);
let Coordinate87 = browser.currentScene.createNode("Coordinate");
Coordinate87.point = new MFVec3f(new float[0,0.9149,0.0016,0.0034,0.8266,0.0257]);
LineSet86.coord = Coordinate87;

let ColorRGBA88 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA88.USE = "HAnimSiteLineColorRGBA";
LineSet86.color = ColorRGBA88;

Shape85.geometry = LineSet86;

HAnimSegment41.children[12] = Shape85;

let HAnimSite89 = browser.currentScene.createNode("HAnimSite");
HAnimSite89.name = "r_iliocristale_pt";
HAnimSite89.DEF = "hanim_r_iliocristale_pt";
HAnimSite89.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
//HAnimSite visualization shape
let TouchSensor90 = browser.currentScene.createNode("TouchSensor");
TouchSensor90.description = "HAnimSite r_iliocristale_pt";
HAnimSite89.children = new MFNode();

HAnimSite89.children[0] = TouchSensor90;

let Shape91 = browser.currentScene.createNode("Shape");
Shape91.DEF = "HAnimSiteShape";
let IndexedFaceSet92 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet92.DEF = "DiamondIFS";
IndexedFaceSet92.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet92.creaseAngle = 0.5;
IndexedFaceSet92.solid = False;
let Coordinate93 = browser.currentScene.createNode("Coordinate");
Coordinate93.point = new MFVec3f(new float[0,0.008,0,-0.008,0,0,0,0,0.008,0.008,0,0,0,0,-0.008,0,-0.008,0]);
IndexedFaceSet92.coord = Coordinate93;

Shape91.geometry = IndexedFaceSet92;

let Appearance94 = browser.currentScene.createNode("Appearance");
let Material95 = browser.currentScene.createNode("Material");
Material95.diffuseColor = new SFColor(new float[1,0,0]);
Appearance94.material = Material95;

Shape91.appearance = Appearance94;

HAnimSite89.children[1] = Shape91;

HAnimSegment41.children[13] = HAnimSite89;

let HAnimSite96 = browser.currentScene.createNode("HAnimSite");
HAnimSite96.name = "r_trochanterion_pt";
HAnimSite96.DEF = "hanim_r_trochanterion_pt";
HAnimSite96.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
//HAnimSite visualization shape
let TouchSensor97 = browser.currentScene.createNode("TouchSensor");
TouchSensor97.description = "HAnimSite r_trochanterion_pt";
HAnimSite96.children = new MFNode();

HAnimSite96.children[0] = TouchSensor97;

let Shape98 = browser.currentScene.createNode("Shape");
Shape98.USE = "HAnimSiteShape";
HAnimSite96.children[1] = Shape98;

HAnimSegment41.children[14] = HAnimSite96;

let HAnimSite99 = browser.currentScene.createNode("HAnimSite");
HAnimSite99.name = "l_iliocristale_pt";
HAnimSite99.DEF = "hanim_l_iliocristale_pt";
HAnimSite99.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
//HAnimSite visualization shape
let TouchSensor100 = browser.currentScene.createNode("TouchSensor");
TouchSensor100.description = "HAnimSite l_iliocristale_pt";
HAnimSite99.children = new MFNode();

HAnimSite99.children[0] = TouchSensor100;

let Shape101 = browser.currentScene.createNode("Shape");
Shape101.USE = "HAnimSiteShape";
HAnimSite99.children[1] = Shape101;

HAnimSegment41.children[15] = HAnimSite99;

let HAnimSite102 = browser.currentScene.createNode("HAnimSite");
HAnimSite102.name = "l_trochanterion_pt";
HAnimSite102.DEF = "hanim_l_trochanterion_pt";
HAnimSite102.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
//HAnimSite visualization shape
let TouchSensor103 = browser.currentScene.createNode("TouchSensor");
TouchSensor103.description = "HAnimSite l_trochanterion_pt";
HAnimSite102.children = new MFNode();

HAnimSite102.children[0] = TouchSensor103;

let Shape104 = browser.currentScene.createNode("Shape");
Shape104.USE = "HAnimSiteShape";
HAnimSite102.children[1] = Shape104;

HAnimSegment41.children[16] = HAnimSite102;

let HAnimSite105 = browser.currentScene.createNode("HAnimSite");
HAnimSite105.name = "r_asis_pt";
HAnimSite105.DEF = "hanim_r_asis_pt";
HAnimSite105.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
//HAnimSite visualization shape
let TouchSensor106 = browser.currentScene.createNode("TouchSensor");
TouchSensor106.description = "HAnimSite r_asis_pt";
HAnimSite105.children = new MFNode();

HAnimSite105.children[0] = TouchSensor106;

let Shape107 = browser.currentScene.createNode("Shape");
Shape107.USE = "HAnimSiteShape";
HAnimSite105.children[1] = Shape107;

HAnimSegment41.children[17] = HAnimSite105;

let HAnimSite108 = browser.currentScene.createNode("HAnimSite");
HAnimSite108.name = "l_asis_pt";
HAnimSite108.DEF = "hanim_l_asis_pt";
HAnimSite108.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
//HAnimSite visualization shape
let TouchSensor109 = browser.currentScene.createNode("TouchSensor");
TouchSensor109.description = "HAnimSite l_asis_pt";
HAnimSite108.children = new MFNode();

HAnimSite108.children[0] = TouchSensor109;

let Shape110 = browser.currentScene.createNode("Shape");
Shape110.USE = "HAnimSiteShape";
HAnimSite108.children[1] = Shape110;

HAnimSegment41.children[18] = HAnimSite108;

let HAnimSite111 = browser.currentScene.createNode("HAnimSite");
HAnimSite111.name = "r_psis_pt";
HAnimSite111.DEF = "hanim_r_psis_pt";
HAnimSite111.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
//HAnimSite visualization shape
let TouchSensor112 = browser.currentScene.createNode("TouchSensor");
TouchSensor112.description = "HAnimSite r_psis_pt";
HAnimSite111.children = new MFNode();

HAnimSite111.children[0] = TouchSensor112;

let Shape113 = browser.currentScene.createNode("Shape");
Shape113.USE = "HAnimSiteShape";
HAnimSite111.children[1] = Shape113;

HAnimSegment41.children[19] = HAnimSite111;

let HAnimSite114 = browser.currentScene.createNode("HAnimSite");
HAnimSite114.name = "l_psis_pt";
HAnimSite114.DEF = "hanim_l_psis_pt";
HAnimSite114.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
//HAnimSite visualization shape
let TouchSensor115 = browser.currentScene.createNode("TouchSensor");
TouchSensor115.description = "HAnimSite l_psis_pt";
HAnimSite114.children = new MFNode();

HAnimSite114.children[0] = TouchSensor115;

let Shape116 = browser.currentScene.createNode("Shape");
Shape116.USE = "HAnimSiteShape";
HAnimSite114.children[1] = Shape116;

HAnimSegment41.children[20] = HAnimSite114;

let HAnimSite117 = browser.currentScene.createNode("HAnimSite");
HAnimSite117.name = "crotch_pt";
HAnimSite117.DEF = "hanim_crotch_pt";
HAnimSite117.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
//HAnimSite visualization shape
let TouchSensor118 = browser.currentScene.createNode("TouchSensor");
TouchSensor118.description = "HAnimSite crotch_pt";
HAnimSite117.children = new MFNode();

HAnimSite117.children[0] = TouchSensor118;

let Shape119 = browser.currentScene.createNode("Shape");
Shape119.USE = "HAnimSiteShape";
HAnimSite117.children[1] = Shape119;

HAnimSegment41.children[21] = HAnimSite117;

HAnimJoint40.children = new MFNode();

HAnimJoint40.children[0] = HAnimSegment41;

let HAnimJoint120 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint120.name = "l_hip";
HAnimJoint120.DEF = "hanim_l_hip";
HAnimJoint120.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimJoint120.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment121 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment121.name = "l_thigh";
HAnimSegment121.DEF = "hanim_l_thigh";
//Visualization sphere for <HAnimJoint name='l_hip'/> is placed within <HAnimSegment name='l_thigh'/>
let TouchSensor122 = browser.currentScene.createNode("TouchSensor");
TouchSensor122.description = "HAnimJoint l_hip, HAnimSegment l_thigh";
HAnimSegment121.children = new MFNode();

HAnimSegment121.children[0] = TouchSensor122;

let Transform123 = browser.currentScene.createNode("Transform");
Transform123.translation = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
let Shape124 = browser.currentScene.createNode("Shape");
Shape124.USE = "HAnimJointShape";
Transform123.children = new MFNode();

Transform123.children[0] = Shape124;

HAnimSegment121.children[1] = Transform123;

//HAnimSegment visualization line from current <HAnimJoint name='l_hip'/> to child <HAnimJoint name='l_knee'/>
let Shape125 = browser.currentScene.createNode("Shape");
let LineSet126 = browser.currentScene.createNode("LineSet");
LineSet126.vertexCount = new MFInt32(new int[2]);
let Coordinate127 = browser.currentScene.createNode("Coordinate");
Coordinate127.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
LineSet126.coord = Coordinate127;

let ColorRGBA128 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA128.USE = "HAnimSegmentLineColorRGBA";
LineSet126.color = ColorRGBA128;

Shape125.geometry = LineSet126;

HAnimSegment121.children[2] = Shape125;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_knee_crease_pt'/>
let Shape129 = browser.currentScene.createNode("Shape");
let LineSet130 = browser.currentScene.createNode("LineSet");
LineSet130.vertexCount = new MFInt32(new int[2]);
let Coordinate131 = browser.currentScene.createNode("Coordinate");
Coordinate131.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309]);
LineSet130.coord = Coordinate131;

let ColorRGBA132 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA132.USE = "HAnimSiteLineColorRGBA";
LineSet130.color = ColorRGBA132;

Shape129.geometry = LineSet130;

HAnimSegment121.children[3] = Shape129;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_lateral_epicn_pt'/>
let Shape133 = browser.currentScene.createNode("Shape");
let LineSet134 = browser.currentScene.createNode("LineSet");
LineSet134.vertexCount = new MFInt32(new int[2]);
let Coordinate135 = browser.currentScene.createNode("Coordinate");
Coordinate135.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297]);
LineSet134.coord = Coordinate135;

let ColorRGBA136 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA136.USE = "HAnimSiteLineColorRGBA";
LineSet134.color = ColorRGBA136;

Shape133.geometry = LineSet134;

HAnimSegment121.children[4] = Shape133;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_medial_epicn_pt'/>
let Shape137 = browser.currentScene.createNode("Shape");
let LineSet138 = browser.currentScene.createNode("LineSet");
LineSet138.vertexCount = new MFInt32(new int[2]);
let Coordinate139 = browser.currentScene.createNode("Coordinate");
Coordinate139.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303]);
LineSet138.coord = Coordinate139;

let ColorRGBA140 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA140.USE = "HAnimSiteLineColorRGBA";
LineSet138.color = ColorRGBA140;

Shape137.geometry = LineSet138;

HAnimSegment121.children[5] = Shape137;

let HAnimSite141 = browser.currentScene.createNode("HAnimSite");
HAnimSite141.name = "l_knee_crease_pt";
HAnimSite141.DEF = "hanim_l_knee_crease_pt";
HAnimSite141.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
//HAnimSite visualization shape
let TouchSensor142 = browser.currentScene.createNode("TouchSensor");
TouchSensor142.description = "HAnimSite l_knee_crease_pt";
HAnimSite141.children = new MFNode();

HAnimSite141.children[0] = TouchSensor142;

let Shape143 = browser.currentScene.createNode("Shape");
Shape143.USE = "HAnimSiteShape";
HAnimSite141.children[1] = Shape143;

HAnimSegment121.children[6] = HAnimSite141;

let HAnimSite144 = browser.currentScene.createNode("HAnimSite");
HAnimSite144.name = "l_femoral_lateral_epicondyle_pt";
HAnimSite144.DEF = "hanim_l_femoral_lateral_epicondyle_pt";
HAnimSite144.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
//HAnimSite visualization shape
let TouchSensor145 = browser.currentScene.createNode("TouchSensor");
TouchSensor145.description = "HAnimSite l_femoral_lateral_epicn_pt";
HAnimSite144.children = new MFNode();

HAnimSite144.children[0] = TouchSensor145;

let Shape146 = browser.currentScene.createNode("Shape");
Shape146.USE = "HAnimSiteShape";
HAnimSite144.children[1] = Shape146;

HAnimSegment121.children[7] = HAnimSite144;

let HAnimSite147 = browser.currentScene.createNode("HAnimSite");
HAnimSite147.name = "l_femoral_medial_epicondyle_pt";
HAnimSite147.DEF = "hanim_l_femoral_medial_epicondyle_pt";
HAnimSite147.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
//HAnimSite visualization shape
let TouchSensor148 = browser.currentScene.createNode("TouchSensor");
TouchSensor148.description = "HAnimSite l_femoral_medial_epicn_pt";
HAnimSite147.children = new MFNode();

HAnimSite147.children[0] = TouchSensor148;

let Shape149 = browser.currentScene.createNode("Shape");
Shape149.USE = "HAnimSiteShape";
HAnimSite147.children[1] = Shape149;

HAnimSegment121.children[8] = HAnimSite147;

HAnimJoint120.children = new MFNode();

HAnimJoint120.children[0] = HAnimSegment121;

let HAnimJoint150 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint150.name = "l_knee";
HAnimJoint150.DEF = "hanim_l_knee";
HAnimJoint150.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimJoint150.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment151 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment151.name = "l_calf";
HAnimSegment151.DEF = "hanim_l_calf";
//Visualization sphere for <HAnimJoint name='l_knee'/> is placed within <HAnimSegment name='l_calf'/>
let TouchSensor152 = browser.currentScene.createNode("TouchSensor");
TouchSensor152.description = "HAnimJoint l_knee, HAnimSegment l_calf";
HAnimSegment151.children = new MFNode();

HAnimSegment151.children[0] = TouchSensor152;

let Transform153 = browser.currentScene.createNode("Transform");
Transform153.translation = new SFVec3f(new float[0.104,0.4867,0.0308]);
let Shape154 = browser.currentScene.createNode("Shape");
Shape154.USE = "HAnimJointShape";
Transform153.children = new MFNode();

Transform153.children[0] = Shape154;

HAnimSegment151.children[1] = Transform153;

//HAnimSegment visualization line from current <HAnimJoint name='l_knee'/> to child <HAnimJoint name='l_talocrural'/>
let Shape155 = browser.currentScene.createNode("Shape");
let LineSet156 = browser.currentScene.createNode("LineSet");
LineSet156.vertexCount = new MFInt32(new int[2]);
let Coordinate157 = browser.currentScene.createNode("Coordinate");
Coordinate157.point = new MFVec3f(new float[0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
LineSet156.coord = Coordinate157;

let ColorRGBA158 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA158.USE = "HAnimSegmentLineColorRGBA";
LineSet156.color = ColorRGBA158;

Shape155.geometry = LineSet156;

HAnimSegment151.children[2] = Shape155;

HAnimJoint150.children = new MFNode();

HAnimJoint150.children[0] = HAnimSegment151;

let HAnimJoint159 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint159.name = "l_talocrural";
HAnimJoint159.DEF = "hanim_l_talocrural";
HAnimJoint159.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint159.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment160 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment160.name = "l_talus";
HAnimSegment160.DEF = "hanim_l_talus";
//Visualization sphere for <HAnimJoint name='l_talocrural'/> is placed within <HAnimSegment name='l_talus'/>
let TouchSensor161 = browser.currentScene.createNode("TouchSensor");
TouchSensor161.description = "HAnimJoint l_talocrural, HAnimSegment l_talus";
HAnimSegment160.children = new MFNode();

HAnimSegment160.children[0] = TouchSensor161;

let Transform162 = browser.currentScene.createNode("Transform");
Transform162.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Shape163 = browser.currentScene.createNode("Shape");
Shape163.USE = "HAnimJointShape";
Transform162.children = new MFNode();

Transform162.children[0] = Shape163;

HAnimSegment160.children[1] = Transform162;

//HAnimSegment visualization line from current <HAnimJoint name='l_talocrural'/> to child <HAnimJoint name='l_tarsometatarsal_2'/>
let Shape164 = browser.currentScene.createNode("Shape");
let LineSet165 = browser.currentScene.createNode("LineSet");
LineSet165.vertexCount = new MFInt32(new int[2]);
let Coordinate166 = browser.currentScene.createNode("Coordinate");
Coordinate166.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368]);
LineSet165.coord = Coordinate166;

let ColorRGBA167 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA167.USE = "HAnimSegmentLineColorRGBA";
LineSet165.color = ColorRGBA167;

Shape164.geometry = LineSet165;

HAnimSegment160.children[2] = Shape164;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_talocrural'/> to <HAnimSite name='l_lateral_malleolus_pt'/>
let Shape168 = browser.currentScene.createNode("Shape");
let LineSet169 = browser.currentScene.createNode("LineSet");
LineSet169.vertexCount = new MFInt32(new int[2]);
let Coordinate170 = browser.currentScene.createNode("Coordinate");
Coordinate170.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032]);
LineSet169.coord = Coordinate170;

let ColorRGBA171 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA171.USE = "HAnimSiteLineColorRGBA";
LineSet169.color = ColorRGBA171;

Shape168.geometry = LineSet169;

HAnimSegment160.children[3] = Shape168;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_talocrural'/> to <HAnimSite name='l_medial_malleolus_pt'/>
let Shape172 = browser.currentScene.createNode("Shape");
let LineSet173 = browser.currentScene.createNode("LineSet");
LineSet173.vertexCount = new MFInt32(new int[2]);
let Coordinate174 = browser.currentScene.createNode("Coordinate");
Coordinate174.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881]);
LineSet173.coord = Coordinate174;

let ColorRGBA175 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA175.USE = "HAnimSiteLineColorRGBA";
LineSet173.color = ColorRGBA175;

Shape172.geometry = LineSet173;

HAnimSegment160.children[4] = Shape172;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_talocrural'/> to <HAnimSite name='l_sphyrion_pt'/>
let Shape176 = browser.currentScene.createNode("Shape");
let LineSet177 = browser.currentScene.createNode("LineSet");
LineSet177.vertexCount = new MFInt32(new int[2]);
let Coordinate178 = browser.currentScene.createNode("Coordinate");
Coordinate178.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943]);
LineSet177.coord = Coordinate178;

let ColorRGBA179 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA179.USE = "HAnimSiteLineColorRGBA";
LineSet177.color = ColorRGBA179;

Shape176.geometry = LineSet177;

HAnimSegment160.children[5] = Shape176;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_talocrural'/> to <HAnimSite name='l_calcaneous_post_pt'/>
let Shape180 = browser.currentScene.createNode("Shape");
let LineSet181 = browser.currentScene.createNode("LineSet");
LineSet181.vertexCount = new MFInt32(new int[2]);
let Coordinate182 = browser.currentScene.createNode("Coordinate");
Coordinate182.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171]);
LineSet181.coord = Coordinate182;

let ColorRGBA183 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA183.USE = "HAnimSiteLineColorRGBA";
LineSet181.color = ColorRGBA183;

Shape180.geometry = LineSet181;

HAnimSegment160.children[6] = Shape180;

let HAnimSite184 = browser.currentScene.createNode("HAnimSite");
HAnimSite184.name = "l_lateral_malleolus_pt";
HAnimSite184.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite184.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
//HAnimSite visualization shape
let TouchSensor185 = browser.currentScene.createNode("TouchSensor");
TouchSensor185.description = "HAnimSite l_lateral_malleolus_pt";
HAnimSite184.children = new MFNode();

HAnimSite184.children[0] = TouchSensor185;

let Shape186 = browser.currentScene.createNode("Shape");
Shape186.USE = "HAnimSiteShape";
HAnimSite184.children[1] = Shape186;

HAnimSegment160.children[7] = HAnimSite184;

let HAnimSite187 = browser.currentScene.createNode("HAnimSite");
HAnimSite187.name = "l_medial_malleolus_pt";
HAnimSite187.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite187.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
//HAnimSite visualization shape
let TouchSensor188 = browser.currentScene.createNode("TouchSensor");
TouchSensor188.description = "HAnimSite l_medial_malleolus_pt";
HAnimSite187.children = new MFNode();

HAnimSite187.children[0] = TouchSensor188;

let Shape189 = browser.currentScene.createNode("Shape");
Shape189.USE = "HAnimSiteShape";
HAnimSite187.children[1] = Shape189;

HAnimSegment160.children[8] = HAnimSite187;

let HAnimSite190 = browser.currentScene.createNode("HAnimSite");
HAnimSite190.name = "l_sphyrion_pt";
HAnimSite190.DEF = "hanim_l_sphyrion_pt";
HAnimSite190.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
//HAnimSite visualization shape
let TouchSensor191 = browser.currentScene.createNode("TouchSensor");
TouchSensor191.description = "HAnimSite l_sphyrion_pt";
HAnimSite190.children = new MFNode();

HAnimSite190.children[0] = TouchSensor191;

let Shape192 = browser.currentScene.createNode("Shape");
Shape192.USE = "HAnimSiteShape";
HAnimSite190.children[1] = Shape192;

HAnimSegment160.children[9] = HAnimSite190;

let HAnimSite193 = browser.currentScene.createNode("HAnimSite");
HAnimSite193.name = "l_calcaneus_posterior_pt";
HAnimSite193.DEF = "hanim_l_calcaneus_posterior_pt";
HAnimSite193.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
//HAnimSite visualization shape
let TouchSensor194 = browser.currentScene.createNode("TouchSensor");
TouchSensor194.description = "HAnimSite l_calcaneous_post_pt";
HAnimSite193.children = new MFNode();

HAnimSite193.children[0] = TouchSensor194;

let Shape195 = browser.currentScene.createNode("Shape");
Shape195.USE = "HAnimSiteShape";
HAnimSite193.children[1] = Shape195;

HAnimSegment160.children[10] = HAnimSite193;

HAnimJoint159.children = new MFNode();

HAnimJoint159.children[0] = HAnimSegment160;

let HAnimJoint196 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint196.name = "l_tarsometatarsal_2";
HAnimJoint196.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint196.center = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
HAnimJoint196.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment197 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment197.name = "l_metatarsal_2";
HAnimSegment197.DEF = "hanim_l_metatarsal_2";
//Visualization sphere for <HAnimJoint name='l_tarsometatarsal_2'/> is placed within <HAnimSegment name='l_metatarsal_2'/>
let TouchSensor198 = browser.currentScene.createNode("TouchSensor");
TouchSensor198.description = "HAnimJoint l_tarsometatarsal_2, HAnimSegment l_metatarsal_2";
HAnimSegment197.children = new MFNode();

HAnimSegment197.children[0] = TouchSensor198;

let Transform199 = browser.currentScene.createNode("Transform");
Transform199.translation = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
let Shape200 = browser.currentScene.createNode("Shape");
Shape200.USE = "HAnimJointShape";
Transform199.children = new MFNode();

Transform199.children[0] = Shape200;

HAnimSegment197.children[1] = Transform199;

//HAnimSegment visualization line from current <HAnimJoint name='l_tarsometatarsal_2'/> to child <HAnimJoint name='l_metatarsophalangeal_2'/>
let Shape201 = browser.currentScene.createNode("Shape");
let LineSet202 = browser.currentScene.createNode("LineSet");
LineSet202.vertexCount = new MFInt32(new int[2]);
let Coordinate203 = browser.currentScene.createNode("Coordinate");
Coordinate203.point = new MFVec3f(new float[0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368]);
LineSet202.coord = Coordinate203;

let ColorRGBA204 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA204.USE = "HAnimSegmentLineColorRGBA";
LineSet202.color = ColorRGBA204;

Shape201.geometry = LineSet202;

HAnimSegment197.children[2] = Shape201;

HAnimJoint196.children = new MFNode();

HAnimJoint196.children[0] = HAnimSegment197;

let HAnimJoint205 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint205.name = "l_metatarsophalangeal_2";
HAnimJoint205.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint205.center = new SFVec3f(new float[0.1086,0.0001,0.0368]);
HAnimJoint205.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment206 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment206.name = "l_tarsal_proximal_phalanx_2";
HAnimSegment206.DEF = "hanim_l_tarsal_proximal_phalanx_2";
//Visualization sphere for <HAnimJoint name='l_metatarsophalangeal_2'/> is placed within <HAnimSegment name='l_tarsal_proximal_phalanx_2'/>
let TouchSensor207 = browser.currentScene.createNode("TouchSensor");
TouchSensor207.description = "HAnimJoint l_metatarsophalangeal_2, HAnimSegment l_tarsal_proximal_phalanx_2";
HAnimSegment206.children = new MFNode();

HAnimSegment206.children[0] = TouchSensor207;

let Transform208 = browser.currentScene.createNode("Transform");
Transform208.translation = new SFVec3f(new float[0.1086,0.0001,0.0368]);
let Shape209 = browser.currentScene.createNode("Shape");
Shape209.USE = "HAnimJointShape";
Transform208.children = new MFNode();

Transform208.children[0] = Shape209;

HAnimSegment206.children[1] = Transform208;

//HAnimSegment visualization line from current <HAnimJoint name='l_metatarsophalangeal_2'/> to child <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/>
let Shape210 = browser.currentScene.createNode("Shape");
let LineSet211 = browser.currentScene.createNode("LineSet");
LineSet211.vertexCount = new MFInt32(new int[2]);
let Coordinate212 = browser.currentScene.createNode("Coordinate");
Coordinate212.point = new MFVec3f(new float[0.1086,0.0001,0.0368,0.1086,0,0.0762]);
LineSet211.coord = Coordinate212;

let ColorRGBA213 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA213.USE = "HAnimSegmentLineColorRGBA";
LineSet211.color = ColorRGBA213;

Shape210.geometry = LineSet211;

HAnimSegment206.children[2] = Shape210;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsophalangeal_2'/> to <HAnimSite name='l_metatarsal_pha1_pt'/>
let Shape214 = browser.currentScene.createNode("Shape");
let LineSet215 = browser.currentScene.createNode("LineSet");
LineSet215.vertexCount = new MFInt32(new int[2]);
let Coordinate216 = browser.currentScene.createNode("Coordinate");
Coordinate216.point = new MFVec3f(new float[0.1086,0.0001,0.0368,0.0816,0.0232,0.0106]);
LineSet215.coord = Coordinate216;

let ColorRGBA217 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA217.USE = "HAnimSiteLineColorRGBA";
LineSet215.color = ColorRGBA217;

Shape214.geometry = LineSet215;

HAnimSegment206.children[3] = Shape214;

let HAnimSite218 = browser.currentScene.createNode("HAnimSite");
HAnimSite218.name = "l_metatarsal_phalanx_1_pt";
HAnimSite218.DEF = "hanim_l_metatarsal_phalanx_1_pt";
HAnimSite218.translation = new SFVec3f(new float[0.0816,0.0232,0.0106]);
//HAnimSite visualization shape
let TouchSensor219 = browser.currentScene.createNode("TouchSensor");
TouchSensor219.description = "HAnimSite l_metatarsal_pha1_pt";
HAnimSite218.children = new MFNode();

HAnimSite218.children[0] = TouchSensor219;

let Shape220 = browser.currentScene.createNode("Shape");
Shape220.USE = "HAnimSiteShape";
HAnimSite218.children[1] = Shape220;

HAnimSegment206.children[4] = HAnimSite218;

HAnimJoint205.children = new MFNode();

HAnimJoint205.children[0] = HAnimSegment206;

let HAnimJoint221 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint221.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint221.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint221.center = new SFVec3f(new float[0.1086,0,0.0762]);
HAnimJoint221.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment222 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment222.name = "l_tarsal_distal_phalanx_2";
HAnimSegment222.DEF = "hanim_l_tarsal_distal_phalanx_2";
//Visualization sphere for <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> is placed within <HAnimSegment name='l_tarsal_distal_phalanx_2'/>
let TouchSensor223 = browser.currentScene.createNode("TouchSensor");
TouchSensor223.description = "HAnimJoint l_tarsal_distal_interphalangeal_2, HAnimSegment l_tarsal_distal_phalanx_2";
HAnimSegment222.children = new MFNode();

HAnimSegment222.children[0] = TouchSensor223;

let Transform224 = browser.currentScene.createNode("Transform");
Transform224.translation = new SFVec3f(new float[0.1086,0,0.0762]);
let Shape225 = browser.currentScene.createNode("Shape");
Shape225.USE = "HAnimJointShape";
Transform224.children = new MFNode();

Transform224.children[0] = Shape225;

HAnimSegment222.children[1] = Transform224;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='l_forefoot_tip'/>
let Shape226 = browser.currentScene.createNode("Shape");
let LineSet227 = browser.currentScene.createNode("LineSet");
LineSet227.vertexCount = new MFInt32(new int[2]);
let Coordinate228 = browser.currentScene.createNode("Coordinate");
Coordinate228.point = new MFVec3f(new float[0.1086,0,0.0762,0.1354,0.0016,0.1476]);
LineSet227.coord = Coordinate228;

let ColorRGBA229 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA229.USE = "HAnimSiteLineColorRGBA";
LineSet227.color = ColorRGBA229;

Shape226.geometry = LineSet227;

HAnimSegment222.children[2] = Shape226;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='l_metatarsal_pha5_pt'/>
let Shape230 = browser.currentScene.createNode("Shape");
let LineSet231 = browser.currentScene.createNode("LineSet");
LineSet231.vertexCount = new MFInt32(new int[2]);
let Coordinate232 = browser.currentScene.createNode("Coordinate");
Coordinate232.point = new MFVec3f(new float[0.1086,0,0.0762,0.1825,0.007,0.0928]);
LineSet231.coord = Coordinate232;

let ColorRGBA233 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA233.USE = "HAnimSiteLineColorRGBA";
LineSet231.color = ColorRGBA233;

Shape230.geometry = LineSet231;

HAnimSegment222.children[3] = Shape230;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='l_digit2_pt'/>
let Shape234 = browser.currentScene.createNode("Shape");
let LineSet235 = browser.currentScene.createNode("LineSet");
LineSet235.vertexCount = new MFInt32(new int[2]);
let Coordinate236 = browser.currentScene.createNode("Coordinate");
Coordinate236.point = new MFVec3f(new float[0.1086,0,0.0762,0.1195,0.0079,0.1433]);
LineSet235.coord = Coordinate236;

let ColorRGBA237 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA237.USE = "HAnimSiteLineColorRGBA";
LineSet235.color = ColorRGBA237;

Shape234.geometry = LineSet235;

HAnimSegment222.children[4] = Shape234;

let HAnimSite238 = browser.currentScene.createNode("HAnimSite");
HAnimSite238.name = "l_forefoot_tip_pt";
HAnimSite238.DEF = "hanim_l_forefoot_tip_pt";
HAnimSite238.translation = new SFVec3f(new float[0.1354,0.0016,0.1476]);
//HAnimSite visualization shape
let TouchSensor239 = browser.currentScene.createNode("TouchSensor");
TouchSensor239.description = "HAnimSite l_forefoot_tip";
HAnimSite238.children = new MFNode();

HAnimSite238.children[0] = TouchSensor239;

let Shape240 = browser.currentScene.createNode("Shape");
Shape240.USE = "HAnimSiteShape";
HAnimSite238.children[1] = Shape240;

HAnimSegment222.children[5] = HAnimSite238;

let HAnimSite241 = browser.currentScene.createNode("HAnimSite");
HAnimSite241.name = "l_metatarsal_phalanx_5_pt";
HAnimSite241.DEF = "hanim_l_metatarsal_phalanx_5_pt";
HAnimSite241.translation = new SFVec3f(new float[0.1825,0.007,0.0928]);
//HAnimSite visualization shape
let TouchSensor242 = browser.currentScene.createNode("TouchSensor");
TouchSensor242.description = "HAnimSite l_metatarsal_pha5_pt";
HAnimSite241.children = new MFNode();

HAnimSite241.children[0] = TouchSensor242;

let Shape243 = browser.currentScene.createNode("Shape");
Shape243.USE = "HAnimSiteShape";
HAnimSite241.children[1] = Shape243;

HAnimSegment222.children[6] = HAnimSite241;

let HAnimSite244 = browser.currentScene.createNode("HAnimSite");
HAnimSite244.name = "l_tarsal_distal_phalanx_2_pt";
HAnimSite244.DEF = "hanim_l_tarsal_distal_phalanx_2_pt";
HAnimSite244.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
//HAnimSite visualization shape
let TouchSensor245 = browser.currentScene.createNode("TouchSensor");
TouchSensor245.description = "HAnimSite l_digit2_pt";
HAnimSite244.children = new MFNode();

HAnimSite244.children[0] = TouchSensor245;

let Shape246 = browser.currentScene.createNode("Shape");
Shape246.USE = "HAnimSiteShape";
HAnimSite244.children[1] = Shape246;

HAnimSegment222.children[7] = HAnimSite244;

HAnimJoint221.children = new MFNode();

HAnimJoint221.children[0] = HAnimSegment222;

HAnimJoint205.children[1] = HAnimJoint221;

HAnimJoint196.children[1] = HAnimJoint205;

HAnimJoint159.children[1] = HAnimJoint196;

HAnimJoint150.children[1] = HAnimJoint159;

HAnimJoint120.children[1] = HAnimJoint150;

HAnimJoint40.children[1] = HAnimJoint120;

let HAnimJoint247 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint247.name = "r_hip";
HAnimJoint247.DEF = "hanim_r_hip";
HAnimJoint247.center = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
HAnimJoint247.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment248 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment248.name = "r_thigh";
HAnimSegment248.DEF = "hanim_r_thigh";
//Visualization sphere for <HAnimJoint name='r_hip'/> is placed within <HAnimSegment name='r_thigh'/>
let TouchSensor249 = browser.currentScene.createNode("TouchSensor");
TouchSensor249.description = "HAnimJoint r_hip, HAnimSegment r_thigh";
HAnimSegment248.children = new MFNode();

HAnimSegment248.children[0] = TouchSensor249;

let Transform250 = browser.currentScene.createNode("Transform");
Transform250.translation = new SFVec3f(new float[-0.0961,0.9124,-0.0001]);
let Shape251 = browser.currentScene.createNode("Shape");
Shape251.USE = "HAnimJointShape";
Transform250.children = new MFNode();

Transform250.children[0] = Shape251;

HAnimSegment248.children[1] = Transform250;

//HAnimSegment visualization line from current <HAnimJoint name='r_hip'/> to child <HAnimJoint name='r_knee'/>
let Shape252 = browser.currentScene.createNode("Shape");
let LineSet253 = browser.currentScene.createNode("LineSet");
LineSet253.vertexCount = new MFInt32(new int[2]);
let Coordinate254 = browser.currentScene.createNode("Coordinate");
Coordinate254.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308]);
LineSet253.coord = Coordinate254;

let ColorRGBA255 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA255.USE = "HAnimSegmentLineColorRGBA";
LineSet253.color = ColorRGBA255;

Shape252.geometry = LineSet253;

HAnimSegment248.children[2] = Shape252;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_knee_crease_pt'/>
let Shape256 = browser.currentScene.createNode("Shape");
let LineSet257 = browser.currentScene.createNode("LineSet");
LineSet257.vertexCount = new MFInt32(new int[2]);
let Coordinate258 = browser.currentScene.createNode("Coordinate");
Coordinate258.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326]);
LineSet257.coord = Coordinate258;

let ColorRGBA259 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA259.USE = "HAnimSiteLineColorRGBA";
LineSet257.color = ColorRGBA259;

Shape256.geometry = LineSet257;

HAnimSegment248.children[3] = Shape256;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_lateral_epicn_pt'/>
let Shape260 = browser.currentScene.createNode("Shape");
let LineSet261 = browser.currentScene.createNode("LineSet");
LineSet261.vertexCount = new MFInt32(new int[2]);
let Coordinate262 = browser.currentScene.createNode("Coordinate");
Coordinate262.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031]);
LineSet261.coord = Coordinate262;

let ColorRGBA263 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA263.USE = "HAnimSiteLineColorRGBA";
LineSet261.color = ColorRGBA263;

Shape260.geometry = LineSet261;

HAnimSegment248.children[4] = Shape260;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_medial_epicn_pt'/>
let Shape264 = browser.currentScene.createNode("Shape");
let LineSet265 = browser.currentScene.createNode("LineSet");
LineSet265.vertexCount = new MFInt32(new int[2]);
let Coordinate266 = browser.currentScene.createNode("Coordinate");
Coordinate266.point = new MFVec3f(new float[-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289]);
LineSet265.coord = Coordinate266;

let ColorRGBA267 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA267.USE = "HAnimSiteLineColorRGBA";
LineSet265.color = ColorRGBA267;

Shape264.geometry = LineSet265;

HAnimSegment248.children[5] = Shape264;

let HAnimSite268 = browser.currentScene.createNode("HAnimSite");
HAnimSite268.name = "r_knee_crease_pt";
HAnimSite268.DEF = "hanim_r_knee_crease_pt";
HAnimSite268.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
//HAnimSite visualization shape
let TouchSensor269 = browser.currentScene.createNode("TouchSensor");
TouchSensor269.description = "HAnimSite r_knee_crease_pt";
HAnimSite268.children = new MFNode();

HAnimSite268.children[0] = TouchSensor269;

let Shape270 = browser.currentScene.createNode("Shape");
Shape270.USE = "HAnimSiteShape";
HAnimSite268.children[1] = Shape270;

HAnimSegment248.children[6] = HAnimSite268;

let HAnimSite271 = browser.currentScene.createNode("HAnimSite");
HAnimSite271.name = "r_femoral_lateral_epicondyle_pt";
HAnimSite271.DEF = "hanim_r_femoral_lateral_epicondyle_pt";
HAnimSite271.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
//HAnimSite visualization shape
let TouchSensor272 = browser.currentScene.createNode("TouchSensor");
TouchSensor272.description = "HAnimSite r_femoral_lateral_epicn_pt";
HAnimSite271.children = new MFNode();

HAnimSite271.children[0] = TouchSensor272;

let Shape273 = browser.currentScene.createNode("Shape");
Shape273.USE = "HAnimSiteShape";
HAnimSite271.children[1] = Shape273;

HAnimSegment248.children[7] = HAnimSite271;

let HAnimSite274 = browser.currentScene.createNode("HAnimSite");
HAnimSite274.name = "r_femoral_medial_epicondyle_pt";
HAnimSite274.DEF = "hanim_r_femoral_medial_epicondyle_pt";
HAnimSite274.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
//HAnimSite visualization shape
let TouchSensor275 = browser.currentScene.createNode("TouchSensor");
TouchSensor275.description = "HAnimSite r_femoral_medial_epicn_pt";
HAnimSite274.children = new MFNode();

HAnimSite274.children[0] = TouchSensor275;

let Shape276 = browser.currentScene.createNode("Shape");
Shape276.USE = "HAnimSiteShape";
HAnimSite274.children[1] = Shape276;

HAnimSegment248.children[8] = HAnimSite274;

HAnimJoint247.children = new MFNode();

HAnimJoint247.children[0] = HAnimSegment248;

let HAnimJoint277 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint277.name = "r_knee";
HAnimJoint277.DEF = "hanim_r_knee";
HAnimJoint277.center = new SFVec3f(new float[-0.104,0.4867,0.0308]);
HAnimJoint277.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment278 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment278.name = "r_calf";
HAnimSegment278.DEF = "hanim_r_calf";
//Visualization sphere for <HAnimJoint name='r_knee'/> is placed within <HAnimSegment name='r_calf'/>
let TouchSensor279 = browser.currentScene.createNode("TouchSensor");
TouchSensor279.description = "HAnimJoint r_knee, HAnimSegment r_calf";
HAnimSegment278.children = new MFNode();

HAnimSegment278.children[0] = TouchSensor279;

let Transform280 = browser.currentScene.createNode("Transform");
Transform280.translation = new SFVec3f(new float[-0.104,0.4867,0.0308]);
let Shape281 = browser.currentScene.createNode("Shape");
Shape281.USE = "HAnimJointShape";
Transform280.children = new MFNode();

Transform280.children[0] = Shape281;

HAnimSegment278.children[1] = Transform280;

//HAnimSegment visualization line from current <HAnimJoint name='r_knee'/> to child <HAnimJoint name='r_talocrural'/>
let Shape282 = browser.currentScene.createNode("Shape");
let LineSet283 = browser.currentScene.createNode("LineSet");
LineSet283.vertexCount = new MFInt32(new int[2]);
let Coordinate284 = browser.currentScene.createNode("Coordinate");
Coordinate284.point = new MFVec3f(new float[-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736]);
LineSet283.coord = Coordinate284;

let ColorRGBA285 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA285.USE = "HAnimSegmentLineColorRGBA";
LineSet283.color = ColorRGBA285;

Shape282.geometry = LineSet283;

HAnimSegment278.children[2] = Shape282;

HAnimJoint277.children = new MFNode();

HAnimJoint277.children[0] = HAnimSegment278;

let HAnimJoint286 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint286.name = "r_talocrural";
HAnimJoint286.DEF = "hanim_r_talocrural";
HAnimJoint286.center = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
HAnimJoint286.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment287 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment287.name = "r_talus";
HAnimSegment287.DEF = "hanim_r_talus";
//Visualization sphere for <HAnimJoint name='r_talocrural'/> is placed within <HAnimSegment name='r_talus'/>
let TouchSensor288 = browser.currentScene.createNode("TouchSensor");
TouchSensor288.description = "HAnimJoint r_talocrural, HAnimSegment r_talus";
HAnimSegment287.children = new MFNode();

HAnimSegment287.children[0] = TouchSensor288;

let Transform289 = browser.currentScene.createNode("Transform");
Transform289.translation = new SFVec3f(new float[-0.1101,0.0656,-0.0736]);
let Shape290 = browser.currentScene.createNode("Shape");
Shape290.USE = "HAnimJointShape";
Transform289.children = new MFNode();

Transform289.children[0] = Shape290;

HAnimSegment287.children[1] = Transform289;

//HAnimSegment visualization line from current <HAnimJoint name='r_talocrural'/> to child <HAnimJoint name='r_tarsometatarsal_2'/>
let Shape291 = browser.currentScene.createNode("Shape");
let LineSet292 = browser.currentScene.createNode("LineSet");
LineSet292.vertexCount = new MFInt32(new int[2]);
let Coordinate293 = browser.currentScene.createNode("Coordinate");
Coordinate293.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368]);
LineSet292.coord = Coordinate293;

let ColorRGBA294 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA294.USE = "HAnimSegmentLineColorRGBA";
LineSet292.color = ColorRGBA294;

Shape291.geometry = LineSet292;

HAnimSegment287.children[2] = Shape291;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_talocrural'/> to <HAnimSite name='r_lateral_malleolus_pt'/>
let Shape295 = browser.currentScene.createNode("Shape");
let LineSet296 = browser.currentScene.createNode("LineSet");
LineSet296.vertexCount = new MFInt32(new int[2]);
let Coordinate297 = browser.currentScene.createNode("Coordinate");
Coordinate297.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075]);
LineSet296.coord = Coordinate297;

let ColorRGBA298 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA298.USE = "HAnimSiteLineColorRGBA";
LineSet296.color = ColorRGBA298;

Shape295.geometry = LineSet296;

HAnimSegment287.children[3] = Shape295;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_talocrural'/> to <HAnimSite name='r_medial_malleolus_pt'/>
let Shape299 = browser.currentScene.createNode("Shape");
let LineSet300 = browser.currentScene.createNode("LineSet");
LineSet300.vertexCount = new MFInt32(new int[2]);
let Coordinate301 = browser.currentScene.createNode("Coordinate");
Coordinate301.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928]);
LineSet300.coord = Coordinate301;

let ColorRGBA302 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA302.USE = "HAnimSiteLineColorRGBA";
LineSet300.color = ColorRGBA302;

Shape299.geometry = LineSet300;

HAnimSegment287.children[4] = Shape299;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_talocrural'/> to <HAnimSite name='r_sphyrion_pt'/>
let Shape303 = browser.currentScene.createNode("Shape");
let LineSet304 = browser.currentScene.createNode("LineSet");
LineSet304.vertexCount = new MFInt32(new int[2]);
let Coordinate305 = browser.currentScene.createNode("Coordinate");
Coordinate305.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002]);
LineSet304.coord = Coordinate305;

let ColorRGBA306 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA306.USE = "HAnimSiteLineColorRGBA";
LineSet304.color = ColorRGBA306;

Shape303.geometry = LineSet304;

HAnimSegment287.children[5] = Shape303;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_talocrural'/> to <HAnimSite name='r_calcaneous_post_pt'/>
let Shape307 = browser.currentScene.createNode("Shape");
let LineSet308 = browser.currentScene.createNode("LineSet");
LineSet308.vertexCount = new MFInt32(new int[2]);
let Coordinate309 = browser.currentScene.createNode("Coordinate");
Coordinate309.point = new MFVec3f(new float[-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221]);
LineSet308.coord = Coordinate309;

let ColorRGBA310 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA310.USE = "HAnimSiteLineColorRGBA";
LineSet308.color = ColorRGBA310;

Shape307.geometry = LineSet308;

HAnimSegment287.children[6] = Shape307;

let HAnimSite311 = browser.currentScene.createNode("HAnimSite");
HAnimSite311.name = "r_lateral_malleolus_pt";
HAnimSite311.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite311.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
//HAnimSite visualization shape
let TouchSensor312 = browser.currentScene.createNode("TouchSensor");
TouchSensor312.description = "HAnimSite r_lateral_malleolus_pt";
HAnimSite311.children = new MFNode();

HAnimSite311.children[0] = TouchSensor312;

let Shape313 = browser.currentScene.createNode("Shape");
Shape313.USE = "HAnimSiteShape";
HAnimSite311.children[1] = Shape313;

HAnimSegment287.children[7] = HAnimSite311;

let HAnimSite314 = browser.currentScene.createNode("HAnimSite");
HAnimSite314.name = "r_medial_malleolus_pt";
HAnimSite314.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite314.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
//HAnimSite visualization shape
let TouchSensor315 = browser.currentScene.createNode("TouchSensor");
TouchSensor315.description = "HAnimSite r_medial_malleolus_pt";
HAnimSite314.children = new MFNode();

HAnimSite314.children[0] = TouchSensor315;

let Shape316 = browser.currentScene.createNode("Shape");
Shape316.USE = "HAnimSiteShape";
HAnimSite314.children[1] = Shape316;

HAnimSegment287.children[8] = HAnimSite314;

let HAnimSite317 = browser.currentScene.createNode("HAnimSite");
HAnimSite317.name = "r_sphyrion_pt";
HAnimSite317.DEF = "hanim_r_sphyrion_pt";
HAnimSite317.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
//HAnimSite visualization shape
let TouchSensor318 = browser.currentScene.createNode("TouchSensor");
TouchSensor318.description = "HAnimSite r_sphyrion_pt";
HAnimSite317.children = new MFNode();

HAnimSite317.children[0] = TouchSensor318;

let Shape319 = browser.currentScene.createNode("Shape");
Shape319.USE = "HAnimSiteShape";
HAnimSite317.children[1] = Shape319;

HAnimSegment287.children[9] = HAnimSite317;

let HAnimSite320 = browser.currentScene.createNode("HAnimSite");
HAnimSite320.name = "r_calcaneus_posterior_pt";
HAnimSite320.DEF = "hanim_r_calcaneus_posterior_pt";
HAnimSite320.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
//HAnimSite visualization shape
let TouchSensor321 = browser.currentScene.createNode("TouchSensor");
TouchSensor321.description = "HAnimSite r_calcaneous_post_pt";
HAnimSite320.children = new MFNode();

HAnimSite320.children[0] = TouchSensor321;

let Shape322 = browser.currentScene.createNode("Shape");
Shape322.USE = "HAnimSiteShape";
HAnimSite320.children[1] = Shape322;

HAnimSegment287.children[10] = HAnimSite320;

HAnimJoint286.children = new MFNode();

HAnimJoint286.children[0] = HAnimSegment287;

let HAnimJoint323 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint323.name = "r_tarsometatarsal_2";
HAnimJoint323.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint323.center = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
HAnimJoint323.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment324 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment324.name = "r_metatarsal_2";
HAnimSegment324.DEF = "hanim_r_metatarsal_2";
//Visualization sphere for <HAnimJoint name='r_tarsometatarsal_2'/> is placed within <HAnimSegment name='r_metatarsal_2'/>
let TouchSensor325 = browser.currentScene.createNode("TouchSensor");
TouchSensor325.description = "HAnimJoint r_tarsometatarsal_2, HAnimSegment r_metatarsal_2";
HAnimSegment324.children = new MFNode();

HAnimSegment324.children[0] = TouchSensor325;

let Transform326 = browser.currentScene.createNode("Transform");
Transform326.translation = new SFVec3f(new float[-0.1086,0.0001,-0.0368]);
let Shape327 = browser.currentScene.createNode("Shape");
Shape327.USE = "HAnimJointShape";
Transform326.children = new MFNode();

Transform326.children[0] = Shape327;

HAnimSegment324.children[1] = Transform326;

//HAnimSegment visualization line from current <HAnimJoint name='r_tarsometatarsal_2'/> to child <HAnimJoint name='r_metatarsophalangeal_2'/>
let Shape328 = browser.currentScene.createNode("Shape");
let LineSet329 = browser.currentScene.createNode("LineSet");
LineSet329.vertexCount = new MFInt32(new int[2]);
let Coordinate330 = browser.currentScene.createNode("Coordinate");
Coordinate330.point = new MFVec3f(new float[-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368]);
LineSet329.coord = Coordinate330;

let ColorRGBA331 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA331.USE = "HAnimSegmentLineColorRGBA";
LineSet329.color = ColorRGBA331;

Shape328.geometry = LineSet329;

HAnimSegment324.children[2] = Shape328;

HAnimJoint323.children = new MFNode();

HAnimJoint323.children[0] = HAnimSegment324;

let HAnimJoint332 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint332.name = "r_metatarsophalangeal_2";
HAnimJoint332.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint332.center = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
HAnimJoint332.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment333 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment333.name = "r_tarsal_proximal_phalanx_2";
HAnimSegment333.DEF = "hanim_r_tarsal_proximal_phalanx_2";
//Visualization sphere for <HAnimJoint name='r_metatarsophalangeal_2'/> is placed within <HAnimSegment name='r_tarsal_proximal_phalanx_2'/>
let TouchSensor334 = browser.currentScene.createNode("TouchSensor");
TouchSensor334.description = "HAnimJoint r_metatarsophalangeal_2, HAnimSegment r_tarsal_proximal_phalanx_2";
HAnimSegment333.children = new MFNode();

HAnimSegment333.children[0] = TouchSensor334;

let Transform335 = browser.currentScene.createNode("Transform");
Transform335.translation = new SFVec3f(new float[-0.1086,0.0001,0.0368]);
let Shape336 = browser.currentScene.createNode("Shape");
Shape336.USE = "HAnimJointShape";
Transform335.children = new MFNode();

Transform335.children[0] = Shape336;

HAnimSegment333.children[1] = Transform335;

//HAnimSegment visualization line from current <HAnimJoint name='r_metatarsophalangeal_2'/> to child <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/>
let Shape337 = browser.currentScene.createNode("Shape");
let LineSet338 = browser.currentScene.createNode("LineSet");
LineSet338.vertexCount = new MFInt32(new int[2]);
let Coordinate339 = browser.currentScene.createNode("Coordinate");
Coordinate339.point = new MFVec3f(new float[-0.1086,0.0001,0.0368,-0.1086,0,0.0762]);
LineSet338.coord = Coordinate339;

let ColorRGBA340 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA340.USE = "HAnimSegmentLineColorRGBA";
LineSet338.color = ColorRGBA340;

Shape337.geometry = LineSet338;

HAnimSegment333.children[2] = Shape337;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsophalangeal_2'/> to <HAnimSite name='r_metatarsal_pha1_pt'/>
let Shape341 = browser.currentScene.createNode("Shape");
let LineSet342 = browser.currentScene.createNode("LineSet");
LineSet342.vertexCount = new MFInt32(new int[2]);
let Coordinate343 = browser.currentScene.createNode("Coordinate");
Coordinate343.point = new MFVec3f(new float[-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127]);
LineSet342.coord = Coordinate343;

let ColorRGBA344 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA344.USE = "HAnimSiteLineColorRGBA";
LineSet342.color = ColorRGBA344;

Shape341.geometry = LineSet342;

HAnimSegment333.children[3] = Shape341;

let HAnimSite345 = browser.currentScene.createNode("HAnimSite");
HAnimSite345.name = "r_metatarsal_phalanx_1_pt";
HAnimSite345.DEF = "hanim_r_metatarsal_phalanx_1_pt";
HAnimSite345.translation = new SFVec3f(new float[-0.0521,0.026,0.0127]);
//HAnimSite visualization shape
let TouchSensor346 = browser.currentScene.createNode("TouchSensor");
TouchSensor346.description = "HAnimSite r_metatarsal_pha1_pt";
HAnimSite345.children = new MFNode();

HAnimSite345.children[0] = TouchSensor346;

let Shape347 = browser.currentScene.createNode("Shape");
Shape347.USE = "HAnimSiteShape";
HAnimSite345.children[1] = Shape347;

HAnimSegment333.children[4] = HAnimSite345;

HAnimJoint332.children = new MFNode();

HAnimJoint332.children[0] = HAnimSegment333;

let HAnimJoint348 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint348.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint348.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint348.center = new SFVec3f(new float[-0.1086,0,0.0762]);
HAnimJoint348.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment349 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment349.name = "r_tarsal_distal_phalanx_2";
HAnimSegment349.DEF = "hanim_r_tarsal_distal_phalanx_2";
//Visualization sphere for <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> is placed within <HAnimSegment name='r_tarsal_distal_phalanx_2'/>
let TouchSensor350 = browser.currentScene.createNode("TouchSensor");
TouchSensor350.description = "HAnimJoint r_tarsal_distal_interphalangeal_2, HAnimSegment r_tarsal_distal_phalanx_2";
HAnimSegment349.children = new MFNode();

HAnimSegment349.children[0] = TouchSensor350;

let Transform351 = browser.currentScene.createNode("Transform");
Transform351.translation = new SFVec3f(new float[-0.1086,0,0.0762]);
let Shape352 = browser.currentScene.createNode("Shape");
Shape352.USE = "HAnimJointShape";
Transform351.children = new MFNode();

Transform351.children[0] = Shape352;

HAnimSegment349.children[1] = Transform351;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='r_forefoot_tip'/>
let Shape353 = browser.currentScene.createNode("Shape");
let LineSet354 = browser.currentScene.createNode("LineSet");
LineSet354.vertexCount = new MFInt32(new int[2]);
let Coordinate355 = browser.currentScene.createNode("Coordinate");
Coordinate355.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.1043,0.0227,0.145]);
LineSet354.coord = Coordinate355;

let ColorRGBA356 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA356.USE = "HAnimSiteLineColorRGBA";
LineSet354.color = ColorRGBA356;

Shape353.geometry = LineSet354;

HAnimSegment349.children[2] = Shape353;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='r_metatarsal_pha5_pt'/>
let Shape357 = browser.currentScene.createNode("Shape");
let LineSet358 = browser.currentScene.createNode("LineSet");
LineSet358.vertexCount = new MFInt32(new int[2]);
let Coordinate359 = browser.currentScene.createNode("Coordinate");
Coordinate359.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.1523,0.0166,0.0895]);
LineSet358.coord = Coordinate359;

let ColorRGBA360 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA360.USE = "HAnimSiteLineColorRGBA";
LineSet358.color = ColorRGBA360;

Shape357.geometry = LineSet358;

HAnimSegment349.children[3] = Shape357;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='r_digit2_pt'/>
let Shape361 = browser.currentScene.createNode("Shape");
let LineSet362 = browser.currentScene.createNode("LineSet");
LineSet362.vertexCount = new MFInt32(new int[2]);
let Coordinate363 = browser.currentScene.createNode("Coordinate");
Coordinate363.point = new MFVec3f(new float[-0.1086,0,0.0762,-0.0883,0.0134,0.1383]);
LineSet362.coord = Coordinate363;

let ColorRGBA364 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA364.USE = "HAnimSiteLineColorRGBA";
LineSet362.color = ColorRGBA364;

Shape361.geometry = LineSet362;

HAnimSegment349.children[4] = Shape361;

let HAnimSite365 = browser.currentScene.createNode("HAnimSite");
HAnimSite365.name = "r_forefoot_tip_pt";
HAnimSite365.DEF = "hanim_r_forefoot_tip_pt";
HAnimSite365.translation = new SFVec3f(new float[-0.1043,0.0227,0.145]);
//HAnimSite visualization shape
let TouchSensor366 = browser.currentScene.createNode("TouchSensor");
TouchSensor366.description = "HAnimSite r_forefoot_tip";
HAnimSite365.children = new MFNode();

HAnimSite365.children[0] = TouchSensor366;

let Shape367 = browser.currentScene.createNode("Shape");
Shape367.USE = "HAnimSiteShape";
HAnimSite365.children[1] = Shape367;

HAnimSegment349.children[5] = HAnimSite365;

let HAnimSite368 = browser.currentScene.createNode("HAnimSite");
HAnimSite368.name = "r_metatarsal_phalanx_5_pt";
HAnimSite368.DEF = "hanim_r_metatarsal_phalanx_5_pt";
HAnimSite368.translation = new SFVec3f(new float[-0.1523,0.0166,0.0895]);
//HAnimSite visualization shape
let TouchSensor369 = browser.currentScene.createNode("TouchSensor");
TouchSensor369.description = "HAnimSite r_metatarsal_pha5_pt";
HAnimSite368.children = new MFNode();

HAnimSite368.children[0] = TouchSensor369;

let Shape370 = browser.currentScene.createNode("Shape");
Shape370.USE = "HAnimSiteShape";
HAnimSite368.children[1] = Shape370;

HAnimSegment349.children[6] = HAnimSite368;

let HAnimSite371 = browser.currentScene.createNode("HAnimSite");
HAnimSite371.name = "r_tarsal_distal_phalanx_2_pt";
HAnimSite371.DEF = "hanim_r_tarsal_distal_phalanx_2_pt";
HAnimSite371.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
//HAnimSite visualization shape
let TouchSensor372 = browser.currentScene.createNode("TouchSensor");
TouchSensor372.description = "HAnimSite r_digit2_pt";
HAnimSite371.children = new MFNode();

HAnimSite371.children[0] = TouchSensor372;

let Shape373 = browser.currentScene.createNode("Shape");
Shape373.USE = "HAnimSiteShape";
HAnimSite371.children[1] = Shape373;

HAnimSegment349.children[7] = HAnimSite371;

HAnimJoint348.children = new MFNode();

HAnimJoint348.children[0] = HAnimSegment349;

HAnimJoint332.children[1] = HAnimJoint348;

HAnimJoint323.children[1] = HAnimJoint332;

HAnimJoint286.children[1] = HAnimJoint323;

HAnimJoint277.children[1] = HAnimJoint286;

HAnimJoint247.children[1] = HAnimJoint277;

HAnimJoint40.children[2] = HAnimJoint247;

HAnimJoint24.children[1] = HAnimJoint40;

let HAnimJoint374 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint374.name = "vl5";
HAnimJoint374.DEF = "hanim_vl5";
HAnimJoint374.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint374.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment375 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment375.name = "l5";
HAnimSegment375.DEF = "hanim_l5";
//Visualization sphere for <HAnimJoint name='vl5'/> is placed within <HAnimSegment name='l5'/>
let TouchSensor376 = browser.currentScene.createNode("TouchSensor");
TouchSensor376.description = "HAnimJoint vl5, HAnimSegment l5";
HAnimSegment375.children = new MFNode();

HAnimSegment375.children[0] = TouchSensor376;

let Transform377 = browser.currentScene.createNode("Transform");
Transform377.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
let Shape378 = browser.currentScene.createNode("Shape");
Shape378.USE = "HAnimJointShape";
Transform377.children = new MFNode();

Transform377.children[0] = Shape378;

HAnimSegment375.children[1] = Transform377;

//HAnimSegment visualization line from current <HAnimJoint name='vl5'/> to child <HAnimJoint name='vl4'/>
let Shape379 = browser.currentScene.createNode("Shape");
let LineSet380 = browser.currentScene.createNode("LineSet");
LineSet380.vertexCount = new MFInt32(new int[2]);
let Coordinate381 = browser.currentScene.createNode("Coordinate");
Coordinate381.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet380.coord = Coordinate381;

let ColorRGBA382 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA382.USE = "HAnimSegmentLineColorRGBA";
LineSet380.color = ColorRGBA382;

Shape379.geometry = LineSet380;

HAnimSegment375.children[2] = Shape379;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='waist_preferred_post_pt'/>
let Shape383 = browser.currentScene.createNode("Shape");
let LineSet384 = browser.currentScene.createNode("LineSet");
LineSet384.vertexCount = new MFInt32(new int[2]);
let Coordinate385 = browser.currentScene.createNode("Coordinate");
Coordinate385.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0,1.0915,-0.1091]);
LineSet384.coord = Coordinate385;

let ColorRGBA386 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA386.USE = "HAnimSiteLineColorRGBA";
LineSet384.color = ColorRGBA386;

Shape383.geometry = LineSet384;

HAnimSegment375.children[3] = Shape383;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='navel_pt'/>
let Shape387 = browser.currentScene.createNode("Shape");
let LineSet388 = browser.currentScene.createNode("LineSet");
LineSet388.vertexCount = new MFInt32(new int[2]);
let Coordinate389 = browser.currentScene.createNode("Coordinate");
Coordinate389.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017]);
LineSet388.coord = Coordinate389;

let ColorRGBA390 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA390.USE = "HAnimSiteLineColorRGBA";
LineSet388.color = ColorRGBA390;

Shape387.geometry = LineSet388;

HAnimSegment375.children[4] = Shape387;

let HAnimSite391 = browser.currentScene.createNode("HAnimSite");
HAnimSite391.name = "waist_preferred_posterior_pt";
HAnimSite391.DEF = "hanim_waist_preferred_posterior_pt";
HAnimSite391.translation = new SFVec3f(new float[0,1.0915,-0.1091]);
//HAnimSite visualization shape
let TouchSensor392 = browser.currentScene.createNode("TouchSensor");
TouchSensor392.description = "HAnimSite waist_preferred_post_pt";
HAnimSite391.children = new MFNode();

HAnimSite391.children[0] = TouchSensor392;

let Shape393 = browser.currentScene.createNode("Shape");
Shape393.USE = "HAnimSiteShape";
HAnimSite391.children[1] = Shape393;

HAnimSegment375.children[5] = HAnimSite391;

let HAnimSite394 = browser.currentScene.createNode("HAnimSite");
HAnimSite394.name = "navel_pt";
HAnimSite394.DEF = "hanim_navel_pt";
HAnimSite394.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
//HAnimSite visualization shape
let TouchSensor395 = browser.currentScene.createNode("TouchSensor");
TouchSensor395.description = "HAnimSite navel_pt";
HAnimSite394.children = new MFNode();

HAnimSite394.children[0] = TouchSensor395;

let Shape396 = browser.currentScene.createNode("Shape");
Shape396.USE = "HAnimSiteShape";
HAnimSite394.children[1] = Shape396;

HAnimSegment375.children[6] = HAnimSite394;

HAnimJoint374.children = new MFNode();

HAnimJoint374.children[0] = HAnimSegment375;

let HAnimJoint397 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint397.name = "vl4";
HAnimJoint397.DEF = "hanim_vl4";
HAnimJoint397.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint397.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment398 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment398.name = "l4";
HAnimSegment398.DEF = "hanim_l4";
//Visualization sphere for <HAnimJoint name='vl4'/> is placed within <HAnimSegment name='l4'/>
let TouchSensor399 = browser.currentScene.createNode("TouchSensor");
TouchSensor399.description = "HAnimJoint vl4, HAnimSegment l4";
HAnimSegment398.children = new MFNode();

HAnimSegment398.children[0] = TouchSensor399;

let Transform400 = browser.currentScene.createNode("Transform");
Transform400.translation = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
let Shape401 = browser.currentScene.createNode("Shape");
Shape401.USE = "HAnimJointShape";
Transform400.children = new MFNode();

Transform400.children[0] = Shape401;

HAnimSegment398.children[1] = Transform400;

//HAnimSegment visualization line from current <HAnimJoint name='vl4'/> to child <HAnimJoint name='vl3'/>
let Shape402 = browser.currentScene.createNode("Shape");
let LineSet403 = browser.currentScene.createNode("LineSet");
LineSet403.vertexCount = new MFInt32(new int[2]);
let Coordinate404 = browser.currentScene.createNode("Coordinate");
Coordinate404.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet403.coord = Coordinate404;

let ColorRGBA405 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA405.USE = "HAnimSegmentLineColorRGBA";
LineSet403.color = ColorRGBA405;

Shape402.geometry = LineSet403;

HAnimSegment398.children[2] = Shape402;

HAnimJoint397.children = new MFNode();

HAnimJoint397.children[0] = HAnimSegment398;

let HAnimJoint406 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint406.name = "vl3";
HAnimJoint406.DEF = "hanim_vl3";
HAnimJoint406.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint406.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment407 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment407.name = "l3";
HAnimSegment407.DEF = "hanim_l3";
//Visualization sphere for <HAnimJoint name='vl3'/> is placed within <HAnimSegment name='l3'/>
let TouchSensor408 = browser.currentScene.createNode("TouchSensor");
TouchSensor408.description = "HAnimJoint vl3, HAnimSegment l3";
HAnimSegment407.children = new MFNode();

HAnimSegment407.children[0] = TouchSensor408;

let Transform409 = browser.currentScene.createNode("Transform");
Transform409.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
let Shape410 = browser.currentScene.createNode("Shape");
Shape410.USE = "HAnimJointShape";
Transform409.children = new MFNode();

Transform409.children[0] = Shape410;

HAnimSegment407.children[1] = Transform409;

//HAnimSegment visualization line from current <HAnimJoint name='vl3'/> to child <HAnimJoint name='vl2'/>
let Shape411 = browser.currentScene.createNode("Shape");
let LineSet412 = browser.currentScene.createNode("LineSet");
LineSet412.vertexCount = new MFInt32(new int[2]);
let Coordinate413 = browser.currentScene.createNode("Coordinate");
Coordinate413.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet412.coord = Coordinate413;

let ColorRGBA414 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA414.USE = "HAnimSegmentLineColorRGBA";
LineSet412.color = ColorRGBA414;

Shape411.geometry = LineSet412;

HAnimSegment407.children[2] = Shape411;

HAnimJoint406.children = new MFNode();

HAnimJoint406.children[0] = HAnimSegment407;

let HAnimJoint415 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint415.name = "vl2";
HAnimJoint415.DEF = "hanim_vl2";
HAnimJoint415.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint415.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment416 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment416.name = "l2";
HAnimSegment416.DEF = "hanim_l2";
//Visualization sphere for <HAnimJoint name='vl2'/> is placed within <HAnimSegment name='l2'/>
let TouchSensor417 = browser.currentScene.createNode("TouchSensor");
TouchSensor417.description = "HAnimJoint vl2, HAnimSegment l2";
HAnimSegment416.children = new MFNode();

HAnimSegment416.children[0] = TouchSensor417;

let Transform418 = browser.currentScene.createNode("Transform");
Transform418.translation = new SFVec3f(new float[0.0045,1.1546,-0.08]);
let Shape419 = browser.currentScene.createNode("Shape");
Shape419.USE = "HAnimJointShape";
Transform418.children = new MFNode();

Transform418.children[0] = Shape419;

HAnimSegment416.children[1] = Transform418;

//HAnimSegment visualization line from current <HAnimJoint name='vl2'/> to child <HAnimJoint name='vl1'/>
let Shape420 = browser.currentScene.createNode("Shape");
let LineSet421 = browser.currentScene.createNode("LineSet");
LineSet421.vertexCount = new MFInt32(new int[2]);
let Coordinate422 = browser.currentScene.createNode("Coordinate");
Coordinate422.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet421.coord = Coordinate422;

let ColorRGBA423 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA423.USE = "HAnimSegmentLineColorRGBA";
LineSet421.color = ColorRGBA423;

Shape420.geometry = LineSet421;

HAnimSegment416.children[2] = Shape420;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='r_rib10_pt'/>
let Shape424 = browser.currentScene.createNode("Shape");
let LineSet425 = browser.currentScene.createNode("LineSet");
LineSet425.vertexCount = new MFInt32(new int[2]);
let Coordinate426 = browser.currentScene.createNode("Coordinate");
Coordinate426.point = new MFVec3f(new float[0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016]);
LineSet425.coord = Coordinate426;

let ColorRGBA427 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA427.USE = "HAnimSiteLineColorRGBA";
LineSet425.color = ColorRGBA427;

Shape424.geometry = LineSet425;

HAnimSegment416.children[3] = Shape424;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='l_rib10_pt'/>
let Shape428 = browser.currentScene.createNode("Shape");
let LineSet429 = browser.currentScene.createNode("LineSet");
LineSet429.vertexCount = new MFInt32(new int[2]);
let Coordinate430 = browser.currentScene.createNode("Coordinate");
Coordinate430.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0871,1.1925,0.0992]);
LineSet429.coord = Coordinate430;

let ColorRGBA431 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA431.USE = "HAnimSiteLineColorRGBA";
LineSet429.color = ColorRGBA431;

Shape428.geometry = LineSet429;

HAnimSegment416.children[4] = Shape428;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='rib10_midspine_pt'/>
let Shape432 = browser.currentScene.createNode("Shape");
let LineSet433 = browser.currentScene.createNode("LineSet");
LineSet433.vertexCount = new MFInt32(new int[2]);
let Coordinate434 = browser.currentScene.createNode("Coordinate");
Coordinate434.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113]);
LineSet433.coord = Coordinate434;

let ColorRGBA435 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA435.USE = "HAnimSiteLineColorRGBA";
LineSet433.color = ColorRGBA435;

Shape432.geometry = LineSet433;

HAnimSegment416.children[5] = Shape432;

let HAnimSite436 = browser.currentScene.createNode("HAnimSite");
HAnimSite436.name = "r_rib10_pt";
HAnimSite436.DEF = "hanim_r_rib10_pt";
HAnimSite436.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
//HAnimSite visualization shape
let TouchSensor437 = browser.currentScene.createNode("TouchSensor");
TouchSensor437.description = "HAnimSite r_rib10_pt";
HAnimSite436.children = new MFNode();

HAnimSite436.children[0] = TouchSensor437;

let Shape438 = browser.currentScene.createNode("Shape");
Shape438.USE = "HAnimSiteShape";
HAnimSite436.children[1] = Shape438;

HAnimSegment416.children[6] = HAnimSite436;

let HAnimSite439 = browser.currentScene.createNode("HAnimSite");
HAnimSite439.name = "l_rib10_pt";
HAnimSite439.DEF = "hanim_l_rib10_pt";
HAnimSite439.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
//HAnimSite visualization shape
let TouchSensor440 = browser.currentScene.createNode("TouchSensor");
TouchSensor440.description = "HAnimSite l_rib10_pt";
HAnimSite439.children = new MFNode();

HAnimSite439.children[0] = TouchSensor440;

let Shape441 = browser.currentScene.createNode("Shape");
Shape441.USE = "HAnimSiteShape";
HAnimSite439.children[1] = Shape441;

HAnimSegment416.children[7] = HAnimSite439;

let HAnimSite442 = browser.currentScene.createNode("HAnimSite");
HAnimSite442.name = "rib10_midspine_pt";
HAnimSite442.DEF = "hanim_rib10_midspine_pt";
HAnimSite442.translation = new SFVec3f(new float[0.0049,1.1908,-0.1113]);
//HAnimSite visualization shape
let TouchSensor443 = browser.currentScene.createNode("TouchSensor");
TouchSensor443.description = "HAnimSite rib10_midspine_pt";
HAnimSite442.children = new MFNode();

HAnimSite442.children[0] = TouchSensor443;

let Shape444 = browser.currentScene.createNode("Shape");
Shape444.USE = "HAnimSiteShape";
HAnimSite442.children[1] = Shape444;

HAnimSegment416.children[8] = HAnimSite442;

HAnimJoint415.children = new MFNode();

HAnimJoint415.children[0] = HAnimSegment416;

let HAnimJoint445 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint445.name = "vl1";
HAnimJoint445.DEF = "hanim_vl1";
HAnimJoint445.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint445.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment446 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment446.name = "l1";
HAnimSegment446.DEF = "hanim_l1";
//Visualization sphere for <HAnimJoint name='vl1'/> is placed within <HAnimSegment name='l1'/>
let TouchSensor447 = browser.currentScene.createNode("TouchSensor");
TouchSensor447.description = "HAnimJoint vl1, HAnimSegment l1";
HAnimSegment446.children = new MFNode();

HAnimSegment446.children[0] = TouchSensor447;

let Transform448 = browser.currentScene.createNode("Transform");
Transform448.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
let Shape449 = browser.currentScene.createNode("Shape");
Shape449.USE = "HAnimJointShape";
Transform448.children = new MFNode();

Transform448.children[0] = Shape449;

HAnimSegment446.children[1] = Transform448;

//HAnimSegment visualization line from current <HAnimJoint name='vl1'/> to child <HAnimJoint name='vt12'/>
let Shape450 = browser.currentScene.createNode("Shape");
let LineSet451 = browser.currentScene.createNode("LineSet");
LineSet451.vertexCount = new MFInt32(new int[2]);
let Coordinate452 = browser.currentScene.createNode("Coordinate");
Coordinate452.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet451.coord = Coordinate452;

let ColorRGBA453 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA453.USE = "HAnimSegmentLineColorRGBA";
LineSet451.color = ColorRGBA453;

Shape450.geometry = LineSet451;

HAnimSegment446.children[2] = Shape450;

HAnimJoint445.children = new MFNode();

HAnimJoint445.children[0] = HAnimSegment446;

let HAnimJoint454 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint454.name = "vt12";
HAnimJoint454.DEF = "hanim_vt12";
HAnimJoint454.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint454.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment455 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment455.name = "t12";
HAnimSegment455.DEF = "hanim_t12";
//Visualization sphere for <HAnimJoint name='vt12'/> is placed within <HAnimSegment name='t12'/>
let TouchSensor456 = browser.currentScene.createNode("TouchSensor");
TouchSensor456.description = "HAnimJoint vt12, HAnimSegment t12";
HAnimSegment455.children = new MFNode();

HAnimSegment455.children[0] = TouchSensor456;

let Transform457 = browser.currentScene.createNode("Transform");
Transform457.translation = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
let Shape458 = browser.currentScene.createNode("Shape");
Shape458.USE = "HAnimJointShape";
Transform457.children = new MFNode();

Transform457.children[0] = Shape458;

HAnimSegment455.children[1] = Transform457;

//HAnimSegment visualization line from current <HAnimJoint name='vt12'/> to child <HAnimJoint name='vt11'/>
let Shape459 = browser.currentScene.createNode("Shape");
let LineSet460 = browser.currentScene.createNode("LineSet");
LineSet460.vertexCount = new MFInt32(new int[2]);
let Coordinate461 = browser.currentScene.createNode("Coordinate");
Coordinate461.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet460.coord = Coordinate461;

let ColorRGBA462 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA462.USE = "HAnimSegmentLineColorRGBA";
LineSet460.color = ColorRGBA462;

Shape459.geometry = LineSet460;

HAnimSegment455.children[2] = Shape459;

HAnimJoint454.children = new MFNode();

HAnimJoint454.children[0] = HAnimSegment455;

let HAnimJoint463 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint463.name = "vt11";
HAnimJoint463.DEF = "hanim_vt11";
HAnimJoint463.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint463.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment464 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment464.name = "t11";
HAnimSegment464.DEF = "hanim_t11";
//Visualization sphere for <HAnimJoint name='vt11'/> is placed within <HAnimSegment name='t11'/>
let TouchSensor465 = browser.currentScene.createNode("TouchSensor");
TouchSensor465.description = "HAnimJoint vt11, HAnimSegment t11";
HAnimSegment464.children = new MFNode();

HAnimSegment464.children[0] = TouchSensor465;

let Transform466 = browser.currentScene.createNode("Transform");
Transform466.translation = new SFVec3f(new float[0.0053,1.2679,-0.081]);
let Shape467 = browser.currentScene.createNode("Shape");
Shape467.USE = "HAnimJointShape";
Transform466.children = new MFNode();

Transform466.children[0] = Shape467;

HAnimSegment464.children[1] = Transform466;

//HAnimSegment visualization line from current <HAnimJoint name='vt11'/> to child <HAnimJoint name='vt10'/>
let Shape468 = browser.currentScene.createNode("Shape");
let LineSet469 = browser.currentScene.createNode("LineSet");
LineSet469.vertexCount = new MFInt32(new int[2]);
let Coordinate470 = browser.currentScene.createNode("Coordinate");
Coordinate470.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet469.coord = Coordinate470;

let ColorRGBA471 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA471.USE = "HAnimSegmentLineColorRGBA";
LineSet469.color = ColorRGBA471;

Shape468.geometry = LineSet469;

HAnimSegment464.children[2] = Shape468;

HAnimJoint463.children = new MFNode();

HAnimJoint463.children[0] = HAnimSegment464;

let HAnimJoint472 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint472.name = "vt10";
HAnimJoint472.DEF = "hanim_vt10";
HAnimJoint472.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint472.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment473 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment473.name = "t10";
HAnimSegment473.DEF = "hanim_t10";
//Visualization sphere for <HAnimJoint name='vt10'/> is placed within <HAnimSegment name='t10'/>
let TouchSensor474 = browser.currentScene.createNode("TouchSensor");
TouchSensor474.description = "HAnimJoint vt10, HAnimSegment t10";
HAnimSegment473.children = new MFNode();

HAnimSegment473.children[0] = TouchSensor474;

let Transform475 = browser.currentScene.createNode("Transform");
Transform475.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
let Shape476 = browser.currentScene.createNode("Shape");
Shape476.USE = "HAnimJointShape";
Transform475.children = new MFNode();

Transform475.children[0] = Shape476;

HAnimSegment473.children[1] = Transform475;

//HAnimSegment visualization line from current <HAnimJoint name='vt10'/> to child <HAnimJoint name='vt9'/>
let Shape477 = browser.currentScene.createNode("Shape");
let LineSet478 = browser.currentScene.createNode("LineSet");
LineSet478.vertexCount = new MFInt32(new int[2]);
let Coordinate479 = browser.currentScene.createNode("Coordinate");
Coordinate479.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet478.coord = Coordinate479;

let ColorRGBA480 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA480.USE = "HAnimSegmentLineColorRGBA";
LineSet478.color = ColorRGBA480;

Shape477.geometry = LineSet478;

HAnimSegment473.children[2] = Shape477;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt10'/> to <HAnimSite name='substernale_pt'/>
let Shape481 = browser.currentScene.createNode("Shape");
let LineSet482 = browser.currentScene.createNode("LineSet");
LineSet482.vertexCount = new MFInt32(new int[2]);
let Coordinate483 = browser.currentScene.createNode("Coordinate");
Coordinate483.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147]);
LineSet482.coord = Coordinate483;

let ColorRGBA484 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA484.USE = "HAnimSiteLineColorRGBA";
LineSet482.color = ColorRGBA484;

Shape481.geometry = LineSet482;

HAnimSegment473.children[3] = Shape481;

let HAnimSite485 = browser.currentScene.createNode("HAnimSite");
HAnimSite485.name = "substernale_pt";
HAnimSite485.DEF = "hanim_substernale_pt";
HAnimSite485.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
//HAnimSite visualization shape
let TouchSensor486 = browser.currentScene.createNode("TouchSensor");
TouchSensor486.description = "HAnimSite substernale_pt";
HAnimSite485.children = new MFNode();

HAnimSite485.children[0] = TouchSensor486;

let Shape487 = browser.currentScene.createNode("Shape");
Shape487.USE = "HAnimSiteShape";
HAnimSite485.children[1] = Shape487;

HAnimSegment473.children[4] = HAnimSite485;

HAnimJoint472.children = new MFNode();

HAnimJoint472.children[0] = HAnimSegment473;

let HAnimJoint488 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint488.name = "vt9";
HAnimJoint488.DEF = "hanim_vt9";
HAnimJoint488.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint488.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment489 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment489.name = "t9";
HAnimSegment489.DEF = "hanim_t9";
//Visualization sphere for <HAnimJoint name='vt9'/> is placed within <HAnimSegment name='t9'/>
let TouchSensor490 = browser.currentScene.createNode("TouchSensor");
TouchSensor490.description = "HAnimJoint vt9, HAnimSegment t9";
HAnimSegment489.children = new MFNode();

HAnimSegment489.children[0] = TouchSensor490;

let Transform491 = browser.currentScene.createNode("Transform");
Transform491.translation = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
let Shape492 = browser.currentScene.createNode("Shape");
Shape492.USE = "HAnimJointShape";
Transform491.children = new MFNode();

Transform491.children[0] = Shape492;

HAnimSegment489.children[1] = Transform491;

//HAnimSegment visualization line from current <HAnimJoint name='vt9'/> to child <HAnimJoint name='vt8'/>
let Shape493 = browser.currentScene.createNode("Shape");
let LineSet494 = browser.currentScene.createNode("LineSet");
LineSet494.vertexCount = new MFInt32(new int[2]);
let Coordinate495 = browser.currentScene.createNode("Coordinate");
Coordinate495.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet494.coord = Coordinate495;

let ColorRGBA496 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA496.USE = "HAnimSegmentLineColorRGBA";
LineSet494.color = ColorRGBA496;

Shape493.geometry = LineSet494;

HAnimSegment489.children[2] = Shape493;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='r_thelion_pt'/>
let Shape497 = browser.currentScene.createNode("Shape");
let LineSet498 = browser.currentScene.createNode("LineSet");
LineSet498.vertexCount = new MFInt32(new int[2]);
let Coordinate499 = browser.currentScene.createNode("Coordinate");
Coordinate499.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217]);
LineSet498.coord = Coordinate499;

let ColorRGBA500 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA500.USE = "HAnimSiteLineColorRGBA";
LineSet498.color = ColorRGBA500;

Shape497.geometry = LineSet498;

HAnimSegment489.children[3] = Shape497;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='l_thelion_pt'/>
let Shape501 = browser.currentScene.createNode("Shape");
let LineSet502 = browser.currentScene.createNode("LineSet");
LineSet502.vertexCount = new MFInt32(new int[2]);
let Coordinate503 = browser.currentScene.createNode("Coordinate");
Coordinate503.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192]);
LineSet502.coord = Coordinate503;

let ColorRGBA504 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA504.USE = "HAnimSiteLineColorRGBA";
LineSet502.color = ColorRGBA504;

Shape501.geometry = LineSet502;

HAnimSegment489.children[4] = Shape501;

let HAnimSite505 = browser.currentScene.createNode("HAnimSite");
HAnimSite505.name = "r_thelion_pt";
HAnimSite505.DEF = "hanim_r_thelion_pt";
HAnimSite505.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
//HAnimSite visualization shape
let TouchSensor506 = browser.currentScene.createNode("TouchSensor");
TouchSensor506.description = "HAnimSite r_thelion_pt";
HAnimSite505.children = new MFNode();

HAnimSite505.children[0] = TouchSensor506;

let Shape507 = browser.currentScene.createNode("Shape");
Shape507.USE = "HAnimSiteShape";
HAnimSite505.children[1] = Shape507;

HAnimSegment489.children[5] = HAnimSite505;

let HAnimSite508 = browser.currentScene.createNode("HAnimSite");
HAnimSite508.name = "l_thelion_pt";
HAnimSite508.DEF = "hanim_l_thelion_pt";
HAnimSite508.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
//HAnimSite visualization shape
let TouchSensor509 = browser.currentScene.createNode("TouchSensor");
TouchSensor509.description = "HAnimSite l_thelion_pt";
HAnimSite508.children = new MFNode();

HAnimSite508.children[0] = TouchSensor509;

let Shape510 = browser.currentScene.createNode("Shape");
Shape510.USE = "HAnimSiteShape";
HAnimSite508.children[1] = Shape510;

HAnimSegment489.children[6] = HAnimSite508;

HAnimJoint488.children = new MFNode();

HAnimJoint488.children[0] = HAnimSegment489;

let HAnimJoint511 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint511.name = "vt8";
HAnimJoint511.DEF = "hanim_vt8";
HAnimJoint511.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint511.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment512 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment512.name = "t8";
HAnimSegment512.DEF = "hanim_t8";
//Visualization sphere for <HAnimJoint name='vt8'/> is placed within <HAnimSegment name='t8'/>
let TouchSensor513 = browser.currentScene.createNode("TouchSensor");
TouchSensor513.description = "HAnimJoint vt8, HAnimSegment t8";
HAnimSegment512.children = new MFNode();

HAnimSegment512.children[0] = TouchSensor513;

let Transform514 = browser.currentScene.createNode("Transform");
Transform514.translation = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
let Shape515 = browser.currentScene.createNode("Shape");
Shape515.USE = "HAnimJointShape";
Transform514.children = new MFNode();

Transform514.children[0] = Shape515;

HAnimSegment512.children[1] = Transform514;

//HAnimSegment visualization line from current <HAnimJoint name='vt8'/> to child <HAnimJoint name='vt7'/>
let Shape516 = browser.currentScene.createNode("Shape");
let LineSet517 = browser.currentScene.createNode("LineSet");
LineSet517.vertexCount = new MFInt32(new int[2]);
let Coordinate518 = browser.currentScene.createNode("Coordinate");
Coordinate518.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet517.coord = Coordinate518;

let ColorRGBA519 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA519.USE = "HAnimSegmentLineColorRGBA";
LineSet517.color = ColorRGBA519;

Shape516.geometry = LineSet517;

HAnimSegment512.children[2] = Shape516;

HAnimJoint511.children = new MFNode();

HAnimJoint511.children[0] = HAnimSegment512;

let HAnimJoint520 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint520.name = "vt7";
HAnimJoint520.DEF = "hanim_vt7";
HAnimJoint520.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint520.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment521 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment521.name = "t7";
HAnimSegment521.DEF = "hanim_t7";
//Visualization sphere for <HAnimJoint name='vt7'/> is placed within <HAnimSegment name='t7'/>
let TouchSensor522 = browser.currentScene.createNode("TouchSensor");
TouchSensor522.description = "HAnimJoint vt7, HAnimSegment t7";
HAnimSegment521.children = new MFNode();

HAnimSegment521.children[0] = TouchSensor522;

let Transform523 = browser.currentScene.createNode("Transform");
Transform523.translation = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
let Shape524 = browser.currentScene.createNode("Shape");
Shape524.USE = "HAnimJointShape";
Transform523.children = new MFNode();

Transform523.children[0] = Shape524;

HAnimSegment521.children[1] = Transform523;

//HAnimSegment visualization line from current <HAnimJoint name='vt7'/> to child <HAnimJoint name='vt6'/>
let Shape525 = browser.currentScene.createNode("Shape");
let LineSet526 = browser.currentScene.createNode("LineSet");
LineSet526.vertexCount = new MFInt32(new int[2]);
let Coordinate527 = browser.currentScene.createNode("Coordinate");
Coordinate527.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet526.coord = Coordinate527;

let ColorRGBA528 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA528.USE = "HAnimSegmentLineColorRGBA";
LineSet526.color = ColorRGBA528;

Shape525.geometry = LineSet526;

HAnimSegment521.children[2] = Shape525;

HAnimJoint520.children = new MFNode();

HAnimJoint520.children[0] = HAnimSegment521;

let HAnimJoint529 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint529.name = "vt6";
HAnimJoint529.DEF = "hanim_vt6";
HAnimJoint529.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint529.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment530 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment530.name = "t6";
HAnimSegment530.DEF = "hanim_t6";
//Visualization sphere for <HAnimJoint name='vt6'/> is placed within <HAnimSegment name='t6'/>
let TouchSensor531 = browser.currentScene.createNode("TouchSensor");
TouchSensor531.description = "HAnimJoint vt6, HAnimSegment t6";
HAnimSegment530.children = new MFNode();

HAnimSegment530.children[0] = TouchSensor531;

let Transform532 = browser.currentScene.createNode("Transform");
Transform532.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
let Shape533 = browser.currentScene.createNode("Shape");
Shape533.USE = "HAnimJointShape";
Transform532.children = new MFNode();

Transform532.children[0] = Shape533;

HAnimSegment530.children[1] = Transform532;

//HAnimSegment visualization line from current <HAnimJoint name='vt6'/> to child <HAnimJoint name='vt5'/>
let Shape534 = browser.currentScene.createNode("Shape");
let LineSet535 = browser.currentScene.createNode("LineSet");
LineSet535.vertexCount = new MFInt32(new int[2]);
let Coordinate536 = browser.currentScene.createNode("Coordinate");
Coordinate536.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet535.coord = Coordinate536;

let ColorRGBA537 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA537.USE = "HAnimSegmentLineColorRGBA";
LineSet535.color = ColorRGBA537;

Shape534.geometry = LineSet535;

HAnimSegment530.children[2] = Shape534;

HAnimJoint529.children = new MFNode();

HAnimJoint529.children[0] = HAnimSegment530;

let HAnimJoint538 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint538.name = "vt5";
HAnimJoint538.DEF = "hanim_vt5";
HAnimJoint538.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint538.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment539 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment539.name = "t5";
HAnimSegment539.DEF = "hanim_t5";
//Visualization sphere for <HAnimJoint name='vt5'/> is placed within <HAnimSegment name='t5'/>
let TouchSensor540 = browser.currentScene.createNode("TouchSensor");
TouchSensor540.description = "HAnimJoint vt5, HAnimSegment t5";
HAnimSegment539.children = new MFNode();

HAnimSegment539.children[0] = TouchSensor540;

let Transform541 = browser.currentScene.createNode("Transform");
Transform541.translation = new SFVec3f(new float[0.006,1.4102,-0.0745]);
let Shape542 = browser.currentScene.createNode("Shape");
Shape542.USE = "HAnimJointShape";
Transform541.children = new MFNode();

Transform541.children[0] = Shape542;

HAnimSegment539.children[1] = Transform541;

//HAnimSegment visualization line from current <HAnimJoint name='vt5'/> to child <HAnimJoint name='vt4'/>
let Shape543 = browser.currentScene.createNode("Shape");
let LineSet544 = browser.currentScene.createNode("LineSet");
LineSet544.vertexCount = new MFInt32(new int[2]);
let Coordinate545 = browser.currentScene.createNode("Coordinate");
Coordinate545.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet544.coord = Coordinate545;

let ColorRGBA546 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA546.USE = "HAnimSegmentLineColorRGBA";
LineSet544.color = ColorRGBA546;

Shape543.geometry = LineSet544;

HAnimSegment539.children[2] = Shape543;

HAnimJoint538.children = new MFNode();

HAnimJoint538.children[0] = HAnimSegment539;

let HAnimJoint547 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint547.name = "vt4";
HAnimJoint547.DEF = "hanim_vt4";
HAnimJoint547.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint547.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment548 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment548.name = "t4";
HAnimSegment548.DEF = "hanim_t4";
//Visualization sphere for <HAnimJoint name='vt4'/> is placed within <HAnimSegment name='t4'/>
let TouchSensor549 = browser.currentScene.createNode("TouchSensor");
TouchSensor549.description = "HAnimJoint vt4, HAnimSegment t4";
HAnimSegment548.children = new MFNode();

HAnimSegment548.children[0] = TouchSensor549;

let Transform550 = browser.currentScene.createNode("Transform");
Transform550.translation = new SFVec3f(new float[0.0061,1.432,-0.0675]);
let Shape551 = browser.currentScene.createNode("Shape");
Shape551.USE = "HAnimJointShape";
Transform550.children = new MFNode();

Transform550.children[0] = Shape551;

HAnimSegment548.children[1] = Transform550;

//HAnimSegment visualization line from current <HAnimJoint name='vt4'/> to child <HAnimJoint name='vt3'/>
let Shape552 = browser.currentScene.createNode("Shape");
let LineSet553 = browser.currentScene.createNode("LineSet");
LineSet553.vertexCount = new MFInt32(new int[2]);
let Coordinate554 = browser.currentScene.createNode("Coordinate");
Coordinate554.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet553.coord = Coordinate554;

let ColorRGBA555 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA555.USE = "HAnimSegmentLineColorRGBA";
LineSet553.color = ColorRGBA555;

Shape552.geometry = LineSet553;

HAnimSegment548.children[2] = Shape552;

HAnimJoint547.children = new MFNode();

HAnimJoint547.children[0] = HAnimSegment548;

let HAnimJoint556 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint556.name = "vt3";
HAnimJoint556.DEF = "hanim_vt3";
HAnimJoint556.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint556.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment557 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment557.name = "t3";
HAnimSegment557.DEF = "hanim_t3";
//Visualization sphere for <HAnimJoint name='vt3'/> is placed within <HAnimSegment name='t3'/>
let TouchSensor558 = browser.currentScene.createNode("TouchSensor");
TouchSensor558.description = "HAnimJoint vt3, HAnimSegment t3";
HAnimSegment557.children = new MFNode();

HAnimSegment557.children[0] = TouchSensor558;

let Transform559 = browser.currentScene.createNode("Transform");
Transform559.translation = new SFVec3f(new float[0.0062,1.4583,-0.057]);
let Shape560 = browser.currentScene.createNode("Shape");
Shape560.USE = "HAnimJointShape";
Transform559.children = new MFNode();

Transform559.children[0] = Shape560;

HAnimSegment557.children[1] = Transform559;

//HAnimSegment visualization line from current <HAnimJoint name='vt3'/> to child <HAnimJoint name='vt2'/>
let Shape561 = browser.currentScene.createNode("Shape");
let LineSet562 = browser.currentScene.createNode("LineSet");
LineSet562.vertexCount = new MFInt32(new int[2]);
let Coordinate563 = browser.currentScene.createNode("Coordinate");
Coordinate563.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet562.coord = Coordinate563;

let ColorRGBA564 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA564.USE = "HAnimSegmentLineColorRGBA";
LineSet562.color = ColorRGBA564;

Shape561.geometry = LineSet562;

HAnimSegment557.children[2] = Shape561;

HAnimJoint556.children = new MFNode();

HAnimJoint556.children[0] = HAnimSegment557;

let HAnimJoint565 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint565.name = "vt2";
HAnimJoint565.DEF = "hanim_vt2";
HAnimJoint565.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint565.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment566 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment566.name = "t2";
HAnimSegment566.DEF = "hanim_t2";
//Visualization sphere for <HAnimJoint name='vt2'/> is placed within <HAnimSegment name='t2'/>
let TouchSensor567 = browser.currentScene.createNode("TouchSensor");
TouchSensor567.description = "HAnimJoint vt2, HAnimSegment t2";
HAnimSegment566.children = new MFNode();

HAnimSegment566.children[0] = TouchSensor567;

let Transform568 = browser.currentScene.createNode("Transform");
Transform568.translation = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
let Shape569 = browser.currentScene.createNode("Shape");
Shape569.USE = "HAnimJointShape";
Transform568.children = new MFNode();

Transform568.children[0] = Shape569;

HAnimSegment566.children[1] = Transform568;

//HAnimSegment visualization line from current <HAnimJoint name='vt2'/> to child <HAnimJoint name='vt1'/>
let Shape570 = browser.currentScene.createNode("Shape");
let LineSet571 = browser.currentScene.createNode("LineSet");
LineSet571.vertexCount = new MFInt32(new int[2]);
let Coordinate572 = browser.currentScene.createNode("Coordinate");
Coordinate572.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet571.coord = Coordinate572;

let ColorRGBA573 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA573.USE = "HAnimSegmentLineColorRGBA";
LineSet571.color = ColorRGBA573;

Shape570.geometry = LineSet571;

HAnimSegment566.children[2] = Shape570;

HAnimJoint565.children = new MFNode();

HAnimJoint565.children[0] = HAnimSegment566;

let HAnimJoint574 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint574.name = "vt1";
HAnimJoint574.DEF = "hanim_vt1";
HAnimJoint574.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint574.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment575 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment575.name = "t1";
HAnimSegment575.DEF = "hanim_t1";
//Visualization sphere for <HAnimJoint name='vt1'/> is placed within <HAnimSegment name='t1'/>
let TouchSensor576 = browser.currentScene.createNode("TouchSensor");
TouchSensor576.description = "HAnimJoint vt1, HAnimSegment t1";
HAnimSegment575.children = new MFNode();

HAnimSegment575.children[0] = TouchSensor576;

let Transform577 = browser.currentScene.createNode("Transform");
Transform577.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
let Shape578 = browser.currentScene.createNode("Shape");
Shape578.USE = "HAnimJointShape";
Transform577.children = new MFNode();

Transform577.children[0] = Shape578;

HAnimSegment575.children[1] = Transform577;

//HAnimSegment visualization line from current <HAnimJoint name='vt1'/> to child <HAnimJoint name='vc7'/>
let Shape579 = browser.currentScene.createNode("Shape");
let LineSet580 = browser.currentScene.createNode("LineSet");
LineSet580.vertexCount = new MFInt32(new int[2]);
let Coordinate581 = browser.currentScene.createNode("Coordinate");
Coordinate581.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet580.coord = Coordinate581;

let ColorRGBA582 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA582.USE = "HAnimSegmentLineColorRGBA";
LineSet580.color = ColorRGBA582;

Shape579.geometry = LineSet580;

HAnimSegment575.children[2] = Shape579;

//HAnimSegment visualization line from current <HAnimJoint name='vt1'/> to child <HAnimJoint name='l_sternoclavicular'/>
let Shape583 = browser.currentScene.createNode("Shape");
let LineSet584 = browser.currentScene.createNode("LineSet");
LineSet584.vertexCount = new MFInt32(new int[2]);
let Coordinate585 = browser.currentScene.createNode("Coordinate");
Coordinate585.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet584.coord = Coordinate585;

let ColorRGBA586 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA586.USE = "HAnimSegmentLineColorRGBA";
LineSet584.color = ColorRGBA586;

Shape583.geometry = LineSet584;

HAnimSegment575.children[3] = Shape583;

//HAnimSegment visualization line from current <HAnimJoint name='vt1'/> to child <HAnimJoint name='r_sternoclavicular'/>
let Shape587 = browser.currentScene.createNode("Shape");
let LineSet588 = browser.currentScene.createNode("LineSet");
LineSet588.vertexCount = new MFInt32(new int[2]);
let Coordinate589 = browser.currentScene.createNode("Coordinate");
Coordinate589.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353]);
LineSet588.coord = Coordinate589;

let ColorRGBA590 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA590.USE = "HAnimSegmentLineColorRGBA";
LineSet588.color = ColorRGBA590;

Shape587.geometry = LineSet588;

HAnimSegment575.children[4] = Shape587;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='suprasternale_pt'/>
let Shape591 = browser.currentScene.createNode("Shape");
let LineSet592 = browser.currentScene.createNode("LineSet");
LineSet592.vertexCount = new MFInt32(new int[2]);
let Coordinate593 = browser.currentScene.createNode("Coordinate");
Coordinate593.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551]);
LineSet592.coord = Coordinate593;

let ColorRGBA594 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA594.USE = "HAnimSiteLineColorRGBA";
LineSet592.color = ColorRGBA594;

Shape591.geometry = LineSet592;

HAnimSegment575.children[5] = Shape591;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='cervicale_pt'/>
let Shape595 = browser.currentScene.createNode("Shape");
let LineSet596 = browser.currentScene.createNode("LineSet");
LineSet596.vertexCount = new MFInt32(new int[2]);
let Coordinate597 = browser.currentScene.createNode("Coordinate");
Coordinate597.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815]);
LineSet596.coord = Coordinate597;

let ColorRGBA598 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA598.USE = "HAnimSiteLineColorRGBA";
LineSet596.color = ColorRGBA598;

Shape595.geometry = LineSet596;

HAnimSegment575.children[6] = Shape595;

let HAnimSite599 = browser.currentScene.createNode("HAnimSite");
HAnimSite599.name = "suprasternale_pt";
HAnimSite599.DEF = "hanim_suprasternale_pt";
HAnimSite599.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
//HAnimSite visualization shape
let TouchSensor600 = browser.currentScene.createNode("TouchSensor");
TouchSensor600.description = "HAnimSite suprasternale_pt";
HAnimSite599.children = new MFNode();

HAnimSite599.children[0] = TouchSensor600;

let Shape601 = browser.currentScene.createNode("Shape");
Shape601.USE = "HAnimSiteShape";
HAnimSite599.children[1] = Shape601;

HAnimSegment575.children[7] = HAnimSite599;

let HAnimSite602 = browser.currentScene.createNode("HAnimSite");
HAnimSite602.name = "cervicale_pt";
HAnimSite602.DEF = "hanim_cervicale_pt";
HAnimSite602.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
//HAnimSite visualization shape
let TouchSensor603 = browser.currentScene.createNode("TouchSensor");
TouchSensor603.description = "HAnimSite cervicale_pt";
HAnimSite602.children = new MFNode();

HAnimSite602.children[0] = TouchSensor603;

let Shape604 = browser.currentScene.createNode("Shape");
Shape604.USE = "HAnimSiteShape";
HAnimSite602.children[1] = Shape604;

HAnimSegment575.children[8] = HAnimSite602;

HAnimJoint574.children = new MFNode();

HAnimJoint574.children[0] = HAnimSegment575;

let HAnimJoint605 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint605.name = "vc7";
HAnimJoint605.DEF = "hanim_vc7";
HAnimJoint605.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint605.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment606 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment606.name = "c7";
HAnimSegment606.DEF = "hanim_c7";
//Visualization sphere for <HAnimJoint name='vc7'/> is placed within <HAnimSegment name='c7'/>
let TouchSensor607 = browser.currentScene.createNode("TouchSensor");
TouchSensor607.description = "HAnimJoint vc7, HAnimSegment c7";
HAnimSegment606.children = new MFNode();

HAnimSegment606.children[0] = TouchSensor607;

let Transform608 = browser.currentScene.createNode("Transform");
Transform608.translation = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
let Shape609 = browser.currentScene.createNode("Shape");
Shape609.USE = "HAnimJointShape";
Transform608.children = new MFNode();

Transform608.children[0] = Shape609;

HAnimSegment606.children[1] = Transform608;

//HAnimSegment visualization line from current <HAnimJoint name='vc7'/> to child <HAnimJoint name='vc6'/>
let Shape610 = browser.currentScene.createNode("Shape");
let LineSet611 = browser.currentScene.createNode("LineSet");
LineSet611.vertexCount = new MFInt32(new int[2]);
let Coordinate612 = browser.currentScene.createNode("Coordinate");
Coordinate612.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet611.coord = Coordinate612;

let ColorRGBA613 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA613.USE = "HAnimSegmentLineColorRGBA";
LineSet611.color = ColorRGBA613;

Shape610.geometry = LineSet611;

HAnimSegment606.children[2] = Shape610;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='r_neck_base_pt'/>
let Shape614 = browser.currentScene.createNode("Shape");
let LineSet615 = browser.currentScene.createNode("LineSet");
LineSet615.vertexCount = new MFInt32(new int[2]);
let Coordinate616 = browser.currentScene.createNode("Coordinate");
Coordinate616.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022]);
LineSet615.coord = Coordinate616;

let ColorRGBA617 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA617.USE = "HAnimSiteLineColorRGBA";
LineSet615.color = ColorRGBA617;

Shape614.geometry = LineSet615;

HAnimSegment606.children[3] = Shape614;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='l_neck_base_pt'/>
let Shape618 = browser.currentScene.createNode("Shape");
let LineSet619 = browser.currentScene.createNode("LineSet");
LineSet619.vertexCount = new MFInt32(new int[2]);
let Coordinate620 = browser.currentScene.createNode("Coordinate");
Coordinate620.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038]);
LineSet619.coord = Coordinate620;

let ColorRGBA621 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA621.USE = "HAnimSiteLineColorRGBA";
LineSet619.color = ColorRGBA621;

Shape618.geometry = LineSet619;

HAnimSegment606.children[4] = Shape618;

let HAnimSite622 = browser.currentScene.createNode("HAnimSite");
HAnimSite622.name = "r_neck_base_pt";
HAnimSite622.DEF = "hanim_r_neck_base_pt";
HAnimSite622.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
//HAnimSite visualization shape
let TouchSensor623 = browser.currentScene.createNode("TouchSensor");
TouchSensor623.description = "HAnimSite r_neck_base_pt";
HAnimSite622.children = new MFNode();

HAnimSite622.children[0] = TouchSensor623;

let Shape624 = browser.currentScene.createNode("Shape");
Shape624.USE = "HAnimSiteShape";
HAnimSite622.children[1] = Shape624;

HAnimSegment606.children[5] = HAnimSite622;

let HAnimSite625 = browser.currentScene.createNode("HAnimSite");
HAnimSite625.name = "l_neck_base_pt";
HAnimSite625.DEF = "hanim_l_neck_base_pt";
HAnimSite625.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
//HAnimSite visualization shape
let TouchSensor626 = browser.currentScene.createNode("TouchSensor");
TouchSensor626.description = "HAnimSite l_neck_base_pt";
HAnimSite625.children = new MFNode();

HAnimSite625.children[0] = TouchSensor626;

let Shape627 = browser.currentScene.createNode("Shape");
Shape627.USE = "HAnimSiteShape";
HAnimSite625.children[1] = Shape627;

HAnimSegment606.children[6] = HAnimSite625;

HAnimJoint605.children = new MFNode();

HAnimJoint605.children[0] = HAnimSegment606;

let HAnimJoint628 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint628.name = "vc6";
HAnimJoint628.DEF = "hanim_vc6";
HAnimJoint628.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint628.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment629 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment629.name = "c6";
HAnimSegment629.DEF = "hanim_c6";
//Visualization sphere for <HAnimJoint name='vc6'/> is placed within <HAnimSegment name='c6'/>
let TouchSensor630 = browser.currentScene.createNode("TouchSensor");
TouchSensor630.description = "HAnimJoint vc6, HAnimSegment c6";
HAnimSegment629.children = new MFNode();

HAnimSegment629.children[0] = TouchSensor630;

let Transform631 = browser.currentScene.createNode("Transform");
Transform631.translation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
let Shape632 = browser.currentScene.createNode("Shape");
Shape632.USE = "HAnimJointShape";
Transform631.children = new MFNode();

Transform631.children[0] = Shape632;

HAnimSegment629.children[1] = Transform631;

//HAnimSegment visualization line from current <HAnimJoint name='vc6'/> to child <HAnimJoint name='vc5'/>
let Shape633 = browser.currentScene.createNode("Shape");
let LineSet634 = browser.currentScene.createNode("LineSet");
LineSet634.vertexCount = new MFInt32(new int[2]);
let Coordinate635 = browser.currentScene.createNode("Coordinate");
Coordinate635.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet634.coord = Coordinate635;

let ColorRGBA636 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA636.USE = "HAnimSegmentLineColorRGBA";
LineSet634.color = ColorRGBA636;

Shape633.geometry = LineSet634;

HAnimSegment629.children[2] = Shape633;

HAnimJoint628.children = new MFNode();

HAnimJoint628.children[0] = HAnimSegment629;

let HAnimJoint637 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint637.name = "vc5";
HAnimJoint637.DEF = "hanim_vc5";
HAnimJoint637.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint637.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment638 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment638.name = "c5";
HAnimSegment638.DEF = "hanim_c5";
//Visualization sphere for <HAnimJoint name='vc5'/> is placed within <HAnimSegment name='c5'/>
let TouchSensor639 = browser.currentScene.createNode("TouchSensor");
TouchSensor639.description = "HAnimJoint vc5, HAnimSegment c5";
HAnimSegment638.children = new MFNode();

HAnimSegment638.children[0] = TouchSensor639;

let Transform640 = browser.currentScene.createNode("Transform");
Transform640.translation = new SFVec3f(new float[0.0066,1.552,-0.0082]);
let Shape641 = browser.currentScene.createNode("Shape");
Shape641.USE = "HAnimJointShape";
Transform640.children = new MFNode();

Transform640.children[0] = Shape641;

HAnimSegment638.children[1] = Transform640;

//HAnimSegment visualization line from current <HAnimJoint name='vc5'/> to child <HAnimJoint name='vc4'/>
let Shape642 = browser.currentScene.createNode("Shape");
let LineSet643 = browser.currentScene.createNode("LineSet");
LineSet643.vertexCount = new MFInt32(new int[2]);
let Coordinate644 = browser.currentScene.createNode("Coordinate");
Coordinate644.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet643.coord = Coordinate644;

let ColorRGBA645 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA645.USE = "HAnimSegmentLineColorRGBA";
LineSet643.color = ColorRGBA645;

Shape642.geometry = LineSet643;

HAnimSegment638.children[2] = Shape642;

HAnimJoint637.children = new MFNode();

HAnimJoint637.children[0] = HAnimSegment638;

let HAnimJoint646 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint646.name = "vc4";
HAnimJoint646.DEF = "hanim_vc4";
HAnimJoint646.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint646.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment647 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment647.name = "c4";
HAnimSegment647.DEF = "hanim_c4";
//Visualization sphere for <HAnimJoint name='vc4'/> is placed within <HAnimSegment name='c4'/>
let TouchSensor648 = browser.currentScene.createNode("TouchSensor");
TouchSensor648.description = "HAnimJoint vc4, HAnimSegment c4";
HAnimSegment647.children = new MFNode();

HAnimSegment647.children[0] = TouchSensor648;

let Transform649 = browser.currentScene.createNode("Transform");
Transform649.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
let Shape650 = browser.currentScene.createNode("Shape");
Shape650.USE = "HAnimJointShape";
Transform649.children = new MFNode();

Transform649.children[0] = Shape650;

HAnimSegment647.children[1] = Transform649;

//HAnimSegment visualization line from current <HAnimJoint name='vc4'/> to child <HAnimJoint name='vc3'/>
let Shape651 = browser.currentScene.createNode("Shape");
let LineSet652 = browser.currentScene.createNode("LineSet");
LineSet652.vertexCount = new MFInt32(new int[2]);
let Coordinate653 = browser.currentScene.createNode("Coordinate");
Coordinate653.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet652.coord = Coordinate653;

let ColorRGBA654 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA654.USE = "HAnimSegmentLineColorRGBA";
LineSet652.color = ColorRGBA654;

Shape651.geometry = LineSet652;

HAnimSegment647.children[2] = Shape651;

HAnimJoint646.children = new MFNode();

HAnimJoint646.children[0] = HAnimSegment647;

let HAnimJoint655 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint655.name = "vc3";
HAnimJoint655.DEF = "hanim_vc3";
HAnimJoint655.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint655.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment656 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment656.name = "c3";
HAnimSegment656.DEF = "hanim_c3";
//Visualization sphere for <HAnimJoint name='vc3'/> is placed within <HAnimSegment name='c3'/>
let TouchSensor657 = browser.currentScene.createNode("TouchSensor");
TouchSensor657.description = "HAnimJoint vc3, HAnimSegment c3";
HAnimSegment656.children = new MFNode();

HAnimSegment656.children[0] = TouchSensor657;

let Transform658 = browser.currentScene.createNode("Transform");
Transform658.translation = new SFVec3f(new float[0.0066,1.58,-0.0103]);
let Shape659 = browser.currentScene.createNode("Shape");
Shape659.USE = "HAnimJointShape";
Transform658.children = new MFNode();

Transform658.children[0] = Shape659;

HAnimSegment656.children[1] = Transform658;

//HAnimSegment visualization line from current <HAnimJoint name='vc3'/> to child <HAnimJoint name='vc2'/>
let Shape660 = browser.currentScene.createNode("Shape");
let LineSet661 = browser.currentScene.createNode("LineSet");
LineSet661.vertexCount = new MFInt32(new int[2]);
let Coordinate662 = browser.currentScene.createNode("Coordinate");
Coordinate662.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet661.coord = Coordinate662;

let ColorRGBA663 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA663.USE = "HAnimSegmentLineColorRGBA";
LineSet661.color = ColorRGBA663;

Shape660.geometry = LineSet661;

HAnimSegment656.children[2] = Shape660;

HAnimJoint655.children = new MFNode();

HAnimJoint655.children[0] = HAnimSegment656;

let HAnimJoint664 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint664.name = "vc2";
HAnimJoint664.DEF = "hanim_vc2";
HAnimJoint664.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint664.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment665 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment665.name = "c2";
HAnimSegment665.DEF = "hanim_c2";
//Visualization sphere for <HAnimJoint name='vc2'/> is placed within <HAnimSegment name='c2'/>
let TouchSensor666 = browser.currentScene.createNode("TouchSensor");
TouchSensor666.description = "HAnimJoint vc2, HAnimSegment c2";
HAnimSegment665.children = new MFNode();

HAnimSegment665.children[0] = TouchSensor666;

let Transform667 = browser.currentScene.createNode("Transform");
Transform667.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
let Shape668 = browser.currentScene.createNode("Shape");
Shape668.USE = "HAnimJointShape";
Transform667.children = new MFNode();

Transform667.children[0] = Shape668;

HAnimSegment665.children[1] = Transform667;

//HAnimSegment visualization line from current <HAnimJoint name='vc2'/> to child <HAnimJoint name='vc1'/>
let Shape669 = browser.currentScene.createNode("Shape");
let LineSet670 = browser.currentScene.createNode("LineSet");
LineSet670.vertexCount = new MFInt32(new int[2]);
let Coordinate671 = browser.currentScene.createNode("Coordinate");
Coordinate671.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet670.coord = Coordinate671;

let ColorRGBA672 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA672.USE = "HAnimSegmentLineColorRGBA";
LineSet670.color = ColorRGBA672;

Shape669.geometry = LineSet670;

HAnimSegment665.children[2] = Shape669;

HAnimJoint664.children = new MFNode();

HAnimJoint664.children[0] = HAnimSegment665;

let HAnimJoint673 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint673.name = "vc1";
HAnimJoint673.DEF = "hanim_vc1";
HAnimJoint673.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint673.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment674 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment674.name = "c1";
HAnimSegment674.DEF = "hanim_c1";
//Visualization sphere for <HAnimJoint name='vc1'/> is placed within <HAnimSegment name='c1'/>
let TouchSensor675 = browser.currentScene.createNode("TouchSensor");
TouchSensor675.description = "HAnimJoint vc1, HAnimSegment c1";
HAnimSegment674.children = new MFNode();

HAnimSegment674.children[0] = TouchSensor675;

let Transform676 = browser.currentScene.createNode("Transform");
Transform676.translation = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
let Shape677 = browser.currentScene.createNode("Shape");
Shape677.USE = "HAnimJointShape";
Transform676.children = new MFNode();

Transform676.children[0] = Shape677;

HAnimSegment674.children[1] = Transform676;

//HAnimSegment visualization line from current <HAnimJoint name='vc1'/> to child <HAnimJoint name='skullbase'/>
let Shape678 = browser.currentScene.createNode("Shape");
let LineSet679 = browser.currentScene.createNode("LineSet");
LineSet679.vertexCount = new MFInt32(new int[2]);
let Coordinate680 = browser.currentScene.createNode("Coordinate");
Coordinate680.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet679.coord = Coordinate680;

let ColorRGBA681 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA681.USE = "HAnimSegmentLineColorRGBA";
LineSet679.color = ColorRGBA681;

Shape678.geometry = LineSet679;

HAnimSegment674.children[2] = Shape678;

HAnimJoint673.children = new MFNode();

HAnimJoint673.children[0] = HAnimSegment674;

let HAnimJoint682 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint682.name = "skullbase";
HAnimJoint682.DEF = "hanim_skullbase";
HAnimJoint682.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint682.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment683 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment683.name = "skull";
HAnimSegment683.DEF = "hanim_skull";
//Visualization sphere for <HAnimJoint name='skullbase'/> is placed within <HAnimSegment name='skull'/>
let TouchSensor684 = browser.currentScene.createNode("TouchSensor");
TouchSensor684.description = "HAnimJoint skullbase, HAnimSegment skull";
HAnimSegment683.children = new MFNode();

HAnimSegment683.children[0] = TouchSensor684;

let Transform685 = browser.currentScene.createNode("Transform");
Transform685.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
let Shape686 = browser.currentScene.createNode("Shape");
Shape686.USE = "HAnimJointShape";
Transform685.children = new MFNode();

Transform685.children[0] = Shape686;

HAnimSegment683.children[1] = Transform685;

//HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='l_eyeball_joint'/>
let Shape687 = browser.currentScene.createNode("Shape");
let LineSet688 = browser.currentScene.createNode("LineSet");
LineSet688.vertexCount = new MFInt32(new int[2]);
let Coordinate689 = browser.currentScene.createNode("Coordinate");
Coordinate689.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.6332,0.0502]);
LineSet688.coord = Coordinate689;

let ColorRGBA690 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA690.USE = "HAnimSegmentLineColorRGBA";
LineSet688.color = ColorRGBA690;

Shape687.geometry = LineSet688;

HAnimSegment683.children[2] = Shape687;

//HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='l_eyelid_joint'/>
let Shape691 = browser.currentScene.createNode("Shape");
let LineSet692 = browser.currentScene.createNode("LineSet");
LineSet692.vertexCount = new MFInt32(new int[2]);
let Coordinate693 = browser.currentScene.createNode("Coordinate");
Coordinate693.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.6332,0.0502]);
LineSet692.coord = Coordinate693;

let ColorRGBA694 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA694.USE = "HAnimSegmentLineColorRGBA";
LineSet692.color = ColorRGBA694;

Shape691.geometry = LineSet692;

HAnimSegment683.children[3] = Shape691;

//HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='l_eyebrow_joint'/>
let Shape695 = browser.currentScene.createNode("Shape");
let LineSet696 = browser.currentScene.createNode("LineSet");
LineSet696.vertexCount = new MFInt32(new int[2]);
let Coordinate697 = browser.currentScene.createNode("Coordinate");
Coordinate697.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.635,0.0506]);
LineSet696.coord = Coordinate697;

let ColorRGBA698 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA698.USE = "HAnimSegmentLineColorRGBA";
LineSet696.color = ColorRGBA698;

Shape695.geometry = LineSet696;

HAnimSegment683.children[4] = Shape695;

//HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='r_eyeball_joint'/>
let Shape699 = browser.currentScene.createNode("Shape");
let LineSet700 = browser.currentScene.createNode("LineSet");
LineSet700.vertexCount = new MFInt32(new int[2]);
let Coordinate701 = browser.currentScene.createNode("Coordinate");
Coordinate701.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502]);
LineSet700.coord = Coordinate701;

let ColorRGBA702 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA702.USE = "HAnimSegmentLineColorRGBA";
LineSet700.color = ColorRGBA702;

Shape699.geometry = LineSet700;

HAnimSegment683.children[5] = Shape699;

//HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='r_eyelid_joint'/>
let Shape703 = browser.currentScene.createNode("Shape");
let LineSet704 = browser.currentScene.createNode("LineSet");
LineSet704.vertexCount = new MFInt32(new int[2]);
let Coordinate705 = browser.currentScene.createNode("Coordinate");
Coordinate705.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502]);
LineSet704.coord = Coordinate705;

let ColorRGBA706 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA706.USE = "HAnimSegmentLineColorRGBA";
LineSet704.color = ColorRGBA706;

Shape703.geometry = LineSet704;

HAnimSegment683.children[6] = Shape703;

//HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='r_eyebrow_joint'/>
let Shape707 = browser.currentScene.createNode("Shape");
let LineSet708 = browser.currentScene.createNode("LineSet");
LineSet708.vertexCount = new MFInt32(new int[2]);
let Coordinate709 = browser.currentScene.createNode("Coordinate");
Coordinate709.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0336,1.635,0.0506]);
LineSet708.coord = Coordinate709;

let ColorRGBA710 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA710.USE = "HAnimSegmentLineColorRGBA";
LineSet708.color = ColorRGBA710;

Shape707.geometry = LineSet708;

HAnimSegment683.children[7] = Shape707;

//HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='temporomandibular'/>
let Shape711 = browser.currentScene.createNode("Shape");
let LineSet712 = browser.currentScene.createNode("LineSet");
LineSet712.vertexCount = new MFInt32(new int[2]);
let Coordinate713 = browser.currentScene.createNode("Coordinate");
Coordinate713.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1.63,0.015]);
LineSet712.coord = Coordinate713;

let ColorRGBA714 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA714.USE = "HAnimSegmentLineColorRGBA";
LineSet712.color = ColorRGBA714;

Shape711.geometry = LineSet712;

HAnimSegment683.children[8] = Shape711;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='skull_tip'/>
let Shape715 = browser.currentScene.createNode("Shape");
let LineSet716 = browser.currentScene.createNode("LineSet");
LineSet716.vertexCount = new MFInt32(new int[2]);
let Coordinate717 = browser.currentScene.createNode("Coordinate");
Coordinate717.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.005,1.7504,0.0055]);
LineSet716.coord = Coordinate717;

let ColorRGBA718 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA718.USE = "HAnimSiteLineColorRGBA";
LineSet716.color = ColorRGBA718;

Shape715.geometry = LineSet716;

HAnimSegment683.children[9] = Shape715;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='sellion_pt'/>
let Shape719 = browser.currentScene.createNode("Shape");
let LineSet720 = browser.currentScene.createNode("LineSet");
LineSet720.vertexCount = new MFInt32(new int[2]);
let Coordinate721 = browser.currentScene.createNode("Coordinate");
Coordinate721.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0058,1.6316,0.0852]);
LineSet720.coord = Coordinate721;

let ColorRGBA722 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA722.USE = "HAnimSiteLineColorRGBA";
LineSet720.color = ColorRGBA722;

Shape719.geometry = LineSet720;

HAnimSegment683.children[10] = Shape719;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_infraorbitale_pt'/>
let Shape723 = browser.currentScene.createNode("Shape");
let LineSet724 = browser.currentScene.createNode("LineSet");
LineSet724.vertexCount = new MFInt32(new int[2]);
let Coordinate725 = browser.currentScene.createNode("Coordinate");
Coordinate725.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752]);
LineSet724.coord = Coordinate725;

let ColorRGBA726 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA726.USE = "HAnimSiteLineColorRGBA";
LineSet724.color = ColorRGBA726;

Shape723.geometry = LineSet724;

HAnimSegment683.children[11] = Shape723;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_infraorbitale_pt'/>
let Shape727 = browser.currentScene.createNode("Shape");
let LineSet728 = browser.currentScene.createNode("LineSet");
LineSet728.vertexCount = new MFInt32(new int[2]);
let Coordinate729 = browser.currentScene.createNode("Coordinate");
Coordinate729.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0341,1.6171,0.0752]);
LineSet728.coord = Coordinate729;

let ColorRGBA730 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA730.USE = "HAnimSiteLineColorRGBA";
LineSet728.color = ColorRGBA730;

Shape727.geometry = LineSet728;

HAnimSegment683.children[12] = Shape727;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='supramenton_pt'/>
let Shape731 = browser.currentScene.createNode("Shape");
let LineSet732 = browser.currentScene.createNode("LineSet");
LineSet732.vertexCount = new MFInt32(new int[2]);
let Coordinate733 = browser.currentScene.createNode("Coordinate");
Coordinate733.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0061,1.541,0.0805]);
LineSet732.coord = Coordinate733;

let ColorRGBA734 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA734.USE = "HAnimSiteLineColorRGBA";
LineSet732.color = ColorRGBA734;

Shape731.geometry = LineSet732;

HAnimSegment683.children[13] = Shape731;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_tragion_pt'/>
let Shape735 = browser.currentScene.createNode("Shape");
let LineSet736 = browser.currentScene.createNode("LineSet");
LineSet736.vertexCount = new MFInt32(new int[2]);
let Coordinate737 = browser.currentScene.createNode("Coordinate");
Coordinate737.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302]);
LineSet736.coord = Coordinate737;

let ColorRGBA738 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA738.USE = "HAnimSiteLineColorRGBA";
LineSet736.color = ColorRGBA738;

Shape735.geometry = LineSet736;

HAnimSegment683.children[14] = Shape735;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_gonion_pt'/>
let Shape739 = browser.currentScene.createNode("Shape");
let LineSet740 = browser.currentScene.createNode("LineSet");
LineSet740.vertexCount = new MFInt32(new int[2]);
let Coordinate741 = browser.currentScene.createNode("Coordinate");
Coordinate741.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.052,1.5529,0.0347]);
LineSet740.coord = Coordinate741;

let ColorRGBA742 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA742.USE = "HAnimSiteLineColorRGBA";
LineSet740.color = ColorRGBA742;

Shape739.geometry = LineSet740;

HAnimSegment683.children[15] = Shape739;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_tragion_pt'/>
let Shape743 = browser.currentScene.createNode("Shape");
let LineSet744 = browser.currentScene.createNode("LineSet");
LineSet744.vertexCount = new MFInt32(new int[2]);
let Coordinate745 = browser.currentScene.createNode("Coordinate");
Coordinate745.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0739,1.6348,0.0282]);
LineSet744.coord = Coordinate745;

let ColorRGBA746 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA746.USE = "HAnimSiteLineColorRGBA";
LineSet744.color = ColorRGBA746;

Shape743.geometry = LineSet744;

HAnimSegment683.children[16] = Shape743;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_gonion_pt'/>
let Shape747 = browser.currentScene.createNode("Shape");
let LineSet748 = browser.currentScene.createNode("LineSet");
LineSet748.vertexCount = new MFInt32(new int[2]);
let Coordinate749 = browser.currentScene.createNode("Coordinate");
Coordinate749.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0631,1.553,0.033]);
LineSet748.coord = Coordinate749;

let ColorRGBA750 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA750.USE = "HAnimSiteLineColorRGBA";
LineSet748.color = ColorRGBA750;

Shape747.geometry = LineSet748;

HAnimSegment683.children[17] = Shape747;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='nuchale_pt'/>
let Shape751 = browser.currentScene.createNode("Shape");
let LineSet752 = browser.currentScene.createNode("LineSet");
LineSet752.vertexCount = new MFInt32(new int[2]);
let Coordinate753 = browser.currentScene.createNode("Coordinate");
Coordinate753.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796]);
LineSet752.coord = Coordinate753;

let ColorRGBA754 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA754.USE = "HAnimSiteLineColorRGBA";
LineSet752.color = ColorRGBA754;

Shape751.geometry = LineSet752;

HAnimSegment683.children[18] = Shape751;

let HAnimSite755 = browser.currentScene.createNode("HAnimSite");
HAnimSite755.name = "skull_vertex_pt";
HAnimSite755.DEF = "hanim_skull_vertex_pt";
HAnimSite755.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
//TODO move skull_tip x to zero, check others for symmetry
//HAnimSite visualization shape
let TouchSensor756 = browser.currentScene.createNode("TouchSensor");
TouchSensor756.description = "HAnimSite skull_tip";
HAnimSite755.children = new MFNode();

HAnimSite755.children[0] = TouchSensor756;

let Shape757 = browser.currentScene.createNode("Shape");
Shape757.USE = "HAnimSiteShape";
HAnimSite755.children[1] = Shape757;

HAnimSegment683.children[19] = HAnimSite755;

let HAnimSite758 = browser.currentScene.createNode("HAnimSite");
HAnimSite758.name = "sellion_pt";
HAnimSite758.DEF = "hanim_sellion_pt";
HAnimSite758.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
//HAnimSite visualization shape
let TouchSensor759 = browser.currentScene.createNode("TouchSensor");
TouchSensor759.description = "HAnimSite sellion_pt";
HAnimSite758.children = new MFNode();

HAnimSite758.children[0] = TouchSensor759;

let Shape760 = browser.currentScene.createNode("Shape");
Shape760.USE = "HAnimSiteShape";
HAnimSite758.children[1] = Shape760;

HAnimSegment683.children[20] = HAnimSite758;

let HAnimSite761 = browser.currentScene.createNode("HAnimSite");
HAnimSite761.name = "r_infraorbitale_pt";
HAnimSite761.DEF = "hanim_r_infraorbitale_pt";
HAnimSite761.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
//HAnimSite visualization shape
let TouchSensor762 = browser.currentScene.createNode("TouchSensor");
TouchSensor762.description = "HAnimSite r_infraorbitale_pt";
HAnimSite761.children = new MFNode();

HAnimSite761.children[0] = TouchSensor762;

let Shape763 = browser.currentScene.createNode("Shape");
Shape763.USE = "HAnimSiteShape";
HAnimSite761.children[1] = Shape763;

HAnimSegment683.children[21] = HAnimSite761;

let HAnimSite764 = browser.currentScene.createNode("HAnimSite");
HAnimSite764.name = "l_infraorbitale_pt";
HAnimSite764.DEF = "hanim_l_infraorbitale_pt";
HAnimSite764.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
//HAnimSite visualization shape
let TouchSensor765 = browser.currentScene.createNode("TouchSensor");
TouchSensor765.description = "HAnimSite l_infraorbitale_pt";
HAnimSite764.children = new MFNode();

HAnimSite764.children[0] = TouchSensor765;

let Shape766 = browser.currentScene.createNode("Shape");
Shape766.USE = "HAnimSiteShape";
HAnimSite764.children[1] = Shape766;

HAnimSegment683.children[22] = HAnimSite764;

let HAnimSite767 = browser.currentScene.createNode("HAnimSite");
HAnimSite767.name = "supramenton_pt";
HAnimSite767.DEF = "hanim_supramenton_pt";
HAnimSite767.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
//HAnimSite visualization shape
let TouchSensor768 = browser.currentScene.createNode("TouchSensor");
TouchSensor768.description = "HAnimSite supramenton_pt";
HAnimSite767.children = new MFNode();

HAnimSite767.children[0] = TouchSensor768;

let Shape769 = browser.currentScene.createNode("Shape");
Shape769.USE = "HAnimSiteShape";
HAnimSite767.children[1] = Shape769;

HAnimSegment683.children[23] = HAnimSite767;

let HAnimSite770 = browser.currentScene.createNode("HAnimSite");
HAnimSite770.name = "r_tragion_pt";
HAnimSite770.DEF = "hanim_r_tragion_pt";
HAnimSite770.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
//HAnimSite visualization shape
let TouchSensor771 = browser.currentScene.createNode("TouchSensor");
TouchSensor771.description = "HAnimSite r_tragion_pt";
HAnimSite770.children = new MFNode();

HAnimSite770.children[0] = TouchSensor771;

let Shape772 = browser.currentScene.createNode("Shape");
Shape772.USE = "HAnimSiteShape";
HAnimSite770.children[1] = Shape772;

HAnimSegment683.children[24] = HAnimSite770;

let HAnimSite773 = browser.currentScene.createNode("HAnimSite");
HAnimSite773.name = "r_gonion_pt";
HAnimSite773.DEF = "hanim_r_gonion_pt";
HAnimSite773.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
//HAnimSite visualization shape
let TouchSensor774 = browser.currentScene.createNode("TouchSensor");
TouchSensor774.description = "HAnimSite r_gonion_pt";
HAnimSite773.children = new MFNode();

HAnimSite773.children[0] = TouchSensor774;

let Shape775 = browser.currentScene.createNode("Shape");
Shape775.USE = "HAnimSiteShape";
HAnimSite773.children[1] = Shape775;

HAnimSegment683.children[25] = HAnimSite773;

let HAnimSite776 = browser.currentScene.createNode("HAnimSite");
HAnimSite776.name = "l_tragion_pt";
HAnimSite776.DEF = "hanim_l_tragion_pt";
HAnimSite776.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
//HAnimSite visualization shape
let TouchSensor777 = browser.currentScene.createNode("TouchSensor");
TouchSensor777.description = "HAnimSite l_tragion_pt";
HAnimSite776.children = new MFNode();

HAnimSite776.children[0] = TouchSensor777;

let Shape778 = browser.currentScene.createNode("Shape");
Shape778.USE = "HAnimSiteShape";
HAnimSite776.children[1] = Shape778;

HAnimSegment683.children[26] = HAnimSite776;

let HAnimSite779 = browser.currentScene.createNode("HAnimSite");
HAnimSite779.name = "l_gonion_pt";
HAnimSite779.DEF = "hanim_l_gonion_pt";
HAnimSite779.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
//HAnimSite visualization shape
let TouchSensor780 = browser.currentScene.createNode("TouchSensor");
TouchSensor780.description = "HAnimSite l_gonion_pt";
HAnimSite779.children = new MFNode();

HAnimSite779.children[0] = TouchSensor780;

let Shape781 = browser.currentScene.createNode("Shape");
Shape781.USE = "HAnimSiteShape";
HAnimSite779.children[1] = Shape781;

HAnimSegment683.children[27] = HAnimSite779;

let HAnimSite782 = browser.currentScene.createNode("HAnimSite");
HAnimSite782.name = "nuchale_pt";
HAnimSite782.DEF = "hanim_nuchale_pt";
HAnimSite782.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
//HAnimSite visualization shape
let TouchSensor783 = browser.currentScene.createNode("TouchSensor");
TouchSensor783.description = "HAnimSite nuchale_pt";
HAnimSite782.children = new MFNode();

HAnimSite782.children[0] = TouchSensor783;

let Shape784 = browser.currentScene.createNode("Shape");
Shape784.USE = "HAnimSiteShape";
HAnimSite782.children[1] = Shape784;

HAnimSegment683.children[28] = HAnimSite782;

HAnimJoint682.children = new MFNode();

HAnimJoint682.children[0] = HAnimSegment683;

let HAnimJoint785 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint785.name = "l_eyeball_joint";
HAnimJoint785.DEF = "hanim_l_eyeball_joint";
HAnimJoint785.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimJoint785.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment786 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment786.name = "l_eyeball";
HAnimSegment786.DEF = "hanim_l_eyeball";
//Visualization sphere for <HAnimJoint name='l_eyeball_joint'/> is placed within <HAnimSegment name='l_eyeball'/>
let TouchSensor787 = browser.currentScene.createNode("TouchSensor");
TouchSensor787.description = "HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball";
HAnimSegment786.children = new MFNode();

HAnimSegment786.children[0] = TouchSensor787;

let Transform788 = browser.currentScene.createNode("Transform");
Transform788.translation = new SFVec3f(new float[0.0336,1.6332,0.0502]);
let Shape789 = browser.currentScene.createNode("Shape");
Shape789.USE = "HAnimJointShape";
Transform788.children = new MFNode();

Transform788.children[0] = Shape789;

HAnimSegment786.children[1] = Transform788;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_eyeball_joint'/> to <HAnimSite name='l_eyeball_site_view'/>
let Shape790 = browser.currentScene.createNode("Shape");
let LineSet791 = browser.currentScene.createNode("LineSet");
LineSet791.vertexCount = new MFInt32(new int[2]);
let Coordinate792 = browser.currentScene.createNode("Coordinate");
Coordinate792.point = new MFVec3f(new float[0.0336,1.6332,0.0502,0.034,1.64,0.05]);
LineSet791.coord = Coordinate792;

let ColorRGBA793 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA793.DEF = "HAnimSiteViewpointLineColorRGBA";
ColorRGBA793.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
LineSet791.color = ColorRGBA793;

Shape790.geometry = LineSet791;

HAnimSegment786.children[2] = Shape790;

let HAnimSite794 = browser.currentScene.createNode("HAnimSite");
HAnimSite794.name = "l_eyeball_site_view";
HAnimSite794.DEF = "hanim_l_eyeball_site_view";
HAnimSite794.translation = new SFVec3f(new float[0.034,1.64,0.05]);
//HAnimSite visualization shape
let TouchSensor795 = browser.currentScene.createNode("TouchSensor");
TouchSensor795.description = "HAnimSite l_eyeball_site_view";
HAnimSite794.children = new MFNode();

HAnimSite794.children[0] = TouchSensor795;

let Shape796 = browser.currentScene.createNode("Shape");
Shape796.USE = "HAnimSiteShape";
HAnimSite794.children[1] = Shape796;

let Viewpoint797 = browser.currentScene.createNode("Viewpoint");
Viewpoint797.DEF = "hanim_l_eyeball_site_viewpoint";
Viewpoint797.description = "l_eyeball_site_viewpoint looking forward";
Viewpoint797.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint797.position = new SFVec3f(new float[0,0,0]);
HAnimSite794.children[2] = Viewpoint797;

//HAnimSite/Viewpoint visualization shape
let Anchor798 = browser.currentScene.createNode("Anchor");
Anchor798.description = "HAnimSite hanim_l_eyeball_site_view Viewpoint";
Anchor798.url = new MFString(new java.lang.String["#hanim_l_eyeball_site_viewpoint"]);
let LOD799 = browser.currentScene.createNode("LOD");
LOD799.forceTransitions = True;
LOD799.range = new MFFloat(new float[0.04]);
let WorldInfo800 = browser.currentScene.createNode("WorldInfo");
WorldInfo800.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD799.children = new MFNode();

LOD799.children[0] = WorldInfo800;

let Shape801 = browser.currentScene.createNode("Shape");
Shape801.DEF = "HAnimSiteViewpointShape";
let IndexedFaceSet802 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet802.DEF = "SiteViewpointDiamondIFS";
IndexedFaceSet802.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet802.creaseAngle = 0.5;
let Coordinate803 = browser.currentScene.createNode("Coordinate");
Coordinate803.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet802.coord = Coordinate803;

Shape801.geometry = IndexedFaceSet802;

let Appearance804 = browser.currentScene.createNode("Appearance");
let Material805 = browser.currentScene.createNode("Material");
Material805.diffuseColor = new SFColor(new float[1,1,0]);
Material805.transparency = 0.3;
Appearance804.material = Material805;

Shape801.appearance = Appearance804;

LOD799.children[1] = Shape801;

Anchor798.children = new MFNode();

Anchor798.children[0] = LOD799;

HAnimSite794.children[3] = Anchor798;

HAnimSegment786.children[3] = HAnimSite794;

HAnimJoint785.children = new MFNode();

HAnimJoint785.children[0] = HAnimSegment786;

HAnimJoint682.children[1] = HAnimJoint785;

let HAnimJoint806 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint806.name = "l_eyelid_joint";
HAnimJoint806.DEF = "hanim_l_eyelid_joint";
HAnimJoint806.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimJoint806.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment807 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment807.name = "l_eyelid";
HAnimSegment807.DEF = "hanim_l_eyelid";
//Visualization sphere for <HAnimJoint name='l_eyelid_joint'/> is placed within <HAnimSegment name='l_eyelid'/>
let TouchSensor808 = browser.currentScene.createNode("TouchSensor");
TouchSensor808.description = "HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid";
HAnimSegment807.children = new MFNode();

HAnimSegment807.children[0] = TouchSensor808;

let Transform809 = browser.currentScene.createNode("Transform");
Transform809.translation = new SFVec3f(new float[0.0336,1.6332,0.0502]);
let Shape810 = browser.currentScene.createNode("Shape");
Shape810.USE = "HAnimJointShape";
Transform809.children = new MFNode();

Transform809.children[0] = Shape810;

HAnimSegment807.children[1] = Transform809;

HAnimJoint806.children = new MFNode();

HAnimJoint806.children[0] = HAnimSegment807;

HAnimJoint682.children[2] = HAnimJoint806;

let HAnimJoint811 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint811.name = "l_eyebrow_joint";
HAnimJoint811.DEF = "hanim_l_eyebrow_joint";
HAnimJoint811.center = new SFVec3f(new float[0.0336,1.635,0.0506]);
HAnimJoint811.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment812 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment812.name = "l_eyebrow";
HAnimSegment812.DEF = "hanim_l_eyebrow";
//Visualization sphere for <HAnimJoint name='l_eyebrow_joint'/> is placed within <HAnimSegment name='l_eyebrow'/>
let TouchSensor813 = browser.currentScene.createNode("TouchSensor");
TouchSensor813.description = "HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow";
HAnimSegment812.children = new MFNode();

HAnimSegment812.children[0] = TouchSensor813;

let Transform814 = browser.currentScene.createNode("Transform");
Transform814.translation = new SFVec3f(new float[0.0336,1.635,0.0506]);
let Shape815 = browser.currentScene.createNode("Shape");
Shape815.USE = "HAnimJointShape";
Transform814.children = new MFNode();

Transform814.children[0] = Shape815;

HAnimSegment812.children[1] = Transform814;

HAnimJoint811.children = new MFNode();

HAnimJoint811.children[0] = HAnimSegment812;

HAnimJoint682.children[3] = HAnimJoint811;

let HAnimJoint816 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint816.name = "r_eyeball_joint";
HAnimJoint816.DEF = "hanim_r_eyeball_joint";
HAnimJoint816.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimJoint816.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment817 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment817.name = "r_eyeball";
HAnimSegment817.DEF = "hanim_r_eyeball";
//Visualization sphere for <HAnimJoint name='r_eyeball_joint'/> is placed within <HAnimSegment name='r_eyeball'/>
let TouchSensor818 = browser.currentScene.createNode("TouchSensor");
TouchSensor818.description = "HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball";
HAnimSegment817.children = new MFNode();

HAnimSegment817.children[0] = TouchSensor818;

let Transform819 = browser.currentScene.createNode("Transform");
Transform819.translation = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
let Shape820 = browser.currentScene.createNode("Shape");
Shape820.USE = "HAnimJointShape";
Transform819.children = new MFNode();

Transform819.children[0] = Shape820;

HAnimSegment817.children[1] = Transform819;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_eyeball_joint'/> to <HAnimSite name='r_eyeball_site_view'/>
let Shape821 = browser.currentScene.createNode("Shape");
let LineSet822 = browser.currentScene.createNode("LineSet");
LineSet822.vertexCount = new MFInt32(new int[2]);
let Coordinate823 = browser.currentScene.createNode("Coordinate");
Coordinate823.point = new MFVec3f(new float[-0.0336,1.6332,0.0502,-0.034,1.64,0.05]);
LineSet822.coord = Coordinate823;

let ColorRGBA824 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA824.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet822.color = ColorRGBA824;

Shape821.geometry = LineSet822;

HAnimSegment817.children[2] = Shape821;

let HAnimSite825 = browser.currentScene.createNode("HAnimSite");
HAnimSite825.name = "r_eyeball_site_view";
HAnimSite825.DEF = "hanim_r_eyeball_site_view";
HAnimSite825.translation = new SFVec3f(new float[-0.034,1.64,0.05]);
//HAnimSite visualization shape
let TouchSensor826 = browser.currentScene.createNode("TouchSensor");
TouchSensor826.description = "HAnimSite r_eyeball_site_view";
HAnimSite825.children = new MFNode();

HAnimSite825.children[0] = TouchSensor826;

let Shape827 = browser.currentScene.createNode("Shape");
Shape827.USE = "HAnimSiteShape";
HAnimSite825.children[1] = Shape827;

let Viewpoint828 = browser.currentScene.createNode("Viewpoint");
Viewpoint828.DEF = "hanim_r_eyeball_site_viewpoint";
Viewpoint828.description = "r_eyeball_site_viewpoint looking forward";
Viewpoint828.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint828.position = new SFVec3f(new float[0,0,0]);
HAnimSite825.children[2] = Viewpoint828;

//HAnimSite/Viewpoint visualization shape
let Anchor829 = browser.currentScene.createNode("Anchor");
Anchor829.description = "HAnimSite hanim_r_eyeball_site_view Viewpoint";
Anchor829.url = new MFString(new java.lang.String["#hanim_r_eyeball_site_viewpoint"]);
let LOD830 = browser.currentScene.createNode("LOD");
LOD830.forceTransitions = True;
LOD830.range = new MFFloat(new float[0.04]);
let WorldInfo831 = browser.currentScene.createNode("WorldInfo");
WorldInfo831.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD830.children = new MFNode();

LOD830.children[0] = WorldInfo831;

let Shape832 = browser.currentScene.createNode("Shape");
Shape832.USE = "HAnimSiteViewpointShape";
LOD830.children[1] = Shape832;

Anchor829.children = new MFNode();

Anchor829.children[0] = LOD830;

HAnimSite825.children[3] = Anchor829;

HAnimSegment817.children[3] = HAnimSite825;

HAnimJoint816.children = new MFNode();

HAnimJoint816.children[0] = HAnimSegment817;

HAnimJoint682.children[4] = HAnimJoint816;

let HAnimJoint833 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint833.name = "r_eyelid_joint";
HAnimJoint833.DEF = "hanim_r_eyelid_joint";
HAnimJoint833.center = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
HAnimJoint833.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment834 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment834.name = "r_eyelid";
HAnimSegment834.DEF = "hanim_r_eyelid";
//Visualization sphere for <HAnimJoint name='r_eyelid_joint'/> is placed within <HAnimSegment name='r_eyelid'/>
let TouchSensor835 = browser.currentScene.createNode("TouchSensor");
TouchSensor835.description = "HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid";
HAnimSegment834.children = new MFNode();

HAnimSegment834.children[0] = TouchSensor835;

let Transform836 = browser.currentScene.createNode("Transform");
Transform836.translation = new SFVec3f(new float[-0.0336,1.6332,0.0502]);
let Shape837 = browser.currentScene.createNode("Shape");
Shape837.USE = "HAnimJointShape";
Transform836.children = new MFNode();

Transform836.children[0] = Shape837;

HAnimSegment834.children[1] = Transform836;

HAnimJoint833.children = new MFNode();

HAnimJoint833.children[0] = HAnimSegment834;

HAnimJoint682.children[5] = HAnimJoint833;

let HAnimJoint838 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint838.name = "r_eyebrow_joint";
HAnimJoint838.DEF = "hanim_r_eyebrow_joint";
HAnimJoint838.center = new SFVec3f(new float[-0.0336,1.635,0.0506]);
HAnimJoint838.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment839 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment839.name = "r_eyebrow";
HAnimSegment839.DEF = "hanim_r_eyebrow";
//Visualization sphere for <HAnimJoint name='r_eyebrow_joint'/> is placed within <HAnimSegment name='r_eyebrow'/>
let TouchSensor840 = browser.currentScene.createNode("TouchSensor");
TouchSensor840.description = "HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow";
HAnimSegment839.children = new MFNode();

HAnimSegment839.children[0] = TouchSensor840;

let Transform841 = browser.currentScene.createNode("Transform");
Transform841.translation = new SFVec3f(new float[-0.0336,1.635,0.0506]);
let Shape842 = browser.currentScene.createNode("Shape");
Shape842.USE = "HAnimJointShape";
Transform841.children = new MFNode();

Transform841.children[0] = Shape842;

HAnimSegment839.children[1] = Transform841;

HAnimJoint838.children = new MFNode();

HAnimJoint838.children[0] = HAnimSegment839;

HAnimJoint682.children[6] = HAnimJoint838;

let HAnimJoint843 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint843.name = "temporomandibular";
HAnimJoint843.DEF = "hanim_temporomandibular";
HAnimJoint843.center = new SFVec3f(new float[0,1.63,0.015]);
HAnimJoint843.stiffness = new SFVec3f(new float[0,0,0]);
//Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint
let HAnimSegment844 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment844.name = "jaw";
HAnimSegment844.DEF = "hanim_jaw";
//Visualization sphere for <HAnimJoint name='temporomandibular'/> is placed within <HAnimSegment name='jaw'/>
let TouchSensor845 = browser.currentScene.createNode("TouchSensor");
TouchSensor845.description = "HAnimJoint temporomandibular, HAnimSegment jaw";
HAnimSegment844.children = new MFNode();

HAnimSegment844.children[0] = TouchSensor845;

let Transform846 = browser.currentScene.createNode("Transform");
Transform846.translation = new SFVec3f(new float[0,1.63,0.015]);
let Shape847 = browser.currentScene.createNode("Shape");
Shape847.USE = "HAnimJointShape";
Transform846.children = new MFNode();

Transform846.children[0] = Shape847;

HAnimSegment844.children[1] = Transform846;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_l_site_pt'/>
let Shape848 = browser.currentScene.createNode("Shape");
let LineSet849 = browser.currentScene.createNode("LineSet");
LineSet849.vertexCount = new MFInt32(new int[2]);
let Coordinate850 = browser.currentScene.createNode("Coordinate");
Coordinate850.point = new MFVec3f(new float[0,1.63,0.015,0.045,1.63,0]);
LineSet849.coord = Coordinate850;

let ColorRGBA851 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA851.USE = "HAnimSiteLineColorRGBA";
LineSet849.color = ColorRGBA851;

Shape848.geometry = LineSet849;

HAnimSegment844.children[2] = Shape848;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_r_site_pt'/>
let Shape852 = browser.currentScene.createNode("Shape");
let LineSet853 = browser.currentScene.createNode("LineSet");
LineSet853.vertexCount = new MFInt32(new int[2]);
let Coordinate854 = browser.currentScene.createNode("Coordinate");
Coordinate854.point = new MFVec3f(new float[0,1.63,0.015,-0.045,1.63,0]);
LineSet853.coord = Coordinate854;

let ColorRGBA855 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA855.USE = "HAnimSiteLineColorRGBA";
LineSet853.color = ColorRGBA855;

Shape852.geometry = LineSet853;

HAnimSegment844.children[3] = Shape852;

let HAnimSite856 = browser.currentScene.createNode("HAnimSite");
HAnimSite856.name = "temporomandibular_l_site_pt";
HAnimSite856.DEF = "hanim_temporomandibular_l_site_pt";
HAnimSite856.translation = new SFVec3f(new float[0.045,1.63,0]);
//HAnimSite visualization shape
let TouchSensor857 = browser.currentScene.createNode("TouchSensor");
TouchSensor857.description = "HAnimSite temporomandibular_l_site_pt";
HAnimSite856.children = new MFNode();

HAnimSite856.children[0] = TouchSensor857;

let Shape858 = browser.currentScene.createNode("Shape");
Shape858.USE = "HAnimSiteShape";
HAnimSite856.children[1] = Shape858;

HAnimSegment844.children[4] = HAnimSite856;

let HAnimSite859 = browser.currentScene.createNode("HAnimSite");
HAnimSite859.name = "temporomandibular_r_site_pt";
HAnimSite859.DEF = "hanim_temporomandibular_r_site_pt";
HAnimSite859.translation = new SFVec3f(new float[-0.045,1.63,0]);
//HAnimSite visualization shape
let TouchSensor860 = browser.currentScene.createNode("TouchSensor");
TouchSensor860.description = "HAnimSite temporomandibular_r_site_pt";
HAnimSite859.children = new MFNode();

HAnimSite859.children[0] = TouchSensor860;

let Shape861 = browser.currentScene.createNode("Shape");
Shape861.USE = "HAnimSiteShape";
HAnimSite859.children[1] = Shape861;

HAnimSegment844.children[5] = HAnimSite859;

HAnimJoint843.children = new MFNode();

HAnimJoint843.children[0] = HAnimSegment844;

HAnimJoint682.children[7] = HAnimJoint843;

HAnimJoint673.children[1] = HAnimJoint682;

HAnimJoint664.children[1] = HAnimJoint673;

HAnimJoint655.children[1] = HAnimJoint664;

HAnimJoint646.children[1] = HAnimJoint655;

HAnimJoint637.children[1] = HAnimJoint646;

HAnimJoint628.children[1] = HAnimJoint637;

HAnimJoint605.children[1] = HAnimJoint628;

HAnimJoint574.children[1] = HAnimJoint605;

let HAnimJoint862 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint862.name = "l_sternoclavicular";
HAnimJoint862.DEF = "hanim_l_sternoclavicular";
HAnimJoint862.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint862.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment863 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment863.name = "l_clavicle";
HAnimSegment863.DEF = "hanim_l_clavicle";
//Visualization sphere for <HAnimJoint name='l_sternoclavicular'/> is placed within <HAnimSegment name='l_clavicle'/>
let TouchSensor864 = browser.currentScene.createNode("TouchSensor");
TouchSensor864.description = "HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle";
HAnimSegment863.children = new MFNode();

HAnimSegment863.children[0] = TouchSensor864;

let Transform865 = browser.currentScene.createNode("Transform");
Transform865.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
let Shape866 = browser.currentScene.createNode("Shape");
Shape866.USE = "HAnimJointShape";
Transform865.children = new MFNode();

Transform865.children[0] = Shape866;

HAnimSegment863.children[1] = Transform865;

//HAnimSegment visualization line from current <HAnimJoint name='l_sternoclavicular'/> to child <HAnimJoint name='l_acromioclavicular'/>
let Shape867 = browser.currentScene.createNode("Shape");
let LineSet868 = browser.currentScene.createNode("LineSet");
LineSet868.vertexCount = new MFInt32(new int[2]);
let Coordinate869 = browser.currentScene.createNode("Coordinate");
Coordinate869.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet868.coord = Coordinate869;

let ColorRGBA870 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA870.USE = "HAnimSegmentLineColorRGBA";
LineSet868.color = ColorRGBA870;

Shape867.geometry = LineSet868;

HAnimSegment863.children[2] = Shape867;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_clavicale_pt'/>
let Shape871 = browser.currentScene.createNode("Shape");
let LineSet872 = browser.currentScene.createNode("LineSet");
LineSet872.vertexCount = new MFInt32(new int[2]);
let Coordinate873 = browser.currentScene.createNode("Coordinate");
Coordinate873.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0271,1.4943,0.0394]);
LineSet872.coord = Coordinate873;

let ColorRGBA874 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA874.USE = "HAnimSiteLineColorRGBA";
LineSet872.color = ColorRGBA874;

Shape871.geometry = LineSet872;

HAnimSegment863.children[3] = Shape871;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_acromion_pt'/>
let Shape875 = browser.currentScene.createNode("Shape");
let LineSet876 = browser.currentScene.createNode("LineSet");
LineSet876.vertexCount = new MFInt32(new int[2]);
let Coordinate877 = browser.currentScene.createNode("Coordinate");
Coordinate877.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.2032,1.476,-0.049]);
LineSet876.coord = Coordinate877;

let ColorRGBA878 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA878.USE = "HAnimSiteLineColorRGBA";
LineSet876.color = ColorRGBA878;

Shape875.geometry = LineSet876;

HAnimSegment863.children[4] = Shape875;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_ant_pt'/>
let Shape879 = browser.currentScene.createNode("Shape");
let LineSet880 = browser.currentScene.createNode("LineSet");
LineSet880.vertexCount = new MFInt32(new int[2]);
let Coordinate881 = browser.currentScene.createNode("Coordinate");
Coordinate881.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075]);
LineSet880.coord = Coordinate881;

let ColorRGBA882 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA882.USE = "HAnimSiteLineColorRGBA";
LineSet880.color = ColorRGBA882;

Shape879.geometry = LineSet880;

HAnimSegment863.children[5] = Shape879;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_post_pt'/>
let Shape883 = browser.currentScene.createNode("Shape");
let LineSet884 = browser.currentScene.createNode("LineSet");
LineSet884.vertexCount = new MFInt32(new int[2]);
let Coordinate885 = browser.currentScene.createNode("Coordinate");
Coordinate885.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875]);
LineSet884.coord = Coordinate885;

let ColorRGBA886 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA886.USE = "HAnimSiteLineColorRGBA";
LineSet884.color = ColorRGBA886;

Shape883.geometry = LineSet884;

HAnimSegment863.children[6] = Shape883;

let HAnimSite887 = browser.currentScene.createNode("HAnimSite");
HAnimSite887.name = "l_clavicle_pt";
HAnimSite887.DEF = "hanim_l_clavicle_pt";
HAnimSite887.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
//HAnimSite visualization shape
let TouchSensor888 = browser.currentScene.createNode("TouchSensor");
TouchSensor888.description = "HAnimSite l_clavicale_pt";
HAnimSite887.children = new MFNode();

HAnimSite887.children[0] = TouchSensor888;

let Shape889 = browser.currentScene.createNode("Shape");
Shape889.USE = "HAnimSiteShape";
HAnimSite887.children[1] = Shape889;

HAnimSegment863.children[7] = HAnimSite887;

let HAnimSite890 = browser.currentScene.createNode("HAnimSite");
HAnimSite890.name = "l_acromion_pt";
HAnimSite890.DEF = "hanim_l_acromion_pt";
HAnimSite890.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
//HAnimSite visualization shape
let TouchSensor891 = browser.currentScene.createNode("TouchSensor");
TouchSensor891.description = "HAnimSite l_acromion_pt";
HAnimSite890.children = new MFNode();

HAnimSite890.children[0] = TouchSensor891;

let Shape892 = browser.currentScene.createNode("Shape");
Shape892.USE = "HAnimSiteShape";
HAnimSite890.children[1] = Shape892;

HAnimSegment863.children[8] = HAnimSite890;

let HAnimSite893 = browser.currentScene.createNode("HAnimSite");
HAnimSite893.name = "l_axilla_proximal_pt";
HAnimSite893.DEF = "hanim_l_axilla_proximal_pt";
HAnimSite893.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
//HAnimSite visualization shape
let TouchSensor894 = browser.currentScene.createNode("TouchSensor");
TouchSensor894.description = "HAnimSite l_axilla_ant_pt";
HAnimSite893.children = new MFNode();

HAnimSite893.children[0] = TouchSensor894;

let Shape895 = browser.currentScene.createNode("Shape");
Shape895.USE = "HAnimSiteShape";
HAnimSite893.children[1] = Shape895;

HAnimSegment863.children[9] = HAnimSite893;

let HAnimSite896 = browser.currentScene.createNode("HAnimSite");
HAnimSite896.name = "l_axilla_distal_pt";
HAnimSite896.DEF = "hanim_l_axilla_distal_pt";
HAnimSite896.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
//HAnimSite visualization shape
let TouchSensor897 = browser.currentScene.createNode("TouchSensor");
TouchSensor897.description = "HAnimSite l_axilla_post_pt";
HAnimSite896.children = new MFNode();

HAnimSite896.children[0] = TouchSensor897;

let Shape898 = browser.currentScene.createNode("Shape");
Shape898.USE = "HAnimSiteShape";
HAnimSite896.children[1] = Shape898;

HAnimSegment863.children[10] = HAnimSite896;

HAnimJoint862.children = new MFNode();

HAnimJoint862.children[0] = HAnimSegment863;

let HAnimJoint899 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint899.name = "l_acromioclavicular";
HAnimJoint899.DEF = "hanim_l_acromioclavicular";
HAnimJoint899.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint899.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment900 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment900.name = "l_scapula";
HAnimSegment900.DEF = "hanim_l_scapula";
//Visualization sphere for <HAnimJoint name='l_acromioclavicular'/> is placed within <HAnimSegment name='l_scapula'/>
let TouchSensor901 = browser.currentScene.createNode("TouchSensor");
TouchSensor901.description = "HAnimJoint l_acromioclavicular, HAnimSegment l_scapula";
HAnimSegment900.children = new MFNode();

HAnimSegment900.children[0] = TouchSensor901;

let Transform902 = browser.currentScene.createNode("Transform");
Transform902.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
let Shape903 = browser.currentScene.createNode("Shape");
Shape903.USE = "HAnimJointShape";
Transform902.children = new MFNode();

Transform902.children[0] = Shape903;

HAnimSegment900.children[1] = Transform902;

//HAnimSegment visualization line from current <HAnimJoint name='l_acromioclavicular'/> to child <HAnimJoint name='l_shoulder'/>
let Shape904 = browser.currentScene.createNode("Shape");
let LineSet905 = browser.currentScene.createNode("LineSet");
LineSet905.vertexCount = new MFInt32(new int[2]);
let Coordinate906 = browser.currentScene.createNode("Coordinate");
Coordinate906.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet905.coord = Coordinate906;

let ColorRGBA907 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA907.USE = "HAnimSegmentLineColorRGBA";
LineSet905.color = ColorRGBA907;

Shape904.geometry = LineSet905;

HAnimSegment900.children[2] = Shape904;

HAnimJoint899.children = new MFNode();

HAnimJoint899.children[0] = HAnimSegment900;

let HAnimJoint908 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint908.name = "l_shoulder";
HAnimJoint908.DEF = "hanim_l_shoulder";
HAnimJoint908.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint908.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment909 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment909.name = "l_upperarm";
HAnimSegment909.DEF = "hanim_l_upperarm";
//Visualization sphere for <HAnimJoint name='l_shoulder'/> is placed within <HAnimSegment name='l_upperarm'/>
let TouchSensor910 = browser.currentScene.createNode("TouchSensor");
TouchSensor910.description = "HAnimJoint l_shoulder, HAnimSegment l_upperarm";
HAnimSegment909.children = new MFNode();

HAnimSegment909.children[0] = TouchSensor910;

let Transform911 = browser.currentScene.createNode("Transform");
Transform911.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
let Shape912 = browser.currentScene.createNode("Shape");
Shape912.USE = "HAnimJointShape";
Transform911.children = new MFNode();

Transform911.children[0] = Shape912;

HAnimSegment909.children[1] = Transform911;

//HAnimSegment visualization line from current <HAnimJoint name='l_shoulder'/> to child <HAnimJoint name='l_elbow'/>
let Shape913 = browser.currentScene.createNode("Shape");
let LineSet914 = browser.currentScene.createNode("LineSet");
LineSet914.vertexCount = new MFInt32(new int[2]);
let Coordinate915 = browser.currentScene.createNode("Coordinate");
Coordinate915.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet914.coord = Coordinate915;

let ColorRGBA916 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA916.USE = "HAnimSegmentLineColorRGBA";
LineSet914.color = ColorRGBA916;

Shape913.geometry = LineSet914;

HAnimSegment909.children[2] = Shape913;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_shoulder'/> to <HAnimSite name='l_humeral_lateral_epicn_pt'/>
let Shape917 = browser.currentScene.createNode("Shape");
let LineSet918 = browser.currentScene.createNode("LineSet");
LineSet918.vertexCount = new MFInt32(new int[2]);
let Coordinate919 = browser.currentScene.createNode("Coordinate");
Coordinate919.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.228,1.1482,-0.11]);
LineSet918.coord = Coordinate919;

let ColorRGBA920 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA920.USE = "HAnimSiteLineColorRGBA";
LineSet918.color = ColorRGBA920;

Shape917.geometry = LineSet918;

HAnimSegment909.children[3] = Shape917;

let HAnimSite921 = browser.currentScene.createNode("HAnimSite");
HAnimSite921.name = "l_humeral_lateral_epicondyle_pt";
HAnimSite921.DEF = "hanim_l_humeral_lateral_epicondyle_pt";
HAnimSite921.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
//HAnimSite visualization shape
let TouchSensor922 = browser.currentScene.createNode("TouchSensor");
TouchSensor922.description = "HAnimSite l_humeral_lateral_epicn_pt";
HAnimSite921.children = new MFNode();

HAnimSite921.children[0] = TouchSensor922;

let Shape923 = browser.currentScene.createNode("Shape");
Shape923.USE = "HAnimSiteShape";
HAnimSite921.children[1] = Shape923;

HAnimSegment909.children[4] = HAnimSite921;

HAnimJoint908.children = new MFNode();

HAnimJoint908.children[0] = HAnimSegment909;

let HAnimJoint924 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint924.name = "l_elbow";
HAnimJoint924.DEF = "hanim_l_elbow";
HAnimJoint924.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint924.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment925 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment925.name = "l_forearm";
HAnimSegment925.DEF = "hanim_l_forearm";
//Visualization sphere for <HAnimJoint name='l_elbow'/> is placed within <HAnimSegment name='l_forearm'/>
let TouchSensor926 = browser.currentScene.createNode("TouchSensor");
TouchSensor926.description = "HAnimJoint l_elbow, HAnimSegment l_forearm";
HAnimSegment925.children = new MFNode();

HAnimSegment925.children[0] = TouchSensor926;

let Transform927 = browser.currentScene.createNode("Transform");
Transform927.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
let Shape928 = browser.currentScene.createNode("Shape");
Shape928.USE = "HAnimJointShape";
Transform927.children = new MFNode();

Transform927.children[0] = Shape928;

HAnimSegment925.children[1] = Transform927;

//HAnimSegment visualization line from current <HAnimJoint name='l_elbow'/> to child <HAnimJoint name='l_radiocarpal'/>
let Shape929 = browser.currentScene.createNode("Shape");
let LineSet930 = browser.currentScene.createNode("LineSet");
LineSet930.vertexCount = new MFInt32(new int[2]);
let Coordinate931 = browser.currentScene.createNode("Coordinate");
Coordinate931.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet930.coord = Coordinate931;

let ColorRGBA932 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA932.USE = "HAnimSegmentLineColorRGBA";
LineSet930.color = ColorRGBA932;

Shape929.geometry = LineSet930;

HAnimSegment925.children[2] = Shape929;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radial_styloid_pt'/>
let Shape933 = browser.currentScene.createNode("Shape");
let LineSet934 = browser.currentScene.createNode("LineSet");
LineSet934.vertexCount = new MFInt32(new int[2]);
let Coordinate935 = browser.currentScene.createNode("Coordinate");
Coordinate935.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415]);
LineSet934.coord = Coordinate935;

let ColorRGBA936 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA936.USE = "HAnimSiteLineColorRGBA";
LineSet934.color = ColorRGBA936;

Shape933.geometry = LineSet934;

HAnimSegment925.children[3] = Shape933;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_olecranon_pt'/>
let Shape937 = browser.currentScene.createNode("Shape");
let LineSet938 = browser.currentScene.createNode("LineSet");
LineSet938.vertexCount = new MFInt32(new int[2]);
let Coordinate939 = browser.currentScene.createNode("Coordinate");
Coordinate939.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123]);
LineSet938.coord = Coordinate939;

let ColorRGBA940 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA940.USE = "HAnimSiteLineColorRGBA";
LineSet938.color = ColorRGBA940;

Shape937.geometry = LineSet938;

HAnimSegment925.children[4] = Shape937;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_humeral_medial_epicn_pt'/>
let Shape941 = browser.currentScene.createNode("Shape");
let LineSet942 = browser.currentScene.createNode("LineSet");
LineSet942.vertexCount = new MFInt32(new int[2]);
let Coordinate943 = browser.currentScene.createNode("Coordinate");
Coordinate943.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113]);
LineSet942.coord = Coordinate943;

let ColorRGBA944 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA944.USE = "HAnimSiteLineColorRGBA";
LineSet942.color = ColorRGBA944;

Shape941.geometry = LineSet942;

HAnimSegment925.children[5] = Shape941;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radiale_pt'/>
let Shape945 = browser.currentScene.createNode("Shape");
let LineSet946 = browser.currentScene.createNode("LineSet");
LineSet946.vertexCount = new MFInt32(new int[2]);
let Coordinate947 = browser.currentScene.createNode("Coordinate");
Coordinate947.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167]);
LineSet946.coord = Coordinate947;

let ColorRGBA948 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA948.USE = "HAnimSiteLineColorRGBA";
LineSet946.color = ColorRGBA948;

Shape945.geometry = LineSet946;

HAnimSegment925.children[6] = Shape945;

let HAnimSite949 = browser.currentScene.createNode("HAnimSite");
HAnimSite949.name = "l_radial_styloid_pt";
HAnimSite949.DEF = "hanim_l_radial_styloid_pt";
HAnimSite949.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
//HAnimSite visualization shape
let TouchSensor950 = browser.currentScene.createNode("TouchSensor");
TouchSensor950.description = "HAnimSite l_radial_styloid_pt";
HAnimSite949.children = new MFNode();

HAnimSite949.children[0] = TouchSensor950;

let Shape951 = browser.currentScene.createNode("Shape");
Shape951.USE = "HAnimSiteShape";
HAnimSite949.children[1] = Shape951;

HAnimSegment925.children[7] = HAnimSite949;

let HAnimSite952 = browser.currentScene.createNode("HAnimSite");
HAnimSite952.name = "l_olecranon_pt";
HAnimSite952.DEF = "hanim_l_olecranon_pt";
HAnimSite952.translation = new SFVec3f(new float[0.1962,1.1375,-0.1123]);
//HAnimSite visualization shape
let TouchSensor953 = browser.currentScene.createNode("TouchSensor");
TouchSensor953.description = "HAnimSite l_olecranon_pt";
HAnimSite952.children = new MFNode();

HAnimSite952.children[0] = TouchSensor953;

let Shape954 = browser.currentScene.createNode("Shape");
Shape954.USE = "HAnimSiteShape";
HAnimSite952.children[1] = Shape954;

HAnimSegment925.children[8] = HAnimSite952;

let HAnimSite955 = browser.currentScene.createNode("HAnimSite");
HAnimSite955.name = "l_humeral_medial_epicondyle_pt";
HAnimSite955.DEF = "hanim_l_humeral_medial_epicondyle_pt";
HAnimSite955.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
//HAnimSite visualization shape
let TouchSensor956 = browser.currentScene.createNode("TouchSensor");
TouchSensor956.description = "HAnimSite l_humeral_medial_epicn_pt";
HAnimSite955.children = new MFNode();

HAnimSite955.children[0] = TouchSensor956;

let Shape957 = browser.currentScene.createNode("Shape");
Shape957.USE = "HAnimSiteShape";
HAnimSite955.children[1] = Shape957;

HAnimSegment925.children[9] = HAnimSite955;

let HAnimSite958 = browser.currentScene.createNode("HAnimSite");
HAnimSite958.name = "l_radiale_pt";
HAnimSite958.DEF = "hanim_l_radiale_pt";
HAnimSite958.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
//HAnimSite visualization shape
let TouchSensor959 = browser.currentScene.createNode("TouchSensor");
TouchSensor959.description = "HAnimSite l_radiale_pt";
HAnimSite958.children = new MFNode();

HAnimSite958.children[0] = TouchSensor959;

let Shape960 = browser.currentScene.createNode("Shape");
Shape960.USE = "HAnimSiteShape";
HAnimSite958.children[1] = Shape960;

HAnimSegment925.children[10] = HAnimSite958;

HAnimJoint924.children = new MFNode();

HAnimJoint924.children[0] = HAnimSegment925;

let HAnimJoint961 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint961.name = "l_radiocarpal";
HAnimJoint961.DEF = "hanim_l_radiocarpal";
HAnimJoint961.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint961.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment962 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment962.name = "l_carpal";
HAnimSegment962.DEF = "hanim_l_carpal";
//Visualization sphere for <HAnimJoint name='l_radiocarpal'/> is placed within <HAnimSegment name='l_carpal'/>
let TouchSensor963 = browser.currentScene.createNode("TouchSensor");
TouchSensor963.description = "HAnimJoint l_radiocarpal, HAnimSegment l_carpal";
HAnimSegment962.children = new MFNode();

HAnimSegment962.children[0] = TouchSensor963;

let Transform964 = browser.currentScene.createNode("Transform");
Transform964.translation = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
let Shape965 = browser.currentScene.createNode("Shape");
Shape965.USE = "HAnimJointShape";
Transform964.children = new MFNode();

Transform964.children[0] = Shape965;

HAnimSegment962.children[1] = Transform964;

//HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_thumb1'/>
let Shape966 = browser.currentScene.createNode("Shape");
let LineSet967 = browser.currentScene.createNode("LineSet");
LineSet967.vertexCount = new MFInt32(new int[2]);
let Coordinate968 = browser.currentScene.createNode("Coordinate");
Coordinate968.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534]);
LineSet967.coord = Coordinate968;

let ColorRGBA969 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA969.USE = "HAnimSegmentLineColorRGBA";
LineSet967.color = ColorRGBA969;

Shape966.geometry = LineSet967;

HAnimSegment962.children[2] = Shape966;

//HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_index0'/>
let Shape970 = browser.currentScene.createNode("Shape");
let LineSet971 = browser.currentScene.createNode("LineSet");
LineSet971.vertexCount = new MFInt32(new int[2]);
let Coordinate972 = browser.currentScene.createNode("Coordinate");
Coordinate972.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028]);
LineSet971.coord = Coordinate972;

let ColorRGBA973 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA973.USE = "HAnimSegmentLineColorRGBA";
LineSet971.color = ColorRGBA973;

Shape970.geometry = LineSet971;

HAnimSegment962.children[3] = Shape970;

//HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_middle0'/>
let Shape974 = browser.currentScene.createNode("Shape");
let LineSet975 = browser.currentScene.createNode("LineSet");
LineSet975.vertexCount = new MFInt32(new int[2]);
let Coordinate976 = browser.currentScene.createNode("Coordinate");
Coordinate976.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053]);
LineSet975.coord = Coordinate976;

let ColorRGBA977 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA977.USE = "HAnimSegmentLineColorRGBA";
LineSet975.color = ColorRGBA977;

Shape974.geometry = LineSet975;

HAnimSegment962.children[4] = Shape974;

//HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_ring0'/>
let Shape978 = browser.currentScene.createNode("Shape");
let LineSet979 = browser.currentScene.createNode("LineSet");
LineSet979.vertexCount = new MFInt32(new int[2]);
let Coordinate980 = browser.currentScene.createNode("Coordinate");
Coordinate980.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794]);
LineSet979.coord = Coordinate980;

let ColorRGBA981 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA981.USE = "HAnimSegmentLineColorRGBA";
LineSet979.color = ColorRGBA981;

Shape978.geometry = LineSet979;

HAnimSegment962.children[5] = Shape978;

//HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_pinky0'/>
let Shape982 = browser.currentScene.createNode("Shape");
let LineSet983 = browser.currentScene.createNode("LineSet");
LineSet983.vertexCount = new MFInt32(new int[2]);
let Coordinate984 = browser.currentScene.createNode("Coordinate");
Coordinate984.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036]);
LineSet983.coord = Coordinate984;

let ColorRGBA985 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA985.USE = "HAnimSegmentLineColorRGBA";
LineSet983.color = ColorRGBA985;

Shape982.geometry = LineSet983;

HAnimSegment962.children[6] = Shape982;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_radiocarpal'/> to <HAnimSite name='l_metacarpal_pha2_pt'/>
let Shape986 = browser.currentScene.createNode("Shape");
let LineSet987 = browser.currentScene.createNode("LineSet");
LineSet987.vertexCount = new MFInt32(new int[2]);
let Coordinate988 = browser.currentScene.createNode("Coordinate");
Coordinate988.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237]);
LineSet987.coord = Coordinate988;

let ColorRGBA989 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA989.USE = "HAnimSiteLineColorRGBA";
LineSet987.color = ColorRGBA989;

Shape986.geometry = LineSet987;

HAnimSegment962.children[7] = Shape986;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_radiocarpal'/> to <HAnimSite name='l_ulnar_styloid_pt'/>
let Shape990 = browser.currentScene.createNode("Shape");
let LineSet991 = browser.currentScene.createNode("LineSet");
LineSet991.vertexCount = new MFInt32(new int[2]);
let Coordinate992 = browser.currentScene.createNode("Coordinate");
Coordinate992.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648]);
LineSet991.coord = Coordinate992;

let ColorRGBA993 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA993.USE = "HAnimSiteLineColorRGBA";
LineSet991.color = ColorRGBA993;

Shape990.geometry = LineSet991;

HAnimSegment962.children[8] = Shape990;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_radiocarpal'/> to <HAnimSite name='l_metacarpal_pha5_pt'/>
let Shape994 = browser.currentScene.createNode("Shape");
let LineSet995 = browser.currentScene.createNode("LineSet");
LineSet995.vertexCount = new MFInt32(new int[2]);
let Coordinate996 = browser.currentScene.createNode("Coordinate");
Coordinate996.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122]);
LineSet995.coord = Coordinate996;

let ColorRGBA997 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA997.USE = "HAnimSiteLineColorRGBA";
LineSet995.color = ColorRGBA997;

Shape994.geometry = LineSet995;

HAnimSegment962.children[9] = Shape994;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_radiocarpal'/> to <HAnimSite name='l_hand_front_view'/>
let Shape998 = browser.currentScene.createNode("Shape");
let LineSet999 = browser.currentScene.createNode("LineSet");
LineSet999.vertexCount = new MFInt32(new int[2]);
let Coordinate1000 = browser.currentScene.createNode("Coordinate");
Coordinate1000.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.3,0.75,0.45]);
LineSet999.coord = Coordinate1000;

let ColorRGBA1001 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1001.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet999.color = ColorRGBA1001;

Shape998.geometry = LineSet999;

HAnimSegment962.children[10] = Shape998;

let HAnimSite1002 = browser.currentScene.createNode("HAnimSite");
HAnimSite1002.name = "l_metacarpal_phalanx_2_pt";
HAnimSite1002.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite1002.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
//HAnimSite visualization shape
let TouchSensor1003 = browser.currentScene.createNode("TouchSensor");
TouchSensor1003.description = "HAnimSite l_metacarpal_pha2_pt";
HAnimSite1002.children = new MFNode();

HAnimSite1002.children[0] = TouchSensor1003;

let Shape1004 = browser.currentScene.createNode("Shape");
Shape1004.USE = "HAnimSiteShape";
HAnimSite1002.children[1] = Shape1004;

HAnimSegment962.children[11] = HAnimSite1002;

let HAnimSite1005 = browser.currentScene.createNode("HAnimSite");
HAnimSite1005.name = "l_ulnar_styloid_pt";
HAnimSite1005.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite1005.translation = new SFVec3f(new float[0.2142,0.8529,-0.0648]);
//HAnimSite visualization shape
let TouchSensor1006 = browser.currentScene.createNode("TouchSensor");
TouchSensor1006.description = "HAnimSite l_ulnar_styloid_pt";
HAnimSite1005.children = new MFNode();

HAnimSite1005.children[0] = TouchSensor1006;

let Shape1007 = browser.currentScene.createNode("Shape");
Shape1007.USE = "HAnimSiteShape";
HAnimSite1005.children[1] = Shape1007;

HAnimSegment962.children[12] = HAnimSite1005;

let HAnimSite1008 = browser.currentScene.createNode("HAnimSite");
HAnimSite1008.name = "l_metacarpal_phalanx_5_pt";
HAnimSite1008.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite1008.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
//HAnimSite visualization shape
let TouchSensor1009 = browser.currentScene.createNode("TouchSensor");
TouchSensor1009.description = "HAnimSite l_metacarpal_pha5_pt";
HAnimSite1008.children = new MFNode();

HAnimSite1008.children[0] = TouchSensor1009;

let Shape1010 = browser.currentScene.createNode("Shape");
Shape1010.USE = "HAnimSiteShape";
HAnimSite1008.children[1] = Shape1010;

HAnimSegment962.children[13] = HAnimSite1008;

let HAnimSite1011 = browser.currentScene.createNode("HAnimSite");
HAnimSite1011.name = "l_hand_front_view";
HAnimSite1011.DEF = "hanim_l_hand_front_view";
HAnimSite1011.translation = new SFVec3f(new float[0.3,0.75,0.45]);
//HAnimSite visualization shape
let TouchSensor1012 = browser.currentScene.createNode("TouchSensor");
TouchSensor1012.description = "HAnimSite l_hand_front_view";
HAnimSite1011.children = new MFNode();

HAnimSite1011.children[0] = TouchSensor1012;

let Shape1013 = browser.currentScene.createNode("Shape");
Shape1013.USE = "HAnimSiteShape";
HAnimSite1011.children[1] = Shape1013;

let Viewpoint1014 = browser.currentScene.createNode("Viewpoint");
Viewpoint1014.DEF = "hanim_l_hand_front_viewpoint";
Viewpoint1014.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint1014.description = "left hand front";
Viewpoint1014.position = new SFVec3f(new float[0,0,0]);
HAnimSite1011.children[2] = Viewpoint1014;

//HAnimSite/Viewpoint visualization shape
let Anchor1015 = browser.currentScene.createNode("Anchor");
Anchor1015.description = "HAnimSite hanim_l_hand_front_view Viewpoint";
Anchor1015.url = new MFString(new java.lang.String["#hanim_l_hand_front_viewpoint"]);
let LOD1016 = browser.currentScene.createNode("LOD");
LOD1016.forceTransitions = True;
LOD1016.range = new MFFloat(new float[0.04]);
let WorldInfo1017 = browser.currentScene.createNode("WorldInfo");
WorldInfo1017.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1016.children = new MFNode();

LOD1016.children[0] = WorldInfo1017;

let Shape1018 = browser.currentScene.createNode("Shape");
Shape1018.USE = "HAnimSiteViewpointShape";
LOD1016.children[1] = Shape1018;

Anchor1015.children = new MFNode();

Anchor1015.children[0] = LOD1016;

HAnimSite1011.children[3] = Anchor1015;

HAnimSegment962.children[14] = HAnimSite1011;

HAnimJoint961.children = new MFNode();

HAnimJoint961.children[0] = HAnimSegment962;

let HAnimJoint1019 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1019.name = "l_carpometacarpal_1";
HAnimJoint1019.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint1019.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint1019.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1020 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1020.name = "l_metacarpal_1";
HAnimSegment1020.DEF = "hanim_l_metacarpal_1";
//Visualization sphere for <HAnimJoint name='l_thumb1'/> is placed within <HAnimSegment name='l_metacarpal_1'/>
let TouchSensor1021 = browser.currentScene.createNode("TouchSensor");
TouchSensor1021.description = "HAnimJoint l_thumb1, HAnimSegment l_metacarpal_1";
HAnimSegment1020.children = new MFNode();

HAnimSegment1020.children[0] = TouchSensor1021;

let Transform1022 = browser.currentScene.createNode("Transform");
Transform1022.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
let Shape1023 = browser.currentScene.createNode("Shape");
Shape1023.USE = "HAnimJointShape";
Transform1022.children = new MFNode();

Transform1022.children[0] = Shape1023;

HAnimSegment1020.children[1] = Transform1022;

//HAnimSegment visualization line from current <HAnimJoint name='l_thumb1'/> to child <HAnimJoint name='l_thumb2'/>
let Shape1024 = browser.currentScene.createNode("Shape");
let LineSet1025 = browser.currentScene.createNode("LineSet");
LineSet1025.vertexCount = new MFInt32(new int[2]);
let Coordinate1026 = browser.currentScene.createNode("Coordinate");
Coordinate1026.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet1025.coord = Coordinate1026;

let ColorRGBA1027 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1027.USE = "HAnimSegmentLineColorRGBA";
LineSet1025.color = ColorRGBA1027;

Shape1024.geometry = LineSet1025;

HAnimSegment1020.children[2] = Shape1024;

HAnimJoint1019.children = new MFNode();

HAnimJoint1019.children[0] = HAnimSegment1020;

let HAnimJoint1028 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1028.name = "l_metacarpophalangeal_1";
HAnimJoint1028.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint1028.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint1028.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1029 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1029.name = "l_carpal_proximal_phalanx_1";
HAnimSegment1029.DEF = "hanim_l_carpal_proximal_phalanx_1";
//Visualization sphere for <HAnimJoint name='l_thumb2'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_1'/>
let TouchSensor1030 = browser.currentScene.createNode("TouchSensor");
TouchSensor1030.description = "HAnimJoint l_thumb2, HAnimSegment l_carpal_proximal_phalanx_1";
HAnimSegment1029.children = new MFNode();

HAnimSegment1029.children[0] = TouchSensor1030;

let Transform1031 = browser.currentScene.createNode("Transform");
Transform1031.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
let Shape1032 = browser.currentScene.createNode("Shape");
Shape1032.USE = "HAnimJointShape";
Transform1031.children = new MFNode();

Transform1031.children[0] = Shape1032;

HAnimSegment1029.children[1] = Transform1031;

//HAnimSegment visualization line from current <HAnimJoint name='l_thumb2'/> to child <HAnimJoint name='l_thumb3'/>
let Shape1033 = browser.currentScene.createNode("Shape");
let LineSet1034 = browser.currentScene.createNode("LineSet");
LineSet1034.vertexCount = new MFInt32(new int[2]);
let Coordinate1035 = browser.currentScene.createNode("Coordinate");
Coordinate1035.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet1034.coord = Coordinate1035;

let ColorRGBA1036 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1036.USE = "HAnimSegmentLineColorRGBA";
LineSet1034.color = ColorRGBA1036;

Shape1033.geometry = LineSet1034;

HAnimSegment1029.children[2] = Shape1033;

HAnimJoint1028.children = new MFNode();

HAnimJoint1028.children[0] = HAnimSegment1029;

let HAnimJoint1037 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1037.name = "l_carpal_interphalangeal_1";
HAnimJoint1037.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint1037.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint1037.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1038 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1038.name = "l_carpal_distal_phalanx_1";
HAnimSegment1038.DEF = "hanim_l_carpal_distal_phalanx_1";
//Visualization sphere for <HAnimJoint name='l_thumb3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_1'/>
let TouchSensor1039 = browser.currentScene.createNode("TouchSensor");
TouchSensor1039.description = "HAnimJoint l_thumb3, HAnimSegment l_carpal_distal_phalanx_1";
HAnimSegment1038.children = new MFNode();

HAnimSegment1038.children[0] = TouchSensor1039;

let Transform1040 = browser.currentScene.createNode("Transform");
Transform1040.translation = new SFVec3f(new float[0.1955,0.8159,0.0464]);
let Shape1041 = browser.currentScene.createNode("Shape");
Shape1041.USE = "HAnimJointShape";
Transform1040.children = new MFNode();

Transform1040.children[0] = Shape1041;

HAnimSegment1038.children[1] = Transform1040;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_thumb3'/> to <HAnimSite name='l_thumb_distal_tip'/>
let Shape1042 = browser.currentScene.createNode("Shape");
let LineSet1043 = browser.currentScene.createNode("LineSet");
LineSet1043.vertexCount = new MFInt32(new int[2]);
let Coordinate1044 = browser.currentScene.createNode("Coordinate");
Coordinate1044.point = new MFVec3f(new float[0.1955,0.8159,0.0464,0.1982,0.8061,0.0759]);
LineSet1043.coord = Coordinate1044;

let ColorRGBA1045 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1045.USE = "HAnimSiteLineColorRGBA";
LineSet1043.color = ColorRGBA1045;

Shape1042.geometry = LineSet1043;

HAnimSegment1038.children[2] = Shape1042;

let HAnimSite1046 = browser.currentScene.createNode("HAnimSite");
HAnimSite1046.name = "l_carpal_distal_phalanx_1_pt";
HAnimSite1046.DEF = "hanim_l_carpal_distal_phalanx_1_pt";
HAnimSite1046.translation = new SFVec3f(new float[0.1982,0.8061,0.0759]);
//HAnimSite visualization shape
let TouchSensor1047 = browser.currentScene.createNode("TouchSensor");
TouchSensor1047.description = "HAnimSite l_thumb_distal_tip";
HAnimSite1046.children = new MFNode();

HAnimSite1046.children[0] = TouchSensor1047;

let Shape1048 = browser.currentScene.createNode("Shape");
Shape1048.USE = "HAnimSiteShape";
HAnimSite1046.children[1] = Shape1048;

HAnimSegment1038.children[3] = HAnimSite1046;

HAnimJoint1037.children = new MFNode();

HAnimJoint1037.children[0] = HAnimSegment1038;

HAnimJoint1028.children[1] = HAnimJoint1037;

HAnimJoint1019.children[1] = HAnimJoint1028;

HAnimJoint961.children[1] = HAnimJoint1019;

let HAnimJoint1049 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1049.name = "l_carpometacarpal_2";
HAnimJoint1049.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint1049.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint1049.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1050 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1050.name = "l_metacarpal_2";
HAnimSegment1050.DEF = "hanim_l_metacarpal_2";
//Visualization sphere for <HAnimJoint name='l_index0'/> is placed within <HAnimSegment name='l_metacarpal_2'/>
let TouchSensor1051 = browser.currentScene.createNode("TouchSensor");
TouchSensor1051.description = "HAnimJoint l_index0, HAnimSegment l_metacarpal_2";
HAnimSegment1050.children = new MFNode();

HAnimSegment1050.children[0] = TouchSensor1051;

let Transform1052 = browser.currentScene.createNode("Transform");
Transform1052.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
let Shape1053 = browser.currentScene.createNode("Shape");
Shape1053.USE = "HAnimJointShape";
Transform1052.children = new MFNode();

Transform1052.children[0] = Shape1053;

HAnimSegment1050.children[1] = Transform1052;

//HAnimSegment visualization line from current <HAnimJoint name='l_index0'/> to child <HAnimJoint name='l_index1'/>
let Shape1054 = browser.currentScene.createNode("Shape");
let LineSet1055 = browser.currentScene.createNode("LineSet");
LineSet1055.vertexCount = new MFInt32(new int[2]);
let Coordinate1056 = browser.currentScene.createNode("Coordinate");
Coordinate1056.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet1055.coord = Coordinate1056;

let ColorRGBA1057 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1057.USE = "HAnimSegmentLineColorRGBA";
LineSet1055.color = ColorRGBA1057;

Shape1054.geometry = LineSet1055;

HAnimSegment1050.children[2] = Shape1054;

HAnimJoint1049.children = new MFNode();

HAnimJoint1049.children[0] = HAnimSegment1050;

let HAnimJoint1058 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1058.name = "l_metacarpophalangeal_2";
HAnimJoint1058.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint1058.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint1058.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1059 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1059.name = "l_carpal_proximal_phalanx_2";
HAnimSegment1059.DEF = "hanim_l_carpal_proximal_phalanx_2";
//Visualization sphere for <HAnimJoint name='l_index1'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_2'/>
let TouchSensor1060 = browser.currentScene.createNode("TouchSensor");
TouchSensor1060.description = "HAnimJoint l_index1, HAnimSegment l_carpal_proximal_phalanx_2";
HAnimSegment1059.children = new MFNode();

HAnimSegment1059.children[0] = TouchSensor1060;

let Transform1061 = browser.currentScene.createNode("Transform");
Transform1061.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
let Shape1062 = browser.currentScene.createNode("Shape");
Shape1062.USE = "HAnimJointShape";
Transform1061.children = new MFNode();

Transform1061.children[0] = Shape1062;

HAnimSegment1059.children[1] = Transform1061;

//HAnimSegment visualization line from current <HAnimJoint name='l_index1'/> to child <HAnimJoint name='l_index2'/>
let Shape1063 = browser.currentScene.createNode("Shape");
let LineSet1064 = browser.currentScene.createNode("LineSet");
LineSet1064.vertexCount = new MFInt32(new int[2]);
let Coordinate1065 = browser.currentScene.createNode("Coordinate");
Coordinate1065.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet1064.coord = Coordinate1065;

let ColorRGBA1066 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1066.USE = "HAnimSegmentLineColorRGBA";
LineSet1064.color = ColorRGBA1066;

Shape1063.geometry = LineSet1064;

HAnimSegment1059.children[2] = Shape1063;

HAnimJoint1058.children = new MFNode();

HAnimJoint1058.children[0] = HAnimSegment1059;

let HAnimJoint1067 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1067.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint1067.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint1067.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint1067.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1068 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1068.name = "l_carpal_middle_phalanx_2";
HAnimSegment1068.DEF = "hanim_l_carpal_middle_phalanx_2";
//Visualization sphere for <HAnimJoint name='l_index2'/> is placed within <HAnimSegment name='l_carpal_middle_phalanx_2'/>
let TouchSensor1069 = browser.currentScene.createNode("TouchSensor");
TouchSensor1069.description = "HAnimJoint l_index2, HAnimSegment l_carpal_middle_phalanx_2";
HAnimSegment1068.children = new MFNode();

HAnimSegment1068.children[0] = TouchSensor1069;

let Transform1070 = browser.currentScene.createNode("Transform");
Transform1070.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
let Shape1071 = browser.currentScene.createNode("Shape");
Shape1071.USE = "HAnimJointShape";
Transform1070.children = new MFNode();

Transform1070.children[0] = Shape1071;

HAnimSegment1068.children[1] = Transform1070;

//HAnimSegment visualization line from current <HAnimJoint name='l_index2'/> to child <HAnimJoint name='l_index3'/>
let Shape1072 = browser.currentScene.createNode("Shape");
let LineSet1073 = browser.currentScene.createNode("LineSet");
LineSet1073.vertexCount = new MFInt32(new int[2]);
let Coordinate1074 = browser.currentScene.createNode("Coordinate");
Coordinate1074.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet1073.coord = Coordinate1074;

let ColorRGBA1075 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1075.USE = "HAnimSegmentLineColorRGBA";
LineSet1073.color = ColorRGBA1075;

Shape1072.geometry = LineSet1073;

HAnimSegment1068.children[2] = Shape1072;

HAnimJoint1067.children = new MFNode();

HAnimJoint1067.children[0] = HAnimSegment1068;

let HAnimJoint1076 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1076.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint1076.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint1076.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint1076.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1077 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1077.name = "l_carpal_distal_phalanx_2";
HAnimSegment1077.DEF = "hanim_l_carpal_distal_phalanx_2";
//Visualization sphere for <HAnimJoint name='l_index3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_2'/>
let TouchSensor1078 = browser.currentScene.createNode("TouchSensor");
TouchSensor1078.description = "HAnimJoint l_index3, HAnimSegment l_carpal_distal_phalanx_2";
HAnimSegment1077.children = new MFNode();

HAnimSegment1077.children[0] = TouchSensor1078;

let Transform1079 = browser.currentScene.createNode("Transform");
Transform1079.translation = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
let Shape1080 = browser.currentScene.createNode("Shape");
Shape1080.USE = "HAnimJointShape";
Transform1079.children = new MFNode();

Transform1079.children[0] = Shape1080;

HAnimSegment1077.children[1] = Transform1079;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_index_distal_tip'/>
let Shape1081 = browser.currentScene.createNode("Shape");
let LineSet1082 = browser.currentScene.createNode("LineSet");
LineSet1082.vertexCount = new MFInt32(new int[2]);
let Coordinate1083 = browser.currentScene.createNode("Coordinate");
Coordinate1083.point = new MFVec3f(new float[0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245]);
LineSet1082.coord = Coordinate1083;

let ColorRGBA1084 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1084.USE = "HAnimSiteLineColorRGBA";
LineSet1082.color = ColorRGBA1084;

Shape1081.geometry = LineSet1082;

HAnimSegment1077.children[2] = Shape1081;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_dactylion_pt'/>
let Shape1085 = browser.currentScene.createNode("Shape");
let LineSet1086 = browser.currentScene.createNode("LineSet");
LineSet1086.vertexCount = new MFInt32(new int[2]);
let Coordinate1087 = browser.currentScene.createNode("Coordinate");
Coordinate1087.point = new MFVec3f(new float[0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482]);
LineSet1086.coord = Coordinate1087;

let ColorRGBA1088 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1088.USE = "HAnimSiteLineColorRGBA";
LineSet1086.color = ColorRGBA1088;

Shape1085.geometry = LineSet1086;

HAnimSegment1077.children[3] = Shape1085;

let HAnimSite1089 = browser.currentScene.createNode("HAnimSite");
HAnimSite1089.name = "l_carpal_distal_phalanx_2_pt";
HAnimSite1089.DEF = "hanim_l_carpal_distal_phalanx_2_pt";
HAnimSite1089.translation = new SFVec3f(new float[0.2089,0.6858,-0.0245]);
//HAnimSite visualization shape
let TouchSensor1090 = browser.currentScene.createNode("TouchSensor");
TouchSensor1090.description = "HAnimSite l_index_distal_tip";
HAnimSite1089.children = new MFNode();

HAnimSite1089.children[0] = TouchSensor1090;

let Shape1091 = browser.currentScene.createNode("Shape");
Shape1091.USE = "HAnimSiteShape";
HAnimSite1089.children[1] = Shape1091;

HAnimSegment1077.children[4] = HAnimSite1089;

let HAnimSite1092 = browser.currentScene.createNode("HAnimSite");
HAnimSite1092.name = "l_dactylion_pt";
HAnimSite1092.DEF = "hanim_l_dactylion_pt";
HAnimSite1092.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
//HAnimSite visualization shape
let TouchSensor1093 = browser.currentScene.createNode("TouchSensor");
TouchSensor1093.description = "HAnimSite l_dactylion_pt";
HAnimSite1092.children = new MFNode();

HAnimSite1092.children[0] = TouchSensor1093;

let Shape1094 = browser.currentScene.createNode("Shape");
Shape1094.USE = "HAnimSiteShape";
HAnimSite1092.children[1] = Shape1094;

HAnimSegment1077.children[5] = HAnimSite1092;

HAnimJoint1076.children = new MFNode();

HAnimJoint1076.children[0] = HAnimSegment1077;

HAnimJoint1067.children[1] = HAnimJoint1076;

HAnimJoint1058.children[1] = HAnimJoint1067;

HAnimJoint1049.children[1] = HAnimJoint1058;

HAnimJoint961.children[2] = HAnimJoint1049;

let HAnimJoint1095 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1095.name = "l_carpometacarpal_3";
HAnimJoint1095.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint1095.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint1095.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1096 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1096.name = "l_metacarpal_3";
HAnimSegment1096.DEF = "hanim_l_metacarpal_3";
//Visualization sphere for <HAnimJoint name='l_middle0'/> is placed within <HAnimSegment name='l_metacarpal_3'/>
let TouchSensor1097 = browser.currentScene.createNode("TouchSensor");
TouchSensor1097.description = "HAnimJoint l_middle0, HAnimSegment l_metacarpal_3";
HAnimSegment1096.children = new MFNode();

HAnimSegment1096.children[0] = TouchSensor1097;

let Transform1098 = browser.currentScene.createNode("Transform");
Transform1098.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
let Shape1099 = browser.currentScene.createNode("Shape");
Shape1099.USE = "HAnimJointShape";
Transform1098.children = new MFNode();

Transform1098.children[0] = Shape1099;

HAnimSegment1096.children[1] = Transform1098;

//HAnimSegment visualization line from current <HAnimJoint name='l_middle0'/> to child <HAnimJoint name='l_middle1'/>
let Shape1100 = browser.currentScene.createNode("Shape");
let LineSet1101 = browser.currentScene.createNode("LineSet");
LineSet1101.vertexCount = new MFInt32(new int[2]);
let Coordinate1102 = browser.currentScene.createNode("Coordinate");
Coordinate1102.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet1101.coord = Coordinate1102;

let ColorRGBA1103 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1103.USE = "HAnimSegmentLineColorRGBA";
LineSet1101.color = ColorRGBA1103;

Shape1100.geometry = LineSet1101;

HAnimSegment1096.children[2] = Shape1100;

HAnimJoint1095.children = new MFNode();

HAnimJoint1095.children[0] = HAnimSegment1096;

let HAnimJoint1104 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1104.name = "l_metacarpophalangeal_3";
HAnimJoint1104.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint1104.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint1104.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1105 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1105.name = "l_carpal_proximal_phalanx_3";
HAnimSegment1105.DEF = "hanim_l_carpal_proximal_phalanx_3";
//Visualization sphere for <HAnimJoint name='l_middle1'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_3'/>
let TouchSensor1106 = browser.currentScene.createNode("TouchSensor");
TouchSensor1106.description = "HAnimJoint l_middle1, HAnimSegment l_carpal_proximal_phalanx_3";
HAnimSegment1105.children = new MFNode();

HAnimSegment1105.children[0] = TouchSensor1106;

let Transform1107 = browser.currentScene.createNode("Transform");
Transform1107.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
let Shape1108 = browser.currentScene.createNode("Shape");
Shape1108.USE = "HAnimJointShape";
Transform1107.children = new MFNode();

Transform1107.children[0] = Shape1108;

HAnimSegment1105.children[1] = Transform1107;

//HAnimSegment visualization line from current <HAnimJoint name='l_middle1'/> to child <HAnimJoint name='l_middle2'/>
let Shape1109 = browser.currentScene.createNode("Shape");
let LineSet1110 = browser.currentScene.createNode("LineSet");
LineSet1110.vertexCount = new MFInt32(new int[2]);
let Coordinate1111 = browser.currentScene.createNode("Coordinate");
Coordinate1111.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet1110.coord = Coordinate1111;

let ColorRGBA1112 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1112.USE = "HAnimSegmentLineColorRGBA";
LineSet1110.color = ColorRGBA1112;

Shape1109.geometry = LineSet1110;

HAnimSegment1105.children[2] = Shape1109;

HAnimJoint1104.children = new MFNode();

HAnimJoint1104.children[0] = HAnimSegment1105;

let HAnimJoint1113 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1113.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint1113.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint1113.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint1113.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1114 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1114.name = "l_carpal_middle_phalanx_3";
HAnimSegment1114.DEF = "hanim_l_carpal_middle_phalanx_3";
//Visualization sphere for <HAnimJoint name='l_middle2'/> is placed within <HAnimSegment name='l_carpal_middle_phalanx_3'/>
let TouchSensor1115 = browser.currentScene.createNode("TouchSensor");
TouchSensor1115.description = "HAnimJoint l_middle2, HAnimSegment l_carpal_middle_phalanx_3";
HAnimSegment1114.children = new MFNode();

HAnimSegment1114.children[0] = TouchSensor1115;

let Transform1116 = browser.currentScene.createNode("Transform");
Transform1116.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
let Shape1117 = browser.currentScene.createNode("Shape");
Shape1117.USE = "HAnimJointShape";
Transform1116.children = new MFNode();

Transform1116.children[0] = Shape1117;

HAnimSegment1114.children[1] = Transform1116;

//HAnimSegment visualization line from current <HAnimJoint name='l_middle2'/> to child <HAnimJoint name='l_middle3'/>
let Shape1118 = browser.currentScene.createNode("Shape");
let LineSet1119 = browser.currentScene.createNode("LineSet");
LineSet1119.vertexCount = new MFInt32(new int[2]);
let Coordinate1120 = browser.currentScene.createNode("Coordinate");
Coordinate1120.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet1119.coord = Coordinate1120;

let ColorRGBA1121 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1121.USE = "HAnimSegmentLineColorRGBA";
LineSet1119.color = ColorRGBA1121;

Shape1118.geometry = LineSet1119;

HAnimSegment1114.children[2] = Shape1118;

HAnimJoint1113.children = new MFNode();

HAnimJoint1113.children[0] = HAnimSegment1114;

let HAnimJoint1122 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1122.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint1122.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint1122.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint1122.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1123 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1123.name = "l_carpal_distal_phalanx_3";
HAnimSegment1123.DEF = "hanim_l_carpal_distal_phalanx_3";
//Visualization sphere for <HAnimJoint name='l_middle3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_3'/>
let TouchSensor1124 = browser.currentScene.createNode("TouchSensor");
TouchSensor1124.description = "HAnimJoint l_middle3, HAnimSegment l_carpal_distal_phalanx_3";
HAnimSegment1123.children = new MFNode();

HAnimSegment1123.children[0] = TouchSensor1124;

let Transform1125 = browser.currentScene.createNode("Transform");
Transform1125.translation = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
let Shape1126 = browser.currentScene.createNode("Shape");
Shape1126.USE = "HAnimJointShape";
Transform1125.children = new MFNode();

Transform1125.children[0] = Shape1126;

HAnimSegment1123.children[1] = Transform1125;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_middle3'/> to <HAnimSite name='l_middle_distal_tip'/>
let Shape1127 = browser.currentScene.createNode("Shape");
let LineSet1128 = browser.currentScene.createNode("LineSet");
LineSet1128.vertexCount = new MFInt32(new int[2]);
let Coordinate1129 = browser.currentScene.createNode("Coordinate");
Coordinate1129.point = new MFVec3f(new float[0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491]);
LineSet1128.coord = Coordinate1129;

let ColorRGBA1130 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1130.USE = "HAnimSiteLineColorRGBA";
LineSet1128.color = ColorRGBA1130;

Shape1127.geometry = LineSet1128;

HAnimSegment1123.children[2] = Shape1127;

let HAnimSite1131 = browser.currentScene.createNode("HAnimSite");
HAnimSite1131.name = "l_carpal_distal_phalanx_3_pt";
HAnimSite1131.DEF = "hanim_l_carpal_distal_phalanx_3_pt";
HAnimSite1131.translation = new SFVec3f(new float[0.208,0.6731,-0.0491]);
//HAnimSite visualization shape
let TouchSensor1132 = browser.currentScene.createNode("TouchSensor");
TouchSensor1132.description = "HAnimSite l_middle_distal_tip";
HAnimSite1131.children = new MFNode();

HAnimSite1131.children[0] = TouchSensor1132;

let Shape1133 = browser.currentScene.createNode("Shape");
Shape1133.USE = "HAnimSiteShape";
HAnimSite1131.children[1] = Shape1133;

HAnimSegment1123.children[3] = HAnimSite1131;

HAnimJoint1122.children = new MFNode();

HAnimJoint1122.children[0] = HAnimSegment1123;

HAnimJoint1113.children[1] = HAnimJoint1122;

HAnimJoint1104.children[1] = HAnimJoint1113;

HAnimJoint1095.children[1] = HAnimJoint1104;

HAnimJoint961.children[3] = HAnimJoint1095;

let HAnimJoint1134 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1134.name = "l_carpometacarpal_4";
HAnimJoint1134.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint1134.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint1134.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1135 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1135.name = "l_metacarpal_4";
HAnimSegment1135.DEF = "hanim_l_metacarpal_4";
//Visualization sphere for <HAnimJoint name='l_ring0'/> is placed within <HAnimSegment name='l_metacarpal_4'/>
let TouchSensor1136 = browser.currentScene.createNode("TouchSensor");
TouchSensor1136.description = "HAnimJoint l_ring0, HAnimSegment l_metacarpal_4";
HAnimSegment1135.children = new MFNode();

HAnimSegment1135.children[0] = TouchSensor1136;

let Transform1137 = browser.currentScene.createNode("Transform");
Transform1137.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
let Shape1138 = browser.currentScene.createNode("Shape");
Shape1138.USE = "HAnimJointShape";
Transform1137.children = new MFNode();

Transform1137.children[0] = Shape1138;

HAnimSegment1135.children[1] = Transform1137;

//HAnimSegment visualization line from current <HAnimJoint name='l_ring0'/> to child <HAnimJoint name='l_ring1'/>
let Shape1139 = browser.currentScene.createNode("Shape");
let LineSet1140 = browser.currentScene.createNode("LineSet");
LineSet1140.vertexCount = new MFInt32(new int[2]);
let Coordinate1141 = browser.currentScene.createNode("Coordinate");
Coordinate1141.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet1140.coord = Coordinate1141;

let ColorRGBA1142 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1142.USE = "HAnimSegmentLineColorRGBA";
LineSet1140.color = ColorRGBA1142;

Shape1139.geometry = LineSet1140;

HAnimSegment1135.children[2] = Shape1139;

HAnimJoint1134.children = new MFNode();

HAnimJoint1134.children[0] = HAnimSegment1135;

let HAnimJoint1143 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1143.name = "l_metacarpophalangeal_4";
HAnimJoint1143.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint1143.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint1143.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1144 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1144.name = "l_carpal_proximal_phalanx_4";
HAnimSegment1144.DEF = "hanim_l_carpal_proximal_phalanx_4";
//Visualization sphere for <HAnimJoint name='l_ring1'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_4'/>
let TouchSensor1145 = browser.currentScene.createNode("TouchSensor");
TouchSensor1145.description = "HAnimJoint l_ring1, HAnimSegment l_carpal_proximal_phalanx_4";
HAnimSegment1144.children = new MFNode();

HAnimSegment1144.children[0] = TouchSensor1145;

let Transform1146 = browser.currentScene.createNode("Transform");
Transform1146.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
let Shape1147 = browser.currentScene.createNode("Shape");
Shape1147.USE = "HAnimJointShape";
Transform1146.children = new MFNode();

Transform1146.children[0] = Shape1147;

HAnimSegment1144.children[1] = Transform1146;

//HAnimSegment visualization line from current <HAnimJoint name='l_ring1'/> to child <HAnimJoint name='l_ring2'/>
let Shape1148 = browser.currentScene.createNode("Shape");
let LineSet1149 = browser.currentScene.createNode("LineSet");
LineSet1149.vertexCount = new MFInt32(new int[2]);
let Coordinate1150 = browser.currentScene.createNode("Coordinate");
Coordinate1150.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet1149.coord = Coordinate1150;

let ColorRGBA1151 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1151.USE = "HAnimSegmentLineColorRGBA";
LineSet1149.color = ColorRGBA1151;

Shape1148.geometry = LineSet1149;

HAnimSegment1144.children[2] = Shape1148;

HAnimJoint1143.children = new MFNode();

HAnimJoint1143.children[0] = HAnimSegment1144;

let HAnimJoint1152 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1152.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint1152.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint1152.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint1152.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1153 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1153.name = "l_carpal_middle_phalanx_4";
HAnimSegment1153.DEF = "hanim_l_carpal_middle_phalanx_4";
//Visualization sphere for <HAnimJoint name='l_ring2'/> is placed within <HAnimSegment name='l_carpal_middle_phalanx_4'/>
let TouchSensor1154 = browser.currentScene.createNode("TouchSensor");
TouchSensor1154.description = "HAnimJoint l_ring2, HAnimSegment l_carpal_middle_phalanx_4";
HAnimSegment1153.children = new MFNode();

HAnimSegment1153.children[0] = TouchSensor1154;

let Transform1155 = browser.currentScene.createNode("Transform");
Transform1155.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
let Shape1156 = browser.currentScene.createNode("Shape");
Shape1156.USE = "HAnimJointShape";
Transform1155.children = new MFNode();

Transform1155.children[0] = Shape1156;

HAnimSegment1153.children[1] = Transform1155;

//HAnimSegment visualization line from current <HAnimJoint name='l_ring2'/> to child <HAnimJoint name='l_ring3'/>
let Shape1157 = browser.currentScene.createNode("Shape");
let LineSet1158 = browser.currentScene.createNode("LineSet");
LineSet1158.vertexCount = new MFInt32(new int[2]);
let Coordinate1159 = browser.currentScene.createNode("Coordinate");
Coordinate1159.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet1158.coord = Coordinate1159;

let ColorRGBA1160 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1160.USE = "HAnimSegmentLineColorRGBA";
LineSet1158.color = ColorRGBA1160;

Shape1157.geometry = LineSet1158;

HAnimSegment1153.children[2] = Shape1157;

HAnimJoint1152.children = new MFNode();

HAnimJoint1152.children[0] = HAnimSegment1153;

let HAnimJoint1161 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1161.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint1161.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint1161.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint1161.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1162 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1162.name = "l_carpal_distal_phalanx_4";
HAnimSegment1162.DEF = "hanim_l_carpal_distal_phalanx_4";
//Visualization sphere for <HAnimJoint name='l_ring3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_4'/>
let TouchSensor1163 = browser.currentScene.createNode("TouchSensor");
TouchSensor1163.description = "HAnimJoint l_ring3, HAnimSegment l_carpal_distal_phalanx_4";
HAnimSegment1162.children = new MFNode();

HAnimSegment1162.children[0] = TouchSensor1163;

let Transform1164 = browser.currentScene.createNode("Transform");
Transform1164.translation = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
let Shape1165 = browser.currentScene.createNode("Shape");
Shape1165.USE = "HAnimJointShape";
Transform1164.children = new MFNode();

Transform1164.children[0] = Shape1165;

HAnimSegment1162.children[1] = Transform1164;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ring3'/> to <HAnimSite name='l_ring_distal_tip'/>
let Shape1166 = browser.currentScene.createNode("Shape");
let LineSet1167 = browser.currentScene.createNode("LineSet");
LineSet1167.vertexCount = new MFInt32(new int[2]);
let Coordinate1168 = browser.currentScene.createNode("Coordinate");
Coordinate1168.point = new MFVec3f(new float[0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756]);
LineSet1167.coord = Coordinate1168;

let ColorRGBA1169 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1169.USE = "HAnimSiteLineColorRGBA";
LineSet1167.color = ColorRGBA1169;

Shape1166.geometry = LineSet1167;

HAnimSegment1162.children[2] = Shape1166;

let HAnimSite1170 = browser.currentScene.createNode("HAnimSite");
HAnimSite1170.name = "l_carpal_distal_phalanx_4_pt";
HAnimSite1170.DEF = "hanim_l_carpal_distal_phalanx_4_pt";
HAnimSite1170.translation = new SFVec3f(new float[0.2035,0.675,-0.0756]);
//HAnimSite visualization shape
let TouchSensor1171 = browser.currentScene.createNode("TouchSensor");
TouchSensor1171.description = "HAnimSite l_ring_distal_tip";
HAnimSite1170.children = new MFNode();

HAnimSite1170.children[0] = TouchSensor1171;

let Shape1172 = browser.currentScene.createNode("Shape");
Shape1172.USE = "HAnimSiteShape";
HAnimSite1170.children[1] = Shape1172;

HAnimSegment1162.children[3] = HAnimSite1170;

HAnimJoint1161.children = new MFNode();

HAnimJoint1161.children[0] = HAnimSegment1162;

HAnimJoint1152.children[1] = HAnimJoint1161;

HAnimJoint1143.children[1] = HAnimJoint1152;

HAnimJoint1134.children[1] = HAnimJoint1143;

HAnimJoint961.children[4] = HAnimJoint1134;

let HAnimJoint1173 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1173.name = "l_carpometacarpal_5";
HAnimJoint1173.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint1173.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint1173.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1174 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1174.name = "l_metacarpal_5";
HAnimSegment1174.DEF = "hanim_l_metacarpal_5";
//Visualization sphere for <HAnimJoint name='l_pinky0'/> is placed within <HAnimSegment name='l_metacarpal_5'/>
let TouchSensor1175 = browser.currentScene.createNode("TouchSensor");
TouchSensor1175.description = "HAnimJoint l_pinky0, HAnimSegment l_metacarpal_5";
HAnimSegment1174.children = new MFNode();

HAnimSegment1174.children[0] = TouchSensor1175;

let Transform1176 = browser.currentScene.createNode("Transform");
Transform1176.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
let Shape1177 = browser.currentScene.createNode("Shape");
Shape1177.USE = "HAnimJointShape";
Transform1176.children = new MFNode();

Transform1176.children[0] = Shape1177;

HAnimSegment1174.children[1] = Transform1176;

//HAnimSegment visualization line from current <HAnimJoint name='l_pinky0'/> to child <HAnimJoint name='l_pinky1'/>
let Shape1178 = browser.currentScene.createNode("Shape");
let LineSet1179 = browser.currentScene.createNode("LineSet");
LineSet1179.vertexCount = new MFInt32(new int[2]);
let Coordinate1180 = browser.currentScene.createNode("Coordinate");
Coordinate1180.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet1179.coord = Coordinate1180;

let ColorRGBA1181 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1181.USE = "HAnimSegmentLineColorRGBA";
LineSet1179.color = ColorRGBA1181;

Shape1178.geometry = LineSet1179;

HAnimSegment1174.children[2] = Shape1178;

HAnimJoint1173.children = new MFNode();

HAnimJoint1173.children[0] = HAnimSegment1174;

let HAnimJoint1182 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1182.name = "l_metacarpophalangeal_5";
HAnimJoint1182.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint1182.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint1182.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1183 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1183.name = "l_carpal_proximal_phalanx_5";
HAnimSegment1183.DEF = "hanim_l_carpal_proximal_phalanx_5";
//Visualization sphere for <HAnimJoint name='l_pinky1'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_5'/>
let TouchSensor1184 = browser.currentScene.createNode("TouchSensor");
TouchSensor1184.description = "HAnimJoint l_pinky1, HAnimSegment l_carpal_proximal_phalanx_5";
HAnimSegment1183.children = new MFNode();

HAnimSegment1183.children[0] = TouchSensor1184;

let Transform1185 = browser.currentScene.createNode("Transform");
Transform1185.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
let Shape1186 = browser.currentScene.createNode("Shape");
Shape1186.USE = "HAnimJointShape";
Transform1185.children = new MFNode();

Transform1185.children[0] = Shape1186;

HAnimSegment1183.children[1] = Transform1185;

//HAnimSegment visualization line from current <HAnimJoint name='l_pinky1'/> to child <HAnimJoint name='l_pinky2'/>
let Shape1187 = browser.currentScene.createNode("Shape");
let LineSet1188 = browser.currentScene.createNode("LineSet");
LineSet1188.vertexCount = new MFInt32(new int[2]);
let Coordinate1189 = browser.currentScene.createNode("Coordinate");
Coordinate1189.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet1188.coord = Coordinate1189;

let ColorRGBA1190 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1190.USE = "HAnimSegmentLineColorRGBA";
LineSet1188.color = ColorRGBA1190;

Shape1187.geometry = LineSet1188;

HAnimSegment1183.children[2] = Shape1187;

HAnimJoint1182.children = new MFNode();

HAnimJoint1182.children[0] = HAnimSegment1183;

let HAnimJoint1191 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1191.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint1191.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint1191.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint1191.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1192 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1192.name = "l_carpal_middle_phalanx_5";
HAnimSegment1192.DEF = "hanim_l_carpal_middle_phalanx_5";
//Visualization sphere for <HAnimJoint name='l_pinky2'/> is placed within <HAnimSegment name='l_carpal_middle_phalanx_5'/>
let TouchSensor1193 = browser.currentScene.createNode("TouchSensor");
TouchSensor1193.description = "HAnimJoint l_pinky2, HAnimSegment l_carpal_middle_phalanx_5";
HAnimSegment1192.children = new MFNode();

HAnimSegment1192.children[0] = TouchSensor1193;

let Transform1194 = browser.currentScene.createNode("Transform");
Transform1194.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
let Shape1195 = browser.currentScene.createNode("Shape");
Shape1195.USE = "HAnimJointShape";
Transform1194.children = new MFNode();

Transform1194.children[0] = Shape1195;

HAnimSegment1192.children[1] = Transform1194;

//HAnimSegment visualization line from current <HAnimJoint name='l_pinky2'/> to child <HAnimJoint name='l_pinky3'/>
let Shape1196 = browser.currentScene.createNode("Shape");
let LineSet1197 = browser.currentScene.createNode("LineSet");
LineSet1197.vertexCount = new MFInt32(new int[2]);
let Coordinate1198 = browser.currentScene.createNode("Coordinate");
Coordinate1198.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet1197.coord = Coordinate1198;

let ColorRGBA1199 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1199.USE = "HAnimSegmentLineColorRGBA";
LineSet1197.color = ColorRGBA1199;

Shape1196.geometry = LineSet1197;

HAnimSegment1192.children[2] = Shape1196;

HAnimJoint1191.children = new MFNode();

HAnimJoint1191.children[0] = HAnimSegment1192;

let HAnimJoint1200 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1200.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint1200.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint1200.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint1200.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1201 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1201.name = "l_carpal_distal_phalanx_5";
HAnimSegment1201.DEF = "hanim_l_carpal_distal_phalanx_5";
//Visualization sphere for <HAnimJoint name='l_pinky3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_5'/>
let TouchSensor1202 = browser.currentScene.createNode("TouchSensor");
TouchSensor1202.description = "HAnimJoint l_pinky3, HAnimSegment l_carpal_distal_phalanx_5";
HAnimSegment1201.children = new MFNode();

HAnimSegment1201.children[0] = TouchSensor1202;

let Transform1203 = browser.currentScene.createNode("Transform");
Transform1203.translation = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
let Shape1204 = browser.currentScene.createNode("Shape");
Shape1204.USE = "HAnimJointShape";
Transform1203.children = new MFNode();

Transform1203.children[0] = Shape1204;

HAnimSegment1201.children[1] = Transform1203;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='l_pinky3'/> to <HAnimSite name='l_pinky_distal_tip'/>
let Shape1205 = browser.currentScene.createNode("Shape");
let LineSet1206 = browser.currentScene.createNode("LineSet");
LineSet1206.vertexCount = new MFInt32(new int[2]);
let Coordinate1207 = browser.currentScene.createNode("Coordinate");
Coordinate1207.point = new MFVec3f(new float[0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012]);
LineSet1206.coord = Coordinate1207;

let ColorRGBA1208 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1208.USE = "HAnimSiteLineColorRGBA";
LineSet1206.color = ColorRGBA1208;

Shape1205.geometry = LineSet1206;

HAnimSegment1201.children[2] = Shape1205;

let HAnimSite1209 = browser.currentScene.createNode("HAnimSite");
HAnimSite1209.name = "l_carpal_distal_phalanx_5_pt";
HAnimSite1209.DEF = "hanim_l_carpal_distal_phalanx_5_pt";
HAnimSite1209.translation = new SFVec3f(new float[0.2014,0.7009,-0.1012]);
//HAnimSite visualization shape
let TouchSensor1210 = browser.currentScene.createNode("TouchSensor");
TouchSensor1210.description = "HAnimSite l_pinky_distal_tip";
HAnimSite1209.children = new MFNode();

HAnimSite1209.children[0] = TouchSensor1210;

let Shape1211 = browser.currentScene.createNode("Shape");
Shape1211.USE = "HAnimSiteShape";
HAnimSite1209.children[1] = Shape1211;

HAnimSegment1201.children[3] = HAnimSite1209;

HAnimJoint1200.children = new MFNode();

HAnimJoint1200.children[0] = HAnimSegment1201;

HAnimJoint1191.children[1] = HAnimJoint1200;

HAnimJoint1182.children[1] = HAnimJoint1191;

HAnimJoint1173.children[1] = HAnimJoint1182;

HAnimJoint961.children[5] = HAnimJoint1173;

HAnimJoint924.children[1] = HAnimJoint961;

HAnimJoint908.children[1] = HAnimJoint924;

HAnimJoint899.children[1] = HAnimJoint908;

HAnimJoint862.children[1] = HAnimJoint899;

HAnimJoint574.children[2] = HAnimJoint862;

let HAnimJoint1212 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1212.name = "r_sternoclavicular";
HAnimJoint1212.DEF = "hanim_r_sternoclavicular";
HAnimJoint1212.center = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
HAnimJoint1212.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1213 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1213.name = "r_clavicle";
HAnimSegment1213.DEF = "hanim_r_clavicle";
//Visualization sphere for <HAnimJoint name='r_sternoclavicular'/> is placed within <HAnimSegment name='r_clavicle'/>
let TouchSensor1214 = browser.currentScene.createNode("TouchSensor");
TouchSensor1214.description = "HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle";
HAnimSegment1213.children = new MFNode();

HAnimSegment1213.children[0] = TouchSensor1214;

let Transform1215 = browser.currentScene.createNode("Transform");
Transform1215.translation = new SFVec3f(new float[-0.082,1.4488,-0.0353]);
let Shape1216 = browser.currentScene.createNode("Shape");
Shape1216.USE = "HAnimJointShape";
Transform1215.children = new MFNode();

Transform1215.children[0] = Shape1216;

HAnimSegment1213.children[1] = Transform1215;

//HAnimSegment visualization line from current <HAnimJoint name='r_sternoclavicular'/> to child <HAnimJoint name='r_acromioclavicular'/>
let Shape1217 = browser.currentScene.createNode("Shape");
let LineSet1218 = browser.currentScene.createNode("LineSet");
LineSet1218.vertexCount = new MFInt32(new int[2]);
let Coordinate1219 = browser.currentScene.createNode("Coordinate");
Coordinate1219.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424]);
LineSet1218.coord = Coordinate1219;

let ColorRGBA1220 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1220.USE = "HAnimSegmentLineColorRGBA";
LineSet1218.color = ColorRGBA1220;

Shape1217.geometry = LineSet1218;

HAnimSegment1213.children[2] = Shape1217;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_clavicale_pt'/>
let Shape1221 = browser.currentScene.createNode("Shape");
let LineSet1222 = browser.currentScene.createNode("LineSet");
LineSet1222.vertexCount = new MFInt32(new int[2]);
let Coordinate1223 = browser.currentScene.createNode("Coordinate");
Coordinate1223.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04]);
LineSet1222.coord = Coordinate1223;

let ColorRGBA1224 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1224.USE = "HAnimSiteLineColorRGBA";
LineSet1222.color = ColorRGBA1224;

Shape1221.geometry = LineSet1222;

HAnimSegment1213.children[3] = Shape1221;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_acromion_pt'/>
let Shape1225 = browser.currentScene.createNode("Shape");
let LineSet1226 = browser.currentScene.createNode("LineSet");
LineSet1226.vertexCount = new MFInt32(new int[2]);
let Coordinate1227 = browser.currentScene.createNode("Coordinate");
Coordinate1227.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431]);
LineSet1226.coord = Coordinate1227;

let ColorRGBA1228 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1228.USE = "HAnimSiteLineColorRGBA";
LineSet1226.color = ColorRGBA1228;

Shape1225.geometry = LineSet1226;

HAnimSegment1213.children[4] = Shape1225;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_ant_pt'/>
let Shape1229 = browser.currentScene.createNode("Shape");
let LineSet1230 = browser.currentScene.createNode("LineSet");
LineSet1230.vertexCount = new MFInt32(new int[2]);
let Coordinate1231 = browser.currentScene.createNode("Coordinate");
Coordinate1231.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031]);
LineSet1230.coord = Coordinate1231;

let ColorRGBA1232 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1232.USE = "HAnimSiteLineColorRGBA";
LineSet1230.color = ColorRGBA1232;

Shape1229.geometry = LineSet1230;

HAnimSegment1213.children[5] = Shape1229;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_post_pt'/>
let Shape1233 = browser.currentScene.createNode("Shape");
let LineSet1234 = browser.currentScene.createNode("LineSet");
LineSet1234.vertexCount = new MFInt32(new int[2]);
let Coordinate1235 = browser.currentScene.createNode("Coordinate");
Coordinate1235.point = new MFVec3f(new float[-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826]);
LineSet1234.coord = Coordinate1235;

let ColorRGBA1236 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1236.USE = "HAnimSiteLineColorRGBA";
LineSet1234.color = ColorRGBA1236;

Shape1233.geometry = LineSet1234;

HAnimSegment1213.children[6] = Shape1233;

let HAnimSite1237 = browser.currentScene.createNode("HAnimSite");
HAnimSite1237.name = "r_clavicle_pt";
HAnimSite1237.DEF = "hanim_r_clavicle_pt";
HAnimSite1237.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
//HAnimSite visualization shape
let TouchSensor1238 = browser.currentScene.createNode("TouchSensor");
TouchSensor1238.description = "HAnimSite r_clavicale_pt";
HAnimSite1237.children = new MFNode();

HAnimSite1237.children[0] = TouchSensor1238;

let Shape1239 = browser.currentScene.createNode("Shape");
Shape1239.USE = "HAnimSiteShape";
HAnimSite1237.children[1] = Shape1239;

HAnimSegment1213.children[7] = HAnimSite1237;

let HAnimSite1240 = browser.currentScene.createNode("HAnimSite");
HAnimSite1240.name = "r_acromion_pt";
HAnimSite1240.DEF = "hanim_r_acromion_pt";
HAnimSite1240.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
//HAnimSite visualization shape
let TouchSensor1241 = browser.currentScene.createNode("TouchSensor");
TouchSensor1241.description = "HAnimSite r_acromion_pt";
HAnimSite1240.children = new MFNode();

HAnimSite1240.children[0] = TouchSensor1241;

let Shape1242 = browser.currentScene.createNode("Shape");
Shape1242.USE = "HAnimSiteShape";
HAnimSite1240.children[1] = Shape1242;

HAnimSegment1213.children[8] = HAnimSite1240;

let HAnimSite1243 = browser.currentScene.createNode("HAnimSite");
HAnimSite1243.name = "r_axilla_proximal_pt";
HAnimSite1243.DEF = "hanim_r_axilla_proximal_pt";
HAnimSite1243.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
//HAnimSite visualization shape
let TouchSensor1244 = browser.currentScene.createNode("TouchSensor");
TouchSensor1244.description = "HAnimSite r_axilla_ant_pt";
HAnimSite1243.children = new MFNode();

HAnimSite1243.children[0] = TouchSensor1244;

let Shape1245 = browser.currentScene.createNode("Shape");
Shape1245.USE = "HAnimSiteShape";
HAnimSite1243.children[1] = Shape1245;

HAnimSegment1213.children[9] = HAnimSite1243;

let HAnimSite1246 = browser.currentScene.createNode("HAnimSite");
HAnimSite1246.name = "r_axilla_distal_pt";
HAnimSite1246.DEF = "hanim_r_axilla_distal_pt";
HAnimSite1246.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
//HAnimSite visualization shape
let TouchSensor1247 = browser.currentScene.createNode("TouchSensor");
TouchSensor1247.description = "HAnimSite r_axilla_post_pt";
HAnimSite1246.children = new MFNode();

HAnimSite1246.children[0] = TouchSensor1247;

let Shape1248 = browser.currentScene.createNode("Shape");
Shape1248.USE = "HAnimSiteShape";
HAnimSite1246.children[1] = Shape1248;

HAnimSegment1213.children[10] = HAnimSite1246;

HAnimJoint1212.children = new MFNode();

HAnimJoint1212.children[0] = HAnimSegment1213;

let HAnimJoint1249 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1249.name = "r_acromioclavicular";
HAnimJoint1249.DEF = "hanim_r_acromioclavicular";
HAnimJoint1249.center = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
HAnimJoint1249.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1250 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1250.name = "r_scapula";
HAnimSegment1250.DEF = "hanim_r_scapula";
//Visualization sphere for <HAnimJoint name='r_acromioclavicular'/> is placed within <HAnimSegment name='r_scapula'/>
let TouchSensor1251 = browser.currentScene.createNode("TouchSensor");
TouchSensor1251.description = "HAnimJoint r_acromioclavicular, HAnimSegment r_scapula";
HAnimSegment1250.children = new MFNode();

HAnimSegment1250.children[0] = TouchSensor1251;

let Transform1252 = browser.currentScene.createNode("Transform");
Transform1252.translation = new SFVec3f(new float[-0.0962,1.4269,-0.0424]);
let Shape1253 = browser.currentScene.createNode("Shape");
Shape1253.USE = "HAnimJointShape";
Transform1252.children = new MFNode();

Transform1252.children[0] = Shape1253;

HAnimSegment1250.children[1] = Transform1252;

//HAnimSegment visualization line from current <HAnimJoint name='r_acromioclavicular'/> to child <HAnimJoint name='r_shoulder'/>
let Shape1254 = browser.currentScene.createNode("Shape");
let LineSet1255 = browser.currentScene.createNode("LineSet");
LineSet1255.vertexCount = new MFInt32(new int[2]);
let Coordinate1256 = browser.currentScene.createNode("Coordinate");
Coordinate1256.point = new MFVec3f(new float[-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387]);
LineSet1255.coord = Coordinate1256;

let ColorRGBA1257 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1257.USE = "HAnimSegmentLineColorRGBA";
LineSet1255.color = ColorRGBA1257;

Shape1254.geometry = LineSet1255;

HAnimSegment1250.children[2] = Shape1254;

HAnimJoint1249.children = new MFNode();

HAnimJoint1249.children[0] = HAnimSegment1250;

let HAnimJoint1258 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1258.name = "r_shoulder";
HAnimJoint1258.DEF = "hanim_r_shoulder";
HAnimJoint1258.center = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
HAnimJoint1258.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1259 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1259.name = "r_upperarm";
HAnimSegment1259.DEF = "hanim_r_upperarm";
//Visualization sphere for <HAnimJoint name='r_shoulder'/> is placed within <HAnimSegment name='r_upperarm'/>
let TouchSensor1260 = browser.currentScene.createNode("TouchSensor");
TouchSensor1260.description = "HAnimJoint r_shoulder, HAnimSegment r_upperarm";
HAnimSegment1259.children = new MFNode();

HAnimSegment1259.children[0] = TouchSensor1260;

let Transform1261 = browser.currentScene.createNode("Transform");
Transform1261.translation = new SFVec3f(new float[-0.2029,1.4376,-0.0387]);
let Shape1262 = browser.currentScene.createNode("Shape");
Shape1262.USE = "HAnimJointShape";
Transform1261.children = new MFNode();

Transform1261.children[0] = Shape1262;

HAnimSegment1259.children[1] = Transform1261;

//HAnimSegment visualization line from current <HAnimJoint name='r_shoulder'/> to child <HAnimJoint name='r_elbow'/>
let Shape1263 = browser.currentScene.createNode("Shape");
let LineSet1264 = browser.currentScene.createNode("LineSet");
LineSet1264.vertexCount = new MFInt32(new int[2]);
let Coordinate1265 = browser.currentScene.createNode("Coordinate");
Coordinate1265.point = new MFVec3f(new float[-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682]);
LineSet1264.coord = Coordinate1265;

let ColorRGBA1266 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1266.USE = "HAnimSegmentLineColorRGBA";
LineSet1264.color = ColorRGBA1266;

Shape1263.geometry = LineSet1264;

HAnimSegment1259.children[2] = Shape1263;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_shoulder'/> to <HAnimSite name='r_humeral_lateral_epicn_pt'/>
let Shape1267 = browser.currentScene.createNode("Shape");
let LineSet1268 = browser.currentScene.createNode("LineSet");
LineSet1268.vertexCount = new MFInt32(new int[2]);
let Coordinate1269 = browser.currentScene.createNode("Coordinate");
Coordinate1269.point = new MFVec3f(new float[-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033]);
LineSet1268.coord = Coordinate1269;

let ColorRGBA1270 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1270.USE = "HAnimSiteLineColorRGBA";
LineSet1268.color = ColorRGBA1270;

Shape1267.geometry = LineSet1268;

HAnimSegment1259.children[3] = Shape1267;

let HAnimSite1271 = browser.currentScene.createNode("HAnimSite");
HAnimSite1271.name = "r_humeral_lateral_epicondyle_pt";
HAnimSite1271.DEF = "hanim_r_humeral_lateral_epicondyle_pt";
HAnimSite1271.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
//HAnimSite visualization shape
let TouchSensor1272 = browser.currentScene.createNode("TouchSensor");
TouchSensor1272.description = "HAnimSite r_humeral_lateral_epicn_pt";
HAnimSite1271.children = new MFNode();

HAnimSite1271.children[0] = TouchSensor1272;

let Shape1273 = browser.currentScene.createNode("Shape");
Shape1273.USE = "HAnimSiteShape";
HAnimSite1271.children[1] = Shape1273;

HAnimSegment1259.children[4] = HAnimSite1271;

HAnimJoint1258.children = new MFNode();

HAnimJoint1258.children[0] = HAnimSegment1259;

let HAnimJoint1274 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1274.name = "r_elbow";
HAnimJoint1274.DEF = "hanim_r_elbow";
HAnimJoint1274.center = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
HAnimJoint1274.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1275 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1275.name = "r_forearm";
HAnimSegment1275.DEF = "hanim_r_forearm";
//Visualization sphere for <HAnimJoint name='r_elbow'/> is placed within <HAnimSegment name='r_forearm'/>
let TouchSensor1276 = browser.currentScene.createNode("TouchSensor");
TouchSensor1276.description = "HAnimJoint r_elbow, HAnimSegment r_forearm";
HAnimSegment1275.children = new MFNode();

HAnimSegment1275.children[0] = TouchSensor1276;

let Transform1277 = browser.currentScene.createNode("Transform");
Transform1277.translation = new SFVec3f(new float[-0.2014,1.1357,-0.0682]);
let Shape1278 = browser.currentScene.createNode("Shape");
Shape1278.USE = "HAnimJointShape";
Transform1277.children = new MFNode();

Transform1277.children[0] = Shape1278;

HAnimSegment1275.children[1] = Transform1277;

//HAnimSegment visualization line from current <HAnimJoint name='r_elbow'/> to child <HAnimJoint name='r_radiocarpal'/>
let Shape1279 = browser.currentScene.createNode("Shape");
let LineSet1280 = browser.currentScene.createNode("LineSet");
LineSet1280.vertexCount = new MFInt32(new int[2]);
let Coordinate1281 = browser.currentScene.createNode("Coordinate");
Coordinate1281.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583]);
LineSet1280.coord = Coordinate1281;

let ColorRGBA1282 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1282.USE = "HAnimSegmentLineColorRGBA";
LineSet1280.color = ColorRGBA1282;

Shape1279.geometry = LineSet1280;

HAnimSegment1275.children[2] = Shape1279;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radial_styloid_pt'/>
let Shape1283 = browser.currentScene.createNode("Shape");
let LineSet1284 = browser.currentScene.createNode("LineSet");
LineSet1284.vertexCount = new MFInt32(new int[2]);
let Coordinate1285 = browser.currentScene.createNode("Coordinate");
Coordinate1285.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036]);
LineSet1284.coord = Coordinate1285;

let ColorRGBA1286 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1286.USE = "HAnimSiteLineColorRGBA";
LineSet1284.color = ColorRGBA1286;

Shape1283.geometry = LineSet1284;

HAnimSegment1275.children[3] = Shape1283;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_olecranon_pt'/>
let Shape1287 = browser.currentScene.createNode("Shape");
let LineSet1288 = browser.currentScene.createNode("LineSet");
LineSet1288.vertexCount = new MFInt32(new int[2]);
let Coordinate1289 = browser.currentScene.createNode("Coordinate");
Coordinate1289.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065]);
LineSet1288.coord = Coordinate1289;

let ColorRGBA1290 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1290.USE = "HAnimSiteLineColorRGBA";
LineSet1288.color = ColorRGBA1290;

Shape1287.geometry = LineSet1288;

HAnimSegment1275.children[4] = Shape1287;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_humeral_medial_epicn_pt'/>
let Shape1291 = browser.currentScene.createNode("Shape");
let LineSet1292 = browser.currentScene.createNode("LineSet");
LineSet1292.vertexCount = new MFInt32(new int[2]);
let Coordinate1293 = browser.currentScene.createNode("Coordinate");
Coordinate1293.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062]);
LineSet1292.coord = Coordinate1293;

let ColorRGBA1294 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1294.USE = "HAnimSiteLineColorRGBA";
LineSet1292.color = ColorRGBA1294;

Shape1291.geometry = LineSet1292;

HAnimSegment1275.children[5] = Shape1291;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radiale_pt'/>
let Shape1295 = browser.currentScene.createNode("Shape");
let LineSet1296 = browser.currentScene.createNode("LineSet");
LineSet1296.vertexCount = new MFInt32(new int[2]);
let Coordinate1297 = browser.currentScene.createNode("Coordinate");
Coordinate1297.point = new MFVec3f(new float[-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091]);
LineSet1296.coord = Coordinate1297;

let ColorRGBA1298 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1298.USE = "HAnimSiteLineColorRGBA";
LineSet1296.color = ColorRGBA1298;

Shape1295.geometry = LineSet1296;

HAnimSegment1275.children[6] = Shape1295;

let HAnimSite1299 = browser.currentScene.createNode("HAnimSite");
HAnimSite1299.name = "r_radial_styloid_pt";
HAnimSite1299.DEF = "hanim_r_radial_styloid_pt";
HAnimSite1299.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
//HAnimSite visualization shape
let TouchSensor1300 = browser.currentScene.createNode("TouchSensor");
TouchSensor1300.description = "HAnimSite r_radial_styloid_pt";
HAnimSite1299.children = new MFNode();

HAnimSite1299.children[0] = TouchSensor1300;

let Shape1301 = browser.currentScene.createNode("Shape");
Shape1301.USE = "HAnimSiteShape";
HAnimSite1299.children[1] = Shape1301;

HAnimSegment1275.children[7] = HAnimSite1299;

let HAnimSite1302 = browser.currentScene.createNode("HAnimSite");
HAnimSite1302.name = "r_olecranon_pt";
HAnimSite1302.DEF = "hanim_r_olecranon_pt";
HAnimSite1302.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
//HAnimSite visualization shape
let TouchSensor1303 = browser.currentScene.createNode("TouchSensor");
TouchSensor1303.description = "HAnimSite r_olecranon_pt";
HAnimSite1302.children = new MFNode();

HAnimSite1302.children[0] = TouchSensor1303;

let Shape1304 = browser.currentScene.createNode("Shape");
Shape1304.USE = "HAnimSiteShape";
HAnimSite1302.children[1] = Shape1304;

HAnimSegment1275.children[8] = HAnimSite1302;

let HAnimSite1305 = browser.currentScene.createNode("HAnimSite");
HAnimSite1305.name = "r_humeral_medial_epicondyle_pt";
HAnimSite1305.DEF = "hanim_r_humeral_medial_epicondyle_pt";
HAnimSite1305.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
//HAnimSite visualization shape
let TouchSensor1306 = browser.currentScene.createNode("TouchSensor");
TouchSensor1306.description = "HAnimSite r_humeral_medial_epicn_pt";
HAnimSite1305.children = new MFNode();

HAnimSite1305.children[0] = TouchSensor1306;

let Shape1307 = browser.currentScene.createNode("Shape");
Shape1307.USE = "HAnimSiteShape";
HAnimSite1305.children[1] = Shape1307;

HAnimSegment1275.children[9] = HAnimSite1305;

let HAnimSite1308 = browser.currentScene.createNode("HAnimSite");
HAnimSite1308.name = "r_radiale_pt";
HAnimSite1308.DEF = "hanim_r_radiale_pt";
HAnimSite1308.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
//HAnimSite visualization shape
let TouchSensor1309 = browser.currentScene.createNode("TouchSensor");
TouchSensor1309.description = "HAnimSite r_radiale_pt";
HAnimSite1308.children = new MFNode();

HAnimSite1308.children[0] = TouchSensor1309;

let Shape1310 = browser.currentScene.createNode("Shape");
Shape1310.USE = "HAnimSiteShape";
HAnimSite1308.children[1] = Shape1310;

HAnimSegment1275.children[10] = HAnimSite1308;

HAnimJoint1274.children = new MFNode();

HAnimJoint1274.children[0] = HAnimSegment1275;

let HAnimJoint1311 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1311.name = "r_radiocarpal";
HAnimJoint1311.DEF = "hanim_r_radiocarpal";
HAnimJoint1311.center = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
HAnimJoint1311.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1312 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1312.name = "r_carpal";
HAnimSegment1312.DEF = "hanim_r_carpal";
//Visualization sphere for <HAnimJoint name='r_radiocarpal'/> is placed within <HAnimSegment name='r_carpal'/>
let TouchSensor1313 = browser.currentScene.createNode("TouchSensor");
TouchSensor1313.description = "HAnimJoint r_radiocarpal, HAnimSegment r_carpal";
HAnimSegment1312.children = new MFNode();

HAnimSegment1312.children[0] = TouchSensor1313;

let Transform1314 = browser.currentScene.createNode("Transform");
Transform1314.translation = new SFVec3f(new float[-0.1984,0.8663,-0.0583]);
let Shape1315 = browser.currentScene.createNode("Shape");
Shape1315.USE = "HAnimJointShape";
Transform1314.children = new MFNode();

Transform1314.children[0] = Shape1315;

HAnimSegment1312.children[1] = Transform1314;

//HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_thumb1'/>
let Shape1316 = browser.currentScene.createNode("Shape");
let LineSet1317 = browser.currentScene.createNode("LineSet");
LineSet1317.vertexCount = new MFInt32(new int[2]);
let Coordinate1318 = browser.currentScene.createNode("Coordinate");
Coordinate1318.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534]);
LineSet1317.coord = Coordinate1318;

let ColorRGBA1319 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1319.USE = "HAnimSegmentLineColorRGBA";
LineSet1317.color = ColorRGBA1319;

Shape1316.geometry = LineSet1317;

HAnimSegment1312.children[2] = Shape1316;

//HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_index0'/>
let Shape1320 = browser.currentScene.createNode("Shape");
let LineSet1321 = browser.currentScene.createNode("LineSet");
LineSet1321.vertexCount = new MFInt32(new int[2]);
let Coordinate1322 = browser.currentScene.createNode("Coordinate");
Coordinate1322.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028]);
LineSet1321.coord = Coordinate1322;

let ColorRGBA1323 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1323.USE = "HAnimSegmentLineColorRGBA";
LineSet1321.color = ColorRGBA1323;

Shape1320.geometry = LineSet1321;

HAnimSegment1312.children[3] = Shape1320;

//HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_middle0'/>
let Shape1324 = browser.currentScene.createNode("Shape");
let LineSet1325 = browser.currentScene.createNode("LineSet");
LineSet1325.vertexCount = new MFInt32(new int[2]);
let Coordinate1326 = browser.currentScene.createNode("Coordinate");
Coordinate1326.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053]);
LineSet1325.coord = Coordinate1326;

let ColorRGBA1327 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1327.USE = "HAnimSegmentLineColorRGBA";
LineSet1325.color = ColorRGBA1327;

Shape1324.geometry = LineSet1325;

HAnimSegment1312.children[4] = Shape1324;

//HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_ring0'/>
let Shape1328 = browser.currentScene.createNode("Shape");
let LineSet1329 = browser.currentScene.createNode("LineSet");
LineSet1329.vertexCount = new MFInt32(new int[2]);
let Coordinate1330 = browser.currentScene.createNode("Coordinate");
Coordinate1330.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794]);
LineSet1329.coord = Coordinate1330;

let ColorRGBA1331 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1331.USE = "HAnimSegmentLineColorRGBA";
LineSet1329.color = ColorRGBA1331;

Shape1328.geometry = LineSet1329;

HAnimSegment1312.children[5] = Shape1328;

//HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_pinky0'/>
let Shape1332 = browser.currentScene.createNode("Shape");
let LineSet1333 = browser.currentScene.createNode("LineSet");
LineSet1333.vertexCount = new MFInt32(new int[2]);
let Coordinate1334 = browser.currentScene.createNode("Coordinate");
Coordinate1334.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036]);
LineSet1333.coord = Coordinate1334;

let ColorRGBA1335 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1335.USE = "HAnimSegmentLineColorRGBA";
LineSet1333.color = ColorRGBA1335;

Shape1332.geometry = LineSet1333;

HAnimSegment1312.children[6] = Shape1332;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_radiocarpal'/> to <HAnimSite name='r_metacarpal_pha2_pt'/>
let Shape1336 = browser.currentScene.createNode("Shape");
let LineSet1337 = browser.currentScene.createNode("LineSet");
LineSet1337.vertexCount = new MFInt32(new int[2]);
let Coordinate1338 = browser.currentScene.createNode("Coordinate");
Coordinate1338.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177]);
LineSet1337.coord = Coordinate1338;

let ColorRGBA1339 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1339.USE = "HAnimSiteLineColorRGBA";
LineSet1337.color = ColorRGBA1339;

Shape1336.geometry = LineSet1337;

HAnimSegment1312.children[7] = Shape1336;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_radiocarpal'/> to <HAnimSite name='r_ulnar_styloid_pt'/>
let Shape1340 = browser.currentScene.createNode("Shape");
let LineSet1341 = browser.currentScene.createNode("LineSet");
LineSet1341.vertexCount = new MFInt32(new int[2]);
let Coordinate1342 = browser.currentScene.createNode("Coordinate");
Coordinate1342.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584]);
LineSet1341.coord = Coordinate1342;

let ColorRGBA1343 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1343.USE = "HAnimSiteLineColorRGBA";
LineSet1341.color = ColorRGBA1343;

Shape1340.geometry = LineSet1341;

HAnimSegment1312.children[8] = Shape1340;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_radiocarpal'/> to <HAnimSite name='r_metacarpal_pha5_pt'/>
let Shape1344 = browser.currentScene.createNode("Shape");
let LineSet1345 = browser.currentScene.createNode("LineSet");
LineSet1345.vertexCount = new MFInt32(new int[2]);
let Coordinate1346 = browser.currentScene.createNode("Coordinate");
Coordinate1346.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064]);
LineSet1345.coord = Coordinate1346;

let ColorRGBA1347 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1347.USE = "HAnimSiteLineColorRGBA";
LineSet1345.color = ColorRGBA1347;

Shape1344.geometry = LineSet1345;

HAnimSegment1312.children[9] = Shape1344;

//HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_radiocarpal'/> to <HAnimSite name='r_hand_front_view'/>
let Shape1348 = browser.currentScene.createNode("Shape");
let LineSet1349 = browser.currentScene.createNode("LineSet");
LineSet1349.vertexCount = new MFInt32(new int[2]);
let Coordinate1350 = browser.currentScene.createNode("Coordinate");
Coordinate1350.point = new MFVec3f(new float[-0.1984,0.8663,-0.0583,-0.3,0.75,0.45]);
LineSet1349.coord = Coordinate1350;

let ColorRGBA1351 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1351.USE = "HAnimSiteViewpointLineColorRGBA";
LineSet1349.color = ColorRGBA1351;

Shape1348.geometry = LineSet1349;

HAnimSegment1312.children[10] = Shape1348;

let HAnimSite1352 = browser.currentScene.createNode("HAnimSite");
HAnimSite1352.name = "r_metacarpal_phalanx_2_pt";
HAnimSite1352.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite1352.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
//HAnimSite visualization shape
let TouchSensor1353 = browser.currentScene.createNode("TouchSensor");
TouchSensor1353.description = "HAnimSite r_metacarpal_pha2_pt";
HAnimSite1352.children = new MFNode();

HAnimSite1352.children[0] = TouchSensor1353;

let Shape1354 = browser.currentScene.createNode("Shape");
Shape1354.USE = "HAnimSiteShape";
HAnimSite1352.children[1] = Shape1354;

HAnimSegment1312.children[11] = HAnimSite1352;

let HAnimSite1355 = browser.currentScene.createNode("HAnimSite");
HAnimSite1355.name = "r_ulnar_styloid_pt";
HAnimSite1355.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite1355.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
//HAnimSite visualization shape
let TouchSensor1356 = browser.currentScene.createNode("TouchSensor");
TouchSensor1356.description = "HAnimSite r_ulnar_styloid_pt";
HAnimSite1355.children = new MFNode();

HAnimSite1355.children[0] = TouchSensor1356;

let Shape1357 = browser.currentScene.createNode("Shape");
Shape1357.USE = "HAnimSiteShape";
HAnimSite1355.children[1] = Shape1357;

HAnimSegment1312.children[12] = HAnimSite1355;

let HAnimSite1358 = browser.currentScene.createNode("HAnimSite");
HAnimSite1358.name = "r_metacarpal_phalanx_5_pt";
HAnimSite1358.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite1358.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
//HAnimSite visualization shape
let TouchSensor1359 = browser.currentScene.createNode("TouchSensor");
TouchSensor1359.description = "HAnimSite r_metacarpal_pha5_pt";
HAnimSite1358.children = new MFNode();

HAnimSite1358.children[0] = TouchSensor1359;

let Shape1360 = browser.currentScene.createNode("Shape");
Shape1360.USE = "HAnimSiteShape";
HAnimSite1358.children[1] = Shape1360;

HAnimSegment1312.children[13] = HAnimSite1358;

let HAnimSite1361 = browser.currentScene.createNode("HAnimSite");
HAnimSite1361.name = "r_hand_front_view";
HAnimSite1361.DEF = "hanim_r_hand_front_view";
HAnimSite1361.translation = new SFVec3f(new float[-0.3,0.75,0.45]);
//HAnimSite visualization shape
let TouchSensor1362 = browser.currentScene.createNode("TouchSensor");
TouchSensor1362.description = "HAnimSite r_hand_front_view";
HAnimSite1361.children = new MFNode();

HAnimSite1361.children[0] = TouchSensor1362;

let Shape1363 = browser.currentScene.createNode("Shape");
Shape1363.USE = "HAnimSiteShape";
HAnimSite1361.children[1] = Shape1363;

let Viewpoint1364 = browser.currentScene.createNode("Viewpoint");
Viewpoint1364.DEF = "hanim_r_hand_front_viewpoint";
Viewpoint1364.centerOfRotation = new SFVec3f(new float[0,0.7,0]);
Viewpoint1364.description = "right hand front";
Viewpoint1364.position = new SFVec3f(new float[0,0,0]);
HAnimSite1361.children[2] = Viewpoint1364;

//HAnimSite/Viewpoint visualization shape
let Anchor1365 = browser.currentScene.createNode("Anchor");
Anchor1365.description = "HAnimSite hanim_r_hand_front_view Viewpoint";
Anchor1365.url = new MFString(new java.lang.String["#hanim_r_hand_front_viewpoint"]);
let LOD1366 = browser.currentScene.createNode("LOD");
LOD1366.forceTransitions = True;
LOD1366.range = new MFFloat(new float[0.04]);
let WorldInfo1367 = browser.currentScene.createNode("WorldInfo");
WorldInfo1367.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1366.children = new MFNode();

LOD1366.children[0] = WorldInfo1367;

let Shape1368 = browser.currentScene.createNode("Shape");
Shape1368.USE = "HAnimSiteViewpointShape";
LOD1366.children[1] = Shape1368;

Anchor1365.children = new MFNode();

Anchor1365.children[0] = LOD1366;

HAnimSite1361.children[3] = Anchor1365;

HAnimSegment1312.children[14] = HAnimSite1361;

HAnimJoint1311.children = new MFNode();

HAnimJoint1311.children[0] = HAnimSegment1312;

let HAnimJoint1369 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1369.name = "r_carpometacarpal_1";
HAnimJoint1369.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint1369.center = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
HAnimJoint1369.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1370 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1370.name = "r_metacarpal_1";
HAnimSegment1370.DEF = "hanim_r_metacarpal_1";
//Visualization sphere for <HAnimJoint name='r_thumb1'/> is placed within <HAnimSegment name='r_metacarpal_1'/>
let TouchSensor1371 = browser.currentScene.createNode("TouchSensor");
TouchSensor1371.description = "HAnimJoint r_thumb1, HAnimSegment r_metacarpal_1";
HAnimSegment1370.children = new MFNode();

HAnimSegment1370.children[0] = TouchSensor1371;

let Transform1372 = browser.currentScene.createNode("Transform");
Transform1372.translation = new SFVec3f(new float[-0.1924,0.8472,-0.0534]);
let Shape1373 = browser.currentScene.createNode("Shape");
Shape1373.USE = "HAnimJointShape";
Transform1372.children = new MFNode();

Transform1372.children[0] = Shape1373;

HAnimSegment1370.children[1] = Transform1372;

//HAnimSegment visualization line from current <HAnimJoint name='r_thumb1'/> to child <HAnimJoint name='r_thumb2'/>
let Shape1374 = browser.currentScene.createNode("Shape");
let LineSet1375 = browser.currentScene.createNode("LineSet");
LineSet1375.vertexCount = new MFInt32(new int[2]);
let Coordinate1376 = browser.currentScene.createNode("Coordinate");
Coordinate1376.point = new MFVec3f(new float[-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246]);
LineSet1375.coord = Coordinate1376;

let ColorRGBA1377 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1377.USE = "HAnimSegmentLineColorRGBA";
LineSet1375.color = ColorRGBA1377;

Shape1374.geometry = LineSet1375;

HAnimSegment1370.children[2] = Shape1374;

HAnimJoint1369.children = new MFNode();

HAnimJoint1369.children[0] = HAnimSegment1370;

let HAnimJoint1378 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1378.name = "r_metacarpophalangeal_1";
HAnimJoint1378.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint1378.center = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
HAnimJoint1378.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1379 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1379.name = "r_carpal_proximal_phalanx_1";
HAnimSegment1379.DEF = "hanim_r_carpal_proximal_phalanx_1";
//Visualization sphere for <HAnimJoint name='r_thumb2'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_1'/>
let TouchSensor1380 = browser.currentScene.createNode("TouchSensor");
TouchSensor1380.description = "HAnimJoint r_thumb2, HAnimSegment r_carpal_proximal_phalanx_1";
HAnimSegment1379.children = new MFNode();

HAnimSegment1379.children[0] = TouchSensor1380;

let Transform1381 = browser.currentScene.createNode("Transform");
Transform1381.translation = new SFVec3f(new float[-0.1951,0.8226,0.0246]);
let Shape1382 = browser.currentScene.createNode("Shape");
Shape1382.USE = "HAnimJointShape";
Transform1381.children = new MFNode();

Transform1381.children[0] = Shape1382;

HAnimSegment1379.children[1] = Transform1381;

//HAnimSegment visualization line from current <HAnimJoint name='r_thumb2'/> to child <HAnimJoint name='r_thumb3'/>
let Shape1383 = browser.currentScene.createNode("Shape");
let LineSet1384 = browser.currentScene.createNode("LineSet");
LineSet1384.vertexCount = new MFInt32(new int[2]);
let Coordinate1385 = browser.currentScene.createNode("Coordinate");
Coordinate1385.point = new MFVec3f(new float[-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464]);
LineSet1384.coord = Coordinate1385;

let ColorRGBA1386 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1386.USE = "HAnimSegmentLineColorRGBA";
LineSet1384.color = ColorRGBA1386;

Shape1383.geometry = LineSet1384;

HAnimSegment1379.children[2] = Shape1383;

HAnimJoint1378.children = new MFNode();

HAnimJoint1378.children[0] = HAnimSegment1379;

let HAnimJoint1387 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1387.name = "r_carpal_interphalangeal_1";
HAnimJoint1387.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint1387.center = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
HAnimJoint1387.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1388 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1388.name = "r_carpal_distal_phalanx_1";
HAnimSegment1388.DEF = "hanim_r_carpal_distal_phalanx_1";
//Visualization sphere for <HAnimJoint name='r_thumb3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_1'/>
let TouchSensor1389 = browser.currentScene.createNode("TouchSensor");
TouchSensor1389.description = "HAnimJoint r_thumb3, HAnimSegment r_carpal_distal_phalanx_1";
HAnimSegment1388.children = new MFNode();

HAnimSegment1388.children[0] = TouchSensor1389;

let Transform1390 = browser.currentScene.createNode("Transform");
Transform1390.translation = new SFVec3f(new float[-0.1955,0.8159,0.0464]);
let Shape1391 = browser.currentScene.createNode("Shape");
Shape1391.USE = "HAnimJointShape";
Transform1390.children = new MFNode();

Transform1390.children[0] = Shape1391;

HAnimSegment1388.children[1] = Transform1390;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_thumb3'/> to <HAnimSite name='r_thumb_distal_tip'/>
let Shape1392 = browser.currentScene.createNode("Shape");
let LineSet1393 = browser.currentScene.createNode("LineSet");
LineSet1393.vertexCount = new MFInt32(new int[2]);
let Coordinate1394 = browser.currentScene.createNode("Coordinate");
Coordinate1394.point = new MFVec3f(new float[-0.1955,0.8159,0.0464,-0.1869,0.809,0.082]);
LineSet1393.coord = Coordinate1394;

let ColorRGBA1395 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1395.USE = "HAnimSiteLineColorRGBA";
LineSet1393.color = ColorRGBA1395;

Shape1392.geometry = LineSet1393;

HAnimSegment1388.children[2] = Shape1392;

let HAnimSite1396 = browser.currentScene.createNode("HAnimSite");
HAnimSite1396.name = "r_carpal_distal_phalanx_1_pt";
HAnimSite1396.DEF = "hanim_r_carpal_distal_phalanx_1_pt";
HAnimSite1396.translation = new SFVec3f(new float[-0.1869,0.809,0.082]);
//HAnimSite visualization shape
let TouchSensor1397 = browser.currentScene.createNode("TouchSensor");
TouchSensor1397.description = "HAnimSite r_thumb_distal_tip";
HAnimSite1396.children = new MFNode();

HAnimSite1396.children[0] = TouchSensor1397;

let Shape1398 = browser.currentScene.createNode("Shape");
Shape1398.USE = "HAnimSiteShape";
HAnimSite1396.children[1] = Shape1398;

HAnimSegment1388.children[3] = HAnimSite1396;

HAnimJoint1387.children = new MFNode();

HAnimJoint1387.children[0] = HAnimSegment1388;

HAnimJoint1378.children[1] = HAnimJoint1387;

HAnimJoint1369.children[1] = HAnimJoint1378;

HAnimJoint1311.children[1] = HAnimJoint1369;

let HAnimJoint1399 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1399.name = "r_carpometacarpal_2";
HAnimJoint1399.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint1399.center = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
HAnimJoint1399.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1400 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1400.name = "r_metacarpal_2";
HAnimSegment1400.DEF = "hanim_r_metacarpal_2";
//Visualization sphere for <HAnimJoint name='r_index0'/> is placed within <HAnimSegment name='r_metacarpal_2'/>
let TouchSensor1401 = browser.currentScene.createNode("TouchSensor");
TouchSensor1401.description = "HAnimJoint r_index0, HAnimSegment r_metacarpal_2";
HAnimSegment1400.children = new MFNode();

HAnimSegment1400.children[0] = TouchSensor1401;

let Transform1402 = browser.currentScene.createNode("Transform");
Transform1402.translation = new SFVec3f(new float[-0.1983,0.8024,-0.028]);
let Shape1403 = browser.currentScene.createNode("Shape");
Shape1403.USE = "HAnimJointShape";
Transform1402.children = new MFNode();

Transform1402.children[0] = Shape1403;

HAnimSegment1400.children[1] = Transform1402;

//HAnimSegment visualization line from current <HAnimJoint name='r_index0'/> to child <HAnimJoint name='r_index1'/>
let Shape1404 = browser.currentScene.createNode("Shape");
let LineSet1405 = browser.currentScene.createNode("LineSet");
LineSet1405.vertexCount = new MFInt32(new int[2]);
let Coordinate1406 = browser.currentScene.createNode("Coordinate");
Coordinate1406.point = new MFVec3f(new float[-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028]);
LineSet1405.coord = Coordinate1406;

let ColorRGBA1407 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1407.USE = "HAnimSegmentLineColorRGBA";
LineSet1405.color = ColorRGBA1407;

Shape1404.geometry = LineSet1405;

HAnimSegment1400.children[2] = Shape1404;

HAnimJoint1399.children = new MFNode();

HAnimJoint1399.children[0] = HAnimSegment1400;

let HAnimJoint1408 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1408.name = "r_metacarpophalangeal_2";
HAnimJoint1408.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint1408.center = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
HAnimJoint1408.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1409 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1409.name = "r_carpal_proximal_phalanx_2";
HAnimSegment1409.DEF = "hanim_r_carpal_proximal_phalanx_2";
//Visualization sphere for <HAnimJoint name='r_index1'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_2'/>
let TouchSensor1410 = browser.currentScene.createNode("TouchSensor");
TouchSensor1410.description = "HAnimJoint r_index1, HAnimSegment r_carpal_proximal_phalanx_2";
HAnimSegment1409.children = new MFNode();

HAnimSegment1409.children[0] = TouchSensor1410;

let Transform1411 = browser.currentScene.createNode("Transform");
Transform1411.translation = new SFVec3f(new float[-0.1983,0.7815,-0.028]);
let Shape1412 = browser.currentScene.createNode("Shape");
Shape1412.USE = "HAnimJointShape";
Transform1411.children = new MFNode();

Transform1411.children[0] = Shape1412;

HAnimSegment1409.children[1] = Transform1411;

//HAnimSegment visualization line from current <HAnimJoint name='r_index1'/> to child <HAnimJoint name='r_index2'/>
let Shape1413 = browser.currentScene.createNode("Shape");
let LineSet1414 = browser.currentScene.createNode("LineSet");
LineSet1414.vertexCount = new MFInt32(new int[2]);
let Coordinate1415 = browser.currentScene.createNode("Coordinate");
Coordinate1415.point = new MFVec3f(new float[-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248]);
LineSet1414.coord = Coordinate1415;

let ColorRGBA1416 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1416.USE = "HAnimSegmentLineColorRGBA";
LineSet1414.color = ColorRGBA1416;

Shape1413.geometry = LineSet1414;

HAnimSegment1409.children[2] = Shape1413;

HAnimJoint1408.children = new MFNode();

HAnimJoint1408.children[0] = HAnimSegment1409;

let HAnimJoint1417 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1417.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint1417.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint1417.center = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
HAnimJoint1417.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1418 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1418.name = "r_carpal_middle_phalanx_2";
HAnimSegment1418.DEF = "hanim_r_carpal_middle_phalanx_2";
//Visualization sphere for <HAnimJoint name='r_index2'/> is placed within <HAnimSegment name='r_carpal_middle_phalanx_2'/>
let TouchSensor1419 = browser.currentScene.createNode("TouchSensor");
TouchSensor1419.description = "HAnimJoint r_index2, HAnimSegment r_carpal_middle_phalanx_2";
HAnimSegment1418.children = new MFNode();

HAnimSegment1418.children[0] = TouchSensor1419;

let Transform1420 = browser.currentScene.createNode("Transform");
Transform1420.translation = new SFVec3f(new float[-0.2017,0.7363,-0.0248]);
let Shape1421 = browser.currentScene.createNode("Shape");
Shape1421.USE = "HAnimJointShape";
Transform1420.children = new MFNode();

Transform1420.children[0] = Shape1421;

HAnimSegment1418.children[1] = Transform1420;

//HAnimSegment visualization line from current <HAnimJoint name='r_index2'/> to child <HAnimJoint name='r_index3'/>
let Shape1422 = browser.currentScene.createNode("Shape");
let LineSet1423 = browser.currentScene.createNode("LineSet");
LineSet1423.vertexCount = new MFInt32(new int[2]);
let Coordinate1424 = browser.currentScene.createNode("Coordinate");
Coordinate1424.point = new MFVec3f(new float[-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236]);
LineSet1423.coord = Coordinate1424;

let ColorRGBA1425 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1425.USE = "HAnimSegmentLineColorRGBA";
LineSet1423.color = ColorRGBA1425;

Shape1422.geometry = LineSet1423;

HAnimSegment1418.children[2] = Shape1422;

HAnimJoint1417.children = new MFNode();

HAnimJoint1417.children[0] = HAnimSegment1418;

let HAnimJoint1426 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1426.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint1426.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint1426.center = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
HAnimJoint1426.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1427 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1427.name = "r_carpal_distal_phalanx_2";
HAnimSegment1427.DEF = "hanim_r_carpal_distal_phalanx_2";
//Visualization sphere for <HAnimJoint name='r_index3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_2'/>
let TouchSensor1428 = browser.currentScene.createNode("TouchSensor");
TouchSensor1428.description = "HAnimJoint r_index3, HAnimSegment r_carpal_distal_phalanx_2";
HAnimSegment1427.children = new MFNode();

HAnimSegment1427.children[0] = TouchSensor1428;

let Transform1429 = browser.currentScene.createNode("Transform");
Transform1429.translation = new SFVec3f(new float[-0.2028,0.7139,-0.0236]);
let Shape1430 = browser.currentScene.createNode("Shape");
Shape1430.USE = "HAnimJointShape";
Transform1429.children = new MFNode();

Transform1429.children[0] = Shape1430;

HAnimSegment1427.children[1] = Transform1429;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_index_distal_tip'/>
let Shape1431 = browser.currentScene.createNode("Shape");
let LineSet1432 = browser.currentScene.createNode("LineSet");
LineSet1432.vertexCount = new MFInt32(new int[2]);
let Coordinate1433 = browser.currentScene.createNode("Coordinate");
Coordinate1433.point = new MFVec3f(new float[-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018]);
LineSet1432.coord = Coordinate1433;

let ColorRGBA1434 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1434.USE = "HAnimSiteLineColorRGBA";
LineSet1432.color = ColorRGBA1434;

Shape1431.geometry = LineSet1432;

HAnimSegment1427.children[2] = Shape1431;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_dactylion_pt'/>
let Shape1435 = browser.currentScene.createNode("Shape");
let LineSet1436 = browser.currentScene.createNode("LineSet");
LineSet1436.vertexCount = new MFInt32(new int[2]);
let Coordinate1437 = browser.currentScene.createNode("Coordinate");
Coordinate1437.point = new MFVec3f(new float[-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423]);
LineSet1436.coord = Coordinate1437;

let ColorRGBA1438 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1438.USE = "HAnimSiteLineColorRGBA";
LineSet1436.color = ColorRGBA1438;

Shape1435.geometry = LineSet1436;

HAnimSegment1427.children[3] = Shape1435;

let HAnimSite1439 = browser.currentScene.createNode("HAnimSite");
HAnimSite1439.name = "r_carpal_distal_phalanx_2_pt";
HAnimSite1439.DEF = "hanim_r_carpal_distal_phalanx_2_pt";
HAnimSite1439.translation = new SFVec3f(new float[-0.198,0.6883,-0.018]);
//HAnimSite visualization shape
let TouchSensor1440 = browser.currentScene.createNode("TouchSensor");
TouchSensor1440.description = "HAnimSite r_index_distal_tip";
HAnimSite1439.children = new MFNode();

HAnimSite1439.children[0] = TouchSensor1440;

let Shape1441 = browser.currentScene.createNode("Shape");
Shape1441.USE = "HAnimSiteShape";
HAnimSite1439.children[1] = Shape1441;

HAnimSegment1427.children[4] = HAnimSite1439;

let HAnimSite1442 = browser.currentScene.createNode("HAnimSite");
HAnimSite1442.name = "r_dactylion_pt";
HAnimSite1442.DEF = "hanim_r_dactylion_pt";
HAnimSite1442.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
//HAnimSite visualization shape
let TouchSensor1443 = browser.currentScene.createNode("TouchSensor");
TouchSensor1443.description = "HAnimSite r_dactylion_pt";
HAnimSite1442.children = new MFNode();

HAnimSite1442.children[0] = TouchSensor1443;

let Shape1444 = browser.currentScene.createNode("Shape");
Shape1444.USE = "HAnimSiteShape";
HAnimSite1442.children[1] = Shape1444;

HAnimSegment1427.children[5] = HAnimSite1442;

HAnimJoint1426.children = new MFNode();

HAnimJoint1426.children[0] = HAnimSegment1427;

HAnimJoint1417.children[1] = HAnimJoint1426;

HAnimJoint1408.children[1] = HAnimJoint1417;

HAnimJoint1399.children[1] = HAnimJoint1408;

HAnimJoint1311.children[2] = HAnimJoint1399;

let HAnimJoint1445 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1445.name = "r_carpometacarpal_3";
HAnimJoint1445.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint1445.center = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
HAnimJoint1445.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1446 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1446.name = "r_metacarpal_3";
HAnimSegment1446.DEF = "hanim_r_metacarpal_3";
//Visualization sphere for <HAnimJoint name='r_middle0'/> is placed within <HAnimSegment name='r_metacarpal_3'/>
let TouchSensor1447 = browser.currentScene.createNode("TouchSensor");
TouchSensor1447.description = "HAnimJoint r_middle0, HAnimSegment r_metacarpal_3";
HAnimSegment1446.children = new MFNode();

HAnimSegment1446.children[0] = TouchSensor1447;

let Transform1448 = browser.currentScene.createNode("Transform");
Transform1448.translation = new SFVec3f(new float[-0.1987,0.8029,-0.053]);
let Shape1449 = browser.currentScene.createNode("Shape");
Shape1449.USE = "HAnimJointShape";
Transform1448.children = new MFNode();

Transform1448.children[0] = Shape1449;

HAnimSegment1446.children[1] = Transform1448;

//HAnimSegment visualization line from current <HAnimJoint name='r_middle0'/> to child <HAnimJoint name='r_middle1'/>
let Shape1450 = browser.currentScene.createNode("Shape");
let LineSet1451 = browser.currentScene.createNode("LineSet");
LineSet1451.vertexCount = new MFInt32(new int[2]);
let Coordinate1452 = browser.currentScene.createNode("Coordinate");
Coordinate1452.point = new MFVec3f(new float[-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053]);
LineSet1451.coord = Coordinate1452;

let ColorRGBA1453 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1453.USE = "HAnimSegmentLineColorRGBA";
LineSet1451.color = ColorRGBA1453;

Shape1450.geometry = LineSet1451;

HAnimSegment1446.children[2] = Shape1450;

HAnimJoint1445.children = new MFNode();

HAnimJoint1445.children[0] = HAnimSegment1446;

let HAnimJoint1454 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1454.name = "r_metacarpophalangeal_3";
HAnimJoint1454.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint1454.center = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
HAnimJoint1454.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1455 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1455.name = "r_carpal_proximal_phalanx_3";
HAnimSegment1455.DEF = "hanim_r_carpal_proximal_phalanx_3";
//Visualization sphere for <HAnimJoint name='r_middle1'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_3'/>
let TouchSensor1456 = browser.currentScene.createNode("TouchSensor");
TouchSensor1456.description = "HAnimJoint r_middle1, HAnimSegment r_carpal_proximal_phalanx_3";
HAnimSegment1455.children = new MFNode();

HAnimSegment1455.children[0] = TouchSensor1456;

let Transform1457 = browser.currentScene.createNode("Transform");
Transform1457.translation = new SFVec3f(new float[-0.1987,0.7818,-0.053]);
let Shape1458 = browser.currentScene.createNode("Shape");
Shape1458.USE = "HAnimJointShape";
Transform1457.children = new MFNode();

Transform1457.children[0] = Shape1458;

HAnimSegment1455.children[1] = Transform1457;

//HAnimSegment visualization line from current <HAnimJoint name='r_middle1'/> to child <HAnimJoint name='r_middle2'/>
let Shape1459 = browser.currentScene.createNode("Shape");
let LineSet1460 = browser.currentScene.createNode("LineSet");
LineSet1460.vertexCount = new MFInt32(new int[2]);
let Coordinate1461 = browser.currentScene.createNode("Coordinate");
Coordinate1461.point = new MFVec3f(new float[-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503]);
LineSet1460.coord = Coordinate1461;

let ColorRGBA1462 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1462.USE = "HAnimSegmentLineColorRGBA";
LineSet1460.color = ColorRGBA1462;

Shape1459.geometry = LineSet1460;

HAnimSegment1455.children[2] = Shape1459;

HAnimJoint1454.children = new MFNode();

HAnimJoint1454.children[0] = HAnimSegment1455;

let HAnimJoint1463 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1463.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint1463.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint1463.center = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
HAnimJoint1463.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1464 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1464.name = "r_carpal_middle_phalanx_3";
HAnimSegment1464.DEF = "hanim_r_carpal_middle_phalanx_3";
//Visualization sphere for <HAnimJoint name='r_middle2'/> is placed within <HAnimSegment name='r_carpal_middle_phalanx_3'/>
let TouchSensor1465 = browser.currentScene.createNode("TouchSensor");
TouchSensor1465.description = "HAnimJoint r_middle2, HAnimSegment r_carpal_middle_phalanx_3";
HAnimSegment1464.children = new MFNode();

HAnimSegment1464.children[0] = TouchSensor1465;

let Transform1466 = browser.currentScene.createNode("Transform");
Transform1466.translation = new SFVec3f(new float[-0.2013,0.7273,-0.0503]);
let Shape1467 = browser.currentScene.createNode("Shape");
Shape1467.USE = "HAnimJointShape";
Transform1466.children = new MFNode();

Transform1466.children[0] = Shape1467;

HAnimSegment1464.children[1] = Transform1466;

//HAnimSegment visualization line from current <HAnimJoint name='r_middle2'/> to child <HAnimJoint name='r_middle3'/>
let Shape1468 = browser.currentScene.createNode("Shape");
let LineSet1469 = browser.currentScene.createNode("LineSet");
LineSet1469.vertexCount = new MFInt32(new int[2]);
let Coordinate1470 = browser.currentScene.createNode("Coordinate");
Coordinate1470.point = new MFVec3f(new float[-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494]);
LineSet1469.coord = Coordinate1470;

let ColorRGBA1471 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1471.USE = "HAnimSegmentLineColorRGBA";
LineSet1469.color = ColorRGBA1471;

Shape1468.geometry = LineSet1469;

HAnimSegment1464.children[2] = Shape1468;

HAnimJoint1463.children = new MFNode();

HAnimJoint1463.children[0] = HAnimSegment1464;

let HAnimJoint1472 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1472.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint1472.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint1472.center = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
HAnimJoint1472.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1473 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1473.name = "r_carpal_distal_phalanx_3";
HAnimSegment1473.DEF = "hanim_r_carpal_distal_phalanx_3";
//Visualization sphere for <HAnimJoint name='r_middle3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_3'/>
let TouchSensor1474 = browser.currentScene.createNode("TouchSensor");
TouchSensor1474.description = "HAnimJoint r_middle3, HAnimSegment r_carpal_distal_phalanx_3";
HAnimSegment1473.children = new MFNode();

HAnimSegment1473.children[0] = TouchSensor1474;

let Transform1475 = browser.currentScene.createNode("Transform");
Transform1475.translation = new SFVec3f(new float[-0.2026,0.7011,-0.0494]);
let Shape1476 = browser.currentScene.createNode("Shape");
Shape1476.USE = "HAnimJointShape";
Transform1475.children = new MFNode();

Transform1475.children[0] = Shape1476;

HAnimSegment1473.children[1] = Transform1475;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_middle3'/> to <HAnimSite name='r_middle_distal_tip'/>
let Shape1477 = browser.currentScene.createNode("Shape");
let LineSet1478 = browser.currentScene.createNode("LineSet");
LineSet1478.vertexCount = new MFInt32(new int[2]);
let Coordinate1479 = browser.currentScene.createNode("Coordinate");
Coordinate1479.point = new MFVec3f(new float[-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427]);
LineSet1478.coord = Coordinate1479;

let ColorRGBA1480 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1480.USE = "HAnimSiteLineColorRGBA";
LineSet1478.color = ColorRGBA1480;

Shape1477.geometry = LineSet1478;

HAnimSegment1473.children[2] = Shape1477;

let HAnimSite1481 = browser.currentScene.createNode("HAnimSite");
HAnimSite1481.name = "r_carpal_distal_phalanx_3_pt";
HAnimSite1481.DEF = "hanim_r_carpal_distal_phalanx_3_pt";
HAnimSite1481.translation = new SFVec3f(new float[-0.1969,0.6758,-0.0427]);
//HAnimSite visualization shape
let TouchSensor1482 = browser.currentScene.createNode("TouchSensor");
TouchSensor1482.description = "HAnimSite r_middle_distal_tip";
HAnimSite1481.children = new MFNode();

HAnimSite1481.children[0] = TouchSensor1482;

let Shape1483 = browser.currentScene.createNode("Shape");
Shape1483.USE = "HAnimSiteShape";
HAnimSite1481.children[1] = Shape1483;

HAnimSegment1473.children[3] = HAnimSite1481;

HAnimJoint1472.children = new MFNode();

HAnimJoint1472.children[0] = HAnimSegment1473;

HAnimJoint1463.children[1] = HAnimJoint1472;

HAnimJoint1454.children[1] = HAnimJoint1463;

HAnimJoint1445.children[1] = HAnimJoint1454;

HAnimJoint1311.children[3] = HAnimJoint1445;

let HAnimJoint1484 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1484.name = "r_carpometacarpal_4";
HAnimJoint1484.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint1484.center = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
HAnimJoint1484.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1485 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1485.name = "r_metacarpal_4";
HAnimSegment1485.DEF = "hanim_r_metacarpal_4";
//Visualization sphere for <HAnimJoint name='r_ring0'/> is placed within <HAnimSegment name='r_metacarpal_4'/>
let TouchSensor1486 = browser.currentScene.createNode("TouchSensor");
TouchSensor1486.description = "HAnimJoint r_ring0, HAnimSegment r_metacarpal_4";
HAnimSegment1485.children = new MFNode();

HAnimSegment1485.children[0] = TouchSensor1486;

let Transform1487 = browser.currentScene.createNode("Transform");
Transform1487.translation = new SFVec3f(new float[-0.1956,0.8019,-0.0794]);
let Shape1488 = browser.currentScene.createNode("Shape");
Shape1488.USE = "HAnimJointShape";
Transform1487.children = new MFNode();

Transform1487.children[0] = Shape1488;

HAnimSegment1485.children[1] = Transform1487;

//HAnimSegment visualization line from current <HAnimJoint name='r_ring0'/> to child <HAnimJoint name='r_ring1'/>
let Shape1489 = browser.currentScene.createNode("Shape");
let LineSet1490 = browser.currentScene.createNode("LineSet");
LineSet1490.vertexCount = new MFInt32(new int[2]);
let Coordinate1491 = browser.currentScene.createNode("Coordinate");
Coordinate1491.point = new MFVec3f(new float[-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794]);
LineSet1490.coord = Coordinate1491;

let ColorRGBA1492 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1492.USE = "HAnimSegmentLineColorRGBA";
LineSet1490.color = ColorRGBA1492;

Shape1489.geometry = LineSet1490;

HAnimSegment1485.children[2] = Shape1489;

HAnimJoint1484.children = new MFNode();

HAnimJoint1484.children[0] = HAnimSegment1485;

let HAnimJoint1493 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1493.name = "r_metacarpophalangeal_4";
HAnimJoint1493.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint1493.center = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
HAnimJoint1493.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1494 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1494.name = "r_carpal_proximal_phalanx_4";
HAnimSegment1494.DEF = "hanim_r_carpal_proximal_phalanx_4";
//Visualization sphere for <HAnimJoint name='r_ring1'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_4'/>
let TouchSensor1495 = browser.currentScene.createNode("TouchSensor");
TouchSensor1495.description = "HAnimJoint r_ring1, HAnimSegment r_carpal_proximal_phalanx_4";
HAnimSegment1494.children = new MFNode();

HAnimSegment1494.children[0] = TouchSensor1495;

let Transform1496 = browser.currentScene.createNode("Transform");
Transform1496.translation = new SFVec3f(new float[-0.1956,0.7815,-0.0794]);
let Shape1497 = browser.currentScene.createNode("Shape");
Shape1497.USE = "HAnimJointShape";
Transform1496.children = new MFNode();

Transform1496.children[0] = Shape1497;

HAnimSegment1494.children[1] = Transform1496;

//HAnimSegment visualization line from current <HAnimJoint name='r_ring1'/> to child <HAnimJoint name='r_ring2'/>
let Shape1498 = browser.currentScene.createNode("Shape");
let LineSet1499 = browser.currentScene.createNode("LineSet");
LineSet1499.vertexCount = new MFInt32(new int[2]);
let Coordinate1500 = browser.currentScene.createNode("Coordinate");
Coordinate1500.point = new MFVec3f(new float[-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777]);
LineSet1499.coord = Coordinate1500;

let ColorRGBA1501 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1501.USE = "HAnimSegmentLineColorRGBA";
LineSet1499.color = ColorRGBA1501;

Shape1498.geometry = LineSet1499;

HAnimSegment1494.children[2] = Shape1498;

HAnimJoint1493.children = new MFNode();

HAnimJoint1493.children[0] = HAnimSegment1494;

let HAnimJoint1502 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1502.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint1502.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint1502.center = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
HAnimJoint1502.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1503 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1503.name = "r_carpal_middle_phalanx_4";
HAnimSegment1503.DEF = "hanim_r_carpal_middle_phalanx_4";
//Visualization sphere for <HAnimJoint name='r_ring2'/> is placed within <HAnimSegment name='r_carpal_middle_phalanx_4'/>
let TouchSensor1504 = browser.currentScene.createNode("TouchSensor");
TouchSensor1504.description = "HAnimJoint r_ring2, HAnimSegment r_carpal_middle_phalanx_4";
HAnimSegment1503.children = new MFNode();

HAnimSegment1503.children[0] = TouchSensor1504;

let Transform1505 = browser.currentScene.createNode("Transform");
Transform1505.translation = new SFVec3f(new float[-0.1973,0.7287,-0.0777]);
let Shape1506 = browser.currentScene.createNode("Shape");
Shape1506.USE = "HAnimJointShape";
Transform1505.children = new MFNode();

Transform1505.children[0] = Shape1506;

HAnimSegment1503.children[1] = Transform1505;

//HAnimSegment visualization line from current <HAnimJoint name='r_ring2'/> to child <HAnimJoint name='r_ring3'/>
let Shape1507 = browser.currentScene.createNode("Shape");
let LineSet1508 = browser.currentScene.createNode("LineSet");
LineSet1508.vertexCount = new MFInt32(new int[2]);
let Coordinate1509 = browser.currentScene.createNode("Coordinate");
Coordinate1509.point = new MFVec3f(new float[-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767]);
LineSet1508.coord = Coordinate1509;

let ColorRGBA1510 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1510.USE = "HAnimSegmentLineColorRGBA";
LineSet1508.color = ColorRGBA1510;

Shape1507.geometry = LineSet1508;

HAnimSegment1503.children[2] = Shape1507;

HAnimJoint1502.children = new MFNode();

HAnimJoint1502.children[0] = HAnimSegment1503;

let HAnimJoint1511 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1511.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint1511.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint1511.center = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
HAnimJoint1511.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1512 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1512.name = "r_carpal_distal_phalanx_4";
HAnimSegment1512.DEF = "hanim_r_carpal_distal_phalanx_4";
//Visualization sphere for <HAnimJoint name='r_ring3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_4'/>
let TouchSensor1513 = browser.currentScene.createNode("TouchSensor");
TouchSensor1513.description = "HAnimJoint r_ring3, HAnimSegment r_carpal_distal_phalanx_4";
HAnimSegment1512.children = new MFNode();

HAnimSegment1512.children[0] = TouchSensor1513;

let Transform1514 = browser.currentScene.createNode("Transform");
Transform1514.translation = new SFVec3f(new float[-0.1983,0.7045,-0.0767]);
let Shape1515 = browser.currentScene.createNode("Shape");
Shape1515.USE = "HAnimJointShape";
Transform1514.children = new MFNode();

Transform1514.children[0] = Shape1515;

HAnimSegment1512.children[1] = Transform1514;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ring3'/> to <HAnimSite name='r_ring_distal_tip'/>
let Shape1516 = browser.currentScene.createNode("Shape");
let LineSet1517 = browser.currentScene.createNode("LineSet");
LineSet1517.vertexCount = new MFInt32(new int[2]);
let Coordinate1518 = browser.currentScene.createNode("Coordinate");
Coordinate1518.point = new MFVec3f(new float[-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693]);
LineSet1517.coord = Coordinate1518;

let ColorRGBA1519 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1519.USE = "HAnimSiteLineColorRGBA";
LineSet1517.color = ColorRGBA1519;

Shape1516.geometry = LineSet1517;

HAnimSegment1512.children[2] = Shape1516;

let HAnimSite1520 = browser.currentScene.createNode("HAnimSite");
HAnimSite1520.name = "r_carpal_distal_phalanx_4_pt";
HAnimSite1520.DEF = "hanim_r_carpal_distal_phalanx_4_pt";
HAnimSite1520.translation = new SFVec3f(new float[-0.1934,0.6778,-0.0693]);
//HAnimSite visualization shape
let TouchSensor1521 = browser.currentScene.createNode("TouchSensor");
TouchSensor1521.description = "HAnimSite r_ring_distal_tip";
HAnimSite1520.children = new MFNode();

HAnimSite1520.children[0] = TouchSensor1521;

let Shape1522 = browser.currentScene.createNode("Shape");
Shape1522.USE = "HAnimSiteShape";
HAnimSite1520.children[1] = Shape1522;

HAnimSegment1512.children[3] = HAnimSite1520;

HAnimJoint1511.children = new MFNode();

HAnimJoint1511.children[0] = HAnimSegment1512;

HAnimJoint1502.children[1] = HAnimJoint1511;

HAnimJoint1493.children[1] = HAnimJoint1502;

HAnimJoint1484.children[1] = HAnimJoint1493;

HAnimJoint1311.children[4] = HAnimJoint1484;

let HAnimJoint1523 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1523.name = "r_carpometacarpal_5";
HAnimJoint1523.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint1523.center = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
HAnimJoint1523.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1524 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1524.name = "r_metacarpal_5";
HAnimSegment1524.DEF = "hanim_r_metacarpal_5";
//Visualization sphere for <HAnimJoint name='r_pinky0'/> is placed within <HAnimSegment name='r_metacarpal_5'/>
let TouchSensor1525 = browser.currentScene.createNode("TouchSensor");
TouchSensor1525.description = "HAnimJoint r_pinky0, HAnimSegment r_metacarpal_5";
HAnimSegment1524.children = new MFNode();

HAnimSegment1524.children[0] = TouchSensor1525;

let Transform1526 = browser.currentScene.createNode("Transform");
Transform1526.translation = new SFVec3f(new float[-0.1925,0.8066,-0.1036]);
let Shape1527 = browser.currentScene.createNode("Shape");
Shape1527.USE = "HAnimJointShape";
Transform1526.children = new MFNode();

Transform1526.children[0] = Shape1527;

HAnimSegment1524.children[1] = Transform1526;

//HAnimSegment visualization line from current <HAnimJoint name='r_pinky0'/> to child <HAnimJoint name='r_pinky1'/>
let Shape1528 = browser.currentScene.createNode("Shape");
let LineSet1529 = browser.currentScene.createNode("LineSet");
LineSet1529.vertexCount = new MFInt32(new int[2]);
let Coordinate1530 = browser.currentScene.createNode("Coordinate");
Coordinate1530.point = new MFVec3f(new float[-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036]);
LineSet1529.coord = Coordinate1530;

let ColorRGBA1531 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1531.USE = "HAnimSegmentLineColorRGBA";
LineSet1529.color = ColorRGBA1531;

Shape1528.geometry = LineSet1529;

HAnimSegment1524.children[2] = Shape1528;

HAnimJoint1523.children = new MFNode();

HAnimJoint1523.children[0] = HAnimSegment1524;

let HAnimJoint1532 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1532.name = "r_metacarpophalangeal_5";
HAnimJoint1532.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint1532.center = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
HAnimJoint1532.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1533 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1533.name = "r_carpal_proximal_phalanx_5";
HAnimSegment1533.DEF = "hanim_r_carpal_proximal_phalanx_5";
//Visualization sphere for <HAnimJoint name='r_pinky1'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_5'/>
let TouchSensor1534 = browser.currentScene.createNode("TouchSensor");
TouchSensor1534.description = "HAnimJoint r_pinky1, HAnimSegment r_carpal_proximal_phalanx_5";
HAnimSegment1533.children = new MFNode();

HAnimSegment1533.children[0] = TouchSensor1534;

let Transform1535 = browser.currentScene.createNode("Transform");
Transform1535.translation = new SFVec3f(new float[-0.1925,0.7866,-0.1036]);
let Shape1536 = browser.currentScene.createNode("Shape");
Shape1536.USE = "HAnimJointShape";
Transform1535.children = new MFNode();

Transform1535.children[0] = Shape1536;

HAnimSegment1533.children[1] = Transform1535;

//HAnimSegment visualization line from current <HAnimJoint name='r_pinky1'/> to child <HAnimJoint name='r_pinky2'/>
let Shape1537 = browser.currentScene.createNode("Shape");
let LineSet1538 = browser.currentScene.createNode("LineSet");
LineSet1538.vertexCount = new MFInt32(new int[2]);
let Coordinate1539 = browser.currentScene.createNode("Coordinate");
Coordinate1539.point = new MFVec3f(new float[-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024]);
LineSet1538.coord = Coordinate1539;

let ColorRGBA1540 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1540.USE = "HAnimSegmentLineColorRGBA";
LineSet1538.color = ColorRGBA1540;

Shape1537.geometry = LineSet1538;

HAnimSegment1533.children[2] = Shape1537;

HAnimJoint1532.children = new MFNode();

HAnimJoint1532.children[0] = HAnimSegment1533;

let HAnimJoint1541 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1541.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint1541.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint1541.center = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
HAnimJoint1541.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1542 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1542.name = "r_carpal_middle_phalanx_5";
HAnimSegment1542.DEF = "hanim_r_carpal_middle_phalanx_5";
//Visualization sphere for <HAnimJoint name='r_pinky2'/> is placed within <HAnimSegment name='r_carpal_middle_phalanx_5'/>
let TouchSensor1543 = browser.currentScene.createNode("TouchSensor");
TouchSensor1543.description = "HAnimJoint r_pinky2, HAnimSegment r_carpal_middle_phalanx_5";
HAnimSegment1542.children = new MFNode();

HAnimSegment1542.children[0] = TouchSensor1543;

let Transform1544 = browser.currentScene.createNode("Transform");
Transform1544.translation = new SFVec3f(new float[-0.1938,0.7452,-0.1024]);
let Shape1545 = browser.currentScene.createNode("Shape");
Shape1545.USE = "HAnimJointShape";
Transform1544.children = new MFNode();

Transform1544.children[0] = Shape1545;

HAnimSegment1542.children[1] = Transform1544;

//HAnimSegment visualization line from current <HAnimJoint name='r_pinky2'/> to child <HAnimJoint name='r_pinky3'/>
let Shape1546 = browser.currentScene.createNode("Shape");
let LineSet1547 = browser.currentScene.createNode("LineSet");
LineSet1547.vertexCount = new MFInt32(new int[2]);
let Coordinate1548 = browser.currentScene.createNode("Coordinate");
Coordinate1548.point = new MFVec3f(new float[-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017]);
LineSet1547.coord = Coordinate1548;

let ColorRGBA1549 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1549.USE = "HAnimSegmentLineColorRGBA";
LineSet1547.color = ColorRGBA1549;

Shape1546.geometry = LineSet1547;

HAnimSegment1542.children[2] = Shape1546;

HAnimJoint1541.children = new MFNode();

HAnimJoint1541.children[0] = HAnimSegment1542;

let HAnimJoint1550 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1550.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint1550.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint1550.center = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
HAnimJoint1550.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment1551 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1551.name = "r_carpal_distal_phalanx_5";
HAnimSegment1551.DEF = "hanim_r_carpal_distal_phalanx_5";
//Visualization sphere for <HAnimJoint name='r_pinky3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_5'/>
let TouchSensor1552 = browser.currentScene.createNode("TouchSensor");
TouchSensor1552.description = "HAnimJoint r_pinky3, HAnimSegment r_carpal_distal_phalanx_5";
HAnimSegment1551.children = new MFNode();

HAnimSegment1551.children[0] = TouchSensor1552;

let Transform1553 = browser.currentScene.createNode("Transform");
Transform1553.translation = new SFVec3f(new float[-0.1948,0.7277,-0.1017]);
let Shape1554 = browser.currentScene.createNode("Shape");
Shape1554.USE = "HAnimJointShape";
Transform1553.children = new MFNode();

Transform1553.children[0] = Shape1554;

HAnimSegment1551.children[1] = Transform1553;

//HAnimSite visualization line segment from ancestor <HAnimJoint name='r_pinky3'/> to <HAnimSite name='r_pinky_distal_tip'/>
let Shape1555 = browser.currentScene.createNode("Shape");
let LineSet1556 = browser.currentScene.createNode("LineSet");
LineSet1556.vertexCount = new MFInt32(new int[2]);
let Coordinate1557 = browser.currentScene.createNode("Coordinate");
Coordinate1557.point = new MFVec3f(new float[-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949]);
LineSet1556.coord = Coordinate1557;

let ColorRGBA1558 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1558.USE = "HAnimSiteLineColorRGBA";
LineSet1556.color = ColorRGBA1558;

Shape1555.geometry = LineSet1556;

HAnimSegment1551.children[2] = Shape1555;

let HAnimSite1559 = browser.currentScene.createNode("HAnimSite");
HAnimSite1559.name = "r_carpal_distal_phalanx_5_pt";
HAnimSite1559.DEF = "hanim_r_carpal_distal_phalanx_5_pt";
HAnimSite1559.translation = new SFVec3f(new float[-0.1938,0.7035,-0.0949]);
//HAnimSite visualization shape
let TouchSensor1560 = browser.currentScene.createNode("TouchSensor");
TouchSensor1560.description = "HAnimSite r_pinky_distal_tip";
HAnimSite1559.children = new MFNode();

HAnimSite1559.children[0] = TouchSensor1560;

let Shape1561 = browser.currentScene.createNode("Shape");
Shape1561.USE = "HAnimSiteShape";
HAnimSite1559.children[1] = Shape1561;

HAnimSegment1551.children[3] = HAnimSite1559;

HAnimJoint1550.children = new MFNode();

HAnimJoint1550.children[0] = HAnimSegment1551;

HAnimJoint1541.children[1] = HAnimJoint1550;

HAnimJoint1532.children[1] = HAnimJoint1541;

HAnimJoint1523.children[1] = HAnimJoint1532;

HAnimJoint1311.children[5] = HAnimJoint1523;

HAnimJoint1274.children[1] = HAnimJoint1311;

HAnimJoint1258.children[1] = HAnimJoint1274;

HAnimJoint1249.children[1] = HAnimJoint1258;

HAnimJoint1212.children[1] = HAnimJoint1249;

HAnimJoint574.children[3] = HAnimJoint1212;

HAnimJoint565.children[1] = HAnimJoint574;

HAnimJoint556.children[1] = HAnimJoint565;

HAnimJoint547.children[1] = HAnimJoint556;

HAnimJoint538.children[1] = HAnimJoint547;

HAnimJoint529.children[1] = HAnimJoint538;

HAnimJoint520.children[1] = HAnimJoint529;

HAnimJoint511.children[1] = HAnimJoint520;

HAnimJoint488.children[1] = HAnimJoint511;

HAnimJoint472.children[1] = HAnimJoint488;

HAnimJoint463.children[1] = HAnimJoint472;

HAnimJoint454.children[1] = HAnimJoint463;

HAnimJoint445.children[1] = HAnimJoint454;

HAnimJoint415.children[1] = HAnimJoint445;

HAnimJoint406.children[1] = HAnimJoint415;

HAnimJoint397.children[1] = HAnimJoint406;

HAnimJoint374.children[1] = HAnimJoint397;

HAnimJoint24.children[2] = HAnimJoint374;

HAnimHumanoid15.joints = new MFNode();

HAnimHumanoid15.joints[0] = HAnimJoint24;

let HAnimSite1562 = browser.currentScene.createNode("HAnimSite");
HAnimSite1562.name = "l_inclined_view";
HAnimSite1562.DEF = "hanim_l_inclined_view";
HAnimSite1562.rotation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
HAnimSite1562.translation = new SFVec3f(new float[1.62,1.05,2.06]);
//HAnimSite visualization shape
let TouchSensor1563 = browser.currentScene.createNode("TouchSensor");
TouchSensor1563.description = "HAnimSite l_inclined_view";
HAnimSite1562.children = new MFNode();

HAnimSite1562.children[0] = TouchSensor1563;

let Shape1564 = browser.currentScene.createNode("Shape");
Shape1564.USE = "HAnimSiteShape";
HAnimSite1562.children[1] = Shape1564;

let Viewpoint1565 = browser.currentScene.createNode("Viewpoint");
Viewpoint1565.DEF = "hanim_l_inclined_viewpoint";
Viewpoint1565.description = "left inclined";
Viewpoint1565.position = new SFVec3f(new float[0,0,0]);
HAnimSite1562.children[2] = Viewpoint1565;

//HAnimSite/Viewpoint visualization shape
let Anchor1566 = browser.currentScene.createNode("Anchor");
Anchor1566.description = "HAnimSite hanim_l_inclined_view Viewpoint";
Anchor1566.url = new MFString(new java.lang.String["#hanim_l_inclined_viewpoint"]);
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

HAnimHumanoid15.viewpoints[1] = HAnimSite1562;

let HAnimSite1570 = browser.currentScene.createNode("HAnimSite");
HAnimSite1570.name = "r_inclined_view";
HAnimSite1570.DEF = "hanim_r_inclined_view";
HAnimSite1570.rotation = new SFRotation(new float[-0.113,-0.993,0.0347,0.671]);
HAnimSite1570.translation = new SFVec3f(new float[-1.62,1.05,2.06]);
//HAnimSite visualization shape
let TouchSensor1571 = browser.currentScene.createNode("TouchSensor");
TouchSensor1571.description = "HAnimSite r_inclined_view";
HAnimSite1570.children = new MFNode();

HAnimSite1570.children[0] = TouchSensor1571;

let Shape1572 = browser.currentScene.createNode("Shape");
Shape1572.USE = "HAnimSiteShape";
HAnimSite1570.children[1] = Shape1572;

let Viewpoint1573 = browser.currentScene.createNode("Viewpoint");
Viewpoint1573.DEF = "hanim_r_inclined_viewpoint";
Viewpoint1573.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1573.description = "right inclined";
Viewpoint1573.position = new SFVec3f(new float[0,0,0]);
HAnimSite1570.children[2] = Viewpoint1573;

//HAnimSite/Viewpoint visualization shape
let Anchor1574 = browser.currentScene.createNode("Anchor");
Anchor1574.description = "HAnimSite hanim_r_inclined_view Viewpoint";
Anchor1574.url = new MFString(new java.lang.String["#hanim_r_inclined_viewpoint"]);
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

HAnimHumanoid15.viewpoints[2] = HAnimSite1570;

let HAnimSite1578 = browser.currentScene.createNode("HAnimSite");
HAnimSite1578.name = "front_view";
HAnimSite1578.DEF = "hanim_front_view";
HAnimSite1578.translation = new SFVec3f(new float[0,0.85,2.58]);
//HAnimSite visualization shape
let TouchSensor1579 = browser.currentScene.createNode("TouchSensor");
TouchSensor1579.description = "HAnimSite front_view";
HAnimSite1578.children = new MFNode();

HAnimSite1578.children[0] = TouchSensor1579;

let Shape1580 = browser.currentScene.createNode("Shape");
Shape1580.USE = "HAnimSiteShape";
HAnimSite1578.children[1] = Shape1580;

let Viewpoint1581 = browser.currentScene.createNode("Viewpoint");
Viewpoint1581.DEF = "hanim_front_viewpoint";
Viewpoint1581.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1581.description = "front";
Viewpoint1581.position = new SFVec3f(new float[0,0,0]);
HAnimSite1578.children[2] = Viewpoint1581;

//HAnimSite/Viewpoint visualization shape
let Anchor1582 = browser.currentScene.createNode("Anchor");
Anchor1582.description = "HAnimSite hanim_front_view Viewpoint";
Anchor1582.url = new MFString(new java.lang.String["#hanim_front_viewpoint"]);
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

HAnimHumanoid15.viewpoints[3] = HAnimSite1578;

let HAnimSite1586 = browser.currentScene.createNode("HAnimSite");
HAnimSite1586.name = "back_view";
HAnimSite1586.DEF = "hanim_back_view";
HAnimSite1586.rotation = new SFRotation(new float[0,1,0,3.14]);
HAnimSite1586.translation = new SFVec3f(new float[0,0.85,-2.58]);
//HAnimSite visualization shape
let TouchSensor1587 = browser.currentScene.createNode("TouchSensor");
TouchSensor1587.description = "HAnimSite back_view";
HAnimSite1586.children = new MFNode();

HAnimSite1586.children[0] = TouchSensor1587;

let Shape1588 = browser.currentScene.createNode("Shape");
Shape1588.USE = "HAnimSiteShape";
HAnimSite1586.children[1] = Shape1588;

let Viewpoint1589 = browser.currentScene.createNode("Viewpoint");
Viewpoint1589.DEF = "hanim_back_viewpoint";
Viewpoint1589.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1589.description = "back";
Viewpoint1589.position = new SFVec3f(new float[0,0,0]);
HAnimSite1586.children[2] = Viewpoint1589;

//HAnimSite/Viewpoint visualization shape
let Anchor1590 = browser.currentScene.createNode("Anchor");
Anchor1590.description = "HAnimSite hanim_back_view Viewpoint";
Anchor1590.url = new MFString(new java.lang.String["#hanim_back_viewpoint"]);
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

HAnimHumanoid15.viewpoints[4] = HAnimSite1586;

let HAnimSite1594 = browser.currentScene.createNode("HAnimSite");
HAnimSite1594.name = "l_side_view";
HAnimSite1594.DEF = "hanim_l_side_view";
HAnimSite1594.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite1594.translation = new SFVec3f(new float[2.6,0.854,0]);
//HAnimSite visualization shape
let TouchSensor1595 = browser.currentScene.createNode("TouchSensor");
TouchSensor1595.description = "HAnimSite l_side_view";
HAnimSite1594.children = new MFNode();

HAnimSite1594.children[0] = TouchSensor1595;

let Shape1596 = browser.currentScene.createNode("Shape");
Shape1596.USE = "HAnimSiteShape";
HAnimSite1594.children[1] = Shape1596;

let Viewpoint1597 = browser.currentScene.createNode("Viewpoint");
Viewpoint1597.DEF = "hanim_l_side_viewpoint";
Viewpoint1597.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1597.description = "left side";
Viewpoint1597.position = new SFVec3f(new float[0,0,0]);
HAnimSite1594.children[2] = Viewpoint1597;

//HAnimSite/Viewpoint visualization shape
let Anchor1598 = browser.currentScene.createNode("Anchor");
Anchor1598.description = "HAnimSite hanim_l_side_view Viewpoint";
Anchor1598.url = new MFString(new java.lang.String["#hanim_l_side_viewpoint"]);
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

HAnimHumanoid15.viewpoints[5] = HAnimSite1594;

let HAnimSite1602 = browser.currentScene.createNode("HAnimSite");
HAnimSite1602.name = "Top_view";
HAnimSite1602.DEF = "hanim_Top_view";
HAnimSite1602.rotation = new SFRotation(new float[1,0,0,-1.57]);
HAnimSite1602.translation = new SFVec3f(new float[0,3.5,0]);
//HAnimSite visualization shape
let TouchSensor1603 = browser.currentScene.createNode("TouchSensor");
TouchSensor1603.description = "HAnimSite Top_view";
HAnimSite1602.children = new MFNode();

HAnimSite1602.children[0] = TouchSensor1603;

let Shape1604 = browser.currentScene.createNode("Shape");
Shape1604.USE = "HAnimSiteShape";
HAnimSite1602.children[1] = Shape1604;

let Viewpoint1605 = browser.currentScene.createNode("Viewpoint");
Viewpoint1605.DEF = "hanim_Top_viewpoint";
Viewpoint1605.centerOfRotation = new SFVec3f(new float[0,0.9,0]);
Viewpoint1605.description = "Top";
Viewpoint1605.position = new SFVec3f(new float[0,0,0]);
HAnimSite1602.children[2] = Viewpoint1605;

//HAnimSite/Viewpoint visualization shape
let Anchor1606 = browser.currentScene.createNode("Anchor");
Anchor1606.description = "HAnimSite hanim_Top_view Viewpoint";
Anchor1606.url = new MFString(new java.lang.String["#hanim_Top_viewpoint"]);
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

HAnimHumanoid15.viewpoints[6] = HAnimSite1602;

let HAnimSite1610 = browser.currentScene.createNode("HAnimSite");
HAnimSite1610.name = "front_close_view";
HAnimSite1610.DEF = "hanim_front_close_view";
HAnimSite1610.translation = new SFVec3f(new float[0,0.854,1.575]);
//HAnimSite visualization shape
let TouchSensor1611 = browser.currentScene.createNode("TouchSensor");
TouchSensor1611.description = "HAnimSite front_close_view";
HAnimSite1610.children = new MFNode();

HAnimSite1610.children[0] = TouchSensor1611;

let Shape1612 = browser.currentScene.createNode("Shape");
Shape1612.USE = "HAnimSiteShape";
HAnimSite1610.children[1] = Shape1612;

let Viewpoint1613 = browser.currentScene.createNode("Viewpoint");
Viewpoint1613.DEF = "hanim_front_close_viewpoint";
Viewpoint1613.centerOfRotation = new SFVec3f(new float[0,0,1.575]);
Viewpoint1613.description = "front close";
Viewpoint1613.position = new SFVec3f(new float[0,0,0]);
HAnimSite1610.children[2] = Viewpoint1613;

//HAnimSite/Viewpoint visualization shape
let Anchor1614 = browser.currentScene.createNode("Anchor");
Anchor1614.description = "HAnimSite hanim_front_close_view Viewpoint";
Anchor1614.url = new MFString(new java.lang.String["#hanim_front_close_viewpoint"]);
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

HAnimHumanoid15.viewpoints[7] = HAnimSite1610;

let HAnimSite1618 = browser.currentScene.createNode("HAnimSite");
HAnimSite1618.name = "side_close_view";
HAnimSite1618.DEF = "hanim_side_close_view";
HAnimSite1618.rotation = new SFRotation(new float[0,1,0,1.5708]);
HAnimSite1618.translation = new SFVec3f(new float[1.56,0.854,0]);
//HAnimSite visualization shape
let TouchSensor1619 = browser.currentScene.createNode("TouchSensor");
TouchSensor1619.description = "HAnimSite side_close_view";
HAnimSite1618.children = new MFNode();

HAnimSite1618.children[0] = TouchSensor1619;

let Shape1620 = browser.currentScene.createNode("Shape");
Shape1620.USE = "HAnimSiteShape";
HAnimSite1618.children[1] = Shape1620;

let Viewpoint1621 = browser.currentScene.createNode("Viewpoint");
Viewpoint1621.DEF = "hanim_side_close_viewpoint";
Viewpoint1621.centerOfRotation = new SFVec3f(new float[1.6,0,0]);
Viewpoint1621.description = "side close";
Viewpoint1621.position = new SFVec3f(new float[0,0,0]);
HAnimSite1618.children[2] = Viewpoint1621;

//HAnimSite/Viewpoint visualization shape
let Anchor1622 = browser.currentScene.createNode("Anchor");
Anchor1622.description = "HAnimSite hanim_side_close_view Viewpoint";
Anchor1622.url = new MFString(new java.lang.String["#hanim_side_close_viewpoint"]);
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

HAnimHumanoid15.viewpoints[8] = HAnimSite1618;

let HAnimSite1626 = browser.currentScene.createNode("HAnimSite");
HAnimSite1626.name = "head_front_close_view";
HAnimSite1626.DEF = "hanim_head_front_close_view";
HAnimSite1626.translation = new SFVec3f(new float[0,1.5,1]);
//HAnimSite visualization shape
let TouchSensor1627 = browser.currentScene.createNode("TouchSensor");
TouchSensor1627.description = "HAnimSite head_front_close_view";
HAnimSite1626.children = new MFNode();

HAnimSite1626.children[0] = TouchSensor1627;

let Shape1628 = browser.currentScene.createNode("Shape");
Shape1628.USE = "HAnimSiteShape";
HAnimSite1626.children[1] = Shape1628;

let Viewpoint1629 = browser.currentScene.createNode("Viewpoint");
Viewpoint1629.DEF = "hanim_head_front_close_viewpoint";
Viewpoint1629.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint1629.description = "head front close";
Viewpoint1629.position = new SFVec3f(new float[0,0,0]);
HAnimSite1626.children[2] = Viewpoint1629;

//HAnimSite/Viewpoint visualization shape
let Anchor1630 = browser.currentScene.createNode("Anchor");
Anchor1630.description = "HAnimSite hanim_head_front_close_view Viewpoint";
Anchor1630.url = new MFString(new java.lang.String["#hanim_head_front_close_viewpoint"]);
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

HAnimHumanoid15.viewpoints[9] = HAnimSite1626;

let HAnimSite1634 = browser.currentScene.createNode("HAnimSite");
HAnimSite1634.name = "chest_front_close_view";
HAnimSite1634.DEF = "hanim_chest_front_close_view";
HAnimSite1634.translation = new SFVec3f(new float[0,1.2,1]);
//HAnimSite visualization shape
let TouchSensor1635 = browser.currentScene.createNode("TouchSensor");
TouchSensor1635.description = "HAnimSite chest_front_close_view";
HAnimSite1634.children = new MFNode();

HAnimSite1634.children[0] = TouchSensor1635;

let Shape1636 = browser.currentScene.createNode("Shape");
Shape1636.USE = "HAnimSiteShape";
HAnimSite1634.children[1] = Shape1636;

let Viewpoint1637 = browser.currentScene.createNode("Viewpoint");
Viewpoint1637.DEF = "hanim_chest_front_close_viewpoint";
Viewpoint1637.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint1637.description = "chest front close";
Viewpoint1637.position = new SFVec3f(new float[0,0,0]);
HAnimSite1634.children[2] = Viewpoint1637;

//HAnimSite/Viewpoint visualization shape
let Anchor1638 = browser.currentScene.createNode("Anchor");
Anchor1638.description = "HAnimSite hanim_chest_front_close_view Viewpoint";
Anchor1638.url = new MFString(new java.lang.String["#hanim_chest_front_close_viewpoint"]);
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

HAnimHumanoid15.viewpoints[10] = HAnimSite1634;

let HAnimSite1642 = browser.currentScene.createNode("HAnimSite");
HAnimSite1642.name = "pelvis_front_close_view";
HAnimSite1642.DEF = "hanim_pelvis_front_close_view";
HAnimSite1642.translation = new SFVec3f(new float[0,0.8,1]);
//HAnimSite visualization shape
let TouchSensor1643 = browser.currentScene.createNode("TouchSensor");
TouchSensor1643.description = "HAnimSite pelvis_front_close_view";
HAnimSite1642.children = new MFNode();

HAnimSite1642.children[0] = TouchSensor1643;

let Shape1644 = browser.currentScene.createNode("Shape");
Shape1644.USE = "HAnimSiteShape";
HAnimSite1642.children[1] = Shape1644;

let Viewpoint1645 = browser.currentScene.createNode("Viewpoint");
Viewpoint1645.DEF = "hanim_pelvis_front_close_viewpoint";
Viewpoint1645.centerOfRotation = new SFVec3f(new float[0,0,1]);
Viewpoint1645.description = "pelvis front close";
Viewpoint1645.position = new SFVec3f(new float[0,0,0]);
HAnimSite1642.children[2] = Viewpoint1645;

//HAnimSite/Viewpoint visualization shape
let Anchor1646 = browser.currentScene.createNode("Anchor");
Anchor1646.description = "HAnimSite hanim_pelvis_front_close_view Viewpoint";
Anchor1646.url = new MFString(new java.lang.String["#hanim_pelvis_front_close_viewpoint"]);
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

HAnimHumanoid15.viewpoints[11] = HAnimSite1642;

let HAnimSite1650 = browser.currentScene.createNode("HAnimSite");
HAnimSite1650.name = "knees_front_close_view";
HAnimSite1650.DEF = "hanim_knees_front_close_view";
HAnimSite1650.translation = new SFVec3f(new float[0,0.4,1]);
//HAnimSite visualization shape
let TouchSensor1651 = browser.currentScene.createNode("TouchSensor");
TouchSensor1651.description = "HAnimSite knees_front_close_view";
HAnimSite1650.children = new MFNode();

HAnimSite1650.children[0] = TouchSensor1651;

let Shape1652 = browser.currentScene.createNode("Shape");
Shape1652.USE = "HAnimSiteShape";
HAnimSite1650.children[1] = Shape1652;

let Viewpoint1653 = browser.currentScene.createNode("Viewpoint");
Viewpoint1653.DEF = "hanim_knees_front_close_viewpoint";
Viewpoint1653.centerOfRotation = new SFVec3f(new float[0,0.4,0]);
Viewpoint1653.description = "knees front close";
Viewpoint1653.position = new SFVec3f(new float[0,0,0]);
HAnimSite1650.children[2] = Viewpoint1653;

//HAnimSite/Viewpoint visualization shape
let Anchor1654 = browser.currentScene.createNode("Anchor");
Anchor1654.description = "HAnimSite hanim_knees_front_close_view Viewpoint";
Anchor1654.url = new MFString(new java.lang.String["#hanim_knees_front_close_viewpoint"]);
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

HAnimHumanoid15.viewpoints[12] = HAnimSite1650;

let HAnimSite1658 = browser.currentScene.createNode("HAnimSite");
HAnimSite1658.name = "feet_front_close_view";
HAnimSite1658.DEF = "hanim_feet_front_close_view";
HAnimSite1658.translation = new SFVec3f(new float[0,0,1]);
//HAnimSite visualization shape
let TouchSensor1659 = browser.currentScene.createNode("TouchSensor");
TouchSensor1659.description = "HAnimSite feet_front_close_view";
HAnimSite1658.children = new MFNode();

HAnimSite1658.children[0] = TouchSensor1659;

let Shape1660 = browser.currentScene.createNode("Shape");
Shape1660.USE = "HAnimSiteShape";
HAnimSite1658.children[1] = Shape1660;

let Viewpoint1661 = browser.currentScene.createNode("Viewpoint");
Viewpoint1661.DEF = "hanim_feet_front_close_viewpoint";
Viewpoint1661.description = "feet front close";
Viewpoint1661.position = new SFVec3f(new float[0,0,0]);
HAnimSite1658.children[2] = Viewpoint1661;

//HAnimSite/Viewpoint visualization shape
let Anchor1662 = browser.currentScene.createNode("Anchor");
Anchor1662.description = "HAnimSite hanim_feet_front_close_view Viewpoint";
Anchor1662.url = new MFString(new java.lang.String["#hanim_feet_front_close_viewpoint"]);
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

HAnimHumanoid15.viewpoints[13] = HAnimSite1658;

let HAnimSite1666 = browser.currentScene.createNode("HAnimSite");
HAnimSite1666.name = "eye_level_view";
HAnimSite1666.DEF = "hanim_eye_level_view";
HAnimSite1666.translation = new SFVec3f(new float[0,1.6332,0.0502]);
//HAnimSite visualization shape
let TouchSensor1667 = browser.currentScene.createNode("TouchSensor");
TouchSensor1667.description = "HAnimSite eye_level_view";
HAnimSite1666.children = new MFNode();

HAnimSite1666.children[0] = TouchSensor1667;

let Shape1668 = browser.currentScene.createNode("Shape");
Shape1668.USE = "HAnimSiteShape";
HAnimSite1666.children[1] = Shape1668;

let Viewpoint1669 = browser.currentScene.createNode("Viewpoint");
Viewpoint1669.DEF = "hanim_eye_level_viewpoint";
Viewpoint1669.description = "eye level looking forward";
Viewpoint1669.orientation = new SFRotation(new float[0,1,0,3.141593]);
Viewpoint1669.position = new SFVec3f(new float[0,0,0]);
HAnimSite1666.children[2] = Viewpoint1669;

//HAnimSite/Viewpoint visualization shape
let Anchor1670 = browser.currentScene.createNode("Anchor");
Anchor1670.description = "HAnimSite hanim_eye_level_view Viewpoint";
Anchor1670.url = new MFString(new java.lang.String["#hanim_eye_level_viewpoint"]);
let LOD1671 = browser.currentScene.createNode("LOD");
LOD1671.forceTransitions = True;
LOD1671.range = new MFFloat(new float[0.04]);
let WorldInfo1672 = browser.currentScene.createNode("WorldInfo");
WorldInfo1672.info = new MFString(new java.lang.String["hide diamond when close"]);
LOD1671.children = new MFNode();

LOD1671.children[0] = WorldInfo1672;

let Shape1673 = browser.currentScene.createNode("Shape");
Shape1673.USE = "HAnimSiteViewpointShape";
LOD1671.children[1] = Shape1673;

Anchor1670.children = new MFNode();

Anchor1670.children[0] = LOD1671;

HAnimSite1666.children[3] = Anchor1670;

HAnimHumanoid15.viewpoints[14] = HAnimSite1666;

let HAnimSite1674 = browser.currentScene.createNode("HAnimSite");
HAnimSite1674.USE = "hanim_l_eyeball_site_view";
HAnimHumanoid15.viewpoints[15] = HAnimSite1674;

let HAnimSite1675 = browser.currentScene.createNode("HAnimSite");
HAnimSite1675.USE = "hanim_r_eyeball_site_view";
HAnimHumanoid15.viewpoints[16] = HAnimSite1675;

let HAnimSite1676 = browser.currentScene.createNode("HAnimSite");
HAnimSite1676.USE = "hanim_l_hand_front_view";
HAnimHumanoid15.viewpoints[17] = HAnimSite1676;

let HAnimSite1677 = browser.currentScene.createNode("HAnimSite");
HAnimSite1677.USE = "hanim_r_hand_front_view";
HAnimHumanoid15.viewpoints[18] = HAnimSite1677;

let HAnimJoint1678 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1678.USE = "hanim_humanoid_root";
HAnimHumanoid15.joints[19] = HAnimJoint1678;

let HAnimJoint1679 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1679.USE = "hanim_sacroiliac";
HAnimHumanoid15.joints[20] = HAnimJoint1679;

let HAnimJoint1680 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1680.USE = "hanim_vl5";
HAnimHumanoid15.joints[21] = HAnimJoint1680;

let HAnimJoint1681 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1681.USE = "hanim_vl4";
HAnimHumanoid15.joints[22] = HAnimJoint1681;

let HAnimJoint1682 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1682.USE = "hanim_vl3";
HAnimHumanoid15.joints[23] = HAnimJoint1682;

let HAnimJoint1683 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1683.USE = "hanim_vl2";
HAnimHumanoid15.joints[24] = HAnimJoint1683;

let HAnimJoint1684 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1684.USE = "hanim_vl1";
HAnimHumanoid15.joints[25] = HAnimJoint1684;

let HAnimJoint1685 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1685.USE = "hanim_vt12";
HAnimHumanoid15.joints[26] = HAnimJoint1685;

let HAnimJoint1686 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1686.USE = "hanim_vt11";
HAnimHumanoid15.joints[27] = HAnimJoint1686;

let HAnimJoint1687 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1687.USE = "hanim_vt10";
HAnimHumanoid15.joints[28] = HAnimJoint1687;

let HAnimJoint1688 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1688.USE = "hanim_vt9";
HAnimHumanoid15.joints[29] = HAnimJoint1688;

let HAnimJoint1689 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1689.USE = "hanim_vt8";
HAnimHumanoid15.joints[30] = HAnimJoint1689;

let HAnimJoint1690 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1690.USE = "hanim_vt7";
HAnimHumanoid15.joints[31] = HAnimJoint1690;

let HAnimJoint1691 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1691.USE = "hanim_vt6";
HAnimHumanoid15.joints[32] = HAnimJoint1691;

let HAnimJoint1692 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1692.USE = "hanim_vt5";
HAnimHumanoid15.joints[33] = HAnimJoint1692;

let HAnimJoint1693 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1693.USE = "hanim_vt4";
HAnimHumanoid15.joints[34] = HAnimJoint1693;

let HAnimJoint1694 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1694.USE = "hanim_vt3";
HAnimHumanoid15.joints[35] = HAnimJoint1694;

let HAnimJoint1695 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1695.USE = "hanim_vt2";
HAnimHumanoid15.joints[36] = HAnimJoint1695;

let HAnimJoint1696 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1696.USE = "hanim_vt1";
HAnimHumanoid15.joints[37] = HAnimJoint1696;

let HAnimJoint1697 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1697.USE = "hanim_vc7";
HAnimHumanoid15.joints[38] = HAnimJoint1697;

let HAnimJoint1698 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1698.USE = "hanim_vc6";
HAnimHumanoid15.joints[39] = HAnimJoint1698;

let HAnimJoint1699 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1699.USE = "hanim_vc5";
HAnimHumanoid15.joints[40] = HAnimJoint1699;

let HAnimJoint1700 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1700.USE = "hanim_vc4";
HAnimHumanoid15.joints[41] = HAnimJoint1700;

let HAnimJoint1701 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1701.USE = "hanim_vc3";
HAnimHumanoid15.joints[42] = HAnimJoint1701;

let HAnimJoint1702 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1702.USE = "hanim_vc2";
HAnimHumanoid15.joints[43] = HAnimJoint1702;

let HAnimJoint1703 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1703.USE = "hanim_vc1";
HAnimHumanoid15.joints[44] = HAnimJoint1703;

let HAnimJoint1704 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1704.USE = "hanim_skullbase";
HAnimHumanoid15.joints[45] = HAnimJoint1704;

let HAnimJoint1705 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1705.USE = "hanim_temporomandibular";
HAnimHumanoid15.joints[46] = HAnimJoint1705;

let HAnimJoint1706 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1706.USE = "hanim_l_acromioclavicular";
HAnimHumanoid15.joints[47] = HAnimJoint1706;

let HAnimJoint1707 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1707.USE = "hanim_r_acromioclavicular";
HAnimHumanoid15.joints[48] = HAnimJoint1707;

let HAnimJoint1708 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1708.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid15.joints[49] = HAnimJoint1708;

let HAnimJoint1709 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1709.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid15.joints[50] = HAnimJoint1709;

let HAnimJoint1710 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1710.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid15.joints[51] = HAnimJoint1710;

let HAnimJoint1711 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1711.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid15.joints[52] = HAnimJoint1711;

let HAnimJoint1712 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1712.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid15.joints[53] = HAnimJoint1712;

let HAnimJoint1713 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1713.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid15.joints[54] = HAnimJoint1713;

let HAnimJoint1714 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1714.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid15.joints[55] = HAnimJoint1714;

let HAnimJoint1715 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1715.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid15.joints[56] = HAnimJoint1715;

let HAnimJoint1716 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1716.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid15.joints[57] = HAnimJoint1716;

let HAnimJoint1717 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1717.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid15.joints[58] = HAnimJoint1717;

let HAnimJoint1718 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1718.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid15.joints[59] = HAnimJoint1718;

let HAnimJoint1719 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1719.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid15.joints[60] = HAnimJoint1719;

let HAnimJoint1720 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1720.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid15.joints[61] = HAnimJoint1720;

let HAnimJoint1721 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1721.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid15.joints[62] = HAnimJoint1721;

let HAnimJoint1722 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1722.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid15.joints[63] = HAnimJoint1722;

let HAnimJoint1723 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1723.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid15.joints[64] = HAnimJoint1723;

let HAnimJoint1724 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1724.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid15.joints[65] = HAnimJoint1724;

let HAnimJoint1725 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1725.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid15.joints[66] = HAnimJoint1725;

let HAnimJoint1726 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1726.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid15.joints[67] = HAnimJoint1726;

let HAnimJoint1727 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1727.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid15.joints[68] = HAnimJoint1727;

let HAnimJoint1728 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1728.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid15.joints[69] = HAnimJoint1728;

let HAnimJoint1729 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1729.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid15.joints[70] = HAnimJoint1729;

let HAnimJoint1730 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1730.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid15.joints[71] = HAnimJoint1730;

let HAnimJoint1731 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1731.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid15.joints[72] = HAnimJoint1731;

let HAnimJoint1732 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1732.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid15.joints[73] = HAnimJoint1732;

let HAnimJoint1733 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1733.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid15.joints[74] = HAnimJoint1733;

let HAnimJoint1734 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1734.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid15.joints[75] = HAnimJoint1734;

let HAnimJoint1735 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1735.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid15.joints[76] = HAnimJoint1735;

let HAnimJoint1736 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1736.USE = "hanim_l_elbow";
HAnimHumanoid15.joints[77] = HAnimJoint1736;

let HAnimJoint1737 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1737.USE = "hanim_r_elbow";
HAnimHumanoid15.joints[78] = HAnimJoint1737;

let HAnimJoint1738 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1738.USE = "hanim_l_eyeball_joint";
HAnimHumanoid15.joints[79] = HAnimJoint1738;

let HAnimJoint1739 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1739.USE = "hanim_r_eyeball_joint";
HAnimHumanoid15.joints[80] = HAnimJoint1739;

let HAnimJoint1740 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1740.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid15.joints[81] = HAnimJoint1740;

let HAnimJoint1741 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1741.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid15.joints[82] = HAnimJoint1741;

let HAnimJoint1742 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1742.USE = "hanim_l_eyelid_joint";
HAnimHumanoid15.joints[83] = HAnimJoint1742;

let HAnimJoint1743 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1743.USE = "hanim_r_eyelid_joint";
HAnimHumanoid15.joints[84] = HAnimJoint1743;

let HAnimJoint1744 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1744.USE = "hanim_l_hip";
HAnimHumanoid15.joints[85] = HAnimJoint1744;

let HAnimJoint1745 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1745.USE = "hanim_r_hip";
HAnimHumanoid15.joints[86] = HAnimJoint1745;

let HAnimJoint1746 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1746.USE = "hanim_l_knee";
HAnimHumanoid15.joints[87] = HAnimJoint1746;

let HAnimJoint1747 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1747.USE = "hanim_r_knee";
HAnimHumanoid15.joints[88] = HAnimJoint1747;

let HAnimJoint1748 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1748.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid15.joints[89] = HAnimJoint1748;

let HAnimJoint1749 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1749.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid15.joints[90] = HAnimJoint1749;

let HAnimJoint1750 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1750.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid15.joints[91] = HAnimJoint1750;

let HAnimJoint1751 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1751.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid15.joints[92] = HAnimJoint1751;

let HAnimJoint1752 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1752.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid15.joints[93] = HAnimJoint1752;

let HAnimJoint1753 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1753.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid15.joints[94] = HAnimJoint1753;

let HAnimJoint1754 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1754.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid15.joints[95] = HAnimJoint1754;

let HAnimJoint1755 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1755.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid15.joints[96] = HAnimJoint1755;

let HAnimJoint1756 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1756.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid15.joints[97] = HAnimJoint1756;

let HAnimJoint1757 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1757.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid15.joints[98] = HAnimJoint1757;

let HAnimJoint1758 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1758.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid15.joints[99] = HAnimJoint1758;

let HAnimJoint1759 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1759.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid15.joints[100] = HAnimJoint1759;

let HAnimJoint1760 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1760.USE = "hanim_l_radiocarpal";
HAnimHumanoid15.joints[101] = HAnimJoint1760;

let HAnimJoint1761 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1761.USE = "hanim_r_radiocarpal";
HAnimHumanoid15.joints[102] = HAnimJoint1761;

let HAnimJoint1762 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1762.USE = "hanim_l_shoulder";
HAnimHumanoid15.joints[103] = HAnimJoint1762;

let HAnimJoint1763 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1763.USE = "hanim_r_shoulder";
HAnimHumanoid15.joints[104] = HAnimJoint1763;

let HAnimJoint1764 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1764.USE = "hanim_l_sternoclavicular";
HAnimHumanoid15.joints[105] = HAnimJoint1764;

let HAnimJoint1765 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1765.USE = "hanim_r_sternoclavicular";
HAnimHumanoid15.joints[106] = HAnimJoint1765;

let HAnimJoint1766 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1766.USE = "hanim_l_talocrural";
HAnimHumanoid15.joints[107] = HAnimJoint1766;

let HAnimJoint1767 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1767.USE = "hanim_r_talocrural";
HAnimHumanoid15.joints[108] = HAnimJoint1767;

let HAnimJoint1768 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1768.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid15.joints[109] = HAnimJoint1768;

let HAnimJoint1769 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1769.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid15.joints[110] = HAnimJoint1769;

let HAnimJoint1770 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1770.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid15.joints[111] = HAnimJoint1770;

let HAnimJoint1771 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1771.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid15.joints[112] = HAnimJoint1771;

let HAnimSegment1772 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1772.USE = "hanim_pelvis";
HAnimHumanoid15.segments[113] = HAnimSegment1772;

let HAnimSegment1773 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1773.USE = "hanim_skull";
HAnimHumanoid15.segments[114] = HAnimSegment1773;

let HAnimSegment1774 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1774.USE = "hanim_jaw";
HAnimHumanoid15.segments[115] = HAnimSegment1774;

let HAnimSegment1775 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1775.USE = "hanim_c1";
HAnimHumanoid15.segments[116] = HAnimSegment1775;

let HAnimSegment1776 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1776.USE = "hanim_c2";
HAnimHumanoid15.segments[117] = HAnimSegment1776;

let HAnimSegment1777 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1777.USE = "hanim_c3";
HAnimHumanoid15.segments[118] = HAnimSegment1777;

let HAnimSegment1778 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1778.USE = "hanim_c4";
HAnimHumanoid15.segments[119] = HAnimSegment1778;

let HAnimSegment1779 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1779.USE = "hanim_c5";
HAnimHumanoid15.segments[120] = HAnimSegment1779;

let HAnimSegment1780 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1780.USE = "hanim_c6";
HAnimHumanoid15.segments[121] = HAnimSegment1780;

let HAnimSegment1781 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1781.USE = "hanim_c7";
HAnimHumanoid15.segments[122] = HAnimSegment1781;

let HAnimSegment1782 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1782.USE = "hanim_t1";
HAnimHumanoid15.segments[123] = HAnimSegment1782;

let HAnimSegment1783 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1783.USE = "hanim_t2";
HAnimHumanoid15.segments[124] = HAnimSegment1783;

let HAnimSegment1784 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1784.USE = "hanim_t3";
HAnimHumanoid15.segments[125] = HAnimSegment1784;

let HAnimSegment1785 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1785.USE = "hanim_t4";
HAnimHumanoid15.segments[126] = HAnimSegment1785;

let HAnimSegment1786 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1786.USE = "hanim_t5";
HAnimHumanoid15.segments[127] = HAnimSegment1786;

let HAnimSegment1787 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1787.USE = "hanim_t6";
HAnimHumanoid15.segments[128] = HAnimSegment1787;

let HAnimSegment1788 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1788.USE = "hanim_t7";
HAnimHumanoid15.segments[129] = HAnimSegment1788;

let HAnimSegment1789 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1789.USE = "hanim_t8";
HAnimHumanoid15.segments[130] = HAnimSegment1789;

let HAnimSegment1790 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1790.USE = "hanim_t9";
HAnimHumanoid15.segments[131] = HAnimSegment1790;

let HAnimSegment1791 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1791.USE = "hanim_t10";
HAnimHumanoid15.segments[132] = HAnimSegment1791;

let HAnimSegment1792 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1792.USE = "hanim_t11";
HAnimHumanoid15.segments[133] = HAnimSegment1792;

let HAnimSegment1793 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1793.USE = "hanim_t12";
HAnimHumanoid15.segments[134] = HAnimSegment1793;

let HAnimSegment1794 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1794.USE = "hanim_l1";
HAnimHumanoid15.segments[135] = HAnimSegment1794;

let HAnimSegment1795 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1795.USE = "hanim_l2";
HAnimHumanoid15.segments[136] = HAnimSegment1795;

let HAnimSegment1796 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1796.USE = "hanim_l3";
HAnimHumanoid15.segments[137] = HAnimSegment1796;

let HAnimSegment1797 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1797.USE = "hanim_l4";
HAnimHumanoid15.segments[138] = HAnimSegment1797;

let HAnimSegment1798 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1798.USE = "hanim_l5";
HAnimHumanoid15.segments[139] = HAnimSegment1798;

let HAnimSegment1799 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1799.USE = "hanim_sacrum";
HAnimHumanoid15.segments[140] = HAnimSegment1799;

let HAnimSegment1800 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1800.USE = "hanim_l_calf";
HAnimHumanoid15.segments[141] = HAnimSegment1800;

let HAnimSegment1801 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1801.USE = "hanim_r_calf";
HAnimHumanoid15.segments[142] = HAnimSegment1801;

let HAnimSegment1802 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1802.USE = "hanim_l_carpal";
HAnimHumanoid15.segments[143] = HAnimSegment1802;

let HAnimSegment1803 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1803.USE = "hanim_r_carpal";
HAnimHumanoid15.segments[144] = HAnimSegment1803;

let HAnimSegment1804 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1804.USE = "hanim_l_carpal_distal_phalanx_1";
HAnimHumanoid15.segments[145] = HAnimSegment1804;

let HAnimSegment1805 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1805.USE = "hanim_r_carpal_distal_phalanx_1";
HAnimHumanoid15.segments[146] = HAnimSegment1805;

let HAnimSegment1806 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1806.USE = "hanim_l_carpal_distal_phalanx_2";
HAnimHumanoid15.segments[147] = HAnimSegment1806;

let HAnimSegment1807 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1807.USE = "hanim_r_carpal_distal_phalanx_2";
HAnimHumanoid15.segments[148] = HAnimSegment1807;

let HAnimSegment1808 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1808.USE = "hanim_l_carpal_distal_phalanx_3";
HAnimHumanoid15.segments[149] = HAnimSegment1808;

let HAnimSegment1809 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1809.USE = "hanim_r_carpal_distal_phalanx_3";
HAnimHumanoid15.segments[150] = HAnimSegment1809;

let HAnimSegment1810 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1810.USE = "hanim_l_carpal_distal_phalanx_4";
HAnimHumanoid15.segments[151] = HAnimSegment1810;

let HAnimSegment1811 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1811.USE = "hanim_r_carpal_distal_phalanx_4";
HAnimHumanoid15.segments[152] = HAnimSegment1811;

let HAnimSegment1812 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1812.USE = "hanim_l_carpal_distal_phalanx_5";
HAnimHumanoid15.segments[153] = HAnimSegment1812;

let HAnimSegment1813 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1813.USE = "hanim_r_carpal_distal_phalanx_5";
HAnimHumanoid15.segments[154] = HAnimSegment1813;

let HAnimSegment1814 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1814.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid15.segments[155] = HAnimSegment1814;

let HAnimSegment1815 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1815.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid15.segments[156] = HAnimSegment1815;

let HAnimSegment1816 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1816.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid15.segments[157] = HAnimSegment1816;

let HAnimSegment1817 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1817.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid15.segments[158] = HAnimSegment1817;

let HAnimSegment1818 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1818.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid15.segments[159] = HAnimSegment1818;

let HAnimSegment1819 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1819.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid15.segments[160] = HAnimSegment1819;

let HAnimSegment1820 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1820.USE = "hanim_l_carpal_middle_phalanx_5";
HAnimHumanoid15.segments[161] = HAnimSegment1820;

let HAnimSegment1821 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1821.USE = "hanim_r_carpal_middle_phalanx_5";
HAnimHumanoid15.segments[162] = HAnimSegment1821;

let HAnimSegment1822 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1822.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid15.segments[163] = HAnimSegment1822;

let HAnimSegment1823 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1823.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid15.segments[164] = HAnimSegment1823;

let HAnimSegment1824 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1824.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid15.segments[165] = HAnimSegment1824;

let HAnimSegment1825 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1825.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid15.segments[166] = HAnimSegment1825;

let HAnimSegment1826 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1826.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid15.segments[167] = HAnimSegment1826;

let HAnimSegment1827 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1827.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid15.segments[168] = HAnimSegment1827;

let HAnimSegment1828 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1828.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid15.segments[169] = HAnimSegment1828;

let HAnimSegment1829 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1829.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid15.segments[170] = HAnimSegment1829;

let HAnimSegment1830 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1830.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid15.segments[171] = HAnimSegment1830;

let HAnimSegment1831 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1831.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid15.segments[172] = HAnimSegment1831;

let HAnimSegment1832 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1832.USE = "hanim_l_clavicle";
HAnimHumanoid15.segments[173] = HAnimSegment1832;

let HAnimSegment1833 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1833.USE = "hanim_r_clavicle";
HAnimHumanoid15.segments[174] = HAnimSegment1833;

let HAnimSegment1834 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1834.USE = "hanim_l_eyeball";
HAnimHumanoid15.segments[175] = HAnimSegment1834;

let HAnimSegment1835 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1835.USE = "hanim_r_eyeball";
HAnimHumanoid15.segments[176] = HAnimSegment1835;

let HAnimSegment1836 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1836.USE = "hanim_l_eyebrow";
HAnimHumanoid15.segments[177] = HAnimSegment1836;

let HAnimSegment1837 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1837.USE = "hanim_r_eyebrow";
HAnimHumanoid15.segments[178] = HAnimSegment1837;

let HAnimSegment1838 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1838.USE = "hanim_l_eyelid";
HAnimHumanoid15.segments[179] = HAnimSegment1838;

let HAnimSegment1839 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1839.USE = "hanim_r_eyelid";
HAnimHumanoid15.segments[180] = HAnimSegment1839;

let HAnimSegment1840 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1840.USE = "hanim_l_forearm";
HAnimHumanoid15.segments[181] = HAnimSegment1840;

let HAnimSegment1841 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1841.USE = "hanim_r_forearm";
HAnimHumanoid15.segments[182] = HAnimSegment1841;

let HAnimSegment1842 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1842.USE = "hanim_l_metacarpal_1";
HAnimHumanoid15.segments[183] = HAnimSegment1842;

let HAnimSegment1843 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1843.USE = "hanim_r_metacarpal_1";
HAnimHumanoid15.segments[184] = HAnimSegment1843;

let HAnimSegment1844 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1844.USE = "hanim_l_metacarpal_2";
HAnimHumanoid15.segments[185] = HAnimSegment1844;

let HAnimSegment1845 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1845.USE = "hanim_r_metacarpal_2";
HAnimHumanoid15.segments[186] = HAnimSegment1845;

let HAnimSegment1846 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1846.USE = "hanim_l_metacarpal_3";
HAnimHumanoid15.segments[187] = HAnimSegment1846;

let HAnimSegment1847 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1847.USE = "hanim_r_metacarpal_3";
HAnimHumanoid15.segments[188] = HAnimSegment1847;

let HAnimSegment1848 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1848.USE = "hanim_l_metacarpal_4";
HAnimHumanoid15.segments[189] = HAnimSegment1848;

let HAnimSegment1849 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1849.USE = "hanim_r_metacarpal_4";
HAnimHumanoid15.segments[190] = HAnimSegment1849;

let HAnimSegment1850 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1850.USE = "hanim_l_metacarpal_5";
HAnimHumanoid15.segments[191] = HAnimSegment1850;

let HAnimSegment1851 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1851.USE = "hanim_r_metacarpal_5";
HAnimHumanoid15.segments[192] = HAnimSegment1851;

let HAnimSegment1852 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1852.USE = "hanim_l_metatarsal_2";
HAnimHumanoid15.segments[193] = HAnimSegment1852;

let HAnimSegment1853 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1853.USE = "hanim_r_metatarsal_2";
HAnimHumanoid15.segments[194] = HAnimSegment1853;

let HAnimSegment1854 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1854.USE = "hanim_l_scapula";
HAnimHumanoid15.segments[195] = HAnimSegment1854;

let HAnimSegment1855 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1855.USE = "hanim_r_scapula";
HAnimHumanoid15.segments[196] = HAnimSegment1855;

let HAnimSegment1856 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1856.USE = "hanim_l_talus";
HAnimHumanoid15.segments[197] = HAnimSegment1856;

let HAnimSegment1857 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1857.USE = "hanim_r_talus";
HAnimHumanoid15.segments[198] = HAnimSegment1857;

let HAnimSegment1858 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1858.USE = "hanim_l_tarsal_distal_phalanx_2";
HAnimHumanoid15.segments[199] = HAnimSegment1858;

let HAnimSegment1859 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1859.USE = "hanim_r_tarsal_distal_phalanx_2";
HAnimHumanoid15.segments[200] = HAnimSegment1859;

let HAnimSegment1860 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1860.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid15.segments[201] = HAnimSegment1860;

let HAnimSegment1861 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1861.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid15.segments[202] = HAnimSegment1861;

let HAnimSegment1862 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1862.USE = "hanim_l_thigh";
HAnimHumanoid15.segments[203] = HAnimSegment1862;

let HAnimSegment1863 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1863.USE = "hanim_r_thigh";
HAnimHumanoid15.segments[204] = HAnimSegment1863;

let HAnimSegment1864 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1864.USE = "hanim_l_upperarm";
HAnimHumanoid15.segments[205] = HAnimSegment1864;

let HAnimSegment1865 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1865.USE = "hanim_r_upperarm";
HAnimHumanoid15.segments[206] = HAnimSegment1865;

let HAnimSite1866 = browser.currentScene.createNode("HAnimSite");
HAnimSite1866.USE = "hanim_crotch_pt";
HAnimHumanoid15.viewpoints[207] = HAnimSite1866;

let HAnimSite1867 = browser.currentScene.createNode("HAnimSite");
HAnimSite1867.USE = "hanim_skull_vertex_pt";
HAnimHumanoid15.viewpoints[208] = HAnimSite1867;

let HAnimSite1868 = browser.currentScene.createNode("HAnimSite");
HAnimSite1868.USE = "hanim_sellion_pt";
HAnimHumanoid15.viewpoints[209] = HAnimSite1868;

let HAnimSite1869 = browser.currentScene.createNode("HAnimSite");
HAnimSite1869.USE = "hanim_supramenton_pt";
HAnimHumanoid15.viewpoints[210] = HAnimSite1869;

let HAnimSite1870 = browser.currentScene.createNode("HAnimSite");
HAnimSite1870.USE = "hanim_nuchale_pt";
HAnimHumanoid15.viewpoints[211] = HAnimSite1870;

let HAnimSite1871 = browser.currentScene.createNode("HAnimSite");
HAnimSite1871.USE = "hanim_suprasternale_pt";
HAnimHumanoid15.viewpoints[212] = HAnimSite1871;

let HAnimSite1872 = browser.currentScene.createNode("HAnimSite");
HAnimSite1872.USE = "hanim_cervicale_pt";
HAnimHumanoid15.viewpoints[213] = HAnimSite1872;

let HAnimSite1873 = browser.currentScene.createNode("HAnimSite");
HAnimSite1873.USE = "hanim_substernale_pt";
HAnimHumanoid15.viewpoints[214] = HAnimSite1873;

let HAnimSite1874 = browser.currentScene.createNode("HAnimSite");
HAnimSite1874.USE = "hanim_rib10_midspine_pt";
HAnimHumanoid15.viewpoints[215] = HAnimSite1874;

let HAnimSite1875 = browser.currentScene.createNode("HAnimSite");
HAnimSite1875.USE = "hanim_waist_preferred_posterior_pt";
HAnimHumanoid15.viewpoints[216] = HAnimSite1875;

let HAnimSite1876 = browser.currentScene.createNode("HAnimSite");
HAnimSite1876.USE = "hanim_navel_pt";
HAnimHumanoid15.viewpoints[217] = HAnimSite1876;

let HAnimSite1877 = browser.currentScene.createNode("HAnimSite");
HAnimSite1877.USE = "hanim_l_acromion_pt";
HAnimHumanoid15.viewpoints[218] = HAnimSite1877;

let HAnimSite1878 = browser.currentScene.createNode("HAnimSite");
HAnimSite1878.USE = "hanim_r_acromion_pt";
HAnimHumanoid15.viewpoints[219] = HAnimSite1878;

let HAnimSite1879 = browser.currentScene.createNode("HAnimSite");
HAnimSite1879.USE = "hanim_r_asis_pt";
HAnimHumanoid15.viewpoints[220] = HAnimSite1879;

let HAnimSite1880 = browser.currentScene.createNode("HAnimSite");
HAnimSite1880.USE = "hanim_l_asis_pt";
HAnimHumanoid15.viewpoints[221] = HAnimSite1880;

let HAnimSite1881 = browser.currentScene.createNode("HAnimSite");
HAnimSite1881.USE = "hanim_l_axilla_distal_pt";
HAnimHumanoid15.viewpoints[222] = HAnimSite1881;

let HAnimSite1882 = browser.currentScene.createNode("HAnimSite");
HAnimSite1882.USE = "hanim_r_axilla_distal_pt";
HAnimHumanoid15.viewpoints[223] = HAnimSite1882;

let HAnimSite1883 = browser.currentScene.createNode("HAnimSite");
HAnimSite1883.USE = "hanim_l_axilla_proximal_pt";
HAnimHumanoid15.viewpoints[224] = HAnimSite1883;

let HAnimSite1884 = browser.currentScene.createNode("HAnimSite");
HAnimSite1884.USE = "hanim_r_axilla_proximal_pt";
HAnimHumanoid15.viewpoints[225] = HAnimSite1884;

let HAnimSite1885 = browser.currentScene.createNode("HAnimSite");
HAnimSite1885.USE = "hanim_l_calcaneus_posterior_pt";
HAnimHumanoid15.viewpoints[226] = HAnimSite1885;

let HAnimSite1886 = browser.currentScene.createNode("HAnimSite");
HAnimSite1886.USE = "hanim_r_calcaneus_posterior_pt";
HAnimHumanoid15.viewpoints[227] = HAnimSite1886;

let HAnimSite1887 = browser.currentScene.createNode("HAnimSite");
HAnimSite1887.USE = "hanim_l_carpal_distal_phalanx_1_pt";
HAnimHumanoid15.viewpoints[228] = HAnimSite1887;

let HAnimSite1888 = browser.currentScene.createNode("HAnimSite");
HAnimSite1888.USE = "hanim_r_carpal_distal_phalanx_1_pt";
HAnimHumanoid15.viewpoints[229] = HAnimSite1888;

let HAnimSite1889 = browser.currentScene.createNode("HAnimSite");
HAnimSite1889.USE = "hanim_l_carpal_distal_phalanx_2_pt";
HAnimHumanoid15.viewpoints[230] = HAnimSite1889;

let HAnimSite1890 = browser.currentScene.createNode("HAnimSite");
HAnimSite1890.USE = "hanim_r_carpal_distal_phalanx_2_pt";
HAnimHumanoid15.viewpoints[231] = HAnimSite1890;

let HAnimSite1891 = browser.currentScene.createNode("HAnimSite");
HAnimSite1891.USE = "hanim_l_carpal_distal_phalanx_3_pt";
HAnimHumanoid15.viewpoints[232] = HAnimSite1891;

let HAnimSite1892 = browser.currentScene.createNode("HAnimSite");
HAnimSite1892.USE = "hanim_r_carpal_distal_phalanx_3_pt";
HAnimHumanoid15.viewpoints[233] = HAnimSite1892;

let HAnimSite1893 = browser.currentScene.createNode("HAnimSite");
HAnimSite1893.USE = "hanim_l_carpal_distal_phalanx_4_pt";
HAnimHumanoid15.viewpoints[234] = HAnimSite1893;

let HAnimSite1894 = browser.currentScene.createNode("HAnimSite");
HAnimSite1894.USE = "hanim_r_carpal_distal_phalanx_4_pt";
HAnimHumanoid15.viewpoints[235] = HAnimSite1894;

let HAnimSite1895 = browser.currentScene.createNode("HAnimSite");
HAnimSite1895.USE = "hanim_l_carpal_distal_phalanx_5_pt";
HAnimHumanoid15.viewpoints[236] = HAnimSite1895;

let HAnimSite1896 = browser.currentScene.createNode("HAnimSite");
HAnimSite1896.USE = "hanim_r_carpal_distal_phalanx_5_pt";
HAnimHumanoid15.viewpoints[237] = HAnimSite1896;

let HAnimSite1897 = browser.currentScene.createNode("HAnimSite");
HAnimSite1897.USE = "hanim_l_clavicle_pt";
HAnimHumanoid15.viewpoints[238] = HAnimSite1897;

let HAnimSite1898 = browser.currentScene.createNode("HAnimSite");
HAnimSite1898.USE = "hanim_r_clavicle_pt";
HAnimHumanoid15.viewpoints[239] = HAnimSite1898;

let HAnimSite1899 = browser.currentScene.createNode("HAnimSite");
HAnimSite1899.USE = "hanim_l_dactylion_pt";
HAnimHumanoid15.viewpoints[240] = HAnimSite1899;

let HAnimSite1900 = browser.currentScene.createNode("HAnimSite");
HAnimSite1900.USE = "hanim_r_dactylion_pt";
HAnimHumanoid15.viewpoints[241] = HAnimSite1900;

let HAnimSite1901 = browser.currentScene.createNode("HAnimSite");
HAnimSite1901.USE = "hanim_l_femoral_lateral_epicondyle_pt";
HAnimHumanoid15.viewpoints[242] = HAnimSite1901;

let HAnimSite1902 = browser.currentScene.createNode("HAnimSite");
HAnimSite1902.USE = "hanim_r_femoral_lateral_epicondyle_pt";
HAnimHumanoid15.viewpoints[243] = HAnimSite1902;

let HAnimSite1903 = browser.currentScene.createNode("HAnimSite");
HAnimSite1903.USE = "hanim_l_femoral_medial_epicondyle_pt";
HAnimHumanoid15.viewpoints[244] = HAnimSite1903;

let HAnimSite1904 = browser.currentScene.createNode("HAnimSite");
HAnimSite1904.USE = "hanim_r_femoral_medial_epicondyle_pt";
HAnimHumanoid15.viewpoints[245] = HAnimSite1904;

let HAnimSite1905 = browser.currentScene.createNode("HAnimSite");
HAnimSite1905.USE = "hanim_l_forefoot_tip_pt";
HAnimHumanoid15.viewpoints[246] = HAnimSite1905;

let HAnimSite1906 = browser.currentScene.createNode("HAnimSite");
HAnimSite1906.USE = "hanim_r_forefoot_tip_pt";
HAnimHumanoid15.viewpoints[247] = HAnimSite1906;

let HAnimSite1907 = browser.currentScene.createNode("HAnimSite");
HAnimSite1907.USE = "hanim_r_gonion_pt";
HAnimHumanoid15.viewpoints[248] = HAnimSite1907;

let HAnimSite1908 = browser.currentScene.createNode("HAnimSite");
HAnimSite1908.USE = "hanim_l_gonion_pt";
HAnimHumanoid15.viewpoints[249] = HAnimSite1908;

let HAnimSite1909 = browser.currentScene.createNode("HAnimSite");
HAnimSite1909.USE = "hanim_l_humeral_lateral_epicondyle_pt";
HAnimHumanoid15.viewpoints[250] = HAnimSite1909;

let HAnimSite1910 = browser.currentScene.createNode("HAnimSite");
HAnimSite1910.USE = "hanim_r_humeral_lateral_epicondyle_pt";
HAnimHumanoid15.viewpoints[251] = HAnimSite1910;

let HAnimSite1911 = browser.currentScene.createNode("HAnimSite");
HAnimSite1911.USE = "hanim_l_humeral_medial_epicondyle_pt";
HAnimHumanoid15.viewpoints[252] = HAnimSite1911;

let HAnimSite1912 = browser.currentScene.createNode("HAnimSite");
HAnimSite1912.USE = "hanim_r_humeral_medial_epicondyle_pt";
HAnimHumanoid15.viewpoints[253] = HAnimSite1912;

let HAnimSite1913 = browser.currentScene.createNode("HAnimSite");
HAnimSite1913.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid15.viewpoints[254] = HAnimSite1913;

let HAnimSite1914 = browser.currentScene.createNode("HAnimSite");
HAnimSite1914.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid15.viewpoints[255] = HAnimSite1914;

let HAnimSite1915 = browser.currentScene.createNode("HAnimSite");
HAnimSite1915.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid15.viewpoints[256] = HAnimSite1915;

let HAnimSite1916 = browser.currentScene.createNode("HAnimSite");
HAnimSite1916.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid15.viewpoints[257] = HAnimSite1916;

let HAnimSite1917 = browser.currentScene.createNode("HAnimSite");
HAnimSite1917.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid15.viewpoints[258] = HAnimSite1917;

let HAnimSite1918 = browser.currentScene.createNode("HAnimSite");
HAnimSite1918.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid15.viewpoints[259] = HAnimSite1918;

let HAnimSite1919 = browser.currentScene.createNode("HAnimSite");
HAnimSite1919.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid15.viewpoints[260] = HAnimSite1919;

let HAnimSite1920 = browser.currentScene.createNode("HAnimSite");
HAnimSite1920.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid15.viewpoints[261] = HAnimSite1920;

let HAnimSite1921 = browser.currentScene.createNode("HAnimSite");
HAnimSite1921.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid15.viewpoints[262] = HAnimSite1921;

let HAnimSite1922 = browser.currentScene.createNode("HAnimSite");
HAnimSite1922.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid15.viewpoints[263] = HAnimSite1922;

let HAnimSite1923 = browser.currentScene.createNode("HAnimSite");
HAnimSite1923.USE = "hanim_l_metacarpal_phalanx_2_pt";
HAnimHumanoid15.viewpoints[264] = HAnimSite1923;

let HAnimSite1924 = browser.currentScene.createNode("HAnimSite");
HAnimSite1924.USE = "hanim_r_metacarpal_phalanx_2_pt";
HAnimHumanoid15.viewpoints[265] = HAnimSite1924;

let HAnimSite1925 = browser.currentScene.createNode("HAnimSite");
HAnimSite1925.USE = "hanim_l_metacarpal_phalanx_5_pt";
HAnimHumanoid15.viewpoints[266] = HAnimSite1925;

let HAnimSite1926 = browser.currentScene.createNode("HAnimSite");
HAnimSite1926.USE = "hanim_r_metacarpal_phalanx_5_pt";
HAnimHumanoid15.viewpoints[267] = HAnimSite1926;

let HAnimSite1927 = browser.currentScene.createNode("HAnimSite");
HAnimSite1927.USE = "hanim_l_metatarsal_phalanx_1_pt";
HAnimHumanoid15.viewpoints[268] = HAnimSite1927;

let HAnimSite1928 = browser.currentScene.createNode("HAnimSite");
HAnimSite1928.USE = "hanim_r_metatarsal_phalanx_1_pt";
HAnimHumanoid15.viewpoints[269] = HAnimSite1928;

let HAnimSite1929 = browser.currentScene.createNode("HAnimSite");
HAnimSite1929.USE = "hanim_l_metatarsal_phalanx_5_pt";
HAnimHumanoid15.viewpoints[270] = HAnimSite1929;

let HAnimSite1930 = browser.currentScene.createNode("HAnimSite");
HAnimSite1930.USE = "hanim_r_metatarsal_phalanx_5_pt";
HAnimHumanoid15.viewpoints[271] = HAnimSite1930;

let HAnimSite1931 = browser.currentScene.createNode("HAnimSite");
HAnimSite1931.USE = "hanim_r_neck_base_pt";
HAnimHumanoid15.viewpoints[272] = HAnimSite1931;

let HAnimSite1932 = browser.currentScene.createNode("HAnimSite");
HAnimSite1932.USE = "hanim_l_neck_base_pt";
HAnimHumanoid15.viewpoints[273] = HAnimSite1932;

let HAnimSite1933 = browser.currentScene.createNode("HAnimSite");
HAnimSite1933.USE = "hanim_l_olecranon_pt";
HAnimHumanoid15.viewpoints[274] = HAnimSite1933;

let HAnimSite1934 = browser.currentScene.createNode("HAnimSite");
HAnimSite1934.USE = "hanim_r_olecranon_pt";
HAnimHumanoid15.viewpoints[275] = HAnimSite1934;

let HAnimSite1935 = browser.currentScene.createNode("HAnimSite");
HAnimSite1935.USE = "hanim_r_psis_pt";
HAnimHumanoid15.viewpoints[276] = HAnimSite1935;

let HAnimSite1936 = browser.currentScene.createNode("HAnimSite");
HAnimSite1936.USE = "hanim_l_psis_pt";
HAnimHumanoid15.viewpoints[277] = HAnimSite1936;

let HAnimSite1937 = browser.currentScene.createNode("HAnimSite");
HAnimSite1937.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid15.viewpoints[278] = HAnimSite1937;

let HAnimSite1938 = browser.currentScene.createNode("HAnimSite");
HAnimSite1938.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid15.viewpoints[279] = HAnimSite1938;

let HAnimSite1939 = browser.currentScene.createNode("HAnimSite");
HAnimSite1939.USE = "hanim_l_radiale_pt";
HAnimHumanoid15.viewpoints[280] = HAnimSite1939;

let HAnimSite1940 = browser.currentScene.createNode("HAnimSite");
HAnimSite1940.USE = "hanim_r_radiale_pt";
HAnimHumanoid15.viewpoints[281] = HAnimSite1940;

let HAnimSite1941 = browser.currentScene.createNode("HAnimSite");
HAnimSite1941.USE = "hanim_r_rib10_pt";
HAnimHumanoid15.viewpoints[282] = HAnimSite1941;

let HAnimSite1942 = browser.currentScene.createNode("HAnimSite");
HAnimSite1942.USE = "hanim_l_rib10_pt";
HAnimHumanoid15.viewpoints[283] = HAnimSite1942;

let HAnimSite1943 = browser.currentScene.createNode("HAnimSite");
HAnimSite1943.USE = "hanim_temporomandibular_l_site_pt";
HAnimHumanoid15.viewpoints[284] = HAnimSite1943;

let HAnimSite1944 = browser.currentScene.createNode("HAnimSite");
HAnimSite1944.USE = "hanim_temporomandibular_r_site_pt";
HAnimHumanoid15.viewpoints[285] = HAnimSite1944;

let HAnimSite1945 = browser.currentScene.createNode("HAnimSite");
HAnimSite1945.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid15.viewpoints[286] = HAnimSite1945;

let HAnimSite1946 = browser.currentScene.createNode("HAnimSite");
HAnimSite1946.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid15.viewpoints[287] = HAnimSite1946;

let HAnimSite1947 = browser.currentScene.createNode("HAnimSite");
HAnimSite1947.USE = "hanim_l_tarsal_distal_phalanx_2_pt";
HAnimHumanoid15.viewpoints[288] = HAnimSite1947;

let HAnimSite1948 = browser.currentScene.createNode("HAnimSite");
HAnimSite1948.USE = "hanim_r_tarsal_distal_phalanx_2_pt";
HAnimHumanoid15.viewpoints[289] = HAnimSite1948;

let HAnimSite1949 = browser.currentScene.createNode("HAnimSite");
HAnimSite1949.USE = "hanim_r_thelion_pt";
HAnimHumanoid15.viewpoints[290] = HAnimSite1949;

let HAnimSite1950 = browser.currentScene.createNode("HAnimSite");
HAnimSite1950.USE = "hanim_l_thelion_pt";
HAnimHumanoid15.viewpoints[291] = HAnimSite1950;

let HAnimSite1951 = browser.currentScene.createNode("HAnimSite");
HAnimSite1951.USE = "hanim_r_tragion_pt";
HAnimHumanoid15.viewpoints[292] = HAnimSite1951;

let HAnimSite1952 = browser.currentScene.createNode("HAnimSite");
HAnimSite1952.USE = "hanim_l_tragion_pt";
HAnimHumanoid15.viewpoints[293] = HAnimSite1952;

let HAnimSite1953 = browser.currentScene.createNode("HAnimSite");
HAnimSite1953.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid15.viewpoints[294] = HAnimSite1953;

let HAnimSite1954 = browser.currentScene.createNode("HAnimSite");
HAnimSite1954.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid15.viewpoints[295] = HAnimSite1954;

let HAnimSite1955 = browser.currentScene.createNode("HAnimSite");
HAnimSite1955.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid15.viewpoints[296] = HAnimSite1955;

let HAnimSite1956 = browser.currentScene.createNode("HAnimSite");
HAnimSite1956.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid15.viewpoints[297] = HAnimSite1956;

browser.currentScene.children[12] = HAnimHumanoid15;

