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
public class gridBack implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new gridBack().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/gridBack.new.java.x3d");
    model.toFileJSON("../data/gridBack.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Interchange").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("gridBack.x3d"))
        .addMeta(new meta().setName("description").setContent("Checkerboard grid background for X3D/VRML materials selection."))
        .addMeta(new meta().setName("creator").setContent("David Roussel"))
        .addMeta(new meta().setName("translator").setContent("James Harney, Don Brutzman NPS"))
        .addMeta(new meta().setName("created").setContent("8 April 2002"))
        .addMeta(new meta().setName("modified").setContent("12 January 2014"))
        .addMeta(new meta().setName("reference").setContent("http://vrmlstuff.free.fr/materials"))
        .addMeta(new meta().setName("subject").setContent("Universal Media Material Library"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.json"))
        .addMeta(new meta().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0.01f ).setDiffuseColor(new float[] {1f ,1f ,1f }).setShininess(0.05f )))
          .setGeometry(new IndexedFaceSet().setColorIndex(new MFInt320().getArray()).setColorPerVertex(false).setCoordIndex(new MFInt321().getArray()).setNormalPerVertex(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f2().getArray()))
            .setColor(new Color().setColor(new MFColor3().getArray())))));
    return X3D0;
    }
private class MFInt320 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0});
  }
}
private class MFInt321 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,8,9,1,-1,1,9,10,2,-1,2,10,11,3,-1,3,11,12,4,-1,4,12,13,5,-1,5,13,14,6,-1,6,14,15,7,-1,8,16,17,9,-1,9,17,18,10,-1,10,18,19,11,-1,11,19,20,12,-1,12,20,21,13,-1,13,21,22,14,-1,14,22,23,15,-1,16,24,25,17,-1,17,25,26,18,-1,18,26,27,19,-1,19,27,28,20,-1,20,28,29,21,-1,21,29,30,22,-1,22,30,31,23,-1,24,32,33,25,-1,25,33,34,26,-1,26,34,35,27,-1,27,35,36,28,-1,28,36,37,29,-1,29,37,38,30,-1,30,38,39,31,-1,32,40,41,33,-1,33,41,42,34,-1,34,42,43,35,-1,35,43,44,36,-1,36,44,45,37,-1,37,45,46,38,-1,38,46,47,39,-1,40,48,49,41,-1,41,49,50,42,-1,42,50,51,43,-1,43,51,52,44,-1,44,52,53,45,-1,45,53,54,46,-1,46,54,55,47,-1,48,56,57,49,-1,49,57,58,50,-1,50,58,59,51,-1,51,59,60,52,-1,52,60,61,53,-1,53,61,62,54,-1,54,62,63,55,-1});
  }
}
private class MFVec3f2 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-5.25f ,5.25f ,0f ,-3.75f ,5.25f ,0f ,-2.25f ,5.25f ,0f ,-0.75f ,5.25f ,0f ,0.75f ,5.25f ,0f ,2.25f ,5.25f ,0f ,3.75f ,5.25f ,0f ,5.25f ,5.25f ,0f ,-5.25f ,3.75f ,0f ,-3.75f ,3.75f ,0f ,-2.25f ,3.75f ,0f ,-0.75f ,3.75f ,0f ,0.75f ,3.75f ,0f ,2.25f ,3.75f ,0f ,3.75f ,3.75f ,0f ,5.25f ,3.75f ,0f ,-5.25f ,2.25f ,0f ,-3.75f ,2.25f ,0f ,-2.25f ,2.25f ,0f ,-0.75f ,2.25f ,0f ,0.75f ,2.25f ,0f ,2.25f ,2.25f ,0f ,3.75f ,2.25f ,0f ,5.25f ,2.25f ,0f ,-5.25f ,0.75f ,0f ,-3.75f ,0.75f ,0f ,-2.25f ,0.75f ,0f ,-0.75f ,0.75f ,0f ,0.75f ,0.75f ,0f ,2.25f ,0.75f ,0f ,3.75f ,0.75f ,0f ,5.25f ,0.75f ,0f ,-5.25f ,-0.75f ,0f ,-3.75f ,-0.75f ,0f ,-2.25f ,-0.75f ,0f ,-0.75f ,-0.75f ,0f ,0.75f ,-0.75f ,0f ,2.25f ,-0.75f ,0f ,3.75f ,-0.75f ,0f ,5.25f ,-0.75f ,0f ,-5.25f ,-2.25f ,0f ,-3.75f ,-2.25f ,0f ,-2.25f ,-2.25f ,0f ,-0.75f ,-2.25f ,0f ,0.75f ,-2.25f ,0f ,2.25f ,-2.25f ,0f ,3.75f ,-2.25f ,0f ,5.25f ,-2.25f ,0f ,-5.25f ,-3.75f ,0f ,-3.75f ,-3.75f ,0f ,-2.25f ,-3.75f ,0f ,-0.75f ,-3.75f ,0f ,0.75f ,-3.75f ,0f ,2.25f ,-3.75f ,0f ,3.75f ,-3.75f ,0f ,5.25f ,-3.75f ,0f ,-5.25f ,-5.25f ,0f ,-3.75f ,-5.25f ,0f ,-2.25f ,-5.25f ,0f ,-0.75f ,-5.25f ,0f ,0.75f ,-5.25f ,0f ,2.25f ,-5.25f ,0f ,3.75f ,-5.25f ,0f ,5.25f ,-5.25f ,0f });
  }
}
private class MFColor3 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.5f ,0.5f ,0.5f ,0.75f ,0.75f ,0.75f });
  }
}
}
