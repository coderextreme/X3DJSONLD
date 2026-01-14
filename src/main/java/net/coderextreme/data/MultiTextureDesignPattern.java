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
public class MultiTextureDesignPattern implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new MultiTextureDesignPattern().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/MultiTextureDesignPattern.new.java.x3d");
    model.toFileJSON("../data/MultiTextureDesignPattern.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("MultiTextureDesignPattern.x3d"))
        .addMeta(new meta().setName("description").setContent("Design pattern for MultiTexture, MultiTextureCoordinate, MultiTextureTransform node correspondences"))
        .addMeta(new meta().setName("creator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("5 March 2011"))
        .addMeta(new meta().setName("modified").setContent("29 October 2023"))
        .addMeta(new meta().setName("TODO").setContent("X3D schematron rules for quality assurance"))
        .addMeta(new meta().setName("Image").setContent("MultiTextureDesignPatternSceneGraph.png"))
        .addMeta(new meta().setName("subject").setContent("MultiTexture, MultiTextureCoordinate, MultiTextureTransform"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/files/specifications/19775-1/V3.2/Part01/components/texturing.html#MultiTexture"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/TextureMapping/MultiTextureDesignPattern.x3d"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/x3d/content/examples/X3dResources.html"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addComments(new CommentsBlock("================================"))
        .addChild(new WorldInfo().setTitle("MultiTextureDesignPattern.x3d"))
        .addChild(new Background().setSkyColor(new MFColor0().getArray()))
        .addChild(new Viewpoint().setDescription("MultiTexture design pattern"))
        .addChild(new Shape()
          .setGeometry(new Text().setString(new MFString1().getArray())
            .setFontStyle(new FontStyle().setJustify(new MFString2().getArray()).setSize(0.6f )))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(new float[] {0.2f ,0.4f ,0.8f }))))
        .addComments(new CommentsBlock("================================"))
        .addChild(new Shape()
          .addComments(new CommentsBlock("add a single geometry node here"))
          .setGeometry(new IndexedFaceSet()
            .setTexCoord(new MultiTextureCoordinate()
              .addComments(new CommentsBlock("add multiple TextureCoordinate nodes here, match corresponding MultiTexture child texture nodes"))
              .addTexCoord(new TextureCoordinate().setPoint(new MFVec2f3().getArray()))
              .addTexCoord(new TextureCoordinate().setPoint(new MFVec2f4().getArray()))
              .addTexCoord(new TextureCoordinate().setPoint(new MFVec2f5().getArray()))))
          .setAppearance(new Appearance()
            .setMaterial(new Material())
            .setTexture(new MultiTexture().setAlpha(0.8f ).setColor(new float[] {0.9f ,1f ,0.2f }).setFunction(new MFString6().getArray()).setMode(new MFString7().getArray()).setSource(new MFString8().getArray())
              .addComments(new CommentsBlock("add multiple texture nodes here"))
              .addTexture(new ImageTexture())
              .addTexture(new MovieTexture())
              .addTexture(new PixelTexture()))
            .setTextureTransform(new MultiTextureTransform()
              .addComments(new CommentsBlock("add multiple TextureTransform nodes here, match corresponding MultiTexture child texture nodes"))
              .addTextureTransform(new TextureTransform())
              .addTextureTransform(new TextureTransform())
              .addTextureTransform(new TextureTransform())))));
    return X3D0;
    }
private class MFColor0 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.72549f ,1f ,0.721569f });
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Source shows design pattern for","MultiTexture, MultiTextureCoordinate,"," and MultiTextureTransform nodes"});
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFVec2f3 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec2f4 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f });
  }
}
private class MFVec2f5 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0f ,0f ,1f ,0f ,1f ,1f ,0f ,1f });
  }
}
private class MFString6 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"COMPLEMENT","ALPHAREPLICATE"});
  }
}
private class MFString7 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MODULATE","REPLACE","BLENDDIFFUSEALPHA"});
  }
}
private class MFString8 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"DIFFUSE","SPECULAR","FACTOR"});
  }
}
}
