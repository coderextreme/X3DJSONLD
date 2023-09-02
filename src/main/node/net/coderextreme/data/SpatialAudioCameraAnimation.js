var java = require('java');
var util = require('util');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: util.promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
var autoclass = require('../../../X3Dautoclass');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  (new autoclass.X3D()).setProfile("Full").setVersion("4.0")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("title").setContent("SpatialAudioCameraAnimation.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("In the last demo, there are two sound sources in different positions. Through the immersion in the X3D scene the user could attend a rational navigation. Whenever the camera moves in the direction of an existing sound source, the strength of this source increases, while the sound strength of the other (the second one) decreases and vice versa. Through this process, great realism of the scene is achieved, since it emulates the spatial sound in real world."))
        .addMeta((new autoclass.meta()).setName("info").setContent("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API."))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman"))
        .addMeta((new autoclass.meta()).setName("created").setContent("28 October 2020"))
        .addMeta((new autoclass.meta()).setName("modified").setContent("5 December 2021"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("CHANGELOG.txt"))
        .addMeta((new autoclass.meta()).setName("TODO").setContent("credit for audio files"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.medialab.hmu.gr/minipages/x3domAudio"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SpatialAudioCameraAnimation.x3d"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"))
        .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.WorldInfo()).setTitle("SpatialAudioCameraAnimation.x3d"))
        .addChild((new autoclass.NavigationInfo()))
        .addChild((new autoclass.Background()).setBackUrl(java.newArray("java.lang.String", ["images/generic/BK1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png"])).setBottomUrl(java.newArray("java.lang.String", ["images/generic/DN1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png"])).setFrontUrl(java.newArray("java.lang.String", ["images/generic/FR1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png"])).setLeftUrl(java.newArray("java.lang.String", ["images/generic/LF1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png"])).setRightUrl(java.newArray("java.lang.String", ["images/generic/RT1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png"])).setTopUrl(java.newArray("java.lang.String", ["images/generic/UP1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png"])))
        .addChild((new autoclass.Viewpoint()).setDEF("Camera001").setDescription("Viewpoint is like camera, prepositioned in locations (and directions) of interest. In this example the camera is the \"ears of the user\". So, if the trackCurrentView field from ListenerPointSource is TRUE then position and orientation matches the users current view").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-0.523599)])).setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(2000), java.newFloat(3500)])))
        .addChild((new autoclass.TimeSensor()).setDEF("TIMER").setCycleInterval(33.333332).setLoop(true))
        .addChild((new autoclass.PositionInterpolator()).setDEF("Camera001-POS-INTERP").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.25), java.newFloat(0.5), java.newFloat(0.75), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(2000), java.newFloat(3500), java.newFloat(0), java.newFloat(2000), java.newFloat(0), java.newFloat(0), java.newFloat(2000), java.newFloat(-3500), java.newFloat(0), java.newFloat(2000), java.newFloat(0), java.newFloat(0), java.newFloat(2000), java.newFloat(3500)])))
        .addChild((new autoclass.OrientationInterpolator()).setDEF("Camera001-ROT-INTERP").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.25), java.newFloat(0.5), java.newFloat(0.75), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-0.523599), java.newFloat(0.99999), java.newFloat(0.003554), java.newFloat(0.002727), java.newFloat(-1.309007), java.newFloat(0), java.newFloat(-0.965926), java.newFloat(-0.258819), java.newFloat(-3.141593), java.newFloat(0.002282), java.newFloat(-0.793351), java.newFloat(-0.60876), java.newFloat(-3.135645), java.newFloat(1), java.newFloat(-0.000001), java.newFloat(0), java.newFloat(-0.523599)])))
        .addChild((new autoclass.ROUTE()).setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("Camera001-POS-INTERP"))
        .addChild((new autoclass.ROUTE()).setFromField("value_changed").setFromNode("Camera001-POS-INTERP").setToField("set_position").setToNode("Camera001"))
        .addChild((new autoclass.ROUTE()).setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("Camera001-ROT-INTERP"))
        .addChild((new autoclass.ROUTE()).setFromField("value_changed").setFromNode("Camera001-ROT-INTERP").setToField("set_orientation").setToNode("Camera001"))
        .addChild((new autoclass.Transform()).setDEF("Floor").setTranslation(java.newArray("float", [java.newFloat(1.241), java.newFloat(0), java.newFloat(0.358)]))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance()).setDEF("WireColor")
              .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0.122), java.newFloat(0.114), java.newFloat(0.125)]))))
            .setGeometry((new autoclass.Box()).setSize(java.newArray("float", [java.newFloat(2000), java.newFloat(1), java.newFloat(2000)])))))
        .addChild((new autoclass.Transform()).setDEF("TransformAudio1").setTranslation(java.newArray("float", [java.newFloat(-933.123474), java.newFloat(0), java.newFloat(-926.253235)]))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance()).setDEF("WireColor_1")
              .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0.690196), java.newFloat(0.101961), java.newFloat(0.101961)]))))
            .setGeometry((new autoclass.Sphere()).setRadius(java.newFloat(100))))
          .addChild((new autoclass.Billboard())
            .addChild((new autoclass.Transform()).setDEF("violin").setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-0.5)])).setScale(java.newArray("float", [java.newFloat(100), java.newFloat(100), java.newFloat(100)])).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(100), java.newFloat(0)]))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setAmbientIntensity(java.newFloat(0.0933)).setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])).setShininess(java.newFloat(0.51)).setSpecularColor(java.newArray("float", [java.newFloat(0.46), java.newFloat(0.46), java.newFloat(0.46)]))))
                .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["Violin"]))
                  .setFontStyle((new autoclass.FontStyle()).setDEF("ModelFontStyle").setFamily(java.newArray("java.lang.String", ["Times","SERIF"])).setStyle("BOLD")))))))
        .addChild((new autoclass.Transform()).setDEF("TransformAudio2").setTranslation(java.newArray("float", [java.newFloat(933.475586), java.newFloat(0), java.newFloat(924.423218)]))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance()).setDEF("WireColor_2")
              .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0.105882), java.newFloat(0.694118), java.newFloat(0.580392)]))))
            .setGeometry((new autoclass.Sphere()).setRadius(java.newFloat(100))))
          .addChild((new autoclass.Billboard())
            .addChild((new autoclass.Transform()).setDEF("saxophone").setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-0.5)])).setScale(java.newArray("float", [java.newFloat(100), java.newFloat(100), java.newFloat(100)])).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(100), java.newFloat(0)]))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setAmbientIntensity(java.newFloat(0.0933)).setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])).setShininess(java.newFloat(0.51)).setSpecularColor(java.newArray("float", [java.newFloat(0.46), java.newFloat(0.46), java.newFloat(0.46)]))))
                .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["Saxophone"]))
                  .setFontStyle((new autoclass.FontStyle()).setUSE("ModelFontStyle")))))))
        .addChild((new autoclass.ListenerPointSource()).setTrackCurrentView(true))
        .addChild((new autoclass.StreamAudioDestination()).setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS")
          .addChild((new autoclass.SpatialSound()).setDEF("Audio1").setDistanceModel("INVERSE")
            .addChild((new autoclass.Gain()).setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS")
              .addChild((new autoclass.AudioClip()).setDescription("Violin").setLoop(true).setUrl(java.newArray("java.lang.String", ["sound/violin.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"])))))
          .addChild((new autoclass.SpatialSound()).setDEF("Audio2").setDistanceModel("INVERSE")
            .addChild((new autoclass.Gain()).setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS")
              .addChild((new autoclass.AudioClip()).setDescription("Saxophone").setLoop(true).setUrl(java.newArray("java.lang.String", ["sound/saxophone.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"])))))))      ;
    X3D0.toFileX3D("../data/SpatialAudioCameraAnimation.new.node.x3d");
    process.exit(0);
