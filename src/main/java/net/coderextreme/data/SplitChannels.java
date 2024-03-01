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
public class SplitChannels implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new SplitChannels().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/SplitChannels.new.java.x3d");
    model.toFileJSON("../data/SplitChannels.new.java.json");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Full").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("SplitChannels.x3d"))
        .addMeta(new meta().setName("description").setContent("This X3D scene includes a simple sound source which can be moved right and left. Depending on the position of the sound source, the user can hear the produced sound from the corresponding output speaker. Accordingly, there is a source that can be passed through a SpatialSound for the spatialization of the input audio. The approach is based on the relative position of the source and the listener, in comparison to the panner."))
        .addMeta(new meta().setName("info").setContent("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API."))
        .addMeta(new meta().setName("creator").setContent("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("28 October 2020"))
        .addMeta(new meta().setName("modified").setContent("5 December 2021"))
        .addMeta(new meta().setName("reference").setContent("CHANGELOG.txt"))
        .addMeta(new meta().setName("TODO").setContent("credit for audio files"))
        .addMeta(new meta().setName("reference").setContent("http://www.medialab.hmu.gr/minipages/x3domAudio"))
        .addMeta(new meta().setName("identifier").setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SplitChannels.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("SplitChannels.x3d"))
        .addChild(new NavigationInfo().setType("NONE"))
        .addChild(new Background().setSkyColor(new MFColor0().getArray()))
        .addChild(new Viewpoint().setOrientation(new double[] {1,0,0,-0.5}).setPosition(new double[] {0,500,600}).setRetainUserOffsets(true))
        .addChild(new Transform().setDEF("PowerR").setTranslation(new double[] {100,400,400})
          .addChild(new Transform().setRotation(new double[] {1,0,0,-0.5}).setTranslation(new double[] {0,40,0})
            .addChild(new Shape()
              .setAppearance(new Appearance().setDEF("audio_emit")
                .setMaterial(new Material().setDiffuseColor(new double[] {0,1,0}).setEmissiveColor(new double[] {0.8,0.8,0.8}).setSpecularColor(new double[] {0.01,0.01,0.01})))
              .setGeometry(new Box().setSize(new double[] {10,80,0.01}))))
          .addChild(new Transform().setRotation(new double[] {1,0,0,-0.5}).setTranslation(new double[] {-2.7,37,0})
            .addChild(new Shape()
              .setAppearance(new Appearance().setDEF("audio_emit2")
                .setMaterial(new Material().setDiffuseColor(new double[] {0,1,0}).setEmissiveColor(new double[] {0.8,0.8,0.8}).setSpecularColor(new double[] {0.01,0.01,0.01}))
                .setTexture(new ImageTexture().setUrl(new MFString1().getArray())))
              .setGeometry(new Box().setSize(new double[] {25,83,0.01}))))
          .addChild(new Transform().setDEF("volumeRight").setRotation(new double[] {1,0,0,-0.5}).setScale(new double[] {10,10,10}).setTranslation(new double[] {0,-10,0})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setAmbientIntensity(0.0933).setDiffuseColor(new double[] {0.345,0.345,0.882}).setShininess(0.51).setSpecularColor(new double[] {0.46,0.46,0.46})))
              .setGeometry(new Text().setString(new MFString2().getArray())
                .setFontStyle(new FontStyle().setFamily(new MFString3().getArray()).setStyle("BOLD"))))))
        .addChild(new Transform().setDEF("PowerL").setTranslation(new double[] {-100,400,400})
          .addChild(new Transform().setRotation(new double[] {1,0,0,-0.5}).setTranslation(new double[] {0,40,0})
            .addChild(new Shape()
              .setAppearance(new Appearance().setDEF("audio_emit3")
                .setMaterial(new Material().setDiffuseColor(new double[] {0,1,0}).setEmissiveColor(new double[] {0.8,0.8,0.8}).setSpecularColor(new double[] {0.01,0.01,0.01})))
              .setGeometry(new Box().setSize(new double[] {10,80,0.01}))))
          .addChild(new Transform().setRotation(new double[] {1,0,0,-0.5}).setTranslation(new double[] {13.2,37,0})
            .addChild(new Shape()
              .setAppearance(new Appearance().setDEF("audio_emit4")
                .setMaterial(new Material().setDiffuseColor(new double[] {0,1,0}).setEmissiveColor(new double[] {0.8,0.8,0.8}).setSpecularColor(new double[] {0.01,0.01,0.01}))
                .setTexture(new ImageTexture().setUrl(new MFString4().getArray())))
              .setGeometry(new Box().setSize(new double[] {25,83,0.01}))))
          .addChild(new Transform().setDEF("volumeLeft").setRotation(new double[] {1,0,0,-0.5}).setScale(new double[] {10,10,10}).setTranslation(new double[] {0,-10,0})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setAmbientIntensity(0.0933).setDiffuseColor(new double[] {0.345,0.345,0.882}).setShininess(0.51).setSpecularColor(new double[] {0.46,0.46,0.46})))
              .setGeometry(new Text().setString(new MFString5().getArray())
                .setFontStyle(new FontStyle().setFamily(new MFString6().getArray()).setStyle("BOLD"))))))
        .addChild(new Transform()
          .addChild(new Shape()
            .setAppearance(new Appearance().setDEF("floor")
              .setMaterial(new Material().setDiffuseColor(new double[] {0.1,0.1,0.1}).setShininess(0.8).setSpecularColor(new double[] {0.5,0.6,0.7})))
            .setGeometry(new Box().setSize(new double[] {1500,10,500}))))
        .addChild(new ListenerPointSource().setTrackCurrentView(true))
        .addChild(new StreamAudioDestination()
          .addChild(new Gain()
            .addChild(new ChannelMerger()
              .addChild(new ChannelSelector()
                .addChild(new Gain().setUSE("ChannelSplitter")))
              .addChild(new ChannelSelector().setChannelSelection(1)
                .addChild(new Gain().setUSE("ChannelSplitter"))))))
        .addChild(new ChannelSplitter().setDEF("ChannelSplitter").setChannelCountMode("EXPLICIT")
          .addOutputs(new AudioClip().setDescription("Violin").setUrl(new MFString7().getArray())))
        .addChild(new Transform().setDEF("Audio3").setRotation(new double[] {1,0,0,-0.5}).setTranslation(new double[] {0,100,0})
          .addChild(new Shape()
            .setAppearance(new Appearance().setDEF("audio_emit5")
              .setMaterial(new Material().setDiffuseColor(new double[] {0.3,1,0.3}).setEmissiveColor(new double[] {0.8,0.8,0.8}).setSpecularColor(new double[] {0.01,0.01,0.01}))
              .setTexture(new ImageTexture().setUrl(new MFString8().getArray())))
            .setGeometry(new Box().setSize(new double[] {100,100,0.001})))))      ;
    return X3D0;
    }
private class MFColor0 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new double[] {0.2,0.2,0.21});
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"images/line.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"});
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Right Channel Volume"});
  }
}
private class MFString3 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Times"});
  }
}
private class MFString4 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"images/line.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"});
  }
}
private class MFString5 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Left Channel Volume"});
  }
}
private class MFString6 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Times"});
  }
}
private class MFString7 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"sound/violin.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"});
  }
}
private class MFString8 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"images/loudspeaker.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/loudspeaker.png"});
  }
}
}
