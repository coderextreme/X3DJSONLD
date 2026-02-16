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
public class HelloWorldCommented implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new HelloWorldCommented().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/HelloWorldCommented.new.java.x3d");
    model.toFileJSON("../data/HelloWorldCommented.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile(new SFString("Immersive")).setVersion(new SFString("4.0"))
      .setHead(new head()
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("HelloWorldCommented.x3d")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("Numerous comments added to simple X3D scene example for testing JSON encoding alternatives.")))
        .addMeta(new meta().setName(new SFString("created")).setContent(new SFString("19 December 2015")))
        .addMeta(new meta().setName(new SFString("modified")).setContent(new SFString("20 October 2019")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("Don Brutzman")))
        .addMeta(new meta().setName(new SFString("info")).setContent(new SFString("HelloWorldCommented.json is most current, HelloWorldCommentedOriginalEncoding.json and HelloWorldCommentedAlternativeEncoding.json were experimental.")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("HelloWorldCommented.json")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("HelloWorldCommentedOriginalEncoding.json")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("HelloWorldCommentedAlternativeEncoding.json")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldCommented.x3d")))
        .addMeta(new meta().setName(new SFString("license")).setContent(new SFString("https://www.web3d.org/x3d/content/examples/license.html")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))))
      .setScene(new Scene()
        .addComments(new CommentsBlock("Example scene to illustrate comments interspersed among X3D nodes and fields (XML elements and attributes)"))
        .addComments(new CommentsBlock("WorldInfo begin"))
        .addChild(new WorldInfo().setTitle(new SFString("Hello world!")))
        .addComments(new CommentsBlock("WorldInfo complete, Group begin"))
        .addChild(new Group()
          .addComments(new CommentsBlock("Viewpoint begin"))
          .addChild(new Viewpoint().setDEF(new SFString("ViewUpClose")).setCenterOfRotation(new float[] {0f ,-1f ,0f }).setDescription(new SFString("Hello world!")).setPosition(new float[] {0f ,-1f ,7f }))
          .addComments(new CommentsBlock("Viewpoint complete, Transform begin"))
          .addChild(new Transform().setRotation(new float[] {0f ,1f ,0f ,3f })
            .addComments(new CommentsBlock("Shape begin"))
            .addChild(new Shape()
              .addComments(new CommentsBlock("Sphere begin"))
              .addComments(new CommentsBlock("Sphere complete, Appearance begin"))
              .addComments(new CommentsBlock("Appearance complete"))
              .setGeometry(new Sphere())
              .setAppearance(new Appearance()
                .addComments(new CommentsBlock("Material begin"))
                .addComments(new CommentsBlock("Material complete, ImageTexture begin"))
                .addComments(new CommentsBlock("ImageTexture complete"))
                .setMaterial(new Material().setDEF(new SFString("MaterialLightBlue")).setDiffuseColor(new float[] {0.1f ,0.5f ,1f }))
                .setTexture(new ImageTexture().setDEF(new SFString("ImageCloudlessEarth")).setUrl(new MFString0().getArray()))))
            .addComments(new CommentsBlock("Shape complete")))
          .addComments(new CommentsBlock("Transform complete, Transform begin"))
          .addChild(new Transform().setTranslation(new float[] {0f ,-2f ,0f })
            .addComments(new CommentsBlock("Shape begin"))
            .addChild(new Shape()
              .addComments(new CommentsBlock("Text begin"))
              .addComments(new CommentsBlock("Text complete, Appearance begin"))
              .addComments(new CommentsBlock("Appearance complete"))
              .setGeometry(new Text().setDEF(new SFString("TextMessage")).setString(new MFString1().getArray())
                .addComments(new CommentsBlock("FontStyle begin"))
                .addComments(new CommentsBlock("FontStyle complete"))
                .setFontStyle(new FontStyle().setJustify(new MFString2().getArray())))
              .setAppearance(new Appearance()
                .addComments(new CommentsBlock("Material begin"))
                .addComments(new CommentsBlock("Material complete"))
                .setMaterial(new Material().setUSE(new SFString("MaterialLightBlue")))))
            .addComments(new CommentsBlock("Shape complete")))
          .addComments(new CommentsBlock("Transform complete")))
        .addComments(new CommentsBlock("Group complete")));
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"earth-topo.png","earth-topo.jpg","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"});
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Hello","world!"});
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
}
