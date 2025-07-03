load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
function doubleToFloat(d) {
    if (Float32Array)
	return new Float32Array(d);
}
var ProtoInstance0 = null;
var ProtoInstance1 = null;
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("asmallbox.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/abox.x3d"))
        .addMeta(new meta().setName("description").setContent("a box")))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("anyShape")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_MFNODE).setName("myShape").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new Shape()
                .setGeometry(new Sphere()))))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .setIS(new IS()
                .addConnect(new connect().setNodeField("children").setProtoField("myShape"))))))
        .addChild(new ProtoDeclare().setName("one")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_MFNODE).setName("myShape").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new Shape()
                .setGeometry(new Cylinder()))))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .addChild(ProtoInstance0 = new ProtoInstance().setName("anyShape")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("myShape").setProtoField("myShape")))))))
        .addChild(ProtoInstance1 = new ProtoInstance().setName("one")))      ;
ProtoInstance1
          .addFieldValue(new fieldValue().setName("myShape")
            .addChild(new Shape()
              .setGeometry(new Box())));
    X3D0.toFileX3D(".././asmallbox.new.graal.x3d");
    X3D0.toFileJSON(".././asmallbox.new.graal.json");
