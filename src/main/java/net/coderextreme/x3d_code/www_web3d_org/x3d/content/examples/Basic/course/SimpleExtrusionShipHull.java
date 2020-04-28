package net.coderextreme.x3d_code.www_web3d_org.x3d.content.examples.Basic.course;
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
public class SimpleExtrusionShipHull {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new SimpleExtrusionShipHull().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/course/SimpleExtrusionShipHull.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("SimpleExtrusionShipHull.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("Don Brutzman and MV4204 class"))
        .addMeta(new metaObject().setName("created").setContent("29 October 2000"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("description").setContent("Using Extrusion to model a ship hull and deck."))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/course/SimpleExtrusionShipHull.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("SimpleExtrusionShipHull.x3d"))
        .addChild(new ViewpointObject().setDescription("Extruded ship hull and deck").setOrientation(new float[] {1f,0f,0f,-0.2f}).setPosition(new float[] {-2f,8f,40f}))
        .addChild(new TransformObject()
          .addChild(new ShapeObject()
            .setGeometry(new ExtrusionObject().setCreaseAngle(1.57f).setCrossSection(new MFVec2fObject(new MFVec2f0().getArray())).setOrientation(new MFRotationObject(new MFRotation1().getArray())).setScale(new MFVec2fObject(new MFVec2f2().getArray())).setSolid(false).setSpine(new MFVec3fObject(new MFVec3f3().getArray())))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0f,0.3f,1f}).setEmissiveColor(new float[] {0.2f,0.2f,0.2f}))))
          .addChild(new ShapeObject()
            .setGeometry(new ExtrusionObject().setCreaseAngle(1.57f).setCrossSection(new MFVec2fObject(new MFVec2f4().getArray())).setScale(new MFVec2fObject(new MFVec2f5().getArray())).setSolid(false).setSpine(new MFVec3fObject(new MFVec3f6().getArray())))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0f,1f,0f}).setEmissiveColor(new float[] {0f,0.2f,0f}))))))      ;
    return X3D0;
    }
protected class MFVec2f0 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {0f,1f,0.38f,0.92f,0.71f,0.71f,0.92f,0.38f,1f,0f,0.92f,-0.38f,0.71f,-0.71f,0.38f,-0.92f,0f,-1f});
  }
}
protected class MFRotation1 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,0f,1f,-0.5f});
  }
}
protected class MFVec2f2 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {4f,4f,4f,4f,4f,4f,4f,0.1f});
  }
}
protected class MFVec3f3 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-20f,0f,0f,0f,0f,0f,10f,0f,0f,18f,0.25f,0f});
  }
}
protected class MFVec2f4 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {0.1f,0.96f,0.1f,-0.96f});
  }
}
protected class MFVec2f5 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {4f,4f,4f,4f,4f,4f,4f,0.1f});
  }
}
protected class MFVec3f6 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-19.9f,0f,0f,0f,0f,0f,10f,0f,0f,17.5f,0.25f,0f});
  }
}
}
