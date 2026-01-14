load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
ConfigurationProperties.setDeleteIntermediateFiles(false);
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
function doubleToFloat(d) {
    if (Float32Array)
	return new Float32Array(d);
}
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("MultiTextureDesignPattern.x3d"))
        .addMeta(new meta().setName("description").setContent("Design pattern for MultiTexture, MultiTextureCoordinate, MultiTextureTransform node correspondences"))
        .addMeta(new meta().setName("creator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("5 March 2011"))
        .addMeta(new meta().setName("modified").setContent("29 October 2023"))
        .addMeta(new meta().setName("TODO").setContent("X3D schematron rules for quality assurance"))
        .addMeta(new meta().setName("Image").setContent("MultiTextureDesignPatternSceneGraph.png"))
        .addMeta(new meta().setName("subject").setContent("MultiTexture, MultiTextureCoordinate, MultiTextureTransform"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/files/specifications/19775-1/V3.2/Part01/components/texturing.html#MultiTexture"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/TextureMapping/MultiTextureDesignPattern.x3d"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/x3d/content/examples/X3dResources.html"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addComments(new CommentsBlock("================================"))
        .addChild(new WorldInfo().setTitle("MultiTextureDesignPattern.x3d"))
        .addChild(new Background().setSkyColor(Java.to(doubleToFloat([0.72549,1,0.721569]), Java.type("float[]"))))
        .addChild(new Viewpoint().setDescription("MultiTexture design pattern"))
        .addChild(new Shape()
          .setGeometry(new Text().setString(Java.to(["Source shows design pattern for","MultiTexture, MultiTextureCoordinate,"," and MultiTextureTransform nodes"], Java.type("java.lang.String[]")))
            .setFontStyle(new FontStyle().setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))).setSize(0.6)))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.2,0.4,0.8]), Java.type("float[]"))))))
        .addComments(new CommentsBlock("================================"))
        .addChild(new Shape()
          .addComments(new CommentsBlock("add a single geometry node here"))
          .setGeometry(new IndexedFaceSet()
            .setTexCoord(new MultiTextureCoordinate()
              .addComments(new CommentsBlock("add multiple TextureCoordinate nodes here, match corresponding MultiTexture child texture nodes"))
              .addTexCoord(new TextureCoordinate().setPoint(Java.to(doubleToFloat([0,0,1,0,1,1,0,1]), Java.type("float[]"))))
              .addTexCoord(new TextureCoordinate().setPoint(Java.to(doubleToFloat([0,0,1,0,1,1,0,1]), Java.type("float[]"))))
              .addTexCoord(new TextureCoordinate().setPoint(Java.to(doubleToFloat([0,0,1,0,1,1,0,1]), Java.type("float[]"))))))
          .setAppearance(new Appearance()
            .setMaterial(new Material())
            .setTexture(new MultiTexture().setAlpha(0.8).setColor(Java.to(doubleToFloat([0.9,1,0.2]), Java.type("float[]"))).setFunction(Java.to(["COMPLEMENT","ALPHAREPLICATE"], Java.type("java.lang.String[]"))).setMode(Java.to(["MODULATE","REPLACE","BLENDDIFFUSEALPHA"], Java.type("java.lang.String[]"))).setSource(Java.to(["DIFFUSE","SPECULAR","FACTOR"], Java.type("java.lang.String[]")))
              .addComments(new CommentsBlock("add multiple texture nodes here"))
              .addTexture(new ImageTexture())
              .addTexture(new MovieTexture())
              .addTexture(new PixelTexture()))
            .setTextureTransform(new MultiTextureTransform()
              .addComments(new CommentsBlock("add multiple TextureTransform nodes here, match corresponding MultiTexture child texture nodes"))
              .addTextureTransform(new TextureTransform())
              .addTextureTransform(new TextureTransform())
              .addTextureTransform(new TextureTransform())))))      ;
    X3D0.toFileX3D("../data/MultiTextureDesignPattern.new.graal.x3d");
    X3D0.toFileJSON("../data/MultiTextureDesignPattern.new.graal.x3dj");
