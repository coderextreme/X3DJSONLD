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
public class CoordinateAxes implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new CoordinateAxes().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/CoordinateAxes.new.java.x3d");
    model.toFileJSON("../data/CoordinateAxes.new.java.json");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
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
          .addChild(new Group()
            .addComments("Vertical Y arrow and label")
            .addChild(new Group().setDEF("ArrowGreen")
              .addChild(new Shape()
                .setGeometry(new Cylinder().setDEF("ArrowCylinder").setRadius(0.025).setTop(false))
                .setAppearance(new Appearance().setDEF("Green")
                  .setMaterial(new Material().setDiffuseColor(new double[] {0.1,0.6,0.1}).setEmissiveColor(new double[] {0.05,0.2,0.05}))))
              .addChild(new Transform().setTranslation(new double[] {0,1,0})
                .addChild(new Shape()
                  .setGeometry(new Cone().setDEF("ArrowCone").setBottomRadius(0.05).setHeight(0.1))
                  .setAppearance(new Appearance().setUSE("Green")))))
            .addChild(new Transform().setTranslation(new double[] {0,1.08,0})
              .addChild(new Billboard()
                .addChild(new Shape()
                  .setAppearance(new Appearance().setDEF("LABEL_APPEARANCE")
                    .setMaterial(new Material().setDiffuseColor(new double[] {1,1,0.3}).setEmissiveColor(new double[] {0.33,0.33,0.1})))
                  .setGeometry(new Text().setString(new MFString0().getArray())
                    .setFontStyle(new FontStyle().setDEF("LABEL_FONT").setFamily(new MFString1().getArray()).setJustify(new MFString2().getArray()).setSize(0.2)))))))
          .addChild(new Transform().setRotation(new double[] {0,0,1,-1.57079})
            .addComments("Horizontal X arrow and label")
            .addChild(new Group()
              .addChild(new Group().setDEF("ArrowRed")
                .addChild(new Shape()
                  .setGeometry(new Cylinder().setUSE("ArrowCylinder"))
                  .setAppearance(new Appearance().setDEF("Red")
                    .setMaterial(new Material().setDiffuseColor(new double[] {0.7,0.1,0.1}).setEmissiveColor(new double[] {0.33,0,0}))))
                .addChild(new Transform().setTranslation(new double[] {0,1,0})
                  .addChild(new Shape()
                    .setGeometry(new Cone().setUSE("ArrowCone"))
                    .setAppearance(new Appearance().setUSE("Red")))))
              .addChild(new Transform().setRotation(new double[] {0,0,1,1.57079}).setTranslation(new double[] {0.072,1.1,0})
                .addComments("note label rotated back to original coordinate frame")
                .addChild(new Billboard()
                  .addChild(new Shape()
                    .setAppearance(new Appearance().setUSE("LABEL_APPEARANCE"))
                    .setGeometry(new Text().setString(new MFString3().getArray())
                      .setFontStyle(new FontStyle().setUSE("LABEL_FONT"))))))))
          .addChild(new Transform().setRotation(new double[] {1,0,0,1.57079})
            .addComments("Perpendicular Z arrow and label, note right-hand rule")
            .addChild(new Group()
              .addChild(new Group().setDEF("ArrowBlue")
                .addChild(new Shape()
                  .setGeometry(new Cylinder().setUSE("ArrowCylinder"))
                  .setAppearance(new Appearance().setDEF("Blue")
                    .setMaterial(new Material().setDiffuseColor(new double[] {0.3,0.3,1}).setEmissiveColor(new double[] {0.1,0.1,0.33}))))
                .addChild(new Transform().setTranslation(new double[] {0,1,0})
                  .addChild(new Shape()
                    .setGeometry(new Cone().setUSE("ArrowCone"))
                    .setAppearance(new Appearance().setUSE("Blue")))))
              .addChild(new Transform().setRotation(new double[] {1,0,0,-1.57079}).setTranslation(new double[] {0,1.1,0.072})
                .addComments("note label rotated back to original coordinate frame")
                .addChild(new Billboard()
                  .addChild(new Shape()
                    .setAppearance(new Appearance().setUSE("LABEL_APPEARANCE"))
                    .setGeometry(new Text().setString(new MFString4().getArray())
                      .setFontStyle(new FontStyle().setUSE("LABEL_FONT"))))))))))      ;
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
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
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
