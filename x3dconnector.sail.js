load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_nativeJava;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
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
          .addChild(new ROUTEObject().setFromNode("PS1").setFromField("translation_changed").setToNode("G1").setToField("translation")))
        .addChild(new TransformObject().setDEF("G2").setTranslation(Java.to([1,-1,0.01], Java.type("float[]")))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0.2,0.7,0.2], Java.type("float[]")))))
            .setGeometry(new SphereObject().setRadius(0.1)))
          .addChild(new PlaneSensorObject().setDescription("Grab to move").setDEF("PS2"))
          .addChild(new ROUTEObject().setFromNode("PS2").setFromField("translation_changed").setToNode("G2").setToField("translation")))
        .addChild(new TransformObject().setDEF("C0")
          .addChild(new TransformObject().setDEF("C1")
            .addChild(new TransformObject().setDEF("C2")
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0.2,0.7,0.7], Java.type("float[]"))).setTransparency(0.5)))
                .setGeometry(new CylinderObject().setRadius(0.05))))))
        .addChild(new ScriptObject().setDEF("S1")
          .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("startnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new TransformObject().setUSE("G1")))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("endnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new TransformObject().setUSE("G2")))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_startpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFROTATION).setName("rotation").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("scale").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .setSourceCode("ecmascript:\n"+
"        function recompute(startpoint,endpoint){\n"+
"            var dif = endpoint.subtract(startpoint);\n"+
"            var dist = dif.length()*.5;\n"+
"            var dif2 = dif.multiply(.5);\n"+
"            var norm = dif.normalize();\n"+
"            var trans = startpoint.add(dif2);\n"+
"            scale = new SFVec3f(1.0,dist,1.0);\n"+
"            translation = trans;\n"+
"            rotation = new SFRotation(new SFVec3f(0.0,1.0,0.0),norm);\n"+
"            //Browser.print('norm='+norm.toString());\n"+
"            //Browser.print('rotation='+rotation.toString());\n"+
"        }\n"+
"        function initialize(){\n"+
"            recompute(startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_startpoint(val,t){\n"+
"            recompute(val,endnode.translation);\n"+
"        }\n"+
"        function set_endpoint(val,t){\n"+
"            recompute(startnode.translation,val);\n"+
"        }\n"+
""))
        .addChild(new ROUTEObject().setFromNode("G1").setFromField("translation").setToNode("S1").setToField("set_startpoint"))
        .addChild(new ROUTEObject().setFromNode("G2").setFromField("translation").setToNode("S1").setToField("set_endpoint"))
        .addChild(new ROUTEObject().setFromNode("S1").setFromField("translation").setToNode("C0").setToField("translation"))
        .addChild(new ROUTEObject().setFromNode("S1").setFromField("rotation").setToNode("C2").setToField("rotation"))
        .addChild(new ROUTEObject().setFromNode("S1").setFromField("scale").setToNode("C2").setToField("scale")))      ;
    X3D0.toFileX3D("x3dconnector.new.x3d");
