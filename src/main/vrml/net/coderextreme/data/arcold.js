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
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("arcold.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/arc.x3d"))
        .addMeta(new meta().setName("description").setContent("an attempt to implement an arc in a graph")))
      .setScene(new Scene()
        .addChild(new Viewpoint().setPosition(java.newArray("float", [0,0,5])).setDescription("a moving graph"))
        .addChild(new Background().setSkyColor(java.newArray("float", [0.4,0.4,0.4])))
        .addChild(new Transform().setDEF("trans1")
          .addChild(new Transform().setDEF("rotscale1")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(java.newArray("float", [0.2,0.7,0.7]))))
              .setGeometry(new Cylinder().setRadius(0.1)))))
        .addChild(new Transform().setDEF("trans2")
          .addChild(new Transform().setDEF("rotscale2")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(java.newArray("float", [0.2,0.7,0.7]))))
              .setGeometry(new Cylinder().setRadius(0.1)))))
        .addChild(new Transform().setDEF("trans3")
          .addChild(new Transform().setDEF("rotscale3")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(java.newArray("float", [0.2,0.7,0.7]))))
              .setGeometry(new Cylinder().setRadius(0.1)))))
        .addChild(new ProtoDeclare().setName("point")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform().setDEF("node")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("translation")))
              .addChild(new Shape()
                .setGeometry(new Sphere().setRadius(0.1))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(java.newArray("float", [1,0,0])))))
              .addChild(new PositionInterpolator().setDEF("PI1").setKey(java.newArray("float", [0,1])).setKeyValue(java.newArray("float", [0,0,0,0,5,0])))
              .addChild(new Script().setDEF("MB1")
                .addField(new field().setType(field.TYPE_SFVEC3F).setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("50 50 0"))
                .addField(new field().setType(field.TYPE_SFVEC3F).setName("old").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField(new field().setType(field.TYPE_SFTIME).setName("set_location").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType(field.TYPE_MFVEC3F).setName("keyValue").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(translation);\n"+
"		}"))
              .addChild(new TimeSensor().setDEF("CL1").setCycleInterval(3).setLoop(true))
              .addChild(new ROUTE().setFromNode("CL1").setFromField("cycleTime").setToNode("MB1").setToField("set_location"))
              .addChild(new ROUTE().setFromNode("CL1").setFromField("fraction_changed").setToNode("PI1").setToField("set_fraction"))
              .addChild(new ROUTE().setFromNode("MB1").setFromField("keyValue").setToNode("PI1").setToField("keyValue"))
              .addChild(new ROUTE().setFromNode("PI1").setFromField("value_changed").setToNode("node").setToField("set_translation")))))
        .addComments(new CommentsBlock("from doug sanden"))
        .addChild(new ProtoDeclare().setName("x3dconnector")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFNODE).setName("startnode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType(field.TYPE_SFNODE).setName("endnode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType(field.TYPE_SFNODE).setName("transnode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType(field.TYPE_SFNODE).setName("rotscalenode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(field.ACCESSTYPE_INPUTONLY)))
          .setProtoBody(new ProtoBody()
            .addChild(new Script().setDEF("S1")
              .addField(new field().setType(field.TYPE_SFNODE).setName("startnode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
              .addField(new field().setType(field.TYPE_SFNODE).setName("endnode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
              .addField(new field().setType(field.TYPE_SFNODE).setName("transnode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
              .addField(new field().setType(field.TYPE_SFNODE).setName("rotscalenode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
              .addField(new field().setType(field.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setType(field.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("startnode").setProtoField("startnode"))
                .addConnect(new connect().setNodeField("endnode").setProtoField("endnode"))
                .addConnect(new connect().setNodeField("transnode").setProtoField("transnode"))
                .addConnect(new connect().setNodeField("rotscalenode").setProtoField("rotscalenode"))
                .addConnect(new connect().setNodeField("set_startpoint").setProtoField("set_startpoint"))
                .addConnect(new connect().setNodeField("set_endpoint").setProtoField("set_endpoint")))
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
"		var trafo = recompute(startpoint, endpoint);\n"+
"		if (typeof trafo !== 'undefined') {\n"+
"			transnode.translation = trafo.translation;\n"+
"			rotscalenode.rotation = trafo.rotation;\n"+
"			rotscalenode.scale = trafo.scale;\n"+
"		} else {\n"+
"			Browser.print(\"recompute returned undefined\");\n"+
"		}\n"+
"	}\n"+
"        function initialize(){\n"+
"            recompute_and_route(startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_startpoint(val,t){\n"+
"            recompute_and_route(val || startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_endpoint(val,t){\n"+
"            recompute_and_route(startnode.translation,val || endnode.translation);\n"+
"        }"))))
        .addChild(ProtoInstance0 = new ProtoInstance().setName("point").setDEF("G1"))
        .addChild(ProtoInstance1 = new ProtoInstance().setName("point").setDEF("G2"))
        .addChild(ProtoInstance2 = new ProtoInstance().setName("point").setDEF("G3"))
        .addChild(ProtoInstance3 = new ProtoInstance().setName("point").setDEF("G4"))
        .addChild(ProtoInstance4 = new ProtoInstance().setName("x3dconnector").setDEF("connector1"))
        .addChild(ProtoInstance7 = new ProtoInstance().setName("x3dconnector").setDEF("connector2"))
        .addChild(ProtoInstance10 = new ProtoInstance().setName("x3dconnector").setDEF("connector3"))
        .addChild(new ROUTE().setFromNode("G1").setFromField("translation_changed").setToNode("connector1").setToField("set_startpoint"))
        .addChild(new ROUTE().setFromNode("G2").setFromField("translation_changed").setToNode("connector1").setToField("set_endpoint"))
        .addChild(new ROUTE().setFromNode("G1").setFromField("translation_changed").setToNode("connector2").setToField("set_startpoint"))
        .addChild(new ROUTE().setFromNode("G3").setFromField("translation_changed").setToNode("connector2").setToField("set_endpoint"))
        .addChild(new ROUTE().setFromNode("G1").setFromField("translation_changed").setToNode("connector3").setToField("set_startpoint"))
        .addChild(new ROUTE().setFromNode("G4").setFromField("translation_changed").setToNode("connector3").setToField("set_endpoint")))      ;
ProtoInstance4
          .addFieldValue(new fieldValue().setName("startnode")
            .addChild(ProtoInstance5 = new ProtoInstance().setUSE("G1")));
ProtoInstance4
          .addFieldValue(new fieldValue().setName("endnode")
            .addChild(ProtoInstance6 = new ProtoInstance().setUSE("G2")));
ProtoInstance4
          .addFieldValue(new fieldValue().setName("transnode")
            .addChild(new Transform().setUSE("trans1")));
ProtoInstance4
          .addFieldValue(new fieldValue().setName("rotscalenode")
            .addChild(new Transform().setUSE("rotscale1")));
ProtoInstance7
          .addFieldValue(new fieldValue().setName("startnode")
            .addChild(ProtoInstance8 = new ProtoInstance().setUSE("G1")));
ProtoInstance7
          .addFieldValue(new fieldValue().setName("endnode")
            .addChild(ProtoInstance9 = new ProtoInstance().setUSE("G3")));
ProtoInstance7
          .addFieldValue(new fieldValue().setName("transnode")
            .addChild(new Transform().setUSE("trans2")));
ProtoInstance7
          .addFieldValue(new fieldValue().setName("rotscalenode")
            .addChild(new Transform().setUSE("rotscale2")));
ProtoInstance10
          .addFieldValue(new fieldValue().setName("startnode")
            .addChild(ProtoInstance11 = new ProtoInstance().setUSE("G1")));
ProtoInstance10
          .addFieldValue(new fieldValue().setName("endnode")
            .addChild(ProtoInstance12 = new ProtoInstance().setUSE("G4")));
ProtoInstance10
          .addFieldValue(new fieldValue().setName("transnode")
            .addChild(new Transform().setUSE("trans3")));
ProtoInstance10
          .addFieldValue(new fieldValue().setName("rotscalenode")
            .addChild(new Transform().setUSE("rotscale3")));
    X3D0.toFileX3D("../data/arcold.new.x3d");
