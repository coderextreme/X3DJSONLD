var java = require('java');
var autoclass = require('../../../X3Dautoclass.js');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroesSync(true);
      var X3D0 =  new autoclass.X3D().setProfileSync("Interchange").setVersionSync("3.3")
      .setHeadSync(new autoclass.head()
        .addMetaSync(new autoclass.meta().setNameSync("title").setContentSync("Table5_18PixelTexture"))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("PixelTexture example for Table 5.18"))
        .addMetaSync(new autoclass.meta().setNameSync("creator").setContentSync("Leonard Daly and Don Brutzman"))
        .addMetaSync(new autoclass.meta().setNameSync("created").setContentSync("18 December 2006"))
        .addMetaSync(new autoclass.meta().setNameSync("modified").setContentSync("2 April 2017"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("http://X3dGraphics.com"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("http://www.web3d.org/x3d/content/examples/X3dResources.html"))
        .addMetaSync(new autoclass.meta().setNameSync("rights").setContentSync("Copyright 2006, Daly Realism and Don Brutzman"))
        .addMetaSync(new autoclass.meta().setNameSync("subject").setContentSync("X3D, PixelTexture"))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/Table5_18PixelTexture"))
        .addMetaSync(new autoclass.meta().setNameSync("generator").setContentSync("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMetaSync(new autoclass.meta().setNameSync("license").setContentSync("../license.html")))
      .setSceneSync(new autoclass.Scene()
        .addChildSync(new autoclass.Background().setSkyColorSync(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)])))
        .addChildSync(new autoclass.Transform().setDEFSync("Checkerboard").setTranslationSync(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(-10)]))
          .addChildSync(new autoclass.Shape()
            .setAppearanceSync(new autoclass.Appearance()
              .setTextureTransformSync(new autoclass.TextureTransform().setScaleSync(java.newArray("float", [java.newFloat(500), java.newFloat(500)])))
              .setTextureSync(new autoclass.PixelTexture().setImageSync(java.newArray("int", [2,2,3,15119869,16767927,16767927,15119869]))))
            .setGeometrySync(new autoclass.Box().setSizeSync(java.newArray("float", [java.newFloat(1000), java.newFloat(1000), java.newFloat(0.01)])))))
        .addChildSync(new autoclass.Viewpoint().setDescriptionSync("View All").setPositionSync(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(20)])))
        .addChildSync(new autoclass.Viewpoint().setDescriptionSync("Empty Image").setPositionSync(java.newArray("float", [java.newFloat(0), java.newFloat(5), java.newFloat(5)])))
        .addChildSync(new autoclass.Transform().setDEFSync("EmptyImage").setRotationSync(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(0), java.newFloat(1)])).setTranslationSync(java.newArray("float", [java.newFloat(0), java.newFloat(5), java.newFloat(0)]))
          .addChildSync(new autoclass.Shape()
            .setAppearanceSync(new autoclass.Appearance()
              .setTextureSync(new autoclass.PixelTexture()))
            .setGeometrySync(new autoclass.Box().setDEFSync("StandardBox"))))
        .addChildSync(new autoclass.Viewpoint().setDescriptionSync("Black and white PixelTexture").setPositionSync(java.newArray("float", [java.newFloat(-5), java.newFloat(0), java.newFloat(5)])))
        .addChildSync(new autoclass.Transform().setDEFSync("BW").setRotationSync(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(0), java.newFloat(1)])).setTranslationSync(java.newArray("float", [java.newFloat(-5), java.newFloat(0), java.newFloat(0)]))
          .addChildSync(new autoclass.Shape()
            .setAppearanceSync(new autoclass.Appearance()
              .setTextureSync(new autoclass.PixelTexture().setImageSync(java.newArray("int", [1,2,1,255,0]))))
            .setGeometrySync(new autoclass.Box().setUSESync("StandardBox"))))
        .addChildSync(new autoclass.Viewpoint().setDescriptionSync("Black and white with Alpha PixelTexture").setPositionSync(java.newArray("float", [java.newFloat(5), java.newFloat(0), java.newFloat(5)])))
        .addChildSync(new autoclass.Transform().setDEFSync("AlphaBW").setRotationSync(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(0), java.newFloat(1)])).setTranslationSync(java.newArray("float", [java.newFloat(5), java.newFloat(0), java.newFloat(0)]))
          .addChildSync(new autoclass.Shape()
            .setAppearanceSync(new autoclass.Appearance()
              .setTextureSync(new autoclass.PixelTexture().setImageSync(java.newArray("int", [2,1,2,52479,8823]))))
            .setGeometrySync(new autoclass.Box().setUSESync("StandardBox"))))
        .addChildSync(new autoclass.Viewpoint().setDescriptionSync("RGB PixelTexture").setPositionSync(java.newArray("float", [java.newFloat(-5), java.newFloat(-5), java.newFloat(5)])))
        .addChildSync(new autoclass.Transform().setDEFSync("RGB").setRotationSync(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(0), java.newFloat(1)])).setTranslationSync(java.newArray("float", [java.newFloat(-5), java.newFloat(-5), java.newFloat(0)]))
          .addChildSync(new autoclass.Shape()
            .setAppearanceSync(new autoclass.Appearance()
              .setTextureSync(new autoclass.PixelTexture().setImageSync(java.newArray("int", [2,4,3,16711680,65280,0,0,0,0,16777215,16776960]))))
            .setGeometrySync(new autoclass.Box().setUSESync("StandardBox"))))
        .addChildSync(new autoclass.Viewpoint().setDescriptionSync("RGB with Alpha PixelTexture").setPositionSync(java.newArray("float", [java.newFloat(5), java.newFloat(-5), java.newFloat(5)])))
        .addChildSync(new autoclass.Transform().setDEFSync("AlphaRGB").setRotationSync(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(0), java.newFloat(1)])).setTranslationSync(java.newArray("float", [java.newFloat(5), java.newFloat(-5), java.newFloat(0)]))
          .addChildSync(new autoclass.Shape()
            .setAppearanceSync(new autoclass.Appearance()
              .setTextureSync(new autoclass.PixelTexture().setImageSync(java.newArray("int", [3,2,4,4278190335,16711935,65535,4278190207,16711807,65407]))))
            .setGeometrySync(new autoclass.Box().setUSESync("StandardBox")))))      ;
    X3D0.toFileX3D("../data/Table5_18PixelTexture.new.x3d");