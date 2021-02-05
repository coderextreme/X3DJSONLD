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
public class LOA2ExampleSourceWithDiamonds {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new LOA2ExampleSourceWithDiamonds().initialize().toFileJSON("../data/LOA2ExampleSourceWithDiamonds.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Interchange").setVersion("3.0")
      .setHead(new head()
        .addMeta(new meta().setName("generator").setContent("tovrmlx3d, http://castle-engine.sourceforge.net/view3dscene.php#section_converting"))
        .addMeta(new meta().setName("source").setContent("LOA2ExampleSourceWithDiamonds.wrl")))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("Humanoid")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName("center").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("MFNode").setName("humanoidBody").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("MFString").setName("info").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("MFNode").setName("joints").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("SFString").setName("name").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("SFRotation").setName("rotation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 1 0"))
            .addField(new field().setType("SFVec3f").setName("scale").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1 1 1"))
            .addField(new field().setType("SFRotation").setName("scaleOrientation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 1 0"))
            .addField(new field().setType("MFNode").setName("segments").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("MFNode").setName("sites").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("SFVec3f").setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("SFString").setName("version").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("200x"))
            .addField(new field().setType("MFNode").setName("viewpoints").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("SFVec3f").setName("bboxCenter").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0"))
            .addField(new field().setType("SFVec3f").setName("bboxSize").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("-1 -1 -1")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .addChild(new Group()
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("children").setProtoField("humanoidBody"))))
              .addChild(new Group()
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("children").setProtoField("viewpoints"))))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("center").setProtoField("center"))
                .addConnect(new connect().setNodeField("rotation").setProtoField("rotation"))
                .addConnect(new connect().setNodeField("scale").setProtoField("scale"))
                .addConnect(new connect().setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
                .addConnect(new connect().setNodeField("translation").setProtoField("translation"))))))
        .addChild(new ProtoDeclare().setName("Joint")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName("center").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("MFNode").setName("children").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("SFRotation").setName("limitOrientation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 1 0"))
            .addField(new field().setType("MFFloat").setName("llimit").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("SFString").setName("name").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("SFRotation").setName("rotation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 1 0"))
            .addField(new field().setType("SFVec3f").setName("scale").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1 1 1"))
            .addField(new field().setType("SFRotation").setName("scaleOrientation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 1 0"))
            .addField(new field().setType("MFFloat").setName("stiffness").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1 1 1"))
            .addField(new field().setType("SFVec3f").setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("MFFloat").setName("ulimit").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Transform()
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("children").setProtoField("children"))
                  .addConnect(new connect().setNodeField("center").setProtoField("center"))
                  .addConnect(new connect().setNodeField("rotation").setProtoField("rotation"))
                  .addConnect(new connect().setNodeField("scale").setProtoField("scale"))
                  .addConnect(new connect().setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
                  .addConnect(new connect().setNodeField("translation").setProtoField("translation"))))
              .addChild(new Transform()
                .addChild(new Shape()
                  .setGeometry(new IndexedFaceSet().setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt320().getArray())).setCreaseAngle(0.5f)
                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f1().getArray()))))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,0f}))))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("translation").setProtoField("center")))))))
        .addChild(new ProtoDeclare().setName("Segment")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("MFNode").setName("addChildren").setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setType("MFNode").setName("removeChildren").setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setType("SFVec3f").setName("centerOfMass").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("MFNode").setName("children").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("SFNode").setName("coord").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).clearChildren())
            .addField(new field().setType("MFNode").setName("displacers").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("SFString").setName("name").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("SFFloat").setName("mass").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
            .addField(new field().setType("SFVec3f").setName("momentsOfInertia").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1 1 1"))
            .addField(new field().setType("SFVec3f").setName("bboxCenter").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0"))
            .addField(new field().setType("SFVec3f").setName("bboxSize").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("-1 -1 -1")))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .setIS(new IS()
                .addConnect(new connect().setNodeField("children").setProtoField("children"))
                .addConnect(new connect().setNodeField("bboxCenter").setProtoField("bboxCenter"))
                .addConnect(new connect().setNodeField("bboxSize").setProtoField("bboxSize"))
                .addConnect(new connect().setNodeField("addChildren").setProtoField("addChildren"))
                .addConnect(new connect().setNodeField("removeChildren").setProtoField("removeChildren"))))))
        .addChild(new ProtoDeclare().setName("Site")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("MFNode").setName("addChildren").setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setType("MFNode").setName("removeChildren").setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setType("SFVec3f").setName("center").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("MFNode").setName("children").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("SFString").setName("name").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("SFRotation").setName("rotation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 1 0"))
            .addField(new field().setType("SFVec3f").setName("scale").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1 1 1"))
            .addField(new field().setType("SFRotation").setName("scaleOrientation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 1 0"))
            .addField(new field().setType("SFVec3f").setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .setIS(new IS()
                .addConnect(new connect().setNodeField("children").setProtoField("children"))
                .addConnect(new connect().setNodeField("center").setProtoField("center"))
                .addConnect(new connect().setNodeField("rotation").setProtoField("rotation"))
                .addConnect(new connect().setNodeField("scale").setProtoField("scale"))
                .addConnect(new connect().setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
                .addConnect(new connect().setNodeField("translation").setProtoField("translation"))
                .addConnect(new connect().setNodeField("addChildren").setProtoField("addChildren"))
                .addConnect(new connect().setNodeField("removeChildren").setProtoField("removeChildren")))))))      ;
    return X3D0;
    }
protected class MFInt320 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFVec3f1 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.009999999776482582f,0f,-0.009999999776482582f,0f,0f,0f,0f,0.009999999776482582f,0.009999999776482582f,0f,0f,0f,0f,-0.009999999776482582f,0f,-0.009999999776482582f,0f});
  }
}
}
