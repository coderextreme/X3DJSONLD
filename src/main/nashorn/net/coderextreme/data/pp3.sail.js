load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("pp3.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("translator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("created").setContent("5 May 2015"))
        .addMeta(new metaObject().setName("modified").setContent("05 May 2017"))
        .addMeta(new metaObject().setName("description").setContent("A process pipeline between three spheres (try typing on spheres and blue"))
        .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/x3d/pp3.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("manual")))
      .setScene(new SceneObject()
        .addChild(new ProtoDeclareObject().setName("Process")
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addComments(new CommentsBlock("left"))
              .addChild(new TransformObject().setScale(Java.to([0.5,0.5,0.5], Java.type("float[]")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0.7,1,0], Java.type("float[]"))).setTransparency(0.5)))
                  .setGeometry(new ExtrusionObject().setCreaseAngle(0.785).setCrossSection(Java.to([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0], Java.type("float[]"))).setSpine(Java.to([-2.5,0,0,-1.5,0,0], Java.type("float[]")))))
                .addComments(new CommentsBlock("<Transform translation=\"-2.5 0 0\"> <Shape> <Text DEF=\"LeftString\" string='\"l\"'/> </Shape> </Transform> <StringSensor DEF=\"LeftSensor\" enabled=\"false\"/> <TouchSensor DEF=\"LeftTouch\" enabled=\"true\"/>")))
              .addComments(new CommentsBlock("right"))
              .addChild(new TransformObject().setScale(Java.to([0.5,0.5,0.5], Java.type("float[]")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0,0.7,1], Java.type("float[]"))).setTransparency(0.5)))
                  .setGeometry(new ExtrusionObject().setCreaseAngle(0.785).setCrossSection(Java.to([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0], Java.type("float[]"))).setSpine(Java.to([1.5,0,0,2.5,0,0], Java.type("float[]")))))
                .addChild(new TransformObject().setTranslation(Java.to([2,0,0], Java.type("float[]")))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setDEF("MaterialLightBlue").setDiffuseColor(Java.to([1,1,1], Java.type("float[]")))))
                    .setGeometry(new TextObject().setDEF("RightString").setString(Java.to(["r".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]"))))))
                .addChild(new StringSensorObject().setDEF("RightSensor").setEnabled(false))
                .addChild(new TouchSensorObject().setDescription("touch to activate").setDEF("RightTouch")))
              .addComments(new CommentsBlock("up"))
              .addChild(new TransformObject().setScale(Java.to([0.5,0.5,0.5], Java.type("float[]")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0,0.7,1], Java.type("float[]"))).setTransparency(0.5)))
                  .setGeometry(new ExtrusionObject().setCreaseAngle(0.785).setCrossSection(Java.to([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0], Java.type("float[]"))).setSpine(Java.to([0,1.5,0,0,2.5,0], Java.type("float[]")))))
                .addChild(new TransformObject().setTranslation(Java.to([-0.5,2,0], Java.type("float[]")))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setUSE("MaterialLightBlue")))
                    .setGeometry(new TextObject().setDEF("UpString").setString(Java.to(["u".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]"))))))
                .addChild(new StringSensorObject().setDEF("UpSensor").setEnabled(false))
                .addChild(new TouchSensorObject().setDescription("touch to activate").setDEF("UpTouch")))
              .addComments(new CommentsBlock("down"))
              .addChild(new TransformObject().setScale(Java.to([0.5,0.5,0.5], Java.type("float[]")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0.7,1,0], Java.type("float[]"))).setTransparency(0.5)))
                  .setGeometry(new ExtrusionObject().setCreaseAngle(0.785).setCrossSection(Java.to([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0], Java.type("float[]"))).setSpine(Java.to([0,-2.5,0,0,-1.5,0], Java.type("float[]")))))
                .addComments(new CommentsBlock("<Transform translation=\"-0.5 -2.5 0\"> <Shape> <Text DEF=\"DownString\" string='\"d\"'/> </Shape> </Transform> <StringSensor DEF=\"DownSensor\" enabled=\"false\"/> <TouchSensor description='touch to activate' DEF=\"DownTouch\" enabled=\"true\"/>")))
              .addComments(new CommentsBlock("center"))
              .addChild(new TransformObject()
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(Java.to([1,0,0.7], Java.type("float[]")))))
                  .setGeometry(new SphereObject()))
                .addChild(new TransformObject().setScale(Java.to([0.5,0.5,0.5], Java.type("float[]"))).setTranslation(Java.to([-0.5,0,1], Java.type("float[]")))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setUSE("MaterialLightBlue")))
                    .setGeometry(new TextObject().setDEF("CenterString"))))
                .addChild(new StringSensorObject().setDEF("CenterSensor").setEnabled(false))
                .addChild(new TouchSensorObject().setDescription("touch to activate").setDEF("CenterTouch"))))
            .addChild(new ScriptObject().setDEF("RightSingleToMultiString")
              .addField(new fieldObject().setType(fieldObject.TYPE_SFSTRING).setName("set_rightstring").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("rightlines").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	rightlines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_rightstring(rightstr) {\n"+
"	rightlines = new MFString(rightstr);\n"+
"}\n"+
""))
            .addChild(new ScriptObject().setDEF("UpSingleToMultiString")
              .addField(new fieldObject().setType(fieldObject.TYPE_SFSTRING).setName("set_upstring").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("uplines").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	uplines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_upstring(upstr) {\n"+
"	uplines = new MFString(upstr);\n"+
"}\n"+
""))
            .addChild(new ScriptObject().setDEF("CenterSingleToMultiString")
              .addField(new fieldObject().setType(fieldObject.TYPE_SFSTRING).setName("set_centerstring").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType(fieldObject.TYPE_MFSTRING).setName("centerlines").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	centerlines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_centerstring(centerstr) {\n"+
"	centerlines = new MFString(centerstr);\n"+
"}\n"+
""))
            .addChild(new ROUTEObject().setFromField("enteredText").setFromNode("CenterSensor").setToField("set_centerstring").setToNode("CenterSingleToMultiString"))
            .addChild(new ROUTEObject().setFromField("centerlines").setFromNode("CenterSingleToMultiString").setToField("set_string").setToNode("CenterString"))
            .addChild(new ROUTEObject().setFromField("isOver").setFromNode("CenterTouch").setToField("set_enabled").setToNode("CenterSensor"))
            .addChild(new ROUTEObject().setFromField("enteredText").setFromNode("RightSensor").setToField("set_rightstring").setToNode("RightSingleToMultiString"))
            .addChild(new ROUTEObject().setFromField("rightlines").setFromNode("RightSingleToMultiString").setToField("set_string").setToNode("RightString"))
            .addChild(new ROUTEObject().setFromField("isOver").setFromNode("RightTouch").setToField("set_enabled").setToNode("RightSensor"))
            .addChild(new ROUTEObject().setFromField("enteredText").setFromNode("UpSensor").setToField("set_upstring").setToNode("UpSingleToMultiString"))
            .addChild(new ROUTEObject().setFromField("uplines").setFromNode("UpSingleToMultiString").setToField("set_string").setToNode("UpString"))
            .addChild(new ROUTEObject().setFromField("isOver").setFromNode("UpTouch").setToField("set_enabled").setToNode("UpSensor"))))
        .addChild(new NavigationInfoObject())
        .addChild(new ViewpointObject().setDescription("Process pipes").setOrientation(Java.to([1,0,0,-0.4], Java.type("float[]"))).setPosition(Java.to([0,5,12], Java.type("float[]"))))
        .addChild(new TransformObject().setTranslation(Java.to([0,-2.5,0], Java.type("float[]")))
          .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("Process")))
        .addChild(new TransformObject()
          .addChild(ProtoInstance1 = new ProtoInstanceObject().setName("Process")))
        .addChild(new TransformObject().setTranslation(Java.to([0,2.5,0], Java.type("float[]")))
          .addChild(ProtoInstance2 = new ProtoInstanceObject().setName("Process"))))      ;
    X3D0.toFileX3D("../data/pp3.new.x3d");
