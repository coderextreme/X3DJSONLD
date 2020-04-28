package net.coderextreme.x3d_code.www_web3d_org.x3d.content.examples.Basic.Geospatial;
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
public class SriCampus129 {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new SriCampus129().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/Geospatial/SriCampus129.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Interactive").setVersion("3.3")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("Geospatial").setLevel(1))
        .addMeta(new metaObject().setName("title").setContent("SriCampus129.x3d"))
        .addMeta(new metaObject().setName("description").setContent("SRI campus building"))
        .addMeta(new metaObject().setName("creator").setContent("Aaron Heller, SRI International"))
        .addMeta(new metaObject().setName("translator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("1 February 2000"))
        .addMeta(new metaObject().setName("translated").setContent("29 April 2003"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.geovrml.org/examples"))
        .addMeta(new metaObject().setName("subject").setContent("X3D geospatial example"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus129.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("SriCampus129.x3d"))
        .addChild(new TouchSensorObject().setDEF("MouseOverPopupDescription").setDescription("Superellipse-39").setEnabled(false))
        .addChild(new ShapeObject()
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.75f,0.75f,0.75f})))
          .setGeometry(new IndexedFaceSetObject().setConvex(false).setCoordIndex(new MFInt32Object(new MFInt320().getArray())).setCreaseAngle(4f).setSolid(false)
            .setCoord(new CoordinateObject().setDEF("OBJECT-129-VERTICES").setPoint(new MFVec3fObject(new MFVec3f1().getArray()))))))      ;
    return X3D0;
    }
protected class MFInt320 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {60,61,49,-1,59,61,60,-1,58,61,59,-1,57,61,58,-1,56,61,57,-1,55,61,56,-1,54,61,55,-1,53,61,54,-1,52,61,53,-1,51,61,52,-1,50,61,51,-1,49,61,50,-1,48,60,49,37,-1,47,59,60,48,-1,46,58,59,47,-1,45,57,58,46,-1,44,56,57,45,-1,43,55,56,44,-1,42,54,55,43,-1,41,53,54,42,-1,40,52,53,41,-1,39,51,52,40,-1,38,50,51,39,-1,37,49,50,38,-1,36,48,37,25,-1,35,47,48,36,-1,34,46,47,35,-1,33,45,46,34,-1,32,44,45,33,-1,31,43,44,32,-1,30,42,43,31,-1,29,41,42,30,-1,28,40,41,29,-1,27,39,40,28,-1,26,38,39,27,-1,25,37,38,26,-1,24,36,25,13,-1,23,35,36,24,-1,22,34,35,23,-1,21,33,34,22,-1,20,32,33,21,-1,19,31,32,20,-1,18,30,31,19,-1,17,29,30,18,-1,16,28,29,17,-1,15,27,28,16,-1,14,26,27,15,-1,13,25,26,14,-1,12,24,13,1,-1,11,23,24,12,-1,10,22,23,11,-1,9,21,22,10,-1,8,20,21,9,-1,7,19,20,8,-1,6,18,19,7,-1,5,17,18,6,-1,4,16,17,5,-1,3,15,16,4,-1,2,14,15,3,-1,1,13,14,2,-1,0,12,1,-1,0,11,12,-1,0,10,11,-1,0,9,10,-1,0,8,9,-1,0,7,8,-1,0,6,7,-1,0,5,6,-1,0,4,5,-1,0,3,4,-1,0,2,3,-1,0,1,2,-1});
  }
}
protected class MFVec3f1 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1.798667f,0f,0.8993335f,1.5576913f,0f,0.77884567f,1.5576913f,-0.44966674f,0.44966674f,1.5576913f,-0.77884567f,5.5068295e-17f,1.5576913f,-0.8993335f,-0.44966674f,1.5576913f,-0.77884567f,-0.77884567f,1.5576913f,-0.44966674f,-0.8993335f,1.5576913f,-1.1013659e-16f,-0.77884567f,1.5576913f,0.44966674f,-0.44966674f,1.5576913f,0.77884567f,-1.6520488e-16f,1.5576913f,0.8993335f,0.44966674f,1.5576913f,0.77884567f,0.77884567f,1.5576913f,0.44966674f,1.5576913f,0.8993335f,0f,1.3490002f,0.8993335f,-0.77884567f,0.77884567f,0.8993335f,-1.3490002f,9.5381085e-17f,0.8993335f,-1.5576913f,-0.77884567f,0.8993335f,-1.3490002f,-1.3490002f,0.8993335f,-0.77884567f,-1.5576913f,0.8993335f,-1.9076217e-16f,-1.3490002f,0.8993335f,0.77884567f,-0.77884567f,0.8993335f,1.3490002f,-2.8614324e-16f,0.8993335f,1.5576913f,0.77884567f,0.8993335f,1.3490002f,1.3490002f,0.8993335f,0.77884567f,1.798667f,0f,0f,1.5576913f,0f,-0.8993335f,0.8993335f,0f,-1.5576913f,1.1013659e-16f,0f,-1.798667f,-0.8993335f,0f,-1.5576913f,-1.5576913f,0f,-0.8993335f,-1.798667f,0f,-2.2027318e-16f,-1.5576913f,0f,0.8993335f,-0.8993335f,0f,1.5576913f,-3.3040977e-16f,0f,1.798667f,0.8993335f,0f,1.5576913f,1.5576913f,0f,0.8993335f,1.5576913f,-0.8993335f,0f,1.3490002f,-0.8993335f,-0.77884567f,0.77884567f,-0.8993335f,-1.3490002f,9.5381085e-17f,-0.8993335f,-1.5576913f,-0.77884567f,-0.8993335f,-1.3490002f,-1.3490002f,-0.8993335f,-0.77884567f,-1.5576913f,-0.8993335f,-1.9076217e-16f,-1.3490002f,-0.8993335f,0.77884567f,-0.77884567f,-0.8993335f,1.3490002f,-2.8614324e-16f,-0.8993335f,1.5576913f,0.77884567f,-0.8993335f,1.3490002f,1.3490002f,-0.8993335f,0.77884567f,0.8993335f,-1.5576913f,0f,0.77884567f,-1.5576913f,-0.44966674f,0.44966674f,-1.5576913f,-0.77884567f,5.5068295e-17f,-1.5576913f,-0.8993335f,-0.44966674f,-1.5576913f,-0.77884567f,-0.77884567f,-1.5576913f,-0.44966674f,-0.8993335f,-1.5576913f,-1.1013659e-16f,-0.77884567f,-1.5576913f,0.44966674f,-0.44966674f,-1.5576913f,0.77884567f,-1.6520488e-16f,-1.5576913f,0.8993335f,0.44966674f,-1.5576913f,0.77884567f,0.77884567f,-1.5576913f,0.44966674f,0f,-1.798667f,0f});
  }
}
}
