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
public class SriCampus149 {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new SriCampus149().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/Geospatial/SriCampus149.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Interactive").setVersion("3.3")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("Geospatial").setLevel(1))
        .addMeta(new metaObject().setName("title").setContent("SriCampus149.x3d"))
        .addMeta(new metaObject().setName("description").setContent("SRI campus building"))
        .addMeta(new metaObject().setName("creator").setContent("Aaron Heller, SRI International"))
        .addMeta(new metaObject().setName("translator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("1 February 2000"))
        .addMeta(new metaObject().setName("translated").setContent("29 April 2003"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.geovrml.org/examples"))
        .addMeta(new metaObject().setName("subject").setContent("X3D geospatial example"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus149.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("SriCampus149.x3d"))
        .addChild(new TouchSensorObject().setDEF("MouseOverPopupDescription").setDescription("Extrusion-18").setEnabled(false))
        .addChild(new ShapeObject()
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.75f,0.75f,0.75f})))
          .setGeometry(new IndexedFaceSetObject().setConvex(false).setCoordIndex(new MFInt32Object(new MFInt320().getArray())).setSolid(false)
            .setCoord(new CoordinateObject().setDEF("OBJECT-149-VERTICES").setPoint(new MFVec3fObject(new MFVec3f1().getArray()))))))      ;
    return X3D0;
    }
protected class MFInt320 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,19,18,-1,18,19,17,16,-1,16,17,15,14,-1,14,15,13,12,-1,12,13,11,10,-1,10,11,9,8,-1,8,9,7,6,-1,6,7,5,4,-1,4,5,3,2,-1,2,3,1,0,-1,1,3,5,7,9,11,13,15,17,19,-1,18,16,14,12,10,8,6,4,2,0,-1});
  }
}
protected class MFVec3f1 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,0f,-19.318727f,0f,2.9632297f,0.0012397391f,-5.815984f,2.9632297f,-19.318727f,-5.815984f,49.806767f,0.0012397391f,23.343729f,49.806767f,-19.318727f,23.343729f,30.871647f,0.0012397391f,54.355877f,30.871647f,-19.318727f,54.355877f,11.727289f,0.0012397391f,42.403755f,11.727289f,-19.318727f,42.403755f,10.369084f,0.0012397391f,45.22804f,10.369084f,-19.318727f,45.22804f,0.64209086f,0.0012397391f,38.748062f,0.64209086f,-19.318727f,38.748062f,1.9902558f,0.0012397391f,36.36381f,1.9902558f,-19.318727f,36.36381f,-12.558201f,0.0012397391f,26.961876f,-12.558201f,-19.318727f,26.961876f,2.482083f,0.0012397391f,1.496662f,2.482083f,-19.318727f,1.496662f});
  }
}
}
