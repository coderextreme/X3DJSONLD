load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
function doubleToFloat(d) {
    if (Float32Array)
	return new Float32Array([d])[0];
}
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addComponent(new component().setName("Geospatial").setLevel(1))
        .addMeta(new meta().setName("title").setContent("geobubbles.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/geobubbles.x3d"))
        .addMeta(new meta().setName("description").setContent("geo bubbles")))
      .setScene(new Scene()
        .addComments(new CommentsBlock("Viewpoint DEF='Tour' position='0 0 4' orientation='1 0 0 0' description='Tour Views'/"))
        .addComments(new CommentsBlock("PositionInterpolator DEF='TourPosition' key='0 1' keyValue='-0.5 -0.5 4 -0.5 0.5 4'/"))
        .addChild(new GeoViewpoint().setDEF("Tour").setPosition(Java.to([0,0,4], Java.type("double[]"))).setOrientation(Java.to([doubleToFloat(1),doubleToFloat(0),doubleToFloat(0),doubleToFloat(0)], Java.type("float[]"))).setDescription("Tour Views"))
        .addChild(new Background().setBackUrl(Java.to(["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"], Java.type("java.lang.String[]"))).setBottomUrl(Java.to(["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"], Java.type("java.lang.String[]"))).setFrontUrl(Java.to(["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"], Java.type("java.lang.String[]"))).setLeftUrl(Java.to(["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"], Java.type("java.lang.String[]"))).setRightUrl(Java.to(["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"], Java.type("java.lang.String[]"))).setTopUrl(Java.to(["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"], Java.type("java.lang.String[]"))))
        .addChild(new Transform()
          .addChild(new Shape()
            .setGeometry(new Sphere())
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(Java.to([doubleToFloat(0.7),doubleToFloat(0.7),doubleToFloat(0.7)], Java.type("float[]"))).setSpecularColor(Java.to([doubleToFloat(0.5),doubleToFloat(0.5),doubleToFloat(0.5)], Java.type("float[]")))))))
        .addChild(new TimeSensor().setDEF("TourTime").setCycleInterval(5).setLoop(true))
        .addChild(new GeoPositionInterpolator().setDEF("TourPosition").setKey(Java.to([doubleToFloat(0),doubleToFloat(1)], Java.type("float[]"))).setKeyValue(Java.to([0.0015708,0,4,0,0.0015708,4], Java.type("double[]"))))
        .addChild(new Script().setDEF("RandomTourTime")
          .addField(new field().setType(field.TYPE_SFTIME).setName("set_cycle").setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setType(field.TYPE_SFFLOAT).setName("val").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
          .addField(new field().setType(field.TYPE_MFVEC3D).setName("positions").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.0015708 0 4 0 0.0015708 4"))
          .addField(new field().setType(field.TYPE_MFVEC3D).setName("position").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.0015708 0 4 0 0.0015708 4"))
          .setSourceCode(`ecmascript:

               function set_cycle(value) {
                        var cartesianMult = -150;  // -150 if cartesian, 1 if geo
                        var ov = val;
			// Browser.print('old '+ov);
                        do {
                                val = Math.floor(Math.random()*2);
                                var vc = val;
                                positions[vc] = new SFVec3d(Math.round(Math.random()*2)*0.0015708*cartesianMult, Math.round(Math.random()*2)*0.0015708*cartesianMult, 4);
                        } while ( positions[ov][0] === positions[vc][0] && positions[ov][1] === positions[vc][1] && positions[ov][2] === positions[vc][2]);
			// Browser.println(positions[ov]);
			// Browser.println(positions[vc]);
                        position = new MFVec3d();
                        position[0] = new SFVec3d(positions[ov][0],positions[ov][1],positions[ov][2]);
                        position[1] = new SFVec3d(positions[vc][0],positions[vc][1],positions[vc][2]);
               }`))
        .addChild(new ROUTE().setFromNode("TourTime").setFromField("cycleTime").setToNode("RandomTourTime").setToField("set_cycle"))
        .addChild(new ROUTE().setFromNode("RandomTourTime").setFromField("position").setToNode("TourPosition").setToField("keyValue"))
        .addChild(new ROUTE().setFromNode("TourTime").setFromField("fraction_changed").setToNode("TourPosition").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("TourPosition").setFromField("geovalue_changed").setToNode("Tour").setToField("set_position")))      ;
    X3D0.toFileX3D("../personal/geobubbles.new.graal.x3d");
    X3D0.toFileJSON("../personal/geobubbles.new.graal.json");
