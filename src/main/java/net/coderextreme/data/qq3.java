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
public class qq3 implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new qq3().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/qq3.new.java.x3d");
    model.toFileJSON("../data/qq3.new.java.json");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
ProtoInstance ProtoInstance1 = null;
ProtoInstance ProtoInstance2 = null;
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("qq3.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("translator").setContent("John Carlson"))
        .addMeta(new meta().setName("created").setContent("11 Jan 2015"))
        .addMeta(new meta().setName("modified").setContent("05 May 2017"))
        .addMeta(new meta().setName("description").setContent("12 extrusions to test prototype expander"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/x3d/qq3.x3d"))
        .addMeta(new meta().setName("generator").setContent("manual")))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("Process")
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addComments("left")
              .addChild(new Transform().setScale(new double[] {0.5,0.5,0.5})
                .addChild(new Shape().setDEF("ShapeLeftDown")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new double[] {0.7,1,0})))
                  .setGeometry(new Extrusion().setSpine(new MFVec3f0().getArray()).setCreaseAngle(0.785).setCrossSection(new MFVec2f1().getArray()))))
              .addComments("right")
              .addChild(new Transform().setScale(new double[] {0.5,0.5,0.5})
                .addChild(new Shape().setDEF("ShapeUpRight")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new double[] {0,0.7,1})))
                  .setGeometry(new Extrusion().setSpine(new MFVec3f2().getArray()).setCreaseAngle(0.785).setCrossSection(new MFVec2f3().getArray()))))
              .addComments("up")
              .addChild(new Transform().setScale(new double[] {0.5,0.5,0.5})
                .addChild(new Shape().setUSE("ShapeUpRight")))
              .addComments("down")
              .addChild(new Transform().setScale(new double[] {0.5,0.5,0.5})
                .addChild(new Shape().setUSE("ShapeLeftDown"))))))
        .addChild(new Viewpoint().setDescription("Process pipes").setOrientation(new double[] {1,0,0,-0.4}).setPosition(new double[] {0,5,12}))
        .addChild(new Transform().setTranslation(new double[] {0,-2.5,0})
          .addChild(ProtoInstance0 = new ProtoInstance().setName("Process")))
        .addChild(new Transform()
          .addChild(ProtoInstance1 = new ProtoInstance().setName("Process")))
        .addChild(new Transform().setTranslation(new double[] {0,2.5,0})
          .addChild(ProtoInstance2 = new ProtoInstance().setName("Process"))))      ;
    return X3D0;
    }
private class MFVec3f0 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-2.5,0,0,-1.5,0,0});
  }
}
private class MFVec2f1 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new double[] {1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0});
  }
}
private class MFVec3f2 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {1.5,0,0,2.5,0,0});
  }
}
private class MFVec2f3 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new double[] {1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0});
  }
}
}
