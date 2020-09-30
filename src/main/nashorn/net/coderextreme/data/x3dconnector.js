load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("x3dconnector"))
        .addMeta(new meta().setName("creator").setContent("Lost, Doug Sanden I think"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/x3dconnectorProto.x3d"))
        .addMeta(new meta().setName("description").setContent("a generic proto to connect two objects")))
      .setScene(new Scene()
        .addChild(new Viewpoint().setPosition(Java.to([0,0,5], Java.type("float[]"))).setDescription("Only Viewpoint"))
        .addChild(new Background().setSkyColor(Java.to([0.4,0.4,0.4], Java.type("float[]"))).setTransparency(0))
        .addChild(new Transform().setDEF("G1").setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]")))
          .addChild(new Shape().setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]")))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(Java.to([0.7,0.2,0.2], Java.type("float[]")))))
            .setGeometry(new Sphere().setRadius(0.1)))
          .addChild(new PlaneSensor().setDescription("Grab to move").setDEF("PS1"))
          .addChild(new ROUTE().setFromNode("PS1").setFromField("translation_changed").setToNode("G1").setToField("set_translation")))
        .addChild(new Transform().setDEF("G2").setTranslation(Java.to([1,-1,0.01], Java.type("float[]"))).setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]")))
          .addChild(new Shape().setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]")))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(Java.to([0.2,0.7,0.2], Java.type("float[]")))))
            .setGeometry(new Sphere().setRadius(0.1)))
          .addChild(new PlaneSensor().setDescription("Grab to move").setOffset(Java.to([1,-1,0.01], Java.type("float[]"))).setDEF("PS2"))
          .addChild(new ROUTE().setFromNode("PS2").setFromField("translation_changed").setToNode("G2").setToField("set_translation")))
        .addChild(new Transform().setDEF("transC1").setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]")))
          .addChild(new Transform().setDEF("rotscaleC1").setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]")))
            .addChild(new Shape().setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]")))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to([0.2,0.7,0.7], Java.type("float[]"))).setTransparency(0.5)))
              .setGeometry(new Cylinder().setRadius(0.05)))))
        .addChild(new ProtoDeclare().setName("x3dconnector")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFNODE).setName("startnode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setType(field.TYPE_SFNODE).setName("endnode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setType(field.TYPE_SFNODE).setName("transnode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setType(field.TYPE_SFNODE).setName("rotscalenode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(field.ACCESSTYPE_INPUTONLY)))
          .setProtoBody(new ProtoBody()
            .setX3DScript(new X3DScript().setDEF("S1")
              .addField(new field().setType(field.TYPE_SFNODE).setName("startnode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
              .addField(new field().setType(field.TYPE_SFNODE).setName("endnode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
              .addField(new field().setType(field.TYPE_SFNODE).setName("transnode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
              .addField(new field().setType(field.TYPE_SFNODE).setName("rotscalenode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
              .addField(new field().setType(field.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setType(field.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("startnode").setProtoField("startnode"))
                .addConnect(new connect().setNodeField("endnode").setProtoField("endnode"))
                .addConnect(new connect().setNodeField("transnode").setProtoField("transnode"))
                .addConnect(new connect().setNodeField("rotscalenode").setProtoField("rotscalenode"))
                .addConnect(new connect().setNodeField("set_startpoint").setProtoField("set_startpoint"))
                .addConnect(new connect().setNodeField("set_endpoint").setProtoField("set_endpoint"))))))
        .addChild(ProtoInstance0 = new ProtoInstance().setName("x3dconnector").setDEF("connector1"))
        .addChild(new ROUTE().setFromNode("G1").setFromField("translation_changed").setToNode("connector1").setToField("set_startpoint"))
        .addChild(new ROUTE().setFromNode("G2").setFromField("translation_changed").setToNode("connector1").setToField("set_endpoint")))      ;
ProtoInstance0
          .addFieldValue(new fieldValue().setName("startnode")
            .addChild(new Transform().setUSE("G1")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("endnode")
            .addChild(new Transform().setUSE("G2")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("transnode")
            .addChild(new Transform().setUSE("transC1")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("rotscalenode")
            .addChild(new Transform().setUSE("rotscaleC1")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("set_startpoint"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("set_endpoint"));
    X3D0.toFileX3D("../data/x3dconnector.new.x3d");
