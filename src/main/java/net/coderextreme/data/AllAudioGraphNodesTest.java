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
import java.util.ArrayList;
import java.util.List;
import net.coderextreme.X3DRoots;
public class AllAudioGraphNodesTest implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new AllAudioGraphNodesTest().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/AllAudioGraphNodesTest.new.java.x3d");
    model.toFileJSON("../data/AllAudioGraphNodesTest.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
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
            .setAcousticProperties(new AcousticProperties().setDescription("Testing of X3D4 nodes demonstrating W3C Audio API in progress").setDiffuse(0.25f ).setSpecular(1f ).setRefraction(0.5f ))
            .setMaterial(new Material()))
          .setGeometry(new Box()))
        .addChild(new Sound().setLocation(new float[] {0f ,1.6f ,0f })
          .setSource(new AudioClip().setDescription("testing").setUrl(new MFString0().getArray())))
        .addChild(new Sound().setLocation(new float[] {0f ,1.6f ,0f })
          .setSource(new MovieTexture().setDescription("testing").setUrl(new MFString1().getArray())))
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
                                  .addChild(new StreamAudioSource())))))))))))))));
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"sound/saxophone.mp3","https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"});
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"bogus.mpg","https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/bogus.mpg"});
  }
}
}
