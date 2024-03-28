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
ConfigurationProperties.setStripDefaultAttributes(true);
      var X3D0 =  (new autoclass.X3D()).setProfile("Full").setVersion("4.0")
      .setHead(new autoclass.head()
        .addMeta(new autoclass.meta().setName("title").setContent("SplitChannels.x3d"))
        .addMeta(new autoclass.meta().setName("description").setContent("This X3D scene includes a simple sound source which can be moved right and left. Depending on the position of the sound source, the user can hear the produced sound from the corresponding output speaker. Accordingly, there is a source that can be passed through a SpatialSound for the spatialization of the input audio. The approach is based on the relative position of the source and the listener, in comparison to the panner."))
        .addMeta(new autoclass.meta().setName("info").setContent("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API."))
        .addMeta(new autoclass.meta().setName("creator").setContent("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman"))
        .addMeta(new autoclass.meta().setName("created").setContent("28 October 2020"))
        .addMeta(new autoclass.meta().setName("modified").setContent("23 April 2023"))
        .addMeta(new autoclass.meta().setName("reference").setContent("CHANGELOG.txt"))
        .addMeta(new autoclass.meta().setName("TODO").setContent("credit for audio files"))
        .addMeta(new autoclass.meta().setName("reference").setContent("http://www.medialab.hmu.gr/minipages/x3domAudio"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/SplitChannels.x3d"))
        .addMeta(new autoclass.meta().setName("generator").setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new autoclass.meta().setName("license").setContent("../license.html")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.WorldInfo().setTitle("SplitChannels.x3d"))
        .addChild(new autoclass.NavigationInfo().setType(java.newArray("java.lang.String", ["NONE"])))
        .addChild(new autoclass.Background().setSkyColor(java.newArray("float", [java.newFloat(0.2), java.newFloat(0.2), java.newFloat(0.21)])))
        .addChild(new autoclass.Viewpoint().setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-0.5)])).setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(500), java.newFloat(600)])).setRetainUserOffsets(true))
        .addChild(new autoclass.Transform().setDEF("PowerR").setTranslation(java.newArray("float", [java.newFloat(100), java.newFloat(400), java.newFloat(400)]))
          .addChild(new autoclass.Transform().setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-0.5)])).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(40), java.newFloat(0)]))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance().setDEF("audio_emit")
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0)])).setEmissiveColor(java.newArray("float", [java.newFloat(0.8), java.newFloat(0.8), java.newFloat(0.8)])).setSpecularColor(java.newArray("float", [java.newFloat(0.01), java.newFloat(0.01), java.newFloat(0.01)]))))
              .setGeometry(new autoclass.Box().setSize(java.newArray("float", [java.newFloat(10), java.newFloat(80), java.newFloat(0.01)])))))
          .addChild(new autoclass.Transform().setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-0.5)])).setTranslation(java.newArray("float", [java.newFloat(-2.7), java.newFloat(37), java.newFloat(0)]))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance().setDEF("audio_emit2")
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0)])).setEmissiveColor(java.newArray("float", [java.newFloat(0.8), java.newFloat(0.8), java.newFloat(0.8)])).setSpecularColor(java.newArray("float", [java.newFloat(0.01), java.newFloat(0.01), java.newFloat(0.01)])))
                .setTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["images/line.png","https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"]))))
              .setGeometry(new autoclass.Box().setSize(java.newArray("float", [java.newFloat(25), java.newFloat(83), java.newFloat(0.01)])))))
          .addChild(new autoclass.Transform().setDEF("volumeRight").setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-0.5)])).setScale(java.newArray("float", [java.newFloat(10), java.newFloat(10), java.newFloat(10)])).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-10), java.newFloat(0)]))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setAmbientIntensity(java.newFloat(0.0933)).setDiffuseColor(java.newArray("float", [java.newFloat(0.345), java.newFloat(0.345), java.newFloat(0.882)])).setShininess(java.newFloat(0.51)).setSpecularColor(java.newArray("float", [java.newFloat(0.46), java.newFloat(0.46), java.newFloat(0.46)]))))
              .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["Right Channel Volume"]))
                .setFontStyle(new autoclass.FontStyle().setDEF("VolumeFontStyle").setFamily(java.newArray("java.lang.String", ["Times","SERIF"])).setStyle("BOLD"))))))
        .addChild(new autoclass.Transform().setDEF("PowerL").setTranslation(java.newArray("float", [java.newFloat(-100), java.newFloat(400), java.newFloat(400)]))
          .addChild(new autoclass.Transform().setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-0.5)])).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(40), java.newFloat(0)]))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance().setDEF("audio_emit3")
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0)])).setEmissiveColor(java.newArray("float", [java.newFloat(0.8), java.newFloat(0.8), java.newFloat(0.8)])).setSpecularColor(java.newArray("float", [java.newFloat(0.01), java.newFloat(0.01), java.newFloat(0.01)]))))
              .setGeometry(new autoclass.Box().setSize(java.newArray("float", [java.newFloat(10), java.newFloat(80), java.newFloat(0.01)])))))
          .addChild(new autoclass.Transform().setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-0.5)])).setTranslation(java.newArray("float", [java.newFloat(13.2), java.newFloat(37), java.newFloat(0)]))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance().setDEF("audio_emit4")
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0)])).setEmissiveColor(java.newArray("float", [java.newFloat(0.8), java.newFloat(0.8), java.newFloat(0.8)])).setSpecularColor(java.newArray("float", [java.newFloat(0.01), java.newFloat(0.01), java.newFloat(0.01)])))
                .setTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["images/line.png","https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"]))))
              .setGeometry(new autoclass.Box().setSize(java.newArray("float", [java.newFloat(25), java.newFloat(83), java.newFloat(0.01)])))))
          .addChild(new autoclass.Transform().setDEF("volumeLeft").setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-0.5)])).setScale(java.newArray("float", [java.newFloat(10), java.newFloat(10), java.newFloat(10)])).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-10), java.newFloat(0)]))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setAmbientIntensity(java.newFloat(0.0933)).setDiffuseColor(java.newArray("float", [java.newFloat(0.345), java.newFloat(0.345), java.newFloat(0.882)])).setShininess(java.newFloat(0.51)).setSpecularColor(java.newArray("float", [java.newFloat(0.46), java.newFloat(0.46), java.newFloat(0.46)]))))
              .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["Left Channel Volume"]))
                .setFontStyle(new autoclass.FontStyle().setUSE("VolumeFontStyle"))))))
        .addChild(new autoclass.Transform()
          .addChild(new autoclass.Shape()
            .setAppearance(new autoclass.Appearance().setDEF("floor")
              .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.1), java.newFloat(0.1)])).setShininess(java.newFloat(0.8)).setSpecularColor(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.6), java.newFloat(0.7)]))))
            .setGeometry(new autoclass.Box().setSize(java.newArray("float", [java.newFloat(1500), java.newFloat(10), java.newFloat(500)])))))
        .addChild(new autoclass.ListenerPointSource().setTrackCurrentView(true))
        .addChild(new autoclass.StreamAudioDestination()
          .addChild(new autoclass.Gain()
            .addChild(new autoclass.ChannelMerger()
              .addChild(new autoclass.ChannelSelector()
                .addChild(new autoclass.Gain().setUSE("ChannelSplitter")))
              .addChild(new autoclass.ChannelSelector().setChannelSelection(1)
                .addChild(new autoclass.Gain().setUSE("ChannelSplitter"))))))
        .addChild(new autoclass.ChannelSplitter().setDEF("ChannelSplitter").setChannelCountMode("EXPLICIT")
          .addOutputs(new autoclass.AudioClip().setDescription("Violin").setUrl(java.newArray("java.lang.String", ["sound/violin.mp3","https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"]))))
        .addChild(new autoclass.Transform().setDEF("Audio3").setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-0.5)])).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(100), java.newFloat(0)]))
          .addChild(new autoclass.Shape()
            .setAppearance(new autoclass.Appearance().setDEF("audio_emit5")
              .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.3), java.newFloat(1), java.newFloat(0.3)])).setEmissiveColor(java.newArray("float", [java.newFloat(0.8), java.newFloat(0.8), java.newFloat(0.8)])).setSpecularColor(java.newArray("float", [java.newFloat(0.01), java.newFloat(0.01), java.newFloat(0.01)])))
              .setTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["images/loudspeaker.png","https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/loudspeaker.png"]))))
            .setGeometry(new autoclass.Box().setSize(java.newArray("float", [java.newFloat(100), java.newFloat(100), java.newFloat(0.001)]))))))      ;
    X3D0.toFileX3D("../data/SplitChannels.new.node.x3d");
    X3D0.toFileJSON("../data/SplitChannels.new.node.json");
    process.exit(0);
