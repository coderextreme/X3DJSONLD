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
meta3.content = "JinLOA3.x3d";
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
meta8.content = "27 January 2023";
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
meta13.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JinLOA3.x3d";
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
WorldInfo20.title = "JinLOA3.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo20;

let NavigationInfo21 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo21.speed = 1.5;
browser.currentScene.children[1] = NavigationInfo21;

let Viewpoint22 = browser.currentScene.createNode("Viewpoint");
Viewpoint22.centerOfRotation = new SFVec3f(new float[0,1,0]);
Viewpoint22.description = "JinLOA3";
Viewpoint22.position = new SFVec3f(new float[0,1,3]);
browser.currentScene.children[2] = Viewpoint22;

let HAnimHumanoid23 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid23.name = "JinLOA3";
HAnimHumanoid23.DEF = "hanim_JinLOA3";
HAnimHumanoid23.loa = 3;
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
ImageTexture37.DEF = "JinLOA3TextureAtlas";
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
ImageTexture47.USE = "JinLOA3TextureAtlas";
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
ImageTexture57.USE = "JinLOA3TextureAtlas";
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
ImageTexture67.USE = "JinLOA3TextureAtlas";
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
ImageTexture77.USE = "JinLOA3TextureAtlas";
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
ImageTexture87.USE = "JinLOA3TextureAtlas";
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
ImageTexture97.USE = "JinLOA3TextureAtlas";
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
ImageTexture107.USE = "JinLOA3TextureAtlas";
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
ImageTexture117.USE = "JinLOA3TextureAtlas";
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
ImageTexture127.USE = "JinLOA3TextureAtlas";
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
ImageTexture137.USE = "JinLOA3TextureAtlas";
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
ImageTexture147.USE = "JinLOA3TextureAtlas";
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
ImageTexture157.USE = "JinLOA3TextureAtlas";
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
ImageTexture167.USE = "JinLOA3TextureAtlas";
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
ImageTexture177.USE = "JinLOA3TextureAtlas";
Appearance175.texture = ImageTexture177;

Shape174.appearance = Appearance175;

let IndexedFaceSet178 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet178.coordIndex = new MFInt32(new int[0,10,11,-1,11,5,0,-1,1,0,5,-1,5,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,1,6,-1,6,9,4,-1,2,7,26,-1,26,27,2,-1,8,5,11,-1,11,7,8,-1,9,6,5,-1,5,8,9,-1,11,10,13,-1,13,12,11,-1,7,11,12,-1,12,26,7,-1,16,15,14,-1,14,17,16,-1,19,18,15,-1,15,16,19,-1,22,21,20,-1,20,23,22,-1,23,20,24,-1,24,25,23,-1,25,24,18,-1,18,19,25,-1,22,27,26,-1,26,21,22,-1,20,21,14,-1,14,15,20,-1,24,20,15,-1,15,18,24,-1,14,12,13,-1,13,17,14,-1,21,26,12,-1,12,14,21,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,10,0,29,-1,29,28,10,-1,0,1,30,-1,30,29,0,-1,1,4,31,-1,31,30,1,-1,4,3,32,-1,32,31,4,-1,3,2,33,-1,33,32,3,-1,2,27,34,-1,34,33,2,-1,27,22,35,-1,35,34,27,-1,22,23,36,-1,36,35,22,-1,23,25,37,-1,37,36,23,-1,25,19,38,-1,38,37,25,-1,19,16,39,-1,39,38,19,-1,16,17,40,-1,40,39,16,-1,17,13,41,-1,41,40,17,-1,13,10,28,-1,28,41,13,-1]);
IndexedFaceSet178.creaseAngle = 3.14159;
IndexedFaceSet178.texCoordIndex = new MFInt32(new int[1,0,6,-1,6,7,1,-1,2,1,7,-1,7,8,2,-1,4,3,9,-1,9,10,4,-1,3,5,11,-1,11,9,3,-1,5,2,8,-1,8,11,5,-1,12,13,15,-1,15,14,12,-1,9,7,6,-1,6,10,9,-1,11,8,7,-1,7,9,11,-1,6,0,17,-1,17,18,6,-1,10,6,18,-1,18,16,10,-1,21,20,19,-1,19,22,21,-1,24,23,20,-1,20,21,24,-1,27,26,25,-1,25,28,27,-1,28,25,29,-1,29,30,28,-1,30,29,23,-1,23,24,30,-1,31,34,33,-1,33,32,31,-1,25,26,19,-1,19,20,25,-1,29,25,20,-1,20,23,29,-1,19,35,36,-1,36,22,19,-1,26,37,35,-1,35,19,26,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,43,46,50,-1,39,43,50,-1,39,50,51,-1,39,51,38,-1,0,1,39,-1,39,38,0,-1,1,2,40,-1,40,39,1,-1,2,5,41,-1,41,40,2,-1,5,3,42,-1,42,41,5,-1,3,4,43,-1,43,42,3,-1,12,14,44,-1,44,43,12,-1,34,31,45,-1,45,44,34,-1,27,28,46,-1,46,45,27,-1,28,30,47,-1,47,46,28,-1,30,24,48,-1,48,47,30,-1,24,21,49,-1,49,48,24,-1,21,22,50,-1,50,49,21,-1,22,36,51,-1,51,50,22,-1,17,0,38,-1,38,51,17,-1]);
let Coordinate179 = browser.currentScene.createNode("Coordinate");
Coordinate179.point = new MFVec3f(new float[4.178,1.114,3.711,5.76,1.15,1.754,1.52,0.9575,-3.918,3.95,0.9672,-2.776,5.309,1.072,-0.9797,3.789,0.0396,2.969,5.166,0.0713,1.445,1.593,-0.0798,-2.916,3.6,-0.0573,-2.087,4.841,-0.0103,-0.6841,1.635,1.083,4.322,1.595,0.0009,3.405,0,0.0009,3.405,0,1.083,4.322,-1.595,0.0009,3.405,-3.789,0.0396,2.969,-4.178,1.114,3.711,-1.635,1.083,4.322,-5.166,0.0713,1.445,-5.76,1.15,1.754,-3.6,-0.0573,-2.087,-1.593,-0.0798,-2.916,-1.52,0.9575,-3.918,-3.95,0.9672,-2.776,-4.841,-0.0103,-0.6841,-5.309,1.072,-0.9797,0,-0.0798,-2.916,0,0.9575,-3.918,1.609,1.473,4.099,4.053,1.473,3.512,5.524,1.473,1.692,5.098,1.473,-0.8893,3.806,1.473,-2.528,1.47,1.473,-3.626,0,1.473,-3.626,-1.47,1.473,-3.626,-3.806,1.473,-2.528,-5.098,1.473,-0.8893,-5.524,1.473,1.692,-4.053,1.473,3.512,-1.609,1.473,4.099,0,1.473,4.099]);
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
HAnimJoint181.name = "vl4";
HAnimJoint181.DEF = "hanim_vl4";
HAnimJoint181.center = new SFVec3f(new float[0,41.299999,-0.6117]);
HAnimJoint181.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint181.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment182 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment182.name = "l4";
HAnimSegment182.DEF = "hanim_l4";
let Transform183 = browser.currentScene.createNode("Transform");
Transform183.translation = new SFVec3f(new float[0,41.299999,-0.6117]);
let Shape184 = browser.currentScene.createNode("Shape");
let Appearance185 = browser.currentScene.createNode("Appearance");
let Material186 = browser.currentScene.createNode("Material");
Material186.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance185.material = Material186;

let ImageTexture187 = browser.currentScene.createNode("ImageTexture");
ImageTexture187.USE = "JinLOA3TextureAtlas";
Appearance185.texture = ImageTexture187;

Shape184.appearance = Appearance185;

let IndexedFaceSet188 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet188.coordIndex = new MFInt32(new int[11,6,0,-1,0,3,11,-1,7,1,0,-1,0,6,7,-1,9,8,2,-1,2,4,9,-1,10,9,4,-1,4,5,10,-1,10,5,1,-1,1,7,10,-1,25,11,3,-1,3,26,25,-1,2,8,12,-1,12,27,2,-1,13,16,15,-1,15,14,13,-1,17,14,15,-1,15,18,17,-1,19,22,21,-1,21,20,19,-1,23,24,22,-1,22,19,23,-1,23,17,18,-1,18,24,23,-1,25,26,16,-1,16,13,25,-1,21,27,12,-1,12,20,21,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,48,50,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,48,51,55,-1,44,48,55,-1,43,44,55,-1,43,55,42,-1,3,0,29,-1,29,28,3,-1,0,1,30,-1,30,29,0,-1,1,5,31,-1,31,30,1,-1,5,4,32,-1,32,31,5,-1,4,2,33,-1,33,32,4,-1,2,27,34,-1,34,33,2,-1,27,21,35,-1,35,34,27,-1,21,22,36,-1,36,35,21,-1,22,24,37,-1,37,36,22,-1,24,18,38,-1,38,37,24,-1,18,15,39,-1,39,38,18,-1,15,16,40,-1,40,39,15,-1,16,26,41,-1,41,40,16,-1,26,3,28,-1,28,41,26,-1,6,11,43,-1,43,42,6,-1,11,25,44,-1,44,43,11,-1,25,13,45,-1,45,44,25,-1,13,14,46,-1,46,45,13,-1,14,17,47,-1,47,46,14,-1,17,23,48,-1,48,47,17,-1,23,19,49,-1,49,48,23,-1,19,20,50,-1,50,49,19,-1,20,12,51,-1,51,50,20,-1,12,8,52,-1,52,51,12,-1,8,9,53,-1,53,52,8,-1,9,10,54,-1,54,53,9,-1,10,7,55,-1,55,54,10,-1,7,6,42,-1,42,55,7,-1]);
IndexedFaceSet188.creaseAngle = 3.14159;
IndexedFaceSet188.texCoordIndex = new MFInt32(new int[15,9,0,-1,0,4,15,-1,10,1,0,-1,0,9,10,-1,13,12,2,-1,2,5,13,-1,14,13,5,-1,5,6,14,-1,14,6,1,-1,1,10,14,-1,17,15,4,-1,4,7,17,-1,3,11,16,-1,16,8,3,-1,18,21,20,-1,20,19,18,-1,22,19,20,-1,20,23,22,-1,24,27,26,-1,26,25,24,-1,28,29,27,-1,27,24,28,-1,28,22,23,-1,23,29,28,-1,30,31,21,-1,21,18,30,-1,32,35,34,-1,34,33,32,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,37,41,48,-1,37,48,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,52,54,56,-1,56,57,58,-1,56,58,59,-1,59,60,61,-1,61,62,63,-1,59,61,63,-1,56,59,63,-1,52,56,63,-1,51,52,63,-1,51,63,50,-1,4,0,37,-1,37,36,4,-1,0,1,38,-1,38,37,0,-1,1,6,39,-1,39,38,1,-1,6,5,40,-1,40,39,6,-1,5,2,41,-1,41,40,5,-1,3,8,42,-1,42,41,3,-1,35,32,43,-1,43,42,35,-1,26,27,44,-1,44,43,26,-1,27,29,45,-1,45,44,27,-1,29,23,46,-1,46,45,29,-1,23,20,47,-1,47,46,23,-1,20,21,48,-1,48,47,20,-1,21,31,49,-1,49,48,21,-1,7,4,36,-1,36,49,7,-1,9,15,51,-1,51,50,9,-1,15,17,52,-1,52,51,15,-1,30,18,53,-1,53,52,30,-1,18,19,54,-1,54,53,18,-1,19,22,55,-1,55,54,19,-1,22,28,56,-1,56,55,22,-1,28,24,57,-1,57,56,28,-1,24,25,58,-1,58,57,24,-1,33,34,59,-1,59,58,33,-1,16,11,60,-1,60,59,16,-1,12,13,61,-1,61,60,12,-1,13,14,62,-1,62,61,13,-1,14,10,63,-1,63,62,14,-1,10,9,50,-1,50,63,10,-1]);
let Coordinate189 = browser.currentScene.createNode("Coordinate");
Coordinate189.point = new MFVec3f(new float[4.026,0.7465,3.365,5.556,0.7644,1.615,1.443,0.6683,-3.473,1.519,0.7312,3.919,3.83,0.6731,-2.414,5.148,0.7257,-0.8425,4.178,0.0328,3.711,5.76,0.0687,1.754,1.52,-0.1236,-3.918,3.95,-0.1138,-2.776,5.309,-0.0087,-0.9797,1.635,0.0023,4.322,0,-0.1236,-3.918,-1.635,0.0023,4.322,-4.178,0.0328,3.711,-4.026,0.7465,3.365,-1.519,0.7312,3.919,-5.76,0.0687,1.754,-5.556,0.7644,1.615,-3.95,-0.1138,-2.776,-1.52,-0.1236,-3.918,-1.443,0.6683,-3.473,-3.83,0.6731,-2.414,-5.309,-0.0087,-0.9797,-5.148,0.7257,-0.8425,0,0.0023,4.322,0,0.7312,3.919,0,0.6683,-3.473,1.493,1.061,3.676,3.895,1.061,3.145,5.297,1.061,1.541,4.918,1.061,-0.7369,3.68,1.061,-2.214,1.392,1.061,-3.23,0,1.061,-3.23,-1.392,1.061,-3.23,-3.68,1.061,-2.214,-4.918,1.061,-0.7369,-5.297,1.061,1.541,-3.895,1.061,3.145,-1.493,1.061,3.676,0,1.061,3.676,3.857,-0.461,3.349,1.533,-0.461,3.907,0,-0.461,3.907,-1.533,-0.461,3.907,-3.857,-0.461,3.349,-5.251,-0.461,1.624,-4.847,-0.461,-0.8254,-3.619,-0.461,-2.448,-1.398,-0.461,-3.492,0,-0.461,-3.492,1.398,-0.461,-3.492,3.619,-0.461,-2.448,4.847,-0.461,-0.8254,5.251,-0.461,1.624]);
IndexedFaceSet188.coord = Coordinate189;

let TextureCoordinate190 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate190.point = new MFVec2f(new float[0.1026,0.2616,0.1481,0.2604,0.3503,0.2575,0.3578,0.2568,0.0179,0.2574,0.2289,0.2559,0.1884,0.2584,0.0186,0.2582,0.3542,0.2515,0.1011,0.241,0.1445,0.2419,0.3553,0.2398,0.3561,0.2404,0.2369,0.2375,0.1927,0.24,0.019,0.2349,0.3557,0.2401,0.019,0.2349,0.019,0.2349,0.1011,0.241,0.1026,0.2616,0.0179,0.2574,0.1445,0.2419,0.1481,0.2604,0.2369,0.2375,0.3561,0.2404,0.3503,0.2575,0.2289,0.2559,0.1927,0.24,0.1884,0.2584,0.019,0.2349,0.0186,0.2582,0.3578,0.2568,0.3553,0.2398,0.3557,0.2401,0.3542,0.2515,0.0179,0.2574,0.1026,0.2616,0.1481,0.2604,0.1884,0.2584,0.2289,0.2559,0.3503,0.2575,0.3542,0.2515,0.3578,0.2568,0.2289,0.2559,0.1884,0.2584,0.1481,0.2604,0.1026,0.2616,0.0179,0.2574,0.0186,0.2582,0.1011,0.241,0.019,0.2349,0.019,0.2349,0.019,0.2349,0.1011,0.241,0.1445,0.2419,0.1927,0.24,0.2369,0.2375,0.3561,0.2404,0.3557,0.2401,0.3553,0.2398,0.2369,0.2375,0.1927,0.24,0.1445,0.2419]);
IndexedFaceSet188.texCoord = TextureCoordinate190;

Shape184.geometry = IndexedFaceSet188;

Transform183.child = new undefined();

Transform183.child[0] = Shape184;

HAnimSegment182.children = new MFNode();

HAnimSegment182.children[0] = Transform183;

HAnimJoint181.children = new MFNode();

HAnimJoint181.children[0] = HAnimSegment182;

let HAnimJoint191 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint191.name = "vl3";
HAnimJoint191.DEF = "hanim_vl3";
HAnimJoint191.center = new SFVec3f(new float[0,42.029999,-0.6117]);
HAnimJoint191.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint191.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment192 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment192.name = "l3";
HAnimSegment192.DEF = "hanim_l3";
let Transform193 = browser.currentScene.createNode("Transform");
Transform193.translation = new SFVec3f(new float[0,42.029999,-0.6117]);
let Shape194 = browser.currentScene.createNode("Shape");
let Appearance195 = browser.currentScene.createNode("Appearance");
let Material196 = browser.currentScene.createNode("Material");
Material196.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance195.material = Material196;

let ImageTexture197 = browser.currentScene.createNode("ImageTexture");
ImageTexture197.USE = "JinLOA3TextureAtlas";
Appearance195.texture = ImageTexture197;

Shape194.appearance = Appearance195;

let IndexedFaceSet198 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet198.coordIndex = new MFInt32(new int[1,8,15,-1,15,16,1,-1,0,4,9,-1,9,6,0,-1,7,5,0,-1,0,6,7,-1,1,2,10,-1,10,8,1,-1,2,3,11,-1,11,10,2,-1,11,3,5,-1,5,7,11,-1,4,27,12,-1,12,9,4,-1,13,16,15,-1,15,14,13,-1,18,17,20,-1,20,19,18,-1,21,17,18,-1,18,22,21,-1,13,14,24,-1,24,23,13,-1,23,24,26,-1,26,25,23,-1,26,21,22,-1,22,25,26,-1,19,20,12,-1,12,27,19,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,48,50,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,48,51,55,-1,44,48,55,-1,43,44,55,-1,43,55,42,-1,4,0,29,-1,29,28,4,-1,0,5,30,-1,30,29,0,-1,5,3,31,-1,31,30,5,-1,3,2,32,-1,32,31,3,-1,2,1,33,-1,33,32,2,-1,1,16,34,-1,34,33,1,-1,16,13,35,-1,35,34,16,-1,13,23,36,-1,36,35,13,-1,23,25,37,-1,37,36,23,-1,25,22,38,-1,38,37,25,-1,22,18,39,-1,39,38,22,-1,18,19,40,-1,40,39,18,-1,19,27,41,-1,41,40,19,-1,27,4,28,-1,28,41,27,-1,6,9,43,-1,43,42,6,-1,9,12,44,-1,44,43,9,-1,12,20,45,-1,45,44,12,-1,20,17,46,-1,46,45,20,-1,17,21,47,-1,47,46,17,-1,21,26,48,-1,48,47,21,-1,26,24,49,-1,49,48,26,-1,24,14,50,-1,50,49,24,-1,14,15,51,-1,51,50,14,-1,15,8,52,-1,52,51,15,-1,8,10,53,-1,53,52,8,-1,10,11,54,-1,54,53,10,-1,11,7,55,-1,55,54,11,-1,7,6,42,-1,42,55,7,-1]);
IndexedFaceSet198.creaseAngle = 3.14159;
IndexedFaceSet198.texCoordIndex = new MFInt32(new int[4,11,17,-1,17,7,4,-1,0,1,13,-1,13,9,0,-1,10,2,0,-1,0,9,10,-1,3,5,14,-1,14,12,3,-1,5,6,15,-1,15,14,5,-1,15,6,2,-1,2,10,15,-1,1,8,16,-1,16,13,1,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,26,22,23,-1,23,27,26,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,33,26,27,-1,27,32,33,-1,24,25,35,-1,35,34,24,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,37,41,48,-1,37,48,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,52,54,56,-1,56,57,58,-1,56,58,59,-1,59,60,61,-1,61,62,63,-1,59,61,63,-1,56,59,63,-1,52,56,63,-1,51,52,63,-1,51,63,50,-1,1,0,37,-1,37,36,1,-1,0,2,38,-1,38,37,0,-1,2,6,39,-1,39,38,2,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,21,18,43,-1,43,42,21,-1,29,30,44,-1,44,43,29,-1,30,32,45,-1,45,44,30,-1,32,27,46,-1,46,45,32,-1,27,23,47,-1,47,46,27,-1,23,24,48,-1,48,47,23,-1,24,34,49,-1,49,48,24,-1,8,1,36,-1,36,49,8,-1,9,13,51,-1,51,50,9,-1,13,16,52,-1,52,51,13,-1,35,25,53,-1,53,52,35,-1,25,22,54,-1,54,53,25,-1,22,26,55,-1,55,54,22,-1,26,33,56,-1,56,55,26,-1,33,31,57,-1,57,56,33,-1,31,28,58,-1,58,57,31,-1,19,20,59,-1,59,58,19,-1,17,11,60,-1,60,59,17,-1,12,14,61,-1,61,60,12,-1,14,15,62,-1,62,61,14,-1,15,10,63,-1,63,62,15,-1,10,9,50,-1,50,63,10,-1]);
let Coordinate199 = browser.currentScene.createNode("Coordinate");
Coordinate199.point = new MFVec3f(new float[3.874,0.7332,3.02,1.367,0.7332,-3.028,3.71,0.7332,-2.051,4.987,0.7332,-0.7054,1.404,0.7332,3.517,5.353,0.7332,1.475,4.026,0.0196,3.365,5.556,0.0375,1.615,1.443,-0.0586,-3.473,1.519,0.0043,3.919,3.83,-0.0538,-2.414,5.148,-0.0012,-0.8425,0,0.0043,3.919,-1.367,0.7332,-3.028,-1.443,-0.0586,-3.473,0,-0.0586,-3.473,0,0.7332,-3.028,-4.026,0.0196,3.365,-3.874,0.7332,3.02,-1.404,0.7332,3.517,-1.519,0.0043,3.919,-5.556,0.0375,1.615,-5.353,0.7332,1.475,-3.71,0.7332,-2.051,-3.83,-0.0538,-2.414,-4.987,0.7332,-0.7054,-5.148,-0.0012,-0.8425,0,0.7332,3.517,1.366,1.112,3.286,3.726,1.112,2.811,5.078,1.112,1.398,4.742,1.112,-0.6029,3.55,1.112,-1.86,1.311,1.112,-2.794,0,1.112,-2.794,-1.311,1.112,-2.794,-3.55,1.112,-1.86,-4.742,1.112,-0.6029,-5.078,1.112,1.398,-3.726,1.112,2.811,-1.366,1.112,3.286,0,1.112,3.286,3.87,-0.3411,3.153,1.478,-0.3411,3.682,0,-0.3411,3.682,-1.478,-0.3411,3.682,-3.87,-0.3411,3.153,-5.28,-0.3411,1.54,-4.9,-0.3411,-0.7446,-3.661,-0.3411,-2.221,-1.384,-0.3411,-3.233,0,-0.3411,-3.233,1.384,-0.3411,-3.233,3.661,-0.3411,-2.221,4.9,-0.3411,-0.7446,5.28,-0.3411,1.54]);
IndexedFaceSet198.coord = Coordinate199;

let TextureCoordinate200 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate200.point = new MFVec2f(new float[0.1041,0.2822,0.0168,0.2798,0.1518,0.2789,0.3444,0.2746,0.3604,0.2737,0.221,0.2742,0.1842,0.2768,0.3527,0.263,0.0181,0.2816,0.1026,0.2616,0.1481,0.2604,0.3578,0.2568,0.3503,0.2575,0.0179,0.2574,0.2289,0.2559,0.1884,0.2584,0.0186,0.2582,0.3542,0.2515,0.3604,0.2737,0.3578,0.2568,0.3542,0.2515,0.3527,0.263,0.1026,0.2616,0.1041,0.2822,0.0168,0.2798,0.0179,0.2574,0.1481,0.2604,0.1518,0.2789,0.3503,0.2575,0.3444,0.2746,0.221,0.2742,0.2289,0.2559,0.1842,0.2768,0.1884,0.2584,0.0181,0.2816,0.0186,0.2582,0.0168,0.2798,0.1041,0.2822,0.1518,0.2789,0.1842,0.2768,0.221,0.2742,0.3444,0.2746,0.3527,0.263,0.3604,0.2737,0.221,0.2742,0.1842,0.2768,0.1518,0.2789,0.1041,0.2822,0.0168,0.2798,0.0181,0.2816,0.1026,0.2616,0.0179,0.2574,0.0186,0.2582,0.0179,0.2574,0.1026,0.2616,0.1481,0.2604,0.1884,0.2584,0.2289,0.2559,0.3503,0.2575,0.3542,0.2515,0.3578,0.2568,0.2289,0.2559,0.1884,0.2584,0.1481,0.2604]);
IndexedFaceSet198.texCoord = TextureCoordinate200;

Shape194.geometry = IndexedFaceSet198;

Transform193.child = new undefined();

Transform193.child[0] = Shape194;

HAnimSegment192.children = new MFNode();

HAnimSegment192.children[0] = Transform193;

HAnimJoint191.children = new MFNode();

HAnimJoint191.children[0] = HAnimSegment192;

let HAnimJoint201 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint201.name = "vl2";
HAnimJoint201.DEF = "hanim_vl2";
HAnimJoint201.center = new SFVec3f(new float[0,42.759998,-0.6117]);
HAnimJoint201.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint201.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment202 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment202.name = "l2";
HAnimSegment202.DEF = "hanim_l2";
let Transform203 = browser.currentScene.createNode("Transform");
Transform203.translation = new SFVec3f(new float[0,42.759998,-0.6117]);
let Shape204 = browser.currentScene.createNode("Shape");
let Appearance205 = browser.currentScene.createNode("Appearance");
let Material206 = browser.currentScene.createNode("Material");
Material206.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance205.material = Material206;

let ImageTexture207 = browser.currentScene.createNode("ImageTexture");
ImageTexture207.USE = "JinLOA3TextureAtlas";
Appearance205.texture = ImageTexture207;

Shape204.appearance = Appearance205;

let IndexedFaceSet208 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet208.coordIndex = new MFInt32(new int[3,7,14,-1,14,15,3,-1,0,5,10,-1,10,6,0,-1,11,2,0,-1,0,6,11,-1,3,4,8,-1,8,7,3,-1,4,1,9,-1,9,8,4,-1,9,1,2,-1,2,11,9,-1,5,26,27,-1,27,10,5,-1,12,15,14,-1,14,13,12,-1,17,16,19,-1,19,18,17,-1,20,16,17,-1,17,21,20,-1,12,13,23,-1,23,22,12,-1,22,23,25,-1,25,24,22,-1,25,20,21,-1,21,24,25,-1,18,19,27,-1,27,26,18,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,48,50,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,48,51,55,-1,44,48,55,-1,43,44,55,-1,43,55,42,-1,5,0,29,-1,29,28,5,-1,0,2,30,-1,30,29,0,-1,2,1,31,-1,31,30,2,-1,1,4,32,-1,32,31,1,-1,4,3,33,-1,33,32,4,-1,3,15,34,-1,34,33,3,-1,15,12,35,-1,35,34,15,-1,12,22,36,-1,36,35,12,-1,22,24,37,-1,37,36,22,-1,24,21,38,-1,38,37,24,-1,21,17,39,-1,39,38,21,-1,17,18,40,-1,40,39,17,-1,18,26,41,-1,41,40,18,-1,26,5,28,-1,28,41,26,-1,6,10,43,-1,43,42,6,-1,10,27,44,-1,44,43,10,-1,27,19,45,-1,45,44,27,-1,19,16,46,-1,46,45,19,-1,16,20,47,-1,47,46,16,-1,20,25,48,-1,48,47,20,-1,25,23,49,-1,49,48,25,-1,23,13,50,-1,50,49,23,-1,13,14,51,-1,51,50,13,-1,14,7,52,-1,52,51,14,-1,7,8,53,-1,53,52,7,-1,8,9,54,-1,54,53,8,-1,9,11,55,-1,55,54,9,-1,11,6,42,-1,42,55,11,-1]);
IndexedFaceSet208.creaseAngle = 3.14159;
IndexedFaceSet208.texCoordIndex = new MFInt32(new int[6,10,16,-1,16,7,6,-1,1,0,14,-1,14,9,1,-1,15,2,1,-1,1,9,15,-1,4,3,12,-1,12,11,4,-1,3,5,13,-1,13,12,3,-1,13,5,2,-1,2,15,13,-1,0,8,17,-1,17,14,0,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,26,22,23,-1,23,27,26,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,33,26,27,-1,27,32,33,-1,24,25,35,-1,35,34,24,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,52,54,56,-1,56,57,58,-1,56,58,59,-1,59,60,61,-1,61,62,63,-1,59,61,63,-1,56,59,63,-1,52,56,63,-1,51,52,63,-1,51,63,50,-1,0,1,37,-1,37,36,0,-1,1,2,38,-1,38,37,1,-1,2,5,39,-1,39,38,2,-1,5,3,40,-1,40,39,5,-1,3,4,41,-1,41,40,3,-1,6,7,42,-1,42,41,6,-1,21,18,43,-1,43,42,21,-1,29,30,44,-1,44,43,29,-1,30,32,45,-1,45,44,30,-1,32,27,46,-1,46,45,32,-1,27,23,47,-1,47,46,27,-1,23,24,48,-1,48,47,23,-1,24,34,49,-1,49,48,24,-1,8,0,36,-1,36,49,8,-1,9,14,51,-1,51,50,9,-1,14,17,52,-1,52,51,14,-1,35,25,53,-1,53,52,35,-1,25,22,54,-1,54,53,25,-1,22,26,55,-1,55,54,22,-1,26,33,56,-1,56,55,26,-1,33,31,57,-1,57,56,33,-1,31,28,58,-1,58,57,31,-1,19,20,59,-1,59,58,19,-1,16,10,60,-1,60,59,16,-1,11,12,61,-1,61,60,11,-1,12,13,62,-1,62,61,12,-1,13,15,63,-1,63,62,13,-1,15,9,50,-1,50,63,15,-1]);
let Coordinate209 = browser.currentScene.createNode("Coordinate");
Coordinate209.point = new MFVec3f(new float[3.71,0.777,2.648,4.818,0.777,-0.5615,5.128,0.777,1.321,1.293,0.777,-2.595,3.593,0.777,-1.696,1.281,0.777,3.092,3.874,0.0063,3.02,1.367,0.0063,-3.028,3.71,0.0063,-2.051,4.987,0.0063,-0.7054,1.404,0.0063,3.517,5.353,0.0063,1.475,-1.293,0.777,-2.595,-1.367,0.0063,-3.028,0,0.0063,-3.028,0,0.777,-2.595,-3.874,0.0063,3.02,-3.71,0.777,2.648,-1.281,0.777,3.092,-1.404,0.0063,3.517,-5.353,0.0063,1.475,-5.128,0.777,1.321,-3.593,0.777,-1.696,-3.71,0.0063,-2.051,-4.818,0.777,-0.5615,-4.987,0.0063,-0.7054,0,0.777,3.092,0,0.0063,3.517,1.261,1.231,2.872,3.606,1.231,2.442,4.891,1.231,1.241,4.612,1.231,-0.451,3.473,1.231,-1.506,1.251,1.231,-2.375,0,1.231,-2.375,-1.251,1.231,-2.375,-3.473,1.231,-1.506,-4.612,1.231,-0.451,-4.891,1.231,1.241,-3.606,1.231,2.442,-1.261,1.231,2.872,0,1.231,2.872,3.853,-0.3735,2.877,1.415,-0.3735,3.367,0,-0.3735,3.367,-1.415,-0.3735,3.367,-3.853,-0.3735,2.877,-5.24,-0.3735,1.428,-4.895,-0.3735,-0.6254,-3.668,-0.3735,-1.919,-1.354,-0.3735,-2.884,0,-0.3735,-2.884,1.354,-0.3735,-2.884,3.668,-0.3735,-1.919,4.895,-0.3735,-0.6254,5.24,-0.3735,1.428]);
IndexedFaceSet208.coord = Coordinate209;

let TextureCoordinate210 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate210.point = new MFVec2f(new float[0.0177,0.3051,0.0982,0.302,0.1487,0.2975,0.2175,0.2944,0.3621,0.2922,0.1849,0.2961,0.3633,0.2922,0.3627,0.2922,0.0177,0.3051,0.1055,0.2814,0.3697,0.2711,0.3605,0.2757,0.2204,0.275,0.1853,0.2768,0.024,0.2813,0.1448,0.2785,0.3603,0.2745,0.0155,0.2778,0.3633,0.2922,0.3697,0.2711,0.3603,0.2745,0.3627,0.2922,0.1055,0.2814,0.0982,0.302,0.0177,0.3051,0.024,0.2813,0.1448,0.2785,0.1487,0.2975,0.3605,0.2757,0.3621,0.2922,0.2175,0.2944,0.2204,0.275,0.1849,0.2961,0.1853,0.2768,0.0177,0.3051,0.0155,0.2778,0.0177,0.3051,0.0982,0.302,0.1487,0.2975,0.1849,0.2961,0.2175,0.2944,0.3621,0.2922,0.3627,0.2922,0.3633,0.2922,0.2175,0.2944,0.1849,0.2961,0.1487,0.2975,0.0982,0.302,0.0177,0.3051,0.0177,0.3051,0.1055,0.2814,0.024,0.2813,0.0155,0.2778,0.024,0.2813,0.1055,0.2814,0.1448,0.2785,0.1853,0.2768,0.2204,0.275,0.3605,0.2757,0.3603,0.2745,0.3697,0.2711,0.2204,0.275,0.1853,0.2768,0.1448,0.2785]);
IndexedFaceSet208.texCoord = TextureCoordinate210;

Shape204.geometry = IndexedFaceSet208;

Transform203.child = new undefined();

Transform203.child[0] = Shape204;

HAnimSegment202.children = new MFNode();

HAnimSegment202.children[0] = Transform203;

HAnimJoint201.children = new MFNode();

HAnimJoint201.children[0] = HAnimSegment202;

let HAnimJoint211 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint211.name = "vl1";
HAnimJoint211.DEF = "hanim_vl1";
HAnimJoint211.center = new SFVec3f(new float[0,43.52,-0.6117]);
HAnimJoint211.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint211.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment212 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment212.name = "l1";
HAnimSegment212.DEF = "hanim_l1";
let Transform213 = browser.currentScene.createNode("Transform");
Transform213.translation = new SFVec3f(new float[0,43.52,-0.6117]);
let Shape214 = browser.currentScene.createNode("Shape");
let Appearance215 = browser.currentScene.createNode("Appearance");
let Material216 = browser.currentScene.createNode("Material");
Material216.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance215.material = Material216;

let ImageTexture217 = browser.currentScene.createNode("ImageTexture");
ImageTexture217.USE = "JinLOA3TextureAtlas";
Appearance215.texture = ImageTexture217;

Shape214.appearance = Appearance215;

let IndexedFaceSet218 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet218.coordIndex = new MFInt32(new int[7,0,1,-1,1,14,7,-1,11,2,0,-1,0,7,11,-1,13,12,3,-1,3,4,13,-1,8,5,2,-1,2,11,8,-1,14,1,6,-1,6,9,14,-1,8,13,4,-1,4,5,8,-1,12,10,27,-1,27,3,12,-1,16,15,18,-1,18,17,16,-1,19,16,17,-1,17,20,19,-1,21,24,23,-1,23,22,21,-1,25,19,20,-1,20,26,25,-1,15,9,6,-1,6,18,15,-1,25,26,24,-1,24,21,25,-1,22,23,27,-1,27,10,22,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,46,50,54,-1,43,46,54,-1,43,54,55,-1,43,55,42,-1,1,0,29,-1,29,28,1,-1,0,2,30,-1,30,29,0,-1,2,5,31,-1,31,30,2,-1,5,4,32,-1,32,31,5,-1,4,3,33,-1,33,32,4,-1,3,27,34,-1,34,33,3,-1,27,23,35,-1,35,34,27,-1,23,24,36,-1,36,35,23,-1,24,26,37,-1,37,36,24,-1,26,20,38,-1,38,37,26,-1,20,17,39,-1,39,38,20,-1,17,18,40,-1,40,39,17,-1,18,6,41,-1,41,40,18,-1,6,1,28,-1,28,41,6,-1,7,14,43,-1,43,42,7,-1,14,9,44,-1,44,43,14,-1,9,15,45,-1,45,44,9,-1,15,16,46,-1,46,45,15,-1,16,19,47,-1,47,46,16,-1,19,25,48,-1,48,47,19,-1,25,21,49,-1,49,48,25,-1,21,22,50,-1,50,49,21,-1,22,10,51,-1,51,50,22,-1,10,12,52,-1,52,51,10,-1,12,13,53,-1,53,52,12,-1,13,8,54,-1,54,53,13,-1,8,11,55,-1,55,54,8,-1,11,7,42,-1,42,55,11,-1]);
IndexedFaceSet218.creaseAngle = 3.14159;
IndexedFaceSet218.texCoordIndex = new MFInt32(new int[9,0,1,-1,1,17,9,-1,13,2,0,-1,0,9,13,-1,16,15,3,-1,3,5,16,-1,10,6,2,-1,2,13,10,-1,17,1,8,-1,8,11,17,-1,10,16,5,-1,5,6,10,-1,14,12,7,-1,7,4,14,-1,19,18,21,-1,21,20,19,-1,22,19,20,-1,20,23,22,-1,24,27,26,-1,26,25,24,-1,28,22,23,-1,23,29,28,-1,18,30,31,-1,31,21,18,-1,28,29,27,-1,27,24,28,-1,33,32,35,-1,35,34,33,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,52,53,54,-1,51,52,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,54,58,62,-1,51,54,62,-1,51,62,63,-1,51,63,50,-1,1,0,37,-1,37,36,1,-1,0,2,38,-1,38,37,0,-1,2,6,39,-1,39,38,2,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,35,32,43,-1,43,42,35,-1,26,27,44,-1,44,43,26,-1,27,29,45,-1,45,44,27,-1,29,23,46,-1,46,45,29,-1,23,20,47,-1,47,46,23,-1,20,21,48,-1,48,47,20,-1,21,31,49,-1,49,48,21,-1,8,1,36,-1,36,49,8,-1,9,17,51,-1,51,50,9,-1,17,11,52,-1,52,51,17,-1,30,18,53,-1,53,52,30,-1,18,19,54,-1,54,53,18,-1,19,22,55,-1,55,54,19,-1,22,28,56,-1,56,55,22,-1,28,24,57,-1,57,56,28,-1,24,25,58,-1,58,57,24,-1,33,34,59,-1,59,58,33,-1,12,14,60,-1,60,59,12,-1,15,16,61,-1,61,60,15,-1,16,10,62,-1,62,61,16,-1,10,13,63,-1,63,62,10,-1,13,9,50,-1,50,63,13,-1]);
let Coordinate219 = browser.currentScene.createNode("Coordinate");
Coordinate219.point = new MFVec3f(new float[3.702,1.056,2.588,1.286,1.056,3.04,5.104,1.056,1.294,1.363,1.056,-2.529,3.588,1.056,-1.686,4.805,1.056,-0.5256,0,1.056,3.04,3.71,0.0128,2.648,4.818,0.0128,-0.5615,0,0.0128,3.092,0,0.0128,-2.595,5.128,0.0128,1.321,1.293,0.0128,-2.595,3.593,0.0128,-1.696,1.281,0.0128,3.092,-1.281,0.0128,3.092,-3.71,0.0128,2.648,-3.702,1.056,2.588,-1.286,1.056,3.04,-5.128,0.0128,1.321,-5.104,1.056,1.294,-3.593,0.0128,-1.696,-1.293,0.0128,-2.595,-1.363,1.056,-2.529,-3.588,1.056,-1.686,-4.818,0.0128,-0.5615,-4.805,1.056,-0.5256,0,1.056,-2.529,1.266,1.5,2.82,3.599,1.5,2.383,4.867,1.5,1.212,4.6,1.5,-0.4169,3.469,1.5,-1.496,1.323,1.5,-2.308,0,1.5,-2.309,-1.323,1.5,-2.308,-3.469,1.5,-1.496,-4.6,1.5,-0.4169,-4.867,1.5,1.212,-3.599,1.5,2.383,-1.266,1.5,2.82,0,1.5,2.82,3.606,-0.3662,2.442,1.261,-0.3662,2.872,0,-0.3662,2.872,-1.261,-0.3662,2.872,-3.606,-0.3662,2.442,-4.891,-0.3662,1.241,-4.612,-0.3662,-0.451,-3.473,-0.3662,-1.506,-1.251,-0.3662,-2.375,0,-0.3662,-2.375,1.251,-0.3662,-2.375,3.473,-0.3662,-1.506,4.612,-0.3662,-0.451,4.891,-0.3662,1.241]);
IndexedFaceSet218.coord = Coordinate219;

let TextureCoordinate220 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate220.point = new MFVec2f(new float[0.0943,0.3233,0.0192,0.3251,0.1489,0.3212,0.3615,0.3195,0.3631,0.318,0.2175,0.3185,0.1844,0.32,0.3623,0.3188,0.0192,0.3251,0.0982,0.302,0.1849,0.2961,0.0177,0.3051,0.3627,0.2922,0.1487,0.2975,0.3633,0.2922,0.3621,0.2922,0.2175,0.2944,0.0177,0.3051,0.0177,0.3051,0.0982,0.302,0.0943,0.3233,0.0192,0.3251,0.1487,0.2975,0.1489,0.3212,0.2175,0.2944,0.3621,0.2922,0.3615,0.3195,0.2175,0.3185,0.1849,0.2961,0.1844,0.32,0.0177,0.3051,0.0192,0.3251,0.3631,0.318,0.3633,0.2922,0.3627,0.2922,0.3623,0.3188,0.0192,0.3251,0.0943,0.3233,0.1489,0.3212,0.1844,0.32,0.2175,0.3185,0.3615,0.3195,0.3623,0.3188,0.3631,0.318,0.2175,0.3185,0.1844,0.32,0.1489,0.3212,0.0943,0.3233,0.0192,0.3251,0.0192,0.3251,0.0982,0.302,0.0177,0.3051,0.0177,0.3051,0.0177,0.3051,0.0982,0.302,0.1487,0.2975,0.1849,0.2961,0.2175,0.2944,0.3621,0.2922,0.3627,0.2922,0.3633,0.2922,0.2175,0.2944,0.1849,0.2961,0.1487,0.2975]);
IndexedFaceSet218.texCoord = TextureCoordinate220;

Shape214.geometry = IndexedFaceSet218;

Transform213.child = new undefined();

Transform213.child[0] = Shape214;

HAnimSegment212.children = new MFNode();

HAnimSegment212.children[0] = Transform213;

HAnimJoint211.children = new MFNode();

HAnimJoint211.children[0] = HAnimSegment212;

let HAnimJoint221 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint221.name = "vt12";
HAnimJoint221.DEF = "hanim_vt12";
HAnimJoint221.center = new SFVec3f(new float[0,44.57,-0.6117]);
HAnimJoint221.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint221.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment222 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment222.name = "t12";
HAnimSegment222.DEF = "hanim_t12";
let Transform223 = browser.currentScene.createNode("Transform");
Transform223.translation = new SFVec3f(new float[0,44.57,-0.6117]);
let Shape224 = browser.currentScene.createNode("Shape");
let Appearance225 = browser.currentScene.createNode("Appearance");
let Material226 = browser.currentScene.createNode("Material");
Material226.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance225.material = Material226;

let ImageTexture227 = browser.currentScene.createNode("ImageTexture");
ImageTexture227.USE = "JinLOA3TextureAtlas";
Appearance225.texture = ImageTexture227;

Shape224.appearance = Appearance225;

let IndexedFaceSet228 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet228.coordIndex = new MFInt32(new int[4,5,11,-1,11,10,4,-1,17,3,9,-1,9,20,17,-1,6,0,2,-1,2,7,6,-1,8,1,0,-1,0,6,8,-1,3,4,10,-1,10,9,3,-1,5,1,8,-1,8,11,5,-1,2,27,12,-1,12,7,2,-1,13,16,15,-1,15,14,13,-1,17,20,19,-1,19,18,17,-1,21,24,23,-1,23,22,21,-1,25,21,22,-1,22,26,25,-1,18,19,16,-1,16,13,18,-1,14,15,25,-1,25,26,14,-1,23,24,12,-1,12,27,23,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,46,50,54,-1,43,46,54,-1,43,54,55,-1,43,55,42,-1,2,0,29,-1,29,28,2,-1,0,1,30,-1,30,29,0,-1,1,5,31,-1,31,30,1,-1,5,4,32,-1,32,31,5,-1,4,3,33,-1,33,32,4,-1,3,17,34,-1,34,33,3,-1,17,18,35,-1,35,34,17,-1,18,13,36,-1,36,35,18,-1,13,14,37,-1,37,36,13,-1,14,26,38,-1,38,37,14,-1,26,22,39,-1,39,38,26,-1,22,23,40,-1,40,39,22,-1,23,27,41,-1,41,40,23,-1,27,2,28,-1,28,41,27,-1,6,7,43,-1,43,42,6,-1,7,12,44,-1,44,43,7,-1,12,24,45,-1,45,44,12,-1,24,21,46,-1,46,45,24,-1,21,25,47,-1,47,46,21,-1,25,15,48,-1,48,47,25,-1,15,16,49,-1,49,48,15,-1,16,19,50,-1,50,49,16,-1,19,20,51,-1,51,50,19,-1,20,9,52,-1,52,51,20,-1,9,10,53,-1,53,52,9,-1,10,11,54,-1,54,53,10,-1,11,8,55,-1,55,54,11,-1,8,6,42,-1,42,55,8,-1]);
IndexedFaceSet228.creaseAngle = 3.14159;
IndexedFaceSet228.texCoordIndex = new MFInt32(new int[5,6,15,-1,15,14,5,-1,7,4,12,-1,12,16,7,-1,9,0,2,-1,2,10,9,-1,11,1,0,-1,0,9,11,-1,3,5,14,-1,14,13,3,-1,6,1,11,-1,11,15,6,-1,2,8,17,-1,17,10,2,-1,18,21,20,-1,20,19,18,-1,22,25,24,-1,24,23,22,-1,26,29,28,-1,28,27,26,-1,30,26,27,-1,27,31,30,-1,33,32,21,-1,21,18,33,-1,19,20,30,-1,30,31,19,-1,28,29,35,-1,35,34,28,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,52,53,54,-1,51,52,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,54,58,62,-1,51,54,62,-1,51,62,63,-1,51,63,50,-1,2,0,37,-1,37,36,2,-1,0,1,38,-1,38,37,0,-1,1,6,39,-1,39,38,1,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,22,23,43,-1,43,42,22,-1,33,18,44,-1,44,43,33,-1,18,19,45,-1,45,44,18,-1,19,31,46,-1,46,45,19,-1,31,27,47,-1,47,46,31,-1,27,28,48,-1,48,47,27,-1,28,34,49,-1,49,48,28,-1,8,2,36,-1,36,49,8,-1,9,10,51,-1,51,50,9,-1,10,17,52,-1,52,51,10,-1,35,29,53,-1,53,52,35,-1,29,26,54,-1,54,53,29,-1,26,30,55,-1,55,54,26,-1,30,20,56,-1,56,55,30,-1,20,21,57,-1,57,56,20,-1,21,32,58,-1,58,57,21,-1,24,25,59,-1,59,58,24,-1,16,12,60,-1,60,59,16,-1,13,14,61,-1,61,60,13,-1,14,15,62,-1,62,61,14,-1,15,11,63,-1,63,62,15,-1,11,9,50,-1,50,63,11,-1]);
let Coordinate229 = browser.currentScene.createNode("Coordinate");
Coordinate229.point = new MFVec3f(new float[3.695,1.054,2.529,5.081,1.054,1.266,1.292,1.054,2.988,1.434,1.054,-2.463,3.584,1.054,-1.677,4.793,1.054,-0.4897,3.702,0.0104,2.588,1.286,0.0104,3.04,5.104,0.0104,1.294,1.363,0.0104,-2.529,3.588,0.0104,-1.686,4.805,0.0104,-0.5256,0,0.0104,3.04,-3.584,1.054,-1.677,-4.793,1.054,-0.4897,-4.805,0.0104,-0.5256,-3.588,0.0104,-1.686,0,1.054,-2.464,-1.434,1.054,-2.463,-1.363,0.0104,-2.529,0,0.0104,-2.529,-3.702,0.0104,2.588,-3.695,1.054,2.529,-1.292,1.054,2.988,-1.286,0.0104,3.04,-5.104,0.0104,1.294,-5.081,1.054,1.266,0,1.054,2.988,1.276,1.452,2.823,3.618,1.452,2.375,4.904,1.452,1.204,4.639,1.452,-0.4096,3.494,1.452,-1.534,1.405,1.452,-2.298,0,1.452,-2.298,-1.405,1.452,-2.298,-3.494,1.452,-1.534,-4.639,1.452,-0.4096,-4.904,1.452,1.204,-3.618,1.452,2.375,-1.276,1.452,2.823,0,1.452,2.823,3.625,-0.4686,2.435,1.271,-0.4686,2.875,0,-0.4686,2.875,-1.271,-0.4686,2.875,-3.625,-0.4686,2.435,-4.927,-0.4686,1.233,-4.651,-0.4686,-0.4442,-3.499,-0.4686,-1.544,-1.333,-0.4686,-2.364,0,-0.4686,-2.364,1.333,-0.4686,-2.364,3.499,-0.4686,-1.544,4.651,-0.4686,-0.4442,4.927,-0.4686,1.233]);
IndexedFaceSet228.coord = Coordinate229;

let TextureCoordinate230 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate230.point = new MFVec2f(new float[0.0903,0.3446,0.1491,0.3449,0.0206,0.3452,0.3608,0.3469,0.3629,0.3439,0.2175,0.3427,0.1838,0.3438,0.3619,0.3454,0.0206,0.3452,0.0943,0.3233,0.0192,0.3251,0.1489,0.3212,0.3631,0.318,0.3615,0.3195,0.2175,0.3185,0.1844,0.32,0.3623,0.3188,0.0192,0.3251,0.2175,0.3427,0.1838,0.3438,0.1844,0.32,0.2175,0.3185,0.3619,0.3454,0.3629,0.3439,0.3631,0.318,0.3623,0.3188,0.0943,0.3233,0.0903,0.3446,0.0206,0.3452,0.0192,0.3251,0.1489,0.3212,0.1491,0.3449,0.3615,0.3195,0.3608,0.3469,0.0206,0.3452,0.0192,0.3251,0.0206,0.3452,0.0903,0.3446,0.1491,0.3449,0.1838,0.3438,0.2175,0.3427,0.3608,0.3469,0.3619,0.3454,0.3629,0.3439,0.2175,0.3427,0.1838,0.3438,0.1491,0.3449,0.0903,0.3446,0.0206,0.3452,0.0206,0.3452,0.0943,0.3233,0.0192,0.3251,0.0192,0.3251,0.0192,0.3251,0.0943,0.3233,0.1489,0.3212,0.1844,0.32,0.2175,0.3185,0.3615,0.3195,0.3623,0.3188,0.3631,0.318,0.2175,0.3185,0.1844,0.32,0.1489,0.3212]);
IndexedFaceSet228.texCoord = TextureCoordinate230;

Shape224.geometry = IndexedFaceSet228;

Transform223.child = new undefined();

Transform223.child[0] = Shape224;

HAnimSegment222.children = new MFNode();

HAnimSegment222.children[0] = Transform223;

HAnimJoint221.children = new MFNode();

HAnimJoint221.children[0] = HAnimSegment222;

let HAnimJoint231 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint231.name = "vt11";
HAnimJoint231.DEF = "hanim_vt11";
HAnimJoint231.center = new SFVec3f(new float[0,45.610001,-0.6117]);
HAnimJoint231.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint231.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment232 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment232.name = "t11";
HAnimSegment232.DEF = "hanim_t11";
let Transform233 = browser.currentScene.createNode("Transform");
Transform233.translation = new SFVec3f(new float[0,45.610001,-0.6117]);
let Shape234 = browser.currentScene.createNode("Shape");
let Appearance235 = browser.currentScene.createNode("Appearance");
let Material236 = browser.currentScene.createNode("Material");
Material236.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance235.material = Material236;

let ImageTexture237 = browser.currentScene.createNode("ImageTexture");
ImageTexture237.USE = "JinLOA3TextureAtlas";
Appearance235.texture = ImageTexture237;

Shape234.appearance = Appearance235;

let IndexedFaceSet238 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet238.coordIndex = new MFInt32(new int[4,3,10,-1,10,12,4,-1,5,4,12,-1,12,13,5,-1,5,13,9,-1,9,1,5,-1,6,11,14,-1,14,7,6,-1,7,2,0,-1,0,6,7,-1,11,6,0,-1,0,8,11,-1,3,28,29,-1,29,10,3,-1,8,0,1,-1,1,9,8,-1,15,18,17,-1,17,16,15,-1,19,20,18,-1,18,15,19,-1,19,21,22,-1,22,20,19,-1,23,7,14,-1,14,24,23,-1,7,23,25,-1,25,26,7,-1,24,27,25,-1,25,23,24,-1,16,17,29,-1,29,28,16,-1,27,22,21,-1,21,25,27,-1,32,33,34,-1,31,32,34,-1,34,35,36,-1,36,37,38,-1,34,36,38,-1,38,39,40,-1,40,41,42,-1,38,40,42,-1,34,38,42,-1,31,34,42,-1,31,42,43,-1,31,43,30,-1,45,46,47,-1,47,48,49,-1,49,50,51,-1,47,49,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,47,51,55,-1,55,56,57,-1,47,55,57,-1,45,47,57,-1,45,57,44,-1,0,2,31,-1,31,30,0,-1,2,7,32,-1,32,31,2,-1,7,26,33,-1,33,32,7,-1,26,25,34,-1,34,33,26,-1,25,21,35,-1,35,34,25,-1,21,19,36,-1,36,35,21,-1,19,15,37,-1,37,36,19,-1,15,16,38,-1,38,37,15,-1,16,28,39,-1,39,38,16,-1,28,3,40,-1,40,39,28,-1,3,4,41,-1,41,40,3,-1,4,5,42,-1,42,41,4,-1,5,1,43,-1,43,42,5,-1,1,0,30,-1,30,43,1,-1,12,10,45,-1,45,44,12,-1,10,29,46,-1,46,45,10,-1,29,17,47,-1,47,46,29,-1,17,18,48,-1,48,47,17,-1,18,20,49,-1,49,48,18,-1,20,22,50,-1,50,49,20,-1,22,27,51,-1,51,50,22,-1,27,24,52,-1,52,51,27,-1,24,14,53,-1,53,52,24,-1,14,11,54,-1,54,53,14,-1,11,8,55,-1,55,54,11,-1,8,9,56,-1,56,55,8,-1,9,13,57,-1,57,56,9,-1,13,12,44,-1,44,57,13,-1]);
IndexedFaceSet238.creaseAngle = 3.14159;
IndexedFaceSet238.texCoordIndex = new MFInt32(new int[6,5,14,-1,14,16,6,-1,7,6,16,-1,16,17,7,-1,7,17,12,-1,12,3,7,-1,8,15,18,-1,18,10,8,-1,10,0,1,-1,1,8,10,-1,15,8,2,-1,2,11,15,-1,4,9,19,-1,19,13,4,-1,11,2,3,-1,3,12,11,-1,20,23,22,-1,22,21,20,-1,24,25,23,-1,23,20,24,-1,24,26,27,-1,27,25,24,-1,29,28,31,-1,31,30,29,-1,28,29,32,-1,32,33,28,-1,30,35,34,-1,34,29,30,-1,37,36,39,-1,39,38,37,-1,35,27,26,-1,26,34,35,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,50,51,52,-1,48,50,52,-1,44,48,52,-1,41,44,52,-1,41,52,53,-1,41,53,40,-1,55,56,57,-1,57,58,59,-1,59,60,61,-1,57,59,61,-1,61,62,63,-1,63,64,65,-1,61,63,65,-1,57,61,65,-1,65,66,67,-1,57,65,67,-1,55,57,67,-1,55,67,54,-1,1,0,41,-1,41,40,1,-1,0,10,42,-1,42,41,0,-1,28,33,43,-1,43,42,28,-1,33,32,44,-1,44,43,33,-1,34,26,45,-1,45,44,34,-1,26,24,46,-1,46,45,26,-1,24,20,47,-1,47,46,24,-1,20,21,48,-1,48,47,20,-1,37,38,49,-1,49,48,37,-1,9,4,50,-1,50,49,9,-1,5,6,51,-1,51,50,5,-1,6,7,52,-1,52,51,6,-1,7,3,53,-1,53,52,7,-1,3,2,40,-1,40,53,3,-1,16,14,55,-1,55,54,16,-1,13,19,56,-1,56,55,13,-1,39,36,57,-1,57,56,39,-1,22,23,58,-1,58,57,22,-1,23,25,59,-1,59,58,23,-1,25,27,60,-1,60,59,25,-1,27,35,61,-1,61,60,27,-1,35,30,62,-1,62,61,35,-1,30,31,63,-1,63,62,30,-1,18,15,64,-1,64,63,18,-1,15,11,65,-1,65,64,15,-1,11,12,66,-1,66,65,11,-1,12,17,67,-1,67,66,12,-1,17,16,54,-1,54,67,17,-1]);
let Coordinate239 = browser.currentScene.createNode("Coordinate");
Coordinate239.point = new MFVec3f(new float[3.695,0.0098,2.529,5.081,0.0098,1.266,1.292,0.0098,2.988,1.434,0.0098,-2.463,3.584,0.0098,-1.677,4.793,0.0098,-0.4897,1.292,0.0098,2.988,0,0.0098,2.988,3.86,0.776,2.936,5.361,0.776,1.276,1.588,0.776,-2.498,1.36,0.776,3.192,3.752,0.776,-1.776,4.97,0.776,-0.6037,0,0.776,3.192,-3.584,0.0098,-1.677,-1.434,0.0098,-2.463,-1.588,0.776,-2.498,-3.752,0.776,-1.776,-4.793,0.0098,-0.4897,-4.97,0.776,-0.6037,-5.081,0.0098,1.266,-5.361,0.776,1.276,-1.292,0.0098,2.988,-1.36,0.776,3.192,-3.695,0.0098,2.529,-1.292,0.0098,2.988,-3.86,0.776,2.936,0,0.0098,-2.464,0,0.776,-2.506,3.599,-0.4771,2.338,1.272,-0.4771,2.783,0,-0.4771,2.783,-1.272,-0.4771,2.783,-3.599,-0.4771,2.338,-4.861,-0.4771,1.189,-4.602,-0.4771,-0.3904,-3.472,-0.4771,-1.499,-1.398,-0.4771,-2.258,0,-0.4771,-2.259,1.398,-0.4771,-2.258,3.472,-0.4771,-1.499,4.602,-0.4771,-0.3904,4.861,-0.4771,1.189,3.643,1.099,-1.596,1.555,1.099,-2.294,0,1.099,-2.302,-1.555,1.099,-2.294,-3.643,1.099,-1.596,-4.782,1.099,-0.4999,-5.14,1.099,1.216,-3.76,1.099,2.74,-1.35,1.099,2.987,0,1.099,2.987,1.35,1.099,2.987,3.76,1.099,2.74,5.14,1.099,1.216,4.782,1.099,-0.4999]);
IndexedFaceSet238.coord = Coordinate239;

let TextureCoordinate240 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate240.point = new MFVec2f(new float[0.0206,0.3452,0.0903,0.3446,0.0903,0.3446,0.1491,0.3449,0.3629,0.3439,0.3608,0.3469,0.2175,0.3427,0.1838,0.3438,0.0206,0.3452,0.3619,0.3454,0.0206,0.3452,0.089,0.3604,0.1508,0.3559,0.3623,0.3532,0.3588,0.3561,0.0232,0.3561,0.2188,0.3538,0.1874,0.3541,0.0232,0.3546,0.3608,0.3537,0.2175,0.3427,0.3608,0.3469,0.3588,0.3561,0.2188,0.3538,0.1838,0.3438,0.1874,0.3541,0.1491,0.3449,0.1508,0.3559,0.0206,0.3452,0.0206,0.3452,0.0232,0.3561,0.0232,0.3546,0.0903,0.3446,0.0206,0.3452,0.0903,0.3446,0.089,0.3604,0.3623,0.3532,0.3629,0.3439,0.3619,0.3454,0.3608,0.3537,0.0903,0.3446,0.0206,0.3452,0.0206,0.3452,0.0206,0.3452,0.0903,0.3446,0.1491,0.3449,0.1838,0.3438,0.2175,0.3427,0.3608,0.3469,0.3619,0.3454,0.3629,0.3439,0.2175,0.3427,0.1838,0.3438,0.1491,0.3449,0.2188,0.3538,0.3588,0.3561,0.3608,0.3537,0.3623,0.3532,0.2188,0.3538,0.1874,0.3541,0.1508,0.3559,0.089,0.3604,0.0232,0.3561,0.0232,0.3546,0.0232,0.3561,0.089,0.3604,0.1508,0.3559,0.1874,0.3541]);
IndexedFaceSet238.texCoord = TextureCoordinate240;

Shape234.geometry = IndexedFaceSet238;

Transform233.child = new undefined();

Transform233.child[0] = Shape234;

HAnimSegment232.children = new MFNode();

HAnimSegment232.children[0] = Transform233;

HAnimJoint231.children = new MFNode();

HAnimJoint231.children[0] = HAnimSegment232;

let HAnimJoint241 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint241.name = "vt10";
HAnimJoint241.DEF = "hanim_vt10";
HAnimJoint241.center = new SFVec3f(new float[0,46.369999,-0.6127]);
HAnimJoint241.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint241.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment242 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment242.name = "t10";
HAnimSegment242.DEF = "hanim_t10";
let Transform243 = browser.currentScene.createNode("Transform");
Transform243.translation = new SFVec3f(new float[0,46.369999,-0.6127]);
let Shape244 = browser.currentScene.createNode("Shape");
let Appearance245 = browser.currentScene.createNode("Appearance");
let Material246 = browser.currentScene.createNode("Material");
Material246.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance245.material = Material246;

let ImageTexture247 = browser.currentScene.createNode("ImageTexture");
ImageTexture247.USE = "JinLOA3TextureAtlas";
Appearance245.texture = ImageTexture247;

Shape244.appearance = Appearance245;

let IndexedFaceSet248 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet248.coordIndex = new MFInt32(new int[11,7,4,-1,4,2,11,-1,7,8,5,-1,5,4,7,-1,8,10,1,-1,1,5,8,-1,3,6,12,-1,12,23,3,-1,6,3,0,-1,0,9,6,-1,2,26,27,-1,27,11,2,-1,0,1,10,-1,10,9,0,-1,14,13,16,-1,16,15,14,-1,15,16,18,-1,18,17,15,-1,17,18,20,-1,20,19,17,-1,21,23,12,-1,12,22,21,-1,22,25,24,-1,24,21,22,-1,13,14,27,-1,27,26,13,-1,24,25,19,-1,19,20,24,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,42,-1,50,54,42,-1,46,50,42,-1,44,46,42,-1,43,44,42,-1,2,4,29,-1,29,28,2,-1,4,5,30,-1,30,29,4,-1,5,1,31,-1,31,30,5,-1,1,0,32,-1,32,31,1,-1,0,3,33,-1,33,32,0,-1,3,23,34,-1,34,33,3,-1,23,21,35,-1,35,34,23,-1,21,24,36,-1,36,35,21,-1,24,20,37,-1,37,36,24,-1,20,18,38,-1,38,37,20,-1,18,16,39,-1,39,38,18,-1,16,13,40,-1,40,39,16,-1,13,26,41,-1,41,40,13,-1,26,2,28,-1,28,41,26,-1,6,9,43,-1,43,42,6,-1,9,10,44,-1,44,43,9,-1,10,8,45,-1,45,44,10,-1,8,7,46,-1,46,45,8,-1,7,11,47,-1,47,46,7,-1,11,27,48,-1,48,47,11,-1,27,14,49,-1,49,48,27,-1,14,15,50,-1,50,49,14,-1,15,17,51,-1,51,50,15,-1,17,19,52,-1,52,51,17,-1,19,25,53,-1,53,52,19,-1,25,22,54,-1,54,53,25,-1,22,12,55,-1,55,54,22,-1,12,6,42,-1,42,55,12,-1]);
IndexedFaceSet248.creaseAngle = 3.14159;
IndexedFaceSet248.texCoordIndex = new MFInt32(new int[15,10,5,-1,5,2,15,-1,10,11,6,-1,6,5,10,-1,11,14,1,-1,1,6,11,-1,4,9,17,-1,17,7,4,-1,9,4,0,-1,0,13,9,-1,3,8,12,-1,12,16,3,-1,0,1,14,-1,14,13,0,-1,19,18,21,-1,21,20,19,-1,20,21,23,-1,23,22,20,-1,22,23,25,-1,25,24,22,-1,26,29,28,-1,28,27,26,-1,27,31,30,-1,30,26,27,-1,33,32,35,-1,35,34,33,-1,30,31,24,-1,24,25,30,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,37,41,48,-1,37,48,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,50,-1,58,62,50,-1,54,58,50,-1,52,54,50,-1,51,52,50,-1,2,5,37,-1,37,36,2,-1,5,6,38,-1,38,37,5,-1,6,1,39,-1,39,38,6,-1,1,0,40,-1,40,39,1,-1,0,4,41,-1,41,40,0,-1,4,7,42,-1,42,41,4,-1,29,26,43,-1,43,42,29,-1,26,30,44,-1,44,43,26,-1,30,25,45,-1,45,44,30,-1,25,23,46,-1,46,45,25,-1,23,21,47,-1,47,46,23,-1,21,18,48,-1,48,47,21,-1,33,34,49,-1,49,48,33,-1,8,3,36,-1,36,49,8,-1,9,13,51,-1,51,50,9,-1,13,14,52,-1,52,51,13,-1,14,11,53,-1,53,52,14,-1,11,10,54,-1,54,53,11,-1,10,15,55,-1,55,54,10,-1,16,12,56,-1,56,55,16,-1,35,32,57,-1,57,56,35,-1,19,20,58,-1,58,57,19,-1,20,22,59,-1,59,58,20,-1,22,24,60,-1,60,59,22,-1,24,31,61,-1,61,60,24,-1,31,27,62,-1,62,61,31,-1,27,28,63,-1,63,62,27,-1,17,9,50,-1,50,63,17,-1]);
let Coordinate249 = browser.currentScene.createNode("Coordinate");
Coordinate249.point = new MFVec3f(new float[3.86,0.0118,2.936,5.361,0.0118,1.276,1.588,0.0118,-2.498,1.36,0.0118,3.192,3.752,0.0118,-1.776,4.97,0.0118,-0.6037,1.418,0.6583,3.362,3.892,0.6583,-1.86,5.121,0.6583,-0.6992,3.987,0.6583,3.259,5.601,0.6583,1.285,1.717,0.6583,-2.528,0,0.6583,3.363,-1.588,0.0118,-2.498,-1.717,0.6583,-2.528,-3.892,0.6583,-1.86,-3.752,0.0118,-1.776,-5.121,0.6583,-0.6992,-4.97,0.0118,-0.6037,-5.601,0.6583,1.285,-5.361,0.0118,1.276,-1.36,0.0118,3.192,-1.418,0.6583,3.362,0,0.0118,3.192,-3.86,0.0118,2.936,-3.987,0.6583,3.259,0,0.0118,-2.506,0,0.6583,-2.543,1.558,-0.2996,-2.316,3.655,-0.2996,-1.616,4.803,-0.2996,-0.5114,5.164,-0.2996,1.223,3.771,-0.2996,2.762,1.351,-0.2996,3.01,0,-0.2996,3.01,-1.351,-0.2996,3.01,-3.771,-0.2996,2.762,-5.164,-0.2996,1.223,-4.803,-0.2996,-0.5114,-3.655,-0.2996,-1.616,-1.558,-0.2996,-2.316,0,-0.2996,-2.324,1.415,0.9368,3.18,3.898,0.9368,3.08,5.402,0.9368,1.24,4.956,0.9368,-0.6038,3.798,0.9368,-1.698,1.689,0.9368,-2.346,0,0.9368,-2.361,-1.689,0.9368,-2.346,-3.798,0.9368,-1.698,-4.956,0.9368,-0.6038,-5.402,0.9368,1.24,-3.898,0.9368,3.08,-1.415,0.9368,3.18,0,0.9368,3.18]);
IndexedFaceSet248.coord = Coordinate249;

let TextureCoordinate250 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate250.point = new MFVec2f(new float[0.089,0.3604,0.1508,0.3559,0.3588,0.3561,0.3623,0.3532,0.0232,0.3561,0.2188,0.3538,0.1874,0.3541,0.0232,0.3546,0.3608,0.3537,0.0245,0.3617,0.2207,0.3633,0.1922,0.3628,0.3616,0.3609,0.0859,0.3657,0.1489,0.3665,0.3589,0.3648,0.3617,0.3609,0.0254,0.3626,0.3588,0.3561,0.3589,0.3648,0.2207,0.3633,0.2188,0.3538,0.1922,0.3628,0.1874,0.3541,0.1489,0.3665,0.1508,0.3559,0.0232,0.3561,0.0245,0.3617,0.0254,0.3626,0.0232,0.3546,0.089,0.3604,0.0859,0.3657,0.3617,0.3609,0.3623,0.3532,0.3608,0.3537,0.3616,0.3609,0.3623,0.3532,0.2188,0.3538,0.1874,0.3541,0.1508,0.3559,0.089,0.3604,0.0232,0.3561,0.0232,0.3546,0.0232,0.3561,0.089,0.3604,0.1508,0.3559,0.1874,0.3541,0.2188,0.3538,0.3588,0.3561,0.3608,0.3537,0.0245,0.3617,0.0859,0.3657,0.1489,0.3665,0.1922,0.3628,0.2207,0.3633,0.3589,0.3648,0.3616,0.3609,0.3617,0.3609,0.2207,0.3633,0.1922,0.3628,0.1489,0.3665,0.0859,0.3657,0.0245,0.3617,0.0254,0.3626]);
IndexedFaceSet248.texCoord = TextureCoordinate250;

Shape244.geometry = IndexedFaceSet248;

Transform243.child = new undefined();

Transform243.child[0] = Shape244;

HAnimSegment242.children = new MFNode();

HAnimSegment242.children[0] = Transform243;

HAnimJoint241.children = new MFNode();

HAnimJoint241.children[0] = HAnimSegment242;

let HAnimJoint251 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint251.name = "vt9";
HAnimJoint251.DEF = "hanim_vt9";
HAnimJoint251.center = new SFVec3f(new float[0,47.029999,-0.6117]);
HAnimJoint251.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint251.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment252 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment252.name = "t9";
HAnimSegment252.DEF = "hanim_t9";
let Transform253 = browser.currentScene.createNode("Transform");
Transform253.translation = new SFVec3f(new float[0,47.029999,-0.6117]);
let Shape254 = browser.currentScene.createNode("Shape");
let Appearance255 = browser.currentScene.createNode("Appearance");
let Material256 = browser.currentScene.createNode("Material");
Material256.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance255.material = Material256;

let ImageTexture257 = browser.currentScene.createNode("ImageTexture");
ImageTexture257.USE = "JinLOA3TextureAtlas";
Appearance255.texture = ImageTexture257;

Shape254.appearance = Appearance255;

let IndexedFaceSet258 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet258.coordIndex = new MFInt32(new int[7,0,3,-1,3,10,7,-1,5,20,21,-1,21,12,5,-1,3,4,11,-1,11,10,3,-1,12,8,1,-1,1,5,12,-1,8,9,2,-1,2,1,8,-1,9,11,4,-1,4,2,9,-1,0,7,13,-1,13,6,0,-1,14,17,16,-1,16,15,14,-1,19,18,21,-1,21,20,19,-1,16,17,23,-1,23,22,16,-1,18,19,25,-1,25,24,18,-1,24,25,27,-1,27,26,24,-1,26,27,22,-1,22,23,26,-1,15,6,13,-1,13,14,15,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,47,48,49,-1,47,49,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,47,50,54,-1,43,47,54,-1,43,54,55,-1,43,55,42,-1,3,0,29,-1,29,28,3,-1,0,6,30,-1,30,29,0,-1,6,15,31,-1,31,30,6,-1,15,16,32,-1,32,31,15,-1,16,22,33,-1,33,32,16,-1,22,27,34,-1,34,33,22,-1,27,25,35,-1,35,34,27,-1,25,19,36,-1,36,35,25,-1,19,20,37,-1,37,36,19,-1,20,5,38,-1,38,37,20,-1,5,1,39,-1,39,38,5,-1,1,2,40,-1,40,39,1,-1,2,4,41,-1,41,40,2,-1,4,3,28,-1,28,41,4,-1,8,12,43,-1,43,42,8,-1,12,21,44,-1,44,43,12,-1,21,18,45,-1,45,44,21,-1,18,24,46,-1,46,45,18,-1,24,26,47,-1,47,46,24,-1,26,23,48,-1,48,47,26,-1,23,17,49,-1,49,48,23,-1,17,14,50,-1,50,49,17,-1,14,13,51,-1,51,50,14,-1,13,7,52,-1,52,51,13,-1,7,10,53,-1,53,52,7,-1,10,11,54,-1,54,53,10,-1,11,9,55,-1,55,54,11,-1,9,8,42,-1,42,55,9,-1]);
IndexedFaceSet258.creaseAngle = 3.14159;
IndexedFaceSet258.texCoordIndex = new MFInt32(new int[9,0,4,-1,4,12,9,-1,7,3,17,-1,17,15,7,-1,4,5,13,-1,13,12,4,-1,14,10,1,-1,1,6,14,-1,10,11,2,-1,2,1,10,-1,11,13,5,-1,5,2,11,-1,0,9,16,-1,16,8,0,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,20,21,27,-1,27,26,20,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,32,33,26,-1,26,27,32,-1,19,35,34,-1,34,18,19,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,55,56,57,-1,55,57,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,55,58,62,-1,51,55,62,-1,51,62,63,-1,51,63,50,-1,4,0,37,-1,37,36,4,-1,0,8,38,-1,38,37,0,-1,35,19,39,-1,39,38,35,-1,19,20,40,-1,40,39,19,-1,20,26,41,-1,41,40,20,-1,26,33,42,-1,42,41,26,-1,33,31,43,-1,43,42,33,-1,31,28,44,-1,44,43,31,-1,23,24,45,-1,45,44,23,-1,3,7,46,-1,46,45,3,-1,6,1,47,-1,47,46,6,-1,1,2,48,-1,48,47,1,-1,2,5,49,-1,49,48,2,-1,5,4,36,-1,36,49,5,-1,10,14,51,-1,51,50,10,-1,15,17,52,-1,52,51,15,-1,25,22,53,-1,53,52,25,-1,29,30,54,-1,54,53,29,-1,30,32,55,-1,55,54,30,-1,32,27,56,-1,56,55,32,-1,27,21,57,-1,57,56,27,-1,21,18,58,-1,58,57,21,-1,18,34,59,-1,59,58,18,-1,16,9,60,-1,60,59,16,-1,9,12,61,-1,61,60,9,-1,12,13,62,-1,62,61,12,-1,13,11,63,-1,63,62,13,-1,11,10,50,-1,50,63,11,-1]);
let Coordinate259 = browser.currentScene.createNode("Coordinate");
Coordinate259.point = new MFVec3f(new float[1.418,0.0059,3.362,3.892,0.0059,-1.86,5.121,0.0059,-0.6992,3.987,0.0059,3.259,5.601,0.0059,1.285,1.717,0.0059,-2.528,0,0.0059,3.363,1.476,0.6524,3.533,4.033,0.6524,-1.943,5.271,0.6524,-0.7947,4.115,0.6524,3.582,5.84,0.6524,1.295,1.845,0.6524,-2.558,0,0.6524,3.533,-1.476,0.6524,3.533,-1.418,0.0059,3.362,-3.987,0.0059,3.259,-4.115,0.6524,3.582,-1.845,0.6524,-2.558,-1.717,0.0059,-2.528,0,0.0059,-2.543,0,0.6524,-2.58,-5.601,0.0059,1.285,-5.84,0.6524,1.295,-4.033,0.6524,-1.943,-3.892,0.0059,-1.86,-5.271,0.6524,-0.7947,-5.121,0.0059,-0.6992,3.895,-0.2838,3.074,1.415,-0.2838,3.173,0,-0.2838,3.173,-1.415,-0.2838,3.173,-3.895,-0.2838,3.074,-5.395,-0.2838,1.239,-4.95,-0.2838,-0.6002,-3.794,-0.2838,-1.692,-1.688,-0.2838,-2.339,0,-0.2838,-2.354,1.688,-0.2838,-2.339,3.794,-0.2838,-1.692,4.95,-0.2838,-0.6002,5.395,-0.2838,1.239,3.937,0.9744,-1.774,1.818,0.9744,-2.369,0,0.9744,-2.391,-1.818,0.9744,-2.369,-3.937,0.9744,-1.774,-5.103,0.9744,-0.6928,-5.633,0.9744,1.255,-4.022,0.9744,3.391,-1.478,0.9744,3.344,0,0.9744,3.344,1.478,0.9744,3.344,4.022,0.9744,3.391,5.633,0.9744,1.255,5.103,0.9744,-0.6928]);
IndexedFaceSet258.coord = Coordinate259;

let TextureCoordinate260 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate260.point = new MFVec2f(new float[0.0245,0.3617,0.2207,0.3633,0.1922,0.3628,0.3616,0.3609,0.0859,0.3657,0.1489,0.3665,0.3589,0.3648,0.3617,0.3609,0.0254,0.3626,0.0258,0.3672,0.2227,0.3728,0.1969,0.3716,0.0826,0.3711,0.1469,0.377,0.3589,0.3735,0.3612,0.3687,0.0276,0.3706,0.3625,0.3682,0.0258,0.3672,0.0245,0.3617,0.0859,0.3657,0.0826,0.3711,0.3612,0.3687,0.3617,0.3609,0.3616,0.3609,0.3625,0.3682,0.1489,0.3665,0.1469,0.377,0.3589,0.3648,0.3589,0.3735,0.2227,0.3728,0.2207,0.3633,0.1969,0.3716,0.1922,0.3628,0.0276,0.3706,0.0254,0.3626,0.0859,0.3657,0.0245,0.3617,0.0254,0.3626,0.0245,0.3617,0.0859,0.3657,0.1489,0.3665,0.1922,0.3628,0.2207,0.3633,0.3589,0.3648,0.3616,0.3609,0.3617,0.3609,0.2207,0.3633,0.1922,0.3628,0.1489,0.3665,0.2227,0.3728,0.3589,0.3735,0.3625,0.3682,0.3612,0.3687,0.2227,0.3728,0.1969,0.3716,0.1469,0.377,0.0826,0.3711,0.0258,0.3672,0.0276,0.3706,0.0258,0.3672,0.0826,0.3711,0.1469,0.377,0.1969,0.3716]);
IndexedFaceSet258.texCoord = TextureCoordinate260;

Shape254.geometry = IndexedFaceSet258;

Transform253.child = new undefined();

Transform253.child[0] = Shape254;

HAnimSegment252.children = new MFNode();

HAnimSegment252.children[0] = Transform253;

HAnimJoint251.children = new MFNode();

HAnimJoint251.children[0] = HAnimSegment252;

let HAnimJoint261 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint261.name = "vt8";
HAnimJoint261.DEF = "hanim_vt8";
HAnimJoint261.center = new SFVec3f(new float[0,47.68,-0.6117]);
HAnimJoint261.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint261.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment262 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment262.name = "t8";
HAnimSegment262.DEF = "hanim_t8";
let Transform263 = browser.currentScene.createNode("Transform");
Transform263.translation = new SFVec3f(new float[0,47.68,-0.6117]);
let Shape264 = browser.currentScene.createNode("Shape");
let Appearance265 = browser.currentScene.createNode("Appearance");
let Material266 = browser.currentScene.createNode("Material");
Material266.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance265.material = Material266;

let ImageTexture267 = browser.currentScene.createNode("ImageTexture");
ImageTexture267.USE = "JinLOA3TextureAtlas";
Appearance265.texture = ImageTexture267;

Shape264.appearance = Appearance265;

let IndexedFaceSet268 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet268.coordIndex = new MFInt32(new int[4,0,9,-1,9,3,4,-1,11,19,20,-1,20,6,11,-1,9,10,5,-1,5,3,9,-1,6,7,1,-1,1,11,6,-1,7,8,2,-1,2,1,7,-1,8,5,10,-1,10,2,8,-1,0,4,12,-1,12,27,0,-1,13,16,15,-1,15,14,13,-1,18,17,20,-1,20,19,18,-1,15,16,22,-1,22,21,15,-1,17,18,24,-1,24,23,17,-1,23,24,26,-1,26,25,23,-1,25,26,21,-1,21,22,25,-1,14,27,12,-1,12,13,14,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,43,44,45,-1,45,46,47,-1,47,48,49,-1,45,47,49,-1,49,50,51,-1,51,52,53,-1,49,51,53,-1,45,49,53,-1,53,54,55,-1,45,53,55,-1,43,45,55,-1,43,55,42,-1,11,1,29,-1,29,28,11,-1,1,2,30,-1,30,29,1,-1,2,10,31,-1,31,30,2,-1,10,9,32,-1,32,31,10,-1,9,0,33,-1,33,32,9,-1,0,27,34,-1,34,33,0,-1,27,14,35,-1,35,34,27,-1,14,15,36,-1,36,35,14,-1,15,21,37,-1,37,36,15,-1,21,26,38,-1,38,37,21,-1,26,24,39,-1,39,38,26,-1,24,18,40,-1,40,39,24,-1,18,19,41,-1,41,40,18,-1,19,11,28,-1,28,41,19,-1,12,4,43,-1,43,42,12,-1,4,3,44,-1,44,43,4,-1,3,5,45,-1,45,44,3,-1,5,8,46,-1,46,45,5,-1,8,7,47,-1,47,46,8,-1,7,6,48,-1,48,47,7,-1,6,20,49,-1,49,48,6,-1,20,17,50,-1,50,49,20,-1,17,23,51,-1,51,50,17,-1,23,25,52,-1,52,51,23,-1,25,22,53,-1,53,52,25,-1,22,16,54,-1,54,53,22,-1,16,13,55,-1,55,54,16,-1,13,12,42,-1,42,55,13,-1]);
IndexedFaceSet268.creaseAngle = 3.14159;
IndexedFaceSet268.texCoordIndex = new MFInt32(new int[1,14,9,-1,9,0,1,-1,11,13,8,-1,8,5,11,-1,9,10,3,-1,3,0,9,-1,4,6,16,-1,16,12,4,-1,6,7,17,-1,17,16,6,-1,7,3,10,-1,10,17,7,-1,14,1,2,-1,2,15,14,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,20,21,27,-1,27,26,20,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,32,33,26,-1,26,27,32,-1,19,35,34,-1,34,18,19,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,51,52,53,-1,53,54,55,-1,55,56,57,-1,53,55,57,-1,57,58,59,-1,59,60,61,-1,57,59,61,-1,53,57,61,-1,61,62,63,-1,53,61,63,-1,51,53,63,-1,51,63,50,-1,12,16,37,-1,37,36,12,-1,16,17,38,-1,38,37,16,-1,17,10,39,-1,39,38,17,-1,10,9,40,-1,40,39,10,-1,9,14,41,-1,41,40,9,-1,14,15,42,-1,42,41,14,-1,35,19,43,-1,43,42,35,-1,19,20,44,-1,44,43,19,-1,20,26,45,-1,45,44,20,-1,26,33,46,-1,46,45,26,-1,33,31,47,-1,47,46,33,-1,31,28,48,-1,48,47,31,-1,23,24,49,-1,49,48,23,-1,13,11,36,-1,36,49,13,-1,2,1,51,-1,51,50,2,-1,1,0,52,-1,52,51,1,-1,0,3,53,-1,53,52,0,-1,3,7,54,-1,54,53,3,-1,7,6,55,-1,55,54,7,-1,6,4,56,-1,56,55,6,-1,5,8,57,-1,57,56,5,-1,25,22,58,-1,58,57,25,-1,29,30,59,-1,59,58,29,-1,30,32,60,-1,60,59,30,-1,32,27,61,-1,61,60,32,-1,27,21,62,-1,62,61,27,-1,21,18,63,-1,63,62,21,-1,18,34,50,-1,50,63,18,-1]);
let Coordinate269 = browser.currentScene.createNode("Coordinate");
Coordinate269.point = new MFVec3f(new float[1.476,0.0001,3.533,4.033,0.0001,-1.943,5.271,0.0001,-0.7947,4.234,0.6936,3.898,1.538,0.6936,3.713,6.114,0.7245,1.306,1.987,0.7245,-2.592,4.188,0.7245,-2.037,5.442,0.7245,-0.9006,4.115,0.0001,3.582,5.84,0.0001,1.295,1.845,0.0001,-2.558,0,0.6936,3.713,-1.538,0.6936,3.713,-1.476,0.0001,3.533,-4.115,0.0001,3.582,-4.234,0.6936,3.898,-1.987,0.7245,-2.592,-1.845,0.0001,-2.558,0,0.0001,-2.58,0,0.7245,-2.622,-5.84,0.0001,1.295,-6.114,0.7245,1.306,-4.188,0.7245,-2.037,-4.033,0.0001,-1.943,-5.442,0.7245,-0.9006,-5.271,0.0001,-0.7947,0,0.0001,3.533,1.82,-0.2993,-2.38,3.943,-0.2993,-1.784,5.113,-0.2993,-0.6987,5.646,-0.2993,1.257,4.027,-0.2993,3.403,1.478,-0.2993,3.355,0,-0.2993,3.355,-1.478,-0.2993,3.355,-4.027,-0.2993,3.403,-5.646,-0.2993,1.257,-5.113,-0.2993,-0.6987,-3.943,-0.2993,-1.784,-1.82,-0.2993,-2.38,0,-0.2993,-2.402,0,1.036,3.535,1.544,1.036,3.534,4.148,1.036,3.713,5.917,1.036,1.273,5.286,1.036,-0.8017,4.102,1.036,-1.875,1.963,1.036,-2.414,0,1.036,-2.444,-1.963,1.036,-2.414,-4.102,1.036,-1.875,-5.286,1.036,-0.8017,-5.917,1.036,1.273,-4.148,1.036,3.713,-1.544,1.036,3.534]);
IndexedFaceSet268.coord = Coordinate269;

let TextureCoordinate270 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate270.point = new MFVec2f(new float[0.0908,0.3999,0.0325,0.3879,0.0306,0.3835,0.1568,0.3845,0.3535,0.3812,0.3589,0.3783,0.2214,0.3832,0.1952,0.3809,0.3561,0.3769,0.0802,0.3883,0.1575,0.3746,0.3637,0.3704,0.356,0.3713,0.3581,0.3683,0.0256,0.3731,0.0261,0.363,0.2218,0.3729,0.1941,0.3712,0.0325,0.3879,0.0256,0.3731,0.0802,0.3883,0.0908,0.3999,0.3589,0.3783,0.3637,0.3704,0.3581,0.3683,0.3561,0.3769,0.1575,0.3746,0.1568,0.3845,0.356,0.3713,0.3535,0.3812,0.2214,0.3832,0.2218,0.3729,0.1952,0.3809,0.1941,0.3712,0.0306,0.3835,0.0261,0.363,0.3637,0.3704,0.2218,0.3729,0.1941,0.3712,0.1575,0.3746,0.0802,0.3883,0.0256,0.3731,0.0261,0.363,0.0256,0.3731,0.0802,0.3883,0.1575,0.3746,0.1941,0.3712,0.2218,0.3729,0.356,0.3713,0.3581,0.3683,0.0306,0.3835,0.0325,0.3879,0.0908,0.3999,0.1568,0.3845,0.1952,0.3809,0.2214,0.3832,0.3535,0.3812,0.3561,0.3769,0.3589,0.3783,0.2214,0.3832,0.1952,0.3809,0.1568,0.3845,0.0908,0.3999,0.0325,0.3879]);
IndexedFaceSet268.texCoord = TextureCoordinate270;

Shape264.geometry = IndexedFaceSet268;

Transform263.child = new undefined();

Transform263.child[0] = Shape264;

HAnimSegment262.children = new MFNode();

HAnimSegment262.children[0] = Transform263;

HAnimJoint261.children = new MFNode();

HAnimJoint261.children[0] = HAnimSegment262;

let HAnimJoint271 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint271.name = "vt7";
HAnimJoint271.DEF = "hanim_vt7";
HAnimJoint271.center = new SFVec3f(new float[0,48.369999,-0.6117]);
HAnimJoint271.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint271.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment272 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment272.name = "t7";
HAnimSegment272.DEF = "hanim_t7";
let Transform273 = browser.currentScene.createNode("Transform");
Transform273.translation = new SFVec3f(new float[0,48.369999,-0.6117]);
let Shape274 = browser.currentScene.createNode("Shape");
let Appearance275 = browser.currentScene.createNode("Appearance");
let Material276 = browser.currentScene.createNode("Material");
Material276.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance275.material = Material276;

let ImageTexture277 = browser.currentScene.createNode("ImageTexture");
ImageTexture277.USE = "JinLOA3TextureAtlas";
Appearance275.texture = ImageTexture277;

Shape274.appearance = Appearance275;

let IndexedFaceSet278 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet278.coordIndex = new MFInt32(new int[0,2,6,-1,6,8,0,-1,9,18,19,-1,19,1,9,-1,7,5,22,-1,22,23,7,-1,1,3,10,-1,10,9,1,-1,3,4,11,-1,11,10,3,-1,4,0,8,-1,8,11,4,-1,5,7,6,-1,6,2,5,-1,13,12,15,-1,15,14,13,-1,17,16,19,-1,19,18,17,-1,20,23,22,-1,22,21,20,-1,16,17,25,-1,25,24,16,-1,24,25,27,-1,27,26,24,-1,26,27,12,-1,12,13,26,-1,21,14,15,-1,15,20,21,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,46,50,54,-1,54,55,42,-1,46,54,42,-1,44,46,42,-1,43,44,42,-1,1,19,29,-1,29,28,1,-1,19,16,30,-1,30,29,19,-1,16,24,31,-1,31,30,16,-1,24,26,32,-1,32,31,24,-1,26,13,33,-1,33,32,26,-1,13,14,34,-1,34,33,13,-1,14,21,35,-1,35,34,14,-1,21,22,36,-1,36,35,21,-1,22,5,37,-1,37,36,22,-1,5,2,38,-1,38,37,5,-1,2,0,39,-1,39,38,2,-1,0,4,40,-1,40,39,0,-1,4,3,41,-1,41,40,4,-1,3,1,28,-1,28,41,3,-1,7,23,43,-1,43,42,7,-1,23,20,44,-1,44,43,23,-1,20,15,45,-1,45,44,20,-1,15,12,46,-1,46,45,15,-1,12,27,47,-1,47,46,12,-1,27,25,48,-1,48,47,27,-1,25,17,49,-1,49,48,25,-1,17,18,50,-1,50,49,17,-1,18,9,51,-1,51,50,18,-1,9,10,52,-1,52,51,9,-1,10,11,53,-1,53,52,10,-1,11,8,54,-1,54,53,11,-1,8,6,55,-1,55,54,8,-1,6,7,42,-1,42,55,6,-1]);
IndexedFaceSet278.creaseAngle = 3.14159;
IndexedFaceSet278.texCoordIndex = new MFInt32(new int[3,8,9,-1,9,11,3,-1,13,16,6,-1,6,5,13,-1,10,0,7,-1,7,17,10,-1,2,1,14,-1,14,12,2,-1,1,4,15,-1,15,14,1,-1,4,3,11,-1,11,15,4,-1,0,10,9,-1,9,8,0,-1,19,18,21,-1,21,20,19,-1,23,22,25,-1,25,24,23,-1,26,29,28,-1,28,27,26,-1,31,30,33,-1,33,32,31,-1,32,33,35,-1,35,34,32,-1,34,35,18,-1,18,19,34,-1,27,20,21,-1,21,26,27,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,54,58,62,-1,62,63,50,-1,54,62,50,-1,52,54,50,-1,51,52,50,-1,5,6,37,-1,37,36,5,-1,25,22,38,-1,38,37,25,-1,31,32,39,-1,39,38,31,-1,32,34,40,-1,40,39,32,-1,34,19,41,-1,41,40,34,-1,19,20,42,-1,42,41,19,-1,20,27,43,-1,43,42,20,-1,27,28,44,-1,44,43,27,-1,7,0,45,-1,45,44,7,-1,0,8,46,-1,46,45,0,-1,8,3,47,-1,47,46,8,-1,3,4,48,-1,48,47,3,-1,4,1,49,-1,49,48,4,-1,1,2,36,-1,36,49,1,-1,10,17,51,-1,51,50,10,-1,29,26,52,-1,52,51,29,-1,26,21,53,-1,53,52,26,-1,21,18,54,-1,54,53,21,-1,18,35,55,-1,55,54,18,-1,35,33,56,-1,56,55,35,-1,33,30,57,-1,57,56,33,-1,23,24,58,-1,58,57,23,-1,16,13,59,-1,59,58,16,-1,12,14,60,-1,60,59,12,-1,14,15,61,-1,61,60,14,-1,15,11,62,-1,62,61,15,-1,11,9,63,-1,63,62,11,-1,9,10,50,-1,50,63,9,-1]);
let Coordinate279 = browser.currentScene.createNode("Coordinate");
Coordinate279.point = new MFVec3f(new float[6.285,0.5819,1.319,2.062,0.5819,-2.618,4.101,0.5819,3.729,4.29,0.5819,-2.105,5.572,0.5819,-0.9516,1.585,0.5819,3.822,4.234,0.0006,3.898,1.538,0.0006,3.713,6.114,0.0315,1.306,1.987,0.0315,-2.592,4.188,0.0315,-2.037,5.442,0.0315,-0.9006,-6.114,0.0315,1.306,-6.285,0.5819,1.319,-4.101,0.5819,3.729,-4.234,0.0006,3.898,-2.062,0.5819,-2.618,-1.987,0.0315,-2.592,0,0.0315,-2.622,0,0.5819,-2.665,-1.538,0.0006,3.713,-1.585,0.5819,3.822,0,0.5819,3.826,0,0.0006,3.713,-4.29,0.5819,-2.105,-4.188,0.0315,-2.037,-5.572,0.5819,-0.9516,-5.442,0.0315,-0.9006,2.035,0.9259,-2.406,0,0.9259,-2.453,-2.035,0.9259,-2.406,-4.189,0.9259,-1.911,-5.387,0.9259,-0.8326,-6.046,0.9259,1.267,-4.004,0.9259,3.52,-1.581,0.9259,3.609,0,0.9259,3.614,1.581,0.9259,3.609,4.004,0.9259,3.52,6.046,0.9259,1.267,5.387,0.9259,-0.8326,4.189,0.9259,-1.911,1.524,-0.369,3.422,0,-0.369,3.422,-1.524,-0.369,3.422,-4.074,-0.369,3.594,-5.798,-0.369,1.248,-5.183,-0.369,-0.7464,-4.029,-0.369,-1.779,-1.931,-0.369,-2.301,0,-0.369,-2.33,1.931,-0.369,-2.301,4.029,-0.369,-1.779,5.183,-0.369,-0.7464,5.798,-0.369,1.248,4.074,-0.369,3.594]);
IndexedFaceSet278.coord = Coordinate279;

let TextureCoordinate280 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate280.point = new MFVec2f(new float[0.0437,0.4075,0.2185,0.3912,0.3484,0.3944,0.1518,0.3905,0.1902,0.3894,0.3503,0.3879,0.3505,0.3886,0.0427,0.408,0.0961,0.4138,0.0908,0.3999,0.0325,0.3879,0.1568,0.3845,0.3535,0.3812,0.3589,0.3783,0.2214,0.3832,0.1952,0.3809,0.3561,0.3769,0.0306,0.3835,0.1568,0.3845,0.1518,0.3905,0.0961,0.4138,0.0908,0.3999,0.3503,0.3879,0.3589,0.3783,0.3561,0.3769,0.3505,0.3886,0.0325,0.3879,0.0437,0.4075,0.0427,0.408,0.0306,0.3835,0.3535,0.3812,0.3484,0.3944,0.2185,0.3912,0.2214,0.3832,0.1902,0.3894,0.1952,0.3809,0.3484,0.3944,0.3505,0.3886,0.3503,0.3879,0.2185,0.3912,0.1902,0.3894,0.1518,0.3905,0.0961,0.4138,0.0437,0.4075,0.0427,0.408,0.0437,0.4075,0.0961,0.4138,0.1518,0.3905,0.1902,0.3894,0.2185,0.3912,0.0325,0.3879,0.0306,0.3835,0.0325,0.3879,0.0908,0.3999,0.1568,0.3845,0.1952,0.3809,0.2214,0.3832,0.3535,0.3812,0.3561,0.3769,0.3589,0.3783,0.2214,0.3832,0.1952,0.3809,0.1568,0.3845,0.0908,0.3999]);
IndexedFaceSet278.texCoord = TextureCoordinate280;

Shape274.geometry = IndexedFaceSet278;

Transform273.child = new undefined();

Transform273.child[0] = Shape274;

HAnimSegment272.children = new MFNode();

HAnimSegment272.children[0] = Transform273;

HAnimJoint271.children = new MFNode();

HAnimJoint271.children[0] = HAnimSegment272;

let HAnimJoint281 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint281.name = "vt6";
HAnimJoint281.DEF = "hanim_vt6";
HAnimJoint281.center = new SFVec3f(new float[0,48.950001,-0.6117]);
HAnimJoint281.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint281.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment282 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment282.name = "t6";
HAnimSegment282.DEF = "hanim_t6";
let Transform283 = browser.currentScene.createNode("Transform");
Transform283.translation = new SFVec3f(new float[0,48.950001,-0.6117]);
let Shape284 = browser.currentScene.createNode("Shape");
let Appearance285 = browser.currentScene.createNode("Appearance");
let Material286 = browser.currentScene.createNode("Material");
Material286.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance285.material = Material286;

let ImageTexture287 = browser.currentScene.createNode("ImageTexture");
ImageTexture287.USE = "JinLOA3TextureAtlas";
Appearance285.texture = ImageTexture287;

Shape284.appearance = Appearance285;

let IndexedFaceSet288 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet288.coordIndex = new MFInt32(new int[12,9,5,-1,5,3,12,-1,2,1,6,-1,6,11,2,-1,0,7,23,-1,23,24,0,-1,25,8,12,-1,12,3,25,-1,9,6,1,-1,1,5,9,-1,11,10,4,-1,4,2,11,-1,4,10,7,-1,7,0,4,-1,13,16,15,-1,15,14,13,-1,18,17,20,-1,20,19,18,-1,21,24,23,-1,23,22,21,-1,25,16,13,-1,13,8,25,-1,14,15,19,-1,19,20,14,-1,17,18,27,-1,27,26,17,-1,27,21,22,-1,22,26,27,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,42,-1,50,54,42,-1,46,50,42,-1,44,46,42,-1,43,44,42,-1,3,5,29,-1,29,28,3,-1,5,1,30,-1,30,29,5,-1,1,2,31,-1,31,30,1,-1,2,4,32,-1,32,31,2,-1,4,0,33,-1,33,32,4,-1,0,24,34,-1,34,33,0,-1,24,21,35,-1,35,34,24,-1,21,27,36,-1,36,35,21,-1,27,18,37,-1,37,36,27,-1,18,19,38,-1,38,37,18,-1,19,15,39,-1,39,38,19,-1,15,16,40,-1,40,39,15,-1,16,25,41,-1,41,40,16,-1,25,3,28,-1,28,41,25,-1,23,7,43,-1,43,42,23,-1,7,10,44,-1,44,43,7,-1,10,11,45,-1,45,44,10,-1,11,6,46,-1,46,45,11,-1,6,9,47,-1,47,46,6,-1,9,12,48,-1,48,47,9,-1,12,8,49,-1,49,48,12,-1,8,13,50,-1,50,49,8,-1,13,14,51,-1,51,50,13,-1,14,20,52,-1,52,51,14,-1,20,17,53,-1,53,52,20,-1,17,26,54,-1,54,53,17,-1,26,22,55,-1,55,54,26,-1,22,23,42,-1,42,55,22,-1]);
IndexedFaceSet288.creaseAngle = 3.14159;
IndexedFaceSet288.texCoordIndex = new MFInt32(new int[17,13,8,-1,8,4,17,-1,3,2,9,-1,9,16,3,-1,1,10,14,-1,14,5,1,-1,6,12,17,-1,17,4,6,-1,13,9,2,-1,2,8,13,-1,16,15,7,-1,7,3,16,-1,7,15,11,-1,11,0,7,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,26,29,28,-1,28,27,26,-1,30,21,18,-1,18,31,30,-1,19,20,24,-1,24,25,19,-1,22,23,33,-1,33,32,22,-1,33,35,34,-1,34,32,33,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,50,-1,58,62,50,-1,54,58,50,-1,52,54,50,-1,51,52,50,-1,4,8,37,-1,37,36,4,-1,8,2,38,-1,38,37,8,-1,2,3,39,-1,39,38,2,-1,3,7,40,-1,40,39,3,-1,7,0,41,-1,41,40,7,-1,1,5,42,-1,42,41,1,-1,29,26,43,-1,43,42,29,-1,35,33,44,-1,44,43,35,-1,33,23,45,-1,45,44,33,-1,23,24,46,-1,46,45,23,-1,24,20,47,-1,47,46,24,-1,20,21,48,-1,48,47,20,-1,21,30,49,-1,49,48,21,-1,6,4,36,-1,36,49,6,-1,14,10,51,-1,51,50,14,-1,11,15,52,-1,52,51,11,-1,15,16,53,-1,53,52,15,-1,16,9,54,-1,54,53,16,-1,9,13,55,-1,55,54,9,-1,13,17,56,-1,56,55,13,-1,17,12,57,-1,57,56,17,-1,31,18,58,-1,58,57,31,-1,18,19,59,-1,59,58,18,-1,19,25,60,-1,60,59,19,-1,25,22,61,-1,61,60,25,-1,22,32,62,-1,62,61,22,-1,32,34,63,-1,63,62,32,-1,27,28,50,-1,50,63,27,-1]);
let Coordinate289 = browser.currentScene.createNode("Coordinate");
Coordinate289.point = new MFVec3f(new float[1.937,0.6896,-2.644,6.192,0.6897,1.374,5.738,0.6897,-0.7614,1.615,0.6897,3.729,4.273,0.6897,-2.169,3.945,0.6897,3.53,6.285,0.0041,1.319,2.062,0.0041,-2.618,0,0.0041,3.826,4.101,0.0041,3.729,4.29,0.0041,-2.105,5.572,0.0041,-0.9516,1.585,0.0041,3.822,-1.585,0.0041,3.822,-4.101,0.0041,3.729,-3.945,0.6897,3.53,-1.615,0.6897,3.729,-5.572,0.0041,-0.9516,-5.738,0.6897,-0.7614,-6.192,0.6897,1.374,-6.285,0.0041,1.319,-1.937,0.6896,-2.644,-2.062,0.0041,-2.618,0,0.0041,-2.665,0,0.6896,-2.735,0,0.6897,3.756,-4.29,0.0041,-2.105,-4.273,0.6897,-2.169,1.603,1.033,3.489,3.84,1.033,3.298,5.929,1.033,1.293,5.518,1.033,-0.6393,4.157,1.033,-1.947,1.907,1.033,-2.405,0,1.033,-2.494,-1.907,1.033,-2.405,-4.157,1.033,-1.947,-5.518,1.033,-0.6393,-5.929,1.033,1.293,-3.84,1.033,3.298,-1.603,1.033,3.489,0,1.033,3.516,0,-0.2313,-2.425,2.032,-0.2313,-2.378,4.176,-0.2313,-1.885,5.362,-0.2313,-0.8168,6.015,-0.2313,1.26,3.991,-0.2313,3.492,1.581,-0.2313,3.581,0,-0.2313,3.586,-1.581,-0.2313,3.581,-3.991,-0.2313,3.492,-6.015,-0.2313,1.26,-5.362,-0.2313,-0.8168,-4.176,-0.2313,-1.885,-2.032,-0.2313,-2.378]);
IndexedFaceSet288.coord = Coordinate289;

let TextureCoordinate290 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate290.point = new MFVec2f(new float[0.3061,0.4256,0.3364,0.4029,0.1528,0.4078,0.1843,0.4071,0.055,0.4216,0.3325,0.4068,0.0482,0.4185,0.221,0.4256,0.1008,0.4259,0.1518,0.3905,0.3506,0.3865,0.3484,0.3944,0.0427,0.408,0.0961,0.4138,0.3437,0.3934,0.2185,0.3912,0.1902,0.3894,0.0437,0.4075,0.0437,0.4075,0.0961,0.4138,0.1008,0.4259,0.055,0.4216,0.1902,0.3894,0.1843,0.4071,0.1528,0.4078,0.1518,0.3905,0.3364,0.4029,0.3506,0.3865,0.3437,0.3934,0.3325,0.4068,0.0482,0.4185,0.0427,0.408,0.2185,0.3912,0.221,0.4256,0.3484,0.3944,0.3061,0.4256,0.055,0.4216,0.1008,0.4259,0.1528,0.4078,0.1843,0.4071,0.221,0.4256,0.3061,0.4256,0.3325,0.4068,0.3364,0.4029,0.221,0.4256,0.1843,0.4071,0.1528,0.4078,0.1008,0.4259,0.055,0.4216,0.0482,0.4185,0.3437,0.3934,0.3506,0.3865,0.2185,0.3912,0.1902,0.3894,0.1518,0.3905,0.0961,0.4138,0.0437,0.4075,0.0427,0.408,0.0437,0.4075,0.0961,0.4138,0.1518,0.3905,0.1902,0.3894,0.2185,0.3912,0.3484,0.3944]);
IndexedFaceSet288.texCoord = TextureCoordinate290;

Shape284.geometry = IndexedFaceSet288;

Transform283.child = new undefined();

Transform283.child[0] = Shape284;

HAnimSegment282.children = new MFNode();

HAnimSegment282.children[0] = Transform283;

HAnimJoint281.children = new MFNode();

HAnimJoint281.children[0] = HAnimSegment282;

let HAnimJoint291 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint291.name = "vt5";
HAnimJoint291.DEF = "hanim_vt5";
HAnimJoint291.center = new SFVec3f(new float[0,49.639999,-0.6117]);
HAnimJoint291.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint291.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment292 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment292.name = "t5";
HAnimSegment292.DEF = "hanim_t5";
let Transform293 = browser.currentScene.createNode("Transform");
Transform293.translation = new SFVec3f(new float[0,49.639999,-0.6117]);
let Shape294 = browser.currentScene.createNode("Shape");
let Appearance295 = browser.currentScene.createNode("Appearance");
let Material296 = browser.currentScene.createNode("Material");
Material296.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance295.material = Material296;

let ImageTexture297 = browser.currentScene.createNode("ImageTexture");
ImageTexture297.USE = "JinLOA3TextureAtlas";
Appearance295.texture = ImageTexture297;

Shape294.appearance = Appearance295;

let IndexedFaceSet298 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet298.coordIndex = new MFInt32(new int[0,6,16,-1,16,13,0,-1,17,10,9,-1,9,3,17,-1,12,7,5,-1,5,2,12,-1,8,11,4,-1,4,1,8,-1,4,11,6,-1,6,0,4,-1,2,3,9,-1,9,12,2,-1,1,5,7,-1,7,8,1,-1,14,13,16,-1,16,15,14,-1,17,19,18,-1,18,10,17,-1,21,20,23,-1,23,22,21,-1,25,24,27,-1,27,26,25,-1,27,14,15,-1,15,26,27,-1,20,21,18,-1,18,19,20,-1,24,25,22,-1,22,23,24,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,42,-1,50,54,42,-1,46,50,42,-1,44,46,42,-1,43,44,42,-1,3,2,29,-1,29,28,3,-1,2,5,30,-1,30,29,2,-1,5,1,31,-1,31,30,5,-1,1,4,32,-1,32,31,1,-1,4,0,33,-1,33,32,4,-1,0,13,34,-1,34,33,0,-1,13,14,35,-1,35,34,13,-1,14,27,36,-1,36,35,14,-1,27,24,37,-1,37,36,27,-1,24,23,38,-1,38,37,24,-1,23,20,39,-1,39,38,23,-1,20,19,40,-1,40,39,20,-1,19,17,41,-1,41,40,19,-1,17,3,28,-1,28,41,17,-1,12,9,43,-1,43,42,12,-1,9,10,44,-1,44,43,9,-1,10,18,45,-1,45,44,10,-1,18,21,46,-1,46,45,18,-1,21,22,47,-1,47,46,21,-1,22,25,48,-1,48,47,22,-1,25,26,49,-1,49,48,25,-1,26,15,50,-1,50,49,26,-1,15,16,51,-1,51,50,15,-1,16,6,52,-1,52,51,16,-1,6,11,53,-1,53,52,6,-1,11,8,54,-1,54,53,11,-1,8,7,55,-1,55,54,8,-1,7,12,42,-1,42,55,7,-1]);
IndexedFaceSet298.creaseAngle = 3.14159;
IndexedFaceSet298.texCoordIndex = new MFInt32(new int[5,10,14,-1,14,2,5,-1,8,15,13,-1,13,7,8,-1,17,11,3,-1,3,6,17,-1,12,16,0,-1,0,4,12,-1,0,16,9,-1,9,1,0,-1,6,7,13,-1,13,17,6,-1,4,3,11,-1,11,12,4,-1,19,18,21,-1,21,20,19,-1,22,25,24,-1,24,23,22,-1,27,26,29,-1,29,28,27,-1,31,30,33,-1,33,32,31,-1,33,35,34,-1,34,32,33,-1,26,27,24,-1,24,25,26,-1,30,31,28,-1,28,29,30,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,50,-1,58,62,50,-1,54,58,50,-1,52,54,50,-1,51,52,50,-1,7,6,37,-1,37,36,7,-1,6,3,38,-1,38,37,6,-1,3,4,39,-1,39,38,3,-1,4,0,40,-1,40,39,4,-1,0,1,41,-1,41,40,0,-1,5,2,42,-1,42,41,5,-1,18,19,43,-1,43,42,18,-1,35,33,44,-1,44,43,35,-1,33,30,45,-1,45,44,33,-1,30,29,46,-1,46,45,30,-1,29,26,47,-1,47,46,29,-1,26,25,48,-1,48,47,26,-1,25,22,49,-1,49,48,25,-1,8,7,36,-1,36,49,8,-1,17,13,51,-1,51,50,17,-1,13,15,52,-1,52,51,13,-1,23,24,53,-1,53,52,23,-1,24,27,54,-1,54,53,24,-1,27,28,55,-1,55,54,27,-1,28,31,56,-1,56,55,28,-1,31,32,57,-1,57,56,31,-1,32,34,58,-1,58,57,32,-1,20,21,59,-1,59,58,20,-1,14,10,60,-1,60,59,14,-1,9,16,61,-1,61,60,9,-1,16,12,62,-1,62,61,16,-1,12,11,63,-1,63,62,12,-1,11,17,50,-1,50,63,11,-1]);
let Coordinate299 = browser.currentScene.createNode("Coordinate");
Coordinate299.point = new MFVec3f(new float[1.811,0.6855,-2.67,5.903,0.6856,-0.5713,3.788,0.6856,3.331,1.646,0.6856,3.637,4.256,0.6856,-2.233,6.098,0.6856,1.429,1.937,0,-2.644,6.192,0.0001,1.374,5.738,0.0001,-0.7614,1.615,0.0001,3.729,0,0.0001,3.756,4.273,0.0001,-2.169,3.945,0.0001,3.53,0,0.6855,-2.804,-1.811,0.6855,-2.67,-1.937,0,-2.644,0,0,-2.735,0,0.6856,3.687,-1.615,0.0001,3.729,-1.646,0.6856,3.637,-3.788,0.6856,3.331,-3.945,0.0001,3.53,-6.192,0.0001,1.374,-6.098,0.6856,1.429,-5.903,0.6856,-0.5713,-5.738,0.0001,-0.7614,-4.273,0.0001,-2.169,-4.256,0.6856,-2.233,1.621,1.052,3.355,3.67,1.052,3.062,5.802,1.052,1.306,5.631,1.052,-0.4437,4.118,1.052,-1.97,1.776,1.052,-2.389,0,1.052,-2.52,-1.776,1.052,-2.389,-4.118,1.052,-1.97,-5.631,1.052,-0.4437,-5.802,1.052,1.306,-3.67,1.052,3.062,-1.621,1.052,3.355,0,1.052,3.404,3.821,-0.3346,3.256,1.601,-0.3346,3.447,0,-0.3346,3.474,-1.601,-0.3346,3.447,-3.821,-0.3346,3.256,-5.882,-0.3346,1.279,-5.479,-0.3346,-0.6177,-4.136,-0.3346,-1.908,-1.902,-0.3347,-2.363,0,-0.3347,-2.451,1.902,-0.3347,-2.363,4.136,-0.3346,-1.908,5.479,-0.3346,-0.6177,5.882,-0.3346,1.279]);
IndexedFaceSet298.coord = Coordinate299;

let TextureCoordinate300 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate300.point = new MFVec2f(new float[0.2236,0.46,0.2638,0.4568,0.3214,0.4203,0.1538,0.4251,0.1784,0.4249,0.3223,0.4192,0.1055,0.438,0.0663,0.4356,0.0537,0.4289,0.3061,0.4256,0.3364,0.4029,0.1528,0.4078,0.1843,0.4071,0.055,0.4216,0.3325,0.4068,0.0482,0.4185,0.221,0.4256,0.1008,0.4259,0.3214,0.4203,0.3223,0.4192,0.3364,0.4029,0.3325,0.4068,0.0537,0.4289,0.0482,0.4185,0.055,0.4216,0.0663,0.4356,0.1055,0.438,0.1008,0.4259,0.1528,0.4078,0.1538,0.4251,0.1784,0.4249,0.1843,0.4071,0.221,0.4256,0.2236,0.46,0.3061,0.4256,0.2638,0.4568,0.0663,0.4356,0.1055,0.438,0.1538,0.4251,0.1784,0.4249,0.2236,0.46,0.2638,0.4568,0.3214,0.4203,0.3223,0.4192,0.2236,0.46,0.1784,0.4249,0.1538,0.4251,0.1055,0.438,0.0663,0.4356,0.0537,0.4289,0.1008,0.4259,0.055,0.4216,0.0482,0.4185,0.055,0.4216,0.1008,0.4259,0.1528,0.4078,0.1843,0.4071,0.221,0.4256,0.3061,0.4256,0.3325,0.4068,0.3364,0.4029,0.221,0.4256,0.1843,0.4071,0.1528,0.4078]);
IndexedFaceSet298.texCoord = TextureCoordinate300;

Shape294.geometry = IndexedFaceSet298;

Transform293.child = new undefined();

Transform293.child[0] = Shape294;

HAnimSegment292.children = new MFNode();

HAnimSegment292.children[0] = Transform293;

HAnimJoint291.children = new MFNode();

HAnimJoint291.children[0] = HAnimSegment292;

let HAnimJoint301 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint301.name = "vt4";
HAnimJoint301.DEF = "hanim_vt4";
HAnimJoint301.center = new SFVec3f(new float[0,50.310001,-0.6117]);
HAnimJoint301.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint301.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment302 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment302.name = "t4";
HAnimSegment302.DEF = "hanim_t4";
let Transform303 = browser.currentScene.createNode("Transform");
Transform303.translation = new SFVec3f(new float[0,50.310001,-0.6117]);
let Shape304 = browser.currentScene.createNode("Shape");
let Appearance305 = browser.currentScene.createNode("Appearance");
let Material306 = browser.currentScene.createNode("Material");
Material306.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance305.material = Material306;

let ImageTexture307 = browser.currentScene.createNode("ImageTexture");
ImageTexture307.USE = "JinLOA3TextureAtlas";
Appearance305.texture = ImageTexture307;

Shape304.appearance = Appearance305;

let IndexedFaceSet308 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet308.coordIndex = new MFInt32(new int[2,3,9,-1,9,12,2,-1,3,0,10,-1,10,9,3,-1,7,20,21,-1,21,4,7,-1,11,7,4,-1,4,5,11,-1,25,26,10,-1,10,0,25,-1,6,11,5,-1,11,6,1,-1,1,8,11,-1,2,12,8,-1,8,1,2,-1,14,13,16,-1,16,15,14,-1,15,16,18,-1,18,17,15,-1,19,22,21,-1,21,20,19,-1,23,24,22,-1,22,19,23,-1,25,17,18,-1,18,26,25,-1,27,24,23,-1,23,29,28,-1,28,27,23,-1,14,28,29,-1,29,13,14,-1,31,32,33,-1,31,33,34,-1,34,35,36,-1,36,37,38,-1,34,36,38,-1,31,34,38,-1,38,39,40,-1,40,41,42,-1,38,40,42,-1,31,38,42,-1,42,43,44,-1,31,42,44,-1,31,44,45,-1,31,45,30,-1,48,49,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,46,-1,54,58,46,-1,50,54,46,-1,48,50,46,-1,47,48,46,-1,3,2,31,-1,31,30,3,-1,2,1,32,-1,32,31,2,-1,1,6,33,-1,33,32,1,-1,6,5,34,-1,34,33,6,-1,5,4,35,-1,35,34,5,-1,4,21,36,-1,36,35,4,-1,21,22,37,-1,37,36,21,-1,22,24,38,-1,38,37,22,-1,24,27,39,-1,39,38,24,-1,27,28,40,-1,40,39,27,-1,28,14,41,-1,41,40,28,-1,14,15,42,-1,42,41,14,-1,15,17,43,-1,43,42,15,-1,17,25,44,-1,44,43,17,-1,25,0,45,-1,45,44,25,-1,0,3,30,-1,30,45,0,-1,9,10,47,-1,47,46,9,-1,10,26,48,-1,48,47,10,-1,26,18,49,-1,49,48,26,-1,18,16,50,-1,50,49,18,-1,16,13,51,-1,51,50,16,-1,13,29,52,-1,52,51,13,-1,29,23,53,-1,53,52,29,-1,23,19,54,-1,54,53,23,-1,19,20,55,-1,55,54,19,-1,20,7,56,-1,56,55,20,-1,7,11,57,-1,57,56,7,-1,11,8,58,-1,58,57,11,-1,8,12,59,-1,59,58,8,-1,12,9,46,-1,46,59,12,-1]);
IndexedFaceSet308.creaseAngle = 3.14159;
IndexedFaceSet308.texCoordIndex = new MFInt32(new int[3,4,14,-1,14,18,3,-1,4,1,15,-1,15,14,4,-1,10,17,7,-1,7,6,10,-1,16,11,5,-1,5,8,16,-1,0,19,15,-1,15,1,0,-1,9,16,8,-1,16,9,2,-1,2,12,16,-1,3,18,13,-1,13,2,3,-1,21,20,23,-1,23,22,21,-1,22,23,25,-1,25,24,22,-1,26,29,28,-1,28,27,26,-1,30,33,32,-1,32,31,30,-1,34,24,25,-1,25,35,34,-1,36,33,30,-1,30,38,37,-1,37,36,30,-1,21,37,39,-1,39,20,21,-1,41,42,43,-1,41,43,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,48,49,50,-1,50,51,52,-1,48,50,52,-1,41,48,52,-1,52,53,54,-1,41,52,54,-1,41,54,55,-1,41,55,40,-1,58,59,60,-1,60,61,62,-1,62,63,64,-1,60,62,64,-1,64,65,66,-1,66,67,68,-1,64,66,68,-1,68,69,56,-1,64,68,56,-1,60,64,56,-1,58,60,56,-1,57,58,56,-1,4,3,41,-1,41,40,4,-1,3,2,42,-1,42,41,3,-1,2,9,43,-1,43,42,2,-1,9,8,44,-1,44,43,9,-1,8,5,45,-1,45,44,8,-1,6,7,46,-1,46,45,6,-1,28,29,47,-1,47,46,28,-1,32,33,48,-1,48,47,32,-1,33,36,49,-1,49,48,33,-1,36,37,50,-1,50,49,36,-1,37,21,51,-1,51,50,37,-1,21,22,52,-1,52,51,21,-1,22,24,53,-1,53,52,22,-1,24,34,54,-1,54,53,24,-1,0,1,55,-1,55,54,0,-1,1,4,40,-1,40,55,1,-1,14,15,57,-1,57,56,14,-1,15,19,58,-1,58,57,15,-1,35,25,59,-1,59,58,35,-1,25,23,60,-1,60,59,25,-1,23,20,61,-1,61,60,23,-1,20,39,62,-1,62,61,20,-1,38,30,63,-1,63,62,38,-1,30,31,64,-1,64,63,30,-1,26,27,65,-1,65,64,26,-1,17,10,66,-1,66,65,17,-1,11,16,67,-1,67,66,11,-1,16,12,68,-1,68,67,16,-1,13,18,69,-1,69,68,13,-1,18,14,56,-1,56,69,18,-1]);
let Coordinate309 = browser.currentScene.createNode("Coordinate");
Coordinate309.point = new MFVec3f(new float[1.681,0.822,3.528,5.775,0.849,-0.9043,5.825,0.7894,1.521,3.585,0.9022,3.073,1.811,0.849,-2.505,4.284,0.849,-2.108,4.617,0.849,-2.072,1.811,0.0128,-2.67,5.903,0.0129,-0.5713,3.788,0.0129,3.331,1.646,0.0129,3.637,4.256,0.0129,-2.233,6.098,0.0129,1.429,-6.098,0.0129,1.429,-5.825,0.7894,1.521,-3.585,0.9022,3.073,-3.788,0.0129,3.331,-1.681,0.822,3.528,-1.646,0.0129,3.637,-1.811,0.0128,-2.67,0,0.0128,-2.804,0,0.849,-2.639,-1.811,0.849,-2.505,-4.256,0.0129,-2.233,-4.284,0.849,-2.108,0,0.822,3.616,0,0.0129,3.687,-4.617,0.849,-2.072,-5.775,0.849,-0.9043,-5.903,0.0129,-0.5713,3.461,1.375,2.795,5.523,1.375,1.367,5.479,1.375,-0.7788,4.48,1.375,-1.787,4.244,1.375,-1.812,1.776,1.375,-2.209,0,1.375,-2.34,-1.776,1.375,-2.209,-4.244,1.375,-1.812,-4.48,1.375,-1.787,-5.479,1.375,-0.7788,-5.523,1.375,1.367,-3.461,1.375,2.795,-1.638,1.375,3.231,0,1.375,3.317,1.638,1.375,3.231,3.663,-0.3222,3.047,1.62,-0.3222,3.339,0,-0.3222,3.388,-1.62,-0.3222,3.339,-3.663,-0.3222,3.047,-5.786,-0.3222,1.299,-5.616,-0.3222,-0.4366,-4.111,-0.3222,-1.955,-1.774,-0.3222,-2.373,0,-0.3222,-2.505,1.774,-0.3222,-2.373,4.111,-0.3222,-1.955,5.616,-0.3222,-0.4366,5.786,-0.3222,1.299]);
IndexedFaceSet308.coord = Coordinate309;

let TextureCoordinate310 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate310.point = new MFVec2f(new float[0.0639,0.4488,0.0777,0.4495,0.1846,0.4438,0.1504,0.4433,0.1107,0.4532,0.2633,0.457,0.3222,0.4193,0.3214,0.4203,0.2198,0.4731,0.2144,0.4674,0.3223,0.4192,0.2638,0.4568,0.1784,0.4249,0.1784,0.4249,0.1055,0.438,0.0663,0.4356,0.2236,0.46,0.3214,0.4203,0.1538,0.4251,0.0537,0.4289,0.1538,0.4251,0.1504,0.4433,0.1107,0.4532,0.1055,0.438,0.0777,0.4495,0.0663,0.4356,0.3223,0.4192,0.3214,0.4203,0.3214,0.4203,0.3222,0.4193,0.2236,0.46,0.2638,0.4568,0.2633,0.457,0.2198,0.4731,0.0639,0.4488,0.0537,0.4289,0.2144,0.4674,0.1846,0.4438,0.1784,0.4249,0.1784,0.4249,0.1107,0.4532,0.1504,0.4433,0.1846,0.4438,0.2144,0.4674,0.2198,0.4731,0.2633,0.457,0.3214,0.4203,0.3222,0.4193,0.2198,0.4731,0.2144,0.4674,0.1846,0.4438,0.1504,0.4433,0.1107,0.4532,0.0777,0.4495,0.0639,0.4488,0.0777,0.4495,0.1055,0.438,0.0663,0.4356,0.0537,0.4289,0.0663,0.4356,0.1055,0.438,0.1538,0.4251,0.1784,0.4249,0.2236,0.46,0.2638,0.4568,0.3214,0.4203,0.3223,0.4192,0.2236,0.46,0.1784,0.4249,0.1538,0.4251]);
IndexedFaceSet308.texCoord = TextureCoordinate310;

Shape304.geometry = IndexedFaceSet308;

Transform303.child = new undefined();

Transform303.child[0] = Shape304;

HAnimSegment302.children = new MFNode();

HAnimSegment302.children[0] = Transform303;

HAnimJoint301.children = new MFNode();

HAnimJoint301.children[0] = HAnimSegment302;

let HAnimJoint311 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint311.name = "vt3";
HAnimJoint311.DEF = "hanim_vt3";
HAnimJoint311.center = new SFVec3f(new float[0,51.130001,-0.6117]);
HAnimJoint311.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint311.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment312 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment312.name = "t3";
HAnimSegment312.DEF = "hanim_t3";
let Transform313 = browser.currentScene.createNode("Transform");
Transform313.translation = new SFVec3f(new float[0,51.130001,-0.6117]);
let Shape314 = browser.currentScene.createNode("Shape");
let Appearance315 = browser.currentScene.createNode("Appearance");
let Material316 = browser.currentScene.createNode("Material");
Material316.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance315.material = Material316;

let ImageTexture317 = browser.currentScene.createNode("ImageTexture");
ImageTexture317.USE = "JinLOA3TextureAtlas";
Appearance315.texture = ImageTexture317;

Shape314.appearance = Appearance315;

let IndexedFaceSet318 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet318.coordIndex = new MFInt32(new int[16,15,0,-1,0,7,16,-1,0,15,8,-1,1,5,11,-1,11,10,1,-1,18,6,12,-1,12,17,18,-1,14,13,2,-1,2,3,14,-1,9,14,3,-1,3,4,9,-1,11,5,0,-1,0,8,11,-1,13,12,6,-1,6,2,13,-1,49,16,7,-1,7,0,5,-1,1,10,9,-1,9,4,1,-1,3,2,20,-1,20,19,3,-1,2,6,21,-1,21,20,2,-1,6,18,53,-1,53,21,6,-1,7,5,23,-1,23,22,7,-1,5,1,24,-1,24,23,5,-1,1,4,25,-1,25,24,1,-1,4,3,19,-1,19,25,4,-1,10,11,27,-1,27,26,10,-1,11,8,28,-1,28,27,11,-1,8,15,29,-1,29,28,8,-1,17,12,30,-1,30,62,17,-1,12,13,31,-1,31,30,12,-1,13,14,32,-1,32,31,13,-1,14,9,33,-1,33,32,14,-1,9,10,26,-1,26,33,9,-1,16,35,34,-1,34,15,16,-1,34,36,15,-1,38,37,40,-1,40,39,38,-1,18,17,42,-1,42,41,18,-1,44,43,46,-1,46,45,44,-1,48,47,43,-1,43,44,48,-1,40,36,34,-1,34,39,40,-1,45,46,41,-1,41,42,45,-1,49,35,16,-1,35,39,34,-1,38,47,48,-1,48,37,38,-1,43,51,50,-1,50,46,43,-1,46,50,52,-1,52,41,46,-1,41,52,53,-1,53,18,41,-1,35,55,54,-1,54,39,35,-1,39,54,56,-1,56,38,39,-1,38,56,57,-1,57,47,38,-1,47,57,51,-1,51,43,47,-1,37,59,58,-1,58,40,37,-1,40,58,60,-1,60,36,40,-1,36,60,29,-1,29,15,36,-1,17,62,61,-1,61,42,17,-1,42,61,63,-1,63,45,42,-1,45,63,64,-1,64,44,45,-1,44,64,65,-1,65,48,44,-1,48,65,59,-1,59,37,48,-1,27,28,29,-1,29,60,58,-1,58,59,65,-1,29,58,65,-1,65,64,63,-1,63,61,62,-1,65,63,62,-1,62,30,31,-1,31,32,33,-1,62,31,33,-1,65,62,33,-1,29,65,33,-1,27,29,33,-1,27,33,26,-1]);
IndexedFaceSet318.creaseAngle = 3.14159;
IndexedFaceSet318.texCoordIndex = new MFInt32(new int[2,12,1,-1,1,0,2,-1,1,12,13,-1,4,8,16,-1,16,15,4,-1,11,10,17,-1,17,19,11,-1,21,20,5,-1,5,6,21,-1,14,21,6,-1,6,7,14,-1,16,8,1,-1,1,13,16,-1,20,18,9,-1,9,5,20,-1,3,2,0,-1,0,1,8,-1,4,15,14,-1,14,7,4,-1,6,5,23,-1,23,22,6,-1,5,9,24,-1,24,23,5,-1,10,11,25,-1,25,24,10,-1,0,8,27,-1,27,26,0,-1,8,4,28,-1,28,27,8,-1,4,7,29,-1,29,28,4,-1,7,6,22,-1,22,29,7,-1,15,16,31,-1,31,30,15,-1,16,13,32,-1,32,31,16,-1,13,12,33,-1,33,32,13,-1,19,17,35,-1,35,34,19,-1,18,20,36,-1,36,35,18,-1,20,21,37,-1,37,36,20,-1,21,14,38,-1,38,37,21,-1,14,15,30,-1,30,38,14,-1,42,41,40,-1,40,39,42,-1,40,43,39,-1,45,44,47,-1,47,46,45,-1,49,48,51,-1,51,50,49,-1,53,52,55,-1,55,54,53,-1,57,56,52,-1,52,53,57,-1,47,43,40,-1,40,46,47,-1,54,55,59,-1,59,58,54,-1,60,41,42,-1,41,46,40,-1,45,56,57,-1,57,44,45,-1,52,62,61,-1,61,55,52,-1,55,61,63,-1,63,59,55,-1,50,63,64,-1,64,49,50,-1,41,66,65,-1,65,46,41,-1,46,65,67,-1,67,45,46,-1,45,67,68,-1,68,56,45,-1,56,68,62,-1,62,52,56,-1,44,70,69,-1,69,47,44,-1,47,69,71,-1,71,43,47,-1,43,71,72,-1,72,39,43,-1,48,74,73,-1,73,51,48,-1,58,73,75,-1,75,54,58,-1,54,75,76,-1,76,53,54,-1,53,76,77,-1,77,57,53,-1,57,77,70,-1,70,44,57,-1,31,32,33,-1,33,71,69,-1,69,70,77,-1,33,69,77,-1,77,76,75,-1,75,73,74,-1,77,75,74,-1,74,35,36,-1,36,37,38,-1,74,36,38,-1,77,74,38,-1,33,77,38,-1,31,33,38,-1,31,38,30,-1]);
let Coordinate319 = browser.currentScene.createNode("Coordinate");
Coordinate319.point = new MFVec3f(new float[1.713,0.7435,3.428,5.378,1.242,1.672,4.324,1.242,-1.927,5.141,1.242,-1.839,5.589,1.242,-1.387,3.32,1.242,2.736,1.811,1.242,-2.266,1.593,1.064,4.098,1.681,0.002,3.528,5.775,0.029,-0.9043,5.825,-0.0306,1.521,3.585,0.0822,3.073,1.811,0.029,-2.505,4.284,0.029,-2.108,4.617,0.029,-2.072,0,0.002,3.616,0,0.3874,4.121,0,0.029,-2.639,0,1.242,-2.4,5.018,1.668,-1.583,4.292,1.668,-1.661,1.783,1.668,-2,1.521,1.668,3.814,3.175,1.668,2.51,5.121,1.668,1.504,5.314,1.668,-1.285,5.669,-0.44,1.408,3.545,-0.44,2.879,1.676,-0.44,3.326,0,-0.44,3.413,1.817,-0.44,-2.289,4.335,-0.44,-1.884,4.586,-0.44,-1.857,5.623,-0.44,-0.8114,-1.713,0.7435,3.428,-1.593,1.064,4.098,-1.681,0.002,3.528,-5.825,-0.0306,1.521,-5.378,1.242,1.672,-3.32,1.242,2.736,-3.585,0.0822,3.073,-1.811,1.242,-2.266,-1.811,0.029,-2.505,-5.141,1.242,-1.839,-4.617,0.029,-2.072,-4.284,0.029,-2.108,-4.324,1.242,-1.927,-5.589,1.242,-1.387,-5.775,0.029,-0.9043,0,1.15,3.82,-4.292,1.668,-1.661,-5.018,1.668,-1.583,-1.783,1.668,-2,0,1.668,-2.132,-3.175,1.668,2.51,-1.521,1.668,3.814,-5.121,1.668,1.504,-5.314,1.668,-1.285,-3.545,-0.44,2.879,-5.669,-0.44,1.408,-1.676,-0.44,3.326,-1.817,-0.44,-2.289,0,-0.44,-2.423,-4.335,-0.44,-1.884,-4.586,-0.44,-1.857,-5.623,-0.44,-0.8114]);
IndexedFaceSet318.coord = Coordinate319;

let TextureCoordinate320 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate320.point = new MFVec2f(new float[0.0763,0.4945,0.0877,0.4617,0.0525,0.4715,0.0399,0.5407,0.1491,0.4682,0.2169,0.492,0.2035,0.4795,0.1915,0.4696,0.1178,0.4708,0.2635,0.4569,0.3223,0.4193,0.3214,0.4203,0.0639,0.4488,0.0777,0.4495,0.1846,0.4438,0.1504,0.4433,0.1107,0.4532,0.3222,0.4193,0.2633,0.457,0.3214,0.4203,0.2198,0.4731,0.2144,0.4674,0.2035,0.4795,0.2169,0.492,0.2635,0.4569,0.3214,0.4203,0.0763,0.4945,0.1178,0.4708,0.1491,0.4682,0.1915,0.4696,0.1504,0.4433,0.1107,0.4532,0.0777,0.4495,0.0639,0.4488,0.3214,0.4203,0.3222,0.4193,0.2198,0.4731,0.2144,0.4674,0.1846,0.4438,0.0639,0.4488,0.0877,0.4617,0.0763,0.4945,0.0525,0.4715,0.0777,0.4495,0.1504,0.4433,0.1491,0.4682,0.1178,0.4708,0.1107,0.4532,0.3214,0.4203,0.3214,0.4203,0.3223,0.4193,0.3222,0.4193,0.2035,0.4795,0.2144,0.4674,0.2198,0.4731,0.2169,0.492,0.1915,0.4696,0.1846,0.4438,0.2633,0.457,0.2635,0.4569,0.0399,0.5407,0.2169,0.492,0.2035,0.4795,0.2635,0.4569,0.3214,0.4203,0.1178,0.4708,0.0763,0.4945,0.1491,0.4682,0.1915,0.4696,0.1107,0.4532,0.1504,0.4433,0.0777,0.4495,0.0639,0.4488,0.3222,0.4193,0.3214,0.4203,0.2198,0.4731,0.2144,0.4674,0.1846,0.4438]);
IndexedFaceSet318.texCoord = TextureCoordinate320;

Shape314.geometry = IndexedFaceSet318;

Transform313.child = new undefined();

Transform313.child[0] = Shape314;

HAnimSegment312.children = new MFNode();

HAnimSegment312.children[0] = Transform313;

HAnimJoint311.children = new MFNode();

HAnimJoint311.children[0] = HAnimSegment312;

let HAnimJoint321 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint321.name = "vt2";
HAnimJoint321.DEF = "hanim_vt2";
HAnimJoint321.center = new SFVec3f(new float[0,52.23,-0.6127]);
HAnimJoint321.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint321.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment322 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment322.name = "t2";
HAnimSegment322.DEF = "hanim_t2";
let Transform323 = browser.currentScene.createNode("Transform");
Transform323.translation = new SFVec3f(new float[0,52.23,-0.6127]);
let Shape324 = browser.currentScene.createNode("Shape");
let Appearance325 = browser.currentScene.createNode("Appearance");
let Material326 = browser.currentScene.createNode("Material");
Material326.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance325.material = Material326;

let ImageTexture327 = browser.currentScene.createNode("ImageTexture");
ImageTexture327.USE = "JinLOA3TextureAtlas";
Appearance325.texture = ImageTexture327;

Shape324.appearance = Appearance325;

let IndexedFaceSet328 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet328.coordIndex = new MFInt32(new int[1,5,12,-1,7,2,19,-1,19,0,7,-1,0,11,7,-1,2,7,5,-1,5,1,2,-1,17,0,19,-1,0,17,6,-1,6,11,0,-1,20,2,1,-1,1,4,20,-1,2,20,19,-1,10,9,15,-1,15,14,10,-1,9,16,15,-1,8,10,14,-1,14,18,8,-1,13,6,17,-1,3,8,18,-1,18,21,3,-1,51,4,1,-1,1,12,51,-1,6,13,16,-1,16,9,6,-1,6,9,23,-1,23,22,6,-1,9,10,24,-1,24,23,9,-1,10,8,25,-1,25,24,10,-1,8,3,56,-1,56,25,8,-1,14,15,27,-1,27,26,14,-1,15,16,28,-1,28,27,15,-1,16,13,29,-1,29,28,16,-1,13,17,30,-1,30,29,13,-1,17,19,31,-1,31,30,17,-1,19,20,63,-1,63,31,19,-1,21,18,32,-1,32,65,21,-1,18,14,26,-1,26,32,18,-1,33,35,34,-1,38,37,36,-1,36,39,38,-1,37,38,40,-1,39,33,34,-1,34,38,39,-1,41,36,37,-1,37,40,42,-1,42,41,37,-1,20,4,33,-1,33,39,20,-1,39,36,20,-1,43,46,45,-1,45,44,43,-1,44,45,47,-1,49,48,46,-1,46,43,49,-1,50,41,42,-1,3,21,48,-1,48,49,3,-1,51,35,33,-1,33,4,51,-1,42,44,47,-1,47,50,42,-1,42,53,52,-1,52,44,42,-1,44,52,54,-1,54,43,44,-1,43,54,55,-1,55,49,43,-1,49,55,56,-1,56,3,49,-1,46,58,57,-1,57,45,46,-1,45,57,59,-1,59,47,45,-1,47,59,60,-1,60,50,47,-1,50,60,61,-1,61,41,50,-1,41,61,62,-1,62,36,41,-1,36,62,63,-1,63,20,36,-1,21,65,64,-1,64,48,21,-1,48,64,58,-1,58,46,48,-1,28,29,30,-1,31,63,62,-1,30,31,62,-1,62,61,60,-1,60,59,57,-1,62,60,57,-1,62,57,58,-1,58,64,65,-1,65,32,26,-1,58,65,26,-1,62,58,26,-1,30,62,26,-1,28,30,26,-1,27,28,26,-1]);
IndexedFaceSet328.creaseAngle = 3.14159;
IndexedFaceSet328.texCoordIndex = new MFInt32(new int[0,1,16,-1,4,5,26,-1,26,3,4,-1,3,15,4,-1,5,4,6,-1,6,7,5,-1,22,3,26,-1,3,22,8,-1,8,15,3,-1,27,5,7,-1,7,10,27,-1,5,27,26,-1,14,9,20,-1,20,19,14,-1,9,21,20,-1,13,14,19,-1,19,23,13,-1,18,8,22,-1,11,12,24,-1,24,25,11,-1,17,2,0,-1,0,16,17,-1,8,18,21,-1,21,9,8,-1,8,9,29,-1,29,28,8,-1,9,14,30,-1,30,29,9,-1,14,13,31,-1,31,30,14,-1,12,11,32,-1,32,31,12,-1,19,20,34,-1,34,33,19,-1,20,21,35,-1,35,34,20,-1,21,18,36,-1,36,35,21,-1,18,22,37,-1,37,36,18,-1,22,26,38,-1,38,37,22,-1,26,27,39,-1,39,38,26,-1,25,24,41,-1,41,40,25,-1,23,19,33,-1,33,41,23,-1,42,44,43,-1,47,46,45,-1,45,48,47,-1,46,47,49,-1,48,51,50,-1,50,47,48,-1,52,45,46,-1,46,49,53,-1,53,52,46,-1,55,54,51,-1,51,48,55,-1,48,45,55,-1,56,59,58,-1,58,57,56,-1,57,58,60,-1,62,61,59,-1,59,56,62,-1,63,52,53,-1,65,64,67,-1,67,66,65,-1,68,44,42,-1,42,69,68,-1,53,57,60,-1,60,63,53,-1,53,71,70,-1,70,57,53,-1,57,70,72,-1,72,56,57,-1,56,72,73,-1,73,62,56,-1,66,73,74,-1,74,65,66,-1,59,76,75,-1,75,58,59,-1,58,75,77,-1,77,60,58,-1,60,77,78,-1,78,63,60,-1,63,78,79,-1,79,52,63,-1,52,79,80,-1,80,45,52,-1,45,80,81,-1,81,55,45,-1,64,83,82,-1,82,67,64,-1,61,82,76,-1,76,59,61,-1,35,36,37,-1,38,39,80,-1,37,38,80,-1,80,79,78,-1,78,77,75,-1,80,78,75,-1,80,75,76,-1,76,82,83,-1,83,41,33,-1,76,83,33,-1,80,76,33,-1,37,80,33,-1,35,37,33,-1,34,35,33,-1]);
let Coordinate329 = browser.currentScene.createNode("Coordinate");
Coordinate329.point = new MFVec3f(new float[3.131,0.4823,3.66,1.373,0.5334,3.428,1.38,0.5334,3.897,0,0.9032,-2.25,0,-0.0071,3.661,2.043,1.067,3.089,5.086,0.9718,1.771,2.245,1.223,3.581,1.811,0.9032,-2.116,5.472,0.9071,-1.692,4.349,0.906,-1.813,3.805,1.161,2.723,1.182,1.067,2.765,5.378,0.1425,1.672,4.324,0.1425,-1.927,5.141,0.1425,-1.839,5.589,0.1425,-1.387,3.32,0.1425,2.736,1.811,0.1425,-2.266,1.593,-0.036,4.098,0,0.0508,3.82,0,0.1425,-2.4,4.884,1.323,1.266,4.971,1.271,-1.4,4.325,1.271,-1.641,1.791,1.268,-1.912,4.298,-0.4521,-1.715,5.043,-0.4521,-1.635,5.369,-0.4521,-1.306,5.173,-0.4521,1.538,3.204,-0.4521,2.555,1.535,-0.4521,2.956,1.789,-0.4521,-2.054,-1.373,0.5334,3.428,-2.043,1.067,3.089,-1.182,1.067,2.765,-1.593,-0.036,4.098,-3.131,0.4823,3.66,-2.245,1.223,3.581,-1.38,0.5334,3.897,-3.805,1.161,2.723,-3.32,0.1425,2.736,-5.086,0.9718,1.771,-4.349,0.906,-1.813,-5.472,0.9071,-1.692,-5.141,0.1425,-1.839,-4.324,0.1425,-1.927,-5.589,0.1425,-1.387,-1.811,0.1425,-2.266,-1.811,0.9032,-2.116,-5.378,0.1425,1.672,0,1.067,2.596,-4.971,1.271,-1.4,-4.884,1.323,1.266,-4.325,1.271,-1.641,-1.791,1.268,-1.912,0,1.268,-2.03,-5.043,-0.4521,-1.635,-4.298,-0.4521,-1.715,-5.369,-0.4521,-1.306,-5.173,-0.4521,1.538,-3.204,-0.4521,2.555,-1.535,-0.4521,2.956,0,-0.4521,3.603,-1.789,-0.4521,-2.054,0,-0.4521,-2.186]);
IndexedFaceSet328.coord = Coordinate329;

let TextureCoordinate330 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate330.point = new MFVec2f(new float[0.4473,0.6921,0.4449,0.6914,0.4513,0.6918,0.1025,0.5076,0.0865,0.5614,0.0652,0.5465,0.0786,0.5849,0.0516,0.5759,0.1474,0.4856,0.1963,0.4863,0.0346,0.5664,0.3214,0.4203,0.3223,0.4192,0.2638,0.4568,0.2146,0.5039,0.1227,0.5144,0.4468,0.6898,0.4495,0.6881,0.1491,0.4682,0.2169,0.492,0.2035,0.4795,0.1915,0.4696,0.1178,0.4708,0.2635,0.4569,0.3223,0.4193,0.3214,0.4203,0.0763,0.4945,0.0399,0.5407,0.1474,0.4856,0.1963,0.4863,0.2146,0.5039,0.2638,0.4568,0.3214,0.4203,0.2169,0.492,0.2035,0.4795,0.1915,0.4696,0.1491,0.4682,0.1178,0.4708,0.0763,0.4945,0.0399,0.5407,0.3214,0.4203,0.3223,0.4193,0.4473,0.6921,0.4449,0.6914,0.4468,0.6898,0.0763,0.4945,0.1025,0.5076,0.0865,0.5614,0.0652,0.5465,0.1227,0.5144,0.0786,0.5849,0.0516,0.5759,0.1178,0.4708,0.1474,0.4856,0.0346,0.5664,0.0399,0.5407,0.2146,0.5039,0.1963,0.4863,0.2035,0.4795,0.2169,0.492,0.1915,0.4696,0.2635,0.4569,0.2638,0.4568,0.1491,0.4682,0.3214,0.4203,0.3214,0.4203,0.3223,0.4192,0.3223,0.4193,0.4495,0.6881,0.4513,0.6918,0.1963,0.4863,0.1474,0.4856,0.2146,0.5039,0.2638,0.4568,0.3214,0.4203,0.2035,0.4795,0.2169,0.492,0.1915,0.4696,0.1491,0.4682,0.1178,0.4708,0.0763,0.4945,0.0399,0.5407,0.3223,0.4193,0.3214,0.4203]);
IndexedFaceSet328.texCoord = TextureCoordinate330;

Shape324.geometry = IndexedFaceSet328;

Transform323.child = new undefined();

Transform323.child[0] = Shape324;

HAnimSegment322.children = new MFNode();

HAnimSegment322.children[0] = Transform323;

HAnimJoint321.children = new MFNode();

HAnimJoint321.children[0] = HAnimSegment322;

let HAnimJoint331 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint331.name = "vt1";
HAnimJoint331.DEF = "hanim_vt1";
HAnimJoint331.center = new SFVec3f(new float[0,53.290001,-0.6117]);
HAnimJoint331.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint331.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment332 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment332.name = "t1";
HAnimSegment332.DEF = "hanim_t1";
let Transform333 = browser.currentScene.createNode("Transform");
Transform333.translation = new SFVec3f(new float[0,53.290001,-0.6117]);
let Shape334 = browser.currentScene.createNode("Shape");
let Appearance335 = browser.currentScene.createNode("Appearance");
let Material336 = browser.currentScene.createNode("Material");
Material336.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance335.material = Material336;

let ImageTexture337 = browser.currentScene.createNode("ImageTexture");
ImageTexture337.USE = "JinLOA3TextureAtlas";
Appearance335.texture = ImageTexture337;

Shape334.appearance = Appearance335;

let IndexedFaceSet338 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet338.coordIndex = new MFInt32(new int[1,5,3,-1,3,2,1,-1,5,6,3,-1,7,27,3,-1,3,6,7,-1,0,1,2,-1,43,11,10,-1,10,4,43,-1,5,1,12,-1,1,0,12,-1,35,26,12,-1,43,4,12,-1,4,5,12,-1,72,28,9,-1,9,28,27,-1,27,7,9,-1,5,4,10,-1,10,6,5,-1,29,72,8,-1,26,35,14,-1,14,49,26,-1,35,0,15,-1,15,14,35,-1,17,16,18,-1,18,19,17,-1,16,27,28,-1,28,18,16,-1,13,2,16,-1,27,16,2,-1,2,3,27,-1,19,18,29,-1,29,8,19,-1,18,28,72,-1,72,29,18,-1,0,13,15,-1,21,20,23,-1,23,61,21,-1,20,22,24,-1,24,23,20,-1,22,17,19,-1,19,24,22,-1,20,21,49,-1,49,14,20,-1,22,20,14,-1,14,15,22,-1,15,17,22,-1,61,23,30,-1,30,25,61,-1,23,24,33,-1,33,30,23,-1,24,19,8,-1,8,33,24,-1,0,2,13,-1,15,13,17,-1,16,17,13,-1,68,69,32,-1,32,31,68,-1,30,33,32,-1,33,8,34,-1,33,34,31,-1,31,32,33,-1,32,69,25,-1,25,30,32,-1,12,0,35,-1,37,36,58,-1,58,38,37,-1,38,58,39,-1,40,39,58,-1,58,41,40,-1,51,36,37,-1,43,42,44,-1,44,11,43,-1,38,12,37,-1,37,12,51,-1,45,12,26,-1,43,12,42,-1,42,12,38,-1,73,47,56,-1,47,40,41,-1,41,56,47,-1,38,39,44,-1,44,42,38,-1,46,59,73,-1,26,49,48,-1,48,45,26,-1,45,48,50,-1,50,51,45,-1,54,53,52,-1,52,55,54,-1,55,52,56,-1,56,41,55,-1,57,55,36,-1,41,58,36,-1,36,55,41,-1,53,59,46,-1,46,52,53,-1,52,46,73,-1,73,56,52,-1,51,50,57,-1,21,61,60,-1,60,62,21,-1,62,60,63,-1,63,64,62,-1,64,63,53,-1,53,54,64,-1,62,48,49,-1,49,21,62,-1,64,50,48,-1,48,62,64,-1,50,64,54,-1,61,25,65,-1,65,60,61,-1,60,65,66,-1,66,63,60,-1,63,66,59,-1,59,53,63,-1,51,57,36,-1,50,54,57,-1,55,57,54,-1,68,67,70,-1,70,69,68,-1,65,70,66,-1,66,71,59,-1,66,70,67,-1,67,71,66,-1,70,65,25,-1,25,69,70,-1,12,45,51,-1,81,82,83,-1,81,83,84,-1,81,84,85,-1,85,86,87,-1,81,85,87,-1,88,89,90,-1,88,90,91,-1,87,88,91,-1,91,74,75,-1,91,75,76,-1,87,91,76,-1,87,76,77,-1,81,87,77,-1,81,77,78,-1,81,78,79,-1,81,79,80,-1,7,6,75,-1,75,74,7,-1,6,10,76,-1,76,75,6,-1,10,11,77,-1,77,76,10,-1,11,44,78,-1,78,77,11,-1,44,39,79,-1,79,78,44,-1,39,40,80,-1,80,79,39,-1,40,47,81,-1,81,80,40,-1,47,73,82,-1,82,81,47,-1,73,59,83,-1,83,82,73,-1,59,71,84,-1,84,83,59,-1,71,67,85,-1,85,84,71,-1,67,68,86,-1,86,85,67,-1,68,31,87,-1,87,86,68,-1,31,34,88,-1,88,87,31,-1,34,8,89,-1,89,88,34,-1,8,72,90,-1,90,89,8,-1,72,9,91,-1,91,90,72,-1,9,7,74,-1,74,91,9,-1]);
IndexedFaceSet338.creaseAngle = 3.14159;
IndexedFaceSet338.texCoordIndex = new MFInt32(new int[14,15,0,-1,0,16,14,-1,15,19,0,-1,21,10,11,-1,11,18,21,-1,5,2,1,-1,6,25,24,-1,24,4,6,-1,3,2,13,-1,2,5,13,-1,66,7,13,-1,6,4,17,-1,4,15,17,-1,20,9,23,-1,23,9,10,-1,10,21,23,-1,15,4,24,-1,24,19,15,-1,12,20,22,-1,48,47,26,-1,26,27,48,-1,47,49,28,-1,28,26,47,-1,31,32,29,-1,29,30,31,-1,32,53,54,-1,54,29,32,-1,33,50,32,-1,53,32,50,-1,50,51,53,-1,30,29,55,-1,55,56,30,-1,29,54,52,-1,52,55,29,-1,49,33,28,-1,36,41,40,-1,40,35,36,-1,37,39,38,-1,38,34,37,-1,39,31,30,-1,30,38,39,-1,42,36,43,-1,43,45,42,-1,39,37,26,-1,26,28,39,-1,28,31,39,-1,35,44,57,-1,57,46,35,-1,34,38,65,-1,65,58,34,-1,38,30,56,-1,56,65,38,-1,49,50,33,-1,28,33,31,-1,32,31,33,-1,62,63,64,-1,64,61,62,-1,57,65,64,-1,65,56,60,-1,65,60,61,-1,61,64,65,-1,64,63,59,-1,59,57,64,-1,13,8,66,-1,69,68,67,-1,67,70,69,-1,70,67,71,-1,74,73,72,-1,72,75,74,-1,76,78,77,-1,80,79,82,-1,82,81,80,-1,83,84,77,-1,77,84,76,-1,85,84,86,-1,80,87,79,-1,79,87,70,-1,132,90,89,-1,90,74,75,-1,75,89,90,-1,70,71,82,-1,82,79,70,-1,88,91,132,-1,94,93,92,-1,92,95,94,-1,95,92,96,-1,96,97,95,-1,100,99,98,-1,98,101,100,-1,101,98,102,-1,102,103,101,-1,104,101,105,-1,103,106,105,-1,105,101,103,-1,99,108,107,-1,107,98,99,-1,98,107,109,-1,109,102,98,-1,97,96,104,-1,112,111,110,-1,110,113,112,-1,116,115,114,-1,114,117,116,-1,117,114,99,-1,99,100,117,-1,120,119,118,-1,118,112,120,-1,117,96,92,-1,92,116,117,-1,96,117,100,-1,111,122,121,-1,121,123,111,-1,115,125,124,-1,124,114,115,-1,114,124,108,-1,108,99,114,-1,97,104,105,-1,96,100,104,-1,101,104,100,-1,127,126,129,-1,129,128,127,-1,121,129,124,-1,124,130,108,-1,124,129,126,-1,126,130,124,-1,129,121,131,-1,131,128,129,-1,84,85,133,-1,141,142,143,-1,141,143,144,-1,141,144,145,-1,145,146,147,-1,141,145,147,-1,148,149,150,-1,148,150,151,-1,147,148,151,-1,151,134,135,-1,151,135,136,-1,147,151,136,-1,147,136,137,-1,141,147,137,-1,141,137,138,-1,141,138,139,-1,141,139,140,-1,21,18,135,-1,135,134,21,-1,19,24,136,-1,136,135,19,-1,24,25,137,-1,137,136,24,-1,81,82,138,-1,138,137,81,-1,82,71,139,-1,139,138,82,-1,73,74,140,-1,140,139,73,-1,74,90,141,-1,141,140,74,-1,90,132,142,-1,142,141,90,-1,132,91,143,-1,143,142,132,-1,108,130,144,-1,144,143,108,-1,130,126,145,-1,145,144,130,-1,126,127,146,-1,146,145,126,-1,62,61,147,-1,147,146,62,-1,61,60,148,-1,148,147,61,-1,60,56,149,-1,149,148,60,-1,22,20,150,-1,150,149,22,-1,20,23,151,-1,151,150,20,-1,23,21,134,-1,134,151,23,-1]);
let Coordinate339 = browser.currentScene.createNode("Coordinate");
Coordinate339.point = new MFVec3f(new float[1.47,1.71,-1.15,2.016,1.688,0.0414,2.914,1.242,0.0931,3.187,0.3754,1.303,0.7806,1.128,1.368,1.573,1.389,0.8702,2.043,0.0045,3.089,2.245,0.1604,3.581,5.472,-0.1553,-1.692,3.805,0.0984,2.723,1.182,0.0045,2.765,0,0.0045,2.596,0,1.333,-0.0527,2.599,2.142,-1.646,0.9629,2.166,-3.392,2.035,2.193,-3.055,3.439,2.077,0.1272,3.953,1.215,-2.467,5.073,1.55,0.1272,4.655,0.2739,-2.02,1.032,-0.6843,-4.667,0,-0.6754,-4.802,2.39,-0.2981,-4.154,1.677,-4.028,-3.387,4.12,-2.512,-3.272,0,-3.532,-2.804,0,1.519,-1.61,2.982,1.02,1.941,4.42,0.7184,1.865,5.602,0.5099,-0.0537,1.811,-3.383,-2.67,1.811,-0.1592,-2.116,1.833,-2.424,-2.283,4.241,-2.424,-2.283,4.225,-0.1553,-1.692,0.6928,1.497,-1.503,-2.914,1.242,0.0931,-2.016,1.688,0.0414,-1.573,1.389,0.8702,-2.043,0.0045,3.089,-2.245,0.1604,3.581,-2.982,1.02,1.941,-0.7806,1.128,1.368,0,1.119,1.49,-1.182,0.0045,2.765,-0.6928,1.497,-1.503,-5.602,0.5099,-0.0537,-3.805,0.0984,2.723,-0.9629,2.166,-3.392,0,2.143,-3.557,-2.035,2.193,-3.055,-1.47,1.71,-1.15,-5.073,1.55,0.1272,-4.655,0.2739,-2.02,-3.953,1.215,-2.467,-3.439,2.077,0.1272,-4.42,0.7184,1.865,-2.599,2.142,-1.646,-3.187,0.3754,1.303,-5.472,-0.1553,-1.692,-1.677,-4.028,-3.387,0,-4.35,-3.506,-1.032,-0.6843,-4.667,-4.12,-2.512,-3.272,-2.39,-0.2981,-4.154,-1.811,-3.383,-2.67,-4.241,-2.424,-2.283,-1.811,-0.1592,-2.116,0,-0.1592,-2.25,0,-2.424,-2.283,-1.833,-2.424,-2.283,-4.225,-0.1553,-1.692,5.086,-0.0906,1.771,-5.086,-0.0906,1.771,2.337,-0.4422,3.448,2.182,-0.4422,3.182,1.228,-0.4422,2.736,0,-0.4422,2.56,-1.228,-0.4422,2.736,-2.182,-0.4422,3.182,-2.337,-0.4422,3.448,-3.706,-0.4422,2.653,-4.913,-0.4422,1.734,-5.268,-0.4422,-1.51,-4.209,-0.4422,-1.51,-1.789,-0.4422,-1.935,0,-0.4422,-2.068,1.789,-0.4422,-1.935,4.209,-0.4422,-1.51,5.268,-0.4422,-1.51,4.913,-0.4422,1.734,3.706,-0.4422,2.653]);
IndexedFaceSet338.coord = Coordinate339;

let TextureCoordinate340 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate340.point = new MFVec2f(new float[0.4416,0.6747,0.4535,0.6485,0.4483,0.6438,0.4499,0.6371,0.4594,0.6763,0.4399,0.6472,0.4645,0.6783,0.4385,0.6236,0.4279,0.6258,0.1412,0.5207,0.1108,0.5655,0.1073,0.5839,0.1708,0.4854,0.4376,0.6345,0.4528,0.6648,0.4548,0.6714,0.4459,0.6652,0.4669,0.6678,0.0786,0.5849,0.4476,0.6884,0.1474,0.4856,0.0865,0.5614,0.1963,0.4863,0.1227,0.5144,0.4539,0.6879,0.4621,0.6889,0.2661,0.5914,0.3505,0.5919,0.241,0.592,0.1724,0.5255,0.2089,0.5196,0.2133,0.556,0.1645,0.5709,0.2067,0.5908,0.2708,0.4736,0.347,0.4317,0.3616,0.5328,0.2733,0.5359,0.238,0.493,0.249,0.5451,0.3477,0.431,0.3623,0.5333,0.3623,0.5333,0.3505,0.5919,0.3477,0.431,0.3511,0.5932,0.3206,0.4193,0.2505,0.5754,0.3554,0.5911,0.2112,0.5805,0.1632,0.5887,0.1073,0.5839,0.1474,0.4856,0.1108,0.5655,0.1412,0.5207,0.1708,0.4854,0.1963,0.4863,0.3223,0.4192,0.2638,0.4568,0.3206,0.4193,0.1963,0.4863,0.1963,0.4863,0.1963,0.4863,0.2252,0.4828,0.2252,0.4828,0.2252,0.4828,0.4337,0.6239,0.4689,0.6806,0.4689,0.6702,0.4627,0.667,0.4583,0.6722,0.4578,0.6906,0.1073,0.5839,0.0786,0.5849,0.0865,0.5614,0.1108,0.5655,0.4514,0.6379,0.4463,0.6454,0.4498,0.6514,0.4521,0.6748,0.4466,0.6744,0.4444,0.685,0.4523,0.6875,0.4395,0.6457,0.4393,0.633,0.4295,0.6275,0.4284,0.6322,0.4488,0.6639,0.1708,0.4854,0.1412,0.5207,0.1227,0.5144,0.1963,0.4863,0.2661,0.5914,0.3505,0.5919,0.3554,0.5911,0.2505,0.5754,0.241,0.592,0.2112,0.5805,0.1724,0.5255,0.2089,0.5196,0.2133,0.556,0.1645,0.5709,0.1412,0.5207,0.1108,0.5655,0.2067,0.5908,0.1632,0.5887,0.1073,0.5839,0.1708,0.4854,0.1963,0.4863,0.1474,0.4856,0.3477,0.431,0.347,0.4317,0.3616,0.5328,0.3623,0.5333,0.238,0.493,0.2708,0.4736,0.2733,0.5359,0.249,0.5451,0.3505,0.5919,0.3511,0.5932,0.3623,0.5333,0.3223,0.4192,0.3206,0.4193,0.3477,0.431,0.2252,0.4828,0.2638,0.4568,0.1963,0.4863,0.1963,0.4863,0.2252,0.4828,0.2252,0.4828,0.1963,0.4863,0.3206,0.4193,0.1474,0.4856,0.4323,0.622,0.0865,0.5614,0.0786,0.5849,0.4539,0.6879,0.4621,0.6889,0.4523,0.6875,0.4578,0.6906,0.0865,0.5614,0.1227,0.5144,0.1474,0.4856,0.1474,0.4856,0.1227,0.5144,0.1963,0.4863,0.1963,0.4863,0.1963,0.4863,0.1963,0.4863,0.1999,0.4849,0.1421,0.507,0.1227,0.5144]);
IndexedFaceSet338.texCoord = TextureCoordinate340;

Shape334.geometry = IndexedFaceSet338;

Transform333.child = new undefined();

Transform333.child[0] = Shape334;

HAnimSegment332.children = new MFNode();

HAnimSegment332.children[0] = Transform333;

HAnimJoint331.children = new MFNode();

HAnimJoint331.children[0] = HAnimSegment332;

let HAnimJoint341 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint341.name = "vc7";
HAnimJoint341.DEF = "hanim_vc7";
HAnimJoint341.center = new SFVec3f(new float[0,54.450001,-0.6695]);
HAnimJoint341.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint341.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment342 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment342.name = "c7";
HAnimSegment342.DEF = "hanim_c7";
let Transform343 = browser.currentScene.createNode("Transform");
Transform343.translation = new SFVec3f(new float[0,54.450001,-0.6695]);
let Shape344 = browser.currentScene.createNode("Shape");
let Appearance345 = browser.currentScene.createNode("Appearance");
let Material346 = browser.currentScene.createNode("Material");
Material346.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance345.material = Material346;

let ImageTexture347 = browser.currentScene.createNode("ImageTexture");
ImageTexture347.USE = "JinLOA3TextureAtlas";
Appearance345.texture = ImageTexture347;

Shape344.appearance = Appearance345;

let IndexedFaceSet348 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet348.coordIndex = new MFInt32(new int[5,6,33,-1,33,28,5,-1,34,32,1,-1,1,7,34,-1,30,34,7,-1,7,8,30,-1,28,29,11,-1,11,5,28,-1,29,35,10,-1,10,11,29,-1,14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,1,0,13,-1,13,12,1,-1,0,2,14,-1,14,13,0,-1,2,3,15,-1,15,14,2,-1,3,4,16,-1,16,15,3,-1,4,6,17,-1,17,16,4,-1,6,5,18,-1,18,17,6,-1,5,11,19,-1,19,18,5,-1,11,10,20,-1,20,19,11,-1,10,9,21,-1,21,20,10,-1,9,8,22,-1,22,21,9,-1,8,7,23,-1,23,22,8,-1,7,1,12,-1,12,23,7,-1,0,1,32,-1,32,24,0,-1,2,0,24,-1,24,25,2,-1,3,2,25,-1,25,26,3,-1,4,3,26,-1,26,27,4,-1,6,4,27,-1,27,33,6,-1,8,9,31,-1,31,30,8,-1,9,10,35,-1,35,31,9,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,24,32,37,-1,37,36,24,-1,32,34,38,-1,38,37,32,-1,34,30,39,-1,39,38,34,-1,30,31,40,-1,40,39,30,-1,31,35,41,-1,41,40,31,-1,35,29,42,-1,42,41,35,-1,29,28,43,-1,43,42,29,-1,28,33,44,-1,44,43,28,-1,33,27,45,-1,45,44,33,-1,27,26,46,-1,46,45,27,-1,26,25,47,-1,47,46,26,-1,25,24,36,-1,36,47,25,-1]);
IndexedFaceSet348.creaseAngle = 3.14159;
IndexedFaceSet348.texCoordIndex = new MFInt32(new int[5,6,33,-1,33,28,5,-1,34,32,1,-1,1,7,34,-1,30,34,7,-1,7,8,30,-1,28,29,11,-1,11,5,28,-1,29,35,10,-1,10,11,29,-1,14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,1,0,13,-1,13,12,1,-1,0,2,14,-1,14,13,0,-1,2,3,15,-1,15,14,2,-1,3,4,16,-1,16,15,3,-1,4,6,17,-1,17,16,4,-1,6,5,18,-1,18,17,6,-1,5,11,19,-1,19,18,5,-1,11,10,20,-1,20,19,11,-1,10,9,21,-1,21,20,10,-1,9,8,22,-1,22,21,9,-1,8,7,23,-1,23,22,8,-1,7,1,12,-1,12,23,7,-1,0,1,32,-1,32,24,0,-1,2,0,24,-1,24,25,2,-1,3,2,25,-1,25,26,3,-1,4,3,26,-1,26,27,4,-1,6,4,27,-1,27,33,6,-1,8,9,31,-1,31,30,8,-1,9,10,35,-1,35,31,9,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,24,32,37,-1,37,36,24,-1,32,34,38,-1,38,37,32,-1,34,30,39,-1,39,38,34,-1,30,31,40,-1,40,39,30,-1,31,35,41,-1,41,40,31,-1,35,29,42,-1,42,41,35,-1,29,28,43,-1,43,42,29,-1,28,33,44,-1,44,43,28,-1,33,27,45,-1,45,44,33,-1,27,26,46,-1,46,45,27,-1,26,25,47,-1,47,46,26,-1,25,24,36,-1,36,47,25,-1]);
let Coordinate349 = browser.currentScene.createNode("Coordinate");
Coordinate349.point = new MFVec3f(new float[0.5369,0.1071,-1.124,0,0.1694,-1.195,1.139,0.1756,-0.8504,1.562,0.1474,0.0729,1.219,-0.0249,0.7152,0,-0.3558,1.195,0.605,-0.345,1.101,-0.5369,0.1071,-1.124,-1.139,0.1755,-0.8504,-1.562,0.1474,0.0729,-1.219,-0.0249,0.7153,-0.605,-0.345,1.101,0,-0.711,-1.028,0.4943,-0.7203,-0.9649,0.999,-0.7546,-0.733,1.342,-0.8648,0.0135,1.076,-0.9372,0.5038,0.5328,-0.9856,0.832,0,-0.9977,0.9139,-0.5328,-0.9856,0.832,-1.076,-0.9372,0.5038,-1.342,-0.8648,0.0136,-0.999,-0.7546,-0.733,-0.4943,-0.7203,-0.9649,0.5369,0.5357,-1.124,1.139,0.5357,-0.8504,1.562,0.5357,0.0729,1.219,0.5357,0.7153,0,0.5357,1.195,-0.605,0.5357,1.101,-1.139,0.5357,-0.8504,-1.562,0.5357,0.0729,0,0.5357,-1.195,0.605,0.5357,1.101,-0.5369,0.5357,-1.124,-1.219,0.5357,0.7153,0.4947,0.7335,-0.9348,0,0.7335,-1,-0.4947,0.7335,-0.9348,-1.008,0.7335,-0.7016,-1.361,0.7335,0.069,-1.091,0.7335,0.5735,-0.5462,0.7335,0.9162,0,0.7335,1.001,0.5462,0.7335,0.9162,1.091,0.7335,0.5735,1.361,0.7335,0.0689,1.008,0.7335,-0.7016]);
IndexedFaceSet348.coord = Coordinate349;

let TextureCoordinate350 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate350.point = new MFVec2f(new float[0.3995,0.6285,0.3906,0.6293,0.4094,0.632,0.4164,0.6316,0.4107,0.6267,0.3906,0.6224,0.4006,0.6225,0.3818,0.6285,0.3719,0.632,0.3649,0.6316,0.3706,0.6267,0.3807,0.6225,0.3906,0.6293,0.3995,0.6285,0.4094,0.632,0.4164,0.6316,0.4107,0.6267,0.4006,0.6225,0.3906,0.6224,0.3807,0.6225,0.3706,0.6267,0.3649,0.6316,0.3719,0.632,0.3818,0.6285,0.3995,0.6534,0.4094,0.6549,0.4164,0.6547,0.4107,0.6527,0.3906,0.6475,0.3807,0.6518,0.3719,0.6549,0.3649,0.6547,0.3906,0.6538,0.4006,0.6518,0.3818,0.6534,0.3706,0.6527,0.3995,0.6534,0.3906,0.6538,0.3818,0.6534,0.3719,0.6549,0.3649,0.6547,0.3706,0.6527,0.3807,0.6518,0.3906,0.6475,0.4006,0.6518,0.4107,0.6527,0.4164,0.6547,0.4094,0.6549]);
IndexedFaceSet348.texCoord = TextureCoordinate350;

Shape344.geometry = IndexedFaceSet348;

Transform343.child = new undefined();

Transform343.child[0] = Shape344;

HAnimSegment342.children = new MFNode();

HAnimSegment342.children[0] = Transform343;

HAnimJoint341.children = new MFNode();

HAnimJoint341.children[0] = HAnimSegment342;

let HAnimJoint351 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint351.name = "vc6";
HAnimJoint351.DEF = "hanim_vc6";
HAnimJoint351.center = new SFVec3f(new float[0,54.98,-0.6695]);
HAnimJoint351.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint351.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment352 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment352.name = "c6";
HAnimSegment352.DEF = "hanim_c6";
let Transform353 = browser.currentScene.createNode("Transform");
Transform353.translation = new SFVec3f(new float[0,54.98,-0.6695]);
let Shape354 = browser.currentScene.createNode("Shape");
let Appearance355 = browser.currentScene.createNode("Appearance");
let Material356 = browser.currentScene.createNode("Material");
Material356.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance355.material = Material356;

let ImageTexture357 = browser.currentScene.createNode("ImageTexture");
ImageTexture357.USE = "JinLOA3TextureAtlas";
Appearance355.texture = ImageTexture357;

Shape354.appearance = Appearance355;

let IndexedFaceSet358 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet358.coordIndex = new MFInt32(new int[12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]);
IndexedFaceSet358.creaseAngle = 3.14159;
IndexedFaceSet358.texCoordIndex = new MFInt32(new int[12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]);
let Coordinate359 = browser.currentScene.createNode("Coordinate");
Coordinate359.point = new MFVec3f(new float[0.5369,0.5581,-1.124,1.139,0.5581,-0.8504,1.562,0.5581,0.0729,1.219,0.5581,0.7153,0,0.5581,1.195,-0.605,0.5581,1.101,-1.139,0.5581,-0.8504,-1.562,0.5581,0.0729,0,0.5581,-1.195,0.605,0.5581,1.101,-0.5369,0.5581,-1.124,-1.219,0.5581,0.7153,0.5369,0.0038,-1.124,1.139,0.0038,-0.8504,1.562,0.0038,0.0729,1.219,0.0038,0.7153,0,0.0038,1.195,-0.605,0.0038,1.101,-1.139,0.0038,-0.8504,-1.562,0.0038,0.0729,0,0.0038,-1.195,0.605,0.0038,1.101,-0.5369,0.0038,-1.124,-1.219,0.0038,0.7153,0.4947,0.756,-0.9348,0,0.756,-1,-0.4947,0.756,-0.9348,-1.008,0.756,-0.7016,-1.361,0.756,0.069,-1.091,0.756,0.5735,-0.5462,0.756,0.9162,0,0.756,1.001,0.5462,0.756,0.9162,1.091,0.756,0.5735,1.361,0.756,0.069,1.008,0.756,-0.7016,0,-0.2355,-1,0.4947,-0.2355,-0.9348,1.008,-0.2355,-0.7016,1.361,-0.2355,0.0689,1.091,-0.2355,0.5735,0.5462,-0.2355,0.9162,0,-0.2355,1.001,-0.5462,-0.2355,0.9162,-1.091,-0.2355,0.5735,-1.361,-0.2355,0.069,-1.008,-0.2355,-0.7016,-0.4947,-0.2355,-0.9348]);
IndexedFaceSet358.coord = Coordinate359;

let TextureCoordinate360 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate360.point = new MFVec2f(new float[0.3995,0.6565,0.4094,0.6578,0.4164,0.6576,0.4107,0.6559,0.3906,0.6507,0.3807,0.6555,0.3719,0.6578,0.3649,0.6576,0.3906,0.6568,0.4006,0.6555,0.3818,0.6565,0.3706,0.6559,0.3995,0.6534,0.4094,0.6549,0.4164,0.6547,0.4107,0.6527,0.3906,0.6475,0.3807,0.6518,0.3719,0.6549,0.3649,0.6547,0.3906,0.6538,0.4006,0.6518,0.3818,0.6534,0.3706,0.6527,0.3995,0.6565,0.3906,0.6568,0.3818,0.6565,0.3719,0.6578,0.3649,0.6576,0.3706,0.6559,0.3807,0.6555,0.3906,0.6507,0.4006,0.6555,0.4107,0.6559,0.4164,0.6576,0.4094,0.6578,0.3906,0.6538,0.3995,0.6534,0.4094,0.6549,0.4164,0.6547,0.4107,0.6527,0.4006,0.6518,0.3906,0.6475,0.3807,0.6518,0.3706,0.6527,0.3649,0.6547,0.3719,0.6549,0.3818,0.6534]);
IndexedFaceSet358.texCoord = TextureCoordinate360;

Shape354.geometry = IndexedFaceSet358;

Transform353.child = new undefined();

Transform353.child[0] = Shape354;

HAnimSegment352.children = new MFNode();

HAnimSegment352.children[0] = Transform353;

HAnimJoint351.children = new MFNode();

HAnimJoint351.children[0] = HAnimSegment352;

let HAnimJoint361 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint361.name = "vc5";
HAnimJoint361.DEF = "hanim_vc5";
HAnimJoint361.center = new SFVec3f(new float[0,55.540001,-0.6695]);
HAnimJoint361.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint361.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment362 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment362.name = "c5";
HAnimSegment362.DEF = "hanim_c5";
let Transform363 = browser.currentScene.createNode("Transform");
Transform363.translation = new SFVec3f(new float[0,55.540001,-0.6695]);
let Shape364 = browser.currentScene.createNode("Shape");
let Appearance365 = browser.currentScene.createNode("Appearance");
let Material366 = browser.currentScene.createNode("Material");
Material366.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance365.material = Material366;

let ImageTexture367 = browser.currentScene.createNode("ImageTexture");
ImageTexture367.USE = "JinLOA3TextureAtlas";
Appearance365.texture = ImageTexture367;

Shape364.appearance = Appearance365;

let IndexedFaceSet368 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet368.coordIndex = new MFInt32(new int[12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]);
IndexedFaceSet368.creaseAngle = 3.14159;
IndexedFaceSet368.texCoordIndex = new MFInt32(new int[12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]);
let Coordinate369 = browser.currentScene.createNode("Coordinate");
Coordinate369.point = new MFVec3f(new float[0.5369,0.5456,-1.124,1.139,0.5456,-0.8504,1.562,0.5456,0.0729,1.219,0.5456,0.7153,0,0.5456,1.195,-0.605,0.5456,1.101,-1.139,0.5456,-0.8504,-1.562,0.5456,0.0729,0,0.5456,-1.195,0.605,0.5456,1.101,-0.5369,0.5456,-1.124,-1.219,0.5456,0.7153,0.5369,0.0012,-1.124,1.139,0.0012,-0.8504,1.562,0.0012,0.0729,1.219,0.0012,0.7153,0,0.0012,1.195,-0.605,0.0012,1.101,-1.139,0.0012,-0.8504,-1.562,0.0012,0.0729,0,0.0012,-1.195,0.605,0.0012,1.101,-0.5369,0.0012,-1.124,-1.219,0.0012,0.7153,0.4947,0.7434,-0.9348,0,0.7434,-1,-0.4947,0.7434,-0.9348,-1.008,0.7434,-0.7016,-1.361,0.7434,0.069,-1.091,0.7434,0.5735,-0.5462,0.7434,0.9162,0,0.7434,1.001,0.5462,0.7434,0.9162,1.091,0.7434,0.5735,1.361,0.7434,0.069,1.008,0.7434,-0.7016,0,-0.2282,-1,0.4947,-0.2282,-0.9348,1.008,-0.2282,-0.7016,1.361,-0.2282,0.069,1.091,-0.2282,0.5735,0.5462,-0.2282,0.9162,0,-0.2282,1.001,-0.5462,-0.2282,0.9162,-1.091,-0.2282,0.5735,-1.361,-0.2282,0.069,-1.008,-0.2282,-0.7016,-0.4947,-0.2282,-0.9348]);
IndexedFaceSet368.coord = Coordinate369;

let TextureCoordinate370 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate370.point = new MFVec2f(new float[0.3995,0.6596,0.4094,0.6606,0.4164,0.6605,0.4107,0.6591,0.3906,0.6538,0.3807,0.6592,0.3719,0.6606,0.3649,0.6605,0.3906,0.6599,0.4006,0.6592,0.3818,0.6596,0.3706,0.6591,0.3995,0.6565,0.4094,0.6578,0.4164,0.6576,0.4107,0.6559,0.3906,0.6507,0.3807,0.6555,0.3719,0.6578,0.3649,0.6576,0.3906,0.6568,0.4006,0.6555,0.3818,0.6565,0.3706,0.6559,0.3995,0.6596,0.3906,0.6599,0.3818,0.6596,0.3719,0.6606,0.3649,0.6605,0.3706,0.6591,0.3807,0.6592,0.3906,0.6538,0.4006,0.6592,0.4107,0.6591,0.4164,0.6605,0.4094,0.6606,0.3906,0.6568,0.3995,0.6565,0.4094,0.6578,0.4164,0.6576,0.4107,0.6559,0.4006,0.6555,0.3906,0.6507,0.3807,0.6555,0.3706,0.6559,0.3649,0.6576,0.3719,0.6578,0.3818,0.6565]);
IndexedFaceSet368.texCoord = TextureCoordinate370;

Shape364.geometry = IndexedFaceSet368;

Transform363.child = new undefined();

Transform363.child[0] = Shape364;

HAnimSegment362.children = new MFNode();

HAnimSegment362.children[0] = Transform363;

HAnimJoint361.children = new MFNode();

HAnimJoint361.children[0] = HAnimSegment362;

let HAnimJoint371 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint371.name = "vc4";
HAnimJoint371.DEF = "hanim_vc4";
HAnimJoint371.center = new SFVec3f(new float[0,56.080002,-0.6695]);
HAnimJoint371.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint371.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment372 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment372.name = "c4";
HAnimSegment372.DEF = "hanim_c4";
let Transform373 = browser.currentScene.createNode("Transform");
Transform373.translation = new SFVec3f(new float[0,56.080002,-0.6695]);
let Shape374 = browser.currentScene.createNode("Shape");
let Appearance375 = browser.currentScene.createNode("Appearance");
let Material376 = browser.currentScene.createNode("Material");
Material376.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance375.material = Material376;

let ImageTexture377 = browser.currentScene.createNode("ImageTexture");
ImageTexture377.USE = "JinLOA3TextureAtlas";
Appearance375.texture = ImageTexture377;

Shape374.appearance = Appearance375;

let IndexedFaceSet378 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet378.coordIndex = new MFInt32(new int[12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]);
IndexedFaceSet378.creaseAngle = 3.14159;
IndexedFaceSet378.texCoordIndex = new MFInt32(new int[12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]);
let Coordinate379 = browser.currentScene.createNode("Coordinate");
Coordinate379.point = new MFVec3f(new float[0.5369,0.5776,-1.124,1.139,0.5776,-0.8504,1.562,0.5776,0.0729,1.219,0.5776,0.7153,0,0.5776,1.195,-0.605,0.5776,1.101,-1.139,0.5776,-0.8504,-1.562,0.5776,0.0729,0,0.5776,-1.195,0.605,0.5776,1.101,-0.5369,0.5776,-1.124,-1.219,0.5776,0.7153,0.5369,0.0017,-1.124,1.139,0.0017,-0.8504,1.562,0.0017,0.0729,1.219,0.0017,0.7153,0,0.0017,1.195,-0.605,0.0017,1.101,-1.139,0.0017,-0.8504,-1.562,0.0017,0.0729,0,0.0017,-1.195,0.605,0.0017,1.101,-0.5369,0.0017,-1.124,-1.219,0.0017,0.7153,0.4947,0.7754,-0.9348,0,0.7754,-1,-0.4947,0.7754,-0.9348,-1.008,0.7754,-0.7016,-1.361,0.7754,0.069,-1.091,0.7754,0.5735,-0.5462,0.7754,0.9162,0,0.7754,1.001,0.5462,0.7754,0.9162,1.091,0.7754,0.5735,1.361,0.7754,0.069,1.008,0.7754,-0.7016,0,-0.2388,-1,0.4947,-0.2388,-0.9348,1.008,-0.2388,-0.7016,1.361,-0.2388,0.069,1.091,-0.2388,0.5735,0.5462,-0.2388,0.9162,0,-0.2388,1.001,-0.5462,-0.2388,0.9162,-1.091,-0.2388,0.5735,-1.361,-0.2388,0.069,-1.008,-0.2388,-0.7016,-0.4947,-0.2388,-0.9348]);
IndexedFaceSet378.coord = Coordinate379;

let TextureCoordinate380 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate380.point = new MFVec2f(new float[0.3995,0.6628,0.4094,0.6635,0.4164,0.6634,0.4107,0.6624,0.3906,0.657,0.3807,0.6628,0.3719,0.6635,0.3649,0.6634,0.3906,0.6629,0.4006,0.6628,0.3818,0.6628,0.3706,0.6624,0.3995,0.6596,0.4094,0.6606,0.4164,0.6605,0.4107,0.6591,0.3906,0.6538,0.3807,0.6592,0.3719,0.6606,0.3649,0.6605,0.3906,0.6599,0.4006,0.6592,0.3818,0.6596,0.3706,0.6591,0.3995,0.6628,0.3906,0.6629,0.3818,0.6628,0.3719,0.6635,0.3649,0.6634,0.3706,0.6624,0.3807,0.6628,0.3906,0.657,0.4006,0.6628,0.4107,0.6624,0.4164,0.6634,0.4094,0.6635,0.3906,0.6599,0.3995,0.6596,0.4094,0.6606,0.4164,0.6605,0.4107,0.6591,0.4006,0.6592,0.3906,0.6538,0.3807,0.6592,0.3706,0.6591,0.3649,0.6605,0.3719,0.6606,0.3818,0.6596]);
IndexedFaceSet378.texCoord = TextureCoordinate380;

Shape374.geometry = IndexedFaceSet378;

Transform373.child = new undefined();

Transform373.child[0] = Shape374;

HAnimSegment372.children = new MFNode();

HAnimSegment372.children[0] = Transform373;

HAnimJoint371.children = new MFNode();

HAnimJoint371.children[0] = HAnimSegment372;

let HAnimJoint381 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint381.name = "vc3";
HAnimJoint381.DEF = "hanim_vc3";
HAnimJoint381.center = new SFVec3f(new float[0,56.66,-0.6695]);
HAnimJoint381.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint381.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment382 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment382.name = "c3";
HAnimSegment382.DEF = "hanim_c3";
let Transform383 = browser.currentScene.createNode("Transform");
Transform383.translation = new SFVec3f(new float[0,56.66,-0.6695]);
let Shape384 = browser.currentScene.createNode("Shape");
let Appearance385 = browser.currentScene.createNode("Appearance");
let Material386 = browser.currentScene.createNode("Material");
Material386.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance385.material = Material386;

let ImageTexture387 = browser.currentScene.createNode("ImageTexture");
ImageTexture387.USE = "JinLOA3TextureAtlas";
Appearance385.texture = ImageTexture387;

Shape384.appearance = Appearance385;

let IndexedFaceSet388 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet388.coordIndex = new MFInt32(new int[8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]);
IndexedFaceSet388.creaseAngle = 3.14159;
IndexedFaceSet388.texCoordIndex = new MFInt32(new int[8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]);
let Coordinate389 = browser.currentScene.createNode("Coordinate");
Coordinate389.point = new MFVec3f(new float[0.5369,0.5152,-1.124,1.139,0.5152,-0.8504,1.562,0.5152,0.0729,1.219,0.5152,0.7153,0,0.5152,1.195,-0.605,0.5152,1.101,-1.139,0.5152,-0.8504,-1.562,0.5152,0.0729,0,0.5152,-1.195,0.605,0.5152,1.101,-0.5369,0.5152,-1.124,-1.219,0.5152,0.7153,0.5369,0.0015,-1.124,1.139,0.0015,-0.8504,1.562,0.0015,0.0729,1.219,0.0015,0.7153,0,0.0015,1.195,-0.605,0.0015,1.101,-1.139,0.0015,-0.8504,-1.562,0.0015,0.0729,0,0.0015,-1.195,0.605,0.0015,1.101,-0.5369,0.0015,-1.124,-1.219,0.0015,0.7153,0.4947,0.7138,-0.9348,0,0.7138,-1,-0.4947,0.7138,-0.9348,-1.008,0.7138,-0.7016,-1.361,0.7138,0.069,-1.091,0.7138,0.5735,-0.5462,0.7138,0.9162,0,0.7138,1.001,0.5462,0.7138,0.9162,1.091,0.7138,0.5735,1.361,0.7138,0.069,1.008,0.7138,-0.7016,0,-0.2398,-1,0.4947,-0.2398,-0.9348,1.008,-0.2398,-0.7016,1.361,-0.2398,0.069,1.091,-0.2398,0.5735,0.5462,-0.2398,0.9162,0,-0.2398,1.001,-0.5462,-0.2398,0.9162,-1.091,-0.2398,0.5735,-1.361,-0.2398,0.069,-1.008,-0.2398,-0.7016,-0.4947,-0.2398,-0.9348]);
IndexedFaceSet388.coord = Coordinate389;

let TextureCoordinate390 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate390.point = new MFVec2f(new float[0.3995,0.6659,0.4094,0.6664,0.4164,0.6663,0.4107,0.6656,0.3906,0.6601,0.3807,0.6665,0.3719,0.6664,0.3649,0.6663,0.3906,0.666,0.4006,0.6665,0.3818,0.6659,0.3706,0.6656,0.3995,0.6628,0.4094,0.6635,0.4164,0.6634,0.4107,0.6624,0.3906,0.657,0.3807,0.6628,0.3719,0.6635,0.3649,0.6634,0.3906,0.6629,0.4006,0.6628,0.3818,0.6628,0.3706,0.6624,0.3995,0.6659,0.3906,0.666,0.3818,0.6659,0.3719,0.6664,0.3649,0.6663,0.3706,0.6656,0.3807,0.6665,0.3906,0.6601,0.4006,0.6665,0.4107,0.6656,0.4164,0.6663,0.4094,0.6664,0.3906,0.6629,0.3995,0.6628,0.4094,0.6635,0.4164,0.6634,0.4107,0.6624,0.4006,0.6628,0.3906,0.657,0.3807,0.6628,0.3706,0.6624,0.3649,0.6634,0.3719,0.6635,0.3818,0.6628]);
IndexedFaceSet388.texCoord = TextureCoordinate390;

Shape384.geometry = IndexedFaceSet388;

Transform383.child = new undefined();

Transform383.child[0] = Shape384;

HAnimSegment382.children = new MFNode();

HAnimSegment382.children[0] = Transform383;

HAnimJoint381.children = new MFNode();

HAnimJoint381.children[0] = HAnimSegment382;

let HAnimJoint391 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint391.name = "vc2";
HAnimJoint391.DEF = "hanim_vc2";
HAnimJoint391.center = new SFVec3f(new float[0,57.169998,-0.6695]);
HAnimJoint391.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint391.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment392 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment392.name = "c2";
HAnimSegment392.DEF = "hanim_c2";
let Transform393 = browser.currentScene.createNode("Transform");
Transform393.translation = new SFVec3f(new float[0,57.169998,-0.6695]);
let Shape394 = browser.currentScene.createNode("Shape");
let Appearance395 = browser.currentScene.createNode("Appearance");
let Material396 = browser.currentScene.createNode("Material");
Material396.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance395.material = Material396;

let ImageTexture397 = browser.currentScene.createNode("ImageTexture");
ImageTexture397.USE = "JinLOA3TextureAtlas";
Appearance395.texture = ImageTexture397;

Shape394.appearance = Appearance395;

let IndexedFaceSet398 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet398.coordIndex = new MFInt32(new int[14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,0,1,13,-1,13,12,0,-1,1,7,14,-1,14,13,1,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,6,19,-1,19,18,11,-1,6,5,20,-1,20,19,6,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,12,-1,12,23,2,-1,1,0,24,-1,24,32,1,-1,0,2,25,-1,25,24,0,-1,2,3,26,-1,26,25,2,-1,3,4,27,-1,27,26,3,-1,4,5,33,-1,33,27,4,-1,9,8,30,-1,30,31,9,-1,10,9,31,-1,31,35,10,-1,5,6,28,-1,28,33,5,-1,7,1,32,-1,32,34,7,-1,8,7,34,-1,34,30,8,-1,6,11,29,-1,29,28,6,-1,11,10,35,-1,35,29,11,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,32,24,37,-1,37,36,32,-1,24,25,38,-1,38,37,24,-1,25,26,39,-1,39,38,25,-1,26,27,40,-1,40,39,26,-1,27,33,41,-1,41,40,27,-1,33,28,42,-1,42,41,33,-1,28,29,43,-1,43,42,28,-1,29,35,44,-1,44,43,29,-1,35,31,45,-1,45,44,35,-1,31,30,46,-1,46,45,31,-1,30,34,47,-1,47,46,30,-1,34,32,36,-1,36,47,34,-1]);
IndexedFaceSet398.creaseAngle = 3.14159;
IndexedFaceSet398.texCoordIndex = new MFInt32(new int[14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,0,1,13,-1,13,12,0,-1,1,7,14,-1,14,13,1,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,6,19,-1,19,18,11,-1,6,5,20,-1,20,19,6,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,12,-1,12,23,2,-1,1,0,24,-1,24,32,1,-1,0,2,25,-1,25,24,0,-1,2,3,26,-1,26,25,2,-1,3,4,27,-1,27,26,3,-1,4,5,33,-1,33,27,4,-1,9,8,30,-1,30,31,9,-1,10,9,31,-1,31,35,10,-1,5,6,28,-1,28,33,5,-1,7,1,32,-1,32,34,7,-1,8,7,34,-1,34,30,8,-1,6,11,29,-1,29,28,6,-1,11,10,35,-1,35,29,11,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,32,24,37,-1,37,36,32,-1,24,25,38,-1,38,37,24,-1,25,26,39,-1,39,38,25,-1,26,27,40,-1,40,39,26,-1,27,33,41,-1,41,40,27,-1,33,28,42,-1,42,41,33,-1,28,29,43,-1,43,42,28,-1,29,35,44,-1,44,43,29,-1,35,31,45,-1,45,44,35,-1,31,30,46,-1,46,45,31,-1,30,34,47,-1,47,46,30,-1,34,32,36,-1,36,47,34,-1]);
let Coordinate399 = browser.currentScene.createNode("Coordinate");
Coordinate399.point = new MFVec3f(new float[0.5369,0.5216,-1.124,0,0.5216,-1.195,1.139,0.5216,-0.8504,1.562,0.5216,0.073,1.219,0.5216,0.7153,0.605,0.5216,1.101,0,0.5216,1.195,-0.5369,0.5216,-1.124,-1.139,0.5216,-0.8504,-1.562,0.5216,0.0729,-1.219,0.5216,0.7153,-0.605,0.5216,1.101,0.4798,0.7591,-0.9247,0,0.7591,-0.9883,-0.4798,0.7591,-0.9247,-0.9844,0.7591,-0.6953,-1.333,0.7591,0.066,-1.064,0.7591,0.5706,-0.5317,0.7591,0.9052,0,0.7591,0.9877,0.5317,0.7591,0.9052,1.064,0.7591,0.5706,1.333,0.7591,0.066,0.9844,0.7591,-0.6953,0.5369,0.0018,-1.124,1.139,0.0018,-0.8504,1.562,0.0018,0.073,1.219,0.0018,0.7153,0,0.0018,1.195,-0.605,0.0018,1.101,-1.139,0.0018,-0.8504,-1.562,0.0018,0.0729,0,0.0018,-1.195,0.605,0.0018,1.101,-0.5369,0.0018,-1.124,-1.219,0.0018,0.7153,0,-0.2146,-1,0.4947,-0.2146,-0.9348,1.008,-0.2146,-0.7016,1.361,-0.2146,0.069,1.091,-0.2146,0.5735,0.5462,-0.2146,0.9162,0,-0.2146,1.001,-0.5462,-0.2146,0.9162,-1.091,-0.2146,0.5735,-1.361,-0.2146,0.069,-1.008,-0.2146,-0.7016,-0.4947,-0.2146,-0.9348]);
IndexedFaceSet398.coord = Coordinate399;

let TextureCoordinate400 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate400.point = new MFVec2f(new float[0.3995,0.6721,0.3906,0.6721,0.4094,0.6721,0.4164,0.6721,0.4107,0.6721,0.4006,0.6738,0.3906,0.6664,0.3818,0.6721,0.3719,0.6721,0.3649,0.6721,0.3706,0.6721,0.3807,0.6738,0.3995,0.6721,0.3906,0.6721,0.3818,0.6721,0.3719,0.6721,0.3649,0.6721,0.3706,0.6721,0.3807,0.6738,0.3906,0.6664,0.4006,0.6738,0.4107,0.6721,0.4164,0.6721,0.4094,0.6721,0.3995,0.669,0.4094,0.6692,0.4164,0.6692,0.4107,0.6689,0.3906,0.6632,0.3807,0.6702,0.3719,0.6692,0.3649,0.6692,0.3906,0.669,0.4006,0.6702,0.3818,0.669,0.3706,0.6689,0.3906,0.669,0.3995,0.669,0.4094,0.6692,0.4164,0.6692,0.4107,0.6689,0.4006,0.6702,0.3906,0.6632,0.3807,0.6702,0.3706,0.6689,0.3649,0.6692,0.3719,0.6692,0.3818,0.669]);
IndexedFaceSet398.texCoord = TextureCoordinate400;

Shape394.geometry = IndexedFaceSet398;

Transform393.child = new undefined();

Transform393.child[0] = Shape394;

HAnimSegment392.children = new MFNode();

HAnimSegment392.children[0] = Transform393;

HAnimJoint391.children = new MFNode();

HAnimJoint391.children[0] = HAnimSegment392;

let HAnimJoint401 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint401.name = "vc1";
HAnimJoint401.DEF = "hanim_vc1";
HAnimJoint401.center = new SFVec3f(new float[0,57.689999,-0.6695]);
HAnimJoint401.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint401.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment402 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment402.name = "c1";
HAnimSegment402.DEF = "hanim_c1";
let Transform403 = browser.currentScene.createNode("Transform");
Transform403.translation = new SFVec3f(new float[0,57.689999,-0.6695]);
let Shape404 = browser.currentScene.createNode("Shape");
let Appearance405 = browser.currentScene.createNode("Appearance");
let Material406 = browser.currentScene.createNode("Material");
Material406.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance405.material = Material406;

let ImageTexture407 = browser.currentScene.createNode("ImageTexture");
ImageTexture407.USE = "JinLOA3TextureAtlas";
Appearance405.texture = ImageTexture407;

Shape404.appearance = Appearance405;

let IndexedFaceSet408 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet408.coordIndex = new MFInt32(new int[8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]);
IndexedFaceSet408.creaseAngle = 3.14159;
IndexedFaceSet408.texCoordIndex = new MFInt32(new int[8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1]);
let Coordinate409 = browser.currentScene.createNode("Coordinate");
Coordinate409.point = new MFVec3f(new float[0.5369,0.5724,-1.124,1.139,0.5724,-0.8504,1.562,0.5724,0.073,1.219,0.5724,0.7153,0,0.5724,1.195,-0.605,0.5724,1.101,-1.139,0.5724,-0.8504,-1.562,0.5724,0.0729,0,0.5724,-1.195,0.605,0.5724,1.101,-0.5369,0.5724,-1.124,-1.219,0.5724,0.7153,0.5369,0.0022,-1.124,1.139,0.0022,-0.8504,1.562,0.0022,0.0729,1.219,0.0022,0.7153,0,0.0022,1.195,-0.605,0.0022,1.101,-1.139,0.0022,-0.8504,-1.562,0.0022,0.0729,0,0.0022,-1.195,0.605,0.0022,1.101,-0.5369,0.0022,-1.124,-1.219,0.0022,0.7153,0.4947,0.7703,-0.9348,0,0.7703,-1,-0.4947,0.7703,-0.9348,-1.008,0.7703,-0.7016,-1.361,0.7703,0.069,-1.091,0.7703,0.5735,-0.5462,0.7703,0.9162,0,0.7703,1.001,0.5462,0.7703,0.9162,1.091,0.7703,0.5735,1.361,0.7703,0.069,1.008,0.7703,-0.7016,0,-0.2078,-1,0.4947,-0.2078,-0.9348,1.008,-0.2078,-0.7016,1.361,-0.2078,0.069,1.091,-0.2078,0.5735,0.5462,-0.2078,0.9162,0,-0.2078,1.001,-0.5462,-0.2078,0.9162,-1.091,-0.2078,0.5735,-1.361,-0.2078,0.069,-1.008,-0.2078,-0.7016,-0.4947,-0.2078,-0.9348]);
IndexedFaceSet408.coord = Coordinate409;

let TextureCoordinate410 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate410.point = new MFVec2f(new float[0.3995,0.669,0.4094,0.6692,0.4164,0.6692,0.4107,0.6689,0.3906,0.6632,0.3807,0.6702,0.3719,0.6692,0.3649,0.6692,0.3906,0.669,0.4006,0.6702,0.3818,0.669,0.3706,0.6689,0.3995,0.6659,0.4094,0.6664,0.4164,0.6663,0.4107,0.6656,0.3906,0.6601,0.3807,0.6665,0.3719,0.6664,0.3649,0.6663,0.3906,0.666,0.4006,0.6665,0.3818,0.6659,0.3706,0.6656,0.3995,0.669,0.3906,0.669,0.3818,0.669,0.3719,0.6692,0.3649,0.6692,0.3706,0.6689,0.3807,0.6702,0.3906,0.6632,0.4006,0.6702,0.4107,0.6689,0.4164,0.6692,0.4094,0.6692,0.3906,0.666,0.3995,0.6659,0.4094,0.6664,0.4164,0.6663,0.4107,0.6656,0.4006,0.6665,0.3906,0.6601,0.3807,0.6665,0.3706,0.6656,0.3649,0.6663,0.3719,0.6664,0.3818,0.6659]);
IndexedFaceSet408.texCoord = TextureCoordinate410;

Shape404.geometry = IndexedFaceSet408;

Transform403.child = new undefined();

Transform403.child[0] = Shape404;

HAnimSegment402.children = new MFNode();

HAnimSegment402.children[0] = Transform403;

HAnimJoint401.children = new MFNode();

HAnimJoint401.children[0] = HAnimSegment402;

let HAnimJoint411 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint411.name = "skullbase";
HAnimJoint411.DEF = "hanim_skullbase";
HAnimJoint411.center = new SFVec3f(new float[0,57.43,-0.6863]);
HAnimJoint411.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint411.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment412 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment412.name = "skull";
HAnimSegment412.DEF = "hanim_skull";
let Transform413 = browser.currentScene.createNode("Transform");
Transform413.translation = new SFVec3f(new float[0,57.43,-0.6863]);
let Shape414 = browser.currentScene.createNode("Shape");
let Appearance415 = browser.currentScene.createNode("Appearance");
let Material416 = browser.currentScene.createNode("Material");
Material416.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance415.material = Material416;

let ImageTexture417 = browser.currentScene.createNode("ImageTexture");
ImageTexture417.USE = "JinLOA3TextureAtlas";
Appearance415.texture = ImageTexture417;

Shape414.appearance = Appearance415;

let IndexedFaceSet418 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet418.coordIndex = new MFInt32(new int[51,38,41,-1,41,43,51,-1,43,52,171,-1,171,151,43,-1,49,42,41,-1,41,38,49,-1,44,186,171,-1,171,52,44,-1,78,76,51,-1,51,43,78,-1,189,78,43,-1,43,151,189,-1,9,172,13,-1,13,10,9,-1,73,193,9,-1,9,10,73,-1,11,50,27,-1,16,13,172,-1,13,67,14,-1,68,15,14,-1,7,6,67,-1,13,16,67,-1,7,67,16,-1,16,172,173,-1,7,16,136,-1,7,136,130,-1,131,132,173,-1,68,19,18,-1,18,15,68,-1,20,32,18,-1,17,8,32,-1,15,66,13,-1,13,14,15,-1,32,23,24,-1,24,17,32,-1,21,24,23,-1,21,22,24,-1,24,22,17,-1,27,25,11,-1,25,31,11,-1,22,28,17,-1,27,30,29,-1,12,26,29,-1,26,27,29,-1,27,28,30,-1,30,28,22,-1,6,14,67,-1,1,34,31,-1,34,36,35,-1,34,35,31,-1,34,1,36,-1,49,37,1,-1,1,40,49,-1,39,37,49,-1,49,38,39,-1,37,39,1,-1,42,49,40,-1,40,0,42,-1,44,52,0,-1,186,44,0,-1,0,149,186,-1,51,76,45,-1,45,76,77,-1,53,45,77,-1,1,39,45,-1,45,53,1,-1,45,39,38,-1,38,51,45,-1,53,77,46,-1,77,74,33,-1,33,46,77,-1,1,53,46,-1,46,36,1,-1,46,33,35,-1,35,36,46,-1,74,50,33,-1,8,17,47,-1,11,31,50,-1,35,33,50,-1,31,35,50,-1,50,74,75,-1,47,75,8,-1,27,50,28,-1,28,50,47,-1,28,47,17,-1,75,73,48,-1,48,73,10,-1,66,48,10,-1,10,13,66,-1,75,66,8,-1,66,75,48,-1,8,66,18,-1,18,32,8,-1,15,18,66,-1,47,50,75,-1,41,52,43,-1,42,0,41,-1,0,52,41,-1,0,54,149,-1,244,245,54,-1,0,56,54,-1,0,40,55,-1,55,57,0,-1,3,57,55,-1,0,57,56,-1,3,62,5,-1,5,62,58,-1,3,64,62,-1,2,61,62,-1,62,64,2,-1,3,60,64,-1,55,40,59,-1,64,60,59,-1,64,59,135,-1,149,54,245,-1,5,57,3,-1,54,5,244,-1,152,63,61,-1,153,63,152,-1,63,5,58,-1,153,244,63,-1,244,5,63,-1,58,61,63,-1,58,62,61,-1,56,5,54,-1,56,57,5,-1,60,3,55,-1,60,55,59,-1,1,133,135,-1,59,40,1,-1,59,1,135,-1,65,135,133,-1,2,65,133,-1,2,64,65,-1,64,135,65,-1,73,75,69,-1,263,193,73,-1,73,69,263,-1,69,75,74,-1,74,71,69,-1,71,74,77,-1,77,72,71,-1,69,71,266,-1,266,263,69,-1,72,70,266,-1,266,71,72,-1,78,72,77,-1,77,76,78,-1,189,70,72,-1,72,78,189,-1,138,123,113,-1,79,122,123,-1,122,79,80,-1,137,124,81,-1,137,81,82,-1,137,82,83,-1,83,79,137,-1,79,83,80,-1,84,116,122,-1,124,84,122,-1,84,119,116,-1,123,122,113,-1,113,122,109,-1,115,138,113,-1,113,114,115,-1,117,286,158,-1,158,112,117,-1,122,116,109,-1,79,123,133,-1,133,123,138,-1,133,137,79,-1,129,138,115,-1,110,117,112,-1,111,117,110,-1,2,133,138,-1,109,85,113,-1,86,113,85,-1,107,294,160,-1,160,126,107,-1,107,126,125,-1,125,108,107,-1,125,127,87,-1,87,108,125,-1,108,87,103,-1,103,104,108,-1,114,301,154,-1,154,115,114,-1,302,114,86,-1,86,159,302,-1,114,113,86,-1,116,105,109,-1,109,105,87,-1,85,88,86,-1,109,87,85,-1,104,174,305,-1,305,108,104,-1,305,175,108,-1,105,103,87,-1,307,91,170,-1,170,150,307,-1,174,104,95,-1,95,162,174,-1,311,150,170,-1,170,177,311,-1,116,90,105,-1,89,90,116,-1,94,168,167,-1,167,93,94,-1,105,90,96,-1,97,95,104,-1,104,103,97,-1,120,121,95,-1,95,97,120,-1,105,96,97,-1,97,103,105,-1,120,97,96,-1,96,98,120,-1,121,100,95,-1,163,91,162,-1,93,170,99,-1,98,96,90,-1,90,101,98,-1,99,163,100,-1,110,112,92,-1,101,90,89,-1,89,106,101,-1,92,112,165,-1,165,177,170,-1,175,294,107,-1,107,108,175,-1,119,89,116,-1,118,111,119,-1,118,117,111,-1,152,138,129,-1,2,138,61,-1,61,138,152,-1,87,127,88,-1,88,85,87,-1,124,119,84,-1,119,111,164,-1,111,166,164,-1,111,110,166,-1,92,166,110,-1,133,4,137,-1,133,134,4,-1,160,176,128,-1,128,126,160,-1,126,128,127,-1,127,125,126,-1,80,81,124,-1,124,122,80,-1,82,81,80,-1,80,83,82,-1,129,115,154,-1,154,152,129,-1,94,140,139,-1,139,102,94,-1,93,141,140,-1,140,94,93,-1,99,142,141,-1,141,93,99,-1,100,143,142,-1,142,99,100,-1,121,144,143,-1,143,100,121,-1,120,145,144,-1,144,121,120,-1,98,146,145,-1,145,120,98,-1,101,147,146,-1,146,98,101,-1,106,148,147,-1,147,101,106,-1,106,102,139,-1,139,148,106,-1,114,302,301,-1,88,127,155,-1,155,157,88,-1,127,161,156,-1,156,155,127,-1,352,353,156,-1,156,161,352,-1,156,353,354,-1,155,156,354,-1,155,354,157,-1,127,128,161,-1,161,128,176,-1,176,352,161,-1,168,94,102,-1,102,169,168,-1,170,93,167,-1,169,102,106,-1,106,164,169,-1,170,91,99,-1,99,91,163,-1,100,163,162,-1,162,95,100,-1,91,307,174,-1,174,162,91,-1,164,106,89,-1,164,89,119,-1,165,170,167,-1,92,165,167,-1,167,168,92,-1,166,92,168,-1,168,169,166,-1,164,166,169,-1,165,112,177,-1,177,112,158,-1,158,311,177,-1,180,179,178,-1,178,181,180,-1,179,151,171,-1,171,182,179,-1,183,181,178,-1,178,184,183,-1,185,182,171,-1,171,186,185,-1,187,179,180,-1,180,188,187,-1,189,151,179,-1,179,187,189,-1,9,191,190,-1,190,172,9,-1,192,191,9,-1,9,193,192,-1,194,196,195,-1,197,172,190,-1,190,199,198,-1,200,199,201,-1,202,198,203,-1,190,198,197,-1,202,197,198,-1,197,173,172,-1,202,204,197,-1,202,205,204,-1,206,173,207,-1,200,201,208,-1,208,209,200,-1,210,208,211,-1,212,211,213,-1,201,199,190,-1,190,214,201,-1,211,212,215,-1,215,216,211,-1,217,216,215,-1,217,215,218,-1,215,212,218,-1,196,194,219,-1,219,194,220,-1,218,212,221,-1,196,223,222,-1,224,223,225,-1,225,223,196,-1,196,222,221,-1,222,218,221,-1,203,198,199,-1,226,220,227,-1,227,229,228,-1,227,220,229,-1,227,228,226,-1,183,230,226,-1,226,231,183,-1,232,181,183,-1,183,231,232,-1,231,226,232,-1,184,233,230,-1,230,183,184,-1,185,233,182,-1,186,149,233,-1,233,185,186,-1,180,234,188,-1,234,235,188,-1,236,235,234,-1,226,236,234,-1,234,232,226,-1,234,180,181,-1,181,232,234,-1,236,237,235,-1,235,237,238,-1,238,239,235,-1,226,228,237,-1,237,236,226,-1,237,228,229,-1,229,238,237,-1,239,238,195,-1,213,240,212,-1,194,195,220,-1,229,195,238,-1,220,195,229,-1,195,241,239,-1,240,213,241,-1,196,221,195,-1,221,240,195,-1,221,212,240,-1,241,242,192,-1,242,191,192,-1,214,190,191,-1,191,242,214,-1,241,213,214,-1,214,242,241,-1,213,211,208,-1,208,214,213,-1,201,214,208,-1,240,241,195,-1,178,179,182,-1,184,178,233,-1,233,178,182,-1,233,149,243,-1,244,243,245,-1,233,243,246,-1,233,248,247,-1,247,230,233,-1,249,247,248,-1,233,246,248,-1,249,251,250,-1,251,252,250,-1,249,250,253,-1,254,253,250,-1,250,255,254,-1,249,253,256,-1,247,257,230,-1,253,257,256,-1,253,258,257,-1,149,245,243,-1,251,249,248,-1,243,244,251,-1,152,255,259,-1,153,152,259,-1,259,252,251,-1,153,259,244,-1,244,259,251,-1,252,259,255,-1,252,255,250,-1,246,243,251,-1,246,251,248,-1,256,247,249,-1,256,257,247,-1,226,258,260,-1,257,226,230,-1,257,258,226,-1,261,260,258,-1,254,260,261,-1,254,261,253,-1,253,261,258,-1,192,262,241,-1,263,262,192,-1,192,193,263,-1,262,264,239,-1,239,241,262,-1,264,265,235,-1,235,239,264,-1,262,263,266,-1,266,264,262,-1,265,264,266,-1,266,70,265,-1,187,188,235,-1,235,265,187,-1,189,187,265,-1,265,70,189,-1,267,269,268,-1,270,268,271,-1,271,272,270,-1,273,275,274,-1,273,276,275,-1,273,270,277,-1,277,276,273,-1,270,272,277,-1,278,271,279,-1,274,271,278,-1,278,279,280,-1,268,269,271,-1,269,281,271,-1,283,282,269,-1,269,267,283,-1,285,284,158,-1,158,286,285,-1,271,281,279,-1,270,260,268,-1,260,267,268,-1,260,270,273,-1,287,283,267,-1,288,284,285,-1,289,288,285,-1,254,267,260,-1,281,269,290,-1,291,290,269,-1,293,292,160,-1,160,294,293,-1,293,296,295,-1,295,292,293,-1,295,296,297,-1,297,298,295,-1,296,300,299,-1,299,297,296,-1,282,283,154,-1,154,301,282,-1,302,159,291,-1,291,282,302,-1,282,291,269,-1,279,281,303,-1,281,297,303,-1,290,291,304,-1,281,290,297,-1,300,296,305,-1,305,174,300,-1,305,296,175,-1,303,297,299,-1,307,150,306,-1,306,308,307,-1,174,310,309,-1,309,300,174,-1,311,312,306,-1,306,150,311,-1,279,303,313,-1,314,279,313,-1,315,318,317,-1,317,316,315,-1,303,319,313,-1,320,299,300,-1,300,309,320,-1,321,320,309,-1,309,322,321,-1,303,299,320,-1,320,319,303,-1,321,323,319,-1,319,320,321,-1,322,309,324,-1,325,310,308,-1,318,326,306,-1,323,327,313,-1,313,319,323,-1,326,324,325,-1,288,328,284,-1,327,329,314,-1,314,313,327,-1,328,330,284,-1,330,306,312,-1,175,293,294,-1,293,175,296,-1,280,279,314,-1,331,280,289,-1,331,289,285,-1,152,287,267,-1,254,255,267,-1,255,152,267,-1,297,290,304,-1,304,298,297,-1,274,278,280,-1,280,332,289,-1,289,332,333,-1,289,333,288,-1,328,288,333,-1,260,273,334,-1,260,334,335,-1,160,292,336,-1,336,176,160,-1,292,295,298,-1,298,336,292,-1,272,271,274,-1,274,275,272,-1,276,277,272,-1,272,275,276,-1,287,152,154,-1,154,283,287,-1,315,337,339,-1,339,338,315,-1,318,315,338,-1,338,340,318,-1,326,318,340,-1,340,341,326,-1,324,326,341,-1,341,342,324,-1,322,324,342,-1,342,343,322,-1,321,322,343,-1,343,344,321,-1,323,321,344,-1,344,345,323,-1,327,323,345,-1,345,346,327,-1,329,327,346,-1,346,347,329,-1,329,347,339,-1,339,337,329,-1,282,301,302,-1,304,349,348,-1,348,298,304,-1,298,348,351,-1,351,350,298,-1,352,350,351,-1,351,353,352,-1,348,349,354,-1,354,353,351,-1,348,354,351,-1,298,350,336,-1,350,352,176,-1,176,336,350,-1,316,355,337,-1,337,315,316,-1,306,317,318,-1,355,332,329,-1,329,337,355,-1,306,326,308,-1,326,325,308,-1,324,309,310,-1,310,325,324,-1,308,310,174,-1,174,307,308,-1,332,314,329,-1,332,280,314,-1,330,317,306,-1,328,316,317,-1,317,330,328,-1,333,355,316,-1,316,328,333,-1,332,355,333,-1,330,312,284,-1,312,311,158,-1,158,284,312,-1]);
IndexedFaceSet418.creaseAngle = 3.14159;
IndexedFaceSet418.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,1,6,5,-1,5,4,1,-1,7,8,2,-1,2,3,7,-1,9,10,5,-1,5,6,9,-1,11,12,0,-1,0,1,11,-1,13,11,1,-1,1,4,13,-1,14,17,16,-1,16,15,14,-1,18,19,14,-1,14,15,18,-1,22,21,20,-1,23,16,17,-1,16,25,24,-1,27,26,24,-1,29,28,25,-1,16,23,25,-1,29,25,23,-1,31,17,30,-1,29,23,32,-1,33,32,31,-1,33,31,30,-1,27,35,34,-1,34,26,27,-1,37,36,34,-1,39,38,36,-1,26,40,16,-1,16,24,26,-1,36,42,41,-1,41,39,36,-1,43,41,42,-1,43,44,41,-1,41,44,39,-1,20,45,22,-1,45,46,22,-1,44,47,39,-1,20,49,50,-1,48,51,50,-1,51,20,50,-1,20,47,49,-1,49,47,44,-1,28,24,25,-1,53,52,46,-1,52,55,54,-1,52,54,46,-1,52,53,55,-1,7,57,53,-1,53,56,7,-1,58,57,7,-1,7,59,58,-1,57,58,53,-1,8,7,56,-1,56,60,8,-1,9,6,60,-1,10,9,60,-1,60,61,10,-1,0,12,62,-1,62,12,63,-1,64,62,63,-1,53,58,62,-1,62,64,53,-1,62,58,59,-1,59,0,62,-1,64,63,65,-1,63,67,66,-1,66,65,63,-1,53,64,65,-1,65,55,53,-1,65,66,54,-1,54,55,65,-1,67,21,66,-1,38,39,68,-1,22,46,21,-1,54,66,21,-1,46,54,21,-1,21,67,69,-1,68,69,38,-1,20,21,47,-1,47,21,68,-1,47,68,39,-1,69,18,70,-1,70,18,15,-1,40,70,15,-1,15,16,40,-1,69,71,38,-1,71,69,70,-1,38,71,34,-1,34,36,38,-1,26,34,71,-1,68,21,69,-1,2,6,1,-1,8,60,2,-1,60,6,2,-1,74,73,72,-1,77,76,75,-1,74,78,73,-1,74,81,80,-1,80,79,74,-1,82,79,80,-1,74,79,78,-1,82,84,83,-1,83,84,85,-1,82,86,84,-1,87,90,89,-1,89,88,87,-1,92,91,88,-1,80,81,93,-1,88,91,94,-1,86,93,95,-1,72,73,96,-1,83,79,82,-1,73,83,97,-1,100,99,98,-1,103,102,101,-1,99,83,85,-1,104,97,99,-1,97,83,99,-1,105,90,102,-1,105,89,90,-1,107,106,75,-1,107,108,106,-1,109,82,80,-1,109,80,93,-1,112,111,110,-1,93,81,113,-1,93,113,95,-1,114,110,111,-1,115,114,111,-1,87,86,116,-1,86,95,116,-1,18,69,117,-1,118,19,18,-1,18,117,118,-1,117,69,67,-1,67,119,117,-1,119,67,63,-1,63,120,119,-1,117,119,121,-1,121,118,117,-1,120,122,121,-1,121,119,120,-1,11,120,63,-1,63,12,11,-1,13,122,120,-1,120,11,13,-1,125,124,123,-1,127,126,124,-1,126,127,128,-1,131,130,129,-1,131,129,132,-1,131,132,133,-1,133,127,131,-1,127,133,128,-1,135,134,126,-1,130,135,126,-1,135,136,134,-1,124,126,123,-1,123,126,137,-1,138,125,123,-1,123,139,138,-1,140,143,142,-1,142,141,140,-1,126,134,137,-1,127,124,144,-1,144,124,125,-1,144,131,127,-1,145,125,138,-1,146,140,141,-1,147,140,146,-1,148,144,125,-1,137,149,123,-1,150,123,149,-1,153,156,155,-1,155,154,153,-1,153,154,158,-1,158,157,153,-1,158,160,159,-1,159,157,158,-1,157,159,162,-1,162,161,157,-1,139,215,164,-1,164,138,139,-1,163,139,150,-1,150,165,163,-1,139,123,150,-1,168,167,166,-1,166,167,159,-1,169,151,152,-1,166,159,169,-1,161,172,170,-1,170,157,161,-1,170,171,157,-1,167,162,159,-1,173,176,236,-1,236,174,173,-1,172,161,177,-1,177,233,172,-1,241,174,236,-1,236,240,241,-1,168,180,167,-1,181,180,168,-1,183,238,237,-1,237,231,183,-1,167,180,186,-1,187,177,161,-1,161,162,187,-1,188,189,177,-1,177,187,188,-1,167,186,187,-1,187,162,167,-1,188,187,186,-1,186,190,188,-1,189,192,177,-1,234,176,233,-1,231,175,191,-1,190,186,180,-1,180,193,190,-1,191,234,192,-1,146,141,195,-1,193,180,181,-1,181,194,193,-1,195,141,196,-1,196,240,236,-1,171,156,153,-1,153,157,171,-1,197,181,168,-1,198,147,242,-1,198,140,147,-1,199,125,145,-1,148,125,200,-1,200,125,199,-1,159,160,151,-1,151,169,159,-1,130,136,135,-1,242,147,184,-1,147,201,184,-1,147,146,201,-1,195,201,146,-1,144,202,131,-1,144,148,202,-1,155,204,203,-1,203,154,155,-1,154,203,160,-1,160,158,154,-1,205,208,207,-1,207,206,205,-1,209,208,205,-1,205,210,209,-1,213,214,211,-1,211,212,213,-1,191,191,192,-1,192,192,191,-1,191,191,191,-1,191,191,191,-1,191,191,191,-1,191,191,191,-1,192,192,191,-1,191,191,192,-1,189,189,192,-1,192,192,189,-1,188,188,189,-1,189,189,188,-1,190,190,188,-1,188,188,190,-1,193,193,190,-1,190,190,193,-1,194,194,193,-1,193,193,194,-1,194,232,232,-1,232,194,194,-1,139,163,215,-1,222,223,217,-1,217,216,222,-1,223,229,218,-1,218,217,223,-1,228,219,218,-1,218,229,228,-1,218,219,221,-1,217,218,221,-1,217,221,220,-1,224,225,226,-1,226,225,227,-1,227,230,226,-1,238,183,232,-1,232,239,238,-1,175,231,237,-1,239,232,194,-1,194,178,239,-1,175,176,191,-1,191,176,234,-1,192,234,233,-1,233,177,192,-1,176,173,172,-1,172,233,176,-1,178,194,181,-1,184,235,242,-1,196,236,179,-1,195,196,179,-1,179,182,195,-1,201,195,182,-1,182,185,201,-1,184,201,185,-1,196,141,240,-1,240,141,142,-1,142,241,240,-1,245,244,243,-1,243,246,245,-1,244,248,247,-1,247,249,244,-1,250,246,243,-1,243,251,250,-1,252,249,247,-1,247,253,252,-1,254,244,245,-1,245,255,254,-1,256,248,244,-1,244,254,256,-1,259,258,257,-1,257,260,259,-1,261,258,259,-1,259,262,261,-1,263,265,264,-1,266,260,257,-1,257,268,267,-1,269,268,270,-1,271,267,272,-1,257,267,266,-1,271,266,267,-1,273,274,260,-1,271,275,266,-1,276,273,275,-1,276,274,273,-1,269,270,277,-1,277,278,269,-1,279,277,280,-1,281,280,282,-1,270,268,257,-1,257,283,270,-1,280,281,284,-1,284,285,280,-1,286,285,284,-1,286,284,287,-1,284,281,287,-1,265,263,288,-1,288,263,289,-1,287,281,290,-1,265,292,291,-1,293,292,294,-1,294,292,265,-1,265,291,290,-1,291,287,290,-1,272,267,268,-1,295,289,296,-1,296,298,297,-1,296,289,298,-1,296,297,295,-1,250,299,295,-1,295,300,250,-1,302,301,250,-1,250,300,302,-1,300,295,302,-1,251,303,299,-1,299,250,251,-1,252,303,249,-1,253,304,303,-1,303,252,253,-1,245,305,255,-1,305,306,255,-1,307,306,305,-1,295,307,305,-1,305,302,295,-1,305,245,301,-1,301,302,305,-1,307,308,306,-1,306,308,309,-1,309,310,306,-1,295,297,308,-1,308,307,295,-1,308,297,298,-1,298,309,308,-1,310,309,264,-1,282,311,281,-1,263,264,289,-1,298,264,309,-1,289,264,298,-1,264,312,310,-1,311,282,312,-1,265,290,264,-1,290,311,264,-1,290,281,311,-1,312,313,261,-1,313,258,261,-1,283,257,258,-1,258,313,283,-1,312,282,314,-1,314,313,312,-1,282,280,277,-1,277,314,282,-1,270,314,277,-1,311,312,264,-1,243,244,249,-1,251,243,303,-1,303,243,249,-1,315,317,316,-1,318,320,319,-1,315,316,321,-1,315,323,322,-1,322,324,315,-1,325,322,323,-1,315,321,323,-1,325,327,326,-1,327,328,326,-1,325,326,329,-1,332,331,330,-1,330,333,332,-1,334,331,335,-1,322,336,324,-1,331,337,335,-1,329,338,336,-1,317,339,316,-1,327,325,323,-1,316,340,327,-1,341,343,342,-1,344,346,345,-1,342,328,327,-1,347,342,340,-1,340,342,327,-1,348,345,333,-1,348,333,330,-1,349,320,350,-1,349,350,351,-1,352,322,325,-1,352,336,322,-1,353,355,354,-1,336,356,324,-1,336,338,356,-1,357,354,355,-1,358,354,357,-1,332,359,329,-1,329,359,338,-1,261,360,312,-1,361,360,261,-1,261,262,361,-1,360,362,310,-1,310,312,360,-1,362,363,306,-1,306,310,362,-1,360,361,364,-1,364,362,360,-1,363,362,364,-1,364,365,363,-1,254,255,306,-1,306,363,254,-1,256,254,363,-1,363,365,256,-1,366,368,367,-1,369,367,370,-1,370,371,369,-1,372,374,373,-1,372,375,374,-1,372,369,376,-1,376,375,372,-1,369,371,376,-1,377,370,378,-1,373,370,377,-1,377,378,379,-1,367,368,370,-1,368,380,370,-1,382,381,368,-1,368,366,382,-1,385,384,383,-1,383,386,385,-1,370,380,378,-1,369,387,367,-1,387,366,367,-1,387,369,372,-1,388,382,366,-1,389,384,385,-1,390,389,385,-1,391,366,387,-1,380,368,392,-1,393,392,368,-1,396,395,394,-1,394,397,396,-1,396,399,398,-1,398,395,396,-1,398,399,400,-1,400,401,398,-1,399,403,402,-1,402,400,399,-1,381,382,405,-1,405,404,381,-1,406,407,393,-1,393,381,406,-1,381,393,368,-1,408,410,409,-1,410,400,409,-1,411,413,412,-1,410,411,400,-1,403,399,414,-1,414,415,403,-1,414,399,416,-1,409,400,402,-1,419,418,417,-1,417,420,419,-1,415,422,421,-1,421,403,415,-1,423,424,417,-1,417,418,423,-1,408,409,425,-1,426,408,425,-1,427,430,429,-1,429,428,427,-1,409,431,425,-1,432,402,403,-1,403,421,432,-1,433,432,421,-1,421,434,433,-1,409,402,432,-1,432,431,409,-1,433,435,431,-1,431,432,433,-1,434,421,436,-1,437,422,420,-1,430,439,438,-1,435,440,425,-1,425,431,435,-1,439,436,437,-1,389,441,384,-1,440,442,426,-1,426,425,440,-1,441,443,384,-1,443,417,424,-1,416,396,397,-1,396,416,399,-1,444,408,426,-1,445,446,390,-1,445,390,385,-1,447,388,366,-1,391,448,366,-1,448,447,366,-1,400,411,412,-1,412,401,400,-1,373,377,379,-1,446,449,390,-1,390,449,450,-1,390,450,389,-1,441,389,450,-1,387,372,451,-1,387,451,391,-1,394,395,452,-1,452,453,394,-1,395,398,401,-1,401,452,395,-1,456,455,454,-1,454,457,456,-1,459,458,456,-1,456,457,459,-1,462,461,460,-1,460,463,462,-1,439,436,436,-1,436,439,439,-1,439,439,439,-1,439,439,439,-1,439,439,439,-1,439,439,439,-1,436,439,439,-1,439,436,436,-1,434,436,436,-1,436,434,434,-1,433,434,434,-1,434,433,433,-1,435,433,433,-1,433,435,435,-1,440,435,435,-1,435,440,440,-1,442,440,440,-1,440,442,442,-1,442,442,464,-1,464,464,442,-1,381,404,406,-1,465,468,467,-1,467,466,465,-1,466,467,470,-1,470,469,466,-1,471,469,470,-1,470,472,471,-1,467,474,473,-1,473,472,470,-1,467,473,470,-1,475,477,476,-1,477,479,478,-1,478,476,477,-1,428,480,464,-1,464,427,428,-1,438,429,430,-1,480,481,442,-1,442,464,480,-1,438,439,420,-1,439,437,420,-1,436,421,422,-1,422,437,436,-1,420,422,415,-1,415,419,420,-1,481,426,442,-1,449,446,482,-1,443,483,417,-1,441,484,483,-1,483,443,441,-1,450,485,484,-1,484,441,450,-1,449,485,450,-1,443,424,384,-1,424,423,383,-1,383,384,424,-1]);
let Coordinate419 = browser.currentScene.createNode("Coordinate");
Coordinate419.point = new MFVec3f(new float[2.596,3.055,-7.113,5.82,3.915,-2.239,3.712,1.225,-2.29,3.261,1.453,-4.252,5.658,2.599,-1.983,1.82,1.289,-5.164,2.395,4.95,6.346,0.7761,4.912,6.883,4.408,9.203,3.673,0,11.25,5.65,2.225,10.89,5.304,5.962,4.414,1.165,4.041,0.8383,3.523,1.972,9.601,6.357,2.537,7.001,6.362,3.694,6.649,5.287,0.4475,7.341,7.362,4.843,6.188,3.431,3.886,6.593,4.951,3.681,5.194,5.001,3.826,5.001,4.664,3.284,2.472,4.49,4.543,4.124,3.499,3.859,3.861,4.364,4.575,3.792,4.006,5.065,1.183,1.247,4.863,1.73,2.37,5.256,2.695,2.024,5.549,5.532,2.714,5.161,2.035,2.722,5.442,3.878,2.887,6.111,4.389,0.2634,4.062,5.868,4.221,6.007,7.856,-0.5637,7.021,1.661,-0.9157,6.568,4.855,-0.7308,6.326,4.691,-1.55,6.23,0.8303,-3.441,4.977,5.364,-5.673,6.326,4.656,-2.95,4.216,3.427,-5.131,3.522,5.818,-7.166,3.424,1.86,-7.278,2.479,7.925,-6.757,1.927,1.981,-8.89,5.584,7.691,-2.78,5.853,7.683,-1.772,5.181,8.476,2.104,3.038,10.79,4.444,5.123,3.032,-5.304,5.664,8.061,0.8754,4.721,7.925,-5.258,2.479,5.82,-7.483,5.595,7.63,-2.141,1.173,1.832,-6.114,3.978,2.324,-4.64,2.917,-0.9285,-7.31,3.323,2.08,-5.371,1.968,-1.561,-5.013,4.713,2.444,-3.477,4.42,-0.2924,-4.477,1.411,0.5541,-3.484,2.275,0.8807,-3.763,0.9407,0.7103,-4.537,3.818,1.729,-3.139,4.664,1.866,-1.436,3.657,9.188,4.96,1.559,7.266,7.008,2.791,5.041,6.017,2.479,12.6,2.191,0,12.77,-3.073,2.479,13.01,-0.5905,2.479,12.47,-3.073,2.479,11.8,3.665,4.738,11.13,-0.5905,4.581,10.59,1.893,4.776,9.342,-4.254,4.651,10.94,-2.696,2.479,10.58,-5.873,5.038,2.087,0.2634,5.351,2.269,0.2568,5.575,4.993,0.4877,5.759,4.313,-0.6689,5.672,3.119,-0.6884,4.617,3.919,1.981,2.507,0.2122,3.467,1.252,-0.7037,3.753,2.181,1.29,4.703,1.083,-0.2065,4.531,4.006,4.226,3.45,3.843,3.486,3.474,0.2615,3.949,5.823,2.043,5.094,5.803,1.599,4.225,5.429,2.175,4.422,5.292,1.061,2.841,5.24,3.345,2.806,3.987,2.647,2.75,4.481,3.082,3.581,4.206,1.044,3.885,5.454,1.356,3.642,5.241,3.227,3.707,4.111,3.028,4.567,4.683,2.472,2.023,4.722,0.9194,2.354,5.382,3.515,2.199,3.631,3.685,4.225,3.891,0.1458,1.141,5.967,0.4592,1.442,5.549,3.443,1.22,3.201,1.972,6.686,5.769,3.551,6.468,4.66,1.125,6.641,6.224,2.799,0.2961,1.981,1.438,-0.7799,2.92,2.098,-0.0622,0.3894,4.342,2.994,2.484,1.972,10.18,5.298,3.829,8.081,4.078,4.754,5.519,2.97,2.795,3.568,4.497,1.835,3.587,5.011,4.074,1.813,1.489,4.073,1.537,-0.251,4.798,4.414,1.165,0.4079,0.7711,5.733,0.2244,0.7989,5.843,1.184,0.5011,4.895,0.2244,0.5907,5.545,2.091,-0.0943,-1.629,0.4475,7.341,7.362,0.7761,4.912,6.883,0.4475,7.341,7.362,4.734,2.295,-0.478,3.712,1.225,-2.29,5.658,2.599,-1.983,0.513,6.698,7.119,5.054,4.389,0.2634,3.561,1.081,-1.554,2.09,4.432,3.699,1.621,4.356,4.123,1.332,4.202,4.217,1.07,3.93,4.244,1.254,3.737,4.129,1.514,3.69,3.988,2.035,3.658,3.658,2.202,3.647,3.455,2.276,3.737,3.378,2.499,4.118,3.181,0,2.738,-7.551,0,4.192,6.16,0,7.925,-7.347,0,0.1375,-3.592,0,-0.9435,-6.54,0,-0.6349,1.532,0.5806,0.4168,3.813,0.1288,0.4247,4.012,0.5566,-0.2209,3.55,0,6.577,6.529,0,-1.299,4.283,0,0.7989,5.843,0.2132,0.5713,5.365,0.5926,3.49,5.582,0.9241,3.763,5.471,3.843,5.112,4.093,1.112,4.786,6.09,3.261,5.262,4.816,1.327,4.522,5.859,2.089,4.758,5.599,3.171,4.95,4.784,0.646,4.262,6.112,0,5.519,-7.965,0,9.74,6.859,0,7.548,7.405,0,2.998,5.872,0,1.753,6.811,0,0.5907,5.545,0.7426,4.743,6.135,-3.522,5.818,-7.166,-2.479,7.925,-6.757,-4.721,7.925,-5.258,-4.977,5.364,-5.673,-2.479,5.82,-7.483,-5.123,3.032,-5.304,-3.424,1.86,-7.278,-1.927,1.981,-8.89,0,3.753,-8.454,-2.479,10.58,-5.873,-4.776,9.342,-4.254,0,10.91,-6.064,-1.972,9.601,6.357,-2.225,10.89,5.304,-2.479,11.8,3.665,0,12.19,4.069,-5.962,4.414,1.165,-5.664,8.061,0.8754,-5.256,2.695,2.024,-0.4475,7.341,7.362,-1.559,7.266,7.008,-2.537,7.001,6.362,-2.791,5.041,6.017,-3.694,6.649,5.287,-0.7761,4.912,6.883,-2.395,4.95,6.346,-0.513,6.698,7.119,-0.4475,7.341,7.362,-0.7761,4.912,6.883,-0.4475,7.341,7.362,-3.886,6.593,4.951,-3.681,5.194,5.001,-3.826,5.001,4.664,-4.062,5.868,4.221,-4.843,6.188,3.431,-4.408,9.203,3.673,-3.657,9.188,4.96,-4.575,3.792,4.006,-3.859,3.861,4.364,-3.284,2.472,4.49,-4.543,4.124,3.499,-5.065,1.183,1.247,-6.111,4.389,0.2634,-5.549,5.532,2.714,-5.442,3.878,2.887,-5.161,2.035,2.722,-4.041,0.8383,3.523,-4.863,1.73,2.37,-5.82,3.915,-2.239,-7.021,1.661,-0.9157,-6.326,4.691,-1.55,-6.568,4.855,-0.7308,-4.216,3.427,-5.131,-6.23,0.8303,-3.441,-6.326,4.656,-2.95,-2.596,3.055,-7.113,-5.584,7.691,-2.78,-4.651,10.94,-2.696,-5.595,7.63,-2.141,-5.853,7.683,-1.772,-6.007,7.856,-0.5637,-4.738,11.13,-0.5905,-5.181,8.476,2.104,-4.581,10.59,1.893,-3.038,10.79,4.444,-1.173,1.832,-6.114,0,1.035,-6.031,0,0.1227,-8.281,-2.917,-0.9285,-7.31,-3.978,2.324,-4.64,-3.323,2.08,-5.371,-3.261,1.453,-4.252,-2.275,0.8807,-3.763,-1.82,1.289,-5.164,-1.968,-1.561,-5.013,-3.818,1.729,-3.139,-3.712,1.225,-2.29,-1.411,0.5541,-3.484,-4.42,-0.2924,-4.477,-4.713,2.444,-3.477,-5.658,2.599,-1.983,-0.9407,0.7103,-4.537,-4.734,2.295,-0.478,-4.664,1.866,-1.436,-2.479,12.6,2.191,0,12.89,2.191,-2.479,13.01,-0.5905,-2.479,12.47,-3.073,0,13.3,-0.5905,-3.561,1.081,-1.554,-4.073,1.537,-0.251,-2.799,0.2961,1.981,-5.038,2.087,0.2634,-4.074,1.813,1.489,-5.351,2.269,0.2568,-5.054,4.389,0.2634,-4.798,4.414,1.165,-5.575,4.993,0.4877,-5.759,4.313,-0.6689,-5.672,3.119,-0.6884,-4.617,3.919,1.981,-4.342,2.994,2.484,-4.754,5.519,2.97,-3.443,1.22,3.201,-1.438,-0.7799,2.92,-2.098,-0.0622,0.3894,-1.125,6.641,6.224,-1.972,10.18,5.298,0,9.837,5.8,-2.091,-0.0943,-1.629,-1.972,6.686,5.769,-3.551,6.468,4.66,-2.507,0.2122,3.467,-1.252,-0.7037,3.753,-0.2244,0.7989,5.843,-0.1458,1.141,5.967,0,1.141,5.968,-0.4079,0.7711,5.733,-0.4592,1.442,5.549,-2.181,1.29,4.703,-1.184,0.5011,4.895,-2.472,2.023,4.722,-0.9194,2.354,5.382,0,-1.065,3.009,0,-1.23,3.575,-3.515,2.199,3.631,-1.083,-0.2065,4.531,0,2.206,6.446,-0.646,4.262,6.112,0,3.949,5.823,-0.2615,3.949,5.823,-1.061,2.841,5.24,-0.5926,3.49,5.582,0,4.73,6.243,-0.7426,4.743,6.135,-3.843,3.486,3.474,-4.006,4.226,3.45,-2.175,4.422,5.292,-2.089,4.758,5.599,-1.327,4.522,5.859,-1.599,4.225,5.429,-3.345,2.806,3.987,-2.647,2.75,4.481,-2.795,3.568,4.497,-1.835,3.587,5.011,-3.082,3.581,4.206,-1.356,3.642,5.241,-0.9241,3.763,5.471,-1.044,3.885,5.454,-3.227,3.707,4.111,-2.043,5.094,5.803,-3.685,4.225,3.891,-1.112,4.786,6.09,-3.829,8.081,4.078,-3.843,5.112,4.093,-3.261,5.262,4.816,-5.658,2.599,-1.983,-3.712,1.225,-2.29,-0.2244,0.5907,5.545,-3.028,4.567,4.683,-1.621,4.356,4.123,-2.09,4.432,3.699,-1.332,4.202,4.217,-1.07,3.93,4.244,-1.254,3.737,4.129,-1.514,3.69,3.988,-2.035,3.658,3.658,-2.202,3.647,3.455,-2.276,3.737,3.378,-2.499,4.118,3.181,-0.5806,0.4168,3.813,-0.5566,-0.2209,3.55,-0.2132,0.5713,5.365,-0.1288,0.4247,4.012,0,0.5723,5.368,0,0.4306,4.006,0,-0.2612,3.286,-3.171,4.95,4.784]);
IndexedFaceSet418.coord = Coordinate419;

let TextureCoordinate420 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate420.point = new MFVec2f(new float[0.9175,0.8974,0.9509,0.8981,0.9421,0.8701,0.924,0.8702,0.9824,0.8971,0.9824,0.8682,0.9541,0.8718,0.9147,0.8129,0.9437,0.8153,0.9638,0.8095,0.9824,0.809,0.9461,0.923,0.9071,0.9135,0.9824,0.9287,0.7343,0.9169,0.7616,0.9147,0.7553,0.8982,0.7343,0.8968,0.7739,0.9327,0.7343,0.9365,0.8187,0.8433,0.8348,0.9045,0.8324,0.8647,0.74,0.8745,0.761,0.8768,0.7497,0.8755,0.777,0.8787,0.7647,0.8593,0.7596,0.8565,0.7438,0.8546,0.7343,0.8756,0.7372,0.8736,0.7394,0.8706,0.7405,0.8536,0.7808,0.8802,0.7786,0.8666,0.7875,0.8787,0.7821,0.8667,0.7952,0.9076,0.8011,0.8823,0.7745,0.9003,0.7939,0.8518,0.7845,0.8549,0.7731,0.8049,0.7979,0.8609,0.8185,0.8054,0.8439,0.8655,0.8131,0.8741,0.786,0.7876,0.8107,0.8538,0.8058,0.8252,0.8096,0.8166,0.8589,0.7975,0.8767,0.8622,0.8568,0.8668,0.8669,0.8674,0.9208,0.8549,0.8792,0.7991,0.8835,0.8633,0.9139,0.8636,0.9513,0.84,0.9824,0.8358,0.8845,0.9021,0.888,0.931,0.8761,0.9036,0.8705,0.9018,0.8544,0.902,0.8538,0.9345,0.8173,0.9068,0.8156,0.9257,0.7753,0.9186,0.7832,0.9041,0.7338,0.8385,0.7279,0.8339,0.7208,0.8401,0.7397,0.7767,0.7338,0.7681,0.7338,0.7727,0.7192,0.8201,0.7171,0.8352,0.7139,0.8364,0.7127,0.8419,0.7175,0.832,0.7247,0.8312,0.7224,0.8292,0.7239,0.8169,0.7146,0.8334,0.7152,0.8309,0.753,0.7762,0.7452,0.772,0.7409,0.7703,0.756,0.7661,0.7502,0.7748,0.7102,0.837,0.7574,0.7798,0.7054,0.8378,0.7338,0.8253,0.7338,0.8299,0.7267,0.8275,0.7291,0.8283,0.7338,0.8254,0.7338,0.7682,0.7385,0.7711,0.7338,0.7628,0.7338,0.82,0.7437,0.7597,0.7429,0.774,0.7484,0.7629,0.7505,0.778,0.7116,0.8233,0.7622,0.7806,0.7576,0.779,0.763,0.7872,0.7046,0.8444,0.7572,0.7769,0.7524,0.7737,0.7104,0.8341,0.7881,0.9479,0.7343,0.9577,0.8497,0.9637,0.9158,0.9539,0.7343,0.9872,0.9824,0.9663,0.4263,0.6263,0.4421,0.6351,0.4514,0.6319,0.4298,0.637,0.4385,0.639,0.4385,0.6403,0.4369,0.6596,0.4321,0.6555,0.4385,0.6553,0.4451,0.6548,0.4452,0.6463,0.4227,0.6454,0.4263,0.652,0.4193,0.6633,0.4176,0.6328,0.4376,0.6237,0.4196,0.6187,0.3384,0.9887,0.2934,0.905,0.2441,0.9417,0.2441,0.9723,0.4437,0.6405,0.4519,0.6235,0.3367,0.9059,0.4034,0.9073,0.4566,0.6329,0.4157,0.6257,0.4137,0.6192,0.2959,0.626,0.3051,0.6166,0.2511,0.6816,0.2548,0.6653,0.2441,0.6653,0.2441,0.6816,0.2661,0.696,0.2636,0.664,0.3484,0.6888,0.3007,0.651,0.2881,0.7397,0.3623,0.7239,0.4151,0.6155,0.4295,0.6197,0.4116,0.6201,0.4088,0.6855,0.4123,0.7323,0.4518,0.7703,0.364,0.6372,0.2441,0.7326,0.2441,0.7109,0.2441,0.7705,0.2441,0.816,0.2466,0.8272,0.2826,0.8198,0.263,0.8101,0.3011,0.7644,0.4294,0.848,0.295,0.8569,0.4229,0.7906,0.445,0.8342,0.3273,0.8725,0.3401,0.8443,0.4194,0.891,0.3844,0.8819,0.3962,0.7639,0.3654,0.758,0.3664,0.7923,0.3312,0.7931,0.3858,0.7947,0.2864,0.8094,0.3065,0.7969,0.4051,0.8004,0.4267,0.8291,0.3243,0.8795,0.293,0.8645,0.4715,0.8911,0.431,0.9594,0.4658,0.6252,0.465,0.6281,0.3862,0.8876,0.4544,0.6426,0.2548,0.6553,0.2441,0.6553,0.4156,0.6279,0.3783,0.625,0.3984,0.649,0.4325,0.6718,0.4443,0.6446,0.428,0.6022,0.4445,0.6357,0.4021,0.656,0.4052,0.6271,0.4253,0.6199,0.4215,0.6174,0.6418,0.6585,0.6441,0.671,0.6214,0.6731,0.616,0.6731,0.6418,0.6585,0.623,0.6494,0.6418,0.6585,0.6441,0.671,0.3003,0.6509,0.2548,0.6558,0.2549,0.6531,0.2441,0.6558,0.616,0.6731,0.6214,0.6731,0.2441,0.6529,0.314,0.8296,0.3898,0.85,0.2746,0.7881,0.2889,0.7981,0.4442,0.8857,0.2745,0.8415,0.3079,0.8417,0.3393,0.8544,0.3891,0.8542,0.2699,0.8521,0.246,0.853,0.4715,0.8911,0.9421,0.8701,0.9509,0.8981,0.9175,0.8974,0.924,0.8702,0.9824,0.8682,0.9824,0.8971,0.9541,0.8718,0.9147,0.8129,0.9437,0.8153,0.9638,0.8095,0.9824,0.809,0.9461,0.923,0.9071,0.9135,0.9824,0.9287,0.7553,0.8982,0.7616,0.9147,0.7343,0.9169,0.7343,0.8968,0.7739,0.9327,0.7343,0.9365,0.8324,0.8647,0.8348,0.9045,0.8187,0.8433,0.74,0.8745,0.7497,0.8755,0.761,0.8768,0.7647,0.8593,0.777,0.8787,0.7438,0.8546,0.7596,0.8565,0.7372,0.8736,0.7343,0.8756,0.7394,0.8706,0.7405,0.8536,0.7808,0.8802,0.7786,0.8666,0.7821,0.8667,0.7875,0.8787,0.8011,0.8823,0.7952,0.9076,0.7745,0.9003,0.7939,0.8518,0.7845,0.8549,0.7731,0.8049,0.7979,0.8609,0.8185,0.8054,0.8439,0.8655,0.8131,0.8741,0.8107,0.8538,0.8058,0.8252,0.786,0.7876,0.8096,0.8166,0.8767,0.8622,0.8589,0.7975,0.8669,0.8674,0.8568,0.8668,0.9208,0.8549,0.8792,0.7991,0.9139,0.8636,0.8835,0.8633,0.9513,0.84,0.9824,0.8358,0.8845,0.9021,0.888,0.931,0.8761,0.9036,0.8705,0.9018,0.8544,0.902,0.8538,0.9345,0.8173,0.9068,0.8156,0.9257,0.7753,0.9186,0.7832,0.9041,0.7208,0.8401,0.7279,0.8339,0.7338,0.8385,0.7338,0.7727,0.7338,0.7681,0.7397,0.7767,0.7192,0.8201,0.7139,0.8364,0.7171,0.8352,0.7127,0.8419,0.7175,0.832,0.7224,0.8292,0.7247,0.8312,0.7239,0.8169,0.7146,0.8334,0.7452,0.772,0.753,0.7762,0.7152,0.8309,0.7409,0.7703,0.7502,0.7748,0.756,0.7661,0.7102,0.837,0.7574,0.7798,0.7054,0.8378,0.7338,0.8253,0.7338,0.8299,0.7338,0.8254,0.7291,0.8283,0.7267,0.8275,0.7338,0.7628,0.7385,0.7711,0.7338,0.7682,0.7338,0.82,0.7437,0.7597,0.7484,0.7629,0.7429,0.774,0.7505,0.778,0.7116,0.8233,0.763,0.7872,0.7576,0.779,0.7622,0.7806,0.7046,0.8444,0.7572,0.7769,0.7524,0.7737,0.7104,0.8341,0.7881,0.9479,0.7343,0.9577,0.8497,0.9637,0.9158,0.9539,0.7343,0.9872,0.9824,0.9663,0.4514,0.6319,0.4421,0.6351,0.4263,0.6263,0.4385,0.639,0.4298,0.637,0.4385,0.6403,0.4385,0.6553,0.4321,0.6555,0.4369,0.6596,0.4451,0.6548,0.4452,0.6463,0.4263,0.652,0.4227,0.6454,0.4193,0.6633,0.4176,0.6328,0.4196,0.6187,0.4376,0.6237,0.2441,0.9417,0.2934,0.905,0.3384,0.9887,0.2441,0.9723,0.4437,0.6405,0.4519,0.6235,0.3367,0.9059,0.4034,0.9073,0.4566,0.6329,0.4157,0.6257,0.4137,0.6192,0.2441,0.6653,0.2548,0.6653,0.2511,0.6816,0.2441,0.6816,0.2636,0.664,0.2661,0.696,0.3484,0.6888,0.3007,0.651,0.3623,0.7239,0.2881,0.7397,0.4215,0.6174,0.4295,0.6197,0.4151,0.6155,0.4116,0.6201,0.4518,0.7703,0.4123,0.7323,0.4088,0.6855,0.364,0.6372,0.2959,0.626,0.3051,0.6166,0.2441,0.7326,0.2441,0.7705,0.2441,0.7109,0.2745,0.8415,0.2466,0.8272,0.2441,0.816,0.263,0.8101,0.3011,0.7644,0.2746,0.7881,0.246,0.853,0.2699,0.8521,0.4229,0.7906,0.445,0.8342,0.3401,0.8443,0.3393,0.8544,0.3079,0.8417,0.314,0.8296,0.3962,0.7639,0.3654,0.758,0.3664,0.7923,0.3312,0.7931,0.3858,0.7947,0.3065,0.7969,0.2889,0.7981,0.2826,0.8198,0.2864,0.8094,0.4051,0.8004,0.3243,0.8795,0.4267,0.8291,0.293,0.8645,0.4715,0.8911,0.431,0.9594,0.4715,0.8911,0.4658,0.6252,0.465,0.6281,0.4194,0.891,0.3862,0.8876,0.4544,0.6426,0.2548,0.6553,0.2441,0.6553,0.3984,0.649,0.3783,0.625,0.4156,0.6279,0.4325,0.6718,0.428,0.6022,0.4443,0.6446,0.4445,0.6357,0.4021,0.656,0.4052,0.6271,0.4253,0.6199,0.3898,0.85,0.6418,0.6585,0.6441,0.671,0.6441,0.671,0.6418,0.6585,0.6214,0.6731,0.6214,0.6731,0.616,0.6731,0.616,0.6731,0.623,0.6494,0.6418,0.6585,0.3003,0.6509,0.2548,0.6558,0.2549,0.6531,0.2441,0.6558,0.2441,0.6529,0.3891,0.8542,0.4294,0.848,0.4442,0.8857,0.295,0.8569,0.3273,0.8725,0.3844,0.8819]);
IndexedFaceSet418.texCoord = TextureCoordinate420;

Shape414.geometry = IndexedFaceSet418;

Transform413.child = new undefined();

Transform413.child[0] = Shape414;

HAnimSegment412.children = new MFNode();

HAnimSegment412.children[0] = Transform413;

HAnimJoint411.children = new MFNode();

HAnimJoint411.children[0] = HAnimSegment412;

let HAnimJoint421 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint421.name = "l_eyelid_joint";
HAnimJoint421.DEF = "hanim_l_eyelid_joint";
HAnimJoint421.center = new SFVec3f(new float[2.245,62.400002,1.464]);
HAnimJoint421.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint421.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment422 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment422.name = "l_eyelid";
HAnimSegment422.DEF = "hanim_l_eyelid";
let Transform423 = browser.currentScene.createNode("Transform");
Transform423.rotation = new SFRotation(new float[1,0,0,-0.5236]);
Transform423.translation = new SFVec3f(new float[2.245,62.400002,1.464]);
let Shape424 = browser.currentScene.createNode("Shape");
let Appearance425 = browser.currentScene.createNode("Appearance");
let Material426 = browser.currentScene.createNode("Material");
Material426.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance425.material = Material426;

let ImageTexture427 = browser.currentScene.createNode("ImageTexture");
ImageTexture427.USE = "JinLOA3TextureAtlas";
Appearance425.texture = ImageTexture427;

Shape424.appearance = Appearance425;

let IndexedFaceSet428 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet428.coordIndex = new MFInt32(new int[0,1,25,-1,25,24,0,-1,2,26,25,-1,25,1,2,-1,2,3,8,-1,8,26,2,-1,10,27,9,-1,9,4,10,-1,10,0,24,-1,24,27,10,-1,1,0,12,-1,12,13,1,-1,2,1,13,-1,13,14,2,-1,3,2,14,-1,14,15,3,-1,10,4,16,-1,16,22,10,-1,5,6,18,-1,18,17,5,-1,6,7,19,-1,19,18,6,-1,7,8,20,-1,20,19,7,-1,9,11,23,-1,23,21,9,-1,8,3,15,-1,15,20,8,-1,4,9,21,-1,21,16,4,-1,0,10,22,-1,22,12,0,-1,11,5,17,-1,17,23,11,-1,6,5,24,-1,24,25,6,-1,7,6,25,-1,25,26,7,-1,5,11,27,-1,27,24,5,-1,27,11,9,-1,8,7,26,-1]);
IndexedFaceSet428.creaseAngle = 3.14159;
IndexedFaceSet428.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,4,5,2,-1,2,1,4,-1,4,6,7,-1,7,5,4,-1,9,10,11,-1,11,8,9,-1,9,0,3,-1,3,10,9,-1,1,0,12,-1,12,13,1,-1,4,1,13,-1,13,14,4,-1,6,4,14,-1,14,15,6,-1,9,8,16,-1,16,17,9,-1,18,19,20,-1,20,21,18,-1,19,22,23,-1,23,20,19,-1,22,7,24,-1,24,23,22,-1,11,25,26,-1,26,27,11,-1,7,6,15,-1,15,24,7,-1,8,11,27,-1,27,16,8,-1,0,9,17,-1,17,12,0,-1,25,18,21,-1,21,26,25,-1,19,18,3,-1,3,2,19,-1,22,19,2,-1,2,5,22,-1,18,25,10,-1,10,3,18,-1,10,25,11,-1,7,22,5,-1]);
let Coordinate429 = browser.currentScene.createNode("Coordinate");
Coordinate429.point = new MFVec3f(new float[0.7812,-0.3922,2.571,-0.0916,-0.4605,3.239,-0.6939,-0.6908,3.379,-1.201,-1.081,3.304,1.44,-0.7409,1.741,0.5651,-1.538,2.334,-0.0316,-1.56,2.732,-0.5556,-1.456,2.994,-0.9123,-1.31,3.138,1.238,-0.9979,1.826,1.125,-0.5541,2.164,0.8496,-1.396,2.061,0.6573,-0.3994,2.377,-0.1708,-0.5443,2.903,-0.7043,-0.7411,3.046,-1.214,-1.081,3.172,1.382,-0.7409,1.7,0.5305,-1.549,2.255,-0.061,-1.557,2.59,-0.5907,-1.457,2.881,-0.9336,-1.31,3.023,1.226,-0.991,1.738,1.011,-0.5701,2.042,0.8046,-1.4,2.015,0.7041,-1.015,2.416,-0.0583,-1.031,3.036,-0.5943,-1.139,3.166,0.9909,-1.005,2.116]);
IndexedFaceSet428.coord = Coordinate429;

let TextureCoordinate430 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate430.point = new MFVec2f(new float[0.3562,0.7836,0.3424,0.7815,0.3432,0.7614,0.3553,0.7628,0.3328,0.7723,0.3344,0.7557,0.3248,0.7567,0.3294,0.7475,0.3666,0.7703,0.3614,0.7771,0.3598,0.7618,0.364,0.76,0.3542,0.784,0.3411,0.7782,0.3327,0.7703,0.3246,0.7567,0.3657,0.7703,0.3598,0.7771,0.3534,0.7431,0.3436,0.742,0.3428,0.7423,0.3522,0.7429,0.335,0.743,0.3345,0.743,0.3291,0.7475,0.3576,0.7438,0.3566,0.7438,0.3632,0.7603]);
IndexedFaceSet428.texCoord = TextureCoordinate430;

Shape424.geometry = IndexedFaceSet428;

Transform423.child = new undefined();

Transform423.child[0] = Shape424;

HAnimSegment422.children = new MFNode();

HAnimSegment422.children[0] = Transform423;

HAnimJoint421.children = new MFNode();

HAnimJoint421.children[0] = HAnimSegment422;

HAnimJoint411.children[1] = HAnimJoint421;

let HAnimJoint431 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint431.name = "r_eyelid_joint";
HAnimJoint431.DEF = "hanim_r_eyelid_joint";
HAnimJoint431.center = new SFVec3f(new float[-2.245,62.400002,1.464]);
HAnimJoint431.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint431.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment432 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment432.name = "r_eyelid";
HAnimSegment432.DEF = "hanim_r_eyelid";
let Transform433 = browser.currentScene.createNode("Transform");
Transform433.rotation = new SFRotation(new float[1,0,0,-0.5236]);
Transform433.translation = new SFVec3f(new float[-2.245,62.400002,1.464]);
let Shape434 = browser.currentScene.createNode("Shape");
let Appearance435 = browser.currentScene.createNode("Appearance");
let Material436 = browser.currentScene.createNode("Material");
Material436.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance435.material = Material436;

let ImageTexture437 = browser.currentScene.createNode("ImageTexture");
ImageTexture437.USE = "JinLOA3TextureAtlas";
Appearance435.texture = ImageTexture437;

Shape434.appearance = Appearance435;

let IndexedFaceSet438 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet438.coordIndex = new MFInt32(new int[0,24,25,-1,25,1,0,-1,2,1,25,-1,25,26,2,-1,2,26,8,-1,8,3,2,-1,10,4,9,-1,9,27,10,-1,10,27,24,-1,24,0,10,-1,1,13,12,-1,12,0,1,-1,2,14,13,-1,13,1,2,-1,3,15,14,-1,14,2,3,-1,10,22,16,-1,16,4,10,-1,5,17,18,-1,18,6,5,-1,6,18,19,-1,19,7,6,-1,7,19,20,-1,20,8,7,-1,9,21,23,-1,23,11,9,-1,8,20,15,-1,15,3,8,-1,4,16,21,-1,21,9,4,-1,0,12,22,-1,22,10,0,-1,11,23,17,-1,17,5,11,-1,6,25,24,-1,24,5,6,-1,7,26,25,-1,25,6,7,-1,5,24,27,-1,27,11,5,-1,27,9,11,-1,8,26,7,-1]);
IndexedFaceSet438.creaseAngle = 3.14159;
IndexedFaceSet438.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,4,1,2,-1,2,5,4,-1,4,5,7,-1,7,6,4,-1,9,8,11,-1,11,10,9,-1,9,10,3,-1,3,0,9,-1,1,13,12,-1,12,0,1,-1,4,14,13,-1,13,1,4,-1,6,15,14,-1,14,4,6,-1,9,17,16,-1,16,8,9,-1,18,21,20,-1,20,19,18,-1,19,20,23,-1,23,22,19,-1,22,23,24,-1,24,7,22,-1,11,27,26,-1,26,25,11,-1,7,24,15,-1,15,6,7,-1,8,16,27,-1,27,11,8,-1,0,12,17,-1,17,9,0,-1,25,26,21,-1,21,18,25,-1,19,2,3,-1,3,18,19,-1,22,5,2,-1,2,19,22,-1,18,3,10,-1,10,25,18,-1,10,11,25,-1,7,5,22,-1]);
let Coordinate439 = browser.currentScene.createNode("Coordinate");
Coordinate439.point = new MFVec3f(new float[-0.7812,-0.3922,2.571,0.0916,-0.4605,3.239,0.6939,-0.6908,3.379,1.201,-1.081,3.304,-1.44,-0.7409,1.741,-0.5651,-1.538,2.334,0.0316,-1.56,2.732,0.5556,-1.456,2.994,0.9123,-1.31,3.138,-1.238,-0.9979,1.826,-1.125,-0.5541,2.164,-0.8496,-1.396,2.061,-0.6573,-0.3994,2.377,0.1708,-0.5443,2.903,0.7043,-0.7411,3.046,1.214,-1.081,3.172,-1.382,-0.7409,1.7,-0.5305,-1.549,2.255,0.061,-1.557,2.59,0.5907,-1.457,2.881,0.9336,-1.31,3.023,-1.226,-0.991,1.738,-1.011,-0.5701,2.042,-0.8046,-1.4,2.015,-0.7041,-1.015,2.416,0.0583,-1.031,3.036,0.5943,-1.139,3.166,-0.9909,-1.005,2.116]);
IndexedFaceSet438.coord = Coordinate439;

let TextureCoordinate440 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate440.point = new MFVec2f(new float[0.3562,0.7836,0.3424,0.7815,0.3432,0.7614,0.3553,0.7628,0.3328,0.7723,0.3344,0.7557,0.3248,0.7567,0.3294,0.7475,0.3666,0.7703,0.3614,0.7771,0.3598,0.7618,0.364,0.76,0.3542,0.784,0.3411,0.7782,0.3327,0.7703,0.3246,0.7567,0.3657,0.7703,0.3598,0.7771,0.3534,0.7431,0.3436,0.742,0.3428,0.7423,0.3522,0.7429,0.335,0.743,0.3345,0.743,0.3291,0.7475,0.3576,0.7438,0.3566,0.7438,0.3632,0.7603]);
IndexedFaceSet438.texCoord = TextureCoordinate440;

Shape434.geometry = IndexedFaceSet438;

Transform433.child = new undefined();

Transform433.child[0] = Shape434;

HAnimSegment432.children = new MFNode();

HAnimSegment432.children[0] = Transform433;

HAnimJoint431.children = new MFNode();

HAnimJoint431.children[0] = HAnimSegment432;

HAnimJoint411.children[2] = HAnimJoint431;

let HAnimJoint441 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint441.name = "l_eyeball_joint";
HAnimJoint441.DEF = "hanim_l_eyeball_joint";
HAnimJoint441.center = new SFVec3f(new float[2.139,61.529999,3.691]);
HAnimJoint441.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint441.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment442 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment442.name = "l_eyeball";
HAnimSegment442.DEF = "hanim_l_eyeball";
let Transform443 = browser.currentScene.createNode("Transform");
Transform443.translation = new SFVec3f(new float[2.139,61.529999,3.691]);
let Shape444 = browser.currentScene.createNode("Shape");
let Appearance445 = browser.currentScene.createNode("Appearance");
let Material446 = browser.currentScene.createNode("Material");
Material446.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance445.material = Material446;

let ImageTexture447 = browser.currentScene.createNode("ImageTexture");
ImageTexture447.USE = "JinLOA3TextureAtlas";
Appearance445.texture = ImageTexture447;

Shape444.appearance = Appearance445;

let IndexedFaceSet448 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet448.coordIndex = new MFInt32(new int[1,6,16,-1,16,11,1,-1,0,1,11,-1,11,10,0,-1,8,9,19,-1,19,18,8,-1,2,8,18,-1,18,12,2,-1,3,0,10,-1,10,13,3,-1,9,4,14,-1,14,19,9,-1,5,2,12,-1,12,15,5,-1,4,3,13,-1,13,14,4,-1,6,7,17,-1,17,16,6,-1,7,5,15,-1,15,17,7,-1,11,16,21,-1,21,20,11,-1,16,17,22,-1,22,21,16,-1,17,15,23,-1,23,22,17,-1,15,12,24,-1,24,23,15,-1,12,18,25,-1,25,24,12,-1,18,19,26,-1,26,25,18,-1,19,14,27,-1,27,26,19,-1,14,13,28,-1,28,27,14,-1,13,10,29,-1,29,28,13,-1,10,11,20,-1,20,29,10,-1,6,1,30,-1,1,0,30,-1,0,3,30,-1,3,4,30,-1,4,9,30,-1,9,8,30,-1,8,2,30,-1,2,5,30,-1,5,7,30,-1,7,6,30,-1]);
IndexedFaceSet448.creaseAngle = 3.14159;
IndexedFaceSet448.texCoordIndex = new MFInt32(new int[4,9,13,-1,13,14,4,-1,3,4,14,-1,14,15,3,-1,11,12,16,-1,16,17,11,-1,5,11,17,-1,17,18,5,-1,6,3,15,-1,15,6,6,-1,12,7,19,-1,19,16,12,-1,8,5,18,-1,18,20,8,-1,7,6,21,-1,21,19,7,-1,9,10,22,-1,22,13,9,-1,10,8,20,-1,20,22,10,-1,14,13,24,-1,24,23,14,-1,13,22,25,-1,25,24,13,-1,22,20,26,-1,26,25,22,-1,20,18,27,-1,27,26,20,-1,18,17,28,-1,28,27,18,-1,17,16,29,-1,29,28,17,-1,16,19,30,-1,30,29,16,-1,19,21,31,-1,31,30,19,-1,6,15,32,-1,32,31,6,-1,15,14,23,-1,23,32,15,-1,36,1,40,-1,1,0,40,-1,0,33,40,-1,33,34,40,-1,34,39,40,-1,39,38,40,-1,38,2,40,-1,2,35,40,-1,35,37,40,-1,37,36,40,-1]);
let Coordinate449 = browser.currentScene.createNode("Coordinate");
Coordinate449.point = new MFVec3f(new float[-0.5714,0.1308,1.022,0.0065,0.3275,0.8903,0.9254,-0.514,-0.1858,-1.127,-0.2093,1.04,-0.8123,-0.4527,0.8311,1.071,-0.3875,-0.2786,0.8656,0.4725,0.2913,1.531,0.131,-0.4935,0.6347,-0.5265,0.1025,-0.3305,-0.5079,0.6059,-0.9072,0.3038,0.6607,-0.2821,0.6036,0.4543,0.8055,-0.7341,-0.6018,-1.538,-0.196,0.7028,-1.179,-0.6703,0.471,0.9784,-0.5205,-0.7082,0.7686,0.7606,-0.1253,1.439,0.2188,-0.9066,0.4776,-0.7606,-0.3045,-0.6264,-0.7495,0.2298,-0.4184,0.4603,0.0509,0.5401,0.5849,-0.4428,1.071,0.2019,-1.042,0.7894,-0.2743,-0.8837,0.6127,-0.4156,-0.7848,0.3441,-0.4361,-0.5345,-0.763,-0.4066,-0.0392,-1.24,-0.3287,0.1376,-1.414,-0.1566,0.1789,-0.9737,0.2094,0.2088,0.2912,-0.0892,0.5676]);
IndexedFaceSet448.coord = Coordinate449;

let TextureCoordinate450 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate450.point = new MFVec2f(new float[0.3217,0.8278,0.3482,0.8386,0.3916,0.7984,0.3206,0.8292,0.3482,0.8386,0.3916,0.7984,0.2977,0.8092,0.309,0.8013,0.3985,0.8044,0.3868,0.8428,0.4182,0.8265,0.3778,0.7978,0.3319,0.7987,0.3868,0.8428,0.3482,0.8386,0.3206,0.8292,0.3319,0.7987,0.3778,0.7978,0.3916,0.7984,0.309,0.8013,0.3985,0.8029,0.2977,0.8092,0.4182,0.8263,0.3482,0.8386,0.3868,0.8428,0.4182,0.8265,0.3985,0.8044,0.3916,0.7984,0.3778,0.7978,0.3319,0.7987,0.309,0.8013,0.2977,0.8092,0.3206,0.8292,0.2978,0.8092,0.309,0.8013,0.3985,0.8044,0.3868,0.8428,0.4182,0.8265,0.3778,0.7978,0.3319,0.7986,0.3567,0.819]);
IndexedFaceSet448.texCoord = TextureCoordinate450;

Shape444.geometry = IndexedFaceSet448;

Transform443.child = new undefined();

Transform443.child[0] = Shape444;

HAnimSegment442.children = new MFNode();

HAnimSegment442.children[0] = Transform443;

HAnimJoint441.children = new MFNode();

HAnimJoint441.children[0] = HAnimSegment442;

HAnimJoint411.children[3] = HAnimJoint441;

let HAnimJoint451 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint451.name = "r_eyeball_joint";
HAnimJoint451.DEF = "hanim_r_eyeball_joint";
HAnimJoint451.center = new SFVec3f(new float[-2.139,61.529999,3.691]);
HAnimJoint451.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint451.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment452 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment452.name = "r_eyeball";
HAnimSegment452.DEF = "hanim_r_eyeball";
let Transform453 = browser.currentScene.createNode("Transform");
Transform453.translation = new SFVec3f(new float[-2.139,61.529999,3.691]);
let Shape454 = browser.currentScene.createNode("Shape");
let Appearance455 = browser.currentScene.createNode("Appearance");
let Material456 = browser.currentScene.createNode("Material");
Material456.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance455.material = Material456;

let ImageTexture457 = browser.currentScene.createNode("ImageTexture");
ImageTexture457.USE = "JinLOA3TextureAtlas";
Appearance455.texture = ImageTexture457;

Shape454.appearance = Appearance455;

let IndexedFaceSet458 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet458.coordIndex = new MFInt32(new int[1,11,16,-1,16,6,1,-1,0,10,11,-1,11,1,0,-1,8,18,19,-1,19,9,8,-1,2,12,18,-1,18,8,2,-1,3,13,10,-1,10,0,3,-1,9,19,14,-1,14,4,9,-1,5,15,12,-1,12,2,5,-1,4,14,13,-1,13,3,4,-1,6,16,17,-1,17,7,6,-1,7,17,15,-1,15,5,7,-1,11,20,21,-1,21,16,11,-1,16,21,22,-1,22,17,16,-1,17,22,23,-1,23,15,17,-1,15,23,24,-1,24,12,15,-1,12,24,25,-1,25,18,12,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,14,19,-1,14,27,28,-1,28,13,14,-1,13,28,29,-1,29,10,13,-1,10,29,20,-1,20,11,10,-1,6,30,1,-1,1,30,0,-1,0,30,3,-1,3,30,4,-1,4,30,9,-1,9,30,8,-1,8,30,2,-1,2,30,5,-1,5,30,7,-1,7,30,6,-1]);
IndexedFaceSet458.creaseAngle = 3.14159;
IndexedFaceSet458.texCoordIndex = new MFInt32(new int[4,14,13,-1,13,9,4,-1,3,15,14,-1,14,4,3,-1,11,17,16,-1,16,12,11,-1,5,18,17,-1,17,11,5,-1,6,6,15,-1,15,3,6,-1,12,16,19,-1,19,7,12,-1,8,20,18,-1,18,5,8,-1,7,19,21,-1,21,6,7,-1,9,13,22,-1,22,10,9,-1,10,22,20,-1,20,8,10,-1,14,23,24,-1,24,13,14,-1,13,24,25,-1,25,22,13,-1,22,25,26,-1,26,20,22,-1,20,26,27,-1,27,18,20,-1,18,27,28,-1,28,17,18,-1,17,28,29,-1,29,16,17,-1,16,29,30,-1,30,19,16,-1,19,30,31,-1,31,21,19,-1,6,31,32,-1,32,15,6,-1,15,32,23,-1,23,14,15,-1,36,40,1,-1,1,40,0,-1,0,40,33,-1,33,40,34,-1,34,40,39,-1,39,40,38,-1,38,40,2,-1,2,40,35,-1,35,40,37,-1,37,40,36,-1]);
let Coordinate459 = browser.currentScene.createNode("Coordinate");
Coordinate459.point = new MFVec3f(new float[0.5714,0.1308,1.022,-0.0065,0.3275,0.8903,-0.9254,-0.514,-0.1858,1.127,-0.2093,1.04,0.8123,-0.4527,0.8311,-1.071,-0.3875,-0.2786,-0.8656,0.4725,0.2913,-1.531,0.131,-0.4935,-0.6347,-0.5265,0.1025,0.3305,-0.5079,0.6059,0.9072,0.3038,0.6607,0.2821,0.6036,0.4543,-0.8055,-0.7341,-0.6018,1.538,-0.196,0.7028,1.179,-0.6703,0.471,-0.9784,-0.5205,-0.7082,-0.7686,0.7606,-0.1254,-1.439,0.2188,-0.9066,-0.4776,-0.7606,-0.3045,0.6264,-0.7495,0.2298,0.4184,0.4603,0.0509,-0.5401,0.5849,-0.4428,-1.071,0.2019,-1.042,-0.7894,-0.2743,-0.8837,-0.6127,-0.4156,-0.7848,-0.3441,-0.4361,-0.5345,0.763,-0.4066,-0.0392,1.24,-0.3287,0.1376,1.414,-0.1566,0.1789,0.9737,0.2094,0.2088,-0.2912,-0.0892,0.5676]);
IndexedFaceSet458.coord = Coordinate459;

let TextureCoordinate460 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate460.point = new MFVec2f(new float[0.3217,0.8278,0.3482,0.8386,0.3916,0.7984,0.3206,0.8292,0.3482,0.8386,0.3916,0.7984,0.2977,0.8092,0.309,0.8013,0.3985,0.8044,0.3868,0.8428,0.4182,0.8265,0.3778,0.7978,0.3319,0.7987,0.3868,0.8428,0.3482,0.8386,0.3206,0.8292,0.3319,0.7987,0.3778,0.7978,0.3916,0.7984,0.309,0.8013,0.3985,0.8029,0.2977,0.8092,0.4182,0.8263,0.3482,0.8386,0.3868,0.8428,0.4182,0.8265,0.3985,0.8044,0.3916,0.7984,0.3778,0.7978,0.3319,0.7987,0.309,0.8013,0.2977,0.8092,0.3206,0.8292,0.2978,0.8092,0.309,0.8013,0.3985,0.8044,0.3868,0.8428,0.4182,0.8265,0.3778,0.7978,0.3319,0.7986,0.3567,0.819]);
IndexedFaceSet458.texCoord = TextureCoordinate460;

Shape454.geometry = IndexedFaceSet458;

Transform453.child = new undefined();

Transform453.child[0] = Shape454;

HAnimSegment452.children = new MFNode();

HAnimSegment452.children[0] = Transform453;

HAnimJoint451.children = new MFNode();

HAnimJoint451.children[0] = HAnimSegment452;

HAnimJoint411.children[4] = HAnimJoint451;

let HAnimJoint461 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint461.name = "l_eyebrow_joint";
HAnimJoint461.DEF = "hanim_l_eyebrow_joint";
HAnimJoint461.center = new SFVec3f(new float[0.9666,61.93,4.753]);
HAnimJoint461.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint461.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment462 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment462.name = "l_eyebrow";
HAnimSegment462.DEF = "hanim_l_eyebrow";
let Transform463 = browser.currentScene.createNode("Transform");
Transform463.translation = new SFVec3f(new float[0.9666,61.93,4.753]);
let Shape464 = browser.currentScene.createNode("Shape");
let Appearance465 = browser.currentScene.createNode("Appearance");
let Material466 = browser.currentScene.createNode("Material");
Material466.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance465.material = Material466;

let ImageTexture467 = browser.currentScene.createNode("ImageTexture");
ImageTexture467.USE = "JinLOA3TextureAtlas";
Appearance465.texture = ImageTexture467;

Shape464.appearance = Appearance465;

let IndexedFaceSet468 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet468.coordIndex = new MFInt32(new int[2,20,21,-1,21,7,2,-1,4,3,8,-1,8,10,4,-1,3,2,7,-1,7,8,3,-1,2,1,5,-1,5,20,2,-1,4,6,3,-1,3,6,1,-1,1,2,3,-1,5,1,12,-1,12,14,5,-1,0,5,14,-1,14,11,0,-1,6,4,13,-1,13,15,6,-1,1,6,15,-1,15,12,1,-1,8,7,16,-1,16,17,8,-1,21,22,16,-1,16,7,21,-1,9,0,11,-1,11,18,9,-1,4,10,19,-1,19,13,4,-1,10,8,17,-1,17,19,10,-1,20,0,9,-1,9,21,20,-1,5,0,20,-1,21,9,18,-1,18,22,21,-1]);
IndexedFaceSet468.creaseAngle = 3.14159;
IndexedFaceSet468.texCoordIndex = new MFInt32(new int[0,20,21,-1,21,7,0,-1,3,1,8,-1,8,10,3,-1,1,0,7,-1,7,8,1,-1,0,4,5,-1,5,20,0,-1,3,6,1,-1,1,6,4,-1,4,0,1,-1,5,4,11,-1,11,12,5,-1,2,5,12,-1,12,14,2,-1,6,3,15,-1,15,16,6,-1,4,6,16,-1,16,11,4,-1,8,7,13,-1,13,17,8,-1,21,22,13,-1,13,7,21,-1,9,2,14,-1,14,18,9,-1,3,10,19,-1,19,15,3,-1,10,8,17,-1,17,19,10,-1,20,2,9,-1,9,21,20,-1,5,2,20,-1,21,9,18,-1,18,22,21,-1]);
let Coordinate469 = browser.currentScene.createNode("Coordinate");
Coordinate469.point = new MFVec3f(new float[-0.3218,-0.2298,0.7043,1.083,0.5974,0.3796,1.096,0.4225,0.3238,2.278,0.6308,-0.5919,2.889,0.6602,-1.322,0.1489,0.2892,0.6667,2.301,0.7666,-0.6065,1.117,0.2554,0.2024,2.208,0.4503,-0.6419,-0.2543,-0.2957,0.5866,2.872,0.5692,-1.343,-0.2774,-0.216,0.4476,1.079,0.5765,0.1724,2.807,0.6568,-1.386,0.1761,0.2697,0.4332,2.269,0.7395,-0.7309,1.111,0.2424,0.0098,2.17,0.434,-0.7637,-0.2034,-0.285,0.3399,2.78,0.5442,-1.406,0.2769,0.1224,0.5591,0.3788,-0.0007,0.4194,0.3389,-0.0414,0.2053]);
IndexedFaceSet468.coord = Coordinate469;

let TextureCoordinate470 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate470.point = new MFVec2f(new float[0.344,0.8611,0.3991,0.8726,0.2757,0.8301,0.4299,0.8749,0.3424,0.8703,0.297,0.8558,0.4,0.8788,0.3445,0.8554,0.397,0.8649,0.2794,0.8281,0.4294,0.8703,0.3456,0.8724,0.3008,0.857,0.3469,0.8565,0.2795,0.829,0.4293,0.8745,0.3996,0.8793,0.3963,0.8659,0.2847,0.831,0.4284,0.8697,0.3046,0.8466,0.3082,0.8407,0.3105,0.8417]);
IndexedFaceSet468.texCoord = TextureCoordinate470;

Shape464.geometry = IndexedFaceSet468;

Transform463.child = new undefined();

Transform463.child[0] = Shape464;

HAnimSegment462.children = new MFNode();

HAnimSegment462.children[0] = Transform463;

HAnimJoint461.children = new MFNode();

HAnimJoint461.children[0] = HAnimSegment462;

HAnimJoint411.children[5] = HAnimJoint461;

let HAnimJoint471 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint471.name = "r_eyebrow_joint";
HAnimJoint471.DEF = "hanim_r_eyebrow_joint";
HAnimJoint471.center = new SFVec3f(new float[-0.9666,61.93,4.753]);
HAnimJoint471.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint471.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment472 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment472.name = "r_eyebrow";
HAnimSegment472.DEF = "hanim_r_eyebrow";
let Transform473 = browser.currentScene.createNode("Transform");
Transform473.translation = new SFVec3f(new float[-0.9666,61.93,4.753]);
let Shape474 = browser.currentScene.createNode("Shape");
let Appearance475 = browser.currentScene.createNode("Appearance");
let Material476 = browser.currentScene.createNode("Material");
Material476.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance475.material = Material476;

let ImageTexture477 = browser.currentScene.createNode("ImageTexture");
ImageTexture477.USE = "JinLOA3TextureAtlas";
Appearance475.texture = ImageTexture477;

Shape474.appearance = Appearance475;

let IndexedFaceSet478 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet478.coordIndex = new MFInt32(new int[2,7,21,-1,21,20,2,-1,4,10,8,-1,8,3,4,-1,3,8,7,-1,7,2,3,-1,2,20,5,-1,5,1,2,-1,4,3,6,-1,3,2,1,-1,1,6,3,-1,5,14,12,-1,12,1,5,-1,0,11,14,-1,14,5,0,-1,6,15,13,-1,13,4,6,-1,1,12,15,-1,15,6,1,-1,8,17,16,-1,16,7,8,-1,21,7,16,-1,16,22,21,-1,9,18,11,-1,11,0,9,-1,4,13,19,-1,19,10,4,-1,10,19,17,-1,17,8,10,-1,20,21,9,-1,9,0,20,-1,5,20,0,-1,21,22,18,-1,18,9,21,-1]);
IndexedFaceSet478.creaseAngle = 3.14159;
IndexedFaceSet478.texCoordIndex = new MFInt32(new int[0,7,21,-1,21,20,0,-1,3,10,8,-1,8,1,3,-1,1,8,7,-1,7,0,1,-1,0,20,5,-1,5,4,0,-1,3,1,6,-1,1,0,4,-1,4,6,1,-1,5,12,11,-1,11,4,5,-1,2,14,12,-1,12,5,2,-1,6,16,15,-1,15,3,6,-1,4,11,16,-1,16,6,4,-1,8,17,13,-1,13,7,8,-1,21,7,13,-1,13,22,21,-1,9,18,14,-1,14,2,9,-1,3,15,19,-1,19,10,3,-1,10,19,17,-1,17,8,10,-1,20,21,9,-1,9,2,20,-1,5,20,2,-1,21,22,18,-1,18,9,21,-1]);
let Coordinate479 = browser.currentScene.createNode("Coordinate");
Coordinate479.point = new MFVec3f(new float[0.3218,-0.2298,0.7043,-1.083,0.5974,0.3796,-1.096,0.4225,0.3238,-2.278,0.6308,-0.5919,-2.889,0.6602,-1.322,-0.1489,0.2892,0.6667,-2.301,0.7666,-0.6065,-1.117,0.2554,0.2024,-2.208,0.4503,-0.6419,0.2543,-0.2957,0.5866,-2.872,0.5692,-1.343,0.2774,-0.216,0.4476,-1.079,0.5765,0.1724,-2.807,0.6568,-1.386,-0.1761,0.2697,0.4332,-2.269,0.7395,-0.7309,-1.111,0.2424,0.0098,-2.17,0.434,-0.7637,0.2034,-0.285,0.3399,-2.78,0.5442,-1.406,-0.2769,0.1224,0.5591,-0.3788,-0.0007,0.4194,-0.3389,-0.0414,0.2053]);
IndexedFaceSet478.coord = Coordinate479;

let TextureCoordinate480 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate480.point = new MFVec2f(new float[0.344,0.8611,0.3991,0.8726,0.2757,0.8301,0.4299,0.8749,0.3424,0.8703,0.297,0.8558,0.4,0.8788,0.3445,0.8554,0.397,0.8649,0.2794,0.8281,0.4294,0.8703,0.3456,0.8724,0.3008,0.857,0.3469,0.8565,0.2795,0.829,0.4293,0.8745,0.3996,0.8793,0.3963,0.8659,0.2847,0.831,0.4284,0.8697,0.3046,0.8466,0.3082,0.8407,0.3105,0.8417]);
IndexedFaceSet478.texCoord = TextureCoordinate480;

Shape474.geometry = IndexedFaceSet478;

Transform473.child = new undefined();

Transform473.child[0] = Shape474;

HAnimSegment472.children = new MFNode();

HAnimSegment472.children[0] = Transform473;

HAnimJoint471.children = new MFNode();

HAnimJoint471.children[0] = HAnimSegment472;

HAnimJoint411.children[6] = HAnimJoint471;

let HAnimJoint481 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint481.name = "temporomandibular";
HAnimJoint481.DEF = "hanim_temporomandibular";
HAnimJoint481.center = new SFVec3f(new float[0,57.450001,0.6835]);
HAnimJoint481.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint481.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment482 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment482.name = "jaw";
HAnimSegment482.DEF = "hanim_jaw";
let Transform483 = browser.currentScene.createNode("Transform");
Transform483.translation = new SFVec3f(new float[0,57.450001,0.6835]);
let Shape484 = browser.currentScene.createNode("Shape");
let Appearance485 = browser.currentScene.createNode("Appearance");
let Material486 = browser.currentScene.createNode("Material");
Material486.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance485.material = Material486;

let ImageTexture487 = browser.currentScene.createNode("ImageTexture");
ImageTexture487.USE = "JinLOA3TextureAtlas";
Appearance485.texture = ImageTexture487;

Shape484.appearance = Appearance485;

let IndexedFaceSet488 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet488.coordIndex = new MFInt32(new int[0,2,12,-1,13,3,15,-1,3,13,4,-1,4,13,12,-1,4,12,2,-1,1,0,18,-1,18,9,1,-1,4,2,10,-1,10,6,8,-1,4,10,8,-1,3,7,24,-1,24,15,3,-1,4,8,7,-1,7,3,4,-1,5,26,24,-1,24,7,5,-1,8,6,5,-1,5,7,8,-1,0,1,2,-1,2,1,9,-1,9,10,2,-1,0,12,11,-1,13,15,14,-1,14,16,13,-1,16,12,13,-1,16,11,12,-1,17,19,18,-1,18,0,17,-1,22,21,20,-1,16,22,20,-1,16,20,11,-1,14,15,24,-1,24,23,14,-1,16,14,23,-1,23,22,16,-1,25,23,24,-1,24,26,25,-1,22,23,25,-1,25,21,22,-1,0,11,17,-1,11,20,19,-1,19,17,11,-1]);
IndexedFaceSet488.creaseAngle = 3.14159;
IndexedFaceSet488.texCoordIndex = new MFInt32(new int[0,2,3,-1,4,5,6,-1,5,4,7,-1,7,4,3,-1,7,3,2,-1,1,0,0,-1,0,8,1,-1,7,2,2,-1,2,9,16,-1,7,2,16,-1,5,13,14,-1,14,6,5,-1,7,15,13,-1,13,5,7,-1,11,12,17,-1,17,10,11,-1,18,19,11,-1,11,10,18,-1,0,20,2,-1,2,20,21,-1,21,2,2,-1,0,22,2,-1,23,25,24,-1,24,26,23,-1,26,22,23,-1,26,2,22,-1,27,28,0,-1,0,0,27,-1,30,29,2,-1,26,30,2,-1,26,2,2,-1,24,25,32,-1,32,31,24,-1,26,24,31,-1,31,33,26,-1,35,34,37,-1,37,36,35,-1,38,34,35,-1,35,39,38,-1,0,2,40,-1,2,2,41,-1,41,40,2,-1]);
let Coordinate489 = browser.currentScene.createNode("Coordinate");
Coordinate489.point = new MFVec3f(new float[0,-1.317,2.914,1.252,-0.7221,2.383,1.083,-0.2249,3.164,0.2244,0.5712,4.007,1.184,0.4815,3.532,0.2244,1.038,1.387,1.073,1.14,1.338,0.2244,0.6336,3.483,1.09,0.6458,3.144,1.93,0.1375,0.7069,1.991,0.7184,0.9789,-1.083,-0.2249,3.164,0,-0.2295,3.585,0,0.1459,4.012,-0.2244,0.5712,4.007,0,0.5712,4.007,-1.184,0.4815,3.532,-1.252,-0.7221,2.383,0,-0.2922,0.9103,-1.93,0.1375,0.7069,-1.991,0.7184,0.9789,-1.073,1.14,1.338,-1.09,0.6458,3.144,-0.2244,0.6336,3.483,0,0.6336,3.483,-0.2244,1.038,1.387,0,0.9359,1.424]);
IndexedFaceSet488.coord = Coordinate489;

let TextureCoordinate490 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate490.point = new MFVec2f(new float[0.2448,0.6067,0.3051,0.6166,0.2959,0.6259,0.2442,0.6234,0.2438,0.6465,0.2546,0.6556,0.2439,0.6556,0.3007,0.651,0.3051,0.6166,0.3007,0.651,0.6104,0.6278,0.6104,0.661,0.6021,0.661,0.2546,0.6556,0.2439,0.6556,0.3007,0.651,0.3007,0.651,0.6021,0.6278,0.6425,0.6334,0.6294,0.6619,0.3051,0.6166,0.3051,0.6166,0.2442,0.6234,0.2438,0.6465,0.2546,0.6556,0.2439,0.6556,0.3007,0.651,0.3051,0.6166,0.3051,0.6166,0.3007,0.651,0.3007,0.651,0.2546,0.6556,0.2439,0.6556,0.3007,0.651,0.6104,0.6278,0.6104,0.661,0.6021,0.661,0.6021,0.6278,0.6425,0.6334,0.6294,0.6619,0.3051,0.6166,0.3051,0.6166]);
IndexedFaceSet488.texCoord = TextureCoordinate490;

Shape484.geometry = IndexedFaceSet488;

Transform483.child = new undefined();

Transform483.child[0] = Shape484;

HAnimSegment482.children = new MFNode();

HAnimSegment482.children[0] = Transform483;

HAnimJoint481.children = new MFNode();

HAnimJoint481.children[0] = HAnimSegment482;

HAnimJoint411.children[7] = HAnimJoint481;

HAnimJoint401.children[1] = HAnimJoint411;

HAnimJoint391.children[1] = HAnimJoint401;

HAnimJoint381.children[1] = HAnimJoint391;

HAnimJoint371.children[1] = HAnimJoint381;

HAnimJoint361.children[1] = HAnimJoint371;

HAnimJoint351.children[1] = HAnimJoint361;

HAnimJoint341.children[1] = HAnimJoint351;

HAnimJoint331.children[1] = HAnimJoint341;

let HAnimJoint491 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint491.name = "l_sternoclavicular";
HAnimJoint491.DEF = "hanim_l_sternoclavicular";
HAnimJoint491.center = new SFVec3f(new float[1.71,52.82,-0.6127]);
HAnimJoint491.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint491.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment492 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment492.name = "l_clavicle";
HAnimSegment492.DEF = "hanim_l_clavicle";
let Transform493 = browser.currentScene.createNode("Transform");
Transform493.translation = new SFVec3f(new float[1.71,52.82,-0.6127]);
let Shape494 = browser.currentScene.createNode("Shape");
let Appearance495 = browser.currentScene.createNode("Appearance");
let Material496 = browser.currentScene.createNode("Material");
Material496.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance495.material = Material496;

let ImageTexture497 = browser.currentScene.createNode("ImageTexture");
ImageTexture497.USE = "JinLOA3TextureAtlas";
Appearance495.texture = ImageTexture497;

Shape494.appearance = Appearance495;

let IndexedFaceSet498 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet498.coordIndex = new MFInt32(new int[9,6,1,-1,1,0,9,-1,6,5,2,-1,2,1,6,-1,8,3,2,-1,2,5,8,-1,8,7,4,-1,4,3,8,-1,9,0,4,-1,4,7,9,-1,2,3,4,-1,2,4,0,-1,1,2,0,-1,13,14,10,-1,12,13,10,-1,11,12,10,-1,6,9,11,-1,11,10,6,-1,9,7,12,-1,12,11,9,-1,7,8,13,-1,13,12,7,-1,8,5,14,-1,14,13,8,-1,5,6,10,-1,10,14,5,-1]);
IndexedFaceSet498.creaseAngle = 3.14159;
IndexedFaceSet498.texCoordIndex = new MFInt32(new int[9,6,1,-1,1,0,9,-1,6,5,2,-1,2,1,6,-1,8,3,2,-1,2,5,8,-1,8,7,4,-1,4,3,8,-1,9,0,4,-1,4,7,9,-1,2,3,4,-1,2,4,0,-1,1,2,0,-1,13,14,10,-1,12,13,10,-1,11,12,10,-1,6,9,11,-1,11,10,6,-1,9,7,12,-1,12,11,9,-1,7,8,13,-1,13,12,7,-1,8,5,14,-1,14,13,8,-1,5,6,10,-1,10,14,5,-1]);
let Coordinate499 = browser.currentScene.createNode("Coordinate");
Coordinate499.point = new MFVec3f(new float[4.99,0.104,-0.8644,5.073,0.4993,0.047,4.706,0.1695,1.198,4.631,-1.819,1.104,4.586,-1.648,-0.1248,3.376,0.3884,1.771,3.891,0.989,-0.0537,4.193,-2.49,-0.5713,4.388,-2.49,1.429,3.761,0.3238,-1.692,-0.1237,0.6312,-0.1883,-0.1237,0.3007,-0.9426,-0.1237,-1.418,-0.2577,-0.1237,-1.392,0.6264,-0.1237,0.2586,0.8179]);
IndexedFaceSet498.coord = Coordinate499;

let TextureCoordinate500 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate500.point = new MFVec2f(new float[0.1911,0.4797,0.171,0.4832,0.1497,0.4806,0.1519,0.4334,0.1831,0.4416,0.1474,0.4856,0.1708,0.4854,0.1784,0.4249,0.1538,0.4251,0.1963,0.4863,0.19,0.5091,0.1847,0.499,0.172,0.4382,0.1568,0.4457,0.1409,0.4926]);
IndexedFaceSet498.texCoord = TextureCoordinate500;

Shape494.geometry = IndexedFaceSet498;

Transform493.child = new undefined();

Transform493.child[0] = Shape494;

HAnimSegment492.children = new MFNode();

HAnimSegment492.children[0] = Transform493;

HAnimJoint491.children = new MFNode();

HAnimJoint491.children[0] = HAnimSegment492;

let HAnimJoint501 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint501.name = "l_acromioclavicular";
HAnimJoint501.DEF = "hanim_l_acromioclavicular";
HAnimJoint501.center = new SFVec3f(new float[5.464,52.060001,-0.5732]);
HAnimJoint501.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint501.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment502 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment502.name = "l_scapula";
HAnimSegment502.DEF = "hanim_l_scapula";
let Transform503 = browser.currentScene.createNode("Transform");
Transform503.translation = new SFVec3f(new float[5.464,52.060001,-0.5732]);
let Shape504 = browser.currentScene.createNode("Shape");
let Appearance505 = browser.currentScene.createNode("Appearance");
let Material506 = browser.currentScene.createNode("Material");
Material506.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance505.material = Material506;

let ImageTexture507 = browser.currentScene.createNode("ImageTexture");
ImageTexture507.USE = "JinLOA3TextureAtlas";
Appearance505.texture = ImageTexture507;

Shape504.appearance = Appearance505;

let IndexedFaceSet508 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet508.coordIndex = new MFInt32(new int[5,4,0,-1,0,1,5,-1,4,3,2,-1,2,0,4,-1,3,9,6,-1,6,2,3,-1,7,5,1,-1,1,8,7,-1,6,8,0,-1,0,2,6,-1,0,8,1,-1,9,7,8,-1,8,6,9,-1,4,5,11,-1,11,10,4,-1,5,7,12,-1,12,11,5,-1,7,9,13,-1,13,12,7,-1,9,3,14,-1,14,13,9,-1,3,4,10,-1,10,14,3,-1,10,11,15,-1,11,12,15,-1,12,13,15,-1,13,14,15,-1,14,10,15,-1]);
IndexedFaceSet508.creaseAngle = 3.14159;
IndexedFaceSet508.texCoordIndex = new MFInt32(new int[5,4,0,-1,0,1,5,-1,4,3,2,-1,2,0,4,-1,3,8,6,-1,6,2,3,-1,9,5,1,-1,1,7,9,-1,6,7,0,-1,0,2,6,-1,0,7,1,-1,12,13,11,-1,11,10,12,-1,4,5,15,-1,15,14,4,-1,5,9,16,-1,16,15,5,-1,13,12,17,-1,17,16,13,-1,8,3,18,-1,18,17,8,-1,3,4,14,-1,14,18,3,-1,14,15,19,-1,15,16,19,-1,16,17,19,-1,17,18,19,-1,18,14,19,-1]);
let Coordinate509 = browser.currentScene.createNode("Coordinate");
Coordinate509.point = new MFVec3f(new float[1.935,1.466,-0.0932,1.515,0.6492,-1.732,1.534,0.7105,1.619,-0.3782,1.139,1.732,0.1374,1.74,-0.0932,0.0076,1.074,-1.731,0.8341,-1.572,1.39,0.4391,-1.74,-0.6109,0.8275,-1.58,-0.6098,0.6342,-1.74,1.389,-1.237,1.407,-0.0712,-1.547,0.8515,-1.142,-0.7525,-1.603,-0.4744,-0.7511,-1.595,1.16,-1.51,1.034,1.296,-1.59,-0.0185,0.1351]);
IndexedFaceSet508.coord = Coordinate509;

let TextureCoordinate510 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate510.point = new MFVec2f(new float[0.1715,0.4655,0.1797,0.4646,0.1569,0.4642,0.1474,0.4856,0.1708,0.4854,0.1963,0.4863,0.1544,0.4288,0.1782,0.4286,0.1538,0.4251,0.1784,0.4249,0.1544,0.4288,0.1782,0.4286,0.1538,0.4251,0.1784,0.4249,0.1703,0.4865,0.1895,0.487,0.1761,0.4271,0.1552,0.4287,0.1491,0.4835,0.1671,0.4618]);
IndexedFaceSet508.texCoord = TextureCoordinate510;

Shape504.geometry = IndexedFaceSet508;

Transform503.child = new undefined();

Transform503.child[0] = Shape504;

HAnimSegment502.children = new MFNode();

HAnimSegment502.children[0] = Transform503;

HAnimJoint501.children = new MFNode();

HAnimJoint501.children[0] = HAnimSegment502;

let HAnimJoint511 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint511.name = "l_shoulder";
HAnimJoint511.DEF = "hanim_l_shoulder";
HAnimJoint511.center = new SFVec3f(new float[7.336,51.48,-0.1452]);
HAnimJoint511.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint511.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment512 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment512.name = "l_upperarm";
HAnimSegment512.DEF = "hanim_l_upperarm";
let Transform513 = browser.currentScene.createNode("Transform");
Transform513.translation = new SFVec3f(new float[7.336,51.48,-0.1452]);
let Shape514 = browser.currentScene.createNode("Shape");
let Appearance515 = browser.currentScene.createNode("Appearance");
let Material516 = browser.currentScene.createNode("Material");
Material516.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance515.material = Material516;

let ImageTexture517 = browser.currentScene.createNode("ImageTexture");
ImageTexture517.USE = "JinLOA3TextureAtlas";
Appearance515.texture = ImageTexture517;

Shape514.appearance = Appearance515;

let IndexedFaceSet518 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet518.coordIndex = new MFInt32(new int[2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,36,37,38,-1,35,36,38,-1,39,35,38,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1,26,25,20,-1,20,21,26,-1,27,26,21,-1,21,22,27,-1,28,27,22,-1,22,23,28,-1,29,28,23,-1,23,24,29,-1,25,29,24,-1,24,20,25,-1,31,30,25,-1,25,26,31,-1,32,31,26,-1,26,27,32,-1,33,32,27,-1,27,28,33,-1,34,33,28,-1,28,29,34,-1,30,34,29,-1,29,25,30,-1,36,35,30,-1,30,31,36,-1,37,36,31,-1,31,32,37,-1,38,37,32,-1,32,33,38,-1,39,38,33,-1,33,34,39,-1,35,39,34,-1,34,30,35,-1]);
IndexedFaceSet518.creaseAngle = 3.14159;
IndexedFaceSet518.texCoordIndex = new MFInt32(new int[2,0,1,-1,3,2,1,-1,61,3,1,-1,1,0,5,-1,5,6,1,-1,0,2,7,-1,7,5,0,-1,2,3,8,-1,8,7,2,-1,25,4,9,-1,9,26,25,-1,4,1,6,-1,6,9,4,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,27,9,14,-1,14,28,27,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,29,14,19,-1,19,30,29,-1,14,11,16,-1,16,19,14,-1,54,35,36,-1,53,54,36,-1,37,53,36,-1,20,21,16,-1,16,15,20,-1,22,20,15,-1,15,17,22,-1,23,22,17,-1,17,18,23,-1,24,32,31,-1,31,19,24,-1,21,24,19,-1,19,16,21,-1,40,41,38,-1,38,39,40,-1,43,56,55,-1,55,42,43,-1,45,43,42,-1,42,44,45,-1,47,45,44,-1,44,46,47,-1,41,47,46,-1,46,38,41,-1,48,49,41,-1,41,40,48,-1,50,58,57,-1,57,43,50,-1,51,50,43,-1,43,45,51,-1,52,51,45,-1,45,47,52,-1,49,52,47,-1,47,41,49,-1,34,33,49,-1,49,48,34,-1,35,60,59,-1,59,50,35,-1,36,35,50,-1,50,51,36,-1,37,36,51,-1,51,52,37,-1,33,37,52,-1,52,49,33,-1]);
let Coordinate519 = browser.currentScene.createNode("Coordinate");
Coordinate519.point = new MFVec3f(new float[1.164,1.767,-1.68,2.32,1.756,0.0337,1.047,1.768,1.663,-0.895,1.785,0.9556,-0.8229,1.784,-1.11,1.382,0.4997,-2.31,2.978,0.4855,0.057,1.221,0.5011,2.307,-1.462,0.525,1.33,-1.362,0.5241,-1.523,1.36,-2.014,-2.31,2.956,-2.028,0.057,1.198,-2.012,2.307,-1.484,-1.988,1.33,-1.384,-1.989,-1.523,1.398,-3.089,-2.442,3.087,-3.104,0.0619,1.228,-3.087,2.442,-1.61,-3.062,1.409,-1.505,-3.063,-1.61,0.8845,-1.238,-1.939,2.105,-1.248,-0.4543,1.473,-1.243,1.629,-0.1375,-1.229,1.432,-0.5011,-1.225,-0.7734,0.9027,-7.045,-1.569,2.17,-7.056,-0.378,1.514,-7.051,1.293,-0.1588,-7.036,1.135,-0.5365,-7.032,-0.634,0.9066,-11.1,-1.511,2.127,-11.11,-0.3651,1.495,-11.1,1.243,-0.1154,-11.09,1.091,-0.4791,-11.08,-0.6115,0.852,-11.65,-0.8985,1.567,-11.65,-0.2267,1.197,-11.65,0.716,0.2531,-11.64,0.6268,0.0399,-11.64,-0.3711]);
IndexedFaceSet518.coord = Coordinate519;

let TextureCoordinate520 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate520.point = new MFVec2f(new float[0.2986,0.2114,0.2726,0.2114,0.3201,0.2114,0.3415,0.2114,0.2466,0.2114,0.2979,0.2417,0.2726,0.2417,0.3197,0.2417,0.3418,0.2417,0.2473,0.2417,0.2979,0.3018,0.2726,0.3018,0.3197,0.3018,0.3418,0.3018,0.2473,0.3018,0.2978,0.3276,0.2726,0.3276,0.3197,0.3276,0.3419,0.3276,0.2474,0.3276,0.2932,0.2834,0.2689,0.2834,0.316,0.2834,0.3322,0.2834,0.245,0.2834,0.2251,0.2114,0.2255,0.2417,0.2255,0.2417,0.2255,0.3018,0.2255,0.3018,0.2255,0.3276,0.2255,0.3276,0.2159,0.2834,0.4315,0.6736,0.442,0.6736,0.3947,0.6736,0.4041,0.6736,0.418,0.6736,0.4296,0.6167,0.4409,0.6167,0.4415,0.6485,0.4303,0.6485,0.3965,0.6167,0.3953,0.6485,0.4047,0.6167,0.4053,0.6485,0.4189,0.6167,0.418,0.6485,0.4415,0.6706,0.4306,0.6706,0.395,0.6706,0.4051,0.6706,0.4182,0.6706,0.3746,0.6736,0.3851,0.6736,0.384,0.6167,0.3845,0.6485,0.3845,0.6485,0.3846,0.6706,0.3846,0.6706,0.3851,0.6736,0.3481,0.2114]);
IndexedFaceSet518.texCoord = TextureCoordinate520;

Shape514.geometry = IndexedFaceSet518;

Transform513.child = new undefined();

Transform513.child[0] = Shape514;

HAnimSegment512.children = new MFNode();

HAnimSegment512.children[0] = Transform513;

HAnimJoint511.children = new MFNode();

HAnimJoint511.children[0] = HAnimSegment512;

let HAnimJoint521 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint521.name = "l_elbow";
HAnimJoint521.DEF = "hanim_l_elbow";
HAnimJoint521.center = new SFVec3f(new float[8.093,40.380001,-0.2502]);
HAnimJoint521.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint521.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment522 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment522.name = "l_forearm";
HAnimSegment522.DEF = "hanim_l_forearm";
let Transform523 = browser.currentScene.createNode("Transform");
Transform523.translation = new SFVec3f(new float[8.093,40.380001,-0.2502]);
let Shape524 = browser.currentScene.createNode("Shape");
let Appearance525 = browser.currentScene.createNode("Appearance");
let Material526 = browser.currentScene.createNode("Material");
Material526.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance525.material = Material526;

let ImageTexture527 = browser.currentScene.createNode("ImageTexture");
ImageTexture527.USE = "JinLOA3TextureAtlas";
Appearance525.texture = ImageTexture527;

Shape524.appearance = Appearance525;

let IndexedFaceSet528 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet528.coordIndex = new MFInt32(new int[2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,21,22,23,-1,20,21,23,-1,24,20,23,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1]);
IndexedFaceSet528.creaseAngle = 3.14159;
IndexedFaceSet528.texCoordIndex = new MFInt32(new int[2,25,26,-1,3,2,26,-1,4,3,26,-1,0,1,6,-1,6,5,0,-1,27,2,7,-1,7,28,27,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,29,7,12,-1,12,30,29,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,31,12,17,-1,17,32,31,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,34,22,23,-1,33,34,23,-1,24,33,23,-1,21,20,15,-1,15,16,21,-1,22,36,35,-1,35,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1]);
let Coordinate529 = browser.currentScene.createNode("Coordinate");
Coordinate529.point = new MFVec3f(new float[0.215,0.3047,-1.152,1.155,0.2966,-0.2588,0.6199,0.3013,1.04,-0.6505,0.3122,0.9491,-0.9008,0.3143,-0.4054,0.1442,-0.8448,-1.625,1.472,-0.8561,-0.4271,0.7164,-0.8496,1.625,-1.079,-0.8342,1.482,-1.433,-0.8312,-0.6588,0.1328,-3.5,-1.607,1.551,-3.513,-0.4225,0.781,-2.925,1.61,-1.136,-2.909,1.468,-1.551,-3.486,-0.6519,0.0592,-8.713,-1.437,1.093,-8.722,-0.1279,0.5047,-8.716,1.51,-0.8932,-8.704,1.377,-1.169,-8.702,-0.3428,0.0092,-9.336,-0.8855,0.7154,-9.342,0.0084,0.3135,-9.339,1.043,-0.6412,-9.331,0.9519,-0.8292,-9.329,-0.1383]);
IndexedFaceSet528.coord = Coordinate529;

let TextureCoordinate530 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate530.point = new MFVec2f(new float[0.4222,0.6201,0.4327,0.6201,0.3884,0.6201,0.3987,0.6201,0.4103,0.6201,0.4213,0.6265,0.4321,0.6265,0.3894,0.6265,0.399,0.6265,0.4105,0.6265,0.4214,0.6413,0.4323,0.6413,0.389,0.6381,0.3992,0.6381,0.4103,0.6413,0.4213,0.6705,0.4336,0.6705,0.3899,0.6705,0.3981,0.6705,0.4094,0.6705,0.4215,0.674,0.4346,0.674,0.3899,0.674,0.398,0.674,0.4083,0.674,0.3787,0.6201,0.3682,0.6201,0.3787,0.6201,0.3782,0.6265,0.3782,0.6265,0.3783,0.6413,0.3783,0.6413,0.3796,0.6705,0.3676,0.674,0.3806,0.674,0.3796,0.6705,0.3806,0.674]);
IndexedFaceSet528.texCoord = TextureCoordinate530;

Shape524.geometry = IndexedFaceSet528;

Transform523.child = new undefined();

Transform523.child[0] = Shape524;

HAnimSegment522.children = new MFNode();

HAnimSegment522.children[0] = Transform523;

HAnimJoint521.children = new MFNode();

HAnimJoint521.children[0] = HAnimSegment522;

let HAnimJoint531 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint531.name = "l_radiocarpal";
HAnimJoint531.DEF = "hanim_l_radiocarpal";
HAnimJoint531.center = new SFVec3f(new float[7.899,31.43,-0.3809]);
HAnimJoint531.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint531.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment532 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment532.name = "l_carpal";
HAnimSegment532.DEF = "hanim_l_carpal";
let Transform533 = browser.currentScene.createNode("Transform");
Transform533.translation = new SFVec3f(new float[7.899,31.43,-0.3809]);
let Shape534 = browser.currentScene.createNode("Shape");
let Appearance535 = browser.currentScene.createNode("Appearance");
let Material536 = browser.currentScene.createNode("Material");
Material536.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance535.material = Material536;

let ImageTexture537 = browser.currentScene.createNode("ImageTexture");
ImageTexture537.USE = "JinLOA3TextureAtlas";
Appearance535.texture = ImageTexture537;

Shape534.appearance = Appearance535;

let IndexedFaceSet538 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet538.coordIndex = new MFInt32(new int[36,37,38,-1,38,41,36,-1,44,45,54,-1,31,4,53,-1,53,30,31,-1,6,10,11,-1,11,7,6,-1,11,10,33,-1,33,32,11,-1,34,24,7,-1,7,11,34,-1,13,17,15,-1,15,27,13,-1,25,22,35,-1,30,5,20,-1,13,34,11,-1,11,32,13,-1,23,22,28,-1,28,29,23,-1,17,16,14,-1,14,15,17,-1,18,5,53,-1,53,19,18,-1,9,8,16,-1,16,17,9,-1,14,42,43,-1,43,15,14,-1,21,16,8,-1,8,33,21,-1,21,35,22,-1,22,23,21,-1,39,40,41,-1,41,38,39,-1,26,20,24,-1,27,12,20,-1,20,26,27,-1,3,30,12,-1,12,43,3,-1,0,54,28,-1,28,25,0,-1,13,32,9,-1,9,17,13,-1,28,31,29,-1,29,42,14,-1,14,23,29,-1,16,21,23,-1,23,14,16,-1,30,3,2,-1,2,31,30,-1,8,9,32,-1,32,33,8,-1,33,10,35,-1,35,21,33,-1,35,10,6,-1,6,25,35,-1,13,27,26,-1,26,34,13,-1,34,26,24,-1,1,0,47,-1,47,46,1,-1,25,48,47,-1,47,0,25,-1,25,6,49,-1,49,48,25,-1,6,7,50,-1,50,49,6,-1,24,51,50,-1,50,7,24,-1,24,1,46,-1,46,51,24,-1,2,3,43,-1,43,42,2,-1,15,43,12,-1,12,27,15,-1,29,31,2,-1,2,42,29,-1,18,44,52,-1,52,5,18,-1,28,22,25,-1,18,19,45,-1,45,44,18,-1,1,24,52,-1,52,44,1,-1,45,4,28,-1,28,4,31,-1,45,19,4,-1,37,36,46,-1,46,47,37,-1,48,38,37,-1,37,47,48,-1,39,38,48,-1,48,49,39,-1,40,39,49,-1,49,50,40,-1,51,41,40,-1,40,50,51,-1,36,41,51,-1,51,46,36,-1,24,20,52,-1,52,20,5,-1,53,5,30,-1,53,4,19,-1,54,45,28,-1,44,54,0,-1,0,1,44,-1,20,12,30,-1]);
IndexedFaceSet538.creaseAngle = 3.14159;
IndexedFaceSet538.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,4,5,6,-1,8,9,10,-1,10,7,8,-1,12,13,14,-1,14,11,12,-1,14,13,15,-1,15,16,14,-1,17,18,11,-1,11,14,17,-1,20,21,22,-1,22,19,20,-1,23,24,25,-1,7,26,27,-1,20,17,14,-1,14,16,20,-1,28,24,29,-1,29,30,28,-1,21,31,32,-1,32,22,21,-1,33,26,10,-1,10,34,33,-1,35,36,31,-1,31,21,35,-1,32,37,38,-1,38,22,32,-1,39,31,36,-1,36,15,39,-1,39,25,24,-1,24,28,39,-1,40,41,3,-1,3,2,40,-1,42,27,18,-1,19,43,27,-1,27,42,19,-1,44,7,43,-1,43,38,44,-1,45,6,29,-1,29,23,45,-1,20,16,35,-1,35,21,20,-1,29,8,30,-1,30,37,32,-1,32,28,30,-1,31,39,28,-1,28,32,31,-1,7,44,46,-1,46,8,7,-1,36,35,16,-1,16,15,36,-1,15,13,25,-1,25,39,15,-1,25,13,12,-1,12,23,25,-1,20,19,42,-1,42,17,20,-1,17,42,18,-1,47,45,48,-1,48,49,47,-1,23,50,48,-1,48,45,23,-1,23,12,51,-1,51,50,23,-1,12,11,52,-1,52,51,12,-1,18,53,52,-1,52,11,18,-1,18,47,49,-1,49,53,18,-1,46,44,38,-1,38,37,46,-1,22,38,43,-1,43,19,22,-1,30,8,46,-1,46,37,30,-1,33,4,54,-1,54,26,33,-1,29,24,23,-1,33,34,5,-1,5,4,33,-1,47,18,54,-1,54,4,47,-1,5,9,29,-1,29,9,8,-1,5,34,9,-1,1,0,49,-1,49,48,1,-1,50,2,1,-1,1,48,50,-1,40,2,50,-1,50,51,40,-1,41,40,51,-1,51,52,41,-1,53,3,41,-1,41,52,53,-1,0,3,53,-1,53,49,0,-1,18,27,54,-1,54,27,26,-1,10,26,7,-1,10,9,34,-1,6,5,29,-1,4,6,45,-1,45,47,4,-1,27,43,7,-1]);
let Coordinate539 = browser.currentScene.createNode("Coordinate");
Coordinate539.point = new MFVec3f(new float[0.615,-0.6885,1.418,-0.2519,-0.7698,1.606,0.894,-4.14,1.405,0.2357,-4.221,1.472,0.7106,-2.848,1.537,-0.2913,-2.795,1.561,0.3511,-0.9723,-1.085,-0.332,-1.036,-1.083,0.6255,-3.82,-1.576,0.076,-3.93,-1.587,0.5517,-2.055,-1.417,-0.1089,-2.163,-1.46,0.0149,-3.564,0.866,-0.0687,-3.436,-0.8707,0.9147,-4.192,-0.1153,0.2445,-4.253,-0.1554,0.7883,-4.028,-0.9461,0.1878,-4.111,-0.9619,-0.1749,-2.558,2.351,0.5105,-2.795,2.344,-0.1613,-2.264,1.005,0.8473,-3.286,-0.8304,0.9399,-2.17,-0.0115,0.979,-3.369,-0.052,-0.4715,-0.9186,0.2017,0.7286,-0.8328,0.1541,-0.1459,-2.365,0.1498,-0.0501,-3.575,-0.0433,0.969,-2.127,0.9718,0.9825,-3.348,0.8866,0.0909,-3.383,1.556,0.8371,-3.169,1.547,0.041,-3.318,-1.568,0.5921,-3.194,-1.578,-0.2264,-2.304,-0.7602,0.8375,-2.137,-0.8044,-0.2818,0.1713,1.187,0.2277,0.2301,1.179,0.2277,0.4881,0.2572,0.1331,0.2707,-0.6889,-0.3764,0.2118,-0.6809,-0.4614,0.4054,0.2565,0.9242,-4.241,0.7847,0.2647,-4.324,0.8047,-0.3043,-1.534,2.164,0.8425,-1.789,2.123,-0.201,-0.4603,1.254,0.3856,-0.405,1.248,0.4965,-0.283,0.2553,0.2563,-0.4079,-0.7647,-0.3314,-0.4586,-0.758,-0.3822,-0.3913,0.2697,-0.4485,-1.891,1.52,0.3893,-2.936,1.555,0.7623,-1.12,1.731]);
IndexedFaceSet538.coord = Coordinate539;

let TextureCoordinate540 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate540.point = new MFVec2f(new float[0.4538,0.6821,0.4536,0.6827,0.4366,0.6851,0.4365,0.6843,0.4719,0.6661,0.4711,0.6637,0.4639,0.67,0.4606,0.6487,0.4605,0.6507,0.4603,0.6538,0.4606,0.6529,0.4117,0.6708,0.4117,0.6714,0.4055,0.6612,0.4047,0.6602,0.4025,0.6505,0.4027,0.6493,0.4177,0.6589,0.4355,0.6719,0.431,0.6469,0.4157,0.6482,0.414,0.6419,0.4289,0.6406,0.4346,0.6727,0.4316,0.6601,0.4169,0.6604,0.4607,0.6543,0.4504,0.6593,0.4308,0.6489,0.4498,0.6605,0.4482,0.6491,0.4143,0.6427,0.4297,0.6411,0.4754,0.6565,0.4752,0.6543,0.4024,0.6436,0.4026,0.6446,0.4463,0.6407,0.4467,0.6399,0.4164,0.6496,0.419,0.6831,0.4192,0.6825,0.4346,0.6583,0.4478,0.647,0.4591,0.6409,0.4581,0.6741,0.4578,0.6416,0.4616,0.6733,0.4549,0.6767,0.455,0.6762,0.4365,0.6779,0.4176,0.6767,0.4177,0.6762,0.4368,0.6768,0.46,0.6628]);
IndexedFaceSet538.texCoord = TextureCoordinate540;

Shape534.geometry = IndexedFaceSet538;

Transform533.child = new undefined();

Transform533.child[0] = Shape534;

HAnimSegment532.children = new MFNode();

HAnimSegment532.children[0] = Transform533;

HAnimJoint531.children = new MFNode();

HAnimJoint531.children[0] = HAnimSegment532;

let HAnimJoint541 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint541.name = "l_carpometacarpal_1";
HAnimJoint541.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint541.center = new SFVec3f(new float[8.205,29.6,1.302]);
HAnimJoint541.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint541.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment542 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment542.name = "l_metacarpal_1";
HAnimSegment542.DEF = "hanim_l_metacarpal_1";
let Transform543 = browser.currentScene.createNode("Transform");
Transform543.translation = new SFVec3f(new float[8.205,29.6,1.302]);
let Shape544 = browser.currentScene.createNode("Shape");
let Appearance545 = browser.currentScene.createNode("Appearance");
let Material546 = browser.currentScene.createNode("Material");
Material546.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance545.material = Material546;

let ImageTexture547 = browser.currentScene.createNode("ImageTexture");
ImageTexture547.USE = "JinLOA3TextureAtlas";
Appearance545.texture = ImageTexture547;

Shape544.appearance = Appearance545;

let IndexedFaceSet548 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet548.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1]);
IndexedFaceSet548.creaseAngle = 3.14159;
IndexedFaceSet548.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1]);
let Coordinate549 = browser.currentScene.createNode("Coordinate");
Coordinate549.point = new MFVec3f(new float[-0.375,-0.9214,0.322,-0.212,-1.009,0.0858,-0.1385,-0.9095,0.5036,0.0245,-0.9973,0.2674,-0.533,-0.8014,0.1471,-0.4779,-0.7267,0.4605,-0.2413,-0.7148,0.6421,0.0584,-0.7717,0.6012,0.2213,-0.8595,0.365,0.1662,-0.9342,0.0516,-0.0704,-0.9461,-0.13,-0.3701,-0.8892,-0.0891,-0.4847,-0.0791,-0.0791,-0.4228,0.0048,0.2724,-0.1414,0.0189,0.4885,0.1948,-0.0449,0.4426,0.3887,-0.1493,0.1616,0.3268,-0.2331,-0.1899,0.0453,-0.2473,-0.406,-0.2908,-0.1835,-0.3601,-0.5058,0.0372,-0.1235,-0.4385,0.1283,0.2586,-0.1325,0.1437,0.4936,0.233,0.0743,0.4437,0.4438,-0.0392,0.1381,0.3765,-0.1303,-0.244,0.0705,-0.1457,-0.479,-0.2949,-0.0763,-0.4291,-0.3497,0.1392,-0.1192,-0.3021,0.2036,0.1511,-0.0857,0.2145,0.3172,0.1727,0.1654,0.2819,0.3218,0.0852,0.0659,0.2742,0.0207,-0.2044,0.0578,0.0098,-0.3705,-0.2006,0.0589,-0.3352,-0.0069,0.159,-0.0407]);
IndexedFaceSet548.coord = Coordinate549;

let TextureCoordinate550 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate550.point = new MFVec2f(new float[0.469,0.6546,0.4646,0.6538,0.4679,0.6539,0.4723,0.6548,0.4715,0.6565,0.4657,0.6558,0.4749,0.6566,0.4741,0.6561,0.4697,0.6552,0.4639,0.6545,0.4606,0.6544,0.4613,0.655,0.468,0.6634,0.4615,0.6626,0.472,0.6635,0.4712,0.6629,0.466,0.6619,0.4595,0.6611,0.4555,0.661,0.4563,0.6616,0.4678,0.6645,0.4607,0.6637,0.4721,0.6647,0.4712,0.664,0.4655,0.6629,0.4585,0.6621,0.4541,0.6619,0.455,0.6626,0.4658,0.6652,0.4608,0.6646,0.4689,0.6653,0.4682,0.6649,0.4642,0.6641,0.4592,0.6635,0.4561,0.6634,0.4568,0.6639,0.4622,0.6648]);
IndexedFaceSet548.texCoord = TextureCoordinate550;

Shape544.geometry = IndexedFaceSet548;

Transform543.child = new undefined();

Transform543.child[0] = Shape544;

HAnimSegment542.children = new MFNode();

HAnimSegment542.children[0] = Transform543;

HAnimJoint541.children = new MFNode();

HAnimJoint541.children[0] = HAnimSegment542;

let HAnimJoint551 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint551.name = "l_metacarpophalangeal_1";
HAnimJoint551.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint551.center = new SFVec3f(new float[8.08,28.73,1.55]);
HAnimJoint551.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint551.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment552 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment552.name = "l_carpal_proximal_phalanx_1";
HAnimSegment552.DEF = "hanim_l_carpal_proximal_phalanx_1";
let Transform553 = browser.currentScene.createNode("Transform");
Transform553.translation = new SFVec3f(new float[8.08,28.73,1.55]);
let Shape554 = browser.currentScene.createNode("Shape");
let Appearance555 = browser.currentScene.createNode("Appearance");
let Material556 = browser.currentScene.createNode("Material");
Material556.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance555.material = Material556;

let ImageTexture557 = browser.currentScene.createNode("ImageTexture");
ImageTexture557.USE = "JinLOA3TextureAtlas";
Appearance555.texture = ImageTexture557;

Shape554.appearance = Appearance555;

let IndexedFaceSet558 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet558.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1]);
IndexedFaceSet558.creaseAngle = 3.14159;
IndexedFaceSet558.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1]);
let Coordinate559 = browser.currentScene.createNode("Coordinate");
Coordinate559.point = new MFVec3f(new float[-0.5258,-1.001,0.2196,-0.3901,-1.074,0.023,-0.3376,-1.029,0.3799,-0.2019,-1.102,0.1833,-0.6244,-0.8415,0.0751,-0.585,-0.8078,0.3428,-0.3968,-0.8361,0.503,-0.1539,-0.912,0.4758,-0.0182,-0.985,0.2792,-0.0576,-1.019,0.0115,-0.2458,-0.9905,-0.1487,-0.4887,-0.9145,-0.1215,-0.4357,-0.0607,-0.0712,-0.3915,-0.0229,0.229,-0.1676,-0.0565,0.4196,0.1048,-0.1417,0.3891,0.2662,-0.2286,0.1552,0.222,-0.2663,-0.1451,-0.0018,-0.2328,-0.3357,-0.2743,-0.1476,-0.3051,-0.4293,0.0682,-0.1026,-0.3812,0.1092,0.2242,-0.1376,0.0727,0.4317,0.1589,-0.02,0.3984,0.3346,-0.1146,0.1438,0.2865,-0.1556,-0.1829,0.0429,-0.1191,-0.3904,-0.2536,-0.0264,-0.3572,-0.2801,0.1629,-0.0879,-0.2461,0.1919,0.1432,-0.0738,0.1661,0.2899,0.1359,0.1005,0.2664,0.2601,0.0337,0.0864,0.2261,0.0046,-0.1447,0.0538,0.0304,-0.2914,-0.1558,0.096,-0.2679,0.0055,0.1486,-0.0096]);
IndexedFaceSet558.coord = Coordinate559;

let TextureCoordinate560 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate560.point = new MFVec2f(new float[0.4716,0.6458,0.468,0.6451,0.471,0.6448,0.4746,0.6455,0.4739,0.6476,0.469,0.6473,0.4769,0.6473,0.4764,0.6466,0.4727,0.6459,0.4678,0.6456,0.4648,0.6459,0.4653,0.6466,0.4718,0.655,0.4662,0.6546,0.4753,0.6546,0.4748,0.6538,0.4704,0.653,0.4649,0.6527,0.4613,0.653,0.4619,0.6538,0.4717,0.6562,0.4657,0.6558,0.4756,0.6559,0.475,0.655,0.4702,0.6541,0.4642,0.6537,0.4603,0.654,0.4609,0.6549,0.4702,0.657,0.4659,0.6567,0.4729,0.6567,0.4725,0.6561,0.4692,0.6555,0.4649,0.6552,0.4622,0.6555,0.4626,0.6561,0.4674,0.6566]);
IndexedFaceSet558.texCoord = TextureCoordinate560;

Shape554.geometry = IndexedFaceSet558;

Transform553.child = new undefined();

Transform553.child[0] = Shape554;

HAnimSegment552.children = new MFNode();

HAnimSegment552.children[0] = Transform553;

HAnimJoint551.children = new MFNode();

HAnimJoint551.children[0] = HAnimSegment552;

let HAnimJoint561 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint561.name = "l_carpal_interphalangeal_1";
HAnimJoint561.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint561.center = new SFVec3f(new float[7.832,27.85,1.735]);
HAnimJoint561.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint561.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment562 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment562.name = "l_carpal_distal_phalanx_1";
HAnimSegment562.DEF = "hanim_l_carpal_distal_phalanx_1";
let Transform563 = browser.currentScene.createNode("Transform");
Transform563.translation = new SFVec3f(new float[7.832,27.85,1.735]);
let Shape564 = browser.currentScene.createNode("Shape");
let Appearance565 = browser.currentScene.createNode("Appearance");
let Material566 = browser.currentScene.createNode("Material");
Material566.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance565.material = Material566;

let ImageTexture567 = browser.currentScene.createNode("ImageTexture");
ImageTexture567.USE = "JinLOA3TextureAtlas";
Appearance565.texture = ImageTexture567;

Shape564.appearance = Appearance565;

let IndexedFaceSet568 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet568.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1]);
IndexedFaceSet568.creaseAngle = 3.14159;
IndexedFaceSet568.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1]);
let Coordinate569 = browser.currentScene.createNode("Coordinate");
Coordinate569.point = new MFVec3f(new float[-0.5817,-0.8003,0.0727,-0.4584,-0.8658,-0.106,-0.4372,-0.8552,0.2109,-0.314,-0.9207,0.0322,-0.6359,-0.6464,-0.0377,-0.62,-0.6384,0.2,-0.4756,-0.6933,0.3382,-0.2748,-0.7836,0.3078,-0.1516,-0.8492,0.1291,-0.1675,-0.8572,-0.1085,-0.3119,-0.8023,-0.2467,-0.5127,-0.712,-0.2163,-0.374,-0.0036,-0.0838,-0.3562,0.0054,0.1827,-0.1843,-0.0599,0.3471,0.0408,-0.1612,0.313,0.1875,-0.2392,0.1004,0.1697,-0.2482,-0.1661,-0.0022,-0.1829,-0.3305,-0.2274,-0.0816,-0.2964,-0.2142,0.1671,-0.0744,-0.2005,0.174,0.1306,-0.0683,0.1238,0.257,0.1048,0.0459,0.2308,0.2176,-0.0141,0.0673,0.2039,-0.021,-0.1376,0.0717,0.0292,-0.264,-0.1014,0.1072,-0.2378,0.0214,0.1175,-0.006]);
IndexedFaceSet568.coord = Coordinate569;

let TextureCoordinate570 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate570.point = new MFVec2f(new float[0.4723,0.6394,0.469,0.6388,0.4716,0.6383,0.4749,0.6389,0.4747,0.6409,0.4703,0.6408,0.4773,0.6404,0.4767,0.6395,0.4734,0.6389,0.469,0.6389,0.4664,0.6394,0.467,0.6402,0.4744,0.647,0.4694,0.6469,0.4774,0.6463,0.4768,0.6454,0.4729,0.6447,0.4679,0.6446,0.4649,0.6452,0.4655,0.6461,0.4734,0.6485,0.4696,0.6485,0.4758,0.6481,0.4753,0.6473,0.4722,0.6468,0.4684,0.6467,0.4661,0.6472,0.4666,0.6479,0.4709,0.648]);
IndexedFaceSet568.texCoord = TextureCoordinate570;

Shape564.geometry = IndexedFaceSet568;

Transform563.child = new undefined();

Transform563.child[0] = Shape564;

HAnimSegment562.children = new MFNode();

HAnimSegment562.children[0] = Transform563;

HAnimJoint561.children = new MFNode();

HAnimJoint561.children[0] = HAnimSegment562;

HAnimJoint551.children[1] = HAnimJoint561;

HAnimJoint541.children[1] = HAnimJoint551;

HAnimJoint531.children[1] = HAnimJoint541;

let HAnimJoint571 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint571.name = "l_carpometacarpal_2";
HAnimJoint571.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint571.center = new SFVec3f(new float[8.376,28.549999,0.5997]);
HAnimJoint571.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint571.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment572 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment572.name = "l_metacarpal_2";
HAnimSegment572.DEF = "hanim_l_metacarpal_2";
let Transform573 = browser.currentScene.createNode("Transform");
Transform573.translation = new SFVec3f(new float[8.376,28.549999,0.5997]);
let Shape574 = browser.currentScene.createNode("Shape");
let Appearance575 = browser.currentScene.createNode("Appearance");
let Material576 = browser.currentScene.createNode("Material");
Material576.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance575.material = Material576;

let ImageTexture577 = browser.currentScene.createNode("ImageTexture");
ImageTexture577.USE = "JinLOA3TextureAtlas";
Appearance575.texture = ImageTexture577;

Shape574.appearance = Appearance575;

let IndexedFaceSet578 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet578.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1]);
IndexedFaceSet578.creaseAngle = 3.14159;
IndexedFaceSet578.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1]);
let Coordinate579 = browser.currentScene.createNode("Coordinate");
Coordinate579.point = new MFVec3f(new float[-0.0229,-1.485,0.1659,-0.0277,-1.493,-0.0662,0.2213,-1.467,0.1625,0.2166,-1.475,-0.0696,-0.2194,-1.321,0.162,-0.0326,-1.302,0.3335,0.2116,-1.284,0.3301,0.3912,-1.276,0.1535,0.3864,-1.284,-0.0786,0.1997,-1.303,-0.2501,-0.0446,-1.321,-0.2467,-0.2242,-1.329,-0.0701,-0.3384,-0.3382,0.1488,-0.1289,-0.3166,0.3412,0.1617,-0.2951,0.3371,0.3631,-0.2862,0.139,0.3574,-0.2953,-0.1371,0.148,-0.3169,-0.3295,-0.1426,-0.3384,-0.3254,-0.3441,-0.3473,-0.1273,-0.3796,-0.1843,0.1553,-0.1523,-0.1608,0.364,0.1629,-0.1375,0.3596,0.3814,-0.1279,0.1446,0.3753,-0.1377,-0.1549,0.148,-0.1611,-0.3636,-0.1672,-0.1845,-0.3592,-0.3858,-0.1941,-0.1442,-0.2808,-0.0217,0.1042,-0.1201,-0.0051,0.2518,0.1029,0.0114,0.2486,0.2574,0.0182,0.0967,0.253,0.0113,-0.1151,0.0923,-0.0053,-0.2627,-0.1306,-0.0218,-0.2596,-0.2851,-0.0286,-0.1076,-0.0187,0.0593,-0.0078]);
IndexedFaceSet578.coord = Coordinate579;

let TextureCoordinate580 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate580.point = new MFVec2f(new float[0.453,0.6387,0.4487,0.6387,0.4487,0.6388,0.453,0.6389,0.4561,0.6405,0.453,0.6403,0.4561,0.6406,0.4528,0.6407,0.4485,0.6406,0.4453,0.6405,0.4454,0.6403,0.4487,0.6402,0.4563,0.6497,0.4527,0.6495,0.4562,0.6499,0.4525,0.65,0.4474,0.6499,0.4439,0.6497,0.4439,0.6495,0.4476,0.6494,0.4567,0.6512,0.4528,0.651,0.4566,0.6514,0.4526,0.6515,0.4471,0.6514,0.4432,0.6512,0.4433,0.651,0.4473,0.6509,0.4546,0.6527,0.4519,0.6525,0.4546,0.6528,0.4518,0.6529,0.4478,0.6528,0.4451,0.6527,0.4452,0.6525,0.448,0.6524,0.4498,0.6533]);
IndexedFaceSet578.texCoord = TextureCoordinate580;

Shape574.geometry = IndexedFaceSet578;

Transform573.child = new undefined();

Transform573.child[0] = Shape574;

HAnimSegment572.children = new MFNode();

HAnimSegment572.children[0] = Transform573;

HAnimJoint571.children = new MFNode();

HAnimJoint571.children[0] = HAnimSegment572;

let HAnimJoint581 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint581.name = "l_metacarpophalangeal_2";
HAnimJoint581.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint581.center = new SFVec3f(new float[8.52,27.24,0.6551]);
HAnimJoint581.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint581.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment582 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment582.name = "l_carpal_proximal_phalanx_2";
HAnimSegment582.DEF = "hanim_l_carpal_proximal_phalanx_2";
let Transform583 = browser.currentScene.createNode("Transform");
Transform583.translation = new SFVec3f(new float[8.52,27.24,0.6551]);
let Shape584 = browser.currentScene.createNode("Shape");
let Appearance585 = browser.currentScene.createNode("Appearance");
let Material586 = browser.currentScene.createNode("Material");
Material586.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance585.material = Material586;

let ImageTexture587 = browser.currentScene.createNode("ImageTexture");
ImageTexture587.USE = "JinLOA3TextureAtlas";
Appearance585.texture = ImageTexture587;

Shape584.appearance = Appearance585;

let IndexedFaceSet588 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet588.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1]);
IndexedFaceSet588.creaseAngle = 3.14159;
IndexedFaceSet588.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1]);
let Coordinate589 = browser.currentScene.createNode("Coordinate");
Coordinate589.point = new MFVec3f(new float[-0.2499,-1.331,0.1644,-0.2541,-1.339,-0.0655,-0.0349,-1.351,0.1633,-0.0391,-1.359,-0.0666,-0.3958,-1.152,0.159,-0.2314,-1.162,0.3307,-0.0165,-1.182,0.3296,0.1416,-1.203,0.1563,0.1374,-1.21,-0.0736,-0.0269,-1.201,-0.2453,-0.2419,-1.181,-0.2442,-0.4,-1.16,-0.0709,-0.3504,-0.2375,0.1465,-0.166,-0.2482,0.3391,0.0897,-0.2722,0.3377,0.267,-0.2955,0.1434,0.2621,-0.3044,-0.1302,0.0777,-0.2937,-0.3227,-0.1781,-0.2697,-0.3214,-0.3554,-0.2464,-0.127,-0.3661,-0.0905,0.1542,-0.1642,-0.1021,0.365,0.1159,-0.1284,0.3636,0.3101,-0.1539,0.1508,0.3046,-0.1637,-0.1488,0.1027,-0.152,-0.3596,-0.1774,-0.1258,-0.3581,-0.3715,-0.1003,-0.1453,-0.2544,0.0426,0.1044,-0.1117,0.0344,0.2535,0.0864,0.0158,0.2525,0.2237,-0.0022,0.102,0.2198,-0.0091,-0.1098,0.077,-0.0009,-0.2589,-0.121,0.0177,-0.2579,-0.2583,0.0357,-0.1074,-0.0117,0.0763,-0.005]);
IndexedFaceSet588.coord = Coordinate589;

let TextureCoordinate590 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate590.point = new MFVec2f(new float[0.454,0.6279,0.4498,0.6279,0.4498,0.6277,0.454,0.6277,0.4571,0.6295,0.4539,0.6296,0.4571,0.6293,0.4539,0.6291,0.4496,0.6291,0.4464,0.6292,0.4465,0.6294,0.4497,0.6295,0.4573,0.6381,0.4537,0.6382,0.4572,0.6379,0.4536,0.6377,0.4486,0.6376,0.445,0.6377,0.445,0.6379,0.4486,0.6381,0.4578,0.6395,0.4538,0.6396,0.4577,0.6392,0.4538,0.639,0.4482,0.6389,0.4443,0.639,0.4444,0.6393,0.4483,0.6395,0.4557,0.6408,0.4529,0.6408,0.4557,0.6406,0.4529,0.6404,0.449,0.6404,0.4462,0.6404,0.4462,0.6406,0.449,0.6408,0.4509,0.6412]);
IndexedFaceSet588.texCoord = TextureCoordinate590;

Shape584.geometry = IndexedFaceSet588;

Transform583.child = new undefined();

Transform583.child[0] = Shape584;

HAnimSegment582.children = new MFNode();

HAnimSegment582.children[0] = Transform583;

HAnimJoint581.children = new MFNode();

HAnimJoint581.children[0] = HAnimSegment582;

let HAnimJoint591 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint591.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint591.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint591.center = new SFVec3f(new float[8.45,26.1,0.6956]);
HAnimJoint591.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint591.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment592 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment592.name = "l_carpal_middle_phalanx_2";
HAnimSegment592.DEF = "hanim_l_carpal_middle_phalanx_2";
let Transform593 = browser.currentScene.createNode("Transform");
Transform593.translation = new SFVec3f(new float[8.45,26.1,0.6956]);
let Shape594 = browser.currentScene.createNode("Shape");
let Appearance595 = browser.currentScene.createNode("Appearance");
let Material596 = browser.currentScene.createNode("Material");
Material596.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance595.material = Material596;

let ImageTexture597 = browser.currentScene.createNode("ImageTexture");
ImageTexture597.USE = "JinLOA3TextureAtlas";
Appearance595.texture = ImageTexture597;

Shape594.appearance = Appearance595;

let IndexedFaceSet598 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet598.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1]);
IndexedFaceSet598.creaseAngle = 3.14159;
IndexedFaceSet598.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1]);
let Coordinate599 = browser.currentScene.createNode("Coordinate");
Coordinate599.point = new MFVec3f(new float[-0.4479,-1.125,0.1554,-0.4519,-1.132,-0.0632,-0.2499,-1.18,0.1557,-0.2539,-1.187,-0.0629,-0.5544,-0.9319,0.1491,-0.4029,-0.9674,0.3134,-0.2049,-1.022,0.3137,-0.0594,-1.068,0.1499,-0.0634,-1.075,-0.0687,-0.2149,-1.04,-0.2329,-0.4129,-0.9852,-0.2333,-0.5584,-0.939,-0.0695,-0.3333,-0.0803,0.1251,-0.1781,-0.1166,0.2933,0.037,-0.1758,0.2937,0.186,-0.2231,0.1259,0.1817,-0.2308,-0.1116,0.0265,-0.1945,-0.2799,-0.1886,-0.1353,-0.2802,-0.3376,-0.088,-0.1125,-0.2019,0.1709,0.088,-0.0815,0.1427,0.2185,0.0854,0.0967,0.2188,0.2011,0.06,0.0887,0.1977,0.054,-0.0957,0.0773,0.0822,-0.2262,-0.0896,0.1281,-0.2265,-0.2053,0.1648,-0.0963,0.0132,0.1679,-0.006]);
IndexedFaceSet598.coord = Coordinate599;

let TextureCoordinate600 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate600.point = new MFVec2f(new float[0.4546,0.6191,0.4506,0.619,0.4506,0.6185,0.4546,0.6186,0.4575,0.6206,0.4545,0.6209,0.4576,0.6201,0.4545,0.6196,0.4505,0.6196,0.4474,0.6199,0.4474,0.6204,0.4505,0.6209,0.4572,0.6286,0.4541,0.6289,0.4572,0.628,0.4541,0.6276,0.4497,0.6275,0.4466,0.6279,0.4465,0.6284,0.4497,0.6289,0.4558,0.631,0.4534,0.6313,0.4558,0.6306,0.4534,0.6302,0.45,0.6302,0.4475,0.6305,0.4475,0.6309,0.45,0.6312,0.4516,0.6313]);
IndexedFaceSet598.texCoord = TextureCoordinate600;

Shape594.geometry = IndexedFaceSet598;

Transform593.child = new undefined();

Transform593.child[0] = Shape594;

HAnimSegment592.children = new MFNode();

HAnimSegment592.children[0] = Transform593;

HAnimJoint591.children = new MFNode();

HAnimJoint591.children[0] = HAnimSegment592;

let HAnimJoint601 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint601.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint601.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint601.center = new SFVec3f(new float[8.192,25.17,0.7315]);
HAnimJoint601.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint601.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment602 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment602.name = "l_carpal_distal_phalanx_2";
HAnimSegment602.DEF = "hanim_l_carpal_distal_phalanx_2";
let Transform603 = browser.currentScene.createNode("Transform");
Transform603.translation = new SFVec3f(new float[8.192,25.17,0.7315]);
let Shape604 = browser.currentScene.createNode("Shape");
let Appearance605 = browser.currentScene.createNode("Appearance");
let Material606 = browser.currentScene.createNode("Material");
Material606.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance605.material = Material606;

let ImageTexture607 = browser.currentScene.createNode("ImageTexture");
ImageTexture607.USE = "JinLOA3TextureAtlas";
Appearance605.texture = ImageTexture607;

Shape604.appearance = Appearance605;

let IndexedFaceSet608 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet608.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1]);
IndexedFaceSet608.creaseAngle = 3.14159;
IndexedFaceSet608.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1]);
let Coordinate609 = browser.currentScene.createNode("Coordinate");
Coordinate609.point = new MFVec3f(new float[-0.6187,-1.071,0.1411,-0.6221,-1.077,-0.0485,-0.4578,-1.147,0.1426,-0.4613,-1.153,-0.047,-0.6714,-0.8704,0.1341,-0.5482,-0.923,0.2774,-0.3873,-0.9993,0.2789,-0.2693,-1.061,0.1378,-0.2727,-1.067,-0.0518,-0.396,-1.015,-0.1951,-0.5568,-0.9385,-0.1966,-0.6749,-0.8765,-0.0555,-0.3236,-0.0612,0.1191,-0.1854,-0.1202,0.2799,0.006,-0.211,0.2816,0.1384,-0.2805,0.1233,0.1343,-0.2879,-0.1023,-0.004,-0.2288,-0.263,-0.1953,-0.138,-0.2647,-0.3277,-0.0685,-0.1065,-0.2135,0.0836,0.0963,-0.0945,0.035,0.233,0.0723,-0.0325,0.2317,0.1865,-0.0807,0.0968,0.1843,-0.0816,-0.0912,0.0691,-0.0336,-0.2249,-0.0937,0.0356,-0.2277,-0.2116,0.0844,-0.0958,0.0314,0.0875,-0.0035]);
IndexedFaceSet608.coord = Coordinate609;

let TextureCoordinate610 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate610.point = new MFVec2f(new float[0.455,0.6109,0.4515,0.6108,0.4515,0.6101,0.455,0.6102,0.4575,0.6123,0.4549,0.6128,0.4576,0.6116,0.455,0.611,0.4514,0.6109,0.4488,0.6114,0.4488,0.6121,0.4514,0.6127,0.4576,0.6198,0.4546,0.6204,0.4576,0.619,0.4547,0.6183,0.4505,0.6182,0.4475,0.6188,0.4475,0.6197,0.4504,0.6203,0.4567,0.6213,0.4542,0.6217,0.4567,0.6206,0.4542,0.6202,0.4507,0.6202,0.4482,0.6206,0.4482,0.6213,0.4506,0.6217,0.4523,0.6218]);
IndexedFaceSet608.texCoord = TextureCoordinate610;

Shape604.geometry = IndexedFaceSet608;

Transform603.child = new undefined();

Transform603.child[0] = Shape604;

HAnimSegment602.children = new MFNode();

HAnimSegment602.children[0] = Transform603;

HAnimJoint601.children = new MFNode();

HAnimJoint601.children[0] = HAnimSegment602;

HAnimJoint591.children[1] = HAnimJoint601;

HAnimJoint581.children[1] = HAnimJoint591;

HAnimJoint571.children[1] = HAnimJoint581;

HAnimJoint531.children[2] = HAnimJoint571;

let HAnimJoint611 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint611.name = "l_carpometacarpal_3";
HAnimJoint611.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint611.center = new SFVec3f(new float[8.344,28.65,-0.194]);
HAnimJoint611.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint611.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment612 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment612.name = "l_metacarpal_3";
HAnimSegment612.DEF = "hanim_l_metacarpal_3";
let Transform613 = browser.currentScene.createNode("Transform");
Transform613.translation = new SFVec3f(new float[8.344,28.65,-0.194]);
let Shape614 = browser.currentScene.createNode("Shape");
let Appearance615 = browser.currentScene.createNode("Appearance");
let Material616 = browser.currentScene.createNode("Material");
Material616.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance615.material = Material616;

let ImageTexture617 = browser.currentScene.createNode("ImageTexture");
ImageTexture617.USE = "JinLOA3TextureAtlas";
Appearance615.texture = ImageTexture617;

Shape614.appearance = Appearance615;

let IndexedFaceSet618 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet618.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1]);
IndexedFaceSet618.creaseAngle = 3.14159;
IndexedFaceSet618.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1]);
let Coordinate619 = browser.currentScene.createNode("Coordinate");
Coordinate619.point = new MFVec3f(new float[0.0157,-1.601,0.0972,0.0217,-1.599,-0.1348,0.2598,-1.581,0.1076,0.2658,-1.578,-0.1245,-0.183,-1.427,0.091,-0.0045,-1.414,0.2728,0.2395,-1.393,0.2832,0.4271,-1.376,0.1169,0.4331,-1.374,-0.1151,0.2546,-1.387,-0.2969,0.0105,-1.408,-0.3073,-0.177,-1.425,-0.1411,-0.3164,-0.3793,0.1197,-0.1161,-0.3643,0.3236,0.1742,-0.3403,0.3359,0.3846,-0.3213,0.1495,0.3918,-0.3185,-0.1266,0.1915,-0.3335,-0.3306,-0.0988,-0.3575,-0.3429,-0.3092,-0.3765,-0.1564,-0.3602,-0.2157,0.1315,-0.143,-0.1995,0.3527,0.172,-0.1734,0.3661,0.4003,-0.1528,0.1638,0.408,-0.1498,-0.1357,0.1908,-0.166,-0.357,-0.1242,-0.1921,-0.3703,-0.3524,-0.2126,-0.168,-0.2615,-0.0399,0.0937,-0.1079,-0.0284,0.2501,0.1148,-0.01,0.2596,0.2762,0.0046,0.1165,0.2817,0.0068,-0.0952,0.1281,-0.0047,-0.2517,-0.0946,-0.0232,-0.2611,-0.256,-0.0377,-0.1181,0.0044,0.0523,-0.0002]);
IndexedFaceSet618.coord = Coordinate619;

let TextureCoordinate620 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate620.point = new MFVec2f(new float[0.4371,0.6382,0.4328,0.6382,0.4329,0.6384,0.4372,0.6384,0.4403,0.64,0.4369,0.6398,0.4405,0.6401,0.4374,0.6403,0.4331,0.6403,0.4298,0.6402,0.4296,0.64,0.4326,0.6398,0.4413,0.6498,0.4375,0.6497,0.4415,0.65,0.438,0.6502,0.4329,0.6502,0.4291,0.6501,0.4289,0.6499,0.4324,0.6497,0.4418,0.6514,0.4377,0.6512,0.442,0.6516,0.4383,0.6518,0.4327,0.6518,0.4286,0.6517,0.4284,0.6514,0.4321,0.6512,0.4399,0.653,0.437,0.6529,0.4401,0.6531,0.4374,0.6533,0.4335,0.6533,0.4306,0.6532,0.4304,0.653,0.4331,0.6529,0.4352,0.6537]);
IndexedFaceSet618.texCoord = TextureCoordinate620;

Shape614.geometry = IndexedFaceSet618;

Transform613.child = new undefined();

Transform613.child[0] = Shape614;

HAnimSegment612.children = new MFNode();

HAnimSegment612.children[0] = Transform613;

HAnimJoint611.children = new MFNode();

HAnimJoint611.children[0] = HAnimSegment612;

let HAnimJoint621 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint621.name = "l_metacarpophalangeal_3";
HAnimJoint621.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint621.center = new SFVec3f(new float[8.52,27.26,-0.1959]);
HAnimJoint621.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint621.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment622 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment622.name = "l_carpal_proximal_phalanx_3";
HAnimSegment622.DEF = "hanim_l_carpal_proximal_phalanx_3";
let Transform623 = browser.currentScene.createNode("Transform");
Transform623.translation = new SFVec3f(new float[8.52,27.26,-0.1959]);
let Shape624 = browser.currentScene.createNode("Shape");
let Appearance625 = browser.currentScene.createNode("Appearance");
let Material626 = browser.currentScene.createNode("Material");
Material626.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance625.material = Material626;

let ImageTexture627 = browser.currentScene.createNode("ImageTexture");
ImageTexture627.USE = "JinLOA3TextureAtlas";
Appearance625.texture = ImageTexture627;

Shape624.appearance = Appearance625;

let IndexedFaceSet628 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet628.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1]);
IndexedFaceSet628.creaseAngle = 3.14159;
IndexedFaceSet628.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1]);
let Coordinate629 = browser.currentScene.createNode("Coordinate");
Coordinate629.point = new MFVec3f(new float[-0.2259,-1.448,0.0923,-0.2194,-1.446,-0.1376,-0.0106,-1.469,0.1016,-0.0041,-1.467,-0.1283,-0.3742,-1.258,0.088,-0.2177,-1.275,0.2673,-0.0024,-1.296,0.2766,0.1639,-1.31,0.1112,0.1704,-1.307,-0.1187,0.0138,-1.29,-0.2981,-0.2014,-1.269,-0.3073,-0.3677,-1.255,-0.1419,-0.3422,-0.2825,0.1227,-0.1666,-0.302,0.3239,0.0895,-0.3267,0.3349,0.2761,-0.3422,0.1493,0.2838,-0.3394,-0.1242,0.1082,-0.3199,-0.3253,-0.1479,-0.2952,-0.3364,-0.3345,-0.2797,-0.1508,-0.3605,-0.1263,0.1367,-0.1681,-0.1476,0.357,0.1123,-0.1747,0.3691,0.3166,-0.1917,0.1659,0.3251,-0.1886,-0.1336,0.1327,-0.1672,-0.3539,-0.1477,-0.1401,-0.366,-0.352,-0.1232,-0.1627,-0.2486,0.0181,0.0994,-0.1126,0.003,0.2552,0.0857,-0.0161,0.2638,0.2302,-0.0281,0.1201,0.2362,-0.0259,-0.0917,0.1002,-0.0108,-0.2475,-0.0981,0.0083,-0.256,-0.2426,0.0203,-0.1123,-0.0014,0.0597,0.0048]);
IndexedFaceSet628.coord = Coordinate629;

let TextureCoordinate630 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate630.point = new MFVec2f(new float[0.4369,0.6266,0.4327,0.6266,0.4328,0.6264,0.4371,0.6264,0.4402,0.6282,0.4368,0.6283,0.4403,0.628,0.4373,0.6279,0.433,0.6279,0.4297,0.628,0.4295,0.6282,0.4326,0.6284,0.4412,0.6373,0.4375,0.6375,0.4414,0.6371,0.438,0.637,0.4329,0.637,0.4292,0.6372,0.429,0.6374,0.4324,0.6375,0.4418,0.6388,0.4378,0.639,0.4421,0.6385,0.4383,0.6384,0.4327,0.6384,0.4287,0.6386,0.4284,0.6389,0.4322,0.639,0.4399,0.6402,0.4371,0.6403,0.4401,0.64,0.4374,0.6399,0.4335,0.6399,0.4306,0.6401,0.4305,0.6402,0.4331,0.6404,0.4353,0.6407]);
IndexedFaceSet628.texCoord = TextureCoordinate630;

Shape624.geometry = IndexedFaceSet628;

Transform623.child = new undefined();

Transform623.child[0] = Shape624;

HAnimSegment622.children = new MFNode();

HAnimSegment622.children[0] = Transform623;

HAnimJoint621.children = new MFNode();

HAnimJoint621.children[0] = HAnimSegment622;

let HAnimJoint631 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint631.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint631.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint631.center = new SFVec3f(new float[8.477,26.07,-0.2214]);
HAnimJoint631.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint631.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment632 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment632.name = "l_carpal_middle_phalanx_3";
HAnimSegment632.DEF = "hanim_l_carpal_middle_phalanx_3";
let Transform633 = browser.currentScene.createNode("Transform");
Transform633.translation = new SFVec3f(new float[8.477,26.07,-0.2214]);
let Shape634 = browser.currentScene.createNode("Shape");
let Appearance635 = browser.currentScene.createNode("Appearance");
let Material636 = browser.currentScene.createNode("Material");
Material636.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance635.material = Material636;

let ImageTexture637 = browser.currentScene.createNode("ImageTexture");
ImageTexture637.USE = "JinLOA3TextureAtlas";
Appearance635.texture = ImageTexture637;

Shape634.appearance = Appearance635;

let IndexedFaceSet638 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet638.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1]);
IndexedFaceSet638.creaseAngle = 3.14159;
IndexedFaceSet638.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1]);
let Coordinate639 = browser.currentScene.createNode("Coordinate");
Coordinate639.point = new MFVec3f(new float[-0.4389,-1.268,0.089,-0.4327,-1.265,-0.1296,-0.2401,-1.325,0.0971,-0.234,-1.323,-0.1215,-0.5481,-1.062,0.0865,-0.4036,-1.106,0.2566,-0.2049,-1.164,0.2647,-0.0512,-1.205,0.1068,-0.045,-1.203,-0.1118,-0.1894,-1.158,-0.2818,-0.3882,-1.101,-0.2899,-0.5419,-1.059,-0.132,-0.3388,-0.1526,0.1159,-0.1909,-0.1984,0.2901,0.025,-0.2608,0.2989,0.1825,-0.3032,0.1372,0.1892,-0.3008,-0.1003,0.0412,-0.2549,-0.2744,-0.1747,-0.1925,-0.2833,-0.3321,-0.1501,-0.1216,-0.2096,0.117,0.0982,-0.0948,0.0814,0.2333,0.0727,0.033,0.2402,0.1949,0.0001,0.1147,0.2001,0.002,-0.0696,0.0853,0.0376,-0.2048,-0.0823,0.086,-0.2116,-0.2044,0.1189,-0.0861,0.0097,0.1188,0.0156]);
IndexedFaceSet638.coord = Coordinate639;

let TextureCoordinate640 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate640.point = new MFVec2f(new float[0.4364,0.617,0.4323,0.6171,0.4325,0.6165,0.4365,0.6165,0.4395,0.6186,0.4363,0.619,0.4397,0.618,0.4367,0.6176,0.4327,0.6176,0.4295,0.6181,0.4294,0.6186,0.4323,0.619,0.4401,0.6271,0.4369,0.6275,0.4403,0.6265,0.4373,0.6261,0.4329,0.6261,0.4297,0.6266,0.4295,0.6271,0.4325,0.6275,0.4391,0.6297,0.4366,0.6301,0.4392,0.6293,0.4369,0.629,0.4335,0.629,0.431,0.6293,0.4308,0.6298,0.4331,0.6301,0.435,0.6301]);
IndexedFaceSet638.texCoord = TextureCoordinate640;

Shape634.geometry = IndexedFaceSet638;

Transform633.child = new undefined();

Transform633.child[0] = Shape634;

HAnimSegment632.children = new MFNode();

HAnimSegment632.children[0] = Transform633;

HAnimJoint631.children = new MFNode();

HAnimJoint631.children[0] = HAnimSegment632;

let HAnimJoint641 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint641.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint641.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint641.center = new SFVec3f(new float[8.25,25.030001,-0.2187]);
HAnimJoint641.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint641.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment642 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment642.name = "l_carpal_distal_phalanx_3";
HAnimSegment642.DEF = "hanim_l_carpal_distal_phalanx_3";
let Transform643 = browser.currentScene.createNode("Transform");
Transform643.translation = new SFVec3f(new float[8.25,25.030001,-0.2187]);
let Shape644 = browser.currentScene.createNode("Shape");
let Appearance645 = browser.currentScene.createNode("Appearance");
let Material646 = browser.currentScene.createNode("Material");
Material646.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance645.material = Material646;

let ImageTexture647 = browser.currentScene.createNode("ImageTexture");
ImageTexture647.USE = "JinLOA3TextureAtlas";
Appearance645.texture = ImageTexture647;

Shape644.appearance = Appearance645;

let IndexedFaceSet648 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet648.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1]);
IndexedFaceSet648.creaseAngle = 3.14159;
IndexedFaceSet648.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1]);
let Coordinate649 = browser.currentScene.createNode("Coordinate");
Coordinate649.point = new MFVec3f(new float[-0.631,-1.169,0.0421,-0.6256,-1.167,-0.1475,-0.4691,-1.25,0.0483,-0.4637,-1.248,-0.1413,-0.6864,-0.9557,0.0421,-0.569,-1.018,0.1889,-0.4071,-1.099,0.1951,-0.2817,-1.158,0.0576,-0.2763,-1.156,-0.1319,-0.3937,-1.094,-0.2788,-0.5556,-1.013,-0.285,-0.681,-0.9537,-0.1474,-0.3504,-0.0919,0.0851,-0.2187,-0.1616,0.2498,-0.026,-0.2579,0.2572,0.1147,-0.3243,0.1029,0.121,-0.322,-0.1226,-0.0106,-0.2523,-0.2873,-0.2033,-0.156,-0.2946,-0.344,-0.0896,-0.1404,-0.2414,0.0637,0.0753,-0.128,0.0061,0.2155,0.0399,-0.0652,0.2197,0.161,-0.1101,0.0888,0.1675,-0.1027,-0.0988,0.0577,-0.0458,-0.2359,-0.106,0.0275,-0.2439,-0.2307,0.0733,-0.1162,0.0079,0.0731,-0.0112]);
IndexedFaceSet648.coord = Coordinate649;

let TextureCoordinate650 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate650.point = new MFVec2f(new float[0.4356,0.6082,0.4321,0.6082,0.4322,0.6074,0.4357,0.6074,0.4383,0.6096,0.4356,0.6102,0.4384,0.6088,0.4359,0.6083,0.4324,0.6083,0.4296,0.6089,0.4295,0.6096,0.4321,0.6102,0.4394,0.6176,0.4364,0.6183,0.4396,0.6167,0.4367,0.6161,0.4325,0.6161,0.4295,0.6168,0.4293,0.6177,0.4322,0.6183,0.4388,0.6192,0.4362,0.6198,0.4389,0.6186,0.4364,0.6181,0.433,0.6182,0.4304,0.6187,0.4303,0.6194,0.4326,0.6199,0.4346,0.6199]);
IndexedFaceSet648.texCoord = TextureCoordinate650;

Shape644.geometry = IndexedFaceSet648;

Transform643.child = new undefined();

Transform643.child[0] = Shape644;

HAnimSegment642.children = new MFNode();

HAnimSegment642.children[0] = Transform643;

HAnimJoint641.children = new MFNode();

HAnimJoint641.children[0] = HAnimSegment642;

HAnimJoint631.children[1] = HAnimJoint641;

HAnimJoint621.children[1] = HAnimJoint631;

HAnimJoint611.children[1] = HAnimJoint621;

HAnimJoint531.children[3] = HAnimJoint611;

let HAnimJoint651 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint651.name = "l_carpometacarpal_4";
HAnimJoint651.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint651.center = new SFVec3f(new float[8.339,28.57,-0.9243]);
HAnimJoint651.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint651.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment652 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment652.name = "l_metacarpal_4";
HAnimSegment652.DEF = "hanim_l_metacarpal_4";
let Transform653 = browser.currentScene.createNode("Transform");
Transform653.translation = new SFVec3f(new float[8.339,28.57,-0.9243]);
let Shape654 = browser.currentScene.createNode("Shape");
let Appearance655 = browser.currentScene.createNode("Appearance");
let Material656 = browser.currentScene.createNode("Material");
Material656.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance655.material = Material656;

let ImageTexture657 = browser.currentScene.createNode("ImageTexture");
ImageTexture657.USE = "JinLOA3TextureAtlas";
Appearance655.texture = ImageTexture657;

Shape654.appearance = Appearance655;

let IndexedFaceSet658 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet658.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1]);
IndexedFaceSet658.creaseAngle = 3.14159;
IndexedFaceSet658.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1]);
let Coordinate659 = browser.currentScene.createNode("Coordinate");
Coordinate659.point = new MFVec3f(new float[-0.014,-1.366,0.0295,-0.0298,-1.354,-0.1885,0.2211,-1.344,0.0143,0.2053,-1.332,-0.2037,-0.205,-1.209,0.0528,-0.0169,-1.202,0.2049,0.2182,-1.181,0.1897,0.3826,-1.156,0.0148,0.3668,-1.144,-0.2032,0.1787,-1.151,-0.3553,-0.0564,-1.172,-0.3401,-0.2209,-1.197,-0.1652,-0.3293,-0.2545,0.1423,-0.1183,-0.2468,0.3129,0.1614,-0.2216,0.2949,0.3458,-0.1936,0.0987,0.327,-0.1793,-0.1607,0.116,-0.187,-0.3313,-0.1637,-0.2122,-0.3132,-0.3482,-0.2402,-0.117,-0.3702,-0.1061,0.1656,-0.1412,-0.0977,0.3507,0.1622,-0.0704,0.3311,0.3623,-0.04,0.1183,0.3419,-0.0245,-0.1631,0.1129,-0.0329,-0.3482,-0.1905,-0.0602,-0.3286,-0.3906,-0.0905,-0.1158,-0.2788,0.0575,0.1279,-0.1169,0.0634,0.2588,0.0976,0.0827,0.2449,0.2391,0.1042,0.0944,0.2247,0.1152,-0.1045,0.0628,0.1093,-0.2354,-0.1518,0.0899,-0.2215,-0.2933,0.0685,-0.0711,-0.0325,0.1491,0.016]);
IndexedFaceSet658.coord = Coordinate659;

let TextureCoordinate660 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate660.point = new MFVec2f(new float[0.4223,0.6397,0.4182,0.6398,0.4179,0.64,0.422,0.6399,0.4255,0.6412,0.4227,0.6412,0.4252,0.6414,0.422,0.6417,0.418,0.6418,0.4151,0.6417,0.4154,0.6415,0.4187,0.6413,0.4275,0.6502,0.4244,0.6501,0.4272,0.6504,0.4235,0.6507,0.4187,0.6508,0.4156,0.6508,0.4159,0.6505,0.4196,0.6503,0.4282,0.6516,0.4248,0.6515,0.4279,0.6519,0.4239,0.6522,0.4187,0.6523,0.4153,0.6522,0.4156,0.652,0.4196,0.6517,0.4265,0.6531,0.4241,0.6531,0.4263,0.6533,0.4235,0.6535,0.4198,0.6536,0.4174,0.6536,0.4176,0.6534,0.4204,0.6532,0.422,0.6539]);
IndexedFaceSet658.texCoord = TextureCoordinate660;

Shape654.geometry = IndexedFaceSet658;

Transform653.child = new undefined();

Transform653.child[0] = Shape654;

HAnimSegment652.children = new MFNode();

HAnimSegment652.children[0] = Transform653;

HAnimJoint651.children = new MFNode();

HAnimJoint651.children[0] = HAnimSegment652;

let HAnimJoint661 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint661.name = "l_metacarpophalangeal_4";
HAnimJoint661.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint661.center = new SFVec3f(new float[8.428,27.299999,-0.9985]);
HAnimJoint661.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint661.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment662 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment662.name = "l_carpal_proximal_phalanx_4";
HAnimSegment662.DEF = "hanim_l_carpal_proximal_phalanx_4";
let Transform663 = browser.currentScene.createNode("Transform");
Transform663.translation = new SFVec3f(new float[8.428,27.299999,-0.9985]);
let Shape664 = browser.currentScene.createNode("Shape");
let Appearance665 = browser.currentScene.createNode("Appearance");
let Material666 = browser.currentScene.createNode("Material");
Material666.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance665.material = Material666;

let ImageTexture667 = browser.currentScene.createNode("ImageTexture");
ImageTexture667.USE = "JinLOA3TextureAtlas";
Appearance665.texture = ImageTexture667;

Shape664.appearance = Appearance665;

let IndexedFaceSet668 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet668.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1]);
IndexedFaceSet668.creaseAngle = 3.14159;
IndexedFaceSet668.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1]);
let Coordinate669 = browser.currentScene.createNode("Coordinate");
Coordinate669.point = new MFVec3f(new float[-0.1847,-1.253,0.0467,-0.1998,-1.241,-0.1693,0.0227,-1.271,0.0316,0.0076,-1.259,-0.1844,-0.3279,-1.08,0.0673,-0.161,-1.102,0.2179,0.0464,-1.12,0.2028,0.1906,-1.124,0.0295,0.1754,-1.112,-0.1865,0.0085,-1.09,-0.3372,-0.1989,-1.072,-0.3221,-0.3431,-1.068,-0.1487,-0.2967,-0.1902,0.1418,-0.1095,-0.215,0.3108,0.1373,-0.2358,0.2929,0.299,-0.2404,0.0984,0.281,-0.2262,-0.1586,0.0938,-0.2014,-0.3276,-0.153,-0.1807,-0.3096,-0.3147,-0.176,-0.1151,-0.3133,-0.0482,0.1642,-0.1083,-0.0753,0.3493,0.1619,-0.0981,0.3296,0.339,-0.1032,0.1167,0.3192,-0.0876,-0.1647,0.1142,-0.0605,-0.3498,-0.156,-0.0377,-0.3301,-0.3331,-0.0327,-0.1172,-0.2099,0.0863,0.1241,-0.0649,0.0671,0.255,0.1261,0.051,0.2411,0.2514,0.0474,0.0905,0.2374,0.0585,-0.1085,0.0924,0.0776,-0.2393,-0.0986,0.0937,-0.2254,-0.2239,0.0973,-0.0749,0.0182,0.1305,0.0112]);
IndexedFaceSet668.coord = Coordinate669;

let TextureCoordinate670 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate670.point = new MFVec2f(new float[0.4212,0.6288,0.4172,0.6289,0.4169,0.6288,0.4209,0.6287,0.4244,0.6302,0.4216,0.6304,0.4241,0.6301,0.4209,0.63,0.4169,0.6301,0.4141,0.6304,0.4144,0.6305,0.4176,0.6306,0.4261,0.6386,0.423,0.6388,0.4258,0.6384,0.4222,0.6383,0.4174,0.6385,0.4143,0.6387,0.4146,0.6389,0.4182,0.6389,0.4268,0.6399,0.4234,0.6401,0.4265,0.6397,0.4225,0.6396,0.4173,0.6398,0.4139,0.64,0.4142,0.6402,0.4182,0.6403,0.4251,0.6412,0.4226,0.6414,0.4248,0.6411,0.422,0.641,0.4183,0.6411,0.4159,0.6413,0.4162,0.6415,0.419,0.6415,0.4206,0.6418]);
IndexedFaceSet668.texCoord = TextureCoordinate670;

Shape664.geometry = IndexedFaceSet668;

Transform663.child = new undefined();

Transform663.child[0] = Shape664;

HAnimSegment662.children = new MFNode();

HAnimSegment662.children[0] = Transform663;

HAnimJoint661.children = new MFNode();

HAnimJoint661.children[0] = HAnimSegment662;

let HAnimJoint671 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint671.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint671.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint671.center = new SFVec3f(new float[8.428,26.290001,-1.034]);
HAnimJoint671.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint671.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment672 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment672.name = "l_carpal_middle_phalanx_4";
HAnimSegment672.DEF = "hanim_l_carpal_middle_phalanx_4";
let Transform673 = browser.currentScene.createNode("Transform");
Transform673.translation = new SFVec3f(new float[8.428,26.290001,-1.034]);
let Shape674 = browser.currentScene.createNode("Shape");
let Appearance675 = browser.currentScene.createNode("Appearance");
let Material676 = browser.currentScene.createNode("Material");
Material676.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance675.material = Material676;

let ImageTexture677 = browser.currentScene.createNode("ImageTexture");
ImageTexture677.USE = "JinLOA3TextureAtlas";
Appearance675.texture = ImageTexture677;

Shape674.appearance = Appearance675;

let IndexedFaceSet678 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet678.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1]);
IndexedFaceSet678.creaseAngle = 3.14159;
IndexedFaceSet678.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1]);
let Coordinate679 = browser.currentScene.createNode("Coordinate");
Coordinate679.point = new MFVec3f(new float[-0.412,-1.137,0.0335,-0.4261,-1.125,-0.1679,-0.2243,-1.187,0.0176,-0.2385,-1.176,-0.1838,-0.5153,-0.9493,0.0522,-0.3639,-0.9958,0.1913,-0.1762,-1.047,0.1754,-0.0461,-1.076,0.0125,-0.0602,-1.065,-0.1888,-0.2116,-1.019,-0.3279,-0.3992,-0.9679,-0.312,-0.5294,-0.9381,-0.1491,-0.3178,-0.1177,0.1,-0.1627,-0.1653,0.2425,0.0412,-0.2206,0.2252,0.1745,-0.2511,0.0583,0.1591,-0.239,-0.1604,0.0041,-0.1914,-0.3029,-0.1998,-0.1361,-0.2856,-0.3331,-0.1056,-0.1188,-0.1985,0.1307,0.0829,-0.0782,0.0937,0.1934,0.08,0.0508,0.18,0.1835,0.0271,0.0505,0.1716,0.0365,-0.1192,0.0513,0.0735,-0.2298,-0.1069,0.1164,-0.2164,-0.2104,0.1401,-0.0869,0.0002,0.1379,-0.0157]);
IndexedFaceSet678.coord = Coordinate679;

let TextureCoordinate680 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate680.point = new MFVec2f(new float[0.4203,0.6204,0.4166,0.6205,0.4163,0.62,0.42,0.6199,0.4232,0.6217,0.4207,0.6221,0.4229,0.6212,0.4199,0.6209,0.4162,0.621,0.4136,0.6215,0.4139,0.622,0.4169,0.6222,0.4242,0.6295,0.4215,0.6299,0.4239,0.629,0.4208,0.6287,0.4167,0.6288,0.4141,0.6293,0.4144,0.6298,0.4175,0.6301,0.4233,0.6319,0.4212,0.6323,0.423,0.6315,0.4206,0.6313,0.4175,0.6314,0.4154,0.6317,0.4157,0.6321,0.4181,0.6324,0.4194,0.6323]);
IndexedFaceSet678.texCoord = TextureCoordinate680;

Shape674.geometry = IndexedFaceSet678;

Transform673.child = new undefined();

Transform673.child[0] = Shape674;

HAnimSegment672.children = new MFNode();

HAnimSegment672.children[0] = Transform673;

HAnimJoint671.children = new MFNode();

HAnimJoint671.children[0] = HAnimSegment672;

let HAnimJoint681 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint681.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint681.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint681.center = new SFVec3f(new float[8.192,25.309999,-1.124]);
HAnimJoint681.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint681.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment682 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment682.name = "l_carpal_distal_phalanx_4";
HAnimSegment682.DEF = "hanim_l_carpal_distal_phalanx_4";
let Transform683 = browser.currentScene.createNode("Transform");
Transform683.translation = new SFVec3f(new float[8.192,25.309999,-1.124]);
let Shape684 = browser.currentScene.createNode("Shape");
let Appearance685 = browser.currentScene.createNode("Appearance");
let Material686 = browser.currentScene.createNode("Material");
Material686.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance685.material = Material686;

let ImageTexture687 = browser.currentScene.createNode("ImageTexture");
ImageTexture687.USE = "JinLOA3TextureAtlas";
Appearance685.texture = ImageTexture687;

Shape684.appearance = Appearance685;

let IndexedFaceSet688 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet688.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1]);
IndexedFaceSet688.creaseAngle = 3.14159;
IndexedFaceSet688.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1]);
let Coordinate689 = browser.currentScene.createNode("Coordinate");
Coordinate689.point = new MFVec3f(new float[-0.5436,-1.006,0.082,-0.5559,-0.9964,-0.0922,-0.3911,-1.079,0.0671,-0.4033,-1.069,-0.1071,-0.596,-0.8116,0.0978,-0.4725,-0.8732,0.2172,-0.3199,-0.9458,0.2024,-0.2147,-0.9931,0.0605,-0.2269,-0.9834,-0.1137,-0.3505,-0.9218,-0.2332,-0.503,-0.8491,-0.2183,-0.6083,-0.8019,-0.0765,-0.2786,-0.0205,0.1427,-0.14,-0.0896,0.2768,0.0415,-0.176,0.2591,0.1596,-0.229,0.1,0.1451,-0.2175,-0.1073,0.0064,-0.1484,-0.2413,-0.1751,-0.062,-0.2236,-0.2931,-0.009,-0.0645,-0.1776,0.1232,0.1297,-0.0583,0.0659,0.2438,0.0996,0.0023,0.2269,0.2013,-0.0322,0.0923,0.1903,-0.0176,-0.08,0.0748,0.0389,-0.1916,-0.0796,0.1047,-0.1786,-0.185,0.14,-0.0465,0.0484,0.1379,0.025]);
IndexedFaceSet688.coord = Coordinate689;

let TextureCoordinate690 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate690.point = new MFVec2f(new float[0.4195,0.6124,0.4163,0.6125,0.416,0.6118,0.4193,0.6117,0.422,0.6137,0.4198,0.6143,0.4218,0.613,0.4191,0.6126,0.4159,0.6126,0.4137,0.6132,0.414,0.6139,0.4166,0.6143,0.4231,0.621,0.4207,0.6217,0.4228,0.6202,0.4199,0.6197,0.416,0.6198,0.4135,0.6205,0.4139,0.6213,0.4168,0.6218,0.4225,0.6225,0.4204,0.623,0.4222,0.6219,0.4197,0.6216,0.4165,0.6217,0.4145,0.6223,0.4147,0.6229,0.4172,0.6232,0.4185,0.6232]);
IndexedFaceSet688.texCoord = TextureCoordinate690;

Shape684.geometry = IndexedFaceSet688;

Transform683.child = new undefined();

Transform683.child[0] = Shape684;

HAnimSegment682.children = new MFNode();

HAnimSegment682.children[0] = Transform683;

HAnimJoint681.children = new MFNode();

HAnimJoint681.children[0] = HAnimSegment682;

HAnimJoint671.children[1] = HAnimJoint681;

HAnimJoint661.children[1] = HAnimJoint671;

HAnimJoint651.children[1] = HAnimJoint661;

HAnimJoint531.children[4] = HAnimJoint651;

let HAnimJoint691 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint691.name = "l_carpometacarpal_5";
HAnimJoint691.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint691.center = new SFVec3f(new float[8.197,28.370001,-1.528]);
HAnimJoint691.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint691.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment692 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment692.name = "l_metacarpal_5";
HAnimSegment692.DEF = "hanim_l_metacarpal_5";
let Transform693 = browser.currentScene.createNode("Transform");
Transform693.translation = new SFVec3f(new float[8.197,28.370001,-1.528]);
let Shape694 = browser.currentScene.createNode("Shape");
let Appearance695 = browser.currentScene.createNode("Appearance");
let Material696 = browser.currentScene.createNode("Material");
Material696.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance695.material = Material696;

let ImageTexture697 = browser.currentScene.createNode("ImageTexture");
ImageTexture697.USE = "JinLOA3TextureAtlas";
Appearance695.texture = ImageTexture697;

Shape694.appearance = Appearance695;

let IndexedFaceSet698 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet698.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1]);
IndexedFaceSet698.creaseAngle = 3.14159;
IndexedFaceSet698.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1]);
let Coordinate699 = browser.currentScene.createNode("Coordinate");
Coordinate699.point = new MFVec3f(new float[0.0463,-0.9645,-0.0622,0.0267,-0.942,-0.253,0.2519,-0.9328,-0.0794,0.2324,-0.9103,-0.2702,-0.1254,-0.8655,-0.031,0.0435,-0.8586,0.0992,0.2492,-0.8269,0.082,0.3888,-0.7862,-0.074,0.3693,-0.7638,-0.2648,0.2004,-0.7707,-0.395,-0.0053,-0.8024,-0.3779,-0.1449,-0.843,-0.2218,-0.2585,-0.1911,0.0918,-0.069,-0.1834,0.2379,0.1757,-0.1456,0.2175,0.3323,-0.1,0.0425,0.309,-0.0733,-0.1846,0.1196,-0.0811,-0.3307,-0.1251,-0.1188,-0.3102,-0.2817,-0.1644,-0.1352,-0.2978,-0.0883,0.1196,-0.0923,-0.0799,0.2781,0.1732,-0.0389,0.2559,0.343,0.0105,0.066,0.3178,0.0395,-0.1803,0.1123,0.0311,-0.3387,-0.1532,-0.0098,-0.3166,-0.3231,-0.0593,-0.1267,-0.223,0.0382,0.0917,-0.0776,0.0442,0.2038,0.1101,0.0732,0.1881,0.2302,0.1081,0.0539,0.2124,0.1286,-0.1203,0.0671,0.1227,-0.2324,-0.1207,0.0937,-0.2167,-0.2408,0.0588,-0.0824,-0.0116,0.1281,-0.0076]);
IndexedFaceSet698.coord = Coordinate699;

let TextureCoordinate700 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate700.point = new MFVec2f(new float[0.4094,0.6427,0.4058,0.6429,0.4055,0.6432,0.4091,0.643,0.4124,0.6437,0.41,0.6437,0.412,0.644,0.4092,0.6444,0.4056,0.6446,0.4032,0.6445,0.4035,0.6443,0.4064,0.6439,0.4149,0.6501,0.4122,0.65,0.4146,0.6504,0.4113,0.6509,0.4071,0.6511,0.4044,0.651,0.4048,0.6507,0.408,0.6502,0.4157,0.651,0.4127,0.651,0.4153,0.6514,0.4118,0.6519,0.4072,0.6522,0.4043,0.6521,0.4047,0.6517,0.4082,0.6512,0.4143,0.6522,0.4122,0.6522,0.414,0.6525,0.4115,0.6528,0.4083,0.653,0.4062,0.6529,0.4065,0.6527,0.409,0.6523,0.4104,0.653]);
IndexedFaceSet698.texCoord = TextureCoordinate700;

Shape694.geometry = IndexedFaceSet698;

Transform693.child = new undefined();

Transform693.child[0] = Shape694;

HAnimSegment692.children = new MFNode();

HAnimSegment692.children[0] = Transform693;

HAnimJoint691.children = new MFNode();

HAnimJoint691.children[0] = HAnimSegment692;

let HAnimJoint701 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint701.name = "l_metacarpophalangeal_5";
HAnimJoint701.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint701.center = new SFVec3f(new float[8.334,27.5,-1.701]);
HAnimJoint701.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint701.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment702 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment702.name = "l_carpal_proximal_phalanx_5";
HAnimSegment702.DEF = "hanim_l_carpal_proximal_phalanx_5";
let Transform703 = browser.currentScene.createNode("Transform");
Transform703.translation = new SFVec3f(new float[8.334,27.5,-1.701]);
let Shape704 = browser.currentScene.createNode("Shape");
let Appearance705 = browser.currentScene.createNode("Appearance");
let Material706 = browser.currentScene.createNode("Material");
Material706.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance705.material = Material706;

let ImageTexture707 = browser.currentScene.createNode("ImageTexture");
ImageTexture707.USE = "JinLOA3TextureAtlas";
Appearance705.texture = ImageTexture707;

Shape704.appearance = Appearance705;

let IndexedFaceSet708 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet708.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1]);
IndexedFaceSet708.creaseAngle = 3.14159;
IndexedFaceSet708.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1]);
let Coordinate709 = browser.currentScene.createNode("Coordinate");
Coordinate709.point = new MFVec3f(new float[-0.1298,-0.9343,0.012,-0.1487,-0.912,-0.1771,0.0526,-0.9323,-0.0063,0.0337,-0.91,-0.1954,-0.2599,-0.8204,0.0405,-0.1089,-0.8356,0.1686,0.0735,-0.8336,0.1504,0.1961,-0.8154,-0.0051,0.1772,-0.793,-0.1942,0.0262,-0.7778,-0.3224,-0.1562,-0.7798,-0.3041,-0.2788,-0.7981,-0.1486,-0.2549,-0.1812,0.1442,-0.0856,-0.1983,0.2879,0.1314,-0.1959,0.2662,0.269,-0.1755,0.0918,0.2465,-0.1489,-0.1332,0.0771,-0.1318,-0.2769,-0.1399,-0.1342,-0.2552,-0.2774,-0.1547,-0.0808,-0.2729,-0.0814,0.1704,-0.0874,-0.1001,0.3278,0.1502,-0.0975,0.304,0.3008,-0.0751,0.113,0.2762,-0.046,-0.1333,0.0907,-0.0273,-0.2907,-0.1469,-0.0299,-0.2669,-0.2975,-0.0523,-0.0759,-0.1866,0.0252,0.139,-0.0555,0.012,0.2502,0.1126,0.0138,0.2334,0.2191,0.0297,0.0984,0.2016,0.0502,-0.0758,0.0705,0.0635,-0.1871,-0.0975,0.0616,-0.1703,-0.204,0.0458,-0.0352,0.0099,0.0797,0.0369]);
IndexedFaceSet708.coord = Coordinate709;

let TextureCoordinate710 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate710.point = new MFVec2f(new float[0.4075,0.6349,0.404,0.6351,0.4037,0.6351,0.4072,0.6349,0.4104,0.6358,0.4081,0.6359,0.4101,0.6358,0.4072,0.636,0.4037,0.6362,0.4013,0.6363,0.4017,0.6363,0.4046,0.6362,0.4127,0.6418,0.41,0.6419,0.4123,0.6418,0.409,0.642,0.4048,0.6423,0.4022,0.6424,0.4026,0.6424,0.4058,0.6422,0.4134,0.6427,0.4105,0.6429,0.413,0.6427,0.4094,0.6429,0.4048,0.6432,0.4019,0.6434,0.4024,0.6434,0.4059,0.6432,0.412,0.6438,0.4099,0.6439,0.4116,0.6438,0.4091,0.6439,0.4059,0.6441,0.4038,0.6442,0.4042,0.6442,0.4067,0.6441,0.408,0.6444]);
IndexedFaceSet708.texCoord = TextureCoordinate710;

Shape704.geometry = IndexedFaceSet708;

Transform703.child = new undefined();

Transform703.child[0] = Shape704;

HAnimSegment702.children = new MFNode();

HAnimSegment702.children[0] = Transform703;

HAnimJoint701.children = new MFNode();

HAnimJoint701.children[0] = HAnimSegment702;

let HAnimJoint711 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint711.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint711.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint711.center = new SFVec3f(new float[8.338,26.780001,-1.768]);
HAnimJoint711.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint711.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment712 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment712.name = "l_carpal_middle_phalanx_5";
HAnimSegment712.DEF = "hanim_l_carpal_middle_phalanx_5";
let Transform713 = browser.currentScene.createNode("Transform");
Transform713.translation = new SFVec3f(new float[8.338,26.780001,-1.768]);
let Shape714 = browser.currentScene.createNode("Shape");
let Appearance715 = browser.currentScene.createNode("Appearance");
let Material716 = browser.currentScene.createNode("Material");
Material716.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance715.material = Material716;

let ImageTexture717 = browser.currentScene.createNode("ImageTexture");
ImageTexture717.USE = "JinLOA3TextureAtlas";
Appearance715.texture = ImageTexture717;

Shape714.appearance = Appearance715;

let IndexedFaceSet718 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet718.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1]);
IndexedFaceSet718.creaseAngle = 3.14159;
IndexedFaceSet718.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1]);
let Coordinate719 = browser.currentScene.createNode("Coordinate");
Coordinate719.point = new MFVec3f(new float[-0.3103,-0.8684,0.0017,-0.3279,-0.8476,-0.1746,-0.1444,-0.8917,-0.0183,-0.162,-0.8709,-0.1946,-0.4057,-0.7413,0.0284,-0.268,-0.7744,0.1456,-0.1021,-0.7977,0.1256,0.0092,-0.7996,-0.0215,-0.0085,-0.7788,-0.1978,-0.1461,-0.7457,-0.315,-0.3121,-0.7224,-0.295,-0.4234,-0.7205,-0.1478,-0.2537,-0.1316,0.1027,-0.1126,-0.1655,0.2227,0.0677,-0.1909,0.201,0.1817,-0.1928,0.0502,0.1625,-0.1702,-0.1412,0.0215,-0.1363,-0.2613,-0.1588,-0.1109,-0.2396,-0.2728,-0.109,-0.0888,-0.156,0.0566,0.096,-0.0465,0.0303,0.1892,0.0934,0.0106,0.1723,0.1818,0.0091,0.0553,0.1669,0.0266,-0.0933,0.0575,0.0529,-0.1864,-0.0824,0.0726,-0.1696,-0.1709,0.0741,-0.0526,0.016,0.0815,0.0057]);
IndexedFaceSet718.coord = Coordinate719;

let TextureCoordinate720 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate720.point = new MFVec2f(new float[0.4061,0.6287,0.4028,0.6289,0.4025,0.6286,0.4057,0.6284,0.4088,0.6296,0.4066,0.6299,0.4084,0.6293,0.4057,0.6293,0.4024,0.6295,0.4002,0.6298,0.4006,0.63,0.4033,0.6301,0.4102,0.6353,0.408,0.6356,0.4098,0.635,0.407,0.635,0.4035,0.6352,0.4012,0.6355,0.4016,0.6358,0.4044,0.6358,0.4096,0.6371,0.4079,0.6374,0.4093,0.6369,0.4071,0.6369,0.4043,0.6371,0.4026,0.6373,0.4029,0.6375,0.4051,0.6375,0.4062,0.6376]);
IndexedFaceSet718.texCoord = TextureCoordinate720;

Shape714.geometry = IndexedFaceSet718;

Transform713.child = new undefined();

Transform713.child[0] = Shape714;

HAnimSegment712.children = new MFNode();

HAnimSegment712.children[0] = Transform713;

HAnimJoint711.children = new MFNode();

HAnimJoint711.children[0] = HAnimSegment712;

let HAnimJoint721 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint721.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint721.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint721.center = new SFVec3f(new float[8.153,26.040001,-1.886]);
HAnimJoint721.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint721.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment722 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment722.name = "l_carpal_distal_phalanx_5";
HAnimSegment722.DEF = "hanim_l_carpal_distal_phalanx_5";
let Transform723 = browser.currentScene.createNode("Transform");
Transform723.translation = new SFVec3f(new float[8.153,26.040001,-1.886]);
let Shape724 = browser.currentScene.createNode("Shape");
let Appearance725 = browser.currentScene.createNode("Appearance");
let Material726 = browser.currentScene.createNode("Material");
Material726.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance725.material = Material726;

let ImageTexture727 = browser.currentScene.createNode("ImageTexture");
ImageTexture727.USE = "JinLOA3TextureAtlas";
Appearance725.texture = ImageTexture727;

Shape724.appearance = Appearance725;

let IndexedFaceSet728 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet728.coordIndex = new MFInt32(new int[0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1]);
IndexedFaceSet728.creaseAngle = 3.14159;
IndexedFaceSet728.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1]);
let Coordinate729 = browser.currentScene.createNode("Coordinate");
Coordinate729.point = new MFVec3f(new float[-0.4265,-0.7665,0.0531,-0.4417,-0.7485,-0.0994,-0.2908,-0.8079,0.0337,-0.306,-0.7899,-0.1188,-0.4775,-0.6307,0.0765,-0.3642,-0.6752,0.1764,-0.2285,-0.7166,0.157,-0.1382,-0.7341,0.0281,-0.1534,-0.7161,-0.1244,-0.2667,-0.6716,-0.2242,-0.4024,-0.6302,-0.2049,-0.4927,-0.6127,-0.076,-0.2189,-0.0422,0.1441,-0.0919,-0.0921,0.2561,0.0696,-0.1414,0.2331,0.1709,-0.161,0.0886,0.1528,-0.1396,-0.0929,0.0258,-0.0897,-0.2049,-0.1357,-0.0404,-0.1819,-0.2371,-0.0207,-0.0373,-0.1344,0.069,0.1368,-0.0252,0.0277,0.2322,0.1149,-0.0067,0.2114,0.202,-0.0158,0.0895,0.1878,0.0058,-0.0611,0.082,0.0466,-0.1545,-0.0552,0.083,-0.137,-0.1456,0.0926,-0.0171,0.0613,0.1015,0.0409]);
IndexedFaceSet728.coord = Coordinate729;

let TextureCoordinate730 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate730.point = new MFVec2f(new float[0.4049,0.6227,0.4021,0.6229,0.4017,0.6225,0.4045,0.6223,0.4072,0.6236,0.4053,0.624,0.4068,0.6232,0.4044,0.623,0.4016,0.6232,0.3997,0.6236,0.4001,0.624,0.4025,0.6242,0.4086,0.6291,0.4066,0.6295,0.4082,0.6286,0.4055,0.6284,0.4022,0.6286,0.4001,0.6291,0.4005,0.6296,0.4032,0.6297,0.4082,0.6302,0.4064,0.6306,0.4078,0.6299,0.4056,0.6298,0.4028,0.63,0.401,0.6304,0.4014,0.6307,0.4036,0.6308,0.4047,0.6309]);
IndexedFaceSet728.texCoord = TextureCoordinate730;

Shape724.geometry = IndexedFaceSet728;

Transform723.child = new undefined();

Transform723.child[0] = Shape724;

HAnimSegment722.children = new MFNode();

HAnimSegment722.children[0] = Transform723;

HAnimJoint721.children = new MFNode();

HAnimJoint721.children[0] = HAnimSegment722;

HAnimJoint711.children[1] = HAnimJoint721;

HAnimJoint701.children[1] = HAnimJoint711;

HAnimJoint691.children[1] = HAnimJoint701;

HAnimJoint531.children[5] = HAnimJoint691;

HAnimJoint521.children[1] = HAnimJoint531;

HAnimJoint511.children[1] = HAnimJoint521;

HAnimJoint501.children[1] = HAnimJoint511;

HAnimJoint491.children[1] = HAnimJoint501;

HAnimJoint331.children[2] = HAnimJoint491;

let HAnimJoint731 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint731.name = "r_sternoclavicular";
HAnimJoint731.DEF = "hanim_r_sternoclavicular";
HAnimJoint731.center = new SFVec3f(new float[-1.71,52.82,-0.6127]);
HAnimJoint731.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint731.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment732 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment732.name = "r_clavicle";
HAnimSegment732.DEF = "hanim_r_clavicle";
let Transform733 = browser.currentScene.createNode("Transform");
Transform733.translation = new SFVec3f(new float[-1.71,52.82,-0.6127]);
let Shape734 = browser.currentScene.createNode("Shape");
let Appearance735 = browser.currentScene.createNode("Appearance");
let Material736 = browser.currentScene.createNode("Material");
Material736.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance735.material = Material736;

let ImageTexture737 = browser.currentScene.createNode("ImageTexture");
ImageTexture737.USE = "JinLOA3TextureAtlas";
Appearance735.texture = ImageTexture737;

Shape734.appearance = Appearance735;

let IndexedFaceSet738 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet738.coordIndex = new MFInt32(new int[9,0,1,-1,1,6,9,-1,6,1,2,-1,2,5,6,-1,8,5,2,-1,2,3,8,-1,8,3,4,-1,4,7,8,-1,9,7,4,-1,4,0,9,-1,4,3,2,-1,0,4,2,-1,1,0,2,-1,10,14,13,-1,10,13,12,-1,11,10,12,-1,6,10,11,-1,11,9,6,-1,9,11,12,-1,12,7,9,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,5,8,-1,5,14,10,-1,10,6,5,-1]);
IndexedFaceSet738.creaseAngle = 3.14159;
IndexedFaceSet738.texCoordIndex = new MFInt32(new int[9,0,1,-1,1,6,9,-1,6,1,2,-1,2,5,6,-1,8,5,2,-1,2,3,8,-1,8,3,4,-1,4,7,8,-1,9,7,4,-1,4,0,9,-1,4,3,2,-1,0,4,2,-1,1,0,2,-1,10,14,13,-1,10,13,12,-1,11,10,12,-1,6,10,11,-1,11,9,6,-1,9,11,12,-1,12,7,9,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,5,8,-1,5,14,10,-1,10,6,5,-1]);
let Coordinate739 = browser.currentScene.createNode("Coordinate");
Coordinate739.point = new MFVec3f(new float[-4.99,0.104,-0.8644,-5.073,0.4993,0.047,-4.706,0.1695,1.198,-4.631,-1.819,1.104,-4.586,-1.648,-0.1248,-3.376,0.3884,1.771,-3.891,0.989,-0.0537,-4.193,-2.49,-0.5713,-4.388,-2.49,1.429,-3.761,0.3238,-1.692,0.1237,0.6312,-0.1883,0.1237,0.3007,-0.9426,0.1237,-1.418,-0.2577,0.1237,-1.392,0.6264,0.1237,0.2586,0.8179]);
IndexedFaceSet738.coord = Coordinate739;

let TextureCoordinate740 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate740.point = new MFVec2f(new float[0.1911,0.4797,0.171,0.4832,0.1497,0.4806,0.1519,0.4334,0.1831,0.4416,0.1474,0.4856,0.1708,0.4854,0.1784,0.4249,0.1538,0.4251,0.1963,0.4863,0.19,0.5091,0.1847,0.499,0.172,0.4382,0.1568,0.4457,0.1409,0.4926]);
IndexedFaceSet738.texCoord = TextureCoordinate740;

Shape734.geometry = IndexedFaceSet738;

Transform733.child = new undefined();

Transform733.child[0] = Shape734;

HAnimSegment732.children = new MFNode();

HAnimSegment732.children[0] = Transform733;

HAnimJoint731.children = new MFNode();

HAnimJoint731.children[0] = HAnimSegment732;

let HAnimJoint741 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint741.name = "r_acromioclavicular";
HAnimJoint741.DEF = "hanim_r_acromioclavicular";
HAnimJoint741.center = new SFVec3f(new float[-5.464,52.060001,-0.5732]);
HAnimJoint741.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint741.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment742 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment742.name = "r_scapula";
HAnimSegment742.DEF = "hanim_r_scapula";
let Transform743 = browser.currentScene.createNode("Transform");
Transform743.translation = new SFVec3f(new float[-5.464,52.060001,-0.5732]);
let Shape744 = browser.currentScene.createNode("Shape");
let Appearance745 = browser.currentScene.createNode("Appearance");
let Material746 = browser.currentScene.createNode("Material");
Material746.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance745.material = Material746;

let ImageTexture747 = browser.currentScene.createNode("ImageTexture");
ImageTexture747.USE = "JinLOA3TextureAtlas";
Appearance745.texture = ImageTexture747;

Shape744.appearance = Appearance745;

let IndexedFaceSet748 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet748.coordIndex = new MFInt32(new int[5,1,0,-1,0,4,5,-1,4,0,2,-1,2,3,4,-1,3,2,6,-1,6,9,3,-1,7,8,1,-1,1,5,7,-1,6,2,0,-1,0,8,6,-1,0,1,8,-1,9,6,8,-1,8,7,9,-1,4,10,11,-1,11,5,4,-1,5,11,12,-1,12,7,5,-1,7,12,13,-1,13,9,7,-1,9,13,14,-1,14,3,9,-1,3,14,10,-1,10,4,3,-1,10,15,11,-1,11,15,12,-1,12,15,13,-1,13,15,14,-1,14,15,10,-1]);
IndexedFaceSet748.creaseAngle = 3.14159;
IndexedFaceSet748.texCoordIndex = new MFInt32(new int[5,1,0,-1,0,4,5,-1,4,0,2,-1,2,3,4,-1,3,2,6,-1,6,8,3,-1,9,7,1,-1,1,5,9,-1,6,2,0,-1,0,7,6,-1,0,1,7,-1,12,10,11,-1,11,13,12,-1,4,14,15,-1,15,5,4,-1,5,15,16,-1,16,9,5,-1,13,16,17,-1,17,12,13,-1,8,17,18,-1,18,3,8,-1,3,18,14,-1,14,4,3,-1,14,19,15,-1,15,19,16,-1,16,19,17,-1,17,19,18,-1,18,19,14,-1]);
let Coordinate749 = browser.currentScene.createNode("Coordinate");
Coordinate749.point = new MFVec3f(new float[-1.935,1.466,-0.0932,-1.515,0.6492,-1.732,-1.534,0.7105,1.619,0.3782,1.139,1.732,-0.1374,1.74,-0.0932,-0.0076,1.074,-1.731,-0.8341,-1.572,1.39,-0.4391,-1.74,-0.6109,-0.8275,-1.58,-0.6098,-0.6342,-1.74,1.389,1.237,1.407,-0.0712,1.547,0.8515,-1.142,0.7525,-1.603,-0.4744,0.7511,-1.595,1.16,1.51,1.034,1.296,1.59,-0.0185,0.1351]);
IndexedFaceSet748.coord = Coordinate749;

let TextureCoordinate750 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate750.point = new MFVec2f(new float[0.1715,0.4655,0.1797,0.4646,0.1569,0.4642,0.1474,0.4856,0.1708,0.4854,0.1963,0.4863,0.1544,0.4288,0.1782,0.4286,0.1538,0.4251,0.1784,0.4249,0.1544,0.4288,0.1782,0.4286,0.1538,0.4251,0.1784,0.4249,0.1703,0.4865,0.1895,0.487,0.1761,0.4271,0.1552,0.4287,0.1491,0.4835,0.1671,0.4618]);
IndexedFaceSet748.texCoord = TextureCoordinate750;

Shape744.geometry = IndexedFaceSet748;

Transform743.child = new undefined();

Transform743.child[0] = Shape744;

HAnimSegment742.children = new MFNode();

HAnimSegment742.children[0] = Transform743;

HAnimJoint741.children = new MFNode();

HAnimJoint741.children[0] = HAnimSegment742;

let HAnimJoint751 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint751.name = "r_shoulder";
HAnimJoint751.DEF = "hanim_r_shoulder";
HAnimJoint751.center = new SFVec3f(new float[-7.336,51.48,-0.1452]);
HAnimJoint751.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint751.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment752 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment752.name = "r_upperarm";
HAnimSegment752.DEF = "hanim_r_upperarm";
let Transform753 = browser.currentScene.createNode("Transform");
Transform753.translation = new SFVec3f(new float[-7.336,51.48,-0.1452]);
let Shape754 = browser.currentScene.createNode("Shape");
let Appearance755 = browser.currentScene.createNode("Appearance");
let Material756 = browser.currentScene.createNode("Material");
Material756.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance755.material = Material756;

let ImageTexture757 = browser.currentScene.createNode("ImageTexture");
ImageTexture757.USE = "JinLOA3TextureAtlas";
Appearance755.texture = ImageTexture757;

Shape754.appearance = Appearance755;

let IndexedFaceSet758 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet758.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,38,37,36,-1,38,36,35,-1,39,38,35,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1,26,21,20,-1,20,25,26,-1,27,22,21,-1,21,26,27,-1,28,23,22,-1,22,27,28,-1,29,24,23,-1,23,28,29,-1,25,20,24,-1,24,29,25,-1,31,26,25,-1,25,30,31,-1,32,27,26,-1,26,31,32,-1,33,28,27,-1,27,32,33,-1,34,29,28,-1,28,33,34,-1,30,25,29,-1,29,34,30,-1,36,31,30,-1,30,35,36,-1,37,32,31,-1,31,36,37,-1,38,33,32,-1,32,37,38,-1,39,34,33,-1,33,38,39,-1,35,30,34,-1,34,39,35,-1]);
IndexedFaceSet758.creaseAngle = 3.14159;
IndexedFaceSet758.texCoordIndex = new MFInt32(new int[1,0,2,-1,1,2,3,-1,61,1,3,-1,1,6,5,-1,5,0,1,-1,0,5,7,-1,7,2,0,-1,2,7,8,-1,8,3,2,-1,25,26,9,-1,9,4,25,-1,4,9,6,-1,6,1,4,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,27,28,14,-1,14,9,27,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,29,30,19,-1,19,14,29,-1,14,19,16,-1,16,11,14,-1,36,35,54,-1,36,54,53,-1,37,36,53,-1,20,15,16,-1,16,21,20,-1,22,17,15,-1,15,20,22,-1,23,18,17,-1,17,22,23,-1,24,19,31,-1,31,32,24,-1,21,16,19,-1,19,24,21,-1,40,39,38,-1,38,41,40,-1,43,42,55,-1,55,56,43,-1,45,44,42,-1,42,43,45,-1,47,46,44,-1,44,45,47,-1,41,38,46,-1,46,47,41,-1,48,40,41,-1,41,49,48,-1,50,43,57,-1,57,58,50,-1,51,45,43,-1,43,50,51,-1,52,47,45,-1,45,51,52,-1,49,41,47,-1,47,52,49,-1,34,48,49,-1,49,33,34,-1,35,50,59,-1,59,60,35,-1,36,51,50,-1,50,35,36,-1,37,52,51,-1,51,36,37,-1,33,49,52,-1,52,37,33,-1]);
let Coordinate759 = browser.currentScene.createNode("Coordinate");
Coordinate759.point = new MFVec3f(new float[-1.164,1.767,-1.68,-2.32,1.756,0.0337,-1.047,1.768,1.663,0.895,1.785,0.9556,0.8229,1.784,-1.11,-1.382,0.4997,-2.31,-2.978,0.4855,0.057,-1.221,0.5011,2.307,1.462,0.525,1.33,1.362,0.5241,-1.523,-1.36,-2.014,-2.31,-2.956,-2.028,0.057,-1.198,-2.012,2.307,1.484,-1.988,1.33,1.384,-1.989,-1.523,-1.398,-3.089,-2.442,-3.087,-3.104,0.0619,-1.228,-3.087,2.442,1.61,-3.062,1.409,1.505,-3.063,-1.61,-0.8845,-1.238,-1.939,-2.105,-1.248,-0.4543,-1.473,-1.243,1.629,0.1375,-1.229,1.432,0.5011,-1.225,-0.7734,-0.9027,-7.045,-1.569,-2.17,-7.056,-0.378,-1.514,-7.051,1.293,0.1588,-7.036,1.135,0.5365,-7.032,-0.634,-0.9066,-11.1,-1.511,-2.127,-11.11,-0.3651,-1.495,-11.1,1.243,0.1154,-11.09,1.091,0.4791,-11.08,-0.6115,-0.852,-11.65,-0.8985,-1.567,-11.65,-0.2267,-1.197,-11.65,0.716,-0.2531,-11.64,0.6268,-0.0399,-11.64,-0.3711]);
IndexedFaceSet758.coord = Coordinate759;

let TextureCoordinate760 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate760.point = new MFVec2f(new float[0.2986,0.2114,0.2726,0.2114,0.3201,0.2114,0.3415,0.2114,0.2466,0.2114,0.2979,0.2417,0.2726,0.2417,0.3197,0.2417,0.3418,0.2417,0.2473,0.2417,0.2979,0.3018,0.2726,0.3018,0.3197,0.3018,0.3418,0.3018,0.2473,0.3018,0.2978,0.3276,0.2726,0.3276,0.3197,0.3276,0.3419,0.3276,0.2474,0.3276,0.2932,0.2834,0.2689,0.2834,0.316,0.2834,0.3322,0.2834,0.245,0.2834,0.2251,0.2114,0.2255,0.2417,0.2255,0.2417,0.2255,0.3018,0.2255,0.3018,0.2255,0.3276,0.2255,0.3276,0.2159,0.2834,0.4315,0.6736,0.442,0.6736,0.3947,0.6736,0.4041,0.6736,0.418,0.6736,0.4296,0.6167,0.4409,0.6167,0.4415,0.6485,0.4303,0.6485,0.3965,0.6167,0.3953,0.6485,0.4047,0.6167,0.4053,0.6485,0.4189,0.6167,0.418,0.6485,0.4415,0.6706,0.4306,0.6706,0.395,0.6706,0.4051,0.6706,0.4182,0.6706,0.3746,0.6736,0.3851,0.6736,0.384,0.6167,0.3845,0.6485,0.3845,0.6485,0.3846,0.6706,0.3846,0.6706,0.3851,0.6736,0.3481,0.2114]);
IndexedFaceSet758.texCoord = TextureCoordinate760;

Shape754.geometry = IndexedFaceSet758;

Transform753.child = new undefined();

Transform753.child[0] = Shape754;

HAnimSegment752.children = new MFNode();

HAnimSegment752.children[0] = Transform753;

HAnimJoint751.children = new MFNode();

HAnimJoint751.children[0] = HAnimSegment752;

let HAnimJoint761 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint761.name = "r_elbow";
HAnimJoint761.DEF = "hanim_r_elbow";
HAnimJoint761.center = new SFVec3f(new float[-8.093,40.380001,-0.2502]);
HAnimJoint761.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint761.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment762 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment762.name = "r_forearm";
HAnimSegment762.DEF = "hanim_r_forearm";
let Transform763 = browser.currentScene.createNode("Transform");
Transform763.translation = new SFVec3f(new float[-8.093,40.380001,-0.2502]);
let Shape764 = browser.currentScene.createNode("Shape");
let Appearance765 = browser.currentScene.createNode("Appearance");
let Material766 = browser.currentScene.createNode("Material");
Material766.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance765.material = Material766;

let ImageTexture767 = browser.currentScene.createNode("ImageTexture");
ImageTexture767.USE = "JinLOA3TextureAtlas";
Appearance765.texture = ImageTexture767;

Shape764.appearance = Appearance765;

let IndexedFaceSet768 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet768.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,21,-1,23,21,20,-1,24,23,20,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1]);
IndexedFaceSet768.creaseAngle = 3.14159;
IndexedFaceSet768.texCoordIndex = new MFInt32(new int[26,25,2,-1,26,2,3,-1,4,26,3,-1,0,5,6,-1,6,1,0,-1,27,28,7,-1,7,2,27,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,29,30,12,-1,12,7,29,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,31,32,17,-1,17,12,31,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,34,-1,23,34,33,-1,24,23,33,-1,21,16,15,-1,15,20,21,-1,22,17,35,-1,35,36,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1]);
let Coordinate769 = browser.currentScene.createNode("Coordinate");
Coordinate769.point = new MFVec3f(new float[-0.215,0.3047,-1.152,-1.155,0.2966,-0.2588,-0.6199,0.3013,1.04,0.6505,0.3122,0.9491,0.9008,0.3143,-0.4054,-0.1442,-0.8448,-1.625,-1.472,-0.8561,-0.4271,-0.7164,-0.8496,1.625,1.079,-0.8342,1.482,1.433,-0.8312,-0.6588,-0.1328,-3.5,-1.607,-1.551,-3.513,-0.4225,-0.781,-2.925,1.61,1.136,-2.909,1.468,1.551,-3.486,-0.6519,-0.0592,-8.713,-1.437,-1.093,-8.722,-0.1279,-0.5047,-8.716,1.51,0.8932,-8.704,1.377,1.169,-8.702,-0.3428,-0.0092,-9.336,-0.8855,-0.7154,-9.342,0.0084,-0.3135,-9.339,1.043,0.6412,-9.331,0.9519,0.8292,-9.329,-0.1383]);
IndexedFaceSet768.coord = Coordinate769;

let TextureCoordinate770 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate770.point = new MFVec2f(new float[0.4222,0.6201,0.4327,0.6201,0.3884,0.6201,0.3987,0.6201,0.4103,0.6201,0.4213,0.6265,0.4321,0.6265,0.3894,0.6265,0.399,0.6265,0.4105,0.6265,0.4214,0.6413,0.4323,0.6413,0.389,0.6381,0.3992,0.6381,0.4103,0.6413,0.4213,0.6705,0.4336,0.6705,0.3899,0.6705,0.3981,0.6705,0.4094,0.6705,0.4215,0.674,0.4346,0.674,0.3899,0.674,0.398,0.674,0.4083,0.674,0.3787,0.6201,0.3682,0.6201,0.3787,0.6201,0.3782,0.6265,0.3782,0.6265,0.3783,0.6413,0.3783,0.6413,0.3796,0.6705,0.3676,0.674,0.3806,0.674,0.3796,0.6705,0.3806,0.674]);
IndexedFaceSet768.texCoord = TextureCoordinate770;

Shape764.geometry = IndexedFaceSet768;

Transform763.child = new undefined();

Transform763.child[0] = Shape764;

HAnimSegment762.children = new MFNode();

HAnimSegment762.children[0] = Transform763;

HAnimJoint761.children = new MFNode();

HAnimJoint761.children[0] = HAnimSegment762;

let HAnimJoint771 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint771.name = "r_radiocarpal";
HAnimJoint771.DEF = "hanim_r_radiocarpal";
HAnimJoint771.center = new SFVec3f(new float[-7.899,31.43,-0.3809]);
HAnimJoint771.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint771.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment772 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment772.name = "r_carpal";
HAnimSegment772.DEF = "hanim_r_carpal";
let Transform773 = browser.currentScene.createNode("Transform");
Transform773.translation = new SFVec3f(new float[-7.899,31.43,-0.3809]);
let Shape774 = browser.currentScene.createNode("Shape");
let Appearance775 = browser.currentScene.createNode("Appearance");
let Material776 = browser.currentScene.createNode("Material");
Material776.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance775.material = Material776;

let ImageTexture777 = browser.currentScene.createNode("ImageTexture");
ImageTexture777.USE = "JinLOA3TextureAtlas";
Appearance775.texture = ImageTexture777;

Shape774.appearance = Appearance775;

let IndexedFaceSet778 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet778.coordIndex = new MFInt32(new int[36,41,38,-1,38,37,36,-1,44,54,45,-1,31,30,53,-1,53,4,31,-1,6,7,11,-1,11,10,6,-1,11,32,33,-1,33,10,11,-1,34,11,7,-1,7,24,34,-1,13,27,15,-1,15,17,13,-1,25,35,22,-1,30,20,5,-1,13,32,11,-1,11,34,13,-1,23,29,28,-1,28,22,23,-1,17,15,14,-1,14,16,17,-1,18,19,53,-1,53,5,18,-1,9,17,16,-1,16,8,9,-1,14,15,43,-1,43,42,14,-1,21,33,8,-1,8,16,21,-1,21,23,22,-1,22,35,21,-1,39,38,41,-1,41,40,39,-1,26,24,20,-1,27,26,20,-1,20,12,27,-1,3,43,12,-1,12,30,3,-1,0,25,28,-1,28,54,0,-1,13,17,9,-1,9,32,13,-1,28,29,31,-1,29,23,14,-1,14,42,29,-1,16,14,23,-1,23,21,16,-1,30,31,2,-1,2,3,30,-1,8,33,32,-1,32,9,8,-1,33,21,35,-1,35,10,33,-1,35,25,6,-1,6,10,35,-1,13,34,26,-1,26,27,13,-1,34,24,26,-1,1,46,47,-1,47,0,1,-1,25,0,47,-1,47,48,25,-1,25,48,49,-1,49,6,25,-1,6,49,50,-1,50,7,6,-1,24,7,50,-1,50,51,24,-1,24,51,46,-1,46,1,24,-1,2,42,43,-1,43,3,2,-1,15,27,12,-1,12,43,15,-1,29,42,2,-1,2,31,29,-1,18,5,52,-1,52,44,18,-1,28,25,22,-1,18,44,45,-1,45,19,18,-1,1,44,52,-1,52,24,1,-1,45,28,4,-1,28,31,4,-1,45,4,19,-1,37,47,46,-1,46,36,37,-1,48,47,37,-1,37,38,48,-1,39,49,48,-1,48,38,39,-1,40,50,49,-1,49,39,40,-1,51,50,40,-1,40,41,51,-1,36,46,51,-1,51,41,36,-1,24,52,20,-1,52,5,20,-1,53,30,5,-1,53,19,4,-1,54,28,45,-1,44,1,0,-1,0,54,44,-1,20,30,12,-1]);
IndexedFaceSet778.creaseAngle = 3.14159;
IndexedFaceSet778.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,4,6,5,-1,8,7,10,-1,10,9,8,-1,12,11,14,-1,14,13,12,-1,14,16,15,-1,15,13,14,-1,17,14,11,-1,11,18,17,-1,20,19,22,-1,22,21,20,-1,23,25,24,-1,7,27,26,-1,20,16,14,-1,14,17,20,-1,28,30,29,-1,29,24,28,-1,21,22,32,-1,32,31,21,-1,33,34,10,-1,10,26,33,-1,35,21,31,-1,31,36,35,-1,32,22,38,-1,38,37,32,-1,39,15,36,-1,36,31,39,-1,39,28,24,-1,24,25,39,-1,40,2,3,-1,3,41,40,-1,42,18,27,-1,19,42,27,-1,27,43,19,-1,44,38,43,-1,43,7,44,-1,45,23,29,-1,29,6,45,-1,20,21,35,-1,35,16,20,-1,29,30,8,-1,30,28,32,-1,32,37,30,-1,31,32,28,-1,28,39,31,-1,7,8,46,-1,46,44,7,-1,36,15,16,-1,16,35,36,-1,15,39,25,-1,25,13,15,-1,25,23,12,-1,12,13,25,-1,20,17,42,-1,42,19,20,-1,17,18,42,-1,47,49,48,-1,48,45,47,-1,23,45,48,-1,48,50,23,-1,23,50,51,-1,51,12,23,-1,12,51,52,-1,52,11,12,-1,18,11,52,-1,52,53,18,-1,18,53,49,-1,49,47,18,-1,46,37,38,-1,38,44,46,-1,22,19,43,-1,43,38,22,-1,30,37,46,-1,46,8,30,-1,33,26,54,-1,54,4,33,-1,29,23,24,-1,33,4,5,-1,5,34,33,-1,47,4,54,-1,54,18,47,-1,5,29,9,-1,29,8,9,-1,5,9,34,-1,1,48,49,-1,49,0,1,-1,50,48,1,-1,1,2,50,-1,40,51,50,-1,50,2,40,-1,41,52,51,-1,51,40,41,-1,53,52,41,-1,41,3,53,-1,0,49,53,-1,53,3,0,-1,18,54,27,-1,54,26,27,-1,10,7,26,-1,10,34,9,-1,6,29,5,-1,4,47,45,-1,45,6,4,-1,27,7,43,-1]);
let Coordinate779 = browser.currentScene.createNode("Coordinate");
Coordinate779.point = new MFVec3f(new float[-0.615,-0.6885,1.418,0.2519,-0.7698,1.606,-0.894,-4.14,1.405,-0.2357,-4.221,1.472,-0.7106,-2.848,1.537,0.2913,-2.795,1.561,-0.3511,-0.9723,-1.085,0.332,-1.036,-1.083,-0.6255,-3.82,-1.576,-0.076,-3.93,-1.587,-0.5517,-2.055,-1.417,0.1089,-2.163,-1.46,-0.0149,-3.564,0.866,0.0687,-3.436,-0.8707,-0.9147,-4.192,-0.1153,-0.2445,-4.253,-0.1554,-0.7883,-4.028,-0.9461,-0.1878,-4.111,-0.9619,0.1749,-2.558,2.351,-0.5105,-2.795,2.344,0.1613,-2.264,1.005,-0.8473,-3.286,-0.8304,-0.9399,-2.17,-0.0115,-0.979,-3.369,-0.052,0.4715,-0.9186,0.2017,-0.7286,-0.8328,0.1541,0.1459,-2.365,0.1498,0.0501,-3.575,-0.0433,-0.969,-2.127,0.9718,-0.9825,-3.348,0.8866,-0.0909,-3.383,1.556,-0.8371,-3.169,1.547,-0.041,-3.318,-1.568,-0.5921,-3.194,-1.578,0.2264,-2.304,-0.7602,-0.8375,-2.137,-0.8044,0.2818,0.1713,1.187,-0.2277,0.2301,1.179,-0.2277,0.4881,0.2572,-0.1331,0.2707,-0.6889,0.3764,0.2118,-0.6809,0.4614,0.4054,0.2565,-0.9242,-4.241,0.7847,-0.2647,-4.324,0.8047,0.3043,-1.534,2.164,-0.8425,-1.789,2.123,0.201,-0.4603,1.254,-0.3856,-0.405,1.248,-0.4965,-0.283,0.2553,-0.2563,-0.4079,-0.7647,0.3314,-0.4586,-0.758,0.3822,-0.3913,0.2697,0.4485,-1.891,1.52,-0.3893,-2.936,1.555,-0.7623,-1.12,1.731]);
IndexedFaceSet778.coord = Coordinate779;

let TextureCoordinate780 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate780.point = new MFVec2f(new float[0.4538,0.6821,0.4536,0.6827,0.4366,0.6851,0.4365,0.6843,0.4719,0.6661,0.4711,0.6637,0.4639,0.67,0.4606,0.6487,0.4605,0.6507,0.4603,0.6538,0.4606,0.6529,0.4117,0.6708,0.4117,0.6714,0.4055,0.6612,0.4047,0.6602,0.4025,0.6505,0.4027,0.6493,0.4177,0.6589,0.4355,0.6719,0.431,0.6469,0.4157,0.6482,0.414,0.6419,0.4289,0.6406,0.4346,0.6727,0.4316,0.6601,0.4169,0.6604,0.4607,0.6543,0.4504,0.6593,0.4308,0.6489,0.4498,0.6605,0.4482,0.6491,0.4143,0.6427,0.4297,0.6411,0.4754,0.6565,0.4752,0.6543,0.4024,0.6436,0.4026,0.6446,0.4463,0.6407,0.4467,0.6399,0.4164,0.6496,0.419,0.6831,0.4192,0.6825,0.4346,0.6583,0.4478,0.647,0.4591,0.6409,0.4581,0.6741,0.4578,0.6416,0.4616,0.6733,0.4549,0.6767,0.455,0.6762,0.4365,0.6779,0.4176,0.6767,0.4177,0.6762,0.4368,0.6768,0.46,0.6628]);
IndexedFaceSet778.texCoord = TextureCoordinate780;

Shape774.geometry = IndexedFaceSet778;

Transform773.child = new undefined();

Transform773.child[0] = Shape774;

HAnimSegment772.children = new MFNode();

HAnimSegment772.children[0] = Transform773;

HAnimJoint771.children = new MFNode();

HAnimJoint771.children[0] = HAnimSegment772;

let HAnimJoint781 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint781.name = "r_carpometacarpal_1";
HAnimJoint781.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint781.center = new SFVec3f(new float[-8.205,29.6,1.302]);
HAnimJoint781.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint781.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment782 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment782.name = "r_metacarpal_1";
HAnimSegment782.DEF = "hanim_r_metacarpal_1";
let Transform783 = browser.currentScene.createNode("Transform");
Transform783.translation = new SFVec3f(new float[-8.205,29.6,1.302]);
let Shape784 = browser.currentScene.createNode("Shape");
let Appearance785 = browser.currentScene.createNode("Appearance");
let Material786 = browser.currentScene.createNode("Material");
Material786.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance785.material = Material786;

let ImageTexture787 = browser.currentScene.createNode("ImageTexture");
ImageTexture787.USE = "JinLOA3TextureAtlas";
Appearance785.texture = ImageTexture787;

Shape784.appearance = Appearance785;

let IndexedFaceSet788 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet788.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1]);
IndexedFaceSet788.creaseAngle = 3.14159;
IndexedFaceSet788.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1]);
let Coordinate789 = browser.currentScene.createNode("Coordinate");
Coordinate789.point = new MFVec3f(new float[0.375,-0.9214,0.322,0.212,-1.009,0.0858,0.1385,-0.9095,0.5036,-0.0245,-0.9973,0.2674,0.533,-0.8014,0.1471,0.4779,-0.7267,0.4605,0.2413,-0.7148,0.6421,-0.0584,-0.7717,0.6012,-0.2213,-0.8595,0.365,-0.1662,-0.9342,0.0516,0.0704,-0.9461,-0.13,0.3701,-0.8892,-0.0891,0.4847,-0.0791,-0.0791,0.4228,0.0048,0.2724,0.1414,0.0189,0.4885,-0.1948,-0.0449,0.4426,-0.3887,-0.1493,0.1616,-0.3268,-0.2331,-0.1899,-0.0453,-0.2473,-0.406,0.2908,-0.1835,-0.3601,0.5058,0.0372,-0.1235,0.4385,0.1283,0.2586,0.1325,0.1437,0.4936,-0.233,0.0743,0.4437,-0.4438,-0.0392,0.1381,-0.3765,-0.1303,-0.244,-0.0705,-0.1457,-0.479,0.2949,-0.0763,-0.4291,0.3497,0.1392,-0.1192,0.3021,0.2036,0.1511,0.0857,0.2145,0.3172,-0.1727,0.1654,0.2819,-0.3218,0.0852,0.0659,-0.2742,0.0207,-0.2044,-0.0578,0.0098,-0.3705,0.2006,0.0589,-0.3352,0.0069,0.159,-0.0407]);
IndexedFaceSet788.coord = Coordinate789;

let TextureCoordinate790 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate790.point = new MFVec2f(new float[0.469,0.6546,0.4646,0.6538,0.4679,0.6539,0.4723,0.6548,0.4715,0.6565,0.4657,0.6558,0.4749,0.6566,0.4741,0.6561,0.4697,0.6552,0.4639,0.6545,0.4606,0.6544,0.4613,0.655,0.468,0.6634,0.4615,0.6626,0.472,0.6635,0.4712,0.6629,0.466,0.6619,0.4595,0.6611,0.4555,0.661,0.4563,0.6616,0.4678,0.6645,0.4607,0.6637,0.4721,0.6647,0.4712,0.664,0.4655,0.6629,0.4585,0.6621,0.4541,0.6619,0.455,0.6626,0.4658,0.6652,0.4608,0.6646,0.4689,0.6653,0.4682,0.6649,0.4642,0.6641,0.4592,0.6635,0.4561,0.6634,0.4568,0.6639,0.4622,0.6648]);
IndexedFaceSet788.texCoord = TextureCoordinate790;

Shape784.geometry = IndexedFaceSet788;

Transform783.child = new undefined();

Transform783.child[0] = Shape784;

HAnimSegment782.children = new MFNode();

HAnimSegment782.children[0] = Transform783;

HAnimJoint781.children = new MFNode();

HAnimJoint781.children[0] = HAnimSegment782;

let HAnimJoint791 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint791.name = "r_metacarpophalangeal_1";
HAnimJoint791.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint791.center = new SFVec3f(new float[-8.08,28.73,1.55]);
HAnimJoint791.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint791.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment792 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment792.name = "r_carpal_proximal_phalanx_1";
HAnimSegment792.DEF = "hanim_r_carpal_proximal_phalanx_1";
let Transform793 = browser.currentScene.createNode("Transform");
Transform793.translation = new SFVec3f(new float[-8.08,28.73,1.55]);
let Shape794 = browser.currentScene.createNode("Shape");
let Appearance795 = browser.currentScene.createNode("Appearance");
let Material796 = browser.currentScene.createNode("Material");
Material796.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance795.material = Material796;

let ImageTexture797 = browser.currentScene.createNode("ImageTexture");
ImageTexture797.USE = "JinLOA3TextureAtlas";
Appearance795.texture = ImageTexture797;

Shape794.appearance = Appearance795;

let IndexedFaceSet798 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet798.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1]);
IndexedFaceSet798.creaseAngle = 3.14159;
IndexedFaceSet798.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1]);
let Coordinate799 = browser.currentScene.createNode("Coordinate");
Coordinate799.point = new MFVec3f(new float[0.5258,-1.001,0.2196,0.3901,-1.074,0.023,0.3376,-1.029,0.3799,0.2019,-1.102,0.1833,0.6244,-0.8415,0.0751,0.585,-0.8078,0.3428,0.3968,-0.8361,0.503,0.1539,-0.912,0.4758,0.0182,-0.985,0.2792,0.0576,-1.019,0.0115,0.2458,-0.9905,-0.1487,0.4887,-0.9145,-0.1215,0.4357,-0.0607,-0.0712,0.3915,-0.0229,0.229,0.1676,-0.0565,0.4196,-0.1048,-0.1417,0.3891,-0.2662,-0.2286,0.1552,-0.222,-0.2663,-0.1451,0.0018,-0.2328,-0.3357,0.2743,-0.1476,-0.3051,0.4293,0.0682,-0.1026,0.3812,0.1092,0.2242,0.1376,0.0727,0.4317,-0.1589,-0.02,0.3984,-0.3346,-0.1146,0.1438,-0.2865,-0.1556,-0.1829,-0.0429,-0.1191,-0.3904,0.2536,-0.0264,-0.3572,0.2801,0.1629,-0.0879,0.2461,0.1919,0.1432,0.0738,0.1661,0.2899,-0.1359,0.1005,0.2664,-0.2601,0.0337,0.0864,-0.2261,0.0046,-0.1447,-0.0538,0.0304,-0.2914,0.1558,0.096,-0.2679,-0.0055,0.1486,-0.0096]);
IndexedFaceSet798.coord = Coordinate799;

let TextureCoordinate800 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate800.point = new MFVec2f(new float[0.4716,0.6458,0.468,0.6451,0.471,0.6448,0.4746,0.6455,0.4739,0.6476,0.469,0.6473,0.4769,0.6473,0.4764,0.6466,0.4727,0.6459,0.4678,0.6456,0.4648,0.6459,0.4653,0.6466,0.4718,0.655,0.4662,0.6546,0.4753,0.6546,0.4748,0.6538,0.4704,0.653,0.4649,0.6527,0.4613,0.653,0.4619,0.6538,0.4717,0.6562,0.4657,0.6558,0.4756,0.6559,0.475,0.655,0.4702,0.6541,0.4642,0.6537,0.4603,0.654,0.4609,0.6549,0.4702,0.657,0.4659,0.6567,0.4729,0.6567,0.4725,0.6561,0.4692,0.6555,0.4649,0.6552,0.4622,0.6555,0.4626,0.6561,0.4674,0.6566]);
IndexedFaceSet798.texCoord = TextureCoordinate800;

Shape794.geometry = IndexedFaceSet798;

Transform793.child = new undefined();

Transform793.child[0] = Shape794;

HAnimSegment792.children = new MFNode();

HAnimSegment792.children[0] = Transform793;

HAnimJoint791.children = new MFNode();

HAnimJoint791.children[0] = HAnimSegment792;

let HAnimJoint801 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint801.name = "r_carpal_interphalangeal_1";
HAnimJoint801.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint801.center = new SFVec3f(new float[-7.832,27.85,1.735]);
HAnimJoint801.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint801.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment802 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment802.name = "r_carpal_distal_phalanx_1";
HAnimSegment802.DEF = "hanim_r_carpal_distal_phalanx_1";
let Transform803 = browser.currentScene.createNode("Transform");
Transform803.translation = new SFVec3f(new float[-7.832,27.85,1.735]);
let Shape804 = browser.currentScene.createNode("Shape");
let Appearance805 = browser.currentScene.createNode("Appearance");
let Material806 = browser.currentScene.createNode("Material");
Material806.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance805.material = Material806;

let ImageTexture807 = browser.currentScene.createNode("ImageTexture");
ImageTexture807.USE = "JinLOA3TextureAtlas";
Appearance805.texture = ImageTexture807;

Shape804.appearance = Appearance805;

let IndexedFaceSet808 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet808.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1]);
IndexedFaceSet808.creaseAngle = 3.14159;
IndexedFaceSet808.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1]);
let Coordinate809 = browser.currentScene.createNode("Coordinate");
Coordinate809.point = new MFVec3f(new float[0.5817,-0.8003,0.0727,0.4584,-0.8658,-0.106,0.4372,-0.8552,0.2109,0.314,-0.9207,0.0322,0.6359,-0.6464,-0.0377,0.62,-0.6384,0.2,0.4756,-0.6933,0.3382,0.2748,-0.7836,0.3078,0.1516,-0.8492,0.1291,0.1675,-0.8572,-0.1085,0.3119,-0.8023,-0.2467,0.5127,-0.712,-0.2163,0.374,-0.0036,-0.0838,0.3562,0.0054,0.1827,0.1843,-0.0599,0.3471,-0.0408,-0.1612,0.313,-0.1875,-0.2392,0.1004,-0.1697,-0.2482,-0.1661,0.0022,-0.1829,-0.3305,0.2274,-0.0816,-0.2964,0.2142,0.1671,-0.0744,0.2005,0.174,0.1306,0.0683,0.1238,0.257,-0.1048,0.0459,0.2308,-0.2176,-0.0141,0.0673,-0.2039,-0.021,-0.1376,-0.0717,0.0292,-0.264,0.1014,0.1072,-0.2378,-0.0214,0.1175,-0.006]);
IndexedFaceSet808.coord = Coordinate809;

let TextureCoordinate810 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate810.point = new MFVec2f(new float[0.4723,0.6394,0.469,0.6388,0.4716,0.6383,0.4749,0.6389,0.4747,0.6409,0.4703,0.6408,0.4773,0.6404,0.4767,0.6395,0.4734,0.6389,0.469,0.6389,0.4664,0.6394,0.467,0.6402,0.4744,0.647,0.4694,0.6469,0.4774,0.6463,0.4768,0.6454,0.4729,0.6447,0.4679,0.6446,0.4649,0.6452,0.4655,0.6461,0.4734,0.6485,0.4696,0.6485,0.4758,0.6481,0.4753,0.6473,0.4722,0.6468,0.4684,0.6467,0.4661,0.6472,0.4666,0.6479,0.4709,0.648]);
IndexedFaceSet808.texCoord = TextureCoordinate810;

Shape804.geometry = IndexedFaceSet808;

Transform803.child = new undefined();

Transform803.child[0] = Shape804;

HAnimSegment802.children = new MFNode();

HAnimSegment802.children[0] = Transform803;

HAnimJoint801.children = new MFNode();

HAnimJoint801.children[0] = HAnimSegment802;

HAnimJoint791.children[1] = HAnimJoint801;

HAnimJoint781.children[1] = HAnimJoint791;

HAnimJoint771.children[1] = HAnimJoint781;

let HAnimJoint811 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint811.name = "r_carpometacarpal_2";
HAnimJoint811.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint811.center = new SFVec3f(new float[-8.376,28.549999,0.5997]);
HAnimJoint811.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint811.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment812 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment812.name = "r_metacarpal_2";
HAnimSegment812.DEF = "hanim_r_metacarpal_2";
let Transform813 = browser.currentScene.createNode("Transform");
Transform813.translation = new SFVec3f(new float[-8.376,28.549999,0.5997]);
let Shape814 = browser.currentScene.createNode("Shape");
let Appearance815 = browser.currentScene.createNode("Appearance");
let Material816 = browser.currentScene.createNode("Material");
Material816.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance815.material = Material816;

let ImageTexture817 = browser.currentScene.createNode("ImageTexture");
ImageTexture817.USE = "JinLOA3TextureAtlas";
Appearance815.texture = ImageTexture817;

Shape814.appearance = Appearance815;

let IndexedFaceSet818 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet818.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1]);
IndexedFaceSet818.creaseAngle = 3.14159;
IndexedFaceSet818.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1]);
let Coordinate819 = browser.currentScene.createNode("Coordinate");
Coordinate819.point = new MFVec3f(new float[0.0229,-1.485,0.1659,0.0277,-1.493,-0.0662,-0.2213,-1.467,0.1625,-0.2166,-1.475,-0.0696,0.2194,-1.321,0.162,0.0326,-1.302,0.3335,-0.2116,-1.284,0.3301,-0.3912,-1.276,0.1535,-0.3864,-1.284,-0.0786,-0.1997,-1.303,-0.2501,0.0446,-1.321,-0.2467,0.2242,-1.329,-0.0701,0.3384,-0.3382,0.1488,0.1289,-0.3166,0.3412,-0.1617,-0.2951,0.3371,-0.3631,-0.2862,0.139,-0.3574,-0.2953,-0.1371,-0.148,-0.3169,-0.3295,0.1426,-0.3384,-0.3254,0.3441,-0.3473,-0.1273,0.3796,-0.1843,0.1553,0.1523,-0.1608,0.364,-0.1629,-0.1375,0.3596,-0.3814,-0.1279,0.1446,-0.3753,-0.1377,-0.1549,-0.148,-0.1611,-0.3636,0.1672,-0.1845,-0.3592,0.3858,-0.1941,-0.1442,0.2808,-0.0217,0.1042,0.1201,-0.0051,0.2518,-0.1029,0.0114,0.2486,-0.2574,0.0182,0.0967,-0.253,0.0113,-0.1151,-0.0923,-0.0053,-0.2627,0.1306,-0.0218,-0.2596,0.2851,-0.0286,-0.1076,0.0187,0.0593,-0.0078]);
IndexedFaceSet818.coord = Coordinate819;

let TextureCoordinate820 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate820.point = new MFVec2f(new float[0.453,0.6387,0.4487,0.6387,0.4487,0.6388,0.453,0.6389,0.4561,0.6405,0.453,0.6403,0.4561,0.6406,0.4528,0.6407,0.4485,0.6406,0.4453,0.6405,0.4454,0.6403,0.4487,0.6402,0.4563,0.6497,0.4527,0.6495,0.4562,0.6499,0.4525,0.65,0.4474,0.6499,0.4439,0.6497,0.4439,0.6495,0.4476,0.6494,0.4567,0.6512,0.4528,0.651,0.4566,0.6514,0.4526,0.6515,0.4471,0.6514,0.4432,0.6512,0.4433,0.651,0.4473,0.6509,0.4546,0.6527,0.4519,0.6525,0.4546,0.6528,0.4518,0.6529,0.4478,0.6528,0.4451,0.6527,0.4452,0.6525,0.448,0.6524,0.4498,0.6533]);
IndexedFaceSet818.texCoord = TextureCoordinate820;

Shape814.geometry = IndexedFaceSet818;

Transform813.child = new undefined();

Transform813.child[0] = Shape814;

HAnimSegment812.children = new MFNode();

HAnimSegment812.children[0] = Transform813;

HAnimJoint811.children = new MFNode();

HAnimJoint811.children[0] = HAnimSegment812;

let HAnimJoint821 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint821.name = "r_metacarpophalangeal_2";
HAnimJoint821.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint821.center = new SFVec3f(new float[-8.52,27.24,0.6551]);
HAnimJoint821.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint821.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment822 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment822.name = "r_carpal_proximal_phalanx_2";
HAnimSegment822.DEF = "hanim_r_carpal_proximal_phalanx_2";
let Transform823 = browser.currentScene.createNode("Transform");
Transform823.translation = new SFVec3f(new float[-8.52,27.24,0.6551]);
let Shape824 = browser.currentScene.createNode("Shape");
let Appearance825 = browser.currentScene.createNode("Appearance");
let Material826 = browser.currentScene.createNode("Material");
Material826.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance825.material = Material826;

let ImageTexture827 = browser.currentScene.createNode("ImageTexture");
ImageTexture827.USE = "JinLOA3TextureAtlas";
Appearance825.texture = ImageTexture827;

Shape824.appearance = Appearance825;

let IndexedFaceSet828 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet828.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1]);
IndexedFaceSet828.creaseAngle = 3.14159;
IndexedFaceSet828.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1]);
let Coordinate829 = browser.currentScene.createNode("Coordinate");
Coordinate829.point = new MFVec3f(new float[0.2499,-1.331,0.1644,0.2541,-1.339,-0.0655,0.0349,-1.351,0.1633,0.0391,-1.359,-0.0666,0.3958,-1.152,0.159,0.2314,-1.162,0.3307,0.0165,-1.182,0.3296,-0.1416,-1.203,0.1563,-0.1374,-1.21,-0.0736,0.0269,-1.201,-0.2453,0.2419,-1.181,-0.2442,0.4,-1.16,-0.0709,0.3504,-0.2375,0.1465,0.166,-0.2482,0.3391,-0.0897,-0.2722,0.3377,-0.267,-0.2955,0.1434,-0.2621,-0.3044,-0.1302,-0.0777,-0.2937,-0.3227,0.1781,-0.2697,-0.3214,0.3554,-0.2464,-0.127,0.3661,-0.0905,0.1542,0.1642,-0.1021,0.365,-0.1159,-0.1284,0.3636,-0.3101,-0.1539,0.1508,-0.3046,-0.1637,-0.1488,-0.1027,-0.152,-0.3596,0.1774,-0.1258,-0.3581,0.3715,-0.1003,-0.1453,0.2544,0.0426,0.1044,0.1117,0.0344,0.2535,-0.0864,0.0158,0.2525,-0.2237,-0.0022,0.102,-0.2198,-0.0091,-0.1098,-0.077,-0.0009,-0.2589,0.121,0.0177,-0.2579,0.2583,0.0357,-0.1074,0.0117,0.0763,-0.005]);
IndexedFaceSet828.coord = Coordinate829;

let TextureCoordinate830 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate830.point = new MFVec2f(new float[0.454,0.6279,0.4498,0.6279,0.4498,0.6277,0.454,0.6277,0.4571,0.6295,0.4539,0.6296,0.4571,0.6293,0.4539,0.6291,0.4496,0.6291,0.4464,0.6292,0.4465,0.6294,0.4497,0.6295,0.4573,0.6381,0.4537,0.6382,0.4572,0.6379,0.4536,0.6377,0.4486,0.6376,0.445,0.6377,0.445,0.6379,0.4486,0.6381,0.4578,0.6395,0.4538,0.6396,0.4577,0.6392,0.4538,0.639,0.4482,0.6389,0.4443,0.639,0.4444,0.6393,0.4483,0.6395,0.4557,0.6408,0.4529,0.6408,0.4557,0.6406,0.4529,0.6404,0.449,0.6404,0.4462,0.6404,0.4462,0.6406,0.449,0.6408,0.4509,0.6412]);
IndexedFaceSet828.texCoord = TextureCoordinate830;

Shape824.geometry = IndexedFaceSet828;

Transform823.child = new undefined();

Transform823.child[0] = Shape824;

HAnimSegment822.children = new MFNode();

HAnimSegment822.children[0] = Transform823;

HAnimJoint821.children = new MFNode();

HAnimJoint821.children[0] = HAnimSegment822;

let HAnimJoint831 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint831.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint831.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint831.center = new SFVec3f(new float[-8.45,26.1,0.6956]);
HAnimJoint831.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint831.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment832 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment832.name = "r_carpal_middle_phalanx_2";
HAnimSegment832.DEF = "hanim_r_carpal_middle_phalanx_2";
let Transform833 = browser.currentScene.createNode("Transform");
Transform833.translation = new SFVec3f(new float[-8.45,26.1,0.6956]);
let Shape834 = browser.currentScene.createNode("Shape");
let Appearance835 = browser.currentScene.createNode("Appearance");
let Material836 = browser.currentScene.createNode("Material");
Material836.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance835.material = Material836;

let ImageTexture837 = browser.currentScene.createNode("ImageTexture");
ImageTexture837.USE = "JinLOA3TextureAtlas";
Appearance835.texture = ImageTexture837;

Shape834.appearance = Appearance835;

let IndexedFaceSet838 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet838.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1]);
IndexedFaceSet838.creaseAngle = 3.14159;
IndexedFaceSet838.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1]);
let Coordinate839 = browser.currentScene.createNode("Coordinate");
Coordinate839.point = new MFVec3f(new float[0.4479,-1.125,0.1554,0.4519,-1.132,-0.0632,0.2499,-1.18,0.1557,0.2539,-1.187,-0.0629,0.5544,-0.9319,0.1491,0.4029,-0.9674,0.3134,0.2049,-1.022,0.3137,0.0594,-1.068,0.1499,0.0634,-1.075,-0.0687,0.2149,-1.04,-0.2329,0.4129,-0.9852,-0.2333,0.5584,-0.939,-0.0695,0.3333,-0.0803,0.1251,0.1781,-0.1166,0.2933,-0.037,-0.1758,0.2937,-0.186,-0.2231,0.1259,-0.1817,-0.2308,-0.1116,-0.0265,-0.1945,-0.2799,0.1886,-0.1353,-0.2802,0.3376,-0.088,-0.1125,0.2019,0.1709,0.088,0.0815,0.1427,0.2185,-0.0854,0.0967,0.2188,-0.2011,0.06,0.0887,-0.1977,0.054,-0.0957,-0.0773,0.0822,-0.2262,0.0896,0.1281,-0.2265,0.2053,0.1648,-0.0963,-0.0132,0.1679,-0.006]);
IndexedFaceSet838.coord = Coordinate839;

let TextureCoordinate840 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate840.point = new MFVec2f(new float[0.4546,0.6191,0.4506,0.619,0.4506,0.6185,0.4546,0.6186,0.4575,0.6206,0.4545,0.6209,0.4576,0.6201,0.4545,0.6196,0.4505,0.6196,0.4474,0.6199,0.4474,0.6204,0.4505,0.6209,0.4572,0.6286,0.4541,0.6289,0.4572,0.628,0.4541,0.6276,0.4497,0.6275,0.4466,0.6279,0.4465,0.6284,0.4497,0.6289,0.4558,0.631,0.4534,0.6313,0.4558,0.6306,0.4534,0.6302,0.45,0.6302,0.4475,0.6305,0.4475,0.6309,0.45,0.6312,0.4516,0.6313]);
IndexedFaceSet838.texCoord = TextureCoordinate840;

Shape834.geometry = IndexedFaceSet838;

Transform833.child = new undefined();

Transform833.child[0] = Shape834;

HAnimSegment832.children = new MFNode();

HAnimSegment832.children[0] = Transform833;

HAnimJoint831.children = new MFNode();

HAnimJoint831.children[0] = HAnimSegment832;

let HAnimJoint841 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint841.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint841.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint841.center = new SFVec3f(new float[-8.192,25.17,0.7315]);
HAnimJoint841.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint841.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment842 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment842.name = "r_carpal_distal_phalanx_2";
HAnimSegment842.DEF = "hanim_r_carpal_distal_phalanx_2";
let Transform843 = browser.currentScene.createNode("Transform");
Transform843.translation = new SFVec3f(new float[-8.192,25.17,0.7315]);
let Shape844 = browser.currentScene.createNode("Shape");
let Appearance845 = browser.currentScene.createNode("Appearance");
let Material846 = browser.currentScene.createNode("Material");
Material846.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance845.material = Material846;

let ImageTexture847 = browser.currentScene.createNode("ImageTexture");
ImageTexture847.USE = "JinLOA3TextureAtlas";
Appearance845.texture = ImageTexture847;

Shape844.appearance = Appearance845;

let IndexedFaceSet848 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet848.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1]);
IndexedFaceSet848.creaseAngle = 3.14159;
IndexedFaceSet848.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1]);
let Coordinate849 = browser.currentScene.createNode("Coordinate");
Coordinate849.point = new MFVec3f(new float[0.6187,-1.071,0.1411,0.6221,-1.077,-0.0485,0.4578,-1.147,0.1426,0.4613,-1.153,-0.047,0.6714,-0.8704,0.1341,0.5482,-0.923,0.2774,0.3873,-0.9993,0.2789,0.2693,-1.061,0.1378,0.2727,-1.067,-0.0518,0.396,-1.015,-0.1951,0.5568,-0.9385,-0.1966,0.6749,-0.8765,-0.0555,0.3236,-0.0612,0.1191,0.1854,-0.1202,0.2799,-0.006,-0.211,0.2816,-0.1384,-0.2805,0.1233,-0.1343,-0.2879,-0.1023,0.004,-0.2288,-0.263,0.1953,-0.138,-0.2647,0.3277,-0.0685,-0.1065,0.2135,0.0836,0.0963,0.0945,0.035,0.233,-0.0723,-0.0325,0.2317,-0.1865,-0.0807,0.0968,-0.1843,-0.0816,-0.0912,-0.0691,-0.0336,-0.2249,0.0937,0.0356,-0.2277,0.2116,0.0844,-0.0958,-0.0314,0.0875,-0.0035]);
IndexedFaceSet848.coord = Coordinate849;

let TextureCoordinate850 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate850.point = new MFVec2f(new float[0.455,0.6109,0.4515,0.6108,0.4515,0.6101,0.455,0.6102,0.4575,0.6123,0.4549,0.6128,0.4576,0.6116,0.455,0.611,0.4514,0.6109,0.4488,0.6114,0.4488,0.6121,0.4514,0.6127,0.4576,0.6198,0.4546,0.6204,0.4576,0.619,0.4547,0.6183,0.4505,0.6182,0.4475,0.6188,0.4475,0.6197,0.4504,0.6203,0.4567,0.6213,0.4542,0.6217,0.4567,0.6206,0.4542,0.6202,0.4507,0.6202,0.4482,0.6206,0.4482,0.6213,0.4506,0.6217,0.4523,0.6218]);
IndexedFaceSet848.texCoord = TextureCoordinate850;

Shape844.geometry = IndexedFaceSet848;

Transform843.child = new undefined();

Transform843.child[0] = Shape844;

HAnimSegment842.children = new MFNode();

HAnimSegment842.children[0] = Transform843;

HAnimJoint841.children = new MFNode();

HAnimJoint841.children[0] = HAnimSegment842;

HAnimJoint831.children[1] = HAnimJoint841;

HAnimJoint821.children[1] = HAnimJoint831;

HAnimJoint811.children[1] = HAnimJoint821;

HAnimJoint771.children[2] = HAnimJoint811;

let HAnimJoint851 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint851.name = "r_carpometacarpal_3";
HAnimJoint851.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint851.center = new SFVec3f(new float[-8.344,28.65,-0.194]);
HAnimJoint851.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint851.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment852 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment852.name = "r_metacarpal_3";
HAnimSegment852.DEF = "hanim_r_metacarpal_3";
let Transform853 = browser.currentScene.createNode("Transform");
Transform853.translation = new SFVec3f(new float[-8.344,28.65,-0.194]);
let Shape854 = browser.currentScene.createNode("Shape");
let Appearance855 = browser.currentScene.createNode("Appearance");
let Material856 = browser.currentScene.createNode("Material");
Material856.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance855.material = Material856;

let ImageTexture857 = browser.currentScene.createNode("ImageTexture");
ImageTexture857.USE = "JinLOA3TextureAtlas";
Appearance855.texture = ImageTexture857;

Shape854.appearance = Appearance855;

let IndexedFaceSet858 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet858.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1]);
IndexedFaceSet858.creaseAngle = 3.14159;
IndexedFaceSet858.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1]);
let Coordinate859 = browser.currentScene.createNode("Coordinate");
Coordinate859.point = new MFVec3f(new float[-0.0157,-1.601,0.0972,-0.0217,-1.599,-0.1348,-0.2598,-1.581,0.1076,-0.2658,-1.578,-0.1245,0.183,-1.427,0.091,0.0045,-1.414,0.2728,-0.2395,-1.393,0.2832,-0.4271,-1.376,0.1169,-0.4331,-1.374,-0.1151,-0.2546,-1.387,-0.2969,-0.0105,-1.408,-0.3073,0.177,-1.425,-0.1411,0.3164,-0.3793,0.1197,0.1161,-0.3643,0.3236,-0.1742,-0.3403,0.3359,-0.3846,-0.3213,0.1495,-0.3918,-0.3185,-0.1266,-0.1915,-0.3335,-0.3306,0.0988,-0.3575,-0.3429,0.3092,-0.3765,-0.1564,0.3602,-0.2157,0.1315,0.143,-0.1995,0.3527,-0.172,-0.1734,0.3661,-0.4003,-0.1528,0.1638,-0.408,-0.1498,-0.1357,-0.1908,-0.166,-0.357,0.1242,-0.1921,-0.3703,0.3524,-0.2126,-0.168,0.2615,-0.0399,0.0937,0.1079,-0.0284,0.2501,-0.1148,-0.01,0.2596,-0.2762,0.0046,0.1165,-0.2817,0.0068,-0.0952,-0.1281,-0.0047,-0.2517,0.0946,-0.0232,-0.2611,0.256,-0.0377,-0.1181,-0.0044,0.0523,-0.0002]);
IndexedFaceSet858.coord = Coordinate859;

let TextureCoordinate860 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate860.point = new MFVec2f(new float[0.4371,0.6382,0.4328,0.6382,0.4329,0.6384,0.4372,0.6384,0.4403,0.64,0.4369,0.6398,0.4405,0.6401,0.4374,0.6403,0.4331,0.6403,0.4298,0.6402,0.4296,0.64,0.4326,0.6398,0.4413,0.6498,0.4375,0.6497,0.4415,0.65,0.438,0.6502,0.4329,0.6502,0.4291,0.6501,0.4289,0.6499,0.4324,0.6497,0.4418,0.6514,0.4377,0.6512,0.442,0.6516,0.4383,0.6518,0.4327,0.6518,0.4286,0.6517,0.4284,0.6514,0.4321,0.6512,0.4399,0.653,0.437,0.6529,0.4401,0.6531,0.4374,0.6533,0.4335,0.6533,0.4306,0.6532,0.4304,0.653,0.4331,0.6529,0.4352,0.6537]);
IndexedFaceSet858.texCoord = TextureCoordinate860;

Shape854.geometry = IndexedFaceSet858;

Transform853.child = new undefined();

Transform853.child[0] = Shape854;

HAnimSegment852.children = new MFNode();

HAnimSegment852.children[0] = Transform853;

HAnimJoint851.children = new MFNode();

HAnimJoint851.children[0] = HAnimSegment852;

let HAnimJoint861 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint861.name = "r_metacarpophalangeal_3";
HAnimJoint861.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint861.center = new SFVec3f(new float[-8.52,27.26,-0.1959]);
HAnimJoint861.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint861.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment862 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment862.name = "r_carpal_proximal_phalanx_3";
HAnimSegment862.DEF = "hanim_r_carpal_proximal_phalanx_3";
let Transform863 = browser.currentScene.createNode("Transform");
Transform863.translation = new SFVec3f(new float[-8.52,27.26,-0.1959]);
let Shape864 = browser.currentScene.createNode("Shape");
let Appearance865 = browser.currentScene.createNode("Appearance");
let Material866 = browser.currentScene.createNode("Material");
Material866.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance865.material = Material866;

let ImageTexture867 = browser.currentScene.createNode("ImageTexture");
ImageTexture867.USE = "JinLOA3TextureAtlas";
Appearance865.texture = ImageTexture867;

Shape864.appearance = Appearance865;

let IndexedFaceSet868 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet868.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1]);
IndexedFaceSet868.creaseAngle = 3.14159;
IndexedFaceSet868.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1]);
let Coordinate869 = browser.currentScene.createNode("Coordinate");
Coordinate869.point = new MFVec3f(new float[0.2259,-1.448,0.0923,0.2194,-1.446,-0.1376,0.0106,-1.469,0.1016,0.0041,-1.467,-0.1283,0.3742,-1.258,0.088,0.2177,-1.275,0.2673,0.0024,-1.296,0.2766,-0.1639,-1.31,0.1112,-0.1704,-1.307,-0.1187,-0.0138,-1.29,-0.2981,0.2014,-1.269,-0.3073,0.3677,-1.255,-0.1419,0.3422,-0.2825,0.1227,0.1666,-0.302,0.3239,-0.0895,-0.3267,0.3349,-0.2761,-0.3422,0.1493,-0.2838,-0.3394,-0.1242,-0.1082,-0.3199,-0.3253,0.1479,-0.2952,-0.3364,0.3345,-0.2797,-0.1508,0.3605,-0.1263,0.1367,0.1681,-0.1476,0.357,-0.1123,-0.1747,0.3691,-0.3166,-0.1917,0.1659,-0.3251,-0.1886,-0.1336,-0.1327,-0.1672,-0.3539,0.1477,-0.1401,-0.366,0.352,-0.1232,-0.1627,0.2486,0.0181,0.0994,0.1126,0.003,0.2552,-0.0857,-0.0161,0.2638,-0.2302,-0.0281,0.1201,-0.2362,-0.0259,-0.0917,-0.1002,-0.0108,-0.2475,0.0981,0.0083,-0.256,0.2426,0.0203,-0.1123,0.0014,0.0597,0.0048]);
IndexedFaceSet868.coord = Coordinate869;

let TextureCoordinate870 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate870.point = new MFVec2f(new float[0.4369,0.6266,0.4327,0.6266,0.4328,0.6264,0.4371,0.6264,0.4402,0.6282,0.4368,0.6283,0.4403,0.628,0.4373,0.6279,0.433,0.6279,0.4297,0.628,0.4295,0.6282,0.4326,0.6284,0.4412,0.6373,0.4375,0.6375,0.4414,0.6371,0.438,0.637,0.4329,0.637,0.4292,0.6372,0.429,0.6374,0.4324,0.6375,0.4418,0.6388,0.4378,0.639,0.4421,0.6385,0.4383,0.6384,0.4327,0.6384,0.4287,0.6386,0.4284,0.6389,0.4322,0.639,0.4399,0.6402,0.4371,0.6403,0.4401,0.64,0.4374,0.6399,0.4335,0.6399,0.4306,0.6401,0.4305,0.6402,0.4331,0.6404,0.4353,0.6407]);
IndexedFaceSet868.texCoord = TextureCoordinate870;

Shape864.geometry = IndexedFaceSet868;

Transform863.child = new undefined();

Transform863.child[0] = Shape864;

HAnimSegment862.children = new MFNode();

HAnimSegment862.children[0] = Transform863;

HAnimJoint861.children = new MFNode();

HAnimJoint861.children[0] = HAnimSegment862;

let HAnimJoint871 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint871.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint871.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint871.center = new SFVec3f(new float[-8.477,26.07,-0.2214]);
HAnimJoint871.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint871.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment872 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment872.name = "r_carpal_middle_phalanx_3";
HAnimSegment872.DEF = "hanim_r_carpal_middle_phalanx_3";
let Transform873 = browser.currentScene.createNode("Transform");
Transform873.translation = new SFVec3f(new float[-8.477,26.07,-0.2214]);
let Shape874 = browser.currentScene.createNode("Shape");
let Appearance875 = browser.currentScene.createNode("Appearance");
let Material876 = browser.currentScene.createNode("Material");
Material876.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance875.material = Material876;

let ImageTexture877 = browser.currentScene.createNode("ImageTexture");
ImageTexture877.USE = "JinLOA3TextureAtlas";
Appearance875.texture = ImageTexture877;

Shape874.appearance = Appearance875;

let IndexedFaceSet878 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet878.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1]);
IndexedFaceSet878.creaseAngle = 3.14159;
IndexedFaceSet878.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1]);
let Coordinate879 = browser.currentScene.createNode("Coordinate");
Coordinate879.point = new MFVec3f(new float[0.4389,-1.268,0.089,0.4327,-1.265,-0.1296,0.2401,-1.325,0.0971,0.234,-1.323,-0.1215,0.5481,-1.062,0.0865,0.4036,-1.106,0.2566,0.2049,-1.164,0.2647,0.0512,-1.205,0.1068,0.045,-1.203,-0.1118,0.1894,-1.158,-0.2818,0.3882,-1.101,-0.2899,0.5419,-1.059,-0.132,0.3388,-0.1526,0.1159,0.1909,-0.1984,0.2901,-0.025,-0.2608,0.2989,-0.1825,-0.3032,0.1372,-0.1892,-0.3008,-0.1003,-0.0412,-0.2549,-0.2744,0.1747,-0.1925,-0.2833,0.3321,-0.1501,-0.1216,0.2096,0.117,0.0982,0.0948,0.0814,0.2333,-0.0727,0.033,0.2402,-0.1949,0.0001,0.1147,-0.2001,0.002,-0.0696,-0.0853,0.0376,-0.2048,0.0823,0.086,-0.2116,0.2044,0.1189,-0.0861,-0.0097,0.1188,0.0156]);
IndexedFaceSet878.coord = Coordinate879;

let TextureCoordinate880 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate880.point = new MFVec2f(new float[0.4364,0.617,0.4323,0.6171,0.4325,0.6165,0.4365,0.6165,0.4395,0.6186,0.4363,0.619,0.4397,0.618,0.4367,0.6176,0.4327,0.6176,0.4295,0.6181,0.4294,0.6186,0.4323,0.619,0.4401,0.6271,0.4369,0.6275,0.4403,0.6265,0.4373,0.6261,0.4329,0.6261,0.4297,0.6266,0.4295,0.6271,0.4325,0.6275,0.4391,0.6297,0.4366,0.6301,0.4392,0.6293,0.4369,0.629,0.4335,0.629,0.431,0.6293,0.4308,0.6298,0.4331,0.6301,0.435,0.6301]);
IndexedFaceSet878.texCoord = TextureCoordinate880;

Shape874.geometry = IndexedFaceSet878;

Transform873.child = new undefined();

Transform873.child[0] = Shape874;

HAnimSegment872.children = new MFNode();

HAnimSegment872.children[0] = Transform873;

HAnimJoint871.children = new MFNode();

HAnimJoint871.children[0] = HAnimSegment872;

let HAnimJoint881 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint881.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint881.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint881.center = new SFVec3f(new float[-8.25,25.030001,-0.2187]);
HAnimJoint881.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint881.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment882 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment882.name = "r_carpal_distal_phalanx_3";
HAnimSegment882.DEF = "hanim_r_carpal_distal_phalanx_3";
let Transform883 = browser.currentScene.createNode("Transform");
Transform883.translation = new SFVec3f(new float[-8.25,25.030001,-0.2187]);
let Shape884 = browser.currentScene.createNode("Shape");
let Appearance885 = browser.currentScene.createNode("Appearance");
let Material886 = browser.currentScene.createNode("Material");
Material886.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance885.material = Material886;

let ImageTexture887 = browser.currentScene.createNode("ImageTexture");
ImageTexture887.USE = "JinLOA3TextureAtlas";
Appearance885.texture = ImageTexture887;

Shape884.appearance = Appearance885;

let IndexedFaceSet888 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet888.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1]);
IndexedFaceSet888.creaseAngle = 3.14159;
IndexedFaceSet888.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1]);
let Coordinate889 = browser.currentScene.createNode("Coordinate");
Coordinate889.point = new MFVec3f(new float[0.631,-1.169,0.0421,0.6256,-1.167,-0.1475,0.4691,-1.25,0.0483,0.4637,-1.248,-0.1413,0.6864,-0.9557,0.0421,0.569,-1.018,0.1889,0.4071,-1.099,0.1951,0.2817,-1.158,0.0576,0.2763,-1.156,-0.1319,0.3937,-1.094,-0.2788,0.5556,-1.013,-0.285,0.681,-0.9537,-0.1474,0.3504,-0.0919,0.0851,0.2187,-0.1616,0.2498,0.026,-0.2579,0.2572,-0.1147,-0.3243,0.1029,-0.121,-0.322,-0.1226,0.0106,-0.2523,-0.2873,0.2033,-0.156,-0.2946,0.344,-0.0896,-0.1404,0.2414,0.0637,0.0753,0.128,0.0061,0.2155,-0.0399,-0.0652,0.2197,-0.161,-0.1101,0.0888,-0.1675,-0.1027,-0.0988,-0.0577,-0.0458,-0.2359,0.106,0.0275,-0.2439,0.2307,0.0733,-0.1162,-0.0079,0.0731,-0.0112]);
IndexedFaceSet888.coord = Coordinate889;

let TextureCoordinate890 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate890.point = new MFVec2f(new float[0.4356,0.6082,0.4321,0.6082,0.4322,0.6074,0.4357,0.6074,0.4383,0.6096,0.4356,0.6102,0.4384,0.6088,0.4359,0.6083,0.4324,0.6083,0.4296,0.6089,0.4295,0.6096,0.4321,0.6102,0.4394,0.6176,0.4364,0.6183,0.4396,0.6167,0.4367,0.6161,0.4325,0.6161,0.4295,0.6168,0.4293,0.6177,0.4322,0.6183,0.4388,0.6192,0.4362,0.6198,0.4389,0.6186,0.4364,0.6181,0.433,0.6182,0.4304,0.6187,0.4303,0.6194,0.4326,0.6199,0.4346,0.6199]);
IndexedFaceSet888.texCoord = TextureCoordinate890;

Shape884.geometry = IndexedFaceSet888;

Transform883.child = new undefined();

Transform883.child[0] = Shape884;

HAnimSegment882.children = new MFNode();

HAnimSegment882.children[0] = Transform883;

HAnimJoint881.children = new MFNode();

HAnimJoint881.children[0] = HAnimSegment882;

HAnimJoint871.children[1] = HAnimJoint881;

HAnimJoint861.children[1] = HAnimJoint871;

HAnimJoint851.children[1] = HAnimJoint861;

HAnimJoint771.children[3] = HAnimJoint851;

let HAnimJoint891 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint891.name = "r_carpometacarpal_4";
HAnimJoint891.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint891.center = new SFVec3f(new float[-8.339,28.57,-0.9243]);
HAnimJoint891.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint891.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment892 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment892.name = "r_metacarpal_4";
HAnimSegment892.DEF = "hanim_r_metacarpal_4";
let Transform893 = browser.currentScene.createNode("Transform");
Transform893.translation = new SFVec3f(new float[-8.339,28.57,-0.9243]);
let Shape894 = browser.currentScene.createNode("Shape");
let Appearance895 = browser.currentScene.createNode("Appearance");
let Material896 = browser.currentScene.createNode("Material");
Material896.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance895.material = Material896;

let ImageTexture897 = browser.currentScene.createNode("ImageTexture");
ImageTexture897.USE = "JinLOA3TextureAtlas";
Appearance895.texture = ImageTexture897;

Shape894.appearance = Appearance895;

let IndexedFaceSet898 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet898.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1]);
IndexedFaceSet898.creaseAngle = 3.14159;
IndexedFaceSet898.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1]);
let Coordinate899 = browser.currentScene.createNode("Coordinate");
Coordinate899.point = new MFVec3f(new float[0.014,-1.366,0.0295,0.0298,-1.354,-0.1885,-0.2211,-1.344,0.0143,-0.2053,-1.332,-0.2037,0.205,-1.209,0.0528,0.0169,-1.202,0.2049,-0.2182,-1.181,0.1897,-0.3826,-1.156,0.0148,-0.3668,-1.144,-0.2032,-0.1787,-1.151,-0.3553,0.0564,-1.172,-0.3401,0.2209,-1.197,-0.1652,0.3293,-0.2545,0.1423,0.1183,-0.2468,0.3129,-0.1614,-0.2216,0.2949,-0.3458,-0.1936,0.0987,-0.327,-0.1793,-0.1607,-0.116,-0.187,-0.3313,0.1637,-0.2122,-0.3132,0.3482,-0.2402,-0.117,0.3702,-0.1061,0.1656,0.1412,-0.0977,0.3507,-0.1622,-0.0704,0.3311,-0.3623,-0.04,0.1183,-0.3419,-0.0245,-0.1631,-0.1129,-0.0329,-0.3482,0.1905,-0.0602,-0.3286,0.3906,-0.0905,-0.1158,0.2788,0.0575,0.1279,0.1169,0.0634,0.2588,-0.0976,0.0827,0.2449,-0.2391,0.1042,0.0944,-0.2247,0.1152,-0.1045,-0.0628,0.1093,-0.2354,0.1518,0.0899,-0.2215,0.2933,0.0685,-0.0711,0.0325,0.1491,0.016]);
IndexedFaceSet898.coord = Coordinate899;

let TextureCoordinate900 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate900.point = new MFVec2f(new float[0.4223,0.6397,0.4182,0.6398,0.4179,0.64,0.422,0.6399,0.4255,0.6412,0.4227,0.6412,0.4252,0.6414,0.422,0.6417,0.418,0.6418,0.4151,0.6417,0.4154,0.6415,0.4187,0.6413,0.4275,0.6502,0.4244,0.6501,0.4272,0.6504,0.4235,0.6507,0.4187,0.6508,0.4156,0.6508,0.4159,0.6505,0.4196,0.6503,0.4282,0.6516,0.4248,0.6515,0.4279,0.6519,0.4239,0.6522,0.4187,0.6523,0.4153,0.6522,0.4156,0.652,0.4196,0.6517,0.4265,0.6531,0.4241,0.6531,0.4263,0.6533,0.4235,0.6535,0.4198,0.6536,0.4174,0.6536,0.4176,0.6534,0.4204,0.6532,0.422,0.6539]);
IndexedFaceSet898.texCoord = TextureCoordinate900;

Shape894.geometry = IndexedFaceSet898;

Transform893.child = new undefined();

Transform893.child[0] = Shape894;

HAnimSegment892.children = new MFNode();

HAnimSegment892.children[0] = Transform893;

HAnimJoint891.children = new MFNode();

HAnimJoint891.children[0] = HAnimSegment892;

let HAnimJoint901 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint901.name = "r_metacarpophalangeal_4";
HAnimJoint901.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint901.center = new SFVec3f(new float[-8.428,27.299999,-0.9985]);
HAnimJoint901.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint901.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment902 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment902.name = "r_carpal_proximal_phalanx_4";
HAnimSegment902.DEF = "hanim_r_carpal_proximal_phalanx_4";
let Transform903 = browser.currentScene.createNode("Transform");
Transform903.translation = new SFVec3f(new float[-8.428,27.299999,-0.9985]);
let Shape904 = browser.currentScene.createNode("Shape");
let Appearance905 = browser.currentScene.createNode("Appearance");
let Material906 = browser.currentScene.createNode("Material");
Material906.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance905.material = Material906;

let ImageTexture907 = browser.currentScene.createNode("ImageTexture");
ImageTexture907.USE = "JinLOA3TextureAtlas";
Appearance905.texture = ImageTexture907;

Shape904.appearance = Appearance905;

let IndexedFaceSet908 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet908.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1]);
IndexedFaceSet908.creaseAngle = 3.14159;
IndexedFaceSet908.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1]);
let Coordinate909 = browser.currentScene.createNode("Coordinate");
Coordinate909.point = new MFVec3f(new float[0.1847,-1.253,0.0467,0.1998,-1.241,-0.1693,-0.0227,-1.271,0.0316,-0.0076,-1.259,-0.1844,0.3279,-1.08,0.0673,0.161,-1.102,0.2179,-0.0464,-1.12,0.2028,-0.1906,-1.124,0.0295,-0.1754,-1.112,-0.1865,-0.0085,-1.09,-0.3372,0.1989,-1.072,-0.3221,0.3431,-1.068,-0.1487,0.2967,-0.1902,0.1418,0.1095,-0.215,0.3108,-0.1373,-0.2358,0.2929,-0.299,-0.2404,0.0984,-0.281,-0.2262,-0.1586,-0.0938,-0.2014,-0.3276,0.153,-0.1807,-0.3096,0.3147,-0.176,-0.1151,0.3133,-0.0482,0.1642,0.1083,-0.0753,0.3493,-0.1619,-0.0981,0.3296,-0.339,-0.1032,0.1167,-0.3192,-0.0876,-0.1647,-0.1142,-0.0605,-0.3498,0.156,-0.0377,-0.3301,0.3331,-0.0327,-0.1172,0.2099,0.0863,0.1241,0.0649,0.0671,0.255,-0.1261,0.051,0.2411,-0.2514,0.0474,0.0905,-0.2374,0.0585,-0.1085,-0.0924,0.0776,-0.2393,0.0986,0.0937,-0.2254,0.2239,0.0973,-0.0749,-0.0182,0.1305,0.0112]);
IndexedFaceSet908.coord = Coordinate909;

let TextureCoordinate910 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate910.point = new MFVec2f(new float[0.4212,0.6288,0.4172,0.6289,0.4169,0.6288,0.4209,0.6287,0.4244,0.6302,0.4216,0.6304,0.4241,0.6301,0.4209,0.63,0.4169,0.6301,0.4141,0.6304,0.4144,0.6305,0.4176,0.6306,0.4261,0.6386,0.423,0.6388,0.4258,0.6384,0.4222,0.6383,0.4174,0.6385,0.4143,0.6387,0.4146,0.6389,0.4182,0.6389,0.4268,0.6399,0.4234,0.6401,0.4265,0.6397,0.4225,0.6396,0.4173,0.6398,0.4139,0.64,0.4142,0.6402,0.4182,0.6403,0.4251,0.6412,0.4226,0.6414,0.4248,0.6411,0.422,0.641,0.4183,0.6411,0.4159,0.6413,0.4162,0.6415,0.419,0.6415,0.4206,0.6418]);
IndexedFaceSet908.texCoord = TextureCoordinate910;

Shape904.geometry = IndexedFaceSet908;

Transform903.child = new undefined();

Transform903.child[0] = Shape904;

HAnimSegment902.children = new MFNode();

HAnimSegment902.children[0] = Transform903;

HAnimJoint901.children = new MFNode();

HAnimJoint901.children[0] = HAnimSegment902;

let HAnimJoint911 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint911.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint911.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint911.center = new SFVec3f(new float[-8.428,26.290001,-1.034]);
HAnimJoint911.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint911.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment912 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment912.name = "r_carpal_middle_phalanx_4";
HAnimSegment912.DEF = "hanim_r_carpal_middle_phalanx_4";
let Transform913 = browser.currentScene.createNode("Transform");
Transform913.translation = new SFVec3f(new float[-8.428,26.290001,-1.034]);
let Shape914 = browser.currentScene.createNode("Shape");
let Appearance915 = browser.currentScene.createNode("Appearance");
let Material916 = browser.currentScene.createNode("Material");
Material916.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance915.material = Material916;

let ImageTexture917 = browser.currentScene.createNode("ImageTexture");
ImageTexture917.USE = "JinLOA3TextureAtlas";
Appearance915.texture = ImageTexture917;

Shape914.appearance = Appearance915;

let IndexedFaceSet918 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet918.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1]);
IndexedFaceSet918.creaseAngle = 3.14159;
IndexedFaceSet918.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1]);
let Coordinate919 = browser.currentScene.createNode("Coordinate");
Coordinate919.point = new MFVec3f(new float[0.412,-1.137,0.0335,0.4261,-1.125,-0.1679,0.2243,-1.187,0.0176,0.2385,-1.176,-0.1838,0.5153,-0.9493,0.0522,0.3639,-0.9958,0.1913,0.1762,-1.047,0.1754,0.0461,-1.076,0.0125,0.0602,-1.065,-0.1888,0.2116,-1.019,-0.3279,0.3992,-0.9679,-0.312,0.5294,-0.9381,-0.1491,0.3178,-0.1177,0.1,0.1627,-0.1653,0.2425,-0.0412,-0.2206,0.2252,-0.1745,-0.2511,0.0583,-0.1591,-0.239,-0.1604,-0.0041,-0.1914,-0.3029,0.1998,-0.1361,-0.2856,0.3331,-0.1056,-0.1188,0.1985,0.1307,0.0829,0.0782,0.0937,0.1934,-0.08,0.0508,0.18,-0.1835,0.0271,0.0505,-0.1716,0.0365,-0.1192,-0.0513,0.0735,-0.2298,0.1069,0.1164,-0.2164,0.2104,0.1401,-0.0869,-0.0002,0.1379,-0.0157]);
IndexedFaceSet918.coord = Coordinate919;

let TextureCoordinate920 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate920.point = new MFVec2f(new float[0.4203,0.6204,0.4166,0.6205,0.4163,0.62,0.42,0.6199,0.4232,0.6217,0.4207,0.6221,0.4229,0.6212,0.4199,0.6209,0.4162,0.621,0.4136,0.6215,0.4139,0.622,0.4169,0.6222,0.4242,0.6295,0.4215,0.6299,0.4239,0.629,0.4208,0.6287,0.4167,0.6288,0.4141,0.6293,0.4144,0.6298,0.4175,0.6301,0.4233,0.6319,0.4212,0.6323,0.423,0.6315,0.4206,0.6313,0.4175,0.6314,0.4154,0.6317,0.4157,0.6321,0.4181,0.6324,0.4194,0.6323]);
IndexedFaceSet918.texCoord = TextureCoordinate920;

Shape914.geometry = IndexedFaceSet918;

Transform913.child = new undefined();

Transform913.child[0] = Shape914;

HAnimSegment912.children = new MFNode();

HAnimSegment912.children[0] = Transform913;

HAnimJoint911.children = new MFNode();

HAnimJoint911.children[0] = HAnimSegment912;

let HAnimJoint921 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint921.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint921.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint921.center = new SFVec3f(new float[-8.192,25.309999,-1.124]);
HAnimJoint921.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint921.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment922 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment922.name = "r_carpal_distal_phalanx_4";
HAnimSegment922.DEF = "hanim_r_carpal_distal_phalanx_4";
let Transform923 = browser.currentScene.createNode("Transform");
Transform923.translation = new SFVec3f(new float[-8.192,25.309999,-1.124]);
let Shape924 = browser.currentScene.createNode("Shape");
let Appearance925 = browser.currentScene.createNode("Appearance");
let Material926 = browser.currentScene.createNode("Material");
Material926.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance925.material = Material926;

let ImageTexture927 = browser.currentScene.createNode("ImageTexture");
ImageTexture927.USE = "JinLOA3TextureAtlas";
Appearance925.texture = ImageTexture927;

Shape924.appearance = Appearance925;

let IndexedFaceSet928 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet928.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1]);
IndexedFaceSet928.creaseAngle = 3.14159;
IndexedFaceSet928.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1]);
let Coordinate929 = browser.currentScene.createNode("Coordinate");
Coordinate929.point = new MFVec3f(new float[0.5436,-1.006,0.082,0.5559,-0.9964,-0.0922,0.3911,-1.079,0.0671,0.4033,-1.069,-0.1071,0.596,-0.8116,0.0978,0.4725,-0.8732,0.2172,0.3199,-0.9458,0.2024,0.2147,-0.9931,0.0605,0.2269,-0.9834,-0.1137,0.3505,-0.9218,-0.2332,0.503,-0.8491,-0.2183,0.6083,-0.8019,-0.0765,0.2786,-0.0205,0.1427,0.14,-0.0896,0.2768,-0.0415,-0.176,0.2591,-0.1596,-0.229,0.1,-0.1451,-0.2175,-0.1073,-0.0064,-0.1484,-0.2413,0.1751,-0.062,-0.2236,0.2931,-0.009,-0.0645,0.1776,0.1232,0.1297,0.0583,0.0659,0.2438,-0.0996,0.0023,0.2269,-0.2013,-0.0322,0.0923,-0.1903,-0.0176,-0.08,-0.0748,0.0389,-0.1916,0.0796,0.1047,-0.1786,0.185,0.14,-0.0465,-0.0484,0.1379,0.025]);
IndexedFaceSet928.coord = Coordinate929;

let TextureCoordinate930 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate930.point = new MFVec2f(new float[0.4195,0.6124,0.4163,0.6125,0.416,0.6118,0.4193,0.6117,0.422,0.6137,0.4198,0.6143,0.4218,0.613,0.4191,0.6126,0.4159,0.6126,0.4137,0.6132,0.414,0.6139,0.4166,0.6143,0.4231,0.621,0.4207,0.6217,0.4228,0.6202,0.4199,0.6197,0.416,0.6198,0.4135,0.6205,0.4139,0.6213,0.4168,0.6218,0.4225,0.6225,0.4204,0.623,0.4222,0.6219,0.4197,0.6216,0.4165,0.6217,0.4145,0.6223,0.4147,0.6229,0.4172,0.6232,0.4185,0.6232]);
IndexedFaceSet928.texCoord = TextureCoordinate930;

Shape924.geometry = IndexedFaceSet928;

Transform923.child = new undefined();

Transform923.child[0] = Shape924;

HAnimSegment922.children = new MFNode();

HAnimSegment922.children[0] = Transform923;

HAnimJoint921.children = new MFNode();

HAnimJoint921.children[0] = HAnimSegment922;

HAnimJoint911.children[1] = HAnimJoint921;

HAnimJoint901.children[1] = HAnimJoint911;

HAnimJoint891.children[1] = HAnimJoint901;

HAnimJoint771.children[4] = HAnimJoint891;

let HAnimJoint931 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint931.name = "r_carpometacarpal_5";
HAnimJoint931.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint931.center = new SFVec3f(new float[-8.197,28.370001,-1.528]);
HAnimJoint931.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint931.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment932 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment932.name = "r_metacarpal_5";
HAnimSegment932.DEF = "hanim_r_metacarpal_5";
let Transform933 = browser.currentScene.createNode("Transform");
Transform933.translation = new SFVec3f(new float[-8.197,28.370001,-1.528]);
let Shape934 = browser.currentScene.createNode("Shape");
let Appearance935 = browser.currentScene.createNode("Appearance");
let Material936 = browser.currentScene.createNode("Material");
Material936.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance935.material = Material936;

let ImageTexture937 = browser.currentScene.createNode("ImageTexture");
ImageTexture937.USE = "JinLOA3TextureAtlas";
Appearance935.texture = ImageTexture937;

Shape934.appearance = Appearance935;

let IndexedFaceSet938 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet938.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1]);
IndexedFaceSet938.creaseAngle = 3.14159;
IndexedFaceSet938.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1]);
let Coordinate939 = browser.currentScene.createNode("Coordinate");
Coordinate939.point = new MFVec3f(new float[-0.0463,-0.9645,-0.0622,-0.0267,-0.942,-0.253,-0.2519,-0.9328,-0.0794,-0.2324,-0.9103,-0.2702,0.1254,-0.8655,-0.031,-0.0435,-0.8586,0.0992,-0.2492,-0.8269,0.082,-0.3888,-0.7862,-0.074,-0.3693,-0.7638,-0.2648,-0.2004,-0.7707,-0.395,0.0053,-0.8024,-0.3779,0.1449,-0.843,-0.2218,0.2585,-0.1911,0.0918,0.069,-0.1834,0.2379,-0.1757,-0.1456,0.2175,-0.3323,-0.1,0.0425,-0.309,-0.0733,-0.1846,-0.1196,-0.0811,-0.3307,0.1251,-0.1188,-0.3102,0.2817,-0.1644,-0.1352,0.2978,-0.0883,0.1196,0.0923,-0.0799,0.2781,-0.1732,-0.0389,0.2559,-0.343,0.0105,0.066,-0.3178,0.0395,-0.1803,-0.1123,0.0311,-0.3387,0.1532,-0.0098,-0.3166,0.3231,-0.0593,-0.1267,0.223,0.0382,0.0917,0.0776,0.0442,0.2038,-0.1101,0.0732,0.1881,-0.2302,0.1081,0.0539,-0.2124,0.1286,-0.1203,-0.0671,0.1227,-0.2324,0.1207,0.0937,-0.2167,0.2408,0.0588,-0.0824,0.0116,0.1281,-0.0076]);
IndexedFaceSet938.coord = Coordinate939;

let TextureCoordinate940 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate940.point = new MFVec2f(new float[0.4094,0.6427,0.4058,0.6429,0.4055,0.6432,0.4091,0.643,0.4124,0.6437,0.41,0.6437,0.412,0.644,0.4092,0.6444,0.4056,0.6446,0.4032,0.6445,0.4035,0.6443,0.4064,0.6439,0.4149,0.6501,0.4122,0.65,0.4146,0.6504,0.4113,0.6509,0.4071,0.6511,0.4044,0.651,0.4048,0.6507,0.408,0.6502,0.4157,0.651,0.4127,0.651,0.4153,0.6514,0.4118,0.6519,0.4072,0.6522,0.4043,0.6521,0.4047,0.6517,0.4082,0.6512,0.4143,0.6522,0.4122,0.6522,0.414,0.6525,0.4115,0.6528,0.4083,0.653,0.4062,0.6529,0.4065,0.6527,0.409,0.6523,0.4104,0.653]);
IndexedFaceSet938.texCoord = TextureCoordinate940;

Shape934.geometry = IndexedFaceSet938;

Transform933.child = new undefined();

Transform933.child[0] = Shape934;

HAnimSegment932.children = new MFNode();

HAnimSegment932.children[0] = Transform933;

HAnimJoint931.children = new MFNode();

HAnimJoint931.children[0] = HAnimSegment932;

let HAnimJoint941 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint941.name = "r_metacarpophalangeal_5";
HAnimJoint941.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint941.center = new SFVec3f(new float[-8.334,27.5,-1.701]);
HAnimJoint941.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint941.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment942 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment942.name = "r_carpal_proximal_phalanx_5";
HAnimSegment942.DEF = "hanim_r_carpal_proximal_phalanx_5";
let Transform943 = browser.currentScene.createNode("Transform");
Transform943.translation = new SFVec3f(new float[-8.334,27.5,-1.701]);
let Shape944 = browser.currentScene.createNode("Shape");
let Appearance945 = browser.currentScene.createNode("Appearance");
let Material946 = browser.currentScene.createNode("Material");
Material946.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance945.material = Material946;

let ImageTexture947 = browser.currentScene.createNode("ImageTexture");
ImageTexture947.USE = "JinLOA3TextureAtlas";
Appearance945.texture = ImageTexture947;

Shape944.appearance = Appearance945;

let IndexedFaceSet948 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet948.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1]);
IndexedFaceSet948.creaseAngle = 3.14159;
IndexedFaceSet948.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1]);
let Coordinate949 = browser.currentScene.createNode("Coordinate");
Coordinate949.point = new MFVec3f(new float[0.1298,-0.9343,0.012,0.1487,-0.912,-0.1771,-0.0526,-0.9323,-0.0063,-0.0337,-0.91,-0.1954,0.2599,-0.8204,0.0405,0.1089,-0.8356,0.1686,-0.0735,-0.8336,0.1504,-0.1961,-0.8154,-0.0051,-0.1772,-0.793,-0.1942,-0.0262,-0.7778,-0.3224,0.1562,-0.7798,-0.3041,0.2788,-0.7981,-0.1486,0.2549,-0.1812,0.1442,0.0856,-0.1983,0.2879,-0.1314,-0.1959,0.2662,-0.269,-0.1755,0.0918,-0.2465,-0.1489,-0.1332,-0.0771,-0.1318,-0.2769,0.1399,-0.1342,-0.2552,0.2774,-0.1547,-0.0808,0.2729,-0.0814,0.1704,0.0874,-0.1001,0.3278,-0.1502,-0.0975,0.304,-0.3008,-0.0751,0.113,-0.2762,-0.046,-0.1333,-0.0907,-0.0273,-0.2907,0.1469,-0.0299,-0.2669,0.2975,-0.0523,-0.0759,0.1866,0.0252,0.139,0.0555,0.012,0.2502,-0.1126,0.0138,0.2334,-0.2191,0.0297,0.0984,-0.2016,0.0502,-0.0758,-0.0705,0.0635,-0.1871,0.0975,0.0616,-0.1703,0.204,0.0458,-0.0352,-0.0099,0.0797,0.0369]);
IndexedFaceSet948.coord = Coordinate949;

let TextureCoordinate950 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate950.point = new MFVec2f(new float[0.4075,0.6349,0.404,0.6351,0.4037,0.6351,0.4072,0.6349,0.4104,0.6358,0.4081,0.6359,0.4101,0.6358,0.4072,0.636,0.4037,0.6362,0.4013,0.6363,0.4017,0.6363,0.4046,0.6362,0.4127,0.6418,0.41,0.6419,0.4123,0.6418,0.409,0.642,0.4048,0.6423,0.4022,0.6424,0.4026,0.6424,0.4058,0.6422,0.4134,0.6427,0.4105,0.6429,0.413,0.6427,0.4094,0.6429,0.4048,0.6432,0.4019,0.6434,0.4024,0.6434,0.4059,0.6432,0.412,0.6438,0.4099,0.6439,0.4116,0.6438,0.4091,0.6439,0.4059,0.6441,0.4038,0.6442,0.4042,0.6442,0.4067,0.6441,0.408,0.6444]);
IndexedFaceSet948.texCoord = TextureCoordinate950;

Shape944.geometry = IndexedFaceSet948;

Transform943.child = new undefined();

Transform943.child[0] = Shape944;

HAnimSegment942.children = new MFNode();

HAnimSegment942.children[0] = Transform943;

HAnimJoint941.children = new MFNode();

HAnimJoint941.children[0] = HAnimSegment942;

let HAnimJoint951 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint951.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint951.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint951.center = new SFVec3f(new float[-8.338,26.780001,-1.768]);
HAnimJoint951.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint951.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment952 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment952.name = "r_carpal_middle_phalanx_5";
HAnimSegment952.DEF = "hanim_r_carpal_middle_phalanx_5";
let Transform953 = browser.currentScene.createNode("Transform");
Transform953.translation = new SFVec3f(new float[-8.338,26.780001,-1.768]);
let Shape954 = browser.currentScene.createNode("Shape");
let Appearance955 = browser.currentScene.createNode("Appearance");
let Material956 = browser.currentScene.createNode("Material");
Material956.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance955.material = Material956;

let ImageTexture957 = browser.currentScene.createNode("ImageTexture");
ImageTexture957.USE = "JinLOA3TextureAtlas";
Appearance955.texture = ImageTexture957;

Shape954.appearance = Appearance955;

let IndexedFaceSet958 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet958.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1]);
IndexedFaceSet958.creaseAngle = 3.14159;
IndexedFaceSet958.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1]);
let Coordinate959 = browser.currentScene.createNode("Coordinate");
Coordinate959.point = new MFVec3f(new float[0.3103,-0.8684,0.0017,0.3279,-0.8476,-0.1746,0.1444,-0.8917,-0.0183,0.162,-0.8709,-0.1946,0.4057,-0.7413,0.0284,0.268,-0.7744,0.1456,0.1021,-0.7977,0.1256,-0.0092,-0.7996,-0.0215,0.0085,-0.7788,-0.1978,0.1461,-0.7457,-0.315,0.3121,-0.7224,-0.295,0.4234,-0.7205,-0.1478,0.2537,-0.1316,0.1027,0.1126,-0.1655,0.2227,-0.0677,-0.1909,0.201,-0.1817,-0.1928,0.0502,-0.1625,-0.1702,-0.1412,-0.0215,-0.1363,-0.2613,0.1588,-0.1109,-0.2396,0.2728,-0.109,-0.0888,0.156,0.0566,0.096,0.0465,0.0303,0.1892,-0.0934,0.0106,0.1723,-0.1818,0.0091,0.0553,-0.1669,0.0266,-0.0933,-0.0575,0.0529,-0.1864,0.0824,0.0726,-0.1696,0.1709,0.0741,-0.0526,-0.016,0.0815,0.0057]);
IndexedFaceSet958.coord = Coordinate959;

let TextureCoordinate960 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate960.point = new MFVec2f(new float[0.4061,0.6287,0.4028,0.6289,0.4025,0.6286,0.4057,0.6284,0.4088,0.6296,0.4066,0.6299,0.4084,0.6293,0.4057,0.6293,0.4024,0.6295,0.4002,0.6298,0.4006,0.63,0.4033,0.6301,0.4102,0.6353,0.408,0.6356,0.4098,0.635,0.407,0.635,0.4035,0.6352,0.4012,0.6355,0.4016,0.6358,0.4044,0.6358,0.4096,0.6371,0.4079,0.6374,0.4093,0.6369,0.4071,0.6369,0.4043,0.6371,0.4026,0.6373,0.4029,0.6375,0.4051,0.6375,0.4062,0.6376]);
IndexedFaceSet958.texCoord = TextureCoordinate960;

Shape954.geometry = IndexedFaceSet958;

Transform953.child = new undefined();

Transform953.child[0] = Shape954;

HAnimSegment952.children = new MFNode();

HAnimSegment952.children[0] = Transform953;

HAnimJoint951.children = new MFNode();

HAnimJoint951.children[0] = HAnimSegment952;

let HAnimJoint961 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint961.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint961.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint961.center = new SFVec3f(new float[-8.153,26.040001,-1.886]);
HAnimJoint961.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint961.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment962 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment962.name = "r_carpal_distal_phalanx_5";
HAnimSegment962.DEF = "hanim_r_carpal_distal_phalanx_5";
let Transform963 = browser.currentScene.createNode("Transform");
Transform963.translation = new SFVec3f(new float[-8.153,26.040001,-1.886]);
let Shape964 = browser.currentScene.createNode("Shape");
let Appearance965 = browser.currentScene.createNode("Appearance");
let Material966 = browser.currentScene.createNode("Material");
Material966.diffuseColor = new SFColor(new float[0.588,0.588,0.588]);
Appearance965.material = Material966;

let ImageTexture967 = browser.currentScene.createNode("ImageTexture");
ImageTexture967.USE = "JinLOA3TextureAtlas";
Appearance965.texture = ImageTexture967;

Shape964.appearance = Appearance965;

let IndexedFaceSet968 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet968.coordIndex = new MFInt32(new int[0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1]);
IndexedFaceSet968.creaseAngle = 3.14159;
IndexedFaceSet968.texCoordIndex = new MFInt32(new int[0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1]);
let Coordinate969 = browser.currentScene.createNode("Coordinate");
Coordinate969.point = new MFVec3f(new float[0.4265,-0.7665,0.0531,0.4417,-0.7485,-0.0994,0.2908,-0.8079,0.0337,0.306,-0.7899,-0.1188,0.4775,-0.6307,0.0765,0.3642,-0.6752,0.1764,0.2285,-0.7166,0.157,0.1382,-0.7341,0.0281,0.1534,-0.7161,-0.1244,0.2667,-0.6716,-0.2242,0.4024,-0.6302,-0.2049,0.4927,-0.6127,-0.076,0.2189,-0.0422,0.1441,0.0919,-0.0921,0.2561,-0.0696,-0.1414,0.2331,-0.1709,-0.161,0.0886,-0.1528,-0.1396,-0.0929,-0.0258,-0.0897,-0.2049,0.1357,-0.0404,-0.1819,0.2371,-0.0207,-0.0373,0.1344,0.069,0.1368,0.0252,0.0277,0.2322,-0.1149,-0.0067,0.2114,-0.202,-0.0158,0.0895,-0.1878,0.0058,-0.0611,-0.082,0.0466,-0.1545,0.0552,0.083,-0.137,0.1456,0.0926,-0.0171,-0.0613,0.1015,0.0409]);
IndexedFaceSet968.coord = Coordinate969;

let TextureCoordinate970 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate970.point = new MFVec2f(new float[0.4049,0.6227,0.4021,0.6229,0.4017,0.6225,0.4045,0.6223,0.4072,0.6236,0.4053,0.624,0.4068,0.6232,0.4044,0.623,0.4016,0.6232,0.3997,0.6236,0.4001,0.624,0.4025,0.6242,0.4086,0.6291,0.4066,0.6295,0.4082,0.6286,0.4055,0.6284,0.4022,0.6286,0.4001,0.6291,0.4005,0.6296,0.4032,0.6297,0.4082,0.6302,0.4064,0.6306,0.4078,0.6299,0.4056,0.6298,0.4028,0.63,0.401,0.6304,0.4014,0.6307,0.4036,0.6308,0.4047,0.6309]);
IndexedFaceSet968.texCoord = TextureCoordinate970;

Shape964.geometry = IndexedFaceSet968;

Transform963.child = new undefined();

Transform963.child[0] = Shape964;

HAnimSegment962.children = new MFNode();

HAnimSegment962.children[0] = Transform963;

HAnimJoint961.children = new MFNode();

HAnimJoint961.children[0] = HAnimSegment962;

HAnimJoint951.children[1] = HAnimJoint961;

HAnimJoint941.children[1] = HAnimJoint951;

HAnimJoint931.children[1] = HAnimJoint941;

HAnimJoint771.children[5] = HAnimJoint931;

HAnimJoint761.children[1] = HAnimJoint771;

HAnimJoint751.children[1] = HAnimJoint761;

HAnimJoint741.children[1] = HAnimJoint751;

HAnimJoint731.children[1] = HAnimJoint741;

HAnimJoint331.children[3] = HAnimJoint731;

HAnimJoint321.children[1] = HAnimJoint331;

HAnimJoint311.children[1] = HAnimJoint321;

HAnimJoint301.children[1] = HAnimJoint311;

HAnimJoint291.children[1] = HAnimJoint301;

HAnimJoint281.children[1] = HAnimJoint291;

HAnimJoint271.children[1] = HAnimJoint281;

HAnimJoint261.children[1] = HAnimJoint271;

HAnimJoint251.children[1] = HAnimJoint261;

HAnimJoint241.children[1] = HAnimJoint251;

HAnimJoint231.children[1] = HAnimJoint241;

HAnimJoint221.children[1] = HAnimJoint231;

HAnimJoint211.children[1] = HAnimJoint221;

HAnimJoint201.children[1] = HAnimJoint211;

HAnimJoint191.children[1] = HAnimJoint201;

HAnimJoint181.children[1] = HAnimJoint191;

HAnimJoint171.children[1] = HAnimJoint181;

HAnimJoint31.children[2] = HAnimJoint171;

HAnimHumanoid23.joints[1] = HAnimJoint31;

let HAnimJoint971 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint971.USE = "hanim_humanoid_root";
HAnimHumanoid23.joints[2] = HAnimJoint971;

let HAnimJoint972 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint972.USE = "hanim_sacroiliac";
HAnimHumanoid23.joints[3] = HAnimJoint972;

let HAnimJoint973 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint973.USE = "hanim_vl5";
HAnimHumanoid23.joints[4] = HAnimJoint973;

let HAnimJoint974 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint974.USE = "hanim_vl4";
HAnimHumanoid23.joints[5] = HAnimJoint974;

let HAnimJoint975 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint975.USE = "hanim_vl3";
HAnimHumanoid23.joints[6] = HAnimJoint975;

let HAnimJoint976 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint976.USE = "hanim_vl2";
HAnimHumanoid23.joints[7] = HAnimJoint976;

let HAnimJoint977 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint977.USE = "hanim_vl1";
HAnimHumanoid23.joints[8] = HAnimJoint977;

let HAnimJoint978 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint978.USE = "hanim_vt12";
HAnimHumanoid23.joints[9] = HAnimJoint978;

let HAnimJoint979 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint979.USE = "hanim_vt11";
HAnimHumanoid23.joints[10] = HAnimJoint979;

let HAnimJoint980 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint980.USE = "hanim_vt10";
HAnimHumanoid23.joints[11] = HAnimJoint980;

let HAnimJoint981 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint981.USE = "hanim_vt9";
HAnimHumanoid23.joints[12] = HAnimJoint981;

let HAnimJoint982 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint982.USE = "hanim_vt8";
HAnimHumanoid23.joints[13] = HAnimJoint982;

let HAnimJoint983 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint983.USE = "hanim_vt7";
HAnimHumanoid23.joints[14] = HAnimJoint983;

let HAnimJoint984 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint984.USE = "hanim_vt6";
HAnimHumanoid23.joints[15] = HAnimJoint984;

let HAnimJoint985 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint985.USE = "hanim_vt5";
HAnimHumanoid23.joints[16] = HAnimJoint985;

let HAnimJoint986 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint986.USE = "hanim_vt4";
HAnimHumanoid23.joints[17] = HAnimJoint986;

let HAnimJoint987 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint987.USE = "hanim_vt3";
HAnimHumanoid23.joints[18] = HAnimJoint987;

let HAnimJoint988 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint988.USE = "hanim_vt2";
HAnimHumanoid23.joints[19] = HAnimJoint988;

let HAnimJoint989 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint989.USE = "hanim_vt1";
HAnimHumanoid23.joints[20] = HAnimJoint989;

let HAnimJoint990 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint990.USE = "hanim_vc7";
HAnimHumanoid23.joints[21] = HAnimJoint990;

let HAnimJoint991 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint991.USE = "hanim_vc6";
HAnimHumanoid23.joints[22] = HAnimJoint991;

let HAnimJoint992 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint992.USE = "hanim_vc5";
HAnimHumanoid23.joints[23] = HAnimJoint992;

let HAnimJoint993 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint993.USE = "hanim_vc4";
HAnimHumanoid23.joints[24] = HAnimJoint993;

let HAnimJoint994 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint994.USE = "hanim_vc3";
HAnimHumanoid23.joints[25] = HAnimJoint994;

let HAnimJoint995 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint995.USE = "hanim_vc2";
HAnimHumanoid23.joints[26] = HAnimJoint995;

let HAnimJoint996 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint996.USE = "hanim_vc1";
HAnimHumanoid23.joints[27] = HAnimJoint996;

let HAnimJoint997 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint997.USE = "hanim_skullbase";
HAnimHumanoid23.joints[28] = HAnimJoint997;

let HAnimJoint998 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint998.USE = "hanim_temporomandibular";
HAnimHumanoid23.joints[29] = HAnimJoint998;

let HAnimJoint999 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint999.USE = "hanim_l_acromioclavicular";
HAnimHumanoid23.joints[30] = HAnimJoint999;

let HAnimJoint1000 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1000.USE = "hanim_r_acromioclavicular";
HAnimHumanoid23.joints[31] = HAnimJoint1000;

let HAnimJoint1001 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1001.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid23.joints[32] = HAnimJoint1001;

let HAnimJoint1002 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1002.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid23.joints[33] = HAnimJoint1002;

let HAnimJoint1003 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1003.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid23.joints[34] = HAnimJoint1003;

let HAnimJoint1004 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1004.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid23.joints[35] = HAnimJoint1004;

let HAnimJoint1005 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1005.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid23.joints[36] = HAnimJoint1005;

let HAnimJoint1006 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1006.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid23.joints[37] = HAnimJoint1006;

let HAnimJoint1007 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1007.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid23.joints[38] = HAnimJoint1007;

let HAnimJoint1008 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1008.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid23.joints[39] = HAnimJoint1008;

let HAnimJoint1009 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1009.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid23.joints[40] = HAnimJoint1009;

let HAnimJoint1010 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1010.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid23.joints[41] = HAnimJoint1010;

let HAnimJoint1011 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1011.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid23.joints[42] = HAnimJoint1011;

let HAnimJoint1012 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1012.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid23.joints[43] = HAnimJoint1012;

let HAnimJoint1013 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1013.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid23.joints[44] = HAnimJoint1013;

let HAnimJoint1014 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1014.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid23.joints[45] = HAnimJoint1014;

let HAnimJoint1015 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1015.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid23.joints[46] = HAnimJoint1015;

let HAnimJoint1016 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1016.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid23.joints[47] = HAnimJoint1016;

let HAnimJoint1017 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1017.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid23.joints[48] = HAnimJoint1017;

let HAnimJoint1018 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1018.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid23.joints[49] = HAnimJoint1018;

let HAnimJoint1019 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1019.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid23.joints[50] = HAnimJoint1019;

let HAnimJoint1020 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1020.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid23.joints[51] = HAnimJoint1020;

let HAnimJoint1021 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1021.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid23.joints[52] = HAnimJoint1021;

let HAnimJoint1022 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1022.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid23.joints[53] = HAnimJoint1022;

let HAnimJoint1023 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1023.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid23.joints[54] = HAnimJoint1023;

let HAnimJoint1024 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1024.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid23.joints[55] = HAnimJoint1024;

let HAnimJoint1025 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1025.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid23.joints[56] = HAnimJoint1025;

let HAnimJoint1026 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1026.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid23.joints[57] = HAnimJoint1026;

let HAnimJoint1027 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1027.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid23.joints[58] = HAnimJoint1027;

let HAnimJoint1028 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1028.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid23.joints[59] = HAnimJoint1028;

let HAnimJoint1029 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1029.USE = "hanim_l_elbow";
HAnimHumanoid23.joints[60] = HAnimJoint1029;

let HAnimJoint1030 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1030.USE = "hanim_r_elbow";
HAnimHumanoid23.joints[61] = HAnimJoint1030;

let HAnimJoint1031 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1031.USE = "hanim_l_eyeball_joint";
HAnimHumanoid23.joints[62] = HAnimJoint1031;

let HAnimJoint1032 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1032.USE = "hanim_r_eyeball_joint";
HAnimHumanoid23.joints[63] = HAnimJoint1032;

let HAnimJoint1033 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1033.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid23.joints[64] = HAnimJoint1033;

let HAnimJoint1034 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1034.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid23.joints[65] = HAnimJoint1034;

let HAnimJoint1035 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1035.USE = "hanim_l_eyelid_joint";
HAnimHumanoid23.joints[66] = HAnimJoint1035;

let HAnimJoint1036 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1036.USE = "hanim_r_eyelid_joint";
HAnimHumanoid23.joints[67] = HAnimJoint1036;

let HAnimJoint1037 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1037.USE = "hanim_l_hip";
HAnimHumanoid23.joints[68] = HAnimJoint1037;

let HAnimJoint1038 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1038.USE = "hanim_r_hip";
HAnimHumanoid23.joints[69] = HAnimJoint1038;

let HAnimJoint1039 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1039.USE = "hanim_l_knee";
HAnimHumanoid23.joints[70] = HAnimJoint1039;

let HAnimJoint1040 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1040.USE = "hanim_r_knee";
HAnimHumanoid23.joints[71] = HAnimJoint1040;

let HAnimJoint1041 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1041.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid23.joints[72] = HAnimJoint1041;

let HAnimJoint1042 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1042.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid23.joints[73] = HAnimJoint1042;

let HAnimJoint1043 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1043.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid23.joints[74] = HAnimJoint1043;

let HAnimJoint1044 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1044.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid23.joints[75] = HAnimJoint1044;

let HAnimJoint1045 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1045.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid23.joints[76] = HAnimJoint1045;

let HAnimJoint1046 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1046.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid23.joints[77] = HAnimJoint1046;

let HAnimJoint1047 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1047.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid23.joints[78] = HAnimJoint1047;

let HAnimJoint1048 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1048.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid23.joints[79] = HAnimJoint1048;

let HAnimJoint1049 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1049.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid23.joints[80] = HAnimJoint1049;

let HAnimJoint1050 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1050.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid23.joints[81] = HAnimJoint1050;

let HAnimJoint1051 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1051.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid23.joints[82] = HAnimJoint1051;

let HAnimJoint1052 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1052.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid23.joints[83] = HAnimJoint1052;

let HAnimJoint1053 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1053.USE = "hanim_l_radiocarpal";
HAnimHumanoid23.joints[84] = HAnimJoint1053;

let HAnimJoint1054 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1054.USE = "hanim_r_radiocarpal";
HAnimHumanoid23.joints[85] = HAnimJoint1054;

let HAnimJoint1055 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1055.USE = "hanim_l_shoulder";
HAnimHumanoid23.joints[86] = HAnimJoint1055;

let HAnimJoint1056 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1056.USE = "hanim_r_shoulder";
HAnimHumanoid23.joints[87] = HAnimJoint1056;

let HAnimJoint1057 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1057.USE = "hanim_l_sternoclavicular";
HAnimHumanoid23.joints[88] = HAnimJoint1057;

let HAnimJoint1058 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1058.USE = "hanim_r_sternoclavicular";
HAnimHumanoid23.joints[89] = HAnimJoint1058;

let HAnimJoint1059 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1059.USE = "hanim_l_talocrural";
HAnimHumanoid23.joints[90] = HAnimJoint1059;

let HAnimJoint1060 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1060.USE = "hanim_r_talocrural";
HAnimHumanoid23.joints[91] = HAnimJoint1060;

let HAnimJoint1061 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1061.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid23.joints[92] = HAnimJoint1061;

let HAnimJoint1062 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1062.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid23.joints[93] = HAnimJoint1062;

let HAnimJoint1063 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1063.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid23.joints[94] = HAnimJoint1063;

let HAnimJoint1064 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1064.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid23.joints[95] = HAnimJoint1064;

let HAnimSegment1065 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1065.USE = "hanim_sacrum";
HAnimHumanoid23.segments[96] = HAnimSegment1065;

let HAnimSegment1066 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1066.USE = "hanim_pelvis";
HAnimHumanoid23.segments[97] = HAnimSegment1066;

let HAnimSegment1067 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1067.USE = "hanim_l5";
HAnimHumanoid23.segments[98] = HAnimSegment1067;

let HAnimSegment1068 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1068.USE = "hanim_l4";
HAnimHumanoid23.segments[99] = HAnimSegment1068;

let HAnimSegment1069 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1069.USE = "hanim_l3";
HAnimHumanoid23.segments[100] = HAnimSegment1069;

let HAnimSegment1070 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1070.USE = "hanim_l2";
HAnimHumanoid23.segments[101] = HAnimSegment1070;

let HAnimSegment1071 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1071.USE = "hanim_l1";
HAnimHumanoid23.segments[102] = HAnimSegment1071;

let HAnimSegment1072 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1072.USE = "hanim_t12";
HAnimHumanoid23.segments[103] = HAnimSegment1072;

let HAnimSegment1073 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1073.USE = "hanim_t11";
HAnimHumanoid23.segments[104] = HAnimSegment1073;

let HAnimSegment1074 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1074.USE = "hanim_t10";
HAnimHumanoid23.segments[105] = HAnimSegment1074;

let HAnimSegment1075 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1075.USE = "hanim_t9";
HAnimHumanoid23.segments[106] = HAnimSegment1075;

let HAnimSegment1076 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1076.USE = "hanim_t8";
HAnimHumanoid23.segments[107] = HAnimSegment1076;

let HAnimSegment1077 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1077.USE = "hanim_t7";
HAnimHumanoid23.segments[108] = HAnimSegment1077;

let HAnimSegment1078 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1078.USE = "hanim_t6";
HAnimHumanoid23.segments[109] = HAnimSegment1078;

let HAnimSegment1079 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1079.USE = "hanim_t5";
HAnimHumanoid23.segments[110] = HAnimSegment1079;

let HAnimSegment1080 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1080.USE = "hanim_t4";
HAnimHumanoid23.segments[111] = HAnimSegment1080;

let HAnimSegment1081 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1081.USE = "hanim_t3";
HAnimHumanoid23.segments[112] = HAnimSegment1081;

let HAnimSegment1082 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1082.USE = "hanim_t2";
HAnimHumanoid23.segments[113] = HAnimSegment1082;

let HAnimSegment1083 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1083.USE = "hanim_t1";
HAnimHumanoid23.segments[114] = HAnimSegment1083;

let HAnimSegment1084 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1084.USE = "hanim_c7";
HAnimHumanoid23.segments[115] = HAnimSegment1084;

let HAnimSegment1085 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1085.USE = "hanim_c6";
HAnimHumanoid23.segments[116] = HAnimSegment1085;

let HAnimSegment1086 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1086.USE = "hanim_c5";
HAnimHumanoid23.segments[117] = HAnimSegment1086;

let HAnimSegment1087 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1087.USE = "hanim_c4";
HAnimHumanoid23.segments[118] = HAnimSegment1087;

let HAnimSegment1088 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1088.USE = "hanim_c3";
HAnimHumanoid23.segments[119] = HAnimSegment1088;

let HAnimSegment1089 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1089.USE = "hanim_c2";
HAnimHumanoid23.segments[120] = HAnimSegment1089;

let HAnimSegment1090 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1090.USE = "hanim_c1";
HAnimHumanoid23.segments[121] = HAnimSegment1090;

let HAnimSegment1091 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1091.USE = "hanim_skull";
HAnimHumanoid23.segments[122] = HAnimSegment1091;

let HAnimSegment1092 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1092.USE = "hanim_jaw";
HAnimHumanoid23.segments[123] = HAnimSegment1092;

let HAnimSegment1093 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1093.USE = "hanim_l_calf";
HAnimHumanoid23.segments[124] = HAnimSegment1093;

let HAnimSegment1094 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1094.USE = "hanim_r_calf";
HAnimHumanoid23.segments[125] = HAnimSegment1094;

let HAnimSegment1095 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1095.USE = "hanim_l_carpal";
HAnimHumanoid23.segments[126] = HAnimSegment1095;

let HAnimSegment1096 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1096.USE = "hanim_r_carpal";
HAnimHumanoid23.segments[127] = HAnimSegment1096;

let HAnimSegment1097 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1097.USE = "hanim_l_carpal_distal_phalanx_1";
HAnimHumanoid23.segments[128] = HAnimSegment1097;

let HAnimSegment1098 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1098.USE = "hanim_r_carpal_distal_phalanx_1";
HAnimHumanoid23.segments[129] = HAnimSegment1098;

let HAnimSegment1099 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1099.USE = "hanim_l_carpal_distal_phalanx_2";
HAnimHumanoid23.segments[130] = HAnimSegment1099;

let HAnimSegment1100 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1100.USE = "hanim_r_carpal_distal_phalanx_2";
HAnimHumanoid23.segments[131] = HAnimSegment1100;

let HAnimSegment1101 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1101.USE = "hanim_l_carpal_distal_phalanx_3";
HAnimHumanoid23.segments[132] = HAnimSegment1101;

let HAnimSegment1102 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1102.USE = "hanim_r_carpal_distal_phalanx_3";
HAnimHumanoid23.segments[133] = HAnimSegment1102;

let HAnimSegment1103 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1103.USE = "hanim_l_carpal_distal_phalanx_4";
HAnimHumanoid23.segments[134] = HAnimSegment1103;

let HAnimSegment1104 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1104.USE = "hanim_r_carpal_distal_phalanx_4";
HAnimHumanoid23.segments[135] = HAnimSegment1104;

let HAnimSegment1105 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1105.USE = "hanim_l_carpal_distal_phalanx_5";
HAnimHumanoid23.segments[136] = HAnimSegment1105;

let HAnimSegment1106 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1106.USE = "hanim_r_carpal_distal_phalanx_5";
HAnimHumanoid23.segments[137] = HAnimSegment1106;

let HAnimSegment1107 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1107.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid23.segments[138] = HAnimSegment1107;

let HAnimSegment1108 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1108.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid23.segments[139] = HAnimSegment1108;

let HAnimSegment1109 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1109.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid23.segments[140] = HAnimSegment1109;

let HAnimSegment1110 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1110.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid23.segments[141] = HAnimSegment1110;

let HAnimSegment1111 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1111.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid23.segments[142] = HAnimSegment1111;

let HAnimSegment1112 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1112.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid23.segments[143] = HAnimSegment1112;

let HAnimSegment1113 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1113.USE = "hanim_l_carpal_middle_phalanx_5";
HAnimHumanoid23.segments[144] = HAnimSegment1113;

let HAnimSegment1114 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1114.USE = "hanim_r_carpal_middle_phalanx_5";
HAnimHumanoid23.segments[145] = HAnimSegment1114;

let HAnimSegment1115 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1115.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid23.segments[146] = HAnimSegment1115;

let HAnimSegment1116 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1116.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid23.segments[147] = HAnimSegment1116;

let HAnimSegment1117 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1117.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid23.segments[148] = HAnimSegment1117;

let HAnimSegment1118 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1118.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid23.segments[149] = HAnimSegment1118;

let HAnimSegment1119 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1119.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid23.segments[150] = HAnimSegment1119;

let HAnimSegment1120 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1120.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid23.segments[151] = HAnimSegment1120;

let HAnimSegment1121 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1121.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid23.segments[152] = HAnimSegment1121;

let HAnimSegment1122 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1122.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid23.segments[153] = HAnimSegment1122;

let HAnimSegment1123 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1123.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid23.segments[154] = HAnimSegment1123;

let HAnimSegment1124 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1124.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid23.segments[155] = HAnimSegment1124;

let HAnimSegment1125 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1125.USE = "hanim_l_clavicle";
HAnimHumanoid23.segments[156] = HAnimSegment1125;

let HAnimSegment1126 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1126.USE = "hanim_r_clavicle";
HAnimHumanoid23.segments[157] = HAnimSegment1126;

let HAnimSegment1127 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1127.USE = "hanim_l_eyeball";
HAnimHumanoid23.segments[158] = HAnimSegment1127;

let HAnimSegment1128 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1128.USE = "hanim_r_eyeball";
HAnimHumanoid23.segments[159] = HAnimSegment1128;

let HAnimSegment1129 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1129.USE = "hanim_l_eyebrow";
HAnimHumanoid23.segments[160] = HAnimSegment1129;

let HAnimSegment1130 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1130.USE = "hanim_r_eyebrow";
HAnimHumanoid23.segments[161] = HAnimSegment1130;

let HAnimSegment1131 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1131.USE = "hanim_l_eyelid";
HAnimHumanoid23.segments[162] = HAnimSegment1131;

let HAnimSegment1132 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1132.USE = "hanim_r_eyelid";
HAnimHumanoid23.segments[163] = HAnimSegment1132;

let HAnimSegment1133 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1133.USE = "hanim_l_forearm";
HAnimHumanoid23.segments[164] = HAnimSegment1133;

let HAnimSegment1134 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1134.USE = "hanim_r_forearm";
HAnimHumanoid23.segments[165] = HAnimSegment1134;

let HAnimSegment1135 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1135.USE = "hanim_l_metacarpal_1";
HAnimHumanoid23.segments[166] = HAnimSegment1135;

let HAnimSegment1136 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1136.USE = "hanim_r_metacarpal_1";
HAnimHumanoid23.segments[167] = HAnimSegment1136;

let HAnimSegment1137 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1137.USE = "hanim_l_metacarpal_2";
HAnimHumanoid23.segments[168] = HAnimSegment1137;

let HAnimSegment1138 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1138.USE = "hanim_r_metacarpal_2";
HAnimHumanoid23.segments[169] = HAnimSegment1138;

let HAnimSegment1139 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1139.USE = "hanim_l_metacarpal_3";
HAnimHumanoid23.segments[170] = HAnimSegment1139;

let HAnimSegment1140 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1140.USE = "hanim_r_metacarpal_3";
HAnimHumanoid23.segments[171] = HAnimSegment1140;

let HAnimSegment1141 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1141.USE = "hanim_l_metacarpal_4";
HAnimHumanoid23.segments[172] = HAnimSegment1141;

let HAnimSegment1142 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1142.USE = "hanim_r_metacarpal_4";
HAnimHumanoid23.segments[173] = HAnimSegment1142;

let HAnimSegment1143 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1143.USE = "hanim_l_metacarpal_5";
HAnimHumanoid23.segments[174] = HAnimSegment1143;

let HAnimSegment1144 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1144.USE = "hanim_r_metacarpal_5";
HAnimHumanoid23.segments[175] = HAnimSegment1144;

let HAnimSegment1145 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1145.USE = "hanim_r_metatarsal_2";
HAnimHumanoid23.segments[176] = HAnimSegment1145;

let HAnimSegment1146 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1146.USE = "hanim_l_metatarsal_2";
HAnimHumanoid23.segments[177] = HAnimSegment1146;

let HAnimSegment1147 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1147.USE = "hanim_l_scapula";
HAnimHumanoid23.segments[178] = HAnimSegment1147;

let HAnimSegment1148 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1148.USE = "hanim_r_scapula";
HAnimHumanoid23.segments[179] = HAnimSegment1148;

let HAnimSegment1149 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1149.USE = "hanim_l_talus";
HAnimHumanoid23.segments[180] = HAnimSegment1149;

let HAnimSegment1150 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1150.USE = "hanim_r_talus";
HAnimHumanoid23.segments[181] = HAnimSegment1150;

let HAnimSegment1151 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1151.USE = "hanim_l_tarsal_distal_phalanx_2";
HAnimHumanoid23.segments[182] = HAnimSegment1151;

let HAnimSegment1152 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1152.USE = "hanim_r_tarsal_distal_phalanx_2";
HAnimHumanoid23.segments[183] = HAnimSegment1152;

let HAnimSegment1153 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1153.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid23.segments[184] = HAnimSegment1153;

let HAnimSegment1154 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1154.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid23.segments[185] = HAnimSegment1154;

let HAnimSegment1155 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1155.USE = "hanim_l_thigh";
HAnimHumanoid23.segments[186] = HAnimSegment1155;

let HAnimSegment1156 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1156.USE = "hanim_r_thigh";
HAnimHumanoid23.segments[187] = HAnimSegment1156;

let HAnimSegment1157 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1157.USE = "hanim_l_upperarm";
HAnimHumanoid23.segments[188] = HAnimSegment1157;

let HAnimSegment1158 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1158.USE = "hanim_r_upperarm";
HAnimHumanoid23.segments[189] = HAnimSegment1158;

browser.currentScene.children[3] = HAnimHumanoid23;

