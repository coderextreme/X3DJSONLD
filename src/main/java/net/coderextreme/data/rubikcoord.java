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
public class rubikcoord {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new rubikcoord().initialize().toFileJSON("../data/rubikcoord.new.json");
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
ProtoInstance ProtoInstance1 = null;
ProtoInstance ProtoInstance2 = null;
ProtoInstance ProtoInstance3 = null;
ProtoInstance ProtoInstance4 = null;
ProtoInstance ProtoInstance5 = null;
ProtoInstance ProtoInstance6 = null;
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("rubikcoord.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/rubik.x3d"))
        .addMeta(new meta().setName("description").setContent("a kind of 2x2x2 rubik cube")))
      .setScene(new Scene()
        .addChild(new NavigationInfo().setType(new java.lang.String[] {"EXAMINE"}))
        .addChild(new Viewpoint().setDescription("Rubiks Cube").setPosition(new float[] {0f,0f,12f}))
        .addChild(new Background().setSkyColor(new MFColor0().getArray()))
        .addChild(new ProtoDeclare().setName("boxproto")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName("xtranslation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("SFColor").setName("diffuseColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1 1 1")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("xtranslation")))
              .addChild(new Shape()
                .setGeometry(new Box())
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,1f})
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField("diffuseColor").setProtoField("diffuseColor")))))))))
        .addChild(new ProtoDeclare().setName("two")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName("ytranslation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("SFColor").setName("diffuseColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1 0 0")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("ytranslation")))
              .addChild(ProtoInstance0 = new ProtoInstance().setName("boxproto"))
              .addChild(ProtoInstance1 = new ProtoInstance().setName("boxproto")))))
        .addChild(new ProtoDeclare().setName("four")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName("ztranslation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("SFColor").setName("x1diffuseColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1 0 0"))
            .addField(new field().setType("SFColor").setName("x2diffuseColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 1 0")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("ztranslation")))
              .addChild(ProtoInstance2 = new ProtoInstance().setName("two"))
              .addChild(ProtoInstance3 = new ProtoInstance().setName("two")))))
        .addChild(new ProtoDeclare().setName("eight")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName("ttranslation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("ttranslation")))
              .addChild(ProtoInstance4 = new ProtoInstance().setName("four"))
              .addChild(ProtoInstance5 = new ProtoInstance().setName("four")))))
        .addChild(ProtoInstance6 = new ProtoInstance().setName("eight"))
        .addComments("Axes below <Group> <Group DEF='ArrowGreen'> <Shape> <Cylinder DEF='ArrowCylinder' radius='.025' top='false'/> <Appearance DEF='Green'> <Material diffuseColor='0 0 0'/> </Appearance> </Shape> <Transform translation='0 1 0'> <Shape> <Cone DEF='ArrowCone' bottomRadius='.05' height='.1'/> <Appearance USE='Green'/> </Shape> </Transform> </Group> <Transform translation='0 1.08 0'> <Billboard> <Shape> <Appearance DEF='LABEL_APPEARANCE'> <Material diffuseColor='0 0 0'/> </Appearance> <Text string='\"Y\"'> <FontStyle DEF='LABEL_FONT' family='\"SANS\"' justify='\"MIDDLE\" \"MIDDLE\"' size='.2'/> </Text> </Shape> </Billboard> </Transform> </Group> <Transform rotation='0 0 1 -1.57079'> <Group> <Group DEF='ArrowRed'> <Shape> <Cylinder USE='ArrowCylinder'/> <Appearance DEF='Red'> <Material diffuseColor='0 0 0'/> </Appearance> </Shape> <Transform translation='0 1 0'> <Shape> <Cone USE='ArrowCone'/> <Appearance USE='Red'/> </Shape> </Transform> </Group> <Transform rotation='0 0 1 1.57079' translation='.072 1.1 0'> <Billboard> <Shape> <Appearance USE='LABEL_APPEARANCE'/> <Text string='\"X\"'> <FontStyle USE='LABEL_FONT'/> </Text> </Shape> </Billboard> </Transform> </Group> </Transform> <Transform rotation='1 0 0 1.57079'> <Group> <Group DEF='ArrowBlue'> <Shape> <Cylinder USE='ArrowCylinder'/> <Appearance DEF='Blue'> <Material diffuseColor='0 0 0'/> </Appearance> </Shape> <Transform translation='0 1 0'> <Shape> <Cone USE='ArrowCone'/> <Appearance USE='Blue'/> </Shape> </Transform> </Group> <Transform rotation='1 0 0 -1.57079' translation='0 1.1 .072'> <Billboard> <Shape> <Appearance USE='LABEL_APPEARANCE'/> <Text string='\"Z\"'> <FontStyle USE='LABEL_FONT'/> </Text> </Shape> </Billboard> </Transform> </Group> </Transform>"))      ;
ProtoInstance0
                .addFieldValue(new fieldValue().setName("xtranslation").setValue("0 0 0"));
ProtoInstance0
                .addFieldValue(new fieldValue().setName("diffuseColor").setValue("1 0 0")
                  .setIS(new IS()
                    .addConnect(new connect().setNodeField("diffuseColor").setProtoField("diffuseColor"))));
ProtoInstance1
                .addFieldValue(new fieldValue().setName("xtranslation").setValue("2 0 0"));
ProtoInstance1
                .addFieldValue(new fieldValue().setName("diffuseColor").setValue("1 0 0")
                  .setIS(new IS()
                    .addConnect(new connect().setNodeField("diffuseColor").setProtoField("diffuseColor"))));
ProtoInstance2
                .addFieldValue(new fieldValue().setName("ytranslation").setValue("0 0 0"));
ProtoInstance2
                .addFieldValue(new fieldValue().setName("diffuseColor").setValue("1 0 0")
                  .setIS(new IS()
                    .addConnect(new connect().setNodeField("diffuseColor").setProtoField("x1diffuseColor"))));
ProtoInstance3
                .addFieldValue(new fieldValue().setName("ytranslation").setValue("0 2 0"));
ProtoInstance3
                .addFieldValue(new fieldValue().setName("diffuseColor").setValue("0 1 0")
                  .setIS(new IS()
                    .addConnect(new connect().setNodeField("diffuseColor").setProtoField("x2diffuseColor"))));
ProtoInstance4
                .addFieldValue(new fieldValue().setName("ztranslation").setValue("0 0 0"));
ProtoInstance4
                .addFieldValue(new fieldValue().setName("x1diffuseColor").setValue("1 0 0"));
ProtoInstance4
                .addFieldValue(new fieldValue().setName("x2diffuseColor").setValue("0 1 0"));
ProtoInstance5
                .addFieldValue(new fieldValue().setName("ztranslation").setValue("0 0 2"));
ProtoInstance5
                .addFieldValue(new fieldValue().setName("x1diffuseColor").setValue("0 0 1"));
ProtoInstance5
                .addFieldValue(new fieldValue().setName("x2diffuseColor").setValue("1 1 0"));
ProtoInstance6
          .addFieldValue(new fieldValue().setName("ttranslation").setValue("0 0 0"));
    return X3D0;
    }
protected class MFColor0 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {1f,1f,1f});
  }
}
}
