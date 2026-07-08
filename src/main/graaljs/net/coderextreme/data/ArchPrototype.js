load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
ConfigurationProperties.setDeleteIntermediateFiles(false);
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
function doubleToFloat(d) {
    if (Float32Array)
	return new Float32Array(d);
}
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
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("ArchPrototype").setAppinfo("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.js.")
          .setProtoInterface(new ProtoInterface()
            .addComments(new CommentsBlock("COLOR OF ARCH"))
            .addComments(new CommentsBlock("INPUT PARAMETERS"))
            .addComments(new CommentsBlock("General parameters: measures in meters"))
            .addComments(new CommentsBlock("Parameters to create to create shapes related to arch: put true to apply"))
            .addField(new field().setType(field.TYPE_SFCOLOR).setName("diffuseColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("color of arch").setValue("0.2 0.8 0.8"))
            .addField(new field().setType(field.TYPE_SFCOLOR).setName("emissiveColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("color of arch").setValue("0.2 0.8 0.8"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setName("clearSpanWidth").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("clearSpanWidth: clearSpanWidth must be double of riseHeight to obtain an half circumference").setValue("4"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setName("riseHeight").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("riseHeight: riseHeight must be half of clearSpanWidth to obtain an half circumference").setValue("2"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setName("depth").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("depth").setValue("3"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setName("topAbutmentHeight").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("topAbutmentHeight:topAbutmentHeight=0 means no topAbutment").setValue("0.5"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setName("pierWidth").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("pierWidth:pierWidtht=0 means no pierWidth").setValue("0.5"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setName("pierHeight").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("pierHeight: pierHeight=0 means no pierHeight").setValue("1"))
            .addField(new field().setType(field.TYPE_SFBOOL).setName("archHalf").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("archHalf: can modify also clearSpanWidth, riseHeight, depth, pierWidth, pierHeight, topAbutmentHeight, archHalfExtensionWidth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width").setValue("false"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setName("archHalfExtensionWidth").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("archHalfExtensionWidth: measure in meters, use only if archHalf=true, it is the width of the etension of the abutment of the archHalf. See the reference file ArchModelingDiagrams.pdf to find further information.").setValue("0"))
            .addField(new field().setType(field.TYPE_SFBOOL).setName("onlyIntrados").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("onlyIntrados: note it is a flat curved surface, can modify also clearSpanWidth, riseHeight, depth at purpose, if needed apply archHalf=true.").setValue("false"))
            .addField(new field().setType(field.TYPE_SFBOOL).setName("archFilled").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("archFilled: note it is an half cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose.").setValue("false"))
            .addField(new field().setType(field.TYPE_SFBOOL).setName("archHalfFilled").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("archHalfFilled: note it is a quarter cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalfFilled width.").setValue("false"))
            .addField(new field().setType(field.TYPE_SFBOOL).setName("lintel").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("lintel: no arc is rendered, but a lintel: topAbutmentHeight on pierHeight, total height is pierHeight + topAbutmentHeight, if needed apply archHalf=true.").setValue("false")))
          .setProtoBody(new ProtoBody()
            .addComments(new CommentsBlock("First node determines node type of this prototype"))
            .addComments(new CommentsBlock("IndexedFaceset creates arch"))
            .addChild(new Transform().setDEF("ArchTransform")
              .addChild(new Shape().setDEF("Arch")
                .addComments(new CommentsBlock("note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly"))
                .setGeometry(new IndexedFaceSet().setDEF("ArchIndex").setConvex(false).setSolid(false)
                  .setCoord(new Coordinate().setDEF("ArchChord")))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDEF("MaterialNode")
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField("emissiveColor").setProtoField("emissiveColor"))
                      .addConnect(new connect().setNodeField("diffuseColor").setProtoField("diffuseColor")))))))
            .addComments(new CommentsBlock("Subsequent nodes do not render, but still must be a valid X3D subgraph"))
            .addComments(new CommentsBlock("This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs"))
            .addChild(new Script().setDEF("ArchPrototypeScript").setUrl(Java.to(["../node/ArchPrototypeScript.js","https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js"], Java.type("java.lang.String[]")))
              .addComments(new CommentsBlock("INPUT PARAMETERS"))
              .addComments(new CommentsBlock("General parameters"))
              .addComments(new CommentsBlock("Parameters to create to create shapes related to arch: put true to apply"))
              .addComments(new CommentsBlock("OUTPUT PARAMETERS"))
              .addField(new field().setType(field.TYPE_SFFLOAT).setName("clearSpanWidth").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for clearSpanWidth parameter"))
              .addField(new field().setType(field.TYPE_SFFLOAT).setName("riseHeight").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for riseHeight parameter"))
              .addField(new field().setType(field.TYPE_SFFLOAT).setName("depth").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for depth parameter"))
              .addField(new field().setType(field.TYPE_SFFLOAT).setName("topAbutmentHeight").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for topAbutmentHeight parameter"))
              .addField(new field().setType(field.TYPE_SFFLOAT).setName("pierWidth").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for pierWidth parameter"))
              .addField(new field().setType(field.TYPE_SFFLOAT).setName("pierHeight").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for pierHeight parameter"))
              .addField(new field().setType(field.TYPE_SFBOOL).setName("archHalf").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for archHalf parameter"))
              .addField(new field().setType(field.TYPE_SFFLOAT).setName("archHalfExtensionWidth").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for archHalfExtensionWidth parameter"))
              .addField(new field().setType(field.TYPE_SFBOOL).setName("onlyIntrados").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for onlyIntrados parameter"))
              .addField(new field().setType(field.TYPE_SFBOOL).setName("archFilled").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for archFilled parameter"))
              .addField(new field().setType(field.TYPE_SFBOOL).setName("archHalfFilled").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for archHalfFilled parameter"))
              .addField(new field().setType(field.TYPE_SFBOOL).setName("lintel").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for lintel parameter"))
              .addField(new field().setType(field.TYPE_SFVEC3F).setName("computedScale").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth"))
              .addField(new field().setType(field.TYPE_MFVEC3F).setName("pointOut").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("send computed points to the Coordinate node"))
              .addField(new field().setType(field.TYPE_MFINT32).setName("indexOut").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("send computed indices to the IndexedFaceSet node"))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("clearSpanWidth").setProtoField("clearSpanWidth"))
                .addConnect(new connect().setNodeField("riseHeight").setProtoField("riseHeight"))
                .addConnect(new connect().setNodeField("depth").setProtoField("depth"))
                .addConnect(new connect().setNodeField("pierWidth").setProtoField("pierWidth"))
                .addConnect(new connect().setNodeField("topAbutmentHeight").setProtoField("topAbutmentHeight"))
                .addConnect(new connect().setNodeField("pierHeight").setProtoField("pierHeight"))
                .addConnect(new connect().setNodeField("archHalf").setProtoField("archHalf"))
                .addConnect(new connect().setNodeField("archHalfExtensionWidth").setProtoField("archHalfExtensionWidth"))
                .addConnect(new connect().setNodeField("onlyIntrados").setProtoField("onlyIntrados"))
                .addConnect(new connect().setNodeField("archFilled").setProtoField("archFilled"))
                .addConnect(new connect().setNodeField("archHalfFilled").setProtoField("archHalfFilled"))
                .addConnect(new connect().setNodeField("lintel").setProtoField("lintel"))))
            .addChild(new ROUTE().setFromField("computedScale").setFromNode("ArchPrototypeScript").setToField("scale").setToNode("ArchTransform"))
            .addChild(new ROUTE().setFromField("pointOut").setFromNode("ArchPrototypeScript").setToField("point").setToNode("ArchChord"))
            .addChild(new ROUTE().setFromField("indexOut").setFromNode("ArchPrototypeScript").setToField("set_coordIndex").setToNode("ArchIndex"))))
        .addChild(ProtoInstance0 = new ProtoInstance().setName("ArchPrototype").setDEF("ArchInstance"))
        .addComments(new CommentsBlock("Add any ROUTEs here that connect ProtoInstance to/from prior nodes in Scene (and outside of ProtoDeclare)"))
        .addChild(new Inline().setDEF("CoordinateAxes").setUrl(Java.to(["../data/CoordinateAxes.x3d"], Java.type("java.lang.String[]")))))      ;
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
    X3D0.toFileX3D("../data/ArchPrototype.new.graal.x3d");
    X3D0.toFileJSON("../data/ArchPrototype.new.graal.x3dj");
