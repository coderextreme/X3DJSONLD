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
public class Filters implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new Filters().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/Filters.new.java.x3d");
    model.toFileJSON("../data/Filters.new.java.json");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Full").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("Filters.x3d"))
        .addMeta(new meta().setName("description").setContent("This X3D scene involves three sound sources. Each of them is visualized by a 3D object (in our case is a sphere) that depicts the sound effects. Specifically, we have added filters through of them we are able to manage the different sound effects in an impressive way. Filters can be composed of a number of attributes, frequency, detune, gain and the quality factor which also known as Q. Furthermore, the filters are classified in some specific types, depending on the sound effects that produce. In detail, there is the Low-pass filter which can create more muffled sound. Another one is the High-pass filter, which is used to generate tinny sound. Equally important is the Band-pass filter, which cuts off low and high frequencies and passes through only these within a certain range. On the contrary, the Notch filter has exactly the opposite operation of the Band-pass filter. Then is the Low-shelf filter, its role is to change the amount of bass in a sound, as a result the frequencies that are lower than the current frequency get a boost, while them that are over it remain unchanged. Next, the High-shelf filter is responsible for the quantity of treble in a sound. Moreover, Peaking filter is used in order to handle the amount of midrange in a sound. Lastly, there is the All-pass filter, whose role is to introduce phaser effects."))
        .addMeta(new meta().setName("info").setContent("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API."))
        .addMeta(new meta().setName("creator").setContent("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("28 October 2020"))
        .addMeta(new meta().setName("modified").setContent("5 December 2021"))
        .addMeta(new meta().setName("reference").setContent("CHANGELOG.txt"))
        .addMeta(new meta().setName("TODO").setContent("credit for audio files"))
        .addMeta(new meta().setName("reference").setContent("https://www.medialab.hmu.gr/minipages/x3domAudio"))
        .addMeta(new meta().setName("identifier").setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/Filters.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("Filters.x3d"))
        .addChild(new NavigationInfo())
        .addChild(new Background().setSkyColor(new MFColor0().getArray()))
        .addChild(new Viewpoint().setDescription("View entire audio model").setOrientation(new double[] {1,0,0,-0.5}).setPosition(new double[] {0,500,600}).setRetainUserOffsets(true))
        .addChild(new Transform().setDEF("TransformAudio1").setTranslation(new double[] {-200,50,0})
          .addChild(new Shape()
            .setAppearance(new Appearance().setDEF("audio_emit")
              .setMaterial(new Material().setDiffuseColor(new double[] {0.1,0.1,0.1}).setEmissiveColor(new double[] {0.8,0.8,0.8}).setSpecularColor(new double[] {0.01,0.01,0.01})))
            .setGeometry(new Sphere().setRadius(30))))
        .addChild(new Transform().setDEF("TransformAudio2").setTranslation(new double[] {0,50,0})
          .addChild(new Shape()
            .setAppearance(new Appearance().setDEF("audio_emit2")
              .setMaterial(new Material().setDiffuseColor(new double[] {0.1,0.1,0.1}).setEmissiveColor(new double[] {0.8,0.8,0.8}).setSpecularColor(new double[] {0.01,0.01,0.01})))
            .setGeometry(new Sphere().setRadius(30))))
        .addChild(new Transform().setDEF("TransformAudio3").setTranslation(new double[] {200,50,0})
          .addChild(new Shape()
            .setAppearance(new Appearance().setDEF("audio_emit3")
              .setMaterial(new Material().setDiffuseColor(new double[] {0.1,0.1,0.1}).setEmissiveColor(new double[] {0.8,0.8,0.8}).setSpecularColor(new double[] {0.01,0.01,0.01})))
            .setGeometry(new Sphere().setRadius(30))))
        .addChild(new Transform().setDEF("AnimData").setTranslation(new double[] {0,50,0}))
        .addChild(new Transform().setDEF("AnimDataBoxH").setTranslation(new double[] {0,100,0}))
        .addChild(new Transform().setDEF("AnimDataBoxM").setTranslation(new double[] {15,100,0}))
        .addChild(new Transform().setDEF("AnimDataBoxL").setTranslation(new double[] {30,100,0}))
        .addChild(new Transform().setDEF("AnimDataBoxMM").setTranslation(new double[] {-15,100,0}))
        .addChild(new Transform().setDEF("AnimDataBoxLM").setTranslation(new double[] {-30,100,0}))
        .addChild(new Transform()
          .addChild(new Shape()
            .setAppearance(new Appearance().setDEF("floor")
              .setMaterial(new Material().setDiffuseColor(new double[] {0.1,0.1,0.1}).setShininess(0.8).setSpecularColor(new double[] {0.5,0.6,0.7})))
            .setGeometry(new Cylinder().setRadius(500))))
        .addChild(new ListenerPointSource().setTrackCurrentView(true))
        .addChild(new StreamAudioDestination()
          .addChild(new DynamicsCompressor()
            .addChild(new Gain()
              .addChild(new SpatialSound().setDEF("Audio1")
                .addChild(new Gain()
                  .addChild(new Analyser()
                    .addChild(new BiquadFilter().setType("ALLPASS").setDetune(50).setFrequency(600).setQualityFactor(30)
                      .addChild(new AudioClip().setDescription("Techno beat").setLoop(true).setUrl(new MFString1().getArray()))))))
              .addChild(new SpatialSound().setDEF("Audio2")
                .addChild(new Gain()
                  .addChild(new Analyser()
                    .addChild(new BiquadFilter().setType("ALLPASS").setDetune(15).setFrequency(600).setQualityFactor(15)
                      .addChild(new AudioClip().setDescription("Simple beat").setLoop(true).setUrl(new MFString2().getArray()))))))
              .addChild(new SpatialSound().setDEF("Audio3")
                .addChild(new Gain()
                  .addChild(new Analyser()
                    .addChild(new BiquadFilter().setType("ALLPASS").setFrequency(1000).setQualityFactor(0)
                      .addChild(new AudioClip().setDescription("Wobble loop").setLoop(true).setUrl(new MFString3().getArray()))))))))))      ;
    return X3D0;
    }
private class MFColor0 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new double[] {0.2,0.2,0.2});
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"sound/techno_beat.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/techno_beat.mp3"});
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"sound/beat.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/beat.mp3"});
  }
}
private class MFString3 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"sound/wobble_loop.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/wobble_loop.mp3"});
  }
}
}
