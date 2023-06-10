import java from 'java';
import util from 'util';
import promisify from 'util';
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
import autoclass from '../../../X3Dautoclass.mjs';
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("title").setContent("BindingOperations.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("Illustrate Viewpoint binding operations (in gory detail!) as described in Chapter 4 concepts. Scene design: a TimeSensor clock drives and IntegerSequencer for each t0/t1/etc. event, and a customized Script node sends bind/unbind events to the correct Viewpoint. Display the browser console to see occurrence of each event."))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
        .addMeta((new autoclass.meta()).setName("created").setContent("5 January 2008"))
        .addMeta((new autoclass.meta()).setName("modified").setContent("22 July 2013"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("BindingOperations.console.txt"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("BindingStackOperations.png"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("X3D for Web Authors, Section 2.5.1, Figure 4.1"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("http://X3dGraphics.com"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/x3d/content/examples/X3dResources.html"))
        .addMeta((new autoclass.meta()).setName("rights").setContent("Copyright Don Brutzman and Leonard Daly 2007"))
        .addMeta((new autoclass.meta()).setName("subject").setContent("X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter04ViewingNavigation/BindingOperations.x3d"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.Viewpoint()).setDEF("View1").setCenterOfRotation(java.newArray("float", [java.newFloat(-6), java.newFloat(0), java.newFloat(0)])).setDescription("Viewpoint 1").setPosition(java.newArray("float", [java.newFloat(-6), java.newFloat(0), java.newFloat(5)])))
        .addChild((new autoclass.Viewpoint()).setDEF("View2").setCenterOfRotation(java.newArray("float", [java.newFloat(-2), java.newFloat(0), java.newFloat(0)])).setDescription("Viewpoint 2").setPosition(java.newArray("float", [java.newFloat(-2), java.newFloat(0), java.newFloat(5)])))
        .addChild((new autoclass.Viewpoint()).setDEF("View3").setCenterOfRotation(java.newArray("float", [java.newFloat(2), java.newFloat(0), java.newFloat(0)])).setDescription("Viewpoint 3").setPosition(java.newArray("float", [java.newFloat(2), java.newFloat(0), java.newFloat(5)])))
        .addChild((new autoclass.Viewpoint()).setDEF("View4").setCenterOfRotation(java.newArray("float", [java.newFloat(6), java.newFloat(0), java.newFloat(0)])).setDescription("Viewpoint 4").setPosition(java.newArray("float", [java.newFloat(6), java.newFloat(0), java.newFloat(5)])))
        .addComments((new autoclass.CommentsBlock("Script initialization ought to first bind view5 below.")))
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Transform()).setDEF("Text1").setTranslation(java.newArray("float", [java.newFloat(-6), java.newFloat(0), java.newFloat(0)]))
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["View","# 1"]))
                .setFontStyle((new autoclass.FontStyle()).setDEF("CenterJustify").setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"]))))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)]))))))
          .addChild((new autoclass.Transform()).setDEF("Text2").setTranslation(java.newArray("float", [java.newFloat(-2), java.newFloat(0), java.newFloat(0)]))
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["View","# 2"]))
                .setFontStyle((new autoclass.FontStyle()).setUSE("CenterJustify")))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0)]))))))
          .addChild((new autoclass.Transform()).setDEF("Text3").setTranslation(java.newArray("float", [java.newFloat(2), java.newFloat(0), java.newFloat(0)]))
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["View","# 3"]))
                .setFontStyle((new autoclass.FontStyle()).setUSE("CenterJustify")))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))))
          .addChild((new autoclass.Transform()).setDEF("Text4").setTranslation(java.newArray("float", [java.newFloat(6), java.newFloat(0), java.newFloat(0)]))
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["View","# 4"]))
                .setFontStyle((new autoclass.FontStyle()).setUSE("CenterJustify")))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()))))))
        .addComments((new autoclass.CommentsBlock("The following advanced animation sequence uses nodes covered in Chapters 7, 8 and 9.")))
        .addComments((new autoclass.CommentsBlock("It does not need to be studied in this chapter.")))
        .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-3), java.newFloat(8)]))
          .addComments((new autoclass.CommentsBlock("notice this next Viewpoint has been transformed with the text, so its position is relative. it is called view5 in the Script.")))
          .addChild((new autoclass.Viewpoint()).setDEF("ClickToAnimateView").setDescription("Select animation sequence").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(7)])))
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["Click here to animate"]))
              .setFontStyle((new autoclass.FontStyle()).setJustify(java.newArray("java.lang.String", ["MIDDLE","BEGIN"]))))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0.8), java.newFloat(0.4), java.newFloat(0)])))))
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Box()).setSize(java.newArray("float", [java.newFloat(7), java.newFloat(1), java.newFloat(0.02)])))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setTransparency(java.newFloat(1)))))
          .addChild((new autoclass.TouchSensor()).setDEF("TextTouchSensor").setDescription("Click to begin animating viewpoint selections"))
          .addChild((new autoclass.TimeSensor()).setDEF("Clock").setCycleInterval(10))
          .addChild((new autoclass.ROUTE()).setFromField("touchTime").setFromNode("TextTouchSensor").setToField("set_startTime").setToNode("Clock"))
          .addChild((new autoclass.IntegerSequencer()).setDEF("TimingSequencer").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.1), java.newFloat(0.2), java.newFloat(0.3), java.newFloat(0.4), java.newFloat(0.5), java.newFloat(0.6), java.newFloat(0.7), java.newFloat(0.8), java.newFloat(1)])).setKeyValue(java.newArray("int", [0,1,2,3,4,5,6,7,8,10])))
          .addChild((new autoclass.ROUTE()).setFromField("fraction_changed").setFromNode("Clock").setToField("set_fraction").setToNode("TimingSequencer"))
          .addChild((new autoclass.Script()).setDEF("BindingSequencerEngine")
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFINT32).setName("set_timeEvent").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setName("bindView1").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setName("bindView2").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setName("bindView3").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setName("bindView4").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setName("bindView5").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setName("view1Bound").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setName("view2Bound").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setName("view3Bound").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setName("view4Bound").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFINT32).setName("priorInputvalue").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("-1"))
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
          .addComments((new autoclass.CommentsBlock("drive Script with TimeSensor clock")))
          .addChild((new autoclass.ROUTE()).setFromField("value_changed").setFromNode("TimingSequencer").setToField("set_timeEvent").setToNode("BindingSequencerEngine"))
          .addComments((new autoclass.CommentsBlock("Script will bind and unbind Viewpoint nodes")))
          .addChild((new autoclass.ROUTE()).setFromField("bindView1").setFromNode("BindingSequencerEngine").setToField("set_bind").setToNode("View1"))
          .addChild((new autoclass.ROUTE()).setFromField("bindView2").setFromNode("BindingSequencerEngine").setToField("set_bind").setToNode("View2"))
          .addChild((new autoclass.ROUTE()).setFromField("bindView3").setFromNode("BindingSequencerEngine").setToField("set_bind").setToNode("View3"))
          .addChild((new autoclass.ROUTE()).setFromField("bindView4").setFromNode("BindingSequencerEngine").setToField("set_bind").setToNode("View4"))
          .addChild((new autoclass.ROUTE()).setFromField("bindView5").setFromNode("BindingSequencerEngine").setToField("set_bind").setToNode("ClickToAnimateView"))
          .addComments((new autoclass.CommentsBlock("Viewpoint nodes report bind and unbind events")))
          .addChild((new autoclass.ROUTE()).setFromField("isBound").setFromNode("View1").setToField("view1Bound").setToNode("BindingSequencerEngine"))
          .addChild((new autoclass.ROUTE()).setFromField("isBound").setFromNode("View2").setToField("view2Bound").setToNode("BindingSequencerEngine"))
          .addChild((new autoclass.ROUTE()).setFromField("isBound").setFromNode("View3").setToField("view3Bound").setToNode("BindingSequencerEngine"))
          .addChild((new autoclass.ROUTE()).setFromField("isBound").setFromNode("View4").setToField("view4Bound").setToNode("BindingSequencerEngine"))))      ;
    X3D0.toFileX3D("../data/BindingOperations.new.x3d");
    process.exit(0);
