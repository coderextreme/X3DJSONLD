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
public class HelloWorld {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new HelloWorld().initialize().toFileJSON("../data/HelloWorld.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("HelloWorld.x3d"))
        .addMeta(new meta().setName("description").setContent("Simple X3D scene example: Hello World!"))
        .addMeta(new meta().setName("created").setContent("30 October 2000"))
        .addMeta(new meta().setName("modified").setContent("14 April 2017"))
        .addMeta(new meta().setName("creator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("Image").setContent("HelloWorld.tall.png"))
        .addMeta(new meta().setName("reference").setContent("http://en.wikipedia.org/wiki/Hello_world"))
        .addMeta(new meta().setName("reference").setContent("https://en.wikipedia.org/wiki/Hello#.22Hello.2C_World.22_computer_program"))
        .addMeta(new meta().setName("reference").setContent("https://en.wikipedia.org/wiki/\"Hello,_World!\"_program"))
        .addMeta(new meta().setName("reference").setContent("http://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world"))
        .addMeta(new meta().setName("reference").setContent("http://www.HelloWorldExample.net"))
        .addMeta(new meta().setName("reference").setContent("http://www.web3D.org"))
        .addMeta(new meta().setName("reference").setContent("http://www.web3d.org/realtime-3d/news/internationalization-x3d"))
        .addMeta(new meta().setName("reference").setContent("http://www.web3d.org/x3d/content/examples/HelloWorld.x3d"))
        .addMeta(new meta().setName("reference").setContent("http://X3dGraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes"))
        .addMeta(new meta().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter01TechnicalOverview/HelloWorld.x3d"))
        .addMeta(new meta().setName("license").setContent("http://www.web3d.org/x3d/content/examples/license.html"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("reference").setContent("HelloWorld.wrl"))
        .addMeta(new meta().setName("reference").setContent("HelloWorld.x3dv"))
        .addMeta(new meta().setName("reference").setContent("HelloWorld.x3db"))
        .addMeta(new meta().setName("reference").setContent("HelloWorld.xhtml"))
        .addMeta(new meta().setName("reference").setContent("HelloWorld.json"))
        .addComments(new CommentsBlock("Alternate encodings: VRML97, X3D ClassicVRML Encoding, X3D Compressed Binary Encoding (CBE), X3DOM, JSON")))
      .setScene(new Scene()
        .addComments(new CommentsBlock("Example scene to illustrate X3D nodes and fields (XML elements and attributes)"))
        .addChild(new WorldInfo().setTitle("Hello world!"))
        .addChild(new Group()
          .addChild(new Viewpoint().setDEF("ViewUpClose").setCenterOfRotation(new float[] {0f,-1f,0f}).setDescription("Hello world!").setPosition(new float[] {0f,-1f,7f}))
          .addChild(new Transform().setRotation(new float[] {0f,1f,0f,3f})
            .addChild(new Shape()
              .setGeometry(new Sphere())
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDEF("MaterialLightBlue").setDiffuseColor(new float[] {0.1f,0.5f,1f}))
                .setTexture(new ImageTexture().setDEF("ImageCloudlessEarth").setUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString0().getArray()))))))
          .addChild(new Transform().setTranslation(new float[] {0f,-2f,0f})
            .addChild(new Shape()
              .setGeometry(new Text().setDEF("TextMessage").setString(new org.web3d.x3d.jsail.fields.MFString(new MFString1().getArray()))
                .setFontStyle(new FontStyle().setJustify(new org.web3d.x3d.jsail.fields.MFString(new MFString2().getArray()))))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("MaterialLightBlue")))))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"earth-topo.png","earth-topo.jpg","earth-topo-small.gif","http://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","http://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","http://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"});
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
