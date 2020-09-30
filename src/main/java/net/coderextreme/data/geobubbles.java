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
public class geobubbles {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new geobubbles().initialize().toFileJSON("../data/geobubbles.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addComponent(new component().setName("Geospatial").setLevel(1))
        .addMeta(new meta().setName("title").setContent("geobubbles.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/geobubbles.x3d"))
        .addMeta(new meta().setName("description").setContent("geo bubbles")))
      .setScene(new Scene()
        .addComments(new CommentsBlock("Viewpoint DEF='Tour' position='0 0 4' orientation='1 0 0 0' description='Tour Views'/"))
        .addComments(new CommentsBlock("PositionInterpolator DEF='TourPosition' key='0 1' keyValue='-0.5 -0.5 4 -0.5 0.5 4'/"))
        .addChild(new GeoViewpoint().setDEF("Tour").setPosition(new double[] {0d,0d,4d}).setOrientation(new float[] {1f,0f,0f,0f}).setDescription("Tour Views"))
        .addChild(new Background().setBackUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString0().getArray())).setBottomUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString1().getArray())).setFrontUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString2().getArray())).setLeftUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString3().getArray())).setRightUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString4().getArray())).setTopUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString5().getArray())).setSkyColor(new org.web3d.x3d.jsail.fields.MFColor(new MFColor6().getArray())).setTransparency(0f))
        .addChild(new Transform().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
          .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
            .setGeometry(new Sphere())
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {0.7f,0.7f,0.7f}).setSpecularColor(new float[] {0.5f,0.5f,0.5f})))))
        .addChild(new TimeSensor().setDEF("TourTime").setCycleInterval(5d).setLoop(true))
        .addChild(new GeoPositionInterpolator().setDEF("TourPosition").setKey(new org.web3d.x3d.jsail.fields.MFFloat(new MFFloat7().getArray())).setKeyValue(new org.web3d.x3d.jsail.fields.MFVec3d(new MFVec3d8().getArray())))
        .addChild(new ROUTE().setFromNode("TourTime").setFromField("cycleTime").setToNode("RandomTourTime").setToField("set_cycle"))
        .addChild(new ROUTE().setFromNode("RandomTourTime").setFromField("position").setToNode("TourPosition").setToField("keyValue"))
        .addChild(new ROUTE().setFromNode("TourTime").setFromField("fraction_changed").setToNode("TourPosition").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("TourPosition").setFromField("geovalue_changed").setToNode("Tour").setToField("set_position")))      ;
    return X3D0;
    }
protected class MFString0 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"});
  }
}
protected class MFString1 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"});
  }
}
protected class MFString2 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"});
  }
}
protected class MFString3 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"});
  }
}
protected class MFString4 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"});
  }
}
protected class MFString5 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"});
  }
}
protected class MFColor6 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0f,0f,0f});
  }
}
protected class MFFloat7 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFVec3d8 {
  protected org.web3d.x3d.jsail.fields.MFVec3d getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3d(new double[] {0.0015708d,0d,4d,0d,0.0015708d,4d});
  }
}
}
