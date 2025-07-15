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
var ProtoInstance0 = null;
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("Shaders").setLevel(1))
        .addMeta(new meta().setName("title").setContent("SimpleShader.x3d"))
        .addMeta(new meta().setName("description").setContent("Simple shader example"))
        .addMeta(new meta().setName("creator").setContent("John Stewart"))
        .addMeta(new meta().setName("translator").setContent("Holger Seelig, John Carlson, Don Brutzman and Jeff Malnick"))
        .addMeta(new meta().setName("created").setContent("26 May 2009"))
        .addMeta(new meta().setName("translated").setContent("15 October 2009"))
        .addMeta(new meta().setName("modified").setContent("20 October 2019"))
        .addMeta(new meta().setName("reference").setContent("http://www.opengl.org/wiki/Fragment_Shader"))
        .addMeta(new meta().setName("reference").setContent("http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest"))
        .addMeta(new meta().setName("subject").setContent("X3D shader example"))
        .addMeta(new meta().setName("reference").setContent("originals/simpleShader.x3dv"))
        .addMeta(new meta().setName("reference").setContent("ShaderTutorialInstantReality.pdf"))
        .addMeta(new meta().setName("generator").setContent("Titania V3.0.3, http://titania.create3000.de"))
        .addMeta(new meta().setName("info").setContent("World of Titania"))
        .addMeta(new meta().setName("outputStyle").setContent("nicest"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d"))
        .addMeta(new meta().setName("license").setContent("../../license.html"))
        .addComments(new CommentsBlock("meta content='under development' name='warning'/")))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("myPrototype")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("myInputRange").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0.95 0.44 0.22")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform().setDEF("TR")
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.5,0.5,0.9]), Java.type("float[]"))))
                  .addShaders(new ComposedShader().setLanguage("GLSL")
                    .addField(new field().setType(field.TYPE_SFVEC3F).setName("decis").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField("decis").setProtoField("myInputRange")))
                    .addParts(new ShaderPart().setType("VERTEX"))
                    .addParts(new ShaderPart().setType("FRAGMENT")))
                  .addShaders(new ComposedShader().setDEF("Cobweb").setLanguage("GLSL")
                    .addField(new field().setType(field.TYPE_SFVEC3F).setName("decis").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0.95 0.77 0.44"))
                    .addParts(new ShaderPart().setType("VERTEX"))
                    .addParts(new ShaderPart().setType("FRAGMENT").setDEF("_1"))))
                .setGeometry(new Sphere().setRadius(1.75))))))
        .addChild(new WorldInfo().setTitle("SimpleShader")
          .setMetadata(new MetadataSet().setName("Titania").setDEF("Titania").setReference("http://titania.create3000.de")
            .addValue(new MetadataSet().setName("Selection").setDEF("Selection").setReference("http://titania.create3000.de")
              .addValue(new MetadataSet().setName("nodes").setDEF("nodes").setReference("http://titania.create3000.de")
                .addComments(new CommentsBlock("NULL"))))
            .addValue(new MetadataSet().setName("NavigationInfo").setDEF("NavigationInfo").setReference("http://titania.create3000.de")
              .addValue(new MetadataString().setName("type").setDEF("type").setReference("http://titania.create3000.de").setValue(Java.to(["EXAMINE"], Java.type("java.lang.String[]")))))
            .addValue(new MetadataSet().setName("Viewpoint").setDEF("Viewpoint").setReference("http://titania.create3000.de")
              .addValue(new MetadataDouble().setName("position").setDEF("position").setReference("http://titania.create3000.de").setValue(Java.to([6.24067728185014,0.00250837343276661,2.92117542307615], Java.type("double[]"))))
              .addValue(new MetadataDouble().setName("orientation").setDEF("orientation").setReference("http://titania.create3000.de").setValue(Java.to([-0.110173424710488,0.990158061907379,-0.0863065984000336,1.21146676119191], Java.type("double[]"))))
              .addValue(new MetadataDouble().setName("centerOfRotation").setDEF("centerOfRotation").setReference("http://titania.create3000.de").setValue(Java.to([-0.808320198626341,-0.358072370409949,0.22817191560906], Java.type("double[]")))))))
        .addChild(ProtoInstance0 = new ProtoInstance().setName("myPrototype")))      ;
    X3D0.toFileX3D("../data/SimpleShader.new.graal.x3d");
    X3D0.toFileJSON("../data/SimpleShader.new.graal.json");
