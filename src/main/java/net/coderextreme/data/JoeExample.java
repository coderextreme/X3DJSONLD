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
public class JoeExample {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new JoeExample().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/JoeExample.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setVersion("3.0").setProfile("Immersive")
      .setHead(new head()
        .addMeta(new meta().setName("filename").setContent("Scripting.x3d")))
      .setScene(new Scene()
        .addChild(new Script().setDEF("OpenVault")
          .addField(new field("OpenVault").setType("SFTime").setName("openVault").setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field("OpenVault").setType("SFBool").setName("combinationEntered").setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field("OpenVault").setType("SFTime").setName("vaultUnlocked").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field("OpenVault").setType("SFBool").setName("unlocked").setValue("false").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .setSourceCode("ecmascript:\n"+
"\n"+
"      function combinationEntered (value) {\n"+
"\n"+
"        unlocked = value;\n"+
"\n"+
"      }\n"+
"\n"+
"      function openVault(value) {\n"+
"\n"+
"      if (unlocked) vaultUnlocked = value;\n"+
"\n"+
"      }"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(new float[] {1f,0f,0f})))
          .setGeometry(new Sphere()))
        .addChild(new Sound().setMaxBack(1000f).setMaxFront(1000f).setMinBack(1000f).setMinFront(1000f)
          .setSource(new AudioClip().setDEF("Click").setStopTime(1d).setDescription("clicking sound").setUrl(new MFString0().getArray())))
        .addChild(new TouchSensor().setDEF("TS"))
        .addChild(new ROUTE().setFromNode("TS").setFromField("isOver").setToNode("OpenVault").setToField("combinationEntered"))
        .addChild(new ROUTE().setFromNode("TS").setFromField("touchTime").setToNode("OpenVault").setToField("openVault"))
        .addChild(new ROUTE().setFromNode("OpenVault").setFromField("vaultUnlocked").setToNode("Click").setToField("startTime")))      ;
    return X3D0;
    }
protected class MFString0 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/chandubabamusic1.wav"});
  }
}
}
