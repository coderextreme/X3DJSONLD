package net.coderextreme.data;
import org.web3d.x3d.jsail.*;
import org.web3d.x3d.jsail.CADGeometry.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.CubeMapTexturing.*;
import org.web3d.x3d.jsail.DIS.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.EnvironmentalSensor.*;
import org.web3d.x3d.jsail.EventUtilities.*;
import org.web3d.x3d.jsail.Followers.*;
import org.web3d.x3d.jsail.Geometry2D.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Geospatial.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.HAnim.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.KeyDeviceSensor.*;
import org.web3d.x3d.jsail.Layering.*;
import org.web3d.x3d.jsail.Layout.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.NURBS.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.ParticleSystems.*;
import org.web3d.x3d.jsail.Picking.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.RigidBodyPhysics.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shaders.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Sound.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing3D.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Time.*;
import org.web3d.x3d.jsail.VolumeRendering.*;
import org.web3d.x3d.jsail.fields.*;
public class AllAudioGraphNodesTest {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new AllAudioGraphNodesTest().initialize().toFileJSON("../data/AllAudioGraphNodesTest.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Full").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("AllAudioGraphNodesTest.x3d"))
        .addMeta(new meta().setName("description").setContent("List of all X3D4 audio graph nodes to test infrastructure and validation support. Absence of attributes means that checking and removal of default values is working."))
        .addMeta(new meta().setName("creator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("25 October 2020"))
        .addMeta(new meta().setName("modified").setContent("4 August 2021"))
        .addMeta(new meta().setName("warning").setContent("Developmental test, no actual 3D model expected"))
        .addMeta(new meta().setName("identifier").setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/AllAudioGraphNodesTest.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("AllAudioGraphNodes.x3d"))
        .addChild(new Shape()
          .setGeometry(new Box())
          .setAppearance(new Appearance()
            .setAcousticProperties(new AcousticProperties())
            .setMaterial(new Material())))
        .addChild(new SpatialSound().setDistanceModel("INVERSE").setDopplerEnabled("false")
          .addChild(new Analyser().setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS")
            .addChild(new AudioDestination().setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS")
              .addChild(new BiquadFilter().setType("LOWPASS").setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS")
                .addChild(new ChannelMerger().setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS")
                  .addChild(new ChannelSelector().setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS")
                    .addChild(new ChannelSplitter().setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS")
                      .addOutputs(new Convolver().setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS")
                        .addChild(new Delay().setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS")
                          .addChild(new DynamicsCompressor().setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS")
                            .addChild(new Gain().setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS")
                              .addChild(new StreamAudioDestination().setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS")
                                .addChild(new WaveShaper().setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS")
                                  .addComments("The following X3DSoundSourceNode nodes have no audio-graph children")
                                  .addChild(new BufferAudioSource().setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS"))
                                  .addChild(new ListenerPointSource().setDopplerEnabled("false"))
                                  .addChild(new MicrophoneSource())
                                  .addChild(new OscillatorSource().setFrequency(440f))
                                  .addChild(new StreamAudioSource().setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS")))))))))))))))
        .addChild(new Sound().setLocation(new float[] {0f,1.6f,0f})
          .setSource(new AudioClip().setDescription("testing").setUrl(new MFString0().getArray())))
        .addChild(new Sound().setLocation(new float[] {0f,1.6f,0f})
          .setSource(new MovieTexture().setDescription("testing").setUrl(new MFString1().getArray()))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"sound/saxophone.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"});
  }
}
protected class MFString1 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"bogus.mpg","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/bogus.mpg"});
  }
}
}
