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
var ProtoInstance0 = null;
var ProtoInstance1 = null;
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("title").setContent("asmallbox.x3d"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("John Carlson"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("manual"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/abox.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("a box")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.ProtoDeclare()).setName("anyShape")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFNODE).setName("myShape").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT)
              .addChild((new autoclass.Shape())
                .setGeometry((new autoclass.Sphere())))))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Transform())
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("children").setProtoField("myShape"))))))
        .addChild((new autoclass.ProtoDeclare()).setName("one")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFNODE).setName("myShape").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT)
              .addChild((new autoclass.Shape())
                .setGeometry((new autoclass.Cylinder())))))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Transform())
              .addChild(ProtoInstance0 = (new autoclass.ProtoInstance()).setName("anyShape")
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("myShape").setProtoField("myShape")))))))
        .addChild(ProtoInstance1 = (new autoclass.ProtoInstance()).setName("one")))      ;
ProtoInstance1
          .addFieldValue((new autoclass.fieldValue()).setName("myShape")
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Box()))));
    X3D0.toFileX3D("../data/asmallbox.new.x3d");
    process.exit(0);
