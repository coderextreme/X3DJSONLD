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
        .addComponent(new component().setName("Scripting").setLevel(1))
        .addMeta(new meta().setName("title").setContent("flowers2.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("transcriber").setContent("John Carlson"))
        .addMeta(new meta().setName("created").setContent("23 January 2005"))
        .addMeta(new meta().setName("modified").setContent("21 March 2018"))
        .addMeta(new meta().setName("description").setContent("2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d"))
        .addMeta(new meta().setName("generator").setContent("manually written"))
        .addMeta(new meta().setName("license").setContent("http://www.web3d.org/x3d/content/examples/license.html")))
      .setScene(new Scene()
        .addChild(new NavigationInfo())
        .addChild(new Viewpoint().setDescription("Two mathematical orbitals").setPosition(Java.to([0,0,50], Java.type("float[]"))))
        .addChild(new Group().setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]")))
          .addChild(new DirectionalLight().setDirection(Java.to([1,1,1], Java.type("float[]"))))
          .addChild(new ProtoDeclare().setName("orbit")
            .setProtoInterface(new ProtoInterface()
              .addField(new field().setType(field.TYPE_SFVEC3F).setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("-8 0 0"))
              .addField(new field().setType(field.TYPE_SFCOLOR).setName("diffuseColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1 0.5 0"))
              .addField(new field().setType(field.TYPE_SFCOLOR).setName("specularColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1 0.5 0"))
              .addField(new field().setType(field.TYPE_SFFLOAT).setName("transparency").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.75")))
            .setProtoBody(new ProtoBody()
              .addChild(new Group().setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]")))
                .addChild(new TimeSensor().setDEF("Clock").setCycleInterval(16).setLoop(true))
                .addChild(new OrientationInterpolator().setDEF("OrbitPath").setKey(Java.to([0,0.5,1], Java.type("float[]"))).setKeyValue(Java.to([1,0,0,0,1,0,0,3.14,1,0,0,6.28], Java.type("float[]"))))
                .addChild(new Transform().setDEF("OrbitTransform").setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]")))
                  .setIS(new IS()
                    .addConnect(new connect().setNodeField("translation").setProtoField("translation")))
                  .addChild(new Shape().setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]")))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material()
                        .setIS(new IS()
                          .addConnect(new connect().setNodeField("diffuseColor").setProtoField("diffuseColor"))
                          .addConnect(new connect().setNodeField("specularColor").setProtoField("specularColor"))
                          .addConnect(new connect().setNodeField("transparency").setProtoField("transparency")))))
                    .addComments(new CommentsBlock("<IndexedFaceSet DEF=\"Orbit\" creaseAngle=\"0\"> <Coordinate DEF=\"OrbitCoordinates\"/> </IndexedFaceSet>"))
                    .setGeometry(new IndexedFaceSet().setCcw(false).setConvex(false).setCoordIndex(Java.to([0,1,2,-1], Java.type("int[]"))).setDEF("Orbit")
                      .setCoord(new Coordinate().setDEF("OrbitCoordinates").setPoint(Java.to([0,0,1,0,1,0,1,0,0], Java.type("float[]")))))))
                .addChild(new ROUTE().setFromNode("OrbitScript").setFromField("coordIndexes").setToNode("Orbit").setToField("coordIndex"))
                .addChild(new ROUTE().setFromNode("OrbitScript").setFromField("coordinates").setToNode("OrbitCoordinates").setToField("point"))
                .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("OrbitScript").setToField("set_fraction"))
                .addChild(new ROUTE().setFromNode("OrbitPath").setFromField("value_changed").setToNode("OrbitTransform").setToField("rotation"))
                .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("OrbitPath").setToField("set_fraction"))
                .addX3DScript(new X3DScript().setDEF("OrbitScript")
                  .addField(new field().setType(field.TYPE_SFFLOAT).setName("set_fraction").setAccessType(field.ACCESSTYPE_INPUTONLY))
                  .addField(new field().setType(field.TYPE_MFVEC3F).setName("coordinates").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                  .addField(new field().setType(field.TYPE_MFINT32).setName("coordIndexes").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                  .addField(new field().setType(field.TYPE_SFFLOAT).setName("e").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                  .addField(new field().setType(field.TYPE_SFFLOAT).setName("f").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                  .addField(new field().setType(field.TYPE_SFFLOAT).setName("g").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                  .addField(new field().setType(field.TYPE_SFFLOAT).setName("h").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                  .addField(new field().setType(field.TYPE_SFINT32).setName("resolution").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("50"))))))
          .addChild(ProtoInstance0 = new ProtoInstance().setName("orbit"))
          .addChild(ProtoInstance1 = new ProtoInstance().setName("orbit"))))      ;
ProtoInstance0
            .addFieldValue(new fieldValue().setName("translation").setValue("-8 0 0"));
ProtoInstance0
            .addFieldValue(new fieldValue().setName("diffuseColor").setValue("1 0.5 0"));
ProtoInstance0
            .addFieldValue(new fieldValue().setName("specularColor").setValue("1 0.5 0"));
ProtoInstance0
            .addFieldValue(new fieldValue().setName("transparency").setValue("0.75"));
ProtoInstance1
            .addFieldValue(new fieldValue().setName("translation").setValue("8 0 0"));
ProtoInstance1
            .addFieldValue(new fieldValue().setName("diffuseColor").setValue("0 0.5 1"));
ProtoInstance1
            .addFieldValue(new fieldValue().setName("specularColor").setValue("0 0.5 1"));
ProtoInstance1
            .addFieldValue(new fieldValue().setName("transparency").setValue("0.5"));
    X3D0.toFileX3D("../data/flowers2.new.x3d");
