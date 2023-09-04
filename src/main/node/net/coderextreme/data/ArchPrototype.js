var java = require('java');
var util = require('util');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: util.promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
var autoclass = require('../../../X3Dautoclass');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("title").setContent("ArchPrototype.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js."))
        .addMeta((new autoclass.meta()).setName("description").setContent("Possibility to create shapes related to arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information."))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Michele Foti, Don Brutzman"))
        .addMeta((new autoclass.meta()).setName("created").setContent("15 December 2014"))
        .addMeta((new autoclass.meta()).setName("modified").setContent("27 November 2015"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("ArchModelingDiagrams.pdf"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("https://en.wikipedia.org/wiki/Arch"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchPrototype.x3d"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.ProtoDeclare()).setName("ArchPrototype")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFCOLOR).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("diffuseColor").setValue("0.2 0.8 0.8"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFCOLOR).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("emissiveColor").setValue("0.2 0.8 0.8"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("clearSpanWidth").setValue("4"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("riseHeight").setValue("2"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("depth").setValue("3"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("topAbutmentHeight").setValue("0.5"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("pierWidth").setValue("0.5"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("pierHeight").setValue("1"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("archHalf"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("archHalfExtensionWidth"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("onlyIntrados"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("archFilled"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("archHalfFilled"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("lintel")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Transform()).setDEF("ArchTransform")
              .addChild((new autoclass.Shape()).setDEF("Arch")
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setDEF("MaterialNode")
                    .setIS((new autoclass.IS())
                      .addConnect((new autoclass.connect()).setNodeField("diffuseColor").setProtoField("diffuseColor"))
                      .addConnect((new autoclass.connect()).setNodeField("emissiveColor").setProtoField("emissiveColor")))))
                .setGeometry((new autoclass.IndexedFaceSet()).setDEF("ArchIndex").setSolid(false).setConvex(false)
                  .setCoord((new autoclass.Coordinate()).setDEF("ArchChord")))))
            .addChild((new autoclass.Script()).setDEF("ArchPrototypeScript").setUrl(java.newArray("java.lang.String", ["../node/ArchPrototypeScript.js","https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js"]))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("clearSpanWidth"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("riseHeight"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("depth"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("topAbutmentHeight"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("pierWidth"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("pierHeight"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("archHalf"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("archHalfExtensionWidth"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("onlyIntrados"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("archFilled"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("archHalfFilled"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("lintel"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setName("computedScale"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setName("pointOut"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFINT32).setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setName("indexOut"))
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("clearSpanWidth").setProtoField("clearSpanWidth"))
                .addConnect((new autoclass.connect()).setNodeField("riseHeight").setProtoField("riseHeight"))
                .addConnect((new autoclass.connect()).setNodeField("depth").setProtoField("depth"))
                .addConnect((new autoclass.connect()).setNodeField("topAbutmentHeight").setProtoField("topAbutmentHeight"))
                .addConnect((new autoclass.connect()).setNodeField("pierWidth").setProtoField("pierWidth"))
                .addConnect((new autoclass.connect()).setNodeField("pierHeight").setProtoField("pierHeight"))
                .addConnect((new autoclass.connect()).setNodeField("archHalf").setProtoField("archHalf"))
                .addConnect((new autoclass.connect()).setNodeField("archHalfExtensionWidth").setProtoField("archHalfExtensionWidth"))
                .addConnect((new autoclass.connect()).setNodeField("onlyIntrados").setProtoField("onlyIntrados"))
                .addConnect((new autoclass.connect()).setNodeField("archFilled").setProtoField("archFilled"))
                .addConnect((new autoclass.connect()).setNodeField("archHalfFilled").setProtoField("archHalfFilled"))
                .addConnect((new autoclass.connect()).setNodeField("lintel").setProtoField("lintel"))))
            .addChild((new autoclass.ROUTE()).setFromNode("ArchPrototypeScript").setFromField("computedScale").setToNode("ArchTransform").setToField("scale"))
            .addChild((new autoclass.ROUTE()).setFromNode("ArchPrototypeScript").setFromField("pointOut").setToNode("ArchChord").setToField("point"))
            .addChild((new autoclass.ROUTE()).setFromNode("ArchPrototypeScript").setFromField("indexOut").setToNode("ArchIndex").setToField("set_coordIndex"))))
        .addChild(ProtoInstance0 = (new autoclass.ProtoInstance()).setDEF("ArchInstance").setName("ArchPrototype"))
        .addChild((new autoclass.Inline()).setDEF("CoordinateAxes").setGlobal(true).setUrl(java.newArray("java.lang.String", ["../data/CoordinateAxes.x3d"]))))      ;
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("diffuseColor").setValue("0.5 0.3 0.6"));
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("emissiveColor").setValue("0.5 0.3 0.6"));
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("clearSpanWidth").setValue("5"));
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("riseHeight").setValue("2.5"));
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("depth").setValue("2"));
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("topAbutmentHeight").setValue("0.6"));
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("pierWidth").setValue("1"));
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("pierHeight").setValue("2"));
    X3D0.toFileX3D("../data/ArchPrototype.new.node.x3d");
    process.exit(0);
