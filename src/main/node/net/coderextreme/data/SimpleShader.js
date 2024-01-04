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
var ProtoInstance0 = null;
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("title").setContent("SimpleShader.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("Simple shader example"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("John Stewart"))
        .addMeta((new autoclass.meta()).setName("translator").setContent("Holger Seelig, John Carlson, Don Brutzman and Jeff Malnick"))
        .addMeta((new autoclass.meta()).setName("created").setContent("26 May 2009"))
        .addMeta((new autoclass.meta()).setName("translated").setContent("15 October 2009"))
        .addMeta((new autoclass.meta()).setName("modified").setContent("Sat, 30 Dec 2023 07:57:57 GMT"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.opengl.org/wiki/Fragment_Shader"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("originals/simpleShader.x3dv"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("ShaderTutorialInstantReality.pdf"))
        .addMeta((new autoclass.meta()).setName("subject").setContent("X3D shader example"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("Titania V3.0.3, http://titania.create3000.de"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("x3d-tidy V1.0.118, https://www.npmjs.com/package/x3d-tidy"))
        .addMeta((new autoclass.meta()).setName("info").setContent("World of Titania"))
        .addComponent((new autoclass.component()).setName("Shaders").setLevel(1)))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.ProtoDeclare()).setName("myPrototype")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("myInputRange").setValue("0.95 0.44 0.22")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Transform()).setDEF("TR")
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0.5f), java.newFloat(0.5f), java.newFloat(0.9f)])))
                  .addShaders((new autoclass.ComposedShader()).setLanguage("GLSL")
                    .addParts((new autoclass.ShaderPart()))
                    .addParts((new autoclass.ShaderPart()).setType("FRAGMENT"))
                    .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("decis"))
                    .setIS((new autoclass.IS())
                      .addConnect((new autoclass.connect()).setNodeField("decis").setProtoField("myInputRange"))))
                  .addShaders((new autoclass.ComposedShader()).setDEF("Cobweb").setLanguage("GLSL")
                    .addParts((new autoclass.ShaderPart()))
                    .addParts((new autoclass.ShaderPart()).setType("FRAGMENT"))
                    .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("decis").setValue("0.95 0.77 0.44"))))
                .setGeometry((new autoclass.Sphere()).setRadius(java.newFloat(1.75f)))))))
        .addChild((new autoclass.WorldInfo()).setTitle("SimpleShader")
          .setMetadata((new autoclass.MetadataSet()).setDEF("Titania").setName("Titania").setReference("http://titania.create3000.de")
            .addValue((new autoclass.MetadataSet()).setDEF("Selection").setName("Selection").setReference("http://titania.create3000.de")
              .addValue((new autoclass.MetadataSet()).setDEF("nodes").setName("nodes").setReference("http://titania.create3000.de")))
            .addValue((new autoclass.MetadataSet()).setDEF("NavigationInfo").setName("NavigationInfo").setReference("http://titania.create3000.de")
              .addValue((new autoclass.MetadataString()).setDEF("type").setName("type").setReference("http://titania.create3000.de").setValue(java.newArray("java.lang.String", ["EXAMINE"]))))
            .addValue((new autoclass.MetadataSet()).setDEF("Viewpoint").setName("Viewpoint").setReference("http://titania.create3000.de")
              .addValue((new autoclass.MetadataDouble()).setDEF("position").setName("position").setReference("http://titania.create3000.de").setValue(java.newArray("double", [6.24067728185014,0.00250837343276661,2.92117542307615])))
              .addValue((new autoclass.MetadataDouble()).setDEF("orientation").setName("orientation").setReference("http://titania.create3000.de").setValue(java.newArray("double", [-0.110173424710488,0.990158061907379,-0.0863065984000336,1.21146676119191])))
              .addValue((new autoclass.MetadataDouble()).setDEF("centerOfRotation").setName("centerOfRotation").setReference("http://titania.create3000.de").setValue(java.newArray("double", [-0.808320198626341,-0.358072370409949,0.22817191560906]))))))
        .addChild(ProtoInstance0 = (new autoclass.ProtoInstance()).setName("myPrototype")))      ;
    X3D0.toFileX3D("../data/SimpleShader.new.node.x3d");
    process.exit(0);
