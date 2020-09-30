load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
var ProtoInstance3 = null;
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addComponent(new component().setName("Scripting").setLevel(1))
        .addMeta(new meta().setName("title").setContent("bubs.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("description").setContent("Tour around a prismatic sphere"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/bubs.x3d")))
      .setScene(new Scene()
        .addChild(new NavigationInfo().setType(Java.to(["EXAMINE"], Java.type("java.lang.String[]"))))
        .addChild(new Viewpoint().setPosition(Java.to([0,0,4], Java.type("float[]"))).setOrientation(Java.to([1,0,0,0], Java.type("float[]"))).setDescription("Bubbles in action"))
        .addChild(new Background().setBackUrl(Java.to(["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"], Java.type("java.lang.String[]"))).setBottomUrl(Java.to(["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"], Java.type("java.lang.String[]"))).setFrontUrl(Java.to(["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"], Java.type("java.lang.String[]"))).setLeftUrl(Java.to(["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"], Java.type("java.lang.String[]"))).setRightUrl(Java.to(["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"], Java.type("java.lang.String[]"))).setTopUrl(Java.to(["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"], Java.type("java.lang.String[]"))).setSkyColor(Java.to([0,0,0], Java.type("float[]"))).setTransparency(0))
        .addChild(new ProtoDeclare().setName("Bubble")
          .setProtoBody(new ProtoBody()
            .addChild(new Transform().setDEF("body_trans").setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]")))
              .addChild(new Shape().setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]")))
                .setGeometry(new Sphere().setRadius(0.25))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(Java.to([1,0,0], Java.type("float[]"))).setTransparency(0.2))))
              .addChild(new TimeSensor().setDEF("bubbleClock").setCycleInterval(10).setLoop(true))
              .addChild(new ROUTE().setFromNode("bounce1").setFromField("translation_changed").setToNode("body_trans").setToField("set_translation"))
              .addChild(new ROUTE().setFromNode("bounce1").setFromField("scale_changed").setToNode("body_trans").setToField("set_scale"))
              .addChild(new ROUTE().setFromNode("bubbleClock").setFromField("fraction_changed").setToNode("bounce1").setToField("set_fraction"))
              .addX3DScript(new X3DScript().setDEF("bounce1")
                .addField(new field().setType(field.TYPE_SFVEC3F).setName("scale").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1 1 1"))
                .addField(new field().setType(field.TYPE_SFVEC3F).setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField(new field().setType(field.TYPE_SFVEC3F).setName("velocity").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField(new field().setType(field.TYPE_SFVEC3F).setName("scalvel").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField(new field().setType(field.TYPE_SFFLOAT).setName("set_fraction").setAccessType(field.ACCESSTYPE_INPUTONLY))))))
        .addChild(ProtoInstance0 = new ProtoInstance().setName("Bubble").setDEF("bubbleA"))
        .addChild(ProtoInstance1 = new ProtoInstance().setName("Bubble").setDEF("bubbleB"))
        .addChild(ProtoInstance2 = new ProtoInstance().setName("Bubble").setDEF("bubbleC"))
        .addChild(ProtoInstance3 = new ProtoInstance().setName("Bubble").setDEF("bubbleD")))      ;
    X3D0.toFileX3D("../data/bubs.new.x3d");
