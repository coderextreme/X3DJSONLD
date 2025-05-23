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

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "title";
meta3.content = "JinLOA2.x3d";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "creator";
meta4.content = "Jin Hoon Lee and Min Joo Lee";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "translator";
meta5.content = "Chul Hee Jung and Myeong Won Lee";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "created";
meta6.content = "31 March 2011";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "translated";
meta7.content = "1 November 2014";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "modified";
meta8.content = "23 December 2021";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "description";
meta9.content = "Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model.";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "reference";
meta10.content = "KoreanCharacter00ReadMe.txt";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "reference";
meta11.content = "KoreanCharacterHumanMotion_Infotech2014_140706.pdf";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "reference";
meta12.content = "KoreanCharactersIllustrated.pdf";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "identifier";
meta13.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JinLOA2.x3d";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "generator";
meta14.content = "3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "generator";
meta15.content = "Suwon HAnim Converter";
head1.meta[13] = meta15;

let meta16 = browser.currentScene.createNode("meta");
meta16.name = "generator";
meta16.content = "Gnu Image Manipulation Program, http://www.gimp.org";
head1.meta[14] = meta16;

let meta17 = browser.currentScene.createNode("meta");
meta17.name = "generator";
meta17.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[15] = meta17;

let meta18 = browser.currentScene.createNode("meta");
meta18.name = "license";
meta18.content = "../license.html";
head1.meta[16] = meta18;

head = head1;

let WorldInfo20 = browser.currentScene.createNode("WorldInfo");
WorldInfo20.title = "JinLOA2.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo20;

let NavigationInfo21 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo21.speed = 1.5;
browser.currentScene.children[1] = NavigationInfo21;

let Viewpoint22 = browser.currentScene.createNode("Viewpoint");
Viewpoint22.centerOfRotation = new SFVec3f(new float[0,1,0]);
Viewpoint22.description = "JinLOA2";
Viewpoint22.position = new SFVec3f(new float[0,1,3]);
browser.currentScene.children[2] = Viewpoint22;

let HAnimHumanoid23 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid23.name = "JinLOA2";
HAnimHumanoid23.DEF = "hanim_JinLOA2";
HAnimHumanoid23.loa = 2;
HAnimHumanoid23.scale = new SFVec3f(new float[0.0225,0.0225,0.0225]);
HAnimHumanoid23.version = "2.0";
let MetadataSet24 = browser.currentScene.createNode("MetadataSet");
MetadataSet24.name = "HAnimHumanoid.info";
MetadataSet24.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid";
let MetadataString25 = browser.currentScene.createNode("MetadataString");
MetadataString25.name = "authorName";
MetadataString25.value = new MFString(new java.lang.String["Jin Hoon Lee and Min Joo Lee, Chul Hee Jung and Myeong Won Lee"]);
MetadataSet24.value = new MFNode();

MetadataSet24.value[0] = MetadataString25;

let MetadataString26 = browser.currentScene.createNode("MetadataString");
MetadataString26.name = "authorEmail";
MetadataString26.value = new MFString(new java.lang.String["myeongwonlee@gmail.com"]);
MetadataSet24.value[1] = MetadataString26;

let MetadataString27 = browser.currentScene.createNode("MetadataString");
MetadataString27.name = "creationDate";
MetadataString27.value = new MFString(new java.lang.String["31 March 2011"]);
MetadataSet24.value[2] = MetadataString27;

let MetadataString28 = browser.currentScene.createNode("MetadataString");
MetadataString28.name = "gender";
MetadataString28.value = new MFString(new java.lang.String["female"]);
MetadataSet24.value[3] = MetadataString28;

let MetadataFloat29 = browser.currentScene.createNode("MetadataFloat");
MetadataFloat29.name = "height";
MetadataFloat29.value = new MFFloat(new float[1.5]);
MetadataSet24.value[4] = MetadataFloat29;

let MetadataString30 = browser.currentScene.createNode("MetadataString");
MetadataString30.name = "humanoidVersion";
MetadataString30.value = new MFString(new java.lang.String["2.0"]);
MetadataSet24.value[5] = MetadataString30;

HAnimHumanoid23.metadata = new SFNode();

HAnimHumanoid23.metadata[0] = MetadataSet24;

let HAnimJoint31 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint31.name = "humanoid_root";
HAnimJoint31.DEF = "hanim_humanoid_root";
HAnimJoint31.center = new SFVec3f(new float[0,35.799999,-0.7076]);
HAnimJoint31.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint31.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment32 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment32.name = "sacrum";
HAnimSegment32.DEF = "hanim_sacrum";
let Transform33 = browser.currentScene.createNode("Transform");
Transform33.translation = new SFVec3f(new float[0,35.799999,-0.7076]);
let Shape34 = browser.currentScene.createNode("Shape");
let Appearance35 = browser.currentScene.createNode("Appearance");
let Material36 = browser.currentScene.createNode("Material");
Material36.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance35.material = Material36;

let ImageTexture37 = browser.currentScene.createNode("ImageTexture");
ImageTexture37.DEF = "JinLOA2TextureAtlas";
ImageTexture37.url = new MFString(new java.lang.String["images/Jin.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/images/Jin.png"]);
Appearance35.texture = ImageTexture37;

Shape34.appearance = Appearance35;

let IndexedFaceSet38 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet38.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]);
IndexedFaceSet38.creaseAngle = 3.14159;
IndexedFaceSet38.texCoordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]);
let Coordinate39 = browser.currentScene.createNode("Coordinate");
Coordinate39.point = new MFVec3f(new float[0,1.053,0.0273,0,0.9123,-0.5414,-0.4375,0.9123,-0.4652,-0.7578,0.9123,-0.3733,-0.875,0.9123,0.0273,-0.7578,0.9123,0.4279,-0.4375,0.9123,0.5198,0,0.9123,0.596,0.4375,0.9123,0.5198,0.7578,0.9123,0.4279,0.875,0.9123,0.0273,0.7578,0.9123,-0.3733,0.4375,0.9123,-0.4652,0,0.5267,-0.8842,-0.5658,0.5267,-0.7621,-0.98,0.5267,-0.4285,-1.132,0.5267,0.0273,-0.98,0.5267,0.483,-0.5658,0.5267,0.6985,0,0.5267,0.8206,0.5658,0.5267,0.6985,0.98,0.5267,0.483,1.132,0.5267,0.0273,0.98,0.5267,-0.4285,0.5658,0.5267,-0.7621,0,0,-0.9616,-0.6534,0,-0.8206,-1.132,0,-0.4353,-1.307,0,0.0273,-1.132,0,0.5536,-0.6534,0,0.8206,0,0,0.9616,0.6534,0,0.8206,1.132,0,0.5536,1.307,0,0.0273,1.132,0,-0.4353,0.6534,0,-0.8206,0,-0.5267,-0.8206,-0.5658,-0.5267,-0.6985,-0.98,-0.5267,-0.3648,-1.132,-0.5267,0.0273,-0.98,-0.5267,0.483,-0.5658,-0.5267,0.6985,0,-0.5267,0.8206,0.5658,-0.5267,0.6985,0.98,-0.5267,0.483,1.132,-0.5267,0.0273,0.98,-0.5267,-0.3648,0.5658,-0.5267,-0.6985,0,-0.9123,-0.4353,-0.3267,-0.9123,-0.3648,-0.5658,-0.9123,-0.2358,-0.6534,-0.9123,0.0273,-0.5658,-0.9123,0.2904,-0.3267,-0.9123,0.483,0,-0.9123,0.5536,0.3267,-0.9123,0.483,0.5658,-0.9123,0.2904,0.6534,-0.9123,0.0273,0.5658,-0.9123,-0.2358,0.3267,-0.9123,-0.3648,0,-1.053,0.0273]);
IndexedFaceSet38.coord = Coordinate39;

let TextureCoordinate40 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate40.point = new MFVec2f(new float[0.6211,0.5754,0.7851,0.572,0.7614,0.572,0.6907,0.5698,0.62,0.5698,0.6158,0.5702,0.5451,0.5702,0.4167,0.5698,0.5451,0.5702,0.6158,0.5702,0.62,0.5698,0.6907,0.5698,0.7614,0.572,0.8036,0.5346,0.7761,0.5346,0.6989,0.4838,0.6219,0.4428,0.6154,0.4438,0.5492,0.4639,0.4166,0.5346,0.5492,0.4639,0.6154,0.4438,0.6219,0.4428,0.6989,0.4838,0.7761,0.5346,0.7912,0.4044,0.7635,0.4044,0.7042,0.3925,0.6194,0.3907,0.6148,0.3907,0.545,0.3974,0.4163,0.4938,0.545,0.3974,0.6148,0.3907,0.6194,0.3907,0.7042,0.3925,0.7635,0.4044,0.795,0.3772,0.7662,0.3772,0.6945,0.3645,0.6236,0.3695,0.616,0.3695,0.5438,0.378,0.416,0.453,0.5438,0.378,0.616,0.3695,0.6236,0.3695,0.6945,0.3645,0.7662,0.3772,0.7887,0.3451,0.7635,0.3451,0.698,0.3508,0.6262,0.3508,0.6297,0.3503,0.5389,0.3503,0.4181,0.3884,0.5389,0.3503,0.6297,0.3503,0.6262,0.3508,0.698,0.3508,0.7635,0.3451,0.6237,0.3398]);
IndexedFaceSet38.texCoord = TextureCoordinate40;

Shape34.geometry = IndexedFaceSet38;

Transform33.child = new undefined();

Transform33.child[0] = Shape34;

HAnimSegment32.children = new MFNode();

HAnimSegment32.children[0] = Transform33;

HAnimJoint31.children = new MFNode();

HAnimJoint31.children[0] = HAnimSegment32;

let HAnimJoint41 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint41.name = "sacroiliac";
HAnimJoint41.DEF = "hanim_sacroiliac";
HAnimJoint41.center = new SFVec3f(new float[0,30.530001,-0.7076]);
HAnimJoint41.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint41.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment42 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment42.name = "pelvis";
HAnimSegment42.DEF = "hanim_pelvis";
let Transform43 = browser.currentScene.createNode("Transform");
Transform43.translation = new SFVec3f(new float[0,30.530001,-0.7076]);
let Shape44 = browser.currentScene.createNode("Shape");
let Appearance45 = browser.currentScene.createNode("Appearance");
let Material46 = browser.currentScene.createNode("Material");
Material46.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance45.material = Material46;

let ImageTexture47 = browser.currentScene.createNode("ImageTexture");
ImageTexture47.USE = "JinLOA2TextureAtlas";
Appearance45.texture = ImageTexture47;

Shape44.appearance = Appearance45;

let IndexedFaceSet48 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet48.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]);
IndexedFaceSet48.creaseAngle = 3.14159;
IndexedFaceSet48.texCoordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]);
let Coordinate49 = browser.currentScene.createNode("Coordinate");
Coordinate49.point = new MFVec3f(new float[0,10.79,0.1424,0,10.06,-2.825,-2.283,10.06,-2.428,-3.954,10.06,-1.948,-4.566,10.06,0.1424,-3.954,10.06,2.233,-2.283,10.06,2.712,0,10.06,3.11,2.283,10.06,2.712,3.954,10.06,2.233,4.566,10.06,0.1424,3.954,10.06,-1.948,2.283,10.06,-2.428,0,8.045,-4.614,-2.953,8.045,-3.977,-5.114,8.045,-2.236,-5.905,8.045,0.1424,-5.114,8.045,2.521,-2.953,8.045,3.645,0,8.045,4.282,2.953,8.045,3.645,5.114,8.045,2.521,5.905,8.045,0.1424,5.114,8.045,-2.236,2.953,8.045,-3.977,0,5.297,-5.018,-3.409,5.297,-4.282,-5.905,5.297,-2.272,-6.819,5.297,0.1424,-5.905,5.297,2.889,-3.409,5.297,4.282,0,5.297,5.018,3.409,5.297,4.282,5.905,5.297,2.889,6.819,5.297,0.1424,5.905,5.297,-2.272,3.409,5.297,-4.282,0,2.548,-4.282,-2.953,2.548,-3.645,-5.114,2.548,-1.904,-5.905,2.548,0.1424,-5.114,2.548,2.521,-2.953,2.548,3.645,0,2.548,4.282,2.953,2.548,3.645,5.114,2.548,2.521,5.905,2.548,0.1424,5.114,2.548,-1.904,2.953,2.548,-3.645,0,0.5362,-2.272,-1.705,0.5362,-1.904,-2.953,0.5362,-1.231,-3.409,0.5362,0.1424,-2.953,0.5362,1.516,-1.705,0.5362,2.521,0,0.5362,2.889,1.705,0.5362,2.521,2.953,0.5362,1.516,3.409,0.5362,0.1424,2.953,0.5362,-1.231,1.705,0.5362,-1.904,0,-0.2003,0.1424]);
IndexedFaceSet48.coord = Coordinate49;

let TextureCoordinate50 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate50.point = new MFVec2f(new float[0.6211,0.5754,0.7851,0.572,0.7614,0.572,0.6907,0.5698,0.62,0.5698,0.6158,0.5702,0.5451,0.5702,0.4167,0.5698,0.5451,0.5702,0.6158,0.5702,0.62,0.5698,0.6907,0.5698,0.7614,0.572,0.8036,0.5346,0.7761,0.5346,0.6989,0.4838,0.6219,0.4428,0.6154,0.4438,0.5492,0.4639,0.4166,0.5346,0.5492,0.4639,0.6154,0.4438,0.6219,0.4428,0.6989,0.4838,0.7761,0.5346,0.7912,0.4044,0.7635,0.4044,0.7042,0.3925,0.6194,0.3907,0.6148,0.3907,0.545,0.3974,0.4163,0.4938,0.545,0.3974,0.6148,0.3907,0.6194,0.3907,0.7042,0.3925,0.7635,0.4044,0.795,0.3772,0.7662,0.3772,0.6945,0.3645,0.6236,0.3695,0.616,0.3695,0.5438,0.378,0.416,0.453,0.5438,0.378,0.616,0.3695,0.6236,0.3695,0.6945,0.3645,0.7662,0.3772,0.7887,0.3451,0.7635,0.3451,0.698,0.3508,0.6262,0.3508,0.6297,0.3503,0.5389,0.3503,0.4181,0.3884,0.5389,0.3503,0.6297,0.3503,0.6262,0.3508,0.698,0.3508,0.7635,0.3451,0.6237,0.3398]);
IndexedFaceSet48.texCoord = TextureCoordinate50;

Shape44.geometry = IndexedFaceSet48;

Transform43.child = new undefined();

Transform43.child[0] = Shape44;

HAnimSegment42.children = new MFNode();

HAnimSegment42.children[0] = Transform43;

HAnimJoint41.children = new MFNode();

HAnimJoint41.children[0] = HAnimSegment42;

let HAnimJoint51 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint51.name = "l_hip";
HAnimJoint51.DEF = "hanim_l_hip";
HAnimJoint51.center = new SFVec3f(new float[4.207,35.830002,-0.8155]);
HAnimJoint51.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint51.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment52 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment52.name = "l_thigh";
HAnimSegment52.DEF = "hanim_l_thigh";
let Transform53 = browser.currentScene.createNode("Transform");
Transform53.translation = new SFVec3f(new float[4.207,35.830002,-0.8155]);
let Shape54 = browser.currentScene.createNode("Shape");
let Appearance55 = browser.currentScene.createNode("Appearance");
let Material56 = browser.currentScene.createNode("Material");
Material56.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance55.material = Material56;

let ImageTexture57 = browser.currentScene.createNode("ImageTexture");
ImageTexture57.USE = "JinLOA2TextureAtlas";
Appearance55.texture = ImageTexture57;

Shape54.appearance = Appearance55;

let IndexedFaceSet58 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet58.coordIndex = new MFInt32(new int[47,46,45,-1,45,44,43,-1,45,43,42,-1,47,45,42,-1,48,47,42,-1,0,1,8,-1,8,7,0,-1,1,2,9,-1,9,8,1,-1,2,3,10,-1,10,9,2,-1,3,4,11,-1,11,10,3,-1,4,5,12,-1,12,11,4,-1,5,6,13,-1,13,12,5,-1,6,0,7,-1,7,13,6,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,12,19,-1,19,18,11,-1,12,13,20,-1,20,19,12,-1,13,7,14,-1,14,20,13,-1,14,15,22,-1,22,21,14,-1,15,16,23,-1,23,22,15,-1,16,17,24,-1,24,23,16,-1,17,18,25,-1,25,24,17,-1,18,19,26,-1,26,25,18,-1,19,20,27,-1,27,26,19,-1,20,14,21,-1,21,27,20,-1,56,57,58,-1,58,59,60,-1,58,60,61,-1,56,58,61,-1,62,56,61,-1,29,28,21,-1,21,22,29,-1,30,29,22,-1,22,23,30,-1,31,30,23,-1,23,24,31,-1,32,31,24,-1,24,25,32,-1,33,32,25,-1,25,26,33,-1,34,33,26,-1,26,27,34,-1,28,34,27,-1,27,21,28,-1,36,35,28,-1,28,29,36,-1,37,36,29,-1,29,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,35,41,34,-1,34,28,35,-1,42,43,1,-1,1,0,42,-1,43,44,2,-1,2,1,43,-1,44,45,3,-1,3,2,44,-1,45,46,4,-1,4,3,45,-1,46,47,5,-1,5,4,46,-1,47,48,6,-1,6,5,47,-1,48,42,0,-1,0,6,48,-1,50,49,35,-1,35,36,50,-1,51,50,36,-1,36,37,51,-1,52,51,37,-1,37,38,52,-1,53,52,38,-1,38,39,53,-1,54,53,39,-1,39,40,54,-1,55,54,40,-1,40,41,55,-1,49,55,41,-1,41,35,49,-1,57,56,49,-1,49,50,57,-1,58,57,50,-1,50,51,58,-1,59,58,51,-1,51,52,59,-1,60,59,52,-1,52,53,60,-1,61,60,53,-1,53,54,61,-1,62,61,54,-1,54,55,62,-1,56,62,55,-1,55,49,56,-1]);
IndexedFaceSet58.creaseAngle = 3.14159;
IndexedFaceSet58.texCoordIndex = new MFInt32(new int[5,4,3,-1,3,2,0,-1,3,0,1,-1,5,3,1,-1,6,5,1,-1,7,10,8,-1,8,9,7,-1,10,12,11,-1,11,8,10,-1,12,14,13,-1,13,11,12,-1,14,16,15,-1,15,13,14,-1,16,18,17,-1,17,15,16,-1,18,20,19,-1,19,17,18,-1,20,7,9,-1,9,19,20,-1,9,8,21,-1,21,22,9,-1,8,11,23,-1,23,21,8,-1,11,13,24,-1,24,23,11,-1,13,15,25,-1,25,24,13,-1,15,17,26,-1,26,25,15,-1,17,19,27,-1,27,26,17,-1,19,9,22,-1,22,27,19,-1,22,21,28,-1,28,29,22,-1,21,23,30,-1,30,28,21,-1,23,24,31,-1,31,30,23,-1,24,25,32,-1,32,31,24,-1,25,26,33,-1,33,32,25,-1,26,27,34,-1,34,33,26,-1,27,22,29,-1,29,34,27,-1,42,43,44,-1,44,45,46,-1,44,46,47,-1,42,44,47,-1,48,42,47,-1,35,36,29,-1,29,28,35,-1,37,35,28,-1,28,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,36,41,34,-1,34,29,36,-1,51,52,49,-1,49,50,51,-1,54,51,50,-1,50,53,54,-1,56,54,53,-1,53,55,56,-1,58,56,55,-1,55,57,58,-1,60,58,57,-1,57,59,60,-1,62,60,59,-1,59,61,62,-1,52,62,61,-1,61,49,52,-1,1,0,10,-1,10,7,1,-1,0,2,12,-1,12,10,0,-1,2,3,14,-1,14,12,2,-1,3,4,16,-1,16,14,3,-1,4,5,18,-1,18,16,4,-1,5,6,20,-1,20,18,5,-1,6,1,7,-1,7,20,6,-1,63,64,52,-1,52,51,63,-1,65,63,51,-1,51,54,65,-1,66,65,54,-1,54,56,66,-1,67,66,56,-1,56,58,67,-1,68,67,58,-1,58,60,68,-1,69,68,60,-1,60,62,69,-1,64,69,62,-1,62,52,64,-1,43,42,64,-1,64,63,43,-1,44,43,63,-1,63,65,44,-1,45,44,65,-1,65,66,45,-1,46,45,66,-1,66,67,46,-1,47,46,67,-1,67,68,47,-1,48,47,68,-1,68,69,48,-1,42,48,69,-1,69,64,42,-1]);
let Coordinate59 = browser.currentScene.createNode("Coordinate");
Coordinate59.point = new MFVec3f(new float[2.96,-0.0706,0,1.643,-0.0706,3.209,-1.316,-0.0706,4.002,-3.367,-0.0706,1.781,-3.367,-0.0706,-1.781,-1.316,-0.0706,-4.002,1.643,-0.0706,-3.209,2.96,-3.82,0,1.643,-3.82,3.209,-1.316,-3.82,4.002,-3.367,-3.82,1.781,-3.367,-3.82,-1.781,-1.316,-3.82,-4.002,1.643,-3.82,-3.209,2.96,-10.32,0,1.643,-10.32,3.209,-1.316,-10.32,4.002,-3.367,-10.32,1.781,-3.367,-10.32,-1.781,-1.316,-10.32,-4.002,1.643,-10.32,-3.209,3.367,-16.94,0,1.897,-16.94,3.582,-1.407,-16.94,4.467,-3.355,-16.94,1.988,-3.355,-16.94,-1.988,-1.407,-16.94,-4.467,1.897,-16.94,-3.582,2.146,-8.794,0,1.136,-8.794,2.462,-1.135,-8.794,3.07,-2.633,-8.794,1.366,-2.633,-8.794,-1.366,-1.135,-8.794,-3.07,1.136,-8.794,-2.462,2.156,-15.25,0,1.225,-15.25,1.956,-0.8662,-15.25,2.439,-2.543,-15.25,1.085,-2.543,-15.25,-1.085,-0.8662,-15.25,-2.439,1.225,-15.25,-1.956,2.051,1.92,0,1.076,1.92,2.375,-1.114,1.92,2.961,-2.87,1.92,1.318,-2.87,1.92,-1.318,-1.114,1.92,-2.961,1.076,1.92,-2.375,1.842,-18.93,0,1.03,-18.93,1.873,-0.7965,-18.93,2.295,-2.261,-18.93,1.113,-2.261,-18.93,-0.9478,-0.7965,-18.93,-2.13,1.03,-18.93,-1.708,0.6277,-19.91,0,0.2723,-19.91,0.912,-0.5262,-19.91,1.096,-1.167,-19.91,0.5796,-1.167,-19.91,-0.4145,-0.5262,-19.91,-0.9313,0.2723,-19.91,-0.7469]);
IndexedFaceSet58.coord = Coordinate59;

let TextureCoordinate60 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate60.point = new MFVec2f(new float[0.719,0.5576,0.6284,0.5576,0.7414,0.5576,0.6787,0.5576,0.5781,0.5576,0.5154,0.5576,0.5378,0.5576,0.6284,0.5029,0.7509,0.3997,0.6284,0.3997,0.7509,0.5029,0.7811,0.3997,0.7811,0.5029,0.6964,0.3997,0.6964,0.5029,0.5604,0.3997,0.5604,0.5029,0.4756,0.3997,0.4756,0.5029,0.5059,0.3997,0.5059,0.5029,0.7509,0.3197,0.6284,0.3197,0.7811,0.3197,0.6964,0.3197,0.5604,0.3197,0.4756,0.3197,0.5059,0.3197,0.7651,0.2166,0.6284,0.2166,0.7989,0.2166,0.7043,0.2166,0.5525,0.2166,0.4579,0.2166,0.4917,0.2166,0.7224,0.263,0.6284,0.263,0.7456,0.263,0.6805,0.263,0.5762,0.263,0.5112,0.263,0.5344,0.263,0.8705,0.5452,0.8705,0.5383,0.8705,0.5369,0.8705,0.5408,0.8705,0.5483,0.8705,0.5522,0.8705,0.5509,0.917,0.5452,0.917,0.5266,0.89,0.5304,0.89,0.5452,0.917,0.522,0.89,0.5268,0.917,0.5349,0.89,0.537,0.917,0.5555,0.89,0.5534,0.917,0.5684,0.89,0.5636,0.917,0.5638,0.89,0.56,0.8746,0.531,0.8746,0.5452,0.8746,0.5279,0.8746,0.5368,0.8746,0.5524,0.8746,0.5613,0.8746,0.5581]);
IndexedFaceSet58.texCoord = TextureCoordinate60;

Shape54.geometry = IndexedFaceSet58;

Transform53.child = new undefined();

Transform53.child[0] = Shape54;

HAnimSegment52.children = new MFNode();

HAnimSegment52.children[0] = Transform53;

HAnimJoint51.children = new MFNode();

HAnimJoint51.children[0] = HAnimSegment52;

let HAnimJoint61 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint61.name = "l_knee";
HAnimJoint61.DEF = "hanim_l_knee";
HAnimJoint61.center = new SFVec3f(new float[4.116,17.26,-0.8639]);
HAnimJoint61.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint61.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment62 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment62.name = "l_calf";
HAnimSegment62.DEF = "hanim_l_calf";
let Transform63 = browser.currentScene.createNode("Transform");
Transform63.translation = new SFVec3f(new float[4.116,17.26,-0.8639]);
let Shape64 = browser.currentScene.createNode("Shape");
let Appearance65 = browser.currentScene.createNode("Appearance");
let Material66 = browser.currentScene.createNode("Material");
Material66.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance65.material = Material66;

let ImageTexture67 = browser.currentScene.createNode("ImageTexture");
ImageTexture67.USE = "JinLOA2TextureAtlas";
Appearance65.texture = ImageTexture67;

Shape64.appearance = Appearance65;

let IndexedFaceSet68 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet68.coordIndex = new MFInt32(new int[4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1]);
IndexedFaceSet68.creaseAngle = 3.14159;
IndexedFaceSet68.texCoordIndex = new MFInt32(new int[4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1]);
let Coordinate69 = browser.currentScene.createNode("Coordinate");
Coordinate69.point = new MFVec3f(new float[0.7186,0.9688,0.0234,0.3632,0.9688,0.9354,-0.4353,0.9688,1.12,-1.076,0.9688,0.603,-1.076,0.9688,-0.3911,-0.4353,0.9688,-0.9079,0.3632,0.9688,-0.7235,2.337,-4.613,0.0234,1.46,-3.622,2.019,1.236,-1.628,2.42,2.118,-1.912,0.0234,-0.8111,-3.622,2.567,-0.7468,-1.628,2.903,-2.254,-4.613,1.255,-2.337,-1.912,0.9793,-2.254,-5.383,-1.368,-2.337,-1.912,-0.9325,-0.8111,-5.383,-2.903,-0.7468,-1.912,-2.368,1.46,-5.383,-2.355,1.236,-1.912,-1.885,1.121,-0.0032,1.896,1.933,-0.0032,0.0234,-0.7056,-0.0032,2.318,-2.17,-0.0032,1.136,-2.17,-0.0032,-0.9244,-0.7056,-0.0032,-2.061,1.121,-0.0032,-1.64,1.607,-12.92,0.0032,0.9216,-12.91,1.565,-0.619,-12.91,1.951,-1.854,-12.92,0.8701,-1.854,-12.94,-0.9762,-0.619,-12.94,-1.742,0.9216,-12.94,-1.356,0.7072,-14.53,0.0239,0.3604,-14.53,0.814,-0.4188,-14.53,1.009,-1.044,-14.53,0.4624,-1.044,-14.54,-0.4714,-0.4188,-14.54,-0.8587,0.3604,-14.54,-0.6635]);
IndexedFaceSet68.coord = Coordinate69;

let TextureCoordinate70 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate70.point = new MFVec2f(new float[0.9309,0.5848,0.919,0.5848,0.8921,0.5848,0.8706,0.5848,0.8706,0.5848,0.8921,0.5848,0.919,0.5848,0.9845,0.5321,0.955,0.5475,0.9491,0.5599,0.9788,0.5571,0.8787,0.5475,0.8825,0.5599,0.8302,0.5321,0.8291,0.5571,0.8302,0.52,0.8291,0.5571,0.8787,0.52,0.8825,0.5571,0.955,0.52,0.9491,0.5571,0.9444,0.5755,0.9717,0.5755,0.8831,0.5755,0.8339,0.5755,0.8339,0.5755,0.8831,0.5755,0.9444,0.5755,0.9679,0.2444,0.9449,0.2445,0.8931,0.2445,0.8516,0.2444,0.8516,0.2442,0.8931,0.2442,0.9449,0.2442,0.9372,0.2243,0.9255,0.2244,0.8993,0.2244,0.8783,0.2243,0.8783,0.2243,0.8993,0.2243,0.9255,0.2243]);
IndexedFaceSet68.texCoord = TextureCoordinate70;

Shape64.geometry = IndexedFaceSet68;

Transform63.child = new undefined();

Transform63.child[0] = Shape64;

HAnimSegment62.children = new MFNode();

HAnimSegment62.children[0] = Transform63;

HAnimJoint61.children = new MFNode();

HAnimJoint61.children[0] = HAnimSegment62;

let HAnimJoint71 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint71.name = "l_talocrural";
HAnimJoint71.DEF = "hanim_l_talocrural";
HAnimJoint71.center = new SFVec3f(new float[3.854,3.939,-0.7038]);
HAnimJoint71.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint71.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment72 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment72.name = "l_talus";
HAnimSegment72.DEF = "hanim_l_talus";
let Transform73 = browser.currentScene.createNode("Transform");
Transform73.translation = new SFVec3f(new float[3.854,3.939,-0.7038]);
let Shape74 = browser.currentScene.createNode("Shape");
let Appearance75 = browser.currentScene.createNode("Appearance");
let Material76 = browser.currentScene.createNode("Material");
Material76.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance75.material = Material76;

let ImageTexture77 = browser.currentScene.createNode("ImageTexture");
ImageTexture77.USE = "JinLOA2TextureAtlas";
Appearance75.texture = ImageTexture77;

Shape74.appearance = Appearance75;

let IndexedFaceSet78 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet78.coordIndex = new MFInt32(new int[1,11,14,-1,3,4,5,-1,5,6,3,-1,1,0,4,-1,4,3,1,-1,0,2,5,-1,5,4,0,-1,11,1,3,-1,3,6,11,-1,15,2,0,-1,0,12,15,-1,0,1,13,-1,13,12,0,-1,13,1,14,-1,7,18,11,-1,8,6,5,-1,5,9,8,-1,7,8,9,-1,9,10,7,-1,10,9,5,-1,5,2,10,-1,11,6,8,-1,8,7,11,-1,15,16,10,-1,10,2,15,-1,10,16,17,-1,17,7,10,-1,17,18,7,-1,21,22,23,-1,23,24,25,-1,25,26,19,-1,23,25,19,-1,21,23,19,-1,20,21,19,-1,15,12,20,-1,20,19,15,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,11,23,-1,23,22,14,-1,11,18,24,-1,24,23,11,-1,18,17,25,-1,25,24,18,-1,17,16,26,-1,26,25,17,-1,16,15,19,-1,19,26,16,-1]);
IndexedFaceSet78.creaseAngle = 3.14159;
IndexedFaceSet78.texCoordIndex = new MFInt32(new int[1,14,18,-1,3,4,5,-1,5,6,3,-1,1,0,4,-1,4,3,1,-1,0,2,5,-1,5,4,0,-1,14,1,3,-1,3,6,14,-1,19,2,0,-1,0,16,19,-1,0,1,17,-1,17,16,0,-1,17,1,18,-1,7,23,15,-1,9,8,11,-1,11,10,9,-1,7,9,10,-1,10,12,7,-1,12,10,11,-1,11,13,12,-1,15,8,9,-1,9,7,15,-1,20,21,12,-1,12,13,20,-1,12,21,22,-1,22,7,12,-1,22,23,7,-1,26,27,28,-1,28,29,30,-1,30,31,24,-1,28,30,24,-1,26,28,24,-1,25,26,24,-1,19,16,25,-1,25,24,19,-1,16,17,26,-1,26,25,16,-1,17,18,27,-1,27,26,17,-1,18,14,28,-1,28,27,18,-1,15,23,29,-1,29,28,15,-1,23,22,30,-1,30,29,23,-1,22,21,31,-1,31,30,22,-1,21,20,24,-1,24,31,21,-1]);
let Coordinate79 = browser.currentScene.createNode("Coordinate");
Coordinate79.point = new MFVec3f(new float[0.9768,-0.0192,-1.681,1.657,-0.0192,0.4309,0,-0.0192,-1.681,1.403,0.7316,0.354,0.8174,0.7316,-1.463,0,0.7316,-1.463,0,0.7316,1.471,-1.657,-0.0192,0.4309,-1.403,0.7316,0.354,-0.8174,0.7316,-1.463,-0.9768,-0.0192,-1.681,0,-0.0192,1.75,1.109,-0.6007,-2.046,2.045,-0.6007,0.4309,1.695,-0.296,1.429,0,-0.6007,-2.046,-1.109,-0.6007,-2.046,-2.045,-0.6007,0.4309,-1.695,-0.296,1.429,0,-1.207,-1.841,1.023,-1.207,-1.841,1.913,-1.223,0.5161,1.601,-0.9325,1.406,0,-0.6582,1.708,-1.601,-0.9325,1.406,-1.913,-1.223,0.5161,-1.023,-1.207,-1.841]);
IndexedFaceSet78.coord = Coordinate79;

let TextureCoordinate80 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate80.point = new MFVec2f(new float[0.3819,0.171,0.4216,0.1651,0.3819,0.171,0.4216,0.1651,0.3819,0.171,0.3819,0.171,0.4637,0.1714,0.4216,0.1651,0.4637,0.1714,0.4216,0.1651,0.3819,0.171,0.3819,0.171,0.3819,0.171,0.3819,0.171,0.4637,0.1714,0.4637,0.1714,0.3861,0.1398,0.4244,0.1312,0.4394,0.1472,0.3836,0.1404,0.3836,0.1404,0.3861,0.1398,0.4244,0.1312,0.4394,0.1472,0.3836,0.1404,0.3861,0.1398,0.4244,0.1312,0.4394,0.1472,0.4637,0.1714,0.4394,0.1472,0.4244,0.1312,0.3861,0.1398]);
IndexedFaceSet78.texCoord = TextureCoordinate80;

Shape74.geometry = IndexedFaceSet78;

Transform73.child = new undefined();

Transform73.child[0] = Shape74;

HAnimSegment72.children = new MFNode();

HAnimSegment72.children[0] = Transform73;

HAnimJoint71.children = new MFNode();

HAnimJoint71.children[0] = HAnimSegment72;

let HAnimJoint81 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint81.name = "l_tarsometatarsal_2";
HAnimJoint81.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint81.center = new SFVec3f(new float[3.854,3.336,-1.514]);
HAnimJoint81.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint81.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment82 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment82.name = "l_metatarsal_2";
HAnimSegment82.DEF = "hanim_l_metatarsal_2";
let Transform83 = browser.currentScene.createNode("Transform");
Transform83.translation = new SFVec3f(new float[3.854,3.336,-1.514]);
let Shape84 = browser.currentScene.createNode("Shape");
let Appearance85 = browser.currentScene.createNode("Appearance");
let Material86 = browser.currentScene.createNode("Material");
Material86.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance85.material = Material86;

let ImageTexture87 = browser.currentScene.createNode("ImageTexture");
ImageTexture87.USE = "JinLOA2TextureAtlas";
Appearance85.texture = ImageTexture87;

Shape84.appearance = Appearance85;

let IndexedFaceSet88 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet88.coordIndex = new MFInt32(new int[6,4,3,-1,3,0,6,-1,9,0,3,-1,3,11,9,-1,2,6,0,-1,0,1,2,-1,10,1,0,-1,0,9,10,-1,1,10,15,-1,15,2,1,-1,6,5,7,-1,7,4,6,-1,12,13,7,-1,7,5,12,-1,2,8,5,-1,5,6,2,-1,14,12,5,-1,5,8,14,-1,8,2,15,-1,15,14,8,-1,17,18,19,-1,17,19,20,-1,17,20,16,-1,24,25,26,-1,27,21,22,-1,26,27,22,-1,24,26,22,-1,24,22,23,-1,3,4,17,-1,17,16,3,-1,4,7,18,-1,18,17,4,-1,7,13,19,-1,19,18,7,-1,13,11,20,-1,20,19,13,-1,11,3,16,-1,16,20,11,-1,10,9,22,-1,22,21,10,-1,9,11,23,-1,23,22,9,-1,11,13,24,-1,24,23,11,-1,13,12,25,-1,25,24,13,-1,12,14,26,-1,26,25,12,-1,14,15,27,-1,27,26,14,-1,15,10,21,-1,21,27,15,-1]);
IndexedFaceSet88.creaseAngle = 3.14159;
IndexedFaceSet88.texCoordIndex = new MFInt32(new int[2,6,5,-1,5,0,2,-1,14,0,5,-1,5,16,14,-1,3,2,0,-1,0,1,3,-1,15,1,0,-1,0,14,15,-1,1,15,21,-1,21,4,1,-1,8,7,10,-1,10,9,8,-1,17,18,10,-1,10,7,17,-1,12,11,7,-1,7,8,12,-1,19,17,7,-1,7,11,19,-1,11,13,20,-1,20,19,11,-1,23,24,25,-1,23,25,26,-1,23,26,22,-1,30,31,32,-1,33,27,28,-1,32,33,28,-1,30,32,28,-1,30,28,29,-1,5,6,23,-1,23,22,5,-1,9,10,24,-1,24,23,9,-1,10,18,25,-1,25,24,10,-1,18,16,26,-1,26,25,18,-1,16,5,22,-1,22,26,16,-1,15,14,28,-1,28,27,15,-1,14,16,29,-1,29,28,14,-1,16,18,30,-1,30,29,16,-1,18,17,31,-1,31,30,18,-1,17,19,32,-1,32,31,17,-1,19,20,33,-1,33,32,19,-1,21,15,27,-1,27,33,21,-1]);
let Coordinate89 = browser.currentScene.createNode("Coordinate");
Coordinate89.point = new MFVec3f(new float[1.409,-1.322,-2.067,1.409,-3.344,-0.8708,0,-3.344,-0.8708,1.109,0.0027,-1.236,0,0.0027,-1.236,-1.409,-1.322,-2.067,0,-1.322,-2.067,-1.109,0.0027,-1.236,-1.409,-3.344,-0.8708,2.927,-1.322,1.241,2.089,-3.344,1.241,2.045,0.0027,1.241,-2.927,-1.322,1.241,-2.045,0.0027,1.241,-2.089,-3.344,1.241,0,-3.344,1.241,0.9442,0.2881,-0.8816,0,0.2881,-0.8816,-0.9442,0.2881,-0.8816,-1.7,0.2881,1.12,1.7,0.2881,1.12,1.86,-3.19,2.175,2.541,-1.36,2.175,1.861,-0.3398,2.175,-1.861,-0.3398,2.175,-2.541,-1.36,2.175,-1.86,-3.19,2.175,0,-3.19,2.175]);
IndexedFaceSet88.coord = Coordinate89;

let TextureCoordinate90 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate90.point = new MFVec2f(new float[0.3873,0.0706,0.3871,0.0221,0.3873,0.0706,0.3871,0.0221,0.3871,0.0221,0.3861,0.1398,0.3836,0.1404,0.3873,0.0706,0.3873,0.0706,0.3836,0.1404,0.3861,0.1398,0.3871,0.0221,0.3871,0.0221,0.3871,0.0221,0.433,0.0595,0.4411,0.0186,0.4244,0.1312,0.433,0.0595,0.4244,0.1312,0.4411,0.0186,0.4411,0.0186,0.4411,0.0186,0.3861,0.1398,0.3836,0.1404,0.3861,0.1398,0.4244,0.1312,0.4244,0.1312,0.4411,0.0186,0.433,0.0595,0.4244,0.1312,0.4244,0.1312,0.433,0.0595,0.4411,0.0186,0.4411,0.0186]);
IndexedFaceSet88.texCoord = TextureCoordinate90;

Shape84.geometry = IndexedFaceSet88;

Transform83.child = new undefined();

Transform83.child[0] = Shape84;

HAnimSegment82.children = new MFNode();

HAnimSegment82.children[0] = Transform83;

HAnimJoint81.children = new MFNode();

HAnimJoint81.children[0] = HAnimSegment82;

let HAnimJoint91 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint91.name = "l_metatarsophalangeal_2";
HAnimJoint91.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint91.center = new SFVec3f(new float[3.854,3.64,0.7402]);
HAnimJoint91.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint91.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment92 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment92.name = "l_tarsal_proximal_phalanx_2";
HAnimSegment92.DEF = "hanim_l_tarsal_proximal_phalanx_2";
let Transform93 = browser.currentScene.createNode("Transform");
Transform93.translation = new SFVec3f(new float[3.854,3.64,0.7402]);
let Shape94 = browser.currentScene.createNode("Shape");
let Appearance95 = browser.currentScene.createNode("Appearance");
let Material96 = browser.currentScene.createNode("Material");
Material96.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance95.material = Material96;

let ImageTexture97 = browser.currentScene.createNode("ImageTexture");
ImageTexture97.USE = "JinLOA2TextureAtlas";
Appearance95.texture = ImageTexture97;

Shape94.appearance = Appearance95;

let IndexedFaceSet98 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet98.coordIndex = new MFInt32(new int[3,4,10,-1,3,10,11,-1,0,3,11,-1,1,0,11,-1,11,12,1,-1,1,12,16,-1,16,9,1,-1,2,17,10,-1,10,4,2,-1,13,8,6,-1,14,13,6,-1,5,14,6,-1,7,15,14,-1,14,5,7,-1,7,9,16,-1,16,15,7,-1,2,8,13,-1,13,17,2,-1,20,21,22,-1,20,22,23,-1,20,23,24,-1,19,20,24,-1,19,24,18,-1,26,27,28,-1,28,29,30,-1,26,28,30,-1,26,30,31,-1,26,31,32,-1,26,32,25,-1,0,1,19,-1,19,18,0,-1,1,9,20,-1,20,19,1,-1,9,7,21,-1,21,20,9,-1,7,5,22,-1,22,21,7,-1,5,6,23,-1,23,22,5,-1,6,3,24,-1,24,23,6,-1,3,0,18,-1,18,24,3,-1,11,10,26,-1,26,25,11,-1,10,17,27,-1,27,26,10,-1,17,13,28,-1,28,27,17,-1,13,14,29,-1,29,28,13,-1,14,15,30,-1,30,29,14,-1,15,16,31,-1,31,30,15,-1,16,12,32,-1,32,31,16,-1,12,11,25,-1,25,32,12,-1,6,8,2,-1,3,6,2,-1,4,3,2,-1]);
IndexedFaceSet98.creaseAngle = 3.14159;
IndexedFaceSet98.texCoordIndex = new MFInt32(new int[4,5,12,-1,4,12,13,-1,0,4,13,-1,1,0,13,-1,13,14,1,-1,1,14,19,-1,19,3,1,-1,2,21,12,-1,12,5,2,-1,15,10,7,-1,16,15,7,-1,6,16,7,-1,8,17,16,-1,16,6,8,-1,8,11,18,-1,18,17,8,-1,9,10,15,-1,15,20,9,-1,24,25,26,-1,24,26,27,-1,24,27,28,-1,23,24,28,-1,23,28,22,-1,30,31,32,-1,32,33,34,-1,30,32,34,-1,30,34,35,-1,30,35,36,-1,30,36,29,-1,0,1,23,-1,23,22,0,-1,1,3,24,-1,24,23,1,-1,11,8,25,-1,25,24,11,-1,8,6,26,-1,26,25,8,-1,6,7,27,-1,27,26,6,-1,7,4,28,-1,28,27,7,-1,4,0,22,-1,22,28,4,-1,13,12,30,-1,30,29,13,-1,12,21,31,-1,31,30,12,-1,20,15,32,-1,32,31,20,-1,15,16,33,-1,33,32,15,-1,16,17,34,-1,34,33,16,-1,17,18,35,-1,35,34,17,-1,19,14,36,-1,36,35,19,-1,14,13,29,-1,29,36,14,-1,7,10,9,-1,4,7,9,-1,5,4,9,-1]);
let Coordinate99 = browser.currentScene.createNode("Coordinate");
Coordinate99.point = new MFVec3f(new float[2.927,-1.627,-1.013,2.089,-3.648,-1.013,0,0.2797,0.3064,2.045,-0.3017,-1.013,1.695,0.0029,-0.0151,-2.927,-1.627,-1.013,-2.045,-0.3017,-1.013,-2.089,-3.648,-1.013,-1.695,0.0029,-0.0151,0,-3.648,-1.013,1.74,-0.3226,1.158,2.661,-1.866,0.9192,2.14,-3.648,0.9192,-1.74,-0.3226,1.158,-2.661,-1.866,0.9192,-2.14,-3.648,0.9192,0,-3.648,0.9192,0,-0.0274,1.661,2.405,-1.656,-1.915,1.75,-2.942,-1.915,0,-2.942,-1.915,-1.75,-2.942,-1.915,-2.405,-1.656,-1.915,-1.742,-0.5681,-1.915,1.742,-0.5681,-1.915,2.393,-1.966,1.567,1.583,-0.608,1.784,0,-0.3446,2.283,-1.583,-0.608,1.784,-2.393,-1.966,1.567,-1.955,-3.469,1.601,0,-3.469,1.601,1.955,-3.469,1.601]);
IndexedFaceSet98.coord = Coordinate99;

let TextureCoordinate100 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate100.point = new MFVec2f(new float[0.433,0.0595,0.4411,0.0186,0.4637,0.1714,0.4411,0.0186,0.4244,0.1312,0.4394,0.1472,0.433,0.0595,0.4244,0.1312,0.4411,0.0186,0.4637,0.1714,0.4394,0.1472,0.4411,0.0186,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.4949,0.0186,0.4949,0.0186,0.4868,0.1432,0.4868,0.1432,0.433,0.0595,0.4411,0.0186,0.4411,0.0186,0.4411,0.0186,0.433,0.0595,0.4244,0.1312,0.4244,0.1312,0.4607,0.0558,0.464,0.1246,0.4868,0.1432,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.4949,0.0186,0.4904,0.0166]);
IndexedFaceSet98.texCoord = TextureCoordinate100;

Shape94.geometry = IndexedFaceSet98;

Transform93.child = new undefined();

Transform93.child[0] = Shape94;

HAnimSegment92.children = new MFNode();

HAnimSegment92.children[0] = Transform93;

HAnimJoint91.children = new MFNode();

HAnimJoint91.children[0] = HAnimSegment92;

let HAnimJoint101 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint101.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint101.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint101.center = new SFVec3f(new float[3.854,1.956,1.682]);
HAnimJoint101.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint101.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment102 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment102.name = "l_tarsal_distal_phalanx_2";
HAnimSegment102.DEF = "hanim_l_tarsal_distal_phalanx_2";
let Transform103 = browser.currentScene.createNode("Transform");
Transform103.translation = new SFVec3f(new float[3.854,1.956,1.682]);
let Shape104 = browser.currentScene.createNode("Shape");
let Appearance105 = browser.currentScene.createNode("Appearance");
let Material106 = browser.currentScene.createNode("Material");
Material106.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance105.material = Material106;

let ImageTexture107 = browser.currentScene.createNode("ImageTexture");
ImageTexture107.USE = "JinLOA2TextureAtlas";
Appearance105.texture = ImageTexture107;

Shape104.appearance = Appearance105;

let IndexedFaceSet108 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet108.coordIndex = new MFInt32(new int[3,1,0,-1,0,4,3,-1,10,2,1,-1,1,3,10,-1,2,10,15,-1,0,1,6,-1,6,5,0,-1,6,1,2,-1,2,7,6,-1,7,2,15,-1,15,16,7,-1,17,4,0,-1,0,5,17,-1,3,4,9,-1,9,8,3,-1,10,3,8,-1,8,11,10,-1,11,15,10,-1,9,12,13,-1,13,8,9,-1,13,14,11,-1,11,8,13,-1,14,16,15,-1,15,11,14,-1,17,12,9,-1,9,4,17,-1,19,20,21,-1,21,22,23,-1,23,24,25,-1,21,23,25,-1,19,21,25,-1,19,25,18,-1,5,6,19,-1,19,18,5,-1,6,7,20,-1,20,19,6,-1,7,16,21,-1,21,20,7,-1,16,14,22,-1,22,21,16,-1,14,13,23,-1,23,22,14,-1,13,12,24,-1,24,23,13,-1,12,17,25,-1,25,24,12,-1,17,5,18,-1,18,25,17,-1]);
IndexedFaceSet108.creaseAngle = 3.14159;
IndexedFaceSet108.texCoordIndex = new MFInt32(new int[1,3,2,-1,2,0,1,-1,4,5,3,-1,3,1,4,-1,5,4,6,-1,2,3,8,-1,8,7,2,-1,8,3,5,-1,5,9,8,-1,9,5,6,-1,6,10,9,-1,11,0,2,-1,2,7,11,-1,12,15,14,-1,14,13,12,-1,16,12,13,-1,13,17,16,-1,17,21,16,-1,14,18,19,-1,19,13,14,-1,19,20,17,-1,17,13,19,-1,20,22,21,-1,21,17,20,-1,23,18,14,-1,14,15,23,-1,25,26,27,-1,27,28,29,-1,29,30,31,-1,27,29,31,-1,25,27,31,-1,25,31,24,-1,7,8,25,-1,25,24,7,-1,8,9,26,-1,26,25,8,-1,9,10,27,-1,27,26,9,-1,22,20,28,-1,28,27,22,-1,20,19,29,-1,29,28,20,-1,19,18,30,-1,30,29,19,-1,18,23,31,-1,31,30,18,-1,11,7,24,-1,24,31,11,-1]);
let Coordinate109 = browser.currentScene.createNode("Coordinate");
Coordinate109.point = new MFVec3f(new float[1.784,1.036,1.39,2.216,-0.5826,3.202,2.216,-1.964,2.834,0,-0.5826,4.521,0,1.138,3.008,1.74,1.362,0.2166,2.661,-0.1823,-0.0226,2.14,-1.964,-0.0226,-2.216,-0.5826,3.202,-1.784,1.036,1.39,0,-1.964,4.154,-2.216,-1.964,2.834,-1.74,1.362,0.2166,-2.661,-0.1823,-0.0226,-2.14,-1.964,-0.0226,0,-1.964,2.834,0,-1.964,-0.0226,0,1.657,0.7196,1.601,1.243,-0.4207,2.424,-0.1368,-0.64,1.977,-1.746,-0.61,0,-1.746,-0.61,-1.977,-1.746,-0.61,-2.424,-0.1368,-0.64,-1.601,1.243,-0.4207,0,1.51,0.0788]);
IndexedFaceSet108.coord = Coordinate109;

let TextureCoordinate110 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate110.point = new MFVec2f(new float[0.532,0.098,0.5645,0.0707,0.4885,0.102,0.5026,0.044,0.5945,0.0186,0.5487,0.0186,0.5487,0.0186,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.4949,0.0186,0.4868,0.1432,0.5645,0.0707,0.5026,0.044,0.4885,0.102,0.532,0.098,0.5945,0.0186,0.5487,0.0186,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.5487,0.0186,0.4949,0.0186,0.4868,0.1432,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.4949,0.0186,0.4904,0.0166,0.4607,0.0558,0.464,0.1246,0.4868,0.1432]);
IndexedFaceSet108.texCoord = TextureCoordinate110;

Shape104.geometry = IndexedFaceSet108;

Transform103.child = new undefined();

Transform103.child[0] = Shape104;

HAnimSegment102.children = new MFNode();

HAnimSegment102.children[0] = Transform103;

HAnimJoint101.children = new MFNode();

HAnimJoint101.children[0] = HAnimSegment102;

HAnimJoint91.children[1] = HAnimJoint101;

HAnimJoint81.children[1] = HAnimJoint91;

HAnimJoint71.children[1] = HAnimJoint81;

HAnimJoint61.children[1] = HAnimJoint71;

HAnimJoint51.children[1] = HAnimJoint61;

HAnimJoint41.children[1] = HAnimJoint51;

let HAnimJoint111 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint111.name = "r_hip";
HAnimJoint111.DEF = "hanim_r_hip";
HAnimJoint111.center = new SFVec3f(new float[-4.207,35.830002,-0.8155]);
HAnimJoint111.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint111.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment112 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment112.name = "r_thigh";
HAnimSegment112.DEF = "hanim_r_thigh";
let Transform113 = browser.currentScene.createNode("Transform");
Transform113.translation = new SFVec3f(new float[-4.207,35.830002,-0.8155]);
let Shape114 = browser.currentScene.createNode("Shape");
let Appearance115 = browser.currentScene.createNode("Appearance");
let Material116 = browser.currentScene.createNode("Material");
Material116.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance115.material = Material116;

let ImageTexture117 = browser.currentScene.createNode("ImageTexture");
ImageTexture117.USE = "JinLOA2TextureAtlas";
Appearance115.texture = ImageTexture117;

Shape114.appearance = Appearance115;

let IndexedFaceSet118 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet118.coordIndex = new MFInt32(new int[43,44,45,-1,42,43,45,-1,45,46,47,-1,42,45,47,-1,48,42,47,-1,0,7,8,-1,8,1,0,-1,1,8,9,-1,9,2,1,-1,2,9,10,-1,10,3,2,-1,3,10,11,-1,11,4,3,-1,4,11,12,-1,12,5,4,-1,5,12,13,-1,13,6,5,-1,6,13,7,-1,7,0,6,-1,7,14,15,-1,15,8,7,-1,8,15,16,-1,16,9,8,-1,9,16,17,-1,17,10,9,-1,10,17,18,-1,18,11,10,-1,11,18,19,-1,19,12,11,-1,12,19,20,-1,20,13,12,-1,13,20,14,-1,14,7,13,-1,14,21,22,-1,22,15,14,-1,15,22,23,-1,23,16,15,-1,16,23,24,-1,24,17,16,-1,17,24,25,-1,25,18,17,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,20,19,-1,20,27,21,-1,21,14,20,-1,60,59,58,-1,61,60,58,-1,58,57,56,-1,61,58,56,-1,62,61,56,-1,29,22,21,-1,21,28,29,-1,30,23,22,-1,22,29,30,-1,31,24,23,-1,23,30,31,-1,32,25,24,-1,24,31,32,-1,33,26,25,-1,25,32,33,-1,34,27,26,-1,26,33,34,-1,28,21,27,-1,27,34,28,-1,36,29,28,-1,28,35,36,-1,37,30,29,-1,29,36,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,35,28,34,-1,34,41,35,-1,42,0,1,-1,1,43,42,-1,43,1,2,-1,2,44,43,-1,44,2,3,-1,3,45,44,-1,45,3,4,-1,4,46,45,-1,46,4,5,-1,5,47,46,-1,47,5,6,-1,6,48,47,-1,48,6,0,-1,0,42,48,-1,50,36,35,-1,35,49,50,-1,51,37,36,-1,36,50,51,-1,52,38,37,-1,37,51,52,-1,53,39,38,-1,38,52,53,-1,54,40,39,-1,39,53,54,-1,55,41,40,-1,40,54,55,-1,49,35,41,-1,41,55,49,-1,57,50,49,-1,49,56,57,-1,58,51,50,-1,50,57,58,-1,59,52,51,-1,51,58,59,-1,60,53,52,-1,52,59,60,-1,61,54,53,-1,53,60,61,-1,62,55,54,-1,54,61,62,-1,56,49,55,-1,55,62,56,-1]);
IndexedFaceSet118.creaseAngle = 3.14159;
IndexedFaceSet118.texCoordIndex = new MFInt32(new int[0,2,3,-1,1,0,3,-1,3,4,5,-1,1,3,5,-1,6,1,5,-1,7,9,8,-1,8,10,7,-1,10,8,11,-1,11,12,10,-1,12,11,13,-1,13,14,12,-1,14,13,15,-1,15,16,14,-1,16,15,17,-1,17,18,16,-1,18,17,19,-1,19,20,18,-1,20,19,9,-1,9,7,20,-1,9,22,21,-1,21,8,9,-1,8,21,23,-1,23,11,8,-1,11,23,24,-1,24,13,11,-1,13,24,25,-1,25,15,13,-1,15,25,26,-1,26,17,15,-1,17,26,27,-1,27,19,17,-1,19,27,22,-1,22,9,19,-1,22,29,28,-1,28,21,22,-1,21,28,30,-1,30,23,21,-1,23,30,31,-1,31,24,23,-1,24,31,32,-1,32,25,24,-1,25,32,33,-1,33,26,25,-1,26,33,34,-1,34,27,26,-1,27,34,29,-1,29,22,27,-1,46,45,44,-1,47,46,44,-1,44,43,42,-1,47,44,42,-1,48,47,42,-1,35,28,29,-1,29,36,35,-1,37,30,28,-1,28,35,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,36,29,34,-1,34,41,36,-1,51,50,49,-1,49,52,51,-1,54,53,50,-1,50,51,54,-1,56,55,53,-1,53,54,56,-1,58,57,55,-1,55,56,58,-1,60,59,57,-1,57,58,60,-1,62,61,59,-1,59,60,62,-1,52,49,61,-1,61,62,52,-1,1,7,10,-1,10,0,1,-1,0,10,12,-1,12,2,0,-1,2,12,14,-1,14,3,2,-1,3,14,16,-1,16,4,3,-1,4,16,18,-1,18,5,4,-1,5,18,20,-1,20,6,5,-1,6,20,7,-1,7,1,6,-1,63,51,52,-1,52,64,63,-1,65,54,51,-1,51,63,65,-1,66,56,54,-1,54,65,66,-1,67,58,56,-1,56,66,67,-1,68,60,58,-1,58,67,68,-1,69,62,60,-1,60,68,69,-1,64,52,62,-1,62,69,64,-1,43,63,64,-1,64,42,43,-1,44,65,63,-1,63,43,44,-1,45,66,65,-1,65,44,45,-1,46,67,66,-1,66,45,46,-1,47,68,67,-1,67,46,47,-1,48,69,68,-1,68,47,48,-1,42,64,69,-1,69,48,42,-1]);
let Coordinate119 = browser.currentScene.createNode("Coordinate");
Coordinate119.point = new MFVec3f(new float[-2.96,-0.0706,0,-1.643,-0.0706,3.209,1.316,-0.0706,4.002,3.367,-0.0706,1.781,3.367,-0.0706,-1.781,1.316,-0.0706,-4.002,-1.643,-0.0706,-3.209,-2.96,-3.82,0,-1.643,-3.82,3.209,1.316,-3.82,4.002,3.367,-3.82,1.781,3.367,-3.82,-1.781,1.316,-3.82,-4.002,-1.643,-3.82,-3.209,-2.96,-10.32,0,-1.643,-10.32,3.209,1.316,-10.32,4.002,3.367,-10.32,1.781,3.367,-10.32,-1.781,1.316,-10.32,-4.002,-1.643,-10.32,-3.209,-3.367,-16.94,0,-1.897,-16.94,3.582,1.407,-16.94,4.467,3.355,-16.94,1.988,3.355,-16.94,-1.988,1.407,-16.94,-4.467,-1.897,-16.94,-3.582,-2.146,-8.794,0,-1.136,-8.794,2.462,1.135,-8.794,3.07,2.633,-8.794,1.366,2.633,-8.794,-1.366,1.135,-8.794,-3.07,-1.136,-8.794,-2.462,-2.156,-15.25,0,-1.225,-15.25,1.956,0.8662,-15.25,2.439,2.543,-15.25,1.085,2.543,-15.25,-1.085,0.8662,-15.25,-2.439,-1.225,-15.25,-1.956,-2.051,1.92,0,-1.076,1.92,2.375,1.114,1.92,2.961,2.87,1.92,1.318,2.87,1.92,-1.318,1.114,1.92,-2.961,-1.076,1.92,-2.375,-1.842,-18.93,0,-1.03,-18.93,1.873,0.7965,-18.93,2.295,2.261,-18.93,1.113,2.261,-18.93,-0.9478,0.7965,-18.93,-2.13,-1.03,-18.93,-1.708,-0.6277,-19.91,0,-0.2723,-19.91,0.912,0.5262,-19.91,1.096,1.167,-19.91,0.5796,1.167,-19.91,-0.4145,0.5262,-19.91,-0.9313,-0.2723,-19.91,-0.7469]);
IndexedFaceSet118.coord = Coordinate119;

let TextureCoordinate120 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate120.point = new MFVec2f(new float[0.719,0.5576,0.6284,0.5576,0.7414,0.5576,0.6787,0.5576,0.5781,0.5576,0.5154,0.5576,0.5378,0.5576,0.6284,0.5029,0.7509,0.3997,0.6284,0.3997,0.7509,0.5029,0.7811,0.3997,0.7811,0.5029,0.6964,0.3997,0.6964,0.5029,0.5604,0.3997,0.5604,0.5029,0.4756,0.3997,0.4756,0.5029,0.5059,0.3997,0.5059,0.5029,0.7509,0.3197,0.6284,0.3197,0.7811,0.3197,0.6964,0.3197,0.5604,0.3197,0.4756,0.3197,0.5059,0.3197,0.7651,0.2166,0.6284,0.2166,0.7989,0.2166,0.7043,0.2166,0.5525,0.2166,0.4579,0.2166,0.4917,0.2166,0.7224,0.263,0.6284,0.263,0.7456,0.263,0.6805,0.263,0.5762,0.263,0.5112,0.263,0.5344,0.263,0.8705,0.5452,0.8705,0.5383,0.8705,0.5369,0.8705,0.5408,0.8705,0.5483,0.8705,0.5522,0.8705,0.5509,0.917,0.5452,0.917,0.5266,0.89,0.5304,0.89,0.5452,0.917,0.522,0.89,0.5268,0.917,0.5349,0.89,0.537,0.917,0.5555,0.89,0.5534,0.917,0.5684,0.89,0.5636,0.917,0.5638,0.89,0.56,0.8746,0.531,0.8746,0.5452,0.8746,0.5279,0.8746,0.5368,0.8746,0.5524,0.8746,0.5613,0.8746,0.5581]);
IndexedFaceSet118.texCoord = TextureCoordinate120;

Shape114.geometry = IndexedFaceSet118;

Transform113.child = new undefined();

Transform113.child[0] = Shape114;

HAnimSegment112.children = new MFNode();

HAnimSegment112.children[0] = Transform113;

HAnimJoint111.children = new MFNode();

HAnimJoint111.children[0] = HAnimSegment112;

let HAnimJoint121 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint121.name = "r_knee";
HAnimJoint121.DEF = "hanim_r_knee";
HAnimJoint121.center = new SFVec3f(new float[-4.116,17.26,-0.8639]);
HAnimJoint121.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint121.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment122 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment122.name = "r_calf";
HAnimSegment122.DEF = "hanim_r_calf";
let Transform123 = browser.currentScene.createNode("Transform");
Transform123.translation = new SFVec3f(new float[-4.116,17.26,-0.8639]);
let Shape124 = browser.currentScene.createNode("Shape");
let Appearance125 = browser.currentScene.createNode("Appearance");
let Material126 = browser.currentScene.createNode("Material");
Material126.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance125.material = Material126;

let ImageTexture127 = browser.currentScene.createNode("ImageTexture");
ImageTexture127.USE = "JinLOA2TextureAtlas";
Appearance125.texture = ImageTexture127;

Shape124.appearance = Appearance125;

let IndexedFaceSet128 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet128.coordIndex = new MFInt32(new int[0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1]);
IndexedFaceSet128.creaseAngle = 3.14159;
IndexedFaceSet128.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1]);
let Coordinate129 = browser.currentScene.createNode("Coordinate");
Coordinate129.point = new MFVec3f(new float[-0.7186,0.9688,0.0234,-0.3632,0.9688,0.9354,0.4353,0.9688,1.12,1.076,0.9688,0.603,1.076,0.9688,-0.3911,0.4353,0.9688,-0.9079,-0.3632,0.9688,-0.7235,-2.337,-4.613,0.0234,-1.46,-3.622,2.019,-1.236,-1.628,2.42,-2.118,-1.912,0.0234,0.8111,-3.622,2.567,0.7468,-1.628,2.903,2.254,-4.613,1.255,2.337,-1.912,0.9793,2.254,-5.383,-1.368,2.337,-1.912,-0.9325,0.8111,-5.383,-2.903,0.7468,-1.912,-2.368,-1.46,-5.383,-2.355,-1.236,-1.912,-1.885,-1.121,-0.0032,1.896,-1.933,-0.0032,0.0234,0.7056,-0.0032,2.318,2.17,-0.0032,1.136,2.17,-0.0032,-0.9244,0.7056,-0.0032,-2.061,-1.121,-0.0032,-1.64,-1.607,-12.92,0.0032,-0.9216,-12.91,1.565,0.619,-12.91,1.951,1.854,-12.92,0.8701,1.854,-12.94,-0.9762,0.619,-12.94,-1.742,-0.9216,-12.94,-1.356,-0.7072,-14.53,0.0239,-0.3604,-14.53,0.814,0.4188,-14.53,1.009,1.044,-14.53,0.4624,1.044,-14.54,-0.4714,0.4188,-14.54,-0.8587,-0.3604,-14.54,-0.6635]);
IndexedFaceSet128.coord = Coordinate129;

let TextureCoordinate130 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate130.point = new MFVec2f(new float[0.9309,0.5848,0.919,0.5848,0.8921,0.5848,0.8706,0.5848,0.8706,0.5848,0.8921,0.5848,0.919,0.5848,0.9845,0.5321,0.955,0.5475,0.9491,0.5599,0.9788,0.5571,0.8787,0.5475,0.8825,0.5599,0.8302,0.5321,0.8291,0.5571,0.8302,0.52,0.8291,0.5571,0.8787,0.52,0.8825,0.5571,0.955,0.52,0.9491,0.5571,0.9444,0.5755,0.9717,0.5755,0.8831,0.5755,0.8339,0.5755,0.8339,0.5755,0.8831,0.5755,0.9444,0.5755,0.9679,0.2444,0.9449,0.2445,0.8931,0.2445,0.8516,0.2444,0.8516,0.2442,0.8931,0.2442,0.9449,0.2442,0.9372,0.2243,0.9255,0.2244,0.8993,0.2244,0.8783,0.2243,0.8783,0.2243,0.8993,0.2243,0.9255,0.2243]);
IndexedFaceSet128.texCoord = TextureCoordinate130;

Shape124.geometry = IndexedFaceSet128;

Transform123.child = new undefined();

Transform123.child[0] = Shape124;

HAnimSegment122.children = new MFNode();

HAnimSegment122.children[0] = Transform123;

HAnimJoint121.children = new MFNode();

HAnimJoint121.children[0] = HAnimSegment122;

let HAnimJoint131 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint131.name = "r_talocrural";
HAnimJoint131.DEF = "hanim_r_talocrural";
HAnimJoint131.center = new SFVec3f(new float[-3.854,3.939,-0.7038]);
HAnimJoint131.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint131.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment132 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment132.name = "r_talus";
HAnimSegment132.DEF = "hanim_r_talus";
let Transform133 = browser.currentScene.createNode("Transform");
Transform133.translation = new SFVec3f(new float[-3.854,3.939,-0.7038]);
let Shape134 = browser.currentScene.createNode("Shape");
let Appearance135 = browser.currentScene.createNode("Appearance");
let Material136 = browser.currentScene.createNode("Material");
Material136.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance135.material = Material136;

let ImageTexture137 = browser.currentScene.createNode("ImageTexture");
ImageTexture137.USE = "JinLOA2TextureAtlas";
Appearance135.texture = ImageTexture137;

Shape134.appearance = Appearance135;

let IndexedFaceSet138 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet138.coordIndex = new MFInt32(new int[1,14,11,-1,3,6,5,-1,5,4,3,-1,1,3,4,-1,4,0,1,-1,0,4,5,-1,5,2,0,-1,11,6,3,-1,3,1,11,-1,15,12,0,-1,0,2,15,-1,0,12,13,-1,13,1,0,-1,13,14,1,-1,7,11,18,-1,8,9,5,-1,5,6,8,-1,7,10,9,-1,9,8,7,-1,10,2,5,-1,5,9,10,-1,11,7,8,-1,8,6,11,-1,15,2,10,-1,10,16,15,-1,10,7,17,-1,17,16,10,-1,17,7,18,-1,19,26,25,-1,25,24,23,-1,19,25,23,-1,23,22,21,-1,19,23,21,-1,20,19,21,-1,15,19,20,-1,20,12,15,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,11,14,-1,11,23,24,-1,24,18,11,-1,18,24,25,-1,25,17,18,-1,17,25,26,-1,26,16,17,-1,16,26,19,-1,19,15,16,-1]);
IndexedFaceSet138.creaseAngle = 3.14159;
IndexedFaceSet138.texCoordIndex = new MFInt32(new int[1,18,14,-1,3,6,5,-1,5,4,3,-1,1,3,4,-1,4,0,1,-1,0,4,5,-1,5,2,0,-1,14,6,3,-1,3,1,14,-1,19,16,0,-1,0,2,19,-1,0,16,17,-1,17,1,0,-1,17,18,1,-1,7,15,23,-1,9,10,11,-1,11,8,9,-1,7,12,10,-1,10,9,7,-1,12,13,11,-1,11,10,12,-1,15,7,9,-1,9,8,15,-1,20,13,12,-1,12,21,20,-1,12,7,22,-1,22,21,12,-1,22,7,23,-1,24,31,30,-1,30,29,28,-1,24,30,28,-1,28,27,26,-1,24,28,26,-1,25,24,26,-1,19,24,25,-1,25,16,19,-1,16,25,26,-1,26,17,16,-1,17,26,27,-1,27,18,17,-1,18,27,28,-1,28,14,18,-1,15,28,29,-1,29,23,15,-1,23,29,30,-1,30,22,23,-1,22,30,31,-1,31,21,22,-1,21,31,24,-1,24,20,21,-1]);
let Coordinate139 = browser.currentScene.createNode("Coordinate");
Coordinate139.point = new MFVec3f(new float[-0.9768,-0.0192,-1.681,-1.657,-0.0192,0.4309,0,-0.0192,-1.681,-1.403,0.7316,0.354,-0.8174,0.7316,-1.463,0,0.7316,-1.463,0,0.7316,1.471,1.657,-0.0192,0.4309,1.403,0.7316,0.354,0.8174,0.7316,-1.463,0.9768,-0.0192,-1.681,0,-0.0192,1.75,-1.109,-0.6007,-2.046,-2.045,-0.6007,0.4309,-1.695,-0.296,1.429,0,-0.6007,-2.046,1.109,-0.6007,-2.046,2.045,-0.6007,0.4309,1.695,-0.296,1.429,0,-1.207,-1.841,-1.023,-1.207,-1.841,-1.913,-1.223,0.5161,-1.601,-0.9325,1.406,0,-0.6582,1.708,1.601,-0.9325,1.406,1.913,-1.223,0.5161,1.023,-1.207,-1.841]);
IndexedFaceSet138.coord = Coordinate139;

let TextureCoordinate140 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate140.point = new MFVec2f(new float[0.3819,0.171,0.4216,0.1651,0.3819,0.171,0.4216,0.1651,0.3819,0.171,0.3819,0.171,0.4637,0.1714,0.4216,0.1651,0.4637,0.1714,0.4216,0.1651,0.3819,0.171,0.3819,0.171,0.3819,0.171,0.3819,0.171,0.4637,0.1714,0.4637,0.1714,0.3861,0.1398,0.4244,0.1312,0.4394,0.1472,0.3836,0.1404,0.3836,0.1404,0.3861,0.1398,0.4244,0.1312,0.4394,0.1472,0.3836,0.1404,0.3861,0.1398,0.4244,0.1312,0.4394,0.1472,0.4637,0.1714,0.4394,0.1472,0.4244,0.1312,0.3861,0.1398]);
IndexedFaceSet138.texCoord = TextureCoordinate140;

Shape134.geometry = IndexedFaceSet138;

Transform133.child = new undefined();

Transform133.child[0] = Shape134;

HAnimSegment132.children = new MFNode();

HAnimSegment132.children[0] = Transform133;

HAnimJoint131.children = new MFNode();

HAnimJoint131.children[0] = HAnimSegment132;

let HAnimJoint141 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint141.name = "r_tarsometatarsal_2";
HAnimJoint141.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint141.center = new SFVec3f(new float[-3.854,3.336,-1.514]);
HAnimJoint141.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint141.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment142 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment142.name = "r_metatarsal_2";
HAnimSegment142.DEF = "hanim_r_metatarsal_2";
let Transform143 = browser.currentScene.createNode("Transform");
Transform143.translation = new SFVec3f(new float[-3.854,3.336,-1.514]);
let Shape144 = browser.currentScene.createNode("Shape");
let Appearance145 = browser.currentScene.createNode("Appearance");
let Material146 = browser.currentScene.createNode("Material");
Material146.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance145.material = Material146;

let ImageTexture147 = browser.currentScene.createNode("ImageTexture");
ImageTexture147.USE = "JinLOA2TextureAtlas";
Appearance145.texture = ImageTexture147;

Shape144.appearance = Appearance145;

let IndexedFaceSet148 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet148.coordIndex = new MFInt32(new int[6,0,3,-1,3,4,6,-1,9,11,3,-1,3,0,9,-1,2,1,0,-1,0,6,2,-1,10,9,0,-1,0,1,10,-1,1,2,15,-1,15,10,1,-1,6,4,7,-1,7,5,6,-1,12,5,7,-1,7,13,12,-1,2,6,5,-1,5,8,2,-1,14,8,5,-1,5,12,14,-1,8,14,15,-1,15,2,8,-1,17,16,20,-1,17,20,19,-1,17,19,18,-1,24,23,22,-1,22,21,27,-1,22,27,26,-1,24,22,26,-1,24,26,25,-1,3,16,17,-1,17,4,3,-1,4,17,18,-1,18,7,4,-1,7,18,19,-1,19,13,7,-1,13,19,20,-1,20,11,13,-1,11,20,16,-1,16,3,11,-1,10,21,22,-1,22,9,10,-1,9,22,23,-1,23,11,9,-1,11,23,24,-1,24,13,11,-1,13,24,25,-1,25,12,13,-1,12,25,26,-1,26,14,12,-1,14,26,27,-1,27,15,14,-1,15,27,21,-1,21,10,15,-1]);
IndexedFaceSet148.creaseAngle = 3.14159;
IndexedFaceSet148.texCoordIndex = new MFInt32(new int[2,0,5,-1,5,6,2,-1,14,16,5,-1,5,0,14,-1,3,1,0,-1,0,2,3,-1,15,14,0,-1,0,1,15,-1,1,4,21,-1,21,15,1,-1,8,9,10,-1,10,7,8,-1,17,7,10,-1,10,18,17,-1,12,8,7,-1,7,11,12,-1,19,11,7,-1,7,17,19,-1,11,19,20,-1,20,13,11,-1,23,22,26,-1,23,26,25,-1,23,25,24,-1,30,29,28,-1,28,27,33,-1,28,33,32,-1,30,28,32,-1,30,32,31,-1,5,22,23,-1,23,6,5,-1,9,23,24,-1,24,10,9,-1,10,24,25,-1,25,18,10,-1,18,25,26,-1,26,16,18,-1,16,26,22,-1,22,5,16,-1,15,27,28,-1,28,14,15,-1,14,28,29,-1,29,16,14,-1,16,29,30,-1,30,18,16,-1,18,30,31,-1,31,17,18,-1,17,31,32,-1,32,19,17,-1,19,32,33,-1,33,20,19,-1,21,33,27,-1,27,15,21,-1]);
let Coordinate149 = browser.currentScene.createNode("Coordinate");
Coordinate149.point = new MFVec3f(new float[-1.409,-1.322,-2.067,-1.409,-3.344,-0.8708,0,-3.344,-0.8708,-1.109,0.0027,-1.236,0,0.0027,-1.236,1.409,-1.322,-2.067,0,-1.322,-2.067,1.109,0.0027,-1.236,1.409,-3.344,-0.8708,-2.927,-1.322,1.241,-2.089,-3.344,1.241,-2.045,0.0027,1.241,2.927,-1.322,1.241,2.045,0.0027,1.241,2.089,-3.344,1.241,0,-3.344,1.241,-0.9442,0.2881,-0.8816,0,0.2881,-0.8816,0.9442,0.2881,-0.8816,1.7,0.2881,1.12,-1.7,0.2881,1.12,-1.86,-3.19,2.175,-2.541,-1.36,2.175,-1.861,-0.3398,2.175,1.861,-0.3398,2.175,2.541,-1.36,2.175,1.86,-3.19,2.175,0,-3.19,2.175]);
IndexedFaceSet148.coord = Coordinate149;

let TextureCoordinate150 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate150.point = new MFVec2f(new float[0.3873,0.0706,0.3871,0.0221,0.3873,0.0706,0.3871,0.0221,0.3871,0.0221,0.3861,0.1398,0.3836,0.1404,0.3873,0.0706,0.3873,0.0706,0.3836,0.1404,0.3861,0.1398,0.3871,0.0221,0.3871,0.0221,0.3871,0.0221,0.433,0.0595,0.4411,0.0186,0.4244,0.1312,0.433,0.0595,0.4244,0.1312,0.4411,0.0186,0.4411,0.0186,0.4411,0.0186,0.3861,0.1398,0.3836,0.1404,0.3861,0.1398,0.4244,0.1312,0.4244,0.1312,0.4411,0.0186,0.433,0.0595,0.4244,0.1312,0.4244,0.1312,0.433,0.0595,0.4411,0.0186,0.4411,0.0186]);
IndexedFaceSet148.texCoord = TextureCoordinate150;

Shape144.geometry = IndexedFaceSet148;

Transform143.child = new undefined();

Transform143.child[0] = Shape144;

HAnimSegment142.children = new MFNode();

HAnimSegment142.children[0] = Transform143;

HAnimJoint141.children = new MFNode();

HAnimJoint141.children[0] = HAnimSegment142;

let HAnimJoint151 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint151.name = "r_metatarsophalangeal_2";
HAnimJoint151.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint151.center = new SFVec3f(new float[-3.854,3.64,0.7402]);
HAnimJoint151.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint151.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment152 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment152.name = "r_tarsal_proximal_phalanx_2";
HAnimSegment152.DEF = "hanim_r_tarsal_proximal_phalanx_2";
let Transform153 = browser.currentScene.createNode("Transform");
Transform153.translation = new SFVec3f(new float[-3.854,3.64,0.7402]);
let Shape154 = browser.currentScene.createNode("Shape");
let Appearance155 = browser.currentScene.createNode("Appearance");
let Material156 = browser.currentScene.createNode("Material");
Material156.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance155.material = Material156;

let ImageTexture157 = browser.currentScene.createNode("ImageTexture");
ImageTexture157.USE = "JinLOA2TextureAtlas";
Appearance155.texture = ImageTexture157;

Shape154.appearance = Appearance155;

let IndexedFaceSet158 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet158.coordIndex = new MFInt32(new int[10,4,3,-1,11,10,3,-1,0,11,3,-1,1,12,11,-1,11,0,1,-1,1,9,16,-1,16,12,1,-1,2,4,10,-1,10,17,2,-1,6,8,13,-1,6,13,14,-1,5,6,14,-1,7,5,14,-1,14,15,7,-1,7,15,16,-1,16,9,7,-1,2,17,13,-1,13,8,2,-1,19,18,24,-1,22,21,20,-1,23,22,20,-1,24,23,20,-1,19,24,20,-1,26,25,32,-1,26,32,31,-1,26,31,30,-1,30,29,28,-1,26,30,28,-1,26,28,27,-1,0,18,19,-1,19,1,0,-1,1,19,20,-1,20,9,1,-1,9,20,21,-1,21,7,9,-1,7,21,22,-1,22,5,7,-1,5,22,23,-1,23,6,5,-1,6,23,24,-1,24,3,6,-1,3,24,18,-1,18,0,3,-1,11,25,26,-1,26,10,11,-1,10,26,27,-1,27,17,10,-1,17,27,28,-1,28,13,17,-1,13,28,29,-1,29,14,13,-1,14,29,30,-1,30,15,14,-1,15,30,31,-1,31,16,15,-1,16,31,32,-1,32,12,16,-1,12,32,25,-1,25,11,12,-1,2,8,6,-1,2,6,3,-1,4,2,3,-1]);
IndexedFaceSet158.creaseAngle = 3.14159;
IndexedFaceSet158.texCoordIndex = new MFInt32(new int[12,5,4,-1,13,12,4,-1,0,13,4,-1,1,14,13,-1,13,0,1,-1,1,3,19,-1,19,14,1,-1,2,5,12,-1,12,21,2,-1,7,10,15,-1,7,15,16,-1,6,7,16,-1,8,6,16,-1,16,17,8,-1,8,17,18,-1,18,11,8,-1,9,20,15,-1,15,10,9,-1,23,22,28,-1,26,25,24,-1,27,26,24,-1,28,27,24,-1,23,28,24,-1,30,29,36,-1,30,36,35,-1,30,35,34,-1,34,33,32,-1,30,34,32,-1,30,32,31,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,3,1,-1,11,24,25,-1,25,8,11,-1,8,25,26,-1,26,6,8,-1,6,26,27,-1,27,7,6,-1,7,27,28,-1,28,4,7,-1,4,28,22,-1,22,0,4,-1,13,29,30,-1,30,12,13,-1,12,30,31,-1,31,21,12,-1,20,31,32,-1,32,15,20,-1,15,32,33,-1,33,16,15,-1,16,33,34,-1,34,17,16,-1,17,34,35,-1,35,18,17,-1,19,35,36,-1,36,14,19,-1,14,36,29,-1,29,13,14,-1,9,10,7,-1,9,7,4,-1,5,9,4,-1]);
let Coordinate159 = browser.currentScene.createNode("Coordinate");
Coordinate159.point = new MFVec3f(new float[-2.927,-1.627,-1.013,-2.089,-3.648,-1.013,0,0.2797,0.3064,-2.045,-0.3017,-1.013,-1.695,0.0029,-0.0151,2.927,-1.627,-1.013,2.045,-0.3017,-1.013,2.089,-3.648,-1.013,1.695,0.0029,-0.0151,0,-3.648,-1.013,-1.74,-0.3226,1.158,-2.661,-1.866,0.9192,-2.14,-3.648,0.9192,1.74,-0.3226,1.158,2.661,-1.866,0.9192,2.14,-3.648,0.9192,0,-3.648,0.9192,0,-0.0274,1.661,-2.405,-1.656,-1.915,-1.75,-2.942,-1.915,0,-2.942,-1.915,1.75,-2.942,-1.915,2.405,-1.656,-1.915,1.742,-0.5681,-1.915,-1.742,-0.5681,-1.915,-2.393,-1.966,1.567,-1.583,-0.608,1.784,0,-0.3446,2.283,1.583,-0.608,1.784,2.393,-1.966,1.567,1.955,-3.469,1.601,0,-3.469,1.601,-1.955,-3.469,1.601]);
IndexedFaceSet158.coord = Coordinate159;

let TextureCoordinate160 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate160.point = new MFVec2f(new float[0.433,0.0595,0.4411,0.0186,0.4637,0.1714,0.4411,0.0186,0.4244,0.1312,0.4394,0.1472,0.433,0.0595,0.4244,0.1312,0.4411,0.0186,0.4637,0.1714,0.4394,0.1472,0.4411,0.0186,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.4949,0.0186,0.4949,0.0186,0.4868,0.1432,0.4868,0.1432,0.433,0.0595,0.4411,0.0186,0.4411,0.0186,0.4411,0.0186,0.433,0.0595,0.4244,0.1312,0.4244,0.1312,0.4607,0.0558,0.464,0.1246,0.4868,0.1432,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.4949,0.0186,0.4904,0.0166]);
IndexedFaceSet158.texCoord = TextureCoordinate160;

Shape154.geometry = IndexedFaceSet158;

Transform153.child = new undefined();

Transform153.child[0] = Shape154;

HAnimSegment152.children = new MFNode();

HAnimSegment152.children[0] = Transform153;

HAnimJoint151.children = new MFNode();

HAnimJoint151.children[0] = HAnimSegment152;

let HAnimJoint161 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint161.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint161.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint161.center = new SFVec3f(new float[-3.854,1.956,1.682]);
HAnimJoint161.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint161.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment162 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment162.name = "r_tarsal_distal_phalanx_2";
HAnimSegment162.DEF = "hanim_r_tarsal_distal_phalanx_2";
let Transform163 = browser.currentScene.createNode("Transform");
Transform163.translation = new SFVec3f(new float[-3.854,1.956,1.682]);
let Shape164 = browser.currentScene.createNode("Shape");
let Appearance165 = browser.currentScene.createNode("Appearance");
let Material166 = browser.currentScene.createNode("Material");
Material166.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance165.material = Material166;

let ImageTexture167 = browser.currentScene.createNode("ImageTexture");
ImageTexture167.USE = "JinLOA2TextureAtlas";
Appearance165.texture = ImageTexture167;

Shape164.appearance = Appearance165;

let IndexedFaceSet168 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet168.coordIndex = new MFInt32(new int[3,4,0,-1,0,1,3,-1,10,3,1,-1,1,2,10,-1,2,15,10,-1,0,5,6,-1,6,1,0,-1,6,7,2,-1,2,1,6,-1,7,16,15,-1,15,2,7,-1,17,5,0,-1,0,4,17,-1,3,8,9,-1,9,4,3,-1,10,11,8,-1,8,3,10,-1,11,10,15,-1,9,8,13,-1,13,12,9,-1,13,8,11,-1,11,14,13,-1,14,11,15,-1,15,16,14,-1,17,4,9,-1,9,12,17,-1,19,18,25,-1,25,24,23,-1,23,22,21,-1,25,23,21,-1,19,25,21,-1,19,21,20,-1,5,18,19,-1,19,6,5,-1,6,19,20,-1,20,7,6,-1,7,20,21,-1,21,16,7,-1,16,21,22,-1,22,14,16,-1,14,22,23,-1,23,13,14,-1,13,23,24,-1,24,12,13,-1,12,24,25,-1,25,17,12,-1,17,25,18,-1,18,5,17,-1]);
IndexedFaceSet168.creaseAngle = 3.14159;
IndexedFaceSet168.texCoordIndex = new MFInt32(new int[1,0,2,-1,2,3,1,-1,4,1,3,-1,3,5,4,-1,5,6,4,-1,2,7,8,-1,8,3,2,-1,8,9,5,-1,5,3,8,-1,9,10,6,-1,6,5,9,-1,11,7,2,-1,2,0,11,-1,12,13,14,-1,14,15,12,-1,16,17,13,-1,13,12,16,-1,17,16,21,-1,14,13,19,-1,19,18,14,-1,19,13,17,-1,17,20,19,-1,20,17,21,-1,21,22,20,-1,23,15,14,-1,14,18,23,-1,25,24,31,-1,31,30,29,-1,29,28,27,-1,31,29,27,-1,25,31,27,-1,25,27,26,-1,7,24,25,-1,25,8,7,-1,8,25,26,-1,26,9,8,-1,9,26,27,-1,27,10,9,-1,22,27,28,-1,28,20,22,-1,20,28,29,-1,29,19,20,-1,19,29,30,-1,30,18,19,-1,18,30,31,-1,31,23,18,-1,11,31,24,-1,24,7,11,-1]);
let Coordinate169 = browser.currentScene.createNode("Coordinate");
Coordinate169.point = new MFVec3f(new float[-1.784,1.036,1.39,-2.216,-0.5826,3.202,-2.216,-1.964,2.834,0,-0.5826,4.521,0,1.138,3.008,-1.74,1.362,0.2166,-2.661,-0.1823,-0.0226,-2.14,-1.964,-0.0226,2.216,-0.5826,3.202,1.784,1.036,1.39,0,-1.964,4.154,2.216,-1.964,2.834,1.74,1.362,0.2166,2.661,-0.1823,-0.0226,2.14,-1.964,-0.0226,0,-1.964,2.834,0,-1.964,-0.0226,0,1.657,0.7196,-1.601,1.243,-0.4207,-2.424,-0.1368,-0.64,-1.977,-1.746,-0.61,0,-1.746,-0.61,1.977,-1.746,-0.61,2.424,-0.1368,-0.64,1.601,1.243,-0.4207,0,1.51,0.0788]);
IndexedFaceSet168.coord = Coordinate169;

let TextureCoordinate170 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate170.point = new MFVec2f(new float[0.532,0.098,0.5645,0.0707,0.4885,0.102,0.5026,0.044,0.5945,0.0186,0.5487,0.0186,0.5487,0.0186,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.4949,0.0186,0.4868,0.1432,0.5645,0.0707,0.5026,0.044,0.4885,0.102,0.532,0.098,0.5945,0.0186,0.5487,0.0186,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.5487,0.0186,0.4949,0.0186,0.4868,0.1432,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.4949,0.0186,0.4904,0.0166,0.4607,0.0558,0.464,0.1246,0.4868,0.1432]);
IndexedFaceSet168.texCoord = TextureCoordinate170;

Shape164.geometry = IndexedFaceSet168;

Transform163.child = new undefined();

Transform163.child[0] = Shape164;

HAnimSegment162.children = new MFNode();

HAnimSegment162.children[0] = Transform163;

HAnimJoint161.children = new MFNode();

HAnimJoint161.children[0] = HAnimSegment162;

HAnimJoint151.children[1] = HAnimJoint161;

HAnimJoint141.children[1] = HAnimJoint151;

HAnimJoint131.children[1] = HAnimJoint141;

HAnimJoint121.children[1] = HAnimJoint131;

HAnimJoint111.children[1] = HAnimJoint121;

HAnimJoint41.children[2] = HAnimJoint111;

HAnimJoint31.children[1] = HAnimJoint41;

let HAnimJoint171 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint171.name = "vl5";
HAnimJoint171.DEF = "hanim_vl5";
HAnimJoint171.center = new SFVec3f(new float[0,40.220001,-0.6117]);
HAnimJoint171.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint171.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment172 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment172.name = "l5";
HAnimSegment172.DEF = "hanim_l5";
let Transform173 = browser.currentScene.createNode("Transform");
Transform173.translation = new SFVec3f(new float[0,40.220001,-0.6117]);
let Shape174 = browser.currentScene.createNode("Shape");
let Appearance175 = browser.currentScene.createNode("Appearance");
let Material176 = browser.currentScene.createNode("Material");
Material176.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance175.material = Material176;

let ImageTexture177 = browser.currentScene.createNode("ImageTexture");
ImageTexture177.USE = "JinLOA2TextureAtlas";
Appearance175.texture = ImageTexture177;

Shape174.appearance = Appearance175;

let IndexedFaceSet178 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet178.coordIndex = new MFInt32(new int[0,10,11,-1,11,5,0,-1,1,0,5,-1,5,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,1,6,-1,6,9,4,-1,2,7,26,-1,26,27,2,-1,8,5,11,-1,11,7,8,-1,9,6,5,-1,5,8,9,-1,11,10,13,-1,13,12,11,-1,7,11,12,-1,12,26,7,-1,16,15,14,-1,14,17,16,-1,19,18,15,-1,15,16,19,-1,22,21,20,-1,20,23,22,-1,23,20,24,-1,24,25,23,-1,25,24,18,-1,18,19,25,-1,22,27,26,-1,26,21,22,-1,20,21,14,-1,14,15,20,-1,24,20,15,-1,15,18,24,-1,14,12,13,-1,13,17,14,-1,21,26,12,-1,12,14,21,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,10,0,29,-1,29,28,10,-1,0,1,30,-1,30,29,0,-1,1,4,31,-1,31,30,1,-1,4,3,32,-1,32,31,4,-1,3,2,33,-1,33,32,3,-1,2,27,34,-1,34,33,2,-1,27,22,35,-1,35,34,27,-1,22,23,36,-1,36,35,22,-1,23,25,37,-1,37,36,23,-1,25,19,38,-1,38,37,25,-1,19,16,39,-1,39,38,19,-1,16,17,40,-1,40,39,16,-1,17,13,41,-1,41,40,17,-1,13,10,28,-1,28,41,13,-1]);
IndexedFaceSet178.creaseAngle = 3.14159;
IndexedFaceSet178.texCoordIndex = new MFInt32(new int[1,0,6,-1,6,7,1,-1,2,1,7,-1,7,8,2,-1,4,3,9,-1,9,10,4,-1,3,5,11,-1,11,9,3,-1,5,2,8,-1,8,11,5,-1,12,13,15,-1,15,14,12,-1,9,7,6,-1,6,10,9,-1,11,8,7,-1,7,9,11,-1,6,0,17,-1,17,18,6,-1,10,6,18,-1,18,16,10,-1,21,20,19,-1,19,22,21,-1,24,23,20,-1,20,21,24,-1,27,26,25,-1,25,28,27,-1,28,25,29,-1,29,30,28,-1,30,29,23,-1,23,24,30,-1,31,34,33,-1,33,32,31,-1,25,26,19,-1,19,20,25,-1,29,25,20,-1,20,23,29,-1,19,35,36,-1,36,22,19,-1,26,37,35,-1,35,19,26,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,43,46,50,-1,39,43,50,-1,39,50,51,-1,39,51,38,-1,0,1,39,-1,39,38,0,-1,1,2,40,-1,40,39,1,-1,2,5,41,-1,41,40,2,-1,5,3,42,-1,42,41,5,-1,3,4,43,-1,43,42,3,-1,12,14,44,-1,44,43,12,-1,34,31,45,-1,45,44,34,-1,27,28,46,-1,46,45,27,-1,28,30,47,-1,47,46,28,-1,30,24,48,-1,48,47,30,-1,24,21,49,-1,49,48,24,-1,21,22,50,-1,50,49,21,-1,22,36,51,-1,51,50,22,-1,17,0,38,-1,38,51,17,-1]);
let Coordinate179 = browser.currentScene.createNode("Coordinate");
Coordinate179.point = new MFVec3f(new float[4.178,1.114,3.711,5.76,1.15,1.754,1.52,0.9575,-3.918,3.95,0.9672,-2.776,5.309,1.072,-0.9797,3.789,0.0396,2.969,5.166,0.0713,1.445,1.593,-0.0798,-2.916,3.6,-0.0573,-2.087,4.841,-0.0103,-0.6841,1.635,1.083,4.322,1.595,0.0009,3.405,0,0.0009,3.405,0,1.083,4.322,-1.595,0.0009,3.405,-3.789,0.0396,2.969,-4.178,1.114,3.711,-1.635,1.083,4.322,-5.166,0.0713,1.445,-5.76,1.15,1.754,-3.6,-0.0573,-2.087,-1.593,-0.0798,-2.916,-1.52,0.9575,-3.918,-3.95,0.9672,-2.776,-4.841,-0.0103,-0.6841,-5.309,1.072,-0.9797,0,-0.0798,-2.916,0,0.9575,-3.918,1.609,1.867,3.426,4.053,1.867,2.943,5.524,1.867,1.449,5.098,1.867,-0.671,3.806,1.867,-2.074,1.47,1.867,-2.976,0,1.867,-2.976,-1.47,1.867,-2.976,-3.806,1.867,-2.074,-5.098,1.867,-0.671,-5.524,1.867,1.449,-4.053,1.867,2.943,-1.609,1.867,3.426,0,1.867,3.426]);
IndexedFaceSet178.coord = Coordinate179;

let TextureCoordinate180 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate180.point = new MFVec2f(new float[0.019,0.2349,0.1011,0.241,0.1445,0.2419,0.2369,0.2375,0.3561,0.2404,0.1927,0.24,0.0206,0.2122,0.1067,0.2154,0.1463,0.2162,0.227,0.2131,0.3536,0.2151,0.1879,0.2143,0.3553,0.2398,0.3555,0.2151,0.3557,0.2401,0.3545,0.2151,0.3536,0.2151,0.019,0.2349,0.0206,0.2122,0.0206,0.2122,0.1067,0.2154,0.1011,0.241,0.019,0.2349,0.1463,0.2162,0.1445,0.2419,0.227,0.2131,0.3536,0.2151,0.3561,0.2404,0.2369,0.2375,0.1879,0.2143,0.1927,0.24,0.3553,0.2398,0.3555,0.2151,0.3545,0.2151,0.3557,0.2401,0.0206,0.2122,0.019,0.2349,0.3536,0.2151,0.019,0.2349,0.1011,0.241,0.1445,0.2419,0.1927,0.24,0.2369,0.2375,0.3561,0.2404,0.3557,0.2401,0.3553,0.2398,0.2369,0.2375,0.1927,0.24,0.1445,0.2419,0.1011,0.241,0.019,0.2349,0.019,0.2349]);
IndexedFaceSet178.texCoord = TextureCoordinate180;

Shape174.geometry = IndexedFaceSet178;

Transform173.child = new undefined();

Transform173.child[0] = Shape174;

HAnimSegment172.children = new MFNode();

HAnimSegment172.children[0] = Transform173;

HAnimJoint171.children = new MFNode();

HAnimJoint171.children[0] = HAnimSegment172;

let HAnimJoint181 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint181.name = "vl3";
HAnimJoint181.DEF = "hanim_vl3";
HAnimJoint181.center = new SFVec3f(new float[0,41.299999,-0.6117]);
HAnimJoint181.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint181.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment182 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment182.name = "l3";
HAnimSegment182.DEF = "hanim_l3";
let Transform183 = browser.currentScene.createNode("Transform");
Transform183.translation = new SFVec3f(new float[0,41.299999,-0.6117]);
let Shape184 = browser.currentScene.createNode("Shape");
let Appearance185 = browser.currentScene.createNode("Appearance");
let Material186 = browser.currentScene.createNode("Material");
Material186.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance185.material = Material186;

let ImageTexture187 = browser.currentScene.createNode("ImageTexture");
ImageTexture187.USE = "JinLOA2TextureAtlas";
Appearance185.texture = ImageTexture187;

Shape184.appearance = Appearance185;

let IndexedFaceSet188 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet188.coordIndex = new MFInt32(new int[1,17,21,-1,21,6,1,-1,0,15,16,-1,16,5,0,-1,7,47,20,-1,20,4,7,-1,4,0,9,-1,9,8,4,-1,0,5,10,-1,10,9,0,-1,5,3,11,-1,11,10,5,-1,3,2,12,-1,12,11,3,-1,2,1,13,-1,13,12,2,-1,1,6,40,-1,40,13,1,-1,7,4,8,-1,8,14,7,-1,20,15,0,-1,0,4,20,-1,17,1,2,-1,2,18,17,-1,19,18,2,-1,2,3,19,-1,16,19,3,-1,3,5,16,-1,15,20,23,-1,23,22,15,-1,20,47,50,-1,50,23,20,-1,21,17,24,-1,24,52,21,-1,17,18,25,-1,25,24,17,-1,18,19,26,-1,26,25,18,-1,19,16,27,-1,27,26,19,-1,16,15,22,-1,22,27,16,-1,28,6,21,-1,21,45,28,-1,45,44,32,-1,32,28,45,-1,46,43,31,-1,31,33,46,-1,30,35,34,-1,34,29,30,-1,29,34,36,-1,36,31,29,-1,31,36,37,-1,37,33,31,-1,33,37,38,-1,38,32,33,-1,32,38,39,-1,39,28,32,-1,28,39,40,-1,40,6,28,-1,7,14,35,-1,35,30,7,-1,41,30,29,-1,29,42,41,-1,29,31,43,-1,43,42,29,-1,46,33,32,-1,32,44,46,-1,47,7,30,-1,30,41,47,-1,42,49,48,-1,48,41,42,-1,41,48,50,-1,50,47,41,-1,21,52,51,-1,51,45,21,-1,45,51,53,-1,53,44,45,-1,44,53,54,-1,54,46,44,-1,46,54,55,-1,55,43,46,-1,43,55,49,-1,49,42,43,-1]);
IndexedFaceSet188.creaseAngle = 3.14159;
IndexedFaceSet188.texCoordIndex = new MFInt32(new int[4,19,24,-1,24,7,4,-1,0,17,18,-1,18,2,0,-1,8,25,23,-1,23,1,8,-1,1,0,10,-1,10,9,1,-1,0,2,11,-1,11,10,0,-1,2,6,12,-1,12,11,2,-1,6,5,13,-1,13,12,6,-1,5,3,14,-1,14,13,5,-1,4,7,15,-1,15,14,4,-1,8,1,9,-1,9,16,8,-1,23,17,0,-1,0,1,23,-1,20,3,5,-1,5,21,20,-1,22,21,5,-1,5,6,22,-1,18,22,6,-1,6,2,18,-1,17,23,27,-1,27,26,17,-1,23,25,28,-1,28,27,23,-1,24,19,30,-1,30,29,24,-1,20,21,31,-1,31,30,20,-1,21,22,32,-1,32,31,21,-1,22,18,33,-1,33,32,22,-1,18,17,26,-1,26,33,18,-1,34,35,59,-1,59,58,34,-1,55,54,40,-1,40,39,55,-1,56,53,38,-1,38,41,56,-1,37,44,43,-1,43,36,37,-1,36,43,45,-1,45,38,36,-1,38,45,46,-1,46,41,38,-1,41,46,47,-1,47,40,41,-1,40,47,48,-1,48,39,40,-1,34,48,49,-1,49,35,34,-1,42,50,44,-1,44,37,42,-1,51,37,36,-1,36,52,51,-1,36,38,53,-1,53,52,36,-1,56,41,40,-1,40,54,56,-1,57,42,37,-1,37,51,57,-1,52,61,60,-1,60,51,52,-1,51,60,62,-1,62,57,51,-1,59,64,63,-1,63,58,59,-1,55,63,65,-1,65,54,55,-1,54,65,66,-1,66,56,54,-1,56,66,67,-1,67,53,56,-1,53,67,61,-1,61,52,53,-1]);
let Coordinate189 = browser.currentScene.createNode("Coordinate");
Coordinate189.point = new MFVec3f(new float[3.874,1.464,3.02,1.367,1.464,-3.028,3.71,1.464,-2.051,4.987,1.464,-0.7054,1.404,1.464,3.517,5.353,1.464,1.475,0,1.464,-3.028,0,1.464,3.517,1.366,2.022,2.962,3.726,2.022,2.54,5.078,2.022,1.283,4.742,2.022,-0.4973,3.55,2.022,-1.615,1.311,2.022,-2.446,0,2.022,2.962,4.178,0.0371,3.711,5.76,0.073,1.754,1.52,-0.1193,-3.918,3.95,-0.1096,-2.776,5.309,-0.0044,-0.9797,1.635,0.0066,4.322,0,-0.1193,-3.918,3.857,-0.6929,2.997,1.533,-0.6929,3.49,1.398,-0.6929,-3.046,3.619,-0.6929,-2.124,4.847,-0.6929,-0.6903,5.251,-0.6929,1.473,-1.367,1.464,-3.028,-3.874,1.464,3.02,-1.404,1.464,3.517,-5.353,1.464,1.475,-3.71,1.464,-2.051,-4.987,1.464,-0.7054,-3.726,2.022,2.54,-1.366,2.022,2.962,-5.078,2.022,1.283,-4.742,2.022,-0.4973,-3.55,2.022,-1.615,-1.311,2.022,-2.446,0,2.022,-2.446,-1.635,0.0066,4.322,-4.178,0.0371,3.711,-5.76,0.073,1.754,-3.95,-0.1096,-2.776,-1.52,-0.1193,-3.918,-5.309,-0.0044,-0.9797,0,0.0066,4.322,-1.533,-0.6929,3.49,-3.857,-0.6929,2.997,0,-0.6929,3.49,-1.398,-0.6929,-3.046,0,-0.6929,-3.046,-3.619,-0.6929,-2.124,-4.847,-0.6929,-0.6903,-5.251,-0.6929,1.473]);
IndexedFaceSet188.coord = Coordinate189;

let TextureCoordinate190 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate190.point = new MFVec2f(new float[0.1041,0.2822,0.0168,0.2798,0.1518,0.2789,0.3444,0.2746,0.3604,0.2737,0.221,0.2742,0.1842,0.2768,0.3527,0.263,0.0181,0.2816,0.0168,0.2798,0.1041,0.2822,0.1518,0.2789,0.1842,0.2768,0.221,0.2742,0.3444,0.2746,0.3527,0.263,0.0181,0.2816,0.1011,0.241,0.1445,0.2419,0.3553,0.2398,0.3561,0.2404,0.2369,0.2375,0.1927,0.24,0.019,0.2349,0.3557,0.2401,0.019,0.2349,0.1011,0.241,0.019,0.2349,0.019,0.2349,0.3557,0.2401,0.3553,0.2398,0.2369,0.2375,0.1927,0.24,0.1445,0.2419,0.3604,0.2737,0.3527,0.263,0.1041,0.2822,0.0168,0.2798,0.1518,0.2789,0.3444,0.2746,0.221,0.2742,0.1842,0.2768,0.0181,0.2816,0.1041,0.2822,0.0168,0.2798,0.1518,0.2789,0.1842,0.2768,0.221,0.2742,0.3444,0.2746,0.3527,0.263,0.0181,0.2816,0.019,0.2349,0.1011,0.241,0.1445,0.2419,0.2369,0.2375,0.3561,0.2404,0.1927,0.24,0.019,0.2349,0.3553,0.2398,0.3557,0.2401,0.019,0.2349,0.1011,0.241,0.019,0.2349,0.3553,0.2398,0.3557,0.2401,0.2369,0.2375,0.1927,0.24,0.1445,0.2419]);
IndexedFaceSet188.texCoord = TextureCoordinate190;

Shape184.geometry = IndexedFaceSet188;

Transform183.child = new undefined();

Transform183.child[0] = Shape184;

HAnimSegment182.children = new MFNode();

HAnimSegment182.children[0] = Transform183;

HAnimJoint181.children = new MFNode();

HAnimJoint181.children[0] = HAnimSegment182;

let HAnimJoint191 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint191.name = "vl1";
HAnimJoint191.DEF = "hanim_vl1";
HAnimJoint191.center = new SFVec3f(new float[0,42.759998,-0.6117]);
HAnimJoint191.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint191.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment192 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment192.name = "l1";
HAnimSegment192.DEF = "hanim_l1";
let Transform193 = browser.currentScene.createNode("Transform");
Transform193.translation = new SFVec3f(new float[0,42.759998,-0.6117]);
let Shape194 = browser.currentScene.createNode("Shape");
let Appearance195 = browser.currentScene.createNode("Appearance");
let Material196 = browser.currentScene.createNode("Material");
Material196.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance195.material = Material196;

let ImageTexture197 = browser.currentScene.createNode("ImageTexture");
ImageTexture197.USE = "JinLOA2TextureAtlas";
Appearance195.texture = ImageTexture197;

Shape194.appearance = Appearance195;

let IndexedFaceSet198 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet198.coordIndex = new MFInt32(new int[7,0,1,-1,1,35,7,-1,33,2,0,-1,0,7,33,-1,34,8,3,-1,3,4,34,-1,32,5,2,-1,2,33,32,-1,35,1,6,-1,6,54,35,-1,32,34,4,-1,4,5,32,-1,8,45,17,-1,17,3,8,-1,47,48,10,-1,10,9,47,-1,11,47,9,-1,9,12,11,-1,51,14,13,-1,13,42,51,-1,15,11,12,-1,12,16,15,-1,48,54,6,-1,6,10,48,-1,15,16,14,-1,14,51,15,-1,42,13,17,-1,17,45,42,-1,1,0,19,-1,19,18,1,-1,0,2,20,-1,20,19,0,-1,2,5,21,-1,21,20,2,-1,5,4,22,-1,22,21,5,-1,4,3,23,-1,23,22,4,-1,3,17,24,-1,24,23,3,-1,17,13,25,-1,25,24,17,-1,13,14,26,-1,26,25,13,-1,14,16,27,-1,27,26,14,-1,16,12,28,-1,28,27,16,-1,12,9,29,-1,29,28,12,-1,9,10,30,-1,30,29,9,-1,10,6,31,-1,31,30,10,-1,6,1,18,-1,18,31,6,-1,8,37,44,-1,44,45,8,-1,7,35,40,-1,40,36,7,-1,41,33,7,-1,7,36,41,-1,8,34,38,-1,38,37,8,-1,34,32,39,-1,39,38,34,-1,39,32,33,-1,33,41,39,-1,35,54,55,-1,55,40,35,-1,42,45,44,-1,44,43,42,-1,47,46,49,-1,49,48,47,-1,50,46,47,-1,47,11,50,-1,42,43,52,-1,52,51,42,-1,51,52,53,-1,53,15,51,-1,53,50,11,-1,11,15,53,-1,48,49,55,-1,55,54,48,-1,36,40,57,-1,57,56,36,-1,40,55,58,-1,58,57,40,-1,55,49,59,-1,59,58,55,-1,49,46,60,-1,60,59,49,-1,46,50,61,-1,61,60,46,-1,50,53,62,-1,62,61,50,-1,53,52,63,-1,63,62,53,-1,52,43,64,-1,64,63,52,-1,43,44,65,-1,65,64,43,-1,44,37,66,-1,66,65,44,-1,37,38,67,-1,67,66,37,-1,38,39,68,-1,68,67,38,-1,39,41,69,-1,69,68,39,-1,41,36,56,-1,56,69,41,-1]);
IndexedFaceSet198.creaseAngle = 3.14159;
IndexedFaceSet198.texCoordIndex = new MFInt32(new int[9,0,1,-1,1,17,9,-1,13,2,0,-1,0,9,13,-1,16,15,3,-1,3,5,16,-1,10,6,2,-1,2,13,10,-1,17,1,8,-1,8,11,17,-1,10,16,5,-1,5,6,10,-1,14,12,7,-1,7,4,14,-1,19,18,21,-1,21,20,19,-1,22,19,20,-1,20,23,22,-1,24,27,26,-1,26,25,24,-1,28,22,23,-1,23,29,28,-1,18,30,31,-1,31,21,18,-1,28,29,27,-1,27,24,28,-1,33,32,35,-1,35,34,33,-1,1,0,37,-1,37,36,1,-1,0,2,38,-1,38,37,0,-1,2,6,39,-1,39,38,2,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,35,32,43,-1,43,42,35,-1,26,27,44,-1,44,43,26,-1,27,29,45,-1,45,44,27,-1,29,23,46,-1,46,45,29,-1,23,20,47,-1,47,46,23,-1,20,21,48,-1,48,47,20,-1,21,31,49,-1,49,48,21,-1,8,1,36,-1,36,49,8,-1,56,60,66,-1,66,57,56,-1,51,50,64,-1,64,59,51,-1,65,52,51,-1,51,59,65,-1,54,53,62,-1,62,61,54,-1,53,55,63,-1,63,62,53,-1,63,55,52,-1,52,65,63,-1,50,58,67,-1,67,64,50,-1,68,71,70,-1,70,69,68,-1,73,72,75,-1,75,74,73,-1,76,72,73,-1,73,77,76,-1,79,78,81,-1,81,80,79,-1,80,81,83,-1,83,82,80,-1,83,76,77,-1,77,82,83,-1,74,75,85,-1,85,84,74,-1,59,64,87,-1,87,86,59,-1,64,67,88,-1,88,87,64,-1,85,75,89,-1,89,88,85,-1,75,72,90,-1,90,89,75,-1,72,76,91,-1,91,90,72,-1,76,83,92,-1,92,91,76,-1,83,81,93,-1,93,92,83,-1,81,78,94,-1,94,93,81,-1,69,70,95,-1,95,94,69,-1,66,60,96,-1,96,95,66,-1,61,62,97,-1,97,96,61,-1,62,63,98,-1,98,97,62,-1,63,65,99,-1,99,98,63,-1,65,59,86,-1,86,99,65,-1]);
let Coordinate199 = browser.currentScene.createNode("Coordinate");
Coordinate199.point = new MFVec3f(new float[3.702,1.815,2.588,1.286,1.815,3.04,5.104,1.815,1.294,1.363,1.815,-2.529,3.588,1.815,-1.686,4.805,1.815,-0.5256,0,1.815,3.04,3.71,0.7717,2.648,1.296,0.7706,-2.596,-3.702,1.815,2.588,-1.286,1.815,3.04,-5.128,0.7717,1.321,-5.104,1.815,1.294,-1.363,1.815,-2.529,-3.588,1.815,-1.686,-4.818,0.7717,-0.5615,-4.805,1.815,-0.5256,0,1.815,-2.529,1.266,2.58,2.82,3.599,2.58,2.383,4.867,2.58,1.212,4.6,2.58,-0.4169,3.469,2.58,-1.496,1.323,2.58,-2.308,0,2.58,-2.309,-1.323,2.58,-2.308,-3.469,2.58,-1.496,-4.6,2.58,-0.4169,-4.867,2.58,1.212,-3.599,2.58,2.383,-1.266,2.58,2.82,0,2.58,2.82,4.818,0.7717,-0.5615,5.128,0.7717,1.321,3.593,0.7717,-1.696,1.281,0.7717,3.092,3.874,0.0011,3.02,1.367,0.0011,-3.028,3.71,0.0011,-2.051,4.987,0.0011,-0.7054,1.404,0.0011,3.517,5.353,0.0011,1.475,-1.293,0.7717,-2.595,-1.367,0.0011,-3.028,0,0.0011,-3.028,-0.0031,0.7706,-2.596,-3.874,0.0011,3.02,-3.71,0.7717,2.648,-1.281,0.7717,3.092,-1.404,0.0011,3.517,-5.353,0.0011,1.475,-3.593,0.7717,-1.696,-3.71,0.0011,-2.051,-4.987,0.0011,-0.7054,0,0.7717,3.092,0,0.0011,3.517,3.751,-1.472,2.601,1.377,-1.472,3.038,0,-1.472,3.038,-1.377,-1.472,3.038,-3.751,-1.472,2.601,-5.101,-1.472,1.311,-4.765,-1.472,-0.5181,-3.571,-1.472,-1.67,-1.319,-1.472,-2.529,0,-1.472,-2.529,1.319,-1.472,-2.529,3.571,-1.472,-1.67,4.765,-1.472,-0.5181,5.101,-1.472,1.311]);
IndexedFaceSet198.coord = Coordinate199;

let TextureCoordinate200 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate200.point = new MFVec2f(new float[0.0943,0.3233,0.0192,0.3251,0.1489,0.3212,0.3615,0.3195,0.3631,0.318,0.2175,0.3185,0.1844,0.32,0.3623,0.3188,0.0192,0.3251,0.0982,0.302,0.1849,0.2961,0.0177,0.3051,0.3627,0.2922,0.1487,0.2975,0.3633,0.2922,0.3621,0.2922,0.2175,0.2944,0.0177,0.3051,0.0177,0.3051,0.0982,0.302,0.0943,0.3233,0.0192,0.3251,0.1487,0.2975,0.1489,0.3212,0.2175,0.2944,0.3621,0.2922,0.3615,0.3195,0.2175,0.3185,0.1849,0.2961,0.1844,0.32,0.0177,0.3051,0.0192,0.3251,0.3631,0.318,0.3633,0.2922,0.3627,0.2922,0.3623,0.3188,0.0192,0.3251,0.0943,0.3233,0.1489,0.3212,0.1844,0.32,0.2175,0.3185,0.3615,0.3195,0.3623,0.3188,0.3631,0.318,0.2175,0.3185,0.1844,0.32,0.1489,0.3212,0.0943,0.3233,0.0192,0.3251,0.0192,0.3251,0.0177,0.3051,0.0982,0.302,0.1487,0.2975,0.2175,0.2944,0.3621,0.2922,0.1849,0.2961,0.3633,0.2922,0.3627,0.2922,0.0177,0.3051,0.1055,0.2814,0.3697,0.2711,0.3605,0.2757,0.2204,0.275,0.1853,0.2768,0.024,0.2813,0.1448,0.2785,0.3603,0.2745,0.0155,0.2778,0.3633,0.2922,0.3697,0.2711,0.3603,0.2745,0.3627,0.2922,0.1055,0.2814,0.0982,0.302,0.0177,0.3051,0.024,0.2813,0.1448,0.2785,0.1487,0.2975,0.3605,0.2757,0.3621,0.2922,0.2175,0.2944,0.2204,0.275,0.1849,0.2961,0.1853,0.2768,0.0177,0.3051,0.0155,0.2778,0.1055,0.2814,0.024,0.2813,0.0155,0.2778,0.024,0.2813,0.1055,0.2814,0.1448,0.2785,0.1853,0.2768,0.2204,0.275,0.3605,0.2757,0.3603,0.2745,0.3697,0.2711,0.2204,0.275,0.1853,0.2768,0.1448,0.2785]);
IndexedFaceSet198.texCoord = TextureCoordinate200;

Shape194.geometry = IndexedFaceSet198;

Transform193.child = new undefined();

Transform193.child[0] = Shape194;

HAnimSegment192.children = new MFNode();

HAnimSegment192.children[0] = Transform193;

HAnimJoint191.children = new MFNode();

HAnimJoint191.children[0] = HAnimSegment192;

let HAnimJoint201 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint201.name = "vt10";
HAnimJoint201.DEF = "hanim_vt10";
HAnimJoint201.center = new SFVec3f(new float[0,44.580002,-0.6127]);
HAnimJoint201.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint201.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment202 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment202.name = "t10";
HAnimSegment202.DEF = "hanim_t10";
let Transform203 = browser.currentScene.createNode("Transform");
Transform203.translation = new SFVec3f(new float[0,44.580002,-0.6127]);
let Shape204 = browser.currentScene.createNode("Shape");
let Appearance205 = browser.currentScene.createNode("Appearance");
let Material206 = browser.currentScene.createNode("Material");
Material206.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance205.material = Material206;

let ImageTexture207 = browser.currentScene.createNode("ImageTexture");
ImageTexture207.USE = "JinLOA2TextureAtlas";
Appearance205.texture = ImageTexture207;

Shape204.appearance = Appearance205;

let IndexedFaceSet208 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet208.coordIndex = new MFInt32(new int[0,3,9,-1,9,8,0,-1,3,4,10,-1,10,9,3,-1,4,2,11,-1,11,10,4,-1,2,1,12,-1,12,11,2,-1,1,5,13,-1,13,12,1,-1,5,7,14,-1,14,13,5,-1,6,0,8,-1,8,47,6,-1,19,18,5,-1,5,1,19,-1,20,19,1,-1,1,2,20,-1,20,2,4,-1,4,16,20,-1,21,0,6,-1,6,63,21,-1,63,17,15,-1,15,21,63,-1,15,3,0,-1,0,21,15,-1,18,53,7,-1,7,5,18,-1,16,4,3,-1,3,15,16,-1,19,20,27,-1,27,26,19,-1,53,18,25,-1,25,58,53,-1,22,15,17,-1,17,23,22,-1,24,16,15,-1,15,22,24,-1,18,19,26,-1,26,25,18,-1,20,16,24,-1,24,27,20,-1,17,63,64,-1,64,23,17,-1,22,23,29,-1,29,28,22,-1,23,64,30,-1,30,29,23,-1,58,25,31,-1,31,68,58,-1,25,26,32,-1,32,31,25,-1,26,27,33,-1,33,32,26,-1,27,24,34,-1,34,33,27,-1,24,22,28,-1,28,34,24,-1,39,42,41,-1,41,40,39,-1,40,41,43,-1,43,38,40,-1,38,43,44,-1,44,37,38,-1,37,44,45,-1,45,36,37,-1,36,45,46,-1,46,35,36,-1,35,46,14,-1,14,7,35,-1,6,47,42,-1,42,39,6,-1,54,36,35,-1,35,48,54,-1,49,37,36,-1,36,54,49,-1,38,37,49,-1,49,50,38,-1,6,39,51,-1,51,63,6,-1,63,51,60,-1,60,52,63,-1,39,40,60,-1,60,51,39,-1,7,53,48,-1,48,35,7,-1,40,38,50,-1,50,60,40,-1,54,56,55,-1,55,49,54,-1,53,58,57,-1,57,48,53,-1,59,61,52,-1,52,60,59,-1,62,59,60,-1,60,50,62,-1,48,57,56,-1,56,54,48,-1,49,55,62,-1,62,50,49,-1,52,61,64,-1,64,63,52,-1,59,66,65,-1,65,61,59,-1,61,65,30,-1,30,64,61,-1,58,68,67,-1,67,57,58,-1,57,67,69,-1,69,56,57,-1,56,69,70,-1,70,55,56,-1,55,70,71,-1,71,62,55,-1,62,71,66,-1,66,59,62,-1]);
IndexedFaceSet208.creaseAngle = 3.14159;
IndexedFaceSet208.texCoordIndex = new MFInt32(new int[0,4,10,-1,10,9,0,-1,4,5,11,-1,11,10,4,-1,5,2,12,-1,12,11,5,-1,2,1,13,-1,13,12,2,-1,1,6,14,-1,14,13,1,-1,7,3,15,-1,15,14,7,-1,8,0,9,-1,9,16,8,-1,23,22,6,-1,6,1,23,-1,24,23,1,-1,1,2,24,-1,24,2,5,-1,5,20,24,-1,25,0,8,-1,8,27,25,-1,27,17,18,-1,18,25,27,-1,19,4,0,-1,0,25,19,-1,21,26,3,-1,3,7,21,-1,20,5,4,-1,4,19,20,-1,33,34,43,-1,43,42,33,-1,35,32,40,-1,40,44,35,-1,37,28,30,-1,30,38,37,-1,39,29,28,-1,28,37,39,-1,31,33,42,-1,42,41,31,-1,34,29,39,-1,39,43,34,-1,30,36,45,-1,45,38,30,-1,37,38,47,-1,47,46,37,-1,38,45,48,-1,48,47,38,-1,44,40,50,-1,50,49,44,-1,41,42,51,-1,51,50,41,-1,42,43,52,-1,52,51,42,-1,43,39,53,-1,53,52,43,-1,39,37,46,-1,46,53,39,-1,58,64,63,-1,63,60,58,-1,60,63,65,-1,65,57,60,-1,57,65,66,-1,66,56,57,-1,56,66,67,-1,67,55,56,-1,55,67,68,-1,68,54,55,-1,61,68,69,-1,69,62,61,-1,59,70,64,-1,64,58,59,-1,71,55,54,-1,54,72,71,-1,73,56,55,-1,55,71,73,-1,57,56,73,-1,73,74,57,-1,59,58,76,-1,76,75,59,-1,75,76,77,-1,77,78,75,-1,58,60,79,-1,79,76,58,-1,62,81,80,-1,80,61,62,-1,60,57,74,-1,74,79,60,-1,82,85,84,-1,84,83,82,-1,86,89,88,-1,88,87,86,-1,90,93,92,-1,92,91,90,-1,94,90,91,-1,91,95,94,-1,97,96,85,-1,85,82,97,-1,83,84,94,-1,94,95,83,-1,92,93,99,-1,99,98,92,-1,90,101,100,-1,100,93,90,-1,93,100,102,-1,102,99,93,-1,89,104,103,-1,103,88,89,-1,96,103,105,-1,105,85,96,-1,85,105,106,-1,106,84,85,-1,84,106,107,-1,107,94,84,-1,94,107,101,-1,101,90,94,-1]);
let Coordinate209 = browser.currentScene.createNode("Coordinate");
Coordinate209.point = new MFVec3f(new float[1.418,2.454,3.362,3.892,2.454,-1.86,5.121,2.454,-0.6992,3.987,2.454,3.259,5.601,2.454,1.285,1.717,2.454,-2.528,0,2.454,3.363,0,2.454,-2.543,1.415,3.298,3.18,3.898,3.298,3.08,5.402,3.298,1.24,4.956,3.298,-0.5656,3.798,3.298,-1.66,1.689,3.298,-2.308,0,3.298,-2.323,3.695,1.042,2.53,5.081,1.042,1.267,1.292,1.042,2.989,1.434,1.042,-2.462,3.584,1.042,-1.676,4.793,1.042,-0.4887,1.292,1.042,2.989,3.702,-0.0013,2.589,1.286,-0.0013,3.041,5.104,-0.0013,1.295,1.363,-0.0013,-2.528,3.588,-0.0013,-1.685,4.805,-0.0013,-0.5246,3.625,-0.6809,2.436,1.271,-0.6809,2.876,0,-0.6809,2.876,1.333,-0.6809,-2.363,3.499,-0.6809,-1.543,4.651,-0.6809,-0.4432,4.927,-0.6809,1.234,-1.717,2.454,-2.528,-3.892,2.454,-1.86,-5.121,2.454,-0.6992,-5.601,2.454,1.285,-1.418,2.454,3.362,-3.987,2.454,3.259,-3.898,3.298,3.08,-1.415,3.298,3.18,-5.402,3.298,1.24,-4.956,3.298,-0.5656,-3.798,3.298,-1.66,-1.689,3.298,-2.308,0,3.298,3.18,-1.434,1.042,-2.462,-4.793,1.042,-0.4887,-5.081,1.042,1.267,-1.292,1.042,2.989,-1.292,1.042,2.989,0,1.042,-2.463,-3.584,1.042,-1.676,-4.805,-0.0013,-0.5246,-3.588,-0.0013,-1.685,-1.363,-0.0013,-2.528,0,-0.0013,-2.528,-3.702,-0.0013,2.589,-3.695,1.042,2.53,-1.286,-0.0013,3.041,-5.104,-0.0013,1.295,0,1.042,2.989,0,-0.0013,3.041,-1.271,-0.6809,2.876,-3.625,-0.6809,2.436,-1.333,-0.6809,-2.363,0,-0.6809,-2.363,-3.499,-0.6809,-1.543,-4.651,-0.6809,-0.4432,-4.927,-0.6809,1.234]);
IndexedFaceSet208.coord = Coordinate209;

let TextureCoordinate210 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate210.point = new MFVec2f(new float[0.0245,0.3617,0.2207,0.3633,0.1922,0.3628,0.3616,0.3609,0.0859,0.3657,0.1489,0.3665,0.3589,0.3648,0.3617,0.3609,0.0254,0.3626,0.0245,0.3617,0.0859,0.3657,0.1489,0.3665,0.1922,0.3628,0.2207,0.3633,0.3589,0.3648,0.3616,0.3609,0.0254,0.3626,0.0206,0.3452,0.0903,0.3446,0.0903,0.3446,0.1491,0.3449,0.3629,0.3439,0.3608,0.3469,0.2175,0.3427,0.1838,0.3438,0.0206,0.3452,0.3619,0.3454,0.0206,0.3452,0.0903,0.3446,0.1491,0.3449,0.0206,0.3452,0.3608,0.3469,0.3629,0.3439,0.2175,0.3427,0.1838,0.3438,0.3619,0.3454,0.0206,0.3452,0.0943,0.3233,0.0192,0.3251,0.1489,0.3212,0.3631,0.318,0.3615,0.3195,0.2175,0.3185,0.1844,0.32,0.3623,0.3188,0.0192,0.3251,0.0943,0.3233,0.0192,0.3251,0.0192,0.3251,0.3623,0.3188,0.3631,0.318,0.2175,0.3185,0.1844,0.32,0.1489,0.3212,0.3589,0.3648,0.2207,0.3633,0.1922,0.3628,0.1489,0.3665,0.0245,0.3617,0.0254,0.3626,0.0859,0.3657,0.3617,0.3609,0.3616,0.3609,0.0859,0.3657,0.0245,0.3617,0.1489,0.3665,0.1922,0.3628,0.2207,0.3633,0.3589,0.3648,0.3616,0.3609,0.0254,0.3626,0.2175,0.3427,0.3608,0.3469,0.1838,0.3438,0.1491,0.3449,0.0206,0.3452,0.0206,0.3452,0.0903,0.3446,0.0206,0.3452,0.0903,0.3446,0.3629,0.3439,0.3619,0.3454,0.2175,0.3427,0.1838,0.3438,0.1844,0.32,0.2175,0.3185,0.3619,0.3454,0.3629,0.3439,0.3631,0.318,0.3623,0.3188,0.0943,0.3233,0.0903,0.3446,0.0206,0.3452,0.0192,0.3251,0.1489,0.3212,0.1491,0.3449,0.3615,0.3195,0.3608,0.3469,0.0206,0.3452,0.0192,0.3251,0.0192,0.3251,0.0943,0.3233,0.0192,0.3251,0.3631,0.318,0.3623,0.3188,0.2175,0.3185,0.1844,0.32,0.1489,0.3212]);
IndexedFaceSet208.texCoord = TextureCoordinate210;

Shape204.geometry = IndexedFaceSet208;

Transform203.child = new undefined();

Transform203.child[0] = Shape204;

HAnimSegment202.children = new MFNode();

HAnimSegment202.children[0] = Transform203;

HAnimJoint201.children = new MFNode();

HAnimJoint201.children[0] = HAnimSegment202;

let HAnimJoint211 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint211.name = "vt6";
HAnimJoint211.DEF = "hanim_vt6";
HAnimJoint211.center = new SFVec3f(new float[0,47.040001,-0.6117]);
HAnimJoint211.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint211.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment212 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment212.name = "t6";
HAnimSegment212.DEF = "hanim_t6";
let Transform213 = browser.currentScene.createNode("Transform");
Transform213.translation = new SFVec3f(new float[0,47.040001,-0.6117]);
let Shape214 = browser.currentScene.createNode("Shape");
let Appearance215 = browser.currentScene.createNode("Appearance");
let Material216 = browser.currentScene.createNode("Material");
Material216.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance215.material = Material216;

let ImageTexture217 = browser.currentScene.createNode("ImageTexture");
ImageTexture217.USE = "JinLOA2TextureAtlas";
Appearance215.texture = ImageTexture217;

Shape214.appearance = Appearance215;

let IndexedFaceSet218 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet218.coordIndex = new MFInt32(new int[0,18,53,-1,53,6,0,-1,3,5,9,-1,9,8,3,-1,5,1,10,-1,10,9,5,-1,1,2,11,-1,11,10,1,-1,2,4,12,-1,12,11,2,-1,4,0,13,-1,13,12,4,-1,0,6,46,-1,46,13,0,-1,7,3,8,-1,8,14,7,-1,17,1,5,-1,5,15,17,-1,16,3,7,-1,7,19,16,-1,0,4,20,-1,20,18,0,-1,4,2,21,-1,21,20,4,-1,21,2,1,-1,1,17,21,-1,16,15,5,-1,5,3,16,-1,18,20,23,-1,23,27,18,-1,25,15,16,-1,16,22,25,-1,27,57,53,-1,53,18,27,-1,25,26,17,-1,17,15,25,-1,23,20,21,-1,21,24,23,-1,21,17,26,-1,26,24,21,-1,22,16,19,-1,19,61,22,-1,25,22,29,-1,29,28,25,-1,22,61,64,-1,64,29,22,-1,57,27,30,-1,30,66,57,-1,27,23,31,-1,31,30,27,-1,23,24,32,-1,32,31,23,-1,24,26,33,-1,33,32,24,-1,26,25,28,-1,28,33,26,-1,6,53,52,-1,52,38,6,-1,39,48,49,-1,49,36,39,-1,39,38,52,-1,52,48,39,-1,35,41,40,-1,40,34,35,-1,34,40,42,-1,42,37,34,-1,37,42,43,-1,43,36,37,-1,36,43,44,-1,44,39,36,-1,39,44,45,-1,45,38,39,-1,38,45,46,-1,46,6,38,-1,7,14,41,-1,41,35,7,-1,47,51,34,-1,34,37,47,-1,19,7,35,-1,35,50,19,-1,47,37,36,-1,36,49,47,-1,35,34,51,-1,51,50,35,-1,60,58,47,-1,47,49,60,-1,50,51,55,-1,55,54,50,-1,53,57,56,-1,56,52,53,-1,47,58,55,-1,55,51,47,-1,59,48,52,-1,52,56,59,-1,60,49,48,-1,48,59,60,-1,54,61,19,-1,19,50,54,-1,55,63,62,-1,62,54,55,-1,54,62,64,-1,64,61,54,-1,57,66,65,-1,65,56,57,-1,56,65,67,-1,67,59,56,-1,59,67,68,-1,68,60,59,-1,60,68,69,-1,69,58,60,-1,58,69,63,-1,63,55,58,-1]);
IndexedFaceSet218.creaseAngle = 3.14159;
IndexedFaceSet218.texCoordIndex = new MFInt32(new int[1,133,134,-1,134,5,1,-1,4,8,17,-1,17,16,4,-1,8,2,18,-1,18,17,8,-1,2,3,19,-1,19,18,2,-1,3,7,20,-1,20,19,3,-1,7,0,21,-1,21,20,7,-1,1,5,22,-1,22,21,1,-1,6,4,16,-1,16,23,6,-1,26,2,8,-1,8,24,26,-1,25,4,6,-1,6,30,25,-1,0,7,28,-1,28,27,0,-1,7,3,29,-1,29,28,7,-1,29,3,2,-1,2,26,29,-1,25,24,8,-1,8,4,25,-1,35,37,107,-1,107,108,35,-1,118,31,32,-1,32,115,118,-1,116,117,39,-1,39,36,116,-1,118,119,34,-1,34,31,118,-1,110,37,38,-1,38,109,110,-1,38,34,111,-1,111,112,38,-1,114,32,33,-1,33,113,114,-1,44,40,50,-1,50,49,44,-1,40,48,51,-1,51,50,40,-1,43,47,53,-1,53,52,43,-1,46,41,54,-1,54,53,46,-1,41,42,55,-1,55,54,41,-1,42,45,56,-1,56,55,42,-1,45,44,49,-1,49,56,45,-1,12,135,136,-1,136,11,12,-1,13,79,80,-1,80,9,13,-1,13,14,78,-1,78,79,13,-1,58,67,66,-1,66,57,58,-1,57,66,15,-1,15,10,57,-1,60,68,69,-1,69,59,60,-1,59,69,70,-1,70,64,59,-1,64,70,71,-1,71,65,64,-1,61,71,72,-1,72,62,61,-1,63,73,67,-1,67,58,63,-1,74,75,57,-1,57,10,74,-1,77,63,58,-1,58,76,77,-1,74,10,9,-1,9,80,74,-1,58,57,75,-1,75,76,58,-1,120,121,85,-1,85,88,120,-1,81,82,118,-1,118,122,81,-1,84,123,124,-1,124,83,84,-1,85,125,126,-1,126,82,85,-1,128,87,86,-1,86,127,128,-1,130,88,87,-1,87,129,130,-1,131,132,89,-1,89,81,131,-1,91,100,99,-1,99,90,91,-1,90,99,101,-1,101,98,90,-1,93,103,102,-1,102,92,93,-1,95,102,104,-1,104,96,95,-1,96,104,105,-1,105,97,96,-1,97,105,106,-1,106,94,97,-1,94,106,100,-1,100,91,94,-1]);
let Coordinate219 = browser.currentScene.createNode("Coordinate");
Coordinate219.point = new MFVec3f(new float[1.937,2.6,-2.644,6.192,2.6,1.374,5.738,2.6,-0.7614,1.615,2.6,3.729,4.273,2.6,-2.169,3.945,2.6,3.53,0,2.6,-2.735,0,2.6,3.756,1.525,3.912,3.221,3.653,3.912,2.955,5.641,3.912,1.265,5.25,3.912,-0.5979,3.955,3.912,-1.859,1.814,3.912,-2.3,0,3.912,3.247,4.234,1.353,3.898,1.538,1.353,3.713,6.114,1.353,1.306,1.987,1.353,-2.592,0,1.353,3.713,4.188,1.353,-2.037,5.442,1.353,-0.9006,1.418,-0.0068,3.362,3.892,-0.0068,-1.86,5.121,-0.0068,-0.6992,3.987,-0.0068,3.259,5.601,-0.0068,1.285,1.717,-0.0068,-2.528,3.691,-1.025,2.572,1.341,-1.025,2.665,1.599,-1.025,-2.271,3.596,-1.025,-1.673,4.691,-1.025,-0.5832,5.112,-1.025,1.212,-3.945,2.6,3.53,-1.615,2.6,3.729,-5.738,2.6,-0.7614,-6.192,2.6,1.374,-1.937,2.6,-2.644,-4.273,2.6,-2.169,-3.653,3.912,2.955,-1.525,3.912,3.221,-5.641,3.912,1.265,-5.25,3.912,-0.5979,-3.955,3.912,-1.859,-1.814,3.912,-2.3,0,3.912,-2.386,-6.114,1.353,1.306,-4.188,1.353,-2.037,-5.442,1.353,-0.9006,-1.538,1.353,3.713,-4.234,1.353,3.898,-1.987,1.353,-2.592,0,1.353,-2.622,-1.418,-0.0068,3.362,-3.987,-0.0068,3.259,-1.717,-0.0068,-2.528,0,-0.0068,-2.543,-5.601,-0.0068,1.285,-3.892,-0.0068,-1.86,-5.121,-0.0068,-0.6992,0,-0.0068,3.363,-1.341,-1.025,2.665,-3.691,-1.025,2.572,0,-1.025,2.665,-1.599,-1.025,-2.271,0,-1.025,-2.285,-3.596,-1.025,-1.673,-4.691,-1.025,-0.5832,-5.112,-1.025,1.212]);
IndexedFaceSet218.coord = Coordinate219;

let TextureCoordinate220 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate220.point = new MFVec2f(new float[0.3061,0.4256,0.3364,0.4029,0.1528,0.4078,0.1843,0.4071,0.055,0.4216,0.3325,0.4068,0.0482,0.4185,0.221,0.4256,0.1008,0.4259,0.1843,0.4071,0.1528,0.4078,0.3364,0.4029,0.3325,0.4068,0.221,0.4256,0.3061,0.4256,0.1528,0.4078,0.055,0.4216,0.1008,0.4259,0.1528,0.4078,0.1843,0.4071,0.221,0.4256,0.3061,0.4256,0.3325,0.4068,0.0482,0.4185,0.0908,0.3999,0.0325,0.3879,0.1568,0.3845,0.3535,0.3812,0.2214,0.3832,0.1952,0.3809,0.0306,0.3835,0.0908,0.3999,0.0325,0.3879,0.0306,0.3835,0.1568,0.3845,0.3535,0.3812,0.3589,0.3783,0.2214,0.3832,0.1952,0.3809,0.3561,0.3769,0.0245,0.3617,0.2207,0.3633,0.1922,0.3628,0.3616,0.3609,0.0859,0.3657,0.1489,0.3665,0.3589,0.3648,0.3617,0.3609,0.0254,0.3626,0.0859,0.3657,0.0245,0.3617,0.0254,0.3626,0.3616,0.3609,0.3617,0.3609,0.2207,0.3633,0.1922,0.3628,0.1489,0.3665,0.1008,0.4259,0.055,0.4216,0.1843,0.4071,0.1528,0.4078,0.3364,0.4029,0.3325,0.4068,0.0482,0.4185,0.221,0.4256,0.3061,0.4256,0.1008,0.4259,0.055,0.4216,0.1528,0.4078,0.1843,0.4071,0.221,0.4256,0.3061,0.4256,0.3325,0.4068,0.0482,0.4185,0.1568,0.3845,0.0908,0.3999,0.0325,0.3879,0.0306,0.3835,0.3535,0.3812,0.2214,0.3832,0.1952,0.3809,0.0325,0.3879,0.0908,0.3999,0.3589,0.3783,0.3561,0.3769,0.1568,0.3845,0.3535,0.3812,0.2214,0.3832,0.1952,0.3809,0.0306,0.3835,0.0245,0.3617,0.0859,0.3657,0.3617,0.3609,0.3616,0.3609,0.1489,0.3665,0.3589,0.3648,0.2207,0.3633,0.1922,0.3628,0.0254,0.3626,0.0245,0.3617,0.0859,0.3657,0.0254,0.3626,0.3617,0.3609,0.3616,0.3609,0.2207,0.3633,0.1922,0.3628,0.1489,0.3665,0.2239,0.364,0.3583,0.3624,0.1944,0.3619,0.2221,0.3637,0.1586,0.3655,0.1931,0.3625,0.0187,0.3597,0.0192,0.3599,0.0192,0.3593,0.3651,0.3626,0.3599,0.3606,0.0896,0.3775,0.1582,0.3657,0.1931,0.3625,0.1586,0.3655,0.0192,0.3593,0.3599,0.3606,0.3651,0.3626,0.1582,0.3657,0.0896,0.3775,0.3583,0.3624,0.2239,0.364,0.2221,0.3637,0.1944,0.3619,0.0192,0.3599,0.0187,0.3597,0.3614,0.374,0.3547,0.3805,0.3547,0.3805,0.3614,0.374]);
IndexedFaceSet218.texCoord = TextureCoordinate220;

Shape214.geometry = IndexedFaceSet218;

Transform213.child = new undefined();

Transform213.child[0] = Shape214;

HAnimSegment212.children = new MFNode();

HAnimSegment212.children[0] = Transform213;

HAnimJoint211.children = new MFNode();

HAnimJoint211.children[0] = HAnimSegment212;

let HAnimJoint221 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint221.name = "vt1";
HAnimJoint221.DEF = "hanim_vt1";
HAnimJoint221.center = new SFVec3f(new float[0,49.619999,-0.6117]);
HAnimJoint221.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint221.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment222 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment222.name = "t1";
HAnimSegment222.DEF = "hanim_t1";
let Transform223 = browser.currentScene.createNode("Transform");
Transform223.translation = new SFVec3f(new float[0,49.619999,-0.6117]);
let Shape224 = browser.currentScene.createNode("Shape");
let Appearance225 = browser.currentScene.createNode("Appearance");
let Material226 = browser.currentScene.createNode("Material");
Material226.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance225.material = Material226;

let ImageTexture227 = browser.currentScene.createNode("ImageTexture");
ImageTexture227.USE = "JinLOA2TextureAtlas";
Appearance225.texture = ImageTexture227;

Shape224.appearance = Appearance225;

let IndexedFaceSet228 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet228.coordIndex = new MFInt32(new int[1,5,3,-1,3,2,1,-1,5,6,3,-1,7,22,3,-1,3,6,7,-1,0,1,2,-1,76,36,34,-1,34,4,76,-1,5,1,9,-1,1,0,9,-1,30,78,9,-1,76,4,9,-1,4,5,9,-1,32,23,33,-1,33,43,32,-1,22,7,33,-1,33,23,22,-1,5,4,34,-1,34,6,5,-1,24,32,8,-1,78,30,11,-1,11,84,78,-1,30,0,12,-1,12,11,30,-1,14,13,15,-1,15,16,14,-1,13,22,23,-1,23,15,13,-1,10,2,13,-1,22,13,2,-1,2,3,22,-1,16,15,24,-1,24,8,16,-1,15,23,32,-1,32,24,15,-1,0,10,12,-1,18,17,20,-1,20,92,18,-1,17,19,21,-1,21,20,17,-1,19,14,16,-1,16,21,19,-1,17,18,84,-1,84,11,17,-1,19,17,11,-1,11,12,19,-1,12,14,19,-1,92,20,25,-1,25,97,92,-1,20,21,28,-1,28,25,20,-1,21,16,8,-1,8,28,21,-1,0,2,10,-1,12,10,14,-1,13,14,10,-1,100,31,27,-1,27,26,100,-1,25,28,27,-1,28,8,29,-1,28,29,26,-1,26,27,28,-1,27,31,97,-1,97,25,27,-1,9,0,30,-1,7,35,45,-1,45,33,7,-1,35,7,6,-1,6,34,35,-1,116,35,34,-1,34,36,116,-1,37,8,41,-1,41,40,37,-1,8,42,41,-1,26,37,40,-1,40,44,26,-1,39,32,43,-1,100,26,44,-1,44,111,100,-1,32,39,42,-1,42,8,32,-1,46,118,38,-1,38,45,46,-1,118,119,52,-1,52,38,118,-1,111,44,47,-1,47,50,111,-1,53,47,44,-1,44,40,53,-1,45,35,116,-1,116,46,45,-1,43,33,45,-1,45,38,43,-1,39,49,51,-1,51,42,39,-1,39,43,48,-1,48,49,39,-1,43,38,52,-1,52,48,43,-1,53,40,41,-1,51,53,41,-1,41,42,51,-1,47,54,122,-1,122,50,47,-1,119,58,57,-1,57,52,119,-1,60,55,49,-1,49,48,60,-1,56,59,53,-1,53,51,56,-1,53,59,54,-1,54,47,53,-1,48,52,57,-1,57,60,48,-1,51,49,55,-1,55,56,51,-1,60,57,62,-1,62,61,60,-1,57,58,134,-1,134,62,57,-1,122,54,63,-1,63,136,122,-1,54,59,64,-1,64,63,54,-1,59,56,65,-1,65,64,59,-1,56,55,66,-1,66,65,56,-1,55,60,61,-1,61,66,55,-1,69,68,67,-1,67,70,69,-1,70,67,71,-1,72,71,67,-1,67,73,72,-1,74,68,69,-1,103,36,76,-1,76,75,103,-1,70,9,69,-1,69,9,74,-1,77,9,78,-1,76,9,75,-1,75,9,70,-1,79,110,104,-1,104,80,79,-1,104,72,73,-1,73,80,104,-1,103,75,70,-1,70,71,103,-1,81,82,79,-1,78,84,83,-1,83,77,78,-1,77,83,85,-1,85,74,77,-1,88,87,86,-1,86,89,88,-1,89,86,80,-1,80,73,89,-1,90,89,68,-1,73,67,68,-1,68,89,73,-1,87,82,81,-1,81,86,87,-1,86,81,79,-1,79,80,86,-1,74,85,90,-1,18,92,91,-1,91,93,18,-1,93,91,94,-1,94,95,93,-1,94,98,82,-1,82,87,94,-1,93,83,84,-1,84,18,93,-1,95,85,83,-1,83,93,95,-1,85,95,88,-1,92,97,96,-1,96,91,92,-1,91,96,98,-1,98,94,91,-1,74,90,68,-1,85,88,90,-1,89,90,88,-1,100,99,101,-1,101,31,100,-1,96,101,98,-1,98,102,82,-1,98,101,99,-1,99,102,98,-1,101,96,97,-1,97,31,101,-1,9,77,74,-1,72,104,108,-1,108,105,72,-1,105,103,71,-1,71,72,105,-1,116,36,103,-1,103,105,116,-1,106,114,113,-1,113,82,106,-1,82,113,115,-1,99,112,114,-1,114,106,99,-1,109,110,79,-1,100,111,112,-1,112,99,100,-1,79,82,115,-1,115,109,79,-1,46,108,107,-1,107,118,46,-1,113,131,128,-1,128,115,113,-1,116,105,108,-1,108,46,116,-1,108,104,110,-1,110,107,108,-1,109,115,128,-1,128,127,109,-1,127,117,110,-1,110,109,127,-1,124,107,110,-1,110,117,124,-1,112,111,50,-1,50,120,112,-1,131,114,112,-1,112,120,131,-1,118,107,124,-1,124,119,118,-1,113,114,131,-1,120,50,122,-1,122,121,120,-1,119,124,123,-1,123,58,119,-1,125,117,127,-1,127,126,125,-1,129,128,131,-1,131,130,129,-1,131,120,121,-1,121,130,131,-1,117,125,123,-1,123,124,117,-1,128,129,126,-1,126,127,128,-1,125,133,132,-1,132,123,125,-1,123,132,134,-1,134,58,123,-1,122,136,135,-1,135,121,122,-1,121,135,137,-1,137,130,121,-1,130,137,138,-1,138,129,130,-1,129,138,139,-1,139,126,129,-1,126,139,133,-1,133,125,126,-1,87,88,95,-1,95,94,87,-1]);
IndexedFaceSet228.creaseAngle = 3.14159;
IndexedFaceSet228.texCoordIndex = new MFInt32(new int[14,15,0,-1,0,16,14,-1,15,19,0,-1,21,10,11,-1,11,18,21,-1,5,2,1,-1,6,281,282,-1,282,4,6,-1,3,2,13,-1,2,5,13,-1,66,7,13,-1,6,4,17,-1,4,15,17,-1,20,9,70,-1,70,89,20,-1,10,21,70,-1,70,9,10,-1,15,4,283,-1,283,19,15,-1,12,20,22,-1,48,47,26,-1,26,27,48,-1,47,49,28,-1,28,26,47,-1,31,32,29,-1,29,30,31,-1,32,53,54,-1,54,29,32,-1,33,50,32,-1,53,32,50,-1,50,51,53,-1,30,29,55,-1,55,56,30,-1,29,54,52,-1,52,55,29,-1,49,33,28,-1,36,41,40,-1,40,35,36,-1,37,39,38,-1,38,34,37,-1,39,31,30,-1,30,38,39,-1,42,36,43,-1,43,45,42,-1,39,37,26,-1,26,28,39,-1,28,31,39,-1,35,44,57,-1,57,46,35,-1,34,38,65,-1,65,58,34,-1,38,30,56,-1,56,65,38,-1,49,50,33,-1,28,33,31,-1,32,31,33,-1,62,63,64,-1,64,61,62,-1,57,65,64,-1,65,56,60,-1,65,60,61,-1,61,64,65,-1,64,63,59,-1,59,57,64,-1,13,8,66,-1,71,72,93,-1,93,70,71,-1,72,71,73,-1,73,74,72,-1,94,72,74,-1,74,77,94,-1,81,76,87,-1,87,86,81,-1,76,88,87,-1,80,81,86,-1,86,90,80,-1,85,75,89,-1,78,79,91,-1,91,92,78,-1,75,85,88,-1,88,76,75,-1,97,107,96,-1,96,95,97,-1,24,118,114,-1,114,23,24,-1,106,105,109,-1,109,116,106,-1,115,110,104,-1,104,100,115,-1,95,288,98,-1,98,97,95,-1,89,70,93,-1,93,287,89,-1,99,117,112,-1,112,102,99,-1,99,103,113,-1,113,117,99,-1,103,23,114,-1,114,113,103,-1,115,100,101,-1,111,115,101,-1,101,102,111,-1,124,129,133,-1,133,121,124,-1,127,134,132,-1,132,126,127,-1,136,130,122,-1,122,125,136,-1,131,135,119,-1,119,123,131,-1,119,135,128,-1,128,120,119,-1,125,126,132,-1,132,136,125,-1,123,122,130,-1,130,131,123,-1,136,132,138,-1,138,137,136,-1,132,134,139,-1,139,138,132,-1,133,129,141,-1,141,140,133,-1,128,135,142,-1,142,141,128,-1,135,131,143,-1,143,142,135,-1,131,130,144,-1,144,143,131,-1,130,136,137,-1,137,144,130,-1,147,146,145,-1,145,148,147,-1,148,145,149,-1,152,151,150,-1,150,153,152,-1,154,156,155,-1,284,285,158,-1,158,157,284,-1,159,160,155,-1,155,160,154,-1,161,160,162,-1,158,163,157,-1,157,163,148,-1,164,215,210,-1,210,165,164,-1,210,152,153,-1,153,165,210,-1,286,157,148,-1,148,149,286,-1,166,167,164,-1,170,169,168,-1,168,171,170,-1,171,168,172,-1,172,173,171,-1,176,175,174,-1,174,177,176,-1,177,174,178,-1,178,179,177,-1,180,177,181,-1,179,182,181,-1,181,177,179,-1,175,184,183,-1,183,174,175,-1,174,183,185,-1,185,178,174,-1,173,172,180,-1,188,187,186,-1,186,189,188,-1,192,191,190,-1,190,193,192,-1,190,200,184,-1,184,175,190,-1,196,195,194,-1,194,188,196,-1,193,172,168,-1,168,192,193,-1,172,193,176,-1,187,198,197,-1,197,199,187,-1,191,201,200,-1,200,190,191,-1,173,180,181,-1,172,176,180,-1,177,180,176,-1,203,202,205,-1,205,204,203,-1,197,205,200,-1,200,206,184,-1,200,205,202,-1,202,206,200,-1,205,197,207,-1,207,204,205,-1,160,161,208,-1,211,210,209,-1,209,212,211,-1,212,214,213,-1,213,211,212,-1,218,217,214,-1,214,212,218,-1,219,222,221,-1,221,220,219,-1,220,221,223,-1,225,224,222,-1,222,219,225,-1,226,215,216,-1,228,227,230,-1,230,229,228,-1,216,220,223,-1,223,226,216,-1,234,233,232,-1,232,231,234,-1,239,249,253,-1,253,241,239,-1,243,289,233,-1,233,234,243,-1,209,210,215,-1,215,290,209,-1,235,241,254,-1,254,244,235,-1,244,245,236,-1,236,235,244,-1,246,25,236,-1,236,245,246,-1,238,237,248,-1,248,247,238,-1,249,240,242,-1,242,250,249,-1,251,25,246,-1,246,252,251,-1,239,240,249,-1,256,255,68,-1,68,67,256,-1,259,262,261,-1,261,260,259,-1,264,263,266,-1,266,69,264,-1,82,267,270,-1,270,83,82,-1,270,272,84,-1,84,83,270,-1,263,264,261,-1,261,262,263,-1,267,82,69,-1,69,266,267,-1,264,274,273,-1,273,261,264,-1,261,273,275,-1,275,260,261,-1,258,277,276,-1,276,257,258,-1,271,276,278,-1,278,269,271,-1,269,278,279,-1,279,268,269,-1,268,279,280,-1,280,265,268,-1,69,108,274,-1,274,264,69,-1,175,176,193,-1,193,190,175,-1]);
let Coordinate229 = browser.currentScene.createNode("Coordinate");
Coordinate229.point = new MFVec3f(new float[1.47,5.382,-1.15,2.016,5.359,0.0414,2.914,4.913,0.0931,3.187,4.047,1.303,0.7806,4.8,1.368,1.573,5.061,0.8702,2.043,3.676,3.089,2.245,3.832,3.58,5.472,3.516,-1.692,0,5.005,-0.0527,2.599,5.814,-1.646,0.9629,5.838,-3.392,2.035,5.864,-3.055,3.439,5.748,0.1272,3.953,4.887,-2.467,5.073,5.221,0.1272,4.655,3.945,-2.02,1.032,2.987,-4.667,0,2.996,-4.802,2.39,3.373,-4.154,1.677,-0.3565,-3.387,4.12,1.16,-3.272,2.982,4.692,1.941,4.42,4.39,1.865,5.602,4.182,-0.0537,1.811,0.2885,-2.67,1.811,3.512,-2.117,1.833,1.248,-2.283,4.241,1.248,-2.283,4.225,3.516,-1.692,0.6928,5.168,-1.503,0,1.248,-2.283,5.086,3.581,1.771,3.131,3.091,3.659,1.373,3.143,3.427,1.38,3.143,3.896,0,2.602,3.661,4.349,3.515,-1.814,1.713,2.253,3.428,5.378,2.752,1.672,4.324,2.752,-1.927,5.141,2.752,-1.839,5.589,2.752,-1.388,3.32,2.752,2.735,1.811,2.752,-2.267,1.593,2.573,4.098,0,1.897,4.121,1.811,0.7023,-2.67,3.788,0.7024,3.331,6.098,0.7024,1.429,0,0.7023,-2.804,5.903,0.7024,-0.5713,1.646,0.7024,3.637,4.256,0.7024,-2.233,1.937,0.0168,-2.644,6.192,0.0169,1.374,5.738,0.0169,-0.7614,1.615,0.0169,3.729,0,0.0169,3.756,4.273,0.0169,-2.169,3.945,0.0169,3.53,3.768,-1.11,3.256,1.579,-1.11,3.447,1.875,-1.11,-2.363,4.079,-1.11,-1.908,5.404,-1.11,-0.6177,5.801,-1.11,1.279,-3.187,4.047,1.303,-2.914,4.913,0.0931,-2.016,5.359,0.0414,-1.573,5.061,0.8702,-2.043,3.676,3.089,-2.245,3.832,3.58,-2.982,4.692,1.941,-1.47,5.382,-1.15,-0.7806,4.8,1.368,0,4.791,1.49,-0.6928,5.168,-1.503,0,5.19,-1.61,-5.086,3.581,1.771,-4.42,4.39,1.865,-5.602,4.182,-0.0537,-5.472,3.516,-1.692,-0.9629,5.838,-3.392,0,5.814,-3.557,-2.035,5.864,-3.055,-5.073,5.221,0.1272,-4.655,3.945,-2.02,-3.953,4.887,-2.467,-3.439,5.748,0.1272,-2.599,5.814,-1.646,-1.677,-0.3565,-3.387,0,-1.081,-3.506,-1.032,2.987,-4.667,-4.12,1.16,-3.272,-2.39,3.373,-4.154,-1.811,0.2885,-2.67,0,0.1393,-2.804,-4.241,1.248,-2.283,-1.811,3.512,-2.117,0,3.512,-2.251,-1.833,1.248,-2.283,-4.225,3.516,-1.692,-1.373,3.143,3.427,-3.131,3.091,3.659,-1.38,3.143,3.896,-4.349,3.515,-1.814,-1.713,2.253,3.428,-1.593,2.573,4.098,-5.378,2.752,1.672,-3.32,2.752,2.735,0,2.752,-2.401,-1.811,2.752,-2.267,-5.141,2.752,-1.839,-4.324,2.752,-1.927,-5.589,2.752,-1.388,0,2.66,3.819,-3.788,0.7024,3.331,0,1.512,3.616,0,0.7024,3.687,-1.811,0.7023,-2.67,-1.937,0.0168,-2.644,0,0.0168,-2.735,-1.615,0.0169,3.729,-1.646,0.7024,3.637,-3.945,0.0169,3.53,-6.192,0.0169,1.374,-6.098,0.7024,1.429,-5.903,0.7024,-0.5713,-5.738,0.0169,-0.7614,-4.273,0.0169,-2.169,-4.256,0.7024,-2.233,-1.579,-1.11,3.447,-3.768,-1.11,3.256,0,-1.11,3.474,-1.875,-1.11,-2.363,0,-1.11,-2.451,-4.079,-1.11,-1.908,-5.404,-1.11,-0.6177,-5.801,-1.11,1.279]);
IndexedFaceSet228.coord = Coordinate229;

let TextureCoordinate230 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate230.point = new MFVec2f(new float[0.4416,0.6747,0.4535,0.6485,0.4483,0.6438,0.4499,0.6371,0.4594,0.6763,0.4399,0.6472,0.4645,0.6783,0.4385,0.6236,0.4279,0.6258,0.1412,0.5207,0.1108,0.5655,0.1073,0.5839,0.1708,0.4854,0.4376,0.6345,0.4528,0.6648,0.4548,0.6714,0.4459,0.6652,0.4669,0.6678,0.0786,0.5849,0.4476,0.6884,0.1474,0.4856,0.0865,0.5614,0.1963,0.4863,0.0877,0.4617,0.0639,0.4488,0.0877,0.4617,0.2661,0.5914,0.3505,0.5919,0.241,0.592,0.1724,0.5255,0.2089,0.5196,0.2133,0.556,0.1645,0.5709,0.2067,0.5908,0.2708,0.4736,0.347,0.4317,0.3616,0.5328,0.2733,0.5359,0.238,0.493,0.249,0.5451,0.3477,0.431,0.3623,0.5333,0.3623,0.5333,0.3505,0.5919,0.3477,0.431,0.3511,0.5932,0.3206,0.4193,0.2505,0.5754,0.3554,0.5911,0.2112,0.5805,0.1632,0.5887,0.1073,0.5839,0.1474,0.4856,0.1108,0.5655,0.1412,0.5207,0.1708,0.4854,0.1963,0.4863,0.3223,0.4192,0.2638,0.4568,0.3206,0.4193,0.1963,0.4863,0.1963,0.4863,0.1963,0.4863,0.2252,0.4828,0.2252,0.4828,0.2252,0.4828,0.4337,0.6239,0.3364,0.4029,0.3325,0.4068,0.1528,0.4078,0.1025,0.5076,0.0865,0.5614,0.0652,0.5465,0.0786,0.5849,0.0516,0.5759,0.1474,0.4856,0.1963,0.4863,0.0346,0.5664,0.3214,0.4203,0.3223,0.4192,0.2638,0.4568,0.2146,0.5039,0.1843,0.4071,0.221,0.4256,0.3061,0.4256,0.1491,0.4682,0.2169,0.492,0.2035,0.4795,0.1915,0.4696,0.1178,0.4708,0.2635,0.4569,0.3223,0.4193,0.3214,0.4203,0.0763,0.4945,0.0399,0.5407,0.0763,0.4945,0.0877,0.4617,0.0525,0.4715,0.0399,0.5407,0.1491,0.4682,0.2169,0.492,0.2035,0.4795,0.1915,0.4696,0.1178,0.4708,0.2635,0.4569,0.3223,0.4193,0.3214,0.4203,0.0639,0.4488,0.1528,0.4078,0.3223,0.4192,0.2638,0.4568,0.1784,0.4249,0.1784,0.4249,0.1055,0.438,0.0663,0.4356,0.2236,0.46,0.3214,0.4203,0.1538,0.4251,0.0537,0.4289,0.2236,0.46,0.2638,0.4568,0.3214,0.4203,0.1538,0.4251,0.1784,0.4249,0.3223,0.4192,0.1055,0.438,0.0663,0.4356,0.0537,0.4289,0.3061,0.4256,0.3364,0.4029,0.1528,0.4078,0.1843,0.4071,0.055,0.4216,0.3325,0.4068,0.0482,0.4185,0.221,0.4256,0.1008,0.4259,0.1008,0.4259,0.055,0.4216,0.0482,0.4185,0.3325,0.4068,0.3364,0.4029,0.221,0.4256,0.1843,0.4071,0.1528,0.4078,0.4416,0.6747,0.4459,0.6652,0.4528,0.6648,0.4548,0.6714,0.4476,0.6884,0.1073,0.5839,0.0786,0.5849,0.0865,0.5614,0.1108,0.5655,0.4399,0.6472,0.4483,0.6438,0.4535,0.6485,0.4594,0.6763,0.4645,0.6783,0.4499,0.6371,0.4376,0.6345,0.4337,0.6239,0.4385,0.6236,0.4669,0.6678,0.1474,0.4856,0.1412,0.5207,0.1708,0.4854,0.1963,0.4863,0.2661,0.5914,0.3505,0.5919,0.3554,0.5911,0.2505,0.5754,0.241,0.592,0.2112,0.5805,0.1724,0.5255,0.2089,0.5196,0.2133,0.556,0.1645,0.5709,0.1412,0.5207,0.1108,0.5655,0.2067,0.5908,0.1632,0.5887,0.1073,0.5839,0.1708,0.4854,0.1963,0.4863,0.1474,0.4856,0.3477,0.431,0.347,0.4317,0.3616,0.5328,0.3623,0.5333,0.238,0.493,0.2708,0.4736,0.2733,0.5359,0.249,0.5451,0.3505,0.5919,0.3511,0.5932,0.3623,0.5333,0.3223,0.4192,0.3206,0.4193,0.3477,0.431,0.2252,0.4828,0.2638,0.4568,0.1963,0.4863,0.1963,0.4863,0.2252,0.4828,0.2252,0.4828,0.1963,0.4863,0.3206,0.4193,0.4279,0.6258,0.0763,0.4945,0.1025,0.5076,0.0865,0.5614,0.0652,0.5465,0.0786,0.5849,0.0516,0.5759,0.1178,0.4708,0.1474,0.4856,0.0346,0.5664,0.0399,0.5407,0.2146,0.5039,0.1963,0.4863,0.2035,0.4795,0.2169,0.492,0.1915,0.4696,0.2635,0.4569,0.2638,0.4568,0.1491,0.4682,0.3214,0.4203,0.3214,0.4203,0.3223,0.4192,0.3223,0.4193,0.0639,0.4488,0.0877,0.4617,0.0763,0.4945,0.0525,0.4715,0.1491,0.4682,0.1178,0.4708,0.3214,0.4203,0.3223,0.4193,0.2035,0.4795,0.2169,0.492,0.1915,0.4696,0.2635,0.4569,0.0399,0.5407,0.1538,0.4251,0.1055,0.438,0.0663,0.4356,0.3223,0.4192,0.3214,0.4203,0.2236,0.46,0.2638,0.4568,0.0639,0.4488,0.0537,0.4289,0.1784,0.4249,0.1784,0.4249,0.3214,0.4203,0.3223,0.4192,0.3364,0.4029,0.3325,0.4068,0.0537,0.4289,0.0482,0.4185,0.055,0.4216,0.0663,0.4356,0.1055,0.438,0.1008,0.4259,0.1528,0.4078,0.1538,0.4251,0.1784,0.4249,0.1843,0.4071,0.221,0.4256,0.2236,0.46,0.3061,0.4256,0.2638,0.4568,0.055,0.4216,0.1008,0.4259,0.0482,0.4185,0.3364,0.4029,0.3325,0.4068,0.221,0.4256,0.1843,0.4071,0.1528,0.4078,0.4598,0.699,0.4513,0.6933,0.4515,0.6934,0.4513,0.6933,0.4598,0.699,0.4515,0.6934,0.0871,0.4661,0.0627,0.5494,0.0627,0.5494,0.0871,0.4661]);
IndexedFaceSet228.texCoord = TextureCoordinate230;

Shape224.geometry = IndexedFaceSet228;

Transform223.child = new undefined();

Transform223.child[0] = Shape224;

HAnimSegment222.children = new MFNode();

HAnimSegment222.children[0] = Transform223;

HAnimJoint221.children = new MFNode();

HAnimJoint221.children[0] = HAnimSegment222;

let HAnimJoint231 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint231.name = "l_acromioclavicular";
HAnimJoint231.DEF = "hanim_l_acromioclavicular";
HAnimJoint231.center = new SFVec3f(new float[1.71,52.82,-0.6127]);
HAnimJoint231.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint231.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment232 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment232.name = "l_clavicle";
HAnimSegment232.DEF = "hanim_l_clavicle";
let Transform233 = browser.currentScene.createNode("Transform");
Transform233.translation = new SFVec3f(new float[1.71,52.82,-0.6127]);
let Shape234 = browser.currentScene.createNode("Shape");
let Appearance235 = browser.currentScene.createNode("Appearance");
let Material236 = browser.currentScene.createNode("Material");
Material236.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance235.material = Material236;

let ImageTexture237 = browser.currentScene.createNode("ImageTexture");
ImageTexture237.USE = "JinLOA2TextureAtlas";
Appearance235.texture = ImageTexture237;

Shape234.appearance = Appearance235;

let IndexedFaceSet238 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet238.coordIndex = new MFInt32(new int[9,6,1,-1,1,0,9,-1,6,5,2,-1,2,1,6,-1,8,3,2,-1,2,5,8,-1,8,7,4,-1,4,3,8,-1,9,0,4,-1,4,7,9,-1,2,3,4,-1,2,4,0,-1,1,2,0,-1,13,14,10,-1,12,13,10,-1,11,12,10,-1,6,9,11,-1,11,10,6,-1,9,7,12,-1,12,11,9,-1,7,8,13,-1,13,12,7,-1,8,5,14,-1,14,13,8,-1,5,6,10,-1,10,14,5,-1]);
IndexedFaceSet238.creaseAngle = 3.14159;
IndexedFaceSet238.texCoordIndex = new MFInt32(new int[9,6,1,-1,1,0,9,-1,6,5,2,-1,2,1,6,-1,8,3,2,-1,2,5,8,-1,8,7,4,-1,4,3,8,-1,9,0,4,-1,4,7,9,-1,2,3,4,-1,2,4,0,-1,1,2,0,-1,13,14,10,-1,12,13,10,-1,11,12,10,-1,6,9,11,-1,11,10,6,-1,9,7,12,-1,12,11,9,-1,7,8,13,-1,13,12,7,-1,8,5,14,-1,14,13,8,-1,5,6,10,-1,10,14,5,-1]);
let Coordinate239 = browser.currentScene.createNode("Coordinate");
Coordinate239.point = new MFVec3f(new float[4.99,0.104,-0.8644,5.073,0.4993,0.047,4.706,0.1695,1.198,4.631,-1.819,1.104,4.586,-1.648,-0.1248,3.376,0.3884,1.771,3.891,0.989,-0.0537,4.193,-2.49,-0.5713,4.388,-2.49,1.429,3.761,0.3238,-1.692,-0.1237,0.6312,-0.1883,-0.1237,0.3007,-0.9426,-0.1237,-1.418,-0.2577,-0.1237,-1.392,0.6264,-0.1237,0.2586,0.8179]);
IndexedFaceSet238.coord = Coordinate239;

let TextureCoordinate240 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate240.point = new MFVec2f(new float[0.1911,0.4797,0.171,0.4832,0.1497,0.4806,0.1519,0.4334,0.1831,0.4416,0.1474,0.4856,0.1708,0.4854,0.1784,0.4249,0.1538,0.4251,0.1963,0.4863,0.19,0.5091,0.1847,0.499,0.172,0.4382,0.1568,0.4457,0.1409,0.4926]);
IndexedFaceSet238.texCoord = TextureCoordinate240;

Shape234.geometry = IndexedFaceSet238;

Transform233.child = new undefined();

Transform233.child[0] = Shape234;

HAnimSegment232.children = new MFNode();

HAnimSegment232.children[0] = Transform233;

HAnimJoint231.children = new MFNode();

HAnimJoint231.children[0] = HAnimSegment232;

let HAnimJoint241 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint241.name = "l_sternoclavicular";
HAnimJoint241.DEF = "hanim_l_sternoclavicular";
HAnimJoint241.center = new SFVec3f(new float[5.464,52.060001,-0.5732]);
HAnimJoint241.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint241.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment242 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment242.name = "l_scapula";
HAnimSegment242.DEF = "hanim_l_scapula";
let Transform243 = browser.currentScene.createNode("Transform");
Transform243.translation = new SFVec3f(new float[5.464,52.060001,-0.5732]);
let Shape244 = browser.currentScene.createNode("Shape");
let Appearance245 = browser.currentScene.createNode("Appearance");
let Material246 = browser.currentScene.createNode("Material");
Material246.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance245.material = Material246;

let ImageTexture247 = browser.currentScene.createNode("ImageTexture");
ImageTexture247.USE = "JinLOA2TextureAtlas";
Appearance245.texture = ImageTexture247;

Shape244.appearance = Appearance245;

let IndexedFaceSet248 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet248.coordIndex = new MFInt32(new int[5,4,0,-1,0,1,5,-1,4,3,2,-1,2,0,4,-1,3,9,6,-1,6,2,3,-1,7,5,1,-1,1,8,7,-1,6,8,0,-1,0,2,6,-1,0,8,1,-1,9,7,8,-1,8,6,9,-1,4,5,11,-1,11,10,4,-1,5,7,12,-1,12,11,5,-1,7,9,13,-1,13,12,7,-1,9,3,14,-1,14,13,9,-1,3,4,10,-1,10,14,3,-1,10,11,15,-1,11,12,15,-1,12,13,15,-1,13,14,15,-1,14,10,15,-1]);
IndexedFaceSet248.creaseAngle = 3.14159;
IndexedFaceSet248.texCoordIndex = new MFInt32(new int[5,4,0,-1,0,1,5,-1,4,3,2,-1,2,0,4,-1,3,8,6,-1,6,2,3,-1,9,5,1,-1,1,7,9,-1,6,7,0,-1,0,2,6,-1,0,7,1,-1,12,13,11,-1,11,10,12,-1,4,5,15,-1,15,14,4,-1,5,9,16,-1,16,15,5,-1,13,12,17,-1,17,16,13,-1,8,3,18,-1,18,17,8,-1,3,4,14,-1,14,18,3,-1,14,15,19,-1,15,16,19,-1,16,17,19,-1,17,18,19,-1,18,14,19,-1]);
let Coordinate249 = browser.currentScene.createNode("Coordinate");
Coordinate249.point = new MFVec3f(new float[1.935,1.466,-0.0932,1.515,0.6492,-1.732,1.534,0.7105,1.619,-0.3782,1.139,1.732,0.1374,1.74,-0.0932,0.0076,1.074,-1.731,0.8341,-1.572,1.39,0.4391,-1.74,-0.6109,0.8275,-1.58,-0.6098,0.6342,-1.74,1.389,-1.237,1.407,-0.0712,-1.547,0.8515,-1.142,-0.7525,-1.603,-0.4744,-0.7511,-1.595,1.16,-1.51,1.034,1.296,-1.59,-0.0185,0.1351]);
IndexedFaceSet248.coord = Coordinate249;

let TextureCoordinate250 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate250.point = new MFVec2f(new float[0.1715,0.4655,0.1797,0.4646,0.1569,0.4642,0.1474,0.4856,0.1708,0.4854,0.1963,0.4863,0.1544,0.4288,0.1782,0.4286,0.1538,0.4251,0.1784,0.4249,0.1544,0.4288,0.1782,0.4286,0.1538,0.4251,0.1784,0.4249,0.1703,0.4865,0.1895,0.487,0.1761,0.4271,0.1552,0.4287,0.1491,0.4835,0.1671,0.4618]);
IndexedFaceSet248.texCoord = TextureCoordinate250;

Shape244.geometry = IndexedFaceSet248;

Transform243.child = new undefined();

Transform243.child[0] = Shape244;

HAnimSegment242.children = new MFNode();

HAnimSegment242.children[0] = Transform243;

HAnimJoint241.children = new MFNode();

HAnimJoint241.children[0] = HAnimSegment242;

let HAnimJoint251 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint251.name = "l_shoulder";
HAnimJoint251.DEF = "hanim_l_shoulder";
HAnimJoint251.center = new SFVec3f(new float[7.336,51.48,-0.1452]);
HAnimJoint251.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint251.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment252 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment252.name = "l_upperarm";
HAnimSegment252.DEF = "hanim_l_upperarm";
let Transform253 = browser.currentScene.createNode("Transform");
Transform253.translation = new SFVec3f(new float[7.336,51.48,-0.1452]);
let Shape254 = browser.currentScene.createNode("Shape");
let Appearance255 = browser.currentScene.createNode("Appearance");
let Material256 = browser.currentScene.createNode("Material");
Material256.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance255.material = Material256;

let ImageTexture257 = browser.currentScene.createNode("ImageTexture");
ImageTexture257.USE = "JinLOA2TextureAtlas";
Appearance255.texture = ImageTexture257;

Shape254.appearance = Appearance255;

let IndexedFaceSet258 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet258.coordIndex = new MFInt32(new int[2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,36,37,38,-1,35,36,38,-1,39,35,38,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1,26,25,20,-1,20,21,26,-1,27,26,21,-1,21,22,27,-1,28,27,22,-1,22,23,28,-1,29,28,23,-1,23,24,29,-1,25,29,24,-1,24,20,25,-1,31,30,25,-1,25,26,31,-1,32,31,26,-1,26,27,32,-1,33,32,27,-1,27,28,33,-1,34,33,28,-1,28,29,34,-1,30,34,29,-1,29,25,30,-1,36,35,30,-1,30,31,36,-1,37,36,31,-1,31,32,37,-1,38,37,32,-1,32,33,38,-1,39,38,33,-1,33,34,39,-1,35,39,34,-1,34,30,35,-1]);
IndexedFaceSet258.creaseAngle = 3.14159;
IndexedFaceSet258.texCoordIndex = new MFInt32(new int[2,0,1,-1,3,2,1,-1,61,3,1,-1,1,0,5,-1,5,6,1,-1,0,2,7,-1,7,5,0,-1,2,3,8,-1,8,7,2,-1,25,4,9,-1,9,26,25,-1,4,1,6,-1,6,9,4,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,27,9,14,-1,14,28,27,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,29,14,19,-1,19,30,29,-1,14,11,16,-1,16,19,14,-1,54,35,36,-1,53,54,36,-1,37,53,36,-1,20,21,16,-1,16,15,20,-1,22,20,15,-1,15,17,22,-1,23,22,17,-1,17,18,23,-1,24,32,31,-1,31,19,24,-1,21,24,19,-1,19,16,21,-1,40,41,38,-1,38,39,40,-1,43,56,55,-1,55,42,43,-1,45,43,42,-1,42,44,45,-1,47,45,44,-1,44,46,47,-1,41,47,46,-1,46,38,41,-1,48,49,41,-1,41,40,48,-1,50,58,57,-1,57,43,50,-1,51,50,43,-1,43,45,51,-1,52,51,45,-1,45,47,52,-1,49,52,47,-1,47,41,49,-1,34,33,49,-1,49,48,34,-1,35,60,59,-1,59,50,35,-1,36,35,50,-1,50,51,36,-1,37,36,51,-1,51,52,37,-1,33,37,52,-1,52,49,33,-1]);
let Coordinate259 = browser.currentScene.createNode("Coordinate");
Coordinate259.point = new MFVec3f(new float[1.164,1.767,-1.68,2.32,1.756,0.0337,1.047,1.768,1.663,-0.895,1.785,0.9556,-0.8229,1.784,-1.11,1.382,0.4997,-2.31,2.978,0.4855,0.057,1.221,0.5011,2.307,-1.462,0.525,1.33,-1.362,0.5241,-1.523,1.36,-2.014,-2.31,2.956,-2.028,0.057,1.198,-2.012,2.307,-1.484,-1.988,1.33,-1.384,-1.989,-1.523,1.398,-3.089,-2.442,3.087,-3.104,0.0619,1.228,-3.087,2.442,-1.61,-3.062,1.409,-1.505,-3.063,-1.61,0.8845,-1.238,-1.939,2.105,-1.248,-0.4543,1.473,-1.243,1.629,-0.1375,-1.229,1.432,-0.5011,-1.225,-0.7734,0.9027,-7.045,-1.569,2.17,-7.056,-0.378,1.514,-7.051,1.293,-0.1588,-7.036,1.135,-0.5365,-7.032,-0.634,0.9066,-11.1,-1.511,2.127,-11.11,-0.3651,1.495,-11.1,1.243,-0.1154,-11.09,1.091,-0.4791,-11.08,-0.6115,0.852,-11.65,-0.8985,1.567,-11.65,-0.2267,1.197,-11.65,0.716,0.2531,-11.64,0.6268,0.0399,-11.64,-0.3711]);
IndexedFaceSet258.coord = Coordinate259;

let TextureCoordinate260 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate260.point = new MFVec2f(new float[0.2986,0.2114,0.2726,0.2114,0.3201,0.2114,0.3415,0.2114,0.2466,0.2114,0.2979,0.2417,0.2726,0.2417,0.3197,0.2417,0.3418,0.2417,0.2473,0.2417,0.2979,0.3018,0.2726,0.3018,0.3197,0.3018,0.3418,0.3018,0.2473,0.3018,0.2978,0.3276,0.2726,0.3276,0.3197,0.3276,0.3419,0.3276,0.2474,0.3276,0.2932,0.2834,0.2689,0.2834,0.316,0.2834,0.3322,0.2834,0.245,0.2834,0.2251,0.2114,0.2255,0.2417,0.2255,0.2417,0.2255,0.3018,0.2255,0.3018,0.2255,0.3276,0.2255,0.3276,0.2159,0.2834,0.4315,0.6736,0.442,0.6736,0.3947,0.6736,0.4041,0.6736,0.418,0.6736,0.4296,0.6167,0.4409,0.6167,0.4415,0.6485,0.4303,0.6485,0.3965,0.6167,0.3953,0.6485,0.4047,0.6167,0.4053,0.6485,0.4189,0.6167,0.418,0.6485,0.4415,0.6706,0.4306,0.6706,0.395,0.6706,0.4051,0.6706,0.4182,0.6706,0.3746,0.6736,0.3851,0.6736,0.384,0.6167,0.3845,0.6485,0.3845,0.6485,0.3846,0.6706,0.3846,0.6706,0.3851,0.6736,0.3481,0.2114]);
IndexedFaceSet258.texCoord = TextureCoordinate260;

Shape254.geometry = IndexedFaceSet258;

Transform253.child = new undefined();

Transform253.child[0] = Shape254;

HAnimSegment252.children = new MFNode();

HAnimSegment252.children[0] = Transform253;

HAnimJoint251.children = new MFNode();

HAnimJoint251.children[0] = HAnimSegment252;

let HAnimJoint261 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint261.name = "l_elbow";
HAnimJoint261.DEF = "hanim_l_elbow";
HAnimJoint261.center = new SFVec3f(new float[8.093,40.380001,-0.2502]);
HAnimJoint261.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint261.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment262 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment262.name = "l_forearm";
HAnimSegment262.DEF = "hanim_l_forearm";
let Transform263 = browser.currentScene.createNode("Transform");
Transform263.translation = new SFVec3f(new float[8.093,40.380001,-0.2502]);
let Shape264 = browser.currentScene.createNode("Shape");
let Appearance265 = browser.currentScene.createNode("Appearance");
let Material266 = browser.currentScene.createNode("Material");
Material266.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance265.material = Material266;

let ImageTexture267 = browser.currentScene.createNode("ImageTexture");
ImageTexture267.USE = "JinLOA2TextureAtlas";
Appearance265.texture = ImageTexture267;

Shape264.appearance = Appearance265;

let IndexedFaceSet268 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet268.coordIndex = new MFInt32(new int[2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,21,22,23,-1,20,21,23,-1,24,20,23,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1]);
IndexedFaceSet268.creaseAngle = 3.14159;
IndexedFaceSet268.texCoordIndex = new MFInt32(new int[2,25,26,-1,3,2,26,-1,4,3,26,-1,0,1,6,-1,6,5,0,-1,27,2,7,-1,7,28,27,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,29,7,12,-1,12,30,29,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,31,12,17,-1,17,32,31,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,34,22,23,-1,33,34,23,-1,24,33,23,-1,21,20,15,-1,15,16,21,-1,22,36,35,-1,35,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1]);
let Coordinate269 = browser.currentScene.createNode("Coordinate");
Coordinate269.point = new MFVec3f(new float[0.215,0.3047,-1.152,1.155,0.2966,-0.2588,0.6199,0.3013,1.04,-0.6505,0.3122,0.9491,-0.9008,0.3143,-0.4054,0.1442,-0.8448,-1.625,1.472,-0.8561,-0.4271,0.7164,-0.8496,1.625,-1.079,-0.8342,1.482,-1.433,-0.8312,-0.6588,0.1328,-3.5,-1.607,1.551,-3.513,-0.4225,0.781,-2.925,1.61,-1.136,-2.909,1.468,-1.551,-3.486,-0.6519,0.0592,-8.713,-1.437,1.093,-8.722,-0.1279,0.5047,-8.716,1.51,-0.8932,-8.704,1.377,-1.169,-8.702,-0.3428,0.0092,-9.336,-0.8855,0.7154,-9.342,0.0084,0.3135,-9.339,1.043,-0.6412,-9.331,0.9519,-0.8292,-9.329,-0.1383]);
IndexedFaceSet268.coord = Coordinate269;

let TextureCoordinate270 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate270.point = new MFVec2f(new float[0.4222,0.6201,0.4327,0.6201,0.3884,0.6201,0.3987,0.6201,0.4103,0.6201,0.4213,0.6265,0.4321,0.6265,0.3894,0.6265,0.399,0.6265,0.4105,0.6265,0.4214,0.6413,0.4323,0.6413,0.389,0.6381,0.3992,0.6381,0.4103,0.6413,0.4213,0.6705,0.4336,0.6705,0.3899,0.6705,0.3981,0.6705,0.4094,0.6705,0.4215,0.674,0.4346,0.674,0.3899,0.674,0.398,0.674,0.4083,0.674,0.3787,0.6201,0.3682,0.6201,0.3787,0.6201,0.3782,0.6265,0.3782,0.6265,0.3783,0.6413,0.3783,0.6413,0.3796,0.6705,0.3676,0.674,0.3806,0.674,0.3796,0.6705,0.3806,0.674]);
IndexedFaceSet268.texCoord = TextureCoordinate270;

Shape264.geometry = IndexedFaceSet268;

Transform263.child = new undefined();

Transform263.child[0] = Shape264;

HAnimSegment262.children = new MFNode();

HAnimSegment262.children[0] = Transform263;

HAnimJoint261.children = new MFNode();

HAnimJoint261.children[0] = HAnimSegment262;

let HAnimJoint271 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint271.name = "l_radiocarpal";
HAnimJoint271.DEF = "hanim_l_radiocarpal";
HAnimJoint271.center = new SFVec3f(new float[7.899,31.43,-0.3809]);
HAnimJoint271.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint271.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment272 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment272.name = "l_carpal";
HAnimSegment272.DEF = "hanim_l_carpal";
let Transform273 = browser.currentScene.createNode("Transform");
Transform273.translation = new SFVec3f(new float[7.899,31.43,-0.3809]);
let Shape274 = browser.currentScene.createNode("Shape");
let Appearance275 = browser.currentScene.createNode("Appearance");
let Material276 = browser.currentScene.createNode("Material");
Material276.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance275.material = Material276;

let ImageTexture277 = browser.currentScene.createNode("ImageTexture");
ImageTexture277.USE = "JinLOA2TextureAtlas";
Appearance275.texture = ImageTexture277;

Shape274.appearance = Appearance275;

let IndexedFaceSet278 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet278.coordIndex = new MFInt32(new int[36,37,38,-1,38,41,36,-1,44,45,54,-1,31,4,53,-1,53,30,31,-1,6,10,11,-1,11,7,6,-1,11,10,33,-1,33,32,11,-1,34,24,7,-1,7,11,34,-1,13,17,15,-1,15,27,13,-1,25,22,35,-1,30,5,20,-1,13,34,11,-1,11,32,13,-1,23,22,28,-1,28,29,23,-1,17,16,14,-1,14,15,17,-1,18,5,53,-1,53,19,18,-1,9,8,16,-1,16,17,9,-1,14,42,43,-1,43,15,14,-1,21,16,8,-1,8,33,21,-1,21,35,22,-1,22,23,21,-1,39,40,41,-1,41,38,39,-1,26,20,24,-1,27,12,20,-1,20,26,27,-1,3,30,12,-1,12,43,3,-1,0,54,28,-1,28,25,0,-1,13,32,9,-1,9,17,13,-1,28,31,29,-1,29,42,14,-1,14,23,29,-1,16,21,23,-1,23,14,16,-1,30,3,2,-1,2,31,30,-1,8,9,32,-1,32,33,8,-1,33,10,35,-1,35,21,33,-1,35,10,6,-1,6,25,35,-1,13,27,26,-1,26,34,13,-1,34,26,24,-1,1,0,47,-1,47,46,1,-1,25,48,47,-1,47,0,25,-1,25,6,49,-1,49,48,25,-1,6,7,50,-1,50,49,6,-1,24,51,50,-1,50,7,24,-1,24,1,46,-1,46,51,24,-1,2,3,43,-1,43,42,2,-1,15,43,12,-1,12,27,15,-1,29,31,2,-1,2,42,29,-1,18,44,52,-1,52,5,18,-1,28,22,25,-1,18,19,45,-1,45,44,18,-1,1,24,52,-1,52,44,1,-1,45,4,28,-1,28,4,31,-1,45,19,4,-1,37,36,46,-1,46,47,37,-1,48,38,37,-1,37,47,48,-1,39,38,48,-1,48,49,39,-1,40,39,49,-1,49,50,40,-1,51,41,40,-1,40,50,51,-1,36,41,51,-1,51,46,36,-1,24,20,52,-1,52,20,5,-1,53,5,30,-1,53,4,19,-1,54,45,28,-1,44,54,0,-1,0,1,44,-1,20,12,30,-1]);
IndexedFaceSet278.creaseAngle = 3.14159;
IndexedFaceSet278.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,4,5,6,-1,8,9,10,-1,10,7,8,-1,12,13,14,-1,14,11,12,-1,14,13,15,-1,15,16,14,-1,17,18,11,-1,11,14,17,-1,20,21,22,-1,22,19,20,-1,23,24,25,-1,7,26,27,-1,20,17,14,-1,14,16,20,-1,28,24,29,-1,29,30,28,-1,21,31,32,-1,32,22,21,-1,33,26,10,-1,10,34,33,-1,35,36,31,-1,31,21,35,-1,32,37,38,-1,38,22,32,-1,39,31,36,-1,36,15,39,-1,39,25,24,-1,24,28,39,-1,40,41,3,-1,3,2,40,-1,42,27,18,-1,19,43,27,-1,27,42,19,-1,44,7,43,-1,43,38,44,-1,45,6,29,-1,29,23,45,-1,20,16,35,-1,35,21,20,-1,29,8,30,-1,30,37,32,-1,32,28,30,-1,31,39,28,-1,28,32,31,-1,7,44,46,-1,46,8,7,-1,36,35,16,-1,16,15,36,-1,15,13,25,-1,25,39,15,-1,25,13,12,-1,12,23,25,-1,20,19,42,-1,42,17,20,-1,17,42,18,-1,47,45,48,-1,48,49,47,-1,23,50,48,-1,48,45,23,-1,23,12,51,-1,51,50,23,-1,12,11,52,-1,52,51,12,-1,18,53,52,-1,52,11,18,-1,18,47,49,-1,49,53,18,-1,46,44,38,-1,38,37,46,-1,22,38,43,-1,43,19,22,-1,30,8,46,-1,46,37,30,-1,33,4,54,-1,54,26,33,-1,29,24,23,-1,33,34,5,-1,5,4,33,-1,47,18,54,-1,54,4,47,-1,5,9,29,-1,29,9,8,-1,5,34,9,-1,1,0,49,-1,49,48,1,-1,50,2,1,-1,1,48,50,-1,40,2,50,-1,50,51,40,-1,41,40,51,-1,51,52,41,-1,53,3,41,-1,41,52,53,-1,0,3,53,-1,53,49,0,-1,18,27,54,-1,54,27,26,-1,10,26,7,-1,10,9,34,-1,6,5,29,-1,4,6,45,-1,45,47,4,-1,27,43,7,-1]);
let Coordinate279 = browser.currentScene.createNode("Coordinate");
Coordinate279.point = new MFVec3f(new float[0.615,-0.6885,1.418,-0.2519,-0.7698,1.606,0.894,-4.14,1.405,0.2357,-4.221,1.472,0.7106,-2.848,1.537,-0.2913,-2.795,1.561,0.3511,-0.9723,-1.085,-0.332,-1.036,-1.083,0.6255,-3.82,-1.576,0.076,-3.93,-1.587,0.5517,-2.055,-1.417,-0.1089,-2.163,-1.46,0.0149,-3.564,0.866,-0.0687,-3.436,-0.8707,0.9147,-4.192,-0.1153,0.2445,-4.253,-0.1554,0.7883,-4.028,-0.9461,0.1878,-4.111,-0.9619,-0.1749,-2.558,2.351,0.5105,-2.795,2.344,-0.1613,-2.264,1.005,0.8473,-3.286,-0.8304,0.9399,-2.17,-0.0115,0.979,-3.369,-0.052,-0.4715,-0.9186,0.2017,0.7286,-0.8328,0.1541,-0.1459,-2.365,0.1498,-0.0501,-3.575,-0.0433,0.969,-2.127,0.9718,0.9825,-3.348,0.8866,0.0909,-3.383,1.556,0.8371,-3.169,1.547,0.041,-3.318,-1.568,0.5921,-3.194,-1.578,-0.2264,-2.304,-0.7602,0.8375,-2.137,-0.8044,-0.2818,0.1713,1.187,0.2277,0.2301,1.179,0.2277,0.4881,0.2572,0.1331,0.2707,-0.6889,-0.3764,0.2118,-0.6809,-0.4614,0.4054,0.2565,0.9242,-4.241,0.7847,0.2647,-4.324,0.8047,-0.3043,-1.534,2.164,0.8425,-1.789,2.123,-0.201,-0.4603,1.254,0.3856,-0.405,1.248,0.4965,-0.283,0.2553,0.2563,-0.4079,-0.7647,-0.3314,-0.4586,-0.758,-0.3822,-0.3913,0.2697,-0.4485,-1.891,1.52,0.3893,-2.936,1.555,0.7623,-1.12,1.731]);
IndexedFaceSet278.coord = Coordinate279;

let TextureCoordinate280 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate280.point = new MFVec2f(new float[0.4538,0.6821,0.4536,0.6827,0.4366,0.6851,0.4365,0.6843,0.4719,0.6661,0.4711,0.6637,0.4639,0.67,0.4606,0.6487,0.4605,0.6507,0.4603,0.6538,0.4606,0.6529,0.4117,0.6708,0.4117,0.6714,0.4055,0.6612,0.4047,0.6602,0.4025,0.6505,0.4027,0.6493,0.4177,0.6589,0.4355,0.6719,0.431,0.6469,0.4157,0.6482,0.414,0.6419,0.4289,0.6406,0.4346,0.6727,0.4316,0.6601,0.4169,0.6604,0.4607,0.6543,0.4504,0.6593,0.4308,0.6489,0.4498,0.6605,0.4482,0.6491,0.4143,0.6427,0.4297,0.6411,0.4754,0.6565,0.4752,0.6543,0.4024,0.6436,0.4026,0.6446,0.4463,0.6407,0.4467,0.6399,0.4164,0.6496,0.419,0.6831,0.4192,0.6825,0.4346,0.6583,0.4478,0.647,0.4591,0.6409,0.4581,0.6741,0.4578,0.6416,0.4616,0.6733,0.4549,0.6767,0.455,0.6762,0.4365,0.6779,0.4176,0.6767,0.4177,0.6762,0.4368,0.6768,0.46,0.6628]);
IndexedFaceSet278.texCoord = TextureCoordinate280;

Shape274.geometry = IndexedFaceSet278;

Transform273.child = new undefined();

Transform273.child[0] = Shape274;

HAnimSegment272.children = new MFNode();

HAnimSegment272.children[0] = Transform273;

HAnimJoint271.children = new MFNode();

HAnimJoint271.children[0] = HAnimSegment272;

let HAnimJoint281 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint281.name = "l_carpometacarpal_1";
HAnimJoint281.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint281.center = new SFVec3f(new float[8.205,29.6,1.302]);
HAnimJoint281.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint281.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment282 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment282.name = "l_metacarpal_1";
HAnimSegment282.DEF = "hanim_l_metacarpal_1";
let Transform283 = browser.currentScene.createNode("Transform");
Transform283.translation = new SFVec3f(new float[8.205,29.6,1.302]);
let Shape284 = browser.currentScene.createNode("Shape");
let Appearance285 = browser.currentScene.createNode("Appearance");
let Material286 = browser.currentScene.createNode("Material");
Material286.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance285.material = Material286;

let ImageTexture287 = browser.currentScene.createNode("ImageTexture");
ImageTexture287.USE = "JinLOA2TextureAtlas";
Appearance285.texture = ImageTexture287;

Shape284.appearance = Appearance285;

let IndexedFaceSet288 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet288.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1]);
IndexedFaceSet288.creaseAngle = 3.14159;
IndexedFaceSet288.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1]);
let Coordinate289 = browser.currentScene.createNode("Coordinate");
Coordinate289.point = new MFVec3f(new float[-0.375,-0.9214,0.322,-0.212,-1.009,0.0858,-0.1385,-0.9095,0.5036,0.0245,-0.9973,0.2674,-0.533,-0.8014,0.1471,-0.4779,-0.7267,0.4605,-0.2413,-0.7148,0.6421,0.0584,-0.7717,0.6012,0.2213,-0.8595,0.365,0.1662,-0.9342,0.0516,-0.0704,-0.9461,-0.13,-0.3701,-0.8892,-0.0891,-0.4847,-0.0791,-0.0791,-0.4228,0.0048,0.2724,-0.1414,0.0189,0.4885,0.1948,-0.0449,0.4426,0.3887,-0.1493,0.1616,0.3268,-0.2331,-0.1899,0.0453,-0.2473,-0.406,-0.2908,-0.1835,-0.3601,-0.5058,0.0372,-0.1235,-0.4385,0.1283,0.2586,-0.1325,0.1437,0.4936,0.233,0.0743,0.4437,0.4438,-0.0392,0.1381,0.3765,-0.1303,-0.244,0.0705,-0.1457,-0.479,-0.2949,-0.0763,-0.4291,-0.3497,0.1392,-0.1192,-0.3021,0.2036,0.1511,-0.0857,0.2145,0.3172,0.1727,0.1654,0.2819,0.3218,0.0852,0.0659,0.2742,0.0207,-0.2044,0.0578,0.0098,-0.3705,-0.2006,0.0589,-0.3352,-0.0069,0.159,-0.0407]);
IndexedFaceSet288.coord = Coordinate289;

let TextureCoordinate290 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate290.point = new MFVec2f(new float[0.469,0.6546,0.4646,0.6538,0.4679,0.6539,0.4723,0.6548,0.4715,0.6565,0.4657,0.6558,0.4749,0.6566,0.4741,0.6561,0.4697,0.6552,0.4639,0.6545,0.4606,0.6544,0.4613,0.655,0.468,0.6634,0.4615,0.6626,0.472,0.6635,0.4712,0.6629,0.466,0.6619,0.4595,0.6611,0.4555,0.661,0.4563,0.6616,0.4678,0.6645,0.4607,0.6637,0.4721,0.6647,0.4712,0.664,0.4655,0.6629,0.4585,0.6621,0.4541,0.6619,0.455,0.6626,0.4658,0.6652,0.4608,0.6646,0.4689,0.6653,0.4682,0.6649,0.4642,0.6641,0.4592,0.6635,0.4561,0.6634,0.4568,0.6639,0.4622,0.6648]);
IndexedFaceSet288.texCoord = TextureCoordinate290;

Shape284.geometry = IndexedFaceSet288;

Transform283.child = new undefined();

Transform283.child[0] = Shape284;

HAnimSegment282.children = new MFNode();

HAnimSegment282.children[0] = Transform283;

HAnimJoint281.children = new MFNode();

HAnimJoint281.children[0] = HAnimSegment282;

let HAnimJoint291 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint291.name = "l_metacarpophalangeal_1";
HAnimJoint291.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint291.center = new SFVec3f(new float[8.08,28.73,1.55]);
HAnimJoint291.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint291.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment292 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment292.name = "l_carpal_proximal_phalanx_1";
HAnimSegment292.DEF = "hanim_l_carpal_proximal_phalanx_1";
let Transform293 = browser.currentScene.createNode("Transform");
Transform293.translation = new SFVec3f(new float[8.08,28.73,1.55]);
let Shape294 = browser.currentScene.createNode("Shape");
let Appearance295 = browser.currentScene.createNode("Appearance");
let Material296 = browser.currentScene.createNode("Material");
Material296.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance295.material = Material296;

let ImageTexture297 = browser.currentScene.createNode("ImageTexture");
ImageTexture297.USE = "JinLOA2TextureAtlas";
Appearance295.texture = ImageTexture297;

Shape294.appearance = Appearance295;

let IndexedFaceSet298 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet298.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1]);
IndexedFaceSet298.creaseAngle = 3.14159;
IndexedFaceSet298.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1]);
let Coordinate299 = browser.currentScene.createNode("Coordinate");
Coordinate299.point = new MFVec3f(new float[-0.5258,-1.001,0.2196,-0.3901,-1.074,0.023,-0.3376,-1.029,0.3799,-0.2019,-1.102,0.1833,-0.6244,-0.8415,0.0751,-0.585,-0.8078,0.3428,-0.3968,-0.8361,0.503,-0.1539,-0.912,0.4758,-0.0182,-0.985,0.2792,-0.0576,-1.019,0.0115,-0.2458,-0.9905,-0.1487,-0.4887,-0.9145,-0.1215,-0.4357,-0.0607,-0.0712,-0.3915,-0.0229,0.229,-0.1676,-0.0565,0.4196,0.1048,-0.1417,0.3891,0.2662,-0.2286,0.1552,0.222,-0.2663,-0.1451,-0.0018,-0.2328,-0.3357,-0.2743,-0.1476,-0.3051,-0.4293,0.0682,-0.1026,-0.3812,0.1092,0.2242,-0.1376,0.0727,0.4317,0.1589,-0.02,0.3984,0.3346,-0.1146,0.1438,0.2865,-0.1556,-0.1829,0.0429,-0.1191,-0.3904,-0.2536,-0.0264,-0.3572,-0.2801,0.1629,-0.0879,-0.2461,0.1919,0.1432,-0.0738,0.1661,0.2899,0.1359,0.1005,0.2664,0.2601,0.0337,0.0864,0.2261,0.0046,-0.1447,0.0538,0.0304,-0.2914,-0.1558,0.096,-0.2679,0.0055,0.1486,-0.0096]);
IndexedFaceSet298.coord = Coordinate299;

let TextureCoordinate300 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate300.point = new MFVec2f(new float[0.4716,0.6458,0.468,0.6451,0.471,0.6448,0.4746,0.6455,0.4739,0.6476,0.469,0.6473,0.4769,0.6473,0.4764,0.6466,0.4727,0.6459,0.4678,0.6456,0.4648,0.6459,0.4653,0.6466,0.4718,0.655,0.4662,0.6546,0.4753,0.6546,0.4748,0.6538,0.4704,0.653,0.4649,0.6527,0.4613,0.653,0.4619,0.6538,0.4717,0.6562,0.4657,0.6558,0.4756,0.6559,0.475,0.655,0.4702,0.6541,0.4642,0.6537,0.4603,0.654,0.4609,0.6549,0.4702,0.657,0.4659,0.6567,0.4729,0.6567,0.4725,0.6561,0.4692,0.6555,0.4649,0.6552,0.4622,0.6555,0.4626,0.6561,0.4674,0.6566]);
IndexedFaceSet298.texCoord = TextureCoordinate300;

Shape294.geometry = IndexedFaceSet298;

Transform293.child = new undefined();

Transform293.child[0] = Shape294;

HAnimSegment292.children = new MFNode();

HAnimSegment292.children[0] = Transform293;

HAnimJoint291.children = new MFNode();

HAnimJoint291.children[0] = HAnimSegment292;

let HAnimJoint301 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint301.name = "l_carpal_interphalangeal_1";
HAnimJoint301.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint301.center = new SFVec3f(new float[7.832,27.85,1.735]);
HAnimJoint301.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint301.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment302 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment302.name = "l_carpal_distal_phalanx_1";
HAnimSegment302.DEF = "hanim_l_carpal_distal_phalanx_1";
let Transform303 = browser.currentScene.createNode("Transform");
Transform303.translation = new SFVec3f(new float[7.832,27.85,1.735]);
let Shape304 = browser.currentScene.createNode("Shape");
let Appearance305 = browser.currentScene.createNode("Appearance");
let Material306 = browser.currentScene.createNode("Material");
Material306.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance305.material = Material306;

let ImageTexture307 = browser.currentScene.createNode("ImageTexture");
ImageTexture307.USE = "JinLOA2TextureAtlas";
Appearance305.texture = ImageTexture307;

Shape304.appearance = Appearance305;

let IndexedFaceSet308 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet308.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1]);
IndexedFaceSet308.creaseAngle = 3.14159;
IndexedFaceSet308.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1]);
let Coordinate309 = browser.currentScene.createNode("Coordinate");
Coordinate309.point = new MFVec3f(new float[-0.5817,-0.8003,0.0727,-0.4584,-0.8658,-0.106,-0.4372,-0.8552,0.2109,-0.314,-0.9207,0.0322,-0.6359,-0.6464,-0.0377,-0.62,-0.6384,0.2,-0.4756,-0.6933,0.3382,-0.2748,-0.7836,0.3078,-0.1516,-0.8492,0.1291,-0.1675,-0.8572,-0.1085,-0.3119,-0.8023,-0.2467,-0.5127,-0.712,-0.2163,-0.374,-0.0036,-0.0838,-0.3562,0.0054,0.1827,-0.1843,-0.0599,0.3471,0.0408,-0.1612,0.313,0.1875,-0.2392,0.1004,0.1697,-0.2482,-0.1661,-0.0022,-0.1829,-0.3305,-0.2274,-0.0816,-0.2964,-0.2142,0.1671,-0.0744,-0.2005,0.174,0.1306,-0.0683,0.1238,0.257,0.1048,0.0459,0.2308,0.2176,-0.0141,0.0673,0.2039,-0.021,-0.1376,0.0717,0.0292,-0.264,-0.1014,0.1072,-0.2378,0.0214,0.1175,-0.006]);
IndexedFaceSet308.coord = Coordinate309;

let TextureCoordinate310 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate310.point = new MFVec2f(new float[0.4723,0.6394,0.469,0.6388,0.4716,0.6383,0.4749,0.6389,0.4747,0.6409,0.4703,0.6408,0.4773,0.6404,0.4767,0.6395,0.4734,0.6389,0.469,0.6389,0.4664,0.6394,0.467,0.6402,0.4744,0.647,0.4694,0.6469,0.4774,0.6463,0.4768,0.6454,0.4729,0.6447,0.4679,0.6446,0.4649,0.6452,0.4655,0.6461,0.4734,0.6485,0.4696,0.6485,0.4758,0.6481,0.4753,0.6473,0.4722,0.6468,0.4684,0.6467,0.4661,0.6472,0.4666,0.6479,0.4709,0.648]);
IndexedFaceSet308.texCoord = TextureCoordinate310;

Shape304.geometry = IndexedFaceSet308;

Transform303.child = new undefined();

Transform303.child[0] = Shape304;

HAnimSegment302.children = new MFNode();

HAnimSegment302.children[0] = Transform303;

HAnimJoint301.children = new MFNode();

HAnimJoint301.children[0] = HAnimSegment302;

HAnimJoint291.children[1] = HAnimJoint301;

HAnimJoint281.children[1] = HAnimJoint291;

HAnimJoint271.children[1] = HAnimJoint281;

let HAnimJoint311 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint311.name = "l_carpometacarpal_2";
HAnimJoint311.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint311.center = new SFVec3f(new float[8.376,28.549999,0.5997]);
HAnimJoint311.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint311.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment312 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment312.name = "l_metacarpal_2";
HAnimSegment312.DEF = "hanim_l_metacarpal_2";
let Transform313 = browser.currentScene.createNode("Transform");
Transform313.translation = new SFVec3f(new float[8.376,28.549999,0.5997]);
let Shape314 = browser.currentScene.createNode("Shape");
let Appearance315 = browser.currentScene.createNode("Appearance");
let Material316 = browser.currentScene.createNode("Material");
Material316.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance315.material = Material316;

let ImageTexture317 = browser.currentScene.createNode("ImageTexture");
ImageTexture317.USE = "JinLOA2TextureAtlas";
Appearance315.texture = ImageTexture317;

Shape314.appearance = Appearance315;

let IndexedFaceSet318 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet318.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1]);
IndexedFaceSet318.creaseAngle = 3.14159;
IndexedFaceSet318.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1]);
let Coordinate319 = browser.currentScene.createNode("Coordinate");
Coordinate319.point = new MFVec3f(new float[-0.0229,-1.485,0.1659,-0.0277,-1.493,-0.0662,0.2213,-1.467,0.1625,0.2166,-1.475,-0.0696,-0.2194,-1.321,0.162,-0.0326,-1.302,0.3335,0.2116,-1.284,0.3301,0.3912,-1.276,0.1535,0.3864,-1.284,-0.0786,0.1997,-1.303,-0.2501,-0.0446,-1.321,-0.2467,-0.2242,-1.329,-0.0701,-0.3384,-0.3382,0.1488,-0.1289,-0.3166,0.3412,0.1617,-0.2951,0.3371,0.3631,-0.2862,0.139,0.3574,-0.2953,-0.1371,0.148,-0.3169,-0.3295,-0.1426,-0.3384,-0.3254,-0.3441,-0.3473,-0.1273,-0.3796,-0.1843,0.1553,-0.1523,-0.1608,0.364,0.1629,-0.1375,0.3596,0.3814,-0.1279,0.1446,0.3753,-0.1377,-0.1549,0.148,-0.1611,-0.3636,-0.1672,-0.1845,-0.3592,-0.3858,-0.1941,-0.1442,-0.2808,-0.0217,0.1042,-0.1201,-0.0051,0.2518,0.1029,0.0114,0.2486,0.2574,0.0182,0.0967,0.253,0.0113,-0.1151,0.0923,-0.0053,-0.2627,-0.1306,-0.0218,-0.2596,-0.2851,-0.0286,-0.1076,-0.0187,0.0593,-0.0078]);
IndexedFaceSet318.coord = Coordinate319;

let TextureCoordinate320 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate320.point = new MFVec2f(new float[0.453,0.6387,0.4487,0.6387,0.4487,0.6388,0.453,0.6389,0.4561,0.6405,0.453,0.6403,0.4561,0.6406,0.4528,0.6407,0.4485,0.6406,0.4453,0.6405,0.4454,0.6403,0.4487,0.6402,0.4563,0.6497,0.4527,0.6495,0.4562,0.6499,0.4525,0.65,0.4474,0.6499,0.4439,0.6497,0.4439,0.6495,0.4476,0.6494,0.4567,0.6512,0.4528,0.651,0.4566,0.6514,0.4526,0.6515,0.4471,0.6514,0.4432,0.6512,0.4433,0.651,0.4473,0.6509,0.4546,0.6527,0.4519,0.6525,0.4546,0.6528,0.4518,0.6529,0.4478,0.6528,0.4451,0.6527,0.4452,0.6525,0.448,0.6524,0.4498,0.6533]);
IndexedFaceSet318.texCoord = TextureCoordinate320;

Shape314.geometry = IndexedFaceSet318;

Transform313.child = new undefined();

Transform313.child[0] = Shape314;

HAnimSegment312.children = new MFNode();

HAnimSegment312.children[0] = Transform313;

HAnimJoint311.children = new MFNode();

HAnimJoint311.children[0] = HAnimSegment312;

let HAnimJoint321 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint321.name = "l_metacarpophalangeal_2";
HAnimJoint321.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint321.center = new SFVec3f(new float[8.52,27.24,0.6551]);
HAnimJoint321.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint321.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment322 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment322.name = "l_carpal_proximal_phalanx_2";
HAnimSegment322.DEF = "hanim_l_carpal_proximal_phalanx_2";
let Transform323 = browser.currentScene.createNode("Transform");
Transform323.translation = new SFVec3f(new float[8.52,27.24,0.6551]);
let Shape324 = browser.currentScene.createNode("Shape");
let Appearance325 = browser.currentScene.createNode("Appearance");
let Material326 = browser.currentScene.createNode("Material");
Material326.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance325.material = Material326;

let ImageTexture327 = browser.currentScene.createNode("ImageTexture");
ImageTexture327.USE = "JinLOA2TextureAtlas";
Appearance325.texture = ImageTexture327;

Shape324.appearance = Appearance325;

let IndexedFaceSet328 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet328.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1]);
IndexedFaceSet328.creaseAngle = 3.14159;
IndexedFaceSet328.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1]);
let Coordinate329 = browser.currentScene.createNode("Coordinate");
Coordinate329.point = new MFVec3f(new float[-0.2499,-1.331,0.1644,-0.2541,-1.339,-0.0655,-0.0349,-1.351,0.1633,-0.0391,-1.359,-0.0666,-0.3958,-1.152,0.159,-0.2314,-1.162,0.3307,-0.0165,-1.182,0.3296,0.1416,-1.203,0.1563,0.1374,-1.21,-0.0736,-0.0269,-1.201,-0.2453,-0.2419,-1.181,-0.2442,-0.4,-1.16,-0.0709,-0.3504,-0.2375,0.1465,-0.166,-0.2482,0.3391,0.0897,-0.2722,0.3377,0.267,-0.2955,0.1434,0.2621,-0.3044,-0.1302,0.0777,-0.2937,-0.3227,-0.1781,-0.2697,-0.3214,-0.3554,-0.2464,-0.127,-0.3661,-0.0905,0.1542,-0.1642,-0.1021,0.365,0.1159,-0.1284,0.3636,0.3101,-0.1539,0.1508,0.3046,-0.1637,-0.1488,0.1027,-0.152,-0.3596,-0.1774,-0.1258,-0.3581,-0.3715,-0.1003,-0.1453,-0.2544,0.0426,0.1044,-0.1117,0.0344,0.2535,0.0864,0.0158,0.2525,0.2237,-0.0022,0.102,0.2198,-0.0091,-0.1098,0.077,-0.0009,-0.2589,-0.121,0.0177,-0.2579,-0.2583,0.0357,-0.1074,-0.0117,0.0763,-0.005]);
IndexedFaceSet328.coord = Coordinate329;

let TextureCoordinate330 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate330.point = new MFVec2f(new float[0.454,0.6279,0.4498,0.6279,0.4498,0.6277,0.454,0.6277,0.4571,0.6295,0.4539,0.6296,0.4571,0.6293,0.4539,0.6291,0.4496,0.6291,0.4464,0.6292,0.4465,0.6294,0.4497,0.6295,0.4573,0.6381,0.4537,0.6382,0.4572,0.6379,0.4536,0.6377,0.4486,0.6376,0.445,0.6377,0.445,0.6379,0.4486,0.6381,0.4578,0.6395,0.4538,0.6396,0.4577,0.6392,0.4538,0.639,0.4482,0.6389,0.4443,0.639,0.4444,0.6393,0.4483,0.6395,0.4557,0.6408,0.4529,0.6408,0.4557,0.6406,0.4529,0.6404,0.449,0.6404,0.4462,0.6404,0.4462,0.6406,0.449,0.6408,0.4509,0.6412]);
IndexedFaceSet328.texCoord = TextureCoordinate330;

Shape324.geometry = IndexedFaceSet328;

Transform323.child = new undefined();

Transform323.child[0] = Shape324;

HAnimSegment322.children = new MFNode();

HAnimSegment322.children[0] = Transform323;

HAnimJoint321.children = new MFNode();

HAnimJoint321.children[0] = HAnimSegment322;

let HAnimJoint331 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint331.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint331.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint331.center = new SFVec3f(new float[8.45,26.1,0.6956]);
HAnimJoint331.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint331.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment332 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment332.name = "l_carpal_middle_phalanx_2";
HAnimSegment332.DEF = "hanim_l_carpal_middle_phalanx_2";
let Transform333 = browser.currentScene.createNode("Transform");
Transform333.translation = new SFVec3f(new float[8.45,26.1,0.6956]);
let Shape334 = browser.currentScene.createNode("Shape");
let Appearance335 = browser.currentScene.createNode("Appearance");
let Material336 = browser.currentScene.createNode("Material");
Material336.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance335.material = Material336;

let ImageTexture337 = browser.currentScene.createNode("ImageTexture");
ImageTexture337.USE = "JinLOA2TextureAtlas";
Appearance335.texture = ImageTexture337;

Shape334.appearance = Appearance335;

let IndexedFaceSet338 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet338.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1]);
IndexedFaceSet338.creaseAngle = 3.14159;
IndexedFaceSet338.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1]);
let Coordinate339 = browser.currentScene.createNode("Coordinate");
Coordinate339.point = new MFVec3f(new float[-0.4479,-1.125,0.1554,-0.4519,-1.132,-0.0632,-0.2499,-1.18,0.1557,-0.2539,-1.187,-0.0629,-0.5544,-0.9319,0.1491,-0.4029,-0.9674,0.3134,-0.2049,-1.022,0.3137,-0.0594,-1.068,0.1499,-0.0634,-1.075,-0.0687,-0.2149,-1.04,-0.2329,-0.4129,-0.9852,-0.2333,-0.5584,-0.939,-0.0695,-0.3333,-0.0803,0.1251,-0.1781,-0.1166,0.2933,0.037,-0.1758,0.2937,0.186,-0.2231,0.1259,0.1817,-0.2308,-0.1116,0.0265,-0.1945,-0.2799,-0.1886,-0.1353,-0.2802,-0.3376,-0.088,-0.1125,-0.2019,0.1709,0.088,-0.0815,0.1427,0.2185,0.0854,0.0967,0.2188,0.2011,0.06,0.0887,0.1977,0.054,-0.0957,0.0773,0.0822,-0.2262,-0.0896,0.1281,-0.2265,-0.2053,0.1648,-0.0963,0.0132,0.1679,-0.006]);
IndexedFaceSet338.coord = Coordinate339;

let TextureCoordinate340 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate340.point = new MFVec2f(new float[0.4546,0.6191,0.4506,0.619,0.4506,0.6185,0.4546,0.6186,0.4575,0.6206,0.4545,0.6209,0.4576,0.6201,0.4545,0.6196,0.4505,0.6196,0.4474,0.6199,0.4474,0.6204,0.4505,0.6209,0.4572,0.6286,0.4541,0.6289,0.4572,0.628,0.4541,0.6276,0.4497,0.6275,0.4466,0.6279,0.4465,0.6284,0.4497,0.6289,0.4558,0.631,0.4534,0.6313,0.4558,0.6306,0.4534,0.6302,0.45,0.6302,0.4475,0.6305,0.4475,0.6309,0.45,0.6312,0.4516,0.6313]);
IndexedFaceSet338.texCoord = TextureCoordinate340;

Shape334.geometry = IndexedFaceSet338;

Transform333.child = new undefined();

Transform333.child[0] = Shape334;

HAnimSegment332.children = new MFNode();

HAnimSegment332.children[0] = Transform333;

HAnimJoint331.children = new MFNode();

HAnimJoint331.children[0] = HAnimSegment332;

let HAnimJoint341 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint341.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint341.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint341.center = new SFVec3f(new float[8.192,25.17,0.7315]);
HAnimJoint341.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint341.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment342 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment342.name = "l_carpal_distal_phalanx_2";
HAnimSegment342.DEF = "hanim_l_carpal_distal_phalanx_2";
let Transform343 = browser.currentScene.createNode("Transform");
Transform343.translation = new SFVec3f(new float[8.192,25.17,0.7315]);
let Shape344 = browser.currentScene.createNode("Shape");
let Appearance345 = browser.currentScene.createNode("Appearance");
let Material346 = browser.currentScene.createNode("Material");
Material346.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance345.material = Material346;

let ImageTexture347 = browser.currentScene.createNode("ImageTexture");
ImageTexture347.USE = "JinLOA2TextureAtlas";
Appearance345.texture = ImageTexture347;

Shape344.appearance = Appearance345;

let IndexedFaceSet348 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet348.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1]);
IndexedFaceSet348.creaseAngle = 3.14159;
IndexedFaceSet348.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1]);
let Coordinate349 = browser.currentScene.createNode("Coordinate");
Coordinate349.point = new MFVec3f(new float[-0.6187,-1.071,0.1411,-0.6221,-1.077,-0.0485,-0.4578,-1.147,0.1426,-0.4613,-1.153,-0.047,-0.6714,-0.8704,0.1341,-0.5482,-0.923,0.2774,-0.3873,-0.9993,0.2789,-0.2693,-1.061,0.1378,-0.2727,-1.067,-0.0518,-0.396,-1.015,-0.1951,-0.5568,-0.9385,-0.1966,-0.6749,-0.8765,-0.0555,-0.3236,-0.0612,0.1191,-0.1854,-0.1202,0.2799,0.006,-0.211,0.2816,0.1384,-0.2805,0.1233,0.1343,-0.2879,-0.1023,-0.004,-0.2288,-0.263,-0.1953,-0.138,-0.2647,-0.3277,-0.0685,-0.1065,-0.2135,0.0836,0.0963,-0.0945,0.035,0.233,0.0723,-0.0325,0.2317,0.1865,-0.0807,0.0968,0.1843,-0.0816,-0.0912,0.0691,-0.0336,-0.2249,-0.0937,0.0356,-0.2277,-0.2116,0.0844,-0.0958,0.0314,0.0875,-0.0035]);
IndexedFaceSet348.coord = Coordinate349;

let TextureCoordinate350 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate350.point = new MFVec2f(new float[0.455,0.6109,0.4515,0.6108,0.4515,0.6101,0.455,0.6102,0.4575,0.6123,0.4549,0.6128,0.4576,0.6116,0.455,0.611,0.4514,0.6109,0.4488,0.6114,0.4488,0.6121,0.4514,0.6127,0.4576,0.6198,0.4546,0.6204,0.4576,0.619,0.4547,0.6183,0.4505,0.6182,0.4475,0.6188,0.4475,0.6197,0.4504,0.6203,0.4567,0.6213,0.4542,0.6217,0.4567,0.6206,0.4542,0.6202,0.4507,0.6202,0.4482,0.6206,0.4482,0.6213,0.4506,0.6217,0.4523,0.6218]);
IndexedFaceSet348.texCoord = TextureCoordinate350;

Shape344.geometry = IndexedFaceSet348;

Transform343.child = new undefined();

Transform343.child[0] = Shape344;

HAnimSegment342.children = new MFNode();

HAnimSegment342.children[0] = Transform343;

HAnimJoint341.children = new MFNode();

HAnimJoint341.children[0] = HAnimSegment342;

HAnimJoint331.children[1] = HAnimJoint341;

HAnimJoint321.children[1] = HAnimJoint331;

HAnimJoint311.children[1] = HAnimJoint321;

HAnimJoint271.children[2] = HAnimJoint311;

let HAnimJoint351 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint351.name = "l_carpometacarpal_3";
HAnimJoint351.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint351.center = new SFVec3f(new float[8.344,28.65,-0.194]);
HAnimJoint351.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint351.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment352 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment352.name = "l_metacarpal_3";
HAnimSegment352.DEF = "hanim_l_metacarpal_3";
let Transform353 = browser.currentScene.createNode("Transform");
Transform353.translation = new SFVec3f(new float[8.344,28.65,-0.194]);
let Shape354 = browser.currentScene.createNode("Shape");
let Appearance355 = browser.currentScene.createNode("Appearance");
let Material356 = browser.currentScene.createNode("Material");
Material356.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance355.material = Material356;

let ImageTexture357 = browser.currentScene.createNode("ImageTexture");
ImageTexture357.USE = "JinLOA2TextureAtlas";
Appearance355.texture = ImageTexture357;

Shape354.appearance = Appearance355;

let IndexedFaceSet358 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet358.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1]);
IndexedFaceSet358.creaseAngle = 3.14159;
IndexedFaceSet358.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1]);
let Coordinate359 = browser.currentScene.createNode("Coordinate");
Coordinate359.point = new MFVec3f(new float[0.0157,-1.601,0.0972,0.0217,-1.599,-0.1348,0.2598,-1.581,0.1076,0.2658,-1.578,-0.1245,-0.183,-1.427,0.091,-0.0045,-1.414,0.2728,0.2395,-1.393,0.2832,0.4271,-1.376,0.1169,0.4331,-1.374,-0.1151,0.2546,-1.387,-0.2969,0.0105,-1.408,-0.3073,-0.177,-1.425,-0.1411,-0.3164,-0.3793,0.1197,-0.1161,-0.3643,0.3236,0.1742,-0.3403,0.3359,0.3846,-0.3213,0.1495,0.3918,-0.3185,-0.1266,0.1915,-0.3335,-0.3306,-0.0988,-0.3575,-0.3429,-0.3092,-0.3765,-0.1564,-0.3602,-0.2157,0.1315,-0.143,-0.1995,0.3527,0.172,-0.1734,0.3661,0.4003,-0.1528,0.1638,0.408,-0.1498,-0.1357,0.1908,-0.166,-0.357,-0.1242,-0.1921,-0.3703,-0.3524,-0.2126,-0.168,-0.2615,-0.0399,0.0937,-0.1079,-0.0284,0.2501,0.1148,-0.01,0.2596,0.2762,0.0046,0.1165,0.2817,0.0068,-0.0952,0.1281,-0.0047,-0.2517,-0.0946,-0.0232,-0.2611,-0.256,-0.0377,-0.1181,0.0044,0.0523,-0.0002]);
IndexedFaceSet358.coord = Coordinate359;

let TextureCoordinate360 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate360.point = new MFVec2f(new float[0.4371,0.6382,0.4328,0.6382,0.4329,0.6384,0.4372,0.6384,0.4403,0.64,0.4369,0.6398,0.4405,0.6401,0.4374,0.6403,0.4331,0.6403,0.4298,0.6402,0.4296,0.64,0.4326,0.6398,0.4413,0.6498,0.4375,0.6497,0.4415,0.65,0.438,0.6502,0.4329,0.6502,0.4291,0.6501,0.4289,0.6499,0.4324,0.6497,0.4418,0.6514,0.4377,0.6512,0.442,0.6516,0.4383,0.6518,0.4327,0.6518,0.4286,0.6517,0.4284,0.6514,0.4321,0.6512,0.4399,0.653,0.437,0.6529,0.4401,0.6531,0.4374,0.6533,0.4335,0.6533,0.4306,0.6532,0.4304,0.653,0.4331,0.6529,0.4352,0.6537]);
IndexedFaceSet358.texCoord = TextureCoordinate360;

Shape354.geometry = IndexedFaceSet358;

Transform353.child = new undefined();

Transform353.child[0] = Shape354;

HAnimSegment352.children = new MFNode();

HAnimSegment352.children[0] = Transform353;

HAnimJoint351.children = new MFNode();

HAnimJoint351.children[0] = HAnimSegment352;

let HAnimJoint361 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint361.name = "l_metacarpophalangeal_3";
HAnimJoint361.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint361.center = new SFVec3f(new float[8.52,27.26,-0.1959]);
HAnimJoint361.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint361.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment362 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment362.name = "l_carpal_proximal_phalanx_3";
HAnimSegment362.DEF = "hanim_l_carpal_proximal_phalanx_3";
let Transform363 = browser.currentScene.createNode("Transform");
Transform363.translation = new SFVec3f(new float[8.52,27.26,-0.1959]);
let Shape364 = browser.currentScene.createNode("Shape");
let Appearance365 = browser.currentScene.createNode("Appearance");
let Material366 = browser.currentScene.createNode("Material");
Material366.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance365.material = Material366;

let ImageTexture367 = browser.currentScene.createNode("ImageTexture");
ImageTexture367.USE = "JinLOA2TextureAtlas";
Appearance365.texture = ImageTexture367;

Shape364.appearance = Appearance365;

let IndexedFaceSet368 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet368.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1]);
IndexedFaceSet368.creaseAngle = 3.14159;
IndexedFaceSet368.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1]);
let Coordinate369 = browser.currentScene.createNode("Coordinate");
Coordinate369.point = new MFVec3f(new float[-0.2259,-1.448,0.0923,-0.2194,-1.446,-0.1376,-0.0106,-1.469,0.1016,-0.0041,-1.467,-0.1283,-0.3742,-1.258,0.088,-0.2177,-1.275,0.2673,-0.0024,-1.296,0.2766,0.1639,-1.31,0.1112,0.1704,-1.307,-0.1187,0.0138,-1.29,-0.2981,-0.2014,-1.269,-0.3073,-0.3677,-1.255,-0.1419,-0.3422,-0.2825,0.1227,-0.1666,-0.302,0.3239,0.0895,-0.3267,0.3349,0.2761,-0.3422,0.1493,0.2838,-0.3394,-0.1242,0.1082,-0.3199,-0.3253,-0.1479,-0.2952,-0.3364,-0.3345,-0.2797,-0.1508,-0.3605,-0.1263,0.1367,-0.1681,-0.1476,0.357,0.1123,-0.1747,0.3691,0.3166,-0.1917,0.1659,0.3251,-0.1886,-0.1336,0.1327,-0.1672,-0.3539,-0.1477,-0.1401,-0.366,-0.352,-0.1232,-0.1627,-0.2486,0.0181,0.0994,-0.1126,0.003,0.2552,0.0857,-0.0161,0.2638,0.2302,-0.0281,0.1201,0.2362,-0.0259,-0.0917,0.1002,-0.0108,-0.2475,-0.0981,0.0083,-0.256,-0.2426,0.0203,-0.1123,-0.0014,0.0597,0.0048]);
IndexedFaceSet368.coord = Coordinate369;

let TextureCoordinate370 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate370.point = new MFVec2f(new float[0.4369,0.6266,0.4327,0.6266,0.4328,0.6264,0.4371,0.6264,0.4402,0.6282,0.4368,0.6283,0.4403,0.628,0.4373,0.6279,0.433,0.6279,0.4297,0.628,0.4295,0.6282,0.4326,0.6284,0.4412,0.6373,0.4375,0.6375,0.4414,0.6371,0.438,0.637,0.4329,0.637,0.4292,0.6372,0.429,0.6374,0.4324,0.6375,0.4418,0.6388,0.4378,0.639,0.4421,0.6385,0.4383,0.6384,0.4327,0.6384,0.4287,0.6386,0.4284,0.6389,0.4322,0.639,0.4399,0.6402,0.4371,0.6403,0.4401,0.64,0.4374,0.6399,0.4335,0.6399,0.4306,0.6401,0.4305,0.6402,0.4331,0.6404,0.4353,0.6407]);
IndexedFaceSet368.texCoord = TextureCoordinate370;

Shape364.geometry = IndexedFaceSet368;

Transform363.child = new undefined();

Transform363.child[0] = Shape364;

HAnimSegment362.children = new MFNode();

HAnimSegment362.children[0] = Transform363;

HAnimJoint361.children = new MFNode();

HAnimJoint361.children[0] = HAnimSegment362;

let HAnimJoint371 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint371.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint371.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint371.center = new SFVec3f(new float[8.477,26.07,-0.2214]);
HAnimJoint371.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint371.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment372 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment372.name = "l_carpal_middle_phalanx_3";
HAnimSegment372.DEF = "hanim_l_carpal_middle_phalanx_3";
let Transform373 = browser.currentScene.createNode("Transform");
Transform373.translation = new SFVec3f(new float[8.477,26.07,-0.2214]);
let Shape374 = browser.currentScene.createNode("Shape");
let Appearance375 = browser.currentScene.createNode("Appearance");
let Material376 = browser.currentScene.createNode("Material");
Material376.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance375.material = Material376;

let ImageTexture377 = browser.currentScene.createNode("ImageTexture");
ImageTexture377.USE = "JinLOA2TextureAtlas";
Appearance375.texture = ImageTexture377;

Shape374.appearance = Appearance375;

let IndexedFaceSet378 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet378.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1]);
IndexedFaceSet378.creaseAngle = 3.14159;
IndexedFaceSet378.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1]);
let Coordinate379 = browser.currentScene.createNode("Coordinate");
Coordinate379.point = new MFVec3f(new float[-0.4389,-1.268,0.089,-0.4327,-1.265,-0.1296,-0.2401,-1.325,0.0971,-0.234,-1.323,-0.1215,-0.5481,-1.062,0.0865,-0.4036,-1.106,0.2566,-0.2049,-1.164,0.2647,-0.0512,-1.205,0.1068,-0.045,-1.203,-0.1118,-0.1894,-1.158,-0.2818,-0.3882,-1.101,-0.2899,-0.5419,-1.059,-0.132,-0.3388,-0.1526,0.1159,-0.1909,-0.1984,0.2901,0.025,-0.2608,0.2989,0.1825,-0.3032,0.1372,0.1892,-0.3008,-0.1003,0.0412,-0.2549,-0.2744,-0.1747,-0.1925,-0.2833,-0.3321,-0.1501,-0.1216,-0.2096,0.117,0.0982,-0.0948,0.0814,0.2333,0.0727,0.033,0.2402,0.1949,0.0001,0.1147,0.2001,0.002,-0.0696,0.0853,0.0376,-0.2048,-0.0823,0.086,-0.2116,-0.2044,0.1189,-0.0861,0.0097,0.1188,0.0156]);
IndexedFaceSet378.coord = Coordinate379;

let TextureCoordinate380 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate380.point = new MFVec2f(new float[0.4364,0.617,0.4323,0.6171,0.4325,0.6165,0.4365,0.6165,0.4395,0.6186,0.4363,0.619,0.4397,0.618,0.4367,0.6176,0.4327,0.6176,0.4295,0.6181,0.4294,0.6186,0.4323,0.619,0.4401,0.6271,0.4369,0.6275,0.4403,0.6265,0.4373,0.6261,0.4329,0.6261,0.4297,0.6266,0.4295,0.6271,0.4325,0.6275,0.4391,0.6297,0.4366,0.6301,0.4392,0.6293,0.4369,0.629,0.4335,0.629,0.431,0.6293,0.4308,0.6298,0.4331,0.6301,0.435,0.6301]);
IndexedFaceSet378.texCoord = TextureCoordinate380;

Shape374.geometry = IndexedFaceSet378;

Transform373.child = new undefined();

Transform373.child[0] = Shape374;

HAnimSegment372.children = new MFNode();

HAnimSegment372.children[0] = Transform373;

HAnimJoint371.children = new MFNode();

HAnimJoint371.children[0] = HAnimSegment372;

let HAnimJoint381 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint381.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint381.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint381.center = new SFVec3f(new float[8.25,25.030001,-0.2187]);
HAnimJoint381.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint381.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment382 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment382.name = "l_carpal_distal_phalanx_3";
HAnimSegment382.DEF = "hanim_l_carpal_distal_phalanx_3";
let Transform383 = browser.currentScene.createNode("Transform");
Transform383.translation = new SFVec3f(new float[8.25,25.030001,-0.2187]);
let Shape384 = browser.currentScene.createNode("Shape");
let Appearance385 = browser.currentScene.createNode("Appearance");
let Material386 = browser.currentScene.createNode("Material");
Material386.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance385.material = Material386;

let ImageTexture387 = browser.currentScene.createNode("ImageTexture");
ImageTexture387.USE = "JinLOA2TextureAtlas";
Appearance385.texture = ImageTexture387;

Shape384.appearance = Appearance385;

let IndexedFaceSet388 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet388.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1]);
IndexedFaceSet388.creaseAngle = 3.14159;
IndexedFaceSet388.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1]);
let Coordinate389 = browser.currentScene.createNode("Coordinate");
Coordinate389.point = new MFVec3f(new float[-0.631,-1.169,0.0421,-0.6256,-1.167,-0.1475,-0.4691,-1.25,0.0483,-0.4637,-1.248,-0.1413,-0.6864,-0.9557,0.0421,-0.569,-1.018,0.1889,-0.4071,-1.099,0.1951,-0.2817,-1.158,0.0576,-0.2763,-1.156,-0.1319,-0.3937,-1.094,-0.2788,-0.5556,-1.013,-0.285,-0.681,-0.9537,-0.1474,-0.3504,-0.0919,0.0851,-0.2187,-0.1616,0.2498,-0.026,-0.2579,0.2572,0.1147,-0.3243,0.1029,0.121,-0.322,-0.1226,-0.0106,-0.2523,-0.2873,-0.2033,-0.156,-0.2946,-0.344,-0.0896,-0.1404,-0.2414,0.0637,0.0753,-0.128,0.0061,0.2155,0.0399,-0.0652,0.2197,0.161,-0.1101,0.0888,0.1675,-0.1027,-0.0988,0.0577,-0.0458,-0.2359,-0.106,0.0275,-0.2439,-0.2307,0.0733,-0.1162,0.0079,0.0731,-0.0112]);
IndexedFaceSet388.coord = Coordinate389;

let TextureCoordinate390 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate390.point = new MFVec2f(new float[0.4356,0.6082,0.4321,0.6082,0.4322,0.6074,0.4357,0.6074,0.4383,0.6096,0.4356,0.6102,0.4384,0.6088,0.4359,0.6083,0.4324,0.6083,0.4296,0.6089,0.4295,0.6096,0.4321,0.6102,0.4394,0.6176,0.4364,0.6183,0.4396,0.6167,0.4367,0.6161,0.4325,0.6161,0.4295,0.6168,0.4293,0.6177,0.4322,0.6183,0.4388,0.6192,0.4362,0.6198,0.4389,0.6186,0.4364,0.6181,0.433,0.6182,0.4304,0.6187,0.4303,0.6194,0.4326,0.6199,0.4346,0.6199]);
IndexedFaceSet388.texCoord = TextureCoordinate390;

Shape384.geometry = IndexedFaceSet388;

Transform383.child = new undefined();

Transform383.child[0] = Shape384;

HAnimSegment382.children = new MFNode();

HAnimSegment382.children[0] = Transform383;

HAnimJoint381.children = new MFNode();

HAnimJoint381.children[0] = HAnimSegment382;

HAnimJoint371.children[1] = HAnimJoint381;

HAnimJoint361.children[1] = HAnimJoint371;

HAnimJoint351.children[1] = HAnimJoint361;

HAnimJoint271.children[3] = HAnimJoint351;

let HAnimJoint391 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint391.name = "l_carpometacarpal_4";
HAnimJoint391.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint391.center = new SFVec3f(new float[8.339,28.57,-0.9243]);
HAnimJoint391.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint391.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment392 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment392.name = "l_metacarpal_4";
HAnimSegment392.DEF = "hanim_l_metacarpal_4";
let Transform393 = browser.currentScene.createNode("Transform");
Transform393.translation = new SFVec3f(new float[8.339,28.57,-0.9243]);
let Shape394 = browser.currentScene.createNode("Shape");
let Appearance395 = browser.currentScene.createNode("Appearance");
let Material396 = browser.currentScene.createNode("Material");
Material396.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance395.material = Material396;

let ImageTexture397 = browser.currentScene.createNode("ImageTexture");
ImageTexture397.USE = "JinLOA2TextureAtlas";
Appearance395.texture = ImageTexture397;

Shape394.appearance = Appearance395;

let IndexedFaceSet398 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet398.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1]);
IndexedFaceSet398.creaseAngle = 3.14159;
IndexedFaceSet398.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1]);
let Coordinate399 = browser.currentScene.createNode("Coordinate");
Coordinate399.point = new MFVec3f(new float[-0.014,-1.366,0.0295,-0.0298,-1.354,-0.1885,0.2211,-1.344,0.0143,0.2053,-1.332,-0.2037,-0.205,-1.209,0.0528,-0.0169,-1.202,0.2049,0.2182,-1.181,0.1897,0.3826,-1.156,0.0148,0.3668,-1.144,-0.2032,0.1787,-1.151,-0.3553,-0.0564,-1.172,-0.3401,-0.2209,-1.197,-0.1652,-0.3293,-0.2545,0.1423,-0.1183,-0.2468,0.3129,0.1614,-0.2216,0.2949,0.3458,-0.1936,0.0987,0.327,-0.1793,-0.1607,0.116,-0.187,-0.3313,-0.1637,-0.2122,-0.3132,-0.3482,-0.2402,-0.117,-0.3702,-0.1061,0.1656,-0.1412,-0.0977,0.3507,0.1622,-0.0704,0.3311,0.3623,-0.04,0.1183,0.3419,-0.0245,-0.1631,0.1129,-0.0329,-0.3482,-0.1905,-0.0602,-0.3286,-0.3906,-0.0905,-0.1158,-0.2788,0.0575,0.1279,-0.1169,0.0634,0.2588,0.0976,0.0827,0.2449,0.2391,0.1042,0.0944,0.2247,0.1152,-0.1045,0.0628,0.1093,-0.2354,-0.1518,0.0899,-0.2215,-0.2933,0.0685,-0.0711,-0.0325,0.1491,0.016]);
IndexedFaceSet398.coord = Coordinate399;

let TextureCoordinate400 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate400.point = new MFVec2f(new float[0.4223,0.6397,0.4182,0.6398,0.4179,0.64,0.422,0.6399,0.4255,0.6412,0.4227,0.6412,0.4252,0.6414,0.422,0.6417,0.418,0.6418,0.4151,0.6417,0.4154,0.6415,0.4187,0.6413,0.4275,0.6502,0.4244,0.6501,0.4272,0.6504,0.4235,0.6507,0.4187,0.6508,0.4156,0.6508,0.4159,0.6505,0.4196,0.6503,0.4282,0.6516,0.4248,0.6515,0.4279,0.6519,0.4239,0.6522,0.4187,0.6523,0.4153,0.6522,0.4156,0.652,0.4196,0.6517,0.4265,0.6531,0.4241,0.6531,0.4263,0.6533,0.4235,0.6535,0.4198,0.6536,0.4174,0.6536,0.4176,0.6534,0.4204,0.6532,0.422,0.6539]);
IndexedFaceSet398.texCoord = TextureCoordinate400;

Shape394.geometry = IndexedFaceSet398;

Transform393.child = new undefined();

Transform393.child[0] = Shape394;

HAnimSegment392.children = new MFNode();

HAnimSegment392.children[0] = Transform393;

HAnimJoint391.children = new MFNode();

HAnimJoint391.children[0] = HAnimSegment392;

let HAnimJoint401 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint401.name = "l_metacarpophalangeal_4";
HAnimJoint401.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint401.center = new SFVec3f(new float[8.428,27.299999,-0.9985]);
HAnimJoint401.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint401.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment402 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment402.name = "l_carpal_proximal_phalanx_4";
HAnimSegment402.DEF = "hanim_l_carpal_proximal_phalanx_4";
let Transform403 = browser.currentScene.createNode("Transform");
Transform403.translation = new SFVec3f(new float[8.428,27.299999,-0.9985]);
let Shape404 = browser.currentScene.createNode("Shape");
let Appearance405 = browser.currentScene.createNode("Appearance");
let Material406 = browser.currentScene.createNode("Material");
Material406.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance405.material = Material406;

let ImageTexture407 = browser.currentScene.createNode("ImageTexture");
ImageTexture407.USE = "JinLOA2TextureAtlas";
Appearance405.texture = ImageTexture407;

Shape404.appearance = Appearance405;

let IndexedFaceSet408 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet408.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1]);
IndexedFaceSet408.creaseAngle = 3.14159;
IndexedFaceSet408.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1]);
let Coordinate409 = browser.currentScene.createNode("Coordinate");
Coordinate409.point = new MFVec3f(new float[-0.1847,-1.253,0.0467,-0.1998,-1.241,-0.1693,0.0227,-1.271,0.0316,0.0076,-1.259,-0.1844,-0.3279,-1.08,0.0673,-0.161,-1.102,0.2179,0.0464,-1.12,0.2028,0.1906,-1.124,0.0295,0.1754,-1.112,-0.1865,0.0085,-1.09,-0.3372,-0.1989,-1.072,-0.3221,-0.3431,-1.068,-0.1487,-0.2967,-0.1902,0.1418,-0.1095,-0.215,0.3108,0.1373,-0.2358,0.2929,0.299,-0.2404,0.0984,0.281,-0.2262,-0.1586,0.0938,-0.2014,-0.3276,-0.153,-0.1807,-0.3096,-0.3147,-0.176,-0.1151,-0.3133,-0.0482,0.1642,-0.1083,-0.0753,0.3493,0.1619,-0.0981,0.3296,0.339,-0.1032,0.1167,0.3192,-0.0876,-0.1647,0.1142,-0.0605,-0.3498,-0.156,-0.0377,-0.3301,-0.3331,-0.0327,-0.1172,-0.2099,0.0863,0.1241,-0.0649,0.0671,0.255,0.1261,0.051,0.2411,0.2514,0.0474,0.0905,0.2374,0.0585,-0.1085,0.0924,0.0776,-0.2393,-0.0986,0.0937,-0.2254,-0.2239,0.0973,-0.0749,0.0182,0.1305,0.0112]);
IndexedFaceSet408.coord = Coordinate409;

let TextureCoordinate410 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate410.point = new MFVec2f(new float[0.4212,0.6288,0.4172,0.6289,0.4169,0.6288,0.4209,0.6287,0.4244,0.6302,0.4216,0.6304,0.4241,0.6301,0.4209,0.63,0.4169,0.6301,0.4141,0.6304,0.4144,0.6305,0.4176,0.6306,0.4261,0.6386,0.423,0.6388,0.4258,0.6384,0.4222,0.6383,0.4174,0.6385,0.4143,0.6387,0.4146,0.6389,0.4182,0.6389,0.4268,0.6399,0.4234,0.6401,0.4265,0.6397,0.4225,0.6396,0.4173,0.6398,0.4139,0.64,0.4142,0.6402,0.4182,0.6403,0.4251,0.6412,0.4226,0.6414,0.4248,0.6411,0.422,0.641,0.4183,0.6411,0.4159,0.6413,0.4162,0.6415,0.419,0.6415,0.4206,0.6418]);
IndexedFaceSet408.texCoord = TextureCoordinate410;

Shape404.geometry = IndexedFaceSet408;

Transform403.child = new undefined();

Transform403.child[0] = Shape404;

HAnimSegment402.children = new MFNode();

HAnimSegment402.children[0] = Transform403;

HAnimJoint401.children = new MFNode();

HAnimJoint401.children[0] = HAnimSegment402;

let HAnimJoint411 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint411.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint411.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint411.center = new SFVec3f(new float[8.428,26.290001,-1.034]);
HAnimJoint411.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint411.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment412 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment412.name = "l_carpal_middle_phalanx_4";
HAnimSegment412.DEF = "hanim_l_carpal_middle_phalanx_4";
let Transform413 = browser.currentScene.createNode("Transform");
Transform413.translation = new SFVec3f(new float[8.428,26.290001,-1.034]);
let Shape414 = browser.currentScene.createNode("Shape");
let Appearance415 = browser.currentScene.createNode("Appearance");
let Material416 = browser.currentScene.createNode("Material");
Material416.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance415.material = Material416;

let ImageTexture417 = browser.currentScene.createNode("ImageTexture");
ImageTexture417.USE = "JinLOA2TextureAtlas";
Appearance415.texture = ImageTexture417;

Shape414.appearance = Appearance415;

let IndexedFaceSet418 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet418.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1]);
IndexedFaceSet418.creaseAngle = 3.14159;
IndexedFaceSet418.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1]);
let Coordinate419 = browser.currentScene.createNode("Coordinate");
Coordinate419.point = new MFVec3f(new float[-0.412,-1.137,0.0335,-0.4261,-1.125,-0.1679,-0.2243,-1.187,0.0176,-0.2385,-1.176,-0.1838,-0.5153,-0.9493,0.0522,-0.3639,-0.9958,0.1913,-0.1762,-1.047,0.1754,-0.0461,-1.076,0.0125,-0.0602,-1.065,-0.1888,-0.2116,-1.019,-0.3279,-0.3992,-0.9679,-0.312,-0.5294,-0.9381,-0.1491,-0.3178,-0.1177,0.1,-0.1627,-0.1653,0.2425,0.0412,-0.2206,0.2252,0.1745,-0.2511,0.0583,0.1591,-0.239,-0.1604,0.0041,-0.1914,-0.3029,-0.1998,-0.1361,-0.2856,-0.3331,-0.1056,-0.1188,-0.1985,0.1307,0.0829,-0.0782,0.0937,0.1934,0.08,0.0508,0.18,0.1835,0.0271,0.0505,0.1716,0.0365,-0.1192,0.0513,0.0735,-0.2298,-0.1069,0.1164,-0.2164,-0.2104,0.1401,-0.0869,0.0002,0.1379,-0.0157]);
IndexedFaceSet418.coord = Coordinate419;

let TextureCoordinate420 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate420.point = new MFVec2f(new float[0.4203,0.6204,0.4166,0.6205,0.4163,0.62,0.42,0.6199,0.4232,0.6217,0.4207,0.6221,0.4229,0.6212,0.4199,0.6209,0.4162,0.621,0.4136,0.6215,0.4139,0.622,0.4169,0.6222,0.4242,0.6295,0.4215,0.6299,0.4239,0.629,0.4208,0.6287,0.4167,0.6288,0.4141,0.6293,0.4144,0.6298,0.4175,0.6301,0.4233,0.6319,0.4212,0.6323,0.423,0.6315,0.4206,0.6313,0.4175,0.6314,0.4154,0.6317,0.4157,0.6321,0.4181,0.6324,0.4194,0.6323]);
IndexedFaceSet418.texCoord = TextureCoordinate420;

Shape414.geometry = IndexedFaceSet418;

Transform413.child = new undefined();

Transform413.child[0] = Shape414;

HAnimSegment412.children = new MFNode();

HAnimSegment412.children[0] = Transform413;

HAnimJoint411.children = new MFNode();

HAnimJoint411.children[0] = HAnimSegment412;

let HAnimJoint421 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint421.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint421.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint421.center = new SFVec3f(new float[8.192,25.309999,-1.124]);
HAnimJoint421.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint421.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment422 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment422.name = "l_carpal_distal_phalanx_4";
HAnimSegment422.DEF = "hanim_l_carpal_distal_phalanx_4";
let Transform423 = browser.currentScene.createNode("Transform");
Transform423.translation = new SFVec3f(new float[8.192,25.309999,-1.124]);
let Shape424 = browser.currentScene.createNode("Shape");
let Appearance425 = browser.currentScene.createNode("Appearance");
let Material426 = browser.currentScene.createNode("Material");
Material426.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance425.material = Material426;

let ImageTexture427 = browser.currentScene.createNode("ImageTexture");
ImageTexture427.USE = "JinLOA2TextureAtlas";
Appearance425.texture = ImageTexture427;

Shape424.appearance = Appearance425;

let IndexedFaceSet428 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet428.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1]);
IndexedFaceSet428.creaseAngle = 3.14159;
IndexedFaceSet428.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1]);
let Coordinate429 = browser.currentScene.createNode("Coordinate");
Coordinate429.point = new MFVec3f(new float[-0.5436,-1.006,0.082,-0.5559,-0.9964,-0.0922,-0.3911,-1.079,0.0671,-0.4033,-1.069,-0.1071,-0.596,-0.8116,0.0978,-0.4725,-0.8732,0.2172,-0.3199,-0.9458,0.2024,-0.2147,-0.9931,0.0605,-0.2269,-0.9834,-0.1137,-0.3505,-0.9218,-0.2332,-0.503,-0.8491,-0.2183,-0.6083,-0.8019,-0.0765,-0.2786,-0.0205,0.1427,-0.14,-0.0896,0.2768,0.0415,-0.176,0.2591,0.1596,-0.229,0.1,0.1451,-0.2175,-0.1073,0.0064,-0.1484,-0.2413,-0.1751,-0.062,-0.2236,-0.2931,-0.009,-0.0645,-0.1776,0.1232,0.1297,-0.0583,0.0659,0.2438,0.0996,0.0023,0.2269,0.2013,-0.0322,0.0923,0.1903,-0.0176,-0.08,0.0748,0.0389,-0.1916,-0.0796,0.1047,-0.1786,-0.185,0.14,-0.0465,0.0484,0.1379,0.025]);
IndexedFaceSet428.coord = Coordinate429;

let TextureCoordinate430 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate430.point = new MFVec2f(new float[0.4195,0.6124,0.4163,0.6125,0.416,0.6118,0.4193,0.6117,0.422,0.6137,0.4198,0.6143,0.4218,0.613,0.4191,0.6126,0.4159,0.6126,0.4137,0.6132,0.414,0.6139,0.4166,0.6143,0.4231,0.621,0.4207,0.6217,0.4228,0.6202,0.4199,0.6197,0.416,0.6198,0.4135,0.6205,0.4139,0.6213,0.4168,0.6218,0.4225,0.6225,0.4204,0.623,0.4222,0.6219,0.4197,0.6216,0.4165,0.6217,0.4145,0.6223,0.4147,0.6229,0.4172,0.6232,0.4185,0.6232]);
IndexedFaceSet428.texCoord = TextureCoordinate430;

Shape424.geometry = IndexedFaceSet428;

Transform423.child = new undefined();

Transform423.child[0] = Shape424;

HAnimSegment422.children = new MFNode();

HAnimSegment422.children[0] = Transform423;

HAnimJoint421.children = new MFNode();

HAnimJoint421.children[0] = HAnimSegment422;

HAnimJoint411.children[1] = HAnimJoint421;

HAnimJoint401.children[1] = HAnimJoint411;

HAnimJoint391.children[1] = HAnimJoint401;

HAnimJoint271.children[4] = HAnimJoint391;

let HAnimJoint431 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint431.name = "l_carpometacarpal_5";
HAnimJoint431.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint431.center = new SFVec3f(new float[8.197,28.370001,-1.528]);
HAnimJoint431.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint431.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment432 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment432.name = "l_metacarpal_5";
HAnimSegment432.DEF = "hanim_l_metacarpal_5";
let Transform433 = browser.currentScene.createNode("Transform");
Transform433.translation = new SFVec3f(new float[8.197,28.370001,-1.528]);
let Shape434 = browser.currentScene.createNode("Shape");
let Appearance435 = browser.currentScene.createNode("Appearance");
let Material436 = browser.currentScene.createNode("Material");
Material436.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance435.material = Material436;

let ImageTexture437 = browser.currentScene.createNode("ImageTexture");
ImageTexture437.USE = "JinLOA2TextureAtlas";
Appearance435.texture = ImageTexture437;

Shape434.appearance = Appearance435;

let IndexedFaceSet438 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet438.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1]);
IndexedFaceSet438.creaseAngle = 3.14159;
IndexedFaceSet438.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1]);
let Coordinate439 = browser.currentScene.createNode("Coordinate");
Coordinate439.point = new MFVec3f(new float[0.0463,-0.9645,-0.0622,0.0267,-0.942,-0.253,0.2519,-0.9328,-0.0794,0.2324,-0.9103,-0.2702,-0.1254,-0.8655,-0.031,0.0435,-0.8586,0.0992,0.2492,-0.8269,0.082,0.3888,-0.7862,-0.074,0.3693,-0.7638,-0.2648,0.2004,-0.7707,-0.395,-0.0053,-0.8024,-0.3779,-0.1449,-0.843,-0.2218,-0.2585,-0.1911,0.0918,-0.069,-0.1834,0.2379,0.1757,-0.1456,0.2175,0.3323,-0.1,0.0425,0.309,-0.0733,-0.1846,0.1196,-0.0811,-0.3307,-0.1251,-0.1188,-0.3102,-0.2817,-0.1644,-0.1352,-0.2978,-0.0883,0.1196,-0.0923,-0.0799,0.2781,0.1732,-0.0389,0.2559,0.343,0.0105,0.066,0.3178,0.0395,-0.1803,0.1123,0.0311,-0.3387,-0.1532,-0.0098,-0.3166,-0.3231,-0.0593,-0.1267,-0.223,0.0382,0.0917,-0.0776,0.0442,0.2038,0.1101,0.0732,0.1881,0.2302,0.1081,0.0539,0.2124,0.1286,-0.1203,0.0671,0.1227,-0.2324,-0.1207,0.0937,-0.2167,-0.2408,0.0588,-0.0824,-0.0116,0.1281,-0.0076]);
IndexedFaceSet438.coord = Coordinate439;

let TextureCoordinate440 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate440.point = new MFVec2f(new float[0.4094,0.6427,0.4058,0.6429,0.4055,0.6432,0.4091,0.643,0.4124,0.6437,0.41,0.6437,0.412,0.644,0.4092,0.6444,0.4056,0.6446,0.4032,0.6445,0.4035,0.6443,0.4064,0.6439,0.4149,0.6501,0.4122,0.65,0.4146,0.6504,0.4113,0.6509,0.4071,0.6511,0.4044,0.651,0.4048,0.6507,0.408,0.6502,0.4157,0.651,0.4127,0.651,0.4153,0.6514,0.4118,0.6519,0.4072,0.6522,0.4043,0.6521,0.4047,0.6517,0.4082,0.6512,0.4143,0.6522,0.4122,0.6522,0.414,0.6525,0.4115,0.6528,0.4083,0.653,0.4062,0.6529,0.4065,0.6527,0.409,0.6523,0.4104,0.653]);
IndexedFaceSet438.texCoord = TextureCoordinate440;

Shape434.geometry = IndexedFaceSet438;

Transform433.child = new undefined();

Transform433.child[0] = Shape434;

HAnimSegment432.children = new MFNode();

HAnimSegment432.children[0] = Transform433;

HAnimJoint431.children = new MFNode();

HAnimJoint431.children[0] = HAnimSegment432;

let HAnimJoint441 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint441.name = "l_metacarpophalangeal_5";
HAnimJoint441.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint441.center = new SFVec3f(new float[8.334,27.5,-1.701]);
HAnimJoint441.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint441.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment442 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment442.name = "l_carpal_proximal_phalanx_5";
HAnimSegment442.DEF = "hanim_l_carpal_proximal_phalanx_5";
let Transform443 = browser.currentScene.createNode("Transform");
Transform443.translation = new SFVec3f(new float[8.334,27.5,-1.701]);
let Shape444 = browser.currentScene.createNode("Shape");
let Appearance445 = browser.currentScene.createNode("Appearance");
let Material446 = browser.currentScene.createNode("Material");
Material446.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance445.material = Material446;

let ImageTexture447 = browser.currentScene.createNode("ImageTexture");
ImageTexture447.USE = "JinLOA2TextureAtlas";
Appearance445.texture = ImageTexture447;

Shape444.appearance = Appearance445;

let IndexedFaceSet448 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet448.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1]);
IndexedFaceSet448.creaseAngle = 3.14159;
IndexedFaceSet448.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1]);
let Coordinate449 = browser.currentScene.createNode("Coordinate");
Coordinate449.point = new MFVec3f(new float[-0.1298,-0.9343,0.012,-0.1487,-0.912,-0.1771,0.0526,-0.9323,-0.0063,0.0337,-0.91,-0.1954,-0.2599,-0.8204,0.0405,-0.1089,-0.8356,0.1686,0.0735,-0.8336,0.1504,0.1961,-0.8154,-0.0051,0.1772,-0.793,-0.1942,0.0262,-0.7778,-0.3224,-0.1562,-0.7798,-0.3041,-0.2788,-0.7981,-0.1486,-0.2549,-0.1812,0.1442,-0.0856,-0.1983,0.2879,0.1314,-0.1959,0.2662,0.269,-0.1755,0.0918,0.2465,-0.1489,-0.1332,0.0771,-0.1318,-0.2769,-0.1399,-0.1342,-0.2552,-0.2774,-0.1547,-0.0808,-0.2729,-0.0814,0.1704,-0.0874,-0.1001,0.3278,0.1502,-0.0975,0.304,0.3008,-0.0751,0.113,0.2762,-0.046,-0.1333,0.0907,-0.0273,-0.2907,-0.1469,-0.0299,-0.2669,-0.2975,-0.0523,-0.0759,-0.1866,0.0252,0.139,-0.0555,0.012,0.2502,0.1126,0.0138,0.2334,0.2191,0.0297,0.0984,0.2016,0.0502,-0.0758,0.0705,0.0635,-0.1871,-0.0975,0.0616,-0.1703,-0.204,0.0458,-0.0352,0.0099,0.0797,0.0369]);
IndexedFaceSet448.coord = Coordinate449;

let TextureCoordinate450 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate450.point = new MFVec2f(new float[0.4075,0.6349,0.404,0.6351,0.4037,0.6351,0.4072,0.6349,0.4104,0.6358,0.4081,0.6359,0.4101,0.6358,0.4072,0.636,0.4037,0.6362,0.4013,0.6363,0.4017,0.6363,0.4046,0.6362,0.4127,0.6418,0.41,0.6419,0.4123,0.6418,0.409,0.642,0.4048,0.6423,0.4022,0.6424,0.4026,0.6424,0.4058,0.6422,0.4134,0.6427,0.4105,0.6429,0.413,0.6427,0.4094,0.6429,0.4048,0.6432,0.4019,0.6434,0.4024,0.6434,0.4059,0.6432,0.412,0.6438,0.4099,0.6439,0.4116,0.6438,0.4091,0.6439,0.4059,0.6441,0.4038,0.6442,0.4042,0.6442,0.4067,0.6441,0.408,0.6444]);
IndexedFaceSet448.texCoord = TextureCoordinate450;

Shape444.geometry = IndexedFaceSet448;

Transform443.child = new undefined();

Transform443.child[0] = Shape444;

HAnimSegment442.children = new MFNode();

HAnimSegment442.children[0] = Transform443;

HAnimJoint441.children = new MFNode();

HAnimJoint441.children[0] = HAnimSegment442;

let HAnimJoint451 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint451.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint451.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint451.center = new SFVec3f(new float[8.338,26.780001,-1.768]);
HAnimJoint451.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint451.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment452 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment452.name = "l_carpal_middle_phalanx_5";
HAnimSegment452.DEF = "hanim_l_carpal_middle_phalanx_5";
let Transform453 = browser.currentScene.createNode("Transform");
Transform453.translation = new SFVec3f(new float[8.338,26.780001,-1.768]);
let Shape454 = browser.currentScene.createNode("Shape");
let Appearance455 = browser.currentScene.createNode("Appearance");
let Material456 = browser.currentScene.createNode("Material");
Material456.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance455.material = Material456;

let ImageTexture457 = browser.currentScene.createNode("ImageTexture");
ImageTexture457.USE = "JinLOA2TextureAtlas";
Appearance455.texture = ImageTexture457;

Shape454.appearance = Appearance455;

let IndexedFaceSet458 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet458.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1]);
IndexedFaceSet458.creaseAngle = 3.14159;
IndexedFaceSet458.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1]);
let Coordinate459 = browser.currentScene.createNode("Coordinate");
Coordinate459.point = new MFVec3f(new float[-0.3103,-0.8684,0.0017,-0.3279,-0.8476,-0.1746,-0.1444,-0.8917,-0.0183,-0.162,-0.8709,-0.1946,-0.4057,-0.7413,0.0284,-0.268,-0.7744,0.1456,-0.1021,-0.7977,0.1256,0.0092,-0.7996,-0.0215,-0.0085,-0.7788,-0.1978,-0.1461,-0.7457,-0.315,-0.3121,-0.7224,-0.295,-0.4234,-0.7205,-0.1478,-0.2537,-0.1316,0.1027,-0.1126,-0.1655,0.2227,0.0677,-0.1909,0.201,0.1817,-0.1928,0.0502,0.1625,-0.1702,-0.1412,0.0215,-0.1363,-0.2613,-0.1588,-0.1109,-0.2396,-0.2728,-0.109,-0.0888,-0.156,0.0566,0.096,-0.0465,0.0303,0.1892,0.0934,0.0106,0.1723,0.1818,0.0091,0.0553,0.1669,0.0266,-0.0933,0.0575,0.0529,-0.1864,-0.0824,0.0726,-0.1696,-0.1709,0.0741,-0.0526,0.016,0.0815,0.0057]);
IndexedFaceSet458.coord = Coordinate459;

let TextureCoordinate460 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate460.point = new MFVec2f(new float[0.4061,0.6287,0.4028,0.6289,0.4025,0.6286,0.4057,0.6284,0.4088,0.6296,0.4066,0.6299,0.4084,0.6293,0.4057,0.6293,0.4024,0.6295,0.4002,0.6298,0.4006,0.63,0.4033,0.6301,0.4102,0.6353,0.408,0.6356,0.4098,0.635,0.407,0.635,0.4035,0.6352,0.4012,0.6355,0.4016,0.6358,0.4044,0.6358,0.4096,0.6371,0.4079,0.6374,0.4093,0.6369,0.4071,0.6369,0.4043,0.6371,0.4026,0.6373,0.4029,0.6375,0.4051,0.6375,0.4062,0.6376]);
IndexedFaceSet458.texCoord = TextureCoordinate460;

Shape454.geometry = IndexedFaceSet458;

Transform453.child = new undefined();

Transform453.child[0] = Shape454;

HAnimSegment452.children = new MFNode();

HAnimSegment452.children[0] = Transform453;

HAnimJoint451.children = new MFNode();

HAnimJoint451.children[0] = HAnimSegment452;

let HAnimJoint461 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint461.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint461.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint461.center = new SFVec3f(new float[8.153,26.040001,-1.886]);
HAnimJoint461.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint461.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment462 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment462.name = "l_carpal_distal_phalanx_5";
HAnimSegment462.DEF = "hanim_l_carpal_distal_phalanx_5";
let Transform463 = browser.currentScene.createNode("Transform");
Transform463.translation = new SFVec3f(new float[8.153,26.040001,-1.886]);
let Shape464 = browser.currentScene.createNode("Shape");
let Appearance465 = browser.currentScene.createNode("Appearance");
let Material466 = browser.currentScene.createNode("Material");
Material466.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance465.material = Material466;

let ImageTexture467 = browser.currentScene.createNode("ImageTexture");
ImageTexture467.USE = "JinLOA2TextureAtlas";
Appearance465.texture = ImageTexture467;

Shape464.appearance = Appearance465;

let IndexedFaceSet468 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet468.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1]);
IndexedFaceSet468.creaseAngle = 3.14159;
IndexedFaceSet468.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1]);
let Coordinate469 = browser.currentScene.createNode("Coordinate");
Coordinate469.point = new MFVec3f(new float[-0.4265,-0.7665,0.0531,-0.4417,-0.7485,-0.0994,-0.2908,-0.8079,0.0337,-0.306,-0.7899,-0.1188,-0.4775,-0.6307,0.0765,-0.3642,-0.6752,0.1764,-0.2285,-0.7166,0.157,-0.1382,-0.7341,0.0281,-0.1534,-0.7161,-0.1244,-0.2667,-0.6716,-0.2242,-0.4024,-0.6302,-0.2049,-0.4927,-0.6127,-0.076,-0.2189,-0.0422,0.1441,-0.0919,-0.0921,0.2561,0.0696,-0.1414,0.2331,0.1709,-0.161,0.0886,0.1528,-0.1396,-0.0929,0.0258,-0.0897,-0.2049,-0.1357,-0.0404,-0.1819,-0.2371,-0.0207,-0.0373,-0.1344,0.069,0.1368,-0.0252,0.0277,0.2322,0.1149,-0.0067,0.2114,0.202,-0.0158,0.0895,0.1878,0.0058,-0.0611,0.082,0.0466,-0.1545,-0.0552,0.083,-0.137,-0.1456,0.0926,-0.0171,0.0613,0.1015,0.0409]);
IndexedFaceSet468.coord = Coordinate469;

let TextureCoordinate470 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate470.point = new MFVec2f(new float[0.4049,0.6227,0.4021,0.6229,0.4017,0.6225,0.4045,0.6223,0.4072,0.6236,0.4053,0.624,0.4068,0.6232,0.4044,0.623,0.4016,0.6232,0.3997,0.6236,0.4001,0.624,0.4025,0.6242,0.4086,0.6291,0.4066,0.6295,0.4082,0.6286,0.4055,0.6284,0.4022,0.6286,0.4001,0.6291,0.4005,0.6296,0.4032,0.6297,0.4082,0.6302,0.4064,0.6306,0.4078,0.6299,0.4056,0.6298,0.4028,0.63,0.401,0.6304,0.4014,0.6307,0.4036,0.6308,0.4047,0.6309]);
IndexedFaceSet468.texCoord = TextureCoordinate470;

Shape464.geometry = IndexedFaceSet468;

Transform463.child = new undefined();

Transform463.child[0] = Shape464;

HAnimSegment462.children = new MFNode();

HAnimSegment462.children[0] = Transform463;

HAnimJoint461.children = new MFNode();

HAnimJoint461.children[0] = HAnimSegment462;

HAnimJoint451.children[1] = HAnimJoint461;

HAnimJoint441.children[1] = HAnimJoint451;

HAnimJoint431.children[1] = HAnimJoint441;

HAnimJoint271.children[5] = HAnimJoint431;

HAnimJoint261.children[1] = HAnimJoint271;

HAnimJoint251.children[1] = HAnimJoint261;

HAnimJoint241.children[1] = HAnimJoint251;

HAnimJoint231.children[1] = HAnimJoint241;

HAnimJoint221.children[1] = HAnimJoint231;

let HAnimJoint471 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint471.name = "r_acromioclavicular";
HAnimJoint471.DEF = "hanim_r_acromioclavicular";
HAnimJoint471.center = new SFVec3f(new float[-1.71,52.82,-0.6127]);
HAnimJoint471.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint471.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment472 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment472.name = "r_clavicle";
HAnimSegment472.DEF = "hanim_r_clavicle";
let Transform473 = browser.currentScene.createNode("Transform");
Transform473.translation = new SFVec3f(new float[-1.71,52.82,-0.6127]);
let Shape474 = browser.currentScene.createNode("Shape");
let Appearance475 = browser.currentScene.createNode("Appearance");
let Material476 = browser.currentScene.createNode("Material");
Material476.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance475.material = Material476;

let ImageTexture477 = browser.currentScene.createNode("ImageTexture");
ImageTexture477.USE = "JinLOA2TextureAtlas";
Appearance475.texture = ImageTexture477;

Shape474.appearance = Appearance475;

let IndexedFaceSet478 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet478.coordIndex = new MFInt32(new int[9,0,1,-1,1,6,9,-1,6,1,2,-1,2,5,6,-1,8,5,2,-1,2,3,8,-1,8,3,4,-1,4,7,8,-1,9,7,4,-1,4,0,9,-1,4,3,2,-1,0,4,2,-1,1,0,2,-1,10,14,13,-1,10,13,12,-1,11,10,12,-1,6,10,11,-1,11,9,6,-1,9,11,12,-1,12,7,9,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,5,8,-1,5,14,10,-1,10,6,5,-1]);
IndexedFaceSet478.creaseAngle = 3.14159;
IndexedFaceSet478.texCoordIndex = new MFInt32(new int[9,0,1,-1,1,6,9,-1,6,1,2,-1,2,5,6,-1,8,5,2,-1,2,3,8,-1,8,3,4,-1,4,7,8,-1,9,7,4,-1,4,0,9,-1,4,3,2,-1,0,4,2,-1,1,0,2,-1,10,14,13,-1,10,13,12,-1,11,10,12,-1,6,10,11,-1,11,9,6,-1,9,11,12,-1,12,7,9,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,5,8,-1,5,14,10,-1,10,6,5,-1]);
let Coordinate479 = browser.currentScene.createNode("Coordinate");
Coordinate479.point = new MFVec3f(new float[-4.99,0.104,-0.8644,-5.073,0.4993,0.047,-4.706,0.1695,1.198,-4.631,-1.819,1.104,-4.586,-1.648,-0.1248,-3.376,0.3884,1.771,-3.891,0.989,-0.0537,-4.193,-2.49,-0.5713,-4.388,-2.49,1.429,-3.761,0.3238,-1.692,0.1237,0.6312,-0.1883,0.1237,0.3007,-0.9426,0.1237,-1.418,-0.2577,0.1237,-1.392,0.6264,0.1237,0.2586,0.8179]);
IndexedFaceSet478.coord = Coordinate479;

let TextureCoordinate480 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate480.point = new MFVec2f(new float[0.1911,0.4797,0.171,0.4832,0.1497,0.4806,0.1519,0.4334,0.1831,0.4416,0.1474,0.4856,0.1708,0.4854,0.1784,0.4249,0.1538,0.4251,0.1963,0.4863,0.19,0.5091,0.1847,0.499,0.172,0.4382,0.1568,0.4457,0.1409,0.4926]);
IndexedFaceSet478.texCoord = TextureCoordinate480;

Shape474.geometry = IndexedFaceSet478;

Transform473.child = new undefined();

Transform473.child[0] = Shape474;

HAnimSegment472.children = new MFNode();

HAnimSegment472.children[0] = Transform473;

HAnimJoint471.children = new MFNode();

HAnimJoint471.children[0] = HAnimSegment472;

let HAnimJoint481 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint481.name = "r_sternoclavicular";
HAnimJoint481.DEF = "hanim_r_sternoclavicular";
HAnimJoint481.center = new SFVec3f(new float[-5.464,52.060001,-0.5732]);
HAnimJoint481.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint481.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment482 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment482.name = "r_scapula";
HAnimSegment482.DEF = "hanim_r_scapula";
let Transform483 = browser.currentScene.createNode("Transform");
Transform483.translation = new SFVec3f(new float[-5.464,52.060001,-0.5732]);
let Shape484 = browser.currentScene.createNode("Shape");
let Appearance485 = browser.currentScene.createNode("Appearance");
let Material486 = browser.currentScene.createNode("Material");
Material486.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance485.material = Material486;

let ImageTexture487 = browser.currentScene.createNode("ImageTexture");
ImageTexture487.USE = "JinLOA2TextureAtlas";
Appearance485.texture = ImageTexture487;

Shape484.appearance = Appearance485;

let IndexedFaceSet488 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet488.coordIndex = new MFInt32(new int[5,1,0,-1,0,4,5,-1,4,0,2,-1,2,3,4,-1,3,2,6,-1,6,9,3,-1,7,8,1,-1,1,5,7,-1,6,2,0,-1,0,8,6,-1,0,1,8,-1,9,6,8,-1,8,7,9,-1,4,10,11,-1,11,5,4,-1,5,11,12,-1,12,7,5,-1,7,12,13,-1,13,9,7,-1,9,13,14,-1,14,3,9,-1,3,14,10,-1,10,4,3,-1,10,15,11,-1,11,15,12,-1,12,15,13,-1,13,15,14,-1,14,15,10,-1]);
IndexedFaceSet488.creaseAngle = 3.14159;
IndexedFaceSet488.texCoordIndex = new MFInt32(new int[5,1,0,-1,0,4,5,-1,4,0,2,-1,2,3,4,-1,3,2,6,-1,6,8,3,-1,9,7,1,-1,1,5,9,-1,6,2,0,-1,0,7,6,-1,0,1,7,-1,12,10,11,-1,11,13,12,-1,4,14,15,-1,15,5,4,-1,5,15,16,-1,16,9,5,-1,13,16,17,-1,17,12,13,-1,8,17,18,-1,18,3,8,-1,3,18,14,-1,14,4,3,-1,14,19,15,-1,15,19,16,-1,16,19,17,-1,17,19,18,-1,18,19,14,-1]);
let Coordinate489 = browser.currentScene.createNode("Coordinate");
Coordinate489.point = new MFVec3f(new float[-1.935,1.466,-0.0932,-1.515,0.6492,-1.732,-1.534,0.7105,1.619,0.3782,1.139,1.732,-0.1374,1.74,-0.0932,-0.0076,1.074,-1.731,-0.8341,-1.572,1.39,-0.4391,-1.74,-0.6109,-0.8275,-1.58,-0.6098,-0.6342,-1.74,1.389,1.237,1.407,-0.0712,1.547,0.8515,-1.142,0.7525,-1.603,-0.4744,0.7511,-1.595,1.16,1.51,1.034,1.296,1.59,-0.0185,0.1351]);
IndexedFaceSet488.coord = Coordinate489;

let TextureCoordinate490 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate490.point = new MFVec2f(new float[0.1715,0.4655,0.1797,0.4646,0.1569,0.4642,0.1474,0.4856,0.1708,0.4854,0.1963,0.4863,0.1544,0.4288,0.1782,0.4286,0.1538,0.4251,0.1784,0.4249,0.1544,0.4288,0.1782,0.4286,0.1538,0.4251,0.1784,0.4249,0.1703,0.4865,0.1895,0.487,0.1761,0.4271,0.1552,0.4287,0.1491,0.4835,0.1671,0.4618]);
IndexedFaceSet488.texCoord = TextureCoordinate490;

Shape484.geometry = IndexedFaceSet488;

Transform483.child = new undefined();

Transform483.child[0] = Shape484;

HAnimSegment482.children = new MFNode();

HAnimSegment482.children[0] = Transform483;

HAnimJoint481.children = new MFNode();

HAnimJoint481.children[0] = HAnimSegment482;

let HAnimJoint491 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint491.name = "r_shoulder";
HAnimJoint491.DEF = "hanim_r_shoulder";
HAnimJoint491.center = new SFVec3f(new float[-7.336,51.48,-0.1452]);
HAnimJoint491.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint491.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment492 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment492.name = "r_upperarm";
HAnimSegment492.DEF = "hanim_r_upperarm";
let Transform493 = browser.currentScene.createNode("Transform");
Transform493.translation = new SFVec3f(new float[-7.336,51.48,-0.1452]);
let Shape494 = browser.currentScene.createNode("Shape");
let Appearance495 = browser.currentScene.createNode("Appearance");
let Material496 = browser.currentScene.createNode("Material");
Material496.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance495.material = Material496;

let ImageTexture497 = browser.currentScene.createNode("ImageTexture");
ImageTexture497.USE = "JinLOA2TextureAtlas";
Appearance495.texture = ImageTexture497;

Shape494.appearance = Appearance495;

let IndexedFaceSet498 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet498.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,38,37,36,-1,38,36,35,-1,39,38,35,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1,26,21,20,-1,20,25,26,-1,27,22,21,-1,21,26,27,-1,28,23,22,-1,22,27,28,-1,29,24,23,-1,23,28,29,-1,25,20,24,-1,24,29,25,-1,31,26,25,-1,25,30,31,-1,32,27,26,-1,26,31,32,-1,33,28,27,-1,27,32,33,-1,34,29,28,-1,28,33,34,-1,30,25,29,-1,29,34,30,-1,36,31,30,-1,30,35,36,-1,37,32,31,-1,31,36,37,-1,38,33,32,-1,32,37,38,-1,39,34,33,-1,33,38,39,-1,35,30,34,-1,34,39,35,-1]);
IndexedFaceSet498.creaseAngle = 3.14159;
IndexedFaceSet498.texCoordIndex = new MFInt32(new int[1,0,2,-1,1,2,3,-1,61,1,3,-1,1,6,5,-1,5,0,1,-1,0,5,7,-1,7,2,0,-1,2,7,8,-1,8,3,2,-1,25,26,9,-1,9,4,25,-1,4,9,6,-1,6,1,4,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,27,28,14,-1,14,9,27,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,29,30,19,-1,19,14,29,-1,14,19,16,-1,16,11,14,-1,36,35,54,-1,36,54,53,-1,37,36,53,-1,20,15,16,-1,16,21,20,-1,22,17,15,-1,15,20,22,-1,23,18,17,-1,17,22,23,-1,24,19,31,-1,31,32,24,-1,21,16,19,-1,19,24,21,-1,40,39,38,-1,38,41,40,-1,43,42,55,-1,55,56,43,-1,45,44,42,-1,42,43,45,-1,47,46,44,-1,44,45,47,-1,41,38,46,-1,46,47,41,-1,48,40,41,-1,41,49,48,-1,50,43,57,-1,57,58,50,-1,51,45,43,-1,43,50,51,-1,52,47,45,-1,45,51,52,-1,49,41,47,-1,47,52,49,-1,34,48,49,-1,49,33,34,-1,35,50,59,-1,59,60,35,-1,36,51,50,-1,50,35,36,-1,37,52,51,-1,51,36,37,-1,33,49,52,-1,52,37,33,-1]);
let Coordinate499 = browser.currentScene.createNode("Coordinate");
Coordinate499.point = new MFVec3f(new float[-1.164,1.767,-1.68,-2.32,1.756,0.0337,-1.047,1.768,1.663,0.895,1.785,0.9556,0.8229,1.784,-1.11,-1.382,0.4997,-2.31,-2.978,0.4855,0.057,-1.221,0.5011,2.307,1.462,0.525,1.33,1.362,0.5241,-1.523,-1.36,-2.014,-2.31,-2.956,-2.028,0.057,-1.198,-2.012,2.307,1.484,-1.988,1.33,1.384,-1.989,-1.523,-1.398,-3.089,-2.442,-3.087,-3.104,0.0619,-1.228,-3.087,2.442,1.61,-3.062,1.409,1.505,-3.063,-1.61,-0.8845,-1.238,-1.939,-2.105,-1.248,-0.4543,-1.473,-1.243,1.629,0.1375,-1.229,1.432,0.5011,-1.225,-0.7734,-0.9027,-7.045,-1.569,-2.17,-7.056,-0.378,-1.514,-7.051,1.293,0.1588,-7.036,1.135,0.5365,-7.032,-0.634,-0.9066,-11.1,-1.511,-2.127,-11.11,-0.3651,-1.495,-11.1,1.243,0.1154,-11.09,1.091,0.4791,-11.08,-0.6115,-0.852,-11.65,-0.8985,-1.567,-11.65,-0.2267,-1.197,-11.65,0.716,-0.2531,-11.64,0.6268,-0.0399,-11.64,-0.3711]);
IndexedFaceSet498.coord = Coordinate499;

let TextureCoordinate500 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate500.point = new MFVec2f(new float[0.2986,0.2114,0.2726,0.2114,0.3201,0.2114,0.3415,0.2114,0.2466,0.2114,0.2979,0.2417,0.2726,0.2417,0.3197,0.2417,0.3418,0.2417,0.2473,0.2417,0.2979,0.3018,0.2726,0.3018,0.3197,0.3018,0.3418,0.3018,0.2473,0.3018,0.2978,0.3276,0.2726,0.3276,0.3197,0.3276,0.3419,0.3276,0.2474,0.3276,0.2932,0.2834,0.2689,0.2834,0.316,0.2834,0.3322,0.2834,0.245,0.2834,0.2251,0.2114,0.2255,0.2417,0.2255,0.2417,0.2255,0.3018,0.2255,0.3018,0.2255,0.3276,0.2255,0.3276,0.2159,0.2834,0.4315,0.6736,0.442,0.6736,0.3947,0.6736,0.4041,0.6736,0.418,0.6736,0.4296,0.6167,0.4409,0.6167,0.4415,0.6485,0.4303,0.6485,0.3965,0.6167,0.3953,0.6485,0.4047,0.6167,0.4053,0.6485,0.4189,0.6167,0.418,0.6485,0.4415,0.6706,0.4306,0.6706,0.395,0.6706,0.4051,0.6706,0.4182,0.6706,0.3746,0.6736,0.3851,0.6736,0.384,0.6167,0.3845,0.6485,0.3845,0.6485,0.3846,0.6706,0.3846,0.6706,0.3851,0.6736,0.3481,0.2114]);
IndexedFaceSet498.texCoord = TextureCoordinate500;

Shape494.geometry = IndexedFaceSet498;

Transform493.child = new undefined();

Transform493.child[0] = Shape494;

HAnimSegment492.children = new MFNode();

HAnimSegment492.children[0] = Transform493;

HAnimJoint491.children = new MFNode();

HAnimJoint491.children[0] = HAnimSegment492;

let HAnimJoint501 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint501.name = "r_elbow";
HAnimJoint501.DEF = "hanim_r_elbow";
HAnimJoint501.center = new SFVec3f(new float[-8.093,40.380001,-0.2502]);
HAnimJoint501.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint501.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment502 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment502.name = "r_forearm";
HAnimSegment502.DEF = "hanim_r_forearm";
let Transform503 = browser.currentScene.createNode("Transform");
Transform503.translation = new SFVec3f(new float[-8.093,40.380001,-0.2502]);
let Shape504 = browser.currentScene.createNode("Shape");
let Appearance505 = browser.currentScene.createNode("Appearance");
let Material506 = browser.currentScene.createNode("Material");
Material506.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance505.material = Material506;

let ImageTexture507 = browser.currentScene.createNode("ImageTexture");
ImageTexture507.USE = "JinLOA2TextureAtlas";
Appearance505.texture = ImageTexture507;

Shape504.appearance = Appearance505;

let IndexedFaceSet508 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet508.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,21,-1,23,21,20,-1,24,23,20,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1]);
IndexedFaceSet508.creaseAngle = 3.14159;
IndexedFaceSet508.texCoordIndex = new MFInt32(new int[26,25,2,-1,26,2,3,-1,4,26,3,-1,0,5,6,-1,6,1,0,-1,27,28,7,-1,7,2,27,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,29,30,12,-1,12,7,29,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,31,32,17,-1,17,12,31,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,34,-1,23,34,33,-1,24,23,33,-1,21,16,15,-1,15,20,21,-1,22,17,35,-1,35,36,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1]);
let Coordinate509 = browser.currentScene.createNode("Coordinate");
Coordinate509.point = new MFVec3f(new float[-0.215,0.3047,-1.152,-1.155,0.2966,-0.2588,-0.6199,0.3013,1.04,0.6505,0.3122,0.9491,0.9008,0.3143,-0.4054,-0.1442,-0.8448,-1.625,-1.472,-0.8561,-0.4271,-0.7164,-0.8496,1.625,1.079,-0.8342,1.482,1.433,-0.8312,-0.6588,-0.1328,-3.5,-1.607,-1.551,-3.513,-0.4225,-0.781,-2.925,1.61,1.136,-2.909,1.468,1.551,-3.486,-0.6519,-0.0592,-8.713,-1.437,-1.093,-8.722,-0.1279,-0.5047,-8.716,1.51,0.8932,-8.704,1.377,1.169,-8.702,-0.3428,-0.0092,-9.336,-0.8855,-0.7154,-9.342,0.0084,-0.3135,-9.339,1.043,0.6412,-9.331,0.9519,0.8292,-9.329,-0.1383]);
IndexedFaceSet508.coord = Coordinate509;

let TextureCoordinate510 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate510.point = new MFVec2f(new float[0.4222,0.6201,0.4327,0.6201,0.3884,0.6201,0.3987,0.6201,0.4103,0.6201,0.4213,0.6265,0.4321,0.6265,0.3894,0.6265,0.399,0.6265,0.4105,0.6265,0.4214,0.6413,0.4323,0.6413,0.389,0.6381,0.3992,0.6381,0.4103,0.6413,0.4213,0.6705,0.4336,0.6705,0.3899,0.6705,0.3981,0.6705,0.4094,0.6705,0.4215,0.674,0.4346,0.674,0.3899,0.674,0.398,0.674,0.4083,0.674,0.3787,0.6201,0.3682,0.6201,0.3787,0.6201,0.3782,0.6265,0.3782,0.6265,0.3783,0.6413,0.3783,0.6413,0.3796,0.6705,0.3676,0.674,0.3806,0.674,0.3796,0.6705,0.3806,0.674]);
IndexedFaceSet508.texCoord = TextureCoordinate510;

Shape504.geometry = IndexedFaceSet508;

Transform503.child = new undefined();

Transform503.child[0] = Shape504;

HAnimSegment502.children = new MFNode();

HAnimSegment502.children[0] = Transform503;

HAnimJoint501.children = new MFNode();

HAnimJoint501.children[0] = HAnimSegment502;

let HAnimJoint511 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint511.name = "r_radiocarpal";
HAnimJoint511.DEF = "hanim_r_radiocarpal";
HAnimJoint511.center = new SFVec3f(new float[-7.899,31.43,-0.3809]);
HAnimJoint511.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint511.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment512 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment512.name = "r_carpal";
HAnimSegment512.DEF = "hanim_r_carpal";
let Transform513 = browser.currentScene.createNode("Transform");
Transform513.translation = new SFVec3f(new float[-7.899,31.43,-0.3809]);
let Shape514 = browser.currentScene.createNode("Shape");
let Appearance515 = browser.currentScene.createNode("Appearance");
let Material516 = browser.currentScene.createNode("Material");
Material516.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance515.material = Material516;

let ImageTexture517 = browser.currentScene.createNode("ImageTexture");
ImageTexture517.USE = "JinLOA2TextureAtlas";
Appearance515.texture = ImageTexture517;

Shape514.appearance = Appearance515;

let IndexedFaceSet518 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet518.coordIndex = new MFInt32(new int[36,41,38,-1,38,37,36,-1,44,54,45,-1,31,30,53,-1,53,4,31,-1,6,7,11,-1,11,10,6,-1,11,32,33,-1,33,10,11,-1,34,11,7,-1,7,24,34,-1,13,27,15,-1,15,17,13,-1,25,35,22,-1,30,20,5,-1,13,32,11,-1,11,34,13,-1,23,29,28,-1,28,22,23,-1,17,15,14,-1,14,16,17,-1,18,19,53,-1,53,5,18,-1,9,17,16,-1,16,8,9,-1,14,15,43,-1,43,42,14,-1,21,33,8,-1,8,16,21,-1,21,23,22,-1,22,35,21,-1,39,38,41,-1,41,40,39,-1,26,24,20,-1,27,26,20,-1,20,12,27,-1,3,43,12,-1,12,30,3,-1,0,25,28,-1,28,54,0,-1,13,17,9,-1,9,32,13,-1,28,29,31,-1,29,23,14,-1,14,42,29,-1,16,14,23,-1,23,21,16,-1,30,31,2,-1,2,3,30,-1,8,33,32,-1,32,9,8,-1,33,21,35,-1,35,10,33,-1,35,25,6,-1,6,10,35,-1,13,34,26,-1,26,27,13,-1,34,24,26,-1,1,46,47,-1,47,0,1,-1,25,0,47,-1,47,48,25,-1,25,48,49,-1,49,6,25,-1,6,49,50,-1,50,7,6,-1,24,7,50,-1,50,51,24,-1,24,51,46,-1,46,1,24,-1,2,42,43,-1,43,3,2,-1,15,27,12,-1,12,43,15,-1,29,42,2,-1,2,31,29,-1,18,5,52,-1,52,44,18,-1,28,25,22,-1,18,44,45,-1,45,19,18,-1,1,44,52,-1,52,24,1,-1,45,28,4,-1,28,31,4,-1,45,4,19,-1,37,47,46,-1,46,36,37,-1,48,47,37,-1,37,38,48,-1,39,49,48,-1,48,38,39,-1,40,50,49,-1,49,39,40,-1,51,50,40,-1,40,41,51,-1,36,46,51,-1,51,41,36,-1,24,52,20,-1,52,5,20,-1,53,30,5,-1,53,19,4,-1,54,28,45,-1,44,1,0,-1,0,54,44,-1,20,30,12,-1]);
IndexedFaceSet518.creaseAngle = 3.14159;
IndexedFaceSet518.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,4,6,5,-1,8,7,10,-1,10,9,8,-1,12,11,14,-1,14,13,12,-1,14,16,15,-1,15,13,14,-1,17,14,11,-1,11,18,17,-1,20,19,22,-1,22,21,20,-1,23,25,24,-1,7,27,26,-1,20,16,14,-1,14,17,20,-1,28,30,29,-1,29,24,28,-1,21,22,32,-1,32,31,21,-1,33,34,10,-1,10,26,33,-1,35,21,31,-1,31,36,35,-1,32,22,38,-1,38,37,32,-1,39,15,36,-1,36,31,39,-1,39,28,24,-1,24,25,39,-1,40,2,3,-1,3,41,40,-1,42,18,27,-1,19,42,27,-1,27,43,19,-1,44,38,43,-1,43,7,44,-1,45,23,29,-1,29,6,45,-1,20,21,35,-1,35,16,20,-1,29,30,8,-1,30,28,32,-1,32,37,30,-1,31,32,28,-1,28,39,31,-1,7,8,46,-1,46,44,7,-1,36,15,16,-1,16,35,36,-1,15,39,25,-1,25,13,15,-1,25,23,12,-1,12,13,25,-1,20,17,42,-1,42,19,20,-1,17,18,42,-1,47,49,48,-1,48,45,47,-1,23,45,48,-1,48,50,23,-1,23,50,51,-1,51,12,23,-1,12,51,52,-1,52,11,12,-1,18,11,52,-1,52,53,18,-1,18,53,49,-1,49,47,18,-1,46,37,38,-1,38,44,46,-1,22,19,43,-1,43,38,22,-1,30,37,46,-1,46,8,30,-1,33,26,54,-1,54,4,33,-1,29,23,24,-1,33,4,5,-1,5,34,33,-1,47,4,54,-1,54,18,47,-1,5,29,9,-1,29,8,9,-1,5,9,34,-1,1,48,49,-1,49,0,1,-1,50,48,1,-1,1,2,50,-1,40,51,50,-1,50,2,40,-1,41,52,51,-1,51,40,41,-1,53,52,41,-1,41,3,53,-1,0,49,53,-1,53,3,0,-1,18,54,27,-1,54,26,27,-1,10,7,26,-1,10,34,9,-1,6,29,5,-1,4,47,45,-1,45,6,4,-1,27,7,43,-1]);
let Coordinate519 = browser.currentScene.createNode("Coordinate");
Coordinate519.point = new MFVec3f(new float[-0.615,-0.6885,1.418,0.2519,-0.7698,1.606,-0.894,-4.14,1.405,-0.2357,-4.221,1.472,-0.7106,-2.848,1.537,0.2913,-2.795,1.561,-0.3511,-0.9723,-1.085,0.332,-1.036,-1.083,-0.6255,-3.82,-1.576,-0.076,-3.93,-1.587,-0.5517,-2.055,-1.417,0.1089,-2.163,-1.46,-0.0149,-3.564,0.866,0.0687,-3.436,-0.8707,-0.9147,-4.192,-0.1153,-0.2445,-4.253,-0.1554,-0.7883,-4.028,-0.9461,-0.1878,-4.111,-0.9619,0.1749,-2.558,2.351,-0.5105,-2.795,2.344,0.1613,-2.264,1.005,-0.8473,-3.286,-0.8304,-0.9399,-2.17,-0.0115,-0.979,-3.369,-0.052,0.4715,-0.9186,0.2017,-0.7286,-0.8328,0.1541,0.1459,-2.365,0.1498,0.0501,-3.575,-0.0433,-0.969,-2.127,0.9718,-0.9825,-3.348,0.8866,-0.0909,-3.383,1.556,-0.8371,-3.169,1.547,-0.041,-3.318,-1.568,-0.5921,-3.194,-1.578,0.2264,-2.304,-0.7602,-0.8375,-2.137,-0.8044,0.2818,0.1713,1.187,-0.2277,0.2301,1.179,-0.2277,0.4881,0.2572,-0.1331,0.2707,-0.6889,0.3764,0.2118,-0.6809,0.4614,0.4054,0.2565,-0.9242,-4.241,0.7847,-0.2647,-4.324,0.8047,0.3043,-1.534,2.164,-0.8425,-1.789,2.123,0.201,-0.4603,1.254,-0.3856,-0.405,1.248,-0.4965,-0.283,0.2553,-0.2563,-0.4079,-0.7647,0.3314,-0.4586,-0.758,0.3822,-0.3913,0.2697,0.4485,-1.891,1.52,-0.3893,-2.936,1.555,-0.7623,-1.12,1.731]);
IndexedFaceSet518.coord = Coordinate519;

let TextureCoordinate520 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate520.point = new MFVec2f(new float[0.4538,0.6821,0.4536,0.6827,0.4366,0.6851,0.4365,0.6843,0.4719,0.6661,0.4711,0.6637,0.4639,0.67,0.4606,0.6487,0.4605,0.6507,0.4603,0.6538,0.4606,0.6529,0.4117,0.6708,0.4117,0.6714,0.4055,0.6612,0.4047,0.6602,0.4025,0.6505,0.4027,0.6493,0.4177,0.6589,0.4355,0.6719,0.431,0.6469,0.4157,0.6482,0.414,0.6419,0.4289,0.6406,0.4346,0.6727,0.4316,0.6601,0.4169,0.6604,0.4607,0.6543,0.4504,0.6593,0.4308,0.6489,0.4498,0.6605,0.4482,0.6491,0.4143,0.6427,0.4297,0.6411,0.4754,0.6565,0.4752,0.6543,0.4024,0.6436,0.4026,0.6446,0.4463,0.6407,0.4467,0.6399,0.4164,0.6496,0.419,0.6831,0.4192,0.6825,0.4346,0.6583,0.4478,0.647,0.4591,0.6409,0.4581,0.6741,0.4578,0.6416,0.4616,0.6733,0.4549,0.6767,0.455,0.6762,0.4365,0.6779,0.4176,0.6767,0.4177,0.6762,0.4368,0.6768,0.46,0.6628]);
IndexedFaceSet518.texCoord = TextureCoordinate520;

Shape514.geometry = IndexedFaceSet518;

Transform513.child = new undefined();

Transform513.child[0] = Shape514;

HAnimSegment512.children = new MFNode();

HAnimSegment512.children[0] = Transform513;

HAnimJoint511.children = new MFNode();

HAnimJoint511.children[0] = HAnimSegment512;

let HAnimJoint521 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint521.name = "r_carpometacarpal_1";
HAnimJoint521.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint521.center = new SFVec3f(new float[-8.205,29.6,1.302]);
HAnimJoint521.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint521.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment522 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment522.name = "r_metacarpal_1";
HAnimSegment522.DEF = "hanim_r_metacarpal_1";
let Transform523 = browser.currentScene.createNode("Transform");
Transform523.translation = new SFVec3f(new float[-8.205,29.6,1.302]);
let Shape524 = browser.currentScene.createNode("Shape");
let Appearance525 = browser.currentScene.createNode("Appearance");
let Material526 = browser.currentScene.createNode("Material");
Material526.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance525.material = Material526;

let ImageTexture527 = browser.currentScene.createNode("ImageTexture");
ImageTexture527.USE = "JinLOA2TextureAtlas";
Appearance525.texture = ImageTexture527;

Shape524.appearance = Appearance525;

let IndexedFaceSet528 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet528.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1]);
IndexedFaceSet528.creaseAngle = 3.14159;
IndexedFaceSet528.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1]);
let Coordinate529 = browser.currentScene.createNode("Coordinate");
Coordinate529.point = new MFVec3f(new float[0.375,-0.9214,0.322,0.212,-1.009,0.0858,0.1385,-0.9095,0.5036,-0.0245,-0.9973,0.2674,0.533,-0.8014,0.1471,0.4779,-0.7267,0.4605,0.2413,-0.7148,0.6421,-0.0584,-0.7717,0.6012,-0.2213,-0.8595,0.365,-0.1662,-0.9342,0.0516,0.0704,-0.9461,-0.13,0.3701,-0.8892,-0.0891,0.4847,-0.0791,-0.0791,0.4228,0.0048,0.2724,0.1414,0.0189,0.4885,-0.1948,-0.0449,0.4426,-0.3887,-0.1493,0.1616,-0.3268,-0.2331,-0.1899,-0.0453,-0.2473,-0.406,0.2908,-0.1835,-0.3601,0.5058,0.0372,-0.1235,0.4385,0.1283,0.2586,0.1325,0.1437,0.4936,-0.233,0.0743,0.4437,-0.4438,-0.0392,0.1381,-0.3765,-0.1303,-0.244,-0.0705,-0.1457,-0.479,0.2949,-0.0763,-0.4291,0.3497,0.1392,-0.1192,0.3021,0.2036,0.1511,0.0857,0.2145,0.3172,-0.1727,0.1654,0.2819,-0.3218,0.0852,0.0659,-0.2742,0.0207,-0.2044,-0.0578,0.0098,-0.3705,0.2006,0.0589,-0.3352,0.0069,0.159,-0.0407]);
IndexedFaceSet528.coord = Coordinate529;

let TextureCoordinate530 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate530.point = new MFVec2f(new float[0.469,0.6546,0.4646,0.6538,0.4679,0.6539,0.4723,0.6548,0.4715,0.6565,0.4657,0.6558,0.4749,0.6566,0.4741,0.6561,0.4697,0.6552,0.4639,0.6545,0.4606,0.6544,0.4613,0.655,0.468,0.6634,0.4615,0.6626,0.472,0.6635,0.4712,0.6629,0.466,0.6619,0.4595,0.6611,0.4555,0.661,0.4563,0.6616,0.4678,0.6645,0.4607,0.6637,0.4721,0.6647,0.4712,0.664,0.4655,0.6629,0.4585,0.6621,0.4541,0.6619,0.455,0.6626,0.4658,0.6652,0.4608,0.6646,0.4689,0.6653,0.4682,0.6649,0.4642,0.6641,0.4592,0.6635,0.4561,0.6634,0.4568,0.6639,0.4622,0.6648]);
IndexedFaceSet528.texCoord = TextureCoordinate530;

Shape524.geometry = IndexedFaceSet528;

Transform523.child = new undefined();

Transform523.child[0] = Shape524;

HAnimSegment522.children = new MFNode();

HAnimSegment522.children[0] = Transform523;

HAnimJoint521.children = new MFNode();

HAnimJoint521.children[0] = HAnimSegment522;

let HAnimJoint531 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint531.name = "r_metacarpophalangeal_1";
HAnimJoint531.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint531.center = new SFVec3f(new float[-8.08,28.73,1.55]);
HAnimJoint531.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint531.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment532 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment532.name = "r_carpal_proximal_phalanx_1";
HAnimSegment532.DEF = "hanim_r_carpal_proximal_phalanx_1";
let Transform533 = browser.currentScene.createNode("Transform");
Transform533.translation = new SFVec3f(new float[-8.08,28.73,1.55]);
let Shape534 = browser.currentScene.createNode("Shape");
let Appearance535 = browser.currentScene.createNode("Appearance");
let Material536 = browser.currentScene.createNode("Material");
Material536.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance535.material = Material536;

let ImageTexture537 = browser.currentScene.createNode("ImageTexture");
ImageTexture537.USE = "JinLOA2TextureAtlas";
Appearance535.texture = ImageTexture537;

Shape534.appearance = Appearance535;

let IndexedFaceSet538 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet538.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1]);
IndexedFaceSet538.creaseAngle = 3.14159;
IndexedFaceSet538.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1]);
let Coordinate539 = browser.currentScene.createNode("Coordinate");
Coordinate539.point = new MFVec3f(new float[0.5258,-1.001,0.2196,0.3901,-1.074,0.023,0.3376,-1.029,0.3799,0.2019,-1.102,0.1833,0.6244,-0.8415,0.0751,0.585,-0.8078,0.3428,0.3968,-0.8361,0.503,0.1539,-0.912,0.4758,0.0182,-0.985,0.2792,0.0576,-1.019,0.0115,0.2458,-0.9905,-0.1487,0.4887,-0.9145,-0.1215,0.4357,-0.0607,-0.0712,0.3915,-0.0229,0.229,0.1676,-0.0565,0.4196,-0.1048,-0.1417,0.3891,-0.2662,-0.2286,0.1552,-0.222,-0.2663,-0.1451,0.0018,-0.2328,-0.3357,0.2743,-0.1476,-0.3051,0.4293,0.0682,-0.1026,0.3812,0.1092,0.2242,0.1376,0.0727,0.4317,-0.1589,-0.02,0.3984,-0.3346,-0.1146,0.1438,-0.2865,-0.1556,-0.1829,-0.0429,-0.1191,-0.3904,0.2536,-0.0264,-0.3572,0.2801,0.1629,-0.0879,0.2461,0.1919,0.1432,0.0738,0.1661,0.2899,-0.1359,0.1005,0.2664,-0.2601,0.0337,0.0864,-0.2261,0.0046,-0.1447,-0.0538,0.0304,-0.2914,0.1558,0.096,-0.2679,-0.0055,0.1486,-0.0096]);
IndexedFaceSet538.coord = Coordinate539;

let TextureCoordinate540 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate540.point = new MFVec2f(new float[0.4716,0.6458,0.468,0.6451,0.471,0.6448,0.4746,0.6455,0.4739,0.6476,0.469,0.6473,0.4769,0.6473,0.4764,0.6466,0.4727,0.6459,0.4678,0.6456,0.4648,0.6459,0.4653,0.6466,0.4718,0.655,0.4662,0.6546,0.4753,0.6546,0.4748,0.6538,0.4704,0.653,0.4649,0.6527,0.4613,0.653,0.4619,0.6538,0.4717,0.6562,0.4657,0.6558,0.4756,0.6559,0.475,0.655,0.4702,0.6541,0.4642,0.6537,0.4603,0.654,0.4609,0.6549,0.4702,0.657,0.4659,0.6567,0.4729,0.6567,0.4725,0.6561,0.4692,0.6555,0.4649,0.6552,0.4622,0.6555,0.4626,0.6561,0.4674,0.6566]);
IndexedFaceSet538.texCoord = TextureCoordinate540;

Shape534.geometry = IndexedFaceSet538;

Transform533.child = new undefined();

Transform533.child[0] = Shape534;

HAnimSegment532.children = new MFNode();

HAnimSegment532.children[0] = Transform533;

HAnimJoint531.children = new MFNode();

HAnimJoint531.children[0] = HAnimSegment532;

let HAnimJoint541 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint541.name = "r_carpal_interphalangeal_1";
HAnimJoint541.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint541.center = new SFVec3f(new float[-7.832,27.85,1.735]);
HAnimJoint541.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint541.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment542 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment542.name = "r_carpal_distal_phalanx_1";
HAnimSegment542.DEF = "hanim_r_carpal_distal_phalanx_1";
let Transform543 = browser.currentScene.createNode("Transform");
Transform543.translation = new SFVec3f(new float[-7.832,27.85,1.735]);
let Shape544 = browser.currentScene.createNode("Shape");
let Appearance545 = browser.currentScene.createNode("Appearance");
let Material546 = browser.currentScene.createNode("Material");
Material546.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance545.material = Material546;

let ImageTexture547 = browser.currentScene.createNode("ImageTexture");
ImageTexture547.USE = "JinLOA2TextureAtlas";
Appearance545.texture = ImageTexture547;

Shape544.appearance = Appearance545;

let IndexedFaceSet548 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet548.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1]);
IndexedFaceSet548.creaseAngle = 3.14159;
IndexedFaceSet548.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1]);
let Coordinate549 = browser.currentScene.createNode("Coordinate");
Coordinate549.point = new MFVec3f(new float[0.5817,-0.8003,0.0727,0.4584,-0.8658,-0.106,0.4372,-0.8552,0.2109,0.314,-0.9207,0.0322,0.6359,-0.6464,-0.0377,0.62,-0.6384,0.2,0.4756,-0.6933,0.3382,0.2748,-0.7836,0.3078,0.1516,-0.8492,0.1291,0.1675,-0.8572,-0.1085,0.3119,-0.8023,-0.2467,0.5127,-0.712,-0.2163,0.374,-0.0036,-0.0838,0.3562,0.0054,0.1827,0.1843,-0.0599,0.3471,-0.0408,-0.1612,0.313,-0.1875,-0.2392,0.1004,-0.1697,-0.2482,-0.1661,0.0022,-0.1829,-0.3305,0.2274,-0.0816,-0.2964,0.2142,0.1671,-0.0744,0.2005,0.174,0.1306,0.0683,0.1238,0.257,-0.1048,0.0459,0.2308,-0.2176,-0.0141,0.0673,-0.2039,-0.021,-0.1376,-0.0717,0.0292,-0.264,0.1014,0.1072,-0.2378,-0.0214,0.1175,-0.006]);
IndexedFaceSet548.coord = Coordinate549;

let TextureCoordinate550 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate550.point = new MFVec2f(new float[0.4723,0.6394,0.469,0.6388,0.4716,0.6383,0.4749,0.6389,0.4747,0.6409,0.4703,0.6408,0.4773,0.6404,0.4767,0.6395,0.4734,0.6389,0.469,0.6389,0.4664,0.6394,0.467,0.6402,0.4744,0.647,0.4694,0.6469,0.4774,0.6463,0.4768,0.6454,0.4729,0.6447,0.4679,0.6446,0.4649,0.6452,0.4655,0.6461,0.4734,0.6485,0.4696,0.6485,0.4758,0.6481,0.4753,0.6473,0.4722,0.6468,0.4684,0.6467,0.4661,0.6472,0.4666,0.6479,0.4709,0.648]);
IndexedFaceSet548.texCoord = TextureCoordinate550;

Shape544.geometry = IndexedFaceSet548;

Transform543.child = new undefined();

Transform543.child[0] = Shape544;

HAnimSegment542.children = new MFNode();

HAnimSegment542.children[0] = Transform543;

HAnimJoint541.children = new MFNode();

HAnimJoint541.children[0] = HAnimSegment542;

HAnimJoint531.children[1] = HAnimJoint541;

HAnimJoint521.children[1] = HAnimJoint531;

HAnimJoint511.children[1] = HAnimJoint521;

let HAnimJoint551 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint551.name = "r_carpometacarpal_2";
HAnimJoint551.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint551.center = new SFVec3f(new float[-8.376,28.549999,0.5997]);
HAnimJoint551.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint551.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment552 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment552.name = "r_metacarpal_2";
HAnimSegment552.DEF = "hanim_r_metacarpal_2";
let Transform553 = browser.currentScene.createNode("Transform");
Transform553.translation = new SFVec3f(new float[-8.376,28.549999,0.5997]);
let Shape554 = browser.currentScene.createNode("Shape");
let Appearance555 = browser.currentScene.createNode("Appearance");
let Material556 = browser.currentScene.createNode("Material");
Material556.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance555.material = Material556;

let ImageTexture557 = browser.currentScene.createNode("ImageTexture");
ImageTexture557.USE = "JinLOA2TextureAtlas";
Appearance555.texture = ImageTexture557;

Shape554.appearance = Appearance555;

let IndexedFaceSet558 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet558.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1]);
IndexedFaceSet558.creaseAngle = 3.14159;
IndexedFaceSet558.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1]);
let Coordinate559 = browser.currentScene.createNode("Coordinate");
Coordinate559.point = new MFVec3f(new float[0.0229,-1.485,0.1659,0.0277,-1.493,-0.0662,-0.2213,-1.467,0.1625,-0.2166,-1.475,-0.0696,0.2194,-1.321,0.162,0.0326,-1.302,0.3335,-0.2116,-1.284,0.3301,-0.3912,-1.276,0.1535,-0.3864,-1.284,-0.0786,-0.1997,-1.303,-0.2501,0.0446,-1.321,-0.2467,0.2242,-1.329,-0.0701,0.3384,-0.3382,0.1488,0.1289,-0.3166,0.3412,-0.1617,-0.2951,0.3371,-0.3631,-0.2862,0.139,-0.3574,-0.2953,-0.1371,-0.148,-0.3169,-0.3295,0.1426,-0.3384,-0.3254,0.3441,-0.3473,-0.1273,0.3796,-0.1843,0.1553,0.1523,-0.1608,0.364,-0.1629,-0.1375,0.3596,-0.3814,-0.1279,0.1446,-0.3753,-0.1377,-0.1549,-0.148,-0.1611,-0.3636,0.1672,-0.1845,-0.3592,0.3858,-0.1941,-0.1442,0.2808,-0.0217,0.1042,0.1201,-0.0051,0.2518,-0.1029,0.0114,0.2486,-0.2574,0.0182,0.0967,-0.253,0.0113,-0.1151,-0.0923,-0.0053,-0.2627,0.1306,-0.0218,-0.2596,0.2851,-0.0286,-0.1076,0.0187,0.0593,-0.0078]);
IndexedFaceSet558.coord = Coordinate559;

let TextureCoordinate560 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate560.point = new MFVec2f(new float[0.453,0.6387,0.4487,0.6387,0.4487,0.6388,0.453,0.6389,0.4561,0.6405,0.453,0.6403,0.4561,0.6406,0.4528,0.6407,0.4485,0.6406,0.4453,0.6405,0.4454,0.6403,0.4487,0.6402,0.4563,0.6497,0.4527,0.6495,0.4562,0.6499,0.4525,0.65,0.4474,0.6499,0.4439,0.6497,0.4439,0.6495,0.4476,0.6494,0.4567,0.6512,0.4528,0.651,0.4566,0.6514,0.4526,0.6515,0.4471,0.6514,0.4432,0.6512,0.4433,0.651,0.4473,0.6509,0.4546,0.6527,0.4519,0.6525,0.4546,0.6528,0.4518,0.6529,0.4478,0.6528,0.4451,0.6527,0.4452,0.6525,0.448,0.6524,0.4498,0.6533]);
IndexedFaceSet558.texCoord = TextureCoordinate560;

Shape554.geometry = IndexedFaceSet558;

Transform553.child = new undefined();

Transform553.child[0] = Shape554;

HAnimSegment552.children = new MFNode();

HAnimSegment552.children[0] = Transform553;

HAnimJoint551.children = new MFNode();

HAnimJoint551.children[0] = HAnimSegment552;

let HAnimJoint561 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint561.name = "r_metacarpophalangeal_2";
HAnimJoint561.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint561.center = new SFVec3f(new float[-8.52,27.24,0.6551]);
HAnimJoint561.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint561.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment562 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment562.name = "r_carpal_proximal_phalanx_2";
HAnimSegment562.DEF = "hanim_r_carpal_proximal_phalanx_2";
let Transform563 = browser.currentScene.createNode("Transform");
Transform563.translation = new SFVec3f(new float[-8.52,27.24,0.6551]);
let Shape564 = browser.currentScene.createNode("Shape");
let Appearance565 = browser.currentScene.createNode("Appearance");
let Material566 = browser.currentScene.createNode("Material");
Material566.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance565.material = Material566;

let ImageTexture567 = browser.currentScene.createNode("ImageTexture");
ImageTexture567.USE = "JinLOA2TextureAtlas";
Appearance565.texture = ImageTexture567;

Shape564.appearance = Appearance565;

let IndexedFaceSet568 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet568.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1]);
IndexedFaceSet568.creaseAngle = 3.14159;
IndexedFaceSet568.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1]);
let Coordinate569 = browser.currentScene.createNode("Coordinate");
Coordinate569.point = new MFVec3f(new float[0.2499,-1.331,0.1644,0.2541,-1.339,-0.0655,0.0349,-1.351,0.1633,0.0391,-1.359,-0.0666,0.3958,-1.152,0.159,0.2314,-1.162,0.3307,0.0165,-1.182,0.3296,-0.1416,-1.203,0.1563,-0.1374,-1.21,-0.0736,0.0269,-1.201,-0.2453,0.2419,-1.181,-0.2442,0.4,-1.16,-0.0709,0.3504,-0.2375,0.1465,0.166,-0.2482,0.3391,-0.0897,-0.2722,0.3377,-0.267,-0.2955,0.1434,-0.2621,-0.3044,-0.1302,-0.0777,-0.2937,-0.3227,0.1781,-0.2697,-0.3214,0.3554,-0.2464,-0.127,0.3661,-0.0905,0.1542,0.1642,-0.1021,0.365,-0.1159,-0.1284,0.3636,-0.3101,-0.1539,0.1508,-0.3046,-0.1637,-0.1488,-0.1027,-0.152,-0.3596,0.1774,-0.1258,-0.3581,0.3715,-0.1003,-0.1453,0.2544,0.0426,0.1044,0.1117,0.0344,0.2535,-0.0864,0.0158,0.2525,-0.2237,-0.0022,0.102,-0.2198,-0.0091,-0.1098,-0.077,-0.0009,-0.2589,0.121,0.0177,-0.2579,0.2583,0.0357,-0.1074,0.0117,0.0763,-0.005]);
IndexedFaceSet568.coord = Coordinate569;

let TextureCoordinate570 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate570.point = new MFVec2f(new float[0.454,0.6279,0.4498,0.6279,0.4498,0.6277,0.454,0.6277,0.4571,0.6295,0.4539,0.6296,0.4571,0.6293,0.4539,0.6291,0.4496,0.6291,0.4464,0.6292,0.4465,0.6294,0.4497,0.6295,0.4573,0.6381,0.4537,0.6382,0.4572,0.6379,0.4536,0.6377,0.4486,0.6376,0.445,0.6377,0.445,0.6379,0.4486,0.6381,0.4578,0.6395,0.4538,0.6396,0.4577,0.6392,0.4538,0.639,0.4482,0.6389,0.4443,0.639,0.4444,0.6393,0.4483,0.6395,0.4557,0.6408,0.4529,0.6408,0.4557,0.6406,0.4529,0.6404,0.449,0.6404,0.4462,0.6404,0.4462,0.6406,0.449,0.6408,0.4509,0.6412]);
IndexedFaceSet568.texCoord = TextureCoordinate570;

Shape564.geometry = IndexedFaceSet568;

Transform563.child = new undefined();

Transform563.child[0] = Shape564;

HAnimSegment562.children = new MFNode();

HAnimSegment562.children[0] = Transform563;

HAnimJoint561.children = new MFNode();

HAnimJoint561.children[0] = HAnimSegment562;

let HAnimJoint571 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint571.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint571.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint571.center = new SFVec3f(new float[-8.45,26.1,0.6956]);
HAnimJoint571.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint571.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment572 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment572.name = "r_carpal_middle_phalanx_2";
HAnimSegment572.DEF = "hanim_r_carpal_middle_phalanx_2";
let Transform573 = browser.currentScene.createNode("Transform");
Transform573.translation = new SFVec3f(new float[-8.45,26.1,0.6956]);
let Shape574 = browser.currentScene.createNode("Shape");
let Appearance575 = browser.currentScene.createNode("Appearance");
let Material576 = browser.currentScene.createNode("Material");
Material576.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance575.material = Material576;

let ImageTexture577 = browser.currentScene.createNode("ImageTexture");
ImageTexture577.USE = "JinLOA2TextureAtlas";
Appearance575.texture = ImageTexture577;

Shape574.appearance = Appearance575;

let IndexedFaceSet578 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet578.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1]);
IndexedFaceSet578.creaseAngle = 3.14159;
IndexedFaceSet578.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1]);
let Coordinate579 = browser.currentScene.createNode("Coordinate");
Coordinate579.point = new MFVec3f(new float[0.4479,-1.125,0.1554,0.4519,-1.132,-0.0632,0.2499,-1.18,0.1557,0.2539,-1.187,-0.0629,0.5544,-0.9319,0.1491,0.4029,-0.9674,0.3134,0.2049,-1.022,0.3137,0.0594,-1.068,0.1499,0.0634,-1.075,-0.0687,0.2149,-1.04,-0.2329,0.4129,-0.9852,-0.2333,0.5584,-0.939,-0.0695,0.3333,-0.0803,0.1251,0.1781,-0.1166,0.2933,-0.037,-0.1758,0.2937,-0.186,-0.2231,0.1259,-0.1817,-0.2308,-0.1116,-0.0265,-0.1945,-0.2799,0.1886,-0.1353,-0.2802,0.3376,-0.088,-0.1125,0.2019,0.1709,0.088,0.0815,0.1427,0.2185,-0.0854,0.0967,0.2188,-0.2011,0.06,0.0887,-0.1977,0.054,-0.0957,-0.0773,0.0822,-0.2262,0.0896,0.1281,-0.2265,0.2053,0.1648,-0.0963,-0.0132,0.1679,-0.006]);
IndexedFaceSet578.coord = Coordinate579;

let TextureCoordinate580 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate580.point = new MFVec2f(new float[0.4546,0.6191,0.4506,0.619,0.4506,0.6185,0.4546,0.6186,0.4575,0.6206,0.4545,0.6209,0.4576,0.6201,0.4545,0.6196,0.4505,0.6196,0.4474,0.6199,0.4474,0.6204,0.4505,0.6209,0.4572,0.6286,0.4541,0.6289,0.4572,0.628,0.4541,0.6276,0.4497,0.6275,0.4466,0.6279,0.4465,0.6284,0.4497,0.6289,0.4558,0.631,0.4534,0.6313,0.4558,0.6306,0.4534,0.6302,0.45,0.6302,0.4475,0.6305,0.4475,0.6309,0.45,0.6312,0.4516,0.6313]);
IndexedFaceSet578.texCoord = TextureCoordinate580;

Shape574.geometry = IndexedFaceSet578;

Transform573.child = new undefined();

Transform573.child[0] = Shape574;

HAnimSegment572.children = new MFNode();

HAnimSegment572.children[0] = Transform573;

HAnimJoint571.children = new MFNode();

HAnimJoint571.children[0] = HAnimSegment572;

let HAnimJoint581 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint581.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint581.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint581.center = new SFVec3f(new float[-8.192,25.17,0.7315]);
HAnimJoint581.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint581.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment582 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment582.name = "r_carpal_distal_phalanx_2";
HAnimSegment582.DEF = "hanim_r_carpal_distal_phalanx_2";
let Transform583 = browser.currentScene.createNode("Transform");
Transform583.translation = new SFVec3f(new float[-8.192,25.17,0.7315]);
let Shape584 = browser.currentScene.createNode("Shape");
let Appearance585 = browser.currentScene.createNode("Appearance");
let Material586 = browser.currentScene.createNode("Material");
Material586.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance585.material = Material586;

let ImageTexture587 = browser.currentScene.createNode("ImageTexture");
ImageTexture587.USE = "JinLOA2TextureAtlas";
Appearance585.texture = ImageTexture587;

Shape584.appearance = Appearance585;

let IndexedFaceSet588 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet588.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1]);
IndexedFaceSet588.creaseAngle = 3.14159;
IndexedFaceSet588.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1]);
let Coordinate589 = browser.currentScene.createNode("Coordinate");
Coordinate589.point = new MFVec3f(new float[0.6187,-1.071,0.1411,0.6221,-1.077,-0.0485,0.4578,-1.147,0.1426,0.4613,-1.153,-0.047,0.6714,-0.8704,0.1341,0.5482,-0.923,0.2774,0.3873,-0.9993,0.2789,0.2693,-1.061,0.1378,0.2727,-1.067,-0.0518,0.396,-1.015,-0.1951,0.5568,-0.9385,-0.1966,0.6749,-0.8765,-0.0555,0.3236,-0.0612,0.1191,0.1854,-0.1202,0.2799,-0.006,-0.211,0.2816,-0.1384,-0.2805,0.1233,-0.1343,-0.2879,-0.1023,0.004,-0.2288,-0.263,0.1953,-0.138,-0.2647,0.3277,-0.0685,-0.1065,0.2135,0.0836,0.0963,0.0945,0.035,0.233,-0.0723,-0.0325,0.2317,-0.1865,-0.0807,0.0968,-0.1843,-0.0816,-0.0912,-0.0691,-0.0336,-0.2249,0.0937,0.0356,-0.2277,0.2116,0.0844,-0.0958,-0.0314,0.0875,-0.0035]);
IndexedFaceSet588.coord = Coordinate589;

let TextureCoordinate590 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate590.point = new MFVec2f(new float[0.455,0.6109,0.4515,0.6108,0.4515,0.6101,0.455,0.6102,0.4575,0.6123,0.4549,0.6128,0.4576,0.6116,0.455,0.611,0.4514,0.6109,0.4488,0.6114,0.4488,0.6121,0.4514,0.6127,0.4576,0.6198,0.4546,0.6204,0.4576,0.619,0.4547,0.6183,0.4505,0.6182,0.4475,0.6188,0.4475,0.6197,0.4504,0.6203,0.4567,0.6213,0.4542,0.6217,0.4567,0.6206,0.4542,0.6202,0.4507,0.6202,0.4482,0.6206,0.4482,0.6213,0.4506,0.6217,0.4523,0.6218]);
IndexedFaceSet588.texCoord = TextureCoordinate590;

Shape584.geometry = IndexedFaceSet588;

Transform583.child = new undefined();

Transform583.child[0] = Shape584;

HAnimSegment582.children = new MFNode();

HAnimSegment582.children[0] = Transform583;

HAnimJoint581.children = new MFNode();

HAnimJoint581.children[0] = HAnimSegment582;

HAnimJoint571.children[1] = HAnimJoint581;

HAnimJoint561.children[1] = HAnimJoint571;

HAnimJoint551.children[1] = HAnimJoint561;

HAnimJoint511.children[2] = HAnimJoint551;

let HAnimJoint591 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint591.name = "r_carpometacarpal_3";
HAnimJoint591.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint591.center = new SFVec3f(new float[-8.344,28.65,-0.194]);
HAnimJoint591.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint591.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment592 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment592.name = "r_metacarpal_3";
HAnimSegment592.DEF = "hanim_r_metacarpal_3";
let Transform593 = browser.currentScene.createNode("Transform");
Transform593.translation = new SFVec3f(new float[-8.344,28.65,-0.194]);
let Shape594 = browser.currentScene.createNode("Shape");
let Appearance595 = browser.currentScene.createNode("Appearance");
let Material596 = browser.currentScene.createNode("Material");
Material596.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance595.material = Material596;

let ImageTexture597 = browser.currentScene.createNode("ImageTexture");
ImageTexture597.USE = "JinLOA2TextureAtlas";
Appearance595.texture = ImageTexture597;

Shape594.appearance = Appearance595;

let IndexedFaceSet598 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet598.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1]);
IndexedFaceSet598.creaseAngle = 3.14159;
IndexedFaceSet598.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1]);
let Coordinate599 = browser.currentScene.createNode("Coordinate");
Coordinate599.point = new MFVec3f(new float[-0.0157,-1.601,0.0972,-0.0217,-1.599,-0.1348,-0.2598,-1.581,0.1076,-0.2658,-1.578,-0.1245,0.183,-1.427,0.091,0.0045,-1.414,0.2728,-0.2395,-1.393,0.2832,-0.4271,-1.376,0.1169,-0.4331,-1.374,-0.1151,-0.2546,-1.387,-0.2969,-0.0105,-1.408,-0.3073,0.177,-1.425,-0.1411,0.3164,-0.3793,0.1197,0.1161,-0.3643,0.3236,-0.1742,-0.3403,0.3359,-0.3846,-0.3213,0.1495,-0.3918,-0.3185,-0.1266,-0.1915,-0.3335,-0.3306,0.0988,-0.3575,-0.3429,0.3092,-0.3765,-0.1564,0.3602,-0.2157,0.1315,0.143,-0.1995,0.3527,-0.172,-0.1734,0.3661,-0.4003,-0.1528,0.1638,-0.408,-0.1498,-0.1357,-0.1908,-0.166,-0.357,0.1242,-0.1921,-0.3703,0.3524,-0.2126,-0.168,0.2615,-0.0399,0.0937,0.1079,-0.0284,0.2501,-0.1148,-0.01,0.2596,-0.2762,0.0046,0.1165,-0.2817,0.0068,-0.0952,-0.1281,-0.0047,-0.2517,0.0946,-0.0232,-0.2611,0.256,-0.0377,-0.1181,-0.0044,0.0523,-0.0002]);
IndexedFaceSet598.coord = Coordinate599;

let TextureCoordinate600 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate600.point = new MFVec2f(new float[0.4371,0.6382,0.4328,0.6382,0.4329,0.6384,0.4372,0.6384,0.4403,0.64,0.4369,0.6398,0.4405,0.6401,0.4374,0.6403,0.4331,0.6403,0.4298,0.6402,0.4296,0.64,0.4326,0.6398,0.4413,0.6498,0.4375,0.6497,0.4415,0.65,0.438,0.6502,0.4329,0.6502,0.4291,0.6501,0.4289,0.6499,0.4324,0.6497,0.4418,0.6514,0.4377,0.6512,0.442,0.6516,0.4383,0.6518,0.4327,0.6518,0.4286,0.6517,0.4284,0.6514,0.4321,0.6512,0.4399,0.653,0.437,0.6529,0.4401,0.6531,0.4374,0.6533,0.4335,0.6533,0.4306,0.6532,0.4304,0.653,0.4331,0.6529,0.4352,0.6537]);
IndexedFaceSet598.texCoord = TextureCoordinate600;

Shape594.geometry = IndexedFaceSet598;

Transform593.child = new undefined();

Transform593.child[0] = Shape594;

HAnimSegment592.children = new MFNode();

HAnimSegment592.children[0] = Transform593;

HAnimJoint591.children = new MFNode();

HAnimJoint591.children[0] = HAnimSegment592;

let HAnimJoint601 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint601.name = "r_metacarpophalangeal_3";
HAnimJoint601.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint601.center = new SFVec3f(new float[-8.52,27.26,-0.1959]);
HAnimJoint601.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint601.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment602 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment602.name = "r_carpal_proximal_phalanx_3";
HAnimSegment602.DEF = "hanim_r_carpal_proximal_phalanx_3";
let Transform603 = browser.currentScene.createNode("Transform");
Transform603.translation = new SFVec3f(new float[-8.52,27.26,-0.1959]);
let Shape604 = browser.currentScene.createNode("Shape");
let Appearance605 = browser.currentScene.createNode("Appearance");
let Material606 = browser.currentScene.createNode("Material");
Material606.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance605.material = Material606;

let ImageTexture607 = browser.currentScene.createNode("ImageTexture");
ImageTexture607.USE = "JinLOA2TextureAtlas";
Appearance605.texture = ImageTexture607;

Shape604.appearance = Appearance605;

let IndexedFaceSet608 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet608.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1]);
IndexedFaceSet608.creaseAngle = 3.14159;
IndexedFaceSet608.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1]);
let Coordinate609 = browser.currentScene.createNode("Coordinate");
Coordinate609.point = new MFVec3f(new float[0.2259,-1.448,0.0923,0.2194,-1.446,-0.1376,0.0106,-1.469,0.1016,0.0041,-1.467,-0.1283,0.3742,-1.258,0.088,0.2177,-1.275,0.2673,0.0024,-1.296,0.2766,-0.1639,-1.31,0.1112,-0.1704,-1.307,-0.1187,-0.0138,-1.29,-0.2981,0.2014,-1.269,-0.3073,0.3677,-1.255,-0.1419,0.3422,-0.2825,0.1227,0.1666,-0.302,0.3239,-0.0895,-0.3267,0.3349,-0.2761,-0.3422,0.1493,-0.2838,-0.3394,-0.1242,-0.1082,-0.3199,-0.3253,0.1479,-0.2952,-0.3364,0.3345,-0.2797,-0.1508,0.3605,-0.1263,0.1367,0.1681,-0.1476,0.357,-0.1123,-0.1747,0.3691,-0.3166,-0.1917,0.1659,-0.3251,-0.1886,-0.1336,-0.1327,-0.1672,-0.3539,0.1477,-0.1401,-0.366,0.352,-0.1232,-0.1627,0.2486,0.0181,0.0994,0.1126,0.003,0.2552,-0.0857,-0.0161,0.2638,-0.2302,-0.0281,0.1201,-0.2362,-0.0259,-0.0917,-0.1002,-0.0108,-0.2475,0.0981,0.0083,-0.256,0.2426,0.0203,-0.1123,0.0014,0.0597,0.0048]);
IndexedFaceSet608.coord = Coordinate609;

let TextureCoordinate610 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate610.point = new MFVec2f(new float[0.4369,0.6266,0.4327,0.6266,0.4328,0.6264,0.4371,0.6264,0.4402,0.6282,0.4368,0.6283,0.4403,0.628,0.4373,0.6279,0.433,0.6279,0.4297,0.628,0.4295,0.6282,0.4326,0.6284,0.4412,0.6373,0.4375,0.6375,0.4414,0.6371,0.438,0.637,0.4329,0.637,0.4292,0.6372,0.429,0.6374,0.4324,0.6375,0.4418,0.6388,0.4378,0.639,0.4421,0.6385,0.4383,0.6384,0.4327,0.6384,0.4287,0.6386,0.4284,0.6389,0.4322,0.639,0.4399,0.6402,0.4371,0.6403,0.4401,0.64,0.4374,0.6399,0.4335,0.6399,0.4306,0.6401,0.4305,0.6402,0.4331,0.6404,0.4353,0.6407]);
IndexedFaceSet608.texCoord = TextureCoordinate610;

Shape604.geometry = IndexedFaceSet608;

Transform603.child = new undefined();

Transform603.child[0] = Shape604;

HAnimSegment602.children = new MFNode();

HAnimSegment602.children[0] = Transform603;

HAnimJoint601.children = new MFNode();

HAnimJoint601.children[0] = HAnimSegment602;

let HAnimJoint611 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint611.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint611.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint611.center = new SFVec3f(new float[-8.477,26.07,-0.2214]);
HAnimJoint611.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint611.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment612 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment612.name = "r_carpal_middle_phalanx_3";
HAnimSegment612.DEF = "hanim_r_carpal_middle_phalanx_3";
let Transform613 = browser.currentScene.createNode("Transform");
Transform613.translation = new SFVec3f(new float[-8.477,26.07,-0.2214]);
let Shape614 = browser.currentScene.createNode("Shape");
let Appearance615 = browser.currentScene.createNode("Appearance");
let Material616 = browser.currentScene.createNode("Material");
Material616.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance615.material = Material616;

let ImageTexture617 = browser.currentScene.createNode("ImageTexture");
ImageTexture617.USE = "JinLOA2TextureAtlas";
Appearance615.texture = ImageTexture617;

Shape614.appearance = Appearance615;

let IndexedFaceSet618 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet618.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1]);
IndexedFaceSet618.creaseAngle = 3.14159;
IndexedFaceSet618.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1]);
let Coordinate619 = browser.currentScene.createNode("Coordinate");
Coordinate619.point = new MFVec3f(new float[0.4389,-1.268,0.089,0.4327,-1.265,-0.1296,0.2401,-1.325,0.0971,0.234,-1.323,-0.1215,0.5481,-1.062,0.0865,0.4036,-1.106,0.2566,0.2049,-1.164,0.2647,0.0512,-1.205,0.1068,0.045,-1.203,-0.1118,0.1894,-1.158,-0.2818,0.3882,-1.101,-0.2899,0.5419,-1.059,-0.132,0.3388,-0.1526,0.1159,0.1909,-0.1984,0.2901,-0.025,-0.2608,0.2989,-0.1825,-0.3032,0.1372,-0.1892,-0.3008,-0.1003,-0.0412,-0.2549,-0.2744,0.1747,-0.1925,-0.2833,0.3321,-0.1501,-0.1216,0.2096,0.117,0.0982,0.0948,0.0814,0.2333,-0.0727,0.033,0.2402,-0.1949,0.0001,0.1147,-0.2001,0.002,-0.0696,-0.0853,0.0376,-0.2048,0.0823,0.086,-0.2116,0.2044,0.1189,-0.0861,-0.0097,0.1188,0.0156]);
IndexedFaceSet618.coord = Coordinate619;

let TextureCoordinate620 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate620.point = new MFVec2f(new float[0.4364,0.617,0.4323,0.6171,0.4325,0.6165,0.4365,0.6165,0.4395,0.6186,0.4363,0.619,0.4397,0.618,0.4367,0.6176,0.4327,0.6176,0.4295,0.6181,0.4294,0.6186,0.4323,0.619,0.4401,0.6271,0.4369,0.6275,0.4403,0.6265,0.4373,0.6261,0.4329,0.6261,0.4297,0.6266,0.4295,0.6271,0.4325,0.6275,0.4391,0.6297,0.4366,0.6301,0.4392,0.6293,0.4369,0.629,0.4335,0.629,0.431,0.6293,0.4308,0.6298,0.4331,0.6301,0.435,0.6301]);
IndexedFaceSet618.texCoord = TextureCoordinate620;

Shape614.geometry = IndexedFaceSet618;

Transform613.child = new undefined();

Transform613.child[0] = Shape614;

HAnimSegment612.children = new MFNode();

HAnimSegment612.children[0] = Transform613;

HAnimJoint611.children = new MFNode();

HAnimJoint611.children[0] = HAnimSegment612;

let HAnimJoint621 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint621.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint621.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint621.center = new SFVec3f(new float[-8.25,25.030001,-0.2187]);
HAnimJoint621.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint621.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment622 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment622.name = "r_carpal_distal_phalanx_3";
HAnimSegment622.DEF = "hanim_r_carpal_distal_phalanx_3";
let Transform623 = browser.currentScene.createNode("Transform");
Transform623.translation = new SFVec3f(new float[-8.25,25.030001,-0.2187]);
let Shape624 = browser.currentScene.createNode("Shape");
let Appearance625 = browser.currentScene.createNode("Appearance");
let Material626 = browser.currentScene.createNode("Material");
Material626.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance625.material = Material626;

let ImageTexture627 = browser.currentScene.createNode("ImageTexture");
ImageTexture627.USE = "JinLOA2TextureAtlas";
Appearance625.texture = ImageTexture627;

Shape624.appearance = Appearance625;

let IndexedFaceSet628 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet628.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1]);
IndexedFaceSet628.creaseAngle = 3.14159;
IndexedFaceSet628.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1]);
let Coordinate629 = browser.currentScene.createNode("Coordinate");
Coordinate629.point = new MFVec3f(new float[0.631,-1.169,0.0421,0.6256,-1.167,-0.1475,0.4691,-1.25,0.0483,0.4637,-1.248,-0.1413,0.6864,-0.9557,0.0421,0.569,-1.018,0.1889,0.4071,-1.099,0.1951,0.2817,-1.158,0.0576,0.2763,-1.156,-0.1319,0.3937,-1.094,-0.2788,0.5556,-1.013,-0.285,0.681,-0.9537,-0.1474,0.3504,-0.0919,0.0851,0.2187,-0.1616,0.2498,0.026,-0.2579,0.2572,-0.1147,-0.3243,0.1029,-0.121,-0.322,-0.1226,0.0106,-0.2523,-0.2873,0.2033,-0.156,-0.2946,0.344,-0.0896,-0.1404,0.2414,0.0637,0.0753,0.128,0.0061,0.2155,-0.0399,-0.0652,0.2197,-0.161,-0.1101,0.0888,-0.1675,-0.1027,-0.0988,-0.0577,-0.0458,-0.2359,0.106,0.0275,-0.2439,0.2307,0.0733,-0.1162,-0.0079,0.0731,-0.0112]);
IndexedFaceSet628.coord = Coordinate629;

let TextureCoordinate630 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate630.point = new MFVec2f(new float[0.4356,0.6082,0.4321,0.6082,0.4322,0.6074,0.4357,0.6074,0.4383,0.6096,0.4356,0.6102,0.4384,0.6088,0.4359,0.6083,0.4324,0.6083,0.4296,0.6089,0.4295,0.6096,0.4321,0.6102,0.4394,0.6176,0.4364,0.6183,0.4396,0.6167,0.4367,0.6161,0.4325,0.6161,0.4295,0.6168,0.4293,0.6177,0.4322,0.6183,0.4388,0.6192,0.4362,0.6198,0.4389,0.6186,0.4364,0.6181,0.433,0.6182,0.4304,0.6187,0.4303,0.6194,0.4326,0.6199,0.4346,0.6199]);
IndexedFaceSet628.texCoord = TextureCoordinate630;

Shape624.geometry = IndexedFaceSet628;

Transform623.child = new undefined();

Transform623.child[0] = Shape624;

HAnimSegment622.children = new MFNode();

HAnimSegment622.children[0] = Transform623;

HAnimJoint621.children = new MFNode();

HAnimJoint621.children[0] = HAnimSegment622;

HAnimJoint611.children[1] = HAnimJoint621;

HAnimJoint601.children[1] = HAnimJoint611;

HAnimJoint591.children[1] = HAnimJoint601;

HAnimJoint511.children[3] = HAnimJoint591;

let HAnimJoint631 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint631.name = "r_carpometacarpal_4";
HAnimJoint631.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint631.center = new SFVec3f(new float[-8.339,28.57,-0.9243]);
HAnimJoint631.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint631.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment632 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment632.name = "r_metacarpal_4";
HAnimSegment632.DEF = "hanim_r_metacarpal_4";
let Transform633 = browser.currentScene.createNode("Transform");
Transform633.translation = new SFVec3f(new float[-8.339,28.57,-0.9243]);
let Shape634 = browser.currentScene.createNode("Shape");
let Appearance635 = browser.currentScene.createNode("Appearance");
let Material636 = browser.currentScene.createNode("Material");
Material636.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance635.material = Material636;

let ImageTexture637 = browser.currentScene.createNode("ImageTexture");
ImageTexture637.USE = "JinLOA2TextureAtlas";
Appearance635.texture = ImageTexture637;

Shape634.appearance = Appearance635;

let IndexedFaceSet638 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet638.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1]);
IndexedFaceSet638.creaseAngle = 3.14159;
IndexedFaceSet638.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1]);
let Coordinate639 = browser.currentScene.createNode("Coordinate");
Coordinate639.point = new MFVec3f(new float[0.014,-1.366,0.0295,0.0298,-1.354,-0.1885,-0.2211,-1.344,0.0143,-0.2053,-1.332,-0.2037,0.205,-1.209,0.0528,0.0169,-1.202,0.2049,-0.2182,-1.181,0.1897,-0.3826,-1.156,0.0148,-0.3668,-1.144,-0.2032,-0.1787,-1.151,-0.3553,0.0564,-1.172,-0.3401,0.2209,-1.197,-0.1652,0.3293,-0.2545,0.1423,0.1183,-0.2468,0.3129,-0.1614,-0.2216,0.2949,-0.3458,-0.1936,0.0987,-0.327,-0.1793,-0.1607,-0.116,-0.187,-0.3313,0.1637,-0.2122,-0.3132,0.3482,-0.2402,-0.117,0.3702,-0.1061,0.1656,0.1412,-0.0977,0.3507,-0.1622,-0.0704,0.3311,-0.3623,-0.04,0.1183,-0.3419,-0.0245,-0.1631,-0.1129,-0.0329,-0.3482,0.1905,-0.0602,-0.3286,0.3906,-0.0905,-0.1158,0.2788,0.0575,0.1279,0.1169,0.0634,0.2588,-0.0976,0.0827,0.2449,-0.2391,0.1042,0.0944,-0.2247,0.1152,-0.1045,-0.0628,0.1093,-0.2354,0.1518,0.0899,-0.2215,0.2933,0.0685,-0.0711,0.0325,0.1491,0.016]);
IndexedFaceSet638.coord = Coordinate639;

let TextureCoordinate640 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate640.point = new MFVec2f(new float[0.4223,0.6397,0.4182,0.6398,0.4179,0.64,0.422,0.6399,0.4255,0.6412,0.4227,0.6412,0.4252,0.6414,0.422,0.6417,0.418,0.6418,0.4151,0.6417,0.4154,0.6415,0.4187,0.6413,0.4275,0.6502,0.4244,0.6501,0.4272,0.6504,0.4235,0.6507,0.4187,0.6508,0.4156,0.6508,0.4159,0.6505,0.4196,0.6503,0.4282,0.6516,0.4248,0.6515,0.4279,0.6519,0.4239,0.6522,0.4187,0.6523,0.4153,0.6522,0.4156,0.652,0.4196,0.6517,0.4265,0.6531,0.4241,0.6531,0.4263,0.6533,0.4235,0.6535,0.4198,0.6536,0.4174,0.6536,0.4176,0.6534,0.4204,0.6532,0.422,0.6539]);
IndexedFaceSet638.texCoord = TextureCoordinate640;

Shape634.geometry = IndexedFaceSet638;

Transform633.child = new undefined();

Transform633.child[0] = Shape634;

HAnimSegment632.children = new MFNode();

HAnimSegment632.children[0] = Transform633;

HAnimJoint631.children = new MFNode();

HAnimJoint631.children[0] = HAnimSegment632;

let HAnimJoint641 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint641.name = "r_metacarpophalangeal_4";
HAnimJoint641.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint641.center = new SFVec3f(new float[-8.428,27.299999,-0.9985]);
HAnimJoint641.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint641.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment642 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment642.name = "r_carpal_proximal_phalanx_4";
HAnimSegment642.DEF = "hanim_r_carpal_proximal_phalanx_4";
let Transform643 = browser.currentScene.createNode("Transform");
Transform643.translation = new SFVec3f(new float[-8.428,27.299999,-0.9985]);
let Shape644 = browser.currentScene.createNode("Shape");
let Appearance645 = browser.currentScene.createNode("Appearance");
let Material646 = browser.currentScene.createNode("Material");
Material646.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance645.material = Material646;

let ImageTexture647 = browser.currentScene.createNode("ImageTexture");
ImageTexture647.USE = "JinLOA2TextureAtlas";
Appearance645.texture = ImageTexture647;

Shape644.appearance = Appearance645;

let IndexedFaceSet648 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet648.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1]);
IndexedFaceSet648.creaseAngle = 3.14159;
IndexedFaceSet648.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1]);
let Coordinate649 = browser.currentScene.createNode("Coordinate");
Coordinate649.point = new MFVec3f(new float[0.1847,-1.253,0.0467,0.1998,-1.241,-0.1693,-0.0227,-1.271,0.0316,-0.0076,-1.259,-0.1844,0.3279,-1.08,0.0673,0.161,-1.102,0.2179,-0.0464,-1.12,0.2028,-0.1906,-1.124,0.0295,-0.1754,-1.112,-0.1865,-0.0085,-1.09,-0.3372,0.1989,-1.072,-0.3221,0.3431,-1.068,-0.1487,0.2967,-0.1902,0.1418,0.1095,-0.215,0.3108,-0.1373,-0.2358,0.2929,-0.299,-0.2404,0.0984,-0.281,-0.2262,-0.1586,-0.0938,-0.2014,-0.3276,0.153,-0.1807,-0.3096,0.3147,-0.176,-0.1151,0.3133,-0.0482,0.1642,0.1083,-0.0753,0.3493,-0.1619,-0.0981,0.3296,-0.339,-0.1032,0.1167,-0.3192,-0.0876,-0.1647,-0.1142,-0.0605,-0.3498,0.156,-0.0377,-0.3301,0.3331,-0.0327,-0.1172,0.2099,0.0863,0.1241,0.0649,0.0671,0.255,-0.1261,0.051,0.2411,-0.2514,0.0474,0.0905,-0.2374,0.0585,-0.1085,-0.0924,0.0776,-0.2393,0.0986,0.0937,-0.2254,0.2239,0.0973,-0.0749,-0.0182,0.1305,0.0112]);
IndexedFaceSet648.coord = Coordinate649;

let TextureCoordinate650 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate650.point = new MFVec2f(new float[0.4212,0.6288,0.4172,0.6289,0.4169,0.6288,0.4209,0.6287,0.4244,0.6302,0.4216,0.6304,0.4241,0.6301,0.4209,0.63,0.4169,0.6301,0.4141,0.6304,0.4144,0.6305,0.4176,0.6306,0.4261,0.6386,0.423,0.6388,0.4258,0.6384,0.4222,0.6383,0.4174,0.6385,0.4143,0.6387,0.4146,0.6389,0.4182,0.6389,0.4268,0.6399,0.4234,0.6401,0.4265,0.6397,0.4225,0.6396,0.4173,0.6398,0.4139,0.64,0.4142,0.6402,0.4182,0.6403,0.4251,0.6412,0.4226,0.6414,0.4248,0.6411,0.422,0.641,0.4183,0.6411,0.4159,0.6413,0.4162,0.6415,0.419,0.6415,0.4206,0.6418]);
IndexedFaceSet648.texCoord = TextureCoordinate650;

Shape644.geometry = IndexedFaceSet648;

Transform643.child = new undefined();

Transform643.child[0] = Shape644;

HAnimSegment642.children = new MFNode();

HAnimSegment642.children[0] = Transform643;

HAnimJoint641.children = new MFNode();

HAnimJoint641.children[0] = HAnimSegment642;

let HAnimJoint651 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint651.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint651.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint651.center = new SFVec3f(new float[-8.428,26.290001,-1.034]);
HAnimJoint651.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint651.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment652 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment652.name = "r_carpal_middle_phalanx_4";
HAnimSegment652.DEF = "hanim_r_carpal_middle_phalanx_4";
let Transform653 = browser.currentScene.createNode("Transform");
Transform653.translation = new SFVec3f(new float[-8.428,26.290001,-1.034]);
let Shape654 = browser.currentScene.createNode("Shape");
let Appearance655 = browser.currentScene.createNode("Appearance");
let Material656 = browser.currentScene.createNode("Material");
Material656.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance655.material = Material656;

let ImageTexture657 = browser.currentScene.createNode("ImageTexture");
ImageTexture657.USE = "JinLOA2TextureAtlas";
Appearance655.texture = ImageTexture657;

Shape654.appearance = Appearance655;

let IndexedFaceSet658 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet658.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1]);
IndexedFaceSet658.creaseAngle = 3.14159;
IndexedFaceSet658.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1]);
let Coordinate659 = browser.currentScene.createNode("Coordinate");
Coordinate659.point = new MFVec3f(new float[0.412,-1.137,0.0335,0.4261,-1.125,-0.1679,0.2243,-1.187,0.0176,0.2385,-1.176,-0.1838,0.5153,-0.9493,0.0522,0.3639,-0.9958,0.1913,0.1762,-1.047,0.1754,0.0461,-1.076,0.0125,0.0602,-1.065,-0.1888,0.2116,-1.019,-0.3279,0.3992,-0.9679,-0.312,0.5294,-0.9381,-0.1491,0.3178,-0.1177,0.1,0.1627,-0.1653,0.2425,-0.0412,-0.2206,0.2252,-0.1745,-0.2511,0.0583,-0.1591,-0.239,-0.1604,-0.0041,-0.1914,-0.3029,0.1998,-0.1361,-0.2856,0.3331,-0.1056,-0.1188,0.1985,0.1307,0.0829,0.0782,0.0937,0.1934,-0.08,0.0508,0.18,-0.1835,0.0271,0.0505,-0.1716,0.0365,-0.1192,-0.0513,0.0735,-0.2298,0.1069,0.1164,-0.2164,0.2104,0.1401,-0.0869,-0.0002,0.1379,-0.0157]);
IndexedFaceSet658.coord = Coordinate659;

let TextureCoordinate660 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate660.point = new MFVec2f(new float[0.4203,0.6204,0.4166,0.6205,0.4163,0.62,0.42,0.6199,0.4232,0.6217,0.4207,0.6221,0.4229,0.6212,0.4199,0.6209,0.4162,0.621,0.4136,0.6215,0.4139,0.622,0.4169,0.6222,0.4242,0.6295,0.4215,0.6299,0.4239,0.629,0.4208,0.6287,0.4167,0.6288,0.4141,0.6293,0.4144,0.6298,0.4175,0.6301,0.4233,0.6319,0.4212,0.6323,0.423,0.6315,0.4206,0.6313,0.4175,0.6314,0.4154,0.6317,0.4157,0.6321,0.4181,0.6324,0.4194,0.6323]);
IndexedFaceSet658.texCoord = TextureCoordinate660;

Shape654.geometry = IndexedFaceSet658;

Transform653.child = new undefined();

Transform653.child[0] = Shape654;

HAnimSegment652.children = new MFNode();

HAnimSegment652.children[0] = Transform653;

HAnimJoint651.children = new MFNode();

HAnimJoint651.children[0] = HAnimSegment652;

let HAnimJoint661 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint661.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint661.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint661.center = new SFVec3f(new float[-8.192,25.309999,-1.124]);
HAnimJoint661.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint661.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment662 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment662.name = "r_carpal_distal_phalanx_4";
HAnimSegment662.DEF = "hanim_r_carpal_distal_phalanx_4";
let Transform663 = browser.currentScene.createNode("Transform");
Transform663.translation = new SFVec3f(new float[-8.192,25.309999,-1.124]);
let Shape664 = browser.currentScene.createNode("Shape");
let Appearance665 = browser.currentScene.createNode("Appearance");
let Material666 = browser.currentScene.createNode("Material");
Material666.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance665.material = Material666;

let ImageTexture667 = browser.currentScene.createNode("ImageTexture");
ImageTexture667.USE = "JinLOA2TextureAtlas";
Appearance665.texture = ImageTexture667;

Shape664.appearance = Appearance665;

let IndexedFaceSet668 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet668.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1]);
IndexedFaceSet668.creaseAngle = 3.14159;
IndexedFaceSet668.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1]);
let Coordinate669 = browser.currentScene.createNode("Coordinate");
Coordinate669.point = new MFVec3f(new float[0.5436,-1.006,0.082,0.5559,-0.9964,-0.0922,0.3911,-1.079,0.0671,0.4033,-1.069,-0.1071,0.596,-0.8116,0.0978,0.4725,-0.8732,0.2172,0.3199,-0.9458,0.2024,0.2147,-0.9931,0.0605,0.2269,-0.9834,-0.1137,0.3505,-0.9218,-0.2332,0.503,-0.8491,-0.2183,0.6083,-0.8019,-0.0765,0.2786,-0.0205,0.1427,0.14,-0.0896,0.2768,-0.0415,-0.176,0.2591,-0.1596,-0.229,0.1,-0.1451,-0.2175,-0.1073,-0.0064,-0.1484,-0.2413,0.1751,-0.062,-0.2236,0.2931,-0.009,-0.0645,0.1776,0.1232,0.1297,0.0583,0.0659,0.2438,-0.0996,0.0023,0.2269,-0.2013,-0.0322,0.0923,-0.1903,-0.0176,-0.08,-0.0748,0.0389,-0.1916,0.0796,0.1047,-0.1786,0.185,0.14,-0.0465,-0.0484,0.1379,0.025]);
IndexedFaceSet668.coord = Coordinate669;

let TextureCoordinate670 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate670.point = new MFVec2f(new float[0.4195,0.6124,0.4163,0.6125,0.416,0.6118,0.4193,0.6117,0.422,0.6137,0.4198,0.6143,0.4218,0.613,0.4191,0.6126,0.4159,0.6126,0.4137,0.6132,0.414,0.6139,0.4166,0.6143,0.4231,0.621,0.4207,0.6217,0.4228,0.6202,0.4199,0.6197,0.416,0.6198,0.4135,0.6205,0.4139,0.6213,0.4168,0.6218,0.4225,0.6225,0.4204,0.623,0.4222,0.6219,0.4197,0.6216,0.4165,0.6217,0.4145,0.6223,0.4147,0.6229,0.4172,0.6232,0.4185,0.6232]);
IndexedFaceSet668.texCoord = TextureCoordinate670;

Shape664.geometry = IndexedFaceSet668;

Transform663.child = new undefined();

Transform663.child[0] = Shape664;

HAnimSegment662.children = new MFNode();

HAnimSegment662.children[0] = Transform663;

HAnimJoint661.children = new MFNode();

HAnimJoint661.children[0] = HAnimSegment662;

HAnimJoint651.children[1] = HAnimJoint661;

HAnimJoint641.children[1] = HAnimJoint651;

HAnimJoint631.children[1] = HAnimJoint641;

HAnimJoint511.children[4] = HAnimJoint631;

let HAnimJoint671 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint671.name = "r_carpometacarpal_5";
HAnimJoint671.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint671.center = new SFVec3f(new float[-8.197,28.370001,-1.528]);
HAnimJoint671.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint671.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment672 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment672.name = "r_metacarpal_5";
HAnimSegment672.DEF = "hanim_r_metacarpal_5";
let Transform673 = browser.currentScene.createNode("Transform");
Transform673.translation = new SFVec3f(new float[-8.197,28.370001,-1.528]);
let Shape674 = browser.currentScene.createNode("Shape");
let Appearance675 = browser.currentScene.createNode("Appearance");
let Material676 = browser.currentScene.createNode("Material");
Material676.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance675.material = Material676;

let ImageTexture677 = browser.currentScene.createNode("ImageTexture");
ImageTexture677.USE = "JinLOA2TextureAtlas";
Appearance675.texture = ImageTexture677;

Shape674.appearance = Appearance675;

let IndexedFaceSet678 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet678.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1]);
IndexedFaceSet678.creaseAngle = 3.14159;
IndexedFaceSet678.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1]);
let Coordinate679 = browser.currentScene.createNode("Coordinate");
Coordinate679.point = new MFVec3f(new float[-0.0463,-0.9645,-0.0622,-0.0267,-0.942,-0.253,-0.2519,-0.9328,-0.0794,-0.2324,-0.9103,-0.2702,0.1254,-0.8655,-0.031,-0.0435,-0.8586,0.0992,-0.2492,-0.8269,0.082,-0.3888,-0.7862,-0.074,-0.3693,-0.7638,-0.2648,-0.2004,-0.7707,-0.395,0.0053,-0.8024,-0.3779,0.1449,-0.843,-0.2218,0.2585,-0.1911,0.0918,0.069,-0.1834,0.2379,-0.1757,-0.1456,0.2175,-0.3323,-0.1,0.0425,-0.309,-0.0733,-0.1846,-0.1196,-0.0811,-0.3307,0.1251,-0.1188,-0.3102,0.2817,-0.1644,-0.1352,0.2978,-0.0883,0.1196,0.0923,-0.0799,0.2781,-0.1732,-0.0389,0.2559,-0.343,0.0105,0.066,-0.3178,0.0395,-0.1803,-0.1123,0.0311,-0.3387,0.1532,-0.0098,-0.3166,0.3231,-0.0593,-0.1267,0.223,0.0382,0.0917,0.0776,0.0442,0.2038,-0.1101,0.0732,0.1881,-0.2302,0.1081,0.0539,-0.2124,0.1286,-0.1203,-0.0671,0.1227,-0.2324,0.1207,0.0937,-0.2167,0.2408,0.0588,-0.0824,0.0116,0.1281,-0.0076]);
IndexedFaceSet678.coord = Coordinate679;

let TextureCoordinate680 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate680.point = new MFVec2f(new float[0.4094,0.6427,0.4058,0.6429,0.4055,0.6432,0.4091,0.643,0.4124,0.6437,0.41,0.6437,0.412,0.644,0.4092,0.6444,0.4056,0.6446,0.4032,0.6445,0.4035,0.6443,0.4064,0.6439,0.4149,0.6501,0.4122,0.65,0.4146,0.6504,0.4113,0.6509,0.4071,0.6511,0.4044,0.651,0.4048,0.6507,0.408,0.6502,0.4157,0.651,0.4127,0.651,0.4153,0.6514,0.4118,0.6519,0.4072,0.6522,0.4043,0.6521,0.4047,0.6517,0.4082,0.6512,0.4143,0.6522,0.4122,0.6522,0.414,0.6525,0.4115,0.6528,0.4083,0.653,0.4062,0.6529,0.4065,0.6527,0.409,0.6523,0.4104,0.653]);
IndexedFaceSet678.texCoord = TextureCoordinate680;

Shape674.geometry = IndexedFaceSet678;

Transform673.child = new undefined();

Transform673.child[0] = Shape674;

HAnimSegment672.children = new MFNode();

HAnimSegment672.children[0] = Transform673;

HAnimJoint671.children = new MFNode();

HAnimJoint671.children[0] = HAnimSegment672;

let HAnimJoint681 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint681.name = "r_metacarpophalangeal_5";
HAnimJoint681.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint681.center = new SFVec3f(new float[-8.334,27.5,-1.701]);
HAnimJoint681.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint681.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment682 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment682.name = "r_carpal_proximal_phalanx_5";
HAnimSegment682.DEF = "hanim_r_carpal_proximal_phalanx_5";
let Transform683 = browser.currentScene.createNode("Transform");
Transform683.translation = new SFVec3f(new float[-8.334,27.5,-1.701]);
let Shape684 = browser.currentScene.createNode("Shape");
let Appearance685 = browser.currentScene.createNode("Appearance");
let Material686 = browser.currentScene.createNode("Material");
Material686.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance685.material = Material686;

let ImageTexture687 = browser.currentScene.createNode("ImageTexture");
ImageTexture687.USE = "JinLOA2TextureAtlas";
Appearance685.texture = ImageTexture687;

Shape684.appearance = Appearance685;

let IndexedFaceSet688 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet688.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1]);
IndexedFaceSet688.creaseAngle = 3.14159;
IndexedFaceSet688.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1]);
let Coordinate689 = browser.currentScene.createNode("Coordinate");
Coordinate689.point = new MFVec3f(new float[0.1298,-0.9343,0.012,0.1487,-0.912,-0.1771,-0.0526,-0.9323,-0.0063,-0.0337,-0.91,-0.1954,0.2599,-0.8204,0.0405,0.1089,-0.8356,0.1686,-0.0735,-0.8336,0.1504,-0.1961,-0.8154,-0.0051,-0.1772,-0.793,-0.1942,-0.0262,-0.7778,-0.3224,0.1562,-0.7798,-0.3041,0.2788,-0.7981,-0.1486,0.2549,-0.1812,0.1442,0.0856,-0.1983,0.2879,-0.1314,-0.1959,0.2662,-0.269,-0.1755,0.0918,-0.2465,-0.1489,-0.1332,-0.0771,-0.1318,-0.2769,0.1399,-0.1342,-0.2552,0.2774,-0.1547,-0.0808,0.2729,-0.0814,0.1704,0.0874,-0.1001,0.3278,-0.1502,-0.0975,0.304,-0.3008,-0.0751,0.113,-0.2762,-0.046,-0.1333,-0.0907,-0.0273,-0.2907,0.1469,-0.0299,-0.2669,0.2975,-0.0523,-0.0759,0.1866,0.0252,0.139,0.0555,0.012,0.2502,-0.1126,0.0138,0.2334,-0.2191,0.0297,0.0984,-0.2016,0.0502,-0.0758,-0.0705,0.0635,-0.1871,0.0975,0.0616,-0.1703,0.204,0.0458,-0.0352,-0.0099,0.0797,0.0369]);
IndexedFaceSet688.coord = Coordinate689;

let TextureCoordinate690 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate690.point = new MFVec2f(new float[0.4075,0.6349,0.404,0.6351,0.4037,0.6351,0.4072,0.6349,0.4104,0.6358,0.4081,0.6359,0.4101,0.6358,0.4072,0.636,0.4037,0.6362,0.4013,0.6363,0.4017,0.6363,0.4046,0.6362,0.4127,0.6418,0.41,0.6419,0.4123,0.6418,0.409,0.642,0.4048,0.6423,0.4022,0.6424,0.4026,0.6424,0.4058,0.6422,0.4134,0.6427,0.4105,0.6429,0.413,0.6427,0.4094,0.6429,0.4048,0.6432,0.4019,0.6434,0.4024,0.6434,0.4059,0.6432,0.412,0.6438,0.4099,0.6439,0.4116,0.6438,0.4091,0.6439,0.4059,0.6441,0.4038,0.6442,0.4042,0.6442,0.4067,0.6441,0.408,0.6444]);
IndexedFaceSet688.texCoord = TextureCoordinate690;

Shape684.geometry = IndexedFaceSet688;

Transform683.child = new undefined();

Transform683.child[0] = Shape684;

HAnimSegment682.children = new MFNode();

HAnimSegment682.children[0] = Transform683;

HAnimJoint681.children = new MFNode();

HAnimJoint681.children[0] = HAnimSegment682;

let HAnimJoint691 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint691.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint691.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint691.center = new SFVec3f(new float[-8.338,26.780001,-1.768]);
HAnimJoint691.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint691.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment692 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment692.name = "r_carpal_middle_phalanx_5";
HAnimSegment692.DEF = "hanim_r_carpal_middle_phalanx_5";
let Transform693 = browser.currentScene.createNode("Transform");
Transform693.translation = new SFVec3f(new float[-8.338,26.780001,-1.768]);
let Shape694 = browser.currentScene.createNode("Shape");
let Appearance695 = browser.currentScene.createNode("Appearance");
let Material696 = browser.currentScene.createNode("Material");
Material696.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance695.material = Material696;

let ImageTexture697 = browser.currentScene.createNode("ImageTexture");
ImageTexture697.USE = "JinLOA2TextureAtlas";
Appearance695.texture = ImageTexture697;

Shape694.appearance = Appearance695;

let IndexedFaceSet698 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet698.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1]);
IndexedFaceSet698.creaseAngle = 3.14159;
IndexedFaceSet698.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1]);
let Coordinate699 = browser.currentScene.createNode("Coordinate");
Coordinate699.point = new MFVec3f(new float[0.3103,-0.8684,0.0017,0.3279,-0.8476,-0.1746,0.1444,-0.8917,-0.0183,0.162,-0.8709,-0.1946,0.4057,-0.7413,0.0284,0.268,-0.7744,0.1456,0.1021,-0.7977,0.1256,-0.0092,-0.7996,-0.0215,0.0085,-0.7788,-0.1978,0.1461,-0.7457,-0.315,0.3121,-0.7224,-0.295,0.4234,-0.7205,-0.1478,0.2537,-0.1316,0.1027,0.1126,-0.1655,0.2227,-0.0677,-0.1909,0.201,-0.1817,-0.1928,0.0502,-0.1625,-0.1702,-0.1412,-0.0215,-0.1363,-0.2613,0.1588,-0.1109,-0.2396,0.2728,-0.109,-0.0888,0.156,0.0566,0.096,0.0465,0.0303,0.1892,-0.0934,0.0106,0.1723,-0.1818,0.0091,0.0553,-0.1669,0.0266,-0.0933,-0.0575,0.0529,-0.1864,0.0824,0.0726,-0.1696,0.1709,0.0741,-0.0526,-0.016,0.0815,0.0057]);
IndexedFaceSet698.coord = Coordinate699;

let TextureCoordinate700 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate700.point = new MFVec2f(new float[0.4061,0.6287,0.4028,0.6289,0.4025,0.6286,0.4057,0.6284,0.4088,0.6296,0.4066,0.6299,0.4084,0.6293,0.4057,0.6293,0.4024,0.6295,0.4002,0.6298,0.4006,0.63,0.4033,0.6301,0.4102,0.6353,0.408,0.6356,0.4098,0.635,0.407,0.635,0.4035,0.6352,0.4012,0.6355,0.4016,0.6358,0.4044,0.6358,0.4096,0.6371,0.4079,0.6374,0.4093,0.6369,0.4071,0.6369,0.4043,0.6371,0.4026,0.6373,0.4029,0.6375,0.4051,0.6375,0.4062,0.6376]);
IndexedFaceSet698.texCoord = TextureCoordinate700;

Shape694.geometry = IndexedFaceSet698;

Transform693.child = new undefined();

Transform693.child[0] = Shape694;

HAnimSegment692.children = new MFNode();

HAnimSegment692.children[0] = Transform693;

HAnimJoint691.children = new MFNode();

HAnimJoint691.children[0] = HAnimSegment692;

let HAnimJoint701 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint701.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint701.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint701.center = new SFVec3f(new float[-8.153,26.040001,-1.886]);
HAnimJoint701.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint701.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment702 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment702.name = "r_carpal_distal_phalanx_5";
HAnimSegment702.DEF = "hanim_r_carpal_distal_phalanx_5";
let Transform703 = browser.currentScene.createNode("Transform");
Transform703.translation = new SFVec3f(new float[-8.153,26.040001,-1.886]);
let Shape704 = browser.currentScene.createNode("Shape");
let Appearance705 = browser.currentScene.createNode("Appearance");
let Material706 = browser.currentScene.createNode("Material");
Material706.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance705.material = Material706;

let ImageTexture707 = browser.currentScene.createNode("ImageTexture");
ImageTexture707.USE = "JinLOA2TextureAtlas";
Appearance705.texture = ImageTexture707;

Shape704.appearance = Appearance705;

let IndexedFaceSet708 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet708.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1]);
IndexedFaceSet708.creaseAngle = 3.14159;
IndexedFaceSet708.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1]);
let Coordinate709 = browser.currentScene.createNode("Coordinate");
Coordinate709.point = new MFVec3f(new float[0.4265,-0.7665,0.0531,0.4417,-0.7485,-0.0994,0.2908,-0.8079,0.0337,0.306,-0.7899,-0.1188,0.4775,-0.6307,0.0765,0.3642,-0.6752,0.1764,0.2285,-0.7166,0.157,0.1382,-0.7341,0.0281,0.1534,-0.7161,-0.1244,0.2667,-0.6716,-0.2242,0.4024,-0.6302,-0.2049,0.4927,-0.6127,-0.076,0.2189,-0.0422,0.1441,0.0919,-0.0921,0.2561,-0.0696,-0.1414,0.2331,-0.1709,-0.161,0.0886,-0.1528,-0.1396,-0.0929,-0.0258,-0.0897,-0.2049,0.1357,-0.0404,-0.1819,0.2371,-0.0207,-0.0373,0.1344,0.069,0.1368,0.0252,0.0277,0.2322,-0.1149,-0.0067,0.2114,-0.202,-0.0158,0.0895,-0.1878,0.0058,-0.0611,-0.082,0.0466,-0.1545,0.0552,0.083,-0.137,0.1456,0.0926,-0.0171,-0.0613,0.1015,0.0409]);
IndexedFaceSet708.coord = Coordinate709;

let TextureCoordinate710 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate710.point = new MFVec2f(new float[0.4049,0.6227,0.4021,0.6229,0.4017,0.6225,0.4045,0.6223,0.4072,0.6236,0.4053,0.624,0.4068,0.6232,0.4044,0.623,0.4016,0.6232,0.3997,0.6236,0.4001,0.624,0.4025,0.6242,0.4086,0.6291,0.4066,0.6295,0.4082,0.6286,0.4055,0.6284,0.4022,0.6286,0.4001,0.6291,0.4005,0.6296,0.4032,0.6297,0.4082,0.6302,0.4064,0.6306,0.4078,0.6299,0.4056,0.6298,0.4028,0.63,0.401,0.6304,0.4014,0.6307,0.4036,0.6308,0.4047,0.6309]);
IndexedFaceSet708.texCoord = TextureCoordinate710;

Shape704.geometry = IndexedFaceSet708;

Transform703.child = new undefined();

Transform703.child[0] = Shape704;

HAnimSegment702.children = new MFNode();

HAnimSegment702.children[0] = Transform703;

HAnimJoint701.children = new MFNode();

HAnimJoint701.children[0] = HAnimSegment702;

HAnimJoint691.children[1] = HAnimJoint701;

HAnimJoint681.children[1] = HAnimJoint691;

HAnimJoint671.children[1] = HAnimJoint681;

HAnimJoint511.children[5] = HAnimJoint671;

HAnimJoint501.children[1] = HAnimJoint511;

HAnimJoint491.children[1] = HAnimJoint501;

HAnimJoint481.children[1] = HAnimJoint491;

HAnimJoint471.children[1] = HAnimJoint481;

HAnimJoint221.children[2] = HAnimJoint471;

let HAnimJoint711 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint711.name = "vc4";
HAnimJoint711.DEF = "hanim_vc4";
HAnimJoint711.center = new SFVec3f(new float[0,54.419998,-0.6695]);
HAnimJoint711.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint711.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment712 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment712.name = "c4";
HAnimSegment712.DEF = "hanim_c4";
let Transform713 = browser.currentScene.createNode("Transform");
Transform713.translation = new SFVec3f(new float[0,54.419998,-0.6695]);
let Shape714 = browser.currentScene.createNode("Shape");
let Appearance715 = browser.currentScene.createNode("Appearance");
let Material716 = browser.currentScene.createNode("Material");
Material716.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance715.material = Material716;

let ImageTexture717 = browser.currentScene.createNode("ImageTexture");
ImageTexture717.USE = "JinLOA2TextureAtlas";
Appearance715.texture = ImageTexture717;

Shape714.appearance = Appearance715;

let IndexedFaceSet718 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet718.coordIndex = new MFInt32(new int[1,12,13,-1,13,0,1,-1,2,0,13,-1,13,14,2,-1,2,14,15,-1,15,3,2,-1,3,15,16,-1,16,4,3,-1,6,17,18,-1,18,5,6,-1,4,16,17,-1,17,6,4,-1,19,12,1,-1,1,7,19,-1,8,20,19,-1,19,7,8,-1,21,20,8,-1,8,9,21,-1,22,21,9,-1,9,10,22,-1,18,23,11,-1,11,5,18,-1,23,22,10,-1,10,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,13,12,25,-1,25,24,13,-1,12,19,26,-1,26,25,12,-1,19,20,27,-1,27,26,19,-1,20,21,28,-1,28,27,20,-1,21,22,29,-1,29,28,21,-1,22,23,30,-1,30,29,22,-1,23,18,31,-1,31,30,23,-1,18,17,32,-1,32,31,18,-1,17,16,33,-1,33,32,17,-1,16,15,34,-1,34,33,16,-1,15,14,35,-1,35,34,15,-1,14,13,24,-1,24,35,14,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,1,0,37,-1,37,36,1,-1,0,2,38,-1,38,37,0,-1,2,3,39,-1,39,38,2,-1,3,4,40,-1,40,39,3,-1,4,6,41,-1,41,40,4,-1,6,5,42,-1,42,41,6,-1,5,11,43,-1,43,42,5,-1,11,10,44,-1,44,43,11,-1,10,9,45,-1,45,44,10,-1,9,8,46,-1,46,45,9,-1,8,7,47,-1,47,46,8,-1,7,1,36,-1,36,47,7,-1]);
IndexedFaceSet718.creaseAngle = 3.14159;
IndexedFaceSet718.texCoordIndex = new MFInt32(new int[1,12,13,-1,13,0,1,-1,2,0,13,-1,13,14,2,-1,2,14,15,-1,15,3,2,-1,3,15,16,-1,16,4,3,-1,6,17,18,-1,18,5,6,-1,4,16,17,-1,17,6,4,-1,19,12,1,-1,1,7,19,-1,8,20,19,-1,19,7,8,-1,21,20,8,-1,8,9,21,-1,22,21,9,-1,9,10,22,-1,18,23,11,-1,11,5,18,-1,23,22,10,-1,10,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,13,12,25,-1,25,24,13,-1,12,19,26,-1,26,25,12,-1,19,20,27,-1,27,26,19,-1,20,21,28,-1,28,27,20,-1,21,22,29,-1,29,28,21,-1,22,23,30,-1,30,29,22,-1,23,18,31,-1,31,30,23,-1,18,17,32,-1,32,31,18,-1,17,16,33,-1,33,32,17,-1,16,15,34,-1,34,33,16,-1,15,14,35,-1,35,34,15,-1,14,13,24,-1,24,35,14,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,1,0,37,-1,37,36,1,-1,0,2,38,-1,38,37,0,-1,2,3,39,-1,39,38,2,-1,3,4,40,-1,40,39,3,-1,4,6,41,-1,41,40,4,-1,6,5,42,-1,42,41,6,-1,5,11,43,-1,43,42,5,-1,11,10,44,-1,44,43,11,-1,10,9,45,-1,45,44,10,-1,9,8,46,-1,46,45,9,-1,8,7,47,-1,47,46,8,-1,7,1,36,-1,36,47,7,-1]);
let Coordinate719 = browser.currentScene.createNode("Coordinate");
Coordinate719.point = new MFVec3f(new float[0.5369,0.1378,-1.124,0,0.2001,-1.195,1.139,0.2062,-0.8504,1.562,0.1781,0.0729,1.219,0.0058,0.7152,0,-0.3251,1.195,0.605,-0.3143,1.101,-0.5369,0.1378,-1.124,-1.139,0.2062,-0.8504,-1.562,0.1781,0.0729,-1.219,0.0058,0.7153,-0.605,-0.3143,1.101,0,1.858,-1.195,0.5369,1.85,-1.124,1.139,1.819,-0.8504,1.562,1.716,0.0729,1.219,1.644,0.7153,0.605,1.6,1.101,0,1.59,1.195,-0.5369,1.85,-1.124,-1.139,1.819,-0.8504,-1.562,1.716,0.0729,-1.219,1.644,0.7153,-0.605,1.6,1.101,0.4665,2.444,-0.8569,0,2.451,-0.9187,-0.4665,2.444,-0.8569,-0.9527,2.421,-0.6358,-1.289,2.341,0.0972,-1.031,2.289,0.5793,-0.5156,2.254,0.9034,0,2.245,0.9834,0.5156,2.254,0.9034,1.031,2.289,0.5793,1.289,2.341,0.0972,0.9527,2.421,-0.6358,0,-0.6803,-1.028,0.4943,-0.6896,-0.9649,0.999,-0.7239,-0.733,1.342,-0.8341,0.0135,1.076,-0.9065,0.5038,0.5328,-0.9549,0.832,0,-0.967,0.9139,-0.5328,-0.9549,0.832,-1.076,-0.9065,0.5038,-1.342,-0.8341,0.0136,-0.999,-0.7239,-0.733,-0.4943,-0.6896,-0.9649]);
IndexedFaceSet718.coord = Coordinate719;

let TextureCoordinate720 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate720.point = new MFVec2f(new float[0.3995,0.6285,0.3906,0.6293,0.4094,0.632,0.4164,0.6316,0.4107,0.6267,0.3906,0.6224,0.4006,0.6225,0.3818,0.6285,0.3719,0.632,0.3649,0.6316,0.3706,0.6267,0.3807,0.6225,0.3906,0.6507,0.3995,0.6503,0.4094,0.652,0.4164,0.6518,0.4107,0.6494,0.4006,0.6482,0.3906,0.6444,0.3818,0.6503,0.3719,0.652,0.3649,0.6518,0.3706,0.6494,0.3807,0.6482,0.3995,0.6503,0.3906,0.6507,0.3818,0.6503,0.3719,0.652,0.3649,0.6518,0.3706,0.6494,0.3807,0.6482,0.3906,0.6444,0.4006,0.6482,0.4107,0.6494,0.4164,0.6518,0.4094,0.652,0.3906,0.6293,0.3995,0.6285,0.4094,0.632,0.4164,0.6316,0.4107,0.6267,0.4006,0.6225,0.3906,0.6224,0.3807,0.6225,0.3706,0.6267,0.3649,0.6316,0.3719,0.632,0.3818,0.6285]);
IndexedFaceSet718.texCoord = TextureCoordinate720;

Shape714.geometry = IndexedFaceSet718;

Transform713.child = new undefined();

Transform713.child[0] = Shape714;

HAnimSegment712.children = new MFNode();

HAnimSegment712.children[0] = Transform713;

HAnimJoint711.children = new MFNode();

HAnimJoint711.children[0] = HAnimSegment712;

let HAnimJoint721 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint721.name = "vc2";
HAnimJoint721.DEF = "hanim_vc2";
HAnimJoint721.center = new SFVec3f(new float[0,56.02,-0.6695]);
HAnimJoint721.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint721.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment722 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment722.name = "c2";
HAnimSegment722.DEF = "hanim_c2";
let Transform723 = browser.currentScene.createNode("Transform");
Transform723.translation = new SFVec3f(new float[0,56.02,-0.6695]);
let Shape724 = browser.currentScene.createNode("Shape");
let Appearance725 = browser.currentScene.createNode("Appearance");
let Material726 = browser.currentScene.createNode("Material");
Material726.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance725.material = Material726;

let ImageTexture727 = browser.currentScene.createNode("ImageTexture");
ImageTexture727.USE = "JinLOA2TextureAtlas";
Appearance725.texture = ImageTexture727;

Shape724.appearance = Appearance725;

let IndexedFaceSet728 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet728.coordIndex = new MFInt32(new int[12,1,0,-1,0,13,12,-1,0,2,14,-1,14,13,0,-1,14,2,3,-1,3,15,14,-1,15,3,4,-1,4,16,15,-1,17,5,6,-1,6,18,17,-1,4,5,17,-1,17,16,4,-1,7,1,12,-1,12,19,7,-1,20,8,7,-1,7,19,20,-1,9,8,20,-1,20,21,9,-1,10,9,21,-1,21,22,10,-1,6,11,23,-1,23,18,6,-1,23,11,10,-1,10,22,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,12,13,25,-1,25,24,12,-1,13,14,26,-1,26,25,13,-1,14,15,27,-1,27,26,14,-1,15,16,28,-1,28,27,15,-1,16,17,29,-1,29,28,16,-1,17,18,30,-1,30,29,17,-1,18,23,31,-1,31,30,18,-1,23,22,32,-1,32,31,23,-1,22,21,33,-1,33,32,22,-1,21,20,34,-1,34,33,21,-1,20,19,35,-1,35,34,20,-1,19,12,24,-1,24,35,19,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,1,37,-1,37,36,0,-1,1,7,38,-1,38,37,1,-1,7,8,39,-1,39,38,7,-1,8,9,40,-1,40,39,8,-1,9,10,41,-1,41,40,9,-1,10,11,42,-1,42,41,10,-1,11,6,43,-1,43,42,11,-1,6,5,44,-1,44,43,6,-1,5,4,45,-1,45,44,5,-1,4,3,46,-1,46,45,4,-1,3,2,47,-1,47,46,3,-1,2,0,36,-1,36,47,2,-1]);
IndexedFaceSet728.creaseAngle = 3.14159;
IndexedFaceSet728.texCoordIndex = new MFInt32(new int[12,1,0,-1,0,13,12,-1,0,2,14,-1,14,13,0,-1,14,2,3,-1,3,15,14,-1,15,3,4,-1,4,16,15,-1,17,5,6,-1,6,18,17,-1,4,5,17,-1,17,16,4,-1,7,1,12,-1,12,19,7,-1,20,8,7,-1,7,19,20,-1,9,8,20,-1,20,21,9,-1,10,9,21,-1,21,22,10,-1,6,11,23,-1,23,18,6,-1,23,11,10,-1,10,22,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,12,13,25,-1,25,24,12,-1,13,14,26,-1,26,25,13,-1,14,15,27,-1,27,26,14,-1,15,16,28,-1,28,27,15,-1,16,17,29,-1,29,28,16,-1,17,18,30,-1,30,29,17,-1,18,23,31,-1,31,30,18,-1,23,22,32,-1,32,31,23,-1,22,21,33,-1,33,32,22,-1,21,20,34,-1,34,33,21,-1,20,19,35,-1,35,34,20,-1,19,12,24,-1,24,35,19,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,1,37,-1,37,36,0,-1,1,7,38,-1,38,37,1,-1,7,8,39,-1,39,38,7,-1,8,9,40,-1,40,39,8,-1,9,10,41,-1,41,40,9,-1,10,11,42,-1,42,41,10,-1,11,6,43,-1,43,42,11,-1,6,5,44,-1,44,43,6,-1,5,4,45,-1,45,44,5,-1,4,3,46,-1,46,45,4,-1,3,2,47,-1,47,46,3,-1,2,0,36,-1,36,47,2,-1]);
let Coordinate729 = browser.currentScene.createNode("Coordinate");
Coordinate729.point = new MFVec3f(new float[0.5369,2.251,-1.124,0,2.251,-1.195,1.139,2.251,-0.8504,1.562,2.251,0.073,1.219,2.251,0.7153,0.605,2.251,1.101,0,2.251,1.195,-0.5369,2.251,-1.124,-1.139,2.251,-0.8504,-1.562,2.251,0.0729,-1.219,2.251,0.7153,-0.605,2.251,1.101,0,0.257,-1.195,0.5369,0.249,-1.124,1.139,0.2183,-0.8504,1.562,0.1147,0.0729,1.219,0.0426,0.7153,0.605,-0.0007,1.101,0,-0.0112,1.195,-0.5369,0.249,-1.124,-1.139,0.2183,-0.8504,-1.562,0.1147,0.0729,-1.219,0.0426,0.7153,-0.605,-0.0007,1.101,0,-0.3453,-0.9982,0.4823,-0.3525,-0.9343,0.9917,-0.3785,-0.7027,1.345,-0.465,0.068,1.071,-0.5224,0.5805,0.5349,-0.5603,0.9176,0,-0.5696,1.001,-0.5349,-0.5603,0.9176,-1.071,-0.5225,0.5805,-1.345,-0.465,0.068,-0.9917,-0.3785,-0.7027,-0.4823,-0.3525,-0.9343,0.4798,2.933,-0.9247,0,2.933,-0.9883,-0.4798,2.933,-0.9247,-0.9844,2.933,-0.6953,-1.333,2.933,0.066,-1.064,2.933,0.5706,-0.5317,2.933,0.9052,0,2.933,0.9877,0.5317,2.933,0.9052,1.064,2.933,0.5706,1.333,2.933,0.066,0.9844,2.933,-0.6953]);
IndexedFaceSet728.coord = Coordinate729;

let TextureCoordinate730 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate730.point = new MFVec2f(new float[0.3995,0.6721,0.3906,0.6721,0.4094,0.6721,0.4164,0.6721,0.4107,0.6721,0.4006,0.6738,0.3906,0.6664,0.3818,0.6721,0.3719,0.6721,0.3649,0.6721,0.3706,0.6721,0.3807,0.6738,0.3906,0.6507,0.3995,0.6503,0.4094,0.652,0.4164,0.6518,0.4107,0.6494,0.4006,0.6482,0.3906,0.6444,0.3818,0.6503,0.3719,0.652,0.3649,0.6518,0.3706,0.6494,0.3807,0.6482,0.3906,0.6507,0.3995,0.6503,0.4094,0.652,0.4164,0.6518,0.4107,0.6494,0.4006,0.6482,0.3906,0.6444,0.3807,0.6482,0.3706,0.6494,0.3649,0.6518,0.3719,0.652,0.3818,0.6503,0.3995,0.6721,0.3906,0.6721,0.3818,0.6721,0.3719,0.6721,0.3649,0.6721,0.3706,0.6721,0.3807,0.6738,0.3906,0.6664,0.4006,0.6738,0.4107,0.6721,0.4164,0.6721,0.4094,0.6721]);
IndexedFaceSet728.texCoord = TextureCoordinate730;

Shape724.geometry = IndexedFaceSet728;

Transform723.child = new undefined();

Transform723.child[0] = Shape724;

HAnimSegment722.children = new MFNode();

HAnimSegment722.children[0] = Transform723;

HAnimJoint721.children = new MFNode();

HAnimJoint721.children[0] = HAnimSegment722;

let HAnimJoint731 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint731.name = "skullbase";
HAnimJoint731.DEF = "hanim_skullbase";
HAnimJoint731.center = new SFVec3f(new float[0,57.43,-0.6863]);
HAnimJoint731.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint731.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment732 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment732.name = "skull";
HAnimSegment732.DEF = "hanim_skull";
let Transform733 = browser.currentScene.createNode("Transform");
Transform733.translation = new SFVec3f(new float[0,57.43,-0.6863]);
let Shape734 = browser.currentScene.createNode("Shape");
let Appearance735 = browser.currentScene.createNode("Appearance");
let Material736 = browser.currentScene.createNode("Material");
Material736.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance735.material = Material736;

let ImageTexture737 = browser.currentScene.createNode("ImageTexture");
ImageTexture737.USE = "JinLOA2TextureAtlas";
Appearance735.texture = ImageTexture737;

Shape734.appearance = Appearance735;

let IndexedFaceSet738 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet738.coordIndex = new MFInt32(new int[58,44,47,-1,47,49,58,-1,49,60,59,-1,59,1,49,-1,56,48,47,-1,47,44,56,-1,50,51,59,-1,59,60,50,-1,173,168,58,-1,58,49,173,-1,171,173,49,-1,49,1,171,-1,14,12,18,-1,18,15,14,-1,162,160,14,-1,14,15,162,-1,16,57,33,-1,21,18,12,-1,18,79,19,-1,80,20,19,-1,11,10,79,-1,18,21,79,-1,11,79,21,-1,21,12,78,-1,11,21,22,-1,321,345,320,-1,322,323,346,-1,80,25,24,-1,24,20,80,-1,26,38,24,-1,23,13,38,-1,20,77,18,-1,18,19,20,-1,38,29,30,-1,30,23,38,-1,27,30,29,-1,27,28,30,-1,30,28,23,-1,33,31,16,-1,31,37,16,-1,28,34,23,-1,17,35,36,-1,36,28,17,-1,33,36,35,-1,17,32,35,-1,32,33,35,-1,33,34,36,-1,36,34,28,-1,10,19,79,-1,4,40,37,-1,40,42,41,-1,40,41,37,-1,40,4,42,-1,56,43,4,-1,4,46,56,-1,45,43,56,-1,56,44,45,-1,43,45,4,-1,48,56,46,-1,46,3,48,-1,50,60,3,-1,51,50,3,-1,3,2,51,-1,58,168,52,-1,52,168,170,-1,61,52,170,-1,4,45,52,-1,52,61,4,-1,52,45,44,-1,44,58,52,-1,61,170,53,-1,170,165,39,-1,39,53,170,-1,4,61,53,-1,53,42,4,-1,53,39,41,-1,41,42,53,-1,165,57,39,-1,13,23,54,-1,16,37,57,-1,41,39,57,-1,37,41,57,-1,57,165,166,-1,54,166,13,-1,33,57,34,-1,34,57,54,-1,34,54,23,-1,166,162,55,-1,55,162,15,-1,77,55,15,-1,15,18,77,-1,166,77,13,-1,77,166,55,-1,13,77,24,-1,24,38,13,-1,20,24,77,-1,54,57,166,-1,47,60,49,-1,48,3,47,-1,3,60,47,-1,3,63,2,-1,72,62,63,-1,3,65,63,-1,3,46,64,-1,64,66,3,-1,6,66,64,-1,3,66,65,-1,6,73,8,-1,8,73,67,-1,6,75,73,-1,5,71,73,-1,73,75,5,-1,6,70,75,-1,64,46,69,-1,75,70,69,-1,75,69,344,-1,2,63,62,-1,8,66,6,-1,63,8,72,-1,9,74,71,-1,68,74,9,-1,74,8,67,-1,68,72,74,-1,72,8,74,-1,67,71,74,-1,67,73,71,-1,65,8,63,-1,65,66,8,-1,70,6,64,-1,70,64,69,-1,4,0,344,-1,69,46,4,-1,69,4,344,-1,76,344,0,-1,5,76,0,-1,5,75,76,-1,75,344,76,-1,133,125,123,-1,123,120,133,-1,125,1,59,-1,59,134,125,-1,131,120,123,-1,123,124,131,-1,126,134,59,-1,59,51,126,-1,172,125,133,-1,133,167,172,-1,171,1,125,-1,125,172,171,-1,14,91,94,-1,94,12,14,-1,161,91,14,-1,14,160,161,-1,109,132,92,-1,12,94,97,-1,95,149,94,-1,95,96,150,-1,149,88,89,-1,149,97,94,-1,97,149,89,-1,78,12,97,-1,98,97,89,-1,325,348,324,-1,354,326,327,-1,150,96,100,-1,100,101,150,-1,100,114,102,-1,114,90,99,-1,96,95,94,-1,94,148,96,-1,114,99,106,-1,106,105,114,-1,105,106,103,-1,106,104,103,-1,99,104,106,-1,92,107,109,-1,92,113,107,-1,99,110,104,-1,93,104,112,-1,112,111,93,-1,111,112,109,-1,111,108,93,-1,111,109,108,-1,112,110,109,-1,104,110,112,-1,149,95,88,-1,113,116,83,-1,117,118,116,-1,113,117,116,-1,118,83,116,-1,131,122,83,-1,83,119,131,-1,121,120,131,-1,131,119,121,-1,83,121,119,-1,124,82,122,-1,122,131,124,-1,82,134,126,-1,51,2,82,-1,82,126,51,-1,127,167,133,-1,169,167,127,-1,169,127,135,-1,83,135,127,-1,127,121,83,-1,127,133,120,-1,120,121,127,-1,128,169,135,-1,169,128,115,-1,115,163,169,-1,83,118,128,-1,128,135,83,-1,128,118,117,-1,117,115,128,-1,115,132,163,-1,129,99,90,-1,132,113,92,-1,132,115,117,-1,132,117,113,-1,164,163,132,-1,90,164,129,-1,110,132,109,-1,129,132,110,-1,99,129,110,-1,130,161,164,-1,91,161,130,-1,148,94,91,-1,91,130,148,-1,90,148,164,-1,130,164,148,-1,90,114,100,-1,100,148,90,-1,148,100,96,-1,164,132,129,-1,125,134,123,-1,123,82,124,-1,123,134,82,-1,2,136,82,-1,136,62,72,-1,136,138,82,-1,82,139,137,-1,137,122,82,-1,137,139,85,-1,138,139,82,-1,87,144,85,-1,140,144,87,-1,144,146,85,-1,84,146,144,-1,144,143,84,-1,146,142,85,-1,141,122,137,-1,141,142,146,-1,347,141,146,-1,62,136,2,-1,85,139,87,-1,72,87,136,-1,143,145,9,-1,9,145,68,-1,145,140,87,-1,68,145,72,-1,72,145,87,-1,145,143,140,-1,143,144,140,-1,136,87,138,-1,87,139,138,-1,137,85,142,-1,141,137,142,-1,347,81,83,-1,83,122,141,-1,347,83,141,-1,81,347,147,-1,81,147,84,-1,147,146,84,-1,147,347,146,-1,162,166,152,-1,151,160,162,-1,162,152,151,-1,152,166,165,-1,165,154,152,-1,154,165,170,-1,170,156,154,-1,152,154,155,-1,155,151,152,-1,156,153,155,-1,155,154,156,-1,173,156,170,-1,170,168,173,-1,171,153,156,-1,156,173,171,-1,157,164,161,-1,151,157,161,-1,161,160,151,-1,157,158,163,-1,163,164,157,-1,158,159,169,-1,169,163,158,-1,157,151,155,-1,155,158,157,-1,159,158,155,-1,155,153,159,-1,172,167,169,-1,169,159,172,-1,171,172,159,-1,159,153,171,-1,355,237,223,-1,174,236,237,-1,236,174,175,-1,179,238,176,-1,179,176,177,-1,179,177,178,-1,178,174,179,-1,174,178,175,-1,180,226,236,-1,238,180,236,-1,180,230,226,-1,237,236,223,-1,223,236,218,-1,225,355,223,-1,223,224,225,-1,328,329,239,-1,330,331,350,-1,228,227,219,-1,219,222,228,-1,236,226,218,-1,174,237,0,-1,0,237,355,-1,0,179,174,-1,318,355,225,-1,220,228,222,-1,221,228,220,-1,5,0,355,-1,218,182,223,-1,183,223,182,-1,181,183,185,-1,181,185,242,-1,213,212,244,-1,244,246,213,-1,213,246,245,-1,245,214,213,-1,245,247,184,-1,184,214,245,-1,214,184,206,-1,206,207,214,-1,217,319,225,-1,225,224,217,-1,183,181,217,-1,217,224,183,-1,224,223,183,-1,226,209,218,-1,218,209,184,-1,182,185,183,-1,218,184,182,-1,207,208,232,-1,232,214,207,-1,232,215,214,-1,209,206,184,-1,186,192,190,-1,190,188,186,-1,197,192,208,-1,208,207,197,-1,190,222,219,-1,219,188,190,-1,194,195,190,-1,226,189,209,-1,187,189,226,-1,192,186,208,-1,191,216,205,-1,196,205,216,-1,195,196,216,-1,196,195,194,-1,209,189,198,-1,199,197,207,-1,207,206,199,-1,233,234,197,-1,197,199,233,-1,209,198,199,-1,199,206,209,-1,233,199,198,-1,198,200,233,-1,248,194,202,-1,201,205,250,-1,248,249,196,-1,196,194,248,-1,196,249,250,-1,250,205,196,-1,234,203,197,-1,203,192,197,-1,194,190,202,-1,200,198,189,-1,189,204,200,-1,202,190,192,-1,202,192,203,-1,205,210,191,-1,210,205,201,-1,220,222,193,-1,204,189,187,-1,187,210,204,-1,210,201,204,-1,210,187,191,-1,195,211,190,-1,195,193,211,-1,193,222,211,-1,211,222,190,-1,215,212,213,-1,213,214,215,-1,230,187,226,-1,230,191,187,-1,229,221,230,-1,229,228,221,-1,9,355,318,-1,5,355,71,-1,71,355,9,-1,231,247,185,-1,182,231,185,-1,184,231,182,-1,184,247,231,-1,238,230,180,-1,230,221,191,-1,221,235,191,-1,191,235,216,-1,221,220,235,-1,193,235,220,-1,216,235,193,-1,193,195,216,-1,250,249,233,-1,203,234,248,-1,234,233,249,-1,250,233,200,-1,249,248,234,-1,243,241,240,-1,241,243,247,-1,204,201,250,-1,200,204,250,-1,203,248,202,-1,247,243,242,-1,247,242,185,-1,332,333,349,-1,334,335,7,-1,292,304,353,-1,304,303,251,-1,252,251,303,-1,253,305,256,-1,254,253,256,-1,256,251,255,-1,255,254,256,-1,252,255,251,-1,303,295,257,-1,303,257,305,-1,295,298,257,-1,292,303,304,-1,288,303,292,-1,294,352,292,-1,292,353,294,-1,336,337,293,-1,306,338,339,-1,296,291,219,-1,219,227,296,-1,288,295,303,-1,81,304,251,-1,353,304,81,-1,251,256,81,-1,294,353,317,-1,291,296,289,-1,289,296,290,-1,353,81,84,-1,292,258,288,-1,258,292,259,-1,261,259,181,-1,242,261,181,-1,285,309,244,-1,244,212,285,-1,285,286,308,-1,308,309,285,-1,308,286,260,-1,260,310,308,-1,286,281,280,-1,280,260,286,-1,217,352,294,-1,294,319,217,-1,259,352,217,-1,217,181,259,-1,259,292,352,-1,288,282,295,-1,260,282,288,-1,259,261,258,-1,258,260,288,-1,281,286,232,-1,232,208,281,-1,286,215,232,-1,260,280,282,-1,186,188,264,-1,264,266,186,-1,271,281,208,-1,208,266,271,-1,264,188,219,-1,219,291,264,-1,264,269,268,-1,282,263,295,-1,295,263,262,-1,208,186,266,-1,279,287,265,-1,287,279,270,-1,287,270,269,-1,268,269,270,-1,272,263,282,-1,273,280,281,-1,281,271,273,-1,300,273,271,-1,271,301,300,-1,282,280,273,-1,273,272,282,-1,300,274,272,-1,272,273,300,-1,276,268,311,-1,313,279,275,-1,311,268,270,-1,270,312,311,-1,270,279,313,-1,313,312,270,-1,271,277,301,-1,271,266,277,-1,276,264,268,-1,274,278,263,-1,263,272,274,-1,266,264,276,-1,277,266,276,-1,265,283,279,-1,275,279,283,-1,267,291,289,-1,278,283,262,-1,262,263,278,-1,278,275,283,-1,265,262,283,-1,264,284,269,-1,284,267,269,-1,284,291,267,-1,264,291,284,-1,285,212,215,-1,215,286,285,-1,295,262,298,-1,262,265,298,-1,298,290,297,-1,290,296,297,-1,317,353,9,-1,143,353,84,-1,9,353,143,-1,261,310,299,-1,261,299,258,-1,258,299,260,-1,299,310,260,-1,257,298,305,-1,265,290,298,-1,265,302,290,-1,287,302,265,-1,302,289,290,-1,289,302,267,-1,287,269,267,-1,267,302,287,-1,300,312,313,-1,311,301,277,-1,312,300,301,-1,274,300,313,-1,301,311,312,-1,240,307,243,-1,310,243,307,-1,313,275,278,-1,313,278,274,-1,276,311,277,-1,242,243,310,-1,261,242,310,-1,351,340,341,-1,86,342,343,-1,244,314,315,-1,315,246,244,-1,246,315,247,-1,247,245,246,-1,244,309,316,-1,316,314,244,-1,309,308,310,-1,310,316,309,-1,175,176,238,-1,238,236,175,-1,177,176,175,-1,175,178,177,-1,252,303,305,-1,305,253,252,-1,254,255,252,-1,252,253,254,-1,318,225,319,-1,319,9,318,-1,317,9,319,-1,319,294,317,-1]);
IndexedFaceSet738.creaseAngle = 3.14159;
IndexedFaceSet738.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,1,6,5,-1,5,4,1,-1,7,8,2,-1,2,3,7,-1,9,10,5,-1,5,6,9,-1,11,12,0,-1,0,1,11,-1,13,11,1,-1,1,4,13,-1,14,17,16,-1,16,15,14,-1,18,19,14,-1,14,15,18,-1,22,21,20,-1,23,16,17,-1,16,25,24,-1,27,26,24,-1,29,28,25,-1,16,23,25,-1,29,25,23,-1,31,17,30,-1,29,23,32,-1,33,32,31,-1,33,31,30,-1,27,35,34,-1,34,26,27,-1,37,36,34,-1,39,38,36,-1,26,40,16,-1,16,24,26,-1,36,42,41,-1,41,39,36,-1,43,41,42,-1,43,44,41,-1,41,44,39,-1,20,45,22,-1,45,46,22,-1,44,47,39,-1,48,50,49,-1,49,44,48,-1,20,49,50,-1,48,51,50,-1,51,20,50,-1,20,47,49,-1,49,47,44,-1,28,24,25,-1,53,52,46,-1,52,55,54,-1,52,54,46,-1,52,53,55,-1,7,57,53,-1,53,56,7,-1,58,57,7,-1,7,59,58,-1,57,58,53,-1,8,7,56,-1,56,60,8,-1,9,6,60,-1,10,9,60,-1,60,61,10,-1,0,12,62,-1,62,12,63,-1,64,62,63,-1,53,58,62,-1,62,64,53,-1,62,58,59,-1,59,0,62,-1,64,63,65,-1,63,67,66,-1,66,65,63,-1,53,64,65,-1,65,55,53,-1,65,66,54,-1,54,55,65,-1,67,21,66,-1,38,39,68,-1,22,46,21,-1,54,66,21,-1,46,54,21,-1,21,67,69,-1,68,69,38,-1,20,21,47,-1,47,21,68,-1,47,68,39,-1,69,18,70,-1,70,18,15,-1,40,70,15,-1,15,16,40,-1,69,71,38,-1,71,69,70,-1,38,71,34,-1,34,36,38,-1,26,34,71,-1,68,21,69,-1,2,6,1,-1,8,60,2,-1,60,6,2,-1,74,73,72,-1,77,76,75,-1,74,78,73,-1,74,81,80,-1,80,79,74,-1,82,79,80,-1,74,79,78,-1,82,84,83,-1,83,84,85,-1,82,86,84,-1,87,90,89,-1,89,88,87,-1,92,91,88,-1,80,81,93,-1,88,91,94,-1,86,93,95,-1,72,73,96,-1,83,79,82,-1,73,83,97,-1,100,99,98,-1,103,102,101,-1,99,83,85,-1,104,97,99,-1,97,83,99,-1,105,90,102,-1,105,89,90,-1,107,106,75,-1,107,108,106,-1,109,82,80,-1,109,80,93,-1,112,111,110,-1,93,81,113,-1,93,113,95,-1,114,110,111,-1,115,114,111,-1,87,86,116,-1,86,95,116,-1,117,120,119,-1,119,118,117,-1,120,123,122,-1,122,121,120,-1,124,118,119,-1,119,125,124,-1,126,121,122,-1,122,127,126,-1,128,120,117,-1,117,129,128,-1,130,123,120,-1,120,128,130,-1,14,132,131,-1,131,17,14,-1,133,132,14,-1,14,19,133,-1,136,135,134,-1,17,131,137,-1,139,138,131,-1,139,141,140,-1,138,143,142,-1,138,137,131,-1,137,138,142,-1,30,17,144,-1,145,137,142,-1,144,145,146,-1,30,144,146,-1,140,141,148,-1,148,147,140,-1,148,150,149,-1,150,152,151,-1,141,139,131,-1,131,153,141,-1,150,151,155,-1,155,154,150,-1,154,155,156,-1,155,157,156,-1,151,157,155,-1,134,158,136,-1,134,159,158,-1,151,160,157,-1,161,157,163,-1,163,162,161,-1,162,163,136,-1,162,164,161,-1,162,136,164,-1,163,160,136,-1,157,160,163,-1,138,139,143,-1,159,166,165,-1,168,167,166,-1,159,168,166,-1,167,165,166,-1,124,170,165,-1,165,169,124,-1,171,172,124,-1,124,169,171,-1,165,171,169,-1,125,173,170,-1,170,124,125,-1,173,121,126,-1,127,174,173,-1,173,126,127,-1,175,129,117,-1,176,129,175,-1,176,175,177,-1,165,177,175,-1,175,171,165,-1,175,117,172,-1,172,171,175,-1,178,176,177,-1,176,178,180,-1,180,179,176,-1,165,167,178,-1,178,177,165,-1,178,167,168,-1,168,180,178,-1,180,135,179,-1,181,151,152,-1,135,159,134,-1,135,180,168,-1,135,168,159,-1,182,179,135,-1,152,182,181,-1,160,135,136,-1,181,135,160,-1,151,181,160,-1,183,133,182,-1,132,133,183,-1,153,131,132,-1,132,183,153,-1,152,184,182,-1,183,182,184,-1,152,150,148,-1,148,184,152,-1,184,148,141,-1,182,135,181,-1,120,121,119,-1,119,173,125,-1,119,121,173,-1,72,186,185,-1,187,76,77,-1,186,188,185,-1,185,191,190,-1,190,189,185,-1,190,191,192,-1,188,191,185,-1,194,193,192,-1,195,193,194,-1,193,196,192,-1,197,200,199,-1,199,198,197,-1,200,202,201,-1,203,189,190,-1,204,202,200,-1,205,203,196,-1,96,186,72,-1,192,191,194,-1,97,194,186,-1,207,206,100,-1,101,208,103,-1,206,195,194,-1,104,206,97,-1,97,206,194,-1,208,198,209,-1,198,199,209,-1,187,211,210,-1,211,212,210,-1,190,192,213,-1,203,190,213,-1,216,215,214,-1,217,189,203,-1,205,217,203,-1,215,216,218,-1,215,218,219,-1,220,196,197,-1,220,205,196,-1,18,69,221,-1,222,19,18,-1,18,221,222,-1,221,69,67,-1,67,223,221,-1,223,67,63,-1,63,224,223,-1,221,223,225,-1,225,222,221,-1,224,226,225,-1,225,223,224,-1,11,224,63,-1,63,12,11,-1,13,226,224,-1,224,11,13,-1,227,182,133,-1,222,227,133,-1,133,19,222,-1,227,228,179,-1,179,182,227,-1,228,229,176,-1,176,179,228,-1,227,222,225,-1,225,228,227,-1,229,228,225,-1,225,230,229,-1,128,129,176,-1,176,229,128,-1,130,128,229,-1,229,230,130,-1,233,232,231,-1,235,234,232,-1,234,235,236,-1,239,238,237,-1,239,237,240,-1,239,240,241,-1,241,235,239,-1,235,241,236,-1,243,242,234,-1,238,243,234,-1,243,244,242,-1,232,234,231,-1,231,234,245,-1,246,233,231,-1,231,247,246,-1,247,246,233,-1,231,247,233,-1,248,251,250,-1,250,249,248,-1,234,242,245,-1,235,232,252,-1,252,232,233,-1,252,239,235,-1,253,233,246,-1,254,248,249,-1,255,248,254,-1,256,252,233,-1,245,257,231,-1,258,231,257,-1,261,260,259,-1,261,259,262,-1,263,266,265,-1,265,264,263,-1,263,264,268,-1,268,267,263,-1,268,270,269,-1,269,267,268,-1,267,269,272,-1,272,271,267,-1,273,274,246,-1,246,247,273,-1,258,275,273,-1,273,247,258,-1,247,231,258,-1,278,277,276,-1,276,277,269,-1,279,259,260,-1,276,269,279,-1,271,281,280,-1,280,267,271,-1,280,282,267,-1,277,272,269,-1,284,287,286,-1,286,285,284,-1,288,287,281,-1,281,271,288,-1,286,249,250,-1,250,285,286,-1,290,289,286,-1,278,291,277,-1,292,291,278,-1,287,284,283,-1,295,294,293,-1,296,293,294,-1,289,296,294,-1,296,289,290,-1,277,291,297,-1,298,288,271,-1,271,272,298,-1,299,300,288,-1,288,298,299,-1,277,297,298,-1,298,272,277,-1,299,298,297,-1,297,301,299,-1,303,290,302,-1,305,293,304,-1,303,306,296,-1,296,290,303,-1,296,306,304,-1,304,293,296,-1,300,307,288,-1,307,287,288,-1,290,286,302,-1,301,297,291,-1,291,308,301,-1,302,286,287,-1,309,287,307,-1,293,310,295,-1,310,293,305,-1,254,249,311,-1,308,291,292,-1,292,310,308,-1,310,305,308,-1,310,292,295,-1,289,312,286,-1,289,311,312,-1,311,249,312,-1,312,249,286,-1,282,266,263,-1,263,267,282,-1,313,292,278,-1,313,295,292,-1,314,255,313,-1,314,248,255,-1,315,233,253,-1,256,233,316,-1,316,233,315,-1,317,270,259,-1,279,317,259,-1,269,317,279,-1,269,270,317,-1,238,244,243,-1,313,255,295,-1,255,318,295,-1,295,318,294,-1,255,254,318,-1,311,318,254,-1,294,318,311,-1,311,289,294,-1,304,306,299,-1,307,300,303,-1,300,299,306,-1,304,299,301,-1,306,303,300,-1,321,320,319,-1,320,321,270,-1,308,305,304,-1,301,308,304,-1,307,303,309,-1,270,321,262,-1,270,262,259,-1,252,322,239,-1,252,256,322,-1,231,232,233,-1,232,234,235,-1,236,235,234,-1,237,238,239,-1,240,237,239,-1,239,235,241,-1,241,240,239,-1,236,241,235,-1,234,242,243,-1,234,243,238,-1,242,244,243,-1,231,234,232,-1,245,234,231,-1,246,247,231,-1,231,233,246,-1,233,246,247,-1,233,247,231,-1,323,324,250,-1,250,251,323,-1,245,242,234,-1,252,232,235,-1,233,232,252,-1,235,239,252,-1,246,233,253,-1,324,323,325,-1,325,323,326,-1,233,252,256,-1,231,257,245,-1,257,231,258,-1,329,328,327,-1,330,329,327,-1,331,332,265,-1,265,266,331,-1,331,334,333,-1,333,332,331,-1,333,334,336,-1,336,335,333,-1,334,338,337,-1,337,336,334,-1,273,247,246,-1,246,274,273,-1,258,247,273,-1,273,275,258,-1,258,231,247,-1,341,340,339,-1,336,340,341,-1,328,329,342,-1,342,336,341,-1,338,334,280,-1,280,343,338,-1,334,282,280,-1,336,337,340,-1,284,285,345,-1,345,344,284,-1,346,338,343,-1,343,344,346,-1,345,285,250,-1,250,324,345,-1,345,348,347,-1,340,349,339,-1,339,349,350,-1,283,284,344,-1,353,352,351,-1,352,353,354,-1,352,354,348,-1,347,348,354,-1,355,349,340,-1,356,337,338,-1,338,346,356,-1,357,356,346,-1,346,358,357,-1,340,337,356,-1,356,355,340,-1,357,359,355,-1,355,356,357,-1,361,347,360,-1,363,353,362,-1,360,347,354,-1,354,364,360,-1,354,353,363,-1,363,364,354,-1,346,365,358,-1,346,344,365,-1,361,345,347,-1,359,366,349,-1,349,355,359,-1,344,345,361,-1,365,344,367,-1,351,368,353,-1,362,353,368,-1,369,324,325,-1,366,368,350,-1,350,349,366,-1,366,362,368,-1,351,350,368,-1,345,370,348,-1,370,369,348,-1,370,324,369,-1,345,324,370,-1,331,266,282,-1,282,334,331,-1,339,350,371,-1,350,351,371,-1,371,326,372,-1,326,323,372,-1,253,233,315,-1,316,233,256,-1,315,233,316,-1,329,335,373,-1,329,373,342,-1,342,373,336,-1,373,335,336,-1,243,244,238,-1,351,326,371,-1,351,374,326,-1,352,374,351,-1,374,325,326,-1,325,374,369,-1,352,348,369,-1,369,374,352,-1,357,364,363,-1,360,358,365,-1,364,357,358,-1,359,357,363,-1,358,360,364,-1,319,376,375,-1,335,375,376,-1,363,362,366,-1,363,366,359,-1,367,360,365,-1,330,375,335,-1,329,330,335,-1,239,322,252,-1,322,256,252,-1,265,378,377,-1,377,264,265,-1,264,377,270,-1,270,268,264,-1,265,332,379,-1,379,378,265,-1,332,333,335,-1,335,379,332,-1,380,383,382,-1,382,381,380,-1,384,383,380,-1,380,385,384,-1,380,381,382,-1,382,383,380,-1,384,385,380,-1,380,383,384,-1,388,389,386,-1,386,387,388,-1,391,387,386,-1,386,390,391,-1]);
let Coordinate739 = browser.currentScene.createNode("Coordinate");
Coordinate739.point = new MFVec3f(new float[4.734,2.295,-0.478,0,7.925,-7.347,0,2.738,-7.551,2.596,3.055,-7.113,5.82,3.915,-2.239,3.712,1.225,-2.29,3.261,1.453,-4.252,5.658,2.599,-1.983,1.82,1.289,-5.164,0,0.1375,-3.592,2.395,4.95,6.346,0.7761,4.912,6.883,0,9.74,6.859,4.408,9.203,3.673,0,11.25,5.65,2.225,10.89,5.304,5.962,4.414,1.165,4.041,0.8383,3.523,1.972,9.601,6.357,2.537,7.001,6.362,3.694,6.649,5.287,0.4475,7.341,7.362,0.513,6.698,7.119,4.843,6.188,3.431,3.886,6.593,4.951,3.681,5.194,5.001,3.826,5.001,4.664,3.284,2.472,4.49,4.543,4.124,3.499,3.859,3.861,4.364,4.575,3.792,4.006,5.065,1.183,1.247,4.863,1.73,2.37,5.256,2.695,2.024,5.549,5.532,2.714,5.161,2.035,2.722,5.442,3.878,2.887,6.111,4.389,0.2634,4.062,5.868,4.221,6.007,7.856,-0.5637,7.021,1.661,-0.9157,6.568,4.855,-0.7308,6.326,4.691,-1.55,6.23,0.8303,-3.441,4.977,5.364,-5.673,6.326,4.656,-2.95,4.216,3.427,-5.131,3.522,5.818,-7.166,3.424,1.86,-7.278,2.479,7.925,-6.757,1.927,1.981,-8.89,0,3.753,-8.454,5.584,7.691,-2.78,5.853,7.683,-1.772,5.181,8.476,2.104,3.038,10.79,4.444,5.123,3.032,-5.304,5.664,8.061,0.8754,4.721,7.925,-5.258,0,5.519,-7.965,2.479,5.82,-7.483,5.595,7.63,-2.141,0,0.1227,-8.281,1.173,1.832,-6.114,3.978,2.324,-4.64,2.917,-0.9285,-7.31,3.323,2.08,-5.371,1.968,-1.561,-5.013,0,-0.9435,-6.54,4.713,2.444,-3.477,4.42,-0.2924,-4.477,1.411,0.5541,-3.484,0,1.035,-6.031,2.275,0.8807,-3.763,0.9407,0.7103,-4.537,3.818,1.729,-3.139,4.664,1.866,-1.436,3.657,9.188,4.96,0,7.548,7.405,1.559,7.266,7.008,2.791,5.041,6.017,-4.734,2.295,-0.478,-2.596,3.055,-7.113,-5.82,3.915,-2.239,-3.712,1.225,-2.29,-3.261,1.453,-4.252,-5.658,2.599,-1.983,-1.82,1.289,-5.164,-2.395,4.95,6.346,-0.7761,4.912,6.883,-4.408,9.203,3.673,-2.225,10.89,5.304,-5.962,4.414,1.165,-4.041,0.8383,3.523,-1.972,9.601,6.357,-2.537,7.001,6.362,-3.694,6.649,5.287,-0.4475,7.341,7.362,-0.513,6.698,7.119,-4.843,6.188,3.431,-3.886,6.593,4.951,-3.681,5.194,5.001,-3.826,5.001,4.664,-3.284,2.472,4.49,-4.543,4.124,3.499,-3.859,3.861,4.364,-4.575,3.792,4.006,-5.065,1.183,1.247,-4.863,1.73,2.37,-5.256,2.695,2.024,-5.549,5.532,2.714,-5.161,2.035,2.722,-5.442,3.878,2.887,-6.111,4.389,0.2634,-4.062,5.868,4.221,-6.007,7.856,-0.5637,-7.021,1.661,-0.9157,-6.568,4.855,-0.7308,-6.326,4.691,-1.55,-6.23,0.8303,-3.441,-4.977,5.364,-5.673,-6.326,4.656,-2.95,-4.216,3.427,-5.131,-3.522,5.818,-7.166,-3.424,1.86,-7.278,-2.479,7.925,-6.757,-1.927,1.981,-8.89,-5.584,7.691,-2.78,-5.853,7.683,-1.772,-5.181,8.476,2.104,-3.038,10.79,4.444,-5.123,3.032,-5.304,-5.664,8.061,0.8754,-4.721,7.925,-5.258,-2.479,5.82,-7.483,-5.595,7.63,-2.141,-1.173,1.832,-6.114,-3.978,2.324,-4.64,-2.917,-0.9285,-7.31,-3.323,2.08,-5.371,-1.968,-1.561,-5.013,-4.713,2.444,-3.477,-4.42,-0.2924,-4.477,-1.411,0.5541,-3.484,-2.275,0.8807,-3.763,-0.9407,0.7103,-4.537,-3.818,1.729,-3.139,-4.664,1.866,-1.436,-3.657,9.188,4.96,-1.559,7.266,7.008,-2.791,5.041,6.017,0,12.89,2.191,2.479,12.6,2.191,0,12.77,-3.073,2.479,13.01,-0.5905,0,13.3,-0.5905,2.479,12.47,-3.073,-2.479,12.6,2.191,-2.479,13.01,-0.5905,-2.479,12.47,-3.073,0,12.19,4.069,-2.479,11.8,3.665,2.479,11.8,3.665,-4.738,11.13,-0.5905,-4.581,10.59,1.893,4.738,11.13,-0.5905,4.581,10.59,1.893,-4.776,9.342,-4.254,4.776,9.342,-4.254,-4.651,10.94,-2.696,4.651,10.94,-2.696,0,10.91,-6.064,-2.479,10.58,-5.873,2.479,10.58,-5.873,5.038,2.087,0.2634,5.351,2.269,0.2568,5.575,4.993,0.4877,5.759,4.313,-0.6689,5.672,3.119,-0.6884,5.054,4.389,0.2634,4.617,3.919,1.981,0,-1.299,4.283,2.507,0.2122,3.467,1.252,-0.7037,3.753,2.181,1.29,4.703,1.083,-0.2065,4.531,0,3.949,5.823,4.122,4.752,3.434,0,4.457,6.529,3.843,3.486,3.474,0.6247,4.287,6.217,3.884,5.34,4.144,0.2615,3.949,5.823,2.103,4.881,5.78,1.599,4.225,5.429,2.103,4.763,5.713,2.175,4.422,5.292,1.061,2.841,5.24,3.345,2.806,3.987,2.536,2.741,4.559,3.082,3.581,4.206,3.368,4.077,4.055,1.044,3.885,5.454,1.356,3.642,5.241,3.227,3.707,4.111,3.028,4.567,4.683,2.472,2.023,4.722,0.9194,2.354,5.382,0,2.998,5.872,3.515,2.199,3.631,3.685,4.225,3.891,1.11,4.559,6.074,0,1.141,5.968,0.1458,1.141,5.967,0.4592,1.442,5.549,0,1.753,6.811,3.24,5.132,4.832,0,-1.23,3.575,3.443,1.22,3.201,0,6.577,6.529,1.972,6.686,5.769,3.551,6.468,4.66,1.125,6.641,6.224,2.799,0.2961,1.981,1.438,-0.7799,2.92,2.098,-0.0622,0.3894,4.342,2.994,2.484,0,9.837,5.8,1.972,10.18,5.298,3.829,8.081,4.078,4.754,5.519,2.97,1.641,0.4521,4.705,0,2.206,6.446,2.795,3.568,4.497,1.835,3.587,5.011,3.243,5.188,4.826,4.074,1.813,1.489,4.073,1.537,-0.251,4.798,4.414,1.165,3.561,1.081,-1.554,0,0.5923,5.37,0.2244,0.5923,5.37,0,-0.2097,4.949,0,0.1669,5.375,0,0.7989,5.843,0.4079,0.7711,5.733,0.2244,0.7989,5.843,1.184,0.5011,4.895,1.695,4.1,5.387,2.183,4.262,5.159,2.937,4.372,4.659,-5.038,2.087,0.2634,-5.351,2.269,0.2568,-5.575,4.993,0.4877,-5.759,4.313,-0.6689,-5.672,3.119,-0.6884,-5.054,4.389,0.2634,-4.617,3.919,1.981,-2.507,0.2122,3.467,-1.252,-0.7037,3.753,-2.181,1.29,4.703,-1.083,-0.2065,4.531,-4.122,4.752,3.434,-3.843,3.486,3.474,-0.6247,4.287,6.217,-3.884,5.34,4.144,-0.2615,3.949,5.823,-2.103,4.881,5.78,-1.599,4.225,5.429,-2.103,4.763,5.713,-2.175,4.422,5.292,-1.061,2.841,5.24,-3.345,2.806,3.987,-2.536,2.741,4.559,-3.082,3.581,4.206,-3.368,4.077,4.055,-1.044,3.885,5.454,-1.356,3.642,5.241,-3.227,3.707,4.111,-3.028,4.567,4.683,-2.472,2.023,4.722,-0.9194,2.354,5.382,-3.515,2.199,3.631,-3.685,4.225,3.891,-1.11,4.559,6.074,-0.1458,1.141,5.967,-0.4592,1.442,5.549,-3.24,5.132,4.832,-3.443,1.22,3.201,-1.972,6.686,5.769,-3.551,6.468,4.66,-1.125,6.641,6.224,-2.799,0.2961,1.981,-1.438,-0.7799,2.92,-2.098,-0.0622,0.3894,-4.342,2.994,2.484,-1.972,10.18,5.298,-3.829,8.081,4.078,-4.754,5.519,2.97,-1.641,0.4521,4.705,-2.795,3.568,4.497,-1.835,3.587,5.011,-3.243,5.188,4.826,-4.074,1.813,1.489,-4.073,1.537,-0.251,-4.798,4.414,1.165,-3.561,1.081,-1.554,-0.2244,0.5923,5.37,-0.4079,0.7711,5.733,-0.2244,0.7989,5.843,-1.184,0.5011,4.895,-1.695,4.1,5.387,-2.183,4.262,5.159,-2.937,4.372,4.659,0,0.5907,5.545,0.2244,0.5907,5.545,-0.2244,0.5907,5.545,-2.091,-0.0943,-1.629,2.091,-0.0943,-1.629,0,-0.6349,1.532,0.4475,7.341,7.362,0.7761,4.912,6.883,0.7761,4.912,6.883,0.4475,7.341,7.362,-0.7761,4.912,6.883,-0.4475,7.341,7.362,-0.4475,7.341,7.362,-0.7761,4.912,6.883,1.438,-0.7799,2.92,2.098,-0.0622,0.3894,2.799,0.2961,1.981,1.438,-0.7799,2.92,4.734,2.295,-0.478,5.658,2.599,-1.983,4.734,2.295,-0.478,3.712,1.225,-2.29,-3.561,1.081,-1.554,-2.098,-0.0622,0.3894,-1.438,-0.7799,2.92,-2.799,0.2961,1.981,-5.658,2.599,-1.983,-4.734,2.295,-0.478,-3.712,1.225,-2.29,-4.734,2.295,-0.478,5.658,2.599,-1.983,0.513,6.698,7.119,0,7.548,7.405,-5.658,2.599,-1.983,-0.513,6.698,7.119,5.054,4.389,0.2634,3.561,1.081,-1.554,-5.054,4.389,0.2634,-1.438,-0.7799,2.92,-3.561,1.081,-1.554,0,7.548,7.405,3.561,1.081,-1.554]);
IndexedFaceSet738.coord = Coordinate739;

let TextureCoordinate740 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate740.point = new MFVec2f(new float[0.9175,0.8974,0.9509,0.8981,0.9421,0.8701,0.924,0.8702,0.9824,0.8971,0.9824,0.8682,0.9541,0.8718,0.9147,0.8129,0.9437,0.8153,0.9638,0.8095,0.9824,0.809,0.9461,0.923,0.9071,0.9135,0.9824,0.9287,0.7343,0.9169,0.7616,0.9147,0.7553,0.8982,0.7343,0.8968,0.7739,0.9327,0.7343,0.9365,0.8187,0.8433,0.8348,0.9045,0.8324,0.8647,0.74,0.8745,0.761,0.8768,0.7497,0.8755,0.777,0.8787,0.7647,0.8593,0.7596,0.8565,0.7438,0.8546,0.7343,0.8756,0.7372,0.8736,0.7394,0.8706,0.7405,0.8536,0.7808,0.8802,0.7786,0.8666,0.7875,0.8787,0.7821,0.8667,0.7952,0.9076,0.8011,0.8823,0.7745,0.9003,0.7939,0.8518,0.7845,0.8549,0.7731,0.8049,0.7979,0.8609,0.8185,0.8054,0.8439,0.8655,0.8131,0.8741,0.786,0.7876,0.8107,0.8538,0.8058,0.8252,0.8096,0.8166,0.8589,0.7975,0.8767,0.8622,0.8568,0.8668,0.8669,0.8674,0.9208,0.8549,0.8792,0.7991,0.8835,0.8633,0.9139,0.8636,0.9513,0.84,0.9824,0.8358,0.8845,0.9021,0.888,0.931,0.8761,0.9036,0.8705,0.9018,0.8544,0.902,0.8538,0.9345,0.8173,0.9068,0.8156,0.9257,0.7753,0.9186,0.7832,0.9041,0.7338,0.8385,0.7279,0.8339,0.7208,0.8401,0.7397,0.7767,0.7338,0.7681,0.7338,0.7727,0.7192,0.8201,0.7171,0.8352,0.7139,0.8364,0.7127,0.8419,0.7175,0.832,0.7247,0.8312,0.7224,0.8292,0.7239,0.8169,0.7146,0.8334,0.7152,0.8309,0.753,0.7762,0.7452,0.772,0.7409,0.7703,0.756,0.7661,0.7502,0.7748,0.7102,0.837,0.7574,0.7798,0.7054,0.8378,0.7338,0.8253,0.7338,0.8299,0.7267,0.8275,0.7291,0.8283,0.7338,0.8254,0.7338,0.7682,0.7385,0.7711,0.7338,0.7628,0.7338,0.82,0.7437,0.7597,0.7429,0.774,0.7484,0.7629,0.7505,0.778,0.7116,0.8233,0.7622,0.7806,0.7576,0.779,0.763,0.7872,0.7046,0.8444,0.7572,0.7769,0.7524,0.7737,0.7104,0.8341,0.5511,0.8974,0.5442,0.8881,0.5261,0.888,0.5173,0.916,0.5142,0.8897,0.4859,0.8861,0.4859,0.915,0.5538,0.8129,0.5221,0.9505,0.5019,0.9448,0.4833,0.9442,0.5221,0.9409,0.5615,0.9135,0.4859,0.9465,0.7132,0.8982,0.707,0.9147,0.6947,0.9327,0.6362,0.8647,0.6338,0.9045,0.6499,0.8433,0.7286,0.8745,0.7189,0.8755,0.7076,0.8768,0.7039,0.8593,0.6916,0.8787,0.7247,0.8546,0.709,0.8565,0.7314,0.8736,0.7292,0.8706,0.728,0.8536,0.69,0.8666,0.6878,0.8802,0.6865,0.8667,0.6811,0.8787,0.6675,0.8823,0.6734,0.9076,0.6941,0.9003,0.6841,0.8549,0.6747,0.8518,0.6955,0.8049,0.6707,0.8609,0.65,0.8054,0.6247,0.8655,0.6555,0.8741,0.6826,0.7876,0.6628,0.8252,0.6579,0.8538,0.659,0.8166,0.5919,0.8622,0.6097,0.7975,0.6017,0.8674,0.6119,0.8668,0.5894,0.7991,0.5477,0.8549,0.5851,0.8633,0.5547,0.8636,0.5069,0.9121,0.4833,0.9711,0.5841,0.9021,0.5806,0.931,0.5925,0.9036,0.5981,0.9018,0.6148,0.9345,0.6142,0.902,0.6513,0.9068,0.653,0.9257,0.6932,0.9186,0.6854,0.9041,0.7468,0.8401,0.7397,0.8339,0.7279,0.7767,0.7484,0.8201,0.7549,0.8419,0.7538,0.8364,0.7505,0.8352,0.7502,0.832,0.7452,0.8292,0.7429,0.8312,0.7437,0.8169,0.753,0.8334,0.7524,0.8309,0.7267,0.7703,0.7224,0.772,0.7146,0.7762,0.7175,0.7748,0.7116,0.7661,0.7574,0.837,0.7102,0.7798,0.7622,0.8378,0.7385,0.8283,0.7409,0.8275,0.7291,0.7711,0.7239,0.7597,0.7192,0.7629,0.7247,0.774,0.7171,0.778,0.756,0.8233,0.7046,0.7872,0.71,0.779,0.7054,0.7806,0.763,0.8444,0.7104,0.7769,0.7152,0.7737,0.7572,0.8341,0.7881,0.9479,0.7343,0.9577,0.8497,0.9637,0.9158,0.9539,0.7343,0.9872,0.9824,0.9663,0.6805,0.9479,0.6189,0.9637,0.5528,0.9539,0.4859,0.9842,0.4263,0.6263,0.4421,0.6351,0.4514,0.6319,0.4298,0.637,0.4385,0.639,0.4385,0.6403,0.4369,0.6596,0.4321,0.6555,0.4385,0.6553,0.4451,0.6548,0.4452,0.6463,0.4227,0.6454,0.4263,0.652,0.4193,0.6633,0.4176,0.6328,0.4376,0.6237,0.4196,0.6187,0.3384,0.9887,0.2979,0.9448,0.2441,0.9417,0.2441,0.9723,0.4437,0.6405,0.4519,0.6235,0.3384,0.9469,0.414,0.9365,0.4566,0.6329,0.4157,0.6257,0.4137,0.6192,0.2959,0.626,0.3051,0.6166,0.258,0.6076,0.2606,0.6259,0.2511,0.6816,0.2548,0.6653,0.2441,0.6653,0.2441,0.6816,0.2661,0.696,0.2636,0.664,0.3484,0.6888,0.3007,0.651,0.2881,0.7397,0.3623,0.7239,0.4151,0.6155,0.4295,0.6197,0.4116,0.6201,0.4088,0.6855,0.4123,0.7323,0.4518,0.7703,0.364,0.6372,0.2441,0.7326,0.2496,0.7705,0.2441,0.7109,0.2441,0.7705,0.2441,0.816,0.2441,0.8403,0.274,0.8322,0.2566,0.816,0.2949,0.763,0.3447,0.8549,0.3206,0.8292,0.4279,0.7939,0.4413,0.8544,0.3889,0.8456,0.3991,0.8726,0.4299,0.8825,0.3482,0.8386,0.4041,0.7613,0.3654,0.7582,0.3778,0.7978,0.3319,0.7987,0.3916,0.7984,0.2943,0.815,0.3252,0.8232,0.3846,0.8362,0.4052,0.8221,0.3485,0.831,0.309,0.8013,0.3985,0.8044,0.2937,0.8109,0.4204,0.8292,0.3447,0.8606,0.2972,0.8452,0.4715,0.8911,0.431,0.9594,0.4658,0.6252,0.465,0.6281,0.3226,0.6487,0.3993,0.8753,0.2441,0.6554,0.2548,0.6554,0.2557,0.6351,0.4544,0.6426,0.1498,0.9887,0.1903,0.9448,0.1498,0.9469,0.0742,0.9365,0.2323,0.6076,0.1853,0.6166,0.1923,0.626,0.2275,0.6259,0.2371,0.6816,0.2334,0.6653,0.2246,0.664,0.2221,0.696,0.1875,0.651,0.1398,0.6888,0.1258,0.7239,0.2001,0.7397,0.0364,0.7703,0.0759,0.7323,0.0794,0.6855,0.1242,0.6372,0.2386,0.7705,0.2316,0.816,0.2142,0.8322,0.1933,0.763,0.1676,0.8292,0.1435,0.8549,0.0602,0.7939,0.0469,0.8544,0.0583,0.8825,0.0891,0.8726,0.0992,0.8456,0.14,0.8386,0.084,0.7613,0.1228,0.7582,0.1104,0.7978,0.1563,0.7987,0.0966,0.7984,0.163,0.8232,0.1939,0.815,0.083,0.8221,0.1036,0.8362,0.1397,0.831,0.1792,0.8013,0.0897,0.8044,0.1944,0.8109,0.0678,0.8292,0.1435,0.8606,0.191,0.8452,0.0166,0.8911,0.0646,0.9594,0.1656,0.6487,0.0889,0.8753,0.2325,0.6351,0.2334,0.6554,0.2548,0.6553,0.2441,0.6553,0.2334,0.6553,0.4156,0.6279,0.3783,0.625,0.3984,0.649,0.4325,0.6718,0.4443,0.6446,0.428,0.6022,0.4445,0.6357,0.4021,0.656,0.4052,0.6271,0.4253,0.6199,0.4449,0.6611,0.4266,0.6722]);
IndexedFaceSet738.texCoord = TextureCoordinate740;

Shape734.geometry = IndexedFaceSet738;

Transform733.child = new undefined();

Transform733.child[0] = Shape734;

HAnimSegment732.children = new MFNode();

HAnimSegment732.children[0] = Transform733;

HAnimJoint731.children = new MFNode();

HAnimJoint731.children[0] = HAnimSegment732;

HAnimJoint721.children[1] = HAnimJoint731;

HAnimJoint711.children[1] = HAnimJoint721;

HAnimJoint221.children[3] = HAnimJoint711;

HAnimJoint211.children[1] = HAnimJoint221;

HAnimJoint201.children[1] = HAnimJoint211;

HAnimJoint191.children[1] = HAnimJoint201;

HAnimJoint181.children[1] = HAnimJoint191;

HAnimJoint171.children[1] = HAnimJoint181;

HAnimJoint31.children[2] = HAnimJoint171;

HAnimHumanoid23.joints[1] = HAnimJoint31;

let HAnimJoint741 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint741.USE = "hanim_humanoid_root";
HAnimHumanoid23.joints[2] = HAnimJoint741;

let HAnimJoint742 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint742.USE = "hanim_sacroiliac";
HAnimHumanoid23.joints[3] = HAnimJoint742;

let HAnimJoint743 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint743.USE = "hanim_vl5";
HAnimHumanoid23.joints[4] = HAnimJoint743;

let HAnimJoint744 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint744.USE = "hanim_vl3";
HAnimHumanoid23.joints[5] = HAnimJoint744;

let HAnimJoint745 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint745.USE = "hanim_vl1";
HAnimHumanoid23.joints[6] = HAnimJoint745;

let HAnimJoint746 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint746.USE = "hanim_vt10";
HAnimHumanoid23.joints[7] = HAnimJoint746;

let HAnimJoint747 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint747.USE = "hanim_vt6";
HAnimHumanoid23.joints[8] = HAnimJoint747;

let HAnimJoint748 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint748.USE = "hanim_vt1";
HAnimHumanoid23.joints[9] = HAnimJoint748;

let HAnimJoint749 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint749.USE = "hanim_vc4";
HAnimHumanoid23.joints[10] = HAnimJoint749;

let HAnimJoint750 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint750.USE = "hanim_vc2";
HAnimHumanoid23.joints[11] = HAnimJoint750;

let HAnimJoint751 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint751.USE = "hanim_skullbase";
HAnimHumanoid23.joints[12] = HAnimJoint751;

let HAnimJoint752 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint752.USE = "hanim_l_acromioclavicular";
HAnimHumanoid23.joints[13] = HAnimJoint752;

let HAnimJoint753 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint753.USE = "hanim_r_acromioclavicular";
HAnimHumanoid23.joints[14] = HAnimJoint753;

let HAnimJoint754 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint754.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid23.joints[15] = HAnimJoint754;

let HAnimJoint755 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint755.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid23.joints[16] = HAnimJoint755;

let HAnimJoint756 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint756.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid23.joints[17] = HAnimJoint756;

let HAnimJoint757 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint757.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid23.joints[18] = HAnimJoint757;

let HAnimJoint758 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint758.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid23.joints[19] = HAnimJoint758;

let HAnimJoint759 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint759.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid23.joints[20] = HAnimJoint759;

let HAnimJoint760 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint760.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid23.joints[21] = HAnimJoint760;

let HAnimJoint761 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint761.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid23.joints[22] = HAnimJoint761;

let HAnimJoint762 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint762.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid23.joints[23] = HAnimJoint762;

let HAnimJoint763 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint763.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid23.joints[24] = HAnimJoint763;

let HAnimJoint764 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint764.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid23.joints[25] = HAnimJoint764;

let HAnimJoint765 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint765.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid23.joints[26] = HAnimJoint765;

let HAnimJoint766 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint766.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid23.joints[27] = HAnimJoint766;

let HAnimJoint767 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint767.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid23.joints[28] = HAnimJoint767;

let HAnimJoint768 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint768.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid23.joints[29] = HAnimJoint768;

let HAnimJoint769 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint769.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid23.joints[30] = HAnimJoint769;

let HAnimJoint770 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint770.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid23.joints[31] = HAnimJoint770;

let HAnimJoint771 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint771.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid23.joints[32] = HAnimJoint771;

let HAnimJoint772 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint772.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid23.joints[33] = HAnimJoint772;

let HAnimJoint773 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint773.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid23.joints[34] = HAnimJoint773;

let HAnimJoint774 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint774.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid23.joints[35] = HAnimJoint774;

let HAnimJoint775 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint775.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid23.joints[36] = HAnimJoint775;

let HAnimJoint776 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint776.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid23.joints[37] = HAnimJoint776;

let HAnimJoint777 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint777.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid23.joints[38] = HAnimJoint777;

let HAnimJoint778 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint778.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid23.joints[39] = HAnimJoint778;

let HAnimJoint779 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint779.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid23.joints[40] = HAnimJoint779;

let HAnimJoint780 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint780.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid23.joints[41] = HAnimJoint780;

let HAnimJoint781 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint781.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid23.joints[42] = HAnimJoint781;

let HAnimJoint782 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint782.USE = "hanim_l_elbow";
HAnimHumanoid23.joints[43] = HAnimJoint782;

let HAnimJoint783 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint783.USE = "hanim_r_elbow";
HAnimHumanoid23.joints[44] = HAnimJoint783;

let HAnimJoint784 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint784.USE = "hanim_l_hip";
HAnimHumanoid23.joints[45] = HAnimJoint784;

let HAnimJoint785 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint785.USE = "hanim_r_hip";
HAnimHumanoid23.joints[46] = HAnimJoint785;

let HAnimJoint786 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint786.USE = "hanim_l_knee";
HAnimHumanoid23.joints[47] = HAnimJoint786;

let HAnimJoint787 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint787.USE = "hanim_r_knee";
HAnimHumanoid23.joints[48] = HAnimJoint787;

let HAnimJoint788 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint788.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid23.joints[49] = HAnimJoint788;

let HAnimJoint789 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint789.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid23.joints[50] = HAnimJoint789;

let HAnimJoint790 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint790.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid23.joints[51] = HAnimJoint790;

let HAnimJoint791 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint791.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid23.joints[52] = HAnimJoint791;

let HAnimJoint792 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint792.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid23.joints[53] = HAnimJoint792;

let HAnimJoint793 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint793.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid23.joints[54] = HAnimJoint793;

let HAnimJoint794 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint794.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid23.joints[55] = HAnimJoint794;

let HAnimJoint795 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint795.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid23.joints[56] = HAnimJoint795;

let HAnimJoint796 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint796.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid23.joints[57] = HAnimJoint796;

let HAnimJoint797 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint797.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid23.joints[58] = HAnimJoint797;

let HAnimJoint798 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint798.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid23.joints[59] = HAnimJoint798;

let HAnimJoint799 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint799.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid23.joints[60] = HAnimJoint799;

let HAnimJoint800 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint800.USE = "hanim_l_radiocarpal";
HAnimHumanoid23.joints[61] = HAnimJoint800;

let HAnimJoint801 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint801.USE = "hanim_r_radiocarpal";
HAnimHumanoid23.joints[62] = HAnimJoint801;

let HAnimJoint802 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint802.USE = "hanim_l_shoulder";
HAnimHumanoid23.joints[63] = HAnimJoint802;

let HAnimJoint803 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint803.USE = "hanim_r_shoulder";
HAnimHumanoid23.joints[64] = HAnimJoint803;

let HAnimJoint804 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint804.USE = "hanim_l_sternoclavicular";
HAnimHumanoid23.joints[65] = HAnimJoint804;

let HAnimJoint805 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint805.USE = "hanim_r_sternoclavicular";
HAnimHumanoid23.joints[66] = HAnimJoint805;

let HAnimJoint806 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint806.USE = "hanim_l_talocrural";
HAnimHumanoid23.joints[67] = HAnimJoint806;

let HAnimJoint807 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint807.USE = "hanim_r_talocrural";
HAnimHumanoid23.joints[68] = HAnimJoint807;

let HAnimJoint808 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint808.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid23.joints[69] = HAnimJoint808;

let HAnimJoint809 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint809.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid23.joints[70] = HAnimJoint809;

let HAnimJoint810 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint810.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid23.joints[71] = HAnimJoint810;

let HAnimJoint811 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint811.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid23.joints[72] = HAnimJoint811;

let HAnimSegment812 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment812.USE = "hanim_sacrum";
HAnimHumanoid23.segments[73] = HAnimSegment812;

let HAnimSegment813 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment813.USE = "hanim_pelvis";
HAnimHumanoid23.segments[74] = HAnimSegment813;

let HAnimSegment814 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment814.USE = "hanim_l5";
HAnimHumanoid23.segments[75] = HAnimSegment814;

let HAnimSegment815 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment815.USE = "hanim_l3";
HAnimHumanoid23.segments[76] = HAnimSegment815;

let HAnimSegment816 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment816.USE = "hanim_l1";
HAnimHumanoid23.segments[77] = HAnimSegment816;

let HAnimSegment817 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment817.USE = "hanim_t10";
HAnimHumanoid23.segments[78] = HAnimSegment817;

let HAnimSegment818 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment818.USE = "hanim_t6";
HAnimHumanoid23.segments[79] = HAnimSegment818;

let HAnimSegment819 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment819.USE = "hanim_t1";
HAnimHumanoid23.segments[80] = HAnimSegment819;

let HAnimSegment820 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment820.USE = "hanim_c4";
HAnimHumanoid23.segments[81] = HAnimSegment820;

let HAnimSegment821 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment821.USE = "hanim_c2";
HAnimHumanoid23.segments[82] = HAnimSegment821;

let HAnimSegment822 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment822.USE = "hanim_skull";
HAnimHumanoid23.segments[83] = HAnimSegment822;

let HAnimSegment823 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment823.USE = "hanim_l_calf";
HAnimHumanoid23.segments[84] = HAnimSegment823;

let HAnimSegment824 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment824.USE = "hanim_r_calf";
HAnimHumanoid23.segments[85] = HAnimSegment824;

let HAnimSegment825 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment825.USE = "hanim_l_carpal";
HAnimHumanoid23.segments[86] = HAnimSegment825;

let HAnimSegment826 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment826.USE = "hanim_r_carpal";
HAnimHumanoid23.segments[87] = HAnimSegment826;

let HAnimSegment827 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment827.USE = "hanim_l_carpal_distal_phalanx_1";
HAnimHumanoid23.segments[88] = HAnimSegment827;

let HAnimSegment828 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment828.USE = "hanim_r_carpal_distal_phalanx_1";
HAnimHumanoid23.segments[89] = HAnimSegment828;

let HAnimSegment829 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment829.USE = "hanim_l_carpal_distal_phalanx_2";
HAnimHumanoid23.segments[90] = HAnimSegment829;

let HAnimSegment830 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment830.USE = "hanim_r_carpal_distal_phalanx_2";
HAnimHumanoid23.segments[91] = HAnimSegment830;

let HAnimSegment831 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment831.USE = "hanim_l_carpal_distal_phalanx_3";
HAnimHumanoid23.segments[92] = HAnimSegment831;

let HAnimSegment832 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment832.USE = "hanim_r_carpal_distal_phalanx_3";
HAnimHumanoid23.segments[93] = HAnimSegment832;

let HAnimSegment833 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment833.USE = "hanim_l_carpal_distal_phalanx_4";
HAnimHumanoid23.segments[94] = HAnimSegment833;

let HAnimSegment834 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment834.USE = "hanim_r_carpal_distal_phalanx_4";
HAnimHumanoid23.segments[95] = HAnimSegment834;

let HAnimSegment835 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment835.USE = "hanim_l_carpal_distal_phalanx_5";
HAnimHumanoid23.segments[96] = HAnimSegment835;

let HAnimSegment836 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment836.USE = "hanim_r_carpal_distal_phalanx_5";
HAnimHumanoid23.segments[97] = HAnimSegment836;

let HAnimSegment837 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment837.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid23.segments[98] = HAnimSegment837;

let HAnimSegment838 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment838.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid23.segments[99] = HAnimSegment838;

let HAnimSegment839 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment839.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid23.segments[100] = HAnimSegment839;

let HAnimSegment840 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment840.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid23.segments[101] = HAnimSegment840;

let HAnimSegment841 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment841.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid23.segments[102] = HAnimSegment841;

let HAnimSegment842 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment842.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid23.segments[103] = HAnimSegment842;

let HAnimSegment843 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment843.USE = "hanim_l_carpal_middle_phalanx_5";
HAnimHumanoid23.segments[104] = HAnimSegment843;

let HAnimSegment844 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment844.USE = "hanim_r_carpal_middle_phalanx_5";
HAnimHumanoid23.segments[105] = HAnimSegment844;

let HAnimSegment845 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment845.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid23.segments[106] = HAnimSegment845;

let HAnimSegment846 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment846.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid23.segments[107] = HAnimSegment846;

let HAnimSegment847 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment847.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid23.segments[108] = HAnimSegment847;

let HAnimSegment848 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment848.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid23.segments[109] = HAnimSegment848;

let HAnimSegment849 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment849.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid23.segments[110] = HAnimSegment849;

let HAnimSegment850 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment850.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid23.segments[111] = HAnimSegment850;

let HAnimSegment851 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment851.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid23.segments[112] = HAnimSegment851;

let HAnimSegment852 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment852.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid23.segments[113] = HAnimSegment852;

let HAnimSegment853 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment853.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid23.segments[114] = HAnimSegment853;

let HAnimSegment854 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment854.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid23.segments[115] = HAnimSegment854;

let HAnimSegment855 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment855.USE = "hanim_l_clavicle";
HAnimHumanoid23.segments[116] = HAnimSegment855;

let HAnimSegment856 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment856.USE = "hanim_r_clavicle";
HAnimHumanoid23.segments[117] = HAnimSegment856;

let HAnimSegment857 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment857.USE = "hanim_l_forearm";
HAnimHumanoid23.segments[118] = HAnimSegment857;

let HAnimSegment858 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment858.USE = "hanim_r_forearm";
HAnimHumanoid23.segments[119] = HAnimSegment858;

let HAnimSegment859 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment859.USE = "hanim_l_metacarpal_1";
HAnimHumanoid23.segments[120] = HAnimSegment859;

let HAnimSegment860 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment860.USE = "hanim_r_metacarpal_1";
HAnimHumanoid23.segments[121] = HAnimSegment860;

let HAnimSegment861 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment861.USE = "hanim_l_metacarpal_2";
HAnimHumanoid23.segments[122] = HAnimSegment861;

let HAnimSegment862 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment862.USE = "hanim_r_metacarpal_2";
HAnimHumanoid23.segments[123] = HAnimSegment862;

let HAnimSegment863 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment863.USE = "hanim_l_metacarpal_3";
HAnimHumanoid23.segments[124] = HAnimSegment863;

let HAnimSegment864 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment864.USE = "hanim_r_metacarpal_3";
HAnimHumanoid23.segments[125] = HAnimSegment864;

let HAnimSegment865 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment865.USE = "hanim_l_metacarpal_4";
HAnimHumanoid23.segments[126] = HAnimSegment865;

let HAnimSegment866 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment866.USE = "hanim_r_metacarpal_4";
HAnimHumanoid23.segments[127] = HAnimSegment866;

let HAnimSegment867 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment867.USE = "hanim_l_metacarpal_5";
HAnimHumanoid23.segments[128] = HAnimSegment867;

let HAnimSegment868 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment868.USE = "hanim_r_metacarpal_5";
HAnimHumanoid23.segments[129] = HAnimSegment868;

let HAnimSegment869 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment869.USE = "hanim_r_metatarsal_2";
HAnimHumanoid23.segments[130] = HAnimSegment869;

let HAnimSegment870 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment870.USE = "hanim_l_metatarsal_2";
HAnimHumanoid23.segments[131] = HAnimSegment870;

let HAnimSegment871 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment871.USE = "hanim_l_scapula";
HAnimHumanoid23.segments[132] = HAnimSegment871;

let HAnimSegment872 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment872.USE = "hanim_r_scapula";
HAnimHumanoid23.segments[133] = HAnimSegment872;

let HAnimSegment873 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment873.USE = "hanim_l_talus";
HAnimHumanoid23.segments[134] = HAnimSegment873;

let HAnimSegment874 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment874.USE = "hanim_r_talus";
HAnimHumanoid23.segments[135] = HAnimSegment874;

let HAnimSegment875 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment875.USE = "hanim_l_tarsal_distal_phalanx_2";
HAnimHumanoid23.segments[136] = HAnimSegment875;

let HAnimSegment876 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment876.USE = "hanim_r_tarsal_distal_phalanx_2";
HAnimHumanoid23.segments[137] = HAnimSegment876;

let HAnimSegment877 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment877.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid23.segments[138] = HAnimSegment877;

let HAnimSegment878 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment878.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid23.segments[139] = HAnimSegment878;

let HAnimSegment879 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment879.USE = "hanim_l_thigh";
HAnimHumanoid23.segments[140] = HAnimSegment879;

let HAnimSegment880 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment880.USE = "hanim_r_thigh";
HAnimHumanoid23.segments[141] = HAnimSegment880;

let HAnimSegment881 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment881.USE = "hanim_l_upperarm";
HAnimHumanoid23.segments[142] = HAnimSegment881;

let HAnimSegment882 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment882.USE = "hanim_r_upperarm";
HAnimHumanoid23.segments[143] = HAnimSegment882;

browser.currentScene.children[3] = HAnimHumanoid23;

