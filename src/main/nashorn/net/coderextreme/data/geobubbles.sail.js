load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("Geospatial").setLevel(1))
        .addMeta(new metaObject().setName("title").setContent("geobubbles.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("generator").setContent("manual"))
        .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/geobubbles.x3d"))
        .addMeta(new metaObject().setName("description").setContent("geo bubbles")))
      .setScene(new SceneObject()
        .addComments(new CommentsBlock("Viewpoint DEF='Tour' position='0 0 4' orientation='1 0 0 0' description='Tour Views'/"))
        .addComments(new CommentsBlock("PositionInterpolator DEF='TourPosition' key='0 1' keyValue='-0.5 -0.5 4 -0.5 0.5 4'/"))
        .addChild(new GeoViewpointObject().setDEF("Tour").setPosition(Java.to([0,0,4], Java.type("double[]"))).setOrientation(Java.to([1,0,0,0], Java.type("float[]"))).setDescription("Tour Views"))
        .addChild(new BackgroundObject().setBackUrl(Java.to(["../resources/images/BK.png".replace(/\"/g, "\\\""),"https://coderextreme.net/X3DJSONLD/images/BK.png".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]"))).setBottomUrl(Java.to(["../resources/images/BT.png".replace(/\"/g, "\\\""),"https://coderextreme.net/X3DJSONLD/images/BT.png".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]"))).setFrontUrl(Java.to(["../resources/images/FR.png".replace(/\"/g, "\\\""),"https://coderextreme.net/X3DJSONLD/images/FR.png".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]"))).setLeftUrl(Java.to(["../resources/images/LF.png".replace(/\"/g, "\\\""),"https://coderextreme.net/X3DJSONLD/images/LF.png".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]"))).setRightUrl(Java.to(["../resources/images/RT.png".replace(/\"/g, "\\\""),"https://coderextreme.net/X3DJSONLD/images/RT.png".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]"))).setTopUrl(Java.to(["../resources/images/TP.png".replace(/\"/g, "\\\""),"https://coderextreme.net/X3DJSONLD/images/TP.png".replace(/\"/g, "\\\"")], Java.type("java.lang.String[]"))))
        .addChild(new TransformObject()
          .addChild(new ShapeObject()
            .setGeometry(new SphereObject())
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0.7,0.7,0.7], Java.type("float[]"))).setSpecularColor(Java.to([0.5,0.5,0.5], Java.type("float[]")))))))
        .addChild(new TimeSensorObject().setDEF("TourTime").setCycleInterval(5).setLoop(true))
        .addChild(new GeoPositionInterpolatorObject().setDEF("TourPosition").setKey(Java.to([0,1], Java.type("float[]"))).setKeyValue(Java.to([0.0015708,0,4,0,0.0015708,4], Java.type("double[]"))))
        .addChild(new ScriptObject().setDEF("RandomTourTime")
          .addField(new fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_cycle").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("val").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFVEC3D).setName("positions").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.0015708 0 4 0 0.0015708 4"))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFVEC3D).setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.0015708 0 4 0 0.0015708 4"))
          .setSourceCode("ecmascript:\n"+
"\n"+
"               function set_cycle(value) {\n"+
"                        var cartesianMult = -150;  // -150 if cartesian, 1 if geo\n"+
"                        var ov = val;\n"+
"			// Browser.print('old '+ov);\n"+
"                        do {\n"+
"                                val = Math.floor(Math.random()*2);\n"+
"                                var vc = val;\n"+
"                                positions[vc] = new SFVec3d(Math.round(Math.random()*2)*0.0015708*cartesianMult, Math.round(Math.random()*2)*0.0015708*cartesianMult, 4);\n"+
"                        } while ( positions[ov][0] === positions[vc][0] && positions[ov][1] === positions[vc][1] && positions[ov][2] === positions[vc][2]);\n"+
"			// Browser.println(positions[ov]);\n"+
"			// Browser.println(positions[vc]);\n"+
"                        position = new MFVec3d();\n"+
"                        position[0] = new SFVec3d(positions[ov][0],positions[ov][1],positions[ov][2]);\n"+
"                        position[1] = new SFVec3d(positions[vc][0],positions[vc][1],positions[vc][2]);\n"+
"               }\n"+
""))
        .addChild(new ROUTEObject().setFromNode("TourTime").setFromField("cycleTime").setToNode("RandomTourTime").setToField("set_cycle"))
        .addChild(new ROUTEObject().setFromNode("RandomTourTime").setFromField("position").setToNode("TourPosition").setToField("keyValue"))
        .addChild(new ROUTEObject().setFromNode("TourTime").setFromField("fraction_changed").setToNode("TourPosition").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TourPosition").setFromField("geovalue_changed").setToNode("Tour").setToField("set_position")))      ;
    X3D0.toFileX3D("../data/geobubbles.new.x3d");
