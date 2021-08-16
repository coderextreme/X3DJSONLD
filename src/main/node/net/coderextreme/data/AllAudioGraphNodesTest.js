var java = require('java');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: require('util').promisify, // Needs Node.js version 8 or greater, see comment below
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
        .addMeta((new autoclass.meta()).setName("title").setContent("AllAudioGraphNodesTest.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("List of all X3D4 audio graph nodes to test infrastructure and validation support. Absence of attributes means that checking and removal of default values is working."))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
        .addMeta((new autoclass.meta()).setName("created").setContent("25 October 2020"))
        .addMeta((new autoclass.meta()).setName("modified").setContent("10 April 2021"))
        .addMeta((new autoclass.meta()).setName("warning").setContent("Developmental test, no actual 3D model expected"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/AllAudioGraphNodesTest.x3d"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.WorldInfo()).setTitle("AllAudioGraphNodes.x3d"))
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Box()))
          .setAppearance((new autoclass.Appearance())
            .setAcousticProperties((new autoclass.AcousticProperties()))
            .setMaterial((new autoclass.Material()))))
        .addChild((new autoclass.SpatialSound())
          .addChild((new autoclass.Analyser())
            .addChild((new autoclass.AudioDestination())
              .addChild((new autoclass.BiquadFilter())
                .addChild((new autoclass.ChannelMerger())
                  .addChild((new autoclass.ChannelSelector())
                    .addChild((new autoclass.ChannelSplitter())
                      .addOutputs((new autoclass.Convolver())
                        .addChild((new autoclass.Delay())
                          .addChild((new autoclass.DynamicsCompressor())
                            .addChild((new autoclass.Gain())
                              .addChild((new autoclass.StreamAudioDestination())
                                .addChild((new autoclass.WaveShaper())
                                  .addComments((new autoclass.CommentsBlock("The following X3DSoundSourceNode nodes have no audio-graph children")))
                                  .addChild((new autoclass.BufferAudioSource()))
                                  .addChild((new autoclass.ListenerPointSource()))
                                  .addChild((new autoclass.MicrophoneSource()))
                                  .addChild((new autoclass.OscillatorSource()))
                                  .addChild((new autoclass.StreamAudioSource())))))))))))))))
        .addChild((new autoclass.Sound()).setLocation(java.newArray("float", [java.newFloat(0), java.newFloat(1.6), java.newFloat(0)]))
          .setSource((new autoclass.AudioClip()).setDescription("testing").setUrl(java.newArray("java.lang.String", ["sound/saxophone.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"]))))
        .addChild((new autoclass.Sound()).setLocation(java.newArray("float", [java.newFloat(0), java.newFloat(1.6), java.newFloat(0)]))
          .setSource((new autoclass.MovieTexture()).setDescription("testing").setUrl(java.newArray("java.lang.String", ["bogus.mpg","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/bogus.mpg"])))))      ;
    X3D0.toFileX3D("../data/AllAudioGraphNodesTest.new.x3d");
    process.exit(0);
