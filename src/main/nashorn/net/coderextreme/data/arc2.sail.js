load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("arc2.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("Lost, Doug Sanden I think"))
        .addMeta(new metaObject().setName("generator").setContent("manual"))
        .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d"))
        .addMeta(new metaObject().setName("description").setContent("a generic proto to connect two objects")))
      .setScene(new SceneObject()
        .addChild(new ViewpointObject().setPosition(Java.to([0,0,5], Java.type("float[]"))).setDescription("Only Viewpoint"))
        .addChild(new BackgroundObject().setSkyColor(Java.to([0.4,0.4,0.4], Java.type("float[]"))))
        .addChild(new TransformObject().setDEF("G1")
          .addChild(new TransformObject().setDEF("DECLpoint_INSTANCE_node")
            .addChild(new ShapeObject()
              .setGeometry(new SphereObject().setRadius(0.1))
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(Java.to([1,0,0], Java.type("float[]"))))))
            .addChild(new PositionInterpolatorObject().setDEF("DECLpoint_INSTANCE_PI1").setKey(Java.to([0,1], Java.type("float[]"))).setKeyValue(Java.to([0,0,0,0,5,0], Java.type("float[]"))))
            .addChild(new ScriptObject().setDEF("DECLpoint_INSTANCE_MB1")
              .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
              .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("old").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
              .addField(new fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_location").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("keyValue").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0 0 5 0"))
              .setSourceCode("ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f(old, translation);\n"+
"               }"))
            .addChild(new TimeSensorObject().setDEF("DECLpoint_INSTANCE_CL1").setCycleInterval(3).setLoop(true))
            .addChild(new ROUTEObject().setFromNode("DECLpoint_INSTANCE_CL1").setFromField("cycleTime").setToNode("DECLpoint_INSTANCE_MB1").setToField("set_location"))
            .addChild(new ROUTEObject().setFromNode("DECLpoint_INSTANCE_CL1").setFromField("fraction_changed").setToNode("DECLpoint_INSTANCE_PI1").setToField("set_fraction"))
            .addChild(new ROUTEObject().setFromNode("DECLpoint_INSTANCE_MB1").setFromField("keyValue").setToNode("DECLpoint_INSTANCE_PI1").setToField("keyValue"))
            .addChild(new ROUTEObject().setFromNode("DECLpoint_INSTANCE_PI1").setFromField("value_changed").setToNode("DECLpoint_INSTANCE_node").setToField("set_translation"))
            .addChild(new ROUTEObject().setFromNode("DECLpoint_INSTANCE_MB1").setFromField("translation_changed").setToNode("DECLpoint_INSTANCE_node").setToField("set_translation"))))
        .addChild(new TransformObject().setDEF("G2")
          .addChild(new TransformObject().setDEF("DECLpoint_INSTANCE1000_node")
            .addChild(new ShapeObject()
              .setGeometry(new SphereObject().setRadius(0.1))
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(Java.to([1,0,0], Java.type("float[]"))))))
            .addChild(new PositionInterpolatorObject().setDEF("DECLpoint_INSTANCE1000_PI1").setKey(Java.to([0,1], Java.type("float[]"))).setKeyValue(Java.to([0,0,0,0,5,0], Java.type("float[]"))))
            .addChild(new ScriptObject().setDEF("DECLpoint_INSTANCE1000_MB1")
              .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
              .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("old").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
              .addField(new fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_location").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("keyValue").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0 0 5 0"))
              .setSourceCode("ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f(old, translation);\n"+
"               }"))
            .addChild(new TimeSensorObject().setDEF("DECLpoint_INSTANCE1000_CL1").setCycleInterval(3).setLoop(true))
            .addChild(new ROUTEObject().setFromNode("DECLpoint_INSTANCE1000_CL1").setFromField("cycleTime").setToNode("DECLpoint_INSTANCE1000_MB1").setToField("set_location"))
            .addChild(new ROUTEObject().setFromNode("DECLpoint_INSTANCE1000_CL1").setFromField("fraction_changed").setToNode("DECLpoint_INSTANCE1000_PI1").setToField("set_fraction"))
            .addChild(new ROUTEObject().setFromNode("DECLpoint_INSTANCE1000_MB1").setFromField("keyValue").setToNode("DECLpoint_INSTANCE1000_PI1").setToField("keyValue"))
            .addChild(new ROUTEObject().setFromNode("DECLpoint_INSTANCE1000_PI1").setFromField("value_changed").setToNode("DECLpoint_INSTANCE1000_node").setToField("set_translation"))
            .addChild(new ROUTEObject().setFromNode("DECLpoint_INSTANCE1000_MB1").setFromField("translation_changed").setToNode("DECLpoint_INSTANCE1000_node").setToField("set_translation"))))
        .addChild(new TransformObject().setDEF("transC1")
          .addChild(new TransformObject().setDEF("rotscaleC1")
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0.2,0.7,0.7], Java.type("float[]"))).setTransparency(0.5)))
              .setGeometry(new CylinderObject().setRadius(0.05)))))
        .addChild(new ScriptObject().setDEF("DECLx3dconnector_connector1_S1")
          .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("startnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new TransformObject().setUSE("G1")))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("endnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new TransformObject().setUSE("G2")))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("transC1").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new TransformObject().setUSE("transC1")))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("rotscaleC1").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new TransformObject().setUSE("rotscaleC1")))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .setSourceCode("ecmascript:\n"+
"        function recompute(startpoint,endpoint){\n"+
"	    if (typeof endpoint === 'undefined') {\n"+
"		return;\n"+
"	    }\n"+
"            var dif = endpoint.subtract(startpoint);\n"+
"            var dist = dif.length()*0.5;\n"+
"            var dif2 = dif.multiply(0.5);\n"+
"            var norm = dif.normalize();\n"+
"            var transl = startpoint.add(dif2);\n"+
"	    if (typeof Quaternion !== 'undefined') {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)\n"+
"		    };\n"+
"	    } else {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)\n"+
"		    };\n"+
"	    }\n"+
"	}\n"+
"	function recompute_and_route(startpoint, endpoint) {\n"+
"	      var trafo = recompute(startpoint, endpoint);\n"+
"	      transC1.translation = trafo.translation;\n"+
"	      rotscaleC1.rotation = trafo.rotation;\n"+
"	      rotscaleC1.scale = trafo.scale;\n"+
"	}\n"+
"        function initialize(){\n"+
"            recompute_and_route(startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_startpoint(val,t){\n"+
"            recompute_and_route(val,endnode.translation);\n"+
"        }\n"+
"        function set_endpoint(val,t){\n"+
"            recompute_and_route(startnode.translation,val);\n"+
"        }"))
        .addChild(new ROUTEObject().setFromNode("G1").setFromField("translation_changed").setToNode("DECLx3dconnector_connector1_S1").setToField("set_startpoint"))
        .addChild(new ROUTEObject().setFromNode("G2").setFromField("translation_changed").setToNode("DECLx3dconnector_connector1_S1").setToField("set_endpoint")))      ;
    X3D0.toFileX3D("../data/arc2.new.x3d");
