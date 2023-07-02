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
public class Figure31_9SpinGroupPrototype {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new Figure31_9SpinGroupPrototype().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/Figure31_9SpinGroupPrototype.new.json");
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
ProtoInstance ProtoInstance1 = null;
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("Figure31_9SpinGroupPrototype.x3d"))
        .addMeta(new meta().setName("creator").setContent("Figure 31.9, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland"))
        .addMeta(new meta().setName("reference").setContent("http://www.wiley.com/legacy/compbooks/vrml2sbk/ch31/31fig09.htm"))
        .addMeta(new meta().setName("translator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("24 October 2000"))
        .addMeta(new meta().setName("modified").setContent("20 October 2019"))
        .addMeta(new meta().setName("description").setContent("The SpinGroup prototype is used to automatically spin a group of three long rectangular boxes. Click on blue crossbar to activate second SpinGroup."))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_9SpinGroupPrototype.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("Figure31_9SpinGroupPrototype.x3d"))
        .addChild(new ProtoDeclare().setName("SpinGroup")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("MFNode").setName("children").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
              .addComments("NULL node initialization"))
            .addField(new field().setType("SFTime").setName("cycleInterval").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1"))
            .addField(new field().setType("SFBool").setName("loop").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("false"))
            .addField(new field().setType("SFTime").setName("startTime").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
            .addField(new field().setType("SFTime").setName("stopTime").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform().setDEF("SpinGroupTransform")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("children").setProtoField("children"))))
            .addComments("following nodes will not be rendered, only the first node of a ProtoBody is drawn")
            .addChild(new TimeSensor().setDEF("SpinGroupClock")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("cycleInterval").setProtoField("cycleInterval"))
                .addConnect(new connect().setNodeField("loop").setProtoField("loop"))
                .addConnect(new connect().setNodeField("startTime").setProtoField("startTime"))
                .addConnect(new connect().setNodeField("stopTime").setProtoField("stopTime"))))
            .addChild(new OrientationInterpolator().setDEF("Spinner").setKey(new MFFloat0().getArray()).setKeyValue(new MFRotation1().getArray()))
            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("SpinGroupClock").setToField("set_fraction").setToNode("Spinner"))
            .addChild(new ROUTE().setFromField("value_changed").setFromNode("Spinner").setToField("set_rotation").setToNode("SpinGroupTransform"))))
        .addComments("Now the scene proper begins. Nothing renders in a ProtoDeclare (or ExternProtoDeclare).")
        .addChild(new Viewpoint().setDescription("Click on blue crossbar to activate second SpinGroup").setOrientation(new float[] {1f,0f,0f,-0.52f}).setPosition(new float[] {0f,18f,30f}))
        .addComments("Create an instance, meaning actual nodes that render")
        .addChild(ProtoInstance0 = new ProtoInstance().setName("SpinGroup"))
        .addChild(new ROUTE().setFromField("touchTime").setFromNode("ActivateSecondSpinGroup").setToField("startTime").setToNode("SecondSpinGroup")))      ;
ProtoInstance0
          .addFieldValue(new fieldValue().setName("cycleInterval").setValue("8"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("loop").setValue("true"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("children")
            .addChild(new Shape()
              .setGeometry(new Box().setSize(new float[] {25f,2f,2f}))
              .setAppearance(new Appearance().setDEF("Green")
                .setMaterial(new Material().setDiffuseColor(new float[] {0f,1f,0.3f}))))
            .addChild(new Shape()
              .setGeometry(new Box().setSize(new float[] {2f,25f,2f}))
              .setAppearance(new Appearance().setUSE("Green")))
            .addChild(ProtoInstance1 = new ProtoInstance().setName("SpinGroup").setDEF("SecondSpinGroup")
              .addComments("stopTime > startTime ensures that initial state is stopped")));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("cycleInterval").setValue("4"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("loop").setValue("true"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("stopTime").setValue("1"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("children")
                .addChild(new TouchSensor().setDEF("ActivateSecondSpinGroup").setDescription("Activate second SpinGroup by clicking blue bar"))
                .addChild(new Shape()
                  .setGeometry(new Box().setSize(new float[] {2f,2.05f,25f}))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {0f,0.3f,1f})))));
    return X3D0;
    }
protected class MFFloat0 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,1f,0f,0f,0f,1f,0f,3.14f,0f,1f,0f,6.28f});
  }
}
}
