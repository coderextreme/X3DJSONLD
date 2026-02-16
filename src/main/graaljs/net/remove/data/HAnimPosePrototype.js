load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
ConfigurationProperties.setDeleteIntermediateFiles(false);
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
function doubleToFloat(d) {
    if (Float32Array)
	return new Float32Array(d);
}
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
var ProtoInstance3 = null;
var ProtoInstance4 = null;
var ProtoInstance5 = null;
var ProtoInstance6 = null;
      var X3D0 =  new X3D().setProfile("Full").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("HAnimPosePrototype.x3d"))
        .addMeta(new meta().setName("description").setContent("Define an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed."))
        .addMeta(new meta().setName("info").setContent("This model also takes advantage of Inline/IMPORT capabilities (equivalent to USE node) and thus avoids fully copying a large, complex HAnimHumanoid model. Multiple HAnimHumanoid models have been tested satisfactorily, for HAnim version 1 (X3d 3) AND HAnim version 2 (X3D 4)."))
        .addMeta(new meta().setName("created").setContent("2 October 2025"))
        .addMeta(new meta().setName("modified").setContent("14 December 2025"))
        .addMeta(new meta().setName("creator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("creator").setContent("Joe Williams"))
        .addMeta(new meta().setName("contributor").setContent("Holger Seelig for X_ITE, Sunrize on Windows, scripting guidance, and Inline IMPORT functionality as node-reference equivalent to USE"))
        .addMeta(new meta().setName("reference").setContent("HAnimPosePrototype.console.txt"))
        .addMeta(new meta().setName("MovingImage").setContent("demonstration video https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeDemoVideo.mp4"))
        .addMeta(new meta().setName("Image").setContent("HAnimPoseExampleTouchDown.png"))
        .addMeta(new meta().setName("Image").setContent("HAnimPoseExampleTouchDownFaceLeftAPose.png"))
        .addMeta(new meta().setName("Image").setContent("images/HAnimPoseExampleBoxMan1.png"))
        .addMeta(new meta().setName("Image").setContent("images/HAnimPoseExampleBoxMan2.png"))
        .addMeta(new meta().setName("Image").setContent("images/HAnimPoseExampleJoeKick.png"))
        .addMeta(new meta().setName("Image").setContent("images/HAnimPoseExampleJoeSkeletonSkinSite.png"))
        .addMeta(new meta().setName("Image").setContent("images/HAnimPoseExampleKoreanCharacter01Jin.png"))
        .addMeta(new meta().setName("Image").setContent("images/HAnimPoseExampleKoreanCharacter02Chul.png"))
        .addMeta(new meta().setName("Image").setContent("images/HAnimPoseExampleKoreanCharacter03Hyun.png"))
        .addMeta(new meta().setName("Image").setContent("images/HAnimPoseExampleKoreanCharacter04Young.png"))
        .addMeta(new meta().setName("Image").setContent("images/HAnimPoseExampleKoreanCharacter05Ju.png"))
        .addMeta(new meta().setName("Image").setContent("images/HAnimPoseExampleKoreanCharacter06Ga.png"))
        .addMeta(new meta().setName("Image").setContent("images/HAnimPoseExampleKoreanCharacter07No.png"))
        .addMeta(new meta().setName("Image").setContent("images/HAnimPoseExampleKoreanCharacter08Da.png"))
        .addMeta(new meta().setName("Image").setContent("images/HAnimPoseExampleKoreanCharacter09Ru.png"))
        .addMeta(new meta().setName("Image").setContent("images/HAnimPoseExampleKoreanCharacter10Mi.png"))
        .addMeta(new meta().setName("Image").setContent("images/HAnimPoseExampleKoreanCharacter11Min.png"))
        .addMeta(new meta().setName("Image").setContent("images/HAnimPoseExampleKoreanCharacter12Sun.png"))
        .addMeta(new meta().setName("specificationSection").setContent("HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose"))
        .addMeta(new meta().setName("specificationUrl").setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose"))
        .addMeta(new meta().setName("specificationSection").setContent("HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures"))
        .addMeta(new meta().setName("specificationUrl").setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures"))
        .addMeta(new meta().setName("specificationSection").setContent("HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses"))
        .addMeta(new meta().setName("specificationUrl").setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses"))
        .addMeta(new meta().setName("reference").setContent("Direct scene manipulations with Javascript, https://doc.instantreality.org/tutorial/direct-scene-manipulations-with-javascript"))
        .addMeta(new meta().setName("reference").setContent("earlier version of this prototype: originals/HAnimPosePreliminary.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"))
        .addMeta(new meta().setName("generator").setContent("Sunrize X3D Editor V1.11.1, https://create3000.github.io/sunrize"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototype.x3d"))
        .addMeta(new meta().setName("license").setContent("https://www.web3d.org/x3d/content/examples/license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setDEF("ModelInfo").setInfo(Java.to(["Design to illustrate a potential HAnimPose node"], Java.type("java.lang.String[]"))).setTitle("HAnimPosePrototype.x3d"))
        .addChild(new Background().setSkyColor(Java.to(doubleToFloat([0.8,0.8,1]), Java.type("float[]"))))
        .addChild(new NavigationInfo())
        .addChild(new Group().setDEF("HandleInlineLoading")
          .addComments(new CommentsBlock("Multiple HAnimHumanoid Inline/IMPORT models are available to support testing: Characters/ JinLOA1 JinLOA2 JinLOA3 JinLOA4 ../Skin/JoeKick ../Skin/JoeSkeletonSkinSite ../Skin/BoxMan1 ../Skin/BoxMan2"))
          .addComments(new CommentsBlock("Also tested satisfactorily: KoreanCharacter01Jin KoreanCharacter02Chul KoreanCharacter03Hyun KoreanCharacter04Young KoreanCharacter05Ju KoreanCharacter06Ga KoreanCharacter07No KoreanCharacter08Da KoreanCharacter09Ru KoreanCharacter10Mi KoreanCharacter11Min KoreanCharacter12Sun"))
          .addChild(new Inline().setDEF("HumanoidInline").setDescription("remote HAnimHumanoid for IMPORT").setUrl(Java.to(["../Skin/BoxMan2.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/BoxMan2.x3d"], Java.type("java.lang.String[]"))))
          .addComments(new CommentsBlock("Note that the following importedDEF must match the EXPORT name found in remote file"))
          .addChild(new IMPORT().setAS("HumanoidImported").setImportedDEF("BoxMan2").setInlineDEF("HumanoidInline"))
          .addChild(new LoadSensor().setDEF("HumanoidInlineLoadSensor").setTimeOut(2)
            .addChild(new Inline().setUSE("HumanoidInline"))))
        .addChild(new ProtoDeclare().setName("HAnimPose").setAppinfo("Experimental node to assign joint values to a humanoid and assume a pose. Assumes that baseline HAnimHumanoid configuration must be I pose, which can be achieved by resetting every HAnimJoint to default values.")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFNODE).setName("parentHAnimHumanoid").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("HAnimHumanoid for this Pose to act upon")
              .addComments(new CommentsBlock("HAnimHumanoid initialization node goes here, this field is only used in the prototype implementation")))
            .addField(new field().setType(field.TYPE_SFSTRING).setName("name").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("name of this pose").setValue("newPoseName"))
            .addField(new field().setType(field.TYPE_MFNODE).setName("children").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("joint values to apply to HAnimHumanoid")
              .addComments(new CommentsBlock("initializating Joint nodes (if any) go here")))
            .addField(new field().setType(field.TYPE_SFSTRING).setName("description").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("explanation of purpose"))
            .addField(new field().setType(field.TYPE_SFBOOL).setName("enabled").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("default value true").setValue("true"))
            .addField(new field().setType(field.TYPE_SFINT32).setName("loa").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("default is no loa").setValue("-1"))
            .addField(new field().setType(field.TYPE_SFTIME).setName("transitionDuration").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("how many seconds to achieve the pose").setValue("0"))
            .addField(new field().setType(field.TYPE_SFNODE).setName("metadata").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("single Metadata* node"))
            .addField(new field().setType(field.TYPE_SFBOOL).setName("isActive").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("event indicating when pose transition is active"))
            .addField(new field().setType(field.TYPE_SFBOOL).setName("commencePose").setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1"))
            .addField(new field().setType(field.TYPE_SFBOOL).setName("resetAllJoints").setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("reset the skeleton to I pose with all joints zeroed"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setName("set_fraction").setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("allows transition to proceed incrementally from fraction [0..10"))
            .addField(new field().setType(field.TYPE_SFTIME).setName("set_startTime").setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("starts the animation clock"))
            .addField(new field().setType(field.TYPE_SFBOOL).setName("isLoaded").setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE"))
            .addField(new field().setType(field.TYPE_SFBOOL).setName("traceEnabled").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("debug trace to Browser output console this is a local prototype field").setValue("true")))
          .setProtoBody(new ProtoBody()
            .addChild(new TimeSensor().setDEF("ClockTimeSensor").setDescription("control timing of pose animation when triggered")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("enabled").setProtoField("enabled"))
                .addConnect(new connect().setNodeField("cycleInterval").setProtoField("transitionDuration"))
                .addConnect(new connect().setNodeField("isActive").setProtoField("isActive"))
                .addConnect(new connect().setNodeField("startTime").setProtoField("set_startTime"))
                .addConnect(new connect().setNodeField("metadata").setProtoField("metadata"))))
            .addChild(new TimeSensor().setDEF("ResetTimeSensor").setDescription("control timing of skeleton reset to \"A\" pose when triggered")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("enabled").setProtoField("enabled"))
                .addConnect(new connect().setNodeField("cycleInterval").setProtoField("transitionDuration"))
                .addConnect(new connect().setNodeField("startTime").setProtoField("set_startTime"))
                .addComments(new CommentsBlock("no need to report isActive since that would be duplicative"))))
            .addChild(new Group().setDEF("PoseInterpolatorGroup")
              .addComments(new CommentsBlock("interpolators generated by prototype script appear here at runtime")))
            .addChild(new Group().setDEF("ResetInterpolatorGroup")
              .addComments(new CommentsBlock("interpolators generated by prototype script appear here at runtime")))
            .addChild(new Script().setDEF("HAnimPoseScript").setDirectOutput(true).setUrl(Java.to(["HAnimPosePrototypeScript.js","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeScript.js"], Java.type("java.lang.String[]")))
              .addField(new field().setType(field.TYPE_SFNODE).setName("parentHAnimHumanoid").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Humanoid for this Pose to act upon")
                .addComments(new CommentsBlock("initialization node (if any) goes here")))
              .addField(new field().setType(field.TYPE_SFSTRING).setName("name").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("name of this pose"))
              .addField(new field().setType(field.TYPE_SFINT32).setName("loa").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("default is no loa"))
              .addField(new field().setType(field.TYPE_SFSTRING).setName("description").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("explanation of purpose"))
              .addField(new field().setType(field.TYPE_SFBOOL).setName("enabled").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("default value true"))
              .addField(new field().setType(field.TYPE_SFBOOL).setName("resetAllJoints").setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("reset the skeleton to I pose with all joints zeroed"))
              .addField(new field().setType(field.TYPE_MFNODE).setName("children").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("joint values to apply to HAnimHumanoid")
                .addComments(new CommentsBlock("initializating Joint nodes (if any) go here")))
              .addField(new field().setType(field.TYPE_SFTIME).setName("transitionDuration").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("how many seconds to achieve the pose"))
              .addField(new field().setType(field.TYPE_SFBOOL).setName("commencePose").setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1"))
              .addField(new field().setType(field.TYPE_SFFLOAT).setName("set_fraction").setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("allows transition to proceed incrementally from fraction [0..10"))
              .addField(new field().setType(field.TYPE_SFTIME).setName("set_startTime").setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("starts the animation clock"))
              .addField(new field().setType(field.TYPE_SFBOOL).setName("isLoaded").setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE"))
              .addField(new field().setType(field.TYPE_SFBOOL).setName("traceEnabled").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("debug trace to Browser output console"))
              .addField(new field().setType(field.TYPE_SFINT32).setName("numberPoseJoints").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("number of joints found in children field").setValue("0"))
              .addField(new field().setType(field.TYPE_SFINT32).setName("numberSkeletonJoints").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("number of joints found in Humanoid").setValue("0"))
              .addField(new field().setType(field.TYPE_MFNODE).setName("jointOrientationInterpolators").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("OrientationInterpolator node array matching number of children")
                .addComments(new CommentsBlock("initializating Joint nodes (if any) go here")))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("parentHAnimHumanoid").setProtoField("parentHAnimHumanoid"))
                .addConnect(new connect().setNodeField("name").setProtoField("name"))
                .addConnect(new connect().setNodeField("loa").setProtoField("loa"))
                .addConnect(new connect().setNodeField("description").setProtoField("description"))
                .addConnect(new connect().setNodeField("enabled").setProtoField("enabled"))
                .addConnect(new connect().setNodeField("resetAllJoints").setProtoField("resetAllJoints"))
                .addConnect(new connect().setNodeField("children").setProtoField("children"))
                .addConnect(new connect().setNodeField("transitionDuration").setProtoField("transitionDuration"))
                .addConnect(new connect().setNodeField("commencePose").setProtoField("commencePose"))
                .addConnect(new connect().setNodeField("set_fraction").setProtoField("set_fraction"))
                .addConnect(new connect().setNodeField("set_startTime").setProtoField("set_startTime"))
                .addConnect(new connect().setNodeField("isLoaded").setProtoField("isLoaded"))
                .addConnect(new connect().setNodeField("traceEnabled").setProtoField("traceEnabled"))))))
        .addChild(new Viewpoint().setDescription("HAnimPose for HumanoidInline IMPORT model").setPosition(Java.to(doubleToFloat([0,1,4]), Java.type("float[]"))))
        .addComments(new CommentsBlock("no longer required: including full model <HAnimHumanoid DEF='hanim_JinLOA1' loa='2' name='JinLOA1' scale='0.0225 0.0225 0.0225'> etc..."))
        .addChild(ProtoInstance0 = new ProtoInstance().setName("HAnimPose").setDEF("T_Pose"))
        .addChild(ProtoInstance1 = new ProtoInstance().setName("HAnimPose").setDEF("A_Pose"))
        .addChild(ProtoInstance2 = new ProtoInstance().setName("HAnimPose").setDEF("TouchDown_Pose")
          .addComments(new CommentsBlock("thanks Joe")))
        .addChild(ProtoInstance3 = new ProtoInstance().setName("HAnimPose").setDEF("I_Pose"))
        .addChild(ProtoInstance4 = new ProtoInstance().setName("HAnimPose").setDEF("H_Pose")
          .addComments(new CommentsBlock("<fieldValue name='loa' value='1'/>")))
        .addChild(ProtoInstance5 = new ProtoInstance().setName("HAnimPose").setDEF("FaceLeft_Pose"))
        .addChild(ProtoInstance6 = new ProtoInstance().setName("HAnimPose").setDEF("FaceRight_Pose"))
        .addChild(new Group().setDEF("InterfaceButtonsGroup")
          .addChild(new Transform().setDEF("DisplayHeader").setTranslation(Java.to(doubleToFloat([0,2,0]), Java.type("float[]")))
            .addChild(new Shape()
              .setGeometry(new Text().setString(Java.to(["HAnimPosePrototype example implementation"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setDEF("HeaderFont").setFamily(Java.to(["SANS"], Java.type("java.lang.String[]"))).setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))).setSize(0.15).setStyle("BOLD")))
              .setAppearance(new Appearance().setDEF("PoseTextAppearance")
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.1,0.5,0.3]), Java.type("float[]")))))))
          .addChild(new Transform().setDEF("T_PoseInterface").setTranslation(Java.to(doubleToFloat([-1.5,1.5,0]), Java.type("float[]")))
            .addChild(new Shape()
              .setGeometry(new Text().setString(Java.to(["\"T\" Pose"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setDEF("SharedFont").setFamily(Java.to(["SANS"], Java.type("java.lang.String[]"))).setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))).setSize(0.1).setStyle("BOLD")))
              .setAppearance(new Appearance().setUSE("PoseTextAppearance")))
            .addChild(new Shape()
              .setAppearance(new Appearance().setDEF("TransparentAppearance")
                .setMaterial(new Material().setTransparency(0.8)))
              .setGeometry(new Box().setSize(Java.to(doubleToFloat([0.45,0.2,0.001]), Java.type("float[]")))))
            .addChild(new TouchSensor().setDEF("T_PoseTouchSensor").setDescription("select to move shoulders to \"T\" pose, leave other joints unchanged"))
            .addChild(new ROUTE().setFromField("isActive").setFromNode("T_PoseTouchSensor").setToField("commencePose").setToNode("T_Pose")))
          .addChild(new Transform().setDEF("A_PoseInterface").setTranslation(Java.to(doubleToFloat([-1.5,1,0]), Java.type("float[]")))
            .addChild(new Shape()
              .setGeometry(new Text().setString(Java.to(["\"A\" Pose"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setUSE("SharedFont")))
              .setAppearance(new Appearance().setUSE("PoseTextAppearance")))
            .addChild(new Shape()
              .addComments(new CommentsBlock("Selectable Text transparent Box for easy user selection"))
              .setAppearance(new Appearance().setUSE("TransparentAppearance"))
              .setGeometry(new Box().setSize(Java.to(doubleToFloat([0.45,0.2,0.001]), Java.type("float[]")))))
            .addChild(new TouchSensor().setDEF("A_PoseTouchSensor").setDescription("select to move shoulders to \"A\" pose, leave other joints unchanged"))
            .addChild(new ROUTE().setFromField("isActive").setFromNode("A_PoseTouchSensor").setToField("commencePose").setToNode("A_Pose")))
          .addChild(new Transform().setDEF("TouchDown_PoseInterface").setTranslation(Java.to(doubleToFloat([-1.5,0.5,0]), Java.type("float[]")))
            .addChild(new Shape()
              .setGeometry(new Text().setString(Java.to(["TouchDown Pose"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setUSE("SharedFont")))
              .setAppearance(new Appearance().setUSE("PoseTextAppearance")))
            .addChild(new Shape()
              .addComments(new CommentsBlock("Selectable Text transparent Box for easy user selection"))
              .setAppearance(new Appearance().setUSE("TransparentAppearance"))
              .setGeometry(new Box().setSize(Java.to(doubleToFloat([0.85,0.2,0.001]), Java.type("float[]")))))
            .addChild(new TouchSensor().setDEF("TouchDown_PoseTouchSensor").setDescription("select to transition all joints to TouchDown pose"))
            .addChild(new ROUTE().setFromField("isActive").setFromNode("TouchDown_PoseTouchSensor").setToField("commencePose").setToNode("TouchDown_Pose")))
          .addChild(new Transform().setDEF("I_PoseInterface").setTranslation(Java.to(doubleToFloat([-1.5,0,0]), Java.type("float[]")))
            .addChild(new Shape()
              .setGeometry(new Text().setString(Java.to(["\"I\" Pose"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setUSE("SharedFont")))
              .setAppearance(new Appearance().setUSE("PoseTextAppearance")))
            .addChild(new Shape()
              .addComments(new CommentsBlock("Selectable Text transparent Box for easy user selection"))
              .setAppearance(new Appearance().setUSE("TransparentAppearance"))
              .setGeometry(new Box().setSize(Java.to(doubleToFloat([0.45,0.2,0.001]), Java.type("float[]")))))
            .addChild(new TouchSensor().setDEF("I_PoseTouchSensor").setDescription("select to transition all joints to \"I\" pose"))
            .addChild(new ROUTE().setFromField("isActive").setFromNode("I_PoseTouchSensor").setToField("commencePose").setToNode("I_Pose")))
          .addChild(new Transform().setDEF("FaceLeftPoseInterface").setTranslation(Java.to(doubleToFloat([1.5,1.5,0]), Java.type("float[]")))
            .addChild(new Shape()
              .setGeometry(new Text().setString(Java.to(["Face Left Pose"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setUSE("SharedFont")))
              .setAppearance(new Appearance().setUSE("PoseTextAppearance")))
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE("TransparentAppearance"))
              .setGeometry(new Box().setSize(Java.to(doubleToFloat([0.9,0.2,0.001]), Java.type("float[]")))))
            .addChild(new TouchSensor().setDEF("FaceLeftTouchSensor").setDescription("select to rotate body and Face Left, leave other joints unchanged"))
            .addChild(new ROUTE().setFromField("isActive").setFromNode("FaceLeftTouchSensor").setToField("commencePose").setToNode("FaceLeft_Pose")))
          .addChild(new Transform().setDEF("FaceRightPoseInterface").setTranslation(Java.to(doubleToFloat([1.5,1,0]), Java.type("float[]")))
            .addChild(new Shape()
              .setGeometry(new Text().setString(Java.to(["Face Right Pose"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setUSE("SharedFont")))
              .setAppearance(new Appearance().setUSE("PoseTextAppearance")))
            .addChild(new Shape()
              .addComments(new CommentsBlock("Selectable Text transparent Box for easy user selection"))
              .setAppearance(new Appearance().setUSE("TransparentAppearance"))
              .setGeometry(new Box().setSize(Java.to(doubleToFloat([0.9,0.2,0.001]), Java.type("float[]")))))
            .addChild(new TouchSensor().setDEF("FaceRightTouchSensor").setDescription("select to rotate body and Face Right, leave other joints unchanged"))
            .addChild(new ROUTE().setFromField("isActive").setFromNode("FaceRightTouchSensor").setToField("commencePose").setToNode("FaceRight_Pose")))
          .addChild(new Transform().setDEF("AnimatePosesInterface").setTranslation(Java.to(doubleToFloat([1.5,0.5,0]), Java.type("float[]")))
            .addChild(new Shape()
              .setGeometry(new Text().setString(Java.to(["Direct animation","to, from \"I\" Pose"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setUSE("SharedFont")))
              .setAppearance(new Appearance().setDEF("AnimationTextAppearance")
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.1,0.2,0.3]), Java.type("float[]"))))))
            .addChild(new Shape()
              .addComments(new CommentsBlock("Selectable Text transparent Box for easy user selection"))
              .setAppearance(new Appearance().setUSE("TransparentAppearance"))
              .setGeometry(new Box().setSize(Java.to(doubleToFloat([0.9,0.25,0.001]), Java.type("float[]")))))
            .addChild(new TouchSensor().setDEF("AnimatePosesTouchSensor").setDescription("select to animate current pose to \"I\" pose, then back to original pose, using TimeSensor events"))
            .addComments(new CommentsBlock("cycleInterval=4 also hard-coded in script execution message"))
            .addChild(new TimeSensor().setDEF("AnimatePosesClock").setCycleInterval(4).setDescription("directly animate several poses"))
            .addChild(new ScalarInterpolator().setDEF("AnimatePosesLoopInterpolator").setKey(Java.to(doubleToFloat([0,0.05,0.45,0.55,0.95,1]), Java.type("float[]"))).setKeyValue(Java.to(doubleToFloat([0,0,1,1,0,0]), Java.type("float[]"))))
            .addChild(new ROUTE().setFromField("touchTime").setFromNode("AnimatePosesTouchSensor").setToField("startTime").setToNode("AnimatePosesClock"))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("AnimatePosesClock").setToField("set_fraction").setToNode("AnimatePosesLoopInterpolator"))
            .addChild(new ROUTE().setFromField("value_changed").setFromNode("AnimatePosesLoopInterpolator").setToField("set_fraction").setToNode("I_Pose")))
          .addChild(new Transform().setDEF("ResetDefaultPoseInterface").setTranslation(Java.to(doubleToFloat([1.5,0,0]), Java.type("float[]")))
            .addChild(new Shape()
              .setGeometry(new Text().setString(Java.to(["Reset All Joints","to Default \"I\" Pose"], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyle().setUSE("SharedFont")))
              .setAppearance(new Appearance().setUSE("AnimationTextAppearance")))
            .addChild(new Shape()
              .addComments(new CommentsBlock("Selectable Text transparent Box for easy user selection"))
              .setAppearance(new Appearance().setUSE("TransparentAppearance"))
              .setGeometry(new Box().setSize(Java.to(doubleToFloat([0.9,0.25,0.001]), Java.type("float[]")))))
            .addChild(new TouchSensor().setDEF("ResetPoseTouchSensor").setDescription("select to immediately Rezero All Joints (to default \"I\" Pose) by sending resetAllJoints event"))
            .addChild(new ROUTE().setFromField("isActive").setFromNode("ResetPoseTouchSensor").setToField("resetAllJoints").setToNode("FaceLeft_Pose"))))
        .addChild(new Group().setDEF("HandleInlineLoadsensorRouting")
          .addChild(new ROUTE().setFromField("isLoaded").setFromNode("HumanoidInlineLoadSensor").setToField("isLoaded").setToNode("A_Pose"))
          .addChild(new ROUTE().setFromField("isLoaded").setFromNode("HumanoidInlineLoadSensor").setToField("isLoaded").setToNode("H_Pose"))
          .addChild(new ROUTE().setFromField("isLoaded").setFromNode("HumanoidInlineLoadSensor").setToField("isLoaded").setToNode("I_Pose"))
          .addChild(new ROUTE().setFromField("isLoaded").setFromNode("HumanoidInlineLoadSensor").setToField("isLoaded").setToNode("T_Pose"))
          .addChild(new ROUTE().setFromField("isLoaded").setFromNode("HumanoidInlineLoadSensor").setToField("isLoaded").setToNode("FaceLeft_Pose"))
          .addChild(new ROUTE().setFromField("isLoaded").setFromNode("HumanoidInlineLoadSensor").setToField("isLoaded").setToNode("FaceRight_Pose"))
          .addChild(new ROUTE().setFromField("isLoaded").setFromNode("HumanoidInlineLoadSensor").setToField("isLoaded").setToNode("TouchDown_Pose"))))      ;
ProtoInstance0
          .addFieldValue(new fieldValue().setName("name").setValue("T"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("enabled").setValue("true"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("parentHAnimHumanoid")
            .addComments(new CommentsBlock("HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)"))
            .addComments(new CommentsBlock("debug test case for incorrect node type: <HAnimJoint DEF=\"ErrorDiagnosticsTest\" USE='HumanoidImported'/>"))
            .addChild(new HAnimHumanoid().setUSE("HumanoidImported")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("loa").setValue("1"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("description").setValue("arms stretched outward and level similar to letter T"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("children")
            .addChild(new HAnimJoint().setName("l_shoulder").setDEF("PoseJoint_l_shoulder_1").setDescription("left shoulder").setRotation(Java.to(doubleToFloat([0,0,1,1.57]), Java.type("float[]"))).setUlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))).setLlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))))
            .addChild(new HAnimJoint().setName("r_shoulder").setDEF("PoseJoint_r_shoulder_1").setDescription("right shoulder").setRotation(Java.to(doubleToFloat([0,0,-1,1.57]), Java.type("float[]"))).setUlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))).setLlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))))
            .addComments(new CommentsBlock("test case for illegal child triggers validation reports without problem: HAnimSegment DEF='TestCase' description='confirm type checking' name='specialTestCase'/")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("transitionDuration").setValue("1.3"));
