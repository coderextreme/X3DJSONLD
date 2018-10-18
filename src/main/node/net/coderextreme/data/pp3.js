var java = require('java');
var autoclass = require('../../../X3Dautoclass.js');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroesSync(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
      var X3D0 =  new autoclass.X3D().setProfileSync("Immersive").setVersionSync("3.3")
      .setHeadSync(new autoclass.head()
        .addMetaSync(new autoclass.meta().setNameSync("title").setContentSync("pp3.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("creator").setContentSync("John Carlson"))
        .addMetaSync(new autoclass.meta().setNameSync("translator").setContentSync("John Carlson"))
        .addMetaSync(new autoclass.meta().setNameSync("created").setContentSync("5 May 2015"))
        .addMetaSync(new autoclass.meta().setNameSync("modified").setContentSync("05 May 2017"))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("A process pipeline between three spheres (try typing on spheres and blue"))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("https://coderextreme.net/x3d/pp3.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("generator").setContentSync("manual")))
      .setSceneSync(new autoclass.Scene()
        .addChildSync(new autoclass.ProtoDeclare().setNameSync("Process")
          .setProtoBodySync(new autoclass.ProtoBody()
            .addChildSync(new autoclass.Group()
              .addCommentsSync(new autoclass.CommentsBlock("left"))
              .addChildSync(new autoclass.Transform().setScaleSync(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)]))
                .addChildSync(new autoclass.Shape()
                  .setAppearanceSync(new autoclass.Appearance()
                    .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(0.7), java.newFloat(1), java.newFloat(0)])).setTransparencySync(java.newFloat(0.5))))
                  .setGeometrySync(new autoclass.Extrusion().setCreaseAngleSync(java.newFloat(0.785)).setCrossSectionSync(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0.92), java.newFloat(-0.38), java.newFloat(0.71), java.newFloat(-0.71), java.newFloat(0.38), java.newFloat(-0.92), java.newFloat(0), java.newFloat(-1), java.newFloat(-0.38), java.newFloat(-0.92), java.newFloat(-0.71), java.newFloat(-0.71), java.newFloat(-0.92), java.newFloat(-0.38), java.newFloat(-1), java.newFloat(0), java.newFloat(-0.92), java.newFloat(0.38), java.newFloat(-0.71), java.newFloat(0.71), java.newFloat(-0.38), java.newFloat(0.92), java.newFloat(0), java.newFloat(1), java.newFloat(0.38), java.newFloat(0.92), java.newFloat(0.71), java.newFloat(0.71), java.newFloat(0.92), java.newFloat(0.38), java.newFloat(1), java.newFloat(0)])).setSpineSync(java.newArray("float", [java.newFloat(-2.5), java.newFloat(0), java.newFloat(0), java.newFloat(-1.5), java.newFloat(0), java.newFloat(0)]))))
                .addCommentsSync(new autoclass.CommentsBlock("<Transform translation=\"-2.5 0 0\"> <Shape> <Text DEF=\"LeftString\" string='\"l\"'/> </Shape> </Transform> <StringSensor DEF=\"LeftSensor\" enabled=\"false\"/> <TouchSensor DEF=\"LeftTouch\" enabled=\"true\"/>")))
              .addCommentsSync(new autoclass.CommentsBlock("right"))
              .addChildSync(new autoclass.Transform().setScaleSync(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)]))
                .addChildSync(new autoclass.Shape()
                  .setAppearanceSync(new autoclass.Appearance()
                    .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(0), java.newFloat(0.7), java.newFloat(1)])).setTransparencySync(java.newFloat(0.5))))
                  .setGeometrySync(new autoclass.Extrusion().setCreaseAngleSync(java.newFloat(0.785)).setCrossSectionSync(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0.92), java.newFloat(-0.38), java.newFloat(0.71), java.newFloat(-0.71), java.newFloat(0.38), java.newFloat(-0.92), java.newFloat(0), java.newFloat(-1), java.newFloat(-0.38), java.newFloat(-0.92), java.newFloat(-0.71), java.newFloat(-0.71), java.newFloat(-0.92), java.newFloat(-0.38), java.newFloat(-1), java.newFloat(0), java.newFloat(-0.92), java.newFloat(0.38), java.newFloat(-0.71), java.newFloat(0.71), java.newFloat(-0.38), java.newFloat(0.92), java.newFloat(0), java.newFloat(1), java.newFloat(0.38), java.newFloat(0.92), java.newFloat(0.71), java.newFloat(0.71), java.newFloat(0.92), java.newFloat(0.38), java.newFloat(1), java.newFloat(0)])).setSpineSync(java.newArray("float", [java.newFloat(1.5), java.newFloat(0), java.newFloat(0), java.newFloat(2.5), java.newFloat(0), java.newFloat(0)]))))
                .addChildSync(new autoclass.Transform().setTranslationSync(java.newArray("float", [java.newFloat(2), java.newFloat(0), java.newFloat(0)]))
                  .addChildSync(new autoclass.Shape()
                    .setAppearanceSync(new autoclass.Appearance()
                      .setMaterialSync(new autoclass.Material().setDEFSync("MaterialLightBlue").setDiffuseColorSync(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
                    .setGeometrySync(new autoclass.Text().setDEFSync("RightString").setStringSync(java.newArray("java.lang.String", ["r"])))))
                .addChildSync(new autoclass.StringSensor().setDEFSync("RightSensor").setEnabledSync(false))
                .addChildSync(new autoclass.TouchSensor().setDescriptionSync("touch to activate").setDEFSync("RightTouch")))
              .addCommentsSync(new autoclass.CommentsBlock("up"))
              .addChildSync(new autoclass.Transform().setScaleSync(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)]))
                .addChildSync(new autoclass.Shape()
                  .setAppearanceSync(new autoclass.Appearance()
                    .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(0), java.newFloat(0.7), java.newFloat(1)])).setTransparencySync(java.newFloat(0.5))))
                  .setGeometrySync(new autoclass.Extrusion().setCreaseAngleSync(java.newFloat(0.785)).setCrossSectionSync(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0.92), java.newFloat(-0.38), java.newFloat(0.71), java.newFloat(-0.71), java.newFloat(0.38), java.newFloat(-0.92), java.newFloat(0), java.newFloat(-1), java.newFloat(-0.38), java.newFloat(-0.92), java.newFloat(-0.71), java.newFloat(-0.71), java.newFloat(-0.92), java.newFloat(-0.38), java.newFloat(-1), java.newFloat(0), java.newFloat(-0.92), java.newFloat(0.38), java.newFloat(-0.71), java.newFloat(0.71), java.newFloat(-0.38), java.newFloat(0.92), java.newFloat(0), java.newFloat(1), java.newFloat(0.38), java.newFloat(0.92), java.newFloat(0.71), java.newFloat(0.71), java.newFloat(0.92), java.newFloat(0.38), java.newFloat(1), java.newFloat(0)])).setSpineSync(java.newArray("float", [java.newFloat(0), java.newFloat(1.5), java.newFloat(0), java.newFloat(0), java.newFloat(2.5), java.newFloat(0)]))))
                .addChildSync(new autoclass.Transform().setTranslationSync(java.newArray("float", [java.newFloat(-0.5), java.newFloat(2), java.newFloat(0)]))
                  .addChildSync(new autoclass.Shape()
                    .setAppearanceSync(new autoclass.Appearance()
                      .setMaterialSync(new autoclass.Material().setUSESync("MaterialLightBlue")))
                    .setGeometrySync(new autoclass.Text().setDEFSync("UpString").setStringSync(java.newArray("java.lang.String", ["u"])))))
                .addChildSync(new autoclass.StringSensor().setDEFSync("UpSensor").setEnabledSync(false))
                .addChildSync(new autoclass.TouchSensor().setDescriptionSync("touch to activate").setDEFSync("UpTouch")))
              .addCommentsSync(new autoclass.CommentsBlock("down"))
              .addChildSync(new autoclass.Transform().setScaleSync(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)]))
                .addChildSync(new autoclass.Shape()
                  .setAppearanceSync(new autoclass.Appearance()
                    .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(0.7), java.newFloat(1), java.newFloat(0)])).setTransparencySync(java.newFloat(0.5))))
                  .setGeometrySync(new autoclass.Extrusion().setCreaseAngleSync(java.newFloat(0.785)).setCrossSectionSync(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0.92), java.newFloat(-0.38), java.newFloat(0.71), java.newFloat(-0.71), java.newFloat(0.38), java.newFloat(-0.92), java.newFloat(0), java.newFloat(-1), java.newFloat(-0.38), java.newFloat(-0.92), java.newFloat(-0.71), java.newFloat(-0.71), java.newFloat(-0.92), java.newFloat(-0.38), java.newFloat(-1), java.newFloat(0), java.newFloat(-0.92), java.newFloat(0.38), java.newFloat(-0.71), java.newFloat(0.71), java.newFloat(-0.38), java.newFloat(0.92), java.newFloat(0), java.newFloat(1), java.newFloat(0.38), java.newFloat(0.92), java.newFloat(0.71), java.newFloat(0.71), java.newFloat(0.92), java.newFloat(0.38), java.newFloat(1), java.newFloat(0)])).setSpineSync(java.newArray("float", [java.newFloat(0), java.newFloat(-2.5), java.newFloat(0), java.newFloat(0), java.newFloat(-1.5), java.newFloat(0)]))))
                .addCommentsSync(new autoclass.CommentsBlock("<Transform translation=\"-0.5 -2.5 0\"> <Shape> <Text DEF=\"DownString\" string='\"d\"'/> </Shape> </Transform> <StringSensor DEF=\"DownSensor\" enabled=\"false\"/> <TouchSensor description='touch to activate' DEF=\"DownTouch\" enabled=\"true\"/>")))
              .addCommentsSync(new autoclass.CommentsBlock("center"))
              .addChildSync(new autoclass.Transform()
                .addChildSync(new autoclass.Shape()
                  .setAppearanceSync(new autoclass.Appearance()
                    .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0.7)]))))
                  .setGeometrySync(new autoclass.Sphere()))
                .addChildSync(new autoclass.Transform().setScaleSync(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)])).setTranslationSync(java.newArray("float", [java.newFloat(-0.5), java.newFloat(0), java.newFloat(1)]))
                  .addChildSync(new autoclass.Shape()
                    .setAppearanceSync(new autoclass.Appearance()
                      .setMaterialSync(new autoclass.Material().setUSESync("MaterialLightBlue")))
                    .setGeometrySync(new autoclass.Text().setDEFSync("CenterString"))))
                .addChildSync(new autoclass.StringSensor().setDEFSync("CenterSensor").setEnabledSync(false))
                .addChildSync(new autoclass.TouchSensor().setDescriptionSync("touch to activate").setDEFSync("CenterTouch"))))
            .addChildSync(new autoclass.Script().setDEFSync("RightSingleToMultiString")
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFSTRING).setNameSync("set_rightstring").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFSTRING).setNameSync("rightlines").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY))
              .setSourceCodeSync("ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	rightlines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_rightstring(rightstr) {\n"+
"	rightlines = new MFString(rightstr);\n"+
"}"))
            .addChildSync(new autoclass.Script().setDEFSync("UpSingleToMultiString")
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFSTRING).setNameSync("set_upstring").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFSTRING).setNameSync("uplines").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY))
              .setSourceCodeSync("ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	uplines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_upstring(upstr) {\n"+
"	uplines = new MFString(upstr);\n"+
"}"))
            .addChildSync(new autoclass.Script().setDEFSync("CenterSingleToMultiString")
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFSTRING).setNameSync("set_centerstring").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFSTRING).setNameSync("centerlines").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY))
              .setSourceCodeSync("ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	centerlines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_centerstring(centerstr) {\n"+
"	centerlines = new MFString(centerstr);\n"+
"}"))
            .addChildSync(new autoclass.ROUTE().setFromFieldSync("enteredText").setFromNodeSync("CenterSensor").setToFieldSync("set_centerstring").setToNodeSync("CenterSingleToMultiString"))
            .addChildSync(new autoclass.ROUTE().setFromFieldSync("centerlines").setFromNodeSync("CenterSingleToMultiString").setToFieldSync("set_string").setToNodeSync("CenterString"))
            .addChildSync(new autoclass.ROUTE().setFromFieldSync("isOver").setFromNodeSync("CenterTouch").setToFieldSync("set_enabled").setToNodeSync("CenterSensor"))
            .addChildSync(new autoclass.ROUTE().setFromFieldSync("enteredText").setFromNodeSync("RightSensor").setToFieldSync("set_rightstring").setToNodeSync("RightSingleToMultiString"))
            .addChildSync(new autoclass.ROUTE().setFromFieldSync("rightlines").setFromNodeSync("RightSingleToMultiString").setToFieldSync("set_string").setToNodeSync("RightString"))
            .addChildSync(new autoclass.ROUTE().setFromFieldSync("isOver").setFromNodeSync("RightTouch").setToFieldSync("set_enabled").setToNodeSync("RightSensor"))
            .addChildSync(new autoclass.ROUTE().setFromFieldSync("enteredText").setFromNodeSync("UpSensor").setToFieldSync("set_upstring").setToNodeSync("UpSingleToMultiString"))
            .addChildSync(new autoclass.ROUTE().setFromFieldSync("uplines").setFromNodeSync("UpSingleToMultiString").setToFieldSync("set_string").setToNodeSync("UpString"))
            .addChildSync(new autoclass.ROUTE().setFromFieldSync("isOver").setFromNodeSync("UpTouch").setToFieldSync("set_enabled").setToNodeSync("UpSensor"))))
        .addChildSync(new autoclass.NavigationInfo())
        .addChildSync(new autoclass.Viewpoint().setDescriptionSync("Process pipes").setOrientationSync(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-0.4)])).setPositionSync(java.newArray("float", [java.newFloat(0), java.newFloat(5), java.newFloat(12)])))
        .addChildSync(new autoclass.Transform().setTranslationSync(java.newArray("float", [java.newFloat(0), java.newFloat(-2.5), java.newFloat(0)]))
          .addChildSync(ProtoInstance0 = new autoclass.ProtoInstance().setNameSync("Process")))
        .addChildSync(new autoclass.Transform()
          .addChildSync(ProtoInstance1 = new autoclass.ProtoInstance().setNameSync("Process")))
        .addChildSync(new autoclass.Transform().setTranslationSync(java.newArray("float", [java.newFloat(0), java.newFloat(2.5), java.newFloat(0)]))
          .addChildSync(ProtoInstance2 = new autoclass.ProtoInstance().setNameSync("Process"))))      ;
    X3D0.toFileX3D("../data/pp3.new.x3d");
