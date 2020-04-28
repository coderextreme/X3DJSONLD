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
public class PositionInterpolator2dExample {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new PositionInterpolator2dExample().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/development/PositionInterpolator2dExample.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("Interpolation").setLevel(3))
        .addMeta(new metaObject().setName("title").setContent("PositionInterpolator2dExample.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Example to interpolate a Vector2Float value - click geometry to activate animation loop."))
        .addMeta(new metaObject().setName("creator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("16 October 2001"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/concepts.html#4.6.8"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#CoordinateInterpolator"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#Extrusion"))
        .addMeta(new metaObject().setName("subject").setContent("Vector2FloatArray Interpolator"))
        .addMeta(new metaObject().setName("subject").setContent("PositionInterpolator2D"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/PositionInterpolator2dExample.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("PositionInterpolator2dExample.x3d"))
        .addChild(new ViewpointObject().setDescription("Click to activate animation").setPosition(new float[] {0f,0f,3f}))
        .addChild(new TimeSensorObject().setDEF("Clock").setCycleInterval(10d).setEnabled(false).setLoop(true))
        .addChild(new PositionInterpolator2DObject().setDEF("InterpolateTTscale").setKey(new MFFloatObject(new MFFloat0().getArray())).setKeyValue(new MFVec2fObject(new MFVec2f1().getArray())))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("Clock").setToField("set_fraction").setToNode("InterpolateTTscale"))
        .addChild(new TransformObject().setDEF("ImageAspectRatio").setScale(new float[] {1.5f,1f,1f})
          .addChild(new TouchSensorObject().setDEF("Toucher").setDescription("click and hold to animate TextureTransform"))
          .addChild(new ROUTEObject().setFromField("isActive").setFromNode("Toucher").setToField("enabled").setToNode("Clock"))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt322().getArray()))
              .setCoord(new CoordinateObject().setDEF("TwoByTwoSquare").setPoint(new MFVec3fObject(new MFVec3f3().getArray()))))
            .setAppearance(new AppearanceObject()
              .setTexture(new ImageTextureObject().setDEF("ContactImage").setUrl(new MFStringObject(new MFString4().getArray())))
              .setTextureTransform(new TextureTransformObject().setDEF("TTN"))))
          .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("InterpolateTTscale").setToField("set_scale").setToNode("TTN"))))      ;
    return X3D0;
    }
protected class MFFloat0 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.35f,0.45f,0.8f,0.9f,1f});
  }
}
protected class MFVec2f1 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {1f,1f,3f,3f,3f,3f,0.8f,0.8f,1f,1f,1f,1f});
  }
}
protected class MFInt322 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,0,-1});
  }
}
protected class MFVec3f3 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,-1f,0f,1f,-1f,0f,1f,1f,0f,-1f,1f,0f});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"JavaBoardSmileForTheCamera.jpg","https://savage.nps.edu/Savage/Tools/Animation/JavaBoardSmileForTheCamera.jpg","http://faculty.nps.edu/brutzman/images/JavaBoardSmileForTheCamera.jpg"});
  }
}
}
