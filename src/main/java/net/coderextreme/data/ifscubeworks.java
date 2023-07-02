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
public class ifscubeworks {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new ifscubeworks().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/ifscubeworks.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Interchange").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("ifscubeworks.x3d"))
        .addMeta(new meta().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/src/main/data/ifscubeworks.x3d"))
        .addMeta(new meta().setName("description").setContent("Template for an Indexed Face Set"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("created").setContent("4 April 2017"))
        .addMeta(new meta().setName("license").setContent("https://www.web3d.org/x3d/content/examples/license.html"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("ifscubeworks.x3d"))
        .addChild(new Group()
          .addChild(new Shape()
            .setGeometry(new IndexedFaceSet().setDEF("IndexedFaceSet").setCoordIndex(new MFInt320().getArray()).setNormalIndex(new MFInt321().getArray()).setNormalPerVertex(false).setColorIndex(new MFInt322().getArray())
              .setCoord(new Coordinate().setPoint(new MFVec3f3().getArray()))
              .setNormal(new Normal().setVector(new MFVec3f4().getArray()))
              .setColor(new Color().setColor(new MFColor5().getArray()))))))      ;
    return X3D0;
    }
protected class MFInt320 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1});
  }
}
protected class MFInt321 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,0,1,2,3,4,5});
  }
}
protected class MFInt322 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1});
  }
}
protected class MFVec3f3 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,1f,0f,1f,1f,1f,1f,1f,1f,0f,1f});
  }
}
protected class MFVec3f4 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1f,0f,0f,-1f,0f,0f,0f,1f,0f,0f,0f,-1f,0f,-1f,0f,0f,0f,1f});
  }
}
protected class MFColor5 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0f,1f,0f});
  }
}
}
