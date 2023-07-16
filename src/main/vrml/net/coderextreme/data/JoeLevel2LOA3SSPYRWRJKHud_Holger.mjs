let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let component2 = browser.currentScene.createNode("component");
component2.name = "HAnim";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

let component3 = browser.currentScene.createNode("component");
component3.name = "Text";
component3.level = 1;
head1.component[1] = component3;

let component4 = browser.currentScene.createNode("component");
component4.name = "Core";
component4.level = 1;
head1.component[2] = component4;

let component5 = browser.currentScene.createNode("component");
component5.name = "Grouping";
component5.level = 1;
head1.component[3] = component5;

let component6 = browser.currentScene.createNode("component");
component6.name = "Shape";
component6.level = 1;
head1.component[4] = component6;

let component7 = browser.currentScene.createNode("component");
component7.name = "Rendering";
component7.level = 1;
head1.component[5] = component7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "Joe";
meta8.content = "20090328 20130628 http://www.hypermultimedia.com/acontents.htm#X3DHANIM";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "converter";
meta9.content = "x3d-tidy V1.0.56, https://www.npmjs.com/package/x3d-tidy";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "converted";
meta10.content = "Wed, 12 Jul 2023 08:05:49 GMT";
head1.meta[8] = meta10;

head = head1;

let WorldInfo12 = browser.currentScene.createNode("WorldInfo");
WorldInfo12.DEF = "JoeTest_WorldInfo";
WorldInfo12.title = "JoeLevel2LOA3SSPYRWRJKHud.x3dv 20130723 20230108";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo12;

let NavigationInfo13 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo13.speed = 0.75;
NavigationInfo13.headlight = False;
browser.currentScene.children[1] = NavigationInfo13;

let Group14 = browser.currentScene.createNode("Group");
Group14.DEF = "IllustrationGeometry";
let Transform15 = browser.currentScene.createNode("Transform");
Transform15.translation = new SFVec3f(new float[0,2.1,0]);
Transform15.scale = new SFVec3f(new float[2,2,2]);
let Shape16 = browser.currentScene.createNode("Shape");
Shape16.DEF = "jointbox";
let Appearance17 = browser.currentScene.createNode("Appearance");
let Material18 = browser.currentScene.createNode("Material");
Material18.ambientIntensity = 0.5;
Material18.diffuseColor = new SFColor(new float[1,1,0]);
Material18.specularColor = new SFColor(new float[1,1,0]);
Material18.shininess = 0.7;
Appearance17.material = Material18;

Shape16.appearance = Appearance17;

let IndexedFaceSet19 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet19.creaseAngle = 0.1;
IndexedFaceSet19.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate20 = browser.currentScene.createNode("Coordinate");
Coordinate20.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet19.coord = Coordinate20;

Shape16.geometry = IndexedFaceSet19;

Transform15.children = new MFNode();

Transform15.children[0] = Shape16;

Group14.children = new MFNode();

Group14.children[0] = Transform15;

let Transform21 = browser.currentScene.createNode("Transform");
Transform21.translation = new SFVec3f(new float[0,2.2,0]);
Transform21.scale = new SFVec3f(new float[2,2,2]);
let Shape22 = browser.currentScene.createNode("Shape");
Shape22.DEF = "sitebox";
let Appearance23 = browser.currentScene.createNode("Appearance");
let Material24 = browser.currentScene.createNode("Material");
Material24.ambientIntensity = 0.5;
Material24.diffuseColor = new SFColor(new float[1,0,0]);
Material24.specularColor = new SFColor(new float[1,0,0]);
Material24.shininess = 0.7;
Appearance23.material = Material24;

Shape22.appearance = Appearance23;

let IndexedFaceSet25 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet25.creaseAngle = 0.1;
IndexedFaceSet25.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let Coordinate26 = browser.currentScene.createNode("Coordinate");
Coordinate26.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet25.coord = Coordinate26;

Shape22.geometry = IndexedFaceSet25;

Transform21.children = new MFNode();

Transform21.children[0] = Shape22;

Group14.children[1] = Transform21;

let Transform27 = browser.currentScene.createNode("Transform");
Transform27.translation = new SFVec3f(new float[0,2.3,0]);
Transform27.scale = new SFVec3f(new float[2,2,2]);
let Shape28 = browser.currentScene.createNode("Shape");
let Appearance29 = browser.currentScene.createNode("Appearance");
Appearance29.DEF = "SegmentLine";
let Material30 = browser.currentScene.createNode("Material");
Material30.diffuseColor = new SFColor(new float[0,1,0]);
Material30.specularColor = new SFColor(new float[0,1,0]);
Material30.emissiveColor = new SFColor(new float[0,1,0]);
Appearance29.material = Material30;

Shape28.appearance = Appearance29;

let IndexedLineSet31 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet31.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate32 = browser.currentScene.createNode("Coordinate");
Coordinate32.point = new MFVec3f(new float[0,0,0,0.2,0,0]);
IndexedLineSet31.coord = Coordinate32;

Shape28.geometry = IndexedLineSet31;

Transform27.children = new MFNode();

Transform27.children[0] = Shape28;

Group14.children[2] = Transform27;

let Transform33 = browser.currentScene.createNode("Transform");
Transform33.translation = new SFVec3f(new float[0,2.4,0]);
Transform33.scale = new SFVec3f(new float[2,2,2]);
let Shape34 = browser.currentScene.createNode("Shape");
let Appearance35 = browser.currentScene.createNode("Appearance");
Appearance35.DEF = "SiteParentLine";
let Material36 = browser.currentScene.createNode("Material");
Material36.diffuseColor = new SFColor(new float[1,0,0]);
Material36.specularColor = new SFColor(new float[1,0,0]);
Material36.emissiveColor = new SFColor(new float[1,0,0]);
Appearance35.material = Material36;

Shape34.appearance = Appearance35;

let IndexedLineSet37 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet37.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate38 = browser.currentScene.createNode("Coordinate");
Coordinate38.point = new MFVec3f(new float[0,0,0,0.2,0,0]);
IndexedLineSet37.coord = Coordinate38;

Shape34.geometry = IndexedLineSet37;

Transform33.children = new MFNode();

Transform33.children[0] = Shape34;

Group14.children[3] = Transform33;

browser.currentScene.children[2] = Group14;

let Group39 = browser.currentScene.createNode("Group");
Group39.DEF = "SpecHumanoid";
let HAnimHumanoid40 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid40.DEF = "humanoid";
HAnimHumanoid40.version = "2.0";
let HAnimJoint41 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint41.name = "HumanoidRoot";
HAnimJoint41.DEF = "hanim_HumanoidRoot";
HAnimJoint41.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimJoint41.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint41.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment42 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment42.name = "sacrum";
HAnimSegment42.DEF = "hanim_sacrum";
let Transform43 = browser.currentScene.createNode("Transform");
Transform43.translation = new SFVec3f(new float[0,0.824,0.0277]);
let Shape44 = browser.currentScene.createNode("Shape");
Shape44.USE = "jointbox";
Transform43.children = new MFNode();

Transform43.children[0] = Shape44;

HAnimSegment42.children = new MFNode();

HAnimSegment42.children[0] = Transform43;

let Shape45 = browser.currentScene.createNode("Shape");
let Appearance46 = browser.currentScene.createNode("Appearance");
Appearance46.USE = "SegmentLine";
Shape45.appearance = Appearance46;

let IndexedLineSet47 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet47.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1]);
let Coordinate48 = browser.currentScene.createNode("Coordinate");
Coordinate48.point = new MFVec3f(new float[0,0.824,0.0277,0,0.9149,0.0016,0.0028,1.0568,-0.0776]);
IndexedLineSet47.coord = Coordinate48;

Shape45.geometry = IndexedLineSet47;

HAnimSegment42.children[1] = Shape45;

HAnimJoint41.children = new MFNode();

HAnimJoint41.children[0] = HAnimSegment42;

let HAnimJoint49 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint49.name = "sacroiliac";
HAnimJoint49.DEF = "hanim_sacroiliac";
HAnimJoint49.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint49.skinCoordIndex = new MFInt32(new int[17,19,20,21,22,23,26,27,73,82,89,91,93]);
HAnimJoint49.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]);
HAnimJoint49.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint49.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment50 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment50.name = "pelvis";
HAnimSegment50.DEF = "hanim_pelvis";
let Transform51 = browser.currentScene.createNode("Transform");
Transform51.translation = new SFVec3f(new float[0,0.9149,0.0016]);
let Shape52 = browser.currentScene.createNode("Shape");
Shape52.USE = "jointbox";
Transform51.children = new MFNode();

Transform51.children[0] = Shape52;

HAnimSegment50.children = new MFNode();

HAnimSegment50.children[0] = Transform51;

let Shape53 = browser.currentScene.createNode("Shape");
let Appearance54 = browser.currentScene.createNode("Appearance");
Appearance54.USE = "SegmentLine";
Shape53.appearance = Appearance54;

let IndexedLineSet55 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet55.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1]);
let Coordinate56 = browser.currentScene.createNode("Coordinate");
Coordinate56.point = new MFVec3f(new float[0,0.9149,0.0016,0.0961,0.9124,-0.0001,-0.095,0.9171,0.0029]);
IndexedLineSet55.coord = Coordinate56;

Shape53.geometry = IndexedLineSet55;

HAnimSegment50.children[1] = Shape53;

let Shape57 = browser.currentScene.createNode("Shape");
let Appearance58 = browser.currentScene.createNode("Appearance");
Appearance58.USE = "SiteParentLine";
Shape57.appearance = Appearance58;

let IndexedLineSet59 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet59.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1,0,6,-1,0,7,-1,0,8,-1,0,9,-1]);
let Coordinate60 = browser.currentScene.createNode("Coordinate");
Coordinate60.point = new MFVec3f(new float[0,0.9149,0.0016,-0.1525,1.0628,0.0035,-0.1689,0.8419,0.0352,0.1612,1.0537,0.0008,0.1677,0.8336,0.0303,-0.0887,1.0021,0.1112,0.0925,0.9983,0.1052,-0.0716,1.019,-0.1138,0.0774,1.019,-0.1151,0.0034,0.8266,0.0257]);
IndexedLineSet59.coord = Coordinate60;

Shape57.geometry = IndexedLineSet59;

HAnimSegment50.children[2] = Shape57;

let HAnimSite61 = browser.currentScene.createNode("HAnimSite");
HAnimSite61.name = "r_iliocristale";
HAnimSite61.DEF = "hanim_r_iliocristale";
HAnimSite61.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
let Shape62 = browser.currentScene.createNode("Shape");
Shape62.USE = "sitebox";
HAnimSite61.children = new MFNode();

HAnimSite61.children[0] = Shape62;

HAnimSegment50.children[3] = HAnimSite61;

let HAnimSite63 = browser.currentScene.createNode("HAnimSite");
HAnimSite63.name = "r_trochanterion";
HAnimSite63.DEF = "hanim_r_trochanterion";
HAnimSite63.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
let Shape64 = browser.currentScene.createNode("Shape");
Shape64.USE = "sitebox";
HAnimSite63.children = new MFNode();

HAnimSite63.children[0] = Shape64;

HAnimSegment50.children[4] = HAnimSite63;

let HAnimSite65 = browser.currentScene.createNode("HAnimSite");
HAnimSite65.name = "l_iliocristale";
HAnimSite65.DEF = "hanim_l_iliocristale";
HAnimSite65.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
let Shape66 = browser.currentScene.createNode("Shape");
Shape66.USE = "sitebox";
HAnimSite65.children = new MFNode();

HAnimSite65.children[0] = Shape66;

HAnimSegment50.children[5] = HAnimSite65;

let HAnimSite67 = browser.currentScene.createNode("HAnimSite");
HAnimSite67.name = "l_trochanterion";
HAnimSite67.DEF = "hanim_l_trochanterion";
HAnimSite67.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
let Shape68 = browser.currentScene.createNode("Shape");
Shape68.USE = "sitebox";
HAnimSite67.children = new MFNode();

HAnimSite67.children[0] = Shape68;

HAnimSegment50.children[6] = HAnimSite67;

let HAnimSite69 = browser.currentScene.createNode("HAnimSite");
HAnimSite69.name = "r_asis";
HAnimSite69.DEF = "hanim_r_asis";
HAnimSite69.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
let Shape70 = browser.currentScene.createNode("Shape");
Shape70.USE = "sitebox";
HAnimSite69.children = new MFNode();

HAnimSite69.children[0] = Shape70;

HAnimSegment50.children[7] = HAnimSite69;

let HAnimSite71 = browser.currentScene.createNode("HAnimSite");
HAnimSite71.name = "l_asis";
HAnimSite71.DEF = "hanim_l_asis";
HAnimSite71.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
let Shape72 = browser.currentScene.createNode("Shape");
Shape72.USE = "sitebox";
HAnimSite71.children = new MFNode();

HAnimSite71.children[0] = Shape72;

HAnimSegment50.children[8] = HAnimSite71;

let HAnimSite73 = browser.currentScene.createNode("HAnimSite");
HAnimSite73.name = "r_psis";
HAnimSite73.DEF = "hanim_r_psis";
HAnimSite73.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
let Shape74 = browser.currentScene.createNode("Shape");
Shape74.USE = "sitebox";
HAnimSite73.children = new MFNode();

HAnimSite73.children[0] = Shape74;

HAnimSegment50.children[9] = HAnimSite73;

let HAnimSite75 = browser.currentScene.createNode("HAnimSite");
HAnimSite75.name = "l_psis";
HAnimSite75.DEF = "hanim_l_psis";
HAnimSite75.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
let Shape76 = browser.currentScene.createNode("Shape");
Shape76.USE = "sitebox";
HAnimSite75.children = new MFNode();

HAnimSite75.children[0] = Shape76;

HAnimSegment50.children[10] = HAnimSite75;

let HAnimSite77 = browser.currentScene.createNode("HAnimSite");
HAnimSite77.name = "crotch";
HAnimSite77.DEF = "hanim_crotch";
HAnimSite77.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
let Shape78 = browser.currentScene.createNode("Shape");
Shape78.USE = "sitebox";
HAnimSite77.children = new MFNode();

HAnimSite77.children[0] = Shape78;

HAnimSegment50.children[11] = HAnimSite77;

HAnimJoint49.children = new MFNode();

HAnimJoint49.children[0] = HAnimSegment50;

let HAnimJoint79 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint79.name = "l_hip";
HAnimJoint79.DEF = "hanim_l_hip";
HAnimJoint79.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimJoint79.skinCoordIndex = new MFInt32(new int[89,90,94,95,96,97]);
HAnimJoint79.skinCoordWeight = new MFFloat(new float[0.65,1,1,1,1,1]);
HAnimJoint79.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint79.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment80 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment80.name = "l_thigh";
HAnimSegment80.DEF = "hanim_l_thigh";
let Transform81 = browser.currentScene.createNode("Transform");
Transform81.translation = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
let Shape82 = browser.currentScene.createNode("Shape");
Shape82.USE = "jointbox";
Transform81.children = new MFNode();

Transform81.children[0] = Shape82;

HAnimSegment80.children = new MFNode();

HAnimSegment80.children[0] = Transform81;

let Shape83 = browser.currentScene.createNode("Shape");
let Appearance84 = browser.currentScene.createNode("Appearance");
Appearance84.USE = "SegmentLine";
Shape83.appearance = Appearance84;

let IndexedLineSet85 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet85.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate86 = browser.currentScene.createNode("Coordinate");
Coordinate86.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
IndexedLineSet85.coord = Coordinate86;

Shape83.geometry = IndexedLineSet85;

HAnimSegment80.children[1] = Shape83;

let Shape87 = browser.currentScene.createNode("Shape");
let Appearance88 = browser.currentScene.createNode("Appearance");
Appearance88.USE = "SiteParentLine";
Shape87.appearance = Appearance88;

let IndexedLineSet89 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet89.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
let Coordinate90 = browser.currentScene.createNode("Coordinate");
Coordinate90.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309,0.1598,0.4967,0.0297,0.0398,0.4946,0.0303]);
IndexedLineSet89.coord = Coordinate90;

Shape87.geometry = IndexedLineSet89;

HAnimSegment80.children[2] = Shape87;

let HAnimSite91 = browser.currentScene.createNode("HAnimSite");
HAnimSite91.name = "l_knee_crease";
HAnimSite91.DEF = "hanim_l_knee_crease";
HAnimSite91.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
let Shape92 = browser.currentScene.createNode("Shape");
Shape92.USE = "sitebox";
HAnimSite91.children = new MFNode();

HAnimSite91.children[0] = Shape92;

HAnimSegment80.children[3] = HAnimSite91;

let HAnimSite93 = browser.currentScene.createNode("HAnimSite");
HAnimSite93.name = "l_femoral_lateral_epicn";
HAnimSite93.DEF = "hanim_l_femoral_lateral_epicn";
HAnimSite93.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
let Shape94 = browser.currentScene.createNode("Shape");
Shape94.USE = "sitebox";
HAnimSite93.children = new MFNode();

HAnimSite93.children[0] = Shape94;

HAnimSegment80.children[4] = HAnimSite93;

let HAnimSite95 = browser.currentScene.createNode("HAnimSite");
HAnimSite95.name = "l_femoral_medial_epicn";
HAnimSite95.DEF = "hanim_l_femoral_medial_epicn";
HAnimSite95.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
let Shape96 = browser.currentScene.createNode("Shape");
Shape96.USE = "sitebox";
HAnimSite95.children = new MFNode();

HAnimSite95.children[0] = Shape96;

HAnimSegment80.children[5] = HAnimSite95;

HAnimJoint79.children = new MFNode();

HAnimJoint79.children[0] = HAnimSegment80;

let HAnimJoint97 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint97.name = "l_knee";
HAnimJoint97.DEF = "hanim_l_knee";
HAnimJoint97.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimJoint97.skinCoordIndex = new MFInt32(new int[334,335,336,337,338,339,340,341]);
HAnimJoint97.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint97.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint97.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment98 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment98.name = "l_calf";
HAnimSegment98.DEF = "hanim_l_calf";
let Transform99 = browser.currentScene.createNode("Transform");
Transform99.translation = new SFVec3f(new float[0.104,0.4867,0.0308]);
let Shape100 = browser.currentScene.createNode("Shape");
Shape100.USE = "jointbox";
Transform99.children = new MFNode();

Transform99.children[0] = Shape100;

HAnimSegment98.children = new MFNode();

HAnimSegment98.children[0] = Transform99;

let Shape101 = browser.currentScene.createNode("Shape");
let Appearance102 = browser.currentScene.createNode("Appearance");
Appearance102.USE = "SegmentLine";
Shape101.appearance = Appearance102;

let IndexedLineSet103 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet103.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate104 = browser.currentScene.createNode("Coordinate");
Coordinate104.point = new MFVec3f(new float[0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
IndexedLineSet103.coord = Coordinate104;

Shape101.geometry = IndexedLineSet103;

HAnimSegment98.children[1] = Shape101;

HAnimJoint97.children = new MFNode();

HAnimJoint97.children[0] = HAnimSegment98;

let HAnimJoint105 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint105.name = "l_ankle";
HAnimJoint105.DEF = "hanim_l_ankle";
HAnimJoint105.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint105.skinCoordIndex = new MFInt32(new int[342,343,344,345]);
HAnimJoint105.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint105.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint105.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment106 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment106.name = "l_hindfoot";
HAnimSegment106.DEF = "hanim_l_hindfoot";
let Transform107 = browser.currentScene.createNode("Transform");
Transform107.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Shape108 = browser.currentScene.createNode("Shape");
Shape108.USE = "jointbox";
Transform107.children = new MFNode();

Transform107.children[0] = Shape108;

HAnimSegment106.children = new MFNode();

HAnimSegment106.children[0] = Transform107;

let Shape109 = browser.currentScene.createNode("Shape");
let Appearance110 = browser.currentScene.createNode("Appearance");
Appearance110.USE = "SegmentLine";
Shape109.appearance = Appearance110;

let IndexedLineSet111 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet111.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate112 = browser.currentScene.createNode("Coordinate");
Coordinate112.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368]);
IndexedLineSet111.coord = Coordinate112;

Shape109.geometry = IndexedLineSet111;

HAnimSegment106.children[1] = Shape109;

let Shape113 = browser.currentScene.createNode("Shape");
let Appearance114 = browser.currentScene.createNode("Appearance");
Appearance114.USE = "SiteParentLine";
Shape113.appearance = Appearance114;

let IndexedLineSet115 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet115.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1,0,4,-1]);
let Coordinate116 = browser.currentScene.createNode("Coordinate");
Coordinate116.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032,0.089,0.0716,-0.0881,0.089,0.0575,-0.0943,0.0974,0.0259,-0.1171]);
IndexedLineSet115.coord = Coordinate116;

Shape113.geometry = IndexedLineSet115;

HAnimSegment106.children[2] = Shape113;

let HAnimSite117 = browser.currentScene.createNode("HAnimSite");
HAnimSite117.name = "l_lateral_malleolus";
HAnimSite117.DEF = "hanim_l_lateral_malleolus";
HAnimSite117.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
let Shape118 = browser.currentScene.createNode("Shape");
Shape118.USE = "sitebox";
HAnimSite117.children = new MFNode();

HAnimSite117.children[0] = Shape118;

HAnimSegment106.children[3] = HAnimSite117;

let HAnimSite119 = browser.currentScene.createNode("HAnimSite");
HAnimSite119.name = "l_medial_malleolus";
HAnimSite119.DEF = "hanim_l_medial_malleolus";
HAnimSite119.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
let Shape120 = browser.currentScene.createNode("Shape");
Shape120.USE = "sitebox";
HAnimSite119.children = new MFNode();

HAnimSite119.children[0] = Shape120;

HAnimSegment106.children[4] = HAnimSite119;

let HAnimSite121 = browser.currentScene.createNode("HAnimSite");
HAnimSite121.name = "l_sphyrion";
HAnimSite121.DEF = "hanim_l_sphyrion";
HAnimSite121.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
let Shape122 = browser.currentScene.createNode("Shape");
Shape122.USE = "sitebox";
HAnimSite121.children = new MFNode();

HAnimSite121.children[0] = Shape122;

HAnimSegment106.children[5] = HAnimSite121;

let HAnimSite123 = browser.currentScene.createNode("HAnimSite");
HAnimSite123.name = "l_calcaneous_post";
HAnimSite123.DEF = "hanim_l_calcaneous_post";
HAnimSite123.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
let Shape124 = browser.currentScene.createNode("Shape");
Shape124.USE = "sitebox";
HAnimSite123.children = new MFNode();

HAnimSite123.children[0] = Shape124;

HAnimSegment106.children[6] = HAnimSite123;

HAnimJoint105.children = new MFNode();

HAnimJoint105.children[0] = HAnimSegment106;

let HAnimJoint125 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint125.name = "l_subtalar";
HAnimJoint125.DEF = "hanim_l_subtalar";
HAnimJoint125.center = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
HAnimJoint125.skinCoordIndex = new MFInt32(new int[346,347,348,71]);
HAnimJoint125.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint125.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint125.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment126 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment126.name = "l_midproximal";
HAnimSegment126.DEF = "hanim_l_l_midproximal";
let Transform127 = browser.currentScene.createNode("Transform");
Transform127.translation = new SFVec3f(new float[0.1086,0.0001,-0.0368]);
let Shape128 = browser.currentScene.createNode("Shape");
Shape128.USE = "jointbox";
Transform127.children = new MFNode();

Transform127.children[0] = Shape128;

HAnimSegment126.children = new MFNode();

HAnimSegment126.children[0] = Transform127;

let Shape129 = browser.currentScene.createNode("Shape");
let Appearance130 = browser.currentScene.createNode("Appearance");
Appearance130.USE = "SegmentLine";
Shape129.appearance = Appearance130;

let IndexedLineSet131 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet131.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate132 = browser.currentScene.createNode("Coordinate");
Coordinate132.point = new MFVec3f(new float[0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368]);
IndexedLineSet131.coord = Coordinate132;

Shape129.geometry = IndexedLineSet131;

HAnimSegment126.children[1] = Shape129;

HAnimJoint125.children = new MFNode();

HAnimJoint125.children[0] = HAnimSegment126;

let HAnimJoint133 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint133.name = "l_midtarsal";
HAnimJoint133.DEF = "hanim_l_midtarsal";
HAnimJoint133.center = new SFVec3f(new float[0.1086,0.0001,0.0368]);
HAnimJoint133.skinCoordIndex = new MFInt32(new int[349,350,351,352]);
HAnimJoint133.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint133.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint133.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment134 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment134.name = "l_middistal";
HAnimSegment134.DEF = "hanim_l_middistal";
let Transform135 = browser.currentScene.createNode("Transform");
Transform135.translation = new SFVec3f(new float[0.1086,0.0001,0.0368]);
let Shape136 = browser.currentScene.createNode("Shape");
Shape136.USE = "jointbox";
Transform135.children = new MFNode();

Transform135.children[0] = Shape136;

HAnimSegment134.children = new MFNode();

HAnimSegment134.children[0] = Transform135;

let Shape137 = browser.currentScene.createNode("Shape");
let Appearance138 = browser.currentScene.createNode("Appearance");
Appearance138.USE = "SegmentLine";
Shape137.appearance = Appearance138;

let IndexedLineSet139 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet139.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate140 = browser.currentScene.createNode("Coordinate");
Coordinate140.point = new MFVec3f(new float[0.1086,0.0001,0.0368,0.1086,0,0.0762]);
IndexedLineSet139.coord = Coordinate140;

Shape137.geometry = IndexedLineSet139;

HAnimSegment134.children[1] = Shape137;

let Shape141 = browser.currentScene.createNode("Shape");
let Appearance142 = browser.currentScene.createNode("Appearance");
Appearance142.USE = "SiteParentLine";
Shape141.appearance = Appearance142;

let IndexedLineSet143 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet143.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate144 = browser.currentScene.createNode("Coordinate");
Coordinate144.point = new MFVec3f(new float[0.1086,0.0001,-0.0368,0.0816,0.0232,0.0106]);
IndexedLineSet143.coord = Coordinate144;

Shape141.geometry = IndexedLineSet143;

HAnimSegment134.children[2] = Shape141;

let HAnimSite145 = browser.currentScene.createNode("HAnimSite");
HAnimSite145.name = "l_metatarsal_pha1";
HAnimSite145.DEF = "hanim_l_metatarsal_pha1";
HAnimSite145.translation = new SFVec3f(new float[0.0816,0.0232,0.0106]);
let Shape146 = browser.currentScene.createNode("Shape");
Shape146.USE = "sitebox";
HAnimSite145.children = new MFNode();

HAnimSite145.children[0] = Shape146;

HAnimSegment134.children[3] = HAnimSite145;

HAnimJoint133.children = new MFNode();

HAnimJoint133.children[0] = HAnimSegment134;

let HAnimJoint147 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint147.name = "l_metatarsal";
HAnimJoint147.DEF = "hanim_l_metatarsal";
HAnimJoint147.center = new SFVec3f(new float[0.1086,0,0.0762]);
HAnimJoint147.skinCoordIndex = new MFInt32(new int[353,354,355,356,357,358,359,360,361]);
HAnimJoint147.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint147.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint147.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment148 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment148.name = "l_forefoot";
HAnimSegment148.DEF = "hanim_l_forefoot";
let Transform149 = browser.currentScene.createNode("Transform");
Transform149.translation = new SFVec3f(new float[0.1086,0,0.0762]);
let Shape150 = browser.currentScene.createNode("Shape");
Shape150.USE = "jointbox";
Transform149.children = new MFNode();

Transform149.children[0] = Shape150;

HAnimSegment148.children = new MFNode();

HAnimSegment148.children[0] = Transform149;

let Shape151 = browser.currentScene.createNode("Shape");
let Appearance152 = browser.currentScene.createNode("Appearance");
Appearance152.USE = "SegmentLine";
Shape151.appearance = Appearance152;

let IndexedLineSet153 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet153.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate154 = browser.currentScene.createNode("Coordinate");
Coordinate154.point = new MFVec3f(new float[0.1086,0,0.0762,0.1354,0.0016,0.1476]);
IndexedLineSet153.coord = Coordinate154;

Shape151.geometry = IndexedLineSet153;

HAnimSegment148.children[1] = Shape151;

let Shape155 = browser.currentScene.createNode("Shape");
let Appearance156 = browser.currentScene.createNode("Appearance");
Appearance156.USE = "SiteParentLine";
Shape155.appearance = Appearance156;

let IndexedLineSet157 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet157.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
let Coordinate158 = browser.currentScene.createNode("Coordinate");
Coordinate158.point = new MFVec3f(new float[0.1086,0,0.0762,0.1354,0.0016,0.1476,0.1825,0.007,0.0928,0.1195,0.0079,0.1433]);
IndexedLineSet157.coord = Coordinate158;

Shape155.geometry = IndexedLineSet157;

HAnimSegment148.children[2] = Shape155;

let HAnimSite159 = browser.currentScene.createNode("HAnimSite");
HAnimSite159.name = "l_forefoot_tip";
HAnimSite159.DEF = "hanim_l_forefoot_tip";
HAnimSite159.translation = new SFVec3f(new float[0.1354,0.0016,0.1476]);
let Shape160 = browser.currentScene.createNode("Shape");
Shape160.USE = "sitebox";
HAnimSite159.children = new MFNode();

HAnimSite159.children[0] = Shape160;

HAnimSegment148.children[3] = HAnimSite159;

let HAnimSite161 = browser.currentScene.createNode("HAnimSite");
HAnimSite161.name = "l_metatarsal_pha5";
HAnimSite161.DEF = "hanim_l_metatarsal_pha5";
HAnimSite161.translation = new SFVec3f(new float[0.1825,0.007,0.0928]);
let Shape162 = browser.currentScene.createNode("Shape");
Shape162.USE = "sitebox";
HAnimSite161.children = new MFNode();

HAnimSite161.children[0] = Shape162;

HAnimSegment148.children[4] = HAnimSite161;

let HAnimSite163 = browser.currentScene.createNode("HAnimSite");
HAnimSite163.name = "l_digit2";
HAnimSite163.DEF = "hanim_l_digit2";
HAnimSite163.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
let Shape164 = browser.currentScene.createNode("Shape");
Shape164.USE = "sitebox";
HAnimSite163.children = new MFNode();

HAnimSite163.children[0] = Shape164;

HAnimSegment148.children[5] = HAnimSite163;

HAnimJoint147.children = new MFNode();

HAnimJoint147.children[0] = HAnimSegment148;

HAnimJoint133.children[1] = HAnimJoint147;

HAnimJoint125.children[1] = HAnimJoint133;

HAnimJoint105.children[1] = HAnimJoint125;

HAnimJoint97.children[1] = HAnimJoint105;

HAnimJoint79.children[1] = HAnimJoint97;

HAnimJoint49.children[1] = HAnimJoint79;

let HAnimJoint165 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint165.name = "r_hip";
HAnimJoint165.DEF = "hanim_r_hip";
HAnimJoint165.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
HAnimJoint165.skinCoordIndex = new MFInt32(new int[91,92,98,99,100,101,362,363]);
HAnimJoint165.skinCoordWeight = new MFFloat(new float[0.65,1,0.8,1,1,1,0.4,0.8]);
HAnimJoint165.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint165.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment166 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment166.name = "r_thigh";
HAnimSegment166.DEF = "hanim_r_thigh";
let Transform167 = browser.currentScene.createNode("Transform");
Transform167.translation = new SFVec3f(new float[-0.095,0.9171,0.0029]);
let Shape168 = browser.currentScene.createNode("Shape");
Shape168.USE = "jointbox";
Transform167.children = new MFNode();

Transform167.children[0] = Shape168;

HAnimSegment166.children = new MFNode();

HAnimSegment166.children[0] = Transform167;

let Shape169 = browser.currentScene.createNode("Shape");
let Appearance170 = browser.currentScene.createNode("Appearance");
Appearance170.USE = "SegmentLine";
Shape169.appearance = Appearance170;

let IndexedLineSet171 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet171.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate172 = browser.currentScene.createNode("Coordinate");
Coordinate172.point = new MFVec3f(new float[-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318]);
IndexedLineSet171.coord = Coordinate172;

Shape169.geometry = IndexedLineSet171;

HAnimSegment166.children[1] = Shape169;

let Shape173 = browser.currentScene.createNode("Shape");
let Appearance174 = browser.currentScene.createNode("Appearance");
Appearance174.USE = "SiteParentLine";
Shape173.appearance = Appearance174;

let IndexedLineSet175 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet175.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
let Coordinate176 = browser.currentScene.createNode("Coordinate");
Coordinate176.point = new MFVec3f(new float[-0.095,0.9171,0.0029,-0.0825,0.4932,-0.0326,-0.1421,0.4992,0.031,-0.0221,0.5014,0.0289]);
IndexedLineSet175.coord = Coordinate176;

Shape173.geometry = IndexedLineSet175;

HAnimSegment166.children[2] = Shape173;

let HAnimSite177 = browser.currentScene.createNode("HAnimSite");
HAnimSite177.name = "r_knee_crease";
HAnimSite177.DEF = "hanim_r_knee_crease";
HAnimSite177.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
let Shape178 = browser.currentScene.createNode("Shape");
Shape178.USE = "sitebox";
HAnimSite177.children = new MFNode();

HAnimSite177.children[0] = Shape178;

HAnimSegment166.children[3] = HAnimSite177;

let HAnimSite179 = browser.currentScene.createNode("HAnimSite");
HAnimSite179.name = "r_femoral_lateral_epicn";
HAnimSite179.DEF = "hanim_r_femoral_lateral_epicn";
HAnimSite179.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
let Shape180 = browser.currentScene.createNode("Shape");
Shape180.USE = "sitebox";
HAnimSite179.children = new MFNode();

HAnimSite179.children[0] = Shape180;

HAnimSegment166.children[4] = HAnimSite179;

let HAnimSite181 = browser.currentScene.createNode("HAnimSite");
HAnimSite181.name = "r_femoral_medial_epicn";
HAnimSite181.DEF = "hanim_r_femoral_medial_epicn";
HAnimSite181.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
let Shape182 = browser.currentScene.createNode("Shape");
Shape182.USE = "sitebox";
HAnimSite181.children = new MFNode();

HAnimSite181.children[0] = Shape182;

HAnimSegment166.children[5] = HAnimSite181;

HAnimJoint165.children = new MFNode();

HAnimJoint165.children[0] = HAnimSegment166;

let HAnimJoint183 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint183.name = "r_knee";
HAnimJoint183.DEF = "hanim_r_knee";
HAnimJoint183.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
HAnimJoint183.skinCoordIndex = new MFInt32(new int[362,363,364,365,366,367,368,369,98]);
HAnimJoint183.skinCoordWeight = new MFFloat(new float[0.6,0.2,1,1,1,1,1,1,0.2]);
HAnimJoint183.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint183.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment184 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment184.name = "r_calf";
HAnimSegment184.DEF = "hanim_r_calf";
let Transform185 = browser.currentScene.createNode("Transform");
Transform185.translation = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
let Shape186 = browser.currentScene.createNode("Shape");
Shape186.USE = "jointbox";
Transform185.children = new MFNode();

Transform185.children[0] = Shape186;

HAnimSegment184.children = new MFNode();

HAnimSegment184.children[0] = Transform185;

let Shape187 = browser.currentScene.createNode("Shape");
let Appearance188 = browser.currentScene.createNode("Appearance");
Appearance188.USE = "SegmentLine";
Shape187.appearance = Appearance188;

let IndexedLineSet189 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet189.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate190 = browser.currentScene.createNode("Coordinate");
Coordinate190.point = new MFVec3f(new float[-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766]);
IndexedLineSet189.coord = Coordinate190;

Shape187.geometry = IndexedLineSet189;

HAnimSegment184.children[1] = Shape187;

HAnimJoint183.children = new MFNode();

HAnimJoint183.children[0] = HAnimSegment184;

let HAnimJoint191 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint191.name = "r_ankle";
HAnimJoint191.DEF = "hanim_r_ankle";
HAnimJoint191.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
HAnimJoint191.skinCoordIndex = new MFInt32(new int[370,371,372,373]);
HAnimJoint191.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint191.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint191.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment192 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment192.name = "r_hindfoot";
HAnimSegment192.DEF = "hanim_r_hindfoot";
let Transform193 = browser.currentScene.createNode("Transform");
Transform193.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Shape194 = browser.currentScene.createNode("Shape");
Shape194.USE = "jointbox";
Transform193.children = new MFNode();

Transform193.children[0] = Shape194;

HAnimSegment192.children = new MFNode();

HAnimSegment192.children[0] = Transform193;

let Shape195 = browser.currentScene.createNode("Shape");
let Appearance196 = browser.currentScene.createNode("Appearance");
Appearance196.USE = "SegmentLine";
Shape195.appearance = Appearance196;

let IndexedLineSet197 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet197.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate198 = browser.currentScene.createNode("Coordinate");
Coordinate198.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,-0.0801,0,-0.0368]);
IndexedLineSet197.coord = Coordinate198;

Shape195.geometry = IndexedLineSet197;

HAnimSegment192.children[1] = Shape195;

let Shape199 = browser.currentScene.createNode("Shape");
let Appearance200 = browser.currentScene.createNode("Appearance");
Appearance200.USE = "SiteParentLine";
Shape199.appearance = Appearance200;

let IndexedLineSet201 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet201.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1,0,4,-1]);
let Coordinate202 = browser.currentScene.createNode("Coordinate");
Coordinate202.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,-0.1006,0.0658,-0.1075,-0.0591,0.076,-0.0928,-0.0603,0.061,-0.1002,-0.0692,0.0297,-0.1221]);
IndexedLineSet201.coord = Coordinate202;

Shape199.geometry = IndexedLineSet201;

HAnimSegment192.children[2] = Shape199;

let HAnimSite203 = browser.currentScene.createNode("HAnimSite");
HAnimSite203.name = "r_lateral_malleolus";
HAnimSite203.DEF = "hanim_r_lateral_malleolus";
HAnimSite203.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
let Shape204 = browser.currentScene.createNode("Shape");
Shape204.USE = "sitebox";
HAnimSite203.children = new MFNode();

HAnimSite203.children[0] = Shape204;

HAnimSegment192.children[3] = HAnimSite203;

let HAnimSite205 = browser.currentScene.createNode("HAnimSite");
HAnimSite205.name = "r_medial_malleolus";
HAnimSite205.DEF = "hanim_r_medial_malleolus";
HAnimSite205.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
let Shape206 = browser.currentScene.createNode("Shape");
Shape206.USE = "sitebox";
HAnimSite205.children = new MFNode();

HAnimSite205.children[0] = Shape206;

HAnimSegment192.children[4] = HAnimSite205;

let HAnimSite207 = browser.currentScene.createNode("HAnimSite");
HAnimSite207.name = "r_sphyrion";
HAnimSite207.DEF = "hanim_r_sphyrion";
HAnimSite207.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
let Shape208 = browser.currentScene.createNode("Shape");
Shape208.USE = "sitebox";
HAnimSite207.children = new MFNode();

HAnimSite207.children[0] = Shape208;

HAnimSegment192.children[5] = HAnimSite207;

let HAnimSite209 = browser.currentScene.createNode("HAnimSite");
HAnimSite209.name = "r_calcaneous_post";
HAnimSite209.DEF = "hanim_r_calcaneous_post";
HAnimSite209.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
let Shape210 = browser.currentScene.createNode("Shape");
Shape210.USE = "sitebox";
HAnimSite209.children = new MFNode();

HAnimSite209.children[0] = Shape210;

HAnimSegment192.children[6] = HAnimSite209;

HAnimJoint191.children = new MFNode();

HAnimJoint191.children[0] = HAnimSegment192;

let HAnimJoint211 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint211.name = "r_subtalar";
HAnimJoint211.DEF = "hanim_r_subtalar";
HAnimJoint211.center = new SFVec3f(new float[-0.0801,0,-0.0368]);
HAnimJoint211.skinCoordIndex = new MFInt32(new int[374,375,376]);
HAnimJoint211.skinCoordWeight = new MFFloat(new float[1,1,1]);
HAnimJoint211.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint211.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment212 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment212.name = "r_midproximal";
HAnimSegment212.DEF = "hanim_r_midproximal";
let Transform213 = browser.currentScene.createNode("Transform");
Transform213.translation = new SFVec3f(new float[-0.0801,0,-0.0368]);
let Shape214 = browser.currentScene.createNode("Shape");
Shape214.USE = "jointbox";
Transform213.children = new MFNode();

Transform213.children[0] = Shape214;

HAnimSegment212.children = new MFNode();

HAnimSegment212.children[0] = Transform213;

let Shape215 = browser.currentScene.createNode("Shape");
let Appearance216 = browser.currentScene.createNode("Appearance");
Appearance216.USE = "SegmentLine";
Shape215.appearance = Appearance216;

let IndexedLineSet217 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet217.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate218 = browser.currentScene.createNode("Coordinate");
Coordinate218.point = new MFVec3f(new float[-0.0801,0,-0.0368,-0.0801,0,0.0368]);
IndexedLineSet217.coord = Coordinate218;

Shape215.geometry = IndexedLineSet217;

HAnimSegment212.children[1] = Shape215;

HAnimJoint211.children = new MFNode();

HAnimJoint211.children[0] = HAnimSegment212;

let HAnimJoint219 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint219.name = "r_midtarsal";
HAnimJoint219.DEF = "hanim_r_midtarsal";
HAnimJoint219.center = new SFVec3f(new float[-0.0801,0,0.0368]);
HAnimJoint219.skinCoordIndex = new MFInt32(new int[377,378,379,380]);
HAnimJoint219.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint219.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint219.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment220 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment220.name = "r_middistal";
HAnimSegment220.DEF = "hanim_r_middistal";
let Transform221 = browser.currentScene.createNode("Transform");
Transform221.translation = new SFVec3f(new float[-0.0801,0,0.0368]);
let Shape222 = browser.currentScene.createNode("Shape");
Shape222.USE = "jointbox";
Transform221.children = new MFNode();

Transform221.children[0] = Shape222;

HAnimSegment220.children = new MFNode();

HAnimSegment220.children[0] = Transform221;

let Shape223 = browser.currentScene.createNode("Shape");
let Appearance224 = browser.currentScene.createNode("Appearance");
Appearance224.USE = "SegmentLine";
Shape223.appearance = Appearance224;

let IndexedLineSet225 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet225.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate226 = browser.currentScene.createNode("Coordinate");
Coordinate226.point = new MFVec3f(new float[-0.0801,0,-0.0368,-0.0801,0.0039,0.0732]);
IndexedLineSet225.coord = Coordinate226;

Shape223.geometry = IndexedLineSet225;

HAnimSegment220.children[1] = Shape223;

let Shape227 = browser.currentScene.createNode("Shape");
let Appearance228 = browser.currentScene.createNode("Appearance");
Appearance228.USE = "SiteParentLine";
Shape227.appearance = Appearance228;

let IndexedLineSet229 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet229.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate230 = browser.currentScene.createNode("Coordinate");
Coordinate230.point = new MFVec3f(new float[-0.0801,0,0.0368,-0.0521,0.026,0.0127]);
IndexedLineSet229.coord = Coordinate230;

Shape227.geometry = IndexedLineSet229;

HAnimSegment220.children[2] = Shape227;

let HAnimSite231 = browser.currentScene.createNode("HAnimSite");
HAnimSite231.name = "r_metatarsal_pha1";
HAnimSite231.DEF = "hanim_r_metatarsal_pha1";
HAnimSite231.translation = new SFVec3f(new float[-0.0521,0.026,0.0127]);
let Shape232 = browser.currentScene.createNode("Shape");
Shape232.USE = "sitebox";
HAnimSite231.children = new MFNode();

HAnimSite231.children[0] = Shape232;

HAnimSegment220.children[3] = HAnimSite231;

HAnimJoint219.children = new MFNode();

HAnimJoint219.children[0] = HAnimSegment220;

let HAnimJoint233 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint233.name = "r_metatarsal";
HAnimJoint233.DEF = "hanim_r_metatarsal";
HAnimJoint233.center = new SFVec3f(new float[-0.0801,0.0039,0.0732]);
HAnimJoint233.skinCoordIndex = new MFInt32(new int[381,382,383,384,385,386,387,388,389]);
HAnimJoint233.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint233.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint233.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment234 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment234.name = "r_forefoot";
HAnimSegment234.DEF = "hanim_r_forefoot";
let Transform235 = browser.currentScene.createNode("Transform");
Transform235.translation = new SFVec3f(new float[-0.0801,0.0039,0.0732]);
let Shape236 = browser.currentScene.createNode("Shape");
Shape236.USE = "jointbox";
Transform235.children = new MFNode();

Transform235.children[0] = Shape236;

HAnimSegment234.children = new MFNode();

HAnimSegment234.children[0] = Transform235;

let Shape237 = browser.currentScene.createNode("Shape");
let Appearance238 = browser.currentScene.createNode("Appearance");
Appearance238.USE = "SegmentLine";
Shape237.appearance = Appearance238;

let IndexedLineSet239 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet239.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate240 = browser.currentScene.createNode("Coordinate");
Coordinate240.point = new MFVec3f(new float[-0.0801,0.0039,0.0732,-0.1043,-0.0227,0.145]);
IndexedLineSet239.coord = Coordinate240;

Shape237.geometry = IndexedLineSet239;

HAnimSegment234.children[1] = Shape237;

let Shape241 = browser.currentScene.createNode("Shape");
let Appearance242 = browser.currentScene.createNode("Appearance");
Appearance242.USE = "SiteParentLine";
Shape241.appearance = Appearance242;

let IndexedLineSet243 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet243.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
let Coordinate244 = browser.currentScene.createNode("Coordinate");
Coordinate244.point = new MFVec3f(new float[-0.0801,0.0039,0.0732,-0.1043,-0.0227,0.145,-0.1523,0.0166,0.0895,-0.0883,0.0134,0.1383]);
IndexedLineSet243.coord = Coordinate244;

Shape241.geometry = IndexedLineSet243;

HAnimSegment234.children[2] = Shape241;

let HAnimSite245 = browser.currentScene.createNode("HAnimSite");
HAnimSite245.name = "r_forefoot_tip";
HAnimSite245.DEF = "hanim_r_forefoot_tip";
HAnimSite245.translation = new SFVec3f(new float[-0.1043,-0.0227,0.145]);
let Shape246 = browser.currentScene.createNode("Shape");
Shape246.USE = "sitebox";
HAnimSite245.children = new MFNode();

HAnimSite245.children[0] = Shape246;

HAnimSegment234.children[3] = HAnimSite245;

let HAnimSite247 = browser.currentScene.createNode("HAnimSite");
HAnimSite247.name = "r_metatarsal_pha5";
HAnimSite247.DEF = "hanim_r_metatarsal_pha5";
HAnimSite247.translation = new SFVec3f(new float[-0.1523,0.0166,0.0895]);
let Shape248 = browser.currentScene.createNode("Shape");
Shape248.USE = "sitebox";
HAnimSite247.children = new MFNode();

HAnimSite247.children[0] = Shape248;

HAnimSegment234.children[4] = HAnimSite247;

let HAnimSite249 = browser.currentScene.createNode("HAnimSite");
HAnimSite249.name = "r_digit2";
HAnimSite249.DEF = "hanim_r_digit2";
HAnimSite249.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
let Shape250 = browser.currentScene.createNode("Shape");
Shape250.USE = "sitebox";
HAnimSite249.children = new MFNode();

HAnimSite249.children[0] = Shape250;

HAnimSegment234.children[5] = HAnimSite249;

HAnimJoint233.children = new MFNode();

HAnimJoint233.children[0] = HAnimSegment234;

HAnimJoint219.children[1] = HAnimJoint233;

HAnimJoint211.children[1] = HAnimJoint219;

HAnimJoint191.children[1] = HAnimJoint211;

HAnimJoint183.children[1] = HAnimJoint191;

HAnimJoint165.children[1] = HAnimJoint183;

HAnimJoint49.children[2] = HAnimJoint165;

HAnimJoint41.children[1] = HAnimJoint49;

let HAnimJoint251 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint251.name = "vl5";
HAnimJoint251.DEF = "hanim_vl5";
HAnimJoint251.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint251.skinCoordIndex = new MFInt32(new int[28,76]);
HAnimJoint251.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint251.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint251.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment252 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment252.name = "l5";
HAnimSegment252.DEF = "hanim_l5";
let Transform253 = browser.currentScene.createNode("Transform");
Transform253.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
let Shape254 = browser.currentScene.createNode("Shape");
Shape254.USE = "jointbox";
Transform253.children = new MFNode();

Transform253.children[0] = Shape254;

HAnimSegment252.children = new MFNode();

HAnimSegment252.children[0] = Transform253;

let Shape255 = browser.currentScene.createNode("Shape");
let Appearance256 = browser.currentScene.createNode("Appearance");
Appearance256.USE = "SegmentLine";
Shape255.appearance = Appearance256;

let IndexedLineSet257 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet257.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate258 = browser.currentScene.createNode("Coordinate");
Coordinate258.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
IndexedLineSet257.coord = Coordinate258;

Shape255.geometry = IndexedLineSet257;

HAnimSegment252.children[1] = Shape255;

let Shape259 = browser.currentScene.createNode("Shape");
let Appearance260 = browser.currentScene.createNode("Appearance");
Appearance260.USE = "SiteParentLine";
Shape259.appearance = Appearance260;

let IndexedLineSet261 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet261.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1]);
let Coordinate262 = browser.currentScene.createNode("Coordinate");
Coordinate262.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.005,1.0915,-0.1091,0.0069,1.0966,0.1017]);
IndexedLineSet261.coord = Coordinate262;

Shape259.geometry = IndexedLineSet261;

HAnimSegment252.children[2] = Shape259;

let HAnimSite263 = browser.currentScene.createNode("HAnimSite");
HAnimSite263.name = "waist_preferred_post";
HAnimSite263.DEF = "hanim_waist_preferred_post";
HAnimSite263.translation = new SFVec3f(new float[0.005,1.0915,-0.1091]);
let Shape264 = browser.currentScene.createNode("Shape");
Shape264.USE = "sitebox";
HAnimSite263.children = new MFNode();

HAnimSite263.children[0] = Shape264;

HAnimSegment252.children[3] = HAnimSite263;

let HAnimSite265 = browser.currentScene.createNode("HAnimSite");
HAnimSite265.name = "navel";
HAnimSite265.DEF = "hanim_navel";
HAnimSite265.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
let Shape266 = browser.currentScene.createNode("Shape");
Shape266.USE = "sitebox";
HAnimSite265.children = new MFNode();

HAnimSite265.children[0] = Shape266;

HAnimSegment252.children[4] = HAnimSite265;

HAnimJoint251.children = new MFNode();

HAnimJoint251.children[0] = HAnimSegment252;

let HAnimJoint267 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint267.name = "vl4";
HAnimJoint267.DEF = "hanim_vl4";
HAnimJoint267.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint267.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint267.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment268 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment268.name = "l4";
HAnimSegment268.DEF = "hanim_l4";
let Transform269 = browser.currentScene.createNode("Transform");
Transform269.translation = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
let Shape270 = browser.currentScene.createNode("Shape");
Shape270.USE = "jointbox";
Transform269.children = new MFNode();

Transform269.children[0] = Shape270;

HAnimSegment268.children = new MFNode();

HAnimSegment268.children[0] = Transform269;

let Shape271 = browser.currentScene.createNode("Shape");
let Appearance272 = browser.currentScene.createNode("Appearance");
Appearance272.USE = "SegmentLine";
Shape271.appearance = Appearance272;

let IndexedLineSet273 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet273.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate274 = browser.currentScene.createNode("Coordinate");
Coordinate274.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
IndexedLineSet273.coord = Coordinate274;

Shape271.geometry = IndexedLineSet273;

HAnimSegment268.children[1] = Shape271;

HAnimJoint267.children = new MFNode();

HAnimJoint267.children[0] = HAnimSegment268;

let HAnimJoint275 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint275.name = "vl3";
HAnimJoint275.DEF = "hanim_vl3";
HAnimJoint275.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint275.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint275.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment276 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment276.name = "l3";
HAnimSegment276.DEF = "hanim_l3";
let Transform277 = browser.currentScene.createNode("Transform");
Transform277.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
let Shape278 = browser.currentScene.createNode("Shape");
Shape278.USE = "jointbox";
Transform277.children = new MFNode();

Transform277.children[0] = Shape278;

HAnimSegment276.children = new MFNode();

HAnimSegment276.children[0] = Transform277;

let Shape279 = browser.currentScene.createNode("Shape");
let Appearance280 = browser.currentScene.createNode("Appearance");
Appearance280.USE = "SegmentLine";
Shape279.appearance = Appearance280;

let IndexedLineSet281 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet281.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate282 = browser.currentScene.createNode("Coordinate");
Coordinate282.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
IndexedLineSet281.coord = Coordinate282;

Shape279.geometry = IndexedLineSet281;

HAnimSegment276.children[1] = Shape279;

HAnimJoint275.children = new MFNode();

HAnimJoint275.children[0] = HAnimSegment276;

let HAnimJoint283 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint283.name = "vl2";
HAnimJoint283.DEF = "hanim_vl2";
HAnimJoint283.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint283.skinCoordIndex = new MFInt32(new int[16,18,25,83,84,85,86,87,88]);
HAnimJoint283.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,0.7,1,0.8]);
HAnimJoint283.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint283.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment284 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment284.name = "l2";
HAnimSegment284.DEF = "hanim_l2";
let Transform285 = browser.currentScene.createNode("Transform");
Transform285.translation = new SFVec3f(new float[0.0045,1.1546,-0.08]);
let Shape286 = browser.currentScene.createNode("Shape");
Shape286.USE = "jointbox";
Transform285.children = new MFNode();

Transform285.children[0] = Shape286;

HAnimSegment284.children = new MFNode();

HAnimSegment284.children[0] = Transform285;

let Shape287 = browser.currentScene.createNode("Shape");
let Appearance288 = browser.currentScene.createNode("Appearance");
Appearance288.USE = "SegmentLine";
Shape287.appearance = Appearance288;

let IndexedLineSet289 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet289.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate290 = browser.currentScene.createNode("Coordinate");
Coordinate290.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
IndexedLineSet289.coord = Coordinate290;

Shape287.geometry = IndexedLineSet289;

HAnimSegment284.children[1] = Shape287;

let Shape291 = browser.currentScene.createNode("Shape");
let Appearance292 = browser.currentScene.createNode("Appearance");
Appearance292.USE = "SiteParentLine";
Shape291.appearance = Appearance292;

let IndexedLineSet293 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet293.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
let Coordinate294 = browser.currentScene.createNode("Coordinate");
Coordinate294.point = new MFVec3f(new float[0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016,0.0871,1.1925,0.0992,0.0049,1.1908,-0.1113]);
IndexedLineSet293.coord = Coordinate294;

Shape291.geometry = IndexedLineSet293;

HAnimSegment284.children[2] = Shape291;

let HAnimSite295 = browser.currentScene.createNode("HAnimSite");
HAnimSite295.name = "r_rib10";
HAnimSite295.DEF = "hanim_r_rib10";
HAnimSite295.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
let Shape296 = browser.currentScene.createNode("Shape");
Shape296.USE = "sitebox";
HAnimSite295.children = new MFNode();

HAnimSite295.children[0] = Shape296;

HAnimSegment284.children[3] = HAnimSite295;

let HAnimSite297 = browser.currentScene.createNode("HAnimSite");
HAnimSite297.name = "l_rib10";
HAnimSite297.DEF = "hanim_l_rib10";
HAnimSite297.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
let Shape298 = browser.currentScene.createNode("Shape");
Shape298.USE = "sitebox";
HAnimSite297.children = new MFNode();

HAnimSite297.children[0] = Shape298;

HAnimSegment284.children[4] = HAnimSite297;

let HAnimSite299 = browser.currentScene.createNode("HAnimSite");
HAnimSite299.name = "rib10_midspine";
HAnimSite299.DEF = "hanim_rib10_midspine";
HAnimSite299.translation = new SFVec3f(new float[0.0049,1.1908,-0.1113]);
let Shape300 = browser.currentScene.createNode("Shape");
Shape300.USE = "sitebox";
HAnimSite299.children = new MFNode();

HAnimSite299.children[0] = Shape300;

HAnimSegment284.children[5] = HAnimSite299;

HAnimJoint283.children = new MFNode();

HAnimJoint283.children[0] = HAnimSegment284;

let HAnimJoint301 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint301.name = "vl1";
HAnimJoint301.DEF = "hanim_vl1";
HAnimJoint301.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint301.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint301.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment302 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment302.name = "l1";
HAnimSegment302.DEF = "hanim_l1";
let Transform303 = browser.currentScene.createNode("Transform");
Transform303.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
let Shape304 = browser.currentScene.createNode("Shape");
Shape304.USE = "jointbox";
Transform303.children = new MFNode();

Transform303.children[0] = Shape304;

HAnimSegment302.children = new MFNode();

HAnimSegment302.children[0] = Transform303;

let Shape305 = browser.currentScene.createNode("Shape");
let Appearance306 = browser.currentScene.createNode("Appearance");
Appearance306.USE = "SegmentLine";
Shape305.appearance = Appearance306;

let IndexedLineSet307 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet307.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate308 = browser.currentScene.createNode("Coordinate");
Coordinate308.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
IndexedLineSet307.coord = Coordinate308;

Shape305.geometry = IndexedLineSet307;

HAnimSegment302.children[1] = Shape305;

HAnimJoint301.children = new MFNode();

HAnimJoint301.children[0] = HAnimSegment302;

let HAnimJoint309 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint309.name = "vt12";
HAnimJoint309.DEF = "hanim_vt12";
HAnimJoint309.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint309.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint309.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment310 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment310.name = "t12";
HAnimSegment310.DEF = "hanim_t12";
let Transform311 = browser.currentScene.createNode("Transform");
Transform311.translation = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
let Shape312 = browser.currentScene.createNode("Shape");
Shape312.USE = "jointbox";
Transform311.children = new MFNode();

Transform311.children[0] = Shape312;

HAnimSegment310.children = new MFNode();

HAnimSegment310.children[0] = Transform311;

let Shape313 = browser.currentScene.createNode("Shape");
let Appearance314 = browser.currentScene.createNode("Appearance");
Appearance314.USE = "SegmentLine";
Shape313.appearance = Appearance314;

let IndexedLineSet315 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet315.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate316 = browser.currentScene.createNode("Coordinate");
Coordinate316.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
IndexedLineSet315.coord = Coordinate316;

Shape313.geometry = IndexedLineSet315;

HAnimSegment310.children[1] = Shape313;

HAnimJoint309.children = new MFNode();

HAnimJoint309.children[0] = HAnimSegment310;

let HAnimJoint317 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint317.name = "vt11";
HAnimJoint317.DEF = "hanim_vt11";
HAnimJoint317.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint317.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint317.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment318 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment318.name = "t11";
HAnimSegment318.DEF = "hanim_t11";
let Transform319 = browser.currentScene.createNode("Transform");
Transform319.translation = new SFVec3f(new float[0.0053,1.2679,-0.081]);
let Shape320 = browser.currentScene.createNode("Shape");
Shape320.USE = "jointbox";
Transform319.children = new MFNode();

Transform319.children[0] = Shape320;

HAnimSegment318.children = new MFNode();

HAnimSegment318.children[0] = Transform319;

let Shape321 = browser.currentScene.createNode("Shape");
let Appearance322 = browser.currentScene.createNode("Appearance");
Appearance322.USE = "SegmentLine";
Shape321.appearance = Appearance322;

let IndexedLineSet323 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet323.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate324 = browser.currentScene.createNode("Coordinate");
Coordinate324.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
IndexedLineSet323.coord = Coordinate324;

Shape321.geometry = IndexedLineSet323;

HAnimSegment318.children[1] = Shape321;

HAnimJoint317.children = new MFNode();

HAnimJoint317.children[0] = HAnimSegment318;

let HAnimJoint325 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint325.name = "vt10";
HAnimJoint325.DEF = "hanim_vt10";
HAnimJoint325.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint325.skinCoordIndex = new MFInt32(new int[15]);
HAnimJoint325.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint325.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint325.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment326 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment326.name = "t10";
HAnimSegment326.DEF = "hanim_t10";
let Transform327 = browser.currentScene.createNode("Transform");
Transform327.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
let Shape328 = browser.currentScene.createNode("Shape");
Shape328.USE = "jointbox";
Transform327.children = new MFNode();

Transform327.children[0] = Shape328;

HAnimSegment326.children = new MFNode();

HAnimSegment326.children[0] = Transform327;

let Shape329 = browser.currentScene.createNode("Shape");
let Appearance330 = browser.currentScene.createNode("Appearance");
Appearance330.USE = "SegmentLine";
Shape329.appearance = Appearance330;

let IndexedLineSet331 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet331.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate332 = browser.currentScene.createNode("Coordinate");
Coordinate332.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
IndexedLineSet331.coord = Coordinate332;

Shape329.geometry = IndexedLineSet331;

HAnimSegment326.children[1] = Shape329;

let Shape333 = browser.currentScene.createNode("Shape");
let Appearance334 = browser.currentScene.createNode("Appearance");
Appearance334.USE = "SiteParentLine";
Shape333.appearance = Appearance334;

let IndexedLineSet335 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet335.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate336 = browser.currentScene.createNode("Coordinate");
Coordinate336.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147]);
IndexedLineSet335.coord = Coordinate336;

Shape333.geometry = IndexedLineSet335;

HAnimSegment326.children[2] = Shape333;

let HAnimSite337 = browser.currentScene.createNode("HAnimSite");
HAnimSite337.name = "substernale";
HAnimSite337.DEF = "hanim_substernale";
HAnimSite337.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
let Shape338 = browser.currentScene.createNode("Shape");
Shape338.USE = "sitebox";
HAnimSite337.children = new MFNode();

HAnimSite337.children[0] = Shape338;

HAnimSegment326.children[3] = HAnimSite337;

HAnimJoint325.children = new MFNode();

HAnimJoint325.children[0] = HAnimSegment326;

let HAnimJoint339 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint339.name = "vt9";
HAnimJoint339.DEF = "hanim_vt9";
HAnimJoint339.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint339.skinCoordIndex = new MFInt32(new int[13,14]);
HAnimJoint339.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint339.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint339.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment340 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment340.name = "t9";
HAnimSegment340.DEF = "hanim_t9";
let Transform341 = browser.currentScene.createNode("Transform");
Transform341.translation = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
let Shape342 = browser.currentScene.createNode("Shape");
Shape342.USE = "jointbox";
Transform341.children = new MFNode();

Transform341.children[0] = Shape342;

HAnimSegment340.children = new MFNode();

HAnimSegment340.children[0] = Transform341;

let Shape343 = browser.currentScene.createNode("Shape");
let Appearance344 = browser.currentScene.createNode("Appearance");
Appearance344.USE = "SegmentLine";
Shape343.appearance = Appearance344;

let IndexedLineSet345 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet345.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate346 = browser.currentScene.createNode("Coordinate");
Coordinate346.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
IndexedLineSet345.coord = Coordinate346;

Shape343.geometry = IndexedLineSet345;

HAnimSegment340.children[1] = Shape343;

let Shape347 = browser.currentScene.createNode("Shape");
let Appearance348 = browser.currentScene.createNode("Appearance");
Appearance348.USE = "SiteParentLine";
Shape347.appearance = Appearance348;

let IndexedLineSet349 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet349.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
let Coordinate350 = browser.currentScene.createNode("Coordinate");
Coordinate350.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217,0.0918,1.3382,0.1192,0.0057,1.3382,-0.0845]);
IndexedLineSet349.coord = Coordinate350;

Shape347.geometry = IndexedLineSet349;

HAnimSegment340.children[2] = Shape347;

let HAnimSite351 = browser.currentScene.createNode("HAnimSite");
HAnimSite351.name = "r_thelion";
HAnimSite351.DEF = "hanim_r_thelion";
HAnimSite351.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
let Shape352 = browser.currentScene.createNode("Shape");
Shape352.USE = "sitebox";
HAnimSite351.children = new MFNode();

HAnimSite351.children[0] = Shape352;

HAnimSegment340.children[3] = HAnimSite351;

let HAnimSite353 = browser.currentScene.createNode("HAnimSite");
HAnimSite353.name = "l_thelion";
HAnimSite353.DEF = "hanim_l_thelion";
HAnimSite353.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
let Shape354 = browser.currentScene.createNode("Shape");
Shape354.USE = "sitebox";
HAnimSite353.children = new MFNode();

HAnimSite353.children[0] = Shape354;

HAnimSegment340.children[4] = HAnimSite353;

HAnimJoint339.children = new MFNode();

HAnimJoint339.children[0] = HAnimSegment340;

let HAnimJoint355 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint355.name = "vt8";
HAnimJoint355.DEF = "hanim_vt8";
HAnimJoint355.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint355.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint355.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment356 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment356.name = "t8";
HAnimSegment356.DEF = "hanim_t8";
let Transform357 = browser.currentScene.createNode("Transform");
Transform357.translation = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
let Shape358 = browser.currentScene.createNode("Shape");
Shape358.USE = "jointbox";
Transform357.children = new MFNode();

Transform357.children[0] = Shape358;

HAnimSegment356.children = new MFNode();

HAnimSegment356.children[0] = Transform357;

let Shape359 = browser.currentScene.createNode("Shape");
let Appearance360 = browser.currentScene.createNode("Appearance");
Appearance360.USE = "SegmentLine";
Shape359.appearance = Appearance360;

let IndexedLineSet361 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet361.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate362 = browser.currentScene.createNode("Coordinate");
Coordinate362.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
IndexedLineSet361.coord = Coordinate362;

Shape359.geometry = IndexedLineSet361;

HAnimSegment356.children[1] = Shape359;

HAnimJoint355.children = new MFNode();

HAnimJoint355.children[0] = HAnimSegment356;

let HAnimJoint363 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint363.name = "vt7";
HAnimJoint363.DEF = "hanim_vt7";
HAnimJoint363.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint363.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint363.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment364 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment364.name = "t7";
HAnimSegment364.DEF = "hanim_t7";
let Transform365 = browser.currentScene.createNode("Transform");
Transform365.translation = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
let Shape366 = browser.currentScene.createNode("Shape");
Shape366.USE = "jointbox";
Transform365.children = new MFNode();

Transform365.children[0] = Shape366;

HAnimSegment364.children = new MFNode();

HAnimSegment364.children[0] = Transform365;

let Shape367 = browser.currentScene.createNode("Shape");
let Appearance368 = browser.currentScene.createNode("Appearance");
Appearance368.USE = "SegmentLine";
Shape367.appearance = Appearance368;

let IndexedLineSet369 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet369.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate370 = browser.currentScene.createNode("Coordinate");
Coordinate370.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
IndexedLineSet369.coord = Coordinate370;

Shape367.geometry = IndexedLineSet369;

HAnimSegment364.children[1] = Shape367;

HAnimJoint363.children = new MFNode();

HAnimJoint363.children[0] = HAnimSegment364;

let HAnimJoint371 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint371.name = "vt6";
HAnimJoint371.DEF = "hanim_vt6";
HAnimJoint371.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint371.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint371.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment372 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment372.name = "t6";
HAnimSegment372.DEF = "hanim_t6";
let Transform373 = browser.currentScene.createNode("Transform");
Transform373.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
let Shape374 = browser.currentScene.createNode("Shape");
Shape374.USE = "jointbox";
Transform373.children = new MFNode();

Transform373.children[0] = Shape374;

HAnimSegment372.children = new MFNode();

HAnimSegment372.children[0] = Transform373;

let Shape375 = browser.currentScene.createNode("Shape");
let Appearance376 = browser.currentScene.createNode("Appearance");
Appearance376.USE = "SegmentLine";
Shape375.appearance = Appearance376;

let IndexedLineSet377 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet377.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate378 = browser.currentScene.createNode("Coordinate");
Coordinate378.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
IndexedLineSet377.coord = Coordinate378;

Shape375.geometry = IndexedLineSet377;

HAnimSegment372.children[1] = Shape375;

HAnimJoint371.children = new MFNode();

HAnimJoint371.children[0] = HAnimSegment372;

let HAnimJoint379 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint379.name = "vt5";
HAnimJoint379.DEF = "hanim_vt5";
HAnimJoint379.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint379.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint379.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment380 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment380.name = "t5";
HAnimSegment380.DEF = "hanim_t5";
let Transform381 = browser.currentScene.createNode("Transform");
Transform381.translation = new SFVec3f(new float[0.006,1.4102,-0.0745]);
let Shape382 = browser.currentScene.createNode("Shape");
Shape382.USE = "jointbox";
Transform381.children = new MFNode();

Transform381.children[0] = Shape382;

HAnimSegment380.children = new MFNode();

HAnimSegment380.children[0] = Transform381;

let Shape383 = browser.currentScene.createNode("Shape");
let Appearance384 = browser.currentScene.createNode("Appearance");
Appearance384.USE = "SegmentLine";
Shape383.appearance = Appearance384;

let IndexedLineSet385 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet385.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate386 = browser.currentScene.createNode("Coordinate");
Coordinate386.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
IndexedLineSet385.coord = Coordinate386;

Shape383.geometry = IndexedLineSet385;

HAnimSegment380.children[1] = Shape383;

HAnimJoint379.children = new MFNode();

HAnimJoint379.children[0] = HAnimSegment380;

let HAnimJoint387 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint387.name = "vt4";
HAnimJoint387.DEF = "hanim_vt4";
HAnimJoint387.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint387.skinCoordIndex = new MFInt32(new int[81]);
HAnimJoint387.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint387.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint387.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment388 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment388.name = "t4";
HAnimSegment388.DEF = "hanim_t4";
let Transform389 = browser.currentScene.createNode("Transform");
Transform389.translation = new SFVec3f(new float[0.0061,1.432,-0.0675]);
let Shape390 = browser.currentScene.createNode("Shape");
Shape390.USE = "jointbox";
Transform389.children = new MFNode();

Transform389.children[0] = Shape390;

HAnimSegment388.children = new MFNode();

HAnimSegment388.children[0] = Transform389;

let Shape391 = browser.currentScene.createNode("Shape");
let Appearance392 = browser.currentScene.createNode("Appearance");
Appearance392.USE = "SegmentLine";
Shape391.appearance = Appearance392;

let IndexedLineSet393 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet393.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate394 = browser.currentScene.createNode("Coordinate");
Coordinate394.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
IndexedLineSet393.coord = Coordinate394;

Shape391.geometry = IndexedLineSet393;

HAnimSegment388.children[1] = Shape391;

HAnimJoint387.children = new MFNode();

HAnimJoint387.children[0] = HAnimSegment388;

let HAnimJoint395 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint395.name = "vt3";
HAnimJoint395.DEF = "hanim_vt3";
HAnimJoint395.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint395.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint395.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment396 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment396.name = "t3";
HAnimSegment396.DEF = "hanim_t3";
let Transform397 = browser.currentScene.createNode("Transform");
Transform397.translation = new SFVec3f(new float[0.0062,1.4583,-0.057]);
let Shape398 = browser.currentScene.createNode("Shape");
Shape398.USE = "jointbox";
Transform397.children = new MFNode();

Transform397.children[0] = Shape398;

HAnimSegment396.children = new MFNode();

HAnimSegment396.children[0] = Transform397;

let Shape399 = browser.currentScene.createNode("Shape");
let Appearance400 = browser.currentScene.createNode("Appearance");
Appearance400.USE = "SegmentLine";
Shape399.appearance = Appearance400;

let IndexedLineSet401 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet401.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate402 = browser.currentScene.createNode("Coordinate");
Coordinate402.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
IndexedLineSet401.coord = Coordinate402;

Shape399.geometry = IndexedLineSet401;

HAnimSegment396.children[1] = Shape399;

HAnimJoint395.children = new MFNode();

HAnimJoint395.children[0] = HAnimSegment396;

let HAnimJoint403 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint403.name = "vt2";
HAnimJoint403.DEF = "hanim_vt2";
HAnimJoint403.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint403.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint403.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment404 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment404.name = "t2";
HAnimSegment404.DEF = "hanim_t2";
let Transform405 = browser.currentScene.createNode("Transform");
Transform405.translation = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
let Shape406 = browser.currentScene.createNode("Shape");
Shape406.USE = "jointbox";
Transform405.children = new MFNode();

Transform405.children[0] = Shape406;

HAnimSegment404.children = new MFNode();

HAnimSegment404.children[0] = Transform405;

let Shape407 = browser.currentScene.createNode("Shape");
let Appearance408 = browser.currentScene.createNode("Appearance");
Appearance408.USE = "SegmentLine";
Shape407.appearance = Appearance408;

let IndexedLineSet409 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet409.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate410 = browser.currentScene.createNode("Coordinate");
Coordinate410.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
IndexedLineSet409.coord = Coordinate410;

Shape407.geometry = IndexedLineSet409;

HAnimSegment404.children[1] = Shape407;

HAnimJoint403.children = new MFNode();

HAnimJoint403.children[0] = HAnimSegment404;

let HAnimJoint411 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint411.name = "vt1";
HAnimJoint411.DEF = "hanim_vt1";
HAnimJoint411.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint411.skinCoordIndex = new MFInt32(new int[11,24]);
HAnimJoint411.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint411.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint411.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment412 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment412.name = "t1";
HAnimSegment412.DEF = "hanim_t1";
let Transform413 = browser.currentScene.createNode("Transform");
Transform413.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
let Shape414 = browser.currentScene.createNode("Shape");
Shape414.USE = "jointbox";
Transform413.children = new MFNode();

Transform413.children[0] = Shape414;

HAnimSegment412.children = new MFNode();

HAnimSegment412.children[0] = Transform413;

let Shape415 = browser.currentScene.createNode("Shape");
let Appearance416 = browser.currentScene.createNode("Appearance");
Appearance416.USE = "SegmentLine";
Shape415.appearance = Appearance416;

let IndexedLineSet417 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet417.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
let Coordinate418 = browser.currentScene.createNode("Coordinate");
Coordinate418.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301,0.082,1.4488,-0.0353,-0.0694,1.46,-0.033]);
IndexedLineSet417.coord = Coordinate418;

Shape415.geometry = IndexedLineSet417;

HAnimSegment412.children[1] = Shape415;

let Shape419 = browser.currentScene.createNode("Shape");
let Appearance420 = browser.currentScene.createNode("Appearance");
Appearance420.USE = "SiteParentLine";
Shape419.appearance = Appearance420;

let IndexedLineSet421 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet421.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1]);
let Coordinate422 = browser.currentScene.createNode("Coordinate");
Coordinate422.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551,0.0064,1.52,-0.0815]);
IndexedLineSet421.coord = Coordinate422;

Shape419.geometry = IndexedLineSet421;

HAnimSegment412.children[2] = Shape419;

let HAnimSite423 = browser.currentScene.createNode("HAnimSite");
HAnimSite423.name = "suprasternale";
HAnimSite423.DEF = "hanim_suprasternale";
HAnimSite423.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
let Shape424 = browser.currentScene.createNode("Shape");
Shape424.USE = "sitebox";
HAnimSite423.children = new MFNode();

HAnimSite423.children[0] = Shape424;

HAnimSegment412.children[3] = HAnimSite423;

let HAnimSite425 = browser.currentScene.createNode("HAnimSite");
HAnimSite425.name = "cervicale";
HAnimSite425.DEF = "hanim_cervicale";
HAnimSite425.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
let Shape426 = browser.currentScene.createNode("Shape");
Shape426.USE = "sitebox";
HAnimSite425.children = new MFNode();

HAnimSite425.children[0] = Shape426;

HAnimSegment412.children[4] = HAnimSite425;

HAnimJoint411.children = new MFNode();

HAnimJoint411.children[0] = HAnimSegment412;

let HAnimJoint427 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint427.name = "vc7";
HAnimJoint427.DEF = "hanim_vc7";
HAnimJoint427.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint427.skinCoordIndex = new MFInt32(new int[74,75]);
HAnimJoint427.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint427.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint427.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment428 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment428.name = "c7";
HAnimSegment428.DEF = "hanim_c7";
let Transform429 = browser.currentScene.createNode("Transform");
Transform429.translation = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
let Shape430 = browser.currentScene.createNode("Shape");
Shape430.USE = "jointbox";
Transform429.children = new MFNode();

Transform429.children[0] = Shape430;

HAnimSegment428.children = new MFNode();

HAnimSegment428.children[0] = Transform429;

let Shape431 = browser.currentScene.createNode("Shape");
let Appearance432 = browser.currentScene.createNode("Appearance");
Appearance432.USE = "SegmentLine";
Shape431.appearance = Appearance432;

let IndexedLineSet433 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet433.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate434 = browser.currentScene.createNode("Coordinate");
Coordinate434.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
IndexedLineSet433.coord = Coordinate434;

Shape431.geometry = IndexedLineSet433;

HAnimSegment428.children[1] = Shape431;

let Shape435 = browser.currentScene.createNode("Shape");
let Appearance436 = browser.currentScene.createNode("Appearance");
Appearance436.USE = "SiteParentLine";
Shape435.appearance = Appearance436;

let IndexedLineSet437 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet437.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1]);
let Coordinate438 = browser.currentScene.createNode("Coordinate");
Coordinate438.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022,0.0646,1.5141,-0.038]);
IndexedLineSet437.coord = Coordinate438;

Shape435.geometry = IndexedLineSet437;

HAnimSegment428.children[2] = Shape435;

let HAnimSite439 = browser.currentScene.createNode("HAnimSite");
HAnimSite439.name = "r_neck_base";
HAnimSite439.DEF = "hanim_r_neck_base";
HAnimSite439.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
let Shape440 = browser.currentScene.createNode("Shape");
Shape440.USE = "sitebox";
HAnimSite439.children = new MFNode();

HAnimSite439.children[0] = Shape440;

HAnimSegment428.children[3] = HAnimSite439;

let HAnimSite441 = browser.currentScene.createNode("HAnimSite");
HAnimSite441.name = "l_neck_base";
HAnimSite441.DEF = "hanim_l_neck_base";
HAnimSite441.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
let Shape442 = browser.currentScene.createNode("Shape");
Shape442.USE = "sitebox";
HAnimSite441.children = new MFNode();

HAnimSite441.children[0] = Shape442;

HAnimSegment428.children[4] = HAnimSite441;

HAnimJoint427.children = new MFNode();

HAnimJoint427.children[0] = HAnimSegment428;

let HAnimJoint443 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint443.name = "vc6";
HAnimJoint443.DEF = "hanim_vc6";
HAnimJoint443.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint443.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint443.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment444 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment444.name = "c6";
HAnimSegment444.DEF = "hanim_c6";
let Transform445 = browser.currentScene.createNode("Transform");
Transform445.DEF = "cordsysvc6";
Transform445.translation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
Transform445.scale = new SFVec3f(new float[0.175,0.175,0.175]);
let Inline446 = browser.currentScene.createNode("Inline");
Inline446.global = True;
Inline446.url = new MFString(new java.lang.String["JointCoordinateAxes.x3dv"]);
Transform445.children = new MFNode();

Transform445.children[0] = Inline446;

HAnimSegment444.children = new MFNode();

HAnimSegment444.children[0] = Transform445;

let Transform447 = browser.currentScene.createNode("Transform");
Transform447.translation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
let Shape448 = browser.currentScene.createNode("Shape");
Shape448.USE = "jointbox";
Transform447.children = new MFNode();

Transform447.children[0] = Shape448;

HAnimSegment444.children[1] = Transform447;

let Shape449 = browser.currentScene.createNode("Shape");
let Appearance450 = browser.currentScene.createNode("Appearance");
Appearance450.USE = "SegmentLine";
Shape449.appearance = Appearance450;

let IndexedLineSet451 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet451.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate452 = browser.currentScene.createNode("Coordinate");
Coordinate452.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
IndexedLineSet451.coord = Coordinate452;

Shape449.geometry = IndexedLineSet451;

HAnimSegment444.children[2] = Shape449;

HAnimJoint443.children = new MFNode();

HAnimJoint443.children[0] = HAnimSegment444;

let HAnimJoint453 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint453.name = "vc5";
HAnimJoint453.DEF = "hanim_vc5";
HAnimJoint453.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint453.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint453.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment454 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment454.name = "c5";
HAnimSegment454.DEF = "hanim_c5";
let Transform455 = browser.currentScene.createNode("Transform");
Transform455.translation = new SFVec3f(new float[0.0066,1.552,-0.0082]);
let Shape456 = browser.currentScene.createNode("Shape");
Shape456.USE = "jointbox";
Transform455.children = new MFNode();

Transform455.children[0] = Shape456;

HAnimSegment454.children = new MFNode();

HAnimSegment454.children[0] = Transform455;

let Shape457 = browser.currentScene.createNode("Shape");
let Appearance458 = browser.currentScene.createNode("Appearance");
Appearance458.USE = "SegmentLine";
Shape457.appearance = Appearance458;

let IndexedLineSet459 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet459.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate460 = browser.currentScene.createNode("Coordinate");
Coordinate460.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
IndexedLineSet459.coord = Coordinate460;

Shape457.geometry = IndexedLineSet459;

HAnimSegment454.children[1] = Shape457;

HAnimJoint453.children = new MFNode();

HAnimJoint453.children[0] = HAnimSegment454;

let HAnimJoint461 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint461.name = "vc4";
HAnimJoint461.DEF = "hanim_vc4";
HAnimJoint461.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint461.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint461.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment462 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment462.name = "c4";
HAnimSegment462.DEF = "hanim_c4";
let Transform463 = browser.currentScene.createNode("Transform");
Transform463.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
let Shape464 = browser.currentScene.createNode("Shape");
Shape464.USE = "jointbox";
Transform463.children = new MFNode();

Transform463.children[0] = Shape464;

HAnimSegment462.children = new MFNode();

HAnimSegment462.children[0] = Transform463;

let Shape465 = browser.currentScene.createNode("Shape");
let Appearance466 = browser.currentScene.createNode("Appearance");
Appearance466.USE = "SegmentLine";
Shape465.appearance = Appearance466;

let IndexedLineSet467 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet467.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate468 = browser.currentScene.createNode("Coordinate");
Coordinate468.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
IndexedLineSet467.coord = Coordinate468;

Shape465.geometry = IndexedLineSet467;

HAnimSegment462.children[1] = Shape465;

HAnimJoint461.children = new MFNode();

HAnimJoint461.children[0] = HAnimSegment462;

let HAnimJoint469 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint469.name = "vc3";
HAnimJoint469.DEF = "hanim_vc3";
HAnimJoint469.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint469.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint469.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment470 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment470.name = "c3";
HAnimSegment470.DEF = "hanim_c3";
let Transform471 = browser.currentScene.createNode("Transform");
Transform471.translation = new SFVec3f(new float[0.0066,1.58,-0.0103]);
let Shape472 = browser.currentScene.createNode("Shape");
Shape472.USE = "jointbox";
Transform471.children = new MFNode();

Transform471.children[0] = Shape472;

HAnimSegment470.children = new MFNode();

HAnimSegment470.children[0] = Transform471;

let Shape473 = browser.currentScene.createNode("Shape");
let Appearance474 = browser.currentScene.createNode("Appearance");
Appearance474.USE = "SegmentLine";
Shape473.appearance = Appearance474;

let IndexedLineSet475 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet475.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate476 = browser.currentScene.createNode("Coordinate");
Coordinate476.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.5928,-0.0103]);
IndexedLineSet475.coord = Coordinate476;

Shape473.geometry = IndexedLineSet475;

HAnimSegment470.children[1] = Shape473;

HAnimJoint469.children = new MFNode();

HAnimJoint469.children[0] = HAnimSegment470;

let HAnimJoint477 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint477.name = "vc2";
HAnimJoint477.DEF = "hanim_vc2";
HAnimJoint477.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint477.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint477.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment478 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment478.name = "c2";
HAnimSegment478.DEF = "hanim_c2";
let Transform479 = browser.currentScene.createNode("Transform");
Transform479.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
let Shape480 = browser.currentScene.createNode("Shape");
Shape480.USE = "jointbox";
Transform479.children = new MFNode();

Transform479.children[0] = Shape480;

HAnimSegment478.children = new MFNode();

HAnimSegment478.children[0] = Transform479;

let Shape481 = browser.currentScene.createNode("Shape");
let Appearance482 = browser.currentScene.createNode("Appearance");
Appearance482.USE = "SegmentLine";
Shape481.appearance = Appearance482;

let IndexedLineSet483 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet483.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate484 = browser.currentScene.createNode("Coordinate");
Coordinate484.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
IndexedLineSet483.coord = Coordinate484;

Shape481.geometry = IndexedLineSet483;

HAnimSegment478.children[1] = Shape481;

HAnimJoint477.children = new MFNode();

HAnimJoint477.children[0] = HAnimSegment478;

let HAnimJoint485 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint485.name = "vc1";
HAnimJoint485.DEF = "hanim_vc1";
HAnimJoint485.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint485.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint485.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment486 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment486.name = "c1";
HAnimSegment486.DEF = "hanim_c1";
let Transform487 = browser.currentScene.createNode("Transform");
Transform487.translation = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
let Shape488 = browser.currentScene.createNode("Shape");
Shape488.USE = "jointbox";
Transform487.children = new MFNode();

Transform487.children[0] = Shape488;

HAnimSegment486.children = new MFNode();

HAnimSegment486.children[0] = Transform487;

let Shape489 = browser.currentScene.createNode("Shape");
let Appearance490 = browser.currentScene.createNode("Appearance");
Appearance490.USE = "SegmentLine";
Shape489.appearance = Appearance490;

let IndexedLineSet491 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet491.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate492 = browser.currentScene.createNode("Coordinate");
Coordinate492.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
IndexedLineSet491.coord = Coordinate492;

Shape489.geometry = IndexedLineSet491;

HAnimSegment486.children[1] = Shape489;

HAnimJoint485.children = new MFNode();

HAnimJoint485.children[0] = HAnimSegment486;

let HAnimJoint493 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint493.name = "skullbase";
HAnimJoint493.DEF = "hanim_skullbase";
HAnimJoint493.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint493.skinCoordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9]);
HAnimJoint493.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1]);
HAnimJoint493.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint493.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment494 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment494.name = "skull";
HAnimSegment494.DEF = "hanim_skull";
let Transform495 = browser.currentScene.createNode("Transform");
Transform495.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
let Shape496 = browser.currentScene.createNode("Shape");
Shape496.USE = "jointbox";
Transform495.children = new MFNode();

Transform495.children[0] = Shape496;

HAnimSegment494.children = new MFNode();

HAnimSegment494.children[0] = Transform495;

let Shape497 = browser.currentScene.createNode("Shape");
let Appearance498 = browser.currentScene.createNode("Appearance");
Appearance498.USE = "SegmentLine";
Shape497.appearance = Appearance498;

let IndexedLineSet499 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet499.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1]);
let Coordinate500 = browser.currentScene.createNode("Coordinate");
Coordinate500.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0336,1.6332,0.0502,-0.0236,1.6331,0.051]);
IndexedLineSet499.coord = Coordinate500;

Shape497.geometry = IndexedLineSet499;

HAnimSegment494.children[1] = Shape497;

let Shape501 = browser.currentScene.createNode("Shape");
let Appearance502 = browser.currentScene.createNode("Appearance");
Appearance502.USE = "SiteParentLine";
Shape501.appearance = Appearance502;

let IndexedLineSet503 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet503.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1,0,6,-1,0,7,-1,0,8,-1,0,9,-1,0,10,-1]);
let Coordinate504 = browser.currentScene.createNode("Coordinate");
Coordinate504.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.005,1.7504,0.0055,0.0058,1.6316,0.0852,-0.0237,1.6171,0.0752,0.0341,1.6171,0.0752,0.0061,1.541,0.0805,-0.0646,1.6347,0.0302,-0.052,1.5529,0.0347,0.0739,1.6348,0.0282,0.0631,1.553,0.033,0.0039,1.5972,-0.0796]);
IndexedLineSet503.coord = Coordinate504;

Shape501.geometry = IndexedLineSet503;

HAnimSegment494.children[2] = Shape501;

let HAnimSite505 = browser.currentScene.createNode("HAnimSite");
HAnimSite505.name = "skull_tip";
HAnimSite505.DEF = "hanim_skull_tip";
HAnimSite505.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
let Shape506 = browser.currentScene.createNode("Shape");
Shape506.USE = "sitebox";
HAnimSite505.children = new MFNode();

HAnimSite505.children[0] = Shape506;

HAnimSegment494.children[3] = HAnimSite505;

let HAnimSite507 = browser.currentScene.createNode("HAnimSite");
HAnimSite507.name = "sellion";
HAnimSite507.DEF = "hanim_sellion";
HAnimSite507.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
let Shape508 = browser.currentScene.createNode("Shape");
Shape508.USE = "sitebox";
HAnimSite507.children = new MFNode();

HAnimSite507.children[0] = Shape508;

HAnimSegment494.children[4] = HAnimSite507;

let HAnimSite509 = browser.currentScene.createNode("HAnimSite");
HAnimSite509.name = "r_infraorbitale";
HAnimSite509.DEF = "hanim_r_infraorbitale";
HAnimSite509.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
let Shape510 = browser.currentScene.createNode("Shape");
Shape510.USE = "sitebox";
HAnimSite509.children = new MFNode();

HAnimSite509.children[0] = Shape510;

HAnimSegment494.children[5] = HAnimSite509;

let HAnimSite511 = browser.currentScene.createNode("HAnimSite");
HAnimSite511.name = "l_infraorbitale";
HAnimSite511.DEF = "hanim_l_infraorbitale";
HAnimSite511.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
let Shape512 = browser.currentScene.createNode("Shape");
Shape512.USE = "sitebox";
HAnimSite511.children = new MFNode();

HAnimSite511.children[0] = Shape512;

HAnimSegment494.children[6] = HAnimSite511;

let HAnimSite513 = browser.currentScene.createNode("HAnimSite");
HAnimSite513.name = "supramenton";
HAnimSite513.DEF = "hanim_supramenton";
HAnimSite513.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
let Shape514 = browser.currentScene.createNode("Shape");
Shape514.USE = "sitebox";
HAnimSite513.children = new MFNode();

HAnimSite513.children[0] = Shape514;

HAnimSegment494.children[7] = HAnimSite513;

let HAnimSite515 = browser.currentScene.createNode("HAnimSite");
HAnimSite515.name = "r_tragion";
HAnimSite515.DEF = "hanim_r_tragion";
HAnimSite515.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
let Shape516 = browser.currentScene.createNode("Shape");
Shape516.USE = "sitebox";
HAnimSite515.children = new MFNode();

HAnimSite515.children[0] = Shape516;

HAnimSegment494.children[8] = HAnimSite515;

let HAnimSite517 = browser.currentScene.createNode("HAnimSite");
HAnimSite517.name = "r_gonion";
HAnimSite517.DEF = "hanim_r_gonion";
HAnimSite517.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
let Shape518 = browser.currentScene.createNode("Shape");
Shape518.USE = "sitebox";
HAnimSite517.children = new MFNode();

HAnimSite517.children[0] = Shape518;

HAnimSegment494.children[9] = HAnimSite517;

let HAnimSite519 = browser.currentScene.createNode("HAnimSite");
HAnimSite519.name = "l_tragion";
HAnimSite519.DEF = "hanim_l_tragion";
HAnimSite519.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
let Shape520 = browser.currentScene.createNode("Shape");
Shape520.USE = "sitebox";
HAnimSite519.children = new MFNode();

HAnimSite519.children[0] = Shape520;

HAnimSegment494.children[10] = HAnimSite519;

let HAnimSite521 = browser.currentScene.createNode("HAnimSite");
HAnimSite521.name = "l_gonion";
HAnimSite521.DEF = "hanim_l_gonion";
HAnimSite521.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
let Shape522 = browser.currentScene.createNode("Shape");
Shape522.USE = "sitebox";
HAnimSite521.children = new MFNode();

HAnimSite521.children[0] = Shape522;

HAnimSegment494.children[11] = HAnimSite521;

let HAnimSite523 = browser.currentScene.createNode("HAnimSite");
HAnimSite523.name = "nuchale";
HAnimSite523.DEF = "hanim_nuchale";
HAnimSite523.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
let Shape524 = browser.currentScene.createNode("Shape");
Shape524.USE = "sitebox";
HAnimSite523.children = new MFNode();

HAnimSite523.children[0] = Shape524;

HAnimSegment494.children[12] = HAnimSite523;

HAnimJoint493.children = new MFNode();

HAnimJoint493.children[0] = HAnimSegment494;

let HAnimJoint525 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint525.name = "l_eyeball_joint";
HAnimJoint525.DEF = "hanim_l_eyeball_joint";
HAnimJoint525.center = new SFVec3f(new float[0.0336,1.6332,0.0502]);
HAnimJoint525.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint525.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment526 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment526.name = "l_eyeball";
HAnimSegment526.DEF = "hanim_l_eyeball";
let Transform527 = browser.currentScene.createNode("Transform");
Transform527.translation = new SFVec3f(new float[0.0336,1.6332,0.0502]);
let Shape528 = browser.currentScene.createNode("Shape");
Shape528.USE = "jointbox";
Transform527.children = new MFNode();

Transform527.children[0] = Shape528;

HAnimSegment526.children = new MFNode();

HAnimSegment526.children[0] = Transform527;

let Shape529 = browser.currentScene.createNode("Shape");
let Appearance530 = browser.currentScene.createNode("Appearance");
Appearance530.USE = "SegmentLine";
Shape529.appearance = Appearance530;

let IndexedLineSet531 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet531.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate532 = browser.currentScene.createNode("Coordinate");
Coordinate532.point = new MFVec3f(new float[0.0336,1.6332,0.0502,0.0336,1.6332,0.0702]);
IndexedLineSet531.coord = Coordinate532;

Shape529.geometry = IndexedLineSet531;

HAnimSegment526.children[1] = Shape529;

HAnimJoint525.children = new MFNode();

HAnimJoint525.children[0] = HAnimSegment526;

HAnimJoint493.children[1] = HAnimJoint525;

let HAnimJoint533 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint533.name = "r_eyeball_joint";
HAnimJoint533.DEF = "hanim_r_eyeball_joint";
HAnimJoint533.center = new SFVec3f(new float[-0.0236,1.6331,0.051]);
HAnimJoint533.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint533.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment534 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment534.name = "r_eyeball";
HAnimSegment534.DEF = "hanim_r_eyeball";
let Transform535 = browser.currentScene.createNode("Transform");
Transform535.translation = new SFVec3f(new float[-0.0236,1.6331,0.051]);
let Shape536 = browser.currentScene.createNode("Shape");
Shape536.USE = "jointbox";
Transform535.children = new MFNode();

Transform535.children[0] = Shape536;

HAnimSegment534.children = new MFNode();

HAnimSegment534.children[0] = Transform535;

let Shape537 = browser.currentScene.createNode("Shape");
let Appearance538 = browser.currentScene.createNode("Appearance");
Appearance538.USE = "SegmentLine";
Shape537.appearance = Appearance538;

let IndexedLineSet539 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet539.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate540 = browser.currentScene.createNode("Coordinate");
Coordinate540.point = new MFVec3f(new float[-0.0236,1.6331,0.051,-0.0236,1.6331,0.071]);
IndexedLineSet539.coord = Coordinate540;

Shape537.geometry = IndexedLineSet539;

HAnimSegment534.children[1] = Shape537;

HAnimJoint533.children = new MFNode();

HAnimJoint533.children[0] = HAnimSegment534;

HAnimJoint493.children[2] = HAnimJoint533;

HAnimJoint485.children[1] = HAnimJoint493;

HAnimJoint477.children[1] = HAnimJoint485;

HAnimJoint469.children[1] = HAnimJoint477;

HAnimJoint461.children[1] = HAnimJoint469;

HAnimJoint453.children[1] = HAnimJoint461;

HAnimJoint443.children[1] = HAnimJoint453;

HAnimJoint427.children[1] = HAnimJoint443;

HAnimJoint411.children[1] = HAnimJoint427;

let HAnimJoint541 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint541.name = "l_sternoclavicular";
HAnimJoint541.DEF = "hanim_l_sternoclavicular";
HAnimJoint541.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint541.skinCoordIndex = new MFInt32(new int[12]);
HAnimJoint541.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint541.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint541.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment542 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment542.name = "l_clavicle";
HAnimSegment542.DEF = "hanim_l_clavicle";
let Transform543 = browser.currentScene.createNode("Transform");
Transform543.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
let Shape544 = browser.currentScene.createNode("Shape");
Shape544.USE = "jointbox";
Transform543.children = new MFNode();

Transform543.children[0] = Shape544;

HAnimSegment542.children = new MFNode();

HAnimSegment542.children[0] = Transform543;

let Shape545 = browser.currentScene.createNode("Shape");
let Appearance546 = browser.currentScene.createNode("Appearance");
Appearance546.USE = "SegmentLine";
Shape545.appearance = Appearance546;

let IndexedLineSet547 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet547.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate548 = browser.currentScene.createNode("Coordinate");
Coordinate548.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
IndexedLineSet547.coord = Coordinate548;

Shape545.geometry = IndexedLineSet547;

HAnimSegment542.children[1] = Shape545;

let Shape549 = browser.currentScene.createNode("Shape");
let Appearance550 = browser.currentScene.createNode("Appearance");
Appearance550.USE = "SiteParentLine";
Shape549.appearance = Appearance550;

let IndexedLineSet551 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet551.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1,0,4,-1]);
let Coordinate552 = browser.currentScene.createNode("Coordinate");
Coordinate552.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0271,1.4943,0.0394,0.2032,1.476,-0.049,0.1777,1.4065,-0.0075,0.1706,1.4072,-0.0875]);
IndexedLineSet551.coord = Coordinate552;

Shape549.geometry = IndexedLineSet551;

HAnimSegment542.children[2] = Shape549;

let HAnimSite553 = browser.currentScene.createNode("HAnimSite");
HAnimSite553.name = "l_clavicale";
HAnimSite553.DEF = "hanim_l_clavicale";
HAnimSite553.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
let Shape554 = browser.currentScene.createNode("Shape");
Shape554.USE = "sitebox";
HAnimSite553.children = new MFNode();

HAnimSite553.children[0] = Shape554;

HAnimSegment542.children[3] = HAnimSite553;

let HAnimSite555 = browser.currentScene.createNode("HAnimSite");
HAnimSite555.name = "l_acromion";
HAnimSite555.DEF = "hanim_l_acromion";
HAnimSite555.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
let Shape556 = browser.currentScene.createNode("Shape");
Shape556.USE = "sitebox";
HAnimSite555.children = new MFNode();

HAnimSite555.children[0] = Shape556;

HAnimSegment542.children[4] = HAnimSite555;

let HAnimSite557 = browser.currentScene.createNode("HAnimSite");
HAnimSite557.name = "l_axilla_ant";
HAnimSite557.DEF = "hanim_l_axilla_ant";
HAnimSite557.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
let Shape558 = browser.currentScene.createNode("Shape");
Shape558.USE = "sitebox";
HAnimSite557.children = new MFNode();

HAnimSite557.children[0] = Shape558;

HAnimSegment542.children[5] = HAnimSite557;

let HAnimSite559 = browser.currentScene.createNode("HAnimSite");
HAnimSite559.name = "l_axilla_post";
HAnimSite559.DEF = "hanim_l_axilla_post";
HAnimSite559.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
let Shape560 = browser.currentScene.createNode("Shape");
Shape560.USE = "sitebox";
HAnimSite559.children = new MFNode();

HAnimSite559.children[0] = Shape560;

HAnimSegment542.children[6] = HAnimSite559;

HAnimJoint541.children = new MFNode();

HAnimJoint541.children[0] = HAnimSegment542;

let HAnimJoint561 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint561.name = "l_acromioclavicular";
HAnimJoint561.DEF = "hanim_l_acromioclavicular";
HAnimJoint561.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint561.skinCoordIndex = new MFInt32(new int[79]);
HAnimJoint561.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint561.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint561.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment562 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment562.name = "l_scapula";
HAnimSegment562.DEF = "hanim_l_scapula";
let Transform563 = browser.currentScene.createNode("Transform");
Transform563.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
let Shape564 = browser.currentScene.createNode("Shape");
Shape564.USE = "jointbox";
Transform563.children = new MFNode();

Transform563.children[0] = Shape564;

HAnimSegment562.children = new MFNode();

HAnimSegment562.children[0] = Transform563;

let Shape565 = browser.currentScene.createNode("Shape");
let Appearance566 = browser.currentScene.createNode("Appearance");
Appearance566.USE = "SegmentLine";
Shape565.appearance = Appearance566;

let IndexedLineSet567 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet567.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate568 = browser.currentScene.createNode("Coordinate");
Coordinate568.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
IndexedLineSet567.coord = Coordinate568;

Shape565.geometry = IndexedLineSet567;

HAnimSegment562.children[1] = Shape565;

HAnimJoint561.children = new MFNode();

HAnimJoint561.children[0] = HAnimSegment562;

let HAnimJoint569 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint569.name = "l_shoulder";
HAnimJoint569.DEF = "hanim_l_shoulder";
HAnimJoint569.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint569.skinCoordIndex = new MFInt32(new int[41,42,44,80,102,103,104,105]);
HAnimJoint569.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint569.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint569.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment570 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment570.name = "l_upperarm";
HAnimSegment570.DEF = "hanim_l_upperarm";
let Transform571 = browser.currentScene.createNode("Transform");
Transform571.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
let Shape572 = browser.currentScene.createNode("Shape");
Shape572.USE = "jointbox";
Transform571.children = new MFNode();

Transform571.children[0] = Shape572;

HAnimSegment570.children = new MFNode();

HAnimSegment570.children[0] = Transform571;

let Shape573 = browser.currentScene.createNode("Shape");
let Appearance574 = browser.currentScene.createNode("Appearance");
Appearance574.USE = "SegmentLine";
Shape573.appearance = Appearance574;

let IndexedLineSet575 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet575.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate576 = browser.currentScene.createNode("Coordinate");
Coordinate576.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
IndexedLineSet575.coord = Coordinate576;

Shape573.geometry = IndexedLineSet575;

HAnimSegment570.children[1] = Shape573;

let Shape577 = browser.currentScene.createNode("Shape");
let Appearance578 = browser.currentScene.createNode("Appearance");
Appearance578.USE = "SiteParentLine";
Shape577.appearance = Appearance578;

let IndexedLineSet579 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet579.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate580 = browser.currentScene.createNode("Coordinate");
Coordinate580.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.228,1.1482,-0.11]);
IndexedLineSet579.coord = Coordinate580;

Shape577.geometry = IndexedLineSet579;

HAnimSegment570.children[2] = Shape577;

let HAnimSite581 = browser.currentScene.createNode("HAnimSite");
HAnimSite581.name = "l_humeral_lateral_epicn";
HAnimSite581.DEF = "hanim_l_humeral_lateral_epicn";
HAnimSite581.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
let Shape582 = browser.currentScene.createNode("Shape");
Shape582.USE = "sitebox";
HAnimSite581.children = new MFNode();

HAnimSite581.children[0] = Shape582;

HAnimSegment570.children[3] = HAnimSite581;

HAnimJoint569.children = new MFNode();

HAnimJoint569.children[0] = HAnimSegment570;

let HAnimJoint583 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint583.name = "l_elbow";
HAnimJoint583.DEF = "hanim_l_elbow";
HAnimJoint583.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint583.skinCoordIndex = new MFInt32(new int[45,46,47,109,110,111,112,113,115,116,117,118]);
HAnimJoint583.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint583.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint583.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment584 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment584.name = "l_forearm";
HAnimSegment584.DEF = "hanim_l_forearm";
let Transform585 = browser.currentScene.createNode("Transform");
Transform585.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
let Shape586 = browser.currentScene.createNode("Shape");
Shape586.USE = "jointbox";
Transform585.children = new MFNode();

Transform585.children[0] = Shape586;

HAnimSegment584.children = new MFNode();

HAnimSegment584.children[0] = Transform585;

let Shape587 = browser.currentScene.createNode("Shape");
let Appearance588 = browser.currentScene.createNode("Appearance");
Appearance588.USE = "SegmentLine";
Shape587.appearance = Appearance588;

let IndexedLineSet589 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet589.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate590 = browser.currentScene.createNode("Coordinate");
Coordinate590.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
IndexedLineSet589.coord = Coordinate590;

Shape587.geometry = IndexedLineSet589;

HAnimSegment584.children[1] = Shape587;

let Shape591 = browser.currentScene.createNode("Shape");
let Appearance592 = browser.currentScene.createNode("Appearance");
Appearance592.USE = "SiteParentLine";
Shape591.appearance = Appearance592;

let IndexedLineSet593 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet593.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1,0,4,-1]);
let Coordinate594 = browser.currentScene.createNode("Coordinate");
Coordinate594.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415,0.1962,1.1375,-0.1123,0.1735,1.1272,-0.1113,0.2182,1.1212,-0.1167]);
IndexedLineSet593.coord = Coordinate594;

Shape591.geometry = IndexedLineSet593;

HAnimSegment584.children[2] = Shape591;

let HAnimSite595 = browser.currentScene.createNode("HAnimSite");
HAnimSite595.name = "l_radial_styloid";
HAnimSite595.DEF = "hanim_l_radial_styloid";
HAnimSite595.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
let Shape596 = browser.currentScene.createNode("Shape");
Shape596.USE = "sitebox";
HAnimSite595.children = new MFNode();

HAnimSite595.children[0] = Shape596;

HAnimSegment584.children[3] = HAnimSite595;

let HAnimSite597 = browser.currentScene.createNode("HAnimSite");
HAnimSite597.name = "l_olecranon";
HAnimSite597.DEF = "hanim_l_olecranon";
HAnimSite597.translation = new SFVec3f(new float[0.1962,1.1375,-0.1123]);
let Shape598 = browser.currentScene.createNode("Shape");
Shape598.USE = "sitebox";
HAnimSite597.children = new MFNode();

HAnimSite597.children[0] = Shape598;

HAnimSegment584.children[4] = HAnimSite597;

let HAnimSite599 = browser.currentScene.createNode("HAnimSite");
HAnimSite599.name = "l_humeral_medial_epicn";
HAnimSite599.DEF = "hanim_l_humeral_medial_epicn";
HAnimSite599.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
let Shape600 = browser.currentScene.createNode("Shape");
Shape600.USE = "sitebox";
HAnimSite599.children = new MFNode();

HAnimSite599.children[0] = Shape600;

HAnimSegment584.children[5] = HAnimSite599;

let HAnimSite601 = browser.currentScene.createNode("HAnimSite");
HAnimSite601.name = "l_radiale";
HAnimSite601.DEF = "hanim_l_radiale";
HAnimSite601.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
let Shape602 = browser.currentScene.createNode("Shape");
Shape602.USE = "sitebox";
HAnimSite601.children = new MFNode();

HAnimSite601.children[0] = Shape602;

HAnimSegment584.children[6] = HAnimSite601;

HAnimJoint583.children = new MFNode();

HAnimJoint583.children[0] = HAnimSegment584;

let HAnimJoint603 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint603.name = "l_wrist";
HAnimJoint603.DEF = "hanim_l_wrist";
HAnimJoint603.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint603.skinCoordIndex = new MFInt32(new int[119,120,121,122,123,124,125,126]);
HAnimJoint603.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint603.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint603.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment604 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment604.name = "l_hand";
HAnimSegment604.DEF = "hanim_l_hand";
let Transform605 = browser.currentScene.createNode("Transform");
Transform605.translation = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
let Shape606 = browser.currentScene.createNode("Shape");
Shape606.USE = "jointbox";
Transform605.children = new MFNode();

Transform605.children[0] = Shape606;

HAnimSegment604.children = new MFNode();

HAnimSegment604.children[0] = Transform605;

let Shape607 = browser.currentScene.createNode("Shape");
let Appearance608 = browser.currentScene.createNode("Appearance");
Appearance608.USE = "SegmentLine";
Shape607.appearance = Appearance608;

let IndexedLineSet609 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet609.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]);
let Coordinate610 = browser.currentScene.createNode("Coordinate");
Coordinate610.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534,0.1983,0.8024,-0.028,0.1987,0.8029,-0.053,0.1956,0.8019,-0.0794,0.1925,0.8066,-0.1036]);
IndexedLineSet609.coord = Coordinate610;

Shape607.geometry = IndexedLineSet609;

HAnimSegment604.children[1] = Shape607;

let Shape611 = browser.currentScene.createNode("Shape");
let Appearance612 = browser.currentScene.createNode("Appearance");
Appearance612.USE = "SiteParentLine";
Shape611.appearance = Appearance612;

let IndexedLineSet613 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet613.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
let Coordinate614 = browser.currentScene.createNode("Coordinate");
Coordinate614.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122]);
IndexedLineSet613.coord = Coordinate614;

Shape611.geometry = IndexedLineSet613;

HAnimSegment604.children[2] = Shape611;

let HAnimSite615 = browser.currentScene.createNode("HAnimSite");
HAnimSite615.name = "l_metacarpal_pha2";
HAnimSite615.DEF = "hanim_l_metacarpal_pha2";
HAnimSite615.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
let Shape616 = browser.currentScene.createNode("Shape");
Shape616.USE = "sitebox";
HAnimSite615.children = new MFNode();

HAnimSite615.children[0] = Shape616;

HAnimSegment604.children[3] = HAnimSite615;

let HAnimSite617 = browser.currentScene.createNode("HAnimSite");
HAnimSite617.name = "l_ulnar_styloid";
HAnimSite617.DEF = "hanim_l_ulnar_styloid";
HAnimSite617.translation = new SFVec3f(new float[0.2142,0.8529,-0.0648]);
let Shape618 = browser.currentScene.createNode("Shape");
Shape618.USE = "sitebox";
HAnimSite617.children = new MFNode();

HAnimSite617.children[0] = Shape618;

HAnimSegment604.children[4] = HAnimSite617;

let HAnimSite619 = browser.currentScene.createNode("HAnimSite");
HAnimSite619.name = "l_metacarpal_pha5";
HAnimSite619.DEF = "hanim_l_metacarpal_pha5";
HAnimSite619.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
let Shape620 = browser.currentScene.createNode("Shape");
Shape620.USE = "sitebox";
HAnimSite619.children = new MFNode();

HAnimSite619.children[0] = Shape620;

HAnimSegment604.children[5] = HAnimSite619;

HAnimJoint603.children = new MFNode();

HAnimJoint603.children[0] = HAnimSegment604;

let HAnimJoint621 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint621.name = "l_thumb1";
HAnimJoint621.DEF = "hanim_l_thumb1";
HAnimJoint621.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint621.skinCoordIndex = new MFInt32(new int[127,128]);
HAnimJoint621.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint621.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint621.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment622 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment622.name = "l_thumb_metacarpal";
HAnimSegment622.DEF = "hanim_l_thumb_metacarpal";
let Transform623 = browser.currentScene.createNode("Transform");
Transform623.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
let Shape624 = browser.currentScene.createNode("Shape");
Shape624.USE = "jointbox";
Transform623.children = new MFNode();

Transform623.children[0] = Shape624;

HAnimSegment622.children = new MFNode();

HAnimSegment622.children[0] = Transform623;

let Shape625 = browser.currentScene.createNode("Shape");
let Appearance626 = browser.currentScene.createNode("Appearance");
Appearance626.USE = "SegmentLine";
Shape625.appearance = Appearance626;

let IndexedLineSet627 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet627.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate628 = browser.currentScene.createNode("Coordinate");
Coordinate628.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
IndexedLineSet627.coord = Coordinate628;

Shape625.geometry = IndexedLineSet627;

HAnimSegment622.children[1] = Shape625;

HAnimJoint621.children = new MFNode();

HAnimJoint621.children[0] = HAnimSegment622;

let HAnimJoint629 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint629.name = "l_thumb2";
HAnimJoint629.DEF = "hanim_l_thumb2";
HAnimJoint629.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint629.skinCoordIndex = new MFInt32(new int[138,139,140,141,142,143]);
HAnimJoint629.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1]);
HAnimJoint629.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint629.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment630 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment630.name = "l_thumb_proximal";
HAnimSegment630.DEF = "hanim_l_thumb_proximal";
let Transform631 = browser.currentScene.createNode("Transform");
Transform631.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
let Shape632 = browser.currentScene.createNode("Shape");
Shape632.USE = "jointbox";
Transform631.children = new MFNode();

Transform631.children[0] = Shape632;

HAnimSegment630.children = new MFNode();

HAnimSegment630.children[0] = Transform631;

let Shape633 = browser.currentScene.createNode("Shape");
let Appearance634 = browser.currentScene.createNode("Appearance");
Appearance634.USE = "SegmentLine";
Shape633.appearance = Appearance634;

let IndexedLineSet635 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet635.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate636 = browser.currentScene.createNode("Coordinate");
Coordinate636.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
IndexedLineSet635.coord = Coordinate636;

Shape633.geometry = IndexedLineSet635;

HAnimSegment630.children[1] = Shape633;

HAnimJoint629.children = new MFNode();

HAnimJoint629.children[0] = HAnimSegment630;

let HAnimJoint637 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint637.name = "l_thumb3";
HAnimJoint637.DEF = "hanim_l_thumb3";
HAnimJoint637.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint637.skinCoordIndex = new MFInt32(new int[144,145,146,147,148,149,150,151,152]);
HAnimJoint637.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint637.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint637.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment638 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment638.name = "l_thumb_distal";
HAnimSegment638.DEF = "hanim_l_thumb_distal";
let Transform639 = browser.currentScene.createNode("Transform");
Transform639.translation = new SFVec3f(new float[0.1955,0.8159,0.0464]);
let Shape640 = browser.currentScene.createNode("Shape");
Shape640.USE = "jointbox";
Transform639.children = new MFNode();

Transform639.children[0] = Shape640;

HAnimSegment638.children = new MFNode();

HAnimSegment638.children[0] = Transform639;

let Shape641 = browser.currentScene.createNode("Shape");
let Appearance642 = browser.currentScene.createNode("Appearance");
Appearance642.USE = "SegmentLine";
Shape641.appearance = Appearance642;

let IndexedLineSet643 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet643.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate644 = browser.currentScene.createNode("Coordinate");
Coordinate644.point = new MFVec3f(new float[0.1955,0.8159,0.0464,0.1982,0.8061,0.0759]);
IndexedLineSet643.coord = Coordinate644;

Shape641.geometry = IndexedLineSet643;

HAnimSegment638.children[1] = Shape641;

let Shape645 = browser.currentScene.createNode("Shape");
let Appearance646 = browser.currentScene.createNode("Appearance");
Appearance646.USE = "SiteParentLine";
Shape645.appearance = Appearance646;

let IndexedLineSet647 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet647.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate648 = browser.currentScene.createNode("Coordinate");
Coordinate648.point = new MFVec3f(new float[0.1955,0.8159,0.0464,0.1982,0.8061,0.0759]);
IndexedLineSet647.coord = Coordinate648;

Shape645.geometry = IndexedLineSet647;

HAnimSegment638.children[2] = Shape645;

let HAnimSite649 = browser.currentScene.createNode("HAnimSite");
HAnimSite649.name = "l_thumb_distal_tip";
HAnimSite649.DEF = "hanim_l_thumb_distal_tip";
HAnimSite649.translation = new SFVec3f(new float[0.1982,0.8061,0.0759]);
let Shape650 = browser.currentScene.createNode("Shape");
Shape650.USE = "sitebox";
HAnimSite649.children = new MFNode();

HAnimSite649.children[0] = Shape650;

HAnimSegment638.children[3] = HAnimSite649;

HAnimJoint637.children = new MFNode();

HAnimJoint637.children[0] = HAnimSegment638;

HAnimJoint629.children[1] = HAnimJoint637;

HAnimJoint621.children[1] = HAnimJoint629;

HAnimJoint603.children[1] = HAnimJoint621;

let HAnimJoint651 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint651.name = "l_index0";
HAnimJoint651.DEF = "hanim_l_index0";
HAnimJoint651.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint651.skinCoordIndex = new MFInt32(new int[129,130]);
HAnimJoint651.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint651.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint651.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment652 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment652.name = "l_index_metacarpal";
HAnimSegment652.DEF = "hanim_l_index_metacarpal";
let Transform653 = browser.currentScene.createNode("Transform");
Transform653.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
let Shape654 = browser.currentScene.createNode("Shape");
Shape654.USE = "jointbox";
Transform653.children = new MFNode();

Transform653.children[0] = Shape654;

HAnimSegment652.children = new MFNode();

HAnimSegment652.children[0] = Transform653;

let Shape655 = browser.currentScene.createNode("Shape");
let Appearance656 = browser.currentScene.createNode("Appearance");
Appearance656.USE = "SegmentLine";
Shape655.appearance = Appearance656;

let IndexedLineSet657 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet657.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate658 = browser.currentScene.createNode("Coordinate");
Coordinate658.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
IndexedLineSet657.coord = Coordinate658;

Shape655.geometry = IndexedLineSet657;

HAnimSegment652.children[1] = Shape655;

HAnimJoint651.children = new MFNode();

HAnimJoint651.children[0] = HAnimSegment652;

let HAnimJoint659 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint659.name = "l_index1";
HAnimJoint659.DEF = "hanim_l_index1";
HAnimJoint659.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint659.skinCoordIndex = new MFInt32(new int[138,139,140,153,154,155,163]);
HAnimJoint659.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1,0.5]);
HAnimJoint659.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint659.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment660 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment660.name = "l_index_proximal";
HAnimSegment660.DEF = "hanim_l_index_proximal";
let Transform661 = browser.currentScene.createNode("Transform");
Transform661.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
let Shape662 = browser.currentScene.createNode("Shape");
Shape662.USE = "jointbox";
Transform661.children = new MFNode();

Transform661.children[0] = Shape662;

HAnimSegment660.children = new MFNode();

HAnimSegment660.children[0] = Transform661;

let Shape663 = browser.currentScene.createNode("Shape");
let Appearance664 = browser.currentScene.createNode("Appearance");
Appearance664.USE = "SegmentLine";
Shape663.appearance = Appearance664;

let IndexedLineSet665 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet665.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate666 = browser.currentScene.createNode("Coordinate");
Coordinate666.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
IndexedLineSet665.coord = Coordinate666;

Shape663.geometry = IndexedLineSet665;

HAnimSegment660.children[1] = Shape663;

HAnimJoint659.children = new MFNode();

HAnimJoint659.children[0] = HAnimSegment660;

let HAnimJoint667 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint667.name = "l_index2";
HAnimJoint667.DEF = "hanim_l_index2";
HAnimJoint667.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint667.skinCoordIndex = new MFInt32(new int[166,167,168,169]);
HAnimJoint667.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint667.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint667.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment668 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment668.name = "l_index_middle";
HAnimSegment668.DEF = "hanim_l_index_middle";
let Transform669 = browser.currentScene.createNode("Transform");
Transform669.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
let Shape670 = browser.currentScene.createNode("Shape");
Shape670.USE = "jointbox";
Transform669.children = new MFNode();

Transform669.children[0] = Shape670;

HAnimSegment668.children = new MFNode();

HAnimSegment668.children[0] = Transform669;

let Shape671 = browser.currentScene.createNode("Shape");
let Appearance672 = browser.currentScene.createNode("Appearance");
Appearance672.USE = "SegmentLine";
Shape671.appearance = Appearance672;

let IndexedLineSet673 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet673.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate674 = browser.currentScene.createNode("Coordinate");
Coordinate674.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
IndexedLineSet673.coord = Coordinate674;

Shape671.geometry = IndexedLineSet673;

HAnimSegment668.children[1] = Shape671;

HAnimJoint667.children = new MFNode();

HAnimJoint667.children[0] = HAnimSegment668;

let HAnimJoint675 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint675.name = "l_index3";
HAnimJoint675.DEF = "hanim_l_index3";
HAnimJoint675.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint675.skinCoordIndex = new MFInt32(new int[170,171,172,173,174,175,176,177,178]);
HAnimJoint675.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint675.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint675.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment676 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment676.name = "l_index_distal";
HAnimSegment676.DEF = "hanim_l_index_distal";
let Transform677 = browser.currentScene.createNode("Transform");
Transform677.translation = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
let Shape678 = browser.currentScene.createNode("Shape");
Shape678.USE = "jointbox";
Transform677.children = new MFNode();

Transform677.children[0] = Shape678;

HAnimSegment676.children = new MFNode();

HAnimSegment676.children[0] = Transform677;

let Shape679 = browser.currentScene.createNode("Shape");
let Appearance680 = browser.currentScene.createNode("Appearance");
Appearance680.USE = "SegmentLine";
Shape679.appearance = Appearance680;

let IndexedLineSet681 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet681.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate682 = browser.currentScene.createNode("Coordinate");
Coordinate682.point = new MFVec3f(new float[0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245]);
IndexedLineSet681.coord = Coordinate682;

Shape679.geometry = IndexedLineSet681;

HAnimSegment676.children[1] = Shape679;

let Shape683 = browser.currentScene.createNode("Shape");
let Appearance684 = browser.currentScene.createNode("Appearance");
Appearance684.USE = "SiteParentLine";
Shape683.appearance = Appearance684;

let IndexedLineSet685 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet685.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1]);
let Coordinate686 = browser.currentScene.createNode("Coordinate");
Coordinate686.point = new MFVec3f(new float[0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245,0.2056,0.6743,-0.0482]);
IndexedLineSet685.coord = Coordinate686;

Shape683.geometry = IndexedLineSet685;

HAnimSegment676.children[2] = Shape683;

let HAnimSite687 = browser.currentScene.createNode("HAnimSite");
HAnimSite687.name = "l_index_distal_tip";
HAnimSite687.DEF = "hanim_l_index_distal_tip";
HAnimSite687.translation = new SFVec3f(new float[0.2089,0.6858,-0.0245]);
let Shape688 = browser.currentScene.createNode("Shape");
Shape688.USE = "sitebox";
HAnimSite687.children = new MFNode();

HAnimSite687.children[0] = Shape688;

HAnimSegment676.children[3] = HAnimSite687;

let HAnimSite689 = browser.currentScene.createNode("HAnimSite");
HAnimSite689.name = "l_dactylion";
HAnimSite689.DEF = "hanim_l_dactylion";
HAnimSite689.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
let Shape690 = browser.currentScene.createNode("Shape");
Shape690.USE = "sitebox";
HAnimSite689.children = new MFNode();

HAnimSite689.children[0] = Shape690;

HAnimSegment676.children[4] = HAnimSite689;

HAnimJoint675.children = new MFNode();

HAnimJoint675.children[0] = HAnimSegment676;

HAnimJoint667.children[1] = HAnimJoint675;

HAnimJoint659.children[1] = HAnimJoint667;

HAnimJoint651.children[1] = HAnimJoint659;

HAnimJoint603.children[2] = HAnimJoint651;

let HAnimJoint691 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint691.name = "l_middle0";
HAnimJoint691.DEF = "hanim_l_middle0";
HAnimJoint691.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint691.skinCoordIndex = new MFInt32(new int[131,132]);
HAnimJoint691.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint691.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint691.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment692 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment692.name = "l_middle_metacarpal";
HAnimSegment692.DEF = "hanim_l_middle_metacarpal";
let Transform693 = browser.currentScene.createNode("Transform");
Transform693.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
let Shape694 = browser.currentScene.createNode("Shape");
Shape694.USE = "jointbox";
Transform693.children = new MFNode();

Transform693.children[0] = Shape694;

HAnimSegment692.children = new MFNode();

HAnimSegment692.children[0] = Transform693;

let Shape695 = browser.currentScene.createNode("Shape");
let Appearance696 = browser.currentScene.createNode("Appearance");
Appearance696.USE = "SegmentLine";
Shape695.appearance = Appearance696;

let IndexedLineSet697 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet697.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate698 = browser.currentScene.createNode("Coordinate");
Coordinate698.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
IndexedLineSet697.coord = Coordinate698;

Shape695.geometry = IndexedLineSet697;

HAnimSegment692.children[1] = Shape695;

HAnimJoint691.children = new MFNode();

HAnimJoint691.children[0] = HAnimSegment692;

let HAnimJoint699 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint699.name = "l_middle1";
HAnimJoint699.DEF = "hanim_l_middle1";
HAnimJoint699.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint699.skinCoordIndex = new MFInt32(new int[156,157,163,164]);
HAnimJoint699.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimJoint699.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint699.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment700 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment700.name = "l_middle_proximal";
HAnimSegment700.DEF = "hanim_l_middle_proximal";
let Transform701 = browser.currentScene.createNode("Transform");
Transform701.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
let Shape702 = browser.currentScene.createNode("Shape");
Shape702.USE = "jointbox";
Transform701.children = new MFNode();

Transform701.children[0] = Shape702;

HAnimSegment700.children = new MFNode();

HAnimSegment700.children[0] = Transform701;

let Shape703 = browser.currentScene.createNode("Shape");
let Appearance704 = browser.currentScene.createNode("Appearance");
Appearance704.USE = "SegmentLine";
Shape703.appearance = Appearance704;

let IndexedLineSet705 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet705.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate706 = browser.currentScene.createNode("Coordinate");
Coordinate706.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
IndexedLineSet705.coord = Coordinate706;

Shape703.geometry = IndexedLineSet705;

HAnimSegment700.children[1] = Shape703;

HAnimJoint699.children = new MFNode();

HAnimJoint699.children[0] = HAnimSegment700;

let HAnimJoint707 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint707.name = "l_middle2";
HAnimJoint707.DEF = "hanim_l_middle2";
HAnimJoint707.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint707.skinCoordIndex = new MFInt32(new int[179,180,181,182]);
HAnimJoint707.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint707.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint707.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment708 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment708.name = "l_middle_middle";
HAnimSegment708.DEF = "hanim_l_middle_middle";
let Transform709 = browser.currentScene.createNode("Transform");
Transform709.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
let Shape710 = browser.currentScene.createNode("Shape");
Shape710.USE = "jointbox";
Transform709.children = new MFNode();

Transform709.children[0] = Shape710;

HAnimSegment708.children = new MFNode();

HAnimSegment708.children[0] = Transform709;

let Shape711 = browser.currentScene.createNode("Shape");
let Appearance712 = browser.currentScene.createNode("Appearance");
Appearance712.USE = "SegmentLine";
Shape711.appearance = Appearance712;

let IndexedLineSet713 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet713.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate714 = browser.currentScene.createNode("Coordinate");
Coordinate714.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
IndexedLineSet713.coord = Coordinate714;

Shape711.geometry = IndexedLineSet713;

HAnimSegment708.children[1] = Shape711;

HAnimJoint707.children = new MFNode();

HAnimJoint707.children[0] = HAnimSegment708;

let HAnimJoint715 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint715.name = "l_middle3";
HAnimJoint715.DEF = "hanim_l_middle3";
HAnimJoint715.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint715.skinCoordIndex = new MFInt32(new int[183,184,185,186,187,188,189,190,191]);
HAnimJoint715.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint715.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint715.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment716 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment716.name = "l_middle_distal";
HAnimSegment716.DEF = "hanim_l_middle_distal";
let Transform717 = browser.currentScene.createNode("Transform");
Transform717.translation = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
let Shape718 = browser.currentScene.createNode("Shape");
Shape718.USE = "jointbox";
Transform717.children = new MFNode();

Transform717.children[0] = Shape718;

HAnimSegment716.children = new MFNode();

HAnimSegment716.children[0] = Transform717;

let Shape719 = browser.currentScene.createNode("Shape");
let Appearance720 = browser.currentScene.createNode("Appearance");
Appearance720.USE = "SegmentLine";
Shape719.appearance = Appearance720;

let IndexedLineSet721 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet721.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate722 = browser.currentScene.createNode("Coordinate");
Coordinate722.point = new MFVec3f(new float[0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491]);
IndexedLineSet721.coord = Coordinate722;

Shape719.geometry = IndexedLineSet721;

HAnimSegment716.children[1] = Shape719;

let Shape723 = browser.currentScene.createNode("Shape");
let Appearance724 = browser.currentScene.createNode("Appearance");
Appearance724.USE = "SiteParentLine";
Shape723.appearance = Appearance724;

let IndexedLineSet725 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet725.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate726 = browser.currentScene.createNode("Coordinate");
Coordinate726.point = new MFVec3f(new float[0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491]);
IndexedLineSet725.coord = Coordinate726;

Shape723.geometry = IndexedLineSet725;

HAnimSegment716.children[2] = Shape723;

let HAnimSite727 = browser.currentScene.createNode("HAnimSite");
HAnimSite727.name = "l_middle_distal_tip";
HAnimSite727.DEF = "hanim_l_middle_distal_tip";
HAnimSite727.translation = new SFVec3f(new float[0.208,0.6731,-0.0491]);
let Shape728 = browser.currentScene.createNode("Shape");
Shape728.USE = "sitebox";
HAnimSite727.children = new MFNode();

HAnimSite727.children[0] = Shape728;

HAnimSegment716.children[3] = HAnimSite727;

HAnimJoint715.children = new MFNode();

HAnimJoint715.children[0] = HAnimSegment716;

HAnimJoint707.children[1] = HAnimJoint715;

HAnimJoint699.children[1] = HAnimJoint707;

HAnimJoint691.children[1] = HAnimJoint699;

HAnimJoint603.children[3] = HAnimJoint691;

let HAnimJoint729 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint729.name = "l_ring0";
HAnimJoint729.DEF = "hanim_l_ring0";
HAnimJoint729.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint729.skinCoordIndex = new MFInt32(new int[133,134]);
HAnimJoint729.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint729.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint729.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment730 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment730.name = "l_ring_metacarpal";
HAnimSegment730.DEF = "hanim_l_ring_metacarpal";
let Transform731 = browser.currentScene.createNode("Transform");
Transform731.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
let Shape732 = browser.currentScene.createNode("Shape");
Shape732.USE = "jointbox";
Transform731.children = new MFNode();

Transform731.children[0] = Shape732;

HAnimSegment730.children = new MFNode();

HAnimSegment730.children[0] = Transform731;

let Shape733 = browser.currentScene.createNode("Shape");
let Appearance734 = browser.currentScene.createNode("Appearance");
Appearance734.USE = "SegmentLine";
Shape733.appearance = Appearance734;

let IndexedLineSet735 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet735.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate736 = browser.currentScene.createNode("Coordinate");
Coordinate736.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
IndexedLineSet735.coord = Coordinate736;

Shape733.geometry = IndexedLineSet735;

HAnimSegment730.children[1] = Shape733;

HAnimJoint729.children = new MFNode();

HAnimJoint729.children[0] = HAnimSegment730;

let HAnimJoint737 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint737.name = "l_ring1";
HAnimJoint737.DEF = "hanim_l_ring1";
HAnimJoint737.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint737.skinCoordIndex = new MFInt32(new int[158,159,164,165]);
HAnimJoint737.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimJoint737.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint737.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment738 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment738.name = "l_ring_proximal";
HAnimSegment738.DEF = "hanim_l_ring_proximal";
let Transform739 = browser.currentScene.createNode("Transform");
Transform739.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
let Shape740 = browser.currentScene.createNode("Shape");
Shape740.USE = "jointbox";
Transform739.children = new MFNode();

Transform739.children[0] = Shape740;

HAnimSegment738.children = new MFNode();

HAnimSegment738.children[0] = Transform739;

let Shape741 = browser.currentScene.createNode("Shape");
let Appearance742 = browser.currentScene.createNode("Appearance");
Appearance742.USE = "SegmentLine";
Shape741.appearance = Appearance742;

let IndexedLineSet743 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet743.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate744 = browser.currentScene.createNode("Coordinate");
Coordinate744.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
IndexedLineSet743.coord = Coordinate744;

Shape741.geometry = IndexedLineSet743;

HAnimSegment738.children[1] = Shape741;

HAnimJoint737.children = new MFNode();

HAnimJoint737.children[0] = HAnimSegment738;

let HAnimJoint745 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint745.name = "l_ring2";
HAnimJoint745.DEF = "hanim_l_ring2";
HAnimJoint745.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint745.skinCoordIndex = new MFInt32(new int[192,193,194,195]);
HAnimJoint745.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint745.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint745.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment746 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment746.name = "l_ring_middle";
HAnimSegment746.DEF = "hanim_l_ring_middle";
let Transform747 = browser.currentScene.createNode("Transform");
Transform747.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
let Shape748 = browser.currentScene.createNode("Shape");
Shape748.USE = "jointbox";
Transform747.children = new MFNode();

Transform747.children[0] = Shape748;

HAnimSegment746.children = new MFNode();

HAnimSegment746.children[0] = Transform747;

let Shape749 = browser.currentScene.createNode("Shape");
let Appearance750 = browser.currentScene.createNode("Appearance");
Appearance750.USE = "SegmentLine";
Shape749.appearance = Appearance750;

let IndexedLineSet751 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet751.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate752 = browser.currentScene.createNode("Coordinate");
Coordinate752.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
IndexedLineSet751.coord = Coordinate752;

Shape749.geometry = IndexedLineSet751;

HAnimSegment746.children[1] = Shape749;

HAnimJoint745.children = new MFNode();

HAnimJoint745.children[0] = HAnimSegment746;

let HAnimJoint753 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint753.name = "l_ring3";
HAnimJoint753.DEF = "hanim_l_ring3";
HAnimJoint753.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint753.skinCoordIndex = new MFInt32(new int[196,197,198,199,200,201,202,203,204]);
HAnimJoint753.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint753.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint753.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment754 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment754.name = "l_ring_distal";
HAnimSegment754.DEF = "hanim_l_ring_distal";
let Transform755 = browser.currentScene.createNode("Transform");
Transform755.translation = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
let Shape756 = browser.currentScene.createNode("Shape");
Shape756.USE = "jointbox";
Transform755.children = new MFNode();

Transform755.children[0] = Shape756;

HAnimSegment754.children = new MFNode();

HAnimSegment754.children[0] = Transform755;

let Shape757 = browser.currentScene.createNode("Shape");
let Appearance758 = browser.currentScene.createNode("Appearance");
Appearance758.USE = "SegmentLine";
Shape757.appearance = Appearance758;

let IndexedLineSet759 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet759.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate760 = browser.currentScene.createNode("Coordinate");
Coordinate760.point = new MFVec3f(new float[0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756]);
IndexedLineSet759.coord = Coordinate760;

Shape757.geometry = IndexedLineSet759;

HAnimSegment754.children[1] = Shape757;

let Shape761 = browser.currentScene.createNode("Shape");
let Appearance762 = browser.currentScene.createNode("Appearance");
Appearance762.USE = "SiteParentLine";
Shape761.appearance = Appearance762;

let IndexedLineSet763 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet763.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate764 = browser.currentScene.createNode("Coordinate");
Coordinate764.point = new MFVec3f(new float[0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756]);
IndexedLineSet763.coord = Coordinate764;

Shape761.geometry = IndexedLineSet763;

HAnimSegment754.children[2] = Shape761;

let HAnimSite765 = browser.currentScene.createNode("HAnimSite");
HAnimSite765.name = "l_ring_distal_tip";
HAnimSite765.DEF = "hanim_l_ring_distal_tip";
HAnimSite765.translation = new SFVec3f(new float[0.2035,0.675,-0.0756]);
let Shape766 = browser.currentScene.createNode("Shape");
Shape766.USE = "sitebox";
HAnimSite765.children = new MFNode();

HAnimSite765.children[0] = Shape766;

HAnimSegment754.children[3] = HAnimSite765;

HAnimJoint753.children = new MFNode();

HAnimJoint753.children[0] = HAnimSegment754;

HAnimJoint745.children[1] = HAnimJoint753;

HAnimJoint737.children[1] = HAnimJoint745;

HAnimJoint729.children[1] = HAnimJoint737;

HAnimJoint603.children[4] = HAnimJoint729;

let HAnimJoint767 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint767.name = "l_pinky0";
HAnimJoint767.DEF = "hanim_l_pinky0";
HAnimJoint767.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint767.skinCoordIndex = new MFInt32(new int[135,136,137,165]);
HAnimJoint767.skinCoordWeight = new MFFloat(new float[1,1,1,0.5]);
HAnimJoint767.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint767.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment768 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment768.name = "l_pinky_metacarpal";
HAnimSegment768.DEF = "hanim_l_pinky_metacarpal";
let Transform769 = browser.currentScene.createNode("Transform");
Transform769.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
let Shape770 = browser.currentScene.createNode("Shape");
Shape770.USE = "jointbox";
Transform769.children = new MFNode();

Transform769.children[0] = Shape770;

HAnimSegment768.children = new MFNode();

HAnimSegment768.children[0] = Transform769;

let Shape771 = browser.currentScene.createNode("Shape");
let Appearance772 = browser.currentScene.createNode("Appearance");
Appearance772.USE = "SegmentLine";
Shape771.appearance = Appearance772;

let IndexedLineSet773 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet773.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate774 = browser.currentScene.createNode("Coordinate");
Coordinate774.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
IndexedLineSet773.coord = Coordinate774;

Shape771.geometry = IndexedLineSet773;

HAnimSegment768.children[1] = Shape771;

HAnimJoint767.children = new MFNode();

HAnimJoint767.children[0] = HAnimSegment768;

let HAnimJoint775 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint775.name = "l_pinky1";
HAnimJoint775.DEF = "hanim_l_pinky1";
HAnimJoint775.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint775.skinCoordIndex = new MFInt32(new int[160,161,162]);
HAnimJoint775.skinCoordWeight = new MFFloat(new float[1,1,1]);
HAnimJoint775.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint775.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment776 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment776.name = "l_pinky_proximal";
HAnimSegment776.DEF = "hanim_l_pinky_proximal";
let Transform777 = browser.currentScene.createNode("Transform");
Transform777.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
let Shape778 = browser.currentScene.createNode("Shape");
Shape778.USE = "jointbox";
Transform777.children = new MFNode();

Transform777.children[0] = Shape778;

HAnimSegment776.children = new MFNode();

HAnimSegment776.children[0] = Transform777;

let Shape779 = browser.currentScene.createNode("Shape");
let Appearance780 = browser.currentScene.createNode("Appearance");
Appearance780.USE = "SegmentLine";
Shape779.appearance = Appearance780;

let IndexedLineSet781 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet781.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate782 = browser.currentScene.createNode("Coordinate");
Coordinate782.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
IndexedLineSet781.coord = Coordinate782;

Shape779.geometry = IndexedLineSet781;

HAnimSegment776.children[1] = Shape779;

HAnimJoint775.children = new MFNode();

HAnimJoint775.children[0] = HAnimSegment776;

let HAnimJoint783 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint783.name = "l_pinky2";
HAnimJoint783.DEF = "hanim_l_pinky2";
HAnimJoint783.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint783.skinCoordIndex = new MFInt32(new int[205,206,207,208]);
HAnimJoint783.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint783.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint783.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment784 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment784.name = "l_pinky_middle";
HAnimSegment784.DEF = "hanim_l_pinky_middle";
let Transform785 = browser.currentScene.createNode("Transform");
Transform785.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
let Shape786 = browser.currentScene.createNode("Shape");
Shape786.USE = "jointbox";
Transform785.children = new MFNode();

Transform785.children[0] = Shape786;

HAnimSegment784.children = new MFNode();

HAnimSegment784.children[0] = Transform785;

let Shape787 = browser.currentScene.createNode("Shape");
let Appearance788 = browser.currentScene.createNode("Appearance");
Appearance788.USE = "SegmentLine";
Shape787.appearance = Appearance788;

let IndexedLineSet789 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet789.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate790 = browser.currentScene.createNode("Coordinate");
Coordinate790.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
IndexedLineSet789.coord = Coordinate790;

Shape787.geometry = IndexedLineSet789;

HAnimSegment784.children[1] = Shape787;

HAnimJoint783.children = new MFNode();

HAnimJoint783.children[0] = HAnimSegment784;

let HAnimJoint791 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint791.name = "l_pinky3";
HAnimJoint791.DEF = "hanim_l_pinky3";
HAnimJoint791.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint791.skinCoordIndex = new MFInt32(new int[209,210,211,212,213,214,215,216,217]);
HAnimJoint791.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint791.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint791.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment792 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment792.name = "l_pinky_distal";
HAnimSegment792.DEF = "hanim_l_pinky_distal";
let Transform793 = browser.currentScene.createNode("Transform");
Transform793.translation = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
let Shape794 = browser.currentScene.createNode("Shape");
Shape794.USE = "jointbox";
Transform793.children = new MFNode();

Transform793.children[0] = Shape794;

HAnimSegment792.children = new MFNode();

HAnimSegment792.children[0] = Transform793;

let Shape795 = browser.currentScene.createNode("Shape");
let Appearance796 = browser.currentScene.createNode("Appearance");
Appearance796.USE = "SegmentLine";
Shape795.appearance = Appearance796;

let IndexedLineSet797 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet797.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate798 = browser.currentScene.createNode("Coordinate");
Coordinate798.point = new MFVec3f(new float[0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012]);
IndexedLineSet797.coord = Coordinate798;

Shape795.geometry = IndexedLineSet797;

HAnimSegment792.children[1] = Shape795;

let Shape799 = browser.currentScene.createNode("Shape");
let Appearance800 = browser.currentScene.createNode("Appearance");
Appearance800.USE = "SiteParentLine";
Shape799.appearance = Appearance800;

let IndexedLineSet801 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet801.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate802 = browser.currentScene.createNode("Coordinate");
Coordinate802.point = new MFVec3f(new float[0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012]);
IndexedLineSet801.coord = Coordinate802;

Shape799.geometry = IndexedLineSet801;

HAnimSegment792.children[2] = Shape799;

let HAnimSite803 = browser.currentScene.createNode("HAnimSite");
HAnimSite803.name = "l_pinky_distal_tip";
HAnimSite803.DEF = "hanim_l_pinky_distal_tip";
HAnimSite803.translation = new SFVec3f(new float[0.2014,0.7009,-0.1012]);
let Shape804 = browser.currentScene.createNode("Shape");
Shape804.USE = "sitebox";
HAnimSite803.children = new MFNode();

HAnimSite803.children[0] = Shape804;

HAnimSegment792.children[3] = HAnimSite803;

HAnimJoint791.children = new MFNode();

HAnimJoint791.children[0] = HAnimSegment792;

HAnimJoint783.children[1] = HAnimJoint791;

HAnimJoint775.children[1] = HAnimJoint783;

HAnimJoint767.children[1] = HAnimJoint775;

HAnimJoint603.children[5] = HAnimJoint767;

HAnimJoint583.children[1] = HAnimJoint603;

HAnimJoint569.children[1] = HAnimJoint583;

HAnimJoint561.children[1] = HAnimJoint569;

HAnimJoint541.children[1] = HAnimJoint561;

HAnimJoint411.children[2] = HAnimJoint541;

let HAnimJoint805 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint805.name = "r_sternoclavicular";
HAnimJoint805.DEF = "hanim_r_sternoclavicular";
HAnimJoint805.center = new SFVec3f(new float[-0.0694,1.46,-0.033]);
HAnimJoint805.skinCoordIndex = new MFInt32(new int[10]);
HAnimJoint805.skinCoordWeight = new MFFloat(new float[1]);
HAnimJoint805.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint805.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment806 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment806.name = "r_clavicle";
HAnimSegment806.DEF = "hanim_r_clavicle";
let Transform807 = browser.currentScene.createNode("Transform");
Transform807.translation = new SFVec3f(new float[-0.0694,1.46,-0.033]);
let Shape808 = browser.currentScene.createNode("Shape");
Shape808.USE = "jointbox";
Transform807.children = new MFNode();

Transform807.children[0] = Shape808;

HAnimSegment806.children = new MFNode();

HAnimSegment806.children[0] = Transform807;

let Shape809 = browser.currentScene.createNode("Shape");
let Appearance810 = browser.currentScene.createNode("Appearance");
Appearance810.USE = "SegmentLine";
Shape809.appearance = Appearance810;

let IndexedLineSet811 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet811.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate812 = browser.currentScene.createNode("Coordinate");
Coordinate812.point = new MFVec3f(new float[-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401]);
IndexedLineSet811.coord = Coordinate812;

Shape809.geometry = IndexedLineSet811;

HAnimSegment806.children[1] = Shape809;

let Shape813 = browser.currentScene.createNode("Shape");
let Appearance814 = browser.currentScene.createNode("Appearance");
Appearance814.USE = "SiteParentLine";
Shape813.appearance = Appearance814;

let IndexedLineSet815 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet815.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1,0,4,-1]);
let Coordinate816 = browser.currentScene.createNode("Coordinate");
Coordinate816.point = new MFVec3f(new float[-0.0694,1.46,-0.033,-0.0115,1.4943,0.04,-0.1905,1.4791,-0.0431,-0.1626,1.4072,-0.0031,-0.1603,1.4098,-0.0826]);
IndexedLineSet815.coord = Coordinate816;

Shape813.geometry = IndexedLineSet815;

HAnimSegment806.children[2] = Shape813;

let HAnimSite817 = browser.currentScene.createNode("HAnimSite");
HAnimSite817.name = "r_clavicale";
HAnimSite817.DEF = "hanim_r_clavicale";
HAnimSite817.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
let Shape818 = browser.currentScene.createNode("Shape");
Shape818.USE = "sitebox";
HAnimSite817.children = new MFNode();

HAnimSite817.children[0] = Shape818;

HAnimSegment806.children[3] = HAnimSite817;

let HAnimSite819 = browser.currentScene.createNode("HAnimSite");
HAnimSite819.name = "r_acromion";
HAnimSite819.DEF = "hanim_r_acromion";
HAnimSite819.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
let Shape820 = browser.currentScene.createNode("Shape");
Shape820.USE = "sitebox";
HAnimSite819.children = new MFNode();

HAnimSite819.children[0] = Shape820;

HAnimSegment806.children[4] = HAnimSite819;

let HAnimSite821 = browser.currentScene.createNode("HAnimSite");
HAnimSite821.name = "r_axilla_ant";
HAnimSite821.DEF = "hanim_r_axilla_ant";
HAnimSite821.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
let Shape822 = browser.currentScene.createNode("Shape");
Shape822.USE = "sitebox";
HAnimSite821.children = new MFNode();

HAnimSite821.children[0] = Shape822;

HAnimSegment806.children[5] = HAnimSite821;

let HAnimSite823 = browser.currentScene.createNode("HAnimSite");
HAnimSite823.name = "r_axilla_post";
HAnimSite823.DEF = "hanim_r_axilla_post";
HAnimSite823.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
let Shape824 = browser.currentScene.createNode("Shape");
Shape824.USE = "sitebox";
HAnimSite823.children = new MFNode();

HAnimSite823.children[0] = Shape824;

HAnimSegment806.children[6] = HAnimSite823;

HAnimJoint805.children = new MFNode();

HAnimJoint805.children[0] = HAnimSegment806;

let HAnimJoint825 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint825.name = "r_acromioclavicular";
HAnimJoint825.DEF = "hanim_r_acromioclavicular";
HAnimJoint825.center = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
HAnimJoint825.skinCoordIndex = new MFInt32(new int[77,29]);
HAnimJoint825.skinCoordWeight = new MFFloat(new float[1,0.9]);
HAnimJoint825.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint825.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment826 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment826.name = "r_scapula";
HAnimSegment826.DEF = "hanim_r_scapula";
let Transform827 = browser.currentScene.createNode("Transform");
Transform827.translation = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
let Shape828 = browser.currentScene.createNode("Shape");
Shape828.USE = "jointbox";
Transform827.children = new MFNode();

Transform827.children[0] = Shape828;

HAnimSegment826.children = new MFNode();

HAnimSegment826.children[0] = Transform827;

let Shape829 = browser.currentScene.createNode("Shape");
let Appearance830 = browser.currentScene.createNode("Appearance");
Appearance830.USE = "SegmentLine";
Shape829.appearance = Appearance830;

let IndexedLineSet831 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet831.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate832 = browser.currentScene.createNode("Coordinate");
Coordinate832.point = new MFVec3f(new float[-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325]);
IndexedLineSet831.coord = Coordinate832;

Shape829.geometry = IndexedLineSet831;

HAnimSegment826.children[1] = Shape829;

HAnimJoint825.children = new MFNode();

HAnimJoint825.children[0] = HAnimSegment826;

let HAnimJoint833 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint833.name = "r_shoulder";
HAnimJoint833.DEF = "hanim_r_shoulder";
HAnimJoint833.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimJoint833.skinCoordIndex = new MFInt32(new int[29,30,32,78,218,219,220,221,86,88]);
HAnimJoint833.skinCoordWeight = new MFFloat(new float[0.1,1,1,1,1,1,1,1,0.3,0.2]);
HAnimJoint833.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint833.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment834 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment834.name = "r_upperarm";
HAnimSegment834.DEF = "hanim_r_upperarm";
let Transform835 = browser.currentScene.createNode("Transform");
Transform835.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
let Shape836 = browser.currentScene.createNode("Shape");
Shape836.USE = "jointbox";
Transform835.children = new MFNode();

Transform835.children[0] = Shape836;

HAnimSegment834.children = new MFNode();

HAnimSegment834.children[0] = Transform835;

let Shape837 = browser.currentScene.createNode("Shape");
let Appearance838 = browser.currentScene.createNode("Appearance");
Appearance838.USE = "SegmentLine";
Shape837.appearance = Appearance838;

let IndexedLineSet839 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet839.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate840 = browser.currentScene.createNode("Coordinate");
Coordinate840.point = new MFVec3f(new float[-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
IndexedLineSet839.coord = Coordinate840;

Shape837.geometry = IndexedLineSet839;

HAnimSegment834.children[1] = Shape837;

let Shape841 = browser.currentScene.createNode("Shape");
let Appearance842 = browser.currentScene.createNode("Appearance");
Appearance842.USE = "SiteParentLine";
Shape841.appearance = Appearance842;

let IndexedLineSet843 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet843.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate844 = browser.currentScene.createNode("Coordinate");
Coordinate844.point = new MFVec3f(new float[-0.1907,1.4407,-0.0325,-0.2224,1.1517,-0.1033]);
IndexedLineSet843.coord = Coordinate844;

Shape841.geometry = IndexedLineSet843;

HAnimSegment834.children[2] = Shape841;

let HAnimSite845 = browser.currentScene.createNode("HAnimSite");
HAnimSite845.name = "r_humeral_lateral_epicn";
HAnimSite845.DEF = "hanim_r_humeral_lateral_epicn";
HAnimSite845.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
let Shape846 = browser.currentScene.createNode("Shape");
Shape846.USE = "sitebox";
HAnimSite845.children = new MFNode();

HAnimSite845.children[0] = Shape846;

HAnimSegment834.children[3] = HAnimSite845;

HAnimJoint833.children = new MFNode();

HAnimJoint833.children[0] = HAnimSegment834;

let HAnimJoint847 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint847.name = "r_elbow";
HAnimJoint847.DEF = "hanim_r_elbow";
HAnimJoint847.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimJoint847.skinCoordIndex = new MFInt32(new int[33,34,35,225,226,227,228,229,231,232,233,234]);
HAnimJoint847.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint847.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint847.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment848 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment848.name = "r_forearm";
HAnimSegment848.DEF = "hanim_r_forearm";
let Transform849 = browser.currentScene.createNode("Transform");
Transform849.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
let Shape850 = browser.currentScene.createNode("Shape");
Shape850.USE = "jointbox";
Transform849.children = new MFNode();

Transform849.children[0] = Shape850;

HAnimSegment848.children = new MFNode();

HAnimSegment848.children[0] = Transform849;

let Shape851 = browser.currentScene.createNode("Shape");
let Appearance852 = browser.currentScene.createNode("Appearance");
Appearance852.USE = "SegmentLine";
Shape851.appearance = Appearance852;

let IndexedLineSet853 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet853.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate854 = browser.currentScene.createNode("Coordinate");
Coordinate854.point = new MFVec3f(new float[-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
IndexedLineSet853.coord = Coordinate854;

Shape851.geometry = IndexedLineSet853;

HAnimSegment848.children[1] = Shape851;

let Shape855 = browser.currentScene.createNode("Shape");
let Appearance856 = browser.currentScene.createNode("Appearance");
Appearance856.USE = "SiteParentLine";
Shape855.appearance = Appearance856;

let IndexedLineSet857 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet857.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1,0,4,-1]);
let Coordinate858 = browser.currentScene.createNode("Coordinate");
Coordinate858.point = new MFVec3f(new float[-0.1949,1.1388,-0.062,-0.1884,0.8676,-0.036,-0.1907,1.1405,-0.1065,-0.168,1.1298,-0.1062,-0.213,1.1305,-0.1091]);
IndexedLineSet857.coord = Coordinate858;

Shape855.geometry = IndexedLineSet857;

HAnimSegment848.children[2] = Shape855;

let HAnimSite859 = browser.currentScene.createNode("HAnimSite");
HAnimSite859.name = "r_radial_styloid";
HAnimSite859.DEF = "hanim_r_radial_styloid";
HAnimSite859.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
let Shape860 = browser.currentScene.createNode("Shape");
Shape860.USE = "sitebox";
HAnimSite859.children = new MFNode();

HAnimSite859.children[0] = Shape860;

HAnimSegment848.children[3] = HAnimSite859;

let HAnimSite861 = browser.currentScene.createNode("HAnimSite");
HAnimSite861.name = "r_olecranon";
HAnimSite861.DEF = "hanim_r_olecranon";
HAnimSite861.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
let Shape862 = browser.currentScene.createNode("Shape");
Shape862.USE = "sitebox";
HAnimSite861.children = new MFNode();

HAnimSite861.children[0] = Shape862;

HAnimSegment848.children[4] = HAnimSite861;

let HAnimSite863 = browser.currentScene.createNode("HAnimSite");
HAnimSite863.name = "r_humeral_medial_epicn";
HAnimSite863.DEF = "hanim_r_humeral_medial_epicn";
HAnimSite863.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
let Shape864 = browser.currentScene.createNode("Shape");
Shape864.USE = "sitebox";
HAnimSite863.children = new MFNode();

HAnimSite863.children[0] = Shape864;

HAnimSegment848.children[5] = HAnimSite863;

let HAnimSite865 = browser.currentScene.createNode("HAnimSite");
HAnimSite865.name = "r_radiale";
HAnimSite865.DEF = "hanim_r_radiale";
HAnimSite865.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
let Shape866 = browser.currentScene.createNode("Shape");
Shape866.USE = "sitebox";
HAnimSite865.children = new MFNode();

HAnimSite865.children[0] = Shape866;

HAnimSegment848.children[6] = HAnimSite865;

HAnimJoint847.children = new MFNode();

HAnimJoint847.children[0] = HAnimSegment848;

let HAnimJoint867 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint867.name = "r_wrist";
HAnimJoint867.DEF = "hanim_r_wrist";
HAnimJoint867.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimJoint867.skinCoordIndex = new MFInt32(new int[235,236,237,238,239,240,241,242]);
HAnimJoint867.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1]);
HAnimJoint867.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint867.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment868 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment868.name = "r_hand";
HAnimSegment868.DEF = "hanim_r_hand";
let Transform869 = browser.currentScene.createNode("Transform");
Transform869.translation = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
let Shape870 = browser.currentScene.createNode("Shape");
Shape870.USE = "jointbox";
Transform869.children = new MFNode();

Transform869.children[0] = Shape870;

HAnimSegment868.children = new MFNode();

HAnimSegment868.children[0] = Transform869;

let Shape871 = browser.currentScene.createNode("Shape");
let Appearance872 = browser.currentScene.createNode("Appearance");
Appearance872.USE = "SegmentLine";
Shape871.appearance = Appearance872;

let IndexedLineSet873 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet873.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]);
let Coordinate874 = browser.currentScene.createNode("Coordinate");
Coordinate874.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1899,0.8502,-0.0473,-0.1961,0.8055,-0.0218,-0.1972,0.806,-0.0468,-0.1951,0.8049,-0.0732,-0.1926,0.8096,-0.0975]);
IndexedLineSet873.coord = Coordinate874;

Shape871.geometry = IndexedLineSet873;

HAnimSegment868.children[1] = Shape871;

let Shape875 = browser.currentScene.createNode("Shape");
let Appearance876 = browser.currentScene.createNode("Appearance");
Appearance876.USE = "SiteParentLine";
Shape875.appearance = Appearance876;

let IndexedLineSet877 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet877.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
let Coordinate878 = browser.currentScene.createNode("Coordinate");
Coordinate878.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1977,0.8169,-0.0177,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064]);
IndexedLineSet877.coord = Coordinate878;

Shape875.geometry = IndexedLineSet877;

HAnimSegment868.children[2] = Shape875;

let HAnimSite879 = browser.currentScene.createNode("HAnimSite");
HAnimSite879.name = "r_metacarpal_pha2";
HAnimSite879.DEF = "hanim_r_metacarpal_pha2";
HAnimSite879.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
let Shape880 = browser.currentScene.createNode("Shape");
Shape880.USE = "sitebox";
HAnimSite879.children = new MFNode();

HAnimSite879.children[0] = Shape880;

HAnimSegment868.children[3] = HAnimSite879;

let HAnimSite881 = browser.currentScene.createNode("HAnimSite");
HAnimSite881.name = "r_ulnar_styloid";
HAnimSite881.DEF = "hanim_r_ulnar_styloid";
HAnimSite881.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
let Shape882 = browser.currentScene.createNode("Shape");
Shape882.USE = "sitebox";
HAnimSite881.children = new MFNode();

HAnimSite881.children[0] = Shape882;

HAnimSegment868.children[4] = HAnimSite881;

let HAnimSite883 = browser.currentScene.createNode("HAnimSite");
HAnimSite883.name = "r_metacarpal_pha5";
HAnimSite883.DEF = "hanim_r_metacarpal_pha5";
HAnimSite883.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
let Shape884 = browser.currentScene.createNode("Shape");
Shape884.USE = "sitebox";
HAnimSite883.children = new MFNode();

HAnimSite883.children[0] = Shape884;

HAnimSegment868.children[5] = HAnimSite883;

HAnimJoint867.children = new MFNode();

HAnimJoint867.children[0] = HAnimSegment868;

let HAnimJoint885 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint885.name = "r_thumb1";
HAnimJoint885.DEF = "hanim_r_thumb1";
HAnimJoint885.center = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
HAnimJoint885.skinCoordIndex = new MFInt32(new int[243,244]);
HAnimJoint885.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint885.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint885.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment886 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment886.name = "r_thumb_metacarpal";
HAnimSegment886.DEF = "hanim_r_thumb_metacarpal";
let Transform887 = browser.currentScene.createNode("Transform");
Transform887.translation = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
let Shape888 = browser.currentScene.createNode("Shape");
Shape888.USE = "jointbox";
Transform887.children = new MFNode();

Transform887.children[0] = Shape888;

HAnimSegment886.children = new MFNode();

HAnimSegment886.children[0] = Transform887;

let Shape889 = browser.currentScene.createNode("Shape");
let Appearance890 = browser.currentScene.createNode("Appearance");
Appearance890.USE = "SegmentLine";
Shape889.appearance = Appearance890;

let IndexedLineSet891 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet891.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate892 = browser.currentScene.createNode("Coordinate");
Coordinate892.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306]);
IndexedLineSet891.coord = Coordinate892;

Shape889.geometry = IndexedLineSet891;

HAnimSegment886.children[1] = Shape889;

HAnimJoint885.children = new MFNode();

HAnimJoint885.children[0] = HAnimSegment886;

let HAnimJoint893 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint893.name = "r_thumb2";
HAnimJoint893.DEF = "hanim_r_thumb2";
HAnimJoint893.center = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
HAnimJoint893.skinCoordIndex = new MFInt32(new int[254,255,256,257,258,259]);
HAnimJoint893.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1]);
HAnimJoint893.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint893.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment894 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment894.name = "r_thumb_proximal";
HAnimSegment894.DEF = "hanim_r_thumb_proximal";
let Transform895 = browser.currentScene.createNode("Transform");
Transform895.translation = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
let Shape896 = browser.currentScene.createNode("Shape");
Shape896.USE = "jointbox";
Transform895.children = new MFNode();

Transform895.children[0] = Shape896;

HAnimSegment894.children = new MFNode();

HAnimSegment894.children[0] = Transform895;

let Shape897 = browser.currentScene.createNode("Shape");
let Appearance898 = browser.currentScene.createNode("Appearance");
Appearance898.USE = "SegmentLine";
Shape897.appearance = Appearance898;

let IndexedLineSet899 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet899.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate900 = browser.currentScene.createNode("Coordinate");
Coordinate900.point = new MFVec3f(new float[-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506]);
IndexedLineSet899.coord = Coordinate900;

Shape897.geometry = IndexedLineSet899;

HAnimSegment894.children[1] = Shape897;

HAnimJoint893.children = new MFNode();

HAnimJoint893.children[0] = HAnimSegment894;

let HAnimJoint901 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint901.name = "r_thumb3";
HAnimJoint901.DEF = "hanim_r_thumb3";
HAnimJoint901.center = new SFVec3f(new float[-0.1864,0.819,0.0506]);
HAnimJoint901.skinCoordIndex = new MFInt32(new int[260,261,262,263,264,265,266,267,268]);
HAnimJoint901.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint901.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint901.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment902 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment902.name = "r_thumb_distal";
HAnimSegment902.DEF = "hanim_r_thumb_distal";
let Transform903 = browser.currentScene.createNode("Transform");
Transform903.translation = new SFVec3f(new float[-0.1864,0.819,0.0506]);
let Shape904 = browser.currentScene.createNode("Shape");
Shape904.USE = "jointbox";
Transform903.children = new MFNode();

Transform903.children[0] = Shape904;

HAnimSegment902.children = new MFNode();

HAnimSegment902.children[0] = Transform903;

let Shape905 = browser.currentScene.createNode("Shape");
let Appearance906 = browser.currentScene.createNode("Appearance");
Appearance906.USE = "SegmentLine";
Shape905.appearance = Appearance906;

let IndexedLineSet907 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet907.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate908 = browser.currentScene.createNode("Coordinate");
Coordinate908.point = new MFVec3f(new float[-0.1864,0.819,0.0506,-0.1869,0.809,0.082]);
IndexedLineSet907.coord = Coordinate908;

Shape905.geometry = IndexedLineSet907;

HAnimSegment902.children[1] = Shape905;

let Shape909 = browser.currentScene.createNode("Shape");
let Appearance910 = browser.currentScene.createNode("Appearance");
Appearance910.USE = "SiteParentLine";
Shape909.appearance = Appearance910;

let IndexedLineSet911 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet911.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate912 = browser.currentScene.createNode("Coordinate");
Coordinate912.point = new MFVec3f(new float[-0.1864,0.819,0.0506,-0.1869,0.809,0.082]);
IndexedLineSet911.coord = Coordinate912;

Shape909.geometry = IndexedLineSet911;

HAnimSegment902.children[2] = Shape909;

let HAnimSite913 = browser.currentScene.createNode("HAnimSite");
HAnimSite913.name = "r_thumb_distal_tip";
HAnimSite913.DEF = "hanim_r_thumb_distal_tip";
HAnimSite913.translation = new SFVec3f(new float[-0.1869,0.809,0.082]);
let Shape914 = browser.currentScene.createNode("Shape");
Shape914.USE = "sitebox";
HAnimSite913.children = new MFNode();

HAnimSite913.children[0] = Shape914;

HAnimSegment902.children[3] = HAnimSite913;

HAnimJoint901.children = new MFNode();

HAnimJoint901.children[0] = HAnimSegment902;

HAnimJoint893.children[1] = HAnimJoint901;

HAnimJoint885.children[1] = HAnimJoint893;

HAnimJoint867.children[1] = HAnimJoint885;

let HAnimJoint915 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint915.name = "r_index0";
HAnimJoint915.DEF = "hanim_r_index0";
HAnimJoint915.center = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
HAnimJoint915.skinCoordIndex = new MFInt32(new int[245,246]);
HAnimJoint915.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint915.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint915.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment916 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment916.name = "r_index_metacarpal";
HAnimSegment916.DEF = "hanim_r_index_metacarpal";
let Transform917 = browser.currentScene.createNode("Transform");
Transform917.translation = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
let Shape918 = browser.currentScene.createNode("Shape");
Shape918.USE = "jointbox";
Transform917.children = new MFNode();

Transform917.children[0] = Shape918;

HAnimSegment916.children = new MFNode();

HAnimSegment916.children[0] = Transform917;

let Shape919 = browser.currentScene.createNode("Shape");
let Appearance920 = browser.currentScene.createNode("Appearance");
Appearance920.USE = "SegmentLine";
Shape919.appearance = Appearance920;

let IndexedLineSet921 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet921.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate922 = browser.currentScene.createNode("Coordinate");
Coordinate922.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218]);
IndexedLineSet921.coord = Coordinate922;

Shape919.geometry = IndexedLineSet921;

HAnimSegment916.children[1] = Shape919;

HAnimJoint915.children = new MFNode();

HAnimJoint915.children[0] = HAnimSegment916;

let HAnimJoint923 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint923.name = "r_index1";
HAnimJoint923.DEF = "hanim_r_index1";
HAnimJoint923.center = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
HAnimJoint923.skinCoordIndex = new MFInt32(new int[254,255,256,269,270,271,279]);
HAnimJoint923.skinCoordWeight = new MFFloat(new float[0.5,0.5,0.5,1,1,1,0.5]);
HAnimJoint923.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint923.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment924 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment924.name = "r_index_proximal";
HAnimSegment924.DEF = "hanim_r_index_proximal";
let Transform925 = browser.currentScene.createNode("Transform");
Transform925.translation = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
let Shape926 = browser.currentScene.createNode("Shape");
Shape926.USE = "jointbox";
Transform925.children = new MFNode();

Transform925.children[0] = Shape926;

HAnimSegment924.children = new MFNode();

HAnimSegment924.children[0] = Transform925;

let Shape927 = browser.currentScene.createNode("Shape");
let Appearance928 = browser.currentScene.createNode("Appearance");
Appearance928.USE = "SegmentLine";
Shape927.appearance = Appearance928;

let IndexedLineSet929 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet929.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate930 = browser.currentScene.createNode("Coordinate");
Coordinate930.point = new MFVec3f(new float[-0.1961,0.7846,-0.0218,-0.1945,0.7169,-0.0173]);
IndexedLineSet929.coord = Coordinate930;

Shape927.geometry = IndexedLineSet929;

HAnimSegment924.children[1] = Shape927;

HAnimJoint923.children = new MFNode();

HAnimJoint923.children[0] = HAnimSegment924;

let HAnimJoint931 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint931.name = "r_index2";
HAnimJoint931.DEF = "hanim_r_index2";
HAnimJoint931.center = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
HAnimJoint931.skinCoordIndex = new MFInt32(new int[282,283,284,285]);
HAnimJoint931.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint931.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint931.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment932 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment932.name = "r_index_middle";
HAnimSegment932.DEF = "hanim_r_index_middle";
let Transform933 = browser.currentScene.createNode("Transform");
Transform933.translation = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
let Shape934 = browser.currentScene.createNode("Shape");
Shape934.USE = "jointbox";
Transform933.children = new MFNode();

Transform933.children[0] = Shape934;

HAnimSegment932.children = new MFNode();

HAnimSegment932.children[0] = Transform933;

let Shape935 = browser.currentScene.createNode("Shape");
let Appearance936 = browser.currentScene.createNode("Appearance");
Appearance936.USE = "SegmentLine";
Shape935.appearance = Appearance936;

let IndexedLineSet937 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet937.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate938 = browser.currentScene.createNode("Coordinate");
Coordinate938.point = new MFVec3f(new float[-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173]);
IndexedLineSet937.coord = Coordinate938;

Shape935.geometry = IndexedLineSet937;

HAnimSegment932.children[1] = Shape935;

HAnimJoint931.children = new MFNode();

HAnimJoint931.children[0] = HAnimSegment932;

let HAnimJoint939 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint939.name = "r_index3";
HAnimJoint939.DEF = "hanim_r_index3";
HAnimJoint939.center = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
HAnimJoint939.skinCoordIndex = new MFInt32(new int[286,287,288,289,290,291,292,293,294]);
HAnimJoint939.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint939.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint939.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment940 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment940.name = "r_index_distal";
HAnimSegment940.DEF = "hanim_r_index_distal";
let Transform941 = browser.currentScene.createNode("Transform");
Transform941.translation = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
let Shape942 = browser.currentScene.createNode("Shape");
Shape942.USE = "jointbox";
Transform941.children = new MFNode();

Transform941.children[0] = Shape942;

HAnimSegment940.children = new MFNode();

HAnimSegment940.children[0] = Transform941;

let Shape943 = browser.currentScene.createNode("Shape");
let Appearance944 = browser.currentScene.createNode("Appearance");
Appearance944.USE = "SegmentLine";
Shape943.appearance = Appearance944;

let IndexedLineSet945 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet945.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate946 = browser.currentScene.createNode("Coordinate");
Coordinate946.point = new MFVec3f(new float[-0.1945,0.7169,-0.0173,-0.198,0.6883,-0.018]);
IndexedLineSet945.coord = Coordinate946;

Shape943.geometry = IndexedLineSet945;

HAnimSegment940.children[1] = Shape943;

let Shape947 = browser.currentScene.createNode("Shape");
let Appearance948 = browser.currentScene.createNode("Appearance");
Appearance948.USE = "SiteParentLine";
Shape947.appearance = Appearance948;

let IndexedLineSet949 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet949.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1]);
let Coordinate950 = browser.currentScene.createNode("Coordinate");
Coordinate950.point = new MFVec3f(new float[-0.1945,0.7169,-0.0173,-0.198,0.6883,-0.018,-0.1941,0.6772,-0.0423]);
IndexedLineSet949.coord = Coordinate950;

Shape947.geometry = IndexedLineSet949;

HAnimSegment940.children[2] = Shape947;

let HAnimSite951 = browser.currentScene.createNode("HAnimSite");
HAnimSite951.name = "r_index_distal_tip";
HAnimSite951.DEF = "hanim_r_index_distal_tip";
HAnimSite951.translation = new SFVec3f(new float[-0.198,0.6883,-0.018]);
let Shape952 = browser.currentScene.createNode("Shape");
Shape952.USE = "sitebox";
HAnimSite951.children = new MFNode();

HAnimSite951.children[0] = Shape952;

HAnimSegment940.children[3] = HAnimSite951;

let HAnimSite953 = browser.currentScene.createNode("HAnimSite");
HAnimSite953.name = "r_dactylion";
HAnimSite953.DEF = "hanim_r_dactylion";
HAnimSite953.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
let Shape954 = browser.currentScene.createNode("Shape");
Shape954.USE = "sitebox";
HAnimSite953.children = new MFNode();

HAnimSite953.children[0] = Shape954;

HAnimSegment940.children[4] = HAnimSite953;

HAnimJoint939.children = new MFNode();

HAnimJoint939.children[0] = HAnimSegment940;

HAnimJoint931.children[1] = HAnimJoint939;

HAnimJoint923.children[1] = HAnimJoint931;

HAnimJoint915.children[1] = HAnimJoint923;

HAnimJoint867.children[2] = HAnimJoint915;

let HAnimJoint955 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint955.name = "r_middle0";
HAnimJoint955.DEF = "hanim_r_middle0";
HAnimJoint955.center = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
HAnimJoint955.skinCoordIndex = new MFInt32(new int[247,248]);
HAnimJoint955.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint955.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint955.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment956 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment956.name = "r_middle_metacarpal";
HAnimSegment956.DEF = "hanim_r_middle_metacarpal";
let Transform957 = browser.currentScene.createNode("Transform");
Transform957.translation = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
let Shape958 = browser.currentScene.createNode("Shape");
Shape958.USE = "jointbox";
Transform957.children = new MFNode();

Transform957.children[0] = Shape958;

HAnimSegment956.children = new MFNode();

HAnimSegment956.children[0] = Transform957;

let Shape959 = browser.currentScene.createNode("Shape");
let Appearance960 = browser.currentScene.createNode("Appearance");
Appearance960.USE = "SegmentLine";
Shape959.appearance = Appearance960;

let IndexedLineSet961 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet961.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate962 = browser.currentScene.createNode("Coordinate");
Coordinate962.point = new MFVec3f(new float[-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468]);
IndexedLineSet961.coord = Coordinate962;

Shape959.geometry = IndexedLineSet961;

HAnimSegment956.children[1] = Shape959;

HAnimJoint955.children = new MFNode();

HAnimJoint955.children[0] = HAnimSegment956;

let HAnimJoint963 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint963.name = "r_middle1";
HAnimJoint963.DEF = "hanim_r_middle1";
HAnimJoint963.center = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
HAnimJoint963.skinCoordIndex = new MFInt32(new int[272,273,279,280]);
HAnimJoint963.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimJoint963.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint963.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment964 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment964.name = "r_middle_proximal";
HAnimSegment964.DEF = "hanim_r_middle_proximal";
let Transform965 = browser.currentScene.createNode("Transform");
Transform965.translation = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
let Shape966 = browser.currentScene.createNode("Shape");
Shape966.USE = "jointbox";
Transform965.children = new MFNode();

Transform965.children[0] = Shape966;

HAnimSegment964.children = new MFNode();

HAnimSegment964.children[0] = Transform965;

let Shape967 = browser.currentScene.createNode("Shape");
let Appearance968 = browser.currentScene.createNode("Appearance");
Appearance968.USE = "SegmentLine";
Shape967.appearance = Appearance968;

let IndexedLineSet969 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet969.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate970 = browser.currentScene.createNode("Coordinate");
Coordinate970.point = new MFVec3f(new float[-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441]);
IndexedLineSet969.coord = Coordinate970;

Shape967.geometry = IndexedLineSet969;

HAnimSegment964.children[1] = Shape967;

HAnimJoint963.children = new MFNode();

HAnimJoint963.children[0] = HAnimSegment964;

let HAnimJoint971 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint971.name = "r_middle2";
HAnimJoint971.DEF = "hanim_r_middle2";
HAnimJoint971.center = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
HAnimJoint971.skinCoordIndex = new MFInt32(new int[295,296,297,298]);
HAnimJoint971.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint971.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint971.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment972 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment972.name = "r_middle_middle";
HAnimSegment972.DEF = "hanim_r_middle_middle";
let Transform973 = browser.currentScene.createNode("Transform");
Transform973.translation = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
let Shape974 = browser.currentScene.createNode("Shape");
Shape974.USE = "jointbox";
Transform973.children = new MFNode();

Transform973.children[0] = Shape974;

HAnimSegment972.children = new MFNode();

HAnimSegment972.children[0] = Transform973;

let Shape975 = browser.currentScene.createNode("Shape");
let Appearance976 = browser.currentScene.createNode("Appearance");
Appearance976.USE = "SegmentLine";
Shape975.appearance = Appearance976;

let IndexedLineSet977 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet977.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate978 = browser.currentScene.createNode("Coordinate");
Coordinate978.point = new MFVec3f(new float[-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432]);
IndexedLineSet977.coord = Coordinate978;

Shape975.geometry = IndexedLineSet977;

HAnimSegment972.children[1] = Shape975;

HAnimJoint971.children = new MFNode();

HAnimJoint971.children[0] = HAnimSegment972;

let HAnimJoint979 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint979.name = "r_middle3";
HAnimJoint979.DEF = "hanim_r_middle3";
HAnimJoint979.center = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
HAnimJoint979.skinCoordIndex = new MFInt32(new int[299,300,301,302,303,304,305,306,307]);
HAnimJoint979.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint979.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint979.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment980 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment980.name = "r_middle_distal";
HAnimSegment980.DEF = "hanim_r_middle_distal";
let Transform981 = browser.currentScene.createNode("Transform");
Transform981.translation = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
let Shape982 = browser.currentScene.createNode("Shape");
Shape982.USE = "jointbox";
Transform981.children = new MFNode();

Transform981.children[0] = Shape982;

HAnimSegment980.children = new MFNode();

HAnimSegment980.children[0] = Transform981;

let Shape983 = browser.currentScene.createNode("Shape");
let Appearance984 = browser.currentScene.createNode("Appearance");
Appearance984.USE = "SegmentLine";
Shape983.appearance = Appearance984;

let IndexedLineSet985 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet985.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate986 = browser.currentScene.createNode("Coordinate");
Coordinate986.point = new MFVec3f(new float[-0.1939,0.7042,-0.0432,-0.1969,0.6758,-0.0427]);
IndexedLineSet985.coord = Coordinate986;

Shape983.geometry = IndexedLineSet985;

HAnimSegment980.children[1] = Shape983;

let Shape987 = browser.currentScene.createNode("Shape");
let Appearance988 = browser.currentScene.createNode("Appearance");
Appearance988.USE = "SiteParentLine";
Shape987.appearance = Appearance988;

let IndexedLineSet989 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet989.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate990 = browser.currentScene.createNode("Coordinate");
Coordinate990.point = new MFVec3f(new float[-0.1939,0.7042,-0.0432,-0.1969,0.6758,-0.0427]);
IndexedLineSet989.coord = Coordinate990;

Shape987.geometry = IndexedLineSet989;

HAnimSegment980.children[2] = Shape987;

let HAnimSite991 = browser.currentScene.createNode("HAnimSite");
HAnimSite991.name = "r_middle_distal_tip";
HAnimSite991.DEF = "hanim_r_middle_distal_tip";
HAnimSite991.translation = new SFVec3f(new float[-0.1969,0.6758,-0.0427]);
let Shape992 = browser.currentScene.createNode("Shape");
Shape992.USE = "sitebox";
HAnimSite991.children = new MFNode();

HAnimSite991.children[0] = Shape992;

HAnimSegment980.children[3] = HAnimSite991;

HAnimJoint979.children = new MFNode();

HAnimJoint979.children[0] = HAnimSegment980;

HAnimJoint971.children[1] = HAnimJoint979;

HAnimJoint963.children[1] = HAnimJoint971;

HAnimJoint955.children[1] = HAnimJoint963;

HAnimJoint867.children[3] = HAnimJoint955;

let HAnimJoint993 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint993.name = "r_ring0";
HAnimJoint993.DEF = "hanim_r_ring0";
HAnimJoint993.center = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
HAnimJoint993.skinCoordIndex = new MFInt32(new int[249,250]);
HAnimJoint993.skinCoordWeight = new MFFloat(new float[1,1]);
HAnimJoint993.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint993.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment994 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment994.name = "r_ring_metacarpal";
HAnimSegment994.DEF = "hanim_r_ring_metacarpal";
let Transform995 = browser.currentScene.createNode("Transform");
Transform995.translation = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
let Shape996 = browser.currentScene.createNode("Shape");
Shape996.USE = "jointbox";
Transform995.children = new MFNode();

Transform995.children[0] = Shape996;

HAnimSegment994.children = new MFNode();

HAnimSegment994.children[0] = Transform995;

let Shape997 = browser.currentScene.createNode("Shape");
let Appearance998 = browser.currentScene.createNode("Appearance");
Appearance998.USE = "SegmentLine";
Shape997.appearance = Appearance998;

let IndexedLineSet999 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet999.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate1000 = browser.currentScene.createNode("Coordinate");
Coordinate1000.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732]);
IndexedLineSet999.coord = Coordinate1000;

Shape997.geometry = IndexedLineSet999;

HAnimSegment994.children[1] = Shape997;

HAnimJoint993.children = new MFNode();

HAnimJoint993.children[0] = HAnimSegment994;

let HAnimJoint1001 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1001.name = "r_ring1";
HAnimJoint1001.DEF = "hanim_r_ring1";
HAnimJoint1001.center = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
HAnimJoint1001.skinCoordIndex = new MFInt32(new int[274,275,280,281]);
HAnimJoint1001.skinCoordWeight = new MFFloat(new float[1,1,0.5,0.5]);
HAnimJoint1001.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1001.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1002 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1002.name = "r_ring_proximal";
HAnimSegment1002.DEF = "hanim_r_ring_proximal";
let Transform1003 = browser.currentScene.createNode("Transform");
Transform1003.translation = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
let Shape1004 = browser.currentScene.createNode("Shape");
Shape1004.USE = "jointbox";
Transform1003.children = new MFNode();

Transform1003.children[0] = Shape1004;

HAnimSegment1002.children = new MFNode();

HAnimSegment1002.children[0] = Transform1003;

let Shape1005 = browser.currentScene.createNode("Shape");
let Appearance1006 = browser.currentScene.createNode("Appearance");
Appearance1006.USE = "SegmentLine";
Shape1005.appearance = Appearance1006;

let IndexedLineSet1007 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1007.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate1008 = browser.currentScene.createNode("Coordinate");
Coordinate1008.point = new MFVec3f(new float[-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716]);
IndexedLineSet1007.coord = Coordinate1008;

Shape1005.geometry = IndexedLineSet1007;

HAnimSegment1002.children[1] = Shape1005;

HAnimJoint1001.children = new MFNode();

HAnimJoint1001.children[0] = HAnimSegment1002;

let HAnimJoint1009 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1009.name = "r_ring2";
HAnimJoint1009.DEF = "hanim_r_ring2";
HAnimJoint1009.center = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
HAnimJoint1009.skinCoordIndex = new MFInt32(new int[308,309,310,311]);
HAnimJoint1009.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint1009.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1009.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1010 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1010.name = "r_ring_middle";
HAnimSegment1010.DEF = "hanim_r_ring_middle";
let Transform1011 = browser.currentScene.createNode("Transform");
Transform1011.translation = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
let Shape1012 = browser.currentScene.createNode("Shape");
Shape1012.USE = "jointbox";
Transform1011.children = new MFNode();

Transform1011.children[0] = Shape1012;

HAnimSegment1010.children = new MFNode();

HAnimSegment1010.children[0] = Transform1011;

let Shape1013 = browser.currentScene.createNode("Shape");
let Appearance1014 = browser.currentScene.createNode("Appearance");
Appearance1014.USE = "SegmentLine";
Shape1013.appearance = Appearance1014;

let IndexedLineSet1015 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1015.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate1016 = browser.currentScene.createNode("Coordinate");
Coordinate1016.point = new MFVec3f(new float[-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.07063]);
IndexedLineSet1015.coord = Coordinate1016;

Shape1013.geometry = IndexedLineSet1015;

HAnimSegment1010.children[1] = Shape1013;

HAnimJoint1009.children = new MFNode();

HAnimJoint1009.children[0] = HAnimSegment1010;

let HAnimJoint1017 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1017.name = "r_ring3";
HAnimJoint1017.DEF = "hanim_r_ring3";
HAnimJoint1017.center = new SFVec3f(new float[-0.1908,0.7077,-0.0706]);
HAnimJoint1017.skinCoordIndex = new MFInt32(new int[312,313,314,315,316,317,318,319,320]);
HAnimJoint1017.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint1017.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1017.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1018 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1018.name = "r_ring_distal";
HAnimSegment1018.DEF = "hanim_r_ring_distal";
let Transform1019 = browser.currentScene.createNode("Transform");
Transform1019.translation = new SFVec3f(new float[-0.1908,0.7077,-0.0706]);
let Shape1020 = browser.currentScene.createNode("Shape");
Shape1020.USE = "jointbox";
Transform1019.children = new MFNode();

Transform1019.children[0] = Shape1020;

HAnimSegment1018.children = new MFNode();

HAnimSegment1018.children[0] = Transform1019;

let Shape1021 = browser.currentScene.createNode("Shape");
let Appearance1022 = browser.currentScene.createNode("Appearance");
Appearance1022.USE = "SegmentLine";
Shape1021.appearance = Appearance1022;

let IndexedLineSet1023 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1023.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate1024 = browser.currentScene.createNode("Coordinate");
Coordinate1024.point = new MFVec3f(new float[-0.1908,0.7077,-0.0706,-0.1934,0.6778,-0.0693]);
IndexedLineSet1023.coord = Coordinate1024;

Shape1021.geometry = IndexedLineSet1023;

HAnimSegment1018.children[1] = Shape1021;

let Shape1025 = browser.currentScene.createNode("Shape");
let Appearance1026 = browser.currentScene.createNode("Appearance");
Appearance1026.USE = "SiteParentLine";
Shape1025.appearance = Appearance1026;

let IndexedLineSet1027 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1027.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate1028 = browser.currentScene.createNode("Coordinate");
Coordinate1028.point = new MFVec3f(new float[-0.1908,0.7077,-0.0706,-0.1934,0.6778,-0.0693]);
IndexedLineSet1027.coord = Coordinate1028;

Shape1025.geometry = IndexedLineSet1027;

HAnimSegment1018.children[2] = Shape1025;

let HAnimSite1029 = browser.currentScene.createNode("HAnimSite");
HAnimSite1029.name = "r_ring_distal_tip";
HAnimSite1029.DEF = "hanim_r_ring_distal_tip";
HAnimSite1029.translation = new SFVec3f(new float[-0.1934,0.6778,-0.0693]);
let Shape1030 = browser.currentScene.createNode("Shape");
Shape1030.USE = "sitebox";
HAnimSite1029.children = new MFNode();

HAnimSite1029.children[0] = Shape1030;

HAnimSegment1018.children[3] = HAnimSite1029;

HAnimJoint1017.children = new MFNode();

HAnimJoint1017.children[0] = HAnimSegment1018;

HAnimJoint1009.children[1] = HAnimJoint1017;

HAnimJoint1001.children[1] = HAnimJoint1009;

HAnimJoint993.children[1] = HAnimJoint1001;

HAnimJoint867.children[4] = HAnimJoint993;

let HAnimJoint1031 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1031.name = "r_pinky0";
HAnimJoint1031.DEF = "hanim_r_pinky0";
HAnimJoint1031.center = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
HAnimJoint1031.skinCoordIndex = new MFInt32(new int[251,252,253,281]);
HAnimJoint1031.skinCoordWeight = new MFFloat(new float[1,1,1,0.5]);
HAnimJoint1031.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1031.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1032 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1032.name = "r_pinky_metacarpal";
HAnimSegment1032.DEF = "hanim_r_pinky_metacarpal";
let Transform1033 = browser.currentScene.createNode("Transform");
Transform1033.translation = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
let Shape1034 = browser.currentScene.createNode("Shape");
Shape1034.USE = "jointbox";
Transform1033.children = new MFNode();

Transform1033.children[0] = Shape1034;

HAnimSegment1032.children = new MFNode();

HAnimSegment1032.children[0] = Transform1033;

let Shape1035 = browser.currentScene.createNode("Shape");
let Appearance1036 = browser.currentScene.createNode("Appearance");
Appearance1036.USE = "SegmentLine";
Shape1035.appearance = Appearance1036;

let IndexedLineSet1037 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1037.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate1038 = browser.currentScene.createNode("Coordinate");
Coordinate1038.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975]);
IndexedLineSet1037.coord = Coordinate1038;

Shape1035.geometry = IndexedLineSet1037;

HAnimSegment1032.children[1] = Shape1035;

HAnimJoint1031.children = new MFNode();

HAnimJoint1031.children[0] = HAnimSegment1032;

let HAnimJoint1039 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1039.name = "r_pinky1";
HAnimJoint1039.DEF = "hanim_r_pinky1";
HAnimJoint1039.center = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
HAnimJoint1039.skinCoordIndex = new MFInt32(new int[276,277,278]);
HAnimJoint1039.skinCoordWeight = new MFFloat(new float[1,1,1]);
HAnimJoint1039.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1039.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1040 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1040.name = "r_pinky_proximal";
HAnimSegment1040.DEF = "hanim_r_pinky_proximal";
let Transform1041 = browser.currentScene.createNode("Transform");
Transform1041.translation = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
let Shape1042 = browser.currentScene.createNode("Shape");
Shape1042.USE = "jointbox";
Transform1041.children = new MFNode();

Transform1041.children[0] = Shape1042;

HAnimSegment1040.children = new MFNode();

HAnimSegment1040.children[0] = Transform1041;

let Shape1043 = browser.currentScene.createNode("Shape");
let Appearance1044 = browser.currentScene.createNode("Appearance");
Appearance1044.USE = "SegmentLine";
Shape1043.appearance = Appearance1044;

let IndexedLineSet1045 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1045.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate1046 = browser.currentScene.createNode("Coordinate");
Coordinate1046.point = new MFVec3f(new float[-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963]);
IndexedLineSet1045.coord = Coordinate1046;

Shape1043.geometry = IndexedLineSet1045;

HAnimSegment1040.children[1] = Shape1043;

HAnimJoint1039.children = new MFNode();

HAnimJoint1039.children[0] = HAnimSegment1040;

let HAnimJoint1047 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1047.name = "r_pinky2";
HAnimJoint1047.DEF = "hanim_r_pinky2";
HAnimJoint1047.center = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
HAnimJoint1047.skinCoordIndex = new MFInt32(new int[321,322,323,324]);
HAnimJoint1047.skinCoordWeight = new MFFloat(new float[1,1,1,1]);
HAnimJoint1047.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1047.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1048 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1048.name = "r_pinky_middle";
HAnimSegment1048.DEF = "hanim_r_pinky_middle";
let Transform1049 = browser.currentScene.createNode("Transform");
Transform1049.translation = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
let Shape1050 = browser.currentScene.createNode("Shape");
Shape1050.USE = "jointbox";
Transform1049.children = new MFNode();

Transform1049.children[0] = Shape1050;

HAnimSegment1048.children = new MFNode();

HAnimSegment1048.children[0] = Transform1049;

let Shape1051 = browser.currentScene.createNode("Shape");
let Appearance1052 = browser.currentScene.createNode("Appearance");
Appearance1052.USE = "SegmentLine";
Shape1051.appearance = Appearance1052;

let IndexedLineSet1053 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1053.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate1054 = browser.currentScene.createNode("Coordinate");
Coordinate1054.point = new MFVec3f(new float[-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096]);
IndexedLineSet1053.coord = Coordinate1054;

Shape1051.geometry = IndexedLineSet1053;

HAnimSegment1048.children[1] = Shape1051;

HAnimJoint1047.children = new MFNode();

HAnimJoint1047.children[0] = HAnimSegment1048;

let HAnimJoint1055 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1055.name = "r_pinky3";
HAnimJoint1055.DEF = "hanim_r_pinky3";
HAnimJoint1055.center = new SFVec3f(new float[-0.1908,0.754,-0.096]);
HAnimJoint1055.skinCoordIndex = new MFInt32(new int[325,326,327,328,329,330,331,332,333]);
HAnimJoint1055.skinCoordWeight = new MFFloat(new float[1,1,1,1,1,1,1,1,1]);
HAnimJoint1055.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1055.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1056 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1056.name = "r_pinky_distal";
HAnimSegment1056.DEF = "hanim_r_pinky_distal";
let Transform1057 = browser.currentScene.createNode("Transform");
Transform1057.translation = new SFVec3f(new float[-0.1908,0.754,-0.096]);
let Shape1058 = browser.currentScene.createNode("Shape");
Shape1058.USE = "jointbox";
Transform1057.children = new MFNode();

Transform1057.children[0] = Shape1058;

HAnimSegment1056.children = new MFNode();

HAnimSegment1056.children[0] = Transform1057;

let Shape1059 = browser.currentScene.createNode("Shape");
let Appearance1060 = browser.currentScene.createNode("Appearance");
Appearance1060.USE = "SegmentLine";
Shape1059.appearance = Appearance1060;

let IndexedLineSet1061 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1061.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate1062 = browser.currentScene.createNode("Coordinate");
Coordinate1062.point = new MFVec3f(new float[-0.1908,0.754,-0.096,-0.1938,0.7035,-0.0949]);
IndexedLineSet1061.coord = Coordinate1062;

Shape1059.geometry = IndexedLineSet1061;

HAnimSegment1056.children[1] = Shape1059;

let Shape1063 = browser.currentScene.createNode("Shape");
let Appearance1064 = browser.currentScene.createNode("Appearance");
Appearance1064.USE = "SiteParentLine";
Shape1063.appearance = Appearance1064;

let IndexedLineSet1065 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet1065.coordIndex = new MFInt32(new int[0,1,-1]);
let Coordinate1066 = browser.currentScene.createNode("Coordinate");
Coordinate1066.point = new MFVec3f(new float[-0.1908,0.754,-0.096,-0.1938,0.7035,-0.0949]);
IndexedLineSet1065.coord = Coordinate1066;

Shape1063.geometry = IndexedLineSet1065;

HAnimSegment1056.children[2] = Shape1063;

let HAnimSite1067 = browser.currentScene.createNode("HAnimSite");
HAnimSite1067.name = "r_pinky_distal_tip";
HAnimSite1067.DEF = "hanim_r_pinky_distal_tip";
HAnimSite1067.translation = new SFVec3f(new float[-0.1938,0.7035,-0.0949]);
let Shape1068 = browser.currentScene.createNode("Shape");
Shape1068.USE = "sitebox";
HAnimSite1067.children = new MFNode();

HAnimSite1067.children[0] = Shape1068;

HAnimSegment1056.children[3] = HAnimSite1067;

HAnimJoint1055.children = new MFNode();

HAnimJoint1055.children[0] = HAnimSegment1056;

HAnimJoint1047.children[1] = HAnimJoint1055;

HAnimJoint1039.children[1] = HAnimJoint1047;

HAnimJoint1031.children[1] = HAnimJoint1039;

HAnimJoint867.children[5] = HAnimJoint1031;

HAnimJoint847.children[1] = HAnimJoint867;

HAnimJoint833.children[1] = HAnimJoint847;

HAnimJoint825.children[1] = HAnimJoint833;

HAnimJoint805.children[1] = HAnimJoint825;

HAnimJoint411.children[3] = HAnimJoint805;

HAnimJoint403.children[1] = HAnimJoint411;

HAnimJoint395.children[1] = HAnimJoint403;

HAnimJoint387.children[1] = HAnimJoint395;

HAnimJoint379.children[1] = HAnimJoint387;

HAnimJoint371.children[1] = HAnimJoint379;

HAnimJoint363.children[1] = HAnimJoint371;

HAnimJoint355.children[1] = HAnimJoint363;

HAnimJoint339.children[1] = HAnimJoint355;

HAnimJoint325.children[1] = HAnimJoint339;

HAnimJoint317.children[1] = HAnimJoint325;

HAnimJoint309.children[1] = HAnimJoint317;

HAnimJoint301.children[1] = HAnimJoint309;

HAnimJoint283.children[1] = HAnimJoint301;

HAnimJoint275.children[1] = HAnimJoint283;

HAnimJoint267.children[1] = HAnimJoint275;

HAnimJoint251.children[1] = HAnimJoint267;

HAnimJoint41.children[2] = HAnimJoint251;

HAnimHumanoid40.joints = new MFNode();

HAnimHumanoid40.joints[0] = HAnimJoint41;

let Coordinate1069 = browser.currentScene.createNode("Coordinate");
Coordinate1069.DEF = "JoeSkinCoord";
Coordinate1069.point = new MFVec3f(new float[0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0.0034,0.8266,0.0257,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.78,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.255,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168]);
HAnimHumanoid40.skinCoord = Coordinate1069;

let Shape1070 = browser.currentScene.createNode("Shape");
let Appearance1071 = browser.currentScene.createNode("Appearance");
let Material1072 = browser.currentScene.createNode("Material");
Material1072.ambientIntensity = 0.9;
Material1072.diffuseColor = new SFColor(new float[0.5,0,0.5]);
Material1072.specularColor = new SFColor(new float[1,1,1]);
Material1072.emissiveColor = new SFColor(new float[0.13,0.55,0.13]);
Material1072.shininess = 0.9;
Material1072.transparency = 0.4;
Appearance1071.material = Material1072;

let ImageTexture1073 = browser.currentScene.createNode("ImageTexture");
ImageTexture1073.url = new MFString(new java.lang.String["cbodytexture28.png"]);
Appearance1071.texture = ImageTexture1073;

Shape1070.appearance = Appearance1071;

let IndexedFaceSet1074 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1074.creaseAngle = 3.1;
IndexedFaceSet1074.colorPerVertex = False;
IndexedFaceSet1074.coordIndex = new MFInt32(new int[0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
let Coordinate1075 = browser.currentScene.createNode("Coordinate");
Coordinate1075.USE = "JoeSkinCoord";
IndexedFaceSet1074.coord = Coordinate1075;

Shape1070.geometry = IndexedFaceSet1074;

HAnimHumanoid40.skin[1] = Shape1070;

Group39.children = new MFNode();

Group39.children[0] = HAnimHumanoid40;

browser.currentScene.children[3] = Group39;

let Group1076 = browser.currentScene.createNode("Group");
Group1076.DEF = "SceneViewpoints";
let Viewpoint1077 = browser.currentScene.createNode("Viewpoint");
Viewpoint1077.DEF = "hanim_InclinedView";
Viewpoint1077.description = "hanim_Inclined View";
Viewpoint1077.position = new SFVec3f(new float[1.62,1.05,2.06]);
Viewpoint1077.orientation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
Viewpoint1077.centerOfRotation = new SFVec3f(new float[0,0.824,0.0277]);
Group1076.children = new MFNode();

Group1076.children[0] = Viewpoint1077;

let Viewpoint1078 = browser.currentScene.createNode("Viewpoint");
Viewpoint1078.DEF = "hanim_IFrontView_1";
Viewpoint1078.description = "hanim_Front View";
Viewpoint1078.position = new SFVec3f(new float[0,0.854,2.57665]);
Viewpoint1078.centerOfRotation = new SFVec3f(new float[0,0.824,0.0277]);
Group1076.children[1] = Viewpoint1078;

let Viewpoint1079 = browser.currentScene.createNode("Viewpoint");
Viewpoint1079.DEF = "hanim_ISideView_1";
Viewpoint1079.description = "hanim_Side View";
Viewpoint1079.position = new SFVec3f(new float[2.5929,0.854,0]);
Viewpoint1079.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint1079.centerOfRotation = new SFVec3f(new float[0,0.824,0.0277]);
Group1076.children[2] = Viewpoint1079;

let Viewpoint1080 = browser.currentScene.createNode("Viewpoint");
Viewpoint1080.DEF = "hanim_ITopView";
Viewpoint1080.description = "hanim_Top View";
Viewpoint1080.position = new SFVec3f(new float[0,3.4495,0]);
Viewpoint1080.orientation = new SFRotation(new float[1,0,0,-1.5708]);
Viewpoint1080.centerOfRotation = new SFVec3f(new float[0,0.824,0.0277]);
Group1076.children[3] = Viewpoint1080;

let Viewpoint1081 = browser.currentScene.createNode("Viewpoint");
Viewpoint1081.DEF = "hanim_IRightHandFront";
Viewpoint1081.description = "hanim_RightHandFront View";
Viewpoint1081.position = new SFVec3f(new float[-0.3,0.75,0.45]);
Viewpoint1081.centerOfRotation = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
Group1076.children[4] = Viewpoint1081;

let Viewpoint1082 = browser.currentScene.createNode("Viewpoint");
Viewpoint1082.DEF = "hanim_ILeftHandFront";
Viewpoint1082.description = "hanim_LeftHandFront View";
Viewpoint1082.position = new SFVec3f(new float[0.3,0.75,0.45]);
Viewpoint1082.centerOfRotation = new SFVec3f(new float[0.1959,0.8694,-0.0521]);
Group1076.children[5] = Viewpoint1082;

let Viewpoint1083 = browser.currentScene.createNode("Viewpoint");
Viewpoint1083.DEF = "hanim_InclinedView2";
Viewpoint1083.description = "hanim_Inclined View2";
Viewpoint1083.position = new SFVec3f(new float[-1.62,1.05,2.06]);
Viewpoint1083.orientation = new SFRotation(new float[-0.113,-0.993,0.0347,0.671]);
Viewpoint1083.centerOfRotation = new SFVec3f(new float[0,0.824,0.0277]);
Group1076.children[6] = Viewpoint1083;

let Viewpoint1084 = browser.currentScene.createNode("Viewpoint");
Viewpoint1084.DEF = "hanim_IFrontView";
Viewpoint1084.description = "hanim_Front View2";
Viewpoint1084.position = new SFVec3f(new float[0,0.854,1.575]);
Viewpoint1084.centerOfRotation = new SFVec3f(new float[0,0.824,0.0277]);
Group1076.children[7] = Viewpoint1084;

let Viewpoint1085 = browser.currentScene.createNode("Viewpoint");
Viewpoint1085.DEF = "hanim_ISideView";
Viewpoint1085.description = "hanim_Side View2";
Viewpoint1085.position = new SFVec3f(new float[1.5929,0.854,0]);
Viewpoint1085.orientation = new SFRotation(new float[0,1,0,1.5708]);
Viewpoint1085.centerOfRotation = new SFVec3f(new float[0,0.824,0.0277]);
Group1076.children[8] = Viewpoint1085;

let Viewpoint1086 = browser.currentScene.createNode("Viewpoint");
Viewpoint1086.DEF = "hanim_IHeadFront";
Viewpoint1086.description = "hanim_HeadFront View";
Viewpoint1086.position = new SFVec3f(new float[0,1.5,1]);
Viewpoint1086.centerOfRotation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
Group1076.children[9] = Viewpoint1086;

let Viewpoint1087 = browser.currentScene.createNode("Viewpoint");
Viewpoint1087.DEF = "hanim_IChestFront";
Viewpoint1087.description = "hanim_ChestFront View";
Viewpoint1087.position = new SFVec3f(new float[0,1.2,1]);
Viewpoint1087.centerOfRotation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
Group1076.children[10] = Viewpoint1087;

let Viewpoint1088 = browser.currentScene.createNode("Viewpoint");
Viewpoint1088.DEF = "hanim_IPelvisFront";
Viewpoint1088.description = "hanim_PelvisFront View";
Viewpoint1088.position = new SFVec3f(new float[0,0.8,1]);
Viewpoint1088.centerOfRotation = new SFVec3f(new float[0,0.824,0.0277]);
Group1076.children[11] = Viewpoint1088;

let Viewpoint1089 = browser.currentScene.createNode("Viewpoint");
Viewpoint1089.DEF = "hanim_IKneesFront";
Viewpoint1089.description = "hanim_KneesFront View";
Viewpoint1089.position = new SFVec3f(new float[0,0.4,1]);
Viewpoint1089.centerOfRotation = new SFVec3f(new float[0,0.824,0.0277]);
Group1076.children[12] = Viewpoint1089;

browser.currentScene.children[4] = Group1076;

let Group1090 = browser.currentScene.createNode("Group");
Group1090.DEF = "StandAnimation";
let TimeSensor1091 = browser.currentScene.createNode("TimeSensor");
TimeSensor1091.DEF = "StandTimer";
TimeSensor1091.cycleInterval = 5.73;
TimeSensor1091.loop = True;
Group1090.children = new MFNode();

Group1090.children[0] = TimeSensor1091;

let OrientationInterpolator1092 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1092.DEF = "Stand_r_metatarsalPitch";
OrientationInterpolator1092.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator1092.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.015,1,0,0,0.17,-1,0,0,0.025,1,0,0,0.01,1,0,0,0]);
Group1090.children[1] = OrientationInterpolator1092;

let OrientationInterpolator1093 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1093.DEF = "Stand_r_ankleRotInterp";
OrientationInterpolator1093.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1093.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1090.children[2] = OrientationInterpolator1093;

let OrientationInterpolator1094 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1094.DEF = "Stand_r_kneeRotInterp";
OrientationInterpolator1094.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1094.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1090.children[3] = OrientationInterpolator1094;

let OrientationInterpolator1095 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1095.DEF = "Stand_r_hipRotInterp";
OrientationInterpolator1095.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1095.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1090.children[4] = OrientationInterpolator1095;

let OrientationInterpolator1096 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1096.DEF = "Stand_l_ankleRotInterp";
OrientationInterpolator1096.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1096.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1090.children[5] = OrientationInterpolator1096;

let OrientationInterpolator1097 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1097.DEF = "Stand_l_kneeRotInterp";
OrientationInterpolator1097.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1097.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1090.children[6] = OrientationInterpolator1097;

let OrientationInterpolator1098 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1098.DEF = "Stand_l_hipRotInterp";
OrientationInterpolator1098.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1098.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1090.children[7] = OrientationInterpolator1098;

let OrientationInterpolator1099 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1099.DEF = "Stand_r_wristRotInterp";
OrientationInterpolator1099.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1099.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,0.25,0,0,1,0]);
Group1090.children[8] = OrientationInterpolator1099;

let OrientationInterpolator1100 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1100.DEF = "Stand_r_elbowRotInterp";
OrientationInterpolator1100.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1100.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1090.children[9] = OrientationInterpolator1100;

let OrientationInterpolator1101 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1101.DEF = "Stand_r_shoulderRotInterp";
OrientationInterpolator1101.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1101.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1090.children[10] = OrientationInterpolator1101;

let OrientationInterpolator1102 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1102.DEF = "Stand_l_wristRotInterp";
OrientationInterpolator1102.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1102.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1090.children[11] = OrientationInterpolator1102;

let OrientationInterpolator1103 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1103.DEF = "Stand_l_elbowRotInterp";
OrientationInterpolator1103.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1103.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1090.children[12] = OrientationInterpolator1103;

let OrientationInterpolator1104 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1104.DEF = "Stand_l_shoulderRotInterp";
OrientationInterpolator1104.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1104.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1090.children[13] = OrientationInterpolator1104;

let OrientationInterpolator1105 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1105.DEF = "Stand_headRotInterp";
OrientationInterpolator1105.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1105.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1090.children[14] = OrientationInterpolator1105;

let OrientationInterpolator1106 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1106.DEF = "Stand_neckRotInterp";
OrientationInterpolator1106.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1106.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5,0,0,1,0]);
Group1090.children[15] = OrientationInterpolator1106;

let OrientationInterpolator1107 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1107.DEF = "Stand_l_eyeballRotInterp";
OrientationInterpolator1107.key = new MFFloat(new float[0,0.4,0.7,1]);
OrientationInterpolator1107.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0]);
Group1090.children[16] = OrientationInterpolator1107;

let OrientationInterpolator1108 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1108.DEF = "Stand_r_eyeballRotInterp";
OrientationInterpolator1108.key = new MFFloat(new float[0,0.4,0.7,1]);
OrientationInterpolator1108.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0]);
Group1090.children[17] = OrientationInterpolator1108;

let OrientationInterpolator1109 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1109.DEF = "Stand_lower_bodyRotInterp";
OrientationInterpolator1109.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1109.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1090.children[18] = OrientationInterpolator1109;

let OrientationInterpolator1110 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1110.DEF = "Stand_upper_bodyRotInterp";
OrientationInterpolator1110.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1110.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1090.children[19] = OrientationInterpolator1110;

let OrientationInterpolator1111 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1111.DEF = "Stand_whole_bodyRotInterp";
OrientationInterpolator1111.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1111.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1090.children[20] = OrientationInterpolator1111;

let PositionInterpolator1112 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator1112.DEF = "Stand_whole_bodyTransInterp";
PositionInterpolator1112.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator1112.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group1090.children[21] = PositionInterpolator1112;

let OrientationInterpolator1113 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1113.DEF = "Stand_l_sternoclavicularRoll";
OrientationInterpolator1113.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1113.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1090.children[22] = OrientationInterpolator1113;

let OrientationInterpolator1114 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1114.DEF = "Stand_l_acromioclavicularRoll";
OrientationInterpolator1114.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1114.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1090.children[23] = OrientationInterpolator1114;

let OrientationInterpolator1115 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1115.DEF = "Stand_r_sternoclavicularRoll";
OrientationInterpolator1115.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1115.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1090.children[24] = OrientationInterpolator1115;

let OrientationInterpolator1116 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1116.DEF = "Stand_r_acromioclavicularRoll";
OrientationInterpolator1116.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1116.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1090.children[25] = OrientationInterpolator1116;

let OrientationInterpolator1117 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1117.DEF = "Stand_sacroiliacYaw";
OrientationInterpolator1117.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1117.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1090.children[26] = OrientationInterpolator1117;

let OrientationInterpolator1118 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1118.DEF = "Stand_vl5Yaw";
OrientationInterpolator1118.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator1118.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1090.children[27] = OrientationInterpolator1118;

let OrientationInterpolator1119 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1119.DEF = "Stand_vc6Yaw";
OrientationInterpolator1119.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator1119.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,-1,0,0,0,0,-1,0,0,0,1,0,0]);
Group1090.children[28] = OrientationInterpolator1119;

let OrientationInterpolator1120 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1120.DEF = "Stand_l_thumb1Pitch";
OrientationInterpolator1120.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1120.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1090.children[29] = OrientationInterpolator1120;

let OrientationInterpolator1121 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1121.DEF = "Stand_r_thumb1Pitch";
OrientationInterpolator1121.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1121.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,0.1,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group1090.children[30] = OrientationInterpolator1121;

let OrientationInterpolator1122 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1122.DEF = "Stand_r_index1Roll";
OrientationInterpolator1122.key = new MFFloat(new float[0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator1122.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.1,0,0,1,0.2,0,0,1,0.3,0,0,1,0,0,0,1,0]);
Group1090.children[31] = OrientationInterpolator1122;

let OrientationInterpolator1123 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1123.DEF = "Stand_r_index2Roll";
OrientationInterpolator1123.key = new MFFloat(new float[0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator1123.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.4,0,0,1,0.32,0,0,1,0.25,0,0,1,0.2,0,0,1,0]);
Group1090.children[32] = OrientationInterpolator1123;

let OrientationInterpolator1124 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1124.DEF = "Stand_r_index3Roll";
OrientationInterpolator1124.key = new MFFloat(new float[0,0.2,0.4,0.5,0.8,1]);
OrientationInterpolator1124.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.3,0,0,1,0.35,0,0,1,0.2,0,0,1,0]);
Group1090.children[33] = OrientationInterpolator1124;

browser.currentScene.children[5] = Group1090;

let Group1125 = browser.currentScene.createNode("Group");
Group1125.DEF = "PitchesAnimation";
let TimeSensor1126 = browser.currentScene.createNode("TimeSensor");
TimeSensor1126.DEF = "PitchTimer";
TimeSensor1126.cycleInterval = 5.73;
TimeSensor1126.loop = True;
Group1125.children = new MFNode();

Group1125.children[0] = TimeSensor1126;

let OrientationInterpolator1127 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1127.DEF = "Pitch_r_metatarsalPitch";
OrientationInterpolator1127.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator1127.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0]);
Group1125.children[1] = OrientationInterpolator1127;

let OrientationInterpolator1128 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1128.DEF = "Pitches_r_ankleRotInterp";
OrientationInterpolator1128.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator1128.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group1125.children[2] = OrientationInterpolator1128;

let OrientationInterpolator1129 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1129.DEF = "Pitches_r_kneeRotInterp";
OrientationInterpolator1129.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1129.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1125.children[3] = OrientationInterpolator1129;

let OrientationInterpolator1130 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1130.DEF = "Pitches_r_hipRotInterp";
OrientationInterpolator1130.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator1130.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group1125.children[4] = OrientationInterpolator1130;

let OrientationInterpolator1131 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1131.DEF = "Pitches_l_ankleRotInterp";
OrientationInterpolator1131.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator1131.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group1125.children[5] = OrientationInterpolator1131;

let OrientationInterpolator1132 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1132.DEF = "Pitches_l_kneeRotInterp";
OrientationInterpolator1132.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1132.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1125.children[6] = OrientationInterpolator1132;

let OrientationInterpolator1133 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1133.DEF = "Pitches_l_hipRotInterp";
OrientationInterpolator1133.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator1133.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group1125.children[7] = OrientationInterpolator1133;

let OrientationInterpolator1134 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1134.DEF = "Pitches_r_wristRotInterp";
OrientationInterpolator1134.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1134.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1125.children[8] = OrientationInterpolator1134;

let OrientationInterpolator1135 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1135.DEF = "Pitches_r_elbowRotInterp";
OrientationInterpolator1135.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1135.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1125.children[9] = OrientationInterpolator1135;

let OrientationInterpolator1136 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1136.DEF = "Pitches_r_shoulderRotInterp";
OrientationInterpolator1136.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator1136.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0]);
Group1125.children[10] = OrientationInterpolator1136;

let OrientationInterpolator1137 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1137.DEF = "Pitches_l_wristRotInterp";
OrientationInterpolator1137.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1137.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1125.children[11] = OrientationInterpolator1137;

let OrientationInterpolator1138 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1138.DEF = "Pitches_l_elbowRotInterp";
OrientationInterpolator1138.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1138.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1125.children[12] = OrientationInterpolator1138;

let OrientationInterpolator1139 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1139.DEF = "Pitches_l_shoulderRotInterp";
OrientationInterpolator1139.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator1139.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0]);
Group1125.children[13] = OrientationInterpolator1139;

let OrientationInterpolator1140 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1140.DEF = "Pitches_headRotInterp";
OrientationInterpolator1140.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1140.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1125.children[14] = OrientationInterpolator1140;

let OrientationInterpolator1141 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1141.DEF = "Pitches_neckRotInterp";
OrientationInterpolator1141.key = new MFFloat(new float[0,0.25,0.55,1]);
OrientationInterpolator1141.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.55,-1,0,0,1.05,0,0,1,0]);
Group1125.children[15] = OrientationInterpolator1141;

let OrientationInterpolator1142 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1142.DEF = "Pitches_lower_bodyRotInterp";
OrientationInterpolator1142.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1142.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1125.children[16] = OrientationInterpolator1142;

let OrientationInterpolator1143 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1143.DEF = "Pitches_upper_bodyRotInterp";
OrientationInterpolator1143.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1143.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1125.children[17] = OrientationInterpolator1143;

let OrientationInterpolator1144 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1144.DEF = "Pitches_whole_bodyRotInterp";
OrientationInterpolator1144.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1144.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1125.children[18] = OrientationInterpolator1144;

let PositionInterpolator1145 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator1145.DEF = "Pitches_whole_bodyTransInterp";
PositionInterpolator1145.key = new MFFloat(new float[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
PositionInterpolator1145.keyValue = new MFVec3f(new float[0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0]);
Group1125.children[19] = PositionInterpolator1145;

let OrientationInterpolator1146 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1146.DEF = "Pitch_l_sternoclavicularRoll";
OrientationInterpolator1146.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1146.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1125.children[20] = OrientationInterpolator1146;

let OrientationInterpolator1147 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1147.DEF = "Pitch_l_acromioclavicularRoll";
OrientationInterpolator1147.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1147.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1125.children[21] = OrientationInterpolator1147;

let OrientationInterpolator1148 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1148.DEF = "Pitch_r_sternoclavicularRoll";
OrientationInterpolator1148.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1148.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1125.children[22] = OrientationInterpolator1148;

let OrientationInterpolator1149 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1149.DEF = "Pitch_r_acromioclavicularRoll";
OrientationInterpolator1149.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1149.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1125.children[23] = OrientationInterpolator1149;

let OrientationInterpolator1150 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1150.DEF = "Pitch_sacroiliacYaw";
OrientationInterpolator1150.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1150.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1125.children[24] = OrientationInterpolator1150;

let OrientationInterpolator1151 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1151.DEF = "Pitch_vl5Yaw";
OrientationInterpolator1151.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator1151.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1125.children[25] = OrientationInterpolator1151;

let OrientationInterpolator1152 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1152.DEF = "Pitch_vc6Yaw";
OrientationInterpolator1152.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator1152.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1125.children[26] = OrientationInterpolator1152;

let OrientationInterpolator1153 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1153.DEF = "Pitch_l_thumb1Pitch";
OrientationInterpolator1153.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1153.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group1125.children[27] = OrientationInterpolator1153;

let OrientationInterpolator1154 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1154.DEF = "Pitch_r_thumb1Pitch";
OrientationInterpolator1154.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1154.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group1125.children[28] = OrientationInterpolator1154;

browser.currentScene.children[6] = Group1125;

let Group1155 = browser.currentScene.createNode("Group");
Group1155.DEF = "YawsAnimation";
let TimeSensor1156 = browser.currentScene.createNode("TimeSensor");
TimeSensor1156.DEF = "YawTimer";
TimeSensor1156.cycleInterval = 5.73;
TimeSensor1156.loop = True;
Group1155.children = new MFNode();

Group1155.children[0] = TimeSensor1156;

let OrientationInterpolator1157 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1157.DEF = "Yaw_r_metatarsalPitch";
OrientationInterpolator1157.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator1157.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1155.children[1] = OrientationInterpolator1157;

let OrientationInterpolator1158 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1158.DEF = "Yaws_r_ankleRotInterp";
OrientationInterpolator1158.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator1158.keyValue = new MFRotation(new float[0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group1155.children[2] = OrientationInterpolator1158;

let OrientationInterpolator1159 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1159.DEF = "Yaws_r_kneeRotInterp";
OrientationInterpolator1159.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator1159.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group1155.children[3] = OrientationInterpolator1159;

let OrientationInterpolator1160 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1160.DEF = "Yaws_r_hipRotInterp";
OrientationInterpolator1160.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1160.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1155.children[4] = OrientationInterpolator1160;

let OrientationInterpolator1161 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1161.DEF = "Yaws_l_ankleRotInterp";
OrientationInterpolator1161.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator1161.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group1155.children[5] = OrientationInterpolator1161;

let OrientationInterpolator1162 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1162.DEF = "Yaws_l_kneeRotInterp";
OrientationInterpolator1162.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator1162.keyValue = new MFRotation(new float[0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group1155.children[6] = OrientationInterpolator1162;

let OrientationInterpolator1163 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1163.DEF = "Yaws_l_hipRotInterp";
OrientationInterpolator1163.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1163.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1155.children[7] = OrientationInterpolator1163;

let OrientationInterpolator1164 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1164.DEF = "Yaws_r_wristRotInterp";
OrientationInterpolator1164.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1164.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1155.children[8] = OrientationInterpolator1164;

let OrientationInterpolator1165 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1165.DEF = "Yaws_r_elbowRotInterp";
OrientationInterpolator1165.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1165.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1155.children[9] = OrientationInterpolator1165;

let OrientationInterpolator1166 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1166.DEF = "Yaws_r_shoulderRotInterp";
OrientationInterpolator1166.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1166.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1155.children[10] = OrientationInterpolator1166;

let OrientationInterpolator1167 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1167.DEF = "Yaws_l_wristRotInterp";
OrientationInterpolator1167.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1167.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1155.children[11] = OrientationInterpolator1167;

let OrientationInterpolator1168 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1168.DEF = "Yaws_l_elbowRotInterp";
OrientationInterpolator1168.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1168.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1155.children[12] = OrientationInterpolator1168;

let OrientationInterpolator1169 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1169.DEF = "Yaws_l_shoulderRotInterp";
OrientationInterpolator1169.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1169.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1155.children[13] = OrientationInterpolator1169;

let OrientationInterpolator1170 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1170.DEF = "Yaws_headRotInterp";
OrientationInterpolator1170.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1170.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1155.children[14] = OrientationInterpolator1170;

let OrientationInterpolator1171 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1171.DEF = "Yaws_neckRotInterp";
OrientationInterpolator1171.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator1171.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0]);
Group1155.children[15] = OrientationInterpolator1171;

let OrientationInterpolator1172 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1172.DEF = "Yaws_upper_bodyRotInterp";
OrientationInterpolator1172.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator1172.keyValue = new MFRotation(new float[0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0]);
Group1155.children[16] = OrientationInterpolator1172;

let OrientationInterpolator1173 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1173.DEF = "Yaws_lower_bodyRotInterp";
OrientationInterpolator1173.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1173.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1155.children[17] = OrientationInterpolator1173;

let OrientationInterpolator1174 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1174.DEF = "Yaws_whole_bodyRotInterp";
OrientationInterpolator1174.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1174.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1155.children[18] = OrientationInterpolator1174;

let PositionInterpolator1175 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator1175.DEF = "Yaws_whole_bodyTransInterp";
PositionInterpolator1175.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator1175.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group1155.children[19] = PositionInterpolator1175;

let OrientationInterpolator1176 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1176.DEF = "Yaw_l_sternoclavicularRoll";
OrientationInterpolator1176.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1176.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1155.children[20] = OrientationInterpolator1176;

let OrientationInterpolator1177 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1177.DEF = "Yaw_l_acromioclavicularRoll";
OrientationInterpolator1177.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1177.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1155.children[21] = OrientationInterpolator1177;

let OrientationInterpolator1178 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1178.DEF = "Yaw_r_sternoclavicularRoll";
OrientationInterpolator1178.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1178.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1155.children[22] = OrientationInterpolator1178;

let OrientationInterpolator1179 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1179.DEF = "Yaw_r_acromioclavicularRoll";
OrientationInterpolator1179.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1179.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1155.children[23] = OrientationInterpolator1179;

let OrientationInterpolator1180 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1180.DEF = "Yaw_sacroiliacYaw";
OrientationInterpolator1180.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1180.keyValue = new MFRotation(new float[0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,0,0.24,0,-1,0,0.4,0,1,0,0]);
Group1155.children[24] = OrientationInterpolator1180;

let OrientationInterpolator1181 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1181.DEF = "Yaw_vl5Yaw";
OrientationInterpolator1181.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator1181.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1155.children[25] = OrientationInterpolator1181;

let OrientationInterpolator1182 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1182.DEF = "Yaw_vc6Yaw";
OrientationInterpolator1182.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator1182.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1155.children[26] = OrientationInterpolator1182;

let OrientationInterpolator1183 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1183.DEF = "Yaw_l_thumb1Pitch";
OrientationInterpolator1183.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1183.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1155.children[27] = OrientationInterpolator1183;

let OrientationInterpolator1184 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1184.DEF = "Yaw_r_thumb1Pitch";
OrientationInterpolator1184.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1184.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1155.children[28] = OrientationInterpolator1184;

browser.currentScene.children[7] = Group1155;

let Group1185 = browser.currentScene.createNode("Group");
Group1185.DEF = "RollsAnimation";
let TimeSensor1186 = browser.currentScene.createNode("TimeSensor");
TimeSensor1186.DEF = "RollTimer";
TimeSensor1186.cycleInterval = 5.73;
TimeSensor1186.loop = True;
Group1185.children = new MFNode();

Group1185.children[0] = TimeSensor1186;

let OrientationInterpolator1187 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1187.DEF = "Roll_r_metatarsalPitch";
OrientationInterpolator1187.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator1187.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1185.children[1] = OrientationInterpolator1187;

let OrientationInterpolator1188 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1188.DEF = "Rolls_r_ankleRotInterp";
OrientationInterpolator1188.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator1188.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group1185.children[2] = OrientationInterpolator1188;

let OrientationInterpolator1189 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1189.DEF = "Rolls_r_kneeRotInterp";
OrientationInterpolator1189.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1189.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1185.children[3] = OrientationInterpolator1189;

let OrientationInterpolator1190 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1190.DEF = "Rolls_r_hipRotInterp";
OrientationInterpolator1190.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator1190.keyValue = new MFRotation(new float[0,0,-1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group1185.children[4] = OrientationInterpolator1190;

let OrientationInterpolator1191 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1191.DEF = "Rolls_l_ankleRotInterp";
OrientationInterpolator1191.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator1191.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group1185.children[5] = OrientationInterpolator1191;

let OrientationInterpolator1192 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1192.DEF = "Rolls_l_kneeRotInterp";
OrientationInterpolator1192.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1192.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1185.children[6] = OrientationInterpolator1192;

let OrientationInterpolator1193 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1193.DEF = "Rolls_l_hipRotInterp";
OrientationInterpolator1193.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator1193.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group1185.children[7] = OrientationInterpolator1193;

let OrientationInterpolator1194 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1194.DEF = "Rolls_r_wristRotInterp";
OrientationInterpolator1194.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator1194.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0]);
Group1185.children[8] = OrientationInterpolator1194;

let OrientationInterpolator1195 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1195.DEF = "Rolls_r_elbowRotInterp";
OrientationInterpolator1195.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1195.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1185.children[9] = OrientationInterpolator1195;

let OrientationInterpolator1196 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1196.DEF = "Rolls_r_shoulderRotInterp";
OrientationInterpolator1196.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator1196.keyValue = new MFRotation(new float[0,0,1,0,0,0,-1,1.5,0,0,-1,3,0,0,-1,1.5,0,0,1,0]);
Group1185.children[10] = OrientationInterpolator1196;

let OrientationInterpolator1197 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1197.DEF = "Rolls_l_wristRotInterp";
OrientationInterpolator1197.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator1197.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0]);
Group1185.children[11] = OrientationInterpolator1197;

let OrientationInterpolator1198 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1198.DEF = "Rolls_l_elbowRotInterp";
OrientationInterpolator1198.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1198.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1185.children[12] = OrientationInterpolator1198;

let OrientationInterpolator1199 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1199.DEF = "Rolls_l_shoulderRotInterp";
OrientationInterpolator1199.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator1199.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.5,0,0,1,3,0,0,1,1.5,0,0,1,0]);
Group1185.children[13] = OrientationInterpolator1199;

let OrientationInterpolator1200 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1200.DEF = "Rolls_headRotInterp";
OrientationInterpolator1200.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1200.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1185.children[14] = OrientationInterpolator1200;

let OrientationInterpolator1201 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1201.DEF = "Rolls_neckRotInterp";
OrientationInterpolator1201.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator1201.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.25,0,0,1,0,0,0,-1,1.25,0,0,1,0]);
Group1185.children[15] = OrientationInterpolator1201;

let OrientationInterpolator1202 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1202.DEF = "Rolls_lower_bodyRotInterp";
OrientationInterpolator1202.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1202.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1185.children[16] = OrientationInterpolator1202;

let OrientationInterpolator1203 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1203.DEF = "Rolls_upper_bodyRotInterp";
OrientationInterpolator1203.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1203.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1185.children[17] = OrientationInterpolator1203;

let OrientationInterpolator1204 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1204.DEF = "Rolls_whole_bodyRotInterp";
OrientationInterpolator1204.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1204.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1185.children[18] = OrientationInterpolator1204;

let PositionInterpolator1205 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator1205.DEF = "Rolls_whole_bodyTransInterp";
PositionInterpolator1205.key = new MFFloat(new float[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]);
PositionInterpolator1205.keyValue = new MFVec3f(new float[0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0]);
Group1185.children[19] = PositionInterpolator1205;

let OrientationInterpolator1206 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1206.DEF = "Roll_l_sternoclavicularRoll";
OrientationInterpolator1206.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1206.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group1185.children[20] = OrientationInterpolator1206;

let OrientationInterpolator1207 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1207.DEF = "Roll_l_acromioclavicularRoll";
OrientationInterpolator1207.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1207.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1185.children[21] = OrientationInterpolator1207;

let OrientationInterpolator1208 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1208.DEF = "Roll_r_sternoclavicularRoll";
OrientationInterpolator1208.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1208.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group1185.children[22] = OrientationInterpolator1208;

let OrientationInterpolator1209 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1209.DEF = "Roll_r_acromioclavicularRoll";
OrientationInterpolator1209.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1209.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1185.children[23] = OrientationInterpolator1209;

let OrientationInterpolator1210 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1210.DEF = "Roll_sacroiliacYaw";
OrientationInterpolator1210.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1210.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1185.children[24] = OrientationInterpolator1210;

let OrientationInterpolator1211 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1211.DEF = "Roll_vl5Yaw";
OrientationInterpolator1211.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator1211.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1185.children[25] = OrientationInterpolator1211;

let OrientationInterpolator1212 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1212.DEF = "Roll_vc6Yaw";
OrientationInterpolator1212.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator1212.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1185.children[26] = OrientationInterpolator1212;

let OrientationInterpolator1213 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1213.DEF = "Roll_l_thumb1Pitch";
OrientationInterpolator1213.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1213.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1185.children[27] = OrientationInterpolator1213;

let OrientationInterpolator1214 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1214.DEF = "Roll_r_thumb1Pitch";
OrientationInterpolator1214.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1214.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1185.children[28] = OrientationInterpolator1214;

browser.currentScene.children[8] = Group1185;

let Group1215 = browser.currentScene.createNode("Group");
Group1215.DEF = "WalkAnimation";
let TimeSensor1216 = browser.currentScene.createNode("TimeSensor");
TimeSensor1216.DEF = "WalkTimer";
TimeSensor1216.cycleInterval = 1.73;
TimeSensor1216.loop = True;
Group1215.children = new MFNode();

Group1215.children[0] = TimeSensor1216;

let OrientationInterpolator1217 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1217.DEF = "Walk_r_metatarsalPitch";
OrientationInterpolator1217.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator1217.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1215.children[1] = OrientationInterpolator1217;

let OrientationInterpolator1218 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1218.DEF = "Walk_r_ankleRotInterp";
OrientationInterpolator1218.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator1218.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,0,0,0.1268,-1,0,0,0.01793,-1,0,0,0.05824,-1,0,0,0.2398,-1,0,0,0.35,-1,0,0,0.3322,0,0,1,0]);
Group1215.children[2] = OrientationInterpolator1218;

let OrientationInterpolator1219 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1219.DEF = "Walk_r_kneeRotInterp";
OrientationInterpolator1219.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator1219.keyValue = new MFRotation(new float[1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.2475,1,0,0,0.8573]);
Group1215.children[3] = OrientationInterpolator1219;

let OrientationInterpolator1220 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1220.DEF = "Walk_r_hipRotInterp";
OrientationInterpolator1220.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator1220.keyValue = new MFRotation(new float[-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481]);
Group1215.children[4] = OrientationInterpolator1220;

let OrientationInterpolator1221 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1221.DEF = "Walk_l_ankleRotInterp";
OrientationInterpolator1221.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.6667,0.9167,1]);
OrientationInterpolator1221.keyValue = new MFRotation(new float[-1,0,0,0.06714,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.1222,-1,0,0,0.06714]);
Group1215.children[5] = OrientationInterpolator1221;

let OrientationInterpolator1222 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1222.DEF = "Walk_l_kneeRotInterp";
OrientationInterpolator1222.key = new MFFloat(new float[0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator1222.keyValue = new MFRotation(new float[1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226]);
Group1215.children[6] = OrientationInterpolator1222;

let OrientationInterpolator1223 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1223.DEF = "Walk_l_hipRotInterp";
OrientationInterpolator1223.key = new MFFloat(new float[0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator1223.keyValue = new MFRotation(new float[-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865]);
Group1215.children[7] = OrientationInterpolator1223;

let OrientationInterpolator1224 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1224.DEF = "Walk_lower_bodyRotInterp";
OrientationInterpolator1224.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1224.keyValue = new MFRotation(new float[0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056]);
Group1215.children[8] = OrientationInterpolator1224;

let OrientationInterpolator1225 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1225.DEF = "Walk_r_wristRotInterp";
OrientationInterpolator1225.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator1225.keyValue = new MFRotation(new float[-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346]);
Group1215.children[9] = OrientationInterpolator1225;

let OrientationInterpolator1226 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1226.DEF = "Walk_r_elbowRotInterp";
OrientationInterpolator1226.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator1226.keyValue = new MFRotation(new float[-1,0,0,0.411508,-1,0,0,0.0925011,-1,0,0,0.572568,-1,0,0,0.411508]);
Group1215.children[10] = OrientationInterpolator1226;

let OrientationInterpolator1227 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1227.DEF = "Walk_r_shoulderRotInterp";
OrientationInterpolator1227.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator1227.keyValue = new MFRotation(new float[-1,0,0,0.09346,1,0,0,0.3197,-1,0,0,0.1564,-1,0,0,0.09346]);
Group1215.children[11] = OrientationInterpolator1227;

let OrientationInterpolator1228 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1228.DEF = "Walk_l_wristRotInterp";
OrientationInterpolator1228.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator1228.keyValue = new MFRotation(new float[0,-1,0,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0,-1,0,0.461076]);
Group1215.children[12] = OrientationInterpolator1228;

let OrientationInterpolator1229 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1229.DEF = "Walk_l_elbowRotInterp";
OrientationInterpolator1229.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator1229.keyValue = new MFRotation(new float[-1,0,0,0.0659878,-1,0,0,0.488383,-1,0,0,0.0177536,-1,0,0,0.0659878]);
Group1215.children[13] = OrientationInterpolator1229;

let OrientationInterpolator1230 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1230.DEF = "Walk_l_shoulderRotInterp";
OrientationInterpolator1230.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator1230.keyValue = new MFRotation(new float[1,0,0,0.1189,-1,0,0,0.1861,1,0,0,0.3357,1,0,0,0.1189]);
Group1215.children[14] = OrientationInterpolator1230;

let OrientationInterpolator1231 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1231.DEF = "Walk_headRotInterp";
OrientationInterpolator1231.key = new MFFloat(new float[0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]);
OrientationInterpolator1231.keyValue = new MFRotation(new float[0,-1,0,0.08642,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.04391,0,-1,0,0.03119,0,-1,0,0.07936,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.08642]);
Group1215.children[15] = OrientationInterpolator1231;

let OrientationInterpolator1232 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1232.DEF = "Walk_neckRotInterp";
OrientationInterpolator1232.key = new MFFloat(new float[0,1]);
OrientationInterpolator1232.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group1215.children[16] = OrientationInterpolator1232;

let OrientationInterpolator1233 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1233.DEF = "Walk_upper_bodyRotInterp";
OrientationInterpolator1233.key = new MFFloat(new float[0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator1233.keyValue = new MFRotation(new float[0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826]);
Group1215.children[17] = OrientationInterpolator1233;

let OrientationInterpolator1234 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1234.DEF = "Walk_whole_bodyRotInterp";
OrientationInterpolator1234.key = new MFFloat(new float[0,1]);
OrientationInterpolator1234.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group1215.children[18] = OrientationInterpolator1234;

let PositionInterpolator1235 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator1235.DEF = "Walk_whole_bodyTranInterp";
PositionInterpolator1235.key = new MFFloat(new float[0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator1235.keyValue = new MFVec3f(new float[0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0]);
Group1215.children[19] = PositionInterpolator1235;

let OrientationInterpolator1236 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1236.DEF = "Walk_l_sternoclavicularRoll";
OrientationInterpolator1236.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1236.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1215.children[20] = OrientationInterpolator1236;

let OrientationInterpolator1237 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1237.DEF = "Walk_l_acromioclavicularRoll";
OrientationInterpolator1237.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1237.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1215.children[21] = OrientationInterpolator1237;

let OrientationInterpolator1238 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1238.DEF = "Walk_r_sternoclavicularRoll";
OrientationInterpolator1238.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1238.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1215.children[22] = OrientationInterpolator1238;

let OrientationInterpolator1239 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1239.DEF = "Walk_r_acromioclavicularRoll";
OrientationInterpolator1239.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1239.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1215.children[23] = OrientationInterpolator1239;

let OrientationInterpolator1240 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1240.DEF = "Walk_sacroiliacYaw";
OrientationInterpolator1240.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1240.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1215.children[24] = OrientationInterpolator1240;

let OrientationInterpolator1241 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1241.DEF = "Walk_vl5Yaw";
OrientationInterpolator1241.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator1241.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1215.children[25] = OrientationInterpolator1241;

let OrientationInterpolator1242 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1242.DEF = "Walk_vc6Yaw";
OrientationInterpolator1242.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator1242.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1215.children[26] = OrientationInterpolator1242;

let OrientationInterpolator1243 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1243.DEF = "Walk_l_thumb1Pitch";
OrientationInterpolator1243.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1243.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group1215.children[27] = OrientationInterpolator1243;

let OrientationInterpolator1244 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1244.DEF = "Walk_r_thumb1Pitch";
OrientationInterpolator1244.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1244.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group1215.children[28] = OrientationInterpolator1244;

browser.currentScene.children[9] = Group1215;

let Group1245 = browser.currentScene.createNode("Group");
Group1245.DEF = "RunAnimation";
let TimeSensor1246 = browser.currentScene.createNode("TimeSensor");
TimeSensor1246.DEF = "RunTimer";
TimeSensor1246.cycleInterval = 0.9;
TimeSensor1246.loop = True;
Group1245.children = new MFNode();

Group1245.children[0] = TimeSensor1246;

let OrientationInterpolator1247 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1247.DEF = "Run_r_metatarsalPitch";
OrientationInterpolator1247.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator1247.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1245.children[1] = OrientationInterpolator1247;

let OrientationInterpolator1248 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1248.DEF = "Run_l_hipRotInterp_Run";
OrientationInterpolator1248.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator1248.keyValue = new MFRotation(new float[-0.99,0.033,0.04,1.42,-0.99,0.1328,0.067,0.42,0.99,0.014,0.009,0.9,-0.99,0.0703,0.05,0.7,-0.99,0.033,0.04,1.42]);
Group1245.children[2] = OrientationInterpolator1248;

let OrientationInterpolator1249 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1249.DEF = "Run_l_kneeRotInterp_Run";
OrientationInterpolator1249.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator1249.keyValue = new MFRotation(new float[1,0,0,1.01,1,0,0,0.426,1,0,0,0.705,1,0,0,2.179,1,0,0,1.01]);
Group1245.children[3] = OrientationInterpolator1249;

let OrientationInterpolator1250 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1250.DEF = "Run_l_ankleRotInterp_Run";
OrientationInterpolator1250.key = new MFFloat(new float[0,0.22,0.3,0.4,1]);
OrientationInterpolator1250.keyValue = new MFRotation(new float[1,0,0,0.0374,-1,0,0,0.1037,-1,0,0,0.4328,1,0,0,0.1929,1,0,0,0.03574]);
Group1245.children[4] = OrientationInterpolator1250;

let OrientationInterpolator1251 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1251.DEF = "Run_r_hipRotInterp_Run";
OrientationInterpolator1251.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator1251.keyValue = new MFRotation(new float[0.99,-0.014,0.009,0.9,-0.99,-0.0703,-0.05,0.7,-0.99,-0.033,0.04,1.42,-0.99,-0.1328,-0.067,0.42,0.99,-0.014,0.009,0.9]);
Group1245.children[5] = OrientationInterpolator1251;

let OrientationInterpolator1252 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1252.DEF = "Run_r_kneeRotInterp_Run";
OrientationInterpolator1252.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator1252.keyValue = new MFRotation(new float[1,0,0,0.705,1,0,0,2.179,1,0,0,1.01,1,0,0,0.426,1,0,0,0.705]);
Group1245.children[6] = OrientationInterpolator1252;

let OrientationInterpolator1253 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1253.DEF = "Run_r_ankleRotInterp_Run";
OrientationInterpolator1253.key = new MFFloat(new float[0,0.4,0.71,0.8,0.82,1]);
OrientationInterpolator1253.keyValue = new MFRotation(new float[1,0,0,0.2323,-1,0,0,0.07843,-1,0,0,0.32,-1,0,0,0.374,-1,0,0,0.3478,1,0,0,0.2323]);
Group1245.children[7] = OrientationInterpolator1253;

let OrientationInterpolator1254 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1254.DEF = "Run_l_shoulderRotInterp_Run";
OrientationInterpolator1254.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator1254.keyValue = new MFRotation(new float[0.99,-0.074,0.25,1.5,0.99,-0.092,0.44,0.3,-0.99,0.136,0.25,0.85,0.99,-0.081,0.38,0.4,0.99,-0.074,0.25,1.5]);
Group1245.children[8] = OrientationInterpolator1254;

let OrientationInterpolator1255 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1255.DEF = "Run_l_elbowRotInterp_Run";
OrientationInterpolator1255.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator1255.keyValue = new MFRotation(new float[-1,0,0,1.85,-0.99,-0.19,0.18,1.35,-1,0,0,0.975,-0.99,-0.09,-0.02,1.55,-1,0,0,1.85]);
Group1245.children[9] = OrientationInterpolator1255;

let OrientationInterpolator1256 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1256.DEF = "Run_l_wristRotInterp_Run";
OrientationInterpolator1256.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator1256.keyValue = new MFRotation(new float[-0.25,-1,0.08,0.14,0.25,1,0.08,0.14,0,0,1,0,-0.25,1,0.08,-0.14,-0.25,1,0.08,0.14]);
Group1245.children[10] = OrientationInterpolator1256;

let OrientationInterpolator1257 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1257.DEF = "Run_r_shoulderRotInterp_Run";
OrientationInterpolator1257.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator1257.keyValue = new MFRotation(new float[-0.99,-0.136,-0.25,0.85,0.99,0.081,-0.38,0.4,0.99,0.074,-0.25,1.5,0.99,0.081,-0.38,0.4,-0.99,-0.136,-0.25,0.85]);
Group1245.children[11] = OrientationInterpolator1257;

let OrientationInterpolator1258 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1258.DEF = "Run_r_elbowRotInterp_Run";
OrientationInterpolator1258.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator1258.keyValue = new MFRotation(new float[-1,0,0,0.975,-0.99,0.09,0.02,1.55,-1,0,0,1.85,-0.99,0.19,-0.18,1.35,-1,0,0,0.975]);
Group1245.children[12] = OrientationInterpolator1258;

let OrientationInterpolator1259 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1259.DEF = "Run_r_wristRotInterp_Run";
OrientationInterpolator1259.key = new MFFloat(new float[0,1]);
OrientationInterpolator1259.keyValue = new MFRotation(new float[-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273]);
Group1245.children[13] = OrientationInterpolator1259;

let OrientationInterpolator1260 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1260.DEF = "Run_lower_bodyRotInterp_Run";
OrientationInterpolator1260.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator1260.keyValue = new MFRotation(new float[0,-1,0,0.125,0,0,1,0,0,1,0,0.125,0,0,1,0,0,-1,0,0.125]);
Group1245.children[14] = OrientationInterpolator1260;

let OrientationInterpolator1261 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1261.DEF = "Run_headRotInterp_Run";
OrientationInterpolator1261.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator1261.keyValue = new MFRotation(new float[1,0,0,0.08,1,0,0,0.12,1,0,0,0.3,1,0,0,0.3,1,0,0,0.08]);
Group1245.children[15] = OrientationInterpolator1261;

let OrientationInterpolator1262 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1262.DEF = "Run_neckRotInterp_Run";
OrientationInterpolator1262.key = new MFFloat(new float[0,0.2545,0.4909,0.7091,1]);
OrientationInterpolator1262.keyValue = new MFRotation(new float[0.7,0,0,0.4,-0.7,-0.7,0,0.4,0,0,0,0.4,-0.7,0.7,0,0.4,0.7,0,0,0.4]);
Group1245.children[16] = OrientationInterpolator1262;

let OrientationInterpolator1263 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1263.DEF = "Run_upper_bodyRotInterp_Run";
OrientationInterpolator1263.key = new MFFloat(new float[0,0.2545,0.4909,0.7636,1]);
OrientationInterpolator1263.keyValue = new MFRotation(new float[0.97,0.65,0.086,0.5,0.9,0.003,-0.02,0.38,0.95,-0.68,-0.086,0.5,0.9,0.004,-0.025,0.4,0.97,0.65,0.086,0.5]);
Group1245.children[17] = OrientationInterpolator1263;

let OrientationInterpolator1264 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1264.DEF = "Run_whole_bodyRotInterp_Run";
OrientationInterpolator1264.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator1264.keyValue = new MFRotation(new float[1,0,0,0.06,1,0,0,0.167,1,0,0,0.06,1,0,0,0.168,1,0,0,0.06]);
Group1245.children[18] = OrientationInterpolator1264;

let PositionInterpolator1265 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator1265.DEF = "Run_whole_bodyTranInterp_Run";
PositionInterpolator1265.key = new MFFloat(new float[0,0.22,0.3,0.31,0.5,0.69,0.7,0.78,1]);
PositionInterpolator1265.keyValue = new MFVec3f(new float[0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0]);
Group1245.children[19] = PositionInterpolator1265;

let OrientationInterpolator1266 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1266.DEF = "Run_l_sternoclavicularRoll";
OrientationInterpolator1266.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1266.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1245.children[20] = OrientationInterpolator1266;

let OrientationInterpolator1267 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1267.DEF = "Run_l_acromioclavicularRoll";
OrientationInterpolator1267.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1267.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1245.children[21] = OrientationInterpolator1267;

let OrientationInterpolator1268 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1268.DEF = "Run_r_sternoclavicularRoll";
OrientationInterpolator1268.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1268.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1245.children[22] = OrientationInterpolator1268;

let OrientationInterpolator1269 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1269.DEF = "Run_r_acromioclavicularRoll";
OrientationInterpolator1269.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1269.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1245.children[23] = OrientationInterpolator1269;

let OrientationInterpolator1270 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1270.DEF = "Run_sacroiliacYaw";
OrientationInterpolator1270.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1270.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1245.children[24] = OrientationInterpolator1270;

let OrientationInterpolator1271 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1271.DEF = "Run_vl5Yaw";
OrientationInterpolator1271.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator1271.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1245.children[25] = OrientationInterpolator1271;

let OrientationInterpolator1272 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1272.DEF = "Run_vc6Yaw";
OrientationInterpolator1272.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator1272.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1245.children[26] = OrientationInterpolator1272;

let OrientationInterpolator1273 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1273.DEF = "Run_l_thumb1Pitch";
OrientationInterpolator1273.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1273.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group1245.children[27] = OrientationInterpolator1273;

let OrientationInterpolator1274 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1274.DEF = "Run_r_thumb1Pitch";
OrientationInterpolator1274.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1274.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0]);
Group1245.children[28] = OrientationInterpolator1274;

browser.currentScene.children[10] = Group1245;

let Group1275 = browser.currentScene.createNode("Group");
Group1275.DEF = "JumpAnimation";
let TimeSensor1276 = browser.currentScene.createNode("TimeSensor");
TimeSensor1276.DEF = "JumpTimer";
TimeSensor1276.cycleInterval = 3.73;
TimeSensor1276.loop = True;
Group1275.children = new MFNode();

Group1275.children[0] = TimeSensor1276;

let OrientationInterpolator1277 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1277.DEF = "Jump_r_metatarsalPitch";
OrientationInterpolator1277.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator1277.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1275.children[1] = OrientationInterpolator1277;

let OrientationInterpolator1278 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1278.DEF = "Jump_r_ankleRotInterp";
OrientationInterpolator1278.key = new MFFloat(new float[0,0.1,0.15,0.25,0.28,0.32,0.35,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator1278.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.6735,-1,0,0,0.6735,-1,0,0,0.3527,-1,0,0,0.3038,-1,0,0,0.07964,1,0,0,1.3,1,0,0,0.6509,1,0,0,0.3001,-1,0,0,0.2087,-1,0,0,0.3756,-1,0,0,0.3279,-1,0,0,0.1193,0,0,1,0]);
Group1275.children[2] = OrientationInterpolator1278;

let OrientationInterpolator1279 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1279.DEF = "Jump_r_kneeRotInterp";
OrientationInterpolator1279.key = new MFFloat(new float[0,0.2,0.25,0.3,0.64,0.76,0.88,1]);
OrientationInterpolator1279.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,2.5,1,0,0,1.7,0,0,1,0,1,0,0,0.9507,1,0,0,0.5845,1,0,0,0.9054,0,0,1,0]);
Group1275.children[3] = OrientationInterpolator1279;

let OrientationInterpolator1280 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1280.DEF = "Jump_r_hipRotInterp";
OrientationInterpolator1280.key = new MFFloat(new float[0,0.18,0.24,0.26,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator1280.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.63,-1,0,0,1.7,-1,0,0,1.55,-1,0,0,0.8943,-1,0,0,0.3698,0,0,1,0,-1,0,0,0.4963,-1,0,0,0.3829,-1,0,0,0.5169,0,0,1,0]);
Group1275.children[4] = OrientationInterpolator1280;

let OrientationInterpolator1281 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1281.DEF = "Jump_l_ankleRotInterp";
OrientationInterpolator1281.key = new MFFloat(new float[0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator1281.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.625,-1,0,0,0.625,-1,0,0,0.3364,-1,0,0,0.2742,-1,0,0,0.05078,1,0,0,0.2833,1,0,0,0.6667,1,0,0,0.2833,-1,0,0,0.2108,-1,0,0,0.375,-1,0,0,0.3146,-1,0,0,0.1174,0,0,1,0]);
Group1275.children[5] = OrientationInterpolator1281;

let OrientationInterpolator1282 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1282.DEF = "Jump_l_kneeRotInterp";
OrientationInterpolator1282.key = new MFFloat(new float[0,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator1282.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,2.047,1,0,0,2.047,0,0,1,0,1,0,0,1.566,1,0,0,0.5913,1,0,0,0.9235,0,0,1,0]);
Group1275.children[6] = OrientationInterpolator1282;

let OrientationInterpolator1283 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1283.DEF = "Jump_l_hipRotInterp";
OrientationInterpolator1283.key = new MFFloat(new float[0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator1283.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,4.349,1,0,0,4.349,1,0,0,4.615,-1,0,0,0.9136,-1,0,0,0.3614,0,0,1,0,-1,0,0,0.7869,-1,0,0,0.3918,-1,0,0,0.5433,0,0,1,0]);
Group1275.children[7] = OrientationInterpolator1283;

let OrientationInterpolator1284 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1284.DEF = "Jump_lower_bodyRotInterp";
OrientationInterpolator1284.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator1284.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.1892,1,0,0,0.1892,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1275.children[8] = OrientationInterpolator1284;

let OrientationInterpolator1285 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1285.DEF = "Jump_r_wristRotInterp";
OrientationInterpolator1285.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator1285.keyValue = new MFRotation(new float[0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0]);
Group1275.children[9] = OrientationInterpolator1285;

let OrientationInterpolator1286 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1286.DEF = "Jump_r_elbowRotInterp";
OrientationInterpolator1286.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator1286.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0]);
Group1275.children[10] = OrientationInterpolator1286;

let OrientationInterpolator1287 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1287.DEF = "Jump_r_shoulderRotInterp";
OrientationInterpolator1287.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator1287.keyValue = new MFRotation(new float[0,0,1,0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0]);
Group1275.children[11] = OrientationInterpolator1287;

let OrientationInterpolator1288 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1288.DEF = "Jump_l_wristRotInterp";
OrientationInterpolator1288.key = new MFFloat(new float[0,0.48,0.52,0.64,0.76,0.88,1]);
OrientationInterpolator1288.keyValue = new MFRotation(new float[0,0,1,0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0,-1,0,0.655922,-0.00050618,-0.999999,0.0012782,1.28397,0,0,1,0]);
Group1275.children[12] = OrientationInterpolator1288;

let OrientationInterpolator1289 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1289.DEF = "Jump_l_elbowRotInterp";
OrientationInterpolator1289.key = new MFFloat(new float[0,0.28,0.32,0.58,0.72,1]);
OrientationInterpolator1289.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,1.13,-1,0,0,1.7,-1,0,0,1.7,-1,0,0,0.4,0,0,1,0]);
Group1275.children[13] = OrientationInterpolator1289;

let OrientationInterpolator1290 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1290.DEF = "Jump_l_shoulderRotInterp";
OrientationInterpolator1290.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator1290.keyValue = new MFRotation(new float[0,0,1,0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1,0.0004113,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0,0,1,0]);
Group1275.children[14] = OrientationInterpolator1290;

let OrientationInterpolator1291 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1291.DEF = "Jump_headRotInterp";
OrientationInterpolator1291.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator1291.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5989,-1,0,0,0.5989,-1,0,0,0.3216,1,0,0,0.06503,0,0,1,0]);
Group1275.children[15] = OrientationInterpolator1291;

let OrientationInterpolator1292 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1292.DEF = "Jump_neckRotInterp";
OrientationInterpolator1292.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator1292.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.1942,-1,0,0,0.1942,0,0,1,0,1,0,0,0.2284,0,0,1,0]);
Group1275.children[16] = OrientationInterpolator1292;

let OrientationInterpolator1293 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1293.DEF = "Jump_upper_bodyRotInterp";
OrientationInterpolator1293.key = new MFFloat(new float[0,0.22,0.28,0.34,0.71,0.88,1]);
OrientationInterpolator1293.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.05,1,0,0,1.051,-1,0,0,0.257,1,0,0,0.2171,1,0,0,0.3465,0,0,1,0]);
Group1275.children[17] = OrientationInterpolator1293;

let OrientationInterpolator1294 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1294.DEF = "Jump_whole_bodyRotInterp";
OrientationInterpolator1294.key = new MFFloat(new float[0,0.28,0.32,0.48,0.64,0.76,1]);
OrientationInterpolator1294.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.3273,1,0,0,0.3273,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1275.children[18] = OrientationInterpolator1294;

let PositionInterpolator1295 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator1295.DEF = "Jump_whole_bodyTranInterp";
PositionInterpolator1295.key = new MFFloat(new float[0,0.04,0.07,0.11,0.15,0.19,0.22,0.25,0.27,0.31,0.33,0.35,0.38,0.53,0.544,0.76,0.8,0.84,0.88,0.92,0.96,1]);
PositionInterpolator1295.keyValue = new MFVec3f(new float[0,0,0,0,-0.01264,-0.01289,0,-0.04712,-0.03738,-0.0003345,-0.1049,-0.05353,-0.0005712,-0.1892,-0.06561,-0.0008233,-0.286,-0.06276,-0.0009591,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.25,-0.1499,-0.0008616,-0.05,-0.06358,-0.0005128,0.15,-0.05488,0.0004779,0.55,0.02732,0.0001728,1.385,0.006873,0.00017,1.395,0.0069,0,0.35,0.02148,0,-0.01299,-0.01057,0,-0.06932,-0.01064,0.0001365,-0.1037,-0.005059,0.0001279,-0.07198,-0.007596,0.000141,-0.01626,-0.004935,0,0,0]);
Group1275.children[19] = PositionInterpolator1295;

let OrientationInterpolator1296 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1296.DEF = "Jump_l_sternoclavicularRoll";
OrientationInterpolator1296.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1296.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group1275.children[20] = OrientationInterpolator1296;

let OrientationInterpolator1297 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1297.DEF = "Jump_l_acromioclavicularRoll";
OrientationInterpolator1297.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1297.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1275.children[21] = OrientationInterpolator1297;

let OrientationInterpolator1298 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1298.DEF = "Jump_r_sternoclavicularRoll";
OrientationInterpolator1298.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1298.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group1275.children[22] = OrientationInterpolator1298;

let OrientationInterpolator1299 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1299.DEF = "Jump_r_acromioclavicularRoll";
OrientationInterpolator1299.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1299.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1275.children[23] = OrientationInterpolator1299;

let OrientationInterpolator1300 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1300.DEF = "Jump_sacroiliacYaw";
OrientationInterpolator1300.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1300.keyValue = new MFRotation(new float[0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0]);
Group1275.children[24] = OrientationInterpolator1300;

let OrientationInterpolator1301 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1301.DEF = "Jump_vl5Yaw";
OrientationInterpolator1301.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator1301.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,-0.1,0,1,0,0,0,1,0,0,1,0,0,0.6,0,1,0,0.1,0,1,0,0]);
Group1275.children[25] = OrientationInterpolator1301;

let OrientationInterpolator1302 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1302.DEF = "Jump_vc6Yaw";
OrientationInterpolator1302.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator1302.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0.8,0,1,0,0,0,1,0,0,-1,0,0,0.6,0,-1,0,0.8,0,1,0,0]);
Group1275.children[26] = OrientationInterpolator1302;

let OrientationInterpolator1303 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1303.DEF = "Jump_l_thumb1Pitch";
OrientationInterpolator1303.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1303.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group1275.children[27] = OrientationInterpolator1303;

let OrientationInterpolator1304 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1304.DEF = "Jump_r_thumb1Pitch";
OrientationInterpolator1304.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1304.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group1275.children[28] = OrientationInterpolator1304;

browser.currentScene.children[11] = Group1275;

let Group1305 = browser.currentScene.createNode("Group");
Group1305.DEF = "KickAnimation";
let TimeSensor1306 = browser.currentScene.createNode("TimeSensor");
TimeSensor1306.DEF = "KickTimer";
TimeSensor1306.cycleInterval = 3.73;
TimeSensor1306.loop = True;
Group1305.children = new MFNode();

Group1305.children[0] = TimeSensor1306;

let OrientationInterpolator1307 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1307.DEF = "Kick_l_sternoclavicularRoll";
OrientationInterpolator1307.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1307.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0]);
Group1305.children[1] = OrientationInterpolator1307;

let OrientationInterpolator1308 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1308.DEF = "Kick_l_acromioclavicularRoll";
OrientationInterpolator1308.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1308.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1305.children[2] = OrientationInterpolator1308;

let OrientationInterpolator1309 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1309.DEF = "Kick_l_shoulderRoll";
OrientationInterpolator1309.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1309.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,1.76,-0.25,0,1,1.76,0,0,1,1.256,0,0,1,0.05,0,0,1,0]);
Group1305.children[3] = OrientationInterpolator1309;

let OrientationInterpolator1310 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1310.DEF = "Kick_l_ForeArmPitch";
OrientationInterpolator1310.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1310.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,-0.55,-1,0.25,0,2.55,1,0,0,0,1,0,0,0,1,0,0,0]);
Group1305.children[4] = OrientationInterpolator1310;

let OrientationInterpolator1311 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1311.DEF = "Kick_l_wristRoll";
OrientationInterpolator1311.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1311.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,1,0,0.55,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1305.children[5] = OrientationInterpolator1311;

let OrientationInterpolator1312 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1312.DEF = "Kick_l_thumb1Pitch";
OrientationInterpolator1312.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1312.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group1305.children[6] = OrientationInterpolator1312;

let OrientationInterpolator1313 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1313.DEF = "Kick_r_sternoclavicularRoll";
OrientationInterpolator1313.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1313.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0]);
Group1305.children[7] = OrientationInterpolator1313;

let OrientationInterpolator1314 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1314.DEF = "Kick_r_acromioclavicularRoll";
OrientationInterpolator1314.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1314.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1305.children[8] = OrientationInterpolator1314;

let OrientationInterpolator1315 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1315.DEF = "Kick_r_shoulderRoll";
OrientationInterpolator1315.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1315.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-1.76,0.25,0,1,-1.76,0,0,1,-1.256,0,0,1,-0.05,0,0,1,0]);
Group1305.children[9] = OrientationInterpolator1315;

let OrientationInterpolator1316 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1316.DEF = "Kick_r_ForeArmPitch";
OrientationInterpolator1316.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1316.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,-0.55,1,0.25,0,-2.55,1,0,0,0,1,0,0,0,1,0,0,0]);
Group1305.children[10] = OrientationInterpolator1316;

let OrientationInterpolator1317 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1317.DEF = "Kick_r_wristRoll";
OrientationInterpolator1317.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1317.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,1,0,-0.55,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1305.children[11] = OrientationInterpolator1317;

let OrientationInterpolator1318 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1318.DEF = "Kick_r_thumb1Pitch";
OrientationInterpolator1318.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1318.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0]);
Group1305.children[12] = OrientationInterpolator1318;

let OrientationInterpolator1319 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1319.DEF = "Kick_r_hipPitch";
OrientationInterpolator1319.key = new MFFloat(new float[0,0.2,0.3,0.5,0.6,0.9,1]);
OrientationInterpolator1319.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.9,-1,0,0,1.75,-1,0,0,2.25,-1,0,0,2,1,0,0,0,1,0,0,0]);
Group1305.children[13] = OrientationInterpolator1319;

let OrientationInterpolator1320 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1320.DEF = "Kick_r_kneePitch";
OrientationInterpolator1320.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1320.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.95,1,0,0,1.75,-1,0,0,0.28,1,0,0,0,1,0,0,0]);
Group1305.children[14] = OrientationInterpolator1320;

let OrientationInterpolator1321 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1321.DEF = "Kick_l_hipPitch";
OrientationInterpolator1321.key = new MFFloat(new float[0,0.2,0.3,0.5,0.6,0.9,1]);
OrientationInterpolator1321.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1305.children[15] = OrientationInterpolator1321;

let OrientationInterpolator1322 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1322.DEF = "Kick_l_kneePitch";
OrientationInterpolator1322.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1322.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1305.children[16] = OrientationInterpolator1322;

let OrientationInterpolator1323 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1323.DEF = "Kick_r_anklePitch";
OrientationInterpolator1323.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator1323.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.9,-1,0,0,0.95,1,0,0,0.75,-1,0,0,0.05,1,0,0,0]);
Group1305.children[17] = OrientationInterpolator1323;

let OrientationInterpolator1324 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1324.DEF = "Kick_r_metatarsalPitch";
OrientationInterpolator1324.key = new MFFloat(new float[0,0.2,0.4,0.6,0.7,1]);
OrientationInterpolator1324.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0]);
Group1305.children[18] = OrientationInterpolator1324;

let OrientationInterpolator1325 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1325.DEF = "Kick_sacroiliacYaw";
OrientationInterpolator1325.key = new MFFloat(new float[0,0.2,0.4,0.6,0.8,1]);
OrientationInterpolator1325.keyValue = new MFRotation(new float[0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0]);
Group1305.children[19] = OrientationInterpolator1325;

let OrientationInterpolator1326 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1326.DEF = "Kick_vl5Yaw";
OrientationInterpolator1326.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator1326.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1305.children[20] = OrientationInterpolator1326;

let OrientationInterpolator1327 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1327.DEF = "Kick_vc6Yaw";
OrientationInterpolator1327.key = new MFFloat(new float[0,0.2,0.4,0.5,0.6,0.8,1]);
OrientationInterpolator1327.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group1305.children[21] = OrientationInterpolator1327;

let OrientationInterpolator1328 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1328.DEF = "Kick_lower_bodyRotInterp";
OrientationInterpolator1328.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1328.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1305.children[22] = OrientationInterpolator1328;

let OrientationInterpolator1329 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1329.DEF = "Kick_upper_bodyRotInterp";
OrientationInterpolator1329.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1329.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1305.children[23] = OrientationInterpolator1329;

let OrientationInterpolator1330 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1330.DEF = "Kick_whole_bodyRotInterp";
OrientationInterpolator1330.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1330.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1305.children[24] = OrientationInterpolator1330;

let PositionInterpolator1331 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator1331.DEF = "Kick_whole_bodyTransInterp";
PositionInterpolator1331.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator1331.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group1305.children[25] = PositionInterpolator1331;

let OrientationInterpolator1332 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1332.DEF = "Kick_neckRotInterp";
OrientationInterpolator1332.key = new MFFloat(new float[0,0.25,0.55,1]);
OrientationInterpolator1332.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.7,1,0,0,0.5,0,0,1,0]);
Group1305.children[26] = OrientationInterpolator1332;

browser.currentScene.children[12] = Group1305;

let Group1333 = browser.currentScene.createNode("Group");
Group1333.DEF = "StopAnimation";
let TimeSensor1334 = browser.currentScene.createNode("TimeSensor");
TimeSensor1334.DEF = "StopTimer";
TimeSensor1334.cycleInterval = 5.73;
TimeSensor1334.loop = True;
Group1333.children = new MFNode();

Group1333.children[0] = TimeSensor1334;

let PositionInterpolator1335 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator1335.DEF = "Stop_HumanoidRootTransInterp";
PositionInterpolator1335.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator1335.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0]);
Group1333.children[1] = PositionInterpolator1335;

let OrientationInterpolator1336 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1336.DEF = "Stop_HumanoidRootRotInterp";
OrientationInterpolator1336.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1336.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[2] = OrientationInterpolator1336;

let OrientationInterpolator1337 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1337.DEF = "Stop_sacroiliacRotInterp";
OrientationInterpolator1337.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1337.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[3] = OrientationInterpolator1337;

let OrientationInterpolator1338 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1338.DEF = "Stop_l_hipRotInterp";
OrientationInterpolator1338.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1338.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[4] = OrientationInterpolator1338;

let OrientationInterpolator1339 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1339.DEF = "Stop_l_kneeRotInterp";
OrientationInterpolator1339.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1339.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[5] = OrientationInterpolator1339;

let OrientationInterpolator1340 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1340.DEF = "Stop_l_ankleRotInterp";
OrientationInterpolator1340.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1340.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[6] = OrientationInterpolator1340;

let OrientationInterpolator1341 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1341.DEF = "Stop_l_subtalarRotInterp";
OrientationInterpolator1341.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1341.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[7] = OrientationInterpolator1341;

let OrientationInterpolator1342 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1342.DEF = "Stop_l_midtarsalRotInterp";
OrientationInterpolator1342.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1342.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[8] = OrientationInterpolator1342;

let OrientationInterpolator1343 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1343.DEF = "Stop_l_metatarsalRotInterp";
OrientationInterpolator1343.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1343.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[9] = OrientationInterpolator1343;

let OrientationInterpolator1344 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1344.DEF = "Stop_r_hipRotInterp";
OrientationInterpolator1344.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1344.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[10] = OrientationInterpolator1344;

let OrientationInterpolator1345 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1345.DEF = "Stop_r_kneeRotInterp";
OrientationInterpolator1345.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1345.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[11] = OrientationInterpolator1345;

let OrientationInterpolator1346 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1346.DEF = "Stop_r_ankleRotInterp";
OrientationInterpolator1346.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1346.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[12] = OrientationInterpolator1346;

let OrientationInterpolator1347 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1347.DEF = "Stop_r_subtalarRotInterp";
OrientationInterpolator1347.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1347.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[13] = OrientationInterpolator1347;

let OrientationInterpolator1348 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1348.DEF = "Stop_r_midtarsalRotInterp";
OrientationInterpolator1348.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1348.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[14] = OrientationInterpolator1348;

let OrientationInterpolator1349 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1349.DEF = "Stop_r_metatarsalRotInterp";
OrientationInterpolator1349.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1349.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[15] = OrientationInterpolator1349;

let OrientationInterpolator1350 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1350.DEF = "Stop_vl5RotInterp";
OrientationInterpolator1350.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1350.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[16] = OrientationInterpolator1350;

let OrientationInterpolator1351 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1351.DEF = "Stop_vl4RotInterp";
OrientationInterpolator1351.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1351.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[17] = OrientationInterpolator1351;

let OrientationInterpolator1352 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1352.DEF = "Stop_vl3RotInterp";
OrientationInterpolator1352.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1352.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[18] = OrientationInterpolator1352;

let OrientationInterpolator1353 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1353.DEF = "Stop_vl2RotInterp";
OrientationInterpolator1353.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1353.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[19] = OrientationInterpolator1353;

let OrientationInterpolator1354 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1354.DEF = "Stop_vl1RotInterp";
OrientationInterpolator1354.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1354.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[20] = OrientationInterpolator1354;

let OrientationInterpolator1355 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1355.DEF = "Stop_vt12RotInterp";
OrientationInterpolator1355.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1355.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[21] = OrientationInterpolator1355;

let OrientationInterpolator1356 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1356.DEF = "Stop_vt11RotInterp";
OrientationInterpolator1356.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1356.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[22] = OrientationInterpolator1356;

let OrientationInterpolator1357 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1357.DEF = "Stop_vt10RotInterp";
OrientationInterpolator1357.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1357.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[23] = OrientationInterpolator1357;

let OrientationInterpolator1358 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1358.DEF = "Stop_vt9RotInterp";
OrientationInterpolator1358.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1358.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[24] = OrientationInterpolator1358;

let OrientationInterpolator1359 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1359.DEF = "Stop_vt8RotInterp";
OrientationInterpolator1359.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1359.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[25] = OrientationInterpolator1359;

let OrientationInterpolator1360 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1360.DEF = "Stop_vt7RotInterp";
OrientationInterpolator1360.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1360.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[26] = OrientationInterpolator1360;

let OrientationInterpolator1361 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1361.DEF = "Stop_vt6RotInterp";
OrientationInterpolator1361.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1361.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[27] = OrientationInterpolator1361;

let OrientationInterpolator1362 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1362.DEF = "Stop_vt5RotInterp";
OrientationInterpolator1362.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1362.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[28] = OrientationInterpolator1362;

let OrientationInterpolator1363 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1363.DEF = "Stop_vt4RotInterp";
OrientationInterpolator1363.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1363.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[29] = OrientationInterpolator1363;

let OrientationInterpolator1364 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1364.DEF = "Stop_vt3RotInterp";
OrientationInterpolator1364.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1364.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[30] = OrientationInterpolator1364;

let OrientationInterpolator1365 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1365.DEF = "Stop_vt2RotInterp";
OrientationInterpolator1365.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1365.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[31] = OrientationInterpolator1365;

let OrientationInterpolator1366 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1366.DEF = "Stop_vt1RotInterp";
OrientationInterpolator1366.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1366.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[32] = OrientationInterpolator1366;

let OrientationInterpolator1367 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1367.DEF = "Stop_vc7RotInterp";
OrientationInterpolator1367.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1367.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[33] = OrientationInterpolator1367;

let OrientationInterpolator1368 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1368.DEF = "Stop_vc6RotInterp";
OrientationInterpolator1368.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1368.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[34] = OrientationInterpolator1368;

let OrientationInterpolator1369 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1369.DEF = "Stop_vc5RotInterp";
OrientationInterpolator1369.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1369.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[35] = OrientationInterpolator1369;

let OrientationInterpolator1370 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1370.DEF = "Stop_vc4RotInterp";
OrientationInterpolator1370.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1370.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[36] = OrientationInterpolator1370;

let OrientationInterpolator1371 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1371.DEF = "Stop_vc3RotInterp";
OrientationInterpolator1371.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1371.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[37] = OrientationInterpolator1371;

let OrientationInterpolator1372 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1372.DEF = "Stop_vc2RotInterp";
OrientationInterpolator1372.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1372.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[38] = OrientationInterpolator1372;

let OrientationInterpolator1373 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1373.DEF = "Stop_vc1RotInterp";
OrientationInterpolator1373.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1373.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[39] = OrientationInterpolator1373;

let OrientationInterpolator1374 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1374.DEF = "Stop_skullbaseRotInterp";
OrientationInterpolator1374.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1374.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[40] = OrientationInterpolator1374;

let OrientationInterpolator1375 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1375.DEF = "Stop_l_eyeball_jointRotInterp";
OrientationInterpolator1375.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1375.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[41] = OrientationInterpolator1375;

let OrientationInterpolator1376 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1376.DEF = "Stop_r_eyeball_jointRotInterp";
OrientationInterpolator1376.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1376.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[42] = OrientationInterpolator1376;

let OrientationInterpolator1377 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1377.DEF = "Stop_l_sternoclavicularRotInterp";
OrientationInterpolator1377.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1377.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[43] = OrientationInterpolator1377;

let OrientationInterpolator1378 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1378.DEF = "Stop_l_acromioclavicularRotInterp";
OrientationInterpolator1378.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1378.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[44] = OrientationInterpolator1378;

let OrientationInterpolator1379 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1379.DEF = "Stop_l_shoulderRotInterp";
OrientationInterpolator1379.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1379.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[45] = OrientationInterpolator1379;

let OrientationInterpolator1380 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1380.DEF = "Stop_l_elbowRotInterp";
OrientationInterpolator1380.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1380.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[46] = OrientationInterpolator1380;

let OrientationInterpolator1381 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1381.DEF = "Stop_l_wristRotInterp";
OrientationInterpolator1381.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1381.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[47] = OrientationInterpolator1381;

let OrientationInterpolator1382 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1382.DEF = "Stop_l_thumb1RotInterp";
OrientationInterpolator1382.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1382.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[48] = OrientationInterpolator1382;

let OrientationInterpolator1383 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1383.DEF = "Stop_l_thumb2RotInterp";
OrientationInterpolator1383.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1383.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[49] = OrientationInterpolator1383;

let OrientationInterpolator1384 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1384.DEF = "Stop_l_thumb3RotInterp";
OrientationInterpolator1384.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1384.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[50] = OrientationInterpolator1384;

let OrientationInterpolator1385 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1385.DEF = "Stop_l_index0RotInterp";
OrientationInterpolator1385.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1385.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[51] = OrientationInterpolator1385;

let OrientationInterpolator1386 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1386.DEF = "Stop_l_index1RotInterp";
OrientationInterpolator1386.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1386.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[52] = OrientationInterpolator1386;

let OrientationInterpolator1387 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1387.DEF = "Stop_l_index2RotInterp";
OrientationInterpolator1387.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1387.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[53] = OrientationInterpolator1387;

let OrientationInterpolator1388 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1388.DEF = "Stop_l_index3RotInterp";
OrientationInterpolator1388.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1388.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[54] = OrientationInterpolator1388;

let OrientationInterpolator1389 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1389.DEF = "Stop_l_middle0RotInterp";
OrientationInterpolator1389.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1389.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[55] = OrientationInterpolator1389;

let OrientationInterpolator1390 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1390.DEF = "Stop_l_middle1RotInterp";
OrientationInterpolator1390.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1390.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[56] = OrientationInterpolator1390;

let OrientationInterpolator1391 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1391.DEF = "Stop_l_middle2RotInterp";
OrientationInterpolator1391.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1391.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[57] = OrientationInterpolator1391;

let OrientationInterpolator1392 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1392.DEF = "Stop_l_middle3RotInterp";
OrientationInterpolator1392.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1392.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[58] = OrientationInterpolator1392;

let OrientationInterpolator1393 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1393.DEF = "Stop_l_ring0RotInterp";
OrientationInterpolator1393.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1393.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[59] = OrientationInterpolator1393;

let OrientationInterpolator1394 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1394.DEF = "Stop_l_ring1RotInterp";
OrientationInterpolator1394.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1394.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[60] = OrientationInterpolator1394;

let OrientationInterpolator1395 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1395.DEF = "Stop_l_ring2RotInterp";
OrientationInterpolator1395.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1395.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[61] = OrientationInterpolator1395;

let OrientationInterpolator1396 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1396.DEF = "Stop_l_ring3RotInterp";
OrientationInterpolator1396.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1396.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[62] = OrientationInterpolator1396;

let OrientationInterpolator1397 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1397.DEF = "Stop_l_pinky0RotInterp";
OrientationInterpolator1397.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1397.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[63] = OrientationInterpolator1397;

let OrientationInterpolator1398 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1398.DEF = "Stop_l_pinky1RotInterp";
OrientationInterpolator1398.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1398.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[64] = OrientationInterpolator1398;

let OrientationInterpolator1399 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1399.DEF = "Stop_l_pinky2RotInterp";
OrientationInterpolator1399.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1399.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[65] = OrientationInterpolator1399;

let OrientationInterpolator1400 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1400.DEF = "Stop_l_pinky3RotInterp";
OrientationInterpolator1400.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1400.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[66] = OrientationInterpolator1400;

let OrientationInterpolator1401 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1401.DEF = "Stop_r_sternoclavicularRotInterp";
OrientationInterpolator1401.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1401.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[67] = OrientationInterpolator1401;

let OrientationInterpolator1402 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1402.DEF = "Stop_r_acromioclavicularRotInterp";
OrientationInterpolator1402.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1402.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[68] = OrientationInterpolator1402;

let OrientationInterpolator1403 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1403.DEF = "Stop_r_shoulderRotInterp";
OrientationInterpolator1403.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1403.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[69] = OrientationInterpolator1403;

let OrientationInterpolator1404 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1404.DEF = "Stop_r_elbowRotInterp";
OrientationInterpolator1404.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1404.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[70] = OrientationInterpolator1404;

let OrientationInterpolator1405 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1405.DEF = "Stop_r_wristRotInterp";
OrientationInterpolator1405.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1405.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[71] = OrientationInterpolator1405;

let OrientationInterpolator1406 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1406.DEF = "Stop_r_thumb1RotInterp";
OrientationInterpolator1406.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1406.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[72] = OrientationInterpolator1406;

let OrientationInterpolator1407 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1407.DEF = "Stop_r_thumb2RotInterp";
OrientationInterpolator1407.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1407.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[73] = OrientationInterpolator1407;

let OrientationInterpolator1408 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1408.DEF = "Stop_r_thumb3RotInterp";
OrientationInterpolator1408.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1408.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[74] = OrientationInterpolator1408;

let OrientationInterpolator1409 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1409.DEF = "Stop_r_index0RotInterp";
OrientationInterpolator1409.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1409.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[75] = OrientationInterpolator1409;

let OrientationInterpolator1410 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1410.DEF = "Stop_r_index1RotInterp";
OrientationInterpolator1410.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1410.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[76] = OrientationInterpolator1410;

let OrientationInterpolator1411 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1411.DEF = "Stop_r_index2RotInterp";
OrientationInterpolator1411.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1411.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[77] = OrientationInterpolator1411;

let OrientationInterpolator1412 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1412.DEF = "Stop_r_index3RotInterp";
OrientationInterpolator1412.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1412.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[78] = OrientationInterpolator1412;

let OrientationInterpolator1413 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1413.DEF = "Stop_r_middle0RotInterp";
OrientationInterpolator1413.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1413.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[79] = OrientationInterpolator1413;

let OrientationInterpolator1414 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1414.DEF = "Stop_r_middle1RotInterp";
OrientationInterpolator1414.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1414.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[80] = OrientationInterpolator1414;

let OrientationInterpolator1415 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1415.DEF = "Stop_r_middle2RotInterp";
OrientationInterpolator1415.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1415.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[81] = OrientationInterpolator1415;

let OrientationInterpolator1416 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1416.DEF = "Stop_r_middle3RotInterp";
OrientationInterpolator1416.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1416.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[82] = OrientationInterpolator1416;

let OrientationInterpolator1417 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1417.DEF = "Stop_r_ring0RotInterp";
OrientationInterpolator1417.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1417.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[83] = OrientationInterpolator1417;

let OrientationInterpolator1418 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1418.DEF = "Stop_r_ring1RotInterp";
OrientationInterpolator1418.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1418.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[84] = OrientationInterpolator1418;

let OrientationInterpolator1419 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1419.DEF = "Stop_r_ring2RotInterp";
OrientationInterpolator1419.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1419.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[85] = OrientationInterpolator1419;

let OrientationInterpolator1420 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1420.DEF = "Stop_r_ring3RotInterp";
OrientationInterpolator1420.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1420.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[86] = OrientationInterpolator1420;

let OrientationInterpolator1421 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1421.DEF = "Stop_r_pinky0RotInterp";
OrientationInterpolator1421.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1421.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[87] = OrientationInterpolator1421;

let OrientationInterpolator1422 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1422.DEF = "Stop_r_pinky1RotInterp";
OrientationInterpolator1422.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1422.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[88] = OrientationInterpolator1422;

let OrientationInterpolator1423 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1423.DEF = "Stop_r_pinky2RotInterp";
OrientationInterpolator1423.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1423.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[89] = OrientationInterpolator1423;

let OrientationInterpolator1424 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1424.DEF = "Stop_r_pinky3RotInterp";
OrientationInterpolator1424.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator1424.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0]);
Group1333.children[90] = OrientationInterpolator1424;

browser.currentScene.children[13] = Group1333;

let Group1425 = browser.currentScene.createNode("Group");
Group1425.DEF = "Interface";
let Transform1426 = browser.currentScene.createNode("Transform");
Transform1426.DEF = "cordsysfloor";
Transform1426.scale = new SFVec3f(new float[0.175,0.175,0.175]);
let Inline1427 = browser.currentScene.createNode("Inline");
Inline1427.global = True;
Inline1427.url = new MFString(new java.lang.String["JointCoordinateAxes.x3dv"]);
Transform1426.children = new MFNode();

Transform1426.children[0] = Inline1427;

Group1425.children = new MFNode();

Group1425.children[0] = Transform1426;

let ProximitySensor1428 = browser.currentScene.createNode("ProximitySensor");
ProximitySensor1428.DEF = "HudProx";
ProximitySensor1428.size = new SFVec3f(new float[50,50,50]);
Group1425.children[1] = ProximitySensor1428;

let Transform1429 = browser.currentScene.createNode("Transform");
Transform1429.DEF = "HudXform";
let Transform1430 = browser.currentScene.createNode("Transform");
Transform1430.translation = new SFVec3f(new float[-0.2,0.15,-0.7]);
Transform1430.scale = new SFVec3f(new float[0.02,0.02,0.02]);
let Transform1431 = browser.currentScene.createNode("Transform");
Transform1431.DEF = "Stand_Text";
Transform1431.translation = new SFVec3f(new float[0,-0.9,0]);
let TouchSensor1432 = browser.currentScene.createNode("TouchSensor");
TouchSensor1432.DEF = "Stand_Touch";
Transform1431.children = new MFNode();

Transform1431.children[0] = TouchSensor1432;

let Shape1433 = browser.currentScene.createNode("Shape");
Shape1433.DEF = "StandText";
let Appearance1434 = browser.currentScene.createNode("Appearance");
let Material1435 = browser.currentScene.createNode("Material");
Material1435.DEF = "text_color";
Material1435.ambientIntensity = 1;
Material1435.diffuseColor = new SFColor(new float[0.819,0.521,0.169]);
Material1435.specularColor = new SFColor(new float[0.819,0.521,0.169]);
Material1435.emissiveColor = new SFColor(new float[0.819,0.521,0.169]);
Appearance1434.material = Material1435;

Shape1433.appearance = Appearance1434;

let Text1436 = browser.currentScene.createNode("Text");
Text1436.string = new MFString(new java.lang.String["Stand"]);
let FontStyle1437 = browser.currentScene.createNode("FontStyle");
FontStyle1437.family = new MFString(new java.lang.String["SANS"]);
Text1436.fontStyle = FontStyle1437;

Shape1433.geometry = Text1436;

Transform1431.children[1] = Shape1433;

let Shape1438 = browser.currentScene.createNode("Shape");
Shape1438.DEF = "Stand_Back";
let Appearance1439 = browser.currentScene.createNode("Appearance");
let Material1440 = browser.currentScene.createNode("Material");
Material1440.DEF = "Clear";
Material1440.ambientIntensity = 1;
Material1440.diffuseColor = new SFColor(new float[0,0.5,0]);
Material1440.emissiveColor = new SFColor(new float[0,0.5,0]);
Material1440.transparency = 0.8;
Appearance1439.material = Material1440;

Shape1438.appearance = Appearance1439;

let IndexedFaceSet1441 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1441.DEF = "Backing";
IndexedFaceSet1441.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
let Coordinate1442 = browser.currentScene.createNode("Coordinate");
Coordinate1442.point = new MFVec3f(new float[-0.2,-0.25,-0.01,3,-0.25,-0.01,3,1,-0.01,-0.2,1,-0.01]);
IndexedFaceSet1441.coord = Coordinate1442;

Shape1438.geometry = IndexedFaceSet1441;

Transform1431.children[2] = Shape1438;

Transform1430.children = new MFNode();

Transform1430.children[0] = Transform1431;

let Transform1443 = browser.currentScene.createNode("Transform");
Transform1443.DEF = "Pitch_Text";
Transform1443.translation = new SFVec3f(new float[0,-2.4,0]);
let TouchSensor1444 = browser.currentScene.createNode("TouchSensor");
TouchSensor1444.DEF = "Pitch_Touch";
Transform1443.children = new MFNode();

Transform1443.children[0] = TouchSensor1444;

let Shape1445 = browser.currentScene.createNode("Shape");
Shape1445.DEF = "PitchText";
let Appearance1446 = browser.currentScene.createNode("Appearance");
let Material1447 = browser.currentScene.createNode("Material");
Material1447.USE = "text_color";
Appearance1446.material = Material1447;

Shape1445.appearance = Appearance1446;

let Text1448 = browser.currentScene.createNode("Text");
Text1448.string = new MFString(new java.lang.String["Pitch"]);
let FontStyle1449 = browser.currentScene.createNode("FontStyle");
FontStyle1449.family = new MFString(new java.lang.String["SANS"]);
Text1448.fontStyle = FontStyle1449;

Shape1445.geometry = Text1448;

Transform1443.children[1] = Shape1445;

let Shape1450 = browser.currentScene.createNode("Shape");
Shape1450.DEF = "Pitch_Back";
let Appearance1451 = browser.currentScene.createNode("Appearance");
let Material1452 = browser.currentScene.createNode("Material");
Material1452.USE = "Clear";
Appearance1451.material = Material1452;

Shape1450.appearance = Appearance1451;

let IndexedFaceSet1453 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1453.USE = "Backing";
Shape1450.geometry = IndexedFaceSet1453;

Transform1443.children[2] = Shape1450;

Transform1430.children[1] = Transform1443;

let Transform1454 = browser.currentScene.createNode("Transform");
Transform1454.DEF = "Yaw_Text";
Transform1454.translation = new SFVec3f(new float[0,-3.8,0]);
let TouchSensor1455 = browser.currentScene.createNode("TouchSensor");
TouchSensor1455.DEF = "Yaw_Touch";
Transform1454.children = new MFNode();

Transform1454.children[0] = TouchSensor1455;

let Shape1456 = browser.currentScene.createNode("Shape");
Shape1456.DEF = "YawText";
let Appearance1457 = browser.currentScene.createNode("Appearance");
let Material1458 = browser.currentScene.createNode("Material");
Material1458.USE = "text_color";
Appearance1457.material = Material1458;

Shape1456.appearance = Appearance1457;

let Text1459 = browser.currentScene.createNode("Text");
Text1459.string = new MFString(new java.lang.String["Yaw"]);
let FontStyle1460 = browser.currentScene.createNode("FontStyle");
FontStyle1460.family = new MFString(new java.lang.String["SANS"]);
Text1459.fontStyle = FontStyle1460;

Shape1456.geometry = Text1459;

Transform1454.children[1] = Shape1456;

let Shape1461 = browser.currentScene.createNode("Shape");
Shape1461.DEF = "Yaw_Back";
let Appearance1462 = browser.currentScene.createNode("Appearance");
let Material1463 = browser.currentScene.createNode("Material");
Material1463.USE = "Clear";
Appearance1462.material = Material1463;

Shape1461.appearance = Appearance1462;

let IndexedFaceSet1464 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1464.USE = "Backing";
Shape1461.geometry = IndexedFaceSet1464;

Transform1454.children[2] = Shape1461;

Transform1430.children[2] = Transform1454;

let Transform1465 = browser.currentScene.createNode("Transform");
Transform1465.DEF = "Roll_Text";
Transform1465.translation = new SFVec3f(new float[0,-5.2,0]);
let TouchSensor1466 = browser.currentScene.createNode("TouchSensor");
TouchSensor1466.DEF = "Roll_Touch";
Transform1465.children = new MFNode();

Transform1465.children[0] = TouchSensor1466;

let Shape1467 = browser.currentScene.createNode("Shape");
Shape1467.DEF = "RollText";
let Appearance1468 = browser.currentScene.createNode("Appearance");
let Material1469 = browser.currentScene.createNode("Material");
Material1469.USE = "text_color";
Appearance1468.material = Material1469;

Shape1467.appearance = Appearance1468;

let Text1470 = browser.currentScene.createNode("Text");
Text1470.string = new MFString(new java.lang.String["Roll"]);
let FontStyle1471 = browser.currentScene.createNode("FontStyle");
FontStyle1471.family = new MFString(new java.lang.String["SANS"]);
Text1470.fontStyle = FontStyle1471;

Shape1467.geometry = Text1470;

Transform1465.children[1] = Shape1467;

let Shape1472 = browser.currentScene.createNode("Shape");
Shape1472.DEF = "Roll_Back";
let Appearance1473 = browser.currentScene.createNode("Appearance");
let Material1474 = browser.currentScene.createNode("Material");
Material1474.USE = "Clear";
Appearance1473.material = Material1474;

Shape1472.appearance = Appearance1473;

let IndexedFaceSet1475 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1475.USE = "Backing";
Shape1472.geometry = IndexedFaceSet1475;

Transform1465.children[2] = Shape1472;

Transform1430.children[3] = Transform1465;

let Transform1476 = browser.currentScene.createNode("Transform");
Transform1476.DEF = "Walk_Text";
Transform1476.translation = new SFVec3f(new float[0,-6.6,0]);
let TouchSensor1477 = browser.currentScene.createNode("TouchSensor");
TouchSensor1477.DEF = "Walk_Touch";
Transform1476.children = new MFNode();

Transform1476.children[0] = TouchSensor1477;

let Shape1478 = browser.currentScene.createNode("Shape");
Shape1478.DEF = "WalkText";
let Appearance1479 = browser.currentScene.createNode("Appearance");
let Material1480 = browser.currentScene.createNode("Material");
Material1480.USE = "text_color";
Appearance1479.material = Material1480;

Shape1478.appearance = Appearance1479;

let Text1481 = browser.currentScene.createNode("Text");
Text1481.string = new MFString(new java.lang.String["Walk"]);
let FontStyle1482 = browser.currentScene.createNode("FontStyle");
FontStyle1482.family = new MFString(new java.lang.String["SANS"]);
Text1481.fontStyle = FontStyle1482;

Shape1478.geometry = Text1481;

Transform1476.children[1] = Shape1478;

let Shape1483 = browser.currentScene.createNode("Shape");
Shape1483.DEF = "Walk_Back";
let Appearance1484 = browser.currentScene.createNode("Appearance");
let Material1485 = browser.currentScene.createNode("Material");
Material1485.USE = "Clear";
Appearance1484.material = Material1485;

Shape1483.appearance = Appearance1484;

let IndexedFaceSet1486 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1486.USE = "Backing";
Shape1483.geometry = IndexedFaceSet1486;

Transform1476.children[2] = Shape1483;

Transform1430.children[4] = Transform1476;

let Transform1487 = browser.currentScene.createNode("Transform");
Transform1487.DEF = "Run_Text";
Transform1487.translation = new SFVec3f(new float[0,-8,0]);
let TouchSensor1488 = browser.currentScene.createNode("TouchSensor");
TouchSensor1488.DEF = "Run_Touch";
Transform1487.children = new MFNode();

Transform1487.children[0] = TouchSensor1488;

let Shape1489 = browser.currentScene.createNode("Shape");
Shape1489.DEF = "RunText";
let Appearance1490 = browser.currentScene.createNode("Appearance");
let Material1491 = browser.currentScene.createNode("Material");
Material1491.USE = "text_color";
Appearance1490.material = Material1491;

Shape1489.appearance = Appearance1490;

let Text1492 = browser.currentScene.createNode("Text");
Text1492.string = new MFString(new java.lang.String["Run"]);
let FontStyle1493 = browser.currentScene.createNode("FontStyle");
FontStyle1493.family = new MFString(new java.lang.String["SANS"]);
Text1492.fontStyle = FontStyle1493;

Shape1489.geometry = Text1492;

Transform1487.children[1] = Shape1489;

let Shape1494 = browser.currentScene.createNode("Shape");
Shape1494.DEF = "Run_Back";
let Appearance1495 = browser.currentScene.createNode("Appearance");
let Material1496 = browser.currentScene.createNode("Material");
Material1496.USE = "Clear";
Appearance1495.material = Material1496;

Shape1494.appearance = Appearance1495;

let IndexedFaceSet1497 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1497.USE = "Backing";
Shape1494.geometry = IndexedFaceSet1497;

Transform1487.children[2] = Shape1494;

Transform1430.children[5] = Transform1487;

let Transform1498 = browser.currentScene.createNode("Transform");
Transform1498.DEF = "Jump_Text";
Transform1498.translation = new SFVec3f(new float[0,-9.4,0]);
let TouchSensor1499 = browser.currentScene.createNode("TouchSensor");
TouchSensor1499.DEF = "Jump_Touch";
Transform1498.children = new MFNode();

Transform1498.children[0] = TouchSensor1499;

let Shape1500 = browser.currentScene.createNode("Shape");
Shape1500.DEF = "JumpText";
let Appearance1501 = browser.currentScene.createNode("Appearance");
let Material1502 = browser.currentScene.createNode("Material");
Material1502.USE = "text_color";
Appearance1501.material = Material1502;

Shape1500.appearance = Appearance1501;

let Text1503 = browser.currentScene.createNode("Text");
Text1503.string = new MFString(new java.lang.String["Jump"]);
let FontStyle1504 = browser.currentScene.createNode("FontStyle");
FontStyle1504.family = new MFString(new java.lang.String["SANS"]);
Text1503.fontStyle = FontStyle1504;

Shape1500.geometry = Text1503;

Transform1498.children[1] = Shape1500;

let Shape1505 = browser.currentScene.createNode("Shape");
Shape1505.DEF = "Jump_Back";
let Appearance1506 = browser.currentScene.createNode("Appearance");
let Material1507 = browser.currentScene.createNode("Material");
Material1507.USE = "Clear";
Appearance1506.material = Material1507;

Shape1505.appearance = Appearance1506;

let IndexedFaceSet1508 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1508.USE = "Backing";
Shape1505.geometry = IndexedFaceSet1508;

Transform1498.children[2] = Shape1505;

Transform1430.children[6] = Transform1498;

let Transform1509 = browser.currentScene.createNode("Transform");
Transform1509.DEF = "Kick_Text";
Transform1509.translation = new SFVec3f(new float[0,-10.8,0]);
let TouchSensor1510 = browser.currentScene.createNode("TouchSensor");
TouchSensor1510.DEF = "Kick_Touch";
Transform1509.children = new MFNode();

Transform1509.children[0] = TouchSensor1510;

let Shape1511 = browser.currentScene.createNode("Shape");
Shape1511.DEF = "KickText";
let Appearance1512 = browser.currentScene.createNode("Appearance");
let Material1513 = browser.currentScene.createNode("Material");
Material1513.USE = "text_color";
Appearance1512.material = Material1513;

Shape1511.appearance = Appearance1512;

let Text1514 = browser.currentScene.createNode("Text");
Text1514.string = new MFString(new java.lang.String["Kick"]);
let FontStyle1515 = browser.currentScene.createNode("FontStyle");
FontStyle1515.family = new MFString(new java.lang.String["SANS"]);
Text1514.fontStyle = FontStyle1515;

Shape1511.geometry = Text1514;

Transform1509.children[1] = Shape1511;

let Shape1516 = browser.currentScene.createNode("Shape");
Shape1516.DEF = "Kick_Back";
let Appearance1517 = browser.currentScene.createNode("Appearance");
let Material1518 = browser.currentScene.createNode("Material");
Material1518.USE = "Clear";
Appearance1517.material = Material1518;

Shape1516.appearance = Appearance1517;

let IndexedFaceSet1519 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1519.USE = "Backing";
Shape1516.geometry = IndexedFaceSet1519;

Transform1509.children[2] = Shape1516;

Transform1430.children[7] = Transform1509;

let Transform1520 = browser.currentScene.createNode("Transform");
Transform1520.DEF = "Stop_Text";
Transform1520.translation = new SFVec3f(new float[0,0.4,0]);
let TouchSensor1521 = browser.currentScene.createNode("TouchSensor");
TouchSensor1521.DEF = "Stop_Touch";
Transform1520.children = new MFNode();

Transform1520.children[0] = TouchSensor1521;

let Shape1522 = browser.currentScene.createNode("Shape");
Shape1522.DEF = "StopText";
let Appearance1523 = browser.currentScene.createNode("Appearance");
let Material1524 = browser.currentScene.createNode("Material");
Material1524.USE = "text_color";
Appearance1523.material = Material1524;

Shape1522.appearance = Appearance1523;

let Text1525 = browser.currentScene.createNode("Text");
Text1525.string = new MFString(new java.lang.String["Default"]);
let FontStyle1526 = browser.currentScene.createNode("FontStyle");
FontStyle1526.family = new MFString(new java.lang.String["SANS"]);
Text1525.fontStyle = FontStyle1526;

Shape1522.geometry = Text1525;

Transform1520.children[1] = Shape1522;

let Shape1527 = browser.currentScene.createNode("Shape");
Shape1527.DEF = "Stop_Back";
let Appearance1528 = browser.currentScene.createNode("Appearance");
let Material1529 = browser.currentScene.createNode("Material");
Material1529.USE = "Clear";
Appearance1528.material = Material1529;

Shape1527.appearance = Appearance1528;

let IndexedFaceSet1530 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1530.USE = "Backing";
Shape1527.geometry = IndexedFaceSet1530;

Transform1520.children[2] = Shape1527;

Transform1430.children[8] = Transform1520;

Transform1429.children = new MFNode();

Transform1429.children[0] = Transform1430;

Group1425.children[2] = Transform1429;

browser.currentScene.children[14] = Group1425;

let ROUTE1531 = browser.currentScene.createNode("ROUTE");
ROUTE1531.fromNode = "StandTimer";
ROUTE1531.fromField = "fraction_changed";
ROUTE1531.toNode = "Stand_r_ankleRotInterp";
ROUTE1531.toField = "set_fraction";
browser.currentScene.children[15] = ROUTE1531;

let ROUTE1532 = browser.currentScene.createNode("ROUTE");
ROUTE1532.fromNode = "StandTimer";
ROUTE1532.fromField = "fraction_changed";
ROUTE1532.toNode = "Stand_r_kneeRotInterp";
ROUTE1532.toField = "set_fraction";
browser.currentScene.children[16] = ROUTE1532;

let ROUTE1533 = browser.currentScene.createNode("ROUTE");
ROUTE1533.fromNode = "StandTimer";
ROUTE1533.fromField = "fraction_changed";
ROUTE1533.toNode = "Stand_r_hipRotInterp";
ROUTE1533.toField = "set_fraction";
browser.currentScene.children[17] = ROUTE1533;

let ROUTE1534 = browser.currentScene.createNode("ROUTE");
ROUTE1534.fromNode = "StandTimer";
ROUTE1534.fromField = "fraction_changed";
ROUTE1534.toNode = "Stand_l_ankleRotInterp";
ROUTE1534.toField = "set_fraction";
browser.currentScene.children[18] = ROUTE1534;

let ROUTE1535 = browser.currentScene.createNode("ROUTE");
ROUTE1535.fromNode = "StandTimer";
ROUTE1535.fromField = "fraction_changed";
ROUTE1535.toNode = "Stand_l_kneeRotInterp";
ROUTE1535.toField = "set_fraction";
browser.currentScene.children[19] = ROUTE1535;

let ROUTE1536 = browser.currentScene.createNode("ROUTE");
ROUTE1536.fromNode = "StandTimer";
ROUTE1536.fromField = "fraction_changed";
ROUTE1536.toNode = "Stand_l_hipRotInterp";
ROUTE1536.toField = "set_fraction";
browser.currentScene.children[20] = ROUTE1536;

let ROUTE1537 = browser.currentScene.createNode("ROUTE");
ROUTE1537.fromNode = "StandTimer";
ROUTE1537.fromField = "fraction_changed";
ROUTE1537.toNode = "Stand_lower_bodyRotInterp";
ROUTE1537.toField = "set_fraction";
browser.currentScene.children[21] = ROUTE1537;

let ROUTE1538 = browser.currentScene.createNode("ROUTE");
ROUTE1538.fromNode = "StandTimer";
ROUTE1538.fromField = "fraction_changed";
ROUTE1538.toNode = "Stand_r_wristRotInterp";
ROUTE1538.toField = "set_fraction";
browser.currentScene.children[22] = ROUTE1538;

let ROUTE1539 = browser.currentScene.createNode("ROUTE");
ROUTE1539.fromNode = "StandTimer";
ROUTE1539.fromField = "fraction_changed";
ROUTE1539.toNode = "Stand_r_elbowRotInterp";
ROUTE1539.toField = "set_fraction";
browser.currentScene.children[23] = ROUTE1539;

let ROUTE1540 = browser.currentScene.createNode("ROUTE");
ROUTE1540.fromNode = "StandTimer";
ROUTE1540.fromField = "fraction_changed";
ROUTE1540.toNode = "Stand_r_shoulderRotInterp";
ROUTE1540.toField = "set_fraction";
browser.currentScene.children[24] = ROUTE1540;

let ROUTE1541 = browser.currentScene.createNode("ROUTE");
ROUTE1541.fromNode = "StandTimer";
ROUTE1541.fromField = "fraction_changed";
ROUTE1541.toNode = "Stand_l_wristRotInterp";
ROUTE1541.toField = "set_fraction";
browser.currentScene.children[25] = ROUTE1541;

let ROUTE1542 = browser.currentScene.createNode("ROUTE");
ROUTE1542.fromNode = "StandTimer";
ROUTE1542.fromField = "fraction_changed";
ROUTE1542.toNode = "Stand_l_elbowRotInterp";
ROUTE1542.toField = "set_fraction";
browser.currentScene.children[26] = ROUTE1542;

let ROUTE1543 = browser.currentScene.createNode("ROUTE");
ROUTE1543.fromNode = "StandTimer";
ROUTE1543.fromField = "fraction_changed";
ROUTE1543.toNode = "Stand_l_shoulderRotInterp";
ROUTE1543.toField = "set_fraction";
browser.currentScene.children[27] = ROUTE1543;

let ROUTE1544 = browser.currentScene.createNode("ROUTE");
ROUTE1544.fromNode = "StandTimer";
ROUTE1544.fromField = "fraction_changed";
ROUTE1544.toNode = "Stand_headRotInterp";
ROUTE1544.toField = "set_fraction";
browser.currentScene.children[28] = ROUTE1544;

let ROUTE1545 = browser.currentScene.createNode("ROUTE");
ROUTE1545.fromNode = "StandTimer";
ROUTE1545.fromField = "fraction_changed";
ROUTE1545.toNode = "Stand_neckRotInterp";
ROUTE1545.toField = "set_fraction";
browser.currentScene.children[29] = ROUTE1545;

let ROUTE1546 = browser.currentScene.createNode("ROUTE");
ROUTE1546.fromNode = "StandTimer";
ROUTE1546.fromField = "fraction_changed";
ROUTE1546.toNode = "Stand_l_eyeballRotInterp";
ROUTE1546.toField = "set_fraction";
browser.currentScene.children[30] = ROUTE1546;

let ROUTE1547 = browser.currentScene.createNode("ROUTE");
ROUTE1547.fromNode = "StandTimer";
ROUTE1547.fromField = "fraction_changed";
ROUTE1547.toNode = "Stand_r_eyeballRotInterp";
ROUTE1547.toField = "set_fraction";
browser.currentScene.children[31] = ROUTE1547;

let ROUTE1548 = browser.currentScene.createNode("ROUTE");
ROUTE1548.fromNode = "StandTimer";
ROUTE1548.fromField = "fraction_changed";
ROUTE1548.toNode = "Stand_upper_bodyRotInterp";
ROUTE1548.toField = "set_fraction";
browser.currentScene.children[32] = ROUTE1548;

let ROUTE1549 = browser.currentScene.createNode("ROUTE");
ROUTE1549.fromNode = "StandTimer";
ROUTE1549.fromField = "fraction_changed";
ROUTE1549.toNode = "Stand_whole_bodyRotInterp";
ROUTE1549.toField = "set_fraction";
browser.currentScene.children[33] = ROUTE1549;

let ROUTE1550 = browser.currentScene.createNode("ROUTE");
ROUTE1550.fromNode = "StandTimer";
ROUTE1550.fromField = "fraction_changed";
ROUTE1550.toNode = "Stand_whole_bodyTransInterp";
ROUTE1550.toField = "set_fraction";
browser.currentScene.children[34] = ROUTE1550;

let ROUTE1551 = browser.currentScene.createNode("ROUTE");
ROUTE1551.fromNode = "StandTimer";
ROUTE1551.fromField = "fraction_changed";
ROUTE1551.toNode = "Stand_l_sternoclavicularRoll";
ROUTE1551.toField = "set_fraction";
browser.currentScene.children[35] = ROUTE1551;

let ROUTE1552 = browser.currentScene.createNode("ROUTE");
ROUTE1552.fromNode = "StandTimer";
ROUTE1552.fromField = "fraction_changed";
ROUTE1552.toNode = "Stand_l_acromioclavicularRoll";
ROUTE1552.toField = "set_fraction";
browser.currentScene.children[36] = ROUTE1552;

let ROUTE1553 = browser.currentScene.createNode("ROUTE");
ROUTE1553.fromNode = "StandTimer";
ROUTE1553.fromField = "fraction_changed";
ROUTE1553.toNode = "Stand_r_sternoclavicularRoll";
ROUTE1553.toField = "set_fraction";
browser.currentScene.children[37] = ROUTE1553;

let ROUTE1554 = browser.currentScene.createNode("ROUTE");
ROUTE1554.fromNode = "StandTimer";
ROUTE1554.fromField = "fraction_changed";
ROUTE1554.toNode = "Stand_r_acromioclavicularRoll";
ROUTE1554.toField = "set_fraction";
browser.currentScene.children[38] = ROUTE1554;

let ROUTE1555 = browser.currentScene.createNode("ROUTE");
ROUTE1555.fromNode = "StandTimer";
ROUTE1555.fromField = "fraction_changed";
ROUTE1555.toNode = "Stand_r_metatarsalPitch";
ROUTE1555.toField = "set_fraction";
browser.currentScene.children[39] = ROUTE1555;

let ROUTE1556 = browser.currentScene.createNode("ROUTE");
ROUTE1556.fromNode = "StandTimer";
ROUTE1556.fromField = "fraction_changed";
ROUTE1556.toNode = "Stand_sacroiliacYaw";
ROUTE1556.toField = "set_fraction";
browser.currentScene.children[40] = ROUTE1556;

let ROUTE1557 = browser.currentScene.createNode("ROUTE");
ROUTE1557.fromNode = "StandTimer";
ROUTE1557.fromField = "fraction_changed";
ROUTE1557.toNode = "Stand_vl5Yaw";
ROUTE1557.toField = "set_fraction";
browser.currentScene.children[41] = ROUTE1557;

let ROUTE1558 = browser.currentScene.createNode("ROUTE");
ROUTE1558.fromNode = "StandTimer";
ROUTE1558.fromField = "fraction_changed";
ROUTE1558.toNode = "Stand_vc6Yaw";
ROUTE1558.toField = "set_fraction";
browser.currentScene.children[42] = ROUTE1558;

let ROUTE1559 = browser.currentScene.createNode("ROUTE");
ROUTE1559.fromNode = "StandTimer";
ROUTE1559.fromField = "fraction_changed";
ROUTE1559.toNode = "Stand_l_thumb1Pitch";
ROUTE1559.toField = "set_fraction";
browser.currentScene.children[43] = ROUTE1559;

let ROUTE1560 = browser.currentScene.createNode("ROUTE");
ROUTE1560.fromNode = "StandTimer";
ROUTE1560.fromField = "fraction_changed";
ROUTE1560.toNode = "Stand_r_thumb1Pitch";
ROUTE1560.toField = "set_fraction";
browser.currentScene.children[44] = ROUTE1560;

let ROUTE1561 = browser.currentScene.createNode("ROUTE");
ROUTE1561.fromNode = "StandTimer";
ROUTE1561.fromField = "fraction_changed";
ROUTE1561.toNode = "Stand_r_index1Roll";
ROUTE1561.toField = "set_fraction";
browser.currentScene.children[45] = ROUTE1561;

let ROUTE1562 = browser.currentScene.createNode("ROUTE");
ROUTE1562.fromNode = "StandTimer";
ROUTE1562.fromField = "fraction_changed";
ROUTE1562.toNode = "Stand_r_index2Roll";
ROUTE1562.toField = "set_fraction";
browser.currentScene.children[46] = ROUTE1562;

let ROUTE1563 = browser.currentScene.createNode("ROUTE");
ROUTE1563.fromNode = "StandTimer";
ROUTE1563.fromField = "fraction_changed";
ROUTE1563.toNode = "Stand_r_index3Roll";
ROUTE1563.toField = "set_fraction";
browser.currentScene.children[47] = ROUTE1563;

let ROUTE1564 = browser.currentScene.createNode("ROUTE");
ROUTE1564.fromNode = "Stand_r_ankleRotInterp";
ROUTE1564.fromField = "value_changed";
ROUTE1564.toNode = "hanim_r_ankle";
ROUTE1564.toField = "set_rotation";
browser.currentScene.children[48] = ROUTE1564;

let ROUTE1565 = browser.currentScene.createNode("ROUTE");
ROUTE1565.fromNode = "Stand_r_kneeRotInterp";
ROUTE1565.fromField = "value_changed";
ROUTE1565.toNode = "hanim_r_knee";
ROUTE1565.toField = "set_rotation";
browser.currentScene.children[49] = ROUTE1565;

let ROUTE1566 = browser.currentScene.createNode("ROUTE");
ROUTE1566.fromNode = "Stand_r_hipRotInterp";
ROUTE1566.fromField = "value_changed";
ROUTE1566.toNode = "hanim_r_hip";
ROUTE1566.toField = "set_rotation";
browser.currentScene.children[50] = ROUTE1566;

let ROUTE1567 = browser.currentScene.createNode("ROUTE");
ROUTE1567.fromNode = "Stand_l_ankleRotInterp";
ROUTE1567.fromField = "value_changed";
ROUTE1567.toNode = "hanim_l_ankle";
ROUTE1567.toField = "set_rotation";
browser.currentScene.children[51] = ROUTE1567;

let ROUTE1568 = browser.currentScene.createNode("ROUTE");
ROUTE1568.fromNode = "Stand_l_kneeRotInterp";
ROUTE1568.fromField = "value_changed";
ROUTE1568.toNode = "hanim_l_knee";
ROUTE1568.toField = "set_rotation";
browser.currentScene.children[52] = ROUTE1568;

let ROUTE1569 = browser.currentScene.createNode("ROUTE");
ROUTE1569.fromNode = "Stand_l_hipRotInterp";
ROUTE1569.fromField = "value_changed";
ROUTE1569.toNode = "hanim_l_hip";
ROUTE1569.toField = "set_rotation";
browser.currentScene.children[53] = ROUTE1569;

let ROUTE1570 = browser.currentScene.createNode("ROUTE");
ROUTE1570.fromNode = "Stand_r_wristRotInterp";
ROUTE1570.fromField = "value_changed";
ROUTE1570.toNode = "hanim_r_wrist";
ROUTE1570.toField = "set_rotation";
browser.currentScene.children[54] = ROUTE1570;

let ROUTE1571 = browser.currentScene.createNode("ROUTE");
ROUTE1571.fromNode = "Stand_r_elbowRotInterp";
ROUTE1571.fromField = "value_changed";
ROUTE1571.toNode = "hanim_r_elbow";
ROUTE1571.toField = "set_rotation";
browser.currentScene.children[55] = ROUTE1571;

let ROUTE1572 = browser.currentScene.createNode("ROUTE");
ROUTE1572.fromNode = "Stand_r_shoulderRotInterp";
ROUTE1572.fromField = "value_changed";
ROUTE1572.toNode = "hanim_r_shoulder";
ROUTE1572.toField = "set_rotation";
browser.currentScene.children[56] = ROUTE1572;

let ROUTE1573 = browser.currentScene.createNode("ROUTE");
ROUTE1573.fromNode = "Stand_l_wristRotInterp";
ROUTE1573.fromField = "value_changed";
ROUTE1573.toNode = "hanim_l_wrist";
ROUTE1573.toField = "set_rotation";
browser.currentScene.children[57] = ROUTE1573;

let ROUTE1574 = browser.currentScene.createNode("ROUTE");
ROUTE1574.fromNode = "Stand_l_elbowRotInterp";
ROUTE1574.fromField = "value_changed";
ROUTE1574.toNode = "hanim_l_elbow";
ROUTE1574.toField = "set_rotation";
browser.currentScene.children[58] = ROUTE1574;

let ROUTE1575 = browser.currentScene.createNode("ROUTE");
ROUTE1575.fromNode = "Stand_l_shoulderRotInterp";
ROUTE1575.fromField = "value_changed";
ROUTE1575.toNode = "hanim_l_shoulder";
ROUTE1575.toField = "set_rotation";
browser.currentScene.children[59] = ROUTE1575;

let ROUTE1576 = browser.currentScene.createNode("ROUTE");
ROUTE1576.fromNode = "Stand_headRotInterp";
ROUTE1576.fromField = "value_changed";
ROUTE1576.toNode = "hanim_skullbase";
ROUTE1576.toField = "set_rotation";
browser.currentScene.children[60] = ROUTE1576;

let ROUTE1577 = browser.currentScene.createNode("ROUTE");
ROUTE1577.fromNode = "Stand_neckRotInterp";
ROUTE1577.fromField = "value_changed";
ROUTE1577.toNode = "hanim_vc7";
ROUTE1577.toField = "set_rotation";
browser.currentScene.children[61] = ROUTE1577;

let ROUTE1578 = browser.currentScene.createNode("ROUTE");
ROUTE1578.fromNode = "Stand_l_eyeballRotInterp";
ROUTE1578.fromField = "value_changed";
ROUTE1578.toNode = "hanim_l_eyeball_joint";
ROUTE1578.toField = "set_rotation";
browser.currentScene.children[62] = ROUTE1578;

let ROUTE1579 = browser.currentScene.createNode("ROUTE");
ROUTE1579.fromNode = "Stand_r_eyeballRotInterp";
ROUTE1579.fromField = "value_changed";
ROUTE1579.toNode = "hanim_r_eyeball_joint";
ROUTE1579.toField = "set_rotation";
browser.currentScene.children[63] = ROUTE1579;

let ROUTE1580 = browser.currentScene.createNode("ROUTE");
ROUTE1580.fromNode = "Stand_upper_bodyRotInterp";
ROUTE1580.fromField = "value_changed";
ROUTE1580.toNode = "hanim_vl1";
ROUTE1580.toField = "set_rotation";
browser.currentScene.children[64] = ROUTE1580;

let ROUTE1581 = browser.currentScene.createNode("ROUTE");
ROUTE1581.fromNode = "Stand_lower_bodyRotInterp";
ROUTE1581.fromField = "value_changed";
ROUTE1581.toNode = "hanim_sacroiliac";
ROUTE1581.toField = "set_rotation";
browser.currentScene.children[65] = ROUTE1581;

let ROUTE1582 = browser.currentScene.createNode("ROUTE");
ROUTE1582.fromNode = "Stand_whole_bodyRotInterp";
ROUTE1582.fromField = "value_changed";
ROUTE1582.toNode = "hanim_HumanoidRoot";
ROUTE1582.toField = "set_rotation";
browser.currentScene.children[66] = ROUTE1582;

let ROUTE1583 = browser.currentScene.createNode("ROUTE");
ROUTE1583.fromNode = "Stand_whole_bodyTransInterp";
ROUTE1583.fromField = "value_changed";
ROUTE1583.toNode = "hanim_HumanoidRoot";
ROUTE1583.toField = "set_translation";
browser.currentScene.children[67] = ROUTE1583;

let ROUTE1584 = browser.currentScene.createNode("ROUTE");
ROUTE1584.fromNode = "Stand_l_sternoclavicularRoll";
ROUTE1584.fromField = "value_changed";
ROUTE1584.toNode = "hanim_l_sternoclavicular";
ROUTE1584.toField = "set_rotation";
browser.currentScene.children[68] = ROUTE1584;

let ROUTE1585 = browser.currentScene.createNode("ROUTE");
ROUTE1585.fromNode = "Stand_l_acromioclavicularRoll";
ROUTE1585.fromField = "value_changed";
ROUTE1585.toNode = "hanim_l_acromioclavicular";
ROUTE1585.toField = "set_rotation";
browser.currentScene.children[69] = ROUTE1585;

let ROUTE1586 = browser.currentScene.createNode("ROUTE");
ROUTE1586.fromNode = "Stand_r_sternoclavicularRoll";
ROUTE1586.fromField = "value_changed";
ROUTE1586.toNode = "hanim_r_sternoclavicular";
ROUTE1586.toField = "set_rotation";
browser.currentScene.children[70] = ROUTE1586;

let ROUTE1587 = browser.currentScene.createNode("ROUTE");
ROUTE1587.fromNode = "Stand_r_acromioclavicularRoll";
ROUTE1587.fromField = "value_changed";
ROUTE1587.toNode = "hanim_r_acromioclavicular";
ROUTE1587.toField = "set_rotation";
browser.currentScene.children[71] = ROUTE1587;

let ROUTE1588 = browser.currentScene.createNode("ROUTE");
ROUTE1588.fromNode = "Stand_r_metatarsalPitch";
ROUTE1588.fromField = "value_changed";
ROUTE1588.toNode = "hanim_l_metatarsal";
ROUTE1588.toField = "set_rotation";
browser.currentScene.children[72] = ROUTE1588;

let ROUTE1589 = browser.currentScene.createNode("ROUTE");
ROUTE1589.fromNode = "Stand_r_metatarsalPitch";
ROUTE1589.fromField = "value_changed";
ROUTE1589.toNode = "hanim_r_metatarsal";
ROUTE1589.toField = "set_rotation";
browser.currentScene.children[73] = ROUTE1589;

let ROUTE1590 = browser.currentScene.createNode("ROUTE");
ROUTE1590.fromNode = "Stand_sacroiliacYaw";
ROUTE1590.fromField = "value_changed";
ROUTE1590.toNode = "hanim_sacroiliac";
ROUTE1590.toField = "set_rotation";
browser.currentScene.children[74] = ROUTE1590;

let ROUTE1591 = browser.currentScene.createNode("ROUTE");
ROUTE1591.fromNode = "Stand_vl5Yaw";
ROUTE1591.fromField = "value_changed";
ROUTE1591.toNode = "hanim_vl5";
ROUTE1591.toField = "set_rotation";
browser.currentScene.children[75] = ROUTE1591;

let ROUTE1592 = browser.currentScene.createNode("ROUTE");
ROUTE1592.fromNode = "Stand_vc6Yaw";
ROUTE1592.fromField = "value_changed";
ROUTE1592.toNode = "hanim_vc6";
ROUTE1592.toField = "set_rotation";
browser.currentScene.children[76] = ROUTE1592;

let ROUTE1593 = browser.currentScene.createNode("ROUTE");
ROUTE1593.fromNode = "Stand_l_thumb1Pitch";
ROUTE1593.fromField = "value_changed";
ROUTE1593.toNode = "hanim_l_thumb1";
ROUTE1593.toField = "set_rotation";
browser.currentScene.children[77] = ROUTE1593;

let ROUTE1594 = browser.currentScene.createNode("ROUTE");
ROUTE1594.fromNode = "Stand_r_thumb1Pitch";
ROUTE1594.fromField = "value_changed";
ROUTE1594.toNode = "hanim_r_thumb1";
ROUTE1594.toField = "set_rotation";
browser.currentScene.children[78] = ROUTE1594;

let ROUTE1595 = browser.currentScene.createNode("ROUTE");
ROUTE1595.fromNode = "Stand_r_index1Roll";
ROUTE1595.fromField = "value_changed";
ROUTE1595.toNode = "hanim_r_index1";
ROUTE1595.toField = "set_rotation";
browser.currentScene.children[79] = ROUTE1595;

let ROUTE1596 = browser.currentScene.createNode("ROUTE");
ROUTE1596.fromNode = "Stand_r_index2Roll";
ROUTE1596.fromField = "value_changed";
ROUTE1596.toNode = "hanim_r_index2";
ROUTE1596.toField = "set_rotation";
browser.currentScene.children[80] = ROUTE1596;

let ROUTE1597 = browser.currentScene.createNode("ROUTE");
ROUTE1597.fromNode = "Stand_r_index2Roll";
ROUTE1597.fromField = "value_changed";
ROUTE1597.toNode = "hanim_r_index3";
ROUTE1597.toField = "set_rotation";
browser.currentScene.children[81] = ROUTE1597;

let ROUTE1598 = browser.currentScene.createNode("ROUTE");
ROUTE1598.fromNode = "Stand_r_index1Roll";
ROUTE1598.fromField = "value_changed";
ROUTE1598.toNode = "hanim_r_middle1";
ROUTE1598.toField = "set_rotation";
browser.currentScene.children[82] = ROUTE1598;

let ROUTE1599 = browser.currentScene.createNode("ROUTE");
ROUTE1599.fromNode = "Stand_r_index2Roll";
ROUTE1599.fromField = "value_changed";
ROUTE1599.toNode = "hanim_r_middle2";
ROUTE1599.toField = "set_rotation";
browser.currentScene.children[83] = ROUTE1599;

let ROUTE1600 = browser.currentScene.createNode("ROUTE");
ROUTE1600.fromNode = "Stand_r_index2Roll";
ROUTE1600.fromField = "value_changed";
ROUTE1600.toNode = "hanim_r_middle3";
ROUTE1600.toField = "set_rotation";
browser.currentScene.children[84] = ROUTE1600;

let ROUTE1601 = browser.currentScene.createNode("ROUTE");
ROUTE1601.fromNode = "Stand_r_index1Roll";
ROUTE1601.fromField = "value_changed";
ROUTE1601.toNode = "hanim_r_ring1";
ROUTE1601.toField = "set_rotation";
browser.currentScene.children[85] = ROUTE1601;

let ROUTE1602 = browser.currentScene.createNode("ROUTE");
ROUTE1602.fromNode = "Stand_r_index2Roll";
ROUTE1602.fromField = "value_changed";
ROUTE1602.toNode = "hanim_r_ring2";
ROUTE1602.toField = "set_rotation";
browser.currentScene.children[86] = ROUTE1602;

let ROUTE1603 = browser.currentScene.createNode("ROUTE");
ROUTE1603.fromNode = "Stand_r_index2Roll";
ROUTE1603.fromField = "value_changed";
ROUTE1603.toNode = "hanim_r_ring3";
ROUTE1603.toField = "set_rotation";
browser.currentScene.children[87] = ROUTE1603;

let ROUTE1604 = browser.currentScene.createNode("ROUTE");
ROUTE1604.fromNode = "Stand_r_index1Roll";
ROUTE1604.fromField = "value_changed";
ROUTE1604.toNode = "hanim_r_pinky1";
ROUTE1604.toField = "set_rotation";
browser.currentScene.children[88] = ROUTE1604;

let ROUTE1605 = browser.currentScene.createNode("ROUTE");
ROUTE1605.fromNode = "Stand_r_index2Roll";
ROUTE1605.fromField = "value_changed";
ROUTE1605.toNode = "hanim_r_pinky2";
ROUTE1605.toField = "set_rotation";
browser.currentScene.children[89] = ROUTE1605;

let ROUTE1606 = browser.currentScene.createNode("ROUTE");
ROUTE1606.fromNode = "Stand_r_index2Roll";
ROUTE1606.fromField = "value_changed";
ROUTE1606.toNode = "hanim_r_pinky3";
ROUTE1606.toField = "set_rotation";
browser.currentScene.children[90] = ROUTE1606;

let ROUTE1607 = browser.currentScene.createNode("ROUTE");
ROUTE1607.fromNode = "PitchTimer";
ROUTE1607.fromField = "fraction_changed";
ROUTE1607.toNode = "Pitches_r_ankleRotInterp";
ROUTE1607.toField = "set_fraction";
browser.currentScene.children[91] = ROUTE1607;

let ROUTE1608 = browser.currentScene.createNode("ROUTE");
ROUTE1608.fromNode = "PitchTimer";
ROUTE1608.fromField = "fraction_changed";
ROUTE1608.toNode = "Pitches_r_kneeRotInterp";
ROUTE1608.toField = "set_fraction";
browser.currentScene.children[92] = ROUTE1608;

let ROUTE1609 = browser.currentScene.createNode("ROUTE");
ROUTE1609.fromNode = "PitchTimer";
ROUTE1609.fromField = "fraction_changed";
ROUTE1609.toNode = "Pitches_r_hipRotInterp";
ROUTE1609.toField = "set_fraction";
browser.currentScene.children[93] = ROUTE1609;

let ROUTE1610 = browser.currentScene.createNode("ROUTE");
ROUTE1610.fromNode = "PitchTimer";
ROUTE1610.fromField = "fraction_changed";
ROUTE1610.toNode = "Pitches_l_ankleRotInterp";
ROUTE1610.toField = "set_fraction";
browser.currentScene.children[94] = ROUTE1610;

let ROUTE1611 = browser.currentScene.createNode("ROUTE");
ROUTE1611.fromNode = "PitchTimer";
ROUTE1611.fromField = "fraction_changed";
ROUTE1611.toNode = "Pitches_l_kneeRotInterp";
ROUTE1611.toField = "set_fraction";
browser.currentScene.children[95] = ROUTE1611;

let ROUTE1612 = browser.currentScene.createNode("ROUTE");
ROUTE1612.fromNode = "PitchTimer";
ROUTE1612.fromField = "fraction_changed";
ROUTE1612.toNode = "Pitches_l_hipRotInterp";
ROUTE1612.toField = "set_fraction";
browser.currentScene.children[96] = ROUTE1612;

let ROUTE1613 = browser.currentScene.createNode("ROUTE");
ROUTE1613.fromNode = "PitchTimer";
ROUTE1613.fromField = "fraction_changed";
ROUTE1613.toNode = "Pitches_lower_bodyRotInterp";
ROUTE1613.toField = "set_fraction";
browser.currentScene.children[97] = ROUTE1613;

let ROUTE1614 = browser.currentScene.createNode("ROUTE");
ROUTE1614.fromNode = "PitchTimer";
ROUTE1614.fromField = "fraction_changed";
ROUTE1614.toNode = "Pitches_r_wristRotInterp";
ROUTE1614.toField = "set_fraction";
browser.currentScene.children[98] = ROUTE1614;

let ROUTE1615 = browser.currentScene.createNode("ROUTE");
ROUTE1615.fromNode = "PitchTimer";
ROUTE1615.fromField = "fraction_changed";
ROUTE1615.toNode = "Pitches_r_elbowRotInterp";
ROUTE1615.toField = "set_fraction";
browser.currentScene.children[99] = ROUTE1615;

let ROUTE1616 = browser.currentScene.createNode("ROUTE");
ROUTE1616.fromNode = "PitchTimer";
ROUTE1616.fromField = "fraction_changed";
ROUTE1616.toNode = "Pitches_r_shoulderRotInterp";
ROUTE1616.toField = "set_fraction";
browser.currentScene.children[100] = ROUTE1616;

let ROUTE1617 = browser.currentScene.createNode("ROUTE");
ROUTE1617.fromNode = "PitchTimer";
ROUTE1617.fromField = "fraction_changed";
ROUTE1617.toNode = "Pitches_l_wristRotInterp";
ROUTE1617.toField = "set_fraction";
browser.currentScene.children[101] = ROUTE1617;

let ROUTE1618 = browser.currentScene.createNode("ROUTE");
ROUTE1618.fromNode = "PitchTimer";
ROUTE1618.fromField = "fraction_changed";
ROUTE1618.toNode = "Pitches_l_elbowRotInterp";
ROUTE1618.toField = "set_fraction";
browser.currentScene.children[102] = ROUTE1618;

let ROUTE1619 = browser.currentScene.createNode("ROUTE");
ROUTE1619.fromNode = "PitchTimer";
ROUTE1619.fromField = "fraction_changed";
ROUTE1619.toNode = "Pitches_l_shoulderRotInterp";
ROUTE1619.toField = "set_fraction";
browser.currentScene.children[103] = ROUTE1619;

let ROUTE1620 = browser.currentScene.createNode("ROUTE");
ROUTE1620.fromNode = "PitchTimer";
ROUTE1620.fromField = "fraction_changed";
ROUTE1620.toNode = "Pitches_headRotInterp";
ROUTE1620.toField = "set_fraction";
browser.currentScene.children[104] = ROUTE1620;

let ROUTE1621 = browser.currentScene.createNode("ROUTE");
ROUTE1621.fromNode = "PitchTimer";
ROUTE1621.fromField = "fraction_changed";
ROUTE1621.toNode = "Pitches_neckRotInterp";
ROUTE1621.toField = "set_fraction";
browser.currentScene.children[105] = ROUTE1621;

let ROUTE1622 = browser.currentScene.createNode("ROUTE");
ROUTE1622.fromNode = "PitchTimer";
ROUTE1622.fromField = "fraction_changed";
ROUTE1622.toNode = "Pitches_upper_bodyRotInterp";
ROUTE1622.toField = "set_fraction";
browser.currentScene.children[106] = ROUTE1622;

let ROUTE1623 = browser.currentScene.createNode("ROUTE");
ROUTE1623.fromNode = "PitchTimer";
ROUTE1623.fromField = "fraction_changed";
ROUTE1623.toNode = "Pitches_whole_bodyRotInterp";
ROUTE1623.toField = "set_fraction";
browser.currentScene.children[107] = ROUTE1623;

let ROUTE1624 = browser.currentScene.createNode("ROUTE");
ROUTE1624.fromNode = "PitchTimer";
ROUTE1624.fromField = "fraction_changed";
ROUTE1624.toNode = "Pitches_whole_bodyTransInterp";
ROUTE1624.toField = "set_fraction";
browser.currentScene.children[108] = ROUTE1624;

let ROUTE1625 = browser.currentScene.createNode("ROUTE");
ROUTE1625.fromNode = "PitchTimer";
ROUTE1625.fromField = "fraction_changed";
ROUTE1625.toNode = "Pitch_l_sternoclavicularRoll";
ROUTE1625.toField = "set_fraction";
browser.currentScene.children[109] = ROUTE1625;

let ROUTE1626 = browser.currentScene.createNode("ROUTE");
ROUTE1626.fromNode = "PitchTimer";
ROUTE1626.fromField = "fraction_changed";
ROUTE1626.toNode = "Pitch_l_acromioclavicularRoll";
ROUTE1626.toField = "set_fraction";
browser.currentScene.children[110] = ROUTE1626;

let ROUTE1627 = browser.currentScene.createNode("ROUTE");
ROUTE1627.fromNode = "PitchTimer";
ROUTE1627.fromField = "fraction_changed";
ROUTE1627.toNode = "Pitch_r_sternoclavicularRoll";
ROUTE1627.toField = "set_fraction";
browser.currentScene.children[111] = ROUTE1627;

let ROUTE1628 = browser.currentScene.createNode("ROUTE");
ROUTE1628.fromNode = "PitchTimer";
ROUTE1628.fromField = "fraction_changed";
ROUTE1628.toNode = "Pitch_r_acromioclavicularRoll";
ROUTE1628.toField = "set_fraction";
browser.currentScene.children[112] = ROUTE1628;

let ROUTE1629 = browser.currentScene.createNode("ROUTE");
ROUTE1629.fromNode = "PitchTimer";
ROUTE1629.fromField = "fraction_changed";
ROUTE1629.toNode = "Pitch_r_metatarsalPitch";
ROUTE1629.toField = "set_fraction";
browser.currentScene.children[113] = ROUTE1629;

let ROUTE1630 = browser.currentScene.createNode("ROUTE");
ROUTE1630.fromNode = "PitchTimer";
ROUTE1630.fromField = "fraction_changed";
ROUTE1630.toNode = "Pitch_sacroiliacYaw";
ROUTE1630.toField = "set_fraction";
browser.currentScene.children[114] = ROUTE1630;

let ROUTE1631 = browser.currentScene.createNode("ROUTE");
ROUTE1631.fromNode = "PitchTimer";
ROUTE1631.fromField = "fraction_changed";
ROUTE1631.toNode = "Pitch_vl5Yaw";
ROUTE1631.toField = "set_fraction";
browser.currentScene.children[115] = ROUTE1631;

let ROUTE1632 = browser.currentScene.createNode("ROUTE");
ROUTE1632.fromNode = "PitchTimer";
ROUTE1632.fromField = "fraction_changed";
ROUTE1632.toNode = "Pitch_vc6Yaw";
ROUTE1632.toField = "set_fraction";
browser.currentScene.children[116] = ROUTE1632;

let ROUTE1633 = browser.currentScene.createNode("ROUTE");
ROUTE1633.fromNode = "PitchTimer";
ROUTE1633.fromField = "fraction_changed";
ROUTE1633.toNode = "Pitch_l_thumb1Pitch";
ROUTE1633.toField = "set_fraction";
browser.currentScene.children[117] = ROUTE1633;

let ROUTE1634 = browser.currentScene.createNode("ROUTE");
ROUTE1634.fromNode = "PitchTimer";
ROUTE1634.fromField = "fraction_changed";
ROUTE1634.toNode = "Pitch_r_thumb1Pitch";
ROUTE1634.toField = "set_fraction";
browser.currentScene.children[118] = ROUTE1634;

let ROUTE1635 = browser.currentScene.createNode("ROUTE");
ROUTE1635.fromNode = "Pitches_r_ankleRotInterp";
ROUTE1635.fromField = "value_changed";
ROUTE1635.toNode = "hanim_r_ankle";
ROUTE1635.toField = "set_rotation";
browser.currentScene.children[119] = ROUTE1635;

let ROUTE1636 = browser.currentScene.createNode("ROUTE");
ROUTE1636.fromNode = "Pitches_r_kneeRotInterp";
ROUTE1636.fromField = "value_changed";
ROUTE1636.toNode = "hanim_r_knee";
ROUTE1636.toField = "set_rotation";
browser.currentScene.children[120] = ROUTE1636;

let ROUTE1637 = browser.currentScene.createNode("ROUTE");
ROUTE1637.fromNode = "Pitches_r_hipRotInterp";
ROUTE1637.fromField = "value_changed";
ROUTE1637.toNode = "hanim_r_hip";
ROUTE1637.toField = "set_rotation";
browser.currentScene.children[121] = ROUTE1637;

let ROUTE1638 = browser.currentScene.createNode("ROUTE");
ROUTE1638.fromNode = "Pitches_l_ankleRotInterp";
ROUTE1638.fromField = "value_changed";
ROUTE1638.toNode = "hanim_l_ankle";
ROUTE1638.toField = "set_rotation";
browser.currentScene.children[122] = ROUTE1638;

let ROUTE1639 = browser.currentScene.createNode("ROUTE");
ROUTE1639.fromNode = "Pitches_l_kneeRotInterp";
ROUTE1639.fromField = "value_changed";
ROUTE1639.toNode = "hanim_l_knee";
ROUTE1639.toField = "set_rotation";
browser.currentScene.children[123] = ROUTE1639;

let ROUTE1640 = browser.currentScene.createNode("ROUTE");
ROUTE1640.fromNode = "Pitches_l_hipRotInterp";
ROUTE1640.fromField = "value_changed";
ROUTE1640.toNode = "hanim_l_hip";
ROUTE1640.toField = "set_rotation";
browser.currentScene.children[124] = ROUTE1640;

let ROUTE1641 = browser.currentScene.createNode("ROUTE");
ROUTE1641.fromNode = "Pitches_lower_bodyRotInterp";
ROUTE1641.fromField = "value_changed";
ROUTE1641.toNode = "hanim_sacroiliac";
ROUTE1641.toField = "set_rotation";
browser.currentScene.children[125] = ROUTE1641;

let ROUTE1642 = browser.currentScene.createNode("ROUTE");
ROUTE1642.fromNode = "Pitches_r_wristRotInterp";
ROUTE1642.fromField = "value_changed";
ROUTE1642.toNode = "hanim_r_wrist";
ROUTE1642.toField = "set_rotation";
browser.currentScene.children[126] = ROUTE1642;

let ROUTE1643 = browser.currentScene.createNode("ROUTE");
ROUTE1643.fromNode = "Pitches_r_elbowRotInterp";
ROUTE1643.fromField = "value_changed";
ROUTE1643.toNode = "hanim_r_elbow";
ROUTE1643.toField = "set_rotation";
browser.currentScene.children[127] = ROUTE1643;

let ROUTE1644 = browser.currentScene.createNode("ROUTE");
ROUTE1644.fromNode = "Pitches_r_shoulderRotInterp";
ROUTE1644.fromField = "value_changed";
ROUTE1644.toNode = "hanim_r_shoulder";
ROUTE1644.toField = "set_rotation";
browser.currentScene.children[128] = ROUTE1644;

let ROUTE1645 = browser.currentScene.createNode("ROUTE");
ROUTE1645.fromNode = "Pitches_l_wristRotInterp";
ROUTE1645.fromField = "value_changed";
ROUTE1645.toNode = "hanim_l_wrist";
ROUTE1645.toField = "set_rotation";
browser.currentScene.children[129] = ROUTE1645;

let ROUTE1646 = browser.currentScene.createNode("ROUTE");
ROUTE1646.fromNode = "Pitches_l_elbowRotInterp";
ROUTE1646.fromField = "value_changed";
ROUTE1646.toNode = "hanim_l_elbow";
ROUTE1646.toField = "set_rotation";
browser.currentScene.children[130] = ROUTE1646;

let ROUTE1647 = browser.currentScene.createNode("ROUTE");
ROUTE1647.fromNode = "Pitches_l_shoulderRotInterp";
ROUTE1647.fromField = "value_changed";
ROUTE1647.toNode = "hanim_l_shoulder";
ROUTE1647.toField = "set_rotation";
browser.currentScene.children[131] = ROUTE1647;

let ROUTE1648 = browser.currentScene.createNode("ROUTE");
ROUTE1648.fromNode = "Pitches_headRotInterp";
ROUTE1648.fromField = "value_changed";
ROUTE1648.toNode = "hanim_skullbase";
ROUTE1648.toField = "set_rotation";
browser.currentScene.children[132] = ROUTE1648;

let ROUTE1649 = browser.currentScene.createNode("ROUTE");
ROUTE1649.fromNode = "Pitches_neckRotInterp";
ROUTE1649.fromField = "value_changed";
ROUTE1649.toNode = "hanim_vc4";
ROUTE1649.toField = "set_rotation";
browser.currentScene.children[133] = ROUTE1649;

let ROUTE1650 = browser.currentScene.createNode("ROUTE");
ROUTE1650.fromNode = "Pitches_upper_bodyRotInterp";
ROUTE1650.fromField = "value_changed";
ROUTE1650.toNode = "hanim_vl1";
ROUTE1650.toField = "set_rotation";
browser.currentScene.children[134] = ROUTE1650;

let ROUTE1651 = browser.currentScene.createNode("ROUTE");
ROUTE1651.fromNode = "Pitches_whole_bodyRotInterp";
ROUTE1651.fromField = "value_changed";
ROUTE1651.toNode = "hanim_HumanoidRoot";
ROUTE1651.toField = "set_rotation";
browser.currentScene.children[135] = ROUTE1651;

let ROUTE1652 = browser.currentScene.createNode("ROUTE");
ROUTE1652.fromNode = "Pitches_whole_bodyTransInterp";
ROUTE1652.fromField = "value_changed";
ROUTE1652.toNode = "hanim_HumanoidRoot";
ROUTE1652.toField = "set_translation";
browser.currentScene.children[136] = ROUTE1652;

let ROUTE1653 = browser.currentScene.createNode("ROUTE");
ROUTE1653.fromNode = "Pitch_l_sternoclavicularRoll";
ROUTE1653.fromField = "value_changed";
ROUTE1653.toNode = "hanim_l_sternoclavicular";
ROUTE1653.toField = "set_rotation";
browser.currentScene.children[137] = ROUTE1653;

let ROUTE1654 = browser.currentScene.createNode("ROUTE");
ROUTE1654.fromNode = "Pitch_l_acromioclavicularRoll";
ROUTE1654.fromField = "value_changed";
ROUTE1654.toNode = "hanim_l_acromioclavicular";
ROUTE1654.toField = "set_rotation";
browser.currentScene.children[138] = ROUTE1654;

let ROUTE1655 = browser.currentScene.createNode("ROUTE");
ROUTE1655.fromNode = "Pitch_r_sternoclavicularRoll";
ROUTE1655.fromField = "value_changed";
ROUTE1655.toNode = "hanim_r_sternoclavicular";
ROUTE1655.toField = "set_rotation";
browser.currentScene.children[139] = ROUTE1655;

let ROUTE1656 = browser.currentScene.createNode("ROUTE");
ROUTE1656.fromNode = "Pitch_r_acromioclavicularRoll";
ROUTE1656.fromField = "value_changed";
ROUTE1656.toNode = "hanim_r_acromioclavicular";
ROUTE1656.toField = "set_rotation";
browser.currentScene.children[140] = ROUTE1656;

let ROUTE1657 = browser.currentScene.createNode("ROUTE");
ROUTE1657.fromNode = "Pitch_r_metatarsalPitch";
ROUTE1657.fromField = "value_changed";
ROUTE1657.toNode = "hanim_l_metatarsal";
ROUTE1657.toField = "set_rotation";
browser.currentScene.children[141] = ROUTE1657;

let ROUTE1658 = browser.currentScene.createNode("ROUTE");
ROUTE1658.fromNode = "Pitch_r_metatarsalPitch";
ROUTE1658.fromField = "value_changed";
ROUTE1658.toNode = "hanim_r_metatarsal";
ROUTE1658.toField = "set_rotation";
browser.currentScene.children[142] = ROUTE1658;

let ROUTE1659 = browser.currentScene.createNode("ROUTE");
ROUTE1659.fromNode = "Pitch_sacroiliacYaw";
ROUTE1659.fromField = "value_changed";
ROUTE1659.toNode = "hanim_sacroiliac";
ROUTE1659.toField = "set_rotation";
browser.currentScene.children[143] = ROUTE1659;

let ROUTE1660 = browser.currentScene.createNode("ROUTE");
ROUTE1660.fromNode = "Pitch_vl5Yaw";
ROUTE1660.fromField = "value_changed";
ROUTE1660.toNode = "hanim_vl5";
ROUTE1660.toField = "set_rotation";
browser.currentScene.children[144] = ROUTE1660;

let ROUTE1661 = browser.currentScene.createNode("ROUTE");
ROUTE1661.fromNode = "Pitch_vc6Yaw";
ROUTE1661.fromField = "value_changed";
ROUTE1661.toNode = "hanim_vc6";
ROUTE1661.toField = "set_rotation";
browser.currentScene.children[145] = ROUTE1661;

let ROUTE1662 = browser.currentScene.createNode("ROUTE");
ROUTE1662.fromNode = "Pitch_l_thumb1Pitch";
ROUTE1662.fromField = "value_changed";
ROUTE1662.toNode = "hanim_l_thumb1";
ROUTE1662.toField = "set_rotation";
browser.currentScene.children[146] = ROUTE1662;

let ROUTE1663 = browser.currentScene.createNode("ROUTE");
ROUTE1663.fromNode = "Pitch_r_thumb1Pitch";
ROUTE1663.fromField = "value_changed";
ROUTE1663.toNode = "hanim_r_thumb1";
ROUTE1663.toField = "set_rotation";
browser.currentScene.children[147] = ROUTE1663;

let ROUTE1664 = browser.currentScene.createNode("ROUTE");
ROUTE1664.fromNode = "YawTimer";
ROUTE1664.fromField = "fraction_changed";
ROUTE1664.toNode = "Yaws_r_ankleRotInterp";
ROUTE1664.toField = "set_fraction";
browser.currentScene.children[148] = ROUTE1664;

let ROUTE1665 = browser.currentScene.createNode("ROUTE");
ROUTE1665.fromNode = "YawTimer";
ROUTE1665.fromField = "fraction_changed";
ROUTE1665.toNode = "Yaws_r_kneeRotInterp";
ROUTE1665.toField = "set_fraction";
browser.currentScene.children[149] = ROUTE1665;

let ROUTE1666 = browser.currentScene.createNode("ROUTE");
ROUTE1666.fromNode = "YawTimer";
ROUTE1666.fromField = "fraction_changed";
ROUTE1666.toNode = "Yaws_r_hipRotInterp";
ROUTE1666.toField = "set_fraction";
browser.currentScene.children[150] = ROUTE1666;

let ROUTE1667 = browser.currentScene.createNode("ROUTE");
ROUTE1667.fromNode = "YawTimer";
ROUTE1667.fromField = "fraction_changed";
ROUTE1667.toNode = "Yaws_l_ankleRotInterp";
ROUTE1667.toField = "set_fraction";
browser.currentScene.children[151] = ROUTE1667;

let ROUTE1668 = browser.currentScene.createNode("ROUTE");
ROUTE1668.fromNode = "YawTimer";
ROUTE1668.fromField = "fraction_changed";
ROUTE1668.toNode = "Yaws_l_kneeRotInterp";
ROUTE1668.toField = "set_fraction";
browser.currentScene.children[152] = ROUTE1668;

let ROUTE1669 = browser.currentScene.createNode("ROUTE");
ROUTE1669.fromNode = "YawTimer";
ROUTE1669.fromField = "fraction_changed";
ROUTE1669.toNode = "Yaws_l_hipRotInterp";
ROUTE1669.toField = "set_fraction";
browser.currentScene.children[153] = ROUTE1669;

let ROUTE1670 = browser.currentScene.createNode("ROUTE");
ROUTE1670.fromNode = "YawTimer";
ROUTE1670.fromField = "fraction_changed";
ROUTE1670.toNode = "Yaws_lower_bodyRotInterp";
ROUTE1670.toField = "set_fraction";
browser.currentScene.children[154] = ROUTE1670;

let ROUTE1671 = browser.currentScene.createNode("ROUTE");
ROUTE1671.fromNode = "YawTimer";
ROUTE1671.fromField = "fraction_changed";
ROUTE1671.toNode = "Yaws_r_wristRotInterp";
ROUTE1671.toField = "set_fraction";
browser.currentScene.children[155] = ROUTE1671;

let ROUTE1672 = browser.currentScene.createNode("ROUTE");
ROUTE1672.fromNode = "YawTimer";
ROUTE1672.fromField = "fraction_changed";
ROUTE1672.toNode = "Yaws_r_elbowRotInterp";
ROUTE1672.toField = "set_fraction";
browser.currentScene.children[156] = ROUTE1672;

let ROUTE1673 = browser.currentScene.createNode("ROUTE");
ROUTE1673.fromNode = "YawTimer";
ROUTE1673.fromField = "fraction_changed";
ROUTE1673.toNode = "Yaws_r_shoulderRotInterp";
ROUTE1673.toField = "set_fraction";
browser.currentScene.children[157] = ROUTE1673;

let ROUTE1674 = browser.currentScene.createNode("ROUTE");
ROUTE1674.fromNode = "YawTimer";
ROUTE1674.fromField = "fraction_changed";
ROUTE1674.toNode = "Yaws_l_wristRotInterp";
ROUTE1674.toField = "set_fraction";
browser.currentScene.children[158] = ROUTE1674;

let ROUTE1675 = browser.currentScene.createNode("ROUTE");
ROUTE1675.fromNode = "YawTimer";
ROUTE1675.fromField = "fraction_changed";
ROUTE1675.toNode = "Yaws_l_elbowRotInterp";
ROUTE1675.toField = "set_fraction";
browser.currentScene.children[159] = ROUTE1675;

let ROUTE1676 = browser.currentScene.createNode("ROUTE");
ROUTE1676.fromNode = "YawTimer";
ROUTE1676.fromField = "fraction_changed";
ROUTE1676.toNode = "Yaws_l_shoulderRotInterp";
ROUTE1676.toField = "set_fraction";
browser.currentScene.children[160] = ROUTE1676;

let ROUTE1677 = browser.currentScene.createNode("ROUTE");
ROUTE1677.fromNode = "YawTimer";
ROUTE1677.fromField = "fraction_changed";
ROUTE1677.toNode = "Yaws_headRotInterp";
ROUTE1677.toField = "set_fraction";
browser.currentScene.children[161] = ROUTE1677;

let ROUTE1678 = browser.currentScene.createNode("ROUTE");
ROUTE1678.fromNode = "YawTimer";
ROUTE1678.fromField = "fraction_changed";
ROUTE1678.toNode = "Yaws_neckRotInterp";
ROUTE1678.toField = "set_fraction";
browser.currentScene.children[162] = ROUTE1678;

let ROUTE1679 = browser.currentScene.createNode("ROUTE");
ROUTE1679.fromNode = "YawTimer";
ROUTE1679.fromField = "fraction_changed";
ROUTE1679.toNode = "Yaws_upper_bodyRotInterp";
ROUTE1679.toField = "set_fraction";
browser.currentScene.children[163] = ROUTE1679;

let ROUTE1680 = browser.currentScene.createNode("ROUTE");
ROUTE1680.fromNode = "YawTimer";
ROUTE1680.fromField = "fraction_changed";
ROUTE1680.toNode = "Yaws_whole_bodyRotInterp";
ROUTE1680.toField = "set_fraction";
browser.currentScene.children[164] = ROUTE1680;

let ROUTE1681 = browser.currentScene.createNode("ROUTE");
ROUTE1681.fromNode = "YawTimer";
ROUTE1681.fromField = "fraction_changed";
ROUTE1681.toNode = "Yaws_whole_bodyTransInterp";
ROUTE1681.toField = "set_fraction";
browser.currentScene.children[165] = ROUTE1681;

let ROUTE1682 = browser.currentScene.createNode("ROUTE");
ROUTE1682.fromNode = "YawTimer";
ROUTE1682.fromField = "fraction_changed";
ROUTE1682.toNode = "Yaw_l_sternoclavicularRoll";
ROUTE1682.toField = "set_fraction";
browser.currentScene.children[166] = ROUTE1682;

let ROUTE1683 = browser.currentScene.createNode("ROUTE");
ROUTE1683.fromNode = "YawTimer";
ROUTE1683.fromField = "fraction_changed";
ROUTE1683.toNode = "Yaw_l_acromioclavicularRoll";
ROUTE1683.toField = "set_fraction";
browser.currentScene.children[167] = ROUTE1683;

let ROUTE1684 = browser.currentScene.createNode("ROUTE");
ROUTE1684.fromNode = "YawTimer";
ROUTE1684.fromField = "fraction_changed";
ROUTE1684.toNode = "Yaw_r_sternoclavicularRoll";
ROUTE1684.toField = "set_fraction";
browser.currentScene.children[168] = ROUTE1684;

let ROUTE1685 = browser.currentScene.createNode("ROUTE");
ROUTE1685.fromNode = "YawTimer";
ROUTE1685.fromField = "fraction_changed";
ROUTE1685.toNode = "Yaw_r_acromioclavicularRoll";
ROUTE1685.toField = "set_fraction";
browser.currentScene.children[169] = ROUTE1685;

let ROUTE1686 = browser.currentScene.createNode("ROUTE");
ROUTE1686.fromNode = "YawTimer";
ROUTE1686.fromField = "fraction_changed";
ROUTE1686.toNode = "Yaw_r_metatarsalPitch";
ROUTE1686.toField = "set_fraction";
browser.currentScene.children[170] = ROUTE1686;

let ROUTE1687 = browser.currentScene.createNode("ROUTE");
ROUTE1687.fromNode = "YawTimer";
ROUTE1687.fromField = "fraction_changed";
ROUTE1687.toNode = "Yaw_sacroiliacYaw";
ROUTE1687.toField = "set_fraction";
browser.currentScene.children[171] = ROUTE1687;

let ROUTE1688 = browser.currentScene.createNode("ROUTE");
ROUTE1688.fromNode = "YawTimer";
ROUTE1688.fromField = "fraction_changed";
ROUTE1688.toNode = "Yaw_vl5Yaw";
ROUTE1688.toField = "set_fraction";
browser.currentScene.children[172] = ROUTE1688;

let ROUTE1689 = browser.currentScene.createNode("ROUTE");
ROUTE1689.fromNode = "YawTimer";
ROUTE1689.fromField = "fraction_changed";
ROUTE1689.toNode = "Yaw_vc6Yaw";
ROUTE1689.toField = "set_fraction";
browser.currentScene.children[173] = ROUTE1689;

let ROUTE1690 = browser.currentScene.createNode("ROUTE");
ROUTE1690.fromNode = "YawTimer";
ROUTE1690.fromField = "fraction_changed";
ROUTE1690.toNode = "Yaw_l_thumb1Pitch";
ROUTE1690.toField = "set_fraction";
browser.currentScene.children[174] = ROUTE1690;

let ROUTE1691 = browser.currentScene.createNode("ROUTE");
ROUTE1691.fromNode = "YawTimer";
ROUTE1691.fromField = "fraction_changed";
ROUTE1691.toNode = "Yaw_r_thumb1Pitch";
ROUTE1691.toField = "set_fraction";
browser.currentScene.children[175] = ROUTE1691;

let ROUTE1692 = browser.currentScene.createNode("ROUTE");
ROUTE1692.fromNode = "Yaws_r_ankleRotInterp";
ROUTE1692.fromField = "value_changed";
ROUTE1692.toNode = "hanim_r_ankle";
ROUTE1692.toField = "set_rotation";
browser.currentScene.children[176] = ROUTE1692;

let ROUTE1693 = browser.currentScene.createNode("ROUTE");
ROUTE1693.fromNode = "Yaws_r_kneeRotInterp";
ROUTE1693.fromField = "value_changed";
ROUTE1693.toNode = "hanim_r_knee";
ROUTE1693.toField = "set_rotation";
browser.currentScene.children[177] = ROUTE1693;

let ROUTE1694 = browser.currentScene.createNode("ROUTE");
ROUTE1694.fromNode = "Yaws_r_hipRotInterp";
ROUTE1694.fromField = "value_changed";
ROUTE1694.toNode = "hanim_r_hip";
ROUTE1694.toField = "set_rotation";
browser.currentScene.children[178] = ROUTE1694;

let ROUTE1695 = browser.currentScene.createNode("ROUTE");
ROUTE1695.fromNode = "Yaws_l_ankleRotInterp";
ROUTE1695.fromField = "value_changed";
ROUTE1695.toNode = "hanim_l_ankle";
ROUTE1695.toField = "set_rotation";
browser.currentScene.children[179] = ROUTE1695;

let ROUTE1696 = browser.currentScene.createNode("ROUTE");
ROUTE1696.fromNode = "Yaws_l_kneeRotInterp";
ROUTE1696.fromField = "value_changed";
ROUTE1696.toNode = "hanim_l_knee";
ROUTE1696.toField = "set_rotation";
browser.currentScene.children[180] = ROUTE1696;

let ROUTE1697 = browser.currentScene.createNode("ROUTE");
ROUTE1697.fromNode = "Yaws_l_hipRotInterp";
ROUTE1697.fromField = "value_changed";
ROUTE1697.toNode = "hanim_l_hip";
ROUTE1697.toField = "set_rotation";
browser.currentScene.children[181] = ROUTE1697;

let ROUTE1698 = browser.currentScene.createNode("ROUTE");
ROUTE1698.fromNode = "Yaws_lower_bodyRotInterp";
ROUTE1698.fromField = "value_changed";
ROUTE1698.toNode = "hanim_sacroiliac";
ROUTE1698.toField = "set_rotation";
browser.currentScene.children[182] = ROUTE1698;

let ROUTE1699 = browser.currentScene.createNode("ROUTE");
ROUTE1699.fromNode = "Yaws_r_wristRotInterp";
ROUTE1699.fromField = "value_changed";
ROUTE1699.toNode = "hanim_r_wrist";
ROUTE1699.toField = "set_rotation";
browser.currentScene.children[183] = ROUTE1699;

let ROUTE1700 = browser.currentScene.createNode("ROUTE");
ROUTE1700.fromNode = "Yaws_r_elbowRotInterp";
ROUTE1700.fromField = "value_changed";
ROUTE1700.toNode = "hanim_r_elbow";
ROUTE1700.toField = "set_rotation";
browser.currentScene.children[184] = ROUTE1700;

let ROUTE1701 = browser.currentScene.createNode("ROUTE");
ROUTE1701.fromNode = "Yaws_r_shoulderRotInterp";
ROUTE1701.fromField = "value_changed";
ROUTE1701.toNode = "hanim_r_shoulder";
ROUTE1701.toField = "set_rotation";
browser.currentScene.children[185] = ROUTE1701;

let ROUTE1702 = browser.currentScene.createNode("ROUTE");
ROUTE1702.fromNode = "Yaws_l_wristRotInterp";
ROUTE1702.fromField = "value_changed";
ROUTE1702.toNode = "hanim_l_wrist";
ROUTE1702.toField = "set_rotation";
browser.currentScene.children[186] = ROUTE1702;

let ROUTE1703 = browser.currentScene.createNode("ROUTE");
ROUTE1703.fromNode = "Yaws_l_elbowRotInterp";
ROUTE1703.fromField = "value_changed";
ROUTE1703.toNode = "hanim_l_elbow";
ROUTE1703.toField = "set_rotation";
browser.currentScene.children[187] = ROUTE1703;

let ROUTE1704 = browser.currentScene.createNode("ROUTE");
ROUTE1704.fromNode = "Yaws_l_shoulderRotInterp";
ROUTE1704.fromField = "value_changed";
ROUTE1704.toNode = "hanim_l_shoulder";
ROUTE1704.toField = "set_rotation";
browser.currentScene.children[188] = ROUTE1704;

let ROUTE1705 = browser.currentScene.createNode("ROUTE");
ROUTE1705.fromNode = "Yaws_headRotInterp";
ROUTE1705.fromField = "value_changed";
ROUTE1705.toNode = "hanim_skullbase";
ROUTE1705.toField = "set_rotation";
browser.currentScene.children[189] = ROUTE1705;

let ROUTE1706 = browser.currentScene.createNode("ROUTE");
ROUTE1706.fromNode = "Yaws_neckRotInterp";
ROUTE1706.fromField = "value_changed";
ROUTE1706.toNode = "hanim_vc4";
ROUTE1706.toField = "set_rotation";
browser.currentScene.children[190] = ROUTE1706;

let ROUTE1707 = browser.currentScene.createNode("ROUTE");
ROUTE1707.fromNode = "Yaws_upper_bodyRotInterp";
ROUTE1707.fromField = "value_changed";
ROUTE1707.toNode = "hanim_vl1";
ROUTE1707.toField = "set_rotation";
browser.currentScene.children[191] = ROUTE1707;

let ROUTE1708 = browser.currentScene.createNode("ROUTE");
ROUTE1708.fromNode = "Yaws_whole_bodyRotInterp";
ROUTE1708.fromField = "value_changed";
ROUTE1708.toNode = "hanim_HumanoidRoot";
ROUTE1708.toField = "set_rotation";
browser.currentScene.children[192] = ROUTE1708;

let ROUTE1709 = browser.currentScene.createNode("ROUTE");
ROUTE1709.fromNode = "Yaws_whole_bodyTransInterp";
ROUTE1709.fromField = "value_changed";
ROUTE1709.toNode = "hanim_HumanoidRoot";
ROUTE1709.toField = "set_translation";
browser.currentScene.children[193] = ROUTE1709;

let ROUTE1710 = browser.currentScene.createNode("ROUTE");
ROUTE1710.fromNode = "Yaw_l_sternoclavicularRoll";
ROUTE1710.fromField = "value_changed";
ROUTE1710.toNode = "hanim_l_sternoclavicular";
ROUTE1710.toField = "set_rotation";
browser.currentScene.children[194] = ROUTE1710;

let ROUTE1711 = browser.currentScene.createNode("ROUTE");
ROUTE1711.fromNode = "Yaw_l_acromioclavicularRoll";
ROUTE1711.fromField = "value_changed";
ROUTE1711.toNode = "hanim_l_acromioclavicular";
ROUTE1711.toField = "set_rotation";
browser.currentScene.children[195] = ROUTE1711;

let ROUTE1712 = browser.currentScene.createNode("ROUTE");
ROUTE1712.fromNode = "Yaw_r_sternoclavicularRoll";
ROUTE1712.fromField = "value_changed";
ROUTE1712.toNode = "hanim_r_sternoclavicular";
ROUTE1712.toField = "set_rotation";
browser.currentScene.children[196] = ROUTE1712;

let ROUTE1713 = browser.currentScene.createNode("ROUTE");
ROUTE1713.fromNode = "Yaw_r_acromioclavicularRoll";
ROUTE1713.fromField = "value_changed";
ROUTE1713.toNode = "hanim_r_acromioclavicular";
ROUTE1713.toField = "set_rotation";
browser.currentScene.children[197] = ROUTE1713;

let ROUTE1714 = browser.currentScene.createNode("ROUTE");
ROUTE1714.fromNode = "Yaw_r_metatarsalPitch";
ROUTE1714.fromField = "value_changed";
ROUTE1714.toNode = "hanim_l_metatarsal";
ROUTE1714.toField = "set_rotation";
browser.currentScene.children[198] = ROUTE1714;

let ROUTE1715 = browser.currentScene.createNode("ROUTE");
ROUTE1715.fromNode = "Yaw_r_metatarsalPitch";
ROUTE1715.fromField = "value_changed";
ROUTE1715.toNode = "hanim_r_metatarsal";
ROUTE1715.toField = "set_rotation";
browser.currentScene.children[199] = ROUTE1715;

let ROUTE1716 = browser.currentScene.createNode("ROUTE");
ROUTE1716.fromNode = "Yaw_sacroiliacYaw";
ROUTE1716.fromField = "value_changed";
ROUTE1716.toNode = "hanim_sacroiliac";
ROUTE1716.toField = "set_rotation";
browser.currentScene.children[200] = ROUTE1716;

let ROUTE1717 = browser.currentScene.createNode("ROUTE");
ROUTE1717.fromNode = "Yaw_vl5Yaw";
ROUTE1717.fromField = "value_changed";
ROUTE1717.toNode = "hanim_vl5";
ROUTE1717.toField = "set_rotation";
browser.currentScene.children[201] = ROUTE1717;

let ROUTE1718 = browser.currentScene.createNode("ROUTE");
ROUTE1718.fromNode = "Yaw_vc6Yaw";
ROUTE1718.fromField = "value_changed";
ROUTE1718.toNode = "hanim_vc6";
ROUTE1718.toField = "set_rotation";
browser.currentScene.children[202] = ROUTE1718;

let ROUTE1719 = browser.currentScene.createNode("ROUTE");
ROUTE1719.fromNode = "Yaw_l_thumb1Pitch";
ROUTE1719.fromField = "value_changed";
ROUTE1719.toNode = "hanim_l_thumb1";
ROUTE1719.toField = "set_rotation";
browser.currentScene.children[203] = ROUTE1719;

let ROUTE1720 = browser.currentScene.createNode("ROUTE");
ROUTE1720.fromNode = "Yaw_r_thumb1Pitch";
ROUTE1720.fromField = "value_changed";
ROUTE1720.toNode = "hanim_r_thumb1";
ROUTE1720.toField = "set_rotation";
browser.currentScene.children[204] = ROUTE1720;

let ROUTE1721 = browser.currentScene.createNode("ROUTE");
ROUTE1721.fromNode = "RollTimer";
ROUTE1721.fromField = "fraction_changed";
ROUTE1721.toNode = "Rolls_r_ankleRotInterp";
ROUTE1721.toField = "set_fraction";
browser.currentScene.children[205] = ROUTE1721;

let ROUTE1722 = browser.currentScene.createNode("ROUTE");
ROUTE1722.fromNode = "RollTimer";
ROUTE1722.fromField = "fraction_changed";
ROUTE1722.toNode = "Rolls_r_kneeRotInterp";
ROUTE1722.toField = "set_fraction";
browser.currentScene.children[206] = ROUTE1722;

let ROUTE1723 = browser.currentScene.createNode("ROUTE");
ROUTE1723.fromNode = "RollTimer";
ROUTE1723.fromField = "fraction_changed";
ROUTE1723.toNode = "Rolls_r_hipRotInterp";
ROUTE1723.toField = "set_fraction";
browser.currentScene.children[207] = ROUTE1723;

let ROUTE1724 = browser.currentScene.createNode("ROUTE");
ROUTE1724.fromNode = "RollTimer";
ROUTE1724.fromField = "fraction_changed";
ROUTE1724.toNode = "Rolls_l_ankleRotInterp";
ROUTE1724.toField = "set_fraction";
browser.currentScene.children[208] = ROUTE1724;

let ROUTE1725 = browser.currentScene.createNode("ROUTE");
ROUTE1725.fromNode = "RollTimer";
ROUTE1725.fromField = "fraction_changed";
ROUTE1725.toNode = "Rolls_l_kneeRotInterp";
ROUTE1725.toField = "set_fraction";
browser.currentScene.children[209] = ROUTE1725;

let ROUTE1726 = browser.currentScene.createNode("ROUTE");
ROUTE1726.fromNode = "RollTimer";
ROUTE1726.fromField = "fraction_changed";
ROUTE1726.toNode = "Rolls_l_hipRotInterp";
ROUTE1726.toField = "set_fraction";
browser.currentScene.children[210] = ROUTE1726;

let ROUTE1727 = browser.currentScene.createNode("ROUTE");
ROUTE1727.fromNode = "RollTimer";
ROUTE1727.fromField = "fraction_changed";
ROUTE1727.toNode = "Rolls_lower_bodyRotInterp";
ROUTE1727.toField = "set_fraction";
browser.currentScene.children[211] = ROUTE1727;

let ROUTE1728 = browser.currentScene.createNode("ROUTE");
ROUTE1728.fromNode = "RollTimer";
ROUTE1728.fromField = "fraction_changed";
ROUTE1728.toNode = "Rolls_r_wristRotInterp";
ROUTE1728.toField = "set_fraction";
browser.currentScene.children[212] = ROUTE1728;

let ROUTE1729 = browser.currentScene.createNode("ROUTE");
ROUTE1729.fromNode = "RollTimer";
ROUTE1729.fromField = "fraction_changed";
ROUTE1729.toNode = "Rolls_r_elbowRotInterp";
ROUTE1729.toField = "set_fraction";
browser.currentScene.children[213] = ROUTE1729;

let ROUTE1730 = browser.currentScene.createNode("ROUTE");
ROUTE1730.fromNode = "RollTimer";
ROUTE1730.fromField = "fraction_changed";
ROUTE1730.toNode = "Rolls_r_shoulderRotInterp";
ROUTE1730.toField = "set_fraction";
browser.currentScene.children[214] = ROUTE1730;

let ROUTE1731 = browser.currentScene.createNode("ROUTE");
ROUTE1731.fromNode = "RollTimer";
ROUTE1731.fromField = "fraction_changed";
ROUTE1731.toNode = "Rolls_l_wristRotInterp";
ROUTE1731.toField = "set_fraction";
browser.currentScene.children[215] = ROUTE1731;

let ROUTE1732 = browser.currentScene.createNode("ROUTE");
ROUTE1732.fromNode = "RollTimer";
ROUTE1732.fromField = "fraction_changed";
ROUTE1732.toNode = "Rolls_l_elbowRotInterp";
ROUTE1732.toField = "set_fraction";
browser.currentScene.children[216] = ROUTE1732;

let ROUTE1733 = browser.currentScene.createNode("ROUTE");
ROUTE1733.fromNode = "RollTimer";
ROUTE1733.fromField = "fraction_changed";
ROUTE1733.toNode = "Rolls_l_shoulderRotInterp";
ROUTE1733.toField = "set_fraction";
browser.currentScene.children[217] = ROUTE1733;

let ROUTE1734 = browser.currentScene.createNode("ROUTE");
ROUTE1734.fromNode = "RollTimer";
ROUTE1734.fromField = "fraction_changed";
ROUTE1734.toNode = "Rolls_headRotInterp";
ROUTE1734.toField = "set_fraction";
browser.currentScene.children[218] = ROUTE1734;

let ROUTE1735 = browser.currentScene.createNode("ROUTE");
ROUTE1735.fromNode = "RollTimer";
ROUTE1735.fromField = "fraction_changed";
ROUTE1735.toNode = "Rolls_neckRotInterp";
ROUTE1735.toField = "set_fraction";
browser.currentScene.children[219] = ROUTE1735;

let ROUTE1736 = browser.currentScene.createNode("ROUTE");
ROUTE1736.fromNode = "RollTimer";
ROUTE1736.fromField = "fraction_changed";
ROUTE1736.toNode = "Rolls_upper_bodyRotInterp";
ROUTE1736.toField = "set_fraction";
browser.currentScene.children[220] = ROUTE1736;

let ROUTE1737 = browser.currentScene.createNode("ROUTE");
ROUTE1737.fromNode = "RollTimer";
ROUTE1737.fromField = "fraction_changed";
ROUTE1737.toNode = "Rolls_whole_bodyRotInterp";
ROUTE1737.toField = "set_fraction";
browser.currentScene.children[221] = ROUTE1737;

let ROUTE1738 = browser.currentScene.createNode("ROUTE");
ROUTE1738.fromNode = "RollTimer";
ROUTE1738.fromField = "fraction_changed";
ROUTE1738.toNode = "Rolls_whole_bodyTransInterp";
ROUTE1738.toField = "set_fraction";
browser.currentScene.children[222] = ROUTE1738;

let ROUTE1739 = browser.currentScene.createNode("ROUTE");
ROUTE1739.fromNode = "RollTimer";
ROUTE1739.fromField = "fraction_changed";
ROUTE1739.toNode = "Roll_l_sternoclavicularRoll";
ROUTE1739.toField = "set_fraction";
browser.currentScene.children[223] = ROUTE1739;

let ROUTE1740 = browser.currentScene.createNode("ROUTE");
ROUTE1740.fromNode = "RollTimer";
ROUTE1740.fromField = "fraction_changed";
ROUTE1740.toNode = "Roll_l_acromioclavicularRoll";
ROUTE1740.toField = "set_fraction";
browser.currentScene.children[224] = ROUTE1740;

let ROUTE1741 = browser.currentScene.createNode("ROUTE");
ROUTE1741.fromNode = "RollTimer";
ROUTE1741.fromField = "fraction_changed";
ROUTE1741.toNode = "Roll_r_sternoclavicularRoll";
ROUTE1741.toField = "set_fraction";
browser.currentScene.children[225] = ROUTE1741;

let ROUTE1742 = browser.currentScene.createNode("ROUTE");
ROUTE1742.fromNode = "RollTimer";
ROUTE1742.fromField = "fraction_changed";
ROUTE1742.toNode = "Roll_r_acromioclavicularRoll";
ROUTE1742.toField = "set_fraction";
browser.currentScene.children[226] = ROUTE1742;

let ROUTE1743 = browser.currentScene.createNode("ROUTE");
ROUTE1743.fromNode = "RollTimer";
ROUTE1743.fromField = "fraction_changed";
ROUTE1743.toNode = "Roll_r_metatarsalPitch";
ROUTE1743.toField = "set_fraction";
browser.currentScene.children[227] = ROUTE1743;

let ROUTE1744 = browser.currentScene.createNode("ROUTE");
ROUTE1744.fromNode = "RollTimer";
ROUTE1744.fromField = "fraction_changed";
ROUTE1744.toNode = "Roll_sacroiliacYaw";
ROUTE1744.toField = "set_fraction";
browser.currentScene.children[228] = ROUTE1744;

let ROUTE1745 = browser.currentScene.createNode("ROUTE");
ROUTE1745.fromNode = "RollTimer";
ROUTE1745.fromField = "fraction_changed";
ROUTE1745.toNode = "Roll_vl5Yaw";
ROUTE1745.toField = "set_fraction";
browser.currentScene.children[229] = ROUTE1745;

let ROUTE1746 = browser.currentScene.createNode("ROUTE");
ROUTE1746.fromNode = "RollTimer";
ROUTE1746.fromField = "fraction_changed";
ROUTE1746.toNode = "Roll_vc6Yaw";
ROUTE1746.toField = "set_fraction";
browser.currentScene.children[230] = ROUTE1746;

let ROUTE1747 = browser.currentScene.createNode("ROUTE");
ROUTE1747.fromNode = "RollTimer";
ROUTE1747.fromField = "fraction_changed";
ROUTE1747.toNode = "Roll_l_thumb1Pitch";
ROUTE1747.toField = "set_fraction";
browser.currentScene.children[231] = ROUTE1747;

let ROUTE1748 = browser.currentScene.createNode("ROUTE");
ROUTE1748.fromNode = "RollTimer";
ROUTE1748.fromField = "fraction_changed";
ROUTE1748.toNode = "Roll_r_thumb1Pitch";
ROUTE1748.toField = "set_fraction";
browser.currentScene.children[232] = ROUTE1748;

let ROUTE1749 = browser.currentScene.createNode("ROUTE");
ROUTE1749.fromNode = "Rolls_r_ankleRotInterp";
ROUTE1749.fromField = "value_changed";
ROUTE1749.toNode = "hanim_r_ankle";
ROUTE1749.toField = "set_rotation";
browser.currentScene.children[233] = ROUTE1749;

let ROUTE1750 = browser.currentScene.createNode("ROUTE");
ROUTE1750.fromNode = "Rolls_r_kneeRotInterp";
ROUTE1750.fromField = "value_changed";
ROUTE1750.toNode = "hanim_r_knee";
ROUTE1750.toField = "set_rotation";
browser.currentScene.children[234] = ROUTE1750;

let ROUTE1751 = browser.currentScene.createNode("ROUTE");
ROUTE1751.fromNode = "Rolls_r_hipRotInterp";
ROUTE1751.fromField = "value_changed";
ROUTE1751.toNode = "hanim_r_hip";
ROUTE1751.toField = "set_rotation";
browser.currentScene.children[235] = ROUTE1751;

let ROUTE1752 = browser.currentScene.createNode("ROUTE");
ROUTE1752.fromNode = "Rolls_l_ankleRotInterp";
ROUTE1752.fromField = "value_changed";
ROUTE1752.toNode = "hanim_l_ankle";
ROUTE1752.toField = "set_rotation";
browser.currentScene.children[236] = ROUTE1752;

let ROUTE1753 = browser.currentScene.createNode("ROUTE");
ROUTE1753.fromNode = "Rolls_l_kneeRotInterp";
ROUTE1753.fromField = "value_changed";
ROUTE1753.toNode = "hanim_l_knee";
ROUTE1753.toField = "set_rotation";
browser.currentScene.children[237] = ROUTE1753;

let ROUTE1754 = browser.currentScene.createNode("ROUTE");
ROUTE1754.fromNode = "Rolls_l_hipRotInterp";
ROUTE1754.fromField = "value_changed";
ROUTE1754.toNode = "hanim_l_hip";
ROUTE1754.toField = "set_rotation";
browser.currentScene.children[238] = ROUTE1754;

let ROUTE1755 = browser.currentScene.createNode("ROUTE");
ROUTE1755.fromNode = "Rolls_lower_bodyRotInterp";
ROUTE1755.fromField = "value_changed";
ROUTE1755.toNode = "hanim_sacroiliac";
ROUTE1755.toField = "set_rotation";
browser.currentScene.children[239] = ROUTE1755;

let ROUTE1756 = browser.currentScene.createNode("ROUTE");
ROUTE1756.fromNode = "Rolls_r_wristRotInterp";
ROUTE1756.fromField = "value_changed";
ROUTE1756.toNode = "hanim_r_wrist";
ROUTE1756.toField = "set_rotation";
browser.currentScene.children[240] = ROUTE1756;

let ROUTE1757 = browser.currentScene.createNode("ROUTE");
ROUTE1757.fromNode = "Rolls_r_elbowRotInterp";
ROUTE1757.fromField = "value_changed";
ROUTE1757.toNode = "hanim_r_elbow";
ROUTE1757.toField = "set_rotation";
browser.currentScene.children[241] = ROUTE1757;

let ROUTE1758 = browser.currentScene.createNode("ROUTE");
ROUTE1758.fromNode = "Rolls_r_shoulderRotInterp";
ROUTE1758.fromField = "value_changed";
ROUTE1758.toNode = "hanim_r_shoulder";
ROUTE1758.toField = "set_rotation";
browser.currentScene.children[242] = ROUTE1758;

let ROUTE1759 = browser.currentScene.createNode("ROUTE");
ROUTE1759.fromNode = "Rolls_l_wristRotInterp";
ROUTE1759.fromField = "value_changed";
ROUTE1759.toNode = "hanim_l_wrist";
ROUTE1759.toField = "set_rotation";
browser.currentScene.children[243] = ROUTE1759;

let ROUTE1760 = browser.currentScene.createNode("ROUTE");
ROUTE1760.fromNode = "Rolls_l_elbowRotInterp";
ROUTE1760.fromField = "value_changed";
ROUTE1760.toNode = "hanim_l_elbow";
ROUTE1760.toField = "set_rotation";
browser.currentScene.children[244] = ROUTE1760;

let ROUTE1761 = browser.currentScene.createNode("ROUTE");
ROUTE1761.fromNode = "Rolls_l_shoulderRotInterp";
ROUTE1761.fromField = "value_changed";
ROUTE1761.toNode = "hanim_l_shoulder";
ROUTE1761.toField = "set_rotation";
browser.currentScene.children[245] = ROUTE1761;

let ROUTE1762 = browser.currentScene.createNode("ROUTE");
ROUTE1762.fromNode = "Rolls_headRotInterp";
ROUTE1762.fromField = "value_changed";
ROUTE1762.toNode = "hanim_skullbase";
ROUTE1762.toField = "set_rotation";
browser.currentScene.children[246] = ROUTE1762;

let ROUTE1763 = browser.currentScene.createNode("ROUTE");
ROUTE1763.fromNode = "Rolls_neckRotInterp";
ROUTE1763.fromField = "value_changed";
ROUTE1763.toNode = "hanim_vc4";
ROUTE1763.toField = "set_rotation";
browser.currentScene.children[247] = ROUTE1763;

let ROUTE1764 = browser.currentScene.createNode("ROUTE");
ROUTE1764.fromNode = "Rolls_upper_bodyRotInterp";
ROUTE1764.fromField = "value_changed";
ROUTE1764.toNode = "hanim_vl1";
ROUTE1764.toField = "set_rotation";
browser.currentScene.children[248] = ROUTE1764;

let ROUTE1765 = browser.currentScene.createNode("ROUTE");
ROUTE1765.fromNode = "Rolls_whole_bodyRotInterp";
ROUTE1765.fromField = "value_changed";
ROUTE1765.toNode = "hanim_HumanoidRoot";
ROUTE1765.toField = "set_rotation";
browser.currentScene.children[249] = ROUTE1765;

let ROUTE1766 = browser.currentScene.createNode("ROUTE");
ROUTE1766.fromNode = "Rolls_whole_bodyTransInterp";
ROUTE1766.fromField = "value_changed";
ROUTE1766.toNode = "hanim_HumanoidRoot";
ROUTE1766.toField = "set_translation";
browser.currentScene.children[250] = ROUTE1766;

let ROUTE1767 = browser.currentScene.createNode("ROUTE");
ROUTE1767.fromNode = "Roll_l_sternoclavicularRoll";
ROUTE1767.fromField = "value_changed";
ROUTE1767.toNode = "hanim_l_sternoclavicular";
ROUTE1767.toField = "set_rotation";
browser.currentScene.children[251] = ROUTE1767;

let ROUTE1768 = browser.currentScene.createNode("ROUTE");
ROUTE1768.fromNode = "Roll_l_acromioclavicularRoll";
ROUTE1768.fromField = "value_changed";
ROUTE1768.toNode = "hanim_l_acromioclavicular";
ROUTE1768.toField = "set_rotation";
browser.currentScene.children[252] = ROUTE1768;

let ROUTE1769 = browser.currentScene.createNode("ROUTE");
ROUTE1769.fromNode = "Roll_r_sternoclavicularRoll";
ROUTE1769.fromField = "value_changed";
ROUTE1769.toNode = "hanim_r_sternoclavicular";
ROUTE1769.toField = "set_rotation";
browser.currentScene.children[253] = ROUTE1769;

let ROUTE1770 = browser.currentScene.createNode("ROUTE");
ROUTE1770.fromNode = "Roll_r_acromioclavicularRoll";
ROUTE1770.fromField = "value_changed";
ROUTE1770.toNode = "hanim_r_acromioclavicular";
ROUTE1770.toField = "set_rotation";
browser.currentScene.children[254] = ROUTE1770;

let ROUTE1771 = browser.currentScene.createNode("ROUTE");
ROUTE1771.fromNode = "Roll_r_metatarsalPitch";
ROUTE1771.fromField = "value_changed";
ROUTE1771.toNode = "hanim_l_metatarsal";
ROUTE1771.toField = "set_rotation";
browser.currentScene.children[255] = ROUTE1771;

let ROUTE1772 = browser.currentScene.createNode("ROUTE");
ROUTE1772.fromNode = "Roll_r_metatarsalPitch";
ROUTE1772.fromField = "value_changed";
ROUTE1772.toNode = "hanim_r_metatarsal";
ROUTE1772.toField = "set_rotation";
browser.currentScene.children[256] = ROUTE1772;

let ROUTE1773 = browser.currentScene.createNode("ROUTE");
ROUTE1773.fromNode = "Roll_sacroiliacYaw";
ROUTE1773.fromField = "value_changed";
ROUTE1773.toNode = "hanim_sacroiliac";
ROUTE1773.toField = "set_rotation";
browser.currentScene.children[257] = ROUTE1773;

let ROUTE1774 = browser.currentScene.createNode("ROUTE");
ROUTE1774.fromNode = "Roll_vl5Yaw";
ROUTE1774.fromField = "value_changed";
ROUTE1774.toNode = "hanim_vl5";
ROUTE1774.toField = "set_rotation";
browser.currentScene.children[258] = ROUTE1774;

let ROUTE1775 = browser.currentScene.createNode("ROUTE");
ROUTE1775.fromNode = "Roll_vc6Yaw";
ROUTE1775.fromField = "value_changed";
ROUTE1775.toNode = "hanim_vc6";
ROUTE1775.toField = "set_rotation";
browser.currentScene.children[259] = ROUTE1775;

let ROUTE1776 = browser.currentScene.createNode("ROUTE");
ROUTE1776.fromNode = "Roll_l_thumb1Pitch";
ROUTE1776.fromField = "value_changed";
ROUTE1776.toNode = "hanim_l_thumb1";
ROUTE1776.toField = "set_rotation";
browser.currentScene.children[260] = ROUTE1776;

let ROUTE1777 = browser.currentScene.createNode("ROUTE");
ROUTE1777.fromNode = "Roll_r_thumb1Pitch";
ROUTE1777.fromField = "value_changed";
ROUTE1777.toNode = "hanim_r_thumb1";
ROUTE1777.toField = "set_rotation";
browser.currentScene.children[261] = ROUTE1777;

let ROUTE1778 = browser.currentScene.createNode("ROUTE");
ROUTE1778.fromNode = "WalkTimer";
ROUTE1778.fromField = "fraction_changed";
ROUTE1778.toNode = "Walk_r_ankleRotInterp";
ROUTE1778.toField = "set_fraction";
browser.currentScene.children[262] = ROUTE1778;

let ROUTE1779 = browser.currentScene.createNode("ROUTE");
ROUTE1779.fromNode = "WalkTimer";
ROUTE1779.fromField = "fraction_changed";
ROUTE1779.toNode = "Walk_r_kneeRotInterp";
ROUTE1779.toField = "set_fraction";
browser.currentScene.children[263] = ROUTE1779;

let ROUTE1780 = browser.currentScene.createNode("ROUTE");
ROUTE1780.fromNode = "WalkTimer";
ROUTE1780.fromField = "fraction_changed";
ROUTE1780.toNode = "Walk_r_hipRotInterp";
ROUTE1780.toField = "set_fraction";
browser.currentScene.children[264] = ROUTE1780;

let ROUTE1781 = browser.currentScene.createNode("ROUTE");
ROUTE1781.fromNode = "WalkTimer";
ROUTE1781.fromField = "fraction_changed";
ROUTE1781.toNode = "Walk_l_ankleRotInterp";
ROUTE1781.toField = "set_fraction";
browser.currentScene.children[265] = ROUTE1781;

let ROUTE1782 = browser.currentScene.createNode("ROUTE");
ROUTE1782.fromNode = "WalkTimer";
ROUTE1782.fromField = "fraction_changed";
ROUTE1782.toNode = "Walk_l_kneeRotInterp";
ROUTE1782.toField = "set_fraction";
browser.currentScene.children[266] = ROUTE1782;

let ROUTE1783 = browser.currentScene.createNode("ROUTE");
ROUTE1783.fromNode = "WalkTimer";
ROUTE1783.fromField = "fraction_changed";
ROUTE1783.toNode = "Walk_l_hipRotInterp";
ROUTE1783.toField = "set_fraction";
browser.currentScene.children[267] = ROUTE1783;

let ROUTE1784 = browser.currentScene.createNode("ROUTE");
ROUTE1784.fromNode = "WalkTimer";
ROUTE1784.fromField = "fraction_changed";
ROUTE1784.toNode = "Walk_lower_bodyRotInterp";
ROUTE1784.toField = "set_fraction";
browser.currentScene.children[268] = ROUTE1784;

let ROUTE1785 = browser.currentScene.createNode("ROUTE");
ROUTE1785.fromNode = "WalkTimer";
ROUTE1785.fromField = "fraction_changed";
ROUTE1785.toNode = "Walk_r_wristRotInterp";
ROUTE1785.toField = "set_fraction";
browser.currentScene.children[269] = ROUTE1785;

let ROUTE1786 = browser.currentScene.createNode("ROUTE");
ROUTE1786.fromNode = "WalkTimer";
ROUTE1786.fromField = "fraction_changed";
ROUTE1786.toNode = "Walk_r_elbowRotInterp";
ROUTE1786.toField = "set_fraction";
browser.currentScene.children[270] = ROUTE1786;

let ROUTE1787 = browser.currentScene.createNode("ROUTE");
ROUTE1787.fromNode = "WalkTimer";
ROUTE1787.fromField = "fraction_changed";
ROUTE1787.toNode = "Walk_r_shoulderRotInterp";
ROUTE1787.toField = "set_fraction";
browser.currentScene.children[271] = ROUTE1787;

let ROUTE1788 = browser.currentScene.createNode("ROUTE");
ROUTE1788.fromNode = "WalkTimer";
ROUTE1788.fromField = "fraction_changed";
ROUTE1788.toNode = "Walk_l_wristRotInterp";
ROUTE1788.toField = "set_fraction";
browser.currentScene.children[272] = ROUTE1788;

let ROUTE1789 = browser.currentScene.createNode("ROUTE");
ROUTE1789.fromNode = "WalkTimer";
ROUTE1789.fromField = "fraction_changed";
ROUTE1789.toNode = "Walk_l_elbowRotInterp";
ROUTE1789.toField = "set_fraction";
browser.currentScene.children[273] = ROUTE1789;

let ROUTE1790 = browser.currentScene.createNode("ROUTE");
ROUTE1790.fromNode = "WalkTimer";
ROUTE1790.fromField = "fraction_changed";
ROUTE1790.toNode = "Walk_l_shoulderRotInterp";
ROUTE1790.toField = "set_fraction";
browser.currentScene.children[274] = ROUTE1790;

let ROUTE1791 = browser.currentScene.createNode("ROUTE");
ROUTE1791.fromNode = "WalkTimer";
ROUTE1791.fromField = "fraction_changed";
ROUTE1791.toNode = "Walk_headRotInterp";
ROUTE1791.toField = "set_fraction";
browser.currentScene.children[275] = ROUTE1791;

let ROUTE1792 = browser.currentScene.createNode("ROUTE");
ROUTE1792.fromNode = "WalkTimer";
ROUTE1792.fromField = "fraction_changed";
ROUTE1792.toNode = "Walk_neckRotInterp";
ROUTE1792.toField = "set_fraction";
browser.currentScene.children[276] = ROUTE1792;

let ROUTE1793 = browser.currentScene.createNode("ROUTE");
ROUTE1793.fromNode = "WalkTimer";
ROUTE1793.fromField = "fraction_changed";
ROUTE1793.toNode = "Walk_upper_bodyRotInterp";
ROUTE1793.toField = "set_fraction";
browser.currentScene.children[277] = ROUTE1793;

let ROUTE1794 = browser.currentScene.createNode("ROUTE");
ROUTE1794.fromNode = "WalkTimer";
ROUTE1794.fromField = "fraction_changed";
ROUTE1794.toNode = "Walk_whole_bodyRotInterp";
ROUTE1794.toField = "set_fraction";
browser.currentScene.children[278] = ROUTE1794;

let ROUTE1795 = browser.currentScene.createNode("ROUTE");
ROUTE1795.fromNode = "WalkTimer";
ROUTE1795.fromField = "fraction_changed";
ROUTE1795.toNode = "Walk_whole_bodyTranInterp";
ROUTE1795.toField = "set_fraction";
browser.currentScene.children[279] = ROUTE1795;

let ROUTE1796 = browser.currentScene.createNode("ROUTE");
ROUTE1796.fromNode = "WalkTimer";
ROUTE1796.fromField = "fraction_changed";
ROUTE1796.toNode = "Walk_l_sternoclavicularRoll";
ROUTE1796.toField = "set_fraction";
browser.currentScene.children[280] = ROUTE1796;

let ROUTE1797 = browser.currentScene.createNode("ROUTE");
ROUTE1797.fromNode = "WalkTimer";
ROUTE1797.fromField = "fraction_changed";
ROUTE1797.toNode = "Walk_l_acromioclavicularRoll";
ROUTE1797.toField = "set_fraction";
browser.currentScene.children[281] = ROUTE1797;

let ROUTE1798 = browser.currentScene.createNode("ROUTE");
ROUTE1798.fromNode = "WalkTimer";
ROUTE1798.fromField = "fraction_changed";
ROUTE1798.toNode = "Walk_r_sternoclavicularRoll";
ROUTE1798.toField = "set_fraction";
browser.currentScene.children[282] = ROUTE1798;

let ROUTE1799 = browser.currentScene.createNode("ROUTE");
ROUTE1799.fromNode = "WalkTimer";
ROUTE1799.fromField = "fraction_changed";
ROUTE1799.toNode = "Walk_r_acromioclavicularRoll";
ROUTE1799.toField = "set_fraction";
browser.currentScene.children[283] = ROUTE1799;

let ROUTE1800 = browser.currentScene.createNode("ROUTE");
ROUTE1800.fromNode = "WalkTimer";
ROUTE1800.fromField = "fraction_changed";
ROUTE1800.toNode = "Walk_r_metatarsalPitch";
ROUTE1800.toField = "set_fraction";
browser.currentScene.children[284] = ROUTE1800;

let ROUTE1801 = browser.currentScene.createNode("ROUTE");
ROUTE1801.fromNode = "WalkTimer";
ROUTE1801.fromField = "fraction_changed";
ROUTE1801.toNode = "Walk_sacroiliacYaw";
ROUTE1801.toField = "set_fraction";
browser.currentScene.children[285] = ROUTE1801;

let ROUTE1802 = browser.currentScene.createNode("ROUTE");
ROUTE1802.fromNode = "WalkTimer";
ROUTE1802.fromField = "fraction_changed";
ROUTE1802.toNode = "Walk_vl5Yaw";
ROUTE1802.toField = "set_fraction";
browser.currentScene.children[286] = ROUTE1802;

let ROUTE1803 = browser.currentScene.createNode("ROUTE");
ROUTE1803.fromNode = "WalkTimer";
ROUTE1803.fromField = "fraction_changed";
ROUTE1803.toNode = "Walk_vc6Yaw";
ROUTE1803.toField = "set_fraction";
browser.currentScene.children[287] = ROUTE1803;

let ROUTE1804 = browser.currentScene.createNode("ROUTE");
ROUTE1804.fromNode = "WalkTimer";
ROUTE1804.fromField = "fraction_changed";
ROUTE1804.toNode = "Walk_l_thumb1Pitch";
ROUTE1804.toField = "set_fraction";
browser.currentScene.children[288] = ROUTE1804;

let ROUTE1805 = browser.currentScene.createNode("ROUTE");
ROUTE1805.fromNode = "WalkTimer";
ROUTE1805.fromField = "fraction_changed";
ROUTE1805.toNode = "Walk_r_thumb1Pitch";
ROUTE1805.toField = "set_fraction";
browser.currentScene.children[289] = ROUTE1805;

let ROUTE1806 = browser.currentScene.createNode("ROUTE");
ROUTE1806.fromNode = "Walk_r_ankleRotInterp";
ROUTE1806.fromField = "value_changed";
ROUTE1806.toNode = "hanim_r_ankle";
ROUTE1806.toField = "set_rotation";
browser.currentScene.children[290] = ROUTE1806;

let ROUTE1807 = browser.currentScene.createNode("ROUTE");
ROUTE1807.fromNode = "Walk_r_kneeRotInterp";
ROUTE1807.fromField = "value_changed";
ROUTE1807.toNode = "hanim_r_knee";
ROUTE1807.toField = "set_rotation";
browser.currentScene.children[291] = ROUTE1807;

let ROUTE1808 = browser.currentScene.createNode("ROUTE");
ROUTE1808.fromNode = "Walk_r_hipRotInterp";
ROUTE1808.fromField = "value_changed";
ROUTE1808.toNode = "hanim_r_hip";
ROUTE1808.toField = "set_rotation";
browser.currentScene.children[292] = ROUTE1808;

let ROUTE1809 = browser.currentScene.createNode("ROUTE");
ROUTE1809.fromNode = "Walk_l_ankleRotInterp";
ROUTE1809.fromField = "value_changed";
ROUTE1809.toNode = "hanim_l_ankle";
ROUTE1809.toField = "set_rotation";
browser.currentScene.children[293] = ROUTE1809;

let ROUTE1810 = browser.currentScene.createNode("ROUTE");
ROUTE1810.fromNode = "Walk_l_kneeRotInterp";
ROUTE1810.fromField = "value_changed";
ROUTE1810.toNode = "hanim_l_knee";
ROUTE1810.toField = "set_rotation";
browser.currentScene.children[294] = ROUTE1810;

let ROUTE1811 = browser.currentScene.createNode("ROUTE");
ROUTE1811.fromNode = "Walk_l_hipRotInterp";
ROUTE1811.fromField = "value_changed";
ROUTE1811.toNode = "hanim_l_hip";
ROUTE1811.toField = "set_rotation";
browser.currentScene.children[295] = ROUTE1811;

let ROUTE1812 = browser.currentScene.createNode("ROUTE");
ROUTE1812.fromNode = "Walk_lower_bodyRotInterp";
ROUTE1812.fromField = "value_changed";
ROUTE1812.toNode = "hanim_sacroiliac";
ROUTE1812.toField = "set_rotation";
browser.currentScene.children[296] = ROUTE1812;

let ROUTE1813 = browser.currentScene.createNode("ROUTE");
ROUTE1813.fromNode = "Walk_r_wristRotInterp";
ROUTE1813.fromField = "value_changed";
ROUTE1813.toNode = "hanim_r_wrist";
ROUTE1813.toField = "set_rotation";
browser.currentScene.children[297] = ROUTE1813;

let ROUTE1814 = browser.currentScene.createNode("ROUTE");
ROUTE1814.fromNode = "Walk_r_elbowRotInterp";
ROUTE1814.fromField = "value_changed";
ROUTE1814.toNode = "hanim_r_elbow";
ROUTE1814.toField = "set_rotation";
browser.currentScene.children[298] = ROUTE1814;

let ROUTE1815 = browser.currentScene.createNode("ROUTE");
ROUTE1815.fromNode = "Walk_r_shoulderRotInterp";
ROUTE1815.fromField = "value_changed";
ROUTE1815.toNode = "hanim_r_shoulder";
ROUTE1815.toField = "set_rotation";
browser.currentScene.children[299] = ROUTE1815;

let ROUTE1816 = browser.currentScene.createNode("ROUTE");
ROUTE1816.fromNode = "Walk_l_wristRotInterp";
ROUTE1816.fromField = "value_changed";
ROUTE1816.toNode = "hanim_l_wrist";
ROUTE1816.toField = "set_rotation";
browser.currentScene.children[300] = ROUTE1816;

let ROUTE1817 = browser.currentScene.createNode("ROUTE");
ROUTE1817.fromNode = "Walk_l_elbowRotInterp";
ROUTE1817.fromField = "value_changed";
ROUTE1817.toNode = "hanim_l_elbow";
ROUTE1817.toField = "set_rotation";
browser.currentScene.children[301] = ROUTE1817;

let ROUTE1818 = browser.currentScene.createNode("ROUTE");
ROUTE1818.fromNode = "Walk_l_shoulderRotInterp";
ROUTE1818.fromField = "value_changed";
ROUTE1818.toNode = "hanim_l_shoulder";
ROUTE1818.toField = "set_rotation";
browser.currentScene.children[302] = ROUTE1818;

let ROUTE1819 = browser.currentScene.createNode("ROUTE");
ROUTE1819.fromNode = "Walk_headRotInterp";
ROUTE1819.fromField = "value_changed";
ROUTE1819.toNode = "hanim_skullbase";
ROUTE1819.toField = "set_rotation";
browser.currentScene.children[303] = ROUTE1819;

let ROUTE1820 = browser.currentScene.createNode("ROUTE");
ROUTE1820.fromNode = "Walk_neckRotInterp";
ROUTE1820.fromField = "value_changed";
ROUTE1820.toNode = "hanim_vc4";
ROUTE1820.toField = "set_rotation";
browser.currentScene.children[304] = ROUTE1820;

let ROUTE1821 = browser.currentScene.createNode("ROUTE");
ROUTE1821.fromNode = "Walk_upper_bodyRotInterp";
ROUTE1821.fromField = "value_changed";
ROUTE1821.toNode = "hanim_vl1";
ROUTE1821.toField = "set_rotation";
browser.currentScene.children[305] = ROUTE1821;

let ROUTE1822 = browser.currentScene.createNode("ROUTE");
ROUTE1822.fromNode = "Walk_whole_bodyRotInterp";
ROUTE1822.fromField = "value_changed";
ROUTE1822.toNode = "hanim_HumanoidRoot";
ROUTE1822.toField = "set_rotation";
browser.currentScene.children[306] = ROUTE1822;

let ROUTE1823 = browser.currentScene.createNode("ROUTE");
ROUTE1823.fromNode = "Walk_whole_bodyTranInterp";
ROUTE1823.fromField = "value_changed";
ROUTE1823.toNode = "hanim_HumanoidRoot";
ROUTE1823.toField = "set_translation";
browser.currentScene.children[307] = ROUTE1823;

let ROUTE1824 = browser.currentScene.createNode("ROUTE");
ROUTE1824.fromNode = "Walk_l_sternoclavicularRoll";
ROUTE1824.fromField = "value_changed";
ROUTE1824.toNode = "hanim_l_sternoclavicular";
ROUTE1824.toField = "set_rotation";
browser.currentScene.children[308] = ROUTE1824;

let ROUTE1825 = browser.currentScene.createNode("ROUTE");
ROUTE1825.fromNode = "Walk_l_acromioclavicularRoll";
ROUTE1825.fromField = "value_changed";
ROUTE1825.toNode = "hanim_l_acromioclavicular";
ROUTE1825.toField = "set_rotation";
browser.currentScene.children[309] = ROUTE1825;

let ROUTE1826 = browser.currentScene.createNode("ROUTE");
ROUTE1826.fromNode = "Walk_r_sternoclavicularRoll";
ROUTE1826.fromField = "value_changed";
ROUTE1826.toNode = "hanim_r_sternoclavicular";
ROUTE1826.toField = "set_rotation";
browser.currentScene.children[310] = ROUTE1826;

let ROUTE1827 = browser.currentScene.createNode("ROUTE");
ROUTE1827.fromNode = "Walk_r_acromioclavicularRoll";
ROUTE1827.fromField = "value_changed";
ROUTE1827.toNode = "hanim_r_acromioclavicular";
ROUTE1827.toField = "set_rotation";
browser.currentScene.children[311] = ROUTE1827;

let ROUTE1828 = browser.currentScene.createNode("ROUTE");
ROUTE1828.fromNode = "Walk_r_metatarsalPitch";
ROUTE1828.fromField = "value_changed";
ROUTE1828.toNode = "hanim_l_metatarsal";
ROUTE1828.toField = "set_rotation";
browser.currentScene.children[312] = ROUTE1828;

let ROUTE1829 = browser.currentScene.createNode("ROUTE");
ROUTE1829.fromNode = "Walk_r_metatarsalPitch";
ROUTE1829.fromField = "value_changed";
ROUTE1829.toNode = "hanim_r_metatarsal";
ROUTE1829.toField = "set_rotation";
browser.currentScene.children[313] = ROUTE1829;

let ROUTE1830 = browser.currentScene.createNode("ROUTE");
ROUTE1830.fromNode = "Walk_sacroiliacYaw";
ROUTE1830.fromField = "value_changed";
ROUTE1830.toNode = "hanim_sacroiliac";
ROUTE1830.toField = "set_rotation";
browser.currentScene.children[314] = ROUTE1830;

let ROUTE1831 = browser.currentScene.createNode("ROUTE");
ROUTE1831.fromNode = "Walk_vl5Yaw";
ROUTE1831.fromField = "value_changed";
ROUTE1831.toNode = "hanim_vl5";
ROUTE1831.toField = "set_rotation";
browser.currentScene.children[315] = ROUTE1831;

let ROUTE1832 = browser.currentScene.createNode("ROUTE");
ROUTE1832.fromNode = "Walk_vc6Yaw";
ROUTE1832.fromField = "value_changed";
ROUTE1832.toNode = "hanim_vc6";
ROUTE1832.toField = "set_rotation";
browser.currentScene.children[316] = ROUTE1832;

let ROUTE1833 = browser.currentScene.createNode("ROUTE");
ROUTE1833.fromNode = "Walk_l_thumb1Pitch";
ROUTE1833.fromField = "value_changed";
ROUTE1833.toNode = "hanim_l_thumb1";
ROUTE1833.toField = "set_rotation";
browser.currentScene.children[317] = ROUTE1833;

let ROUTE1834 = browser.currentScene.createNode("ROUTE");
ROUTE1834.fromNode = "Walk_r_thumb1Pitch";
ROUTE1834.fromField = "value_changed";
ROUTE1834.toNode = "hanim_r_thumb1";
ROUTE1834.toField = "set_rotation";
browser.currentScene.children[318] = ROUTE1834;

let ROUTE1835 = browser.currentScene.createNode("ROUTE");
ROUTE1835.fromNode = "RunTimer";
ROUTE1835.fromField = "fraction_changed";
ROUTE1835.toNode = "Run_r_ankleRotInterp_Run";
ROUTE1835.toField = "set_fraction";
browser.currentScene.children[319] = ROUTE1835;

let ROUTE1836 = browser.currentScene.createNode("ROUTE");
ROUTE1836.fromNode = "RunTimer";
ROUTE1836.fromField = "fraction_changed";
ROUTE1836.toNode = "Run_r_kneeRotInterp_Run";
ROUTE1836.toField = "set_fraction";
browser.currentScene.children[320] = ROUTE1836;

let ROUTE1837 = browser.currentScene.createNode("ROUTE");
ROUTE1837.fromNode = "RunTimer";
ROUTE1837.fromField = "fraction_changed";
ROUTE1837.toNode = "Run_r_hipRotInterp_Run";
ROUTE1837.toField = "set_fraction";
browser.currentScene.children[321] = ROUTE1837;

let ROUTE1838 = browser.currentScene.createNode("ROUTE");
ROUTE1838.fromNode = "RunTimer";
ROUTE1838.fromField = "fraction_changed";
ROUTE1838.toNode = "Run_l_ankleRotInterp_Run";
ROUTE1838.toField = "set_fraction";
browser.currentScene.children[322] = ROUTE1838;

let ROUTE1839 = browser.currentScene.createNode("ROUTE");
ROUTE1839.fromNode = "RunTimer";
ROUTE1839.fromField = "fraction_changed";
ROUTE1839.toNode = "Run_l_kneeRotInterp_Run";
ROUTE1839.toField = "set_fraction";
browser.currentScene.children[323] = ROUTE1839;

let ROUTE1840 = browser.currentScene.createNode("ROUTE");
ROUTE1840.fromNode = "RunTimer";
ROUTE1840.fromField = "fraction_changed";
ROUTE1840.toNode = "Run_l_hipRotInterp_Run";
ROUTE1840.toField = "set_fraction";
browser.currentScene.children[324] = ROUTE1840;

let ROUTE1841 = browser.currentScene.createNode("ROUTE");
ROUTE1841.fromNode = "RunTimer";
ROUTE1841.fromField = "fraction_changed";
ROUTE1841.toNode = "Run_lower_bodyRotInterp_Run";
ROUTE1841.toField = "set_fraction";
browser.currentScene.children[325] = ROUTE1841;

let ROUTE1842 = browser.currentScene.createNode("ROUTE");
ROUTE1842.fromNode = "RunTimer";
ROUTE1842.fromField = "fraction_changed";
ROUTE1842.toNode = "Run_r_wristRotInterp_Run";
ROUTE1842.toField = "set_fraction";
browser.currentScene.children[326] = ROUTE1842;

let ROUTE1843 = browser.currentScene.createNode("ROUTE");
ROUTE1843.fromNode = "RunTimer";
ROUTE1843.fromField = "fraction_changed";
ROUTE1843.toNode = "Run_r_elbowRotInterp_Run";
ROUTE1843.toField = "set_fraction";
browser.currentScene.children[327] = ROUTE1843;

let ROUTE1844 = browser.currentScene.createNode("ROUTE");
ROUTE1844.fromNode = "RunTimer";
ROUTE1844.fromField = "fraction_changed";
ROUTE1844.toNode = "Run_r_shoulderRotInterp_Run";
ROUTE1844.toField = "set_fraction";
browser.currentScene.children[328] = ROUTE1844;

let ROUTE1845 = browser.currentScene.createNode("ROUTE");
ROUTE1845.fromNode = "RunTimer";
ROUTE1845.fromField = "fraction_changed";
ROUTE1845.toNode = "Run_l_wristRotInterp_Run";
ROUTE1845.toField = "set_fraction";
browser.currentScene.children[329] = ROUTE1845;

let ROUTE1846 = browser.currentScene.createNode("ROUTE");
ROUTE1846.fromNode = "RunTimer";
ROUTE1846.fromField = "fraction_changed";
ROUTE1846.toNode = "Run_l_elbowRotInterp_Run";
ROUTE1846.toField = "set_fraction";
browser.currentScene.children[330] = ROUTE1846;

let ROUTE1847 = browser.currentScene.createNode("ROUTE");
ROUTE1847.fromNode = "RunTimer";
ROUTE1847.fromField = "fraction_changed";
ROUTE1847.toNode = "Run_l_shoulderRotInterp_Run";
ROUTE1847.toField = "set_fraction";
browser.currentScene.children[331] = ROUTE1847;

let ROUTE1848 = browser.currentScene.createNode("ROUTE");
ROUTE1848.fromNode = "RunTimer";
ROUTE1848.fromField = "fraction_changed";
ROUTE1848.toNode = "Run_headRotInterp_Run";
ROUTE1848.toField = "set_fraction";
browser.currentScene.children[332] = ROUTE1848;

let ROUTE1849 = browser.currentScene.createNode("ROUTE");
ROUTE1849.fromNode = "RunTimer";
ROUTE1849.fromField = "fraction_changed";
ROUTE1849.toNode = "Run_neckRotInterp_Run";
ROUTE1849.toField = "set_fraction";
browser.currentScene.children[333] = ROUTE1849;

let ROUTE1850 = browser.currentScene.createNode("ROUTE");
ROUTE1850.fromNode = "RunTimer";
ROUTE1850.fromField = "fraction_changed";
ROUTE1850.toNode = "Run_upper_bodyRotInterp_Run";
ROUTE1850.toField = "set_fraction";
browser.currentScene.children[334] = ROUTE1850;

let ROUTE1851 = browser.currentScene.createNode("ROUTE");
ROUTE1851.fromNode = "RunTimer";
ROUTE1851.fromField = "fraction_changed";
ROUTE1851.toNode = "Run_whole_bodyRotInterp_Run";
ROUTE1851.toField = "set_fraction";
browser.currentScene.children[335] = ROUTE1851;

let ROUTE1852 = browser.currentScene.createNode("ROUTE");
ROUTE1852.fromNode = "RunTimer";
ROUTE1852.fromField = "fraction_changed";
ROUTE1852.toNode = "Run_whole_bodyTranInterp_Run";
ROUTE1852.toField = "set_fraction";
browser.currentScene.children[336] = ROUTE1852;

let ROUTE1853 = browser.currentScene.createNode("ROUTE");
ROUTE1853.fromNode = "RunTimer";
ROUTE1853.fromField = "fraction_changed";
ROUTE1853.toNode = "Run_l_sternoclavicularRoll";
ROUTE1853.toField = "set_fraction";
browser.currentScene.children[337] = ROUTE1853;

let ROUTE1854 = browser.currentScene.createNode("ROUTE");
ROUTE1854.fromNode = "RunTimer";
ROUTE1854.fromField = "fraction_changed";
ROUTE1854.toNode = "Run_l_acromioclavicularRoll";
ROUTE1854.toField = "set_fraction";
browser.currentScene.children[338] = ROUTE1854;

let ROUTE1855 = browser.currentScene.createNode("ROUTE");
ROUTE1855.fromNode = "RunTimer";
ROUTE1855.fromField = "fraction_changed";
ROUTE1855.toNode = "Run_r_sternoclavicularRoll";
ROUTE1855.toField = "set_fraction";
browser.currentScene.children[339] = ROUTE1855;

let ROUTE1856 = browser.currentScene.createNode("ROUTE");
ROUTE1856.fromNode = "RunTimer";
ROUTE1856.fromField = "fraction_changed";
ROUTE1856.toNode = "Run_r_acromioclavicularRoll";
ROUTE1856.toField = "set_fraction";
browser.currentScene.children[340] = ROUTE1856;

let ROUTE1857 = browser.currentScene.createNode("ROUTE");
ROUTE1857.fromNode = "RunTimer";
ROUTE1857.fromField = "fraction_changed";
ROUTE1857.toNode = "Run_r_metatarsalPitch";
ROUTE1857.toField = "set_fraction";
browser.currentScene.children[341] = ROUTE1857;

let ROUTE1858 = browser.currentScene.createNode("ROUTE");
ROUTE1858.fromNode = "RunTimer";
ROUTE1858.fromField = "fraction_changed";
ROUTE1858.toNode = "Run_sacroiliacYaw";
ROUTE1858.toField = "set_fraction";
browser.currentScene.children[342] = ROUTE1858;

let ROUTE1859 = browser.currentScene.createNode("ROUTE");
ROUTE1859.fromNode = "RunTimer";
ROUTE1859.fromField = "fraction_changed";
ROUTE1859.toNode = "Run_vl5Yaw";
ROUTE1859.toField = "set_fraction";
browser.currentScene.children[343] = ROUTE1859;

let ROUTE1860 = browser.currentScene.createNode("ROUTE");
ROUTE1860.fromNode = "RunTimer";
ROUTE1860.fromField = "fraction_changed";
ROUTE1860.toNode = "Run_vc6Yaw";
ROUTE1860.toField = "set_fraction";
browser.currentScene.children[344] = ROUTE1860;

let ROUTE1861 = browser.currentScene.createNode("ROUTE");
ROUTE1861.fromNode = "RunTimer";
ROUTE1861.fromField = "fraction_changed";
ROUTE1861.toNode = "Run_l_thumb1Pitch";
ROUTE1861.toField = "set_fraction";
browser.currentScene.children[345] = ROUTE1861;

let ROUTE1862 = browser.currentScene.createNode("ROUTE");
ROUTE1862.fromNode = "RunTimer";
ROUTE1862.fromField = "fraction_changed";
ROUTE1862.toNode = "Run_r_thumb1Pitch";
ROUTE1862.toField = "set_fraction";
browser.currentScene.children[346] = ROUTE1862;

let ROUTE1863 = browser.currentScene.createNode("ROUTE");
ROUTE1863.fromNode = "Run_r_ankleRotInterp_Run";
ROUTE1863.fromField = "value_changed";
ROUTE1863.toNode = "hanim_r_ankle";
ROUTE1863.toField = "set_rotation";
browser.currentScene.children[347] = ROUTE1863;

let ROUTE1864 = browser.currentScene.createNode("ROUTE");
ROUTE1864.fromNode = "Run_r_kneeRotInterp_Run";
ROUTE1864.fromField = "value_changed";
ROUTE1864.toNode = "hanim_r_knee";
ROUTE1864.toField = "set_rotation";
browser.currentScene.children[348] = ROUTE1864;

let ROUTE1865 = browser.currentScene.createNode("ROUTE");
ROUTE1865.fromNode = "Run_r_hipRotInterp_Run";
ROUTE1865.fromField = "value_changed";
ROUTE1865.toNode = "hanim_r_hip";
ROUTE1865.toField = "set_rotation";
browser.currentScene.children[349] = ROUTE1865;

let ROUTE1866 = browser.currentScene.createNode("ROUTE");
ROUTE1866.fromNode = "Run_l_ankleRotInterp_Run";
ROUTE1866.fromField = "value_changed";
ROUTE1866.toNode = "hanim_l_ankle";
ROUTE1866.toField = "set_rotation";
browser.currentScene.children[350] = ROUTE1866;

let ROUTE1867 = browser.currentScene.createNode("ROUTE");
ROUTE1867.fromNode = "Run_l_kneeRotInterp_Run";
ROUTE1867.fromField = "value_changed";
ROUTE1867.toNode = "hanim_l_knee";
ROUTE1867.toField = "set_rotation";
browser.currentScene.children[351] = ROUTE1867;

let ROUTE1868 = browser.currentScene.createNode("ROUTE");
ROUTE1868.fromNode = "Run_l_hipRotInterp_Run";
ROUTE1868.fromField = "value_changed";
ROUTE1868.toNode = "hanim_l_hip";
ROUTE1868.toField = "set_rotation";
browser.currentScene.children[352] = ROUTE1868;

let ROUTE1869 = browser.currentScene.createNode("ROUTE");
ROUTE1869.fromNode = "Run_r_wristRotInterp_Run";
ROUTE1869.fromField = "value_changed";
ROUTE1869.toNode = "hanim_r_wrist";
ROUTE1869.toField = "set_rotation";
browser.currentScene.children[353] = ROUTE1869;

let ROUTE1870 = browser.currentScene.createNode("ROUTE");
ROUTE1870.fromNode = "Run_r_elbowRotInterp_Run";
ROUTE1870.fromField = "value_changed";
ROUTE1870.toNode = "hanim_r_elbow";
ROUTE1870.toField = "set_rotation";
browser.currentScene.children[354] = ROUTE1870;

let ROUTE1871 = browser.currentScene.createNode("ROUTE");
ROUTE1871.fromNode = "Run_r_shoulderRotInterp_Run";
ROUTE1871.fromField = "value_changed";
ROUTE1871.toNode = "hanim_r_shoulder";
ROUTE1871.toField = "set_rotation";
browser.currentScene.children[355] = ROUTE1871;

let ROUTE1872 = browser.currentScene.createNode("ROUTE");
ROUTE1872.fromNode = "Run_l_wristRotInterp_Run";
ROUTE1872.fromField = "value_changed";
ROUTE1872.toNode = "hanim_l_wrist";
ROUTE1872.toField = "set_rotation";
browser.currentScene.children[356] = ROUTE1872;

let ROUTE1873 = browser.currentScene.createNode("ROUTE");
ROUTE1873.fromNode = "Run_l_elbowRotInterp_Run";
ROUTE1873.fromField = "value_changed";
ROUTE1873.toNode = "hanim_l_elbow";
ROUTE1873.toField = "set_rotation";
browser.currentScene.children[357] = ROUTE1873;

let ROUTE1874 = browser.currentScene.createNode("ROUTE");
ROUTE1874.fromNode = "Run_l_shoulderRotInterp_Run";
ROUTE1874.fromField = "value_changed";
ROUTE1874.toNode = "hanim_l_shoulder";
ROUTE1874.toField = "set_rotation";
browser.currentScene.children[358] = ROUTE1874;

let ROUTE1875 = browser.currentScene.createNode("ROUTE");
ROUTE1875.fromNode = "Run_lower_bodyRotInterp_Run";
ROUTE1875.fromField = "value_changed";
ROUTE1875.toNode = "hanim_sacroiliac";
ROUTE1875.toField = "set_rotation";
browser.currentScene.children[359] = ROUTE1875;

let ROUTE1876 = browser.currentScene.createNode("ROUTE");
ROUTE1876.fromNode = "Run_headRotInterp_Run";
ROUTE1876.fromField = "value_changed";
ROUTE1876.toNode = "hanim_skullbase";
ROUTE1876.toField = "set_rotation";
browser.currentScene.children[360] = ROUTE1876;

let ROUTE1877 = browser.currentScene.createNode("ROUTE");
ROUTE1877.fromNode = "Run_neckRotInterp_Run";
ROUTE1877.fromField = "value_changed";
ROUTE1877.toNode = "hanim_vc4";
ROUTE1877.toField = "set_rotation";
browser.currentScene.children[361] = ROUTE1877;

let ROUTE1878 = browser.currentScene.createNode("ROUTE");
ROUTE1878.fromNode = "Run_upper_bodyRotInterp_Run";
ROUTE1878.fromField = "value_changed";
ROUTE1878.toNode = "hanim_vl1";
ROUTE1878.toField = "set_rotation";
browser.currentScene.children[362] = ROUTE1878;

let ROUTE1879 = browser.currentScene.createNode("ROUTE");
ROUTE1879.fromNode = "Run_whole_bodyRotInterp_Run";
ROUTE1879.fromField = "value_changed";
ROUTE1879.toNode = "hanim_HumanoidRoot";
ROUTE1879.toField = "set_rotation";
browser.currentScene.children[363] = ROUTE1879;

let ROUTE1880 = browser.currentScene.createNode("ROUTE");
ROUTE1880.fromNode = "Run_whole_bodyTranInterp_Run";
ROUTE1880.fromField = "value_changed";
ROUTE1880.toNode = "hanim_HumanoidRoot";
ROUTE1880.toField = "set_translation";
browser.currentScene.children[364] = ROUTE1880;

let ROUTE1881 = browser.currentScene.createNode("ROUTE");
ROUTE1881.fromNode = "Run_l_sternoclavicularRoll";
ROUTE1881.fromField = "value_changed";
ROUTE1881.toNode = "hanim_l_sternoclavicular";
ROUTE1881.toField = "set_rotation";
browser.currentScene.children[365] = ROUTE1881;

let ROUTE1882 = browser.currentScene.createNode("ROUTE");
ROUTE1882.fromNode = "Run_l_acromioclavicularRoll";
ROUTE1882.fromField = "value_changed";
ROUTE1882.toNode = "hanim_l_acromioclavicular";
ROUTE1882.toField = "set_rotation";
browser.currentScene.children[366] = ROUTE1882;

let ROUTE1883 = browser.currentScene.createNode("ROUTE");
ROUTE1883.fromNode = "Run_r_sternoclavicularRoll";
ROUTE1883.fromField = "value_changed";
ROUTE1883.toNode = "hanim_r_sternoclavicular";
ROUTE1883.toField = "set_rotation";
browser.currentScene.children[367] = ROUTE1883;

let ROUTE1884 = browser.currentScene.createNode("ROUTE");
ROUTE1884.fromNode = "Run_r_acromioclavicularRoll";
ROUTE1884.fromField = "value_changed";
ROUTE1884.toNode = "hanim_r_acromioclavicular";
ROUTE1884.toField = "set_rotation";
browser.currentScene.children[368] = ROUTE1884;

let ROUTE1885 = browser.currentScene.createNode("ROUTE");
ROUTE1885.fromNode = "Run_r_metatarsalPitch";
ROUTE1885.fromField = "value_changed";
ROUTE1885.toNode = "hanim_l_metatarsal";
ROUTE1885.toField = "set_rotation";
browser.currentScene.children[369] = ROUTE1885;

let ROUTE1886 = browser.currentScene.createNode("ROUTE");
ROUTE1886.fromNode = "Run_r_metatarsalPitch";
ROUTE1886.fromField = "value_changed";
ROUTE1886.toNode = "hanim_r_metatarsal";
ROUTE1886.toField = "set_rotation";
browser.currentScene.children[370] = ROUTE1886;

let ROUTE1887 = browser.currentScene.createNode("ROUTE");
ROUTE1887.fromNode = "Run_sacroiliacYaw";
ROUTE1887.fromField = "value_changed";
ROUTE1887.toNode = "hanim_sacroiliac";
ROUTE1887.toField = "set_rotation";
browser.currentScene.children[371] = ROUTE1887;

let ROUTE1888 = browser.currentScene.createNode("ROUTE");
ROUTE1888.fromNode = "Run_vl5Yaw";
ROUTE1888.fromField = "value_changed";
ROUTE1888.toNode = "hanim_vl5";
ROUTE1888.toField = "set_rotation";
browser.currentScene.children[372] = ROUTE1888;

let ROUTE1889 = browser.currentScene.createNode("ROUTE");
ROUTE1889.fromNode = "Run_vc6Yaw";
ROUTE1889.fromField = "value_changed";
ROUTE1889.toNode = "hanim_vc6";
ROUTE1889.toField = "set_rotation";
browser.currentScene.children[373] = ROUTE1889;

let ROUTE1890 = browser.currentScene.createNode("ROUTE");
ROUTE1890.fromNode = "Run_l_thumb1Pitch";
ROUTE1890.fromField = "value_changed";
ROUTE1890.toNode = "hanim_l_thumb1";
ROUTE1890.toField = "set_rotation";
browser.currentScene.children[374] = ROUTE1890;

let ROUTE1891 = browser.currentScene.createNode("ROUTE");
ROUTE1891.fromNode = "Run_r_thumb1Pitch";
ROUTE1891.fromField = "value_changed";
ROUTE1891.toNode = "hanim_r_thumb1";
ROUTE1891.toField = "set_rotation";
browser.currentScene.children[375] = ROUTE1891;

let ROUTE1892 = browser.currentScene.createNode("ROUTE");
ROUTE1892.fromNode = "JumpTimer";
ROUTE1892.fromField = "fraction_changed";
ROUTE1892.toNode = "Jump_r_ankleRotInterp";
ROUTE1892.toField = "set_fraction";
browser.currentScene.children[376] = ROUTE1892;

let ROUTE1893 = browser.currentScene.createNode("ROUTE");
ROUTE1893.fromNode = "JumpTimer";
ROUTE1893.fromField = "fraction_changed";
ROUTE1893.toNode = "Jump_r_kneeRotInterp";
ROUTE1893.toField = "set_fraction";
browser.currentScene.children[377] = ROUTE1893;

let ROUTE1894 = browser.currentScene.createNode("ROUTE");
ROUTE1894.fromNode = "JumpTimer";
ROUTE1894.fromField = "fraction_changed";
ROUTE1894.toNode = "Jump_r_hipRotInterp";
ROUTE1894.toField = "set_fraction";
browser.currentScene.children[378] = ROUTE1894;

let ROUTE1895 = browser.currentScene.createNode("ROUTE");
ROUTE1895.fromNode = "JumpTimer";
ROUTE1895.fromField = "fraction_changed";
ROUTE1895.toNode = "Jump_l_ankleRotInterp";
ROUTE1895.toField = "set_fraction";
browser.currentScene.children[379] = ROUTE1895;

let ROUTE1896 = browser.currentScene.createNode("ROUTE");
ROUTE1896.fromNode = "JumpTimer";
ROUTE1896.fromField = "fraction_changed";
ROUTE1896.toNode = "Jump_l_kneeRotInterp";
ROUTE1896.toField = "set_fraction";
browser.currentScene.children[380] = ROUTE1896;

let ROUTE1897 = browser.currentScene.createNode("ROUTE");
ROUTE1897.fromNode = "JumpTimer";
ROUTE1897.fromField = "fraction_changed";
ROUTE1897.toNode = "Jump_l_hipRotInterp";
ROUTE1897.toField = "set_fraction";
browser.currentScene.children[381] = ROUTE1897;

let ROUTE1898 = browser.currentScene.createNode("ROUTE");
ROUTE1898.fromNode = "JumpTimer";
ROUTE1898.fromField = "fraction_changed";
ROUTE1898.toNode = "Jump_lower_bodyRotInterp";
ROUTE1898.toField = "set_fraction";
browser.currentScene.children[382] = ROUTE1898;

let ROUTE1899 = browser.currentScene.createNode("ROUTE");
ROUTE1899.fromNode = "JumpTimer";
ROUTE1899.fromField = "fraction_changed";
ROUTE1899.toNode = "Jump_r_wristRotInterp";
ROUTE1899.toField = "set_fraction";
browser.currentScene.children[383] = ROUTE1899;

let ROUTE1900 = browser.currentScene.createNode("ROUTE");
ROUTE1900.fromNode = "JumpTimer";
ROUTE1900.fromField = "fraction_changed";
ROUTE1900.toNode = "Jump_r_elbowRotInterp";
ROUTE1900.toField = "set_fraction";
browser.currentScene.children[384] = ROUTE1900;

let ROUTE1901 = browser.currentScene.createNode("ROUTE");
ROUTE1901.fromNode = "JumpTimer";
ROUTE1901.fromField = "fraction_changed";
ROUTE1901.toNode = "Jump_r_shoulderRotInterp";
ROUTE1901.toField = "set_fraction";
browser.currentScene.children[385] = ROUTE1901;

let ROUTE1902 = browser.currentScene.createNode("ROUTE");
ROUTE1902.fromNode = "JumpTimer";
ROUTE1902.fromField = "fraction_changed";
ROUTE1902.toNode = "Jump_l_wristRotInterp";
ROUTE1902.toField = "set_fraction";
browser.currentScene.children[386] = ROUTE1902;

let ROUTE1903 = browser.currentScene.createNode("ROUTE");
ROUTE1903.fromNode = "JumpTimer";
ROUTE1903.fromField = "fraction_changed";
ROUTE1903.toNode = "Jump_l_elbowRotInterp";
ROUTE1903.toField = "set_fraction";
browser.currentScene.children[387] = ROUTE1903;

let ROUTE1904 = browser.currentScene.createNode("ROUTE");
ROUTE1904.fromNode = "JumpTimer";
ROUTE1904.fromField = "fraction_changed";
ROUTE1904.toNode = "Jump_l_shoulderRotInterp";
ROUTE1904.toField = "set_fraction";
browser.currentScene.children[388] = ROUTE1904;

let ROUTE1905 = browser.currentScene.createNode("ROUTE");
ROUTE1905.fromNode = "JumpTimer";
ROUTE1905.fromField = "fraction_changed";
ROUTE1905.toNode = "Jump_headRotInterp";
ROUTE1905.toField = "set_fraction";
browser.currentScene.children[389] = ROUTE1905;

let ROUTE1906 = browser.currentScene.createNode("ROUTE");
ROUTE1906.fromNode = "JumpTimer";
ROUTE1906.fromField = "fraction_changed";
ROUTE1906.toNode = "Jump_neckRotInterp";
ROUTE1906.toField = "set_fraction";
browser.currentScene.children[390] = ROUTE1906;

let ROUTE1907 = browser.currentScene.createNode("ROUTE");
ROUTE1907.fromNode = "JumpTimer";
ROUTE1907.fromField = "fraction_changed";
ROUTE1907.toNode = "Jump_upper_bodyRotInterp";
ROUTE1907.toField = "set_fraction";
browser.currentScene.children[391] = ROUTE1907;

let ROUTE1908 = browser.currentScene.createNode("ROUTE");
ROUTE1908.fromNode = "JumpTimer";
ROUTE1908.fromField = "fraction_changed";
ROUTE1908.toNode = "Jump_whole_bodyRotInterp";
ROUTE1908.toField = "set_fraction";
browser.currentScene.children[392] = ROUTE1908;

let ROUTE1909 = browser.currentScene.createNode("ROUTE");
ROUTE1909.fromNode = "JumpTimer";
ROUTE1909.fromField = "fraction_changed";
ROUTE1909.toNode = "Jump_whole_bodyTranInterp";
ROUTE1909.toField = "set_fraction";
browser.currentScene.children[393] = ROUTE1909;

let ROUTE1910 = browser.currentScene.createNode("ROUTE");
ROUTE1910.fromNode = "JumpTimer";
ROUTE1910.fromField = "fraction_changed";
ROUTE1910.toNode = "Jump_l_sternoclavicularRoll";
ROUTE1910.toField = "set_fraction";
browser.currentScene.children[394] = ROUTE1910;

let ROUTE1911 = browser.currentScene.createNode("ROUTE");
ROUTE1911.fromNode = "JumpTimer";
ROUTE1911.fromField = "fraction_changed";
ROUTE1911.toNode = "Jump_l_acromioclavicularRoll";
ROUTE1911.toField = "set_fraction";
browser.currentScene.children[395] = ROUTE1911;

let ROUTE1912 = browser.currentScene.createNode("ROUTE");
ROUTE1912.fromNode = "JumpTimer";
ROUTE1912.fromField = "fraction_changed";
ROUTE1912.toNode = "Jump_r_sternoclavicularRoll";
ROUTE1912.toField = "set_fraction";
browser.currentScene.children[396] = ROUTE1912;

let ROUTE1913 = browser.currentScene.createNode("ROUTE");
ROUTE1913.fromNode = "JumpTimer";
ROUTE1913.fromField = "fraction_changed";
ROUTE1913.toNode = "Jump_r_acromioclavicularRoll";
ROUTE1913.toField = "set_fraction";
browser.currentScene.children[397] = ROUTE1913;

let ROUTE1914 = browser.currentScene.createNode("ROUTE");
ROUTE1914.fromNode = "JumpTimer";
ROUTE1914.fromField = "fraction_changed";
ROUTE1914.toNode = "Jump_r_metatarsalPitch";
ROUTE1914.toField = "set_fraction";
browser.currentScene.children[398] = ROUTE1914;

let ROUTE1915 = browser.currentScene.createNode("ROUTE");
ROUTE1915.fromNode = "JumpTimer";
ROUTE1915.fromField = "fraction_changed";
ROUTE1915.toNode = "Jump_sacroiliacYaw";
ROUTE1915.toField = "set_fraction";
browser.currentScene.children[399] = ROUTE1915;

let ROUTE1916 = browser.currentScene.createNode("ROUTE");
ROUTE1916.fromNode = "JumpTimer";
ROUTE1916.fromField = "fraction_changed";
ROUTE1916.toNode = "Jump_vl5Yaw";
ROUTE1916.toField = "set_fraction";
browser.currentScene.children[400] = ROUTE1916;

let ROUTE1917 = browser.currentScene.createNode("ROUTE");
ROUTE1917.fromNode = "JumpTimer";
ROUTE1917.fromField = "fraction_changed";
ROUTE1917.toNode = "Jump_vc6Yaw";
ROUTE1917.toField = "set_fraction";
browser.currentScene.children[401] = ROUTE1917;

let ROUTE1918 = browser.currentScene.createNode("ROUTE");
ROUTE1918.fromNode = "JumpTimer";
ROUTE1918.fromField = "fraction_changed";
ROUTE1918.toNode = "Jump_l_thumb1Pitch";
ROUTE1918.toField = "set_fraction";
browser.currentScene.children[402] = ROUTE1918;

let ROUTE1919 = browser.currentScene.createNode("ROUTE");
ROUTE1919.fromNode = "JumpTimer";
ROUTE1919.fromField = "fraction_changed";
ROUTE1919.toNode = "Jump_r_thumb1Pitch";
ROUTE1919.toField = "set_fraction";
browser.currentScene.children[403] = ROUTE1919;

let ROUTE1920 = browser.currentScene.createNode("ROUTE");
ROUTE1920.fromNode = "Jump_r_ankleRotInterp";
ROUTE1920.fromField = "value_changed";
ROUTE1920.toNode = "hanim_r_ankle";
ROUTE1920.toField = "set_rotation";
browser.currentScene.children[404] = ROUTE1920;

let ROUTE1921 = browser.currentScene.createNode("ROUTE");
ROUTE1921.fromNode = "Jump_r_kneeRotInterp";
ROUTE1921.fromField = "value_changed";
ROUTE1921.toNode = "hanim_r_knee";
ROUTE1921.toField = "set_rotation";
browser.currentScene.children[405] = ROUTE1921;

let ROUTE1922 = browser.currentScene.createNode("ROUTE");
ROUTE1922.fromNode = "Jump_r_hipRotInterp";
ROUTE1922.fromField = "value_changed";
ROUTE1922.toNode = "hanim_r_hip";
ROUTE1922.toField = "set_rotation";
browser.currentScene.children[406] = ROUTE1922;

let ROUTE1923 = browser.currentScene.createNode("ROUTE");
ROUTE1923.fromNode = "Jump_l_ankleRotInterp";
ROUTE1923.fromField = "value_changed";
ROUTE1923.toNode = "hanim_l_ankle";
ROUTE1923.toField = "set_rotation";
browser.currentScene.children[407] = ROUTE1923;

let ROUTE1924 = browser.currentScene.createNode("ROUTE");
ROUTE1924.fromNode = "Jump_l_kneeRotInterp";
ROUTE1924.fromField = "value_changed";
ROUTE1924.toNode = "hanim_l_knee";
ROUTE1924.toField = "set_rotation";
browser.currentScene.children[408] = ROUTE1924;

let ROUTE1925 = browser.currentScene.createNode("ROUTE");
ROUTE1925.fromNode = "Jump_l_hipRotInterp";
ROUTE1925.fromField = "value_changed";
ROUTE1925.toNode = "hanim_l_hip";
ROUTE1925.toField = "set_rotation";
browser.currentScene.children[409] = ROUTE1925;

let ROUTE1926 = browser.currentScene.createNode("ROUTE");
ROUTE1926.fromNode = "Jump_lower_bodyRotInterp";
ROUTE1926.fromField = "value_changed";
ROUTE1926.toNode = "hanim_sacroiliac";
ROUTE1926.toField = "set_rotation";
browser.currentScene.children[410] = ROUTE1926;

let ROUTE1927 = browser.currentScene.createNode("ROUTE");
ROUTE1927.fromNode = "Jump_r_wristRotInterp";
ROUTE1927.fromField = "value_changed";
ROUTE1927.toNode = "hanim_r_wrist";
ROUTE1927.toField = "set_rotation";
browser.currentScene.children[411] = ROUTE1927;

let ROUTE1928 = browser.currentScene.createNode("ROUTE");
ROUTE1928.fromNode = "Jump_r_elbowRotInterp";
ROUTE1928.fromField = "value_changed";
ROUTE1928.toNode = "hanim_r_elbow";
ROUTE1928.toField = "set_rotation";
browser.currentScene.children[412] = ROUTE1928;

let ROUTE1929 = browser.currentScene.createNode("ROUTE");
ROUTE1929.fromNode = "Jump_r_shoulderRotInterp";
ROUTE1929.fromField = "value_changed";
ROUTE1929.toNode = "hanim_r_shoulder";
ROUTE1929.toField = "set_rotation";
browser.currentScene.children[413] = ROUTE1929;

let ROUTE1930 = browser.currentScene.createNode("ROUTE");
ROUTE1930.fromNode = "Jump_l_wristRotInterp";
ROUTE1930.fromField = "value_changed";
ROUTE1930.toNode = "hanim_l_wrist";
ROUTE1930.toField = "set_rotation";
browser.currentScene.children[414] = ROUTE1930;

let ROUTE1931 = browser.currentScene.createNode("ROUTE");
ROUTE1931.fromNode = "Jump_l_elbowRotInterp";
ROUTE1931.fromField = "value_changed";
ROUTE1931.toNode = "hanim_l_elbow";
ROUTE1931.toField = "set_rotation";
browser.currentScene.children[415] = ROUTE1931;

let ROUTE1932 = browser.currentScene.createNode("ROUTE");
ROUTE1932.fromNode = "Jump_l_shoulderRotInterp";
ROUTE1932.fromField = "value_changed";
ROUTE1932.toNode = "hanim_l_shoulder";
ROUTE1932.toField = "set_rotation";
browser.currentScene.children[416] = ROUTE1932;

let ROUTE1933 = browser.currentScene.createNode("ROUTE");
ROUTE1933.fromNode = "Jump_headRotInterp";
ROUTE1933.fromField = "value_changed";
ROUTE1933.toNode = "hanim_skullbase";
ROUTE1933.toField = "set_rotation";
browser.currentScene.children[417] = ROUTE1933;

let ROUTE1934 = browser.currentScene.createNode("ROUTE");
ROUTE1934.fromNode = "Jump_neckRotInterp";
ROUTE1934.fromField = "value_changed";
ROUTE1934.toNode = "hanim_vc4";
ROUTE1934.toField = "set_rotation";
browser.currentScene.children[418] = ROUTE1934;

let ROUTE1935 = browser.currentScene.createNode("ROUTE");
ROUTE1935.fromNode = "Jump_upper_bodyRotInterp";
ROUTE1935.fromField = "value_changed";
ROUTE1935.toNode = "hanim_vl1";
ROUTE1935.toField = "set_rotation";
browser.currentScene.children[419] = ROUTE1935;

let ROUTE1936 = browser.currentScene.createNode("ROUTE");
ROUTE1936.fromNode = "Jump_whole_bodyRotInterp";
ROUTE1936.fromField = "value_changed";
ROUTE1936.toNode = "hanim_HumanoidRoot";
ROUTE1936.toField = "set_rotation";
browser.currentScene.children[420] = ROUTE1936;

let ROUTE1937 = browser.currentScene.createNode("ROUTE");
ROUTE1937.fromNode = "Jump_whole_bodyTranInterp";
ROUTE1937.fromField = "value_changed";
ROUTE1937.toNode = "hanim_HumanoidRoot";
ROUTE1937.toField = "set_translation";
browser.currentScene.children[421] = ROUTE1937;

let ROUTE1938 = browser.currentScene.createNode("ROUTE");
ROUTE1938.fromNode = "Jump_l_sternoclavicularRoll";
ROUTE1938.fromField = "value_changed";
ROUTE1938.toNode = "hanim_l_sternoclavicular";
ROUTE1938.toField = "set_rotation";
browser.currentScene.children[422] = ROUTE1938;

let ROUTE1939 = browser.currentScene.createNode("ROUTE");
ROUTE1939.fromNode = "Jump_l_acromioclavicularRoll";
ROUTE1939.fromField = "value_changed";
ROUTE1939.toNode = "hanim_l_acromioclavicular";
ROUTE1939.toField = "set_rotation";
browser.currentScene.children[423] = ROUTE1939;

let ROUTE1940 = browser.currentScene.createNode("ROUTE");
ROUTE1940.fromNode = "Jump_r_sternoclavicularRoll";
ROUTE1940.fromField = "value_changed";
ROUTE1940.toNode = "hanim_r_sternoclavicular";
ROUTE1940.toField = "set_rotation";
browser.currentScene.children[424] = ROUTE1940;

let ROUTE1941 = browser.currentScene.createNode("ROUTE");
ROUTE1941.fromNode = "Jump_r_acromioclavicularRoll";
ROUTE1941.fromField = "value_changed";
ROUTE1941.toNode = "hanim_r_acromioclavicular";
ROUTE1941.toField = "set_rotation";
browser.currentScene.children[425] = ROUTE1941;

let ROUTE1942 = browser.currentScene.createNode("ROUTE");
ROUTE1942.fromNode = "Jump_r_metatarsalPitch";
ROUTE1942.fromField = "value_changed";
ROUTE1942.toNode = "hanim_l_metatarsal";
ROUTE1942.toField = "set_rotation";
browser.currentScene.children[426] = ROUTE1942;

let ROUTE1943 = browser.currentScene.createNode("ROUTE");
ROUTE1943.fromNode = "Jump_r_metatarsalPitch";
ROUTE1943.fromField = "value_changed";
ROUTE1943.toNode = "hanim_r_metatarsal";
ROUTE1943.toField = "set_rotation";
browser.currentScene.children[427] = ROUTE1943;

let ROUTE1944 = browser.currentScene.createNode("ROUTE");
ROUTE1944.fromNode = "Jump_sacroiliacYaw";
ROUTE1944.fromField = "value_changed";
ROUTE1944.toNode = "hanim_sacroiliac";
ROUTE1944.toField = "set_rotation";
browser.currentScene.children[428] = ROUTE1944;

let ROUTE1945 = browser.currentScene.createNode("ROUTE");
ROUTE1945.fromNode = "Jump_vl5Yaw";
ROUTE1945.fromField = "value_changed";
ROUTE1945.toNode = "hanim_vl5";
ROUTE1945.toField = "set_rotation";
browser.currentScene.children[429] = ROUTE1945;

let ROUTE1946 = browser.currentScene.createNode("ROUTE");
ROUTE1946.fromNode = "Jump_vc6Yaw";
ROUTE1946.fromField = "value_changed";
ROUTE1946.toNode = "hanim_vc6";
ROUTE1946.toField = "set_rotation";
browser.currentScene.children[430] = ROUTE1946;

let ROUTE1947 = browser.currentScene.createNode("ROUTE");
ROUTE1947.fromNode = "Jump_l_thumb1Pitch";
ROUTE1947.fromField = "value_changed";
ROUTE1947.toNode = "hanim_l_thumb1";
ROUTE1947.toField = "set_rotation";
browser.currentScene.children[431] = ROUTE1947;

let ROUTE1948 = browser.currentScene.createNode("ROUTE");
ROUTE1948.fromNode = "Jump_r_thumb1Pitch";
ROUTE1948.fromField = "value_changed";
ROUTE1948.toNode = "hanim_r_thumb1";
ROUTE1948.toField = "set_rotation";
browser.currentScene.children[432] = ROUTE1948;

let ROUTE1949 = browser.currentScene.createNode("ROUTE");
ROUTE1949.fromNode = "KickTimer";
ROUTE1949.fromField = "fraction_changed";
ROUTE1949.toNode = "Kick_l_sternoclavicularRoll";
ROUTE1949.toField = "set_fraction";
browser.currentScene.children[433] = ROUTE1949;

let ROUTE1950 = browser.currentScene.createNode("ROUTE");
ROUTE1950.fromNode = "KickTimer";
ROUTE1950.fromField = "fraction_changed";
ROUTE1950.toNode = "Kick_l_acromioclavicularRoll";
ROUTE1950.toField = "set_fraction";
browser.currentScene.children[434] = ROUTE1950;

let ROUTE1951 = browser.currentScene.createNode("ROUTE");
ROUTE1951.fromNode = "KickTimer";
ROUTE1951.fromField = "fraction_changed";
ROUTE1951.toNode = "Kick_l_shoulderRoll";
ROUTE1951.toField = "set_fraction";
browser.currentScene.children[435] = ROUTE1951;

let ROUTE1952 = browser.currentScene.createNode("ROUTE");
ROUTE1952.fromNode = "KickTimer";
ROUTE1952.fromField = "fraction_changed";
ROUTE1952.toNode = "Kick_l_ForeArmPitch";
ROUTE1952.toField = "set_fraction";
browser.currentScene.children[436] = ROUTE1952;

let ROUTE1953 = browser.currentScene.createNode("ROUTE");
ROUTE1953.fromNode = "KickTimer";
ROUTE1953.fromField = "fraction_changed";
ROUTE1953.toNode = "Kick_l_wristRoll";
ROUTE1953.toField = "set_fraction";
browser.currentScene.children[437] = ROUTE1953;

let ROUTE1954 = browser.currentScene.createNode("ROUTE");
ROUTE1954.fromNode = "KickTimer";
ROUTE1954.fromField = "fraction_changed";
ROUTE1954.toNode = "Kick_l_thumb1Pitch";
ROUTE1954.toField = "set_fraction";
browser.currentScene.children[438] = ROUTE1954;

let ROUTE1955 = browser.currentScene.createNode("ROUTE");
ROUTE1955.fromNode = "KickTimer";
ROUTE1955.fromField = "fraction_changed";
ROUTE1955.toNode = "Kick_r_sternoclavicularRoll";
ROUTE1955.toField = "set_fraction";
browser.currentScene.children[439] = ROUTE1955;

let ROUTE1956 = browser.currentScene.createNode("ROUTE");
ROUTE1956.fromNode = "KickTimer";
ROUTE1956.fromField = "fraction_changed";
ROUTE1956.toNode = "Kick_r_acromioclavicularRoll";
ROUTE1956.toField = "set_fraction";
browser.currentScene.children[440] = ROUTE1956;

let ROUTE1957 = browser.currentScene.createNode("ROUTE");
ROUTE1957.fromNode = "KickTimer";
ROUTE1957.fromField = "fraction_changed";
ROUTE1957.toNode = "Kick_r_shoulderRoll";
ROUTE1957.toField = "set_fraction";
browser.currentScene.children[441] = ROUTE1957;

let ROUTE1958 = browser.currentScene.createNode("ROUTE");
ROUTE1958.fromNode = "KickTimer";
ROUTE1958.fromField = "fraction_changed";
ROUTE1958.toNode = "Kick_r_ForeArmPitch";
ROUTE1958.toField = "set_fraction";
browser.currentScene.children[442] = ROUTE1958;

let ROUTE1959 = browser.currentScene.createNode("ROUTE");
ROUTE1959.fromNode = "KickTimer";
ROUTE1959.fromField = "fraction_changed";
ROUTE1959.toNode = "Kick_r_wristRoll";
ROUTE1959.toField = "set_fraction";
browser.currentScene.children[443] = ROUTE1959;

let ROUTE1960 = browser.currentScene.createNode("ROUTE");
ROUTE1960.fromNode = "KickTimer";
ROUTE1960.fromField = "fraction_changed";
ROUTE1960.toNode = "Kick_r_thumb1Pitch";
ROUTE1960.toField = "set_fraction";
browser.currentScene.children[444] = ROUTE1960;

let ROUTE1961 = browser.currentScene.createNode("ROUTE");
ROUTE1961.fromNode = "KickTimer";
ROUTE1961.fromField = "fraction_changed";
ROUTE1961.toNode = "Kick_r_hipPitch";
ROUTE1961.toField = "set_fraction";
browser.currentScene.children[445] = ROUTE1961;

let ROUTE1962 = browser.currentScene.createNode("ROUTE");
ROUTE1962.fromNode = "KickTimer";
ROUTE1962.fromField = "fraction_changed";
ROUTE1962.toNode = "Kick_r_kneePitch";
ROUTE1962.toField = "set_fraction";
browser.currentScene.children[446] = ROUTE1962;

let ROUTE1963 = browser.currentScene.createNode("ROUTE");
ROUTE1963.fromNode = "KickTimer";
ROUTE1963.fromField = "fraction_changed";
ROUTE1963.toNode = "Kick_l_hipPitch";
ROUTE1963.toField = "set_fraction";
browser.currentScene.children[447] = ROUTE1963;

let ROUTE1964 = browser.currentScene.createNode("ROUTE");
ROUTE1964.fromNode = "KickTimer";
ROUTE1964.fromField = "fraction_changed";
ROUTE1964.toNode = "Kick_l_kneePitch";
ROUTE1964.toField = "set_fraction";
browser.currentScene.children[448] = ROUTE1964;

let ROUTE1965 = browser.currentScene.createNode("ROUTE");
ROUTE1965.fromNode = "KickTimer";
ROUTE1965.fromField = "fraction_changed";
ROUTE1965.toNode = "Kick_r_anklePitch";
ROUTE1965.toField = "set_fraction";
browser.currentScene.children[449] = ROUTE1965;

let ROUTE1966 = browser.currentScene.createNode("ROUTE");
ROUTE1966.fromNode = "KickTimer";
ROUTE1966.fromField = "fraction_changed";
ROUTE1966.toNode = "Kick_r_metatarsalPitch";
ROUTE1966.toField = "set_fraction";
browser.currentScene.children[450] = ROUTE1966;

let ROUTE1967 = browser.currentScene.createNode("ROUTE");
ROUTE1967.fromNode = "KickTimer";
ROUTE1967.fromField = "fraction_changed";
ROUTE1967.toNode = "Kick_sacroiliacYaw";
ROUTE1967.toField = "set_fraction";
browser.currentScene.children[451] = ROUTE1967;

let ROUTE1968 = browser.currentScene.createNode("ROUTE");
ROUTE1968.fromNode = "KickTimer";
ROUTE1968.fromField = "fraction_changed";
ROUTE1968.toNode = "Kick_vl5Yaw";
ROUTE1968.toField = "set_fraction";
browser.currentScene.children[452] = ROUTE1968;

let ROUTE1969 = browser.currentScene.createNode("ROUTE");
ROUTE1969.fromNode = "KickTimer";
ROUTE1969.fromField = "fraction_changed";
ROUTE1969.toNode = "Kick_vc6Yaw";
ROUTE1969.toField = "set_fraction";
browser.currentScene.children[453] = ROUTE1969;

let ROUTE1970 = browser.currentScene.createNode("ROUTE");
ROUTE1970.fromNode = "KickTimer";
ROUTE1970.fromField = "fraction_changed";
ROUTE1970.toNode = "Kick_lower_bodyRotInterp";
ROUTE1970.toField = "set_fraction";
browser.currentScene.children[454] = ROUTE1970;

let ROUTE1971 = browser.currentScene.createNode("ROUTE");
ROUTE1971.fromNode = "KickTimer";
ROUTE1971.fromField = "fraction_changed";
ROUTE1971.toNode = "Kick_upper_bodyRotInterp";
ROUTE1971.toField = "set_fraction";
browser.currentScene.children[455] = ROUTE1971;

let ROUTE1972 = browser.currentScene.createNode("ROUTE");
ROUTE1972.fromNode = "KickTimer";
ROUTE1972.fromField = "fraction_changed";
ROUTE1972.toNode = "Kick_whole_bodyRotInterp";
ROUTE1972.toField = "set_fraction";
browser.currentScene.children[456] = ROUTE1972;

let ROUTE1973 = browser.currentScene.createNode("ROUTE");
ROUTE1973.fromNode = "KickTimer";
ROUTE1973.fromField = "fraction_changed";
ROUTE1973.toNode = "Kick_whole_bodyTransInterp";
ROUTE1973.toField = "set_fraction";
browser.currentScene.children[457] = ROUTE1973;

let ROUTE1974 = browser.currentScene.createNode("ROUTE");
ROUTE1974.fromNode = "KickTimer";
ROUTE1974.fromField = "fraction_changed";
ROUTE1974.toNode = "Kick_neckRotInterp";
ROUTE1974.toField = "set_fraction";
browser.currentScene.children[458] = ROUTE1974;

let ROUTE1975 = browser.currentScene.createNode("ROUTE");
ROUTE1975.fromNode = "Kick_l_sternoclavicularRoll";
ROUTE1975.fromField = "value_changed";
ROUTE1975.toNode = "hanim_l_sternoclavicular";
ROUTE1975.toField = "set_rotation";
browser.currentScene.children[459] = ROUTE1975;

let ROUTE1976 = browser.currentScene.createNode("ROUTE");
ROUTE1976.fromNode = "Kick_l_acromioclavicularRoll";
ROUTE1976.fromField = "value_changed";
ROUTE1976.toNode = "hanim_l_acromioclavicular";
ROUTE1976.toField = "set_rotation";
browser.currentScene.children[460] = ROUTE1976;

let ROUTE1977 = browser.currentScene.createNode("ROUTE");
ROUTE1977.fromNode = "Kick_l_shoulderRoll";
ROUTE1977.fromField = "value_changed";
ROUTE1977.toNode = "hanim_l_shoulder";
ROUTE1977.toField = "set_rotation";
browser.currentScene.children[461] = ROUTE1977;

let ROUTE1978 = browser.currentScene.createNode("ROUTE");
ROUTE1978.fromNode = "Kick_l_ForeArmPitch";
ROUTE1978.fromField = "value_changed";
ROUTE1978.toNode = "hanim_l_elbow";
ROUTE1978.toField = "set_rotation";
browser.currentScene.children[462] = ROUTE1978;

let ROUTE1979 = browser.currentScene.createNode("ROUTE");
ROUTE1979.fromNode = "Kick_l_wristRoll";
ROUTE1979.fromField = "value_changed";
ROUTE1979.toNode = "hanim_l_wrist";
ROUTE1979.toField = "set_rotation";
browser.currentScene.children[463] = ROUTE1979;

let ROUTE1980 = browser.currentScene.createNode("ROUTE");
ROUTE1980.fromNode = "Kick_l_thumb1Pitch";
ROUTE1980.fromField = "value_changed";
ROUTE1980.toNode = "hanim_l_thumb1";
ROUTE1980.toField = "set_rotation";
browser.currentScene.children[464] = ROUTE1980;

let ROUTE1981 = browser.currentScene.createNode("ROUTE");
ROUTE1981.fromNode = "Kick_r_sternoclavicularRoll";
ROUTE1981.fromField = "value_changed";
ROUTE1981.toNode = "hanim_r_sternoclavicular";
ROUTE1981.toField = "set_rotation";
browser.currentScene.children[465] = ROUTE1981;

let ROUTE1982 = browser.currentScene.createNode("ROUTE");
ROUTE1982.fromNode = "Kick_r_acromioclavicularRoll";
ROUTE1982.fromField = "value_changed";
ROUTE1982.toNode = "hanim_r_acromioclavicular";
ROUTE1982.toField = "set_rotation";
browser.currentScene.children[466] = ROUTE1982;

let ROUTE1983 = browser.currentScene.createNode("ROUTE");
ROUTE1983.fromNode = "Kick_r_shoulderRoll";
ROUTE1983.fromField = "value_changed";
ROUTE1983.toNode = "hanim_r_shoulder";
ROUTE1983.toField = "set_rotation";
browser.currentScene.children[467] = ROUTE1983;

let ROUTE1984 = browser.currentScene.createNode("ROUTE");
ROUTE1984.fromNode = "Kick_r_ForeArmPitch";
ROUTE1984.fromField = "value_changed";
ROUTE1984.toNode = "hanim_r_elbow";
ROUTE1984.toField = "set_rotation";
browser.currentScene.children[468] = ROUTE1984;

let ROUTE1985 = browser.currentScene.createNode("ROUTE");
ROUTE1985.fromNode = "Kick_r_wristRoll";
ROUTE1985.fromField = "value_changed";
ROUTE1985.toNode = "hanim_r_wrist";
ROUTE1985.toField = "set_rotation";
browser.currentScene.children[469] = ROUTE1985;

let ROUTE1986 = browser.currentScene.createNode("ROUTE");
ROUTE1986.fromNode = "Kick_r_thumb1Pitch";
ROUTE1986.fromField = "value_changed";
ROUTE1986.toNode = "hanim_r_thumb1";
ROUTE1986.toField = "set_rotation";
browser.currentScene.children[470] = ROUTE1986;

let ROUTE1987 = browser.currentScene.createNode("ROUTE");
ROUTE1987.fromNode = "Kick_r_hipPitch";
ROUTE1987.fromField = "value_changed";
ROUTE1987.toNode = "hanim_r_hip";
ROUTE1987.toField = "set_rotation";
browser.currentScene.children[471] = ROUTE1987;

let ROUTE1988 = browser.currentScene.createNode("ROUTE");
ROUTE1988.fromNode = "Kick_r_kneePitch";
ROUTE1988.fromField = "value_changed";
ROUTE1988.toNode = "hanim_r_knee";
ROUTE1988.toField = "set_rotation";
browser.currentScene.children[472] = ROUTE1988;

let ROUTE1989 = browser.currentScene.createNode("ROUTE");
ROUTE1989.fromNode = "Kick_r_anklePitch";
ROUTE1989.fromField = "value_changed";
ROUTE1989.toNode = "hanim_r_ankle";
ROUTE1989.toField = "set_rotation";
browser.currentScene.children[473] = ROUTE1989;

let ROUTE1990 = browser.currentScene.createNode("ROUTE");
ROUTE1990.fromNode = "Kick_r_metatarsalPitch";
ROUTE1990.fromField = "value_changed";
ROUTE1990.toNode = "hanim_r_metatarsal";
ROUTE1990.toField = "set_rotation";
browser.currentScene.children[474] = ROUTE1990;

let ROUTE1991 = browser.currentScene.createNode("ROUTE");
ROUTE1991.fromNode = "Kick_l_hipPitch";
ROUTE1991.fromField = "value_changed";
ROUTE1991.toNode = "hanim_l_hip";
ROUTE1991.toField = "set_rotation";
browser.currentScene.children[475] = ROUTE1991;

let ROUTE1992 = browser.currentScene.createNode("ROUTE");
ROUTE1992.fromNode = "Kick_l_kneePitch";
ROUTE1992.fromField = "value_changed";
ROUTE1992.toNode = "hanim_l_knee";
ROUTE1992.toField = "set_rotation";
browser.currentScene.children[476] = ROUTE1992;

let ROUTE1993 = browser.currentScene.createNode("ROUTE");
ROUTE1993.fromNode = "Kick_r_anklePitch";
ROUTE1993.fromField = "value_changed";
ROUTE1993.toNode = "hanim_l_ankle";
ROUTE1993.toField = "set_rotation";
browser.currentScene.children[477] = ROUTE1993;

let ROUTE1994 = browser.currentScene.createNode("ROUTE");
ROUTE1994.fromNode = "Kick_r_metatarsalPitch";
ROUTE1994.fromField = "value_changed";
ROUTE1994.toNode = "hanim_l_metatarsal";
ROUTE1994.toField = "set_rotation";
browser.currentScene.children[478] = ROUTE1994;

let ROUTE1995 = browser.currentScene.createNode("ROUTE");
ROUTE1995.fromNode = "Kick_sacroiliacYaw";
ROUTE1995.fromField = "value_changed";
ROUTE1995.toNode = "hanim_sacroiliac";
ROUTE1995.toField = "set_rotation";
browser.currentScene.children[479] = ROUTE1995;

let ROUTE1996 = browser.currentScene.createNode("ROUTE");
ROUTE1996.fromNode = "Kick_vl5Yaw";
ROUTE1996.fromField = "value_changed";
ROUTE1996.toNode = "hanim_vl5";
ROUTE1996.toField = "set_rotation";
browser.currentScene.children[480] = ROUTE1996;

let ROUTE1997 = browser.currentScene.createNode("ROUTE");
ROUTE1997.fromNode = "Kick_vc6Yaw";
ROUTE1997.fromField = "value_changed";
ROUTE1997.toNode = "hanim_vc6";
ROUTE1997.toField = "set_rotation";
browser.currentScene.children[481] = ROUTE1997;

let ROUTE1998 = browser.currentScene.createNode("ROUTE");
ROUTE1998.fromNode = "Kick_upper_bodyRotInterp";
ROUTE1998.fromField = "value_changed";
ROUTE1998.toNode = "hanim_vl1";
ROUTE1998.toField = "set_rotation";
browser.currentScene.children[482] = ROUTE1998;

let ROUTE1999 = browser.currentScene.createNode("ROUTE");
ROUTE1999.fromNode = "Kick_lower_bodyRotInterp";
ROUTE1999.fromField = "value_changed";
ROUTE1999.toNode = "hanim_sacroiliac";
ROUTE1999.toField = "set_rotation";
browser.currentScene.children[483] = ROUTE1999;

let ROUTE2000 = browser.currentScene.createNode("ROUTE");
ROUTE2000.fromNode = "Kick_whole_bodyRotInterp";
ROUTE2000.fromField = "value_changed";
ROUTE2000.toNode = "hanim_HumanoidRoot";
ROUTE2000.toField = "set_rotation";
browser.currentScene.children[484] = ROUTE2000;

let ROUTE2001 = browser.currentScene.createNode("ROUTE");
ROUTE2001.fromNode = "Kick_whole_bodyTransInterp";
ROUTE2001.fromField = "value_changed";
ROUTE2001.toNode = "hanim_HumanoidRoot";
ROUTE2001.toField = "set_translation";
browser.currentScene.children[485] = ROUTE2001;

let ROUTE2002 = browser.currentScene.createNode("ROUTE");
ROUTE2002.fromNode = "Kick_neckRotInterp";
ROUTE2002.fromField = "value_changed";
ROUTE2002.toNode = "hanim_vc4";
ROUTE2002.toField = "set_rotation";
browser.currentScene.children[486] = ROUTE2002;

let ROUTE2003 = browser.currentScene.createNode("ROUTE");
ROUTE2003.fromNode = "StopTimer";
ROUTE2003.fromField = "fraction_changed";
ROUTE2003.toNode = "Stop_HumanoidRootTransInterp";
ROUTE2003.toField = "set_fraction";
browser.currentScene.children[487] = ROUTE2003;

let ROUTE2004 = browser.currentScene.createNode("ROUTE");
ROUTE2004.fromNode = "StopTimer";
ROUTE2004.fromField = "fraction_changed";
ROUTE2004.toNode = "Stop_HumanoidRootRotInterp";
ROUTE2004.toField = "set_fraction";
browser.currentScene.children[488] = ROUTE2004;

let ROUTE2005 = browser.currentScene.createNode("ROUTE");
ROUTE2005.fromNode = "StopTimer";
ROUTE2005.fromField = "fraction_changed";
ROUTE2005.toNode = "Stop_sacroiliacRotInterp";
ROUTE2005.toField = "set_fraction";
browser.currentScene.children[489] = ROUTE2005;

let ROUTE2006 = browser.currentScene.createNode("ROUTE");
ROUTE2006.fromNode = "StopTimer";
ROUTE2006.fromField = "fraction_changed";
ROUTE2006.toNode = "Stop_l_hipRotInterp";
ROUTE2006.toField = "set_fraction";
browser.currentScene.children[490] = ROUTE2006;

let ROUTE2007 = browser.currentScene.createNode("ROUTE");
ROUTE2007.fromNode = "StopTimer";
ROUTE2007.fromField = "fraction_changed";
ROUTE2007.toNode = "Stop_l_kneeRotInterp";
ROUTE2007.toField = "set_fraction";
browser.currentScene.children[491] = ROUTE2007;

let ROUTE2008 = browser.currentScene.createNode("ROUTE");
ROUTE2008.fromNode = "StopTimer";
ROUTE2008.fromField = "fraction_changed";
ROUTE2008.toNode = "Stop_l_ankleRotInterp";
ROUTE2008.toField = "set_fraction";
browser.currentScene.children[492] = ROUTE2008;

let ROUTE2009 = browser.currentScene.createNode("ROUTE");
ROUTE2009.fromNode = "StopTimer";
ROUTE2009.fromField = "fraction_changed";
ROUTE2009.toNode = "Stop_l_subtalarRotInterp";
ROUTE2009.toField = "set_fraction";
browser.currentScene.children[493] = ROUTE2009;

let ROUTE2010 = browser.currentScene.createNode("ROUTE");
ROUTE2010.fromNode = "StopTimer";
ROUTE2010.fromField = "fraction_changed";
ROUTE2010.toNode = "Stop_l_midtarsalRotInterp";
ROUTE2010.toField = "set_fraction";
browser.currentScene.children[494] = ROUTE2010;

let ROUTE2011 = browser.currentScene.createNode("ROUTE");
ROUTE2011.fromNode = "StopTimer";
ROUTE2011.fromField = "fraction_changed";
ROUTE2011.toNode = "Stop_l_metatarsalRotInterp";
ROUTE2011.toField = "set_fraction";
browser.currentScene.children[495] = ROUTE2011;

let ROUTE2012 = browser.currentScene.createNode("ROUTE");
ROUTE2012.fromNode = "StopTimer";
ROUTE2012.fromField = "fraction_changed";
ROUTE2012.toNode = "Stop_r_hipRotInterp";
ROUTE2012.toField = "set_fraction";
browser.currentScene.children[496] = ROUTE2012;

let ROUTE2013 = browser.currentScene.createNode("ROUTE");
ROUTE2013.fromNode = "StopTimer";
ROUTE2013.fromField = "fraction_changed";
ROUTE2013.toNode = "Stop_r_kneeRotInterp";
ROUTE2013.toField = "set_fraction";
browser.currentScene.children[497] = ROUTE2013;

let ROUTE2014 = browser.currentScene.createNode("ROUTE");
ROUTE2014.fromNode = "StopTimer";
ROUTE2014.fromField = "fraction_changed";
ROUTE2014.toNode = "Stop_r_ankleRotInterp";
ROUTE2014.toField = "set_fraction";
browser.currentScene.children[498] = ROUTE2014;

let ROUTE2015 = browser.currentScene.createNode("ROUTE");
ROUTE2015.fromNode = "StopTimer";
ROUTE2015.fromField = "fraction_changed";
ROUTE2015.toNode = "Stop_r_subtalarRotInterp";
ROUTE2015.toField = "set_fraction";
browser.currentScene.children[499] = ROUTE2015;

let ROUTE2016 = browser.currentScene.createNode("ROUTE");
ROUTE2016.fromNode = "StopTimer";
ROUTE2016.fromField = "fraction_changed";
ROUTE2016.toNode = "Stop_r_midtarsalRotInterp";
ROUTE2016.toField = "set_fraction";
browser.currentScene.children[500] = ROUTE2016;

let ROUTE2017 = browser.currentScene.createNode("ROUTE");
ROUTE2017.fromNode = "StopTimer";
ROUTE2017.fromField = "fraction_changed";
ROUTE2017.toNode = "Stop_r_metatarsalRotInterp";
ROUTE2017.toField = "set_fraction";
browser.currentScene.children[501] = ROUTE2017;

let ROUTE2018 = browser.currentScene.createNode("ROUTE");
ROUTE2018.fromNode = "StopTimer";
ROUTE2018.fromField = "fraction_changed";
ROUTE2018.toNode = "Stop_vl5RotInterp";
ROUTE2018.toField = "set_fraction";
browser.currentScene.children[502] = ROUTE2018;

let ROUTE2019 = browser.currentScene.createNode("ROUTE");
ROUTE2019.fromNode = "StopTimer";
ROUTE2019.fromField = "fraction_changed";
ROUTE2019.toNode = "Stop_vl4RotInterp";
ROUTE2019.toField = "set_fraction";
browser.currentScene.children[503] = ROUTE2019;

let ROUTE2020 = browser.currentScene.createNode("ROUTE");
ROUTE2020.fromNode = "StopTimer";
ROUTE2020.fromField = "fraction_changed";
ROUTE2020.toNode = "Stop_vl3RotInterp";
ROUTE2020.toField = "set_fraction";
browser.currentScene.children[504] = ROUTE2020;

let ROUTE2021 = browser.currentScene.createNode("ROUTE");
ROUTE2021.fromNode = "StopTimer";
ROUTE2021.fromField = "fraction_changed";
ROUTE2021.toNode = "Stop_vl2RotInterp";
ROUTE2021.toField = "set_fraction";
browser.currentScene.children[505] = ROUTE2021;

let ROUTE2022 = browser.currentScene.createNode("ROUTE");
ROUTE2022.fromNode = "StopTimer";
ROUTE2022.fromField = "fraction_changed";
ROUTE2022.toNode = "Stop_vl1RotInterp";
ROUTE2022.toField = "set_fraction";
browser.currentScene.children[506] = ROUTE2022;

let ROUTE2023 = browser.currentScene.createNode("ROUTE");
ROUTE2023.fromNode = "StopTimer";
ROUTE2023.fromField = "fraction_changed";
ROUTE2023.toNode = "Stop_vt12RotInterp";
ROUTE2023.toField = "set_fraction";
browser.currentScene.children[507] = ROUTE2023;

let ROUTE2024 = browser.currentScene.createNode("ROUTE");
ROUTE2024.fromNode = "StopTimer";
ROUTE2024.fromField = "fraction_changed";
ROUTE2024.toNode = "Stop_vt11RotInterp";
ROUTE2024.toField = "set_fraction";
browser.currentScene.children[508] = ROUTE2024;

let ROUTE2025 = browser.currentScene.createNode("ROUTE");
ROUTE2025.fromNode = "StopTimer";
ROUTE2025.fromField = "fraction_changed";
ROUTE2025.toNode = "Stop_vt10RotInterp";
ROUTE2025.toField = "set_fraction";
browser.currentScene.children[509] = ROUTE2025;

let ROUTE2026 = browser.currentScene.createNode("ROUTE");
ROUTE2026.fromNode = "StopTimer";
ROUTE2026.fromField = "fraction_changed";
ROUTE2026.toNode = "Stop_vt9RotInterp";
ROUTE2026.toField = "set_fraction";
browser.currentScene.children[510] = ROUTE2026;

let ROUTE2027 = browser.currentScene.createNode("ROUTE");
ROUTE2027.fromNode = "StopTimer";
ROUTE2027.fromField = "fraction_changed";
ROUTE2027.toNode = "Stop_vt8RotInterp";
ROUTE2027.toField = "set_fraction";
browser.currentScene.children[511] = ROUTE2027;

let ROUTE2028 = browser.currentScene.createNode("ROUTE");
ROUTE2028.fromNode = "StopTimer";
ROUTE2028.fromField = "fraction_changed";
ROUTE2028.toNode = "Stop_vt7RotInterp";
ROUTE2028.toField = "set_fraction";
browser.currentScene.children[512] = ROUTE2028;

let ROUTE2029 = browser.currentScene.createNode("ROUTE");
ROUTE2029.fromNode = "StopTimer";
ROUTE2029.fromField = "fraction_changed";
ROUTE2029.toNode = "Stop_vt6RotInterp";
ROUTE2029.toField = "set_fraction";
browser.currentScene.children[513] = ROUTE2029;

let ROUTE2030 = browser.currentScene.createNode("ROUTE");
ROUTE2030.fromNode = "StopTimer";
ROUTE2030.fromField = "fraction_changed";
ROUTE2030.toNode = "Stop_vt5RotInterp";
ROUTE2030.toField = "set_fraction";
browser.currentScene.children[514] = ROUTE2030;

let ROUTE2031 = browser.currentScene.createNode("ROUTE");
ROUTE2031.fromNode = "StopTimer";
ROUTE2031.fromField = "fraction_changed";
ROUTE2031.toNode = "Stop_vt4RotInterp";
ROUTE2031.toField = "set_fraction";
browser.currentScene.children[515] = ROUTE2031;

let ROUTE2032 = browser.currentScene.createNode("ROUTE");
ROUTE2032.fromNode = "StopTimer";
ROUTE2032.fromField = "fraction_changed";
ROUTE2032.toNode = "Stop_vt3RotInterp";
ROUTE2032.toField = "set_fraction";
browser.currentScene.children[516] = ROUTE2032;

let ROUTE2033 = browser.currentScene.createNode("ROUTE");
ROUTE2033.fromNode = "StopTimer";
ROUTE2033.fromField = "fraction_changed";
ROUTE2033.toNode = "Stop_vt2RotInterp";
ROUTE2033.toField = "set_fraction";
browser.currentScene.children[517] = ROUTE2033;

let ROUTE2034 = browser.currentScene.createNode("ROUTE");
ROUTE2034.fromNode = "StopTimer";
ROUTE2034.fromField = "fraction_changed";
ROUTE2034.toNode = "Stop_vt1RotInterp";
ROUTE2034.toField = "set_fraction";
browser.currentScene.children[518] = ROUTE2034;

let ROUTE2035 = browser.currentScene.createNode("ROUTE");
ROUTE2035.fromNode = "StopTimer";
ROUTE2035.fromField = "fraction_changed";
ROUTE2035.toNode = "Stop_vc7RotInterp";
ROUTE2035.toField = "set_fraction";
browser.currentScene.children[519] = ROUTE2035;

let ROUTE2036 = browser.currentScene.createNode("ROUTE");
ROUTE2036.fromNode = "StopTimer";
ROUTE2036.fromField = "fraction_changed";
ROUTE2036.toNode = "Stop_vc6RotInterp";
ROUTE2036.toField = "set_fraction";
browser.currentScene.children[520] = ROUTE2036;

let ROUTE2037 = browser.currentScene.createNode("ROUTE");
ROUTE2037.fromNode = "StopTimer";
ROUTE2037.fromField = "fraction_changed";
ROUTE2037.toNode = "Stop_vc5RotInterp";
ROUTE2037.toField = "set_fraction";
browser.currentScene.children[521] = ROUTE2037;

let ROUTE2038 = browser.currentScene.createNode("ROUTE");
ROUTE2038.fromNode = "StopTimer";
ROUTE2038.fromField = "fraction_changed";
ROUTE2038.toNode = "Stop_vc4RotInterp";
ROUTE2038.toField = "set_fraction";
browser.currentScene.children[522] = ROUTE2038;

let ROUTE2039 = browser.currentScene.createNode("ROUTE");
ROUTE2039.fromNode = "StopTimer";
ROUTE2039.fromField = "fraction_changed";
ROUTE2039.toNode = "Stop_vc3RotInterp";
ROUTE2039.toField = "set_fraction";
browser.currentScene.children[523] = ROUTE2039;

let ROUTE2040 = browser.currentScene.createNode("ROUTE");
ROUTE2040.fromNode = "StopTimer";
ROUTE2040.fromField = "fraction_changed";
ROUTE2040.toNode = "Stop_vc2RotInterp";
ROUTE2040.toField = "set_fraction";
browser.currentScene.children[524] = ROUTE2040;

let ROUTE2041 = browser.currentScene.createNode("ROUTE");
ROUTE2041.fromNode = "StopTimer";
ROUTE2041.fromField = "fraction_changed";
ROUTE2041.toNode = "Stop_vc1RotInterp";
ROUTE2041.toField = "set_fraction";
browser.currentScene.children[525] = ROUTE2041;

let ROUTE2042 = browser.currentScene.createNode("ROUTE");
ROUTE2042.fromNode = "StopTimer";
ROUTE2042.fromField = "fraction_changed";
ROUTE2042.toNode = "Stop_skullbaseRotInterp";
ROUTE2042.toField = "set_fraction";
browser.currentScene.children[526] = ROUTE2042;

let ROUTE2043 = browser.currentScene.createNode("ROUTE");
ROUTE2043.fromNode = "StopTimer";
ROUTE2043.fromField = "fraction_changed";
ROUTE2043.toNode = "Stop_l_eyeball_jointRotInterp";
ROUTE2043.toField = "set_fraction";
browser.currentScene.children[527] = ROUTE2043;

let ROUTE2044 = browser.currentScene.createNode("ROUTE");
ROUTE2044.fromNode = "StopTimer";
ROUTE2044.fromField = "fraction_changed";
ROUTE2044.toNode = "Stop_r_eyeball_jointRotInterp";
ROUTE2044.toField = "set_fraction";
browser.currentScene.children[528] = ROUTE2044;

let ROUTE2045 = browser.currentScene.createNode("ROUTE");
ROUTE2045.fromNode = "StopTimer";
ROUTE2045.fromField = "fraction_changed";
ROUTE2045.toNode = "Stop_l_sternoclavicularRotInterp";
ROUTE2045.toField = "set_fraction";
browser.currentScene.children[529] = ROUTE2045;

let ROUTE2046 = browser.currentScene.createNode("ROUTE");
ROUTE2046.fromNode = "StopTimer";
ROUTE2046.fromField = "fraction_changed";
ROUTE2046.toNode = "Stop_l_acromioclavicularRotInterp";
ROUTE2046.toField = "set_fraction";
browser.currentScene.children[530] = ROUTE2046;

let ROUTE2047 = browser.currentScene.createNode("ROUTE");
ROUTE2047.fromNode = "StopTimer";
ROUTE2047.fromField = "fraction_changed";
ROUTE2047.toNode = "Stop_l_shoulderRotInterp";
ROUTE2047.toField = "set_fraction";
browser.currentScene.children[531] = ROUTE2047;

let ROUTE2048 = browser.currentScene.createNode("ROUTE");
ROUTE2048.fromNode = "StopTimer";
ROUTE2048.fromField = "fraction_changed";
ROUTE2048.toNode = "Stop_l_elbowRotInterp";
ROUTE2048.toField = "set_fraction";
browser.currentScene.children[532] = ROUTE2048;

let ROUTE2049 = browser.currentScene.createNode("ROUTE");
ROUTE2049.fromNode = "StopTimer";
ROUTE2049.fromField = "fraction_changed";
ROUTE2049.toNode = "Stop_l_wristRotInterp";
ROUTE2049.toField = "set_fraction";
browser.currentScene.children[533] = ROUTE2049;

let ROUTE2050 = browser.currentScene.createNode("ROUTE");
ROUTE2050.fromNode = "StopTimer";
ROUTE2050.fromField = "fraction_changed";
ROUTE2050.toNode = "Stop_l_thumb1RotInterp";
ROUTE2050.toField = "set_fraction";
browser.currentScene.children[534] = ROUTE2050;

let ROUTE2051 = browser.currentScene.createNode("ROUTE");
ROUTE2051.fromNode = "StopTimer";
ROUTE2051.fromField = "fraction_changed";
ROUTE2051.toNode = "Stop_l_thumb2RotInterp";
ROUTE2051.toField = "set_fraction";
browser.currentScene.children[535] = ROUTE2051;

let ROUTE2052 = browser.currentScene.createNode("ROUTE");
ROUTE2052.fromNode = "StopTimer";
ROUTE2052.fromField = "fraction_changed";
ROUTE2052.toNode = "Stop_l_thumb3RotInterp";
ROUTE2052.toField = "set_fraction";
browser.currentScene.children[536] = ROUTE2052;

let ROUTE2053 = browser.currentScene.createNode("ROUTE");
ROUTE2053.fromNode = "StopTimer";
ROUTE2053.fromField = "fraction_changed";
ROUTE2053.toNode = "Stop_l_index0RotInterp";
ROUTE2053.toField = "set_fraction";
browser.currentScene.children[537] = ROUTE2053;

let ROUTE2054 = browser.currentScene.createNode("ROUTE");
ROUTE2054.fromNode = "StopTimer";
ROUTE2054.fromField = "fraction_changed";
ROUTE2054.toNode = "Stop_l_index1RotInterp";
ROUTE2054.toField = "set_fraction";
browser.currentScene.children[538] = ROUTE2054;

let ROUTE2055 = browser.currentScene.createNode("ROUTE");
ROUTE2055.fromNode = "StopTimer";
ROUTE2055.fromField = "fraction_changed";
ROUTE2055.toNode = "Stop_l_index2RotInterp";
ROUTE2055.toField = "set_fraction";
browser.currentScene.children[539] = ROUTE2055;

let ROUTE2056 = browser.currentScene.createNode("ROUTE");
ROUTE2056.fromNode = "StopTimer";
ROUTE2056.fromField = "fraction_changed";
ROUTE2056.toNode = "Stop_l_index3RotInterp";
ROUTE2056.toField = "set_fraction";
browser.currentScene.children[540] = ROUTE2056;

let ROUTE2057 = browser.currentScene.createNode("ROUTE");
ROUTE2057.fromNode = "StopTimer";
ROUTE2057.fromField = "fraction_changed";
ROUTE2057.toNode = "Stop_l_middle0RotInterp";
ROUTE2057.toField = "set_fraction";
browser.currentScene.children[541] = ROUTE2057;

let ROUTE2058 = browser.currentScene.createNode("ROUTE");
ROUTE2058.fromNode = "StopTimer";
ROUTE2058.fromField = "fraction_changed";
ROUTE2058.toNode = "Stop_l_middle1RotInterp";
ROUTE2058.toField = "set_fraction";
browser.currentScene.children[542] = ROUTE2058;

let ROUTE2059 = browser.currentScene.createNode("ROUTE");
ROUTE2059.fromNode = "StopTimer";
ROUTE2059.fromField = "fraction_changed";
ROUTE2059.toNode = "Stop_l_middle2RotInterp";
ROUTE2059.toField = "set_fraction";
browser.currentScene.children[543] = ROUTE2059;

let ROUTE2060 = browser.currentScene.createNode("ROUTE");
ROUTE2060.fromNode = "StopTimer";
ROUTE2060.fromField = "fraction_changed";
ROUTE2060.toNode = "Stop_l_middle3RotInterp";
ROUTE2060.toField = "set_fraction";
browser.currentScene.children[544] = ROUTE2060;

let ROUTE2061 = browser.currentScene.createNode("ROUTE");
ROUTE2061.fromNode = "StopTimer";
ROUTE2061.fromField = "fraction_changed";
ROUTE2061.toNode = "Stop_l_ring0RotInterp";
ROUTE2061.toField = "set_fraction";
browser.currentScene.children[545] = ROUTE2061;

let ROUTE2062 = browser.currentScene.createNode("ROUTE");
ROUTE2062.fromNode = "StopTimer";
ROUTE2062.fromField = "fraction_changed";
ROUTE2062.toNode = "Stop_l_ring1RotInterp";
ROUTE2062.toField = "set_fraction";
browser.currentScene.children[546] = ROUTE2062;

let ROUTE2063 = browser.currentScene.createNode("ROUTE");
ROUTE2063.fromNode = "StopTimer";
ROUTE2063.fromField = "fraction_changed";
ROUTE2063.toNode = "Stop_l_ring2RotInterp";
ROUTE2063.toField = "set_fraction";
browser.currentScene.children[547] = ROUTE2063;

let ROUTE2064 = browser.currentScene.createNode("ROUTE");
ROUTE2064.fromNode = "StopTimer";
ROUTE2064.fromField = "fraction_changed";
ROUTE2064.toNode = "Stop_l_ring3RotInterp";
ROUTE2064.toField = "set_fraction";
browser.currentScene.children[548] = ROUTE2064;

let ROUTE2065 = browser.currentScene.createNode("ROUTE");
ROUTE2065.fromNode = "StopTimer";
ROUTE2065.fromField = "fraction_changed";
ROUTE2065.toNode = "Stop_l_pinky0RotInterp";
ROUTE2065.toField = "set_fraction";
browser.currentScene.children[549] = ROUTE2065;

let ROUTE2066 = browser.currentScene.createNode("ROUTE");
ROUTE2066.fromNode = "StopTimer";
ROUTE2066.fromField = "fraction_changed";
ROUTE2066.toNode = "Stop_l_pinky1RotInterp";
ROUTE2066.toField = "set_fraction";
browser.currentScene.children[550] = ROUTE2066;

let ROUTE2067 = browser.currentScene.createNode("ROUTE");
ROUTE2067.fromNode = "StopTimer";
ROUTE2067.fromField = "fraction_changed";
ROUTE2067.toNode = "Stop_l_pinky2RotInterp";
ROUTE2067.toField = "set_fraction";
browser.currentScene.children[551] = ROUTE2067;

let ROUTE2068 = browser.currentScene.createNode("ROUTE");
ROUTE2068.fromNode = "StopTimer";
ROUTE2068.fromField = "fraction_changed";
ROUTE2068.toNode = "Stop_l_pinky3RotInterp";
ROUTE2068.toField = "set_fraction";
browser.currentScene.children[552] = ROUTE2068;

let ROUTE2069 = browser.currentScene.createNode("ROUTE");
ROUTE2069.fromNode = "StopTimer";
ROUTE2069.fromField = "fraction_changed";
ROUTE2069.toNode = "Stop_r_sternoclavicularRotInterp";
ROUTE2069.toField = "set_fraction";
browser.currentScene.children[553] = ROUTE2069;

let ROUTE2070 = browser.currentScene.createNode("ROUTE");
ROUTE2070.fromNode = "StopTimer";
ROUTE2070.fromField = "fraction_changed";
ROUTE2070.toNode = "Stop_r_acromioclavicularRotInterp";
ROUTE2070.toField = "set_fraction";
browser.currentScene.children[554] = ROUTE2070;

let ROUTE2071 = browser.currentScene.createNode("ROUTE");
ROUTE2071.fromNode = "StopTimer";
ROUTE2071.fromField = "fraction_changed";
ROUTE2071.toNode = "Stop_r_shoulderRotInterp";
ROUTE2071.toField = "set_fraction";
browser.currentScene.children[555] = ROUTE2071;

let ROUTE2072 = browser.currentScene.createNode("ROUTE");
ROUTE2072.fromNode = "StopTimer";
ROUTE2072.fromField = "fraction_changed";
ROUTE2072.toNode = "Stop_r_elbowRotInterp";
ROUTE2072.toField = "set_fraction";
browser.currentScene.children[556] = ROUTE2072;

let ROUTE2073 = browser.currentScene.createNode("ROUTE");
ROUTE2073.fromNode = "StopTimer";
ROUTE2073.fromField = "fraction_changed";
ROUTE2073.toNode = "Stop_r_wristRotInterp";
ROUTE2073.toField = "set_fraction";
browser.currentScene.children[557] = ROUTE2073;

let ROUTE2074 = browser.currentScene.createNode("ROUTE");
ROUTE2074.fromNode = "StopTimer";
ROUTE2074.fromField = "fraction_changed";
ROUTE2074.toNode = "Stop_r_thumb1RotInterp";
ROUTE2074.toField = "set_fraction";
browser.currentScene.children[558] = ROUTE2074;

let ROUTE2075 = browser.currentScene.createNode("ROUTE");
ROUTE2075.fromNode = "StopTimer";
ROUTE2075.fromField = "fraction_changed";
ROUTE2075.toNode = "Stop_r_thumb2RotInterp";
ROUTE2075.toField = "set_fraction";
browser.currentScene.children[559] = ROUTE2075;

let ROUTE2076 = browser.currentScene.createNode("ROUTE");
ROUTE2076.fromNode = "StopTimer";
ROUTE2076.fromField = "fraction_changed";
ROUTE2076.toNode = "Stop_r_thumb3RotInterp";
ROUTE2076.toField = "set_fraction";
browser.currentScene.children[560] = ROUTE2076;

let ROUTE2077 = browser.currentScene.createNode("ROUTE");
ROUTE2077.fromNode = "StopTimer";
ROUTE2077.fromField = "fraction_changed";
ROUTE2077.toNode = "Stop_r_index0RotInterp";
ROUTE2077.toField = "set_fraction";
browser.currentScene.children[561] = ROUTE2077;

let ROUTE2078 = browser.currentScene.createNode("ROUTE");
ROUTE2078.fromNode = "StopTimer";
ROUTE2078.fromField = "fraction_changed";
ROUTE2078.toNode = "Stop_r_index1RotInterp";
ROUTE2078.toField = "set_fraction";
browser.currentScene.children[562] = ROUTE2078;

let ROUTE2079 = browser.currentScene.createNode("ROUTE");
ROUTE2079.fromNode = "StopTimer";
ROUTE2079.fromField = "fraction_changed";
ROUTE2079.toNode = "Stop_r_index2RotInterp";
ROUTE2079.toField = "set_fraction";
browser.currentScene.children[563] = ROUTE2079;

let ROUTE2080 = browser.currentScene.createNode("ROUTE");
ROUTE2080.fromNode = "StopTimer";
ROUTE2080.fromField = "fraction_changed";
ROUTE2080.toNode = "Stop_r_index3RotInterp";
ROUTE2080.toField = "set_fraction";
browser.currentScene.children[564] = ROUTE2080;

let ROUTE2081 = browser.currentScene.createNode("ROUTE");
ROUTE2081.fromNode = "StopTimer";
ROUTE2081.fromField = "fraction_changed";
ROUTE2081.toNode = "Stop_r_middle0RotInterp";
ROUTE2081.toField = "set_fraction";
browser.currentScene.children[565] = ROUTE2081;

let ROUTE2082 = browser.currentScene.createNode("ROUTE");
ROUTE2082.fromNode = "StopTimer";
ROUTE2082.fromField = "fraction_changed";
ROUTE2082.toNode = "Stop_r_middle1RotInterp";
ROUTE2082.toField = "set_fraction";
browser.currentScene.children[566] = ROUTE2082;

let ROUTE2083 = browser.currentScene.createNode("ROUTE");
ROUTE2083.fromNode = "StopTimer";
ROUTE2083.fromField = "fraction_changed";
ROUTE2083.toNode = "Stop_r_middle2RotInterp";
ROUTE2083.toField = "set_fraction";
browser.currentScene.children[567] = ROUTE2083;

let ROUTE2084 = browser.currentScene.createNode("ROUTE");
ROUTE2084.fromNode = "StopTimer";
ROUTE2084.fromField = "fraction_changed";
ROUTE2084.toNode = "Stop_r_middle3RotInterp";
ROUTE2084.toField = "set_fraction";
browser.currentScene.children[568] = ROUTE2084;

let ROUTE2085 = browser.currentScene.createNode("ROUTE");
ROUTE2085.fromNode = "StopTimer";
ROUTE2085.fromField = "fraction_changed";
ROUTE2085.toNode = "Stop_r_ring0RotInterp";
ROUTE2085.toField = "set_fraction";
browser.currentScene.children[569] = ROUTE2085;

let ROUTE2086 = browser.currentScene.createNode("ROUTE");
ROUTE2086.fromNode = "StopTimer";
ROUTE2086.fromField = "fraction_changed";
ROUTE2086.toNode = "Stop_r_ring1RotInterp";
ROUTE2086.toField = "set_fraction";
browser.currentScene.children[570] = ROUTE2086;

let ROUTE2087 = browser.currentScene.createNode("ROUTE");
ROUTE2087.fromNode = "StopTimer";
ROUTE2087.fromField = "fraction_changed";
ROUTE2087.toNode = "Stop_r_ring2RotInterp";
ROUTE2087.toField = "set_fraction";
browser.currentScene.children[571] = ROUTE2087;

let ROUTE2088 = browser.currentScene.createNode("ROUTE");
ROUTE2088.fromNode = "StopTimer";
ROUTE2088.fromField = "fraction_changed";
ROUTE2088.toNode = "Stop_r_ring3RotInterp";
ROUTE2088.toField = "set_fraction";
browser.currentScene.children[572] = ROUTE2088;

let ROUTE2089 = browser.currentScene.createNode("ROUTE");
ROUTE2089.fromNode = "StopTimer";
ROUTE2089.fromField = "fraction_changed";
ROUTE2089.toNode = "Stop_r_pinky0RotInterp";
ROUTE2089.toField = "set_fraction";
browser.currentScene.children[573] = ROUTE2089;

let ROUTE2090 = browser.currentScene.createNode("ROUTE");
ROUTE2090.fromNode = "StopTimer";
ROUTE2090.fromField = "fraction_changed";
ROUTE2090.toNode = "Stop_r_pinky1RotInterp";
ROUTE2090.toField = "set_fraction";
browser.currentScene.children[574] = ROUTE2090;

let ROUTE2091 = browser.currentScene.createNode("ROUTE");
ROUTE2091.fromNode = "StopTimer";
ROUTE2091.fromField = "fraction_changed";
ROUTE2091.toNode = "Stop_r_pinky2RotInterp";
ROUTE2091.toField = "set_fraction";
browser.currentScene.children[575] = ROUTE2091;

let ROUTE2092 = browser.currentScene.createNode("ROUTE");
ROUTE2092.fromNode = "StopTimer";
ROUTE2092.fromField = "fraction_changed";
ROUTE2092.toNode = "Stop_r_pinky3RotInterp";
ROUTE2092.toField = "set_fraction";
browser.currentScene.children[576] = ROUTE2092;

let ROUTE2093 = browser.currentScene.createNode("ROUTE");
ROUTE2093.fromNode = "Stop_HumanoidRootTransInterp";
ROUTE2093.fromField = "value_changed";
ROUTE2093.toNode = "hanim_HumanoidRoot";
ROUTE2093.toField = "set_translation";
browser.currentScene.children[577] = ROUTE2093;

let ROUTE2094 = browser.currentScene.createNode("ROUTE");
ROUTE2094.fromNode = "Stop_HumanoidRootRotInterp";
ROUTE2094.fromField = "value_changed";
ROUTE2094.toNode = "hanim_HumanoidRoot";
ROUTE2094.toField = "set_rotation";
browser.currentScene.children[578] = ROUTE2094;

let ROUTE2095 = browser.currentScene.createNode("ROUTE");
ROUTE2095.fromNode = "Stop_sacroiliacRotInterp";
ROUTE2095.fromField = "value_changed";
ROUTE2095.toNode = "hanim_sacroiliac";
ROUTE2095.toField = "set_rotation";
browser.currentScene.children[579] = ROUTE2095;

let ROUTE2096 = browser.currentScene.createNode("ROUTE");
ROUTE2096.fromNode = "Stop_l_hipRotInterp";
ROUTE2096.fromField = "value_changed";
ROUTE2096.toNode = "hanim_l_hip";
ROUTE2096.toField = "set_rotation";
browser.currentScene.children[580] = ROUTE2096;

let ROUTE2097 = browser.currentScene.createNode("ROUTE");
ROUTE2097.fromNode = "Stop_l_kneeRotInterp";
ROUTE2097.fromField = "value_changed";
ROUTE2097.toNode = "hanim_l_knee";
ROUTE2097.toField = "set_rotation";
browser.currentScene.children[581] = ROUTE2097;

let ROUTE2098 = browser.currentScene.createNode("ROUTE");
ROUTE2098.fromNode = "Stop_l_ankleRotInterp";
ROUTE2098.fromField = "value_changed";
ROUTE2098.toNode = "hanim_l_ankle";
ROUTE2098.toField = "set_rotation";
browser.currentScene.children[582] = ROUTE2098;

let ROUTE2099 = browser.currentScene.createNode("ROUTE");
ROUTE2099.fromNode = "Stop_l_subtalarRotInterp";
ROUTE2099.fromField = "value_changed";
ROUTE2099.toNode = "hanim_l_subtalar";
ROUTE2099.toField = "set_rotation";
browser.currentScene.children[583] = ROUTE2099;

let ROUTE2100 = browser.currentScene.createNode("ROUTE");
ROUTE2100.fromNode = "Stop_l_midtarsalRotInterp";
ROUTE2100.fromField = "value_changed";
ROUTE2100.toNode = "hanim_l_midtarsal";
ROUTE2100.toField = "set_rotation";
browser.currentScene.children[584] = ROUTE2100;

let ROUTE2101 = browser.currentScene.createNode("ROUTE");
ROUTE2101.fromNode = "Stop_l_metatarsalRotInterp";
ROUTE2101.fromField = "value_changed";
ROUTE2101.toNode = "hanim_l_metatarsal";
ROUTE2101.toField = "set_rotation";
browser.currentScene.children[585] = ROUTE2101;

let ROUTE2102 = browser.currentScene.createNode("ROUTE");
ROUTE2102.fromNode = "Stop_r_hipRotInterp";
ROUTE2102.fromField = "value_changed";
ROUTE2102.toNode = "hanim_r_hip";
ROUTE2102.toField = "set_rotation";
browser.currentScene.children[586] = ROUTE2102;

let ROUTE2103 = browser.currentScene.createNode("ROUTE");
ROUTE2103.fromNode = "Stop_r_kneeRotInterp";
ROUTE2103.fromField = "value_changed";
ROUTE2103.toNode = "hanim_r_knee";
ROUTE2103.toField = "set_rotation";
browser.currentScene.children[587] = ROUTE2103;

let ROUTE2104 = browser.currentScene.createNode("ROUTE");
ROUTE2104.fromNode = "Stop_r_ankleRotInterp";
ROUTE2104.fromField = "value_changed";
ROUTE2104.toNode = "hanim_r_ankle";
ROUTE2104.toField = "set_rotation";
browser.currentScene.children[588] = ROUTE2104;

let ROUTE2105 = browser.currentScene.createNode("ROUTE");
ROUTE2105.fromNode = "Stop_r_subtalarRotInterp";
ROUTE2105.fromField = "value_changed";
ROUTE2105.toNode = "hanim_r_subtalar";
ROUTE2105.toField = "set_rotation";
browser.currentScene.children[589] = ROUTE2105;

let ROUTE2106 = browser.currentScene.createNode("ROUTE");
ROUTE2106.fromNode = "Stop_r_midtarsalRotInterp";
ROUTE2106.fromField = "value_changed";
ROUTE2106.toNode = "hanim_r_midtarsal";
ROUTE2106.toField = "set_rotation";
browser.currentScene.children[590] = ROUTE2106;

let ROUTE2107 = browser.currentScene.createNode("ROUTE");
ROUTE2107.fromNode = "Stop_r_metatarsalRotInterp";
ROUTE2107.fromField = "value_changed";
ROUTE2107.toNode = "hanim_r_metatarsal";
ROUTE2107.toField = "set_rotation";
browser.currentScene.children[591] = ROUTE2107;

let ROUTE2108 = browser.currentScene.createNode("ROUTE");
ROUTE2108.fromNode = "Stop_vl5RotInterp";
ROUTE2108.fromField = "value_changed";
ROUTE2108.toNode = "hanim_vl5";
ROUTE2108.toField = "set_rotation";
browser.currentScene.children[592] = ROUTE2108;

let ROUTE2109 = browser.currentScene.createNode("ROUTE");
ROUTE2109.fromNode = "Stop_vl4RotInterp";
ROUTE2109.fromField = "value_changed";
ROUTE2109.toNode = "hanim_vl4";
ROUTE2109.toField = "set_rotation";
browser.currentScene.children[593] = ROUTE2109;

let ROUTE2110 = browser.currentScene.createNode("ROUTE");
ROUTE2110.fromNode = "Stop_vl3RotInterp";
ROUTE2110.fromField = "value_changed";
ROUTE2110.toNode = "hanim_vl3";
ROUTE2110.toField = "set_rotation";
browser.currentScene.children[594] = ROUTE2110;

let ROUTE2111 = browser.currentScene.createNode("ROUTE");
ROUTE2111.fromNode = "Stop_vl2RotInterp";
ROUTE2111.fromField = "value_changed";
ROUTE2111.toNode = "hanim_vl2";
ROUTE2111.toField = "set_rotation";
browser.currentScene.children[595] = ROUTE2111;

let ROUTE2112 = browser.currentScene.createNode("ROUTE");
ROUTE2112.fromNode = "Stop_vl1RotInterp";
ROUTE2112.fromField = "value_changed";
ROUTE2112.toNode = "hanim_vl1";
ROUTE2112.toField = "set_rotation";
browser.currentScene.children[596] = ROUTE2112;

let ROUTE2113 = browser.currentScene.createNode("ROUTE");
ROUTE2113.fromNode = "Stop_vt12RotInterp";
ROUTE2113.fromField = "value_changed";
ROUTE2113.toNode = "hanim_vt12";
ROUTE2113.toField = "set_rotation";
browser.currentScene.children[597] = ROUTE2113;

let ROUTE2114 = browser.currentScene.createNode("ROUTE");
ROUTE2114.fromNode = "Stop_vt11RotInterp";
ROUTE2114.fromField = "value_changed";
ROUTE2114.toNode = "hanim_vt11";
ROUTE2114.toField = "set_rotation";
browser.currentScene.children[598] = ROUTE2114;

let ROUTE2115 = browser.currentScene.createNode("ROUTE");
ROUTE2115.fromNode = "Stop_vt10RotInterp";
ROUTE2115.fromField = "value_changed";
ROUTE2115.toNode = "hanim_vt10";
ROUTE2115.toField = "set_rotation";
browser.currentScene.children[599] = ROUTE2115;

let ROUTE2116 = browser.currentScene.createNode("ROUTE");
ROUTE2116.fromNode = "Stop_vt9RotInterp";
ROUTE2116.fromField = "value_changed";
ROUTE2116.toNode = "hanim_vt9";
ROUTE2116.toField = "set_rotation";
browser.currentScene.children[600] = ROUTE2116;

let ROUTE2117 = browser.currentScene.createNode("ROUTE");
ROUTE2117.fromNode = "Stop_vt8RotInterp";
ROUTE2117.fromField = "value_changed";
ROUTE2117.toNode = "hanim_vt8";
ROUTE2117.toField = "set_rotation";
browser.currentScene.children[601] = ROUTE2117;

let ROUTE2118 = browser.currentScene.createNode("ROUTE");
ROUTE2118.fromNode = "Stop_vt7RotInterp";
ROUTE2118.fromField = "value_changed";
ROUTE2118.toNode = "hanim_vt7";
ROUTE2118.toField = "set_rotation";
browser.currentScene.children[602] = ROUTE2118;

let ROUTE2119 = browser.currentScene.createNode("ROUTE");
ROUTE2119.fromNode = "Stop_vt6RotInterp";
ROUTE2119.fromField = "value_changed";
ROUTE2119.toNode = "hanim_vt6";
ROUTE2119.toField = "set_rotation";
browser.currentScene.children[603] = ROUTE2119;

let ROUTE2120 = browser.currentScene.createNode("ROUTE");
ROUTE2120.fromNode = "Stop_vt5RotInterp";
ROUTE2120.fromField = "value_changed";
ROUTE2120.toNode = "hanim_vt5";
ROUTE2120.toField = "set_rotation";
browser.currentScene.children[604] = ROUTE2120;

let ROUTE2121 = browser.currentScene.createNode("ROUTE");
ROUTE2121.fromNode = "Stop_vt4RotInterp";
ROUTE2121.fromField = "value_changed";
ROUTE2121.toNode = "hanim_vt4";
ROUTE2121.toField = "set_rotation";
browser.currentScene.children[605] = ROUTE2121;

let ROUTE2122 = browser.currentScene.createNode("ROUTE");
ROUTE2122.fromNode = "Stop_vt3RotInterp";
ROUTE2122.fromField = "value_changed";
ROUTE2122.toNode = "hanim_vt3";
ROUTE2122.toField = "set_rotation";
browser.currentScene.children[606] = ROUTE2122;

let ROUTE2123 = browser.currentScene.createNode("ROUTE");
ROUTE2123.fromNode = "Stop_vt2RotInterp";
ROUTE2123.fromField = "value_changed";
ROUTE2123.toNode = "hanim_vt2";
ROUTE2123.toField = "set_rotation";
browser.currentScene.children[607] = ROUTE2123;

let ROUTE2124 = browser.currentScene.createNode("ROUTE");
ROUTE2124.fromNode = "Stop_vt1RotInterp";
ROUTE2124.fromField = "value_changed";
ROUTE2124.toNode = "hanim_vt1";
ROUTE2124.toField = "set_rotation";
browser.currentScene.children[608] = ROUTE2124;

let ROUTE2125 = browser.currentScene.createNode("ROUTE");
ROUTE2125.fromNode = "Stop_vc7RotInterp";
ROUTE2125.fromField = "value_changed";
ROUTE2125.toNode = "hanim_vc7";
ROUTE2125.toField = "set_rotation";
browser.currentScene.children[609] = ROUTE2125;

let ROUTE2126 = browser.currentScene.createNode("ROUTE");
ROUTE2126.fromNode = "Stop_vc6RotInterp";
ROUTE2126.fromField = "value_changed";
ROUTE2126.toNode = "hanim_vc6";
ROUTE2126.toField = "set_rotation";
browser.currentScene.children[610] = ROUTE2126;

let ROUTE2127 = browser.currentScene.createNode("ROUTE");
ROUTE2127.fromNode = "Stop_vc5RotInterp";
ROUTE2127.fromField = "value_changed";
ROUTE2127.toNode = "hanim_vc5";
ROUTE2127.toField = "set_rotation";
browser.currentScene.children[611] = ROUTE2127;

let ROUTE2128 = browser.currentScene.createNode("ROUTE");
ROUTE2128.fromNode = "Stop_vc4RotInterp";
ROUTE2128.fromField = "value_changed";
ROUTE2128.toNode = "hanim_vc4";
ROUTE2128.toField = "set_rotation";
browser.currentScene.children[612] = ROUTE2128;

let ROUTE2129 = browser.currentScene.createNode("ROUTE");
ROUTE2129.fromNode = "Stop_vc3RotInterp";
ROUTE2129.fromField = "value_changed";
ROUTE2129.toNode = "hanim_vc3";
ROUTE2129.toField = "set_rotation";
browser.currentScene.children[613] = ROUTE2129;

let ROUTE2130 = browser.currentScene.createNode("ROUTE");
ROUTE2130.fromNode = "Stop_vc2RotInterp";
ROUTE2130.fromField = "value_changed";
ROUTE2130.toNode = "hanim_vc2";
ROUTE2130.toField = "set_rotation";
browser.currentScene.children[614] = ROUTE2130;

let ROUTE2131 = browser.currentScene.createNode("ROUTE");
ROUTE2131.fromNode = "Stop_vc1RotInterp";
ROUTE2131.fromField = "value_changed";
ROUTE2131.toNode = "hanim_vc1";
ROUTE2131.toField = "set_rotation";
browser.currentScene.children[615] = ROUTE2131;

let ROUTE2132 = browser.currentScene.createNode("ROUTE");
ROUTE2132.fromNode = "Stop_skullbaseRotInterp";
ROUTE2132.fromField = "value_changed";
ROUTE2132.toNode = "hanim_skullbase";
ROUTE2132.toField = "set_rotation";
browser.currentScene.children[616] = ROUTE2132;

let ROUTE2133 = browser.currentScene.createNode("ROUTE");
ROUTE2133.fromNode = "Stop_l_eyeball_jointRotInterp";
ROUTE2133.fromField = "value_changed";
ROUTE2133.toNode = "hanim_l_eyeball_joint";
ROUTE2133.toField = "set_rotation";
browser.currentScene.children[617] = ROUTE2133;

let ROUTE2134 = browser.currentScene.createNode("ROUTE");
ROUTE2134.fromNode = "Stop_r_eyeball_jointRotInterp";
ROUTE2134.fromField = "value_changed";
ROUTE2134.toNode = "hanim_r_eyeball_joint";
ROUTE2134.toField = "set_rotation";
browser.currentScene.children[618] = ROUTE2134;

let ROUTE2135 = browser.currentScene.createNode("ROUTE");
ROUTE2135.fromNode = "Stop_l_sternoclavicularRotInterp";
ROUTE2135.fromField = "value_changed";
ROUTE2135.toNode = "hanim_l_sternoclavicular";
ROUTE2135.toField = "set_rotation";
browser.currentScene.children[619] = ROUTE2135;

let ROUTE2136 = browser.currentScene.createNode("ROUTE");
ROUTE2136.fromNode = "Stop_l_acromioclavicularRotInterp";
ROUTE2136.fromField = "value_changed";
ROUTE2136.toNode = "hanim_l_acromioclavicular";
ROUTE2136.toField = "set_rotation";
browser.currentScene.children[620] = ROUTE2136;

let ROUTE2137 = browser.currentScene.createNode("ROUTE");
ROUTE2137.fromNode = "Stop_l_shoulderRotInterp";
ROUTE2137.fromField = "value_changed";
ROUTE2137.toNode = "hanim_l_shoulder";
ROUTE2137.toField = "set_rotation";
browser.currentScene.children[621] = ROUTE2137;

let ROUTE2138 = browser.currentScene.createNode("ROUTE");
ROUTE2138.fromNode = "Stop_l_elbowRotInterp";
ROUTE2138.fromField = "value_changed";
ROUTE2138.toNode = "hanim_l_elbow";
ROUTE2138.toField = "set_rotation";
browser.currentScene.children[622] = ROUTE2138;

let ROUTE2139 = browser.currentScene.createNode("ROUTE");
ROUTE2139.fromNode = "Stop_l_wristRotInterp";
ROUTE2139.fromField = "value_changed";
ROUTE2139.toNode = "hanim_l_wrist";
ROUTE2139.toField = "set_rotation";
browser.currentScene.children[623] = ROUTE2139;

let ROUTE2140 = browser.currentScene.createNode("ROUTE");
ROUTE2140.fromNode = "Stop_l_thumb1RotInterp";
ROUTE2140.fromField = "value_changed";
ROUTE2140.toNode = "hanim_l_thumb1";
ROUTE2140.toField = "set_rotation";
browser.currentScene.children[624] = ROUTE2140;

let ROUTE2141 = browser.currentScene.createNode("ROUTE");
ROUTE2141.fromNode = "Stop_l_thumb2RotInterp";
ROUTE2141.fromField = "value_changed";
ROUTE2141.toNode = "hanim_l_thumb2";
ROUTE2141.toField = "set_rotation";
browser.currentScene.children[625] = ROUTE2141;

let ROUTE2142 = browser.currentScene.createNode("ROUTE");
ROUTE2142.fromNode = "Stop_l_thumb3RotInterp";
ROUTE2142.fromField = "value_changed";
ROUTE2142.toNode = "hanim_l_thumb3";
ROUTE2142.toField = "set_rotation";
browser.currentScene.children[626] = ROUTE2142;

let ROUTE2143 = browser.currentScene.createNode("ROUTE");
ROUTE2143.fromNode = "Stop_l_index0RotInterp";
ROUTE2143.fromField = "value_changed";
ROUTE2143.toNode = "hanim_l_index0";
ROUTE2143.toField = "set_rotation";
browser.currentScene.children[627] = ROUTE2143;

let ROUTE2144 = browser.currentScene.createNode("ROUTE");
ROUTE2144.fromNode = "Stop_l_index1RotInterp";
ROUTE2144.fromField = "value_changed";
ROUTE2144.toNode = "hanim_l_index1";
ROUTE2144.toField = "set_rotation";
browser.currentScene.children[628] = ROUTE2144;

let ROUTE2145 = browser.currentScene.createNode("ROUTE");
ROUTE2145.fromNode = "Stop_l_index2RotInterp";
ROUTE2145.fromField = "value_changed";
ROUTE2145.toNode = "hanim_l_index2";
ROUTE2145.toField = "set_rotation";
browser.currentScene.children[629] = ROUTE2145;

let ROUTE2146 = browser.currentScene.createNode("ROUTE");
ROUTE2146.fromNode = "Stop_l_index3RotInterp";
ROUTE2146.fromField = "value_changed";
ROUTE2146.toNode = "hanim_l_index3";
ROUTE2146.toField = "set_rotation";
browser.currentScene.children[630] = ROUTE2146;

let ROUTE2147 = browser.currentScene.createNode("ROUTE");
ROUTE2147.fromNode = "Stop_l_middle0RotInterp";
ROUTE2147.fromField = "value_changed";
ROUTE2147.toNode = "hanim_l_middle0";
ROUTE2147.toField = "set_rotation";
browser.currentScene.children[631] = ROUTE2147;

let ROUTE2148 = browser.currentScene.createNode("ROUTE");
ROUTE2148.fromNode = "Stop_l_middle1RotInterp";
ROUTE2148.fromField = "value_changed";
ROUTE2148.toNode = "hanim_l_middle1";
ROUTE2148.toField = "set_rotation";
browser.currentScene.children[632] = ROUTE2148;

let ROUTE2149 = browser.currentScene.createNode("ROUTE");
ROUTE2149.fromNode = "Stop_l_middle2RotInterp";
ROUTE2149.fromField = "value_changed";
ROUTE2149.toNode = "hanim_l_middle2";
ROUTE2149.toField = "set_rotation";
browser.currentScene.children[633] = ROUTE2149;

let ROUTE2150 = browser.currentScene.createNode("ROUTE");
ROUTE2150.fromNode = "Stop_l_middle3RotInterp";
ROUTE2150.fromField = "value_changed";
ROUTE2150.toNode = "hanim_l_middle3";
ROUTE2150.toField = "set_rotation";
browser.currentScene.children[634] = ROUTE2150;

let ROUTE2151 = browser.currentScene.createNode("ROUTE");
ROUTE2151.fromNode = "Stop_l_ring0RotInterp";
ROUTE2151.fromField = "value_changed";
ROUTE2151.toNode = "hanim_l_ring0";
ROUTE2151.toField = "set_rotation";
browser.currentScene.children[635] = ROUTE2151;

let ROUTE2152 = browser.currentScene.createNode("ROUTE");
ROUTE2152.fromNode = "Stop_l_ring1RotInterp";
ROUTE2152.fromField = "value_changed";
ROUTE2152.toNode = "hanim_l_ring1";
ROUTE2152.toField = "set_rotation";
browser.currentScene.children[636] = ROUTE2152;

let ROUTE2153 = browser.currentScene.createNode("ROUTE");
ROUTE2153.fromNode = "Stop_l_ring2RotInterp";
ROUTE2153.fromField = "value_changed";
ROUTE2153.toNode = "hanim_l_ring2";
ROUTE2153.toField = "set_rotation";
browser.currentScene.children[637] = ROUTE2153;

let ROUTE2154 = browser.currentScene.createNode("ROUTE");
ROUTE2154.fromNode = "Stop_l_ring3RotInterp";
ROUTE2154.fromField = "value_changed";
ROUTE2154.toNode = "hanim_l_ring3";
ROUTE2154.toField = "set_rotation";
browser.currentScene.children[638] = ROUTE2154;

let ROUTE2155 = browser.currentScene.createNode("ROUTE");
ROUTE2155.fromNode = "Stop_l_pinky0RotInterp";
ROUTE2155.fromField = "value_changed";
ROUTE2155.toNode = "hanim_l_pinky0";
ROUTE2155.toField = "set_rotation";
browser.currentScene.children[639] = ROUTE2155;

let ROUTE2156 = browser.currentScene.createNode("ROUTE");
ROUTE2156.fromNode = "Stop_l_pinky1RotInterp";
ROUTE2156.fromField = "value_changed";
ROUTE2156.toNode = "hanim_l_pinky1";
ROUTE2156.toField = "set_rotation";
browser.currentScene.children[640] = ROUTE2156;

let ROUTE2157 = browser.currentScene.createNode("ROUTE");
ROUTE2157.fromNode = "Stop_l_pinky2RotInterp";
ROUTE2157.fromField = "value_changed";
ROUTE2157.toNode = "hanim_l_pinky2";
ROUTE2157.toField = "set_rotation";
browser.currentScene.children[641] = ROUTE2157;

let ROUTE2158 = browser.currentScene.createNode("ROUTE");
ROUTE2158.fromNode = "Stop_l_pinky3RotInterp";
ROUTE2158.fromField = "value_changed";
ROUTE2158.toNode = "hanim_l_pinky3";
ROUTE2158.toField = "set_rotation";
browser.currentScene.children[642] = ROUTE2158;

let ROUTE2159 = browser.currentScene.createNode("ROUTE");
ROUTE2159.fromNode = "Stop_r_sternoclavicularRotInterp";
ROUTE2159.fromField = "value_changed";
ROUTE2159.toNode = "hanim_r_sternoclavicular";
ROUTE2159.toField = "set_rotation";
browser.currentScene.children[643] = ROUTE2159;

let ROUTE2160 = browser.currentScene.createNode("ROUTE");
ROUTE2160.fromNode = "Stop_r_acromioclavicularRotInterp";
ROUTE2160.fromField = "value_changed";
ROUTE2160.toNode = "hanim_r_acromioclavicular";
ROUTE2160.toField = "set_rotation";
browser.currentScene.children[644] = ROUTE2160;

let ROUTE2161 = browser.currentScene.createNode("ROUTE");
ROUTE2161.fromNode = "Stop_r_shoulderRotInterp";
ROUTE2161.fromField = "value_changed";
ROUTE2161.toNode = "hanim_r_shoulder";
ROUTE2161.toField = "set_rotation";
browser.currentScene.children[645] = ROUTE2161;

let ROUTE2162 = browser.currentScene.createNode("ROUTE");
ROUTE2162.fromNode = "Stop_r_elbowRotInterp";
ROUTE2162.fromField = "value_changed";
ROUTE2162.toNode = "hanim_r_elbow";
ROUTE2162.toField = "set_rotation";
browser.currentScene.children[646] = ROUTE2162;

let ROUTE2163 = browser.currentScene.createNode("ROUTE");
ROUTE2163.fromNode = "Stop_r_wristRotInterp";
ROUTE2163.fromField = "value_changed";
ROUTE2163.toNode = "hanim_r_wrist";
ROUTE2163.toField = "set_rotation";
browser.currentScene.children[647] = ROUTE2163;

let ROUTE2164 = browser.currentScene.createNode("ROUTE");
ROUTE2164.fromNode = "Stop_r_thumb1RotInterp";
ROUTE2164.fromField = "value_changed";
ROUTE2164.toNode = "hanim_r_thumb1";
ROUTE2164.toField = "set_rotation";
browser.currentScene.children[648] = ROUTE2164;

let ROUTE2165 = browser.currentScene.createNode("ROUTE");
ROUTE2165.fromNode = "Stop_r_thumb2RotInterp";
ROUTE2165.fromField = "value_changed";
ROUTE2165.toNode = "hanim_r_thumb2";
ROUTE2165.toField = "set_rotation";
browser.currentScene.children[649] = ROUTE2165;

let ROUTE2166 = browser.currentScene.createNode("ROUTE");
ROUTE2166.fromNode = "Stop_r_thumb3RotInterp";
ROUTE2166.fromField = "value_changed";
ROUTE2166.toNode = "hanim_r_thumb3";
ROUTE2166.toField = "set_rotation";
browser.currentScene.children[650] = ROUTE2166;

let ROUTE2167 = browser.currentScene.createNode("ROUTE");
ROUTE2167.fromNode = "Stop_r_index0RotInterp";
ROUTE2167.fromField = "value_changed";
ROUTE2167.toNode = "hanim_r_index0";
ROUTE2167.toField = "set_rotation";
browser.currentScene.children[651] = ROUTE2167;

let ROUTE2168 = browser.currentScene.createNode("ROUTE");
ROUTE2168.fromNode = "Stop_r_index1RotInterp";
ROUTE2168.fromField = "value_changed";
ROUTE2168.toNode = "hanim_r_index1";
ROUTE2168.toField = "set_rotation";
browser.currentScene.children[652] = ROUTE2168;

let ROUTE2169 = browser.currentScene.createNode("ROUTE");
ROUTE2169.fromNode = "Stop_r_index2RotInterp";
ROUTE2169.fromField = "value_changed";
ROUTE2169.toNode = "hanim_r_index2";
ROUTE2169.toField = "set_rotation";
browser.currentScene.children[653] = ROUTE2169;

let ROUTE2170 = browser.currentScene.createNode("ROUTE");
ROUTE2170.fromNode = "Stop_r_index3RotInterp";
ROUTE2170.fromField = "value_changed";
ROUTE2170.toNode = "hanim_r_index3";
ROUTE2170.toField = "set_rotation";
browser.currentScene.children[654] = ROUTE2170;

let ROUTE2171 = browser.currentScene.createNode("ROUTE");
ROUTE2171.fromNode = "Stop_r_middle0RotInterp";
ROUTE2171.fromField = "value_changed";
ROUTE2171.toNode = "hanim_r_middle0";
ROUTE2171.toField = "set_rotation";
browser.currentScene.children[655] = ROUTE2171;

let ROUTE2172 = browser.currentScene.createNode("ROUTE");
ROUTE2172.fromNode = "Stop_r_middle1RotInterp";
ROUTE2172.fromField = "value_changed";
ROUTE2172.toNode = "hanim_r_middle1";
ROUTE2172.toField = "set_rotation";
browser.currentScene.children[656] = ROUTE2172;

let ROUTE2173 = browser.currentScene.createNode("ROUTE");
ROUTE2173.fromNode = "Stop_r_middle2RotInterp";
ROUTE2173.fromField = "value_changed";
ROUTE2173.toNode = "hanim_r_middle2";
ROUTE2173.toField = "set_rotation";
browser.currentScene.children[657] = ROUTE2173;

let ROUTE2174 = browser.currentScene.createNode("ROUTE");
ROUTE2174.fromNode = "Stop_r_middle3RotInterp";
ROUTE2174.fromField = "value_changed";
ROUTE2174.toNode = "hanim_r_middle3";
ROUTE2174.toField = "set_rotation";
browser.currentScene.children[658] = ROUTE2174;

let ROUTE2175 = browser.currentScene.createNode("ROUTE");
ROUTE2175.fromNode = "Stop_r_ring0RotInterp";
ROUTE2175.fromField = "value_changed";
ROUTE2175.toNode = "hanim_r_ring0";
ROUTE2175.toField = "set_rotation";
browser.currentScene.children[659] = ROUTE2175;

let ROUTE2176 = browser.currentScene.createNode("ROUTE");
ROUTE2176.fromNode = "Stop_r_ring1RotInterp";
ROUTE2176.fromField = "value_changed";
ROUTE2176.toNode = "hanim_r_ring1";
ROUTE2176.toField = "set_rotation";
browser.currentScene.children[660] = ROUTE2176;

let ROUTE2177 = browser.currentScene.createNode("ROUTE");
ROUTE2177.fromNode = "Stop_r_ring2RotInterp";
ROUTE2177.fromField = "value_changed";
ROUTE2177.toNode = "hanim_r_ring2";
ROUTE2177.toField = "set_rotation";
browser.currentScene.children[661] = ROUTE2177;

let ROUTE2178 = browser.currentScene.createNode("ROUTE");
ROUTE2178.fromNode = "Stop_r_ring3RotInterp";
ROUTE2178.fromField = "value_changed";
ROUTE2178.toNode = "hanim_r_ring3";
ROUTE2178.toField = "set_rotation";
browser.currentScene.children[662] = ROUTE2178;

let ROUTE2179 = browser.currentScene.createNode("ROUTE");
ROUTE2179.fromNode = "Stop_r_pinky0RotInterp";
ROUTE2179.fromField = "value_changed";
ROUTE2179.toNode = "hanim_r_pinky0";
ROUTE2179.toField = "set_rotation";
browser.currentScene.children[663] = ROUTE2179;

let ROUTE2180 = browser.currentScene.createNode("ROUTE");
ROUTE2180.fromNode = "Stop_r_pinky1RotInterp";
ROUTE2180.fromField = "value_changed";
ROUTE2180.toNode = "hanim_r_pinky1";
ROUTE2180.toField = "set_rotation";
browser.currentScene.children[664] = ROUTE2180;

let ROUTE2181 = browser.currentScene.createNode("ROUTE");
ROUTE2181.fromNode = "Stop_r_pinky2RotInterp";
ROUTE2181.fromField = "value_changed";
ROUTE2181.toNode = "hanim_r_pinky2";
ROUTE2181.toField = "set_rotation";
browser.currentScene.children[665] = ROUTE2181;

let ROUTE2182 = browser.currentScene.createNode("ROUTE");
ROUTE2182.fromNode = "Stop_r_pinky3RotInterp";
ROUTE2182.fromField = "value_changed";
ROUTE2182.toNode = "hanim_r_pinky3";
ROUTE2182.toField = "set_rotation";
browser.currentScene.children[666] = ROUTE2182;

let ROUTE2183 = browser.currentScene.createNode("ROUTE");
ROUTE2183.fromNode = "HudProx";
ROUTE2183.fromField = "position_changed";
ROUTE2183.toNode = "HudXform";
ROUTE2183.toField = "set_translation";
browser.currentScene.children[667] = ROUTE2183;

let ROUTE2184 = browser.currentScene.createNode("ROUTE");
ROUTE2184.fromNode = "HudProx";
ROUTE2184.fromField = "orientation_changed";
ROUTE2184.toNode = "HudXform";
ROUTE2184.toField = "set_rotation";
browser.currentScene.children[668] = ROUTE2184;

let ROUTE2185 = browser.currentScene.createNode("ROUTE");
ROUTE2185.fromNode = "Stand_Touch";
ROUTE2185.fromField = "touchTime";
ROUTE2185.toNode = "PitchTimer";
ROUTE2185.toField = "set_stopTime";
browser.currentScene.children[669] = ROUTE2185;

let ROUTE2186 = browser.currentScene.createNode("ROUTE");
ROUTE2186.fromNode = "Stand_Touch";
ROUTE2186.fromField = "touchTime";
ROUTE2186.toNode = "YawTimer";
ROUTE2186.toField = "set_stopTime";
browser.currentScene.children[670] = ROUTE2186;

let ROUTE2187 = browser.currentScene.createNode("ROUTE");
ROUTE2187.fromNode = "Stand_Touch";
ROUTE2187.fromField = "touchTime";
ROUTE2187.toNode = "RollTimer";
ROUTE2187.toField = "set_stopTime";
browser.currentScene.children[671] = ROUTE2187;

let ROUTE2188 = browser.currentScene.createNode("ROUTE");
ROUTE2188.fromNode = "Stand_Touch";
ROUTE2188.fromField = "touchTime";
ROUTE2188.toNode = "WalkTimer";
ROUTE2188.toField = "set_stopTime";
browser.currentScene.children[672] = ROUTE2188;

let ROUTE2189 = browser.currentScene.createNode("ROUTE");
ROUTE2189.fromNode = "Stand_Touch";
ROUTE2189.fromField = "touchTime";
ROUTE2189.toNode = "RunTimer";
ROUTE2189.toField = "set_stopTime";
browser.currentScene.children[673] = ROUTE2189;

let ROUTE2190 = browser.currentScene.createNode("ROUTE");
ROUTE2190.fromNode = "Stand_Touch";
ROUTE2190.fromField = "touchTime";
ROUTE2190.toNode = "JumpTimer";
ROUTE2190.toField = "set_stopTime";
browser.currentScene.children[674] = ROUTE2190;

let ROUTE2191 = browser.currentScene.createNode("ROUTE");
ROUTE2191.fromNode = "Stand_Touch";
ROUTE2191.fromField = "touchTime";
ROUTE2191.toNode = "KickTimer";
ROUTE2191.toField = "set_stopTime";
browser.currentScene.children[675] = ROUTE2191;

let ROUTE2192 = browser.currentScene.createNode("ROUTE");
ROUTE2192.fromNode = "Stand_Touch";
ROUTE2192.fromField = "touchTime";
ROUTE2192.toNode = "StopTimer";
ROUTE2192.toField = "set_stopTime";
browser.currentScene.children[676] = ROUTE2192;

let ROUTE2193 = browser.currentScene.createNode("ROUTE");
ROUTE2193.fromNode = "Stand_Touch";
ROUTE2193.fromField = "touchTime";
ROUTE2193.toNode = "StandTimer";
ROUTE2193.toField = "set_startTime";
browser.currentScene.children[677] = ROUTE2193;

let ROUTE2194 = browser.currentScene.createNode("ROUTE");
ROUTE2194.fromNode = "Pitch_Touch";
ROUTE2194.fromField = "touchTime";
ROUTE2194.toNode = "StandTimer";
ROUTE2194.toField = "set_stopTime";
browser.currentScene.children[678] = ROUTE2194;

let ROUTE2195 = browser.currentScene.createNode("ROUTE");
ROUTE2195.fromNode = "Pitch_Touch";
ROUTE2195.fromField = "touchTime";
ROUTE2195.toNode = "YawTimer";
ROUTE2195.toField = "set_stopTime";
browser.currentScene.children[679] = ROUTE2195;

let ROUTE2196 = browser.currentScene.createNode("ROUTE");
ROUTE2196.fromNode = "Pitch_Touch";
ROUTE2196.fromField = "touchTime";
ROUTE2196.toNode = "RollTimer";
ROUTE2196.toField = "set_stopTime";
browser.currentScene.children[680] = ROUTE2196;

let ROUTE2197 = browser.currentScene.createNode("ROUTE");
ROUTE2197.fromNode = "Pitch_Touch";
ROUTE2197.fromField = "touchTime";
ROUTE2197.toNode = "WalkTimer";
ROUTE2197.toField = "set_stopTime";
browser.currentScene.children[681] = ROUTE2197;

let ROUTE2198 = browser.currentScene.createNode("ROUTE");
ROUTE2198.fromNode = "Pitch_Touch";
ROUTE2198.fromField = "touchTime";
ROUTE2198.toNode = "RunTimer";
ROUTE2198.toField = "set_stopTime";
browser.currentScene.children[682] = ROUTE2198;

let ROUTE2199 = browser.currentScene.createNode("ROUTE");
ROUTE2199.fromNode = "Pitch_Touch";
ROUTE2199.fromField = "touchTime";
ROUTE2199.toNode = "JumpTimer";
ROUTE2199.toField = "set_stopTime";
browser.currentScene.children[683] = ROUTE2199;

let ROUTE2200 = browser.currentScene.createNode("ROUTE");
ROUTE2200.fromNode = "Pitch_Touch";
ROUTE2200.fromField = "touchTime";
ROUTE2200.toNode = "KickTimer";
ROUTE2200.toField = "set_stopTime";
browser.currentScene.children[684] = ROUTE2200;

let ROUTE2201 = browser.currentScene.createNode("ROUTE");
ROUTE2201.fromNode = "Pitch_Touch";
ROUTE2201.fromField = "touchTime";
ROUTE2201.toNode = "StopTimer";
ROUTE2201.toField = "set_stopTime";
browser.currentScene.children[685] = ROUTE2201;

let ROUTE2202 = browser.currentScene.createNode("ROUTE");
ROUTE2202.fromNode = "Pitch_Touch";
ROUTE2202.fromField = "touchTime";
ROUTE2202.toNode = "PitchTimer";
ROUTE2202.toField = "set_startTime";
browser.currentScene.children[686] = ROUTE2202;

let ROUTE2203 = browser.currentScene.createNode("ROUTE");
ROUTE2203.fromNode = "Yaw_Touch";
ROUTE2203.fromField = "touchTime";
ROUTE2203.toNode = "StandTimer";
ROUTE2203.toField = "set_stopTime";
browser.currentScene.children[687] = ROUTE2203;

let ROUTE2204 = browser.currentScene.createNode("ROUTE");
ROUTE2204.fromNode = "Yaw_Touch";
ROUTE2204.fromField = "touchTime";
ROUTE2204.toNode = "PitchTimer";
ROUTE2204.toField = "set_stopTime";
browser.currentScene.children[688] = ROUTE2204;

let ROUTE2205 = browser.currentScene.createNode("ROUTE");
ROUTE2205.fromNode = "Yaw_Touch";
ROUTE2205.fromField = "touchTime";
ROUTE2205.toNode = "RollTimer";
ROUTE2205.toField = "set_stopTime";
browser.currentScene.children[689] = ROUTE2205;

let ROUTE2206 = browser.currentScene.createNode("ROUTE");
ROUTE2206.fromNode = "Yaw_Touch";
ROUTE2206.fromField = "touchTime";
ROUTE2206.toNode = "WalkTimer";
ROUTE2206.toField = "set_stopTime";
browser.currentScene.children[690] = ROUTE2206;

let ROUTE2207 = browser.currentScene.createNode("ROUTE");
ROUTE2207.fromNode = "Yaw_Touch";
ROUTE2207.fromField = "touchTime";
ROUTE2207.toNode = "RunTimer";
ROUTE2207.toField = "set_stopTime";
browser.currentScene.children[691] = ROUTE2207;

let ROUTE2208 = browser.currentScene.createNode("ROUTE");
ROUTE2208.fromNode = "Yaw_Touch";
ROUTE2208.fromField = "touchTime";
ROUTE2208.toNode = "JumpTimer";
ROUTE2208.toField = "set_stopTime";
browser.currentScene.children[692] = ROUTE2208;

let ROUTE2209 = browser.currentScene.createNode("ROUTE");
ROUTE2209.fromNode = "Yaw_Touch";
ROUTE2209.fromField = "touchTime";
ROUTE2209.toNode = "KickTimer";
ROUTE2209.toField = "set_stopTime";
browser.currentScene.children[693] = ROUTE2209;

let ROUTE2210 = browser.currentScene.createNode("ROUTE");
ROUTE2210.fromNode = "Yaw_Touch";
ROUTE2210.fromField = "touchTime";
ROUTE2210.toNode = "StopTimer";
ROUTE2210.toField = "set_stopTime";
browser.currentScene.children[694] = ROUTE2210;

let ROUTE2211 = browser.currentScene.createNode("ROUTE");
ROUTE2211.fromNode = "Yaw_Touch";
ROUTE2211.fromField = "touchTime";
ROUTE2211.toNode = "YawTimer";
ROUTE2211.toField = "set_startTime";
browser.currentScene.children[695] = ROUTE2211;

let ROUTE2212 = browser.currentScene.createNode("ROUTE");
ROUTE2212.fromNode = "Walk_Touch";
ROUTE2212.fromField = "touchTime";
ROUTE2212.toNode = "StandTimer";
ROUTE2212.toField = "set_stopTime";
browser.currentScene.children[696] = ROUTE2212;

let ROUTE2213 = browser.currentScene.createNode("ROUTE");
ROUTE2213.fromNode = "Walk_Touch";
ROUTE2213.fromField = "touchTime";
ROUTE2213.toNode = "PitchTimer";
ROUTE2213.toField = "set_stopTime";
browser.currentScene.children[697] = ROUTE2213;

let ROUTE2214 = browser.currentScene.createNode("ROUTE");
ROUTE2214.fromNode = "Walk_Touch";
ROUTE2214.fromField = "touchTime";
ROUTE2214.toNode = "YawTimer";
ROUTE2214.toField = "set_stopTime";
browser.currentScene.children[698] = ROUTE2214;

let ROUTE2215 = browser.currentScene.createNode("ROUTE");
ROUTE2215.fromNode = "Walk_Touch";
ROUTE2215.fromField = "touchTime";
ROUTE2215.toNode = "RollTimer";
ROUTE2215.toField = "set_stopTime";
browser.currentScene.children[699] = ROUTE2215;

let ROUTE2216 = browser.currentScene.createNode("ROUTE");
ROUTE2216.fromNode = "Walk_Touch";
ROUTE2216.fromField = "touchTime";
ROUTE2216.toNode = "RunTimer";
ROUTE2216.toField = "set_stopTime";
browser.currentScene.children[700] = ROUTE2216;

let ROUTE2217 = browser.currentScene.createNode("ROUTE");
ROUTE2217.fromNode = "Walk_Touch";
ROUTE2217.fromField = "touchTime";
ROUTE2217.toNode = "JumpTimer";
ROUTE2217.toField = "set_stopTime";
browser.currentScene.children[701] = ROUTE2217;

let ROUTE2218 = browser.currentScene.createNode("ROUTE");
ROUTE2218.fromNode = "Walk_Touch";
ROUTE2218.fromField = "touchTime";
ROUTE2218.toNode = "KickTimer";
ROUTE2218.toField = "set_stopTime";
browser.currentScene.children[702] = ROUTE2218;

let ROUTE2219 = browser.currentScene.createNode("ROUTE");
ROUTE2219.fromNode = "Walk_Touch";
ROUTE2219.fromField = "touchTime";
ROUTE2219.toNode = "StopTimer";
ROUTE2219.toField = "set_stopTime";
browser.currentScene.children[703] = ROUTE2219;

let ROUTE2220 = browser.currentScene.createNode("ROUTE");
ROUTE2220.fromNode = "Walk_Touch";
ROUTE2220.fromField = "touchTime";
ROUTE2220.toNode = "WalkTimer";
ROUTE2220.toField = "set_startTime";
browser.currentScene.children[704] = ROUTE2220;

let ROUTE2221 = browser.currentScene.createNode("ROUTE");
ROUTE2221.fromNode = "Roll_Touch";
ROUTE2221.fromField = "touchTime";
ROUTE2221.toNode = "StandTimer";
ROUTE2221.toField = "set_stopTime";
browser.currentScene.children[705] = ROUTE2221;

let ROUTE2222 = browser.currentScene.createNode("ROUTE");
ROUTE2222.fromNode = "Roll_Touch";
ROUTE2222.fromField = "touchTime";
ROUTE2222.toNode = "PitchTimer";
ROUTE2222.toField = "set_stopTime";
browser.currentScene.children[706] = ROUTE2222;

let ROUTE2223 = browser.currentScene.createNode("ROUTE");
ROUTE2223.fromNode = "Roll_Touch";
ROUTE2223.fromField = "touchTime";
ROUTE2223.toNode = "YawTimer";
ROUTE2223.toField = "set_stopTime";
browser.currentScene.children[707] = ROUTE2223;

let ROUTE2224 = browser.currentScene.createNode("ROUTE");
ROUTE2224.fromNode = "Roll_Touch";
ROUTE2224.fromField = "touchTime";
ROUTE2224.toNode = "WalkTimer";
ROUTE2224.toField = "set_stopTime";
browser.currentScene.children[708] = ROUTE2224;

let ROUTE2225 = browser.currentScene.createNode("ROUTE");
ROUTE2225.fromNode = "Roll_Touch";
ROUTE2225.fromField = "touchTime";
ROUTE2225.toNode = "RunTimer";
ROUTE2225.toField = "set_stopTime";
browser.currentScene.children[709] = ROUTE2225;

let ROUTE2226 = browser.currentScene.createNode("ROUTE");
ROUTE2226.fromNode = "Roll_Touch";
ROUTE2226.fromField = "touchTime";
ROUTE2226.toNode = "JumpTimer";
ROUTE2226.toField = "set_stopTime";
browser.currentScene.children[710] = ROUTE2226;

let ROUTE2227 = browser.currentScene.createNode("ROUTE");
ROUTE2227.fromNode = "Roll_Touch";
ROUTE2227.fromField = "touchTime";
ROUTE2227.toNode = "KickTimer";
ROUTE2227.toField = "set_stopTime";
browser.currentScene.children[711] = ROUTE2227;

let ROUTE2228 = browser.currentScene.createNode("ROUTE");
ROUTE2228.fromNode = "Roll_Touch";
ROUTE2228.fromField = "touchTime";
ROUTE2228.toNode = "StopTimer";
ROUTE2228.toField = "set_stopTime";
browser.currentScene.children[712] = ROUTE2228;

let ROUTE2229 = browser.currentScene.createNode("ROUTE");
ROUTE2229.fromNode = "Roll_Touch";
ROUTE2229.fromField = "touchTime";
ROUTE2229.toNode = "RollTimer";
ROUTE2229.toField = "set_startTime";
browser.currentScene.children[713] = ROUTE2229;

let ROUTE2230 = browser.currentScene.createNode("ROUTE");
ROUTE2230.fromNode = "Run_Touch";
ROUTE2230.fromField = "touchTime";
ROUTE2230.toNode = "StandTimer";
ROUTE2230.toField = "set_stopTime";
browser.currentScene.children[714] = ROUTE2230;

let ROUTE2231 = browser.currentScene.createNode("ROUTE");
ROUTE2231.fromNode = "Run_Touch";
ROUTE2231.fromField = "touchTime";
ROUTE2231.toNode = "PitchTimer";
ROUTE2231.toField = "set_stopTime";
browser.currentScene.children[715] = ROUTE2231;

let ROUTE2232 = browser.currentScene.createNode("ROUTE");
ROUTE2232.fromNode = "Run_Touch";
ROUTE2232.fromField = "touchTime";
ROUTE2232.toNode = "YawTimer";
ROUTE2232.toField = "set_stopTime";
browser.currentScene.children[716] = ROUTE2232;

let ROUTE2233 = browser.currentScene.createNode("ROUTE");
ROUTE2233.fromNode = "Run_Touch";
ROUTE2233.fromField = "touchTime";
ROUTE2233.toNode = "RollTimer";
ROUTE2233.toField = "set_stopTime";
browser.currentScene.children[717] = ROUTE2233;

let ROUTE2234 = browser.currentScene.createNode("ROUTE");
ROUTE2234.fromNode = "Run_Touch";
ROUTE2234.fromField = "touchTime";
ROUTE2234.toNode = "WalkTimer";
ROUTE2234.toField = "set_stopTime";
browser.currentScene.children[718] = ROUTE2234;

let ROUTE2235 = browser.currentScene.createNode("ROUTE");
ROUTE2235.fromNode = "Run_Touch";
ROUTE2235.fromField = "touchTime";
ROUTE2235.toNode = "JumpTimer";
ROUTE2235.toField = "set_stopTime";
browser.currentScene.children[719] = ROUTE2235;

let ROUTE2236 = browser.currentScene.createNode("ROUTE");
ROUTE2236.fromNode = "Run_Touch";
ROUTE2236.fromField = "touchTime";
ROUTE2236.toNode = "KickTimer";
ROUTE2236.toField = "set_stopTime";
browser.currentScene.children[720] = ROUTE2236;

let ROUTE2237 = browser.currentScene.createNode("ROUTE");
ROUTE2237.fromNode = "Run_Touch";
ROUTE2237.fromField = "touchTime";
ROUTE2237.toNode = "StopTimer";
ROUTE2237.toField = "set_stopTime";
browser.currentScene.children[721] = ROUTE2237;

let ROUTE2238 = browser.currentScene.createNode("ROUTE");
ROUTE2238.fromNode = "Run_Touch";
ROUTE2238.fromField = "touchTime";
ROUTE2238.toNode = "RunTimer";
ROUTE2238.toField = "set_startTime";
browser.currentScene.children[722] = ROUTE2238;

let ROUTE2239 = browser.currentScene.createNode("ROUTE");
ROUTE2239.fromNode = "Jump_Touch";
ROUTE2239.fromField = "touchTime";
ROUTE2239.toNode = "StandTimer";
ROUTE2239.toField = "set_stopTime";
browser.currentScene.children[723] = ROUTE2239;

let ROUTE2240 = browser.currentScene.createNode("ROUTE");
ROUTE2240.fromNode = "Jump_Touch";
ROUTE2240.fromField = "touchTime";
ROUTE2240.toNode = "PitchTimer";
ROUTE2240.toField = "set_stopTime";
browser.currentScene.children[724] = ROUTE2240;

let ROUTE2241 = browser.currentScene.createNode("ROUTE");
ROUTE2241.fromNode = "Jump_Touch";
ROUTE2241.fromField = "touchTime";
ROUTE2241.toNode = "YawTimer";
ROUTE2241.toField = "set_stopTime";
browser.currentScene.children[725] = ROUTE2241;

let ROUTE2242 = browser.currentScene.createNode("ROUTE");
ROUTE2242.fromNode = "Jump_Touch";
ROUTE2242.fromField = "touchTime";
ROUTE2242.toNode = "RollTimer";
ROUTE2242.toField = "set_stopTime";
browser.currentScene.children[726] = ROUTE2242;

let ROUTE2243 = browser.currentScene.createNode("ROUTE");
ROUTE2243.fromNode = "Jump_Touch";
ROUTE2243.fromField = "touchTime";
ROUTE2243.toNode = "WalkTimer";
ROUTE2243.toField = "set_stopTime";
browser.currentScene.children[727] = ROUTE2243;

let ROUTE2244 = browser.currentScene.createNode("ROUTE");
ROUTE2244.fromNode = "Jump_Touch";
ROUTE2244.fromField = "touchTime";
ROUTE2244.toNode = "RunTimer";
ROUTE2244.toField = "set_stopTime";
browser.currentScene.children[728] = ROUTE2244;

let ROUTE2245 = browser.currentScene.createNode("ROUTE");
ROUTE2245.fromNode = "Jump_Touch";
ROUTE2245.fromField = "touchTime";
ROUTE2245.toNode = "KickTimer";
ROUTE2245.toField = "set_stopTime";
browser.currentScene.children[729] = ROUTE2245;

let ROUTE2246 = browser.currentScene.createNode("ROUTE");
ROUTE2246.fromNode = "Jump_Touch";
ROUTE2246.fromField = "touchTime";
ROUTE2246.toNode = "StopTimer";
ROUTE2246.toField = "set_stopTime";
browser.currentScene.children[730] = ROUTE2246;

let ROUTE2247 = browser.currentScene.createNode("ROUTE");
ROUTE2247.fromNode = "Jump_Touch";
ROUTE2247.fromField = "touchTime";
ROUTE2247.toNode = "JumpTimer";
ROUTE2247.toField = "set_startTime";
browser.currentScene.children[731] = ROUTE2247;

let ROUTE2248 = browser.currentScene.createNode("ROUTE");
ROUTE2248.fromNode = "Kick_Touch";
ROUTE2248.fromField = "touchTime";
ROUTE2248.toNode = "StandTimer";
ROUTE2248.toField = "set_stopTime";
browser.currentScene.children[732] = ROUTE2248;

let ROUTE2249 = browser.currentScene.createNode("ROUTE");
ROUTE2249.fromNode = "Kick_Touch";
ROUTE2249.fromField = "touchTime";
ROUTE2249.toNode = "PitchTimer";
ROUTE2249.toField = "set_stopTime";
browser.currentScene.children[733] = ROUTE2249;

let ROUTE2250 = browser.currentScene.createNode("ROUTE");
ROUTE2250.fromNode = "Kick_Touch";
ROUTE2250.fromField = "touchTime";
ROUTE2250.toNode = "YawTimer";
ROUTE2250.toField = "set_stopTime";
browser.currentScene.children[734] = ROUTE2250;

let ROUTE2251 = browser.currentScene.createNode("ROUTE");
ROUTE2251.fromNode = "Kick_Touch";
ROUTE2251.fromField = "touchTime";
ROUTE2251.toNode = "RollTimer";
ROUTE2251.toField = "set_stopTime";
browser.currentScene.children[735] = ROUTE2251;

let ROUTE2252 = browser.currentScene.createNode("ROUTE");
ROUTE2252.fromNode = "Kick_Touch";
ROUTE2252.fromField = "touchTime";
ROUTE2252.toNode = "WalkTimer";
ROUTE2252.toField = "set_stopTime";
browser.currentScene.children[736] = ROUTE2252;

let ROUTE2253 = browser.currentScene.createNode("ROUTE");
ROUTE2253.fromNode = "Kick_Touch";
ROUTE2253.fromField = "touchTime";
ROUTE2253.toNode = "RunTimer";
ROUTE2253.toField = "set_stopTime";
browser.currentScene.children[737] = ROUTE2253;

let ROUTE2254 = browser.currentScene.createNode("ROUTE");
ROUTE2254.fromNode = "Kick_Touch";
ROUTE2254.fromField = "touchTime";
ROUTE2254.toNode = "JumpTimer";
ROUTE2254.toField = "set_stopTime";
browser.currentScene.children[738] = ROUTE2254;

let ROUTE2255 = browser.currentScene.createNode("ROUTE");
ROUTE2255.fromNode = "Kick_Touch";
ROUTE2255.fromField = "touchTime";
ROUTE2255.toNode = "StopTimer";
ROUTE2255.toField = "set_stopTime";
browser.currentScene.children[739] = ROUTE2255;

let ROUTE2256 = browser.currentScene.createNode("ROUTE");
ROUTE2256.fromNode = "Kick_Touch";
ROUTE2256.fromField = "touchTime";
ROUTE2256.toNode = "KickTimer";
ROUTE2256.toField = "set_startTime";
browser.currentScene.children[740] = ROUTE2256;

let ROUTE2257 = browser.currentScene.createNode("ROUTE");
ROUTE2257.fromNode = "Stop_Touch";
ROUTE2257.fromField = "touchTime";
ROUTE2257.toNode = "StandTimer";
ROUTE2257.toField = "set_stopTime";
browser.currentScene.children[741] = ROUTE2257;

let ROUTE2258 = browser.currentScene.createNode("ROUTE");
ROUTE2258.fromNode = "Stop_Touch";
ROUTE2258.fromField = "touchTime";
ROUTE2258.toNode = "PitchTimer";
ROUTE2258.toField = "set_stopTime";
browser.currentScene.children[742] = ROUTE2258;

let ROUTE2259 = browser.currentScene.createNode("ROUTE");
ROUTE2259.fromNode = "Stop_Touch";
ROUTE2259.fromField = "touchTime";
ROUTE2259.toNode = "YawTimer";
ROUTE2259.toField = "set_stopTime";
browser.currentScene.children[743] = ROUTE2259;

let ROUTE2260 = browser.currentScene.createNode("ROUTE");
ROUTE2260.fromNode = "Stop_Touch";
ROUTE2260.fromField = "touchTime";
ROUTE2260.toNode = "RollTimer";
ROUTE2260.toField = "set_stopTime";
browser.currentScene.children[744] = ROUTE2260;

let ROUTE2261 = browser.currentScene.createNode("ROUTE");
ROUTE2261.fromNode = "Stop_Touch";
ROUTE2261.fromField = "touchTime";
ROUTE2261.toNode = "WalkTimer";
ROUTE2261.toField = "set_stopTime";
browser.currentScene.children[745] = ROUTE2261;

let ROUTE2262 = browser.currentScene.createNode("ROUTE");
ROUTE2262.fromNode = "Stop_Touch";
ROUTE2262.fromField = "touchTime";
ROUTE2262.toNode = "RunTimer";
ROUTE2262.toField = "set_stopTime";
browser.currentScene.children[746] = ROUTE2262;

let ROUTE2263 = browser.currentScene.createNode("ROUTE");
ROUTE2263.fromNode = "Stop_Touch";
ROUTE2263.fromField = "touchTime";
ROUTE2263.toNode = "JumpTimer";
ROUTE2263.toField = "set_stopTime";
browser.currentScene.children[747] = ROUTE2263;

let ROUTE2264 = browser.currentScene.createNode("ROUTE");
ROUTE2264.fromNode = "Stop_Touch";
ROUTE2264.fromField = "touchTime";
ROUTE2264.toNode = "KickTimer";
ROUTE2264.toField = "set_stopTime";
browser.currentScene.children[748] = ROUTE2264;

let ROUTE2265 = browser.currentScene.createNode("ROUTE");
ROUTE2265.fromNode = "Stop_Touch";
ROUTE2265.fromField = "touchTime";
ROUTE2265.toNode = "StopTimer";
ROUTE2265.toField = "set_startTime";
browser.currentScene.children[749] = ROUTE2265;

