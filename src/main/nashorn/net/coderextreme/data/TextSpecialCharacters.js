load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setContent("TextSpecialCharacters.x3d").setName("title"))
        .addMeta(new metaObject().setContent("Text node demonstration of quotation, apostrophe, ampersand and backslash characters using X3D MFString escaping for XML character entities").setName("description"))
        .addMeta(new metaObject().setContent("Don Brutzman").setName("creator"))
        .addMeta(new metaObject().setContent("12 July 2008").setName("created"))
        .addMeta(new metaObject().setContent("2 April 2017").setName("modified"))
        .addMeta(new metaObject().setContent("Character entity references in HTML 4").setName("reference"))
        .addMeta(new metaObject().setContent("http://www.w3.org/TR/REC-html40/sgml/entities.html").setName("reference"))
        .addMeta(new metaObject().setContent("Copyright (c) Don Brutzman and Leonard Daly, 2008").setName("rights"))
        .addMeta(new metaObject().setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter02GeometryPrimitives/TextSpecialCharacters.x3d").setName("identifier"))
        .addMeta(new metaObject().setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit").setName("generator"))
        .addMeta(new metaObject().setContent("../license.html").setName("license")))
      .setScene(new SceneObject()
        .addChild(new BackgroundObject().setSkyColor(Java.to([1,1,1], Java.type("float[]"))))
        .addChild(new ViewpointObject().setDescription("Default View").setPosition(Java.to([0,0,15], Java.type("float[]"))))
        .addChild(new ShapeObject()
          .addComments(new CommentsBlock(" Empty string \"\" means to skip a line "))
          .addComments(new CommentsBlock(" The ampersand escape characters are based on XML rules "))
          .addComments(new CommentsBlock(" apostrophe ' is &apos; and needs to be escaped in single-quote delimiters used for string='value' attribute "))
          .addComments(new CommentsBlock(" ampersand & is &amp; and needs to be escaped "))
          .addComments(new CommentsBlock(" quotation \" is &quot; and isn't needed if single-quote delimiters used for string='value' attribute "))
          .addComments(new CommentsBlock(" quotation \" can be used within an X3D string if escaped with backslash \\ as \\\" "))
          .addComments(new CommentsBlock(" backslash \\ is used as escape character for \" (and itself) in X3D "))
          .addComments(new CommentsBlock(" character entities are listed in HTML specification and are good for any XML "))
          .setGeometry(new TextObject().setDEF("DefaultText").setString(Java.to(["Character entity substitutions:","empty string \"\" skips a line:","","apostrophe  '  is &apos;","ampersand & is &amp;","quote mark  \"  is &quot;","backslash \\\\ is X3D escape character","double backslash \\\\\\\\ is X3D backslash \\\\ character","Pi Π is &#928; XML character entity"], Java.type("java.lang.String[]")))
            .setFontStyle(new FontStyleObject().setDEF("CenteredFontStyle").setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]")))))
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setDEF("DefaultMaterial").setDiffuseColor(Java.to([0.2,0.2,0.2], Java.type("float[]")))))))      ;
    X3D0.toFileX3D("../data/TextSpecialCharacters.new.x3d");