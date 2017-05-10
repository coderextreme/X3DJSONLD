load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_nativeJava;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("x3dconnectorProto"))
        .addMeta(new metaObject().setName("creator").setContent("Lost, Doug Sanden I think"))
        .addMeta(new metaObject().setName("generator").setContent("manual"))
        .addMeta(new metaObject().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/x3dconnectorProto.x3d"))
        .addMeta(new metaObject().setName("description").setContent("a generic proto to connect two objects"))
        .addMeta(new metaObject().setName("translated").setContent("10 May 2017"))
        .addMeta(new metaObject().setName("generator").setContent("X3dToJson.xslt, http://www.web3d.org/x3d/stylesheets/X3dToJson.html"))
        .addMeta(new metaObject().setName("reference").setContent("X3D JSON encoding: http://www.web3d.org/wiki/index.php/X3D_JSON_Encoding"))
        .addMeta(new metaObject().setName("translated").setContent("10 May 2017"))
        .addMeta(new metaObject().setName("generator").setContent("X3DJSONLD: https://github.com/coderextreme/X3DJSONLD")))
      .setScene(new SceneObject()
        .addChild(new ViewpointObject().setPosition(Java.to([0,0,5], Java.type("float[]"))).setDescription("Only Viewpoint"))
        .addChild(new BackgroundObject().setSkyColor(Java.to([0.4,0.4,0.4], Java.type("float[]"))))
        .addChild(new TransformObject().setDEF("G1")
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0.7,0.2,0.2], Java.type("float[]")))))
            .setGeometry(new SphereObject().setRadius(0.1)))
          .addChild(new PlaneSensorObject().setDescription("Grab to move").setDEF("PS1"))
          .addChild(new ROUTEObject().setFromNode("PS1").setFromField("translation_changed").setToNode("G1").setToField("set_translation")))
        .addChild(new TransformObject().setDEF("G2").setTranslation(Java.to([1,-1,0.01], Java.type("float[]")))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0.2,0.7,0.2], Java.type("float[]")))))
            .setGeometry(new SphereObject().setRadius(0.1)))
          .addChild(new PlaneSensorObject().setDescription("Grab to move").setDEF("PS2"))
          .addChild(new ROUTEObject().setFromNode("PS2").setFromField("translation_changed").setToNode("G2").setToField("set_translation")))
        .addChild(new TransformObject().setDEF("G3").setTranslation(Java.to([1,1,0.01], Java.type("float[]")))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0.2,0.7,0.2], Java.type("float[]")))))
            .setGeometry(new SphereObject().setRadius(0.1)))
          .addChild(new PlaneSensorObject().setDescription("Grab to move").setDEF("PS3"))
          .addChild(new ROUTEObject().setFromNode("PS3").setFromField("translation_changed").setToNode("G3").setToField("set_translation")))
        .addChild(new TransformObject().setDEF("G4").setTranslation(Java.to([-1,1,0.01], Java.type("float[]")))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0.2,0.7,0.2], Java.type("float[]")))))
            .setGeometry(new SphereObject().setRadius(0.1)))
          .addChild(new PlaneSensorObject().setDescription("Grab to move").setDEF("PS4"))
          .addChild(new ROUTEObject().setFromNode("PS4").setFromField("translation_changed").setToNode("G4").setToField("set_translation")))
        .addChild(new TransformObject().setDEF("C1")
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0.2,0.7,0.7], Java.type("float[]"))).setTransparency(0.5)))
            .setGeometry(new CylinderObject().setRadius(0.05))))
        .addChild(new TransformObject().setDEF("C2")
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0.2,0.7,0.7], Java.type("float[]"))).setTransparency(0.5)))
            .setGeometry(new CylinderObject().setRadius(0.05))))
        .addChild(new TransformObject().setDEF("C3")
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0.2,0.7,0.7], Java.type("float[]"))).setTransparency(0.5)))
            .setGeometry(new CylinderObject().setRadius(0.05))))
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
"            function recompute(startpoint,endpoint){\n"+
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
        .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("x3dconnector").setDEF("connector1"))
        .addChild(ProtoInstance1 = new ProtoInstanceObject().setName("x3dconnector").setDEF("connector2"))
        .addChild(ProtoInstance2 = new ProtoInstanceObject().setName("x3dconnector").setDEF("connector3"))
        .addChild(new ROUTEObject().setFromNode("G1").setFromField("translation_changed").setToNode("connector1").setToField("set_startpoint"))
        .addChild(new ROUTEObject().setFromNode("G2").setFromField("translation_changed").setToNode("connector1").setToField("set_endpoint"))
        .addChild(new ROUTEObject().setFromNode("G1").setFromField("translation_changed").setToNode("connector2").setToField("set_startpoint"))
        .addChild(new ROUTEObject().setFromNode("G3").setFromField("translation_changed").setToNode("connector2").setToField("set_endpoint"))
        .addChild(new ROUTEObject().setFromNode("G1").setFromField("translation_changed").setToNode("connector3").setToField("set_startpoint"))
        .addChild(new ROUTEObject().setFromNode("G4").setFromField("translation_changed").setToNode("connector3").setToField("set_endpoint")))      ;
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("startnode")
            .addChild(new TransformObject().setUSE("G1")));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("endnode")
            .addChild(new TransformObject().setUSE("G2")));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("connectornode")
            .addChild(new TransformObject().setUSE("C1")));
ProtoInstance1
          .addFieldValue(new fieldValueObject().setName("startnode")
            .addChild(new TransformObject().setUSE("G1")));
ProtoInstance1
          .addFieldValue(new fieldValueObject().setName("endnode")
            .addChild(new TransformObject().setUSE("G3")));
ProtoInstance1
          .addFieldValue(new fieldValueObject().setName("connectornode")
            .addChild(new TransformObject().setUSE("C2")));
ProtoInstance2
          .addFieldValue(new fieldValueObject().setName("startnode")
            .addChild(new TransformObject().setUSE("G1")));
ProtoInstance2
          .addFieldValue(new fieldValueObject().setName("endnode")
            .addChild(new TransformObject().setUSE("G4")));
ProtoInstance2
          .addFieldValue(new fieldValueObject().setName("connectornode")
            .addChild(new TransformObject().setUSE("C3")));
    X3D0.toFileX3D("x3dconnectorProto.new.x3d");
