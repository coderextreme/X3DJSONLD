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
var ProtoInstance0 = null;
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.2")
      .setHead((new autoclass.head())
        .addComponent((new autoclass.component()).setLevel(1).setName("Shaders"))
        .addMeta((new autoclass.meta()).setContent("SimpleShader.x3d").setName("title"))
        .addMeta((new autoclass.meta()).setContent("Simple shader example").setName("description"))
        .addMeta((new autoclass.meta()).setContent("John Stewart").setName("creator"))
        .addMeta((new autoclass.meta()).setContent("Holger Seelig, John Carlson, Don Brutzman and Jeff Malnick").setName("translator"))
        .addMeta((new autoclass.meta()).setContent("26 May 2009").setName("created"))
        .addMeta((new autoclass.meta()).setContent("15 October 2009").setName("translated"))
        .addMeta((new autoclass.meta()).setContent("20 October 2019").setName("modified"))
        .addMeta((new autoclass.meta()).setContent("http://www.opengl.org/wiki/Fragment_Shader").setName("reference"))
        .addMeta((new autoclass.meta()).setContent("http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader").setName("reference"))
        .addMeta((new autoclass.meta()).setContent("https://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest").setName("reference"))
        .addMeta((new autoclass.meta()).setContent("X3D shader example").setName("subject"))
        .addMeta((new autoclass.meta()).setContent("originals/simpleShader.x3dv").setName("reference"))
        .addMeta((new autoclass.meta()).setContent("ShaderTutorialInstantReality.pdf").setName("reference"))
        .addMeta((new autoclass.meta()).setContent("Titania V3.0.3, http://titania.create3000.de").setName("generator"))
        .addMeta((new autoclass.meta()).setContent("World of Titania").setName("comment"))
        .addMeta((new autoclass.meta()).setContent("nicest").setName("outputStyle"))
        .addMeta((new autoclass.meta()).setContent("under development").setName("warning"))
        .addMeta((new autoclass.meta()).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit").setName("generator"))
        .addMeta((new autoclass.meta()).setContent("https://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d").setName("identifier"))
        .addMeta((new autoclass.meta()).setContent("../../license.html").setName("license")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.ProtoDeclare()).setName("myPrototype")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("myInputRange").setValue("0.95 0.44 0.22")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Transform()).setDEF("TR")
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.9)])))
                  .addShaders((new autoclass.ComposedShader()).setLanguage("GLSL")
                    .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("decis"))
                    .setIS((new autoclass.IS())
                      .addConnect((new autoclass.connect()).setNodeField("decis").setProtoField("myInputRange")))
                    .addParts((new autoclass.ShaderPart()))
                    .addParts((new autoclass.ShaderPart()).setType("FRAGMENT")))
                  .addShaders((new autoclass.ComposedShader()).setDEF("Cobweb").setLanguage("GLSL")
                    .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("decis").setValue("0.95 0.77 0.44"))
                    .addParts((new autoclass.ShaderPart()))
                    .addParts((new autoclass.ShaderPart()).setType("FRAGMENT").setDEF("_1"))))
                .setGeometry((new autoclass.Sphere()).setRadius(java.newFloat(1.75)))))))
        .addChild((new autoclass.WorldInfo()).setTitle("SimpleShader")
          .setMetadata((new autoclass.MetadataSet()).setDEF("Titania").setName("Titania").setReference("http://titania.create3000.de")
            .addValue((new autoclass.MetadataSet()).setDEF("Selection").setName("Selection").setReference("http://titania.create3000.de")
              .addValue((new autoclass.MetadataSet()).setDEF("nodes").setName("nodes").setReference("http://titania.create3000.de")
                .addComments((new autoclass.CommentsBlock(" NULL ")))))
            .addValue((new autoclass.MetadataSet()).setDEF("NavigationInfo").setName("NavigationInfo").setReference("http://titania.create3000.de")
              .addValue((new autoclass.MetadataString()).setDEF("type").setName("type").setReference("http://titania.create3000.de").setValue(java.newArray("java.lang.String", ["EXAMINE"]))))
            .addValue((new autoclass.MetadataSet()).setDEF("Viewpoint").setName("Viewpoint").setReference("http://titania.create3000.de")
              .addValue((new autoclass.MetadataDouble()).setDEF("position").setName("position").setReference("http://titania.create3000.de").setValue(java.newArray("double", [6.24067728185014,0.00250837343276661,2.92117542307615])))
              .addValue((new autoclass.MetadataDouble()).setDEF("orientation").setName("orientation").setReference("http://titania.create3000.de").setValue(java.newArray("double", [-0.110173424710488,0.990158061907379,-0.0863065984000336,1.21146676119191])))
              .addValue((new autoclass.MetadataDouble()).setDEF("centerOfRotation").setName("centerOfRotation").setReference("http://titania.create3000.de").setValue(java.newArray("double", [-0.808320198626341,-0.358072370409949,0.22817191560906]))))))
        .addChild(ProtoInstance0 = (new autoclass.ProtoInstance()).setName("myPrototype")))      ;
    X3D0.toFileX3D("../data/SimpleShader.new.x3d");
