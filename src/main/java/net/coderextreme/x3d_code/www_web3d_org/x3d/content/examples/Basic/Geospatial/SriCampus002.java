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
public class SriCampus002 {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new SriCampus002().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/Geospatial/SriCampus002.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Interactive").setVersion("3.3")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("Geospatial").setLevel(1))
        .addMeta(new metaObject().setName("title").setContent("SriCampus002.x3d"))
        .addMeta(new metaObject().setName("description").setContent("SRI campus building"))
        .addMeta(new metaObject().setName("creator").setContent("Aaron Heller, SRI International"))
        .addMeta(new metaObject().setName("translator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("1 February 2000"))
        .addMeta(new metaObject().setName("translated").setContent("29 April 2003"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.geovrml.org/examples"))
        .addMeta(new metaObject().setName("subject").setContent("X3D geospatial example"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus002.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("SriCampus002.x3d"))
        .addChild(new TouchSensorObject().setDEF("MouseOverPopupDescription").setDescription("Extrusion-119").setEnabled(false))
        .addChild(new ShapeObject()
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.75f,0.75f,0.75f})))
          .setGeometry(new IndexedFaceSetObject().setConvex(false).setCoordIndex(new MFInt32Object(new MFInt320().getArray())).setSolid(false)
            .setCoord(new CoordinateObject().setDEF("OBJECT-2-VERTICES").setPoint(new MFVec3fObject(new MFVec3f1().getArray()))))))      ;
    return X3D0;
    }
