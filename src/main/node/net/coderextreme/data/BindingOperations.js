var java = require('java');
var autoclass = require('../../../X3Dautoclass.js');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroesSync(true);
      var X3D0 =  new autoclass.X3D().setProfileSync("Immersive").setVersionSync("3.3")
      .setHeadSync(new autoclass.head()
        .addMetaSync(new autoclass.meta().setNameSync("title").setContentSync("BindingOperations.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("Illustrate Viewpoint binding operations (in gory detail!) as described in Chapter 4 concepts. Scene design: a TimeSensor clock drives and IntegerSequencer for each t0/t1/etc. event, and a customized Script node sends bind/unbind events to the correct Viewpoint. Display the browser console to see occurrence of each event."))
        .addMetaSync(new autoclass.meta().setNameSync("creator").setContentSync("Don Brutzman"))
        .addMetaSync(new autoclass.meta().setNameSync("created").setContentSync("5 January 2008"))
        .addMetaSync(new autoclass.meta().setNameSync("modified").setContentSync("22 July 2013"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("BindingOperations.console.txt"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("BindingStackOperations.png"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("X3D for Web Authors, Section 2.5.1, Figure 4.1"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("http://X3dGraphics.com"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("http://www.web3d.org/x3d/content/examples/X3dResources.html"))
        .addMetaSync(new autoclass.meta().setNameSync("rights").setContentSync("Copyright Don Brutzman and Leonard Daly 2007"))
        .addMetaSync(new autoclass.meta().setNameSync("subject").setContentSync("X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com"))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter04ViewingNavigation/BindingOperations.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("generator").setContentSync("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMetaSync(new autoclass.meta().setNameSync("license").setContentSync("../license.html")))
      .setSceneSync(new autoclass.Scene()
        .addChildSync(new autoclass.Viewpoint().setDEFSync("View1").setCenterOfRotationSync(java.newArray("float", [java.newFloat(-6), java.newFloat(0), java.newFloat(0)])).setDescriptionSync("Viewpoint 1").setPositionSync(java.newArray("float", [java.newFloat(-6), java.newFloat(0), java.newFloat(5)])))
        .addChildSync(new autoclass.Viewpoint().setDEFSync("View2").setCenterOfRotationSync(java.newArray("float", [java.newFloat(-2), java.newFloat(0), java.newFloat(0)])).setDescriptionSync("Viewpoint 2").setPositionSync(java.newArray("float", [java.newFloat(-2), java.newFloat(0), java.newFloat(5)])))
        .addChildSync(new autoclass.Viewpoint().setDEFSync("View3").setCenterOfRotationSync(java.newArray("float", [java.newFloat(2), java.newFloat(0), java.newFloat(0)])).setDescriptionSync("Viewpoint 3").setPositionSync(java.newArray("float", [java.newFloat(2), java.newFloat(0), java.newFloat(5)])))
        .addChildSync(new autoclass.Viewpoint().setDEFSync("View4").setCenterOfRotationSync(java.newArray("float", [java.newFloat(6), java.newFloat(0), java.newFloat(0)])).setDescriptionSync("Viewpoint 4").setPositionSync(java.newArray("float", [java.newFloat(6), java.newFloat(0), java.newFloat(5)])))
        .addCommentsSync(new autoclass.CommentsBlock("Script initialization ought to first bind view5 below."))
        .addChildSync(new autoclass.Group()
          .addChildSync(new autoclass.Transform().setDEFSync("Text1").setTranslationSync(java.newArray("float", [java.newFloat(-6), java.newFloat(0), java.newFloat(0)]))
            .addChildSync(new autoclass.Shape()
              .setGeometrySync(new autoclass.Text().setStringSync(java.newArray("java.lang.String", ["View","# 1"]))
                .setFontStyleSync(new autoclass.FontStyle().setDEFSync("CenterJustify").setJustifySync(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"]))))
              .setAppearanceSync(new autoclass.Appearance()
                .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)]))))))
          .addChildSync(new autoclass.Transform().setDEFSync("Text2").setTranslationSync(java.newArray("float", [java.newFloat(-2), java.newFloat(0), java.newFloat(0)]))
            .addChildSync(new autoclass.Shape()
              .setGeometrySync(new autoclass.Text().setStringSync(java.newArray("java.lang.String", ["View","# 2"]))
                .setFontStyleSync(new autoclass.FontStyle().setUSESync("CenterJustify")))
              .setAppearanceSync(new autoclass.Appearance()
                .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0)]))))))
          .addChildSync(new autoclass.Transform().setDEFSync("Text3").setTranslationSync(java.newArray("float", [java.newFloat(2), java.newFloat(0), java.newFloat(0)]))
            .addChildSync(new autoclass.Shape()
              .setGeometrySync(new autoclass.Text().setStringSync(java.newArray("java.lang.String", ["View","# 3"]))
                .setFontStyleSync(new autoclass.FontStyle().setUSESync("CenterJustify")))
              .setAppearanceSync(new autoclass.Appearance()
                .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))))
          .addChildSync(new autoclass.Transform().setDEFSync("Text4").setTranslationSync(java.newArray("float", [java.newFloat(6), java.newFloat(0), java.newFloat(0)]))
            .addChildSync(new autoclass.Shape()
              .setGeometrySync(new autoclass.Text().setStringSync(java.newArray("java.lang.String", ["View","# 4"]))
                .setFontStyleSync(new autoclass.FontStyle().setUSESync("CenterJustify")))
              .setAppearanceSync(new autoclass.Appearance()
                .setMaterialSync(new autoclass.Material())))))
        .addCommentsSync(new autoclass.CommentsBlock("The following advanced animation sequence uses nodes covered in Chapters 7, 8 and 9."))
        .addCommentsSync(new autoclass.CommentsBlock("It does not need to be studied in this chapter."))
        .addChildSync(new autoclass.Transform().setTranslationSync(java.newArray("float", [java.newFloat(0), java.newFloat(-3), java.newFloat(8)]))
          .addCommentsSync(new autoclass.CommentsBlock("notice this next Viewpoint has been transformed with the text, so its position is relative. it is called view5 in the Script."))
          .addChildSync(new autoclass.Viewpoint().setDEFSync("ClickToAnimateView").setDescriptionSync("Select animation sequence").setPositionSync(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(7)])))
          .addChildSync(new autoclass.Shape()
            .setGeometrySync(new autoclass.Text().setStringSync(java.newArray("java.lang.String", ["Click here to animate"]))
              .setFontStyleSync(new autoclass.FontStyle().setJustifySync(java.newArray("java.lang.String", ["MIDDLE","BEGIN"]))))
            .setAppearanceSync(new autoclass.Appearance()
              .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(0.8), java.newFloat(0.4), java.newFloat(0)])))))
          .addChildSync(new autoclass.Shape()
            .setGeometrySync(new autoclass.Box().setSizeSync(java.newArray("float", [java.newFloat(7), java.newFloat(1), java.newFloat(0.02)])))
            .setAppearanceSync(new autoclass.Appearance()
              .setMaterialSync(new autoclass.Material().setTransparencySync(java.newFloat(1)))))
          .addChildSync(new autoclass.TouchSensor().setDEFSync("TextTouchSensor").setDescriptionSync("Click to begin animating viewpoint selections"))
          .addChildSync(new autoclass.TimeSensor().setDEFSync("Clock").setCycleIntervalSync(10))
          .addChildSync(new autoclass.ROUTE().setFromFieldSync("touchTime").setFromNodeSync("TextTouchSensor").setToFieldSync("set_startTime").setToNodeSync("Clock"))
          .addChildSync(new autoclass.IntegerSequencer().setDEFSync("TimingSequencer").setKeySync(java.newArray("float", [java.newFloat(0), java.newFloat(0.1), java.newFloat(0.2), java.newFloat(0.3), java.newFloat(0.4), java.newFloat(0.5), java.newFloat(0.6), java.newFloat(0.7), java.newFloat(0.8), java.newFloat(1)])).setKeyValueSync(java.newArray("int", [0,1,2,3,4,5,6,7,8,10])))
          .addChildSync(new autoclass.ROUTE().setFromFieldSync("fraction_changed").setFromNodeSync("Clock").setToFieldSync("set_fraction").setToNodeSync("TimingSequencer"))
          .addChildSync(new autoclass.Script().setDEFSync("BindingSequencerEngine")
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFINT32).setNameSync("set_timeEvent").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("bindView1").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("bindView2").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("bindView3").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("bindView4").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("bindView5").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("view1Bound").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("view2Bound").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("view3Bound").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("view4Bound").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFINT32).setNameSync("priorInputvalue").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValueSync("-1"))
            .setSourceCodeSync("ecmascript:\n"+
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
"\n"+
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
"}"))
          .addCommentsSync(new autoclass.CommentsBlock("drive Script with TimeSensor clock"))
          .addChildSync(new autoclass.ROUTE().setFromFieldSync("value_changed").setFromNodeSync("TimingSequencer").setToFieldSync("set_timeEvent").setToNodeSync("BindingSequencerEngine"))
          .addCommentsSync(new autoclass.CommentsBlock("Script will bind and unbind Viewpoint nodes"))
          .addChildSync(new autoclass.ROUTE().setFromFieldSync("bindView1").setFromNodeSync("BindingSequencerEngine").setToFieldSync("set_bind").setToNodeSync("View1"))
          .addChildSync(new autoclass.ROUTE().setFromFieldSync("bindView2").setFromNodeSync("BindingSequencerEngine").setToFieldSync("set_bind").setToNodeSync("View2"))
          .addChildSync(new autoclass.ROUTE().setFromFieldSync("bindView3").setFromNodeSync("BindingSequencerEngine").setToFieldSync("set_bind").setToNodeSync("View3"))
          .addChildSync(new autoclass.ROUTE().setFromFieldSync("bindView4").setFromNodeSync("BindingSequencerEngine").setToFieldSync("set_bind").setToNodeSync("View4"))
          .addChildSync(new autoclass.ROUTE().setFromFieldSync("bindView5").setFromNodeSync("BindingSequencerEngine").setToFieldSync("set_bind").setToNodeSync("ClickToAnimateView"))
          .addCommentsSync(new autoclass.CommentsBlock("Viewpoint nodes report bind and unbind events"))
          .addChildSync(new autoclass.ROUTE().setFromFieldSync("isBound").setFromNodeSync("View1").setToFieldSync("view1Bound").setToNodeSync("BindingSequencerEngine"))
          .addChildSync(new autoclass.ROUTE().setFromFieldSync("isBound").setFromNodeSync("View2").setToFieldSync("view2Bound").setToNodeSync("BindingSequencerEngine"))
          .addChildSync(new autoclass.ROUTE().setFromFieldSync("isBound").setFromNodeSync("View3").setToFieldSync("view3Bound").setToNodeSync("BindingSequencerEngine"))
          .addChildSync(new autoclass.ROUTE().setFromFieldSync("isBound").setFromNodeSync("View4").setToFieldSync("view4Bound").setToNodeSync("BindingSequencerEngine"))))      ;
    X3D0.toFileX3D("../data/BindingOperations.new.x3d");
