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
public class SriCampus046 {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new SriCampus046().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/Geospatial/SriCampus046.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Interactive").setVersion("3.3")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("Geospatial").setLevel(1))
        .addMeta(new metaObject().setName("title").setContent("SriCampus046.x3d"))
        .addMeta(new metaObject().setName("description").setContent("SRI campus building"))
        .addMeta(new metaObject().setName("creator").setContent("Aaron Heller, SRI International"))
        .addMeta(new metaObject().setName("translator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("1 February 2000"))
        .addMeta(new metaObject().setName("translated").setContent("29 April 2003"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.geovrml.org/examples"))
        .addMeta(new metaObject().setName("subject").setContent("X3D geospatial example"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus046.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("SriCampus046.x3d"))
        .addChild(new TouchSensorObject().setDEF("MouseOverPopupDescription").setDescription("Extrusion-123").setEnabled(false))
        .addChild(new ShapeObject()
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.75f,0.75f,0.75f})))
          .setGeometry(new IndexedFaceSetObject().setConvex(false).setCoordIndex(new MFInt32Object(new MFInt320().getArray())).setSolid(false)
            .setCoord(new CoordinateObject().setDEF("OBJECT-46-VERTICES").setPoint(new MFVec3fObject(new MFVec3f1().getArray()))))))      ;
    return X3D0;
    }
protected class MFInt320 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,39,38,-1,38,39,37,36,-1,36,37,35,34,-1,34,35,33,32,-1,32,33,31,30,-1,30,31,29,28,-1,28,29,27,26,-1,26,27,25,24,-1,24,25,23,22,-1,22,23,21,20,-1,20,21,19,18,-1,18,19,17,16,-1,16,17,15,14,-1,14,15,13,12,-1,12,13,11,10,-1,10,11,9,8,-1,8,9,7,6,-1,6,7,5,4,-1,4,5,3,2,-1,2,3,1,0,-1,1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,-1,38,36,34,32,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,-1});
  }
}
protected class MFVec3f1 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,0f,-8.313948f,0f,2.952344f,0.08051264f,-5.1568027f,2.952344f,-8.313948f,-5.1568027f,0.25575694f,0.08051264f,-9.145796f,0.25575694f,-8.313948f,-9.145796f,4.7673345f,0.08051264f,-13.154732f,4.7673345f,-8.313948f,-13.154732f,7.2925296f,0.08051264f,-11.343418f,7.2925296f,-8.313948f,-11.343418f,10.114447f,0.08051264f,-16.187342f,10.114447f,-8.313948f,-16.187342f,55.785866f,0.08051264f,12.625972f,55.785866f,-8.313948f,12.625972f,58.67103f,0.08051264f,6.4663777f,58.67103f,-8.313948f,6.4663777f,64.54185f,0.08051264f,10.359601f,64.54185f,-8.313948f,10.359601f,88.87908f,0.08051264f,-30.95296f,88.87908f,-8.313948f,-30.95296f,96.22282f,0.08051264f,-27.394997f,96.22282f,-8.313948f,-27.394997f,73.7724f,0.08051264f,10.901485f,73.7724f,-8.313948f,10.901485f,79.74227f,0.08051264f,15.728492f,79.74227f,-8.313948f,15.728492f,75.39562f,0.08051264f,22.982388f,75.39562f,-8.313948f,22.982388f,76.80156f,0.08051264f,23.938143f,76.80156f,-8.313948f,23.938143f,66.09832f,0.08051264f,42.35907f,66.09832f,-8.313948f,42.35907f,45.57028f,0.08051264f,28.987062f,45.57028f,-8.313948f,28.987062f,47.255882f,0.08051264f,26.313633f,47.255882f,-8.313948f,26.313633f,35.69259f,0.08051264f,19.459175f,35.69259f,-8.313948f,19.459175f,34.158894f,0.08051264f,21.850235f,34.158894f,-8.313948f,21.850235f});
  }
}
}