ProtoInstance1
          .addFieldValue(new fieldValue().setName("name").setValue("A"));
ProtoInstance1
          .addFieldValue(new fieldValue().setName("enabled").setValue("true"));
ProtoInstance1
          .addFieldValue(new fieldValue().setName("parentHAnimHumanoid")
            .addComments(new CommentsBlock("HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)"))
            .addChild(new HAnimHumanoid().setUSE("HumanoidImported")));
ProtoInstance1
          .addFieldValue(new fieldValue().setName("loa").setValue("1"));
ProtoInstance1
          .addFieldValue(new fieldValue().setName("description").setValue("arms stretched outward and downward similar to letter A"));
ProtoInstance1
          .addFieldValue(new fieldValue().setName("children")
            .addChild(new HAnimJoint().setName("l_shoulder").setDEF("PoseJoint_l_shoulder").setDescription("left shoulder").setRotation(Java.to(doubleToFloat([0,0,1,0.5]), Java.type("float[]"))).setUlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))).setLlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))))
            .addChild(new HAnimJoint().setName("r_shoulder").setDEF("PoseJoint_r_shoulder").setDescription("right shoulder").setRotation(Java.to(doubleToFloat([0,0,-1,0.5]), Java.type("float[]"))).setUlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))).setLlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]")))));
