load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("EnvironmentalEffects").setLevel(1))
        .addComponent(new componentObject().setName("EnvironmentalEffects").setLevel(3))
        .addComponent(new componentObject().setName("Shaders").setLevel(1))
        .addComponent(new componentObject().setName("CubeMapTexturing").setLevel(1))
        .addMeta(new metaObject().setName("title").setContent("ball.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("generator").setContent("manual"))
        .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/ball.x3d"))
        .addMeta(new metaObject().setName("description").setContent("a prismatic sphere")))
      .setScene(new SceneObject()
        .addChild(new NavigationInfoObject().setType(Java.to(["ANY","EXAMINE","FLY","LOOKAT"], Java.type("java.lang.String[]"))))
        .addChild(new ViewpointObject().setDescription("Tour Views"))
        .addChild(new BackgroundObject().setBackUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"], Java.type("java.lang.String[]"))).setBottomUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"], Java.type("java.lang.String[]"))).setFrontUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"], Java.type("java.lang.String[]"))).setLeftUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"], Java.type("java.lang.String[]"))).setRightUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"], Java.type("java.lang.String[]"))).setTopUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"], Java.type("java.lang.String[]"))))
        .addChild(new TransformObject()
          .addChild(new ShapeObject()
            .setGeometry(new SphereObject())
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0.7,0.7,0.7], Java.type("float[]"))).setSpecularColor(Java.to([0.5,0.5,0.5], Java.type("float[]"))))
              .setTexture(new ComposedCubeMapTextureObject().setDEF("texture")
                .setBack(new ImageTextureObject().setUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"], Java.type("java.lang.String[]"))))
                .setBottom(new ImageTextureObject().setUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"], Java.type("java.lang.String[]"))))
                .setFront(new ImageTextureObject().setUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"], Java.type("java.lang.String[]"))))
                .setLeft(new ImageTextureObject().setUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"], Java.type("java.lang.String[]"))))
                .setRight(new ImageTextureObject().setUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"], Java.type("java.lang.String[]"))))
                .setTop(new ImageTextureObject().setUrl(Java.to(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"], Java.type("java.lang.String[]")))))
              .addComments(new CommentsBlock('\n'+
'                    <ProgramShader DEF=\'ProgramShader\' containerField=\'shaders\' language=\'GLSL\'>\n'+
'                        <ShaderProgram url=\'"../shaders/freewrl.vs" "https://coderextreme.net/X3DJSONLD/shaders/freewrl.vs"\' containerField=\'programs\' type=\'VERTEX\'>\n'+
'                        <field name=\'chromaticDispertion\' accessType=\'initializeOnly\' type=\'SFVec3f\' value=\'0.98 1 1.033\'/>\n'+
'                        <field name=\'bias\' accessType=\'initializeOnly\' type=\'SFFloat\' value=\'0.5\'/>\n'+
'                        <field name=\'scale\' accessType=\'initializeOnly\' type=\'SFFloat\' value=\'0.5\'/>\n'+
'                        <field name=\'power\' accessType=\'initializeOnly\' type=\'SFFloat\' value=\'2\'/>\n'+
'                        </ShaderProgram>\n'+
'                        <ShaderProgram url=\'"../shaders/freewrl.fs" "https://coderextreme.net/X3DJSONLD/shaders/freewrl.fs"\' containerField=\'programs\' type=\'FRAGMENT\'/>\n'+
'		    </ProgramShader>\n'+
'		'))
              .addComments(new CommentsBlock('\n'+
'                <ComposedShader language=\'GLSL\'>\n'+
'		  <field name=\'chromaticDispertion\' accessType=\'initializeOnly\' type=\'SFVec3f\' value=\'0.98 1 1.033\'></field>\n'+
'		  <field name=\'fw_Texture_unit0\' type=\'SFNode\' accessType="initializeOnly">\n'+
'			<ComposedCubeMapTexture USE="texture"></ComposedCubeMapTexture>\n'+
'		  </field>\n'+
'		  <field name=\'bias\' accessType=\'initializeOnly\' type=\'SFFloat\' value=\'0.5\'></field>\n'+
'		  <field name=\'scale\' accessType=\'initializeOnly\' type=\'SFFloat\' value=\'0.5\'></field>\n'+
'		  <field name=\'power\' accessType=\'initializeOnly\' type=\'SFFloat\' value=\'2\'></field>\n'+
'		  <ShaderPart url=\'"../shaders/contact.vs" "https://coderextreme.net/X3DJSONLD/shaders/contact.vs"\' type="VERTEX" containerField=\'parts\'></ShaderPart>\n'+
'		  <ShaderPart url=\'"../shaders/common.fs" "https://coderextreme.net/X3DJSONLD/shaders/common.fs"\' containerField=\'parts\' type=\'FRAGMENT\'></ShaderPart>\n'+
'                </ComposedShader>\n'+
'		'))
              .addComments(new CommentsBlock('\n'+
'                <ComposedShader language=\'GLSL\'>\n'+
'		  <field name=\'chromaticDispertion\' accessType=\'inputOutput\' type=\'SFVec3f\' value=\'0.98 1 1.033\'></field>\n'+
'		  <field name=\'cube\' type=\'SFNode\' accessType="inputOutput">\n'+
'			<ComposedCubeMapTexture USE="texture"></ComposedCubeMapTexture>\n'+
'		  </field>\n'+
'		  <field name=\'bias\' accessType=\'inputOutput\' type=\'SFFloat\' value=\'0.5\'></field>\n'+
'		  <field name=\'scale\' accessType=\'inputOutput\' type=\'SFFloat\' value=\'0.5\'></field>\n'+
'		  <field name=\'power\' accessType=\'inputOutput\' type=\'SFFloat\' value=\'2\'></field>\n'+
'		  <ShaderPart url=\'"../shaders/octaga.vs" "https://coderextreme.net/X3DJSONLD/shaders/octaga.vs"\' type="VERTEX" containerField=\'parts\'></ShaderPart>\n'+
'		  <ShaderPart url=\'"../shaders/common.fs" "https://coderextreme.net/X3DJSONLD/shaders/common.fs"\' containerField=\'parts\' type=\'FRAGMENT\'></ShaderPart>\n'+
'                </ComposedShader>\n'+
'		'))
              .addComments(new CommentsBlock('\n'+
'                <ComposedShader language=\'GLSL\'>\n'+
'		  <field name=\'chromaticDispertion\' accessType=\'initializeOnly\' type=\'SFVec3f\' value=\'0.98 1 1.033\'></field>\n'+
'		  <field name=\'cube\' accessType=\'initializeOnly\' type=\'SFInt32\' value=\'0\'></field>\n'+
'		  <field name=\'bias\' accessType=\'initializeOnly\' type=\'SFFloat\' value=\'0.5\'></field>\n'+
'		  <field name=\'scale\' accessType=\'initializeOnly\' type=\'SFFloat\' value=\'0.5\'></field>\n'+
'		  <field name=\'power\' accessType=\'initializeOnly\' type=\'SFFloat\' value=\'2\'></field>\n'+
'		  <ShaderPart url=\'"../shaders/instant.vs" "https://coderextreme.net/X3DJSONLD/shaders/instant.vs"\' type="VERTEX" containerField=\'parts\'></ShaderPart>\n'+
'		  <ShaderPart url=\'"../shaders/common.fs" "https://coderextreme.net/X3DJSONLD/shaders/common.fs"\' containerField=\'parts\' type=\'FRAGMENT\'></ShaderPart>\n'+
'                </ComposedShader>\n'+
'		'))
              .addComments(new CommentsBlock('\n'+
'		'))
              .addShaders(new ComposedShaderObject().setLanguage("GLSL")
                .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("cube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
                  .addChild(new ComposedCubeMapTextureObject().setUSE("texture")))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("bias").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("power").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
                .addParts(new ShaderPartObject().setType("VERTEX").setUrl(Java.to(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"], Java.type("java.lang.String[]"))))
                .addParts(new ShaderPartObject().setType("FRAGMENT").setDEF("common").setUrl(Java.to(["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"], Java.type("java.lang.String[]")))))
              .addShaders(new ComposedShaderObject().setLanguage("GLSL")
                .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0.98 1 1.033"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("cube").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
                  .addChild(new ComposedCubeMapTextureObject().setUSE("texture")))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("bias").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0.5"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("scale").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0.5"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("power").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("2"))
                .addParts(new ShaderPartObject().setType("VERTEX").setUrl(Java.to(["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"], Java.type("java.lang.String[]"))))
                .addParts(new ShaderPartObject().setUSE("common")))))))      ;
    X3D0.toFileX3D("../data/ball.new.x3d");
