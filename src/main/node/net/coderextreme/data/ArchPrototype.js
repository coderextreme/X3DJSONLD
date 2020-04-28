var java = require('java');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: require('util').promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
var autoclass = require('../../../X3Dautoclass');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setContent("ArchPrototype.x3d").setName("title"))
        .addMeta((new autoclass.meta()).setContent("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.").setName("description"))
        .addMeta((new autoclass.meta()).setContent("Possibility to create shapes related to arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information.").setName("description"))
        .addMeta((new autoclass.meta()).setContent("Michele Foti, Don Brutzman").setName("creator"))
        .addMeta((new autoclass.meta()).setContent("15 December 2014").setName("created"))
        .addMeta((new autoclass.meta()).setContent("27 November 2015").setName("modified"))
        .addMeta((new autoclass.meta()).setContent("ArchModelingDiagrams.pdf").setName("reference"))
        .addMeta((new autoclass.meta()).setContent("https://en.wikipedia.org/wiki/Arch").setName("reference"))
        .addMeta((new autoclass.meta()).setContent("http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchPrototype.x3d").setName("identifier"))
        .addMeta((new autoclass.meta()).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit").setName("generator"))
        .addMeta((new autoclass.meta()).setContent("../license.html").setName("license")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.ProtoDeclare()).setAppinfo("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.js.").setName("ArchPrototype")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addComments((new autoclass.CommentsBlock(" COLOR OF ARCH ")))
            .addComments((new autoclass.CommentsBlock(" INPUT PARAMETERS ")))
            .addComments((new autoclass.CommentsBlock(" General parameters: measures in meters ")))
            .addComments((new autoclass.CommentsBlock(" Parameters to create to create shapes related to arch: put true to apply ")))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFCOLOR).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("color of arch").setName("diffuseColor").setValue("0.2 0.8 0.8"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFCOLOR).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("color of arch").setName("emissiveColor").setValue("0.2 0.8 0.8"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("clearSpanWidth: clearSpanWidth must be double of riseHeight to obtain an half circumference").setName("clearSpanWidth").setValue("4"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("riseHeight: riseHeight must be half of clearSpanWidth to obtain an half circumference").setName("riseHeight").setValue("2"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("depth").setName("depth").setValue("3"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("topAbutmentHeight:topAbutmentHeight=0 means no topAbutment").setName("topAbutmentHeight").setValue("0.5"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("pierWidth:pierWidtht=0 means no pierWidth").setName("pierWidth").setValue("0.5"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("pierHeight: pierHeight=0 means no pierHeight").setName("pierHeight").setValue("1"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("archHalf: can modify also clearSpanWidth, riseHeight, depth, pierWidth, pierHeight, topAbutmentHeight, archHalfExtensionWidth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width").setName("archHalf").setValue("false"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("archHalfExtensionWidth: measure in meters, use only if archHalf=true, it is the width of the etension of the abutment of the archHalf. See the reference file ArchModelingDiagrams.pdf to find further information.").setName("archHalfExtensionWidth").setValue("0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("onlyIntrados: note it is a flat curved surface, can modify also clearSpanWidth, riseHeight, depth at purpose, if needed apply archHalf=true.").setName("onlyIntrados").setValue("false"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("archFilled: note it is an half cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose.").setName("archFilled").setValue("false"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("archHalfFilled: note it is a quarter cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalfFilled width.").setName("archHalfFilled").setValue("false"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("lintel: no arc is rendered, but a lintel: topAbutmentHeight on pierHeight, total height is pierHeight + topAbutmentHeight, if needed apply archHalf=true.").setName("lintel").setValue("false")))
          .setProtoBody((new autoclass.ProtoBody())
            .addComments((new autoclass.CommentsBlock(" First node determines node type of this prototype ")))
            .addComments((new autoclass.CommentsBlock(" IndexedFaceset creates arch ")))
            .addChild((new autoclass.Transform()).setDEF("ArchTransform")
              .addChild((new autoclass.Shape()).setDEF("Arch")
                .addComments((new autoclass.CommentsBlock(" note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly ")))
                .setGeometry((new autoclass.IndexedFaceSet()).setDEF("ArchIndex").setConvex(false).setCreaseAngle(java.newFloat(0)).setSolid(false)
                  .setCoord((new autoclass.Coordinate()).setDEF("ArchChord")))
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setDEF("MaterialNode")
                    .setIS((new autoclass.IS())
                      .addConnect((new autoclass.connect()).setNodeField("emissiveColor").setProtoField("emissiveColor"))
                      .addConnect((new autoclass.connect()).setNodeField("diffuseColor").setProtoField("diffuseColor")))))))
            .addComments((new autoclass.CommentsBlock(" Subsequent nodes do not render, but still must be a valid X3D subgraph ")))
            .addComments((new autoclass.CommentsBlock(" This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs ")))
            .addChild((new autoclass.Script()).setDEF("ArchPrototypeScript").setUrl(java.newArray("java.lang.String", ["../node/ArchPrototypeScript.js","https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js"]))
              .addComments((new autoclass.CommentsBlock(" INPUT PARAMETERS ")))
              .addComments((new autoclass.CommentsBlock(" General parameters ")))
              .addComments((new autoclass.CommentsBlock(" Parameters to create to create shapes related to arch: put true to apply ")))
              .addComments((new autoclass.CommentsBlock(" OUTPUT PARAMETERS ")))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for clearSpanWidth parameter").setName("clearSpanWidth"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for riseHeight parameter").setName("riseHeight"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for depth parameter").setName("depth"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for topAbutmentHeight parameter").setName("topAbutmentHeight"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for pierWidth parameter").setName("pierWidth"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for pierHeight parameter").setName("pierHeight"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for archHalf parameter").setName("archHalf"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for archHalfExtensionWidth parameter").setName("archHalfExtensionWidth"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for onlyIntrados parameter").setName("onlyIntrados"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for archFilled parameter").setName("archFilled"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for archHalfFilled parameter").setName("archHalfFilled"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for lintel parameter").setName("lintel"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfo("computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth").setName("computedScale"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfo("send computed points to the Coordinate node").setName("pointOut"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFINT32).setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfo("send computed indices to the IndexedFaceSet node").setName("indexOut"))
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("clearSpanWidth").setProtoField("clearSpanWidth"))
                .addConnect((new autoclass.connect()).setNodeField("riseHeight").setProtoField("riseHeight"))
                .addConnect((new autoclass.connect()).setNodeField("depth").setProtoField("depth"))
                .addConnect((new autoclass.connect()).setNodeField("pierWidth").setProtoField("pierWidth"))
                .addConnect((new autoclass.connect()).setNodeField("topAbutmentHeight").setProtoField("topAbutmentHeight"))
                .addConnect((new autoclass.connect()).setNodeField("pierHeight").setProtoField("pierHeight"))
                .addConnect((new autoclass.connect()).setNodeField("archHalf").setProtoField("archHalf"))
                .addConnect((new autoclass.connect()).setNodeField("archHalfExtensionWidth").setProtoField("archHalfExtensionWidth"))
                .addConnect((new autoclass.connect()).setNodeField("onlyIntrados").setProtoField("onlyIntrados"))
                .addConnect((new autoclass.connect()).setNodeField("archFilled").setProtoField("archFilled"))
                .addConnect((new autoclass.connect()).setNodeField("archHalfFilled").setProtoField("archHalfFilled"))
                .addConnect((new autoclass.connect()).setNodeField("lintel").setProtoField("lintel"))))
            .addChild((new autoclass.ROUTE()).setFromField("computedScale").setFromNode("ArchPrototypeScript").setToField("scale").setToNode("ArchTransform"))
            .addChild((new autoclass.ROUTE()).setFromField("pointOut").setFromNode("ArchPrototypeScript").setToField("point").setToNode("ArchChord"))
            .addChild((new autoclass.ROUTE()).setFromField("indexOut").setFromNode("ArchPrototypeScript").setToField("set_coordIndex").setToNode("ArchIndex"))))
        .addChild(ProtoInstance0 = (new autoclass.ProtoInstance()).setDEF("ArchInstance").setName("ArchPrototype"))
        .addComments((new autoclass.CommentsBlock(" Add any ROUTEs here that connect ProtoInstance to/from prior nodes in Scene (and outside of ProtoDeclare) ")))
        .addChild((new autoclass.Inline()).setDEF("CoordinateAxes").setUrl(java.newArray("java.lang.String", ["../data/CoordinateAxes.x3d"]))))      ;
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
    X3D0.toFileX3D("../data/ArchPrototype.new.x3d");
