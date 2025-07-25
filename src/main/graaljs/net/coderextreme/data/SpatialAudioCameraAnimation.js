load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
ConfigurationProperties.setDeleteIntermediateFiles(false);
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
function doubleToFloat(d) {
    if (Float32Array)
	return new Float32Array(d);
}
      var X3D0 =  new X3D().setProfile("Full").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("SpatialAudioCameraAnimation.x3d"))
        .addMeta(new meta().setName("description").setContent("In the last demo, there are two sound sources in different positions. Through the immersion in the X3D scene the user could attend a rational navigation. Whenever the camera moves in the direction of an existing sound source, the strength of this source increases, while the sound strength of the other (the second one) decreases and vice versa. Through this process, great realism of the scene is achieved, since it emulates the spatial sound in real world."))
        .addMeta(new meta().setName("info").setContent("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API."))
        .addMeta(new meta().setName("creator").setContent("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("28 October 2020"))
        .addMeta(new meta().setName("modified").setContent("5 December 2021"))
        .addMeta(new meta().setName("reference").setContent("CHANGELOG.txt"))
        .addMeta(new meta().setName("TODO").setContent("credit for audio files"))
        .addMeta(new meta().setName("reference").setContent("https://www.medialab.hmu.gr/minipages/x3domAudio"))
        .addMeta(new meta().setName("identifier").setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SpatialAudioCameraAnimation.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("SpatialAudioCameraAnimation.x3d"))
        .addChild(new NavigationInfo())
        .addChild(new Background().setBackUrl(Java.to(["images/generic/BK1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png"], Java.type("java.lang.String[]"))).setBottomUrl(Java.to(["images/generic/DN1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png"], Java.type("java.lang.String[]"))).setFrontUrl(Java.to(["images/generic/FR1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png"], Java.type("java.lang.String[]"))).setLeftUrl(Java.to(["images/generic/LF1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png"], Java.type("java.lang.String[]"))).setRightUrl(Java.to(["images/generic/RT1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png"], Java.type("java.lang.String[]"))).setTopUrl(Java.to(["images/generic/UP1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png"], Java.type("java.lang.String[]"))))
        .addChild(new Viewpoint().setDEF("Camera001").setDescription("Viewpoint is like camera, prepositioned in locations (and directions) of interest. In this example the camera is the \"ears of the user\". So, if the trackCurrentView field from ListenerPointSource is TRUE then position and orientation matches the users current view").setOrientation(Java.to(doubleToFloat([1,0,0,-0.523599]), Java.type("float[]"))).setPosition(Java.to(doubleToFloat([0,2000,3500]), Java.type("float[]"))))
        .addChild(new TimeSensor().setDEF("TIMER").setCycleInterval(33.333332).setLoop(true))
        .addChild(new PositionInterpolator().setDEF("Camera001-POS-INTERP").setKey(Java.to(doubleToFloat([0,0.25,0.5,0.75,1]), Java.type("float[]"))).setKeyValue(Java.to(doubleToFloat([0,2000,3500,0,2000,0,0,2000,-3500,0,2000,0,0,2000,3500]), Java.type("float[]"))))
        .addChild(new OrientationInterpolator().setDEF("Camera001-ROT-INTERP").setKey(Java.to(doubleToFloat([0,0.25,0.5,0.75,1]), Java.type("float[]"))).setKeyValue(Java.to(doubleToFloat([1,0,0,-0.523599,0.99999,0.003554,0.002727,-1.309007,0,-0.965926,-0.258819,-3.141593,0.002282,-0.793351,-0.60876,-3.135645,1,-0.000001,0,-0.523599]), Java.type("float[]"))))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("Camera001-POS-INTERP"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Camera001-POS-INTERP").setToField("set_position").setToNode("Camera001"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("Camera001-ROT-INTERP"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Camera001-ROT-INTERP").setToField("set_orientation").setToNode("Camera001"))
        .addChild(new Transform().setDEF("Floor").setTranslation(Java.to(doubleToFloat([1.241,0,0.358]), Java.type("float[]")))
          .addChild(new Shape()
            .setAppearance(new Appearance().setDEF("WireColor")
              .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.122,0.114,0.125]), Java.type("float[]")))))
            .setGeometry(new Box().setSize(Java.to(doubleToFloat([2000,1,2000]), Java.type("float[]"))))))
        .addChild(new Transform().setDEF("TransformAudio1").setTranslation(Java.to(doubleToFloat([-933.123474,0,-926.253235]), Java.type("float[]")))
          .addChild(new Shape()
            .setAppearance(new Appearance().setDEF("WireColor_1")
              .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.690196,0.101961,0.101961]), Java.type("float[]")))))
            .setGeometry(new Sphere().setRadius(100)))
          .addChild(new Billboard()
            .addChild(new Transform().setDEF("violin").setRotation(Java.to(doubleToFloat([1,0,0,-0.5]), Java.type("float[]"))).setScale(Java.to(doubleToFloat([100,100,100]), Java.type("float[]"))).setTranslation(Java.to(doubleToFloat([0,100,0]), Java.type("float[]")))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setAmbientIntensity(0.0933).setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]"))).setShininess(0.51).setSpecularColor(Java.to(doubleToFloat([0.46,0.46,0.46]), Java.type("float[]")))))
                .setGeometry(new Text().setString(Java.to(["Violin"], Java.type("java.lang.String[]")))
                  .setFontStyle(new FontStyle().setDEF("ModelFontStyle").setFamily(Java.to(["Times","SERIF"], Java.type("java.lang.String[]"))).setStyle("BOLD")))))))
        .addChild(new Transform().setDEF("TransformAudio2").setTranslation(Java.to(doubleToFloat([933.475586,0,924.423218]), Java.type("float[]")))
          .addChild(new Shape()
            .setAppearance(new Appearance().setDEF("WireColor_2")
              .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.105882,0.694118,0.580392]), Java.type("float[]")))))
            .setGeometry(new Sphere().setRadius(100)))
          .addChild(new Billboard()
            .addChild(new Transform().setDEF("saxophone").setRotation(Java.to(doubleToFloat([1,0,0,-0.5]), Java.type("float[]"))).setScale(Java.to(doubleToFloat([100,100,100]), Java.type("float[]"))).setTranslation(Java.to(doubleToFloat([0,100,0]), Java.type("float[]")))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setAmbientIntensity(0.0933).setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]"))).setShininess(0.51).setSpecularColor(Java.to(doubleToFloat([0.46,0.46,0.46]), Java.type("float[]")))))
                .setGeometry(new Text().setString(Java.to(["Saxophone"], Java.type("java.lang.String[]")))
                  .setFontStyle(new FontStyle().setUSE("ModelFontStyle")))))))
        .addChild(new ListenerPointSource().setTrackCurrentView(true))
        .addChild(new StreamAudioDestination()
          .addChild(new SpatialSound().setDEF("Audio1")
            .addChild(new Gain()
              .addChild(new AudioClip().setDescription("Violin").setLoop(true).setUrl(Java.to(["sound/violin.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"], Java.type("java.lang.String[]"))))))
          .addChild(new SpatialSound().setDEF("Audio2")
            .addChild(new Gain()
              .addChild(new AudioClip().setDescription("Saxophone").setLoop(true).setUrl(Java.to(["sound/saxophone.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"], Java.type("java.lang.String[]"))))))))      ;
    X3D0.toFileX3D("../data/SpatialAudioCameraAnimation.new.graal.x3d");
    X3D0.toFileJSON("../data/SpatialAudioCameraAnimation.new.graal.json");
