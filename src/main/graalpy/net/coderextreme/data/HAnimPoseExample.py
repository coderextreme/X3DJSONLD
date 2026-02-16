import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setProfile("Full")
X3D0.setVersion("4.1")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("HAnimPoseExample.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("description")
meta3.setContent("Native XML definition of an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed.")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("created")
meta4.setContent("11 December 2025")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("modified")
meta5.setContent("14 December 2025")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("creator")
meta6.setContent("Don Brutzman")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("warning")
meta7.setContent("under development for X3D 4.1")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("specificationSection")
meta8.setContent("HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("specificationUrl")
meta9.setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("specificationSection")
meta10.setContent("HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("specificationUrl")
meta11.setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("specificationSection")
meta12.setContent("HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("specificationUrl")
meta13.setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("generator")
meta14.setContent("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("identifier")
meta15.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExample.x3d")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("license")
meta16.setContent("https://www.web3d.org/x3d/content/examples/license.html")

head1.addMeta(meta16)

X3D0.setHead(head1)
Scene17 = x3d.Scene()
WorldInfo18 = x3d.WorldInfo()
WorldInfo18.setDEF("ModelInfo")
WorldInfo18.setInfo(["Example scene for HAnimPose node"])
WorldInfo18.setTitle("HAnimPoseExample.x3d")

Scene17.addChild(WorldInfo18)
Background19 = x3d.Background()
Background19.setSkyColor(x3d.doubleToFloat([0.8,0.8,1]))

Scene17.addChild(Background19)
NavigationInfo20 = x3d.NavigationInfo()

Scene17.addChild(NavigationInfo20)
Group21 = x3d.Group()
Group21.setDEF("HandleInlineLoading")

Group21.addComments(x3d.CommentsBlock("""Multiple HAnimHumanoid Inline/IMPORT models are available to support testing: Characters/ JinLOA1 JinLOA2 JinLOA3 JinLOA4 ../Skin/JoeKick ../Skin/JoeSkeletonSkinSite ../Skin/BoxMan1 ../Skin/BoxMan2"""))

Group21.addComments(x3d.CommentsBlock("""Also tested satisfactorily: KoreanCharacter01Jin KoreanCharacter02Chul KoreanCharacter03Hyun KoreanCharacter04Young KoreanCharacter05Ju KoreanCharacter06Ga KoreanCharacter07No KoreanCharacter08Da KoreanCharacter09Ru KoreanCharacter10Mi KoreanCharacter11Min KoreanCharacter12Sun"""))
Inline22 = x3d.Inline()
Inline22.setDEF("HumanoidInline")
Inline22.setDescription("remote HAnimHumanoid for IMPORT")
Inline22.setUrl(["../Skin/JoeSkeletonSkinSite.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSite.x3d"])

Group21.addChild(Inline22)

Group21.addComments(x3d.CommentsBlock("""Note that the following importedDEF must match the EXPORT name found in remote file"""))
IMPORT23 = x3d.IMPORT()
IMPORT23.setAS("HumanoidImported")
IMPORT23.setImportedDEF("JoeSkeletonSkinSite")
IMPORT23.setInlineDEF("HumanoidInline")

Group21.addChild(IMPORT23)
LoadSensor24 = x3d.LoadSensor()
LoadSensor24.setDEF("HumanoidInlineLoadSensor")
LoadSensor24.setTimeOut(2)
Inline25 = x3d.Inline()
Inline25.setUSE("HumanoidInline")

LoadSensor24.addChild(Inline25)

Group21.addChild(LoadSensor24)

Scene17.addChild(Group21)
Viewpoint26 = x3d.Viewpoint()
Viewpoint26.setDescription("HAnimPose for HumanoidInline IMPORT model")
Viewpoint26.setPosition(x3d.doubleToFloat([0,1,4]))

Scene17.addChild(Viewpoint26)

Scene17.addComments(x3d.CommentsBlock("""no longer required: including full model <HAnimHumanoid DEF='hanim_JinLOA1' loa='2' name='JinLOA1' scale='0.0225 0.0225 0.0225'> etc..."""))
HAnimPose27 = x3d.HAnimPose()
HAnimPose27.setName("T")
HAnimPose27.setDEF("T_Pose")
HAnimPose27.setDescription("arms stretched outward and level similar to letter T")
HAnimPose27.setLoa(1)
HAnimPose27.setTransitionDuration(1.3)
MetadataString28 = x3d.MetadataString()
MetadataString28.setName("metadataTest")
MetadataString28.setValue(["hello HAnimPose metadata"])

HAnimPose27.setMetadata(MetadataString28)

HAnimPose27.addComments(x3d.CommentsBlock("""test case for illegal child triggers validation reports without problem: HAnimSegment DEF='TestCase' description='confirm type checking' name='specialTestCase'/"""))
HAnimJoint29 = x3d.HAnimJoint()
HAnimJoint29.setName("l_shoulder")
HAnimJoint29.setDEF("PoseJoint_l_shoulder_1")
HAnimJoint29.setDescription("left shoulder")
HAnimJoint29.setRotation(x3d.doubleToFloat([0,0,1,1.57]))
HAnimJoint29.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint29.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimPose27.addChild(HAnimJoint29)
HAnimJoint30 = x3d.HAnimJoint()
HAnimJoint30.setName("r_shoulder")
HAnimJoint30.setDEF("PoseJoint_r_shoulder_1")
HAnimJoint30.setDescription("right shoulder")
HAnimJoint30.setRotation(x3d.doubleToFloat([0,0,-1,1.57]))
HAnimJoint30.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint30.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimPose27.addChild(HAnimJoint30)

Scene17.addChild(HAnimPose27)
HAnimPose31 = x3d.HAnimPose()
HAnimPose31.setName("A")
HAnimPose31.setDEF("A_Pose")
HAnimPose31.setDescription("arms stretched outward and downward similar to letter A")
HAnimPose31.setLoa(1)
HAnimPose31.setTransitionDuration(1.2)
HAnimJoint32 = x3d.HAnimJoint()
HAnimJoint32.setName("l_shoulder")
HAnimJoint32.setDEF("PoseJoint_l_shoulder")
HAnimJoint32.setDescription("left shoulder")
HAnimJoint32.setRotation(x3d.doubleToFloat([0,0,1,0.5]))
HAnimJoint32.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint32.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimPose31.addChild(HAnimJoint32)
HAnimJoint33 = x3d.HAnimJoint()
HAnimJoint33.setName("r_shoulder")
HAnimJoint33.setDEF("PoseJoint_r_shoulder")
HAnimJoint33.setDescription("right shoulder")
HAnimJoint33.setRotation(x3d.doubleToFloat([0,0,-1,0.5]))
HAnimJoint33.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint33.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimPose31.addChild(HAnimJoint33)

Scene17.addChild(HAnimPose31)
HAnimPose34 = x3d.HAnimPose()
HAnimPose34.setName("TouchDown")
HAnimPose34.setDEF("TouchDown_Pose")
HAnimPose34.setDescription("arms and legs stretched outward providing a TouchDown gesture")
HAnimPose34.setLoa(1)
HAnimPose34.setTransitionDuration(1.2)
HAnimJoint35 = x3d.HAnimJoint()
HAnimJoint35.setName("humanoid_root")
HAnimJoint35.setRotation(x3d.doubleToFloat([0,1,0,-0.698132]))
HAnimJoint35.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint35.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimPose34.addChild(HAnimJoint35)
HAnimJoint36 = x3d.HAnimJoint()
HAnimJoint36.setName("l_hip")
HAnimJoint36.setRotation(x3d.doubleToFloat([-1,1,1,1]))
HAnimJoint36.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint36.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimPose34.addChild(HAnimJoint36)
HAnimJoint37 = x3d.HAnimJoint()
HAnimJoint37.setName("l_knee")
HAnimJoint37.setRotation(x3d.doubleToFloat([1,0,0,1]))
HAnimJoint37.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint37.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimPose34.addChild(HAnimJoint37)
HAnimJoint38 = x3d.HAnimJoint()
HAnimJoint38.setName("l_talocrural")
HAnimJoint38.setRotation(x3d.doubleToFloat([-0.2,0,0.1,0.225]))
HAnimJoint38.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint38.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimPose34.addChild(HAnimJoint38)
HAnimJoint39 = x3d.HAnimJoint()
HAnimJoint39.setName("r_hip")
HAnimJoint39.setRotation(x3d.doubleToFloat([-1,-1,-1,1]))
HAnimJoint39.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint39.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimPose34.addChild(HAnimJoint39)
HAnimJoint40 = x3d.HAnimJoint()
HAnimJoint40.setName("r_knee")
HAnimJoint40.setRotation(x3d.doubleToFloat([1,0,0,1]))
HAnimJoint40.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint40.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimPose34.addChild(HAnimJoint40)
HAnimJoint41 = x3d.HAnimJoint()
HAnimJoint41.setName("r_talocrural")
HAnimJoint41.setRotation(x3d.doubleToFloat([-0.2,0,0.1,0.25]))
HAnimJoint41.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint41.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimPose34.addChild(HAnimJoint41)
HAnimJoint42 = x3d.HAnimJoint()
HAnimJoint42.setName("vl5")
HAnimJoint42.setRotation(x3d.doubleToFloat([0,0,0.01,0.2]))
HAnimJoint42.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint42.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimPose34.addChild(HAnimJoint42)
HAnimJoint43 = x3d.HAnimJoint()
HAnimJoint43.setName("vt10")
HAnimJoint43.setRotation(x3d.doubleToFloat([0,0,0.01,0.1]))
HAnimJoint43.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint43.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimPose34.addChild(HAnimJoint43)
HAnimJoint44 = x3d.HAnimJoint()
HAnimJoint44.setName("vc4")
HAnimJoint44.setRotation(x3d.doubleToFloat([0,0,-0.01,0.15]))
HAnimJoint44.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint44.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimPose34.addChild(HAnimJoint44)
HAnimJoint45 = x3d.HAnimJoint()
HAnimJoint45.setName("l_shoulder")
HAnimJoint45.setRotation(x3d.doubleToFloat([-1,0.5,1,2]))
HAnimJoint45.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint45.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimPose34.addChild(HAnimJoint45)
HAnimJoint46 = x3d.HAnimJoint()
HAnimJoint46.setName("l_elbow")
HAnimJoint46.setRotation(x3d.doubleToFloat([-1,0,0,1]))
HAnimJoint46.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint46.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimPose34.addChild(HAnimJoint46)
HAnimJoint47 = x3d.HAnimJoint()
HAnimJoint47.setName("l_radiocarpal")
HAnimJoint47.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint47.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimPose34.addChild(HAnimJoint47)
HAnimJoint48 = x3d.HAnimJoint()
HAnimJoint48.setName("r_shoulder")
HAnimJoint48.setRotation(x3d.doubleToFloat([-1,-0.5,-1,2.6]))
HAnimJoint48.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint48.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimPose34.addChild(HAnimJoint48)
HAnimJoint49 = x3d.HAnimJoint()
HAnimJoint49.setName("r_elbow")
HAnimJoint49.setRotation(x3d.doubleToFloat([-1,0,0,1]))
HAnimJoint49.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint49.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimPose34.addChild(HAnimJoint49)
HAnimJoint50 = x3d.HAnimJoint()
HAnimJoint50.setName("r_radiocarpal")
HAnimJoint50.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint50.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimPose34.addChild(HAnimJoint50)

Scene17.addChild(HAnimPose34)
HAnimPose51 = x3d.HAnimPose()
HAnimPose51.setName("I")
HAnimPose51.setDEF("I_Pose")
HAnimPose51.setDescription("arms and legs straight down default binding pose for baseline Humanoid")
HAnimPose51.setLoa(1)
HAnimPose51.setTransitionDuration(1.5)

HAnimPose51.addComments(x3d.CommentsBlock("""not defining any poseJoint HAnimJoint nodes equals the default \"I\" pose"""))

Scene17.addChild(HAnimPose51)
HAnimPose52 = x3d.HAnimPose()
HAnimPose52.setName("H")
HAnimPose52.setDEF("H_Pose")
HAnimPose52.setDescription("TODO experimental pose not yet implemented")
HAnimPose52.setEnabled(False)
HAnimPose52.setTransitionDuration(1.4)
HAnimPose52.setLoa(-1)

HAnimPose52.addComments(x3d.CommentsBlock("""TODO define poseJoint HAnimJoint nodes"""))

Scene17.addChild(HAnimPose52)
HAnimPose53 = x3d.HAnimPose()
HAnimPose53.setName("FaceLeft")
HAnimPose53.setDEF("FaceLeft_Pose")
HAnimPose53.setDescription("Only modify humanoid_root Joint node to face left")
HAnimPose53.setLoa(0)
HAnimPose53.setTransitionDuration(1.1)
HAnimJoint54 = x3d.HAnimJoint()
HAnimJoint54.setName("humanoid_root")
HAnimJoint54.setDEF("FaceLeft_humanoid_root")
HAnimJoint54.setDescription("Only rotate the model")
HAnimJoint54.setRotation(x3d.doubleToFloat([0,1,0,1.570796]))
HAnimJoint54.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint54.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimPose53.addChild(HAnimJoint54)

Scene17.addChild(HAnimPose53)
HAnimPose55 = x3d.HAnimPose()
HAnimPose55.setName("FaceRight")
HAnimPose55.setDEF("FaceRight_Pose")
HAnimPose55.setDescription("Only modify humanoid_root Joint node to face right")
HAnimPose55.setLoa(0)
HAnimPose55.setTransitionDuration(1.1)
HAnimJoint56 = x3d.HAnimJoint()
HAnimJoint56.setName("humanoid_root")
HAnimJoint56.setDEF("FaceRight_humanoid_root")
HAnimJoint56.setDescription("Only rotate the model")
HAnimJoint56.setRotation(x3d.doubleToFloat([0,1,0,-1.570796]))
HAnimJoint56.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint56.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimPose55.addChild(HAnimJoint56)

Scene17.addChild(HAnimPose55)
Group57 = x3d.Group()
Group57.setDEF("InterfaceButtonsGroup")
Transform58 = x3d.Transform()
Transform58.setDEF("DisplayHeader")
Transform58.setTranslation(x3d.doubleToFloat([0,2,0]))
Shape59 = x3d.Shape()
Text60 = x3d.Text()
Text60.setString(["HAnimPosePrototype example implementation"])
FontStyle61 = x3d.FontStyle()
FontStyle61.setDEF("HeaderFont")
FontStyle61.setFamily(["SANS"])
FontStyle61.setJustify(["MIDDLE","MIDDLE"])
FontStyle61.setSize(0.15)
FontStyle61.setStyle("BOLD")

Text60.setFontStyle(FontStyle61)

Shape59.setGeometry(Text60)
Appearance62 = x3d.Appearance()
Appearance62.setDEF("PoseTextAppearance")
Material63 = x3d.Material()
Material63.setDiffuseColor(x3d.doubleToFloat([0.1,0.5,0.3]))

Appearance62.setMaterial(Material63)

Shape59.setAppearance(Appearance62)

Transform58.addChild(Shape59)

Group57.addChild(Transform58)
Transform64 = x3d.Transform()
Transform64.setDEF("T_PoseInterface")
Transform64.setTranslation(x3d.doubleToFloat([-1.5,1.5,0]))
Shape65 = x3d.Shape()
Text66 = x3d.Text()
Text66.setString(["\"T\" Pose"])
FontStyle67 = x3d.FontStyle()
FontStyle67.setDEF("SharedFont")
FontStyle67.setFamily(["SANS"])
FontStyle67.setJustify(["MIDDLE","MIDDLE"])
FontStyle67.setSize(0.1)
FontStyle67.setStyle("BOLD")

Text66.setFontStyle(FontStyle67)

Shape65.setGeometry(Text66)
Appearance68 = x3d.Appearance()
Appearance68.setUSE("PoseTextAppearance")

Shape65.setAppearance(Appearance68)

Transform64.addChild(Shape65)
Shape69 = x3d.Shape()
Appearance70 = x3d.Appearance()
Appearance70.setDEF("TransparentAppearance")
Material71 = x3d.Material()
Material71.setTransparency(0.8)

Appearance70.setMaterial(Material71)

Shape69.setAppearance(Appearance70)
Box72 = x3d.Box()
Box72.setSize(x3d.doubleToFloat([0.45,0.2,0.001]))

Shape69.setGeometry(Box72)

Transform64.addChild(Shape69)
TouchSensor73 = x3d.TouchSensor()
TouchSensor73.setDEF("T_PoseTouchSensor")
TouchSensor73.setDescription("select to move shoulders to \"T\" pose, leave other joints unchanged")

Transform64.addChild(TouchSensor73)
ROUTE74 = x3d.ROUTE()
ROUTE74.setFromField("isActive")
ROUTE74.setFromNode("T_PoseTouchSensor")
ROUTE74.setToField("commencePose")
ROUTE74.setToNode("T_Pose")

Transform64.addChild(ROUTE74)

Group57.addChild(Transform64)
Transform75 = x3d.Transform()
Transform75.setDEF("A_PoseInterface")
Transform75.setTranslation(x3d.doubleToFloat([-1.5,1,0]))
Shape76 = x3d.Shape()
Text77 = x3d.Text()
Text77.setString(["\"A\" Pose"])
FontStyle78 = x3d.FontStyle()
FontStyle78.setUSE("SharedFont")

Text77.setFontStyle(FontStyle78)

Shape76.setGeometry(Text77)
Appearance79 = x3d.Appearance()
Appearance79.setUSE("PoseTextAppearance")

Shape76.setAppearance(Appearance79)

Transform75.addChild(Shape76)
Shape80 = x3d.Shape()

Shape80.addComments(x3d.CommentsBlock("""Selectable Text transparent Box for easy user selection"""))
Appearance81 = x3d.Appearance()
Appearance81.setUSE("TransparentAppearance")

Shape80.setAppearance(Appearance81)
Box82 = x3d.Box()
Box82.setSize(x3d.doubleToFloat([0.45,0.2,0.001]))

Shape80.setGeometry(Box82)

Transform75.addChild(Shape80)
TouchSensor83 = x3d.TouchSensor()
TouchSensor83.setDEF("A_PoseTouchSensor")
TouchSensor83.setDescription("select to move shoulders to \"A\" pose, leave other joints unchanged")

Transform75.addChild(TouchSensor83)
ROUTE84 = x3d.ROUTE()
ROUTE84.setFromField("isActive")
ROUTE84.setFromNode("A_PoseTouchSensor")
ROUTE84.setToField("commencePose")
ROUTE84.setToNode("A_Pose")

Transform75.addChild(ROUTE84)

Group57.addChild(Transform75)
Transform85 = x3d.Transform()
Transform85.setDEF("TouchDown_PoseInterface")
Transform85.setTranslation(x3d.doubleToFloat([-1.5,0.5,0]))
Shape86 = x3d.Shape()
Text87 = x3d.Text()
Text87.setString(["TouchDown Pose"])
FontStyle88 = x3d.FontStyle()
FontStyle88.setUSE("SharedFont")

Text87.setFontStyle(FontStyle88)

Shape86.setGeometry(Text87)
Appearance89 = x3d.Appearance()
Appearance89.setUSE("PoseTextAppearance")

Shape86.setAppearance(Appearance89)

Transform85.addChild(Shape86)
Shape90 = x3d.Shape()

Shape90.addComments(x3d.CommentsBlock("""Selectable Text transparent Box for easy user selection"""))
Appearance91 = x3d.Appearance()
Appearance91.setUSE("TransparentAppearance")

Shape90.setAppearance(Appearance91)
Box92 = x3d.Box()
Box92.setSize(x3d.doubleToFloat([0.85,0.2,0.001]))

Shape90.setGeometry(Box92)

Transform85.addChild(Shape90)
TouchSensor93 = x3d.TouchSensor()
TouchSensor93.setDEF("TouchDown_PoseTouchSensor")
TouchSensor93.setDescription("select to transition all joints to TouchDown pose")

Transform85.addChild(TouchSensor93)
ROUTE94 = x3d.ROUTE()
ROUTE94.setFromField("isActive")
ROUTE94.setFromNode("TouchDown_PoseTouchSensor")
ROUTE94.setToField("commencePose")
ROUTE94.setToNode("TouchDown_Pose")

Transform85.addChild(ROUTE94)

Group57.addChild(Transform85)
Transform95 = x3d.Transform()
Transform95.setDEF("I_PoseInterface")
Transform95.setTranslation(x3d.doubleToFloat([-1.5,0,0]))
Shape96 = x3d.Shape()
Text97 = x3d.Text()
Text97.setString(["\"I\" Pose"])
FontStyle98 = x3d.FontStyle()
FontStyle98.setUSE("SharedFont")

Text97.setFontStyle(FontStyle98)

Shape96.setGeometry(Text97)
Appearance99 = x3d.Appearance()
Appearance99.setUSE("PoseTextAppearance")

Shape96.setAppearance(Appearance99)

Transform95.addChild(Shape96)
Shape100 = x3d.Shape()

Shape100.addComments(x3d.CommentsBlock("""Selectable Text transparent Box for easy user selection"""))
Appearance101 = x3d.Appearance()
Appearance101.setUSE("TransparentAppearance")

Shape100.setAppearance(Appearance101)
Box102 = x3d.Box()
Box102.setSize(x3d.doubleToFloat([0.45,0.2,0.001]))

Shape100.setGeometry(Box102)

Transform95.addChild(Shape100)
TouchSensor103 = x3d.TouchSensor()
TouchSensor103.setDEF("I_PoseTouchSensor")
TouchSensor103.setDescription("select to transition all joints to \"I\" pose")

Transform95.addChild(TouchSensor103)
ROUTE104 = x3d.ROUTE()
ROUTE104.setFromField("isActive")
ROUTE104.setFromNode("I_PoseTouchSensor")
ROUTE104.setToField("commencePose")
ROUTE104.setToNode("I_Pose")

Transform95.addChild(ROUTE104)

Group57.addChild(Transform95)
Transform105 = x3d.Transform()
Transform105.setDEF("FaceLeftPoseInterface")
Transform105.setTranslation(x3d.doubleToFloat([1.5,1.5,0]))
Shape106 = x3d.Shape()
Text107 = x3d.Text()
Text107.setString(["Face Left Pose"])
FontStyle108 = x3d.FontStyle()
FontStyle108.setUSE("SharedFont")

Text107.setFontStyle(FontStyle108)

Shape106.setGeometry(Text107)
Appearance109 = x3d.Appearance()
Appearance109.setUSE("PoseTextAppearance")

Shape106.setAppearance(Appearance109)

Transform105.addChild(Shape106)
Shape110 = x3d.Shape()
Appearance111 = x3d.Appearance()
Appearance111.setUSE("TransparentAppearance")

Shape110.setAppearance(Appearance111)
Box112 = x3d.Box()
Box112.setSize(x3d.doubleToFloat([0.9,0.2,0.001]))

Shape110.setGeometry(Box112)

Transform105.addChild(Shape110)
TouchSensor113 = x3d.TouchSensor()
TouchSensor113.setDEF("FaceLeftTouchSensor")
TouchSensor113.setDescription("select to rotate body and Face Left, leave other joints unchanged")

Transform105.addChild(TouchSensor113)
ROUTE114 = x3d.ROUTE()
ROUTE114.setFromField("isActive")
ROUTE114.setFromNode("FaceLeftTouchSensor")
ROUTE114.setToField("commencePose")
ROUTE114.setToNode("FaceLeft_Pose")

Transform105.addChild(ROUTE114)

Group57.addChild(Transform105)
Transform115 = x3d.Transform()
Transform115.setDEF("FaceRightPoseInterface")
Transform115.setTranslation(x3d.doubleToFloat([1.5,1,0]))
Shape116 = x3d.Shape()
Text117 = x3d.Text()
Text117.setString(["Face Right Pose"])
FontStyle118 = x3d.FontStyle()
FontStyle118.setUSE("SharedFont")

Text117.setFontStyle(FontStyle118)

Shape116.setGeometry(Text117)
Appearance119 = x3d.Appearance()
Appearance119.setUSE("PoseTextAppearance")

Shape116.setAppearance(Appearance119)

Transform115.addChild(Shape116)
Shape120 = x3d.Shape()

Shape120.addComments(x3d.CommentsBlock("""Selectable Text transparent Box for easy user selection"""))
Appearance121 = x3d.Appearance()
Appearance121.setUSE("TransparentAppearance")

Shape120.setAppearance(Appearance121)
Box122 = x3d.Box()
Box122.setSize(x3d.doubleToFloat([0.9,0.2,0.001]))

Shape120.setGeometry(Box122)

Transform115.addChild(Shape120)
TouchSensor123 = x3d.TouchSensor()
TouchSensor123.setDEF("FaceRightTouchSensor")
TouchSensor123.setDescription("select to rotate body and Face Right, leave other joints unchanged")

Transform115.addChild(TouchSensor123)
ROUTE124 = x3d.ROUTE()
ROUTE124.setFromField("isActive")
ROUTE124.setFromNode("FaceRightTouchSensor")
ROUTE124.setToField("commencePose")
ROUTE124.setToNode("FaceRight_Pose")

Transform115.addChild(ROUTE124)

Group57.addChild(Transform115)
Transform125 = x3d.Transform()
Transform125.setDEF("AnimatePosesInterface")
Transform125.setTranslation(x3d.doubleToFloat([1.5,0.5,0]))
Shape126 = x3d.Shape()
Text127 = x3d.Text()
Text127.setString(["Direct animation","to, from \"I\" Pose"])
FontStyle128 = x3d.FontStyle()
FontStyle128.setUSE("SharedFont")

Text127.setFontStyle(FontStyle128)

Shape126.setGeometry(Text127)
Appearance129 = x3d.Appearance()
Appearance129.setDEF("AnimationTextAppearance")
Material130 = x3d.Material()
Material130.setDiffuseColor(x3d.doubleToFloat([0.1,0.2,0.3]))

Appearance129.setMaterial(Material130)

Shape126.setAppearance(Appearance129)

Transform125.addChild(Shape126)
Shape131 = x3d.Shape()

Shape131.addComments(x3d.CommentsBlock("""Selectable Text transparent Box for easy user selection"""))
Appearance132 = x3d.Appearance()
Appearance132.setUSE("TransparentAppearance")

Shape131.setAppearance(Appearance132)
Box133 = x3d.Box()
Box133.setSize(x3d.doubleToFloat([0.9,0.25,0.001]))

Shape131.setGeometry(Box133)

Transform125.addChild(Shape131)
TouchSensor134 = x3d.TouchSensor()
TouchSensor134.setDEF("AnimatePosesTouchSensor")
TouchSensor134.setDescription("select to animate current pose to \"I\" pose, then back to original pose, using TimeSensor events")

Transform125.addChild(TouchSensor134)

Transform125.addComments(x3d.CommentsBlock("""cycleInterval=4 also hard-coded in script execution message"""))
TimeSensor135 = x3d.TimeSensor()
TimeSensor135.setDEF("AnimatePosesClock")
TimeSensor135.setCycleInterval(4)
TimeSensor135.setDescription("directly animate several poses")

Transform125.addChild(TimeSensor135)
ScalarInterpolator136 = x3d.ScalarInterpolator()
ScalarInterpolator136.setDEF("AnimatePosesLoopInterpolator")
ScalarInterpolator136.setKey(x3d.doubleToFloat([0,0.05,0.45,0.55,0.95,1]))
ScalarInterpolator136.setKeyValue(x3d.doubleToFloat([0,0,1,1,0,0]))

Transform125.addChild(ScalarInterpolator136)
ROUTE137 = x3d.ROUTE()
ROUTE137.setFromField("touchTime")
ROUTE137.setFromNode("AnimatePosesTouchSensor")
ROUTE137.setToField("startTime")
ROUTE137.setToNode("AnimatePosesClock")

Transform125.addChild(ROUTE137)
ROUTE138 = x3d.ROUTE()
ROUTE138.setFromField("fraction_changed")
ROUTE138.setFromNode("AnimatePosesClock")
ROUTE138.setToField("set_fraction")
ROUTE138.setToNode("AnimatePosesLoopInterpolator")

Transform125.addChild(ROUTE138)
ROUTE139 = x3d.ROUTE()
ROUTE139.setFromField("value_changed")
ROUTE139.setFromNode("AnimatePosesLoopInterpolator")
ROUTE139.setToField("set_fraction")
ROUTE139.setToNode("I_Pose")

Transform125.addChild(ROUTE139)

Group57.addChild(Transform125)
Transform140 = x3d.Transform()
Transform140.setDEF("ResetDefaultPoseInterface")
Transform140.setTranslation(x3d.doubleToFloat([1.5,0,0]))
Shape141 = x3d.Shape()
Text142 = x3d.Text()
Text142.setString(["Reset All Joints","to Default \"I\" Pose"])
FontStyle143 = x3d.FontStyle()
FontStyle143.setUSE("SharedFont")

Text142.setFontStyle(FontStyle143)

Shape141.setGeometry(Text142)
Appearance144 = x3d.Appearance()
Appearance144.setUSE("AnimationTextAppearance")

Shape141.setAppearance(Appearance144)

Transform140.addChild(Shape141)
Shape145 = x3d.Shape()

Shape145.addComments(x3d.CommentsBlock("""Selectable Text transparent Box for easy user selection"""))
Appearance146 = x3d.Appearance()
Appearance146.setUSE("TransparentAppearance")

Shape145.setAppearance(Appearance146)
Box147 = x3d.Box()
Box147.setSize(x3d.doubleToFloat([0.9,0.25,0.001]))

Shape145.setGeometry(Box147)

Transform140.addChild(Shape145)
TouchSensor148 = x3d.TouchSensor()
TouchSensor148.setDEF("ResetPoseTouchSensor")
TouchSensor148.setDescription("select to immediately Rezero All Joints (to default \"I\" Pose) by sending resetAllJoints event")

Transform140.addChild(TouchSensor148)
ROUTE149 = x3d.ROUTE()
ROUTE149.setFromField("isActive")
ROUTE149.setFromNode("ResetPoseTouchSensor")
ROUTE149.setToField("resetAllJoints")
ROUTE149.setToNode("FaceLeft_Pose")

Transform140.addChild(ROUTE149)

Group57.addChild(Transform140)

Scene17.addChild(Group57)
Group150 = x3d.Group()
Group150.setDEF("HandleInlineLoadsensorRouting")
ROUTE151 = x3d.ROUTE()
ROUTE151.setFromField("isLoaded")
ROUTE151.setFromNode("HumanoidInlineLoadSensor")
ROUTE151.setToField("isLoaded")
ROUTE151.setToNode("A_Pose")

Group150.addChild(ROUTE151)
ROUTE152 = x3d.ROUTE()
ROUTE152.setFromField("isLoaded")
ROUTE152.setFromNode("HumanoidInlineLoadSensor")
ROUTE152.setToField("isLoaded")
ROUTE152.setToNode("H_Pose")

Group150.addChild(ROUTE152)
ROUTE153 = x3d.ROUTE()
ROUTE153.setFromField("isLoaded")
ROUTE153.setFromNode("HumanoidInlineLoadSensor")
ROUTE153.setToField("isLoaded")
ROUTE153.setToNode("I_Pose")

Group150.addChild(ROUTE153)
ROUTE154 = x3d.ROUTE()
ROUTE154.setFromField("isLoaded")
ROUTE154.setFromNode("HumanoidInlineLoadSensor")
ROUTE154.setToField("isLoaded")
ROUTE154.setToNode("T_Pose")

Group150.addChild(ROUTE154)
ROUTE155 = x3d.ROUTE()
ROUTE155.setFromField("isLoaded")
ROUTE155.setFromNode("HumanoidInlineLoadSensor")
ROUTE155.setToField("isLoaded")
ROUTE155.setToNode("FaceLeft_Pose")

Group150.addChild(ROUTE155)
ROUTE156 = x3d.ROUTE()
ROUTE156.setFromField("isLoaded")
ROUTE156.setFromNode("HumanoidInlineLoadSensor")
ROUTE156.setToField("isLoaded")
ROUTE156.setToNode("FaceRight_Pose")

Group150.addChild(ROUTE156)
ROUTE157 = x3d.ROUTE()
ROUTE157.setFromField("isLoaded")
ROUTE157.setFromNode("HumanoidInlineLoadSensor")
ROUTE157.setToField("isLoaded")
ROUTE157.setToNode("TouchDown_Pose")

Group150.addChild(ROUTE157)

Scene17.addChild(Group150)
HAnimHumanoid158 = x3d.HAnimHumanoid()
HAnimHumanoid158.setName("HumanoidStub")
HAnimHumanoid158.setInfo(["humanoidVersion=2.0"])
HAnimHumanoid158.setVersion("2.0")
HAnimPose159 = x3d.HAnimPose()
HAnimPose159.setUSE("A_Pose")

HAnimHumanoid158.setChildren(HAnimPose159)
HAnimPose160 = x3d.HAnimPose()
HAnimPose160.setUSE("T_Pose")

HAnimHumanoid158.setChildren(HAnimPose160)
HAnimPose161 = x3d.HAnimPose()
HAnimPose161.setUSE("I_Pose")

HAnimHumanoid158.setChildren(HAnimPose161)
HAnimPose162 = x3d.HAnimPose()
HAnimPose162.setUSE("H_Pose")

HAnimHumanoid158.setChildren(HAnimPose162)
HAnimPose163 = x3d.HAnimPose()
HAnimPose163.setUSE("FaceLeft_Pose")

HAnimHumanoid158.setChildren(HAnimPose163)
HAnimPose164 = x3d.HAnimPose()
HAnimPose164.setUSE("FaceRight_Pose")

HAnimHumanoid158.setChildren(HAnimPose164)
HAnimPose165 = x3d.HAnimPose()
HAnimPose165.setUSE("TouchDown_Pose")

HAnimHumanoid158.setChildren(HAnimPose165)

Scene17.addChild(HAnimHumanoid158)

X3D0.setScene(Scene17)
X3D0.toFileX3D("../data/HAnimPoseExample.new.graalpy.x3d")
X3D0.toFileJSON("../data/HAnimPoseExample.new.graalpy.x3dj")
