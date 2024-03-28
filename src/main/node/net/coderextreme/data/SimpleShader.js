var java = require('java');
var util = require('util');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: util.promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
var autoclass = require('../../../X3Dautoclass');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
var ProtoInstance0 = null;
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.2")
      .setHead(new autoclass.head()
        .addComponent(new autoclass.component().setName("Shaders").setLevel(1))
        .addMeta(new autoclass.meta().setName("title").setContent("SimpleShader.x3d"))
        .addMeta(new autoclass.meta().setName("description").setContent("Simple shader example"))
        .addMeta(new autoclass.meta().setName("creator").setContent("John Stewart"))
        .addMeta(new autoclass.meta().setName("translator").setContent("Holger Seelig, John Carlson, Don Brutzman and Jeff Malnick"))
        .addMeta(new autoclass.meta().setName("created").setContent("26 May 2009"))
        .addMeta(new autoclass.meta().setName("translated").setContent("15 October 2009"))
        .addMeta(new autoclass.meta().setName("modified").setContent("20 October 2019"))
        .addMeta(new autoclass.meta().setName("reference").setContent("http://www.opengl.org/wiki/Fragment_Shader"))
        .addMeta(new autoclass.meta().setName("reference").setContent("http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader"))
        .addMeta(new autoclass.meta().setName("reference").setContent("https://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest"))
        .addMeta(new autoclass.meta().setName("subject").setContent("X3D shader example"))
        .addMeta(new autoclass.meta().setName("reference").setContent("originals/simpleShader.x3dv"))
        .addMeta(new autoclass.meta().setName("reference").setContent("ShaderTutorialInstantReality.pdf"))
        .addMeta(new autoclass.meta().setName("generator").setContent("Titania V3.0.3, http://titania.create3000.de"))
        .addMeta(new autoclass.meta().setName("info").setContent("World of Titania"))
        .addMeta(new autoclass.meta().setName("outputStyle").setContent("nicest"))
        .addMeta(new autoclass.meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d"))
        .addMeta(new autoclass.meta().setName("license").setContent("../../license.html"))
        .addComments((new autoclass.CommentsBlock("meta content='under development' name='warning'/"))))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.ProtoDeclare().setName("myPrototype")
          .setProtoInterface(new autoclass.ProtoInterface()
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("myInputRange").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("0.95 0.44 0.22")))
          .setProtoBody(new autoclass.ProtoBody()
            .addChild(new autoclass.Transform().setDEF("TR")
              .addChild(new autoclass.Shape()
                .setAppearance(new autoclass.Appearance()
                  .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.9)])))
                  .addShaders(new autoclass.ComposedShader().setLanguage("GLSL")
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("decis").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
                    .setIS(new autoclass.IS()
                      .addConnect(new autoclass.connect().setNodeField("decis").setProtoField("myInputRange")))
                    .addParts(new autoclass.ShaderPart().setType("VERTEX"))
                    .addParts(new autoclass.ShaderPart().setType("FRAGMENT")))
                  .addShaders(new autoclass.ComposedShader().setDEF("Cobweb").setLanguage("GLSL")
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("decis").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("0.95 0.77 0.44"))
                    .addParts(new autoclass.ShaderPart().setType("VERTEX"))
                    .addParts(new autoclass.ShaderPart().setType("FRAGMENT").setDEF("_1"))))
                .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(1.75)))))))
        .addChild(new autoclass.WorldInfo().setTitle("SimpleShader")
          .setMetadata(new autoclass.MetadataSet().setName("Titania").setDEF("Titania").setReference("http://titania.create3000.de")
            .addValue(new autoclass.MetadataSet().setName("Selection").setDEF("Selection").setReference("http://titania.create3000.de")
              .addValue(new autoclass.MetadataSet().setName("nodes").setDEF("nodes").setReference("http://titania.create3000.de")
                .addComments((new autoclass.CommentsBlock("NULL")))))
            .addValue(new autoclass.MetadataSet().setName("NavigationInfo").setDEF("NavigationInfo").setReference("http://titania.create3000.de")
              .addValue(new autoclass.MetadataString().setName("type").setDEF("type").setReference("http://titania.create3000.de").setValue(java.newArray("java.lang.String", ["EXAMINE"]))))
            .addValue(new autoclass.MetadataSet().setName("Viewpoint").setDEF("Viewpoint").setReference("http://titania.create3000.de")
              .addValue(new autoclass.MetadataDouble().setName("position").setDEF("position").setReference("http://titania.create3000.de").setValue(java.newArray("double", [6.24067728185014,0.00250837343276661,2.92117542307615])))
              .addValue(new autoclass.MetadataDouble().setName("orientation").setDEF("orientation").setReference("http://titania.create3000.de").setValue(java.newArray("double", [-0.110173424710488,0.990158061907379,-0.0863065984000336,1.21146676119191])))
              .addValue(new autoclass.MetadataDouble().setName("centerOfRotation").setDEF("centerOfRotation").setReference("http://titania.create3000.de").setValue(java.newArray("double", [-0.808320198626341,-0.358072370409949,0.22817191560906]))))))
        .addChild(ProtoInstance0 = new autoclass.ProtoInstance().setName("myPrototype")))      ;
    X3D0.toFileX3D("../data/SimpleShader.new.node.x3d");
    X3D0.toFileJSON("../data/SimpleShader.new.node.json");
    process.exit(0);
