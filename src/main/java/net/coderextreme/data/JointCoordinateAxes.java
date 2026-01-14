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
public class JointCoordinateAxes implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new JointCoordinateAxes().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/JointCoordinateAxes.new.java.x3d");
    model.toFileJSON("../data/JointCoordinateAxes.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("converter").setContent("x3d-tidy V1.0.56, https://www.npmjs.com/package/x3d-tidy"))
        .addMeta(new meta().setName("converted").setContent("Mon, 31 Jul 2023 03:48:04 GMT")))
      .setScene(new Scene()
        .addChild(new NavigationInfo().setHeadlight(false))
        .addChild(new Group()
          .addChild(new Group().setDEF("ARROW")
            .addChild(new Shape()
              .setAppearance(new Appearance().setDEF("ARROW_APPEARANCE")
                .setMaterial(new Material().setDiffuseColor(new float[] {0.3f ,0.3f ,1f }).setEmissiveColor(new float[] {0.3f ,0.3f ,0.33f })))
              .setGeometry(new Cylinder().setTop(false).setBottom(false).setRadius(0.025f )))
            .addChild(new Transform().setTranslation(new float[] {0f ,1f ,0f })
              .addChild(new Shape().setDEF("ARROW_POINTER")
                .setAppearance(new Appearance().setUSE("ARROW_APPEARANCE"))
                .setGeometry(new Cone().setHeight(0.1f ).setBottomRadius(0.05f ))))
            .addChild(new Transform().setTranslation(new float[] {0f ,-1f ,0f }).setRotation(new float[] {1f ,0f ,0f ,3.1416f })
              .addChild(new Shape().setUSE("ARROW_POINTER"))))
          .addChild(new Transform().setTranslation(new float[] {0f ,1.08f ,0f })
            .addChild(new Billboard()
              .addChild(new Shape()
                .setAppearance(new Appearance().setDEF("LABEL_APPEARANCE")
                  .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,0.3f }).setEmissiveColor(new float[] {0.33f ,0.33f ,0.1f })))
                .setGeometry(new Text().setString(new MFString0().getArray())
                  .setFontStyle(new FontStyle().setDEF("LABEL_FONT").setFamily(new MFString1().getArray()).setSize(0.2f ).setJustify(new MFString2().getArray())))))))
        .addChild(new Transform().setRotation(new float[] {0f ,0f ,1f ,-1.5708f })
          .addChild(new Group()
            .addChild(new Group().setUSE("ARROW"))
            .addChild(new Transform().setTranslation(new float[] {0.072f ,1.1f ,0f }).setRotation(new float[] {0f ,0f ,1f ,1.5708f })
              .addChild(new Billboard()
                .addChild(new Shape()
                  .setAppearance(new Appearance().setUSE("LABEL_APPEARANCE"))
                  .setGeometry(new Text().setString(new MFString3().getArray())
                    .setFontStyle(new FontStyle().setUSE("LABEL_FONT"))))))))
        .addChild(new Transform().setRotation(new float[] {1f ,0f ,0f ,1.5708f })
          .addChild(new Group()
            .addChild(new Group().setUSE("ARROW"))
            .addChild(new Transform().setTranslation(new float[] {0f ,1.1f ,0.072f }).setRotation(new float[] {1f ,0f ,0f ,-1.5708f })
              .addChild(new Billboard()
                .addChild(new Shape()
                  .setAppearance(new Appearance().setUSE("LABEL_APPEARANCE"))
                  .setGeometry(new Text().setString(new MFString4().getArray())
                    .setFontStyle(new FontStyle().setUSE("LABEL_FONT")))))))));
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Y"});
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE"});
  }
}
private class MFString3 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"X"});
  }
}
private class MFString4 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Z"});
  }
}
}
