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
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("Sound").setLevel(3))
        .addMeta(new meta().setName("title").setContent("AllAudioGraphNodesTest.x3d"))
        .addMeta(new meta().setName("description").setContent("List of all X3D4 audio graph nodes to test infrastructure and validation support. Absence of attributes means that checking and removal of default values is working."))
        .addMeta(new meta().setName("creator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("25 October 2020"))
        .addMeta(new meta().setName("modified").setContent("Mon, 15 Sep 2025 05:18:43 GMT"))
        .addMeta(new meta().setName("warning").setContent("Developmental test, no actual 3D model expected"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/AllAudioGraphNodesTest.x3d")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("AllAudioGraphNodesTest.x3d"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setAcousticProperties(new AcousticProperties().setDescription("Testing of X3D4 nodes demonstrating W3C Audio API in progress").setDiffuse(0.25).setSpecular(1).setRefraction(0.5))
            .setMaterial(new Material()))
          .setGeometry(new Box()))
        .addChild(new Sound().setLocation(Java.to(doubleToFloat([0,1.6,0]), Java.type("float[]")))
          .setSource(new AudioClip().setDescription("testing").setUrl(Java.to(["sound/saxophone.mp3","https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"], Java.type("java.lang.String[]")))))
        .addChild(new Sound().setLocation(Java.to(doubleToFloat([0,1.6,0]), Java.type("float[]")))
          .setSource(new MovieTexture().setDescription("testing").setUrl(Java.to(["bogus.mpg","https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/bogus.mpg"], Java.type("java.lang.String[]")))))
        .addChild(new SpatialSound()
          .addChild(new Analyser()
            .addChild(new StreamAudioDestination()
              .addChild(new BiquadFilter()
                .addChild(new ChannelMerger()
                  .addChild(new ChannelSelector()
                    .addChild(new ChannelSplitter()
                      .addOutputs(new Convolver()
                        .addChild(new Delay()
                          .addChild(new DynamicsCompressor()
                            .addChild(new Gain()
                              .addChild(new StreamAudioDestination()
                                .addChild(new WaveShaper()
                                  .addChild(new BufferAudioSource())
                                  .addChild(new ListenerPointSource())
                                  .addChild(new MicrophoneSource())
                                  .addChild(new OscillatorSource())
                                  .addChild(new StreamAudioSource())))))))))))))))      ;
    X3D0.toFileX3D("../data/AllAudioGraphNodesTest.new.graal.x3d");
    X3D0.toFileJSON("../data/AllAudioGraphNodesTest.new.graal.x3dj");
