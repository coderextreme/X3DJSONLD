var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("x3dconnectorProto"))
        .addMeta(new meta().setName("creator").setContent("Lost, Doug Sanden I think"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/x3dconnectorProto.x3d"))
        .addMeta(new meta().setName("description").setContent("a generic proto to connect two objects")))
      .setScene(new Scene()
        .addChild(new Viewpoint().setPosition(java.newArray("float", [0,0,5])).setDescription("Only Viewpoint"))
        .addChild(new Background().setSkyColor(java.newArray("float", [0.4,0.4,0.4])))
        .addChild(new Transform().setDEF("G1")
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(java.newArray("float", [0.7,0.2,0.2]))))
            .setGeometry(new Sphere().setRadius(0.1)))
          .addChild(new PlaneSensor().setDescription("Grab to move").setDEF("PS1"))
          .addChild(new ROUTE().setFromNode("PS1").setFromField("translation_changed").setToNode("G1").setToField("set_translation")))
        .addChild(new Transform().setDEF("G2").setTranslation(java.newArray("float", [1,-1,0.01]))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(java.newArray("float", [0.2,0.7,0.2]))))
            .setGeometry(new Sphere().setRadius(0.1)))
          .addChild(new PlaneSensor().setDescription("Grab to move").setOffset(java.newArray("float", [1,-1,0.01])).setDEF("PS2"))
          .addChild(new ROUTE().setFromNode("PS2").setFromField("translation_changed").setToNode("G2").setToField("set_translation")))
        .addChild(new Transform().setDEF("G3").setTranslation(java.newArray("float", [1,1,0.01]))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(java.newArray("float", [0.2,0.7,0.2]))))
            .setGeometry(new Sphere().setRadius(0.1)))
          .addChild(new PlaneSensor().setDescription("Grab to move").setOffset(java.newArray("float", [1,1,0.01])).setDEF("PS3"))
          .addChild(new ROUTE().setFromNode("PS3").setFromField("translation_changed").setToNode("G3").setToField("set_translation")))
        .addChild(new Transform().setDEF("G4").setTranslation(java.newArray("float", [-1,1,0.01]))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(java.newArray("float", [0.2,0.7,0.2]))))
            .setGeometry(new Sphere().setRadius(0.1)))
          .addChild(new PlaneSensor().setDescription("Grab to move").setOffset(java.newArray("float", [-1,1,0.01])).setDEF("PS4"))
          .addChild(new ROUTE().setFromNode("PS4").setFromField("translation_changed").setToNode("G4").setToField("set_translation")))
        .addChild(new Transform().setDEF("transC1")
          .addChild(new Transform().setDEF("rotscaleC1")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(java.newArray("float", [0.2,0.7,0.7])).setTransparency(0.5)))
              .setGeometry(new Cylinder().setRadius(0.05)))))
        .addChild(new Transform().setDEF("transC2")
          .addChild(new Transform().setDEF("rotscaleC2")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(java.newArray("float", [0.2,0.7,0.7])).setTransparency(0.5)))
              .setGeometry(new Cylinder().setRadius(0.05)))))
        .addChild(new Transform().setDEF("transC3")
          .addChild(new Transform().setDEF("rotscaleC3")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(java.newArray("float", [0.2,0.7,0.7])).setTransparency(0.5)))
              .setGeometry(new Cylinder().setRadius(0.05)))))
        .addChild(new ProtoDeclare().setName("x3dconnector")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFNODE).setName("startnode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setType(field.TYPE_SFNODE).setName("endnode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setType(field.TYPE_SFNODE).setName("transnode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setType(field.TYPE_SFNODE).setName("rotscalenode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(field.ACCESSTYPE_INPUTONLY)))
          .setProtoBody(new ProtoBody()
            .addChild(new Script().setDEF("S1")
              .addField(new field().setType(field.TYPE_SFNODE).setName("startnode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
              .addField(new field().setType(field.TYPE_SFNODE).setName("endnode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
              .addField(new field().setType(field.TYPE_SFNODE).setName("transnode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
              .addField(new field().setType(field.TYPE_SFNODE).setName("rotscalenode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
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
"	      var trafo = recompute(startpoint, endpoint);\n"+
"	      transnode.translation = trafo.translation;\n"+
"	      rotscalenode.rotation = trafo.rotation;\n"+
"	      rotscalenode.scale = trafo.scale;\n"+
"	}\n"+
"        function initialize(){\n"+
"            recompute_and_route(startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_startpoint(val,t){\n"+
"            recompute_and_route(val,endnode.translation);\n"+
"        }\n"+
"        function set_endpoint(val,t){\n"+
"            recompute_and_route(startnode.translation,val);\n"+
"        }"))))
        .addChild(ProtoInstance0 = new ProtoInstance().setName("x3dconnector").setDEF("connector1"))
        .addChild(ProtoInstance1 = new ProtoInstance().setName("x3dconnector").setDEF("connector2"))
        .addChild(ProtoInstance2 = new ProtoInstance().setName("x3dconnector").setDEF("connector3"))
        .addChild(new ROUTE().setFromNode("G1").setFromField("translation_changed").setToNode("connector1").setToField("set_startpoint"))
        .addChild(new ROUTE().setFromNode("G2").setFromField("translation_changed").setToNode("connector1").setToField("set_endpoint"))
        .addChild(new ROUTE().setFromNode("G1").setFromField("translation_changed").setToNode("connector2").setToField("set_startpoint"))
        .addChild(new ROUTE().setFromNode("G3").setFromField("translation_changed").setToNode("connector2").setToField("set_endpoint"))
        .addChild(new ROUTE().setFromNode("G1").setFromField("translation_changed").setToNode("connector3").setToField("set_startpoint"))
        .addChild(new ROUTE().setFromNode("G4").setFromField("translation_changed").setToNode("connector3").setToField("set_endpoint")))      ;
ProtoInstance0
          .addFieldValue(new fieldValue().setName("startnode")
            .addChild(new Transform().setUSE("G1")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("endnode")
            .addChild(new Transform().setUSE("G2")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("transnode")
            .addChild(new Transform().setUSE("transC1")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("rotscalenode")
            .addChild(new Transform().setUSE("rotscaleC1")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("set_startpoint"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("set_endpoint"));
ProtoInstance1
          .addFieldValue(new fieldValue().setName("startnode")
            .addChild(new Transform().setUSE("G1")));
ProtoInstance1
          .addFieldValue(new fieldValue().setName("endnode")
            .addChild(new Transform().setUSE("G3")));
ProtoInstance1
          .addFieldValue(new fieldValue().setName("transnode")
            .addChild(new Transform().setUSE("transC2")));
ProtoInstance1
          .addFieldValue(new fieldValue().setName("rotscalenode")
            .addChild(new Transform().setUSE("rotscaleC2")));
ProtoInstance1
          .addFieldValue(new fieldValue().setName("set_startpoint"));
ProtoInstance1
          .addFieldValue(new fieldValue().setName("set_endpoint"));
ProtoInstance2
          .addFieldValue(new fieldValue().setName("startnode")
            .addChild(new Transform().setUSE("G1")));
ProtoInstance2
          .addFieldValue(new fieldValue().setName("endnode")
            .addChild(new Transform().setUSE("G4")));
ProtoInstance2
          .addFieldValue(new fieldValue().setName("transnode")
            .addChild(new Transform().setUSE("transC3")));
ProtoInstance2
          .addFieldValue(new fieldValue().setName("rotscalenode")
            .addChild(new Transform().setUSE("rotscaleC3")));
ProtoInstance2
          .addFieldValue(new fieldValue().setName("set_startpoint"));
ProtoInstance2
          .addFieldValue(new fieldValue().setName("set_endpoint"));
    X3D0.toFileX3D("../data/x3dconnectorProto.new.x3d");