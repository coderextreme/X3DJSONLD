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
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("title").setContent("PixelTextureComponentExamples.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("This example shows the five PixelTexture components, with 0 to 4 components each, shown in Table 5-18."))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Leonard Daly and Don Brutzman"))
        .addMeta((new autoclass.meta()).setName("created").setContent("25 August 2008"))
        .addMeta((new autoclass.meta()).setName("modified").setContent("7 January 2014"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("http://X3dGraphics.com"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("X3D for Web Authors, Table 5.18"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/x3d/content/examples/X3dResources.html"))
        .addMeta((new autoclass.meta()).setName("rights").setContent("Copyright (c) 2006, Daly Realism and Don Brutzman"))
        .addMeta((new autoclass.meta()).setName("subject").setContent("X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/PixelTextureComponentExamples.x3d"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.Background()).setSkyColor(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.1), java.newFloat(0.4)])))
        .addChild((new autoclass.Viewpoint()).setDescription("Table 5.18 SFImage component examples").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(14)])))
        .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(-6), java.newFloat(0), java.newFloat(0)]))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setTexture((new autoclass.PixelTexture()).setDEF("ZeroComponents")))
            .setGeometry((new autoclass.Box())))
          .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-2), java.newFloat(0)]))
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["0"]))
                .setFontStyle((new autoclass.FontStyle()).setDEF("CenterJustify").setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"]))))
              .setAppearance((new autoclass.Appearance()).setDEF("TextMaterial")
                .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])))))))
        .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(-3), java.newFloat(0), java.newFloat(0)]))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setTexture((new autoclass.PixelTexture()).setDEF("OneComponent").setImage(java.newArray("int", [1,2,1,255,0]))))
            .setGeometry((new autoclass.Box())))
          .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-2), java.newFloat(0)]))
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["1"]))
                .setFontStyle((new autoclass.FontStyle()).setUSE("CenterJustify")))
              .setAppearance((new autoclass.Appearance()).setUSE("TextMaterial")))))
        .addChild((new autoclass.Transform())
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setTexture((new autoclass.PixelTexture()).setDEF("TwoComponents").setImage(java.newArray("int", [2,1,2,52479,8823]))))
            .setGeometry((new autoclass.Box())))
          .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-2), java.newFloat(0)]))
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["2"]))
                .setFontStyle((new autoclass.FontStyle()).setUSE("CenterJustify")))
              .setAppearance((new autoclass.Appearance()).setUSE("TextMaterial")))))
        .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(3), java.newFloat(0), java.newFloat(0)]))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .addComments((new autoclass.CommentsBlock("note 0x000000 = 0")))
              .setTexture((new autoclass.PixelTexture()).setDEF("ThreeComponents").setImage(java.newArray("int", [2,4,3,16711680,65280,0,0,0,0,16777215,16776960]))))
            .setGeometry((new autoclass.Box())))
          .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-2), java.newFloat(0)]))
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["3"]))
                .setFontStyle((new autoclass.FontStyle()).setUSE("CenterJustify")))
              .setAppearance((new autoclass.Appearance()).setUSE("TextMaterial")))))
        .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(6), java.newFloat(0), java.newFloat(0)]))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .addComments((new autoclass.CommentsBlock("Erroneous value in book: 1 0 0 255, 0 1 0 255, 0 0 1 255, 1 0 0 127, 0 1 0 127, 0 0 1 127")))
              .setTexture((new autoclass.PixelTexture()).setDEF("FourComponents").setImage(java.newArray("int", [3,2,4,4278190335,16711935,65535,4278190207,16711807,65407]))))
            .setGeometry((new autoclass.Box())))
          .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-2), java.newFloat(0)]))
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["4"]))
                .setFontStyle((new autoclass.FontStyle()).setUSE("CenterJustify")))
              .setAppearance((new autoclass.Appearance()).setUSE("TextMaterial")))))
        .addComments((new autoclass.CommentsBlock("Background from PixelTextureBW.x3d")))
        .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(6), java.newFloat(-2)]))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setTexture((new autoclass.PixelTexture()).setImage(java.newArray("int", [8,8,1,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204]))))
            .setGeometry((new autoclass.Box()).setSize(java.newArray("float", [java.newFloat(16), java.newFloat(16), java.newFloat(0.1)]))))))      ;
    X3D0.toFileX3D("../data/PixelTextureComponentExamples.new.x3d");
    process.exit(0);