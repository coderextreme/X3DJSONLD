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
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
      .setHead(new autoclass.head()
        .addMeta(new autoclass.meta().setName("title").setContent("qq3.x3d"))
        .addMeta(new autoclass.meta().setName("creator").setContent("John Carlson"))
        .addMeta(new autoclass.meta().setName("translator").setContent("John Carlson"))
        .addMeta(new autoclass.meta().setName("created").setContent("11 Jan 2015"))
        .addMeta(new autoclass.meta().setName("modified").setContent("05 May 2017"))
        .addMeta(new autoclass.meta().setName("description").setContent("12 extrusions"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("https://coderextreme.net/x3d/qq3.x3d"))
        .addMeta(new autoclass.meta().setName("generator").setContent("manual")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.ProtoDeclare().setName("Process")
          .setProtoBody(new autoclass.ProtoBody()
            .addChild(new autoclass.Group()
              .addComments((new autoclass.CommentsBlock("left")))
              .addChild(new autoclass.Transform().setScale(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)]))
                .addChild(new autoclass.Shape().setDEF("ShapeLeftDown")
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.7), java.newFloat(1), java.newFloat(0)]))))
                  .setGeometry(new autoclass.Extrusion().setSpine(java.newArray("float", [java.newFloat(-2.5), java.newFloat(0), java.newFloat(0), java.newFloat(-1.5), java.newFloat(0), java.newFloat(0)])).setCreaseAngle(java.newFloat(0.785)).setCrossSection(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0.92), java.newFloat(-0.38), java.newFloat(0.71), java.newFloat(-0.71), java.newFloat(0.38), java.newFloat(-0.92), java.newFloat(0), java.newFloat(-1), java.newFloat(-0.38), java.newFloat(-0.92), java.newFloat(-0.71), java.newFloat(-0.71), java.newFloat(-0.92), java.newFloat(-0.38), java.newFloat(-1), java.newFloat(0), java.newFloat(-0.92), java.newFloat(0.38), java.newFloat(-0.71), java.newFloat(0.71), java.newFloat(-0.38), java.newFloat(0.92), java.newFloat(0), java.newFloat(1), java.newFloat(0.38), java.newFloat(0.92), java.newFloat(0.71), java.newFloat(0.71), java.newFloat(0.92), java.newFloat(0.38), java.newFloat(1), java.newFloat(0)])))))
              .addComments((new autoclass.CommentsBlock("right")))
              .addChild(new autoclass.Transform().setScale(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)]))
                .addChild(new autoclass.Shape().setDEF("ShapeUpRight")
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0.7), java.newFloat(1)]))))
                  .setGeometry(new autoclass.Extrusion().setSpine(java.newArray("float", [java.newFloat(1.5), java.newFloat(0), java.newFloat(0), java.newFloat(2.5), java.newFloat(0), java.newFloat(0)])).setCreaseAngle(java.newFloat(0.785)).setCrossSection(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0.92), java.newFloat(-0.38), java.newFloat(0.71), java.newFloat(-0.71), java.newFloat(0.38), java.newFloat(-0.92), java.newFloat(0), java.newFloat(-1), java.newFloat(-0.38), java.newFloat(-0.92), java.newFloat(-0.71), java.newFloat(-0.71), java.newFloat(-0.92), java.newFloat(-0.38), java.newFloat(-1), java.newFloat(0), java.newFloat(-0.92), java.newFloat(0.38), java.newFloat(-0.71), java.newFloat(0.71), java.newFloat(-0.38), java.newFloat(0.92), java.newFloat(0), java.newFloat(1), java.newFloat(0.38), java.newFloat(0.92), java.newFloat(0.71), java.newFloat(0.71), java.newFloat(0.92), java.newFloat(0.38), java.newFloat(1), java.newFloat(0)])))))
              .addComments((new autoclass.CommentsBlock("up")))
              .addChild(new autoclass.Transform().setScale(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)]))
                .addChild(new autoclass.Shape().setUSE("ShapeUpRight")))
              .addComments((new autoclass.CommentsBlock("down")))
              .addChild(new autoclass.Transform().setScale(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)]))
                .addChild(new autoclass.Shape().setUSE("ShapeLeftDown"))))))
        .addChild(new autoclass.Viewpoint().setDescription("Process pipes").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-0.4)])).setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(5), java.newFloat(12)])))
        .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-2.5), java.newFloat(0)]))
          .addChild(ProtoInstance0 = new autoclass.ProtoInstance().setName("Process")))
        .addChild(new autoclass.Transform()
          .addChild(ProtoInstance1 = new autoclass.ProtoInstance().setName("Process")))
        .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(2.5), java.newFloat(0)]))
          .addChild(ProtoInstance2 = new autoclass.ProtoInstance().setName("Process"))))      ;
    X3D0.toFileX3D("../data/qq3.new.node.x3d");
    X3D0.toFileJSON("../data/qq3.new.node.json");
    process.exit(0);