ProtoInstance1
          .addFieldValue(new fieldValue().setName("transitionDuration").setValue("1.2"));
ProtoInstance1
          .addFieldValue(new fieldValue().setName("traceEnabled").setValue("true"));
ProtoInstance2
          .addFieldValue(new fieldValue().setName("name").setValue("TouchDown"));
ProtoInstance2
          .addFieldValue(new fieldValue().setName("enabled").setValue("true"));
ProtoInstance2
          .addFieldValue(new fieldValue().setName("parentHAnimHumanoid")
            .addComments(new CommentsBlock("HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)"))
            .addChild(new HAnimHumanoid().setUSE("HumanoidImported")));
ProtoInstance2
          .addFieldValue(new fieldValue().setName("loa").setValue("1"));
ProtoInstance2
          .addFieldValue(new fieldValue().setName("description").setValue("arms and legs stretched outward providing a TouchDown gesture"));
ProtoInstance2
          .addFieldValue(new fieldValue().setName("children")
            .addChild(new HAnimJoint().setName("humanoid_root").setRotation(Java.to(doubleToFloat([0,1,0,-0.698132]), Java.type("float[]"))).setUlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))).setLlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))))
            .addChild(new HAnimJoint().setName("l_hip").setRotation(Java.to(doubleToFloat([-1,1,1,1]), Java.type("float[]"))).setUlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))).setLlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))))
            .addChild(new HAnimJoint().setName("l_knee").setRotation(Java.to(doubleToFloat([1,0,0,1]), Java.type("float[]"))).setUlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))).setLlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))))
            .addChild(new HAnimJoint().setName("l_talocrural").setRotation(Java.to(doubleToFloat([-0.2,0,0.1,0.225]), Java.type("float[]"))).setUlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))).setLlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))))
            .addChild(new HAnimJoint().setName("r_hip").setRotation(Java.to(doubleToFloat([-1,-1,-1,1]), Java.type("float[]"))).setUlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))).setLlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))))
            .addChild(new HAnimJoint().setName("r_knee").setRotation(Java.to(doubleToFloat([1,0,0,1]), Java.type("float[]"))).setUlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))).setLlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))))
            .addChild(new HAnimJoint().setName("r_talocrural").setRotation(Java.to(doubleToFloat([-0.2,0,0.1,0.25]), Java.type("float[]"))).setUlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))).setLlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))))
            .addChild(new HAnimJoint().setName("vl5").setRotation(Java.to(doubleToFloat([0,0,0.01,0.2]), Java.type("float[]"))).setUlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))).setLlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))))
            .addChild(new HAnimJoint().setName("vt10").setRotation(Java.to(doubleToFloat([0,0,0.01,0.1]), Java.type("float[]"))).setUlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))).setLlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))))
            .addChild(new HAnimJoint().setName("vc4").setRotation(Java.to(doubleToFloat([0,0,-0.01,0.15]), Java.type("float[]"))).setUlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))).setLlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))))
            .addChild(new HAnimJoint().setName("l_shoulder").setRotation(Java.to(doubleToFloat([-1,0.5,1,2]), Java.type("float[]"))).setUlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))).setLlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))))
            .addChild(new HAnimJoint().setName("l_elbow").setRotation(Java.to(doubleToFloat([-1,0,0,1]), Java.type("float[]"))).setUlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))).setLlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))))
            .addChild(new HAnimJoint().setName("l_radiocarpal").setUlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))).setLlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))))
            .addChild(new HAnimJoint().setName("r_shoulder").setRotation(Java.to(doubleToFloat([-1,-0.5,-1,2.6]), Java.type("float[]"))).setUlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))).setLlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))))
            .addChild(new HAnimJoint().setName("r_elbow").setRotation(Java.to(doubleToFloat([-1,0,0,1]), Java.type("float[]"))).setUlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))).setLlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))))
            .addChild(new HAnimJoint().setName("r_radiocarpal").setUlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))).setLlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]")))));
