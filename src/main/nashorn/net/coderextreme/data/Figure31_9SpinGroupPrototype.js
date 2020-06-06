load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("Figure31_9SpinGroupPrototype.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("Figure 31.9, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.wiley.com/legacy/compbooks/vrml2sbk/ch31/31fig09.htm"))
        .addMeta(new metaObject().setName("translator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("24 October 2000"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("description").setContent("The SpinGroup prototype is used to automatically spin a group of three long rectangular boxes. Click on blue crossbar to activate second SpinGroup."))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_9SpinGroupPrototype.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("Figure31_9SpinGroupPrototype.x3d"))
        .addChild(new ProtoDeclareObject().setName("SpinGroup")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType(fieldObject.TYPE_MFNODE).setName("children").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
              .addComments(new CommentsBlock("NULL node initialization")))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFTIME).setName("cycleInterval").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("1"))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("loop").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("false"))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFTIME).setName("startTime").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFTIME).setName("stopTime").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject().setDEF("SpinGroupTransform")
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("children").setProtoField("children"))))
            .addComments(new CommentsBlock("following nodes will not be rendered, only the first node of a ProtoBody is drawn"))
            .addChild(new TimeSensorObject().setDEF("SpinGroupClock")
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("cycleInterval").setProtoField("cycleInterval"))
                .addConnect(new connectObject().setNodeField("loop").setProtoField("loop"))
                .addConnect(new connectObject().setNodeField("startTime").setProtoField("startTime"))
                .addConnect(new connectObject().setNodeField("stopTime").setProtoField("stopTime"))))
            .addChild(new OrientationInterpolatorObject().setDEF("Spinner").setKey(Java.to([0,0.5,1], Java.type("float[]"))).setKeyValue(Java.to([0,1,0,0,0,1,0,3.14,0,1,0,6.28], Java.type("float[]"))))
            .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("SpinGroupClock").setToField("set_fraction").setToNode("Spinner"))
            .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Spinner").setToField("set_rotation").setToNode("SpinGroupTransform"))))
        .addComments(new CommentsBlock("Now the scene proper begins. Nothing renders in a ProtoDeclare (or ExternProtoDeclare)."))
        .addChild(new ViewpointObject().setDescription("Click on blue crossbar to activate second SpinGroup").setOrientation(Java.to([1,0,0,-0.52], Java.type("float[]"))).setPosition(Java.to([0,18,30], Java.type("float[]"))))
        .addComments(new CommentsBlock("Create an instance, meaning actual nodes that render"))
        .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("SpinGroup"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("ActivateSecondSpinGroup").setToField("startTime").setToNode("SecondSpinGroup")))      ;
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("cycleInterval").setValue("8"));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("loop").setValue("true"));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("children")
            .addChild(new ShapeObject()
              .setGeometry(new BoxObject().setSize(Java.to([25,2,2], Java.type("float[]"))))
              .setAppearance(new AppearanceObject().setDEF("Green")
                .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0,1,0.3], Java.type("float[]"))))))
            .addChild(new ShapeObject()
              .setGeometry(new BoxObject().setSize(Java.to([2,25,2], Java.type("float[]"))))
              .setAppearance(new AppearanceObject().setUSE("Green")))
            .addChild(ProtoInstance1 = new ProtoInstanceObject().setName("SpinGroup").setDEF("SecondSpinGroup")
              .addComments(new CommentsBlock("stopTime > startTime ensures that initial state is stopped"))));
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("cycleInterval").setValue("4"));
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("loop").setValue("true"));
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("stopTime").setValue("1"));
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("children")
                .addChild(new TouchSensorObject().setDEF("ActivateSecondSpinGroup").setDescription("Activate second SpinGroup by clicking blue bar"))
                .addChild(new ShapeObject()
                  .setGeometry(new BoxObject().setSize(Java.to([2,2.05,25], Java.type("float[]"))))
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0,0.3,1], Java.type("float[]")))))));
    X3D0.toFileX3D("../data/Figure31_9SpinGroupPrototype.new.x3d");
