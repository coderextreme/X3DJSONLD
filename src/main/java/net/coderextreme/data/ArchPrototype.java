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
public class ArchPrototype {
  public static void main(String[] args) {
    ConfigurationProperties.setShowDefaultAttributes(true);
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new ArchPrototype().initialize().toFileJSON("../data/ArchPrototype.new.json");
    }
    public X3DObject initialize() {
ProtoInstanceObject ProtoInstance0 = null;
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setContent("ArchPrototype.x3d").setName("title"))
        .addMeta(new metaObject().setContent("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.").setName("description"))
        .addMeta(new metaObject().setContent("Possibility to create shapes related to arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information.").setName("description"))
        .addMeta(new metaObject().setContent("Michele Foti, Don Brutzman").setName("creator"))
        .addMeta(new metaObject().setContent("15 December 2014").setName("created"))
        .addMeta(new metaObject().setContent("27 November 2015").setName("modified"))
        .addMeta(new metaObject().setContent("ArchModelingDiagrams.pdf").setName("reference"))
        .addMeta(new metaObject().setContent("https://en.wikipedia.org/wiki/Arch").setName("reference"))
        .addMeta(new metaObject().setContent("http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchPrototype.x3d").setName("identifier"))
        .addMeta(new metaObject().setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit").setName("generator"))
        .addMeta(new metaObject().setContent("../license.html").setName("license")))
      .setScene(new SceneObject()
        .addChild(new ProtoDeclareObject().setAppinfo("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.js.").setName("ArchPrototype")
          .setProtoInterface(new ProtoInterfaceObject()
            .addComments(new CommentsBlock(" COLOR OF ARCH "))
            .addComments(new CommentsBlock(" INPUT PARAMETERS "))
            .addComments(new CommentsBlock(" General parameters: measures in meters "))
            .addComments(new CommentsBlock(" Parameters to create to create shapes related to arch: put true to apply "))
            .addField(new fieldObject().setType("SFColor").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("color of arch").setName("diffuseColor").setValue("0.2 0.8 0.8"))
            .addField(new fieldObject().setType("SFColor").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("color of arch").setName("emissiveColor").setValue("0.2 0.8 0.8"))
            .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("clearSpanWidth: clearSpanWidth must be double of riseHeight to obtain an half circumference").setName("clearSpanWidth").setValue("4"))
            .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("riseHeight: riseHeight must be half of clearSpanWidth to obtain an half circumference").setName("riseHeight").setValue("2"))
            .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("depth").setName("depth").setValue("3"))
            .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("topAbutmentHeight:topAbutmentHeight=0 means no topAbutment").setName("topAbutmentHeight").setValue("0.5"))
            .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("pierWidth:pierWidtht=0 means no pierWidth").setName("pierWidth").setValue("0.5"))
            .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("pierHeight: pierHeight=0 means no pierHeight").setName("pierHeight").setValue("1"))
            .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("archHalf: can modify also clearSpanWidth, riseHeight, depth, pierWidth, pierHeight, topAbutmentHeight, archHalfExtensionWidth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width").setName("archHalf").setValue("false"))
            .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("archHalfExtensionWidth: measure in meters, use only if archHalf=true, it is the width of the etension of the abutment of the archHalf. See the reference file ArchModelingDiagrams.pdf to find further information.").setName("archHalfExtensionWidth").setValue("0"))
            .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("onlyIntrados: note it is a flat curved surface, can modify also clearSpanWidth, riseHeight, depth at purpose, if needed apply archHalf=true.").setName("onlyIntrados").setValue("false"))
            .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("archFilled: note it is an half cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose.").setName("archFilled").setValue("false"))
            .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("archHalfFilled: note it is a quarter cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalfFilled width.").setName("archHalfFilled").setValue("false"))
            .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("lintel: no arc is rendered, but a lintel: topAbutmentHeight on pierHeight, total height is pierHeight + topAbutmentHeight, if needed apply archHalf=true.").setName("lintel").setValue("false")))
          .setProtoBody(new ProtoBodyObject()
            .addComments(new CommentsBlock(" First node determines node type of this prototype "))
            .addComments(new CommentsBlock(" IndexedFaceset creates arch "))
            .addChild(new TransformObject().setDEF("ArchTransform")
              .addChild(new ShapeObject().setDEF("Arch")
                .addComments(new CommentsBlock(" note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly "))
                .setGeometry(new IndexedFaceSetObject().setDEF("ArchIndex").setConvex(false).setCreaseAngle(0f).setSolid(false)
                  .setCoord(new CoordinateObject().setDEF("ArchChord")))
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDEF("MaterialNode")
                    .setIS(new ISObject()
                      .addConnect(new connectObject().setNodeField("emissiveColor").setProtoField("emissiveColor"))
                      .addConnect(new connectObject().setNodeField("diffuseColor").setProtoField("diffuseColor")))))))
            .addComments(new CommentsBlock(" Subsequent nodes do not render, but still must be a valid X3D subgraph "))
            .addComments(new CommentsBlock(" This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs "))
            .addChild(new ScriptObject().setDEF("ArchPrototypeScript").setUrl(new MFStringObject(new MFString0().getArray()))
              .addComments(new CommentsBlock(" INPUT PARAMETERS "))
              .addComments(new CommentsBlock(" General parameters "))
              .addComments(new CommentsBlock(" Parameters to create to create shapes related to arch: put true to apply "))
              .addComments(new CommentsBlock(" OUTPUT PARAMETERS "))
              .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for clearSpanWidth parameter").setName("clearSpanWidth"))
              .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for riseHeight parameter").setName("riseHeight"))
              .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for depth parameter").setName("depth"))
              .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for topAbutmentHeight parameter").setName("topAbutmentHeight"))
              .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for pierWidth parameter").setName("pierWidth"))
              .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for pierHeight parameter").setName("pierHeight"))
              .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for archHalf parameter").setName("archHalf"))
              .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for archHalfExtensionWidth parameter").setName("archHalfExtensionWidth"))
              .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for onlyIntrados parameter").setName("onlyIntrados"))
              .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for archFilled parameter").setName("archFilled"))
              .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for archHalfFilled parameter").setName("archHalfFilled"))
              .addField(new fieldObject().setType("SFBool").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for lintel parameter").setName("lintel"))
              .addField(new fieldObject().setType("SFVec3f").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth").setName("computedScale"))
              .addField(new fieldObject().setType("MFVec3f").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("send computed points to the Coordinate node").setName("pointOut"))
              .addField(new fieldObject().setType("MFInt32").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("send computed indices to the IndexedFaceSet node").setName("indexOut"))
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("clearSpanWidth").setProtoField("clearSpanWidth"))
                .addConnect(new connectObject().setNodeField("riseHeight").setProtoField("riseHeight"))
                .addConnect(new connectObject().setNodeField("depth").setProtoField("depth"))
                .addConnect(new connectObject().setNodeField("pierWidth").setProtoField("pierWidth"))
                .addConnect(new connectObject().setNodeField("topAbutmentHeight").setProtoField("topAbutmentHeight"))
                .addConnect(new connectObject().setNodeField("pierHeight").setProtoField("pierHeight"))
                .addConnect(new connectObject().setNodeField("archHalf").setProtoField("archHalf"))
                .addConnect(new connectObject().setNodeField("archHalfExtensionWidth").setProtoField("archHalfExtensionWidth"))
                .addConnect(new connectObject().setNodeField("onlyIntrados").setProtoField("onlyIntrados"))
                .addConnect(new connectObject().setNodeField("archFilled").setProtoField("archFilled"))
                .addConnect(new connectObject().setNodeField("archHalfFilled").setProtoField("archHalfFilled"))
                .addConnect(new connectObject().setNodeField("lintel").setProtoField("lintel"))))
            .addChild(new ROUTEObject().setFromField("computedScale").setFromNode("ArchPrototypeScript").setToField("scale").setToNode("ArchTransform"))
            .addChild(new ROUTEObject().setFromField("pointOut").setFromNode("ArchPrototypeScript").setToField("point").setToNode("ArchChord"))
            .addChild(new ROUTEObject().setFromField("indexOut").setFromNode("ArchPrototypeScript").setToField("set_coordIndex").setToNode("ArchIndex"))))
        .addChild(ProtoInstance0 = new ProtoInstanceObject().setDEF("ArchInstance").setName("ArchPrototype"))
        .addComments(new CommentsBlock(" Add any ROUTEs here that connect ProtoInstance to/from prior nodes in Scene (and outside of ProtoDeclare) "))
        .addChild(new InlineObject().setDEF("CoordinateAxes").setUrl(new MFStringObject(new MFString1().getArray()))))      ;
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("diffuseColor").setValue("0.5 0.3 0.6"));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("emissiveColor").setValue("0.5 0.3 0.6"));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("clearSpanWidth").setValue("5"));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("riseHeight").setValue("2.5"));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("depth").setValue("2"));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("topAbutmentHeight").setValue("0.6"));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("pierWidth").setValue("1"));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("pierHeight").setValue("2"));
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../node/ArchPrototypeScript.js"});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../data/CoordinateAxes.x3d"});
  }
}
}
