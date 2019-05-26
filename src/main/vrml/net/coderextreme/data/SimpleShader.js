var ProtoInstance0 = null;
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("3.2")
      .setHead(new head()
        .addComponent(new component().setName("Shaders").setLevel(1))
        .addMeta(new meta().setName("title").setContent("SimpleShader.x3d"))
        .addMeta(new meta().setName("description").setContent("Simple shader example"))
        .addMeta(new meta().setName("creator").setContent("John Stewart"))
        .addMeta(new meta().setName("translator").setContent("Holger Seelig, John Carlson, Don Brutzman and Jeff Malnick"))
        .addMeta(new meta().setName("created").setContent("26 May 2009"))
        .addMeta(new meta().setName("translated").setContent("15 October 2009"))
        .addMeta(new meta().setName("modified").setContent("24 April 2017"))
        .addMeta(new meta().setName("reference").setContent("http://www.opengl.org/wiki/Fragment_Shader"))
        .addMeta(new meta().setName("reference").setContent("http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader"))
        .addMeta(new meta().setName("reference").setContent("http://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest"))
        .addMeta(new meta().setName("subject").setContent("X3D shader example"))
        .addMeta(new meta().setName("reference").setContent("originals/simpleShader.x3dv"))
        .addMeta(new meta().setName("reference").setContent("ShaderTutorialInstantReality.pdf"))
        .addMeta(new meta().setName("generator").setContent("Titania V3.0.3, http://titania.create3000.de"))
        .addMeta(new meta().setName("comment").setContent("World of Titania"))
        .addMeta(new meta().setName("outputStyle").setContent("nicest"))
        .addMeta(new meta().setName("warning").setContent("under development"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d"))
        .addMeta(new meta().setName("license").setContent("../../license.html")))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("myPrototype")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("myInputRange").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0.95 0.44 0.22")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform().setDEF("TR")
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(java.newArray("float", [0.5,0.5,0.9])))
                  .addShaders(new ComposedShader().setDEF("Cobweb").setLanguage("GLSL")
                    .addField(new field().setType(field.TYPE_SFVEC3F).setName("decis").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0.95 0.77 0.44"))
                    .addParts(new ShaderPart().setType("VERTEX")
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
                    .addParts(new ShaderPart().setType("FRAGMENT").setDEF("_1")
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
                .setGeometry(new Sphere().setRadius(1.75))))))
        .addChild(new WorldInfo().setTitle("SimpleShader")
          .setMetadata(new MetadataSet().setName("Titania").setDEF("Titania").setReference("http://titania.create3000.de")
            .addValue(new MetadataSet().setName("Selection").setDEF("Selection").setReference("http://titania.create3000.de")
              .addValue(new MetadataSet().setName("nodes").setDEF("nodes").setReference("http://titania.create3000.de")
                .addComments(new CommentsBlock("NULL"))))
            .addValue(new MetadataSet().setName("NavigationInfo").setDEF("NavigationInfo").setReference("http://titania.create3000.de")
              .addValue(new MetadataString().setName("type").setDEF("type").setReference("http://titania.create3000.de").setValue(java.newArray("java.lang.String", ["EXAMINE"]))))
            .addValue(new MetadataSet().setName("Viewpoint").setDEF("Viewpoint").setReference("http://titania.create3000.de")
              .addValue(new MetadataDouble().setName("position").setDEF("position").setReference("http://titania.create3000.de").setValue(java.newArray("double", [6.24067728185014,0.00250837343276661,2.92117542307615])))
              .addValue(new MetadataDouble().setName("orientation").setDEF("orientation").setReference("http://titania.create3000.de").setValue(java.newArray("double", [-0.110173424710488,0.990158061907379,-0.0863065984000336,1.21146676119191])))
              .addValue(new MetadataDouble().setName("centerOfRotation").setDEF("centerOfRotation").setReference("http://titania.create3000.de").setValue(java.newArray("double", [-0.808320198626341,-0.358072370409949,0.22817191560906]))))))
        .addChild(ProtoInstance0 = new ProtoInstance().setName("myPrototype")))      ;
    X3D0.toFileX3D("../data/SimpleShader.new.x3d");
