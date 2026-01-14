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
public class TestCycleTimeStart implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new TestCycleTimeStart().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/TestCycleTimeStart.new.java.x3d");
    model.toFileJSON("../data/TestCycleTimeStart.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Interactive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("TestCycleTimeStart.x3d"))
        .addMeta(new meta().setName("creator").setContent("Andreas"))
        .addMeta(new meta().setName("creator").setContent("Joe D. Williams"))
        .addMeta(new meta().setName("description").setContent("Test design patterns for animation control."))
        .addMeta(new meta().setName("created").setContent("10 September 2023"))
        .addMeta(new meta().setName("modified").setContent("Mon, 15 Sep 2025 05:20:59 GMT"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/Sensors/TimeSensor/cycletimeIndex.html"))
        .addMeta(new meta().setName("reference").setContent("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/cycleTimeStart.x3d"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/TestCycleTimeStart.x3d")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("TestCycleTimeStart.x3d"))
        .addChild(new Viewpoint().setDescription("hello in there"))
        .addChild(new TimeSensor().setDEF("REDTIME1").setLoop(true).setStopTime(1757913659.298d))
        .addChild(new TimeSensor().setDEF("GREENTIME2").setCycleInterval(5d).setStartTime(1757913659.298d))
        .addChild(new TimeSensor().setDEF("BLUETIME3").setCycleInterval(10d))
        .addChild(new BooleanFilter().setDEF("GREENFILTER"))
        .addChild(new TimeTrigger().setDEF("BLUETRIGGER"))
        .addChild(new Transform().setDEF("REDBALL").setTranslation(new float[] {1.615999f ,0f ,0f })
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {1f ,0f ,0f })))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setDEF("GREENBALL")
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {0f ,1f ,0f })))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setDEF("BLUEBALL")
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f })))
            .setGeometry(new Sphere())))
        .addChild(new PositionInterpolator().setDEF("REDINTERP1").setKey(new MFFloat0().getArray()).setKeyValue(new MFVec3f1().getArray()))
        .addChild(new PositionInterpolator().setDEF("GREENINTERP2").setKey(new MFFloat2().getArray()).setKeyValue(new MFVec3f3().getArray()))
        .addChild(new PositionInterpolator().setDEF("BLUEINTERP3").setKey(new MFFloat4().getArray()).setKeyValue(new MFVec3f5().getArray()))
        .addChild(new ROUTE().setFromNode("REDTIME1").setFromField("cycleTime").setToNode("REDTIME1").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("REDTIME1").setFromField("stopTime_changed").setToNode("GREENTIME2").setToField("set_startTime"))
        .addChild(new ROUTE().setFromNode("GREENTIME2").setFromField("isActive").setToNode("GREENFILTER").setToField("set_boolean"))
        .addChild(new ROUTE().setFromNode("GREENFILTER").setFromField("inputFalse").setToNode("BLUETRIGGER").setToField("set_boolean"))
        .addChild(new ROUTE().setFromNode("BLUETRIGGER").setFromField("triggerTime").setToNode("BLUETIME3").setToField("set_startTime"))
        .addChild(new ROUTE().setFromNode("REDTIME1").setFromField("fraction_changed").setToNode("REDINTERP1").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("REDINTERP1").setFromField("value_changed").setToNode("REDBALL").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("GREENTIME2").setFromField("fraction_changed").setToNode("GREENINTERP2").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("GREENINTERP2").setFromField("value_changed").setToNode("GREENBALL").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("BLUETIME3").setFromField("fraction_changed").setToNode("BLUEINTERP3").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("BLUEINTERP3").setFromField("value_changed").setToNode("BLUEBALL").setToField("set_translation")));
    return X3D0;
    }
private class MFFloat0 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFVec3f1 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,2f ,0f ,0f ,0f ,0f ,0f ,-2f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat2 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFVec3f3 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,2f ,0f ,0f ,0f ,0f ,0f ,-2f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat4 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFVec3f5 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,-2f ,0f ,0f ,0f ,0f ,0f ,2f ,0f ,0f ,0f ,0f });
  }
}
}
