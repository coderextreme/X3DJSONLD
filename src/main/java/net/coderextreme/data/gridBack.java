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
import org.web3d.x3d.sai.*;
import org.web3d.x3d.sai.CADGeometry.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.sai.CubeMapTexturing.*;
import org.web3d.x3d.sai.DIS.*;
import org.web3d.x3d.sai.EnvironmentalEffects.*;
import org.web3d.x3d.sai.EnvironmentalSensor.*;
import org.web3d.x3d.sai.EventUtilities.*;
import org.web3d.x3d.sai.Followers.*;
import org.web3d.x3d.sai.Geometry2D.*;
import org.web3d.x3d.sai.Geometry3D.*;
import org.web3d.x3d.sai.Geospatial.*;
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.HAnim.*;
import org.web3d.x3d.sai.Interpolation.*;
import org.web3d.x3d.sai.KeyDeviceSensor.*;
import org.web3d.x3d.sai.Layering.*;
import org.web3d.x3d.sai.Layout.*;
import org.web3d.x3d.sai.Lighting.*;
import org.web3d.x3d.sai.NURBS.*;
import org.web3d.x3d.sai.Navigation.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.ParticleSystems.*;
import org.web3d.x3d.sai.Picking.*;
import org.web3d.x3d.sai.PointingDeviceSensor.*;
import org.web3d.x3d.sai.Rendering.*;
import org.web3d.x3d.sai.RigidBodyPhysics.*;
import org.web3d.x3d.sai.Scripting.*;
import org.web3d.x3d.sai.Shaders.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Sound.*;
import org.web3d.x3d.sai.Text.*;
import org.web3d.x3d.sai.Texturing3D.*;
import org.web3d.x3d.sai.Texturing.*;
import org.web3d.x3d.sai.Time.*;
import org.web3d.x3d.sai.VolumeRendering.*;
public class gridBack {
  public static void main(String[] args) {
    ConfigurationProperties.setShowDefaultAttributes(true);
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new gridBack().initialize().toFileJSON("../data/gridBack.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Interchange").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("gridBack.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Checkerboard grid background for X3D/VRML materials selection."))
        .addMeta(new metaObject().setName("creator").setContent("David Roussel"))
        .addMeta(new metaObject().setName("translator").setContent("James Harney, Don Brutzman NPS"))
        .addMeta(new metaObject().setName("created").setContent("8 April 2002"))
        .addMeta(new metaObject().setName("modified").setContent("12 January 2014"))
        .addMeta(new metaObject().setName("reference").setContent("http://vrmlstuff.free.fr/materials"))
        .addMeta(new metaObject().setName("subject").setContent("Universal Media Material Library"))
        .addMeta(new metaObject().setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new ShapeObject()
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setAmbientIntensity(0.01f).setDiffuseColor(new float[] {1f,1f,1f}).setShininess(0.05f)))
          .setGeometry(new IndexedFaceSetObject().setColorIndex(new MFInt32Object(new MFInt320().getArray())).setColorPerVertex(false).setCoordIndex(new MFInt32Object(new MFInt321().getArray())).setNormalPerVertex(false)
            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f2().getArray())))
            .setColor(new ColorObject().setColor(new MFColorObject(new MFColor3().getArray()))))))      ;
    return X3D0;
    }
protected class MFInt320 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0});
  }
}
protected class MFInt321 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,8,9,1,-1,1,9,10,2,-1,2,10,11,3,-1,3,11,12,4,-1,4,12,13,5,-1,5,13,14,6,-1,6,14,15,7,-1,8,16,17,9,-1,9,17,18,10,-1,10,18,19,11,-1,11,19,20,12,-1,12,20,21,13,-1,13,21,22,14,-1,14,22,23,15,-1,16,24,25,17,-1,17,25,26,18,-1,18,26,27,19,-1,19,27,28,20,-1,20,28,29,21,-1,21,29,30,22,-1,22,30,31,23,-1,24,32,33,25,-1,25,33,34,26,-1,26,34,35,27,-1,27,35,36,28,-1,28,36,37,29,-1,29,37,38,30,-1,30,38,39,31,-1,32,40,41,33,-1,33,41,42,34,-1,34,42,43,35,-1,35,43,44,36,-1,36,44,45,37,-1,37,45,46,38,-1,38,46,47,39,-1,40,48,49,41,-1,41,49,50,42,-1,42,50,51,43,-1,43,51,52,44,-1,44,52,53,45,-1,45,53,54,46,-1,46,54,55,47,-1,48,56,57,49,-1,49,57,58,50,-1,50,58,59,51,-1,51,59,60,52,-1,52,60,61,53,-1,53,61,62,54,-1,54,62,63,55,-1});
  }
}
protected class MFVec3f2 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-5.25f,5.25f,0f,-3.75f,5.25f,0f,-2.25f,5.25f,0f,-0.75f,5.25f,0f,0.75f,5.25f,0f,2.25f,5.25f,0f,3.75f,5.25f,0f,5.25f,5.25f,0f,-5.25f,3.75f,0f,-3.75f,3.75f,0f,-2.25f,3.75f,0f,-0.75f,3.75f,0f,0.75f,3.75f,0f,2.25f,3.75f,0f,3.75f,3.75f,0f,5.25f,3.75f,0f,-5.25f,2.25f,0f,-3.75f,2.25f,0f,-2.25f,2.25f,0f,-0.75f,2.25f,0f,0.75f,2.25f,0f,2.25f,2.25f,0f,3.75f,2.25f,0f,5.25f,2.25f,0f,-5.25f,0.75f,0f,-3.75f,0.75f,0f,-2.25f,0.75f,0f,-0.75f,0.75f,0f,0.75f,0.75f,0f,2.25f,0.75f,0f,3.75f,0.75f,0f,5.25f,0.75f,0f,-5.25f,-0.75f,0f,-3.75f,-0.75f,0f,-2.25f,-0.75f,0f,-0.75f,-0.75f,0f,0.75f,-0.75f,0f,2.25f,-0.75f,0f,3.75f,-0.75f,0f,5.25f,-0.75f,0f,-5.25f,-2.25f,0f,-3.75f,-2.25f,0f,-2.25f,-2.25f,0f,-0.75f,-2.25f,0f,0.75f,-2.25f,0f,2.25f,-2.25f,0f,3.75f,-2.25f,0f,5.25f,-2.25f,0f,-5.25f,-3.75f,0f,-3.75f,-3.75f,0f,-2.25f,-3.75f,0f,-0.75f,-3.75f,0f,0.75f,-3.75f,0f,2.25f,-3.75f,0f,3.75f,-3.75f,0f,5.25f,-3.75f,0f,-5.25f,-5.25f,0f,-3.75f,-5.25f,0f,-2.25f,-5.25f,0f,-0.75f,-5.25f,0f,0.75f,-5.25f,0f,2.25f,-5.25f,0f,3.75f,-5.25f,0f,5.25f,-5.25f,0f});
  }
}
protected class MFColor3 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0.5f,0.5f,0.5f,0.75f,0.75f,0.75f});
  }
}
}
