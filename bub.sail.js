load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_nativeJava;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("bub.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("description").setContent("3 prismatic spheres"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/bub.x3d"))
        .addMeta(new metaObject().setName("translated").setContent("09 May 2017"))
        .addMeta(new metaObject().setName("generator").setContent("X3dToJson.xslt, http://www.web3d.org/x3d/stylesheets/X3dToJson.html"))
        .addMeta(new metaObject().setName("reference").setContent("X3D JSON encoding: http://www.web3d.org/wiki/index.php/X3D_JSON_Encoding"))
        .addMeta(new metaObject().setName("translated").setContent("9 May 2017"))
        .addMeta(new metaObject().setName("generator").setContent("X3DJSONLD: https://github.com/coderextreme/X3DJSONLD")))
      .setScene(new SceneObject()
        .addChild(new NavigationInfoObject())
        .addChild(new BackgroundObject().setBackUrl(Java.to(["cubemap/all_probes/stpeters_cross/stpeters_back.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_back.png"], Java.type("java.lang.String[]"))).setBottomUrl(Java.to(["cubemap/all_probes/stpeters_cross/stpeters_bottom.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_bottom.png"], Java.type("java.lang.String[]"))).setFrontUrl(Java.to(["cubemap/all_probes/stpeters_cross/stpeters_front.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_front.png"], Java.type("java.lang.String[]"))).setLeftUrl(Java.to(["cubemap/all_probes/stpeters_cross/stpeters_left.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_left.png"], Java.type("java.lang.String[]"))).setRightUrl(Java.to(["cubemap/all_probes/stpeters_cross/stpeters_right.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_right.png"], Java.type("java.lang.String[]"))).setTopUrl(Java.to(["cubemap/all_probes/stpeters_cross/stpeters_top.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_top.png"], Java.type("java.lang.String[]"))))
        .addChild(new ViewpointObject().setPosition(Java.to([0,0,20], Java.type("float[]"))).setDescription("Look at the bubbles flying"))
        .addChild(new ProtoDeclareObject().setName("Bubble")
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject().setDEF("transform")
              .addChild(new ShapeObject().setDEF("myShape")
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0.7,0.7,0.7], Java.type("float[]"))).setSpecularColor(Java.to([0.5,0.5,0.5], Java.type("float[]"))))
                  .setTexture(new ComposedCubeMapTextureObject().setDEF("texture")
                    .setBack(new ImageTextureObject().setUrl(Java.to(["cubemap/all_probes/stpeters_cross/stpeters_back.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_back.png"], Java.type("java.lang.String[]"))))
                    .setBottom(new ImageTextureObject().setUrl(Java.to(["cubemap/all_probes/stpeters_cross/stpeters_bottom.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_bottom.png"], Java.type("java.lang.String[]"))))
                    .setFront(new ImageTextureObject().setUrl(Java.to(["cubemap/all_probes/stpeters_cross/stpeters_front.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_front.png"], Java.type("java.lang.String[]"))))
                    .setLeft(new ImageTextureObject().setUrl(Java.to(["cubemap/all_probes/stpeters_cross/stpeters_left.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_left.png"], Java.type("java.lang.String[]"))))
                    .setRight(new ImageTextureObject().setUrl(Java.to(["cubemap/all_probes/stpeters_cross/stpeters_right.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_right.png"], Java.type("java.lang.String[]"))))
                    .setTop(new ImageTextureObject().setUrl(Java.to(["cubemap/all_probes/stpeters_cross/stpeters_top.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/stpeters_cross/stpeters_top.png"], Java.type("java.lang.String[]")))))
                  .addComments(new CommentsBlock("<ComposedShader DEF='gl' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"gl.vs\" \"http://coderextreme.net/X3DJSONLD/gl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"pc_bubbles.fs\" \"http://coderextreme.net/X3DJSONLD/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader> <ComposedShader DEF='freewrl' language=\"GLSL\"> <field name='fw_textureCoodGenType' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"freewrl.vs\" \"http://coderextreme.net/X3DJSONLD/freewrl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"pc_bubbles.fs\" \"http://coderextreme.net/X3DJSONLD/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader> <ComposedShader DEF='x3dom' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"x3dom.vs\" \"http://coderextreme.net/X3DJSONLD/x3dom.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"pc_bubbles.fs\" \"http://coderextreme.net/X3DJSONLD/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader> <ComposedShader DEF='instant' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"instant.vs\" \"http://coderextreme.net/X3DJSONLD/instant.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"pc_bubbles.fs\" \"http://coderextreme.net/X3DJSONLD/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>"))
                  .addShaders(new ComposedShaderObject().setDEF("cobweb").setLanguage("GLSL")
                    .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("cube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
                      .addChild(new ComposedCubeMapTextureObject().setUSE("texture")))
                    .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033"))
                    .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("bias").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                    .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                    .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("power").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
                    .addParts(new ShaderPartObject().setType("VERTEX").setUrl(Java.to(["cobweb.vs","http://coderextreme.net/X3DJSONLD/cobweb.vs"], Java.type("java.lang.String[]"))))
                    .addParts(new ShaderPartObject().setType("FRAGMENT").setUrl(Java.to(["pc_bubbles.fs","http://coderextreme.net/X3DJSONLD/pc.fs"], Java.type("java.lang.String[]"))))))
                .setGeometry(new SphereObject())))
            .addChild(new ScriptObject().setDEF("Bounce")
              .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
              .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("velocity").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
              .addField(new fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .setSourceCode("ecmascript:\n"+
"			function set_translation(value) {\n"+
"				translation = value;\n"+
"			}\n"+
"			function translation_changed() {\n"+
"				return translation;\n"+
"			}\n"+
"			function initialize() {\n"+
"			    translation = new SFVec3f(0, 0, 0);\n"+
"			    velocity = new SFVec3f(\n"+
"			    	Math.random() - 0.5,\n"+
"				Math.random() - 0.5,\n"+
"				Math.random() - 0.5);\n"+
"			}\n"+
"			function set_fraction() {\n"+
"			    translation = new SFVec3f(\n"+
"			    	translation[0] + velocity[0],\n"+
"				translation[1] + velocity[1],\n"+
"				translation[2] + velocity[2]);\n"+
"			    for (var j = 0; j <= 2; j++) {\n"+
"				    if (Math.abs(translation[j]) > 10) {\n"+
"					initialize();\n"+
"				    } else {\n"+
"					velocity[0] += Math.random() * 0.2 - 0.1;\n"+
"					velocity[1] += Math.random() * 0.2 - 0.1;\n"+
"					velocity[2] += Math.random() * 0.2 - 0.1;\n"+
"				    }\n"+
"			    }\n"+
"			}\n"+
""))
            .addChild(new TimeSensorObject().setDEF("TourTime").setCycleInterval(0.15).setLoop(true))
            .addChild(new ROUTEObject().setFromNode("TourTime").setFromField("cycleTime").setToNode("Bounce").setToField("set_fraction"))
            .addChild(new ROUTEObject().setFromNode("Bounce").setFromField("translation_changed").setToNode("transform").setToField("set_translation"))))
        .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("Bubble"))
        .addChild(ProtoInstance1 = new ProtoInstanceObject().setName("Bubble"))
        .addChild(ProtoInstance2 = new ProtoInstanceObject().setName("Bubble")))      ;
    X3D0.toFileX3D("bub.new.x3d");
