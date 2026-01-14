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
public class SpatialAudioCameraAnimation implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new SpatialAudioCameraAnimation().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/SpatialAudioCameraAnimation.new.java.x3d");
    model.toFileJSON("../data/SpatialAudioCameraAnimation.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Full").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("SpatialAudioCameraAnimation.x3d"))
        .addMeta(new meta().setName("description").setContent("In the last demo, there are two sound sources in different positions. Through the immersion in the X3D scene the user could attend a rational navigation. Whenever the camera moves in the direction of an existing sound source, the strength of this source increases, while the sound strength of the other (the second one) decreases and vice versa. Through this process, great realism of the scene is achieved, since it emulates the spatial sound in real world."))
        .addMeta(new meta().setName("info").setContent("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API."))
        .addMeta(new meta().setName("creator").setContent("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("28 October 2020"))
        .addMeta(new meta().setName("modified").setContent("5 December 2021"))
        .addMeta(new meta().setName("reference").setContent("CHANGELOG.txt"))
        .addMeta(new meta().setName("TODO").setContent("credit for audio files"))
        .addMeta(new meta().setName("reference").setContent("https://www.medialab.hmu.gr/minipages/x3domAudio"))
        .addMeta(new meta().setName("identifier").setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SpatialAudioCameraAnimation.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("SpatialAudioCameraAnimation.x3d"))
        .addChild(new NavigationInfo())
        .addChild(new Background().setBackUrl(new MFString0().getArray()).setBottomUrl(new MFString1().getArray()).setFrontUrl(new MFString2().getArray()).setLeftUrl(new MFString3().getArray()).setRightUrl(new MFString4().getArray()).setTopUrl(new MFString5().getArray()))
        .addChild(new Viewpoint().setDEF("Camera001").setDescription("Viewpoint is like camera, prepositioned in locations (and directions) of interest. In this example the camera is the \"ears of the user\". So, if the trackCurrentView field from ListenerPointSource is TRUE then position and orientation matches the users current view").setOrientation(new float[] {1f ,0f ,0f ,-0.523599f }).setPosition(new float[] {0f ,2000f ,3500f }))
        .addChild(new TimeSensor().setDEF("TIMER").setCycleInterval(33.333332d).setLoop(true))
        .addChild(new PositionInterpolator().setDEF("Camera001-POS-INTERP").setKey(new MFFloat6().getArray()).setKeyValue(new MFVec3f7().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Camera001-ROT-INTERP").setKey(new MFFloat8().getArray()).setKeyValue(new MFRotation9().getArray()))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("Camera001-POS-INTERP"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Camera001-POS-INTERP").setToField("set_position").setToNode("Camera001"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("Camera001-ROT-INTERP"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Camera001-ROT-INTERP").setToField("set_orientation").setToNode("Camera001"))
        .addChild(new Transform().setDEF("Floor").setTranslation(new float[] {1.241f ,0f ,0.358f })
          .addChild(new Shape()
            .setAppearance(new Appearance().setDEF("WireColor")
              .setMaterial(new Material().setDiffuseColor(new float[] {0.122f ,0.114f ,0.125f })))
            .setGeometry(new Box().setSize(new float[] {2000f ,1f ,2000f }))))
        .addChild(new Transform().setDEF("TransformAudio1").setTranslation(new float[] {-933.123474f ,0f ,-926.253235f })
          .addChild(new Shape()
            .setAppearance(new Appearance().setDEF("WireColor_1")
              .setMaterial(new Material().setDiffuseColor(new float[] {0.690196f ,0.101961f ,0.101961f })))
            .setGeometry(new Sphere().setRadius(100f )))
          .addChild(new Billboard()
            .addChild(new Transform().setDEF("violin").setRotation(new float[] {1f ,0f ,0f ,-0.5f }).setScale(new float[] {100f ,100f ,100f }).setTranslation(new float[] {0f ,100f ,0f })
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setAmbientIntensity(0.0933f ).setDiffuseColor(new float[] {1f ,1f ,1f }).setShininess(0.51f ).setSpecularColor(new float[] {0.46f ,0.46f ,0.46f })))
                .setGeometry(new Text().setString(new MFString10().getArray())
                  .setFontStyle(new FontStyle().setDEF("ModelFontStyle").setFamily(new MFString11().getArray()).setStyle("BOLD")))))))
        .addChild(new Transform().setDEF("TransformAudio2").setTranslation(new float[] {933.475586f ,0f ,924.423218f })
          .addChild(new Shape()
            .setAppearance(new Appearance().setDEF("WireColor_2")
              .setMaterial(new Material().setDiffuseColor(new float[] {0.105882f ,0.694118f ,0.580392f })))
            .setGeometry(new Sphere().setRadius(100f )))
          .addChild(new Billboard()
            .addChild(new Transform().setDEF("saxophone").setRotation(new float[] {1f ,0f ,0f ,-0.5f }).setScale(new float[] {100f ,100f ,100f }).setTranslation(new float[] {0f ,100f ,0f })
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setAmbientIntensity(0.0933f ).setDiffuseColor(new float[] {1f ,1f ,1f }).setShininess(0.51f ).setSpecularColor(new float[] {0.46f ,0.46f ,0.46f })))
                .setGeometry(new Text().setString(new MFString12().getArray())
                  .setFontStyle(new FontStyle().setUSE("ModelFontStyle")))))))
        .addChild(new ListenerPointSource().setTrackCurrentView(true))
        .addChild(new StreamAudioDestination()
          .addChild(new SpatialSound().setDEF("Audio1")
            .addChild(new Gain()
              .addChild(new AudioClip().setDescription("Violin").setLoop(true).setUrl(new MFString13().getArray()))))
          .addChild(new SpatialSound().setDEF("Audio2")
            .addChild(new Gain()
              .addChild(new AudioClip().setDescription("Saxophone").setLoop(true).setUrl(new MFString14().getArray()))))));
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"images/generic/BK1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png"});
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"images/generic/DN1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png"});
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"images/generic/FR1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png"});
  }
}
private class MFString3 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"images/generic/LF1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png"});
  }
}
private class MFString4 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"images/generic/RT1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png"});
  }
}
private class MFString5 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"images/generic/UP1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png"});
  }
}
private class MFFloat6 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFVec3f7 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,2000f ,3500f ,0f ,2000f ,0f ,0f ,2000f ,-3500f ,0f ,2000f ,0f ,0f ,2000f ,3500f });
  }
}
private class MFFloat8 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFRotation9 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f ,0f ,0f ,-0.523599f ,0.99999f ,0.003554f ,0.002727f ,-1.309007f ,0f ,-0.965926f ,-0.258819f ,-3.141593f ,0.002282f ,-0.793351f ,-0.60876f ,-3.135645f ,1f ,-0.000001f ,0f ,-0.523599f });
  }
}
private class MFString10 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Violin"});
  }
}
private class MFString11 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Times","SERIF"});
  }
}
private class MFString12 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Saxophone"});
  }
}
private class MFString13 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"sound/violin.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"});
  }
}
private class MFString14 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"sound/saxophone.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"});
  }
}
}
