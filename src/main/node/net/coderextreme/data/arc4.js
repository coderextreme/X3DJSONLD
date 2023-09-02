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
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("title").setContent("arc4.x3d"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Lost, Doug Sanden I think"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("manual"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("a generic proto to connect two objects")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.Viewpoint()).setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(5)])).setDescription("Only Viewpoint"))
        .addChild((new autoclass.Background()).setSkyColor(java.newArray("float", [java.newFloat(0.4), java.newFloat(0.4), java.newFloat(0.4)])))
        .addChild((new autoclass.Transform()).setDEF("DECLpoint_G1_node")
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Sphere()).setRadius(java.newFloat(0.1)))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)])))))
          .addChild((new autoclass.PositionInterpolator()).setDEF("DECLpoint_G1_PI1").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(5), java.newFloat(0)])))
          .addChild((new autoclass.Script()).setDEF("DECLpoint_G1_MB1")
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("translation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("old").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFTIME).setName("set_location").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFVEC3F).setName("keyValue").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0 0 5 0"))
            .setSourceCode("ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}"))
          .addChild((new autoclass.TimeSensor()).setDEF("DECLpoint_G1_CL1").setCycleInterval(3).setLoop(true))
          .addChild((new autoclass.ROUTE()).setFromNode("DECLpoint_G1_CL1").setFromField("cycleTime").setToNode("DECLpoint_G1_MB1").setToField("set_location"))
          .addChild((new autoclass.ROUTE()).setFromNode("DECLpoint_G1_CL1").setFromField("fraction_changed").setToNode("DECLpoint_G1_PI1").setToField("set_fraction"))
          .addChild((new autoclass.ROUTE()).setFromNode("DECLpoint_G1_MB1").setFromField("keyValue").setToNode("DECLpoint_G1_PI1").setToField("keyValue"))
          .addChild((new autoclass.ROUTE()).setFromNode("DECLpoint_G1_PI1").setFromField("value_changed").setToNode("DECLpoint_G1_node").setToField("set_translation")))
        .addChild((new autoclass.Transform()).setDEF("DECLpoint_G2_node")
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Sphere()).setRadius(java.newFloat(0.1)))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)])))))
          .addChild((new autoclass.PositionInterpolator()).setDEF("DECLpoint_G2_PI1").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(5), java.newFloat(0)])))
          .addChild((new autoclass.Script()).setDEF("DECLpoint_G2_MB1")
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("translation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("old").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFTIME).setName("set_location").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFVEC3F).setName("keyValue").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0 0 5 0"))
            .setSourceCode("ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}"))
          .addChild((new autoclass.TimeSensor()).setDEF("DECLpoint_G2_CL1").setCycleInterval(3).setLoop(true))
          .addChild((new autoclass.ROUTE()).setFromNode("DECLpoint_G2_CL1").setFromField("cycleTime").setToNode("DECLpoint_G2_MB1").setToField("set_location"))
          .addChild((new autoclass.ROUTE()).setFromNode("DECLpoint_G2_CL1").setFromField("fraction_changed").setToNode("DECLpoint_G2_PI1").setToField("set_fraction"))
          .addChild((new autoclass.ROUTE()).setFromNode("DECLpoint_G2_MB1").setFromField("keyValue").setToNode("DECLpoint_G2_PI1").setToField("keyValue"))
          .addChild((new autoclass.ROUTE()).setFromNode("DECLpoint_G2_PI1").setFromField("value_changed").setToNode("DECLpoint_G2_node").setToField("set_translation")))
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Transform()).setDEF("DECLx3dconnector_connector1_trans")
            .addChild((new autoclass.Transform()).setDEF("DECLx3dconnector_connector1_rotscale")
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0.2), java.newFloat(0.7), java.newFloat(0.7)])).setTransparency(java.newFloat(0.5))))
                .setGeometry((new autoclass.Cylinder()).setRadius(java.newFloat(0.05))))))
          .addChild((new autoclass.Script()).setDEF("DECLx3dconnector_connector1_S1")
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setName("startnode").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setName("endnode").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setName("position").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT)
              .addChild((new autoclass.Transform()).setUSE("DECLx3dconnector_connector1_trans")))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setName("rotscale").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT)
              .addChild((new autoclass.Transform()).setUSE("DECLx3dconnector_connector1_rotscale")))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
            .setSourceCode("ecmascript:\n"+
"        function recompute(startpoint,endpoint){\n"+
"	    if (typeof endpoint === 'undefined') {\n"+
"		    if (typeof Quaternion !== 'undefined') {\n"+
"			    return {\n"+
"				    scale : new SFVec3f(1.0,1.0,1.0),\n"+
"				    translation : new SFVec3f(1.0,1.0,1.0),\n"+
"			    	    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), 1.0)\n"+
"			    };\n"+
"	    	    } else if (typeof SFRotation !== 'undefined') {\n"+
"			    return {\n"+
"				    scale : new SFVec3f(1.0,1.0,1.0),\n"+
"				    translation : new SFVec3f(1.0,1.0,1.0),\n"+
"			    	    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),1.0)\n"+
"			    };\n"+
"	    	    } else {\n"+
"			    return {\n"+
"				    scale : new SFVec3f(1.0,1.0,1.0),\n"+
"				    translation : new SFVec3f(1.0,1.0,1.0)\n"+
"			    };\n"+
"		    }\n"+
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
"        }")))
        .addChild((new autoclass.ROUTE()).setFromNode("DECLpoint_G1_node").setFromField("translation_changed").setToNode("DECLx3dconnector_connector1_S1").setToField("set_startpoint"))
        .addChild((new autoclass.ROUTE()).setFromNode("DECLpoint_G2_node").setFromField("translation_changed").setToNode("DECLx3dconnector_connector1_S1").setToField("set_endpoint")))      ;
    X3D0.toFileX3D("../data/arc4.new.node.x3d");
    process.exit(0);
