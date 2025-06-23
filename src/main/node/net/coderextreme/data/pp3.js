var java = require('java');
var util = require('util');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: util.promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
var autoclass = require('../../../X3Dautoclass');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
      .setHead(new autoclass.head()
        .addMeta(new autoclass.meta().setName("title").setContent("pp3.x3d"))
        .addMeta(new autoclass.meta().setName("creator").setContent("John Carlson"))
        .addMeta(new autoclass.meta().setName("translator").setContent("John Carlson"))
        .addMeta(new autoclass.meta().setName("created").setContent("5 May 2015"))
        .addMeta(new autoclass.meta().setName("modified").setContent("23 Dec 2022"))
        .addMeta(new autoclass.meta().setName("description").setContent("A process pipeline between three spheres (try typing on spheres and blue"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("https://coderextreme.net/x3d/pp3.x3d"))
        .addMeta(new autoclass.meta().setName("generator").setContent("manual")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.ProtoDeclare().setName("Process")
          .setProtoBody(new autoclass.ProtoBody()
            .addChild(new autoclass.Group()
              .addComments((new autoclass.CommentsBlock("left")))
              .addChild(new autoclass.Transform().setScale(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)]))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.7), java.newFloat(1), java.newFloat(0)])).setTransparency(java.newFloat(0.5))))
                  .setGeometry(new autoclass.Extrusion().setCreaseAngle(java.newFloat(0.785)).setCrossSection(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0.92), java.newFloat(-0.38), java.newFloat(0.71), java.newFloat(-0.71), java.newFloat(0.38), java.newFloat(-0.92), java.newFloat(0), java.newFloat(-1), java.newFloat(-0.38), java.newFloat(-0.92), java.newFloat(-0.71), java.newFloat(-0.71), java.newFloat(-0.92), java.newFloat(-0.38), java.newFloat(-1), java.newFloat(0), java.newFloat(-0.92), java.newFloat(0.38), java.newFloat(-0.71), java.newFloat(0.71), java.newFloat(-0.38), java.newFloat(0.92), java.newFloat(0), java.newFloat(1), java.newFloat(0.38), java.newFloat(0.92), java.newFloat(0.71), java.newFloat(0.71), java.newFloat(0.92), java.newFloat(0.38), java.newFloat(1), java.newFloat(0)])).setSpine(java.newArray("float", [java.newFloat(-2.5), java.newFloat(0), java.newFloat(0), java.newFloat(-1.5), java.newFloat(0), java.newFloat(0)]))))
                .addComments((new autoclass.CommentsBlock("<Transform translation=\"-2.5 0 0\"> <Shape> <Text DEF=\"LeftString\" string='\"l\"'/> </Shape> </Transform> <StringSensor DEF=\"LeftSensor\" enabled=\"false\"/> <TouchSensor DEF=\"LeftTouch\" enabled=\"true\"/>"))))
              .addComments((new autoclass.CommentsBlock("right")))
              .addChild(new autoclass.Transform().setScale(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)]))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0.7), java.newFloat(1)])).setTransparency(java.newFloat(0.5))))
                  .setGeometry(new autoclass.Extrusion().setCreaseAngle(java.newFloat(0.785)).setCrossSection(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0.92), java.newFloat(-0.38), java.newFloat(0.71), java.newFloat(-0.71), java.newFloat(0.38), java.newFloat(-0.92), java.newFloat(0), java.newFloat(-1), java.newFloat(-0.38), java.newFloat(-0.92), java.newFloat(-0.71), java.newFloat(-0.71), java.newFloat(-0.92), java.newFloat(-0.38), java.newFloat(-1), java.newFloat(0), java.newFloat(-0.92), java.newFloat(0.38), java.newFloat(-0.71), java.newFloat(0.71), java.newFloat(-0.38), java.newFloat(0.92), java.newFloat(0), java.newFloat(1), java.newFloat(0.38), java.newFloat(0.92), java.newFloat(0.71), java.newFloat(0.71), java.newFloat(0.92), java.newFloat(0.38), java.newFloat(1), java.newFloat(0)])).setSpine(java.newArray("float", [java.newFloat(1.5), java.newFloat(0), java.newFloat(0), java.newFloat(2.5), java.newFloat(0), java.newFloat(0)]))))
                .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(2), java.newFloat(0), java.newFloat(0)]))
                  .addChild(new autoclass.Shape()
                    .setAppearance(new autoclass.Appearance()
                      .setMaterial(new autoclass.Material().setDEF("MaterialLightBlue").setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
                    .setGeometry(new autoclass.Text().setDEF("RightString").setString(java.newArray("java.lang.String", ["r"])))))
                .addChild(new autoclass.StringSensor().setDEF("RightSensor").setEnabled(false))
                .addChild(new autoclass.TouchSensor().setDescription("touch to activate").setDEF("RightTouch")))
              .addComments((new autoclass.CommentsBlock("up")))
              .addChild(new autoclass.Transform().setScale(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)]))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0.7), java.newFloat(1)])).setTransparency(java.newFloat(0.5))))
                  .setGeometry(new autoclass.Extrusion().setCreaseAngle(java.newFloat(0.785)).setCrossSection(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0.92), java.newFloat(-0.38), java.newFloat(0.71), java.newFloat(-0.71), java.newFloat(0.38), java.newFloat(-0.92), java.newFloat(0), java.newFloat(-1), java.newFloat(-0.38), java.newFloat(-0.92), java.newFloat(-0.71), java.newFloat(-0.71), java.newFloat(-0.92), java.newFloat(-0.38), java.newFloat(-1), java.newFloat(0), java.newFloat(-0.92), java.newFloat(0.38), java.newFloat(-0.71), java.newFloat(0.71), java.newFloat(-0.38), java.newFloat(0.92), java.newFloat(0), java.newFloat(1), java.newFloat(0.38), java.newFloat(0.92), java.newFloat(0.71), java.newFloat(0.71), java.newFloat(0.92), java.newFloat(0.38), java.newFloat(1), java.newFloat(0)])).setSpine(java.newArray("float", [java.newFloat(0), java.newFloat(1.5), java.newFloat(0), java.newFloat(0), java.newFloat(2.5), java.newFloat(0)]))))
                .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(-0.5), java.newFloat(2), java.newFloat(0)]))
                  .addChild(new autoclass.Shape()
                    .setAppearance(new autoclass.Appearance()
                      .setMaterial(new autoclass.Material().setUSE("MaterialLightBlue")))
                    .setGeometry(new autoclass.Text().setDEF("UpString").setString(java.newArray("java.lang.String", ["u"])))))
                .addChild(new autoclass.StringSensor().setDEF("UpSensor").setEnabled(false))
                .addChild(new autoclass.TouchSensor().setDescription("touch to activate").setDEF("UpTouch")))
              .addComments((new autoclass.CommentsBlock("down")))
              .addChild(new autoclass.Transform().setScale(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)]))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.7), java.newFloat(1), java.newFloat(0)])).setTransparency(java.newFloat(0.5))))
                  .setGeometry(new autoclass.Extrusion().setCreaseAngle(java.newFloat(0.785)).setCrossSection(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0.92), java.newFloat(-0.38), java.newFloat(0.71), java.newFloat(-0.71), java.newFloat(0.38), java.newFloat(-0.92), java.newFloat(0), java.newFloat(-1), java.newFloat(-0.38), java.newFloat(-0.92), java.newFloat(-0.71), java.newFloat(-0.71), java.newFloat(-0.92), java.newFloat(-0.38), java.newFloat(-1), java.newFloat(0), java.newFloat(-0.92), java.newFloat(0.38), java.newFloat(-0.71), java.newFloat(0.71), java.newFloat(-0.38), java.newFloat(0.92), java.newFloat(0), java.newFloat(1), java.newFloat(0.38), java.newFloat(0.92), java.newFloat(0.71), java.newFloat(0.71), java.newFloat(0.92), java.newFloat(0.38), java.newFloat(1), java.newFloat(0)])).setSpine(java.newArray("float", [java.newFloat(0), java.newFloat(-2.5), java.newFloat(0), java.newFloat(0), java.newFloat(-1.5), java.newFloat(0)]))))
                .addComments((new autoclass.CommentsBlock("<Transform translation=\"-0.5 -2.5 0\"> <Shape> <Text DEF=\"DownString\" string='\"d\"'/> </Shape> </Transform> <StringSensor DEF=\"DownSensor\" enabled=\"false\"/> <TouchSensor description='touch to activate' DEF=\"DownTouch\" enabled=\"true\"/>"))))
              .addComments((new autoclass.CommentsBlock("center")))
              .addChild(new autoclass.Transform()
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0.7)]))))
                  .setGeometry(new autoclass.Sphere()))
                .addChild(new autoclass.Transform().setScale(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)])).setTranslation(java.newArray("float", [java.newFloat(-0.5), java.newFloat(0), java.newFloat(1)]))
                  .addChild(new autoclass.Shape()
                    .setAppearance(new autoclass.Appearance()
                      .setMaterial(new autoclass.Material().setUSE("MaterialLightBlue")))
                    .setGeometry(new autoclass.Text().setDEF("CenterString"))))
                .addChild(new autoclass.StringSensor().setDEF("CenterSensor").setEnabled(false))
                .addChild(new autoclass.TouchSensor().setDescription("touch to activate").setDEF("CenterTouch"))))
            .addChild(new autoclass.Script().setDEF("RightSingleToMultiString")
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFSTRING).setName("set_rightstring").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_MFSTRING).setName("rightlines").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	rightlines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_rightstring(rightstr) {\n"+
"	rightlines = new MFString(rightstr);\n"+
"}"))
            .addChild(new autoclass.Script().setDEF("UpSingleToMultiString")
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFSTRING).setName("set_upstring").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_MFSTRING).setName("uplines").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	uplines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_upstring(upstr) {\n"+
"	uplines = new MFString(upstr);\n"+
"}"))
            .addChild(new autoclass.Script().setDEF("CenterSingleToMultiString")
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFSTRING).setName("set_centerstring").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_MFSTRING).setName("centerlines").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	centerlines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_centerstring(centerstr) {\n"+
"	centerlines = new MFString(centerstr);\n"+
"}"))
            .addChild(new autoclass.ROUTE().setFromField("enteredText").setFromNode("CenterSensor").setToField("set_centerstring").setToNode("CenterSingleToMultiString"))
            .addChild(new autoclass.ROUTE().setFromField("centerlines").setFromNode("CenterSingleToMultiString").setToField("set_string").setToNode("CenterString"))
            .addChild(new autoclass.ROUTE().setFromField("isOver").setFromNode("CenterTouch").setToField("set_enabled").setToNode("CenterSensor"))
            .addChild(new autoclass.ROUTE().setFromField("enteredText").setFromNode("RightSensor").setToField("set_rightstring").setToNode("RightSingleToMultiString"))
            .addChild(new autoclass.ROUTE().setFromField("rightlines").setFromNode("RightSingleToMultiString").setToField("set_string").setToNode("RightString"))
            .addChild(new autoclass.ROUTE().setFromField("isOver").setFromNode("RightTouch").setToField("set_enabled").setToNode("RightSensor"))
            .addChild(new autoclass.ROUTE().setFromField("enteredText").setFromNode("UpSensor").setToField("set_upstring").setToNode("UpSingleToMultiString"))
            .addChild(new autoclass.ROUTE().setFromField("uplines").setFromNode("UpSingleToMultiString").setToField("set_string").setToNode("UpString"))
            .addChild(new autoclass.ROUTE().setFromField("isOver").setFromNode("UpTouch").setToField("set_enabled").setToNode("UpSensor"))))
        .addChild(new autoclass.NavigationInfo())
        .addChild(new autoclass.Viewpoint().setDescription("Process pipes").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-0.4)])).setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(5), java.newFloat(12)])))
        .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-2.5), java.newFloat(0)]))
          .addChild(ProtoInstance0 = new autoclass.ProtoInstance().setName("Process")))
        .addChild(new autoclass.Transform()
          .addChild(ProtoInstance1 = new autoclass.ProtoInstance().setName("Process")))
        .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(2.5), java.newFloat(0)]))
          .addChild(ProtoInstance2 = new autoclass.ProtoInstance().setName("Process"))))      ;
    X3D0.toFileX3D("../data/pp3.new.node.x3d");
    X3D0.toFileJSON("../data/pp3.new.node.json");
    process.exit(0);
