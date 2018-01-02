load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("BindingOperations.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Illustrate Viewpoint binding operations (in gory detail!) as described in Chapter 4 concepts. Scene design: a TimeSensor clock drives and IntegerSequencer for each t0/t1/etc. event, and a customized Script node sends bind/unbind events to the correct Viewpoint. Display the browser console to see occurrence of each event."))
        .addMeta(new metaObject().setName("creator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("5 January 2008"))
        .addMeta(new metaObject().setName("modified").setContent("22 July 2013"))
        .addMeta(new metaObject().setName("reference").setContent("BindingOperations.console.txt"))
        .addMeta(new metaObject().setName("reference").setContent("BindingStackOperations.png"))
        .addMeta(new metaObject().setName("reference").setContent("X3D for Web Authors, Section 2.5.1, Figure 4.1"))
        .addMeta(new metaObject().setName("reference").setContent("http://X3dGraphics.com"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.web3d.org/x3d/content/examples/X3dResources.html"))
        .addMeta(new metaObject().setName("rights").setContent("Copyright Don Brutzman and Leonard Daly 2007"))
        .addMeta(new metaObject().setName("subject").setContent("X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com"))
        .addMeta(new metaObject().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter04ViewingNavigation/BindingOperations.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new ViewpointObject().setDEF("View1").setCenterOfRotation(Java.to([-6,0,0], Java.type("float[]"))).setDescription("Viewpoint 1").setPosition(Java.to([-6,0,5], Java.type("float[]"))))
        .addChild(new ViewpointObject().setDEF("View2").setCenterOfRotation(Java.to([-2,0,0], Java.type("float[]"))).setDescription("Viewpoint 2").setPosition(Java.to([-2,0,5], Java.type("float[]"))))
        .addChild(new ViewpointObject().setDEF("View3").setCenterOfRotation(Java.to([2,0,0], Java.type("float[]"))).setDescription("Viewpoint 3").setPosition(Java.to([2,0,5], Java.type("float[]"))))
        .addChild(new ViewpointObject().setDEF("View4").setCenterOfRotation(Java.to([6,0,0], Java.type("float[]"))).setDescription("Viewpoint 4").setPosition(Java.to([6,0,5], Java.type("float[]"))))
        .addComments(new CommentsBlock("Script initialization ought to first bind view5 below."))
        .addChild(new GroupObject()
          .addChild(new TransformObject().setDEF("Text1").setTranslation(Java.to([-6,0,0], Java.type("float[]")))
            .addChild(new ShapeObject()
              .setGeometry(new TextObject().setString(Java.to(["View".replace(/\"/g, "\\\""),"# 1".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyleObject().setDEF("CenterJustify").setJustify(Java.to(["MIDDLE".replace(/\"/g, "\\\""),"MIDDLE".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]")))))
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(Java.to([1,0,0], Java.type("float[]")))))))
          .addChild(new TransformObject().setDEF("Text2").setTranslation(Java.to([-2,0,0], Java.type("float[]")))
            .addChild(new ShapeObject()
              .setGeometry(new TextObject().setString(Java.to(["View".replace(/\"/g, "\\\""),"# 2".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyleObject().setUSE("CenterJustify")))
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0,1,0], Java.type("float[]")))))))
          .addChild(new TransformObject().setDEF("Text3").setTranslation(Java.to([2,0,0], Java.type("float[]")))
            .addChild(new ShapeObject()
              .setGeometry(new TextObject().setString(Java.to(["View".replace(/\"/g, "\\\""),"# 3".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyleObject().setUSE("CenterJustify")))
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0,0,1], Java.type("float[]")))))))
          .addChild(new TransformObject().setDEF("Text4").setTranslation(Java.to([6,0,0], Java.type("float[]")))
            .addChild(new ShapeObject()
              .setGeometry(new TextObject().setString(Java.to(["View".replace(/\"/g, "\\\""),"# 4".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]")))
                .setFontStyle(new FontStyleObject().setUSE("CenterJustify")))
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject())))))
        .addComments(new CommentsBlock("The following advanced animation sequence uses nodes covered in Chapters 7, 8 and 9."))
        .addComments(new CommentsBlock("It does not need to be studied in this chapter."))
        .addChild(new TransformObject().setTranslation(Java.to([0,-3,8], Java.type("float[]")))
          .addComments(new CommentsBlock("notice this next Viewpoint has been transformed with the text, so its position is relative. it is called view5 in the Script."))
          .addChild(new ViewpointObject().setDEF("ClickToAnimateView").setDescription("Select animation sequence").setPosition(Java.to([0,0,7], Java.type("float[]"))))
          .addChild(new ShapeObject()
            .setGeometry(new TextObject().setString(Java.to(["Click here to animate".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]")))
              .setFontStyle(new FontStyleObject().setJustify(Java.to(["MIDDLE".replace(/\"/g, "\\\""),"BEGIN".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]")))))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0.8,0.4,0], Java.type("float[]"))))))
          .addChild(new ShapeObject()
            .setGeometry(new BoxObject().setSize(Java.to([7,1,0.02], Java.type("float[]"))))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setTransparency(1))))
          .addChild(new TouchSensorObject().setDEF("TextTouchSensor").setDescription("Click to begin animating viewpoint selections"))
          .addChild(new TimeSensorObject().setDEF("Clock").setCycleInterval(10))
          .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("TextTouchSensor").setToField("set_startTime").setToNode("Clock"))
          .addChild(new IntegerSequencerObject().setDEF("TimingSequencer").setKey(Java.to([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1], Java.type("float[]"))).setKeyValue(Java.to([0,1,2,3,4,5,6,7,8,10], Java.type("int[]"))))
          .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("Clock").setToField("set_fraction").setToNode("TimingSequencer"))
          .addChild(new ScriptObject().setDEF("BindingSequencerEngine")
            .addField(new fieldObject().setType(fieldObject.TYPE_SFINT32).setName("set_timeEvent").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("bindView1").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("bindView2").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("bindView3").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("bindView4").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("bindView5").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("view1Bound").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("view2Bound").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("view3Bound").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("view4Bound").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFINT32).setName("priorInputvalue").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("-1"))
            .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"    bindView5 = true;\n"+
"    Browser.print ('Timing script initialized and ready for activation');\n"+
"}\n"+
"function set_timeEvent (inputValue)\n"+
"{\n"+
"    if (inputValue == priorInputvalue)\n"+
"    {\n"+
"        return; // ignore repeated inputs\n"+
"    }\n"+
"    // new value provided\n"+
"    priorInputvalue = inputValue;\n"+
"    // Browser.print ('\\ntimeEvent inputValue=' + inputValue);\n"+
"        \n"+
"    // mimics user execution of Figure 4.1 steps t_0 through t_8\n"+
"    if (inputValue == 0)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t0');\n"+
"        bindView1 = true;\n"+
"    }\n"+
"    else if (inputValue == 1)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t1');\n"+
"        bindView2 = true;\n"+
"    }\n"+
"    else if (inputValue == 2)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t2');\n"+
"        bindView3 = true;\n"+
"    }\n"+
"    else if (inputValue == 3)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t3');\n"+
"        bindView3 = false;\n"+
"    }\n"+
"    else if (inputValue == 4)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t4');\n"+
"        bindView1 = true;\n"+
"    }\n"+
"    else if (inputValue == 5)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t5');\n"+
"        bindView2 = false;\n"+
"    }\n"+
"    else if (inputValue == 6)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t6');\n"+
"        bindView1 = false;\n"+
"    }\n"+
"    else if (inputValue == 7)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t7');\n"+
"        bindView4 = true;\n"+
"\n"+
"    }\n"+
"    else if (inputValue == 8)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t8');\n"+
"        Browser.print (', no action, all done');\n"+
"        Browser.print ('\\n\\n');\n"+
"    }\n"+
"}\n"+
"\n"+
"function view1Bound (inputValue)\n"+
"{\n"+
"    Browser.print (', view1Bound ' + (inputValue));\n"+
"    if (priorInputvalue == -1) Browser.print ('\\n');\n"+
"}\n"+
"function view2Bound (inputValue)\n"+
"{\n"+
"    Browser.print (', view2Bound ' + (inputValue));\n"+
"}\n"+
"function view3Bound (inputValue)\n"+
"{\n"+
"    Browser.print (', view3Bound ' + (inputValue));\n"+
"}\n"+
"function view4Bound (inputValue)\n"+
"{\n"+
"    Browser.print (', view4Bound ' + (inputValue));\n"+
"}\n"+
"function view5Bound (inputValue)\n"+
"{\n"+
"    Browser.print (', view5Bound ' + (inputValue));\n"+
"}\n"+
""))
          .addComments(new CommentsBlock("drive Script with TimeSensor clock"))
          .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("TimingSequencer").setToField("set_timeEvent").setToNode("BindingSequencerEngine"))
          .addComments(new CommentsBlock("Script will bind and unbind Viewpoint nodes"))
          .addChild(new ROUTEObject().setFromField("bindView1").setFromNode("BindingSequencerEngine").setToField("set_bind").setToNode("View1"))
          .addChild(new ROUTEObject().setFromField("bindView2").setFromNode("BindingSequencerEngine").setToField("set_bind").setToNode("View2"))
          .addChild(new ROUTEObject().setFromField("bindView3").setFromNode("BindingSequencerEngine").setToField("set_bind").setToNode("View3"))
          .addChild(new ROUTEObject().setFromField("bindView4").setFromNode("BindingSequencerEngine").setToField("set_bind").setToNode("View4"))
          .addChild(new ROUTEObject().setFromField("bindView5").setFromNode("BindingSequencerEngine").setToField("set_bind").setToNode("ClickToAnimateView"))
          .addComments(new CommentsBlock("Viewpoint nodes report bind and unbind events"))
          .addChild(new ROUTEObject().setFromField("isBound").setFromNode("View1").setToField("view1Bound").setToNode("BindingSequencerEngine"))
          .addChild(new ROUTEObject().setFromField("isBound").setFromNode("View2").setToField("view2Bound").setToNode("BindingSequencerEngine"))
          .addChild(new ROUTEObject().setFromField("isBound").setFromNode("View3").setToField("view3Bound").setToNode("BindingSequencerEngine"))
          .addChild(new ROUTEObject().setFromField("isBound").setFromNode("View4").setToField("view4Bound").setToNode("BindingSequencerEngine"))))      ;
    X3D0.toFileX3D("../data/BindingOperations.new.x3d");
