load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.2")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("Shaders").setLevel(1))
        .addMeta(new metaObject().setName("title").setContent("SimpleShader.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Simple shader example"))
        .addMeta(new metaObject().setName("creator").setContent("John Stewart"))
        .addMeta(new metaObject().setName("translator").setContent("Holger Seelig, John Carlson, Don Brutzman and Jeff Malnick"))
        .addMeta(new metaObject().setName("created").setContent("26 May 2009"))
        .addMeta(new metaObject().setName("translated").setContent("15 October 2009"))
        .addMeta(new metaObject().setName("modified").setContent("24 April 2017"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.opengl.org/wiki/Fragment_Shader"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest"))
        .addMeta(new metaObject().setName("subject").setContent("X3D shader example"))
        .addMeta(new metaObject().setName("reference").setContent("originals/simpleShader.x3dv"))
        .addMeta(new metaObject().setName("reference").setContent("ShaderTutorialInstantReality.pdf"))
        .addMeta(new metaObject().setName("generator").setContent("Titania V3.0.3, http://titania.create3000.de"))
        .addMeta(new metaObject().setName("comment").setContent("World of Titania"))
        .addMeta(new metaObject().setName("outputStyle").setContent("nicest"))
        .addMeta(new metaObject().setName("warning").setContent("under development"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d"))
        .addMeta(new metaObject().setName("license").setContent("../../license.html")))
      .setScene(new SceneObject()
        .addChild(new ProtoDeclareObject().setName("myPrototype")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("myInputRange").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0.95 0.44 0.22")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject().setDEF("TR")
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0.5,0.5,0.9], Java.type("float[]"))))
                  .addShaders(new ComposedShaderObject().setDEF("Cobweb").setLanguage("GLSL")
                    .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("decis").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0.95 0.77 0.44"))
                    .addParts(new ShaderPartObject().setType("VERTEX")
                      .setSourceCode("data:text/plain;charset=utf-8,\n"+
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
                    .addParts(new ShaderPartObject().setType("FRAGMENT").setDEF("_1")
                      .setSourceCode("data:text/plain;charset=utf-8,\n"+
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
                .setGeometry(new SphereObject().setRadius(1.75))))))
        .addChild(new WorldInfoObject().setTitle("SimpleShader")
          .setMetadata(new MetadataSetObject().setName("Titania").setDEF("Titania").setReference("http://titania.create3000.de")
            .addValue(new MetadataSetObject().setName("Selection").setDEF("Selection").setReference("http://titania.create3000.de")
              .addValue(new MetadataSetObject().setName("nodes").setDEF("nodes").setReference("http://titania.create3000.de")
                .addComments(new CommentsBlock("NULL"))))
            .addValue(new MetadataSetObject().setName("NavigationInfo").setDEF("NavigationInfo").setReference("http://titania.create3000.de")
              .addValue(new MetadataStringObject().setName("type").setDEF("type").setReference("http://titania.create3000.de").setValue(Java.to(["EXAMINE"], Java.type("java.lang.String[]")))))
            .addValue(new MetadataSetObject().setName("Viewpoint").setDEF("Viewpoint").setReference("http://titania.create3000.de")
              .addValue(new MetadataDoubleObject().setName("position").setDEF("position").setReference("http://titania.create3000.de").setValue(Java.to([6.24067728185014,0.00250837343276661,2.92117542307615], Java.type("double[]"))))
              .addValue(new MetadataDoubleObject().setName("orientation").setDEF("orientation").setReference("http://titania.create3000.de").setValue(Java.to([-0.110173424710488,0.990158061907379,-0.0863065984000336,1.21146676119191], Java.type("double[]"))))
              .addValue(new MetadataDoubleObject().setName("centerOfRotation").setDEF("centerOfRotation").setReference("http://titania.create3000.de").setValue(Java.to([-0.808320198626341,-0.358072370409949,0.22817191560906], Java.type("double[]")))))))
        .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("myPrototype")))      ;
    X3D0.toFileX3D("../data/SimpleShader.new.x3d");