protected class MFInt320 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,133,132,-1,132,133,131,130,-1,130,131,129,128,-1,128,129,127,126,-1,126,127,125,124,-1,124,125,123,122,-1,122,123,121,120,-1,120,121,119,118,-1,118,119,117,116,-1,116,117,115,114,-1,114,115,113,112,-1,112,113,111,110,-1,110,111,109,108,-1,108,109,107,106,-1,106,107,105,104,-1,104,105,103,102,-1,102,103,101,100,-1,100,101,99,98,-1,98,99,97,96,-1,96,97,95,94,-1,94,95,93,92,-1,92,93,91,90,-1,90,91,89,88,-1,88,89,87,86,-1,86,87,85,84,-1,84,85,83,82,-1,82,83,81,80,-1,80,81,79,78,-1,78,79,77,76,-1,76,77,75,74,-1,74,75,73,72,-1,72,73,71,70,-1,70,71,69,68,-1,68,69,67,66,-1,66,67,65,64,-1,64,65,63,62,-1,62,63,61,60,-1,60,61,59,58,-1,58,59,57,56,-1,56,57,55,54,-1,54,55,53,52,-1,52,53,51,50,-1,50,51,49,48,-1,48,49,47,46,-1,46,47,45,44,-1,44,45,43,42,-1,42,43,41,40,-1,40,41,39,38,-1,38,39,37,36,-1,36,37,35,34,-1,34,35,33,32,-1,32,33,31,30,-1,30,31,29,28,-1,28,29,27,26,-1,26,27,25,24,-1,24,25,23,22,-1,22,23,21,20,-1,20,21,19,18,-1,18,19,17,16,-1,16,17,15,14,-1,14,15,13,12,-1,12,13,11,10,-1,10,11,9,8,-1,8,9,7,6,-1,6,7,5,4,-1,4,5,3,2,-1,2,3,1,0,-1,1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,83,85,87,89,91,93,95,97,99,101,103,105,107,109,111,113,115,117,119,121,123,125,127,129,131,133,-1,132,130,128,126,124,122,120,118,116,114,112,110,108,106,104,102,100,98,96,94,92,90,88,86,84,82,80,78,76,74,72,70,68,66,64,62,60,58,56,54,52,50,48,46,44,42,40,38,36,34,32,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,-1});
  }
}
protected class MFVec3f1 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.36887193f,0f,0.53917974f,0.36887193f,-7.3019724f,0.53917974f,8.804605f,-0.10335943f,-13.1204195f,8.804605f,-7.3019724f,-13.1204195f,11.962545f,-0.10335943f,-10.984285f,11.962545f,-7.3019724f,-10.984285f,11.529537f,-0.10335943f,-9.48486f,11.529537f,-7.3019724f,-9.48486f,19.029093f,-0.10335943f,-4.7065816f,19.029093f,-7.3019724f,-4.7065816f,23.482794f,-0.10335943f,-11.529759f,23.482794f,-7.3019724f,-11.529759f,26.278784f,-0.10335943f,-9.77558f,26.278784f,-7.3019724f,-9.77558f,35.496056f,-0.10335943f,-24.69887f,35.496056f,-7.3019724f,-24.69887f,11.161481f,-0.10335943f,-40.384098f,11.161481f,-7.3019724f,-40.384098f,15.9261875f,-0.10335943f,-48.694298f,15.9261875f,-7.3019724f,-48.694298f,9.7313f,-0.10335943f,-52.319016f,9.7313f,-7.3019724f,-52.319016f,13.42482f,-0.10335943f,-58.174004f,13.42482f,-7.3019724f,-58.174004f,9.871772f,-0.10335943f,-60.383415f,9.871772f,-7.3019724f,-60.383415f,14.237436f,-0.10335943f,-67.69097f,14.237436f,-7.3019724f,-67.69097f,48.96519f,-0.10335943f,-43.38363f,48.96519f,-7.3019724f,-43.38363f,55.918385f,-0.10335943f,-56.503433f,55.918385f,-7.3019724f,-56.503433f,38.017952f,-0.10335943f,-66.85785f,38.017952f,-7.3019724f,-66.85785f,57.307827f,-0.10335943f,-96.526474f,57.307827f,-7.3019724f,-96.526474f,73.04356f,-0.10335943f,-86.602936f,73.04356f,-7.3019724f,-86.602936f,75.62383f,-0.10335943f,-90.71974f,75.62383f,-7.3019724f,-90.71974f,82.13391f,-0.10335943f,-86.624214f,82.13391f,-7.3019724f,-86.624214f,79.97499f,-0.10335943f,-82.32442f,79.97499f,-7.3019724f,-82.32442f,98.79092f,-0.10335943f,-70.48916f,98.79092f,-7.3019724f,-70.48916f,99.88826f,-0.10335943f,-72.69236f,99.88826f,-7.3019724f,-72.69236f,111.49141f,-0.10335943f,-65.31846f,111.49141f,-7.3019724f,-65.31846f,110.248795f,-0.10335943f,-63.18137f,110.248795f,-7.3019724f,-63.18137f,118.64536f,-0.10335943f,-57.98492f,118.64536f,-7.3019724f,-57.98492f,112.47328f,-0.10335943f,-46.992718f,112.47328f,-7.3019724f,-46.992718f,93.96857f,-0.10335943f,-58.29181f,93.96857f,-7.3019724f,-58.29181f,89.70046f,-0.10335943f,-51.16269f,89.70046f,-7.3019724f,-51.16269f,81.8925f,-0.10335943f,-56.11783f,81.8925f,-7.3019724f,-56.11783f,80.17407f,-0.10335943f,-53.38196f,80.17407f,-7.3019724f,-53.38196f,106.00699f,-0.10335943f,-37.05433f,106.00699f,-7.3019724f,-37.05433f,101.24805f,-0.10335943f,-29.691933f,101.24805f,-7.3019724f,-29.691933f,65.1143f,-0.10335943f,-52.019005f,65.1143f,-7.3019724f,-52.019005f,58.30375f,-0.10335943f,-39.142494f,58.30375f,-7.3019724f,-39.142494f,96.39319f,-0.10335943f,-14.257672f,96.39319f,-7.3019724f,-14.257672f,103.80781f,-0.10335943f,-26.227158f,103.80781f,-7.3019724f,-26.227158f,110.64557f,-0.10335943f,-22.08234f,110.64557f,-7.3019724f,-22.08234f,103.90045f,-0.10335943f,-11.063653f,103.90045f,-7.3019724f,-11.063653f,116.90994f,-0.10335943f,-2.8815358f,116.90994f,-7.3019724f,-2.8815358f,115.31785f,-0.10335943f,0.69301474f,115.31785f,-7.3019724f,0.69301474f,101.92443f,-0.10335943f,-8.30489f,101.92443f,-7.3019724f,-8.30489f,94.039566f,-0.10335943f,2.6199946f,94.039566f,-7.3019724f,2.6199946f,92.277626f,-0.10335943f,1.1246561f,92.277626f,-7.3019724f,1.1246561f,70.814766f,-0.10335943f,37.797607f,70.814766f,-7.3019724f,37.797607f,67.9997f,-0.10335943f,35.84749f,67.9997f,-7.3019724f,35.84749f,79.91235f,-0.10335943f,17.093874f,79.91235f,-7.3019724f,17.093874f,74.186295f,-0.10335943f,13.492968f,74.186295f,-7.3019724f,13.492968f,81.04469f,-0.10335943f,1.1483994f,81.04469f,-7.3019724f,1.1483994f,87.648865f,-0.10335943f,-3.1264768f,87.648865f,-7.3019724f,-3.1264768f,77.18249f,-0.10335943f,-10.356956f,77.18249f,-7.3019724f,-10.356956f,72.31796f,-0.10335943f,-2.0332217f,72.31796f,-7.3019724f,-2.0332217f,47.75808f,-0.10335943f,-17.37492f,47.75808f,-7.3019724f,-17.37492f,38.619774f,-0.10335943f,-1.6843479f,38.619774f,-7.3019724f,-1.6843479f,42.036423f,-0.10335943f,0.24925408f,42.036423f,-7.3019724f,0.24925408f,40.6557f,-0.10335943f,2.3088071f,40.6557f,-7.3019724f,2.3088071f,47.00508f,-0.10335943f,6.44626f,47.00508f,-7.3019724f,6.44626f,49.68617f,-0.10335943f,1.232226f,49.68617f,-7.3019724f,1.232226f,64.22939f,-0.10335943f,11.542036f,64.22939f,-7.3019724f,11.542036f,59.32805f,-0.10335943f,20.67042f,59.32805f,-7.3019724f,20.67042f,61.99737f,-0.10335943f,22.673643f,61.99737f,-7.3019724f,22.673643f,54.888905f,-0.10335943f,35.51336f,54.888905f,-7.3019724f,35.51336f,51.854134f,-0.10335943f,33.512413f,51.854134f,-7.3019724f,33.512413f,50.68581f,-0.10335943f,35.86364f,50.68581f,-7.3019724f,35.86364f,38.51768f,-0.10335943f,28.515242f,38.51768f,-7.3019724f,28.515242f,39.636543f,-0.10335943f,25.566486f,39.636543f,-7.3019724f,25.566486f});
  }
}
}