ProtoInstance2
          .addFieldValue(new fieldValue().setName("transitionDuration").setValue("1.2"));
ProtoInstance2
          .addFieldValue(new fieldValue().setName("traceEnabled").setValue("true"));
ProtoInstance3
          .addFieldValue(new fieldValue().setName("name").setValue("I"));
ProtoInstance3
          .addFieldValue(new fieldValue().setName("enabled").setValue("true"));
ProtoInstance3
          .addFieldValue(new fieldValue().setName("parentHAnimHumanoid")
            .addComments(new CommentsBlock("HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)"))
            .addChild(new HAnimHumanoid().setUSE("HumanoidImported")));
ProtoInstance3
          .addFieldValue(new fieldValue().setName("loa").setValue("1"));
ProtoInstance3
          .addFieldValue(new fieldValue().setName("description").setValue("arms and legs straight down default binding pose for baseline Humanoid"));
ProtoInstance3
          .addFieldValue(new fieldValue().setName("children")
            .addComments(new CommentsBlock("not defining any children equals the default \"I\" pose")));
ProtoInstance3
          .addFieldValue(new fieldValue().setName("transitionDuration").setValue("1.5"));
ProtoInstance3
          .addFieldValue(new fieldValue().setName("traceEnabled").setValue("true"));
ProtoInstance4
          .addFieldValue(new fieldValue().setName("name").setValue("H"));
