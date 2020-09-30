load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("TextSpecialCharacters.x3d"))
        .addMeta(new meta().setName("description").setContent("Text node demonstration of quotation, apostrophe, ampersand and backslash characters using X3D MFString escaping for XML character entities"))
        .addMeta(new meta().setName("creator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("12 July 2008"))
        .addMeta(new meta().setName("modified").setContent("2 April 2017"))
        .addMeta(new meta().setName("reference").setContent("Character entity references in HTML 4"))
        .addMeta(new meta().setName("reference").setContent("http://www.w3.org/TR/REC-html40/sgml/entities.html"))
        .addMeta(new meta().setName("rights").setContent("Copyright (c) Don Brutzman and Leonard Daly, 2008"))
        .addMeta(new meta().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter02GeometryPrimitives/TextSpecialCharacters.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new Background().setSkyColor(Java.to([1,1,1], Java.type("float[]"))).setTransparency(0))
        .addChild(new Viewpoint().setDescription("Default View").setPosition(Java.to([0,0,15], Java.type("float[]"))))
        .addChild(new Shape().setBboxCenter(Java.to([0,0,0], Java.type("float[]"))).setBboxSize(Java.to([-1,-1,-1], Java.type("float[]")))
          .addComments(new CommentsBlock("Empty string \"\" means to skip a line"))
          .addComments(new CommentsBlock("The ampersand escape characters are based on XML rules"))
          .addComments(new CommentsBlock("apostrophe ' is &apos; and needs to be escaped in single-quote delimiters used for string='value' attribute"))
          .addComments(new CommentsBlock("ampersand & is &amp; and needs to be escaped"))
          .addComments(new CommentsBlock("quotation \" is &quot; and isn't needed if single-quote delimiters used for string='value' attribute"))
          .addComments(new CommentsBlock("quotation \" can be used within an X3D string if escaped with backslash \\ as \\\"\""))
          .addComments(new CommentsBlock("backslash \\ is used as escape character for \" (and itself) in X3D"))
          .addComments(new CommentsBlock("character entities are listed in HTML specification and are good for any XML"))
          .setGeometry(new Text().setDEF("DefaultText").setString(Java.to(["Character entity substitutions:","empty string \"\" skips a line:","","apostrophe ' is &apos;","ampersand & is &amp;","quote mark \" is &quot;","backslash \\\\ is X3D escape character","double backslash \\\\\\\\ is X3D backslash \\\\ character","Pi Π is &#928; XML character entity"], Java.type("java.lang.String[]")))
            .setFontStyle(new FontStyle().setDEF("CenteredFontStyle").setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]")))))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDEF("DefaultMaterial").setDiffuseColor(Java.to([0.2,0.2,0.2], Java.type("float[]")))))))      ;
    X3D0.toFileX3D("../data/TextSpecialCharacters.new.x3d");
