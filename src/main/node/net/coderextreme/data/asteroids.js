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
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
      .setHead(new autoclass.head()
        .addMeta(new autoclass.meta().setName("title").setContent("asteroids.x3d"))
        .addMeta(new autoclass.meta().setName("creator").setContent("John Carlson"))
        .addMeta(new autoclass.meta().setName("generator").setContent("manual"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/asteroids.x3d"))
        .addMeta(new autoclass.meta().setName("description").setContent("asteroids")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.ProtoDeclare().setName("anyShape")
          .setProtoInterface(new autoclass.ProtoInterface()
            .addField(new autoclass.field().setType(autoclass.field.TYPE_MFNODE).setName("myShape").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new autoclass.Shape()
                .setGeometry(new autoclass.Sphere()))))
          .setProtoBody(new autoclass.ProtoBody()
            .addChild(new autoclass.Transform()
              .setIS(new autoclass.IS()
                .addConnect(new autoclass.connect().setNodeField("children").setProtoField("myShape"))))))
        .addChild(ProtoInstance0 = new autoclass.ProtoInstance().setName("anyShape")))      ;
    X3D0.toFileX3D("../data/asteroids.new.node.x3d");
    X3D0.toFileJSON("../data/asteroids.new.node.json");
    process.exit(0);
