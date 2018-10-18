var java = require('java');
var autoclass = require('../../../X3Dautoclass.js');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroesSync(true);
var ProtoInstance0 = null;
      var X3D0 =  new autoclass.X3D().setProfileSync("Immersive").setVersionSync("3.3")
      .setHeadSync(new autoclass.head()
        .addMetaSync(new autoclass.meta().setNameSync("title").setContentSync("ArchPrototype.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js."))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("Possibility to create shapes related to arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information."))
        .addMetaSync(new autoclass.meta().setNameSync("creator").setContentSync("Michele Foti, Don Brutzman"))
        .addMetaSync(new autoclass.meta().setNameSync("created").setContentSync("15 December 2014"))
        .addMetaSync(new autoclass.meta().setNameSync("modified").setContentSync("27 November 2015"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("ArchModelingDiagrams.pdf"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("https://en.wikipedia.org/wiki/Arch"))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchPrototype.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("generator").setContentSync("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMetaSync(new autoclass.meta().setNameSync("license").setContentSync("../license.html")))
      .setSceneSync(new autoclass.Scene()
        .addChildSync(new autoclass.ProtoDeclare().setNameSync("ArchPrototype").setAppinfoSync("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.js.")
          .setProtoInterfaceSync(new autoclass.ProtoInterface()
            .addCommentsSync(new autoclass.CommentsBlock("COLOR OF ARCH"))
            .addCommentsSync(new autoclass.CommentsBlock("INPUT PARAMETERS"))
            .addCommentsSync(new autoclass.CommentsBlock("General parameters: measures in meters"))
            .addCommentsSync(new autoclass.CommentsBlock("Parameters to create to create shapes related to arch: put true to apply"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFCOLOR).setNameSync("diffuseColor").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("color of arch").setValueSync("0.2 0.8 0.8"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFCOLOR).setNameSync("emissiveColor").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("color of arch").setValueSync("0.2 0.8 0.8"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("clearSpanWidth").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("clearSpanWidth: clearSpanWidth must be double of riseHeight to obtain an half circumference").setValueSync("4"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("riseHeight").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("riseHeight: riseHeight must be half of clearSpanWidth to obtain an half circumference").setValueSync("2"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("depth").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("depth").setValueSync("3"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("topAbutmentHeight").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("topAbutmentHeight:topAbutmentHeight=0 means no topAbutment").setValueSync("0.5"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("pierWidth").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("pierWidth:pierWidtht=0 means no pierWidth").setValueSync("0.5"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("pierHeight").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("pierHeight: pierHeight=0 means no pierHeight").setValueSync("1"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("archHalf").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("archHalf: can modify also clearSpanWidth, riseHeight, depth, pierWidth, pierHeight, topAbutmentHeight, archHalfExtensionWidth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width").setValueSync("false"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("archHalfExtensionWidth").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("archHalfExtensionWidth: measure in meters, use only if archHalf=true, it is the width of the etension of the abutment of the archHalf. See the reference file ArchModelingDiagrams.pdf to find further information.").setValueSync("0"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("onlyIntrados").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("onlyIntrados: note it is a flat curved surface, can modify also clearSpanWidth, riseHeight, depth at purpose, if needed apply archHalf=true.").setValueSync("false"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("archFilled").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("archFilled: note it is an half cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose.").setValueSync("false"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("archHalfFilled").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("archHalfFilled: note it is a quarter cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalfFilled width.").setValueSync("false"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("lintel").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("lintel: no arc is rendered, but a lintel: topAbutmentHeight on pierHeight, total height is pierHeight + topAbutmentHeight, if needed apply archHalf=true.").setValueSync("false")))
          .setProtoBodySync(new autoclass.ProtoBody()
            .addCommentsSync(new autoclass.CommentsBlock("First node determines node type of this prototype"))
            .addCommentsSync(new autoclass.CommentsBlock("IndexedFaceset creates arch"))
            .addChildSync(new autoclass.Transform().setDEFSync("ArchTransform")
              .addChildSync(new autoclass.Shape().setDEFSync("Arch")
                .addCommentsSync(new autoclass.CommentsBlock("note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly"))
                .setGeometrySync(new autoclass.IndexedFaceSet().setDEFSync("ArchIndex").setConvexSync(false).setSolidSync(false)
                  .setCoordSync(new autoclass.Coordinate().setDEFSync("ArchChord")))
                .setAppearanceSync(new autoclass.Appearance()
                  .setMaterialSync(new autoclass.Material().setDEFSync("MaterialNode")
                    .setISSync(new autoclass.IS()
                      .addConnectSync(new autoclass.connect().setNodeFieldSync("emissiveColor").setProtoFieldSync("emissiveColor"))
                      .addConnectSync(new autoclass.connect().setNodeFieldSync("diffuseColor").setProtoFieldSync("diffuseColor")))))))
            .addCommentsSync(new autoclass.CommentsBlock("Subsequent nodes do not render, but still must be a valid X3D subgraph"))
            .addCommentsSync(new autoclass.CommentsBlock("This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs"))
            .addChildSync(new autoclass.Script().setDEFSync("ArchPrototypeScript").setUrlSync(java.newArray("java.lang.String", ["../node/ArchPrototypeScript.js","https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js"]))
              .addCommentsSync(new autoclass.CommentsBlock("INPUT PARAMETERS"))
              .addCommentsSync(new autoclass.CommentsBlock("General parameters"))
              .addCommentsSync(new autoclass.CommentsBlock("Parameters to create to create shapes related to arch: put true to apply"))
              .addCommentsSync(new autoclass.CommentsBlock("OUTPUT PARAMETERS"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("clearSpanWidth").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("user or default input for clearSpanWidth parameter"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("riseHeight").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("user or default input for riseHeight parameter"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("depth").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("user or default input for depth parameter"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("topAbutmentHeight").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("user or default input for topAbutmentHeight parameter"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("pierWidth").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("user or default input for pierWidth parameter"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("pierHeight").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("user or default input for pierHeight parameter"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("archHalf").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("user or default input for archHalf parameter"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFFLOAT).setNameSync("archHalfExtensionWidth").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("user or default input for archHalfExtensionWidth parameter"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("onlyIntrados").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("user or default input for onlyIntrados parameter"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("archFilled").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("user or default input for archFilled parameter"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("archHalfFilled").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("user or default input for archHalfFilled parameter"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("lintel").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("user or default input for lintel parameter"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("computedScale").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfoSync("computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFVEC3F).setNameSync("pointOut").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfoSync("send computed points to the Coordinate node"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFINT32).setNameSync("indexOut").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfoSync("send computed indices to the IndexedFaceSet node"))
              .setISSync(new autoclass.IS()
                .addConnectSync(new autoclass.connect().setNodeFieldSync("clearSpanWidth").setProtoFieldSync("clearSpanWidth"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("riseHeight").setProtoFieldSync("riseHeight"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("depth").setProtoFieldSync("depth"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("pierWidth").setProtoFieldSync("pierWidth"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("topAbutmentHeight").setProtoFieldSync("topAbutmentHeight"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("pierHeight").setProtoFieldSync("pierHeight"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("archHalf").setProtoFieldSync("archHalf"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("archHalfExtensionWidth").setProtoFieldSync("archHalfExtensionWidth"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("onlyIntrados").setProtoFieldSync("onlyIntrados"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("archFilled").setProtoFieldSync("archFilled"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("archHalfFilled").setProtoFieldSync("archHalfFilled"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("lintel").setProtoFieldSync("lintel"))))
            .addChildSync(new autoclass.ROUTE().setFromFieldSync("computedScale").setFromNodeSync("ArchPrototypeScript").setToFieldSync("scale").setToNodeSync("ArchTransform"))
            .addChildSync(new autoclass.ROUTE().setFromFieldSync("pointOut").setFromNodeSync("ArchPrototypeScript").setToFieldSync("point").setToNodeSync("ArchChord"))
            .addChildSync(new autoclass.ROUTE().setFromFieldSync("indexOut").setFromNodeSync("ArchPrototypeScript").setToFieldSync("set_coordIndex").setToNodeSync("ArchIndex"))))
        .addChildSync(ProtoInstance0 = new autoclass.ProtoInstance().setNameSync("ArchPrototype").setDEFSync("ArchInstance"))
        .addCommentsSync(new autoclass.CommentsBlock("Add any ROUTEs here that connect ProtoInstance to/from prior nodes in Scene (and outside of ProtoDeclare)"))
        .addChildSync(new autoclass.Inline().setDEFSync("CoordinateAxes").setUrlSync(java.newArray("java.lang.String", ["../data/CoordinateAxes.x3d"]))))      ;
ProtoInstance0
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("diffuseColor").setValueSync("0.5 0.3 0.6"));
ProtoInstance0
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("emissiveColor").setValueSync("0.5 0.3 0.6"));
ProtoInstance0
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("clearSpanWidth").setValueSync("5"));
ProtoInstance0
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("riseHeight").setValueSync("2.5"));
ProtoInstance0
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("depth").setValueSync("2"));
ProtoInstance0
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("topAbutmentHeight").setValueSync("0.6"));
ProtoInstance0
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("pierWidth").setValueSync("1"));
ProtoInstance0
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("pierHeight").setValueSync("2"));
    X3D0.toFileX3D("../data/ArchPrototype.new.x3d");
