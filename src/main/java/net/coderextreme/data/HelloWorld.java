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
import org.web3d.x3d.sai.*;
import org.web3d.x3d.sai.CADGeometry.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.sai.CubeMapTexturing.*;
import org.web3d.x3d.sai.DIS.*;
import org.web3d.x3d.sai.EnvironmentalEffects.*;
import org.web3d.x3d.sai.EnvironmentalSensor.*;
import org.web3d.x3d.sai.EventUtilities.*;
import org.web3d.x3d.sai.Followers.*;
import org.web3d.x3d.sai.Geometry2D.*;
import org.web3d.x3d.sai.Geometry3D.*;
import org.web3d.x3d.sai.Geospatial.*;
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.HAnim.*;
import org.web3d.x3d.sai.Interpolation.*;
import org.web3d.x3d.sai.KeyDeviceSensor.*;
import org.web3d.x3d.sai.Layering.*;
import org.web3d.x3d.sai.Layout.*;
import org.web3d.x3d.sai.Lighting.*;
import org.web3d.x3d.sai.NURBS.*;
import org.web3d.x3d.sai.Navigation.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.ParticleSystems.*;
import org.web3d.x3d.sai.Picking.*;
import org.web3d.x3d.sai.PointingDeviceSensor.*;
import org.web3d.x3d.sai.Rendering.*;
import org.web3d.x3d.sai.RigidBodyPhysics.*;
import org.web3d.x3d.sai.Scripting.*;
import org.web3d.x3d.sai.Shaders.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Sound.*;
import org.web3d.x3d.sai.Text.*;
import org.web3d.x3d.sai.Texturing3D.*;
import org.web3d.x3d.sai.Texturing.*;
import org.web3d.x3d.sai.Time.*;
import org.web3d.x3d.sai.VolumeRendering.*;
public class HelloWorld {
  public static void main(String[] args) {
    ConfigurationProperties.setShowDefaultAttributes(true);
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new HelloWorld().initialize().toFileJSON("../data/HelloWorld.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("HelloWorld.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Simple X3D scene example: Hello World!"))
        .addMeta(new metaObject().setName("created").setContent("30 October 2000"))
        .addMeta(new metaObject().setName("modified").setContent("14 April 2017"))
        .addMeta(new metaObject().setName("creator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("Image").setContent("HelloWorld.tall.png"))
        .addMeta(new metaObject().setName("reference").setContent("http://en.wikipedia.org/wiki/Hello_world"))
        .addMeta(new metaObject().setName("reference").setContent("https://en.wikipedia.org/wiki/Hello#.22Hello.2C_World.22_computer_program"))
        .addMeta(new metaObject().setName("reference").setContent("https://en.wikipedia.org/wiki/\"Hello,_World!\"_program"))
        .addMeta(new metaObject().setName("reference").setContent("http://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.HelloWorldExample.net"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.web3D.org"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.web3d.org/realtime-3d/news/internationalization-x3d"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.web3d.org/x3d/content/examples/HelloWorld.x3d"))
        .addMeta(new metaObject().setName("reference").setContent("http://X3dGraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes"))
        .addMeta(new metaObject().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter01TechnicalOverview/HelloWorld.x3d"))
        .addMeta(new metaObject().setName("license").setContent("http://www.web3d.org/x3d/content/examples/license.html"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("reference").setContent("HelloWorld.wrl"))
        .addMeta(new metaObject().setName("reference").setContent("HelloWorld.x3dv"))
        .addMeta(new metaObject().setName("reference").setContent("HelloWorld.x3db"))
        .addMeta(new metaObject().setName("reference").setContent("HelloWorld.xhtml"))
        .addMeta(new metaObject().setName("reference").setContent("HelloWorld.json"))
        .addComments(new CommentsBlock("Alternate encodings: VRML97, X3D ClassicVRML Encoding, X3D Compressed Binary Encoding (CBE), X3DOM, JSON")))
      .setScene(new SceneObject()
        .addComments(new CommentsBlock("Example scene to illustrate X3D nodes and fields (XML elements and attributes)"))
        .addChild(new WorldInfoObject().setTitle("Hello world!"))
        .addChild(new GroupObject()
          .addChild(new ViewpointObject().setDEF("ViewUpClose").setCenterOfRotation(new float[] {0f,-1f,0f}).setDescription("Hello world!").setPosition(new float[] {0f,-1f,7f}))
          .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,3f})
            .addChild(new ShapeObject()
              .setGeometry(new SphereObject())
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDEF("MaterialLightBlue").setDiffuseColor(new float[] {0.1f,0.5f,1f}))
                .setTexture(new ImageTextureObject().setDEF("ImageCloudlessEarth").setUrl(new MFStringObject(new MFString0().getArray()))))))
          .addChild(new TransformObject().setTranslation(new float[] {0f,-2f,0f})
            .addChild(new ShapeObject()
              .setGeometry(new TextObject().setDEF("TextMessage").setString(new MFStringObject(new MFString1().getArray()))
                .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString2().getArray()))))
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setUSE("MaterialLightBlue")))))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"earth-topo.png".replaceAll("\"", "\\\""),"earth-topo.jpg".replaceAll("\"", "\\\""),"earth-topo-small.gif".replaceAll("\"", "\\\""),"http://www.web3d.org/x3d/content/examples/Basic/earth-topo.png".replaceAll("\"", "\\\""),"http://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg".replaceAll("\"", "\\\""),"http://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif".replaceAll("\"", "\\\"")});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Hello".replaceAll("\"", "\\\""),"world!".replaceAll("\"", "\\\"")});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE".replaceAll("\"", "\\\""),"MIDDLE".replaceAll("\"", "\\\"")});
  }
}
}
