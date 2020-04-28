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
public class SriCampus040 {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new SriCampus040().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/Geospatial/SriCampus040.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Interactive").setVersion("3.3")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("Geospatial").setLevel(1))
        .addMeta(new metaObject().setName("title").setContent("SriCampus040.x3d"))
        .addMeta(new metaObject().setName("description").setContent("SRI campus building"))
        .addMeta(new metaObject().setName("creator").setContent("Aaron Heller, SRI International"))
        .addMeta(new metaObject().setName("translator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("1 February 2000"))
        .addMeta(new metaObject().setName("translated").setContent("29 April 2003"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.geovrml.org/examples"))
        .addMeta(new metaObject().setName("subject").setContent("X3D geospatial example"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus040.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("SriCampus040.x3d"))
        .addChild(new TouchSensorObject().setDEF("MouseOverPopupDescription").setDescription("Extrusion-6").setEnabled(false))
        .addChild(new ShapeObject()
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.75f,0.75f,0.75f})))
          .setGeometry(new IndexedFaceSetObject().setConvex(false).setCoordIndex(new MFInt32Object(new MFInt320().getArray())).setSolid(false)
            .setCoord(new CoordinateObject().setDEF("OBJECT-40-VERTICES").setPoint(new MFVec3fObject(new MFVec3f1().getArray()))))))      ;
    return X3D0;
    }
protected class MFInt320 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,59,58,-1,58,59,57,56,-1,56,57,55,54,-1,54,55,53,52,-1,52,53,51,50,-1,50,51,49,48,-1,48,49,47,46,-1,46,47,45,44,-1,44,45,43,42,-1,42,43,41,40,-1,40,41,39,38,-1,38,39,37,36,-1,36,37,35,34,-1,34,35,33,32,-1,32,33,31,30,-1,30,31,29,28,-1,28,29,27,26,-1,26,27,25,24,-1,24,25,23,22,-1,22,23,21,20,-1,20,21,19,18,-1,18,19,17,16,-1,16,17,15,14,-1,14,15,13,12,-1,12,13,11,10,-1,10,11,9,8,-1,8,9,7,6,-1,6,7,5,4,-1,4,5,3,2,-1,2,3,1,0,-1,1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,45,47,49,51,53,55,57,59,-1,58,56,54,52,50,48,46,44,42,40,38,36,34,32,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,-1});
  }
}
protected class MFVec3f1 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.94162315f,0f,-0.61138356f,-0.94162315f,-20f,-0.61138356f,-0.67147255f,0.3061002f,4.852786f,-0.67147255f,-20f,4.852786f,2.0251758f,0.3061002f,6.2416935f,2.0251758f,-20f,6.2416935f,-1.721502f,0.3061002f,13.676138f,-1.721502f,-20f,13.676138f,-3.753313f,0.3061002f,12.301378f,-3.753313f,-20f,12.301378f,-20.62186f,0.3061002f,16.239174f,-20.62186f,-20f,16.239174f,-21.888985f,0.3061002f,18.195826f,-21.888985f,-20f,18.195826f,-17.704275f,0.3061002f,34.900806f,-17.704275f,-20f,34.900806f,-15.958612f,0.3061002f,35.91555f,-15.958612f,-20f,35.91555f,-33.198566f,0.3061002f,64.62837f,-33.198566f,-20f,64.62837f,-34.868053f,0.3061002f,63.744045f,-34.868053f,-20f,63.744045f,-51.541622f,0.3061002f,67.51815f,-51.541622f,-20f,67.51815f,-52.99738f,0.3061002f,70.2384f,-52.99738f,-20f,70.2384f,-48.701405f,0.3061002f,85.57563f,-48.701405f,-20f,85.57563f,-54.51081f,0.3061002f,93.14447f,-54.51081f,-20f,93.14447f,-58.287952f,0.3061002f,93.97532f,-58.287952f,-20f,93.97532f,-65.17868f,0.3061002f,67.20361f,-65.17868f,-20f,67.20361f,-61.053066f,0.3061002f,66.41481f,-61.053066f,-20f,66.41481f,-57.94316f,0.3061002f,61.53572f,-57.94316f,-20f,61.53572f,-59.450138f,0.3061002f,57.47865f,-59.450138f,-20f,57.47865f,-38.939983f,0.3061002f,52.850548f,-38.939983f,-20f,52.850548f,-37.600613f,0.3061002f,50.175613f,-37.600613f,-20f,50.175613f,-39.699406f,0.3061002f,43.012447f,-39.699406f,-20f,43.012447f,-38.616226f,0.3061002f,40.847885f,-38.616226f,-20f,40.847885f,-29.84179f,0.3061002f,38.457077f,-29.84179f,-20f,38.457077f,-28.553865f,0.3061002f,36.31677f,-28.553865f,-20f,36.31677f,-34.09173f,0.3061002f,15.719643f,-34.09173f,-20f,15.719643f,-30.079496f,0.3061002f,15.208618f,-30.079496f,-20f,15.208618f,-26.946327f,0.3061002f,9.890207f,-26.946327f,-20f,9.890207f,-28.663782f,0.3061002f,6.0784883f,-28.663782f,-20f,6.0784883f});
  }
}
}
