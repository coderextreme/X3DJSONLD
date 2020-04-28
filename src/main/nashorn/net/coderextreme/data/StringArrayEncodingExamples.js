load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setContent("StringArrayEncodingExamples.x3d").setName("title"))
        .addMeta(new metaObject().setContent("Demonstrate simple X3D MFString (string array) encoding.").setName("description"))
        .addMeta(new metaObject().setContent("27 May 2017").setName("created"))
        .addMeta(new metaObject().setContent("27 May 2017").setName("modified"))
        .addMeta(new metaObject().setContent("Don Brutzman").setName("creator"))
        .addMeta(new metaObject().setContent("X3dHeaderPrototypeSyntaxExamples.x3d").setName("reference"))
        .addMeta(new metaObject().setContent("X3D encodings, ISO/IEC 19775-1, Part 1: Architecture and base components, 5 Field type reference, 5.3.14 SFString and MFString").setName("specificationSection"))
        .addMeta(new metaObject().setContent("http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFStringAndMFString").setName("specificationUrl"))
        .addMeta(new metaObject().setContent("X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 5.3.14 SFString and MFString").setName("specificationSection"))
        .addMeta(new metaObject().setContent("http://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/EncodingOfFields.html#SFString").setName("specificationUrl"))
        .addMeta(new metaObject().setContent("X3D encodings, ISO/IEC 19776-2 v3.3, Part 2: Classic VRML encoding, 5.15 SFString and MFString").setName("specificationSection"))
        .addMeta(new metaObject().setContent("http://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/EncodingOfFields.html#SFString").setName("specificationUrl"))
        .addMeta(new metaObject().setContent("http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamples.x3d").setName("identifier"))
        .addMeta(new metaObject().setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit").setName("generator"))
        .addMeta(new metaObject().setContent("../license.html").setName("license")))
      .setScene(new SceneObject()
        .addChild(new ViewpointObject().setDEF("EntryView").setDescription("Hello MFString syntax"))
        .addChild(new BackgroundObject().setSkyColor(Java.to([0.6,1,0.8], Java.type("float[]"))))
        .addChild(new ShapeObject()
          .setGeometry(new TextObject().setString(Java.to(["One, Two, Three","","He said, \"Immel did it!\""], Java.type("java.lang.String[]")))
            .addComments(new CommentsBlock(" alternative XML encoding: Text string='\"One, Two, Three\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"' "))
            .addComments(new CommentsBlock(" alternative Java source: .setString(new String [] {\"One, Two, Three\", \"\", \"He said, \\\"Immel did it!\\\"\"}) "))
            .setFontStyle(new FontStyleObject().setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))).setStyle("BOLD")))
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0.6,0.4,0.2], Java.type("float[]")))))))      ;
    X3D0.toFileX3D("../data/StringArrayEncodingExamples.new.x3d");
