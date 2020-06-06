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
public class Figure31_9SpinGroupPrototype {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new Figure31_9SpinGroupPrototype().initialize().toFileJSON("../data/Figure31_9SpinGroupPrototype.new.json");
    }
    public X3DObject initialize() {
ProtoInstanceObject ProtoInstance0 = null;
ProtoInstanceObject ProtoInstance1 = null;
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("Figure31_9SpinGroupPrototype.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("Figure 31.9, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.wiley.com/legacy/compbooks/vrml2sbk/ch31/31fig09.htm"))
        .addMeta(new metaObject().setName("translator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("24 October 2000"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("description").setContent("The SpinGroup prototype is used to automatically spin a group of three long rectangular boxes. Click on blue crossbar to activate second SpinGroup."))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_9SpinGroupPrototype.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("Figure31_9SpinGroupPrototype.x3d"))
        .addChild(new ProtoDeclareObject().setName("SpinGroup")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("MFNode").setName("children").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
              .addComments(new CommentsBlock("NULL node initialization")))
            .addField(new fieldObject().setType("SFTime").setName("cycleInterval").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("1"))
            .addField(new fieldObject().setType("SFBool").setName("loop").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("false"))
            .addField(new fieldObject().setType("SFTime").setName("startTime").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
            .addField(new fieldObject().setType("SFTime").setName("stopTime").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject().setDEF("SpinGroupTransform")
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("children").setProtoField("children"))))
            .addComments(new CommentsBlock("following nodes will not be rendered, only the first node of a ProtoBody is drawn"))
            .addChild(new TimeSensorObject().setDEF("SpinGroupClock")
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("cycleInterval").setProtoField("cycleInterval"))
                .addConnect(new connectObject().setNodeField("loop").setProtoField("loop"))
                .addConnect(new connectObject().setNodeField("startTime").setProtoField("startTime"))
                .addConnect(new connectObject().setNodeField("stopTime").setProtoField("stopTime"))))
            .addChild(new OrientationInterpolatorObject().setDEF("Spinner").setKey(new MFFloatObject(new MFFloat0().getArray())).setKeyValue(new MFRotationObject(new MFRotation1().getArray())))
            .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("SpinGroupClock").setToField("set_fraction").setToNode("Spinner"))
            .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Spinner").setToField("set_rotation").setToNode("SpinGroupTransform"))))
        .addComments(new CommentsBlock("Now the scene proper begins. Nothing renders in a ProtoDeclare (or ExternProtoDeclare)."))
        .addChild(new ViewpointObject().setDescription("Click on blue crossbar to activate second SpinGroup").setOrientation(new float[] {1f,0f,0f,-0.52f}).setPosition(new float[] {0f,18f,30f}))
        .addComments(new CommentsBlock("Create an instance, meaning actual nodes that render"))
        .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("SpinGroup"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("ActivateSecondSpinGroup").setToField("startTime").setToNode("SecondSpinGroup")))      ;
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("cycleInterval").setValue("8"));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("loop").setValue("true"));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("children")
            .addChild(new ShapeObject()
              .setGeometry(new BoxObject().setSize(new float[] {25f,2f,2f}))
              .setAppearance(new AppearanceObject().setDEF("Green")
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0f,1f,0.3f}))))
            .addChild(new ShapeObject()
              .setGeometry(new BoxObject().setSize(new float[] {2f,25f,2f}))
              .setAppearance(new AppearanceObject().setUSE("Green")))
            .addChild(ProtoInstance1 = new ProtoInstanceObject().setName("SpinGroup").setDEF("SecondSpinGroup")
              .addComments(new CommentsBlock("stopTime > startTime ensures that initial state is stopped"))));
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("cycleInterval").setValue("4"));
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("loop").setValue("true"));
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("stopTime").setValue("1"));
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("children")
                .addChild(new TouchSensorObject().setDEF("ActivateSecondSpinGroup").setDescription("Activate second SpinGroup by clicking blue bar"))
                .addChild(new ShapeObject()
                  .setGeometry(new BoxObject().setSize(new float[] {2f,2.05f,25f}))
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0f,0.3f,1f})))));
    return X3D0;
    }
protected class MFFloat0 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,1f,0f,0f,0f,1f,0f,3.14f,0f,1f,0f,6.28f});
  }
}
}
