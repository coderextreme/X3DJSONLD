package net.coderextreme.personal;
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
public class localrotation implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new localrotation().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../personal/localrotation.new.java.x3d");
    model.toFileJSON("../personal/localrotation.new.java.json");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("localrotation.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/personal/localrotation.x3d"))
        .addMeta(new meta().setName("description").setContent("chained boxes")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("localrotation.x3d"))
        .addChild(new NavigationInfo().setType("\"ANY\" \"EXAMINE\" \"FLY\" \"LOOKAT\""))
        .addChild(new Viewpoint().setDescription("Tour Views").setPosition(new double[] {0f,0f,20f}))
        .addChild(new Transform().setTranslation(new double[] {-4f,0f,0f})
          .addChild(new Shape()
            .setGeometry(new Box()))
          .addChild(new Transform().setDEF("TransformTargetParent").setTranslation(new double[] {4f,0f,0f})
            .addChild(new Shape()
              .setGeometry(new Box()))
            .addChild(new Transform().setDEF("TransformTargetChild").setTranslation(new double[] {4f,0f,0f})
              .addChild(new Shape()
                .setGeometry(new Box())))))
        .addChild(new ProximitySensor().setDEF("ActivateSensor").setSize(new double[] {1000000f,1000000f,1000000f}))
        .addChild(new TimeSensor().setDEF("Clock"))
        .addChild(new ROUTE().setFromNode("ActivateSensor").setFromField("enterTime").setToNode("Clock").setToField("set_startTime"))
        .addChild(new OrientationInterpolator().setDEF("Rotater").setKey(new MFFloat0().getArray()).setKeyValue(new MFRotation1().getArray()))
        .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("Rotater").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Rotater").setFromField("value_changed").setToNode("TransformTargetParent").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rotater").setFromField("value_changed").setToNode("TransformTargetChild").setToField("set_rotation")))      ;
    return X3D0;
    }
private class MFFloat0 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,1f});
  }
}
private class MFRotation1 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0f,0f,1f,0f,0f,0f,1f,1.57f});
  }
}
}
