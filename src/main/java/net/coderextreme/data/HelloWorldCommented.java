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
public class HelloWorldCommented {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new HelloWorldCommented().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/HelloWorldCommented.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("HelloWorldCommented.x3d"))
        .addMeta(new meta().setName("description").setContent("Numerous comments added to simple X3D scene example for testing JSON encoding alternatives."))
        .addMeta(new meta().setName("created").setContent("19 December 2015"))
        .addMeta(new meta().setName("modified").setContent("20 October 2019"))
        .addMeta(new meta().setName("creator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("info").setContent("HelloWorldCommented.json is most current, HelloWorldCommentedOriginalEncoding.json and HelloWorldCommentedAlternativeEncoding.json were experimental."))
        .addMeta(new meta().setName("reference").setContent("HelloWorldCommented.json"))
        .addMeta(new meta().setName("reference").setContent("HelloWorldCommentedOriginalEncoding.json"))
        .addMeta(new meta().setName("reference").setContent("HelloWorldCommentedAlternativeEncoding.json"))
        .addMeta(new meta().setName("identifier").setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldCommented.x3d"))
        .addMeta(new meta().setName("license").setContent("https://www.web3d.org/x3d/content/examples/license.html"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")))
      .setScene(new Scene()
        .addComments("Example scene to illustrate comments interspersed among X3D nodes and fields (XML elements and attributes)")
        .addComments("WorldInfo begin")
        .addChild(new WorldInfo().setTitle("Hello world!"))
        .addComments("WorldInfo complete, Group begin")
        .addChild(new Group()
          .addComments("Viewpoint begin")
          .addChild(new Viewpoint().setDEF("ViewUpClose").setCenterOfRotation(new float[] {0f,-1f,0f}).setDescription("Hello world!").setPosition(new float[] {0f,-1f,7f}))
          .addComments("Viewpoint complete, Transform begin")
          .addChild(new Transform().setRotation(new float[] {0f,1f,0f,3f})
            .addComments("Shape begin")
            .addChild(new Shape()
              .addComments("Sphere begin")
              .addComments("Sphere complete, Appearance begin")
              .addComments("Appearance complete")
              .setGeometry(new Sphere())
              .setAppearance(new Appearance()
                .addComments("Material begin")
                .addComments("Material complete, ImageTexture begin")
                .addComments("ImageTexture complete")
                .setMaterial(new Material().setDEF("MaterialLightBlue").setDiffuseColor(new float[] {0.1f,0.5f,1f}))
                .setTexture(new ImageTexture().setDEF("ImageCloudlessEarth").setUrl(new MFString0().getArray()))))
            .addComments("Shape complete"))
          .addComments("Transform complete, Transform begin")
          .addChild(new Transform().setTranslation(new float[] {0f,-2f,0f})
            .addComments("Shape begin")
            .addChild(new Shape()
              .addComments("Text begin")
              .addComments("Text complete, Appearance begin")
              .addComments("Appearance complete")
              .setGeometry(new Text().setDEF("TextMessage").setString(new MFString1().getArray())
                .addComments("FontStyle begin")
                .addComments("FontStyle complete")
                .setFontStyle(new FontStyle("TextMessage").setJustify(new MFString2().getArray())))
              .setAppearance(new Appearance()
                .addComments("Material begin")
                .addComments("Material complete")
                .setMaterial(new Material().setUSE("MaterialLightBlue"))))
            .addComments("Shape complete"))
          .addComments("Transform complete"))
        .addComments("Group complete"))      ;
    return X3D0;
    }
protected class MFString0 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"earth-topo.png","earth-topo.jpg","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"});
  }
}
protected class MFString1 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Hello","world!"});
  }
}
protected class MFString2 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
}
