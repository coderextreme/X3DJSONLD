load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("arc4.x3d"))
        .addMeta(new meta().setName("creator").setContent("Lost, Doug Sanden I think"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d"))
        .addMeta(new meta().setName("description").setContent("a generic proto to connect two objects")))
      .setScene(new Scene()
        .addChild(new Viewpoint().setPosition(Java.to([0,0,5], Java.type("double[]"))).setDescription("Only Viewpoint"))
        .addChild(new Background().setSkyColor(Java.to([0.4,0.4,0.4], Java.type("double[]"))))
        .addChild(new Transform().setDEF("DECLpoint_G1_node")
          .addChild(new Shape()
            .setGeometry(new Sphere().setRadius(0.1))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(Java.to([1,0,0], Java.type("double[]"))))))
          .addChild(new PositionInterpolator().setDEF("DECLpoint_G1_PI1").setKey(Java.to([0,1], Java.type("double[]"))).setKeyValue(Java.to([0,0,0,0,5,0], Java.type("double[]"))))
          .addChild(new Script().setDEF("DECLpoint_G1_MB1")
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("old").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType(field.TYPE_SFTIME).setName("set_location").setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setType(field.TYPE_MFVEC3F).setName("keyValue").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0 0 5 0"))
            .setSourceCode(`ecmascript:
		function set_location(value) {
                    old = translation;
		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);
                    keyValue = new MFVec3f([old, translation]);
		    // Browser.println(keyValue);
		}`))
          .addChild(new TimeSensor().setDEF("DECLpoint_G1_CL1").setCycleInterval(3).setLoop(true))
          .addChild(new ROUTE().setFromNode("DECLpoint_G1_CL1").setFromField("cycleTime").setToNode("DECLpoint_G1_MB1").setToField("set_location"))
          .addChild(new ROUTE().setFromNode("DECLpoint_G1_CL1").setFromField("fraction_changed").setToNode("DECLpoint_G1_PI1").setToField("set_fraction"))
          .addChild(new ROUTE().setFromNode("DECLpoint_G1_MB1").setFromField("keyValue").setToNode("DECLpoint_G1_PI1").setToField("keyValue"))
          .addChild(new ROUTE().setFromNode("DECLpoint_G1_PI1").setFromField("value_changed").setToNode("DECLpoint_G1_node").setToField("set_translation")))
        .addChild(new Transform().setDEF("DECLpoint_G2_node")
          .addChild(new Shape()
            .setGeometry(new Sphere().setRadius(0.1))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(Java.to([1,0,0], Java.type("double[]"))))))
          .addChild(new PositionInterpolator().setDEF("DECLpoint_G2_PI1").setKey(Java.to([0,1], Java.type("double[]"))).setKeyValue(Java.to([0,0,0,0,5,0], Java.type("double[]"))))
          .addChild(new Script().setDEF("DECLpoint_G2_MB1")
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("old").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType(field.TYPE_SFTIME).setName("set_location").setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setType(field.TYPE_MFVEC3F).setName("keyValue").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0 0 5 0"))
            .setSourceCode(`ecmascript:
		function set_location(value) {
                    old = translation;
		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);
                    keyValue = new MFVec3f([old, translation]);
		    // Browser.println(keyValue);
		}`))
          .addChild(new TimeSensor().setDEF("DECLpoint_G2_CL1").setCycleInterval(3).setLoop(true))
          .addChild(new ROUTE().setFromNode("DECLpoint_G2_CL1").setFromField("cycleTime").setToNode("DECLpoint_G2_MB1").setToField("set_location"))
          .addChild(new ROUTE().setFromNode("DECLpoint_G2_CL1").setFromField("fraction_changed").setToNode("DECLpoint_G2_PI1").setToField("set_fraction"))
          .addChild(new ROUTE().setFromNode("DECLpoint_G2_MB1").setFromField("keyValue").setToNode("DECLpoint_G2_PI1").setToField("keyValue"))
          .addChild(new ROUTE().setFromNode("DECLpoint_G2_PI1").setFromField("value_changed").setToNode("DECLpoint_G2_node").setToField("set_translation")))
        .addChild(new Group()
          .addChild(new Transform().setDEF("DECLx3dconnector_connector1_trans")
            .addChild(new Transform().setDEF("DECLx3dconnector_connector1_rotscale")
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(Java.to([0.2,0.7,0.7], Java.type("double[]"))).setTransparency(0.5)))
                .setGeometry(new Cylinder().setRadius(0.05)))))
          .addChild(new Script().setDEF("DECLx3dconnector_connector1_S1")
            .addField(new field().setType(field.TYPE_SFNODE).setName("startnode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setType(field.TYPE_SFNODE).setName("endnode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setType(field.TYPE_SFNODE).setName("position").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new Transform().setUSE("DECLx3dconnector_connector1_trans")))
            .addField(new field().setType(field.TYPE_SFNODE).setName("rotscale").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new Transform().setUSE("DECLx3dconnector_connector1_rotscale")))
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(field.ACCESSTYPE_INPUTONLY))
            .setSourceCode(`ecmascript:
        function recompute(startpoint,endpoint){
	    if (typeof endpoint === 'undefined') {
		    if (typeof Quaternion !== 'undefined') {
			    return {
				    scale : new SFVec3f(1.0,1.0,1.0),
				    translation : new SFVec3f(1.0,1.0,1.0),
			    	    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), 1.0)
			    };
	    	    } else if (typeof SFRotation !== 'undefined') {
			    return {
				    scale : new SFVec3f(1.0,1.0,1.0),
				    translation : new SFVec3f(1.0,1.0,1.0),
			    	    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),1.0)
			    };
	    	    } else {
			    return {
				    scale : new SFVec3f(1.0,1.0,1.0),
				    translation : new SFVec3f(1.0,1.0,1.0)
			    };
		    }
	    }
            var dif = endpoint.subtract(startpoint);
            var dist = dif.length()*0.5;
            var dif2 = dif.multiply(0.5);
            var norm = dif.normalize();
            var transl = startpoint.add(dif2);
	    if (typeof Quaternion !== 'undefined') {
		    return {
			    scale : new SFVec3f(1.0,dist,1.0),
			    translation : transl,
			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)
		    };
	    } else if (typeof SFRotation !== 'undefined') {
		    return {
			    scale : new SFVec3f(1.0,dist,1.0),
			    translation : transl,
			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)
		    };
	    } else {
		    return {
			    scale : new SFVec3f(1.0,dist,1.0),
			    translation : transl
		    };
	    }
	}
	function recompute_and_route(startpoint, endpoint) {
	      var trafo = recompute(startpoint, endpoint);
	      position.translation = trafo.translation;
	      rotscale.rotation = trafo.rotation;
	      rotscale.scale = trafo.scale;
	}
        function initialize(){
            recompute_and_route(startnode.translation,endnode.translation);
        }
        function set_startpoint(val,t){
            recompute_and_route(val,endnode.translation);
        }
        function set_endpoint(val,t){
            recompute_and_route(startnode.translation,val);
        }`)))
        .addChild(new ROUTE().setFromNode("DECLpoint_G1_node").setFromField("translation_changed").setToNode("DECLx3dconnector_connector1_S1").setToField("set_startpoint"))
        .addChild(new ROUTE().setFromNode("DECLpoint_G2_node").setFromField("translation_changed").setToNode("DECLx3dconnector_connector1_S1").setToField("set_endpoint")))      ;
    X3D0.toFileX3D("../data/arc4.new.graal.x3d");
    X3D0.toFileJSON("../data/arc4.new.graal.json");
