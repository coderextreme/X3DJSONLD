load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_nativeJava;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("arc.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("generator").setContent("manual"))
        .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/arc.x3d"))
        .addMeta(new metaObject().setName("description").setContent("an attempt to implement an arc in a graph")))
      .setScene(new SceneObject()
        .addChild(new ViewpointObject().setPosition(Java.to([0,0,5], Java.type("float[]"))).setDescription("a moving graph"))
        .addChild(new BackgroundObject().setSkyColor(Java.to([0.4,0.4,0.4], Java.type("float[]"))))
        .addChild(new TransformObject().setDEF("cylinder1")
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0.2,0.7,0.7], Java.type("float[]")))))
            .setGeometry(new CylinderObject().setRadius(0.1))))
        .addComments(new CommentsBlock("from doug sanden"))
        .addChild(new TransformObject().setDEF("DECLpoint_start_node").setTranslation(Java.to([0,0,0], Java.type("float[]")))
          .addChild(new ShapeObject()
            .setGeometry(new SphereObject().setRadius(0.1))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(Java.to([1,0,0], Java.type("float[]"))))))
          .addChild(new PositionInterpolatorObject().setDEF("DECLpoint_start_PI1").setKey(Java.to([0,1], Java.type("float[]"))).setKeyValue(Java.to([0,0,0,0,5,0], Java.type("float[]"))))
          .addChild(new ScriptObject().setDEF("DECLpoint_start_MB1")
            .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("old").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_location").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("keyValue").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
            .setSourceCode("\n"+
"\n"+
"ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(translation);\n"+
"		}\n"+
""))
          .addChild(new TimeSensorObject().setDEF("DECLpoint_start_CL1").setCycleInterval(3).setLoop(true))
          .addChild(new ROUTEObject().setFromNode("DECLpoint_start_CL1").setFromField("cycleTime").setToNode("DECLpoint_start_MB1").setToField("set_location"))
          .addChild(new ROUTEObject().setFromNode("DECLpoint_start_CL1").setFromField("fraction_changed").setToNode("DECLpoint_start_PI1").setToField("set_fraction"))
          .addChild(new ROUTEObject().setFromNode("DECLpoint_start_MB1").setFromField("keyValue").setToNode("DECLpoint_start_PI1").setToField("keyValue"))
          .addChild(new ROUTEObject().setFromNode("DECLpoint_start_PI1").setFromField("value_changed").setToNode("DECLpoint_start_node").setToField("set_translation")))
        .addChild(new TransformObject().setDEF("DECLpoint_end_node").setTranslation(Java.to([0,0,0], Java.type("float[]")))
          .addChild(new ShapeObject()
            .setGeometry(new SphereObject().setRadius(0.1))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(Java.to([1,0,0], Java.type("float[]"))))))
          .addChild(new PositionInterpolatorObject().setDEF("DECLpoint_end_PI1").setKey(Java.to([0,1], Java.type("float[]"))).setKeyValue(Java.to([0,0,0,0,5,0], Java.type("float[]"))))
          .addChild(new ScriptObject().setDEF("DECLpoint_end_MB1")
            .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("old").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_location").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("keyValue").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
            .setSourceCode("\n"+
"\n"+
"ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(translation);\n"+
"		}\n"+
""))
          .addChild(new TimeSensorObject().setDEF("DECLpoint_end_CL1").setCycleInterval(3).setLoop(true))
          .addChild(new ROUTEObject().setFromNode("DECLpoint_end_CL1").setFromField("cycleTime").setToNode("DECLpoint_end_MB1").setToField("set_location"))
          .addChild(new ROUTEObject().setFromNode("DECLpoint_end_CL1").setFromField("fraction_changed").setToNode("DECLpoint_end_PI1").setToField("set_fraction"))
          .addChild(new ROUTEObject().setFromNode("DECLpoint_end_MB1").setFromField("keyValue").setToNode("DECLpoint_end_PI1").setToField("keyValue"))
          .addChild(new ROUTEObject().setFromNode("DECLpoint_end_PI1").setFromField("value_changed").setToNode("DECLpoint_end_node").setToField("set_translation")))
        .addChild(new ScriptObject().setDEF("DECLx3dconnector_connector1_S1")
          .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("startnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new TransformObject().setDEF("DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE_node").setUSE("DECLpoint_start")
              .addChild(new ShapeObject()
                .setGeometry(new SphereObject().setRadius(0.1))
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDiffuseColor(Java.to([1,0,0], Java.type("float[]"))))))
              .addChild(new PositionInterpolatorObject().setDEF("DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE_PI1").setKey(Java.to([0,1], Java.type("float[]"))).setKeyValue(Java.to([0,0,0,0,5,0], Java.type("float[]"))))
              .addChild(new ScriptObject().setDEF("DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE_MB1")
                .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("50 50 0"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("old").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_location").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
                .addField(new fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("keyValue").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("\n"+
"\n"+
"ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(translation);\n"+
"		}\n"+
""))
              .addChild(new TimeSensorObject().setDEF("DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE_CL1").setCycleInterval(3).setLoop(true))
              .addChild(new ROUTEObject().setFromNode("DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE_CL1").setFromField("cycleTime").setToNode("DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE_MB1").setToField("set_location"))
              .addChild(new ROUTEObject().setFromNode("DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE_CL1").setFromField("fraction_changed").setToNode("DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE_PI1").setToField("set_fraction"))
              .addChild(new ROUTEObject().setFromNode("DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE_MB1").setFromField("keyValue").setToNode("DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE_PI1").setToField("keyValue"))
              .addChild(new ROUTEObject().setFromNode("DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE_PI1").setFromField("value_changed").setToNode("DECLx3dconnector_connector1_FIELDstartnode_DECLpoint_INSTANCE_node").setToField("set_translation"))))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("endnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new TransformObject().setDEF("DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE1000_node").setUSE("DECLpoint_end")
              .addChild(new ShapeObject()
                .setGeometry(new SphereObject().setRadius(0.1))
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDiffuseColor(Java.to([1,0,0], Java.type("float[]"))))))
              .addChild(new PositionInterpolatorObject().setDEF("DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE1000_PI1").setKey(Java.to([0,1], Java.type("float[]"))).setKeyValue(Java.to([0,0,0,0,5,0], Java.type("float[]"))))
              .addChild(new ScriptObject().setDEF("DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE1000_MB1")
                .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("50 50 0"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("old").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_location").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
                .addField(new fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("keyValue").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("\n"+
"\n"+
"ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(translation);\n"+
"		}\n"+
""))
              .addChild(new TimeSensorObject().setDEF("DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE1000_CL1").setCycleInterval(3).setLoop(true))
              .addChild(new ROUTEObject().setFromNode("DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE1000_CL1").setFromField("cycleTime").setToNode("DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE1000_MB1").setToField("set_location"))
              .addChild(new ROUTEObject().setFromNode("DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE1000_CL1").setFromField("fraction_changed").setToNode("DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE1000_PI1").setToField("set_fraction"))
              .addChild(new ROUTEObject().setFromNode("DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE1000_MB1").setFromField("keyValue").setToNode("DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE1000_PI1").setToField("keyValue"))
              .addChild(new ROUTEObject().setFromNode("DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE1000_PI1").setFromField("value_changed").setToNode("DECLx3dconnector_connector1_FIELDendnode_DECLpoint_INSTANCE1000_node").setToField("set_translation"))))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("connectornode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new TransformObject().setUSE("cylinder1")))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .setSourceCode("\n"+
"            ecmascript:\n"+
"            \n"+
"        function recompute(startpoint,endpoint){\n"+
"	    if (typeof endpoint === 'undefined') {\n"+
"		return;\n"+
"	    }\n"+
"            var dif = endpoint.subtract(startpoint);\n"+
"            var dist = dif.length()*0.5;\n"+
"            var dif2 = dif.multiply(0.5);\n"+
"            var norm = dif.normalize();\n"+
"            var transl = startpoint.add(dif2);\n"+
"	    return {\n"+
"		    scale : new SFVec3f(1.0,dist,1.0),\n"+
"		    translation : transl,\n"+
"		    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)\n"+
"	    	    // rotation : new x3dom.fields.Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)\n"+
"	    };\n"+
"	}\n"+
"	function recompute_and_route(startpoint, endpoint) {\n"+
"	      var trafo = recompute(startpoint, endpoint);\n"+
"	      connectornode.translation = trafo.translation;\n"+
"	      connectornode.rotation = trafo.rotation;\n"+
"	      connectornode.scale = trafo.scale;\n"+
"	}\n"+
"        function initialize(){\n"+
"            recompute_and_route(startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_startpoint(val,t){\n"+
"            recompute_and_route(val,endnode.translation);\n"+
"        }\n"+
"        function set_endpoint(val,t){\n"+
"            recompute_and_route(startnode.translation,val);\n"+
"        }\n"+
""))
        .addChild(new ROUTEObject().setFromNode("DECLpoint_start_DECLpoint_start_MB1").setFromField("translation").setToNode("DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1").setToField("set_startpoint"))
        .addChild(new ROUTEObject().setFromNode("DECLpoint_end_DECLpoint_end_MB1").setFromField("translation").setToNode("DECLx3dconnector_connector1_DECLx3dconnector_connector1_S1").setToField("set_endpoint")))      ;
    X3D0.toFileX3D("../data/arcexpanded.new.x3d");
