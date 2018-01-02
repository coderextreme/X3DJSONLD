load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
var ProtoInstance3 = null;
var ProtoInstance4 = null;
var ProtoInstance5 = null;
var ProtoInstance6 = null;
var ProtoInstance7 = null;
var ProtoInstance8 = null;
var ProtoInstance9 = null;
var ProtoInstance10 = null;
var ProtoInstance11 = null;
var ProtoInstance12 = null;
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
        .addChild(new ProtoDeclareObject().setName("point")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject().setDEF("node")
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("translation").setProtoField("translation")))
              .addChild(new ShapeObject()
                .setGeometry(new SphereObject().setRadius(0.1))
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDiffuseColor(Java.to([1,0,0], Java.type("float[]"))))))
              .addChild(new PositionInterpolatorObject().setDEF("PI1").setKey(Java.to([0,1], Java.type("float[]"))).setKeyValue(Java.to([0,0,0,0,5,0], Java.type("float[]"))))
              .addChild(new ScriptObject().setDEF("MB1")
                .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("50 50 0"))
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
              .addChild(new TimeSensorObject().setDEF("CL1").setCycleInterval(3).setLoop(true))
              .addChild(new ROUTEObject().setFromNode("CL1").setFromField("cycleTime").setToNode("MB1").setToField("set_location"))
              .addChild(new ROUTEObject().setFromNode("CL1").setFromField("fraction_changed").setToNode("PI1").setToField("set_fraction"))
              .addChild(new ROUTEObject().setFromNode("MB1").setFromField("keyValue").setToNode("PI1").setToField("keyValue"))
              .addChild(new ROUTEObject().setFromNode("PI1").setFromField("value_changed").setToNode("node").setToField("set_translation")))))
        .addChild(new ProtoDeclareObject().setName("x3dconnector")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("startnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("endnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addChild(new TransformObject().setDEF("trans")
                .addChild(new TransformObject().setDEF("rotscale")
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0.2,0.7,0.7], Java.type("float[]"))).setTransparency(0.5)))
                    .setGeometry(new CylinderObject().setRadius(0.05)))))
              .addChild(new ScriptObject().setDEF("S1")
                .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("startnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("endnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
                  .addChild(new TransformObject().setUSE("trans")))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("rotscale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
                  .addChild(new TransformObject().setUSE("rotscale")))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
                .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("startnode").setProtoField("startnode"))
                  .addConnect(new connectObject().setNodeField("endnode").setProtoField("endnode"))
                  .addConnect(new connectObject().setNodeField("set_startpoint").setProtoField("set_startpoint"))
                  .addConnect(new connectObject().setNodeField("set_endpoint").setProtoField("set_endpoint")))
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
"")))))
        .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("point").setDEF("G1"))
        .addChild(ProtoInstance1 = new ProtoInstanceObject().setName("point").setDEF("G2"))
        .addChild(ProtoInstance2 = new ProtoInstanceObject().setName("point").setDEF("G3"))
        .addChild(ProtoInstance3 = new ProtoInstanceObject().setName("point").setDEF("G4"))
        .addChild(ProtoInstance4 = new ProtoInstanceObject().setName("x3dconnector").setDEF("connector1"))
        .addChild(ProtoInstance7 = new ProtoInstanceObject().setName("x3dconnector").setDEF("connector2"))
        .addChild(ProtoInstance10 = new ProtoInstanceObject().setName("x3dconnector").setDEF("connector3"))
        .addChild(new ROUTEObject().setFromNode("G1").setFromField("translation").setToNode("connector1").setToField("set_startpoint"))
        .addChild(new ROUTEObject().setFromNode("G2").setFromField("translation").setToNode("connector1").setToField("set_endpoint"))
        .addChild(new ROUTEObject().setFromNode("G1").setFromField("translation").setToNode("connector2").setToField("set_startpoint"))
        .addChild(new ROUTEObject().setFromNode("G3").setFromField("translation").setToNode("connector2").setToField("set_endpoint"))
        .addChild(new ROUTEObject().setFromNode("G1").setFromField("translation").setToNode("connector3").setToField("set_startpoint"))
        .addChild(new ROUTEObject().setFromNode("G4").setFromField("translation").setToNode("connector3").setToField("set_endpoint")))      ;
ProtoInstance4
          .addFieldValue(new fieldValueObject().setName("startnode")
            .addChild(ProtoInstance5 = new ProtoInstanceObject().setUSE("G1")));
ProtoInstance4
          .addFieldValue(new fieldValueObject().setName("endnode")
            .addChild(ProtoInstance6 = new ProtoInstanceObject().setUSE("G2")));
ProtoInstance4
          .addFieldValue(new fieldValueObject().setName("set_startpoint"));
ProtoInstance4
          .addFieldValue(new fieldValueObject().setName("set_endpoint"));
ProtoInstance7
          .addFieldValue(new fieldValueObject().setName("startnode")
            .addChild(ProtoInstance8 = new ProtoInstanceObject().setUSE("G1")));
ProtoInstance7
          .addFieldValue(new fieldValueObject().setName("endnode")
            .addChild(ProtoInstance9 = new ProtoInstanceObject().setUSE("G3")));
ProtoInstance7
          .addFieldValue(new fieldValueObject().setName("set_startpoint"));
ProtoInstance7
          .addFieldValue(new fieldValueObject().setName("set_endpoint"));
ProtoInstance10
          .addFieldValue(new fieldValueObject().setName("startnode")
            .addChild(ProtoInstance11 = new ProtoInstanceObject().setUSE("G1")));
ProtoInstance10
          .addFieldValue(new fieldValueObject().setName("endnode")
            .addChild(ProtoInstance12 = new ProtoInstanceObject().setUSE("G4")));
ProtoInstance10
          .addFieldValue(new fieldValueObject().setName("set_startpoint"));
ProtoInstance10
          .addFieldValue(new fieldValueObject().setName("set_endpoint"));
    X3D0.toFileX3D("../data/arc.new.x3d");
