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
public class ArchPrototype implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new ArchPrototype().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/ArchPrototype.new.java.x3d");
    model.toFileJSON("../data/ArchPrototype.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
      X3D X3D0 =  new X3D().setProfile(new SFString("Immersive")).setVersion(new SFString("4.0"))
      .setHead(new head()
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("ArchPrototype.x3d")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("Possibility to create shapes related to arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information.")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("Michele Foti, Don Brutzman")))
        .addMeta(new meta().setName(new SFString("created")).setContent(new SFString("15 December 2014")))
        .addMeta(new meta().setName(new SFString("modified")).setContent(new SFString("27 November 2015")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("ArchModelingDiagrams.pdf")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("https://en.wikipedia.org/wiki/Arch")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchPrototype.x3d")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")))
        .addMeta(new meta().setName(new SFString("license")).setContent(new SFString("../license.html"))))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName(new SFString("ArchPrototype")).setAppinfo(new SFString("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.js."))
          .setProtoInterface(new ProtoInterface()
            .addComments(new CommentsBlock("COLOR OF ARCH"))
            .addComments(new CommentsBlock("INPUT PARAMETERS"))
            .addComments(new CommentsBlock("General parameters: measures in meters"))
            .addComments(new CommentsBlock("Parameters to create to create shapes related to arch: put true to apply"))
            .addField(new field().setType("SFColor").setName(new SFString("diffuseColor")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("color of arch")).setValue(new SFString("0.2 0.8 0.8")))
            .addField(new field().setType("SFColor").setName(new SFString("emissiveColor")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("color of arch")).setValue(new SFString("0.2 0.8 0.8")))
            .addField(new field().setType("SFFloat").setName(new SFString("clearSpanWidth")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("clearSpanWidth: clearSpanWidth must be double of riseHeight to obtain an half circumference")).setValue(new SFString("4")))
            .addField(new field().setType("SFFloat").setName(new SFString("riseHeight")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("riseHeight: riseHeight must be half of clearSpanWidth to obtain an half circumference")).setValue(new SFString("2")))
            .addField(new field().setType("SFFloat").setName(new SFString("depth")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("depth")).setValue(new SFString("3")))
            .addField(new field().setType("SFFloat").setName(new SFString("topAbutmentHeight")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("topAbutmentHeight:topAbutmentHeight=0 means no topAbutment")).setValue(new SFString("0.5")))
            .addField(new field().setType("SFFloat").setName(new SFString("pierWidth")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("pierWidth:pierWidtht=0 means no pierWidth")).setValue(new SFString("0.5")))
            .addField(new field().setType("SFFloat").setName(new SFString("pierHeight")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("pierHeight: pierHeight=0 means no pierHeight")).setValue(new SFString("1")))
            .addField(new field().setType("SFBool").setName(new SFString("archHalf")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("archHalf: can modify also clearSpanWidth, riseHeight, depth, pierWidth, pierHeight, topAbutmentHeight, archHalfExtensionWidth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width")).setValue(new SFString("false")))
            .addField(new field().setType("SFFloat").setName(new SFString("archHalfExtensionWidth")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("archHalfExtensionWidth: measure in meters, use only if archHalf=true, it is the width of the etension of the abutment of the archHalf. See the reference file ArchModelingDiagrams.pdf to find further information.")).setValue(new SFString("0")))
            .addField(new field().setType("SFBool").setName(new SFString("onlyIntrados")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("onlyIntrados: note it is a flat curved surface, can modify also clearSpanWidth, riseHeight, depth at purpose, if needed apply archHalf=true.")).setValue(new SFString("false")))
            .addField(new field().setType("SFBool").setName(new SFString("archFilled")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("archFilled: note it is an half cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose.")).setValue(new SFString("false")))
            .addField(new field().setType("SFBool").setName(new SFString("archHalfFilled")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("archHalfFilled: note it is a quarter cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalfFilled width.")).setValue(new SFString("false")))
            .addField(new field().setType("SFBool").setName(new SFString("lintel")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("lintel: no arc is rendered, but a lintel: topAbutmentHeight on pierHeight, total height is pierHeight + topAbutmentHeight, if needed apply archHalf=true.")).setValue(new SFString("false"))))
          .setProtoBody(new ProtoBody()
            .addComments(new CommentsBlock("First node determines node type of this prototype"))
            .addComments(new CommentsBlock("IndexedFaceset creates arch"))
            .addChild(new Transform().setDEF(new SFString("ArchTransform"))
              .addChild(new Shape().setDEF(new SFString("Arch"))
                .addComments(new CommentsBlock("note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly"))
                .setGeometry(new IndexedFaceSet().setDEF(new SFString("ArchIndex")).setConvex(false).setSolid(false)
                  .setCoord(new Coordinate().setDEF(new SFString("ArchChord"))))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDEF(new SFString("MaterialNode"))
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField(new SFString("emissiveColor")).setProtoField(new SFString("emissiveColor")))
                      .addConnect(new connect().setNodeField(new SFString("diffuseColor")).setProtoField(new SFString("diffuseColor"))))))))
            .addComments(new CommentsBlock("Subsequent nodes do not render, but still must be a valid X3D subgraph"))
            .addComments(new CommentsBlock("This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs"))
            .addChild(new Script().setDEF(new SFString("ArchPrototypeScript")).setUrl(new MFString0().getArray())
              .addComments(new CommentsBlock("INPUT PARAMETERS"))
              .addComments(new CommentsBlock("General parameters"))
              .addComments(new CommentsBlock("Parameters to create to create shapes related to arch: put true to apply"))
              .addComments(new CommentsBlock("OUTPUT PARAMETERS"))
              .addField(new field().setType("SFFloat").setName(new SFString("clearSpanWidth")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("user or default input for clearSpanWidth parameter")))
              .addField(new field().setType("SFFloat").setName(new SFString("riseHeight")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("user or default input for riseHeight parameter")))
              .addField(new field().setType("SFFloat").setName(new SFString("depth")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("user or default input for depth parameter")))
              .addField(new field().setType("SFFloat").setName(new SFString("topAbutmentHeight")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("user or default input for topAbutmentHeight parameter")))
              .addField(new field().setType("SFFloat").setName(new SFString("pierWidth")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("user or default input for pierWidth parameter")))
              .addField(new field().setType("SFFloat").setName(new SFString("pierHeight")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("user or default input for pierHeight parameter")))
              .addField(new field().setType("SFBool").setName(new SFString("archHalf")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("user or default input for archHalf parameter")))
              .addField(new field().setType("SFFloat").setName(new SFString("archHalfExtensionWidth")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("user or default input for archHalfExtensionWidth parameter")))
              .addField(new field().setType("SFBool").setName(new SFString("onlyIntrados")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("user or default input for onlyIntrados parameter")))
              .addField(new field().setType("SFBool").setName(new SFString("archFilled")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("user or default input for archFilled parameter")))
              .addField(new field().setType("SFBool").setName(new SFString("archHalfFilled")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("user or default input for archHalfFilled parameter")))
              .addField(new field().setType("SFBool").setName(new SFString("lintel")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("user or default input for lintel parameter")))
              .addField(new field().setType("SFVec3f").setName(new SFString("computedScale")).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo(new SFString("computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth")))
              .addField(new field().setType("MFVec3f").setName(new SFString("pointOut")).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo(new SFString("send computed points to the Coordinate node")))
              .addField(new field().setType("MFInt32").setName(new SFString("indexOut")).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo(new SFString("send computed indices to the IndexedFaceSet node")))
              .setIS(new IS()
                .addConnect(new connect().setNodeField(new SFString("clearSpanWidth")).setProtoField(new SFString("clearSpanWidth")))
                .addConnect(new connect().setNodeField(new SFString("riseHeight")).setProtoField(new SFString("riseHeight")))
                .addConnect(new connect().setNodeField(new SFString("depth")).setProtoField(new SFString("depth")))
                .addConnect(new connect().setNodeField(new SFString("pierWidth")).setProtoField(new SFString("pierWidth")))
                .addConnect(new connect().setNodeField(new SFString("topAbutmentHeight")).setProtoField(new SFString("topAbutmentHeight")))
                .addConnect(new connect().setNodeField(new SFString("pierHeight")).setProtoField(new SFString("pierHeight")))
                .addConnect(new connect().setNodeField(new SFString("archHalf")).setProtoField(new SFString("archHalf")))
                .addConnect(new connect().setNodeField(new SFString("archHalfExtensionWidth")).setProtoField(new SFString("archHalfExtensionWidth")))
                .addConnect(new connect().setNodeField(new SFString("onlyIntrados")).setProtoField(new SFString("onlyIntrados")))
                .addConnect(new connect().setNodeField(new SFString("archFilled")).setProtoField(new SFString("archFilled")))
                .addConnect(new connect().setNodeField(new SFString("archHalfFilled")).setProtoField(new SFString("archHalfFilled")))
                .addConnect(new connect().setNodeField(new SFString("lintel")).setProtoField(new SFString("lintel")))))
            .addChild(new ROUTE().setFromField(new SFString("computedScale")).setFromNode(new SFString("ArchPrototypeScript")).setToField(new SFString("scale")).setToNode(new SFString("ArchTransform")))
            .addChild(new ROUTE().setFromField(new SFString("pointOut")).setFromNode(new SFString("ArchPrototypeScript")).setToField(new SFString("point")).setToNode(new SFString("ArchChord")))
            .addChild(new ROUTE().setFromField(new SFString("indexOut")).setFromNode(new SFString("ArchPrototypeScript")).setToField(new SFString("set_coordIndex")).setToNode(new SFString("ArchIndex")))))
        .addChild(ProtoInstance0 = new ProtoInstance().setName(new SFString("ArchPrototype")).setDEF(new SFString("ArchInstance")))
        .addComments(new CommentsBlock("Add any ROUTEs here that connect ProtoInstance to/from prior nodes in Scene (and outside of ProtoDeclare)"))
        .addChild(new Inline().setDEF(new SFString("CoordinateAxes")).setUrl(new MFString1().getArray())));
ProtoInstance0
          .addFieldValue(new fieldValue().setName(new SFString("diffuseColor")).setValue(new SFString("0.5 0.3 0.6")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName(new SFString("emissiveColor")).setValue(new SFString("0.5 0.3 0.6")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName(new SFString("clearSpanWidth")).setValue(new SFString("5")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName(new SFString("riseHeight")).setValue(new SFString("2.5")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName(new SFString("depth")).setValue(new SFString("2")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName(new SFString("topAbutmentHeight")).setValue(new SFString("0.6")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName(new SFString("pierWidth")).setValue(new SFString("1")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName(new SFString("pierHeight")).setValue(new SFString("2")));
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../node/ArchPrototypeScript.js","https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js"});
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/CoordinateAxes.x3d"});
  }
}
}
