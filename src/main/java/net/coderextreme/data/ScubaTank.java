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
public class ScubaTank {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new ScubaTank().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/ScubaTank.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Interchange").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("ScubaTank.x3d"))
        .addMeta(new meta().setName("description").setContent("Scuba gear used by Nancy Diving example."))
        .addMeta(new meta().setName("creator").setContent("Etsuko Lippi"))
        .addMeta(new meta().setName("created").setContent("24 January 2001"))
        .addMeta(new meta().setName("modified").setContent("23 May 2020"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/ScubaTank.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("ScubaTank.x3d"))
        .addChild(new Transform().setDEF("ScubaTank")
          .addChild(new Transform("ScubaTank")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDEF("tank").setAmbientIntensity(0.3f).setDiffuseColor(new float[] {0.3f,0.3f,0.5f}).setShininess(0.1f).setSpecularColor(new float[] {0.7f,0.7f,0.8f})))
              .setGeometry(new Cylinder().setHeight(0.7f).setRadius(0.1f))))
          .addChild(new Transform("ScubaTank").setTranslation(new float[] {0f,0.35f,0f})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("tank")))
              .setGeometry(new Sphere().setRadius(0.098f))))
          .addChild(new Transform("ScubaTank").setTranslation(new float[] {0f,-0.35f,0f})
            .addChild(new Shape().setDEF("tankBottom")
              .setAppearance(new Appearance("tankBottom")
                .setMaterial(new Material().setDEF("black").setAmbientIntensity(0.3f).setDiffuseColor(new float[] {0f,0f,0f})))
              .setGeometry(new Cylinder("tankBottom").setHeight(0.06f).setRadius(0.115f))))
          .addChild(new Group("ScubaTank").setDEF("tankNozzle")
            .addChild(new Transform("tankNozzle")
              .addChild(new Transform().setTranslation(new float[] {0f,0.45f,0f})
                .addChild(new Shape().setDEF("pressure")
                  .setAppearance(new Appearance("pressure")
                    .setMaterial(new Material().setDEF("pressureColor").setAmbientIntensity(0.4f).setDiffuseColor(new float[] {0.91f,0.91f,0.91f}).setShininess(0.16f).setSpecularColor(new float[] {0.91f,0.9f,0.91f})))
                  .setGeometry(new Cylinder("pressure").setHeight(0.1f).setRadius(0.015f))))
              .addChild(new Transform().setTranslation(new float[] {0f,0.5f,0f})
                .addChild(new Shape().setDEF("pressureTop")
                  .setAppearance(new Appearance("pressureTop")
                    .setMaterial(new Material().setUSE("black")))
                  .setGeometry(new Cylinder("pressureTop").setHeight(0.02f).setRadius(0.025f))))
              .addChild(new Transform().setRotation(new float[] {0f,0f,1f,1.57f}).setTranslation(new float[] {-0.028f,0.462f,0f})
                .addChild(new Transform()
                  .addChild(new Shape().setDEF("connectorToRegulator")
                    .setAppearance(new Appearance("connectorToRegulator")
                      .setMaterial(new Material().setUSE("pressureColor")))
                    .setGeometry(new Cylinder("connectorToRegulator").setHeight(0.03f).setRadius(0.01f))))
                .addChild(new Transform().setTranslation(new float[] {0f,0.02f,0f})
                  .addChild(new Shape().setDEF("connectorToRegulatorTop")
                    .setAppearance(new Appearance("connectorToRegulatorTop")
                      .setMaterial(new Material().setUSE("black")))
                    .setGeometry(new Cylinder("connectorToRegulatorTop").setHeight(0.02f).setRadius(0.02f)))))))
          .addChild(new Transform("ScubaTank").setTranslation(new float[] {0f,0.2f,0f})
            .addChild(new Shape().setDEF("tankHoldBelt")
              .setAppearance(new Appearance("tankHoldBelt")
                .setMaterial(new Material().setUSE("black")))
              .setGeometry(new Cylinder("tankHoldBelt").setHeight(0.1f).setRadius(0.115f)))))
        .addChild(new Background().setSkyColor(new MFColor0().getArray())))      ;
    return X3D0;
    }
protected class MFColor0 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.6f,0.6f,0.6f});
  }
}
}
