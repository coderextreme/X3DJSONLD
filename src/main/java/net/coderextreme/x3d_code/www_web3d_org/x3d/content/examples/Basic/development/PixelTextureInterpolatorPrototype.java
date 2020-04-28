package net.coderextreme.x3d_code.www_web3d_org.x3d.content.examples.Basic.development;
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
public class PixelTextureInterpolatorPrototype {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new PixelTextureInterpolatorPrototype().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/development/PixelTextureInterpolatorPrototype.new.json");
    }
    public X3DObject initialize() {
ProtoInstanceObject ProtoInstance0 = null;
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.1")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("PixelTextureInterpolatorPrototype.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Create Script prototype to modify a PixelTexture as an image morph"))
        .addMeta(new metaObject().setName("creator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("14 April 2008"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("warning").setContent("under development"))
        .addMeta(new metaObject().setName("subject").setContent("2D image PixelTexture morph"))
        .addMeta(new metaObject().setName("identifier").setContent("https://savage.nps.edu/Savage/Tools/Authoring/PixelTextureInterpolatorPrototype.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("PixelTextureInterpolatorPrototype.x3d"))
        .addChild(new ProtoDeclareObject().setName("PixelTextureInterpolator")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFFloat").setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType("MFFloat").setName("key").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
            .addField(new fieldObject().setType("MFNode").setName("keyValue").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
            .addField(new fieldObject().setType("SFImage").setName("value_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
            .addField(new fieldObject().setType("SFBool").setName("traceEnabled").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress").setValue("true")))
          .setProtoBody(new ProtoBodyObject()
            .addComments(new CommentsBlock("First node determines node type of prototype"))
            .addChild(new ScriptObject().setDEF("ImageInterpolatorScript").setUrl(new MFStringObject(new MFString0().getArray()))
              .addField(new fieldObject().setType("SFFloat").setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType("MFFloat").setName("key").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
              .addField(new fieldObject().setType("MFNode").setName("keyValue").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
                .addComments(new CommentsBlock("initialization nodes (if any) go here")))
              .addField(new fieldObject().setType("SFImage").setName("value_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
              .addField(new fieldObject().setType("SFBool").setName("traceEnabled").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("set_fraction").setProtoField("set_fraction"))
                .addConnect(new connectObject().setNodeField("key").setProtoField("key"))
                .addConnect(new connectObject().setNodeField("keyValue").setProtoField("keyValue"))
                .addConnect(new connectObject().setNodeField("value_changed").setProtoField("value_changed"))
                .addConnect(new connectObject().setNodeField("traceEnabled").setProtoField("traceEnabled"))))
            .addComments(new CommentsBlock("Subsequent nodes do not render, but still must be a valid X3D subgraph"))))
        .addComments(new CommentsBlock("renderable scene graph begins here"))
        .addChild(new ShapeObject()
          .setGeometry(new BoxObject())
          .setAppearance(new AppearanceObject()
            .setTexture(new PixelTextureObject().setDEF("PixelColors").setImage(new int[] {2,4,3,16711680,16776960,30464,16711799,255,16742144,65399,8947848}))))
        .addComments(new CommentsBlock("set of images, interpolated as a 2D morph"))
        .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("PixelTextureInterpolator").setDEF("PixelTextureInterpolatorExample"))
        .addChild(new TimeSensorObject().setDEF("Time").setCycleInterval(4d))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("PixelTextureInterpolatorExample").setToField("image").setToNode("PixelColors"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("Time").setToField("set_fraction").setToNode("PixelTextureInterpolatorExample")))      ;
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("key").setValue("0 0.25 0.5 0.75 1"));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("keyValue")
            .addComments(new CommentsBlock("rotate two image values in each PixelTexture"))
            .addChild(new PixelTextureObject().setImage(new int[] {2,4,3,16711680,16776960,30464,16711799,255,16742144,65399,8947848}))
            .addChild(new PixelTextureObject().setImage(new int[] {2,4,3,30464,16711799,255,16742144,65399,8947848,16711680,16776960}))
            .addChild(new PixelTextureObject().setImage(new int[] {2,4,3,255,16742144,65399,8947848,16711680,16776960,30464,16711799}))
            .addChild(new PixelTextureObject().setImage(new int[] {2,4,3,65399,8947848,16711680,16776960,30464,16711799,255,16742144}))
            .addComments(new CommentsBlock("last PixelTexture matches first, would like to DEF and USE within a fieldValue initialization"))
            .addChild(new PixelTextureObject().setImage(new int[] {2,4,3,16711680,16776960,30464,16711799,255,16742144,65399,8947848})));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("traceEnabled").setValue("true"));
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"PixelTextureInterpolator.js","https://savage.nps.edu/Savage/Tools/Authoring/PixelTextureInterpolator.js"});
  }
}
}
