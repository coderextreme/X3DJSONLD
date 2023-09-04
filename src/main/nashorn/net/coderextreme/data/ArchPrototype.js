load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("ArchPrototype.x3d"))
        .addMeta(new meta().setName("description").setContent("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js."))
        .addMeta(new meta().setName("description").setContent("Possibility to create shapes related to arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information."))
        .addMeta(new meta().setName("creator").setContent("Michele Foti, Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("15 December 2014"))
        .addMeta(new meta().setName("modified").setContent("27 November 2015"))
        .addMeta(new meta().setName("reference").setContent("ArchModelingDiagrams.pdf"))
        .addMeta(new meta().setName("reference").setContent("https://en.wikipedia.org/wiki/Arch"))
        .addMeta(new meta().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchPrototype.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("ArchPrototype")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("diffuseColor").setValue("0.2 0.8 0.8"))
            .addField(new field().setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("emissiveColor").setValue("0.2 0.8 0.8"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("clearSpanWidth").setValue("4"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("riseHeight").setValue("2"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("depth").setValue("3"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("topAbutmentHeight").setValue("0.5"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("pierWidth").setValue("0.5"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("pierHeight").setValue("1"))
            .addField(new field().setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("archHalf"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("archHalfExtensionWidth"))
            .addField(new field().setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("onlyIntrados"))
            .addField(new field().setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("archFilled"))
            .addField(new field().setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("archHalfFilled"))
            .addField(new field().setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("lintel")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform().setDEF("ArchTransform")
              .addChild(new Shape().setDEF("Arch")
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDEF("MaterialNode")
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField("diffuseColor").setProtoField("diffuseColor"))
                      .addConnect(new connect().setNodeField("emissiveColor").setProtoField("emissiveColor")))))
                .setGeometry(new IndexedFaceSet().setDEF("ArchIndex").setSolid(false).setConvex(false)
                  .setCoord(new Coordinate().setDEF("ArchChord")))))
            .addChild(new Script().setDEF("ArchPrototypeScript").setUrl(Java.to(["../node/ArchPrototypeScript.js","https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js"], Java.type("java.lang.String[]")))
              .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("clearSpanWidth"))
              .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("riseHeight"))
              .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("depth"))
              .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("topAbutmentHeight"))
              .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("pierWidth"))
              .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("pierHeight"))
              .addField(new field().setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("archHalf"))
              .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("archHalfExtensionWidth"))
              .addField(new field().setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("onlyIntrados"))
              .addField(new field().setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("archFilled"))
              .addField(new field().setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("archHalfFilled"))
              .addField(new field().setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("lintel"))
              .addField(new field().setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("computedScale"))
              .addField(new field().setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("pointOut"))
              .addField(new field().setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("indexOut"))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("clearSpanWidth").setProtoField("clearSpanWidth"))
                .addConnect(new connect().setNodeField("riseHeight").setProtoField("riseHeight"))
                .addConnect(new connect().setNodeField("depth").setProtoField("depth"))
                .addConnect(new connect().setNodeField("topAbutmentHeight").setProtoField("topAbutmentHeight"))
                .addConnect(new connect().setNodeField("pierWidth").setProtoField("pierWidth"))
                .addConnect(new connect().setNodeField("pierHeight").setProtoField("pierHeight"))
                .addConnect(new connect().setNodeField("archHalf").setProtoField("archHalf"))
                .addConnect(new connect().setNodeField("archHalfExtensionWidth").setProtoField("archHalfExtensionWidth"))
                .addConnect(new connect().setNodeField("onlyIntrados").setProtoField("onlyIntrados"))
                .addConnect(new connect().setNodeField("archFilled").setProtoField("archFilled"))
                .addConnect(new connect().setNodeField("archHalfFilled").setProtoField("archHalfFilled"))
                .addConnect(new connect().setNodeField("lintel").setProtoField("lintel"))))
            .addChild(new ROUTE().setFromNode("ArchPrototypeScript").setFromField("computedScale").setToNode("ArchTransform").setToField("scale"))
            .addChild(new ROUTE().setFromNode("ArchPrototypeScript").setFromField("pointOut").setToNode("ArchChord").setToField("point"))
            .addChild(new ROUTE().setFromNode("ArchPrototypeScript").setFromField("indexOut").setToNode("ArchIndex").setToField("set_coordIndex"))))
        .addChild(ProtoInstance0 = new ProtoInstance().setDEF("ArchInstance").setName("ArchPrototype"))
        .addChild(new Inline().setDEF("CoordinateAxes").setGlobal(true).setUrl(Java.to(["../data/CoordinateAxes.x3d"], Java.type("java.lang.String[]")))))      ;
ProtoInstance0
          .addFieldValue(new fieldValue().setName("diffuseColor").setValue("0.5 0.3 0.6"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("emissiveColor").setValue("0.5 0.3 0.6"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("clearSpanWidth").setValue("5"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("riseHeight").setValue("2.5"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("depth").setValue("2"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("topAbutmentHeight").setValue("0.6"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("pierWidth").setValue("1"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("pierHeight").setValue("2"));
    X3D0.toFileJSON("../data/ArchPrototype.new.graal.json");
