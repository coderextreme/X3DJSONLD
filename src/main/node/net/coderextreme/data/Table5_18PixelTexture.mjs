import java from 'java';
import util from 'util';
import promisify from 'util';
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
import autoclass from '../../../X3Dautoclass.mjs';
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  (new autoclass.X3D()).setProfile("Interchange").setVersion("3.3")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("title").setContent("Table5_18PixelTexture"))
        .addMeta((new autoclass.meta()).setName("description").setContent("PixelTexture example for Table 5.18"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Leonard Daly and Don Brutzman"))
        .addMeta((new autoclass.meta()).setName("created").setContent("18 December 2006"))
        .addMeta((new autoclass.meta()).setName("modified").setContent("2 April 2017"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("http://X3dGraphics.com"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/x3d/content/examples/X3dResources.html"))
        .addMeta((new autoclass.meta()).setName("rights").setContent("Copyright 2006, Daly Realism and Don Brutzman"))
        .addMeta((new autoclass.meta()).setName("subject").setContent("X3D, PixelTexture"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/Table5_18PixelTexture"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.Background()).setSkyColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)])))
        .addChild((new autoclass.Transform()).setDEF("Checkerboard").setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(-10)]))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setTextureTransform((new autoclass.TextureTransform()).setScale(java.newArray("float", [java.newFloat(500), java.newFloat(500)])))
              .setTexture((new autoclass.PixelTexture()).setImage(java.newArray("int", [2,2,3,15119869,16767927,16767927,15119869]))))
            .setGeometry((new autoclass.Box()).setSize(java.newArray("float", [java.newFloat(1000), java.newFloat(1000), java.newFloat(0.01)])))))
        .addChild((new autoclass.Viewpoint()).setDescription("View All").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(20)])))
        .addChild((new autoclass.Viewpoint()).setDescription("Empty Image").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(5), java.newFloat(5)])))
        .addChild((new autoclass.Transform()).setDEF("EmptyImage").setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(0), java.newFloat(1)])).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(5), java.newFloat(0)]))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setTexture((new autoclass.PixelTexture())))
            .setGeometry((new autoclass.Box()).setDEF("StandardBox"))))
        .addChild((new autoclass.Viewpoint()).setDescription("Black and white PixelTexture").setPosition(java.newArray("float", [java.newFloat(-5), java.newFloat(0), java.newFloat(5)])))
        .addChild((new autoclass.Transform()).setDEF("BW").setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(0), java.newFloat(1)])).setTranslation(java.newArray("float", [java.newFloat(-5), java.newFloat(0), java.newFloat(0)]))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setTexture((new autoclass.PixelTexture()).setImage(java.newArray("int", [1,2,1,255,0]))))
            .setGeometry((new autoclass.Box()).setUSE("StandardBox"))))
        .addChild((new autoclass.Viewpoint()).setDescription("Black and white with Alpha PixelTexture").setPosition(java.newArray("float", [java.newFloat(5), java.newFloat(0), java.newFloat(5)])))
        .addChild((new autoclass.Transform()).setDEF("AlphaBW").setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(0), java.newFloat(1)])).setTranslation(java.newArray("float", [java.newFloat(5), java.newFloat(0), java.newFloat(0)]))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setTexture((new autoclass.PixelTexture()).setImage(java.newArray("int", [2,1,2,52479,8823]))))
            .setGeometry((new autoclass.Box()).setUSE("StandardBox"))))
        .addChild((new autoclass.Viewpoint()).setDescription("RGB PixelTexture").setPosition(java.newArray("float", [java.newFloat(-5), java.newFloat(-5), java.newFloat(5)])))
        .addChild((new autoclass.Transform()).setDEF("RGB").setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(0), java.newFloat(1)])).setTranslation(java.newArray("float", [java.newFloat(-5), java.newFloat(-5), java.newFloat(0)]))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setTexture((new autoclass.PixelTexture()).setImage(java.newArray("int", [2,4,3,16711680,65280,0,0,0,0,16777215,16776960]))))
            .setGeometry((new autoclass.Box()).setUSE("StandardBox"))))
        .addChild((new autoclass.Viewpoint()).setDescription("RGB with Alpha PixelTexture").setPosition(java.newArray("float", [java.newFloat(5), java.newFloat(-5), java.newFloat(5)])))
        .addChild((new autoclass.Transform()).setDEF("AlphaRGB").setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(0), java.newFloat(1)])).setTranslation(java.newArray("float", [java.newFloat(5), java.newFloat(-5), java.newFloat(0)]))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setTexture((new autoclass.PixelTexture()).setImage(java.newArray("int", [3,2,4,4278190335,16711935,65535,4278190207,16711807,65407]))))
            .setGeometry((new autoclass.Box()).setUSE("StandardBox")))))      ;
    X3D0.toFileX3D("../data/Table5_18PixelTexture.new.x3d");
    process.exit(0);
