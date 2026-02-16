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
public class ExtrusionHeart implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new ExtrusionHeart().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/ExtrusionHeart.new.java.x3d");
    model.toFileJSON("../data/ExtrusionHeart.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile(new SFString("Immersive")).setVersion(new SFString("4.0"))
      .setHead(new head()
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("ExtrusionHeart.x3d")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("Simple extrusion of a Valentine heart.")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("Class participants in course Introduction to VRML/X3D.")))
        .addMeta(new meta().setName(new SFString("created")).setContent(new SFString("14 February 2001")))
        .addMeta(new meta().setName(new SFString("modified")).setContent(new SFString("27 November 2015")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionHeart.x3d")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")))
        .addMeta(new meta().setName(new SFString("license")).setContent(new SFString("../license.html"))))
      .setScene(new Scene()
        .addChild(new Viewpoint().setDescription(new SFString("Extrusion Heart")).setOrientation(new float[] {1f ,0f ,0f ,1.57f }).setPosition(new float[] {0f ,-4f ,0f }))
        .addChild(new Transform().setTranslation(new float[] {0f ,-0.5f ,0f })
          .addChild(new Shape()
            .setGeometry(new Extrusion().setCreaseAngle(3.14159f ).setCrossSection(new MFVec2f0().getArray()).setScale(new MFVec2f1().getArray()).setSolid(false).setSpine(new MFVec3f2().getArray()))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {0.8f ,0.3f ,0.3f }))))));
    return X3D0;
    }
private class MFVec2f0 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0f ,0.8f ,0.2f ,1f ,0.7f ,0.95f ,1f ,0.5f ,0.8f ,0f ,0.5f ,-0.3f ,0f ,-0.7f ,-0.5f ,-0.3f ,-0.8f ,0f ,-1f ,0.5f ,-0.7f ,0.95f ,-0.2f ,1f ,0f ,0.8f });
  }
}
private class MFVec2f1 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.01f ,0.01f ,0.8f ,0.8f ,1f ,1f ,0.8f ,0.8f ,0.01f ,0.01f });
  }
}
private class MFVec3f2 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,0.1f ,0f ,0f ,0.5f ,0f ,0f ,0.9f ,0f ,0f ,1f ,0f });
  }
}
}
