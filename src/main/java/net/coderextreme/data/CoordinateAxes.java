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
public class CoordinateAxes {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new CoordinateAxes().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/CoordinateAxes.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("CoordinateAxes.x3d"))
        .addMeta(new meta().setName("creator").setContent("Don Brutzman, Byounghyun Yoo"))
        .addMeta(new meta().setName("created").setContent("14 July 2000"))
        .addMeta(new meta().setName("modified").setContent("20 October 2019"))
        .addMeta(new meta().setName("description").setContent("X Y Z axis arrows and labels in X3D coordinate system. See CoordinateAxesExample for use as an Inline coordinate-system reference frame."))
        .addMeta(new meta().setName("reference").setContent("https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"))
        .addMeta(new meta().setName("reference").setContent("https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxesNSEW.x3d"))
        .addMeta(new meta().setName("reference").setContent("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d"))
        .addMeta(new meta().setName("reference").setContent("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxesNSEW.x3d"))
        .addMeta(new meta().setName("identifier").setContent("https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("CoordinateAxes.x3d"))
        .addChild(new Collision().setDEF("DoNotCollideWithVisualizationWidget")
          .addComments("Invoke CoordinateAxes in other scenes as an Inline child inside a scaling Transform node, at the topmost level of the scene graph.")
          .addComments("This NavigationInfo allows examine mode and will be overridden by any parent scene.")
          .addComments("Each arrow goes from +1m to -1m to allow linear scaling to fit a scene")
          .addComments("Note each label rotates about the scene's vertical Y axis for consistency, enabling local orientation by user")
          .addChild(new Group("DoNotCollideWithVisualizationWidget")
            .addComments("Vertical Y arrow and label")
            .addChild(new Group().setDEF("ArrowGreen")
              .addChild(new Shape("ArrowGreen")
                .setGeometry(new Cylinder().setDEF("ArrowCylinder").setRadius(0.025f).setTop(false))
                .setAppearance(new Appearance().setDEF("Green")
                  .setMaterial(new Material("Green").setDiffuseColor(new float[] {0.1f,0.6f,0.1f}).setEmissiveColor(new float[] {0.05f,0.2f,0.05f}))))
              .addChild(new Transform("ArrowGreen").setTranslation(new float[] {0f,1f,0f})
                .addChild(new Shape()
                  .setGeometry(new Cone().setDEF("ArrowCone").setBottomRadius(0.05f).setHeight(0.1f))
                  .setAppearance(new Appearance().setUSE("Green")))))
            .addChild(new Transform().setTranslation(new float[] {0f,1.08f,0f})
              .addChild(new Billboard()
                .addChild(new Shape()
                  .setAppearance(new Appearance().setDEF("LABEL_APPEARANCE")
                    .setMaterial(new Material("LABEL_APPEARANCE").setDiffuseColor(new float[] {1f,1f,0.3f}).setEmissiveColor(new float[] {0.33f,0.33f,0.1f})))
                  .setGeometry(new Text().setString(new MFString0().getArray())
                    .setFontStyle(new FontStyle().setDEF("LABEL_FONT").setFamily(new MFString1().getArray()).setJustify(new MFString2().getArray()).setSize(0.2f)))))))
          .addChild(new Transform("DoNotCollideWithVisualizationWidget").setRotation(new float[] {0f,0f,1f,-1.57079f})
            .addComments("Horizontal X arrow and label")
            .addChild(new Group()
              .addChild(new Group().setDEF("ArrowRed")
                .addChild(new Shape("ArrowRed")
                  .setGeometry(new Cylinder().setUSE("ArrowCylinder"))
                  .setAppearance(new Appearance().setDEF("Red")
                    .setMaterial(new Material("Red").setDiffuseColor(new float[] {0.7f,0.1f,0.1f}).setEmissiveColor(new float[] {0.33f,0f,0f}))))
                .addChild(new Transform("ArrowRed").setTranslation(new float[] {0f,1f,0f})
                  .addChild(new Shape()
                    .setGeometry(new Cone().setUSE("ArrowCone"))
                    .setAppearance(new Appearance().setUSE("Red")))))
              .addChild(new Transform().setRotation(new float[] {0f,0f,1f,1.57079f}).setTranslation(new float[] {0.072f,1.1f,0f})
                .addComments("note label rotated back to original coordinate frame")
                .addChild(new Billboard()
                  .addChild(new Shape()
                    .setAppearance(new Appearance().setUSE("LABEL_APPEARANCE"))
                    .setGeometry(new Text().setString(new MFString3().getArray())
                      .setFontStyle(new FontStyle().setUSE("LABEL_FONT"))))))))
          .addChild(new Transform("DoNotCollideWithVisualizationWidget").setRotation(new float[] {1f,0f,0f,1.57079f})
            .addComments("Perpendicular Z arrow and label, note right-hand rule")
            .addChild(new Group()
              .addChild(new Group().setDEF("ArrowBlue")
                .addChild(new Shape("ArrowBlue")
                  .setGeometry(new Cylinder().setUSE("ArrowCylinder"))
                  .setAppearance(new Appearance().setDEF("Blue")
                    .setMaterial(new Material("Blue").setDiffuseColor(new float[] {0.3f,0.3f,1f}).setEmissiveColor(new float[] {0.1f,0.1f,0.33f}))))
                .addChild(new Transform("ArrowBlue").setTranslation(new float[] {0f,1f,0f})
                  .addChild(new Shape()
                    .setGeometry(new Cone().setUSE("ArrowCone"))
                    .setAppearance(new Appearance().setUSE("Blue")))))
              .addChild(new Transform().setRotation(new float[] {1f,0f,0f,-1.57079f}).setTranslation(new float[] {0f,1.1f,0.072f})
                .addComments("note label rotated back to original coordinate frame")
                .addChild(new Billboard()
                  .addChild(new Shape()
                    .setAppearance(new Appearance().setUSE("LABEL_APPEARANCE"))
                    .setGeometry(new Text().setString(new MFString4().getArray())
                      .setFontStyle(new FontStyle().setUSE("LABEL_FONT"))))))))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Y"});
  }
}
protected class MFString1 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
protected class MFString2 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFString3 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"X"});
  }
}
protected class MFString4 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Z"});
  }
}
}
