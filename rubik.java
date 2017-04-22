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
public class rubik {
  public static void main(String[] args) {
    ConfigurationProperties.setShowDefaultAttributes(true);
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_nativeJava);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new rubik().initialize().toFileJSON("rubik.new.json");
    }
    public X3DObject initialize() {
      return new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("rubik.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("generator").setContent("manual"))
        .addMeta(new metaObject().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/rubik.x3d"))
        .addMeta(new metaObject().setName("description").setContent("a kind of rubik cube with spheres")))
      .setScene(new SceneObject()
        .addChild(new NavigationInfoObject().setType(new MFStringObject(new MFString0().getArray())))
        .addChild(new ViewpointObject().setDescription("Rubiks Cube").setPosition(new float[] {0f,0f,12f}))
        .addChild(new ProtoDeclareObject().setName("sphere")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setName("xtranslation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setType(fieldObject.TYPE_SFVEC3F).setValue("0 0 0")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject()
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("translation").setProtoField("xtranslation")))
              .addChild(new ShapeObject()
                .setGeometry(new SphereObject())
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,1f,1f})))))))
        .addChild(new ProtoDeclareObject().setName("three")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setName("ytranslation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setType(fieldObject.TYPE_SFVEC3F).setValue("0 0 0")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject()
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("translation").setProtoField("ytranslation")))
              .addChild(new ProtoInstanceObject().setName("sphere")
                .addFieldValue(new fieldValueObject().setName("xtranslation").setValue("0 0 0")))
              .addChild(new ProtoInstanceObject().setName("sphere")
                .addFieldValue(new fieldValueObject().setName("xtranslation").setValue("2 0 0")))
              .addChild(new ProtoInstanceObject().setName("sphere")
                .addFieldValue(new fieldValueObject().setName("xtranslation").setValue("-2 0 0"))))))
        .addChild(new ProtoDeclareObject().setName("nine")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setName("ztranslation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setType(fieldObject.TYPE_SFVEC3F).setValue("0 0 0")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject()
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("translation").setProtoField("ztranslation")))
              .addChild(new ProtoInstanceObject().setName("three")
                .addFieldValue(new fieldValueObject().setName("ytranslation").setValue("0 0 0")))
              .addChild(new ProtoInstanceObject().setName("three")
                .addFieldValue(new fieldValueObject().setName("ytranslation").setValue("0 2 0")))
              .addChild(new ProtoInstanceObject().setName("three")
                .addFieldValue(new fieldValueObject().setName("ytranslation").setValue("0 -2 0"))))))
        .addChild(new ProtoDeclareObject().setName("twentyseven")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setName("ttranslation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setType(fieldObject.TYPE_SFVEC3F).setValue("0 0 0")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject()
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("translation").setProtoField("ttranslation")))
              .addChild(new ProtoInstanceObject().setName("nine")
                .addFieldValue(new fieldValueObject().setName("ztranslation").setValue("0 0 0")))
              .addChild(new ProtoInstanceObject().setName("nine")
                .addFieldValue(new fieldValueObject().setName("ztranslation").setValue("0 0 2")))
              .addChild(new ProtoInstanceObject().setName("nine")
                .addFieldValue(new fieldValueObject().setName("ztranslation").setValue("0 0 -2"))))))
        .addChild(new ProtoInstanceObject().setName("twentyseven")
          .addFieldValue(new fieldValueObject().setName("ttranslation").setValue("0 0 0"))))      ;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new String[] {"EXAMINE"});
  }
}
}
