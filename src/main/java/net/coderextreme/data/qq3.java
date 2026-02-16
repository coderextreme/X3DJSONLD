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
public class qq3 implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new qq3().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/qq3.new.java.x3d");
    model.toFileJSON("../data/qq3.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
ProtoInstance ProtoInstance1 = null;
ProtoInstance ProtoInstance2 = null;
      X3D X3D0 =  new X3D().setProfile(new SFString("Immersive")).setVersion(new SFString("4.0"))
      .setHead(new head()
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("qq3.x3d")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("John Carlson")))
        .addMeta(new meta().setName(new SFString("translator")).setContent(new SFString("John Carlson")))
        .addMeta(new meta().setName(new SFString("created")).setContent(new SFString("11 Jan 2015")))
        .addMeta(new meta().setName(new SFString("modified")).setContent(new SFString("05 May 2017")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("12 extrusions")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://coderextreme.net/x3d/qq3.x3d")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("manual"))))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName(new SFString("Process"))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addComments(new CommentsBlock("left"))
              .addChild(new Transform().setScale(new float[] {0.5f ,0.5f ,0.5f })
                .addChild(new Shape().setDEF(new SFString("ShapeLeftDown"))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {0.7f ,1f ,0f })))
                  .setGeometry(new Extrusion().setSpine(new MFVec3f0().getArray()).setCreaseAngle(0.785f ).setCrossSection(new MFVec2f1().getArray()))))
              .addComments(new CommentsBlock("right"))
              .addChild(new Transform().setScale(new float[] {0.5f ,0.5f ,0.5f })
                .addChild(new Shape().setDEF(new SFString("ShapeUpRight"))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0.7f ,1f })))
                  .setGeometry(new Extrusion().setSpine(new MFVec3f2().getArray()).setCreaseAngle(0.785f ).setCrossSection(new MFVec2f3().getArray()))))
              .addComments(new CommentsBlock("up"))
              .addChild(new Transform().setScale(new float[] {0.5f ,0.5f ,0.5f })
                .addChild(new Shape().setUSE(new SFString("ShapeUpRight"))))
              .addComments(new CommentsBlock("down"))
              .addChild(new Transform().setScale(new float[] {0.5f ,0.5f ,0.5f })
                .addChild(new Shape().setUSE(new SFString("ShapeLeftDown")))))))
        .addChild(new Viewpoint().setDescription(new SFString("Process pipes")).setOrientation(new float[] {1f ,0f ,0f ,-0.4f }).setPosition(new float[] {0f ,5f ,12f }))
        .addChild(new Transform().setTranslation(new float[] {0f ,-2.5f ,0f })
          .addChild(ProtoInstance0 = new ProtoInstance().setName(new SFString("Process"))))
        .addChild(new Transform()
          .addChild(ProtoInstance1 = new ProtoInstance().setName(new SFString("Process"))))
        .addChild(new Transform().setTranslation(new float[] {0f ,2.5f ,0f })
          .addChild(ProtoInstance2 = new ProtoInstance().setName(new SFString("Process")))));
    return X3D0;
    }
private class MFVec3f0 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-2.5f ,0f ,0f ,-2f ,0f ,0f ,-1.5f ,0f ,0f });
  }
}
private class MFVec2f1 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {1f ,0f ,0.92f ,-0.38f ,0.71f ,-0.71f ,0.38f ,-0.92f ,0f ,-1f ,-0.38f ,-0.92f ,-0.71f ,-0.71f ,-0.92f ,-0.38f ,-1f ,0f ,-0.92f ,0.38f ,-0.71f ,0.71f ,-0.38f ,0.92f ,0f ,1f ,0.38f ,0.92f ,0.71f ,0.71f ,0.92f ,0.38f ,1f ,0f });
  }
}
private class MFVec3f2 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.5f ,0f ,0f ,2f ,0f ,0f ,2.5f ,0f ,0f });
  }
}
private class MFVec2f3 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {1f ,0f ,0.92f ,-0.38f ,0.71f ,-0.71f ,0.38f ,-0.92f ,0f ,-1f ,-0.38f ,-0.92f ,-0.71f ,-0.71f ,-0.92f ,-0.38f ,-1f ,0f ,-0.92f ,0.38f ,-0.71f ,0.71f ,-0.38f ,0.92f ,0f ,1f ,0.38f ,0.92f ,0.71f ,0.71f ,0.92f ,0.38f ,1f ,0f });
  }
}
}
