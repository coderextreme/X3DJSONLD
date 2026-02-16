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
public class BoxEm2 implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new BoxEm2().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/BoxEm2.new.java.x3d");
    model.toFileJSON("../data/BoxEm2.new.java.x3dj");
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
ProtoInstance ProtoInstance3 = null;
      X3D X3D0 =  new X3D().setProfile(new SFString("Immersive")).setVersion(new SFString("4.0"))
      .setHead(new head()
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("BoxEm2.x3d")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("John Carlson")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("manual")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://coderextreme.net/X3DJSONLD/src/main/data/BoxEm2.x3d")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("3 boxes"))))
      .setScene(new Scene()
        .addChild(new NavigationInfo().setType("\"EXAMINE\""))
        .addChild(new Viewpoint().setDescription(new SFString("Cubes on Fire")).setPosition(new float[] {0f ,0f ,12f }))
        .addChild(new ProtoDeclare().setName(new SFString("anyShape"))
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName(new SFString("xtranslation")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0 0 0")))
            .addField(new field().setType("MFNode").setName(new SFString("myShape")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new Shape()
                .setGeometry(new Sphere())
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f }))))))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .setIS(new IS()
                .addConnect(new connect().setNodeField(new SFString("translation")).setProtoField(new SFString("xtranslation")))
                .addConnect(new connect().setNodeField(new SFString("children")).setProtoField(new SFString("myShape")))))))
        .addChild(new ProtoDeclare().setName(new SFString("three"))
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName(new SFString("ytranslation")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0 0 0")))
            .addField(new field().setType("MFNode").setName(new SFString("myShape")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new Shape()
                .setGeometry(new Cylinder())
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f }))))))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .setIS(new IS()
                .addConnect(new connect().setNodeField(new SFString("translation")).setProtoField(new SFString("ytranslation"))))
              .addChild(ProtoInstance0 = new ProtoInstance().setName(new SFString("anyShape"))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("myShape")).setProtoField(new SFString("myShape")))))
              .addChild(ProtoInstance1 = new ProtoInstance().setName(new SFString("anyShape"))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("myShape")).setProtoField(new SFString("myShape")))))
              .addChild(ProtoInstance2 = new ProtoInstance().setName(new SFString("anyShape"))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("myShape")).setProtoField(new SFString("myShape"))))))))
        .addChild(ProtoInstance3 = new ProtoInstance().setName(new SFString("three")).setDEF(new SFString("threepi")))
        .addChild(new Transform().setTranslation(new float[] {0f ,2f ,0f })
          .addChild(new Shape().setUSE(new SFString("box")))));
ProtoInstance0
                .addFieldValue(new fieldValue().setName(new SFString("xtranslation")).setValue(new SFString("0 0 0")));
ProtoInstance1
                .addFieldValue(new fieldValue().setName(new SFString("xtranslation")).setValue(new SFString("2 0 0")));
ProtoInstance2
                .addFieldValue(new fieldValue().setName(new SFString("xtranslation")).setValue(new SFString("-2 0 0")));
ProtoInstance3
          .addFieldValue(new fieldValue().setName(new SFString("ytranslation")).setValue(new SFString("0 0 0")));
ProtoInstance3
          .addFieldValue(new fieldValue().setName(new SFString("myShape"))
            .addChild(new Shape().setDEF(new SFString("box"))
              .setGeometry(new Box().setSize(new float[] {1f ,1f ,1f }))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,1f ,0f })))));
    return X3D0;
    }
}
