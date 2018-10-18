var java = require('java');
var autoclass = require('../../../X3Dautoclass.js');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroesSync(true);
      var X3D0 =  new autoclass.X3D().setProfileSync("Immersive").setVersionSync("3.0")
      .setHeadSync(new autoclass.head()
        .addMetaSync(new autoclass.meta().setNameSync("title").setContentSync("TextExamples.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("Show different escape-character text examples for embedded quotation marks."))
        .addMetaSync(new autoclass.meta().setNameSync("creator").setContentSync("Don Brutzman"))
        .addMetaSync(new autoclass.meta().setNameSync("created").setContentSync("7 April 2001"))
        .addMetaSync(new autoclass.meta().setNameSync("modified").setContentSync("26 April 2016"))
        .addMetaSync(new autoclass.meta().setNameSync("warning").setContentSync("Note that X3D Canonicalization (C14N) will scrub alternate XML character representations, be careful to check original encoding into version control."))
        .addMetaSync(new autoclass.meta().setNameSync("warning").setContentSync("Usually this source document needs to be inspected and edited using a plain-text editor in order to see the differences in these XML-equivalent text representations."))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("http://www.web3d.org/x3d/content/examples/Basic/development/TextExamples.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("generator").setContentSync("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMetaSync(new autoclass.meta().setNameSync("license").setContentSync("../license.html")))
      .setSceneSync(new autoclass.Scene()
        .addChildSync(new autoclass.Transform().setTranslationSync(java.newArray("float", [java.newFloat(0), java.newFloat(2), java.newFloat(0)]))
          .addChildSync(new autoclass.Shape()
            .setGeometrySync(new autoclass.Text().setStringSync(java.newArray("java.lang.String", ["Compare special character escaping"]))
              .setFontStyleSync(new autoclass.FontStyle().setDEFSync("testFontStyle").setJustifySync(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])).setSizeSync(java.newFloat(0.8))))
            .setAppearanceSync(new autoclass.Appearance().setDEFSync("LightBlueAppearance")
              .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.7), java.newFloat(0.7)]))))))
        .addChildSync(new autoclass.Transform().setTranslationSync(java.newArray("float", [java.newFloat(-3), java.newFloat(0), java.newFloat(0)]))
          .addChildSync(new autoclass.Shape()
            .setGeometrySync(new autoclass.Text().setStringSync(java.newArray("java.lang.String", ["I don't think so","","he said \"Hi\""]))
              .setFontStyleSync(new autoclass.FontStyle().setUSESync("testFontStyle")))
            .setAppearanceSync(new autoclass.Appearance().setUSESync("LightBlueAppearance"))))
        .addChildSync(new autoclass.Transform().setTranslationSync(java.newArray("float", [java.newFloat(3), java.newFloat(0), java.newFloat(0)]))
          .addChildSync(new autoclass.Shape()
            .setGeometrySync(new autoclass.Text().setStringSync(java.newArray("java.lang.String", ["I don't think so","","he said \"Hi\""]))
              .setFontStyleSync(new autoclass.FontStyle().setUSESync("testFontStyle")))
            .setAppearanceSync(new autoclass.Appearance().setUSESync("LightBlueAppearance")))))      ;
    X3D0.toFileX3D("../data/TextExamples.new.x3d");
