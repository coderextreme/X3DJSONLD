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
public class HelloWorldMinimal implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new HelloWorldMinimal().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/HelloWorldMinimal.new.java.x3d");
    model.toFileJSON("../data/HelloWorldMinimal.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile(new SFString("Immersive")).setVersion(new SFString("4.0"))
      .addComments(new CommentsBlock("All head/meta tags are optional, WorldInfo is also optional"))
      .addComments(new CommentsBlock("Text node not supported by X3D Interchange profile, use Immersive profile or Text component level 1"))
      .setHead(new head()
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("HelloWorldMinimal.x3d")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("Hello World minimal example scene.")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("Don Brutzman")))
        .addMeta(new meta().setName(new SFString("created")).setContent(new SFString("19 January 2020")))
        .addMeta(new meta().setName(new SFString("modified")).setContent(new SFString("24 January 2020")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("https://helloworldcollection.de")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("https://en.wiktionary.org/wiki/Hello_World")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("https://en.wikipedia.org/wiki/%22Hello,%20World!%22_program")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world#X3D_(Extensible_3D)")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldMinimalIndex.html")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldMinimal.x3d")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")))
        .addMeta(new meta().setName(new SFString("license")).setContent(new SFString("../license.html"))))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle(new SFString("HelloWorldMinimal.x3d")))
        .addChild(new Shape()
          .setGeometry(new Text().setString(new MFString0().getArray()))));
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hello, world"});
  }
}
}