ProtoInstance4
          .addFieldValue(new fieldValue().setName("enabled").setValue("false"));
ProtoInstance4
          .addFieldValue(new fieldValue().setName("description").setValue("TODO experimental pose not yet implemented"));
ProtoInstance4
          .addFieldValue(new fieldValue().setName("transitionDuration").setValue("1.4"));
ProtoInstance4
          .addFieldValue(new fieldValue().setName("traceEnabled").setValue("true"));
ProtoInstance5
          .addFieldValue(new fieldValue().setName("name").setValue("FaceLeft"));
ProtoInstance5
          .addFieldValue(new fieldValue().setName("enabled").setValue("true"));
ProtoInstance5
          .addFieldValue(new fieldValue().setName("parentHAnimHumanoid")
            .addComments(new CommentsBlock("HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)"))
            .addChild(new HAnimHumanoid().setUSE("HumanoidImported")));
ProtoInstance5
          .addFieldValue(new fieldValue().setName("loa").setValue("0"));
ProtoInstance5
          .addFieldValue(new fieldValue().setName("description").setValue("Only modify humanoid_root Joint node to face left"));
ProtoInstance5
          .addFieldValue(new fieldValue().setName("children")
            .addChild(new HAnimJoint().setName("humanoid_root").setDEF("FaceLeft_humanoid_root").setDescription("Only rotate the model").setRotation(Java.to(doubleToFloat([0,1,0,1.570796]), Java.type("float[]"))).setUlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))).setLlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]")))));
