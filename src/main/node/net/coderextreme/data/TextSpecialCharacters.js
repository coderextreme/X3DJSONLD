var java = require('java');
var autoclass = require('../../../X3Dautoclass.js');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroesSync(true);
      var X3D0 =  new autoclass.X3D().setProfileSync("Immersive").setVersionSync("3.3")
      .setHeadSync(new autoclass.head()
        .addMetaSync(new autoclass.meta().setNameSync("title").setContentSync("TextSpecialCharacters.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("Text node demonstration of quotation, apostrophe, ampersand and backslash characters using X3D MFString escaping for XML character entities"))
        .addMetaSync(new autoclass.meta().setNameSync("creator").setContentSync("Don Brutzman"))
        .addMetaSync(new autoclass.meta().setNameSync("created").setContentSync("12 July 2008"))
        .addMetaSync(new autoclass.meta().setNameSync("modified").setContentSync("2 April 2017"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("Character entity references in HTML 4"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("http://www.w3.org/TR/REC-html40/sgml/entities.html"))
        .addMetaSync(new autoclass.meta().setNameSync("rights").setContentSync("Copyright (c) Don Brutzman and Leonard Daly, 2008"))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter02GeometryPrimitives/TextSpecialCharacters.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("generator").setContentSync("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMetaSync(new autoclass.meta().setNameSync("license").setContentSync("../license.html")))
      .setSceneSync(new autoclass.Scene()
        .addChildSync(new autoclass.Background().setSkyColorSync(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])))
        .addChildSync(new autoclass.Viewpoint().setDescriptionSync("Default View").setPositionSync(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(15)])))
        .addChildSync(new autoclass.Shape()
          .addCommentsSync(new autoclass.CommentsBlock("Empty string \"\" means to skip a line"))
          .addCommentsSync(new autoclass.CommentsBlock("The ampersand escape characters are based on XML rules"))
          .addCommentsSync(new autoclass.CommentsBlock("apostrophe ' is &apos; and needs to be escaped in single-quote delimiters used for string='value' attribute"))
          .addCommentsSync(new autoclass.CommentsBlock("ampersand & is &amp; and needs to be escaped"))
          .addCommentsSync(new autoclass.CommentsBlock("quotation \" is &quot; and isn't needed if single-quote delimiters used for string='value' attribute"))
          .addCommentsSync(new autoclass.CommentsBlock("quotation \" can be used within an X3D string if escaped with backslash \\ as \\\"\""))
          .addCommentsSync(new autoclass.CommentsBlock("backslash \\ is used as escape character for \" (and itself) in X3D"))
          .addCommentsSync(new autoclass.CommentsBlock("character entities are listed in HTML specification and are good for any XML"))
          .setGeometrySync(new autoclass.Text().setDEFSync("DefaultText").setStringSync(java.newArray("java.lang.String", ["Character entity substitutions:","empty string \"\" skips a line:","","apostrophe ' is &apos;","ampersand & is &amp;","quote mark \" is &quot;","backslash \\\\ is X3D escape character","double backslash \\\\\\\\ is X3D backslash \\\\ character","Pi Π is &#928; XML character entity"]))
            .setFontStyleSync(new autoclass.FontStyle().setDEFSync("CenteredFontStyle").setJustifySync(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"]))))
          .setAppearanceSync(new autoclass.Appearance()
            .setMaterialSync(new autoclass.Material().setDEFSync("DefaultMaterial").setDiffuseColorSync(java.newArray("float", [java.newFloat(0.2), java.newFloat(0.2), java.newFloat(0.2)]))))))      ;
    X3D0.toFileX3D("../data/TextSpecialCharacters.new.x3d");
