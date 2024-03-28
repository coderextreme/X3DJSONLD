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
public class HelloWorld implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new HelloWorld().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/HelloWorld.new.java.x3d");
    model.toFileJSON("../data/HelloWorld.new.java.json");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addComments("Alternate encodings: VRML97, X3D ClassicVRML Encoding, X3D Compressed Binary Encoding (CBE), X3DOM, JSON")
        .addMeta(new meta().setName("title").setContent("HelloWorld.x3d"))
        .addMeta(new meta().setName("description").setContent("Simple X3D model example: Hello World!"))
        .addMeta(new meta().setName("created").setContent("30 October 2000"))
        .addMeta(new meta().setName("modified").setContent("20 October 2019"))
        .addMeta(new meta().setName("creator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("Image").setContent("HelloWorld.tall.png"))
        .addMeta(new meta().setName("reference").setContent("http://en.wikipedia.org/wiki/Hello_world"))
        .addMeta(new meta().setName("reference").setContent("https://en.wikipedia.org/wiki/Hello#.22Hello.2C_World.22_computer_program"))
        .addMeta(new meta().setName("reference").setContent("https://en.wikipedia.org/wiki/\"Hello,_World!\"_program"))
        .addMeta(new meta().setName("reference").setContent("http://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world"))
        .addMeta(new meta().setName("reference").setContent("http://www.HelloWorldExample.net"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/realtime-3d/news/internationalization-x3d"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/x3d/content/examples/HelloWorld.x3d"))
        .addMeta(new meta().setName("reference").setContent("http://X3dGraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorld.x3d"))
        .addMeta(new meta().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter01TechnicalOverview/HelloWorld.x3d"))
        .addMeta(new meta().setName("license").setContent("https://www.web3d.org/x3d/content/examples/license.html"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("reference").setContent("HelloWorld.wrl"))
        .addMeta(new meta().setName("reference").setContent("HelloWorld.x3dv"))
        .addMeta(new meta().setName("reference").setContent("HelloWorld.x3db"))
        .addMeta(new meta().setName("reference").setContent("HelloWorld.xhtml"))
        .addMeta(new meta().setName("reference").setContent("HelloWorld.json")))
      .setScene(new Scene()
        .addComments("Example scene to illustrate X3D nodes and fields (XML elements and attributes)")
        .addChild(new WorldInfo().setInfo(new MFString0().getArray()).setTitle("Hello World!"))
        .addChild(new Group()
          .addChild(new Viewpoint().setDEF("ViewUpClose").setCenterOfRotation(new double[] {0,-1,0}).setDescription("Hello world!").setPosition(new double[] {0,-1,7}))
          .addChild(new Transform().setRotation(new double[] {0,1,0,3})
            .addChild(new Shape()
              .setGeometry(new Sphere())
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDEF("MaterialLightBlue").setDiffuseColor(new double[] {0.1,0.5,1}))
                .setTexture(new ImageTexture().setDEF("ImageCloudlessEarth").setUrl(new MFString1().getArray())))))
          .addChild(new Transform().setTranslation(new double[] {0,-2,0})
            .addChild(new Shape()
              .setGeometry(new Text().setDEF("TextMessage").setString(new MFString2().getArray())
                .setFontStyle(new FontStyle().setJustify(new MFString3().getArray())))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("MaterialLightBlue")))))))      ;
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Example scene to illustrate a simple X3D model"});
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"earth-topo.png","earth-topo.jpg","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"});
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Hello","world!"});
  }
}
private class MFString3 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
}
