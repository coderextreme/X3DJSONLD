var java = require('java');
var autoclass = require('../../../X3Dautoclass.js');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroesSync(true);
      var X3D0 =  new autoclass.X3D().setProfileSync("Immersive").setVersionSync("3.3")
      .setHeadSync(new autoclass.head()
        .addMetaSync(new autoclass.meta().setNameSync("title").setContentSync("arc1.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("creator").setContentSync("Lost, Doug Sanden I think"))
        .addMetaSync(new autoclass.meta().setNameSync("generator").setContentSync("manual"))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("a generic proto to connect two objects")))
      .setSceneSync(new autoclass.Scene()
        .addChildSync(new autoclass.Viewpoint().setPositionSync(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(5)])).setDescriptionSync("Only Viewpoint"))
        .addChildSync(new autoclass.Background().setSkyColorSync(java.newArray("float", [java.newFloat(0.4), java.newFloat(0.4), java.newFloat(0.4)])))
        .addChildSync(new autoclass.Transform().setDEFSync("G1")
          .addChildSync(new autoclass.Transform().setDEFSync("DECLpoint_INSTANCE_node")
            .addChildSync(new autoclass.Shape()
              .setGeometrySync(new autoclass.Sphere().setRadiusSync(java.newFloat(0.1)))
              .setAppearanceSync(new autoclass.Appearance()
                .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)])))))
            .addChildSync(new autoclass.PositionInterpolator().setDEFSync("DECLpoint_INSTANCE_PI1").setKeySync(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValueSync(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(5), java.newFloat(0)])))
            .addChildSync(new autoclass.Script().setDEFSync("DECLpoint_INSTANCE_MB1")
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("translation").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0 0 0"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("old").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0 0 0"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFTIME).setNameSync("set_location").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFVEC3F).setNameSync("keyValue").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0 0 0 0 5 0"))
              .setSourceCodeSync("ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f(old, translation);\n"+
"               }"))
            .addChildSync(new autoclass.TimeSensor().setDEFSync("DECLpoint_INSTANCE_CL1").setCycleIntervalSync(3).setLoopSync(true))
            .addChildSync(new autoclass.ROUTE().setFromNodeSync("DECLpoint_INSTANCE_CL1").setFromFieldSync("cycleTime").setToNodeSync("DECLpoint_INSTANCE_MB1").setToFieldSync("set_location"))
            .addChildSync(new autoclass.ROUTE().setFromNodeSync("DECLpoint_INSTANCE_CL1").setFromFieldSync("fraction_changed").setToNodeSync("DECLpoint_INSTANCE_PI1").setToFieldSync("set_fraction"))
            .addChildSync(new autoclass.ROUTE().setFromNodeSync("DECLpoint_INSTANCE_MB1").setFromFieldSync("keyValue").setToNodeSync("DECLpoint_INSTANCE_PI1").setToFieldSync("keyValue"))
            .addChildSync(new autoclass.ROUTE().setFromNodeSync("DECLpoint_INSTANCE_PI1").setFromFieldSync("value_changed").setToNodeSync("DECLpoint_INSTANCE_node").setToFieldSync("set_translation"))
            .addChildSync(new autoclass.ROUTE().setFromNodeSync("DECLpoint_INSTANCE_MB1").setFromFieldSync("translation_changed").setToNodeSync("DECLpoint_INSTANCE_node").setToFieldSync("set_translation"))))
        .addChildSync(new autoclass.Transform().setDEFSync("G2")
          .addChildSync(new autoclass.Transform().setDEFSync("DECLpoint_INSTANCE1000_node")
            .addChildSync(new autoclass.Shape()
              .setGeometrySync(new autoclass.Sphere().setRadiusSync(java.newFloat(0.1)))
              .setAppearanceSync(new autoclass.Appearance()
                .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)])))))
            .addChildSync(new autoclass.PositionInterpolator().setDEFSync("DECLpoint_INSTANCE1000_PI1").setKeySync(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValueSync(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(5), java.newFloat(0)])))
            .addChildSync(new autoclass.Script().setDEFSync("DECLpoint_INSTANCE1000_MB1")
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("translation").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0 0 0"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("old").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0 0 0"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFTIME).setNameSync("set_location").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFVEC3F).setNameSync("keyValue").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0 0 0 0 5 0"))
              .setSourceCodeSync("ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f(old, translation);\n"+
"               }"))
            .addChildSync(new autoclass.TimeSensor().setDEFSync("DECLpoint_INSTANCE1000_CL1").setCycleIntervalSync(3).setLoopSync(true))
            .addChildSync(new autoclass.ROUTE().setFromNodeSync("DECLpoint_INSTANCE1000_CL1").setFromFieldSync("cycleTime").setToNodeSync("DECLpoint_INSTANCE1000_MB1").setToFieldSync("set_location"))
            .addChildSync(new autoclass.ROUTE().setFromNodeSync("DECLpoint_INSTANCE1000_CL1").setFromFieldSync("fraction_changed").setToNodeSync("DECLpoint_INSTANCE1000_PI1").setToFieldSync("set_fraction"))
            .addChildSync(new autoclass.ROUTE().setFromNodeSync("DECLpoint_INSTANCE1000_MB1").setFromFieldSync("keyValue").setToNodeSync("DECLpoint_INSTANCE1000_PI1").setToFieldSync("keyValue"))
            .addChildSync(new autoclass.ROUTE().setFromNodeSync("DECLpoint_INSTANCE1000_PI1").setFromFieldSync("value_changed").setToNodeSync("DECLpoint_INSTANCE1000_node").setToFieldSync("set_translation"))
            .addChildSync(new autoclass.ROUTE().setFromNodeSync("DECLpoint_INSTANCE1000_MB1").setFromFieldSync("translation_changed").setToNodeSync("DECLpoint_INSTANCE1000_node").setToFieldSync("set_translation"))))
        .addChildSync(new autoclass.Transform().setDEFSync("transC1")
          .addChildSync(new autoclass.Transform().setDEFSync("rotscaleC1")
            .addChildSync(new autoclass.Shape()
              .setAppearanceSync(new autoclass.Appearance()
                .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(0.2), java.newFloat(0.7), java.newFloat(0.7)])).setTransparencySync(java.newFloat(0.5))))
              .setGeometrySync(new autoclass.Cylinder().setRadiusSync(java.newFloat(0.05))))))
        .addChildSync(new autoclass.Script().setDEFSync("DECLx3dconnector_connector1_S1")
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFNODE).setNameSync("startnode").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY)
            .addChildSync(new autoclass.Transform().setUSESync("G1")))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFNODE).setNameSync("endnode").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY)
            .addChildSync(new autoclass.Transform().setUSESync("G2")))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFNODE).setNameSync("transC1").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY)
            .addChildSync(new autoclass.Transform().setUSESync("transC1")))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFNODE).setNameSync("rotscaleC1").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY)
            .addChildSync(new autoclass.Transform().setUSESync("rotscaleC1")))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("set_startpoint").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
          .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("set_endpoint").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
          .setSourceCodeSync("ecmascript:\n"+
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
        .addChildSync(new autoclass.ROUTE().setFromNodeSync("G1").setFromFieldSync("translation_changed").setToNodeSync("DECLx3dconnector_connector1_S1").setToFieldSync("set_startpoint"))
        .addChildSync(new autoclass.ROUTE().setFromNodeSync("G2").setFromFieldSync("translation_changed").setToNodeSync("DECLx3dconnector_connector1_S1").setToFieldSync("set_endpoint")))      ;
    X3D0.toFileX3D("../data/arc2.new.x3d");
