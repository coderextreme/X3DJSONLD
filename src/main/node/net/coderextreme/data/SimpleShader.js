var java = require('java');
var autoclass = require('../../../X3Dautoclass.js');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroesSync(true);
var ProtoInstance0 = null;
      var X3D0 =  new autoclass.X3D().setProfileSync("Immersive").setVersionSync("3.2")
      .setHeadSync(new autoclass.head()
        .addComponentSync(new autoclass.component().setNameSync("Shaders").setLevelSync(1))
        .addMetaSync(new autoclass.meta().setNameSync("title").setContentSync("SimpleShader.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("Simple shader example"))
        .addMetaSync(new autoclass.meta().setNameSync("creator").setContentSync("John Stewart"))
        .addMetaSync(new autoclass.meta().setNameSync("translator").setContentSync("Holger Seelig, John Carlson, Don Brutzman and Jeff Malnick"))
        .addMetaSync(new autoclass.meta().setNameSync("created").setContentSync("26 May 2009"))
        .addMetaSync(new autoclass.meta().setNameSync("translated").setContentSync("15 October 2009"))
        .addMetaSync(new autoclass.meta().setNameSync("modified").setContentSync("24 April 2017"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("http://www.opengl.org/wiki/Fragment_Shader"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("http://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest"))
        .addMetaSync(new autoclass.meta().setNameSync("subject").setContentSync("X3D shader example"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("originals/simpleShader.x3dv"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("ShaderTutorialInstantReality.pdf"))
        .addMetaSync(new autoclass.meta().setNameSync("generator").setContentSync("Titania V3.0.3, http://titania.create3000.de"))
        .addMetaSync(new autoclass.meta().setNameSync("comment").setContentSync("World of Titania"))
        .addMetaSync(new autoclass.meta().setNameSync("outputStyle").setContentSync("nicest"))
        .addMetaSync(new autoclass.meta().setNameSync("warning").setContentSync("under development"))
        .addMetaSync(new autoclass.meta().setNameSync("generator").setContentSync("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("http://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("license").setContentSync("../../license.html")))
      .setSceneSync(new autoclass.Scene()
        .addChildSync(new autoclass.ProtoDeclare().setNameSync("myPrototype")
          .setProtoInterfaceSync(new autoclass.ProtoInterface()
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("myInputRange").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValueSync("0.95 0.44 0.22")))
          .setProtoBodySync(new autoclass.ProtoBody()
            .addChildSync(new autoclass.Transform().setDEFSync("TR")
              .addChildSync(new autoclass.Shape()
                .setAppearanceSync(new autoclass.Appearance()
                  .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.9)])))
                  .addShadersSync(new autoclass.ComposedShader().setDEFSync("Cobweb").setLanguageSync("GLSL")
                    .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("decis").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValueSync("0.95 0.77 0.44"))
                    .addPartsSync(new autoclass.ShaderPart().setTypeSync("VERTEX")
                      .setSourceCodeSync("data:text/plain;charset=utf-8,\n"+
"\n"+
"precision mediump float;\n"+
"\n"+
"uniform mat4 x3d_ProjectionMatrix;\n"+
"uniform mat4 x3d_ModelViewMatrix;\n"+
"uniform mat3 x3d_NormalMatrix;\n"+
"\n"+
"attribute vec4 x3d_Vertex;\n"+
"attribute vec3 x3d_Normal;\n"+
"\n"+
"varying vec3 normal;\n"+
"\n"+
"void main()\n"+
"{\n"+
"	normal = x3d_NormalMatrix * x3d_Normal;\n"+
"	\n"+
"	gl_Position = x3d_ProjectionMatrix * x3d_ModelViewMatrix * x3d_Vertex;\n"+
"}"))
                    .addPartsSync(new autoclass.ShaderPart().setTypeSync("FRAGMENT").setDEFSync("_1")
                      .setSourceCodeSync("data:text/plain;charset=utf-8,\n"+
"\n"+
"precision mediump float;\n"+
"\n"+
"uniform vec3 x3d_LightDirection [x3d_MaxLights];\n"+
"\n"+
"varying vec3 normal;\n"+
"uniform vec3 decis;\n"+
"\n"+
"void main()\n"+
"{\n"+
"	float intensity;\n"+
"	vec4 color;\n"+
"	vec3 n = normalize (normal);\n"+
"\n"+
"	intensity = abs (dot (x3d_LightDirection [0], n));\n"+
"\n"+
"	if (intensity > decis[0])\n"+
"		color = vec4(0.0,0.5,0.5,1.0);\n"+
"	else if (intensity > decis[1])\n"+
"		color = vec4(0.6,0.3,0.3,1.0);\n"+
"	else if (intensity > decis[2])\n"+
"		color = vec4(1.0,0.2,0.2,1.0);\n"+
"	else\n"+
"		color = vec4(0.0,0.4,0.0,1.0);\n"+
"\n"+
"	gl_FragColor = color;\n"+
"}"))))
                .setGeometrySync(new autoclass.Sphere().setRadiusSync(java.newFloat(1.75)))))))
        .addChildSync(new autoclass.WorldInfo().setTitleSync("SimpleShader")
          .setMetadataSync(new autoclass.MetadataSet().setNameSync("Titania").setDEFSync("Titania").setReferenceSync("http://titania.create3000.de")
            .addValueSync(new autoclass.MetadataSet().setNameSync("Selection").setDEFSync("Selection").setReferenceSync("http://titania.create3000.de")
              .addValueSync(new autoclass.MetadataSet().setNameSync("nodes").setDEFSync("nodes").setReferenceSync("http://titania.create3000.de")
                .addCommentsSync(new autoclass.CommentsBlock("NULL"))))
            .addValueSync(new autoclass.MetadataSet().setNameSync("NavigationInfo").setDEFSync("NavigationInfo").setReferenceSync("http://titania.create3000.de")
              .addValueSync(new autoclass.MetadataString().setNameSync("type").setDEFSync("type").setReferenceSync("http://titania.create3000.de").setValueSync(java.newArray("java.lang.String", ["EXAMINE"]))))
            .addValueSync(new autoclass.MetadataSet().setNameSync("Viewpoint").setDEFSync("Viewpoint").setReferenceSync("http://titania.create3000.de")
              .addValueSync(new autoclass.MetadataDouble().setNameSync("position").setDEFSync("position").setReferenceSync("http://titania.create3000.de").setValueSync(java.newArray("double", [6.24067728185014,0.00250837343276661,2.92117542307615])))
              .addValueSync(new autoclass.MetadataDouble().setNameSync("orientation").setDEFSync("orientation").setReferenceSync("http://titania.create3000.de").setValueSync(java.newArray("double", [-0.110173424710488,0.990158061907379,-0.0863065984000336,1.21146676119191])))
              .addValueSync(new autoclass.MetadataDouble().setNameSync("centerOfRotation").setDEFSync("centerOfRotation").setReferenceSync("http://titania.create3000.de").setValueSync(java.newArray("double", [-0.808320198626341,-0.358072370409949,0.22817191560906]))))))
        .addChildSync(ProtoInstance0 = new autoclass.ProtoInstance().setNameSync("myPrototype")))      ;
    X3D0.toFileX3D("../data/SimpleShader.new.x3d");
