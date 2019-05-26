      var X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addComponent(new component().setName("Geospatial").setLevel(1))
        .addMeta(new meta().setName("title").setContent("geobubbles.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/geobubbles.x3d"))
        .addMeta(new meta().setName("description").setContent("geo bubbles")))
      .setScene(new Scene()
        .addComments(new CommentsBlock("Viewpoint DEF='Tour' position='0 0 4' orientation='1 0 0 0' description='Tour Views'/"))
        .addComments(new CommentsBlock("PositionInterpolator DEF='TourPosition' key='0 1' keyValue='-0.5 -0.5 4 -0.5 0.5 4'/"))
        .addChild(new GeoViewpoint().setDEF("Tour").setPosition(java.newArray("double", [0,0,4])).setOrientation(java.newArray("float", [1,0,0,0])).setDescription("Tour Views"))
        .addChild(new Background().setBackUrl(java.newArray("java.lang.String", ["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"])).setBottomUrl(java.newArray("java.lang.String", ["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"])).setFrontUrl(java.newArray("java.lang.String", ["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"])).setLeftUrl(java.newArray("java.lang.String", ["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"])).setRightUrl(java.newArray("java.lang.String", ["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"])).setTopUrl(java.newArray("java.lang.String", ["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"])))
        .addChild(new Transform()
          .addChild(new Shape()
            .setGeometry(new Sphere())
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(java.newArray("float", [0.7,0.7,0.7])).setSpecularColor(java.newArray("float", [0.5,0.5,0.5]))))))
        .addChild(new TimeSensor().setDEF("TourTime").setCycleInterval(5).setLoop(true))
        .addChild(new GeoPositionInterpolator().setDEF("TourPosition").setKey(java.newArray("float", [0,1])).setKeyValue(java.newArray("double", [0.0015708,0,4,0,0.0015708,4])))
        .addChild(new Script().setDEF("RandomTourTime")
          .addField(new field().setType(field.TYPE_SFTIME).setName("set_cycle").setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setType(field.TYPE_SFFLOAT).setName("val").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
          .addField(new field().setType(field.TYPE_MFVEC3D).setName("positions").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.0015708 0 4 0 0.0015708 4"))
          .addField(new field().setType(field.TYPE_MFVEC3D).setName("position").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.0015708 0 4 0 0.0015708 4"))
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
"               }"))
        .addChild(new ROUTE().setFromNode("TourTime").setFromField("cycleTime").setToNode("RandomTourTime").setToField("set_cycle"))
        .addChild(new ROUTE().setFromNode("RandomTourTime").setFromField("position").setToNode("TourPosition").setToField("keyValue"))
        .addChild(new ROUTE().setFromNode("TourTime").setFromField("fraction_changed").setToNode("TourPosition").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("TourPosition").setFromField("geovalue_changed").setToNode("Tour").setToField("set_position")))      ;
    X3D0.toFileX3D("../data/geobubbles.new.x3d");
