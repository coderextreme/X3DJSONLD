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
import java.util.ArrayList;
import java.util.List;
import net.coderextreme.X3DRoots;
public class ScubaTank implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new ScubaTank().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/ScubaTank.new.java.x3d");
    model.toFileJSON("../data/ScubaTank.new.java.json");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Interchange").setVersion("4.0")
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
          .addChild(new Transform()
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDEF("tank").setAmbientIntensity(0.3).setDiffuseColor(new double[] {0.3,0.3,0.5}).setShininess(0.1).setSpecularColor(new double[] {0.7,0.7,0.8})))
              .setGeometry(new Cylinder().setHeight(0.7).setRadius(0.1))))
          .addChild(new Transform().setTranslation(new double[] {0,0.35,0})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("tank")))
              .setGeometry(new Sphere().setRadius(0.098))))
          .addChild(new Transform().setTranslation(new double[] {0,-0.35,0})
            .addChild(new Shape().setDEF("tankBottom")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDEF("black").setAmbientIntensity(0.3).setDiffuseColor(new double[] {0,0,0})))
              .setGeometry(new Cylinder().setHeight(0.06).setRadius(0.115))))
          .addChild(new Group().setDEF("tankNozzle")
            .addChild(new Transform()
              .addChild(new Transform().setTranslation(new double[] {0,0.45,0})
                .addChild(new Shape().setDEF("pressure")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("pressureColor").setAmbientIntensity(0.4).setDiffuseColor(new double[] {0.91,0.91,0.91}).setShininess(0.16).setSpecularColor(new double[] {0.91,0.9,0.91})))
                  .setGeometry(new Cylinder().setHeight(0.1).setRadius(0.015))))
              .addChild(new Transform().setTranslation(new double[] {0,0.5,0})
                .addChild(new Shape().setDEF("pressureTop")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("black")))
                  .setGeometry(new Cylinder().setHeight(0.02).setRadius(0.025))))
              .addChild(new Transform().setRotation(new double[] {0,0,1,1.57}).setTranslation(new double[] {-0.028,0.462,0})
                .addChild(new Transform()
                  .addChild(new Shape().setDEF("connectorToRegulator")
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("pressureColor")))
                    .setGeometry(new Cylinder().setHeight(0.03).setRadius(0.01))))
                .addChild(new Transform().setTranslation(new double[] {0,0.02,0})
                  .addChild(new Shape().setDEF("connectorToRegulatorTop")
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("black")))
                    .setGeometry(new Cylinder().setHeight(0.02).setRadius(0.02)))))))
          .addChild(new Transform().setTranslation(new double[] {0,0.2,0})
            .addChild(new Shape().setDEF("tankHoldBelt")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("black")))
              .setGeometry(new Cylinder().setHeight(0.1).setRadius(0.115)))))
        .addChild(new Background().setSkyColor(new MFColor0().getArray())))      ;
    return X3D0;
    }
private class MFColor0 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new double[] {0.6,0.6,0.6});
  }
}
}
