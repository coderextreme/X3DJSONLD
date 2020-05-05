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
public class HAnimModelsHandsFeet {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new HAnimModelsHandsFeet().initialize().toFileJSON("../data/HAnimModelsHandsFeet.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("4.0")
      .setHead(new headObject()
        .addComponent(new componentObject().setLevel(1).setName("H-Anim"))
        .addMeta(new metaObject().setContent("HAnimModelsHandsFeet.x3d").setName("title"))
        .addMeta(new metaObject().setContent("Left and right hands and feet, using high-fidelity definitions for H-Anim version 2.2").setName("description"))
        .addMeta(new metaObject().setContent("YOO Kwan Hee and Don Brutzman").setName("creator"))
        .addMeta(new metaObject().setContent("8 February 2015").setName("created"))
        .addMeta(new metaObject().setContent("20 October 2019").setName("modified"))
        .addMeta(new metaObject().setContent("not yet to scale").setName("warning"))
        .addMeta(new metaObject().setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?").setName("warning"))
        .addMeta(new metaObject().setContent("HAnimModelsHandsFeet.png").setName("Image"))
        .addMeta(new metaObject().setContent("HAnimModelsHandsFeetWithFour1mGrids.png").setName("Image"))
        .addMeta(new metaObject().setContent("https://www.web3d.org/working-groups/humanoid-animation-h-anim").setName("reference"))
        .addMeta(new metaObject().setContent("https://www.web3d.org/files/specifications/19774/V1.0").setName("reference"))
        .addMeta(new metaObject().setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/hanim.html").setName("reference"))
        .addMeta(new metaObject().setContent("X3D H-Anim humanoid animation").setName("subject"))
        .addMeta(new metaObject().setContent("scene, DOCTYPE and Schema under development.").setName("warning"))
        .addMeta(new metaObject().setContent("https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelsHandsFeet.x3d").setName("identifier"))
        .addMeta(new metaObject().setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit").setName("generator"))
        .addMeta(new metaObject().setContent("../license.html").setName("license")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("HAnimModelsHandsFeet.x3d"))
        .addChild(new ViewpointObject().setDescription("Hands and feet 10m"))
        .addChild(new ViewpointObject().setDescription("Hands and feet 1.7m").setPosition(new float[] {0f,0f,1.7f}))
        .addChild(new TransformObject().setTranslation(new float[] {-1f,1f,0f})
          .addChild(new InlineObject().setUrl(new MFStringObject(new MFString0().getArray())))
          .addComments(new CommentsBlock(" Grid overlay authoring hint: first adjust grid scale to convenient large size, then adjust overall scale for your scene model "))
          .addChild(new TransformObject().setDEF("GridXY_20x20Fixed_AdjustScale").setScale(new float[] {0.1f,0.1f,0.1f})
            .addChild(new InlineObject().setDEF("GridXY_20x20Fixed").setUrl(new MFStringObject(new MFString1().getArray())))))
        .addChild(new TransformObject().setTranslation(new float[] {1f,1f,0f})
          .addChild(new InlineObject().setUrl(new MFStringObject(new MFString2().getArray())))
          .addChild(new TransformObject().setUSE("GridXY_20x20Fixed_AdjustScale")))
        .addChild(new TransformObject().setTranslation(new float[] {-1f,-1f,0f})
          .addComments(new CommentsBlock(" rotation='0 0 1 3.141593' "))
          .addChild(new InlineObject().setUrl(new MFStringObject(new MFString3().getArray())))
          .addChild(new TransformObject().setUSE("GridXY_20x20Fixed_AdjustScale")))
        .addChild(new TransformObject().setTranslation(new float[] {1f,-1f,0f})
          .addComments(new CommentsBlock(" rotation='0 0 1 3.141593' "))
          .addChild(new InlineObject().setUrl(new MFStringObject(new MFString4().getArray())))
          .addChild(new TransformObject().setUSE("GridXY_20x20Fixed_AdjustScale"))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"HAnimModelHandLeft.x3d","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandLeft.x3d","HAnimModelHandLeft.wrl","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandLeft.wrl"});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GridXY_20x20Fixed.x3d","../../Savage/Tools/Authoring/GridXY_20x20Fixed.x3d","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.x3d","GridXY_20x20Fixed.wrl","../../Savage/Tools/Authoring/GridXY_20x20Fixed.wrl","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.wrl"});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"HAnimModelHandRight.x3d","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandRight.x3d","HAnimModelHandRight.wrl","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandRight.wrl"});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"HAnimModelFootLeft.x3d","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootLeft.x3d","HAnimModelFootLeft.wrl","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootLeft.wrl"});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"HAnimModelFootRight.x3d","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootRight.x3d","HAnimModelFootRight.wrl","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootRight.wrl"});
  }
}
}
