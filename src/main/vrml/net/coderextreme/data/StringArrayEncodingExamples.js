      var X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("StringArrayEncodingExamples.x3d"))
        .addMeta(new meta().setName("description").setContent("Demonstrate simple X3D MFString (string array) encoding."))
        .addMeta(new meta().setName("created").setContent("27 May 2017"))
        .addMeta(new meta().setName("modified").setContent("27 May 2017"))
        .addMeta(new meta().setName("creator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("reference").setContent("X3dHeaderPrototypeSyntaxExamples.x3d"))
        .addMeta(new meta().setName("specificationSection").setContent("X3D encodings, ISO/IEC 19775-1, Part 1: Architecture and base components, 5 Field type reference, 5.3.14 SFString and MFString"))
        .addMeta(new meta().setName("specificationUrl").setContent("http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFStringAndMFString"))
        .addMeta(new meta().setName("specificationSection").setContent("X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 5.3.14 SFString and MFString"))
        .addMeta(new meta().setName("specificationUrl").setContent("http://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/EncodingOfFields.html#SFString"))
        .addMeta(new meta().setName("specificationSection").setContent("X3D encodings, ISO/IEC 19776-2 v3.3, Part 2: Classic VRML encoding, 5.15 SFString and MFString"))
        .addMeta(new meta().setName("specificationUrl").setContent("http://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/EncodingOfFields.html#SFString"))
        .addMeta(new meta().setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamples.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new Viewpoint().setDEF("EntryView").setDescription("Hello MFString syntax"))
        .addChild(new Background().setSkyColor(java.newArray("float", [0.6,1,0.8])))
        .addChild(new Shape()
          .setGeometry(new Text().setString(java.newArray("java.lang.String", ["One, Two, Three","","He said, \"Immel did it!\""]))
            .addComments(new CommentsBlock("alternative XML encoding: Text string='\"One, Two, Three\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'"))
            .addComments(new CommentsBlock("alternative Java source: .setString(new String [] {\"One, Two, Three\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})"))
            .setFontStyle(new FontStyle().setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])).setStyle("BOLD")))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(java.newArray("float", [0.6,0.4,0.2]))))))      ;
    X3D0.toFileX3D("../data/StringArrayEncodingExamples.new.x3d");