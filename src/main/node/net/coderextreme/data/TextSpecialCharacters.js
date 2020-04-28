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
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setContent("TextSpecialCharacters.x3d").setName("title"))
        .addMeta((new autoclass.meta()).setContent("Text node demonstration of quotation, apostrophe, ampersand and backslash characters using X3D MFString escaping for XML character entities").setName("description"))
        .addMeta((new autoclass.meta()).setContent("Don Brutzman").setName("creator"))
        .addMeta((new autoclass.meta()).setContent("12 July 2008").setName("created"))
        .addMeta((new autoclass.meta()).setContent("2 April 2017").setName("modified"))
        .addMeta((new autoclass.meta()).setContent("Character entity references in HTML 4").setName("reference"))
        .addMeta((new autoclass.meta()).setContent("http://www.w3.org/TR/REC-html40/sgml/entities.html").setName("reference"))
        .addMeta((new autoclass.meta()).setContent("Copyright (c) Don Brutzman and Leonard Daly, 2008").setName("rights"))
        .addMeta((new autoclass.meta()).setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter02GeometryPrimitives/TextSpecialCharacters.x3d").setName("identifier"))
        .addMeta((new autoclass.meta()).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit").setName("generator"))
        .addMeta((new autoclass.meta()).setContent("../license.html").setName("license")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.Background()).setSkyColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])))
        .addChild((new autoclass.Viewpoint()).setDescription("Default View").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(15)])))
        .addChild((new autoclass.Shape())
          .addComments((new autoclass.CommentsBlock(" Empty string \"\" means to skip a line ")))
          .addComments((new autoclass.CommentsBlock(" The ampersand escape characters are based on XML rules ")))
          .addComments((new autoclass.CommentsBlock(" apostrophe ' is &apos; and needs to be escaped in single-quote delimiters used for string='value' attribute ")))
          .addComments((new autoclass.CommentsBlock(" ampersand & is &amp; and needs to be escaped ")))
          .addComments((new autoclass.CommentsBlock(" quotation \" is &quot; and isn't needed if single-quote delimiters used for string='value' attribute ")))
          .addComments((new autoclass.CommentsBlock(" quotation \" can be used within an X3D string if escaped with backslash \\ as \\\" ")))
          .addComments((new autoclass.CommentsBlock(" backslash \\ is used as escape character for \" (and itself) in X3D ")))
          .addComments((new autoclass.CommentsBlock(" character entities are listed in HTML specification and are good for any XML ")))
          .setGeometry((new autoclass.Text()).setDEF("DefaultText").setString(java.newArray("java.lang.String", ["Character entity substitutions:","empty string \"\" skips a line:","","apostrophe  '  is &apos;","ampersand & is &amp;","quote mark  \"  is &quot;","backslash \\\\ is X3D escape character","double backslash \\\\\\\\ is X3D backslash \\\\ character","Pi Π is &#928; XML character entity"]))
            .setFontStyle((new autoclass.FontStyle()).setDEF("CenteredFontStyle").setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"]))))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setDEF("DefaultMaterial").setDiffuseColor(java.newArray("float", [java.newFloat(0.2), java.newFloat(0.2), java.newFloat(0.2)]))))))      ;
    X3D0.toFileX3D("../data/TextSpecialCharacters.new.x3d");
