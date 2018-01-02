load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("x3dconnectorProto"))
        .addMeta(new metaObject().setName("creator").setContent("Lost, Doug Sanden I think"))
        .addMeta(new metaObject().setName("generator").setContent("manual"))
        .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/x3dconnectorProto.x3d"))
        .addMeta(new metaObject().setName("description").setContent("a generic proto to connect two objects")))
      .setScene(new SceneObject()
        .addChild(new ViewpointObject().setPosition(Java.to([0,0,5], Java.type("float[]"))).setDescription("Only Viewpoint"))
        .addChild(new BackgroundObject().setSkyColor(Java.to([0.4,0.4,0.4], Java.type("float[]"))))
        .addChild(new TransformObject().setDEF("DECLpoint_G1_node")
          .addChild(new ShapeObject()
            .setGeometry(new SphereObject().setRadius(0.1))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(Java.to([1,0,0], Java.type("float[]"))))))
          .addChild(new PositionInterpolatorObject().setDEF("DECLpoint_G1_PI1").setKey(Java.to([0,1], Java.type("float[]"))).setKeyValue(Java.to([0,0,0,0,5,0], Java.type("float[]"))))
          .addChild(new ScriptObject().setDEF("DECLpoint_G1_MB1")
            .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("old").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_location").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("keyValue").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0 0 5 0"))
            .setSourceCode("ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}\n"+
""))
          .addChild(new TimeSensorObject().setDEF("DECLpoint_G1_CL1").setCycleInterval(3).setLoop(true))
          .addChild(new ROUTEObject().setFromNode("DECLpoint_G1_CL1").setFromField("cycleTime").setToNode("DECLpoint_G1_MB1").setToField("set_location"))
          .addChild(new ROUTEObject().setFromNode("DECLpoint_G1_CL1").setFromField("fraction_changed").setToNode("DECLpoint_G1_PI1").setToField("set_fraction"))
          .addChild(new ROUTEObject().setFromNode("DECLpoint_G1_MB1").setFromField("keyValue").setToNode("DECLpoint_G1_PI1").setToField("keyValue"))
          .addChild(new ROUTEObject().setFromNode("DECLpoint_G1_PI1").setFromField("value_changed").setToNode("DECLpoint_G1_node").setToField("set_translation")))
        .addChild(new TransformObject().setDEF("DECLpoint_G2_node")
          .addChild(new ShapeObject()
            .setGeometry(new SphereObject().setRadius(0.1))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(Java.to([1,0,0], Java.type("float[]"))))))
          .addChild(new PositionInterpolatorObject().setDEF("DECLpoint_G2_PI1").setKey(Java.to([0,1], Java.type("float[]"))).setKeyValue(Java.to([0,0,0,0,5,0], Java.type("float[]"))))
          .addChild(new ScriptObject().setDEF("DECLpoint_G2_MB1")
            .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("old").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_location").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("keyValue").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0 0 5 0"))
            .setSourceCode("ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}\n"+
""))
          .addChild(new TimeSensorObject().setDEF("DECLpoint_G2_CL1").setCycleInterval(3).setLoop(true))
          .addChild(new ROUTEObject().setFromNode("DECLpoint_G2_CL1").setFromField("cycleTime").setToNode("DECLpoint_G2_MB1").setToField("set_location"))
          .addChild(new ROUTEObject().setFromNode("DECLpoint_G2_CL1").setFromField("fraction_changed").setToNode("DECLpoint_G2_PI1").setToField("set_fraction"))
          .addChild(new ROUTEObject().setFromNode("DECLpoint_G2_MB1").setFromField("keyValue").setToNode("DECLpoint_G2_PI1").setToField("keyValue"))
          .addChild(new ROUTEObject().setFromNode("DECLpoint_G2_PI1").setFromField("value_changed").setToNode("DECLpoint_G2_node").setToField("set_translation")))
        .addChild(new GroupObject()
          .addChild(new TransformObject().setDEF("DECLx3dconnector_connector1_trans")
            .addChild(new TransformObject().setDEF("DECLx3dconnector_connector1_rotscale")
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0.2,0.7,0.7], Java.type("float[]"))).setTransparency(0.5)))
                .setGeometry(new CylinderObject().setRadius(0.05)))))
          .addChild(new ScriptObject().setDEF("DECLx3dconnector_connector1_S1")
            .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("startnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new GroupObject().setUSE("DECLpoint_G1_node")))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("endnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new GroupObject().setUSE("DECLpoint_G2_node")))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new TransformObject().setUSE("DECLx3dconnector_connector1_trans")))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("rotscale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new TransformObject().setUSE("DECLx3dconnector_connector1_rotscale")))
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
"	    } else if (typeof SFRotation !== 'undefined') {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)\n"+
"		    };\n"+
"	    } else {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl\n"+
"		    };\n"+
"	    }\n"+
"	}\n"+
"	function recompute_and_route(startpoint, endpoint) {\n"+
"	      var trafo = recompute(startpoint, endpoint);\n"+
"	      position.translation = trafo.translation;\n"+
"	      rotscale.rotation = trafo.rotation;\n"+
"	      rotscale.scale = trafo.scale;\n"+
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
"")))
        .addChild(new ROUTEObject().setFromNode("DECLpoint_G1_node").setFromField("translation").setToNode("DECLx3dconnector_connector1_S1").setToField("set_startpoint"))
        .addChild(new ROUTEObject().setFromNode("DECLpoint_G2_node").setFromField("translation").setToNode("DECLx3dconnector_connector1_S1").setToField("set_endpoint")))      ;
    X3D0.toFileX3D("../data/arc3.new.x3d");
