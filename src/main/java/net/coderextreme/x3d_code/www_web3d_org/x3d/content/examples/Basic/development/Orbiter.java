package net.coderextreme.x3d_code.www_web3d_org.x3d.content.examples.Basic.development;
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
public class Orbiter {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new Orbiter().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/development/Orbiter.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("Orbiter.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("21 July 2001"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("description").setContent("A simple VRML/X3D scene graph example, used to illustrate and discuss schema suitability for X3D."))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/Orbiter.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setInfo(new MFStringObject(new MFString0().getArray())).setTitle("Orbiter.x3d"))
        .addChild(new ViewpointObject().setDescription("Hello, world").setOrientation(new float[] {0f,1f,0f,3.14159f}).setPosition(new float[] {0f,0f,-8f}))
        .addChild(new TransformObject().setDEF("EarthCoordinateSystem")
          .addChild(new GroupObject().setDEF("MiniWorld")
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setTexture(new ImageTextureObject().setUrl(new MFStringObject(new MFString1().getArray()))))
              .setGeometry(new SphereObject())))
          .addChild(new TransformObject().setDEF("SimpleGeoStationarySatellite").setRotation(new float[] {1f,0f,0f,0.3f}).setScale(new float[] {0.1f,0.3f,0.1f}).setTranslation(new float[] {0f,0f,5f})
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.9f,0.1f,0.1f})))
              .setGeometry(new BoxObject()))))
        .addChild(new TimeSensorObject().setDEF("OrbitalTimeInterval").setCycleInterval(12d).setLoop(true))
        .addChild(new OrientationInterpolatorObject().setDEF("SpinThoseThings").setKey(new MFFloatObject(new MFFloat2().getArray())).setKeyValue(new MFRotationObject(new MFRotation3().getArray())))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("OrbitalTimeInterval").setToField("set_fraction").setToNode("SpinThoseThings"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("SpinThoseThings").setToField("rotation").setToNode("EarthCoordinateSystem")))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"how well do schemas handle this simple world without data typing for arrays?"});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"earth-topo.png","earth-topo.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.gif"});
  }
}
protected class MFFloat2 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation3 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,1f,0f,0f,0f,1f,0f,1.57079f,0f,1f,0f,3.14159f,0f,1f,0f,4.7123889f,0f,1f,0f,6.2831852f});
  }
}
}
