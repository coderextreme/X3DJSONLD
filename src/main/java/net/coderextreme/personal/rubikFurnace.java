package net.coderextreme.personal;
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
public class rubikFurnace {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new rubikFurnace().initialize().toFileJSON("../personal/rubikFurnace.new.json");
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
ProtoInstance ProtoInstance1 = null;
ProtoInstance ProtoInstance2 = null;
ProtoInstance ProtoInstance3 = null;
ProtoInstance ProtoInstance4 = null;
ProtoInstance ProtoInstance5 = null;
ProtoInstance ProtoInstance6 = null;
ProtoInstance ProtoInstance7 = null;
ProtoInstance ProtoInstance8 = null;
ProtoInstance ProtoInstance9 = null;
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("rubikFurnace.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/rubikFurnace.x3d"))
        .addMeta(new meta().setName("description").setContent("a green rubik cube")))
      .setScene(new Scene()
        .addChild(new NavigationInfo().setType(new java.lang.String[] {"EXAMINE"}))
        .addChild(new Viewpoint().setDescription("Rubiks Cube on Fire").setPosition(new float[] {0f,0f,12f}))
        .addChild(new ProtoDeclare().setName("anyShape")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName("xtranslation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("MFNode").setName("myShape").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new Shape()
                .setGeometry(new Sphere())
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,1f}))))))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("xtranslation"))
                .addConnect(new connect().setNodeField("children").setProtoField("myShape"))))))
        .addChild(new ProtoDeclare().setName("three")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName("ytranslation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("MFNode").setName("myShape").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new Shape()
                .setGeometry(new Sphere())
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,1f}))))))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("ytranslation")))
              .addChild(ProtoInstance0 = new ProtoInstance().setName("anyShape")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("myShape").setProtoField("myShape"))))
              .addChild(ProtoInstance1 = new ProtoInstance().setName("anyShape")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("myShape").setProtoField("myShape"))))
              .addChild(ProtoInstance2 = new ProtoInstance().setName("anyShape")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("myShape").setProtoField("myShape")))))))
        .addChild(new ProtoDeclare().setName("nine")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName("ztranslation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("MFNode").setName("myShape").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new Shape()
                .setGeometry(new Sphere())
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,1f}))))))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("ztranslation")))
              .addChild(ProtoInstance3 = new ProtoInstance().setName("three")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("myShape").setProtoField("myShape"))))
              .addChild(ProtoInstance4 = new ProtoInstance().setName("three")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("myShape").setProtoField("myShape"))))
              .addChild(ProtoInstance5 = new ProtoInstance().setName("three")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("myShape").setProtoField("myShape")))))))
        .addChild(new ProtoDeclare().setName("twentyseven")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName("ttranslation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("MFNode").setName("myShape").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new Shape()
                .setGeometry(new Sphere())
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,1f}))))))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("ttranslation")))
              .addChild(ProtoInstance6 = new ProtoInstance().setName("nine")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("myShape").setProtoField("myShape"))))
              .addChild(ProtoInstance7 = new ProtoInstance().setName("nine")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("myShape").setProtoField("myShape"))))
              .addChild(ProtoInstance8 = new ProtoInstance().setName("nine")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("myShape").setProtoField("myShape")))))))
        .addChild(ProtoInstance9 = new ProtoInstance().setName("twentyseven")))      ;
ProtoInstance0
                .addFieldValue(new fieldValue().setName("xtranslation").setValue("0 0 0"));
ProtoInstance1
                .addFieldValue(new fieldValue().setName("xtranslation").setValue("2 0 0"));
ProtoInstance2
                .addFieldValue(new fieldValue().setName("xtranslation").setValue("-2 0 0"));
ProtoInstance3
                .addFieldValue(new fieldValue().setName("ytranslation").setValue("0 0 0"));
ProtoInstance4
                .addFieldValue(new fieldValue().setName("ytranslation").setValue("0 2 0"));
ProtoInstance5
                .addFieldValue(new fieldValue().setName("ytranslation").setValue("0 -2 0"));
ProtoInstance6
                .addFieldValue(new fieldValue().setName("ztranslation").setValue("0 0 0"));
ProtoInstance7
                .addFieldValue(new fieldValue().setName("ztranslation").setValue("0 0 2"));
ProtoInstance8
                .addFieldValue(new fieldValue().setName("ztranslation").setValue("0 0 -2"));
ProtoInstance9
          .addFieldValue(new fieldValue().setName("ttranslation").setValue("0 0 0"));
ProtoInstance9
          .addFieldValue(new fieldValue().setName("myShape")
            .addChild(new Shape()
              .setGeometry(new Box().setSize(new float[] {1f,1f,1f}))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f,1f,0f})))));
    return X3D0;
    }
}
