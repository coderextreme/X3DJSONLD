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
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("pp3.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("translator").setContent("John Carlson"))
        .addMeta(new meta().setName("created").setContent("5 May 2015"))
        .addMeta(new meta().setName("modified").setContent("23 Dec 2022"))
        .addMeta(new meta().setName("description").setContent("A process pipeline between three spheres (try typing on spheres and blue"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/x3d/pp3.x3d"))
        .addMeta(new meta().setName("generator").setContent("manual")))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("Process")
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addComments(new CommentsBlock("left"))
              .addChild(new Transform().setScale(Java.to(doubleToFloat([0.5,0.5,0.5]), Java.type("float[]")))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.7,1,0]), Java.type("float[]"))).setTransparency(0.5)))
                  .setGeometry(new Extrusion().setCreaseAngle(0.785).setCrossSection(Java.to(doubleToFloat([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]), Java.type("float[]"))).setSpine(Java.to(doubleToFloat([-2.5,0,0,-2,0,0,-1.5,0,0]), Java.type("float[]")))))
                .addComments(new CommentsBlock("<Transform translation=\"-2.5 0 0\"> <Shape> <Text DEF=\"LeftString\" string='\"l\"'/> </Shape> </Transform> <StringSensor DEF=\"LeftSensor\" enabled=\"false\"/> <TouchSensor DEF=\"LeftTouch\" enabled=\"true\"/>")))
              .addComments(new CommentsBlock("right"))
              .addChild(new Transform().setScale(Java.to(doubleToFloat([0.5,0.5,0.5]), Java.type("float[]")))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0.7,1]), Java.type("float[]"))).setTransparency(0.5)))
                  .setGeometry(new Extrusion().setCreaseAngle(0.785).setCrossSection(Java.to(doubleToFloat([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]), Java.type("float[]"))).setSpine(Java.to(doubleToFloat([1.5,0,0,2,0,0,2.5,0,0]), Java.type("float[]")))))
                .addChild(new Transform().setTranslation(Java.to(doubleToFloat([2,0,0]), Java.type("float[]")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDEF("MaterialLightBlue").setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]")))))
                    .setGeometry(new Text().setDEF("RightString").setString(Java.to(["r"], Java.type("java.lang.String[]"))))))
                .addChild(new StringSensor().setDEF("RightSensor").setEnabled(false))
                .addChild(new TouchSensor().setDescription("touch to activate").setDEF("RightTouch")))
              .addComments(new CommentsBlock("up"))
              .addChild(new Transform().setScale(Java.to(doubleToFloat([0.5,0.5,0.5]), Java.type("float[]")))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0.7,1]), Java.type("float[]"))).setTransparency(0.5)))
                  .setGeometry(new Extrusion().setCreaseAngle(0.785).setCrossSection(Java.to(doubleToFloat([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]), Java.type("float[]"))).setSpine(Java.to(doubleToFloat([0,1.5,0,0,2,0,0,2.5,0]), Java.type("float[]")))))
                .addChild(new Transform().setTranslation(Java.to(doubleToFloat([-0.5,2,0]), Java.type("float[]")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("MaterialLightBlue")))
                    .setGeometry(new Text().setDEF("UpString").setString(Java.to(["u"], Java.type("java.lang.String[]"))))))
                .addChild(new StringSensor().setDEF("UpSensor").setEnabled(false))
                .addChild(new TouchSensor().setDescription("touch to activate").setDEF("UpTouch")))
              .addComments(new CommentsBlock("down"))
              .addChild(new Transform().setScale(Java.to(doubleToFloat([0.5,0.5,0.5]), Java.type("float[]")))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.7,1,0]), Java.type("float[]"))).setTransparency(0.5)))
                  .setGeometry(new Extrusion().setCreaseAngle(0.785).setCrossSection(Java.to(doubleToFloat([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]), Java.type("float[]"))).setSpine(Java.to(doubleToFloat([0,-2.5,0,0,-2,0,0,-1.5,0]), Java.type("float[]")))))
                .addComments(new CommentsBlock("<Transform translation=\"-0.5 -2.5 0\"> <Shape> <Text DEF=\"DownString\" string='\"d\"'/> </Shape> </Transform> <StringSensor DEF=\"DownSensor\" enabled=\"false\"/> <TouchSensor description='touch to activate' DEF=\"DownTouch\" enabled=\"true\"/>")))
              .addComments(new CommentsBlock("center"))
              .addChild(new Transform()
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,0,0.7]), Java.type("float[]")))))
                  .setGeometry(new Sphere()))
                .addChild(new Transform().setScale(Java.to(doubleToFloat([0.5,0.5,0.5]), Java.type("float[]"))).setTranslation(Java.to(doubleToFloat([-0.5,0,1]), Java.type("float[]")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("MaterialLightBlue")))
                    .setGeometry(new Text().setDEF("CenterString"))))
                .addChild(new StringSensor().setDEF("CenterSensor").setEnabled(false))
                .addChild(new TouchSensor().setDescription("touch to activate").setDEF("CenterTouch"))))
            .addChild(new Script().setDEF("RightSingleToMultiString")
              .addField(new field().setType(field.TYPE_SFSTRING).setName("set_rightstring").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setType(field.TYPE_MFSTRING).setName("rightlines").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .setSourceCode(`ecmascript:

function initialize() {
	rightlines = new MFString(\"\");
}

function set_rightstring(rightstr) {
	rightlines = new MFString(rightstr);
}`))
            .addChild(new Script().setDEF("UpSingleToMultiString")
              .addField(new field().setType(field.TYPE_SFSTRING).setName("set_upstring").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setType(field.TYPE_MFSTRING).setName("uplines").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .setSourceCode(`ecmascript:

function initialize() {
	uplines = new MFString(\"\");
}

function set_upstring(upstr) {
	uplines = new MFString(upstr);
}`))
            .addChild(new Script().setDEF("CenterSingleToMultiString")
              .addField(new field().setType(field.TYPE_SFSTRING).setName("set_centerstring").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setType(field.TYPE_MFSTRING).setName("centerlines").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .setSourceCode(`ecmascript:

function initialize() {
	centerlines = new MFString(\"\");
}

function set_centerstring(centerstr) {
	centerlines = new MFString(centerstr);
}`))
            .addChild(new ROUTE().setFromField("enteredText").setFromNode("CenterSensor").setToField("set_centerstring").setToNode("CenterSingleToMultiString"))
            .addChild(new ROUTE().setFromField("centerlines").setFromNode("CenterSingleToMultiString").setToField("set_string").setToNode("CenterString"))
            .addChild(new ROUTE().setFromField("isOver").setFromNode("CenterTouch").setToField("set_enabled").setToNode("CenterSensor"))
            .addChild(new ROUTE().setFromField("enteredText").setFromNode("RightSensor").setToField("set_rightstring").setToNode("RightSingleToMultiString"))
            .addChild(new ROUTE().setFromField("rightlines").setFromNode("RightSingleToMultiString").setToField("set_string").setToNode("RightString"))
            .addChild(new ROUTE().setFromField("isOver").setFromNode("RightTouch").setToField("set_enabled").setToNode("RightSensor"))
            .addChild(new ROUTE().setFromField("enteredText").setFromNode("UpSensor").setToField("set_upstring").setToNode("UpSingleToMultiString"))
            .addChild(new ROUTE().setFromField("uplines").setFromNode("UpSingleToMultiString").setToField("set_string").setToNode("UpString"))
            .addChild(new ROUTE().setFromField("isOver").setFromNode("UpTouch").setToField("set_enabled").setToNode("UpSensor"))))
        .addChild(new NavigationInfo())
        .addChild(new Viewpoint().setDescription("Process pipes").setOrientation(Java.to(doubleToFloat([1,0,0,-0.4]), Java.type("float[]"))).setPosition(Java.to(doubleToFloat([0,5,12]), Java.type("float[]"))))
        .addChild(new Transform().setTranslation(Java.to(doubleToFloat([0,-2.5,0]), Java.type("float[]")))
          .addChild(ProtoInstance0 = new ProtoInstance().setName("Process")))
        .addChild(new Transform()
          .addChild(ProtoInstance1 = new ProtoInstance().setName("Process")))
        .addChild(new Transform().setTranslation(Java.to(doubleToFloat([0,2.5,0]), Java.type("float[]")))
          .addChild(ProtoInstance2 = new ProtoInstance().setName("Process"))))      ;
    X3D0.toFileX3D("../personal/pp3.new.graal.x3d");
    X3D0.toFileJSON("../personal/pp3.new.graal.json");
