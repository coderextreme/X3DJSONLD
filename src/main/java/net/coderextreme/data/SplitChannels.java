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
public class SplitChannels {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new SplitChannels().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/SplitChannels.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Full").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("SplitChannels.x3d"))
        .addMeta(new meta().setName("description").setContent("This X3D scene includes a simple sound source which can be moved right and left. Depending on the position of the sound source, the user can hear the produced sound from the corresponding output speaker. Accordingly, there is a source that can be passed through a SpatialSound for the spatialization of the input audio. The approach is based on the relative position of the source and the listener, in comparison to the panner."))
        .addMeta(new meta().setName("info").setContent("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API."))
        .addMeta(new meta().setName("creator").setContent("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("28 October 2020"))
        .addMeta(new meta().setName("modified").setContent("Sat, 30 Dec 2023 07:58:55 GMT"))
        .addMeta(new meta().setName("reference").setContent("CHANGELOG.txt"))
        .addMeta(new meta().setName("reference").setContent("http://www.medialab.hmu.gr/minipages/x3domAudio"))
        .addMeta(new meta().setName("TODO").setContent("credit for audio files"))
        .addMeta(new meta().setName("identifier").setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SplitChannels.x3d")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("SplitChannels.x3d"))
        .addChild(new NavigationInfo())
        .addChild(new Background().setSkyColor(new MFColor0().getArray()))
        .addChild(new Viewpoint().setPosition(new float[] {0f,500f,600f}).setOrientation(new float[] {1f,0f,0f,-0.5f}).setRetainUserOffsets(true))
        .addChild(new Transform().setDEF("PowerR").setTranslation(new float[] {100f,400f,400f})
          .addChild(new Transform().setTranslation(new float[] {0f,40f,0f}).setRotation(new float[] {1f,0f,0f,-0.5f})
            .addChild(new Shape()
              .setAppearance(new Appearance().setDEF("audio_emit")
                .setMaterial(new Material().setDiffuseColor(new float[] {0f,1f,0f}).setSpecularColor(new float[] {0.01f,0.01f,0.01f}).setEmissiveColor(new float[] {0.8f,0.8f,0.8f})))
              .setGeometry(new Box().setSize(new float[] {10f,80f,0.01f}))))
          .addChild(new Transform().setTranslation(new float[] {-2.7f,37f,0f}).setRotation(new float[] {1f,0f,0f,-0.5f})
            .addChild(new Shape()
              .setAppearance(new Appearance().setDEF("audio_emit2")
                .setMaterial(new Material().setDiffuseColor(new float[] {0f,1f,0f}).setSpecularColor(new float[] {0.01f,0.01f,0.01f}).setEmissiveColor(new float[] {0.8f,0.8f,0.8f}))
                .setTexture(new ImageTexture().setUrl(new MFString1().getArray())))
              .setGeometry(new Box().setSize(new float[] {25f,83f,0.01f}))))
          .addChild(new Transform().setDEF("volumeRight").setTranslation(new float[] {0f,-10f,0f}).setRotation(new float[] {1f,0f,0f,-0.5f}).setScale(new float[] {10f,10f,10f})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setAmbientIntensity(0.0933f).setDiffuseColor(new float[] {0.345f,0.345f,0.882f}).setSpecularColor(new float[] {0.46f,0.46f,0.46f}).setShininess(0.51f)))
              .setGeometry(new Text()
                .setFontStyle(new FontStyle().setFamily(new MFString2().getArray()).setStyle("BOLD"))))))
        .addChild(new Transform().setDEF("PowerL").setTranslation(new float[] {-100f,400f,400f})
          .addChild(new Transform().setTranslation(new float[] {0f,40f,0f}).setRotation(new float[] {1f,0f,0f,-0.5f})
            .addChild(new Shape()
              .setAppearance(new Appearance().setDEF("audio_emit3")
                .setMaterial(new Material().setDiffuseColor(new float[] {0f,1f,0f}).setSpecularColor(new float[] {0.01f,0.01f,0.01f}).setEmissiveColor(new float[] {0.8f,0.8f,0.8f})))
              .setGeometry(new Box().setSize(new float[] {10f,80f,0.01f}))))
          .addChild(new Transform().setTranslation(new float[] {13.2f,37f,0f}).setRotation(new float[] {1f,0f,0f,-0.5f})
            .addChild(new Shape()
              .setAppearance(new Appearance().setDEF("audio_emit4")
                .setMaterial(new Material().setDiffuseColor(new float[] {0f,1f,0f}).setSpecularColor(new float[] {0.01f,0.01f,0.01f}).setEmissiveColor(new float[] {0.8f,0.8f,0.8f}))
                .setTexture(new ImageTexture().setUrl(new MFString3().getArray())))
              .setGeometry(new Box().setSize(new float[] {25f,83f,0.01f}))))
          .addChild(new Transform().setDEF("volumeLeft").setTranslation(new float[] {0f,-10f,0f}).setRotation(new float[] {1f,0f,0f,-0.5f}).setScale(new float[] {10f,10f,10f})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setAmbientIntensity(0.0933f).setDiffuseColor(new float[] {0.345f,0.345f,0.882f}).setSpecularColor(new float[] {0.46f,0.46f,0.46f}).setShininess(0.51f)))
              .setGeometry(new Text()
                .setFontStyle(new FontStyle().setFamily(new MFString4().getArray()).setStyle("BOLD"))))))
        .addChild(new Transform()
          .addChild(new Shape()
            .setAppearance(new Appearance().setDEF("floor")
              .setMaterial(new Material().setDiffuseColor(new float[] {0.1f,0.1f,0.1f}).setSpecularColor(new float[] {0.5f,0.6f,0.7f}).setShininess(0.8f)))
            .setGeometry(new Box().setSize(new float[] {1500f,10f,500f}))))
        .addChild(new ListenerPointSource().setTrackCurrentView(true))
        .addChild(new StreamAudioDestination()
          .addChild(new Gain()
            .addChild(new ChannelMerger()
              .addChild(new ChannelSelector()
                .addChild(new Gain()))
              .addChild(new ChannelSelector().setChannelSelection(1)
                .addChild(new Gain())))))
        .addChild(new ChannelSplitter().setDEF("ChannelSplitter").setChannelCountMode("EXPLICIT")
          .addOutputs(new AudioClip().setDescription("Violin").setUrl(new MFString5().getArray())))
        .addChild(new Transform().setDEF("Audio3").setTranslation(new float[] {0f,100f,0f}).setRotation(new float[] {1f,0f,0f,-0.5f})
          .addChild(new Shape()
            .setAppearance(new Appearance().setDEF("audio_emit5")
              .setMaterial(new Material().setDiffuseColor(new float[] {0.3f,1f,0.3f}).setSpecularColor(new float[] {0.01f,0.01f,0.01f}).setEmissiveColor(new float[] {0.8f,0.8f,0.8f}))
              .setTexture(new ImageTexture().setUrl(new MFString6().getArray())))
            .setGeometry(new Box().setSize(new float[] {100f,100f,0.001f})))))      ;
    return X3D0;
    }
private class MFColor0 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.2f,0.2f,0.21f});
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"images/line.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"});
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Times"});
  }
}
private class MFString3 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"images/line.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"});
  }
}
private class MFString4 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Times"});
  }
}
private class MFString5 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"sound/violin.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"});
  }
}
private class MFString6 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"images/loudspeaker.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/loudspeaker.png"});
  }
}
}
