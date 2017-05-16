package test123;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing.*;

/*
   <meta name="generator" content="X3dToJava.xslt stylesheet to create X3DJSAIL Java program from X3D source." />
   <meta name="url"       content="http://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" />
   <meta name="reference" content="X3DJSAIL, http://www.web3d.org/specifications/java/X3DJSAIL.html" />
*/
 
public class HelloWorldTest
{
  /* comment preceding root node */
  X3DObject x3dModelObjectTree = new X3DObject().setProfile("Immersive").setVersion("3.3")
    .setHead(new headObject()
      .setMeta(new metaObject().setContent("HelloWorld.x3d").setName("title"))
      .setMeta(new metaObject().setContent("Simple X3D scene example: Hello World!").setName("description"))
      .setMeta(new metaObject().setContent("30 October 2000").setName("created"))
      .setMeta(new metaObject().setContent("23 November 2014").setName("modified"))
      .setMeta(new metaObject().setContent("Don Brutzman").setName("creator"))
      .setMeta(new metaObject().setContent("HelloWorld.tall.png").setName("Image"))
      .setMeta(new metaObject().setContent("http://en.wikipedia.org/wiki/Hello_world").setName("reference"))
      .setMeta(new metaObject().setContent("en.wikipedia.org/wiki/Hello#\"Hello,_World\"_computer_program").setName("reference"))
      .setMeta(new metaObject().setContent("http://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world").setName("reference"))
      .setMeta(new metaObject().setContent("http://www.HelloWorldExample.net").setName("reference"))
      .setMeta(new metaObject().setContent("http://www.web3D.org").setName("reference"))
      .setMeta(new metaObject().setContent("http://www.web3d.org/realtime-3d/news/internationalization-x3d").setName("reference"))
      .setMeta(new metaObject().setContent("http://www.web3d.org/x3d/content/examples/HelloWorld.x3d").setName("reference"))
      .setMeta(new metaObject().setContent("http://X3dGraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes").setName("reference"))
      .setMeta(new metaObject().setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter01-TechnicalOverview/HelloWorld.x3d").setName("identifier"))
      .setMeta(new metaObject().setContent("http://www.web3d.org/x3d/content/examples/license.html").setName("license"))
      .setMeta(new metaObject().setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit").setName("generator"))
      .addComments("Alternate encodings: VRML97, X3D ClassicVRML Encoding, X3D Compressed Binary Encoding (CBE), X3DOM, JSON")
      .setMeta(new metaObject().setContent("HelloWorld.wrl").setName("reference"))
      .setMeta(new metaObject().setContent("HelloWorld.x3dv").setName("reference"))
      .setMeta(new metaObject().setContent("HelloWorld.x3db").setName("reference"))
      .setMeta(new metaObject().setContent("HelloWorld.xhtml").setName("reference"))
      .setMeta(new metaObject().setContent("HelloWorld.json").setName("reference")))
    .setScene(new SceneObject()
      .addComments("Example scene to illustrate X3D nodes and fields (XML elements and attributes)")
      .addChild(new GroupObject()
        .addChild(new ViewpointObject("ViewUpClose").setCenterOfRotation(new SFVec3fObject(0,-1,0)).setPosition(new SFVec3fObject(0,-1,7)).setDescription("Hello world!"))
        .addChild(new TransformObject().setRotation(new SFRotationObject(0,1,0,3))
          .addChild(new ShapeObject()
            .setGeometry(new SphereObject())
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject("MaterialLightBlue").setDiffuseColor(new SFColorObject(0.1,0.5,1)))
              .setTexture(new ImageTextureObject("ImageCloudlessEarth").setUrl("\"earth-topo.png\" \"earth-topo.jpg\" \"earth-topo-small.gif\" \"http://www.web3d.org/x3d/content/examples/Basic/earth-topo.png\" \"http://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg\" \"http://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif\"")))))
        .addChild(new TransformObject().setTranslation(new SFVec3fObject(0,-2,0))
          .addChild(new ShapeObject()
            .setGeometry(new TextObject("TextMessage").setString("\"Hello\" \"world!\"")
              .setFontStyle(new FontStyleObject().setJustify("\"MIDDLE\" \"MIDDLE\"")))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setUSE("MaterialLightBlue")))))));
  /* comment following root node */
}
