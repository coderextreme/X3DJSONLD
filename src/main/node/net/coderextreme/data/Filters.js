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
        .addMeta(new autoclass.meta().setName("title").setContent("Filters.x3d"))
        .addMeta(new autoclass.meta().setName("description").setContent("This X3D scene involves three sound sources. Each of them is visualized by a 3D object (in our case is a sphere) that depicts the sound effects. Specifically, we have added filters through of them we are able to manage the different sound effects in an impressive way. Filters can be composed of a number of attributes, frequency, detune, gain and the quality factor which also known as Q. Furthermore, the filters are classified in some specific types, depending on the sound effects that produce. In detail, there is the Low-pass filter which can create more muffled sound. Another one is the High-pass filter, which is used to generate tinny sound. Equally important is the Band-pass filter, which cuts off low and high frequencies and passes through only these within a certain range. On the contrary, the Notch filter has exactly the opposite operation of the Band-pass filter. Then is the Low-shelf filter, its role is to change the amount of bass in a sound, as a result the frequencies that are lower than the current frequency get a boost, while them that are over it remain unchanged. Next, the High-shelf filter is responsible for the quantity of treble in a sound. Moreover, Peaking filter is used in order to handle the amount of midrange in a sound. Lastly, there is the All-pass filter, whose role is to introduce phaser effects."))
        .addMeta(new autoclass.meta().setName("info").setContent("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API."))
        .addMeta(new autoclass.meta().setName("creator").setContent("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman"))
        .addMeta(new autoclass.meta().setName("created").setContent("28 October 2020"))
        .addMeta(new autoclass.meta().setName("modified").setContent("5 December 2021"))
        .addMeta(new autoclass.meta().setName("reference").setContent("CHANGELOG.txt"))
        .addMeta(new autoclass.meta().setName("TODO").setContent("credit for audio files"))
        .addMeta(new autoclass.meta().setName("reference").setContent("https://www.medialab.hmu.gr/minipages/x3domAudio"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/Filters.x3d"))
        .addMeta(new autoclass.meta().setName("generator").setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new autoclass.meta().setName("license").setContent("../license.html")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.WorldInfo().setTitle("Filters.x3d"))
        .addChild(new autoclass.NavigationInfo())
        .addChild(new autoclass.Background().setSkyColor(java.newArray("float", [java.newFloat(0.2), java.newFloat(0.2), java.newFloat(0.2)])))
        .addChild(new autoclass.Viewpoint().setDescription("View entire audio model").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-0.5)])).setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(500), java.newFloat(600)])).setRetainUserOffsets(true))
        .addChild(new autoclass.Transform().setDEF("TransformAudio1").setTranslation(java.newArray("float", [java.newFloat(-200), java.newFloat(50), java.newFloat(0)]))
          .addChild(new autoclass.Shape()
            .setAppearance(new autoclass.Appearance().setDEF("audio_emit")
              .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.1), java.newFloat(0.1)])).setEmissiveColor(java.newArray("float", [java.newFloat(0.8), java.newFloat(0.8), java.newFloat(0.8)])).setSpecularColor(java.newArray("float", [java.newFloat(0.01), java.newFloat(0.01), java.newFloat(0.01)]))))
            .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(30)))))
        .addChild(new autoclass.Transform().setDEF("TransformAudio2").setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(50), java.newFloat(0)]))
          .addChild(new autoclass.Shape()
            .setAppearance(new autoclass.Appearance().setDEF("audio_emit2")
              .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.1), java.newFloat(0.1)])).setEmissiveColor(java.newArray("float", [java.newFloat(0.8), java.newFloat(0.8), java.newFloat(0.8)])).setSpecularColor(java.newArray("float", [java.newFloat(0.01), java.newFloat(0.01), java.newFloat(0.01)]))))
            .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(30)))))
        .addChild(new autoclass.Transform().setDEF("TransformAudio3").setTranslation(java.newArray("float", [java.newFloat(200), java.newFloat(50), java.newFloat(0)]))
          .addChild(new autoclass.Shape()
            .setAppearance(new autoclass.Appearance().setDEF("audio_emit3")
              .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.1), java.newFloat(0.1)])).setEmissiveColor(java.newArray("float", [java.newFloat(0.8), java.newFloat(0.8), java.newFloat(0.8)])).setSpecularColor(java.newArray("float", [java.newFloat(0.01), java.newFloat(0.01), java.newFloat(0.01)]))))
            .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(30)))))
        .addChild(new autoclass.Transform().setDEF("AnimData").setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(50), java.newFloat(0)])))
        .addChild(new autoclass.Transform().setDEF("AnimDataBoxH").setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(100), java.newFloat(0)])))
        .addChild(new autoclass.Transform().setDEF("AnimDataBoxM").setTranslation(java.newArray("float", [java.newFloat(15), java.newFloat(100), java.newFloat(0)])))
        .addChild(new autoclass.Transform().setDEF("AnimDataBoxL").setTranslation(java.newArray("float", [java.newFloat(30), java.newFloat(100), java.newFloat(0)])))
        .addChild(new autoclass.Transform().setDEF("AnimDataBoxMM").setTranslation(java.newArray("float", [java.newFloat(-15), java.newFloat(100), java.newFloat(0)])))
        .addChild(new autoclass.Transform().setDEF("AnimDataBoxLM").setTranslation(java.newArray("float", [java.newFloat(-30), java.newFloat(100), java.newFloat(0)])))
        .addChild(new autoclass.Transform()
          .addChild(new autoclass.Shape()
            .setAppearance(new autoclass.Appearance().setDEF("floor")
              .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.1), java.newFloat(0.1)])).setShininess(java.newFloat(0.8)).setSpecularColor(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.6), java.newFloat(0.7)]))))
            .setGeometry(new autoclass.Cylinder().setRadius(java.newFloat(500)))))
        .addChild(new autoclass.ListenerPointSource().setTrackCurrentView(true))
        .addChild(new autoclass.StreamAudioDestination()
          .addChild(new autoclass.DynamicsCompressor()
            .addChild(new autoclass.Gain()
              .addChild(new autoclass.SpatialSound().setDEF("Audio1")
                .addChild(new autoclass.Gain()
                  .addChild(new autoclass.Analyser()
                    .addChild(new autoclass.BiquadFilter().setType(autoclass.field.TYPE_ALLPASS).setDetune(java.newFloat(50)).setFrequency(java.newFloat(600)).setQualityFactor(java.newFloat(30))
                      .addChild(new autoclass.AudioClip().setDescription("Techno beat").setLoop(true).setUrl(java.newArray("java.lang.String", ["sound/techno_beat.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/techno_beat.mp3"])))))))
              .addChild(new autoclass.SpatialSound().setDEF("Audio2")
                .addChild(new autoclass.Gain()
                  .addChild(new autoclass.Analyser()
                    .addChild(new autoclass.BiquadFilter().setType(autoclass.field.TYPE_ALLPASS).setDetune(java.newFloat(15)).setFrequency(java.newFloat(600)).setQualityFactor(java.newFloat(15))
                      .addChild(new autoclass.AudioClip().setDescription("Simple beat").setLoop(true).setUrl(java.newArray("java.lang.String", ["sound/beat.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/beat.mp3"])))))))
              .addChild(new autoclass.SpatialSound().setDEF("Audio3")
                .addChild(new autoclass.Gain()
                  .addChild(new autoclass.Analyser()
                    .addChild(new autoclass.BiquadFilter().setType(autoclass.field.TYPE_ALLPASS).setFrequency(java.newFloat(1000)).setQualityFactor(java.newFloat(0))
                      .addChild(new autoclass.AudioClip().setDescription("Wobble loop").setLoop(true).setUrl(java.newArray("java.lang.String", ["sound/wobble_loop.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/wobble_loop.mp3"])))))))))))      ;
    X3D0.toFileX3D("../data/Filters.new.node.x3d");
    X3D0.toFileJSON("../data/Filters.new.node.json");
    process.exit(0);