ProtoInstance5
          .addFieldValue(new fieldValue().setName("transitionDuration").setValue("1.1"));
ProtoInstance5
          .addFieldValue(new fieldValue().setName("traceEnabled").setValue("true"));
ProtoInstance6
          .addFieldValue(new fieldValue().setName("name").setValue("FaceRight"));
ProtoInstance6
          .addFieldValue(new fieldValue().setName("enabled").setValue("true"));
ProtoInstance6
          .addFieldValue(new fieldValue().setName("parentHAnimHumanoid")
            .addComments(new CommentsBlock("HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)"))
            .addChild(new HAnimHumanoid().setUSE("HumanoidImported")));
ProtoInstance6
          .addFieldValue(new fieldValue().setName("loa").setValue("0"));
ProtoInstance6
          .addFieldValue(new fieldValue().setName("description").setValue("Only modify humanoid_root Joint node to face right"));
ProtoInstance6
          .addFieldValue(new fieldValue().setName("children")
            .addChild(new HAnimJoint().setName("humanoid_root").setDEF("FaceRight_humanoid_root").setDescription("Only rotate the model").setRotation(Java.to(doubleToFloat([0,1,0,-1.570796]), Java.type("float[]"))).setUlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))).setLlimit(Java.to(doubleToFloat([0,0,0]), Java.type("float[]")))));
ProtoInstance6
          .addFieldValue(new fieldValue().setName("transitionDuration").setValue("1.1"));
ProtoInstance6
          .addFieldValue(new fieldValue().setName("traceEnabled").setValue("true"));
    X3D0.toFileX3D("../data/HAnimPosePrototype.new.graal.x3d");
    X3D0.toFileJSON("../data/HAnimPosePrototype.new.graal.x3dj");
