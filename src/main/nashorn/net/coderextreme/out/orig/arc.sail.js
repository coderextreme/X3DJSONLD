load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_nativeJava;
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
        .addMeta(new metaObject().setName("title").setContent("arc.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("generator").setContent("manual"))
        .addMeta(new metaObject().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/arc.x3d"))
        .addMeta(new metaObject().setName("description").setContent("an attempt to implement an arc in a graph")))
      .setScene(new SceneObject()
        .addChild(new ViewpointObject().setPosition(Java.to([0,0,5], Java.type("float[]"))).setDescription("a moving graph"))
        .addChild(new BackgroundObject().setSkyColor(Java.to([0.4,0.4,0.4], Java.type("float[]"))))
        .addChild(new TransformObject().setDEF("cylinder1")
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0.2,0.7,0.7], Java.type("float[]")))))
            .setGeometry(new CylinderObject().setRadius(0.1))))
        .addChild(new TransformObject().setDEF("cylinder2")
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0.2,0.7,0.7], Java.type("float[]")))))
            .setGeometry(new CylinderObject().setRadius(0.1))))
        .addChild(new TransformObject().setDEF("cylinder3")
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0.2,0.7,0.7], Java.type("float[]")))))
            .setGeometry(new CylinderObject().setRadius(0.1))))
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
                .addField(new fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("keyValue").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f(old, translation);\n"+
"		    // Browser.println(translation);\n"+
"		}\n"+
""))
              .addChild(new TimeSensorObject().setDEF("CL1").setCycleInterval(3).setLoop(true))
              .addChild(new ROUTEObject().setFromNode("CL1").setFromField("cycleTime").setToNode("MB1").setToField("set_location"))
              .addChild(new ROUTEObject().setFromNode("CL1").setFromField("fraction_changed").setToNode("PI1").setToField("set_fraction"))
              .addChild(new ROUTEObject().setFromNode("MB1").setFromField("keyValue").setToNode("PI1").setToField("keyValue"))
              .addChild(new ROUTEObject().setFromNode("PI1").setFromField("value_changed").setToNode("node").setToField("set_translation")))))
        .addComments(new CommentsBlock("from doug sanden"))
        .addChild(new ProtoDeclareObject().setName("x3dconnector")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("startnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("endnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("connectornode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new ScriptObject().setDEF("S1")
              .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("startnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
              .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("endnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
              .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("connectornode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
              .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("startnode").setProtoField("startnode"))
                .addConnect(new connectObject().setNodeField("endnode").setProtoField("endnode"))
                .addConnect(new connectObject().setNodeField("connectornode").setProtoField("connectornode"))
                .addConnect(new connectObject().setNodeField("set_startpoint").setProtoField("set_startpoint"))
                .addConnect(new connectObject().setNodeField("set_endpoint").setProtoField("set_endpoint")))
              .setSourceCode("ecmascript:\n"+
"            function recompute(startpoint,endpoint) {\n"+
"	        if (typeof endpoint === 'undefined') {\n"+
"			return;\n"+
"		}\n"+
"                var dif = endpoint.subtract(startpoint);\n"+
"                var dist = dif.length()*.5;\n"+
"                var dif2 = dif.multiply(.5);\n"+
"                var norm = dif.normalize();\n"+
"                var trans = startpoint.add(dif2);\n"+
"                connectornode.scale = new SFVec3f(1.0,dist,1.0);\n"+
"                connectornode.translation = trans;\n"+
"                connectornode.rotation = new SFRotation(new SFVec3f(0.0,1.0,0.0),norm);\n"+
"                //Browser.print('norm='+norm.toString());\n"+
"                //Browser.print('rotation='+rotation.toString());\n"+
"            }\n"+
"            function initialize(){\n"+
"                recompute(startnode.translation,endnode.translation);\n"+
"            }\n"+
"            function set_startpoint(val,t){\n"+
"                recompute(val,endnode.translation);\n"+
"            }\n"+
"            function set_endpoint(val,t){\n"+
"                recompute(startnode.translation,val);\n"+
"            }\n"+
""))))
        .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("point").setDEF("start"))
        .addChild(ProtoInstance1 = new ProtoInstanceObject().setName("point").setDEF("end1"))
        .addChild(ProtoInstance2 = new ProtoInstanceObject().setName("point").setDEF("end2"))
        .addChild(ProtoInstance3 = new ProtoInstanceObject().setName("point").setDEF("end3"))
        .addChild(ProtoInstance4 = new ProtoInstanceObject().setName("x3dconnector").setDEF("connector1"))
        .addChild(ProtoInstance7 = new ProtoInstanceObject().setName("x3dconnector").setDEF("connector2"))
        .addChild(ProtoInstance10 = new ProtoInstanceObject().setName("x3dconnector").setDEF("connector3"))
        .addChild(new ROUTEObject().setFromNode("start").setFromField("translation").setToNode("connector1").setToField("set_startpoint"))
        .addChild(new ROUTEObject().setFromNode("end1").setFromField("translation").setToNode("connector1").setToField("set_endpoint"))
        .addChild(new ROUTEObject().setFromNode("start").setFromField("translation").setToNode("connector2").setToField("set_startpoint"))
        .addChild(new ROUTEObject().setFromNode("end2").setFromField("translation").setToNode("connector2").setToField("set_endpoint"))
        .addChild(new ROUTEObject().setFromNode("start").setFromField("translation").setToNode("connector3").setToField("set_startpoint"))
        .addChild(new ROUTEObject().setFromNode("end3").setFromField("translation").setToNode("connector3").setToField("set_endpoint")))      ;
ProtoInstance4
          .addFieldValue(new fieldValueObject().setName("startnode")
            .addChild(ProtoInstance5 = new ProtoInstanceObject().setName("point").setUSE("start")));
ProtoInstance4
          .addFieldValue(new fieldValueObject().setName("endnode")
            .addChild(ProtoInstance6 = new ProtoInstanceObject().setName("point").setUSE("end1")));
ProtoInstance4
          .addFieldValue(new fieldValueObject().setName("connectornode")
            .addChild(new TransformObject().setUSE("cylinder1")));
ProtoInstance7
          .addFieldValue(new fieldValueObject().setName("startnode")
            .addChild(ProtoInstance8 = new ProtoInstanceObject().setName("point").setUSE("start")));
ProtoInstance7
          .addFieldValue(new fieldValueObject().setName("endnode")
            .addChild(ProtoInstance9 = new ProtoInstanceObject().setName("point").setUSE("end2")));
ProtoInstance7
          .addFieldValue(new fieldValueObject().setName("connectornode")
            .addChild(new TransformObject().setUSE("cylinder2")));
ProtoInstance10
          .addFieldValue(new fieldValueObject().setName("startnode")
            .addChild(ProtoInstance11 = new ProtoInstanceObject().setName("point").setUSE("start")));
ProtoInstance10
          .addFieldValue(new fieldValueObject().setName("endnode")
            .addChild(ProtoInstance12 = new ProtoInstanceObject().setName("point").setUSE("end3")));
ProtoInstance10
          .addFieldValue(new fieldValueObject().setName("connectornode")
            .addChild(new TransformObject().setUSE("cylinder3")));
    X3D0.toFileX3D("../out/orig/arc.new.x3d");
