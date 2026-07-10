import java from 'node-java';
import util from 'util';
import autoclass from '../../../X3Dautoclass.js';
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
      .setHead(new autoclass.head()
        .addMeta(new autoclass.meta().setName("title").setContent("MultiTextureDesignPattern.x3d"))
        .addMeta(new autoclass.meta().setName("description").setContent("Design pattern for MultiTexture, MultiTextureCoordinate, MultiTextureTransform node correspondences"))
        .addMeta(new autoclass.meta().setName("creator").setContent("Don Brutzman"))
        .addMeta(new autoclass.meta().setName("created").setContent("5 March 2011"))
        .addMeta(new autoclass.meta().setName("modified").setContent("29 October 2023"))
        .addMeta(new autoclass.meta().setName("TODO").setContent("X3D schematron rules for quality assurance"))
        .addMeta(new autoclass.meta().setName("Image").setContent("MultiTextureDesignPatternSceneGraph.png"))
        .addMeta(new autoclass.meta().setName("subject").setContent("MultiTexture, MultiTextureCoordinate, MultiTextureTransform"))
        .addMeta(new autoclass.meta().setName("reference").setContent("https://www.web3d.org/files/specifications/19775-1/V3.2/Part01/components/texturing.html#MultiTexture"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/TextureMapping/MultiTextureDesignPattern.x3d"))
        .addMeta(new autoclass.meta().setName("reference").setContent("https://www.web3d.org/x3d/content/examples/X3dResources.html"))
        .addMeta(new autoclass.meta().setName("generator").setContent("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"))
        .addMeta(new autoclass.meta().setName("license").setContent("../license.html")))
      .setScene(new autoclass.Scene()
        .addComments((new autoclass.CommentsBlock("================================")))
        .addChild(new autoclass.WorldInfo().setTitle("MultiTextureDesignPattern.x3d"))
        .addChild(new autoclass.Background().setSkyColor(java.newArray("float", [java.newFloat(0.72549), java.newFloat(1), java.newFloat(0.721569)])))
        .addChild(new autoclass.Viewpoint().setDescription("MultiTexture design pattern"))
        .addChild(new autoclass.Shape()
          .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["Source shows design pattern for","MultiTexture, MultiTextureCoordinate,"," and MultiTextureTransform nodes"]))
            .setFontStyle(new autoclass.FontStyle().setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])).setSize(java.newFloat(0.6))))
          .setAppearance(new autoclass.Appearance()
            .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.2), java.newFloat(0.4), java.newFloat(0.8)])))))
        .addComments((new autoclass.CommentsBlock("================================")))
        .addChild(new autoclass.Shape()
          .addComments((new autoclass.CommentsBlock("add a single geometry node here")))
          .setGeometry(new autoclass.IndexedFaceSet()
            .setTexCoord(new autoclass.MultiTextureCoordinate()
              .addComments((new autoclass.CommentsBlock("add multiple TextureCoordinate nodes here, match corresponding MultiTexture child texture nodes")))
              .addTexCoord(new autoclass.TextureCoordinate().setPoint(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(1), java.newFloat(1), java.newFloat(0), java.newFloat(1)])))
              .addTexCoord(new autoclass.TextureCoordinate().setPoint(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(1), java.newFloat(1), java.newFloat(0), java.newFloat(1)])))
              .addTexCoord(new autoclass.TextureCoordinate().setPoint(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(1), java.newFloat(1), java.newFloat(0), java.newFloat(1)])))))
          .setAppearance(new autoclass.Appearance()
            .setMaterial(new autoclass.Material())
            .setTexture(new autoclass.MultiTexture().setAlpha(java.newFloat(0.8)).setColor(java.newArray("float", [java.newFloat(0.9), java.newFloat(1), java.newFloat(0.2)])).setFunction(java.newArray("java.lang.String", ["COMPLEMENT","ALPHAREPLICATE"])).setMode(java.newArray("java.lang.String", ["MODULATE","REPLACE","BLENDDIFFUSEALPHA"])).setSource(java.newArray("java.lang.String", ["DIFFUSE","SPECULAR","FACTOR"]))
              .addComments((new autoclass.CommentsBlock("add multiple texture nodes here")))
              .addTexture(new autoclass.ImageTexture())
              .addTexture(new autoclass.MovieTexture())
              .addTexture(new autoclass.PixelTexture()))
            .setTextureTransform(new autoclass.MultiTextureTransform()
              .addComments((new autoclass.CommentsBlock("add multiple TextureTransform nodes here, match corresponding MultiTexture child texture nodes")))
              .addTextureTransform(new autoclass.TextureTransform())
              .addTextureTransform(new autoclass.TextureTransform())
              .addTextureTransform(new autoclass.TextureTransform())))))      ;
    X3D0.toFileX3D("../data/MultiTextureDesignPattern.new.node.x3d");
    X3D0.toFileJSON("../data/MultiTextureDesignPattern.new.node.x3dj");
    process.exit(0);
