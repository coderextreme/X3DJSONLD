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
public class Filters {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new Filters().initialize().toFileJSON("../data/Filters.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Full").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("Filters.x3d"))
        .addMeta(new meta().setName("description").setContent("This X3D scene involves three sound sources. Each of them is visualized by a 3D object (in our case is a sphere) that depicts the sound effects. Specifically, we have added filters through of them we are able to manage the different sound effects in an impressive way. Filters can be composed of a number of attributes, frequency, detune, gain and the quality factor which also known as Q. Furthermore, the filters are classified in some specific types, depending on the sound effects that produce. In detail, there is the Low-pass filter which can create more muffled sound. Another one is the High-pass filter, which is used to generate tinny sound. Equally important is the Band-pass filter, which cuts off low and high frequencies and passes through only these within a certain range. On the contrary, the Notch filter has exactly the opposite operation of the Band-pass filter. Then is the Low-shelf filter, its role is to change the amount of bass in a sound, as a result the frequencies that are lower than the current frequency get a boost, while them that are over it remain unchanged. Next, the High-shelf filter is responsible for the quantity of treble in a sound. Moreover, Peaking filter is used in order to handle the amount of midrange in a sound. Lastly, there is the All-pass filter, whose role is to introduce phaser effects."))
        .addMeta(new meta().setName("info").setContent("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API."))
        .addMeta(new meta().setName("creator").setContent("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("28 October 2020"))
        .addMeta(new meta().setName("modified").setContent("20 April 2021"))
        .addMeta(new meta().setName("reference").setContent("CHANGELOG.txt"))
        .addMeta(new meta().setName("TODO").setContent("credit for audio files"))
        .addMeta(new meta().setName("reference").setContent("http://www.medialab.teicrete.gr/minipages/x3domAudio"))
        .addMeta(new meta().setName("identifier").setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/Filters.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new NavigationInfo())
        .addChild(new Background().setSkyColor(new MFColor0().getArray()))
        .addChild(new Viewpoint().setBind("true").setOrientation(new float[] {1f,0f,0f,-0.5f}).setPosition(new float[] {0f,500f,600f}).setRetainUserOffsets(true))
        .addChild(new Transform().setDEF("Audio1").setTranslation(new float[] {-200f,50f,0f})
          .addChild(new Shape()
            .setAppearance(new Appearance().setDEF("audio_emit")
              .setMaterial(new Material().setDiffuseColor(new float[] {0.1f,0.1f,0.1f}).setEmmisiveColor("0.8 0.8 0.8").setSpecularColor(new float[] {0.01f,0.01f,0.01f})))
            .setGeometry(new Sphere().setRadius(30f))))
        .addChild(new Transform().setDEF("Audio2").setTranslation(new float[] {0f,50f,0f})
          .addChild(new Shape()
            .setAppearance(new Appearance().setDEF("audio_emit")
              .setMaterial(new Material().setDiffuseColor(new float[] {0.1f,0.1f,0.1f}).setEmmisiveColor("0.8 0.8 0.8").setSpecularColor(new float[] {0.01f,0.01f,0.01f})))
            .setGeometry(new Sphere().setRadius(30f))))
        .addChild(new Transform().setDEF("Audio3").setTranslation(new float[] {200f,50f,0f})
          .addChild(new Shape()
            .setAppearance(new Appearance().setDEF("audio_emit")
              .setMaterial(new Material().setDiffuseColor(new float[] {0.1f,0.1f,0.1f}).setEmmisiveColor("0.8 0.8 0.8").setSpecularColor(new float[] {0.01f,0.01f,0.01f})))
            .setGeometry(new Sphere().setRadius(30f))))
        .addChild(new Transform().setDEF("AnimData").setTranslation(new float[] {0f,50f,0f}))
        .addChild(new Transform().setDEF("AnimDataBoxH").setTranslation(new float[] {0f,100f,0f}))
        .addChild(new Transform().setDEF("AnimDataBoxM").setTranslation(new float[] {15f,100f,0f}))
        .addChild(new Transform().setDEF("AnimDataBoxL").setTranslation(new float[] {30f,100f,0f}))
        .addChild(new Transform().setDEF("AnimDataBoxMM").setTranslation(new float[] {-15f,100f,0f}))
        .addChild(new Transform().setDEF("AnimDataBoxLM").setTranslation(new float[] {-30f,100f,0f}))
        .addChild(new Transform()
          .addChild(new Shape()
            .setAppearance(new Appearance().setDEF("floor")
              .setMaterial(new Material().setDiffuseColor(new float[] {0.1f,0.1f,0.1f}).setShininess(0.8f).setSpecularColor(new float[] {0.5f,0.6f,0.7f})))
            .setGeometry(new Cylinder().setRadius(500f))))
        .addChild(new AudioDestination()
          .addChild(new DynamicsCompressor()
            .addChild(new Gain()
              .addChild(new SpatialSound().setUSE("Audio1")
                .addChild(new Gain()
                  .addChild(new Analyser()
                    .addChild(new BiquadFilter().setType("allpass").setDetune(50f).setFrequency(600f).setQualityFactor(30f)
                      .addChild(new AudioClip().setLoop(true).setPauseTime(-1d).setResumeTime(-1d).setStopTime(-1d).setUrl(new MFString1().getArray()))))))
              .addChild(new SpatialSound().setUSE("Audio2")
                .addChild(new Gain()
                  .addChild(new Analyser()
                    .addChild(new BiquadFilter().setType("allpass").setDetune(15f).setFrequency(600f).setQualityFactor(15f)
                      .addChild(new AudioClip().setLoop(true).setPauseTime(-1d).setResumeTime(-1d).setStopTime(-1d).setUrl(new MFString2().getArray()))))))
              .addChild(new SpatialSound().setUSE("Audio3")
                .addChild(new Gain()
                  .addChild(new Analyser()
                    .addChild(new BiquadFilter().setType("allpass").setFrequency(1000f).setQualityFactor(0f)
                      .addChild(new AudioClip().setLoop(true).setPauseTime(-1d).setResumeTime(-1d).setStopTime(-1d).setUrl(new MFString3().getArray()))))))))))      ;
    return X3D0;
    }
protected class MFColor0 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.2f,0.2f,0.2f});
  }
}
protected class MFString1 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"sound/techno_beat.mp3"});
  }
}
protected class MFString2 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"sound/beat.mp3"});
  }
}
protected class MFString3 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"sound/wobble_loop.mp3"});
  }
}
}
