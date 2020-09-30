load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("creator").setContent("John W Carlson"))
        .addMeta(new meta().setName("created").setContent("December 13 2015"))
        .addMeta(new meta().setName("modified").setContent("April 18 2017"))
        .addMeta(new meta().setName("title").setContent("fors2.x3d"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/fors2.x3d"))
        .addMeta(new meta().setName("description").setContent("beginnings of a force directed graph in 3D"))
        .addMeta(new meta().setName("generator").setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("node")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("position").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform().setDEF("transform").setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]")))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("position")))
              .addChild(new Shape().setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]")))
                .addComments(new CommentsBlock("comment before Sphere"))
                .addComments(new CommentsBlock("comment after Sphere"))
                .addComments(new CommentsBlock("comment after Appearance"))
                .setGeometry(new Sphere())
                .setAppearance(new Appearance()
                  .addComments(new CommentsBlock("comment before Material"))
                  .addComments(new CommentsBlock("comment after Material"))
                  .setMaterial(new Material().setDiffuseColor(Java.to([1,0,0], Java.type("float[]")))))))
            .addChild(new PositionInterpolator().setDEF("NodePosition").setKey(Java.to([0,1], Java.type("float[]"))).setKeyValue(Java.to([0,0,0,0,5,0], Java.type("float[]"))))
            .addX3DScript(new X3DScript().setDEF("MoveBall")
              .addField(new field().setType(field.TYPE_SFVEC3F).setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("50 50 0"))
              .addField(new field().setType(field.TYPE_SFVEC3F).setName("old").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
              .addField(new field().setType(field.TYPE_SFTIME).setName("set_cycle").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setType(field.TYPE_MFVEC3F).setName("keyValue").setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
            .addChild(new TimeSensor().setDEF("nodeClock").setCycleInterval(3).setLoop(true))
            .addChild(new ROUTE().setFromNode("nodeClock").setFromField("cycleTime").setToNode("MoveBall").setToField("set_cycle"))
            .addChild(new ROUTE().setFromNode("nodeClock").setFromField("fraction_changed").setToNode("NodePosition").setToField("set_fraction"))
            .addChild(new ROUTE().setFromNode("MoveBall").setFromField("keyValue").setToNode("NodePosition").setToField("keyValue"))
            .addChild(new ROUTE().setFromNode("NodePosition").setFromField("value_changed").setToNode("transform").setToField("set_translation"))))
        .addChild(new ProtoDeclare().setName("cylinder")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("positionA").setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("positionB").setAccessType(field.ACCESSTYPE_INPUTONLY)))
          .setProtoBody(new ProtoBody()
            .addChild(new Shape().setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]")))
              .setGeometry(new Extrusion().setDEF("extrusion").setCreaseAngle(0.785).setCrossSection(Java.to([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0], Java.type("float[]"))).setSpine(Java.to([0,-50,0,0,0,0,0,50,0], Java.type("float[]"))))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to([0,1,0], Java.type("float[]"))))))
            .addX3DScript(new X3DScript().setDEF("MoveCylinder")
              .addField(new field().setType(field.TYPE_MFVEC3F).setName("spine").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 -50 0 0 0 0 0 50 0"))
              .addField(new field().setType(field.TYPE_SFVEC3F).setName("set_endA").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setType(field.TYPE_SFVEC3F).setName("set_endB").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("set_endA").setProtoField("positionA"))
                .addConnect(new connect().setNodeField("set_endB").setProtoField("positionB"))))
            .addChild(new ROUTE().setFromNode("MoveCylinder").setFromField("spine").setToNode("extrusion").setToField("set_spine"))))
        .addChild(new Transform().setScale(Java.to([0.1,0.1,0.1], Java.type("float[]"))).setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]")))
          .addChild(ProtoInstance0 = new ProtoInstance().setName("node").setDEF("nodeA"))
          .addChild(ProtoInstance1 = new ProtoInstance().setName("node").setDEF("nodeB"))
          .addChild(ProtoInstance2 = new ProtoInstance().setName("cylinder").setDEF("linkA")))
        .addChild(new ROUTE().setFromNode("nodeA").setFromField("position").setToNode("linkA").setToField("positionA"))
        .addChild(new ROUTE().setFromNode("nodeB").setFromField("position").setToNode("linkA").setToField("positionB")))      ;
ProtoInstance0
            .addFieldValue(new fieldValue().setName("position").setValue("-50 -50 -50"));
ProtoInstance1
            .addFieldValue(new fieldValue().setName("position").setValue("50 50 50"));
ProtoInstance2
            .addFieldValue(new fieldValue().setName("positionA").setValue("0 0 0"));
ProtoInstance2
            .addFieldValue(new fieldValue().setName("positionB").setValue("50 50 50"));
    X3D0.toFileX3D("../data/fors2.new.x3d");
