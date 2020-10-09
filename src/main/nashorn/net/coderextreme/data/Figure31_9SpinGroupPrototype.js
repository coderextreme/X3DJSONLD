load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("3.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("Figure31_9SpinGroupPrototype.x3d"))
        .addMeta(new meta().setName("creator").setContent("Figure 31.9, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland"))
        .addMeta(new meta().setName("reference").setContent("http://www.wiley.com/legacy/compbooks/vrml2sbk/ch31/31fig09.htm"))
        .addMeta(new meta().setName("translator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("24 October 2000"))
        .addMeta(new meta().setName("modified").setContent("20 October 2019"))
        .addMeta(new meta().setName("description").setContent("The SpinGroup prototype is used to automatically spin a group of three long rectangular boxes. Click on blue crossbar to activate second SpinGroup."))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_9SpinGroupPrototype.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("Figure31_9SpinGroupPrototype.x3d"))
        .addChild(new ProtoDeclare().setName("SpinGroup")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_MFNODE).setName("children").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
              .addComments(new CommentsBlock("NULL node initialization")))
            .addField(new field().setType(field.TYPE_SFTIME).setName("cycleInterval").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1"))
            .addField(new field().setType(field.TYPE_SFBOOL).setName("loop").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("false"))
            .addField(new field().setType(field.TYPE_SFTIME).setName("startTime").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
            .addField(new field().setType(field.TYPE_SFTIME).setName("stopTime").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform().setDEF("SpinGroupTransform")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("children").setProtoField("children"))))
            .addComments(new CommentsBlock("following nodes will not be rendered, only the first node of a ProtoBody is drawn"))
            .addChild(new TimeSensor().setDEF("SpinGroupClock")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("cycleInterval").setProtoField("cycleInterval"))
                .addConnect(new connect().setNodeField("loop").setProtoField("loop"))
                .addConnect(new connect().setNodeField("startTime").setProtoField("startTime"))
                .addConnect(new connect().setNodeField("stopTime").setProtoField("stopTime"))))
            .addChild(new OrientationInterpolator().setDEF("Spinner").setKey(Java.to([0,0.5,1], Java.type("float[]"))).setKeyValue(Java.to([0,1,0,0,0,1,0,3.14,0,1,0,6.28], Java.type("float[]"))))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("SpinGroupClock").setToField("set_fraction").setToNode("Spinner"))
            .addChild(new ROUTE().setFromField("value_changed").setFromNode("Spinner").setToField("set_rotation").setToNode("SpinGroupTransform"))))
        .addComments(new CommentsBlock("Now the scene proper begins. Nothing renders in a ProtoDeclare (or ExternProtoDeclare)."))
        .addChild(new Viewpoint().setDescription("Click on blue crossbar to activate second SpinGroup").setOrientation(Java.to([1,0,0,-0.52], Java.type("float[]"))).setPosition(Java.to([0,18,30], Java.type("float[]"))))
        .addComments(new CommentsBlock("Create an instance, meaning actual nodes that render"))
        .addChild(ProtoInstance0 = new ProtoInstance().setName("SpinGroup"))
        .addChild(new ROUTE().setFromField("touchTime").setFromNode("ActivateSecondSpinGroup").setToField("startTime").setToNode("SecondSpinGroup")))      ;
ProtoInstance0
          .addFieldValue(new fieldValue().setName("cycleInterval").setValue("8"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("loop").setValue("true"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("children")
            .addChild(new Shape()
              .setGeometry(new Box().setSize(Java.to([25,2,2], Java.type("float[]"))))
              .setAppearance(new Appearance().setDEF("Green")
                .setMaterial(new Material().setDiffuseColor(Java.to([0,1,0.3], Java.type("float[]"))))))
            .addChild(new Shape()
              .setGeometry(new Box().setSize(Java.to([2,25,2], Java.type("float[]"))))
              .setAppearance(new Appearance().setUSE("Green")))
            .addChild(ProtoInstance1 = new ProtoInstance().setName("SpinGroup").setDEF("SecondSpinGroup")
              .addComments(new CommentsBlock("stopTime > startTime ensures that initial state is stopped"))));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("cycleInterval").setValue("4"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("loop").setValue("true"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("stopTime").setValue("1"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("children")
                .addChild(new TouchSensor().setDEF("ActivateSecondSpinGroup").setDescription("Activate second SpinGroup by clicking blue bar"))
                .addChild(new Shape()
                  .setGeometry(new Box().setSize(Java.to([2,2.05,25], Java.type("float[]"))))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(Java.to([0,0.3,1], Java.type("float[]")))))));
    X3D0.toFileX3D("../data/Figure31_9SpinGroupPrototype.new.x3d");
