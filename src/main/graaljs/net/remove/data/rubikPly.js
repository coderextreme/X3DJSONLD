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
var ProtoInstance2 = null;
var ProtoInstance3 = null;
var ProtoInstance4 = null;
var ProtoInstance5 = null;
var ProtoInstance6 = null;
var ProtoInstance7 = null;
var ProtoInstance8 = null;
var ProtoInstance9 = null;
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("rubikFurnace.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/rubikFurnace.x3d"))
        .addMeta(new meta().setName("description").setContent("a green rubik cube")))
      .setScene(new Scene()
        .addChild(new NavigationInfo().setType(Java.to(["EXAMINE"], Java.type("java.lang.String[]"))))
        .addChild(new Viewpoint().setDescription("Rubiks Cube on Fire").setPosition(Java.to(doubleToFloat([0,0,12]), Java.type("float[]"))))
        .addChild(new ProtoDeclare().setName("anyShape")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("xtranslation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType(field.TYPE_MFNODE).setName("myShape").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new Shape()
                .setGeometry(new Sphere())
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]"))))))))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("xtranslation"))
                .addConnect(new connect().setNodeField("children").setProtoField("myShape"))))))
        .addChild(new ProtoDeclare().setName("three")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("ytranslation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType(field.TYPE_MFNODE).setName("myShape").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new Shape()
                .setGeometry(new Sphere())
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]"))))))))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("ytranslation")))
              .addChild(ProtoInstance0 = new ProtoInstance().setName("anyShape")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("myShape").setProtoField("myShape"))))
              .addChild(ProtoInstance1 = new ProtoInstance().setName("anyShape")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("myShape").setProtoField("myShape"))))
              .addChild(ProtoInstance2 = new ProtoInstance().setName("anyShape")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("myShape").setProtoField("myShape")))))))
        .addChild(new ProtoDeclare().setName("nine")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("ztranslation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType(field.TYPE_MFNODE).setName("myShape").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new Shape()
                .setGeometry(new Sphere())
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]"))))))))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("ztranslation")))
              .addChild(ProtoInstance3 = new ProtoInstance().setName("three")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("myShape").setProtoField("myShape"))))
              .addChild(ProtoInstance4 = new ProtoInstance().setName("three")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("myShape").setProtoField("myShape"))))
              .addChild(ProtoInstance5 = new ProtoInstance().setName("three")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("myShape").setProtoField("myShape")))))))
        .addChild(new ProtoDeclare().setName("twentyseven")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("ttranslation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType(field.TYPE_MFNODE).setName("myShape").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new Shape()
                .setGeometry(new Sphere())
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]"))))))))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("ttranslation")))
              .addChild(ProtoInstance6 = new ProtoInstance().setName("nine")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("myShape").setProtoField("myShape"))))
              .addChild(ProtoInstance7 = new ProtoInstance().setName("nine")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("myShape").setProtoField("myShape"))))
              .addChild(ProtoInstance8 = new ProtoInstance().setName("nine")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("myShape").setProtoField("myShape")))))))
        .addChild(ProtoInstance9 = new ProtoInstance().setName("twentyseven")))      ;
ProtoInstance0
                .addFieldValue(new fieldValue().setName("xtranslation").setValue("0 0 0"));
ProtoInstance1
                .addFieldValue(new fieldValue().setName("xtranslation").setValue("2 0 0"));
ProtoInstance2
                .addFieldValue(new fieldValue().setName("xtranslation").setValue("-2 0 0"));
ProtoInstance3
                .addFieldValue(new fieldValue().setName("ytranslation").setValue("0 0 0"));
ProtoInstance4
                .addFieldValue(new fieldValue().setName("ytranslation").setValue("0 2 0"));
ProtoInstance5
                .addFieldValue(new fieldValue().setName("ytranslation").setValue("0 -2 0"));
ProtoInstance6
                .addFieldValue(new fieldValue().setName("ztranslation").setValue("0 0 0"));
ProtoInstance7
                .addFieldValue(new fieldValue().setName("ztranslation").setValue("0 0 2"));
ProtoInstance8
                .addFieldValue(new fieldValue().setName("ztranslation").setValue("0 0 -2"));
ProtoInstance9
          .addFieldValue(new fieldValue().setName("ttranslation").setValue("0 0 0"));
ProtoInstance9
          .addFieldValue(new fieldValue().setName("myShape")
            .addChild(new Group()
              .addChild(new Shape()
                .setGeometry(new IndexedFaceSet().setConvex(false).setCoordIndex(Java.to([0,1,2,-1,0,2,3,-1,7,6,5,4,-1,0,4,5,1,-1,1,5,6,2,-1,2,6,7,3,-1,3,7,4,0], Java.type("int[]"))).setColorIndex(Java.to([0,1,2,-1,0,2,3,-1,7,6,5,4,-1,0,4,5,1,-1,1,5,6,2,-1,2,6,7,3,-1,3,7,4,0], Java.type("int[]")))
                  .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([0,0,0,0,0,1,0,1,1,0,1,0,1,0,0,1,0,1,1,1,1,1,1,0]), Java.type("float[]"))))
                  .setColor(new Color().setColor(Java.to(doubleToFloat([1,0,0,1,0,0,1,0,0,1,0,0,0,0,1,0,0,1,0,0,1,0,0,1]), Java.type("float[]"))))))
              .addChild(new Shape()
                .setGeometry(new IndexedLineSet().setCoordIndex(Java.to([0,1,-1,1,2,-1,2,3,-1,3,0,-1,2,0,-1], Java.type("int[]")))
                  .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([0,0,0,0,0,1,0,1,1,0,1,0,1,0,0,1,0,1,1,1,1,1,1,0]), Java.type("float[]"))))
                  .setColor(new Color().setColor(Java.to(doubleToFloat([1,1,1,1,1,1,1,1,1,1,1,1,0,0,0]), Java.type("float[]"))))))));
    X3D0.toFileX3D("../data/rubikPly.new.graal.x3d");
    X3D0.toFileJSON("../data/rubikPly.new.graal.json");
