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
public class ProtoTagDtdDeclarationExamples {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new ProtoTagDtdDeclarationExamples().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/development/ProtoTagDtdDeclarationExamples.new.json");
    }
    public X3DObject initialize() {
ProtoInstanceObject ProtoInstance0 = null;
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("ProtoTagDtdDeclarationExamples.x3d"))
        .addMeta(new metaObject().setName("created").setContent("17 April 2000"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("creator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("e-mail").setContent("brutzman@nps.navy.mil"))
        .addMeta(new metaObject().setName("description").setContent("Provides Prototype XML-tag-definition examples to demonstrate DTD modularization and extensibility in X3D scenes. Also see SpinGroupInternalSubsetDeclaration.x3d"))
        .addMeta(new metaObject().setName("warning").setContent("You must view full source of the DTD declarations (ProtoTagDtdDeclarationExamples.x3d.txt) to fully understand validation techniques in this file."))
        .addMeta(new metaObject().setName("error").setContent("internal subset deficiency: nodeType attributes need to be converted to containerField attributes."))
        .addMeta(new metaObject().setName("reference").setContent("ProtoTagDtdDeclarationExamples.x3d.txt"))
        .addMeta(new metaObject().setName("reference").setContent("SpinGroupInternalSubsetDeclaration.x3d.txt"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/ProtoTagDtdDeclarationExamples.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.1, https://www.web3d.org/x3d/content/README.X3D-Edit.html"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addComments(new CommentsBlock("*********************************************************************"))
        .addComments(new CommentsBlock("*** Step 5: Copy/edit ProtoDeclare, (optionally ProtoInstance) ***"))
        .addComments(new CommentsBlock("*** and the tagset version for your nodes of interest. ***"))
        .addComments(new CommentsBlock("*** When instantiating field Node/Nodes or field values, ***"))
        .addComments(new CommentsBlock("*** use fieldValue tags to override the initial values. ***"))
        .addComments(new CommentsBlock("*** The following example content instantiates prototype ***"))
        .addComments(new CommentsBlock("*** NewTransformExample using tags and ProtoInstance. ***"))
        .addComments(new CommentsBlock("*********************************************************************"))
        .addComments(new CommentsBlock("Declaring the NewTransformExample PROTO:"))
        .addChild(new ProtoDeclareObject().setName("NewTransformExample")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType("SFRotation").setName("rotation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 1 0"))
            .addField(new fieldObject().setType("SFVec3f").setName("center").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType("SFVec3f").setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("1 1 1"))
            .addField(new fieldObject().setType("SFRotation").setName("scaleOrientation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 1 0"))
            .addField(new fieldObject().setType("SFVec3f").setName("bboxCenter").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0"))
            .addField(new fieldObject().setType("SFVec3f").setName("bboxSize").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("-1 -1 -1"))
            .addField(new fieldObject().setType("MFNode").setName("children").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new WorldInfoObject().setInfo(new MFStringObject(new MFString0().getArray())))))
          .setProtoBody(new ProtoBodyObject()
            .addComments(new CommentsBlock("Transform is first node, which determines node type, and encloses children for instances."))
            .addChild(new TransformObject().setDEF("InitialTransform")
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("translation").setProtoField("translation"))
                .addConnect(new connectObject().setNodeField("rotation").setProtoField("rotation"))
                .addConnect(new connectObject().setNodeField("center").setProtoField("center"))
                .addConnect(new connectObject().setNodeField("scale").setProtoField("scale"))
                .addConnect(new connectObject().setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
                .addConnect(new connectObject().setNodeField("bboxCenter").setProtoField("bboxCenter"))
                .addConnect(new connectObject().setNodeField("bboxSize").setProtoField("bboxSize"))
                .addConnect(new connectObject().setNodeField("children").setProtoField("children"))))))
        .addComments(new CommentsBlock("Instantiating the NewTransformExample PROTO using a ProtoInstance tag:"))
        .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("NewTransformExample"))
        .addComments(new CommentsBlock("Instantiating the NewTransformExample node using a customized tag:"))
        .addChild(new TransformObject().setTranslation(new float[] {0f,-2f,0f})
          .addChild(new AnchorObject().setDescription("Click to view source (ProtoTagDtdDeclarationExamples.x3d.txt)").setParameter(new MFStringObject(new MFString3().getArray())).setUrl(new MFStringObject(new MFString4().getArray()))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.8f,0.4f,0.1f})))
              .setGeometry(new TextObject().setString(new MFStringObject(new MFString5().getArray()))
                .setFontStyle(new FontStyleObject().setUSE("FS")))))))      ;
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("translation").setValue("0 1.5 0"));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("children")
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.1f,0.8f,0.8f})))
              .setGeometry(new TextObject().setString(new MFStringObject(new MFString1().getArray()))
                .setFontStyle(new FontStyleObject().setDEF("FS").setJustify(new MFStringObject(new MFString2().getArray())).setSize(0.7f)))));
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"overridden at run time"});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ProtoTagDtdDeclaration Examples","using a regular ProtoInstance"});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_blank"});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ProtoTagDtdDeclarationExamples.x3d.txt","https://www.web3d.org/x3d/content/examples/development/ProtoTagDtdDeclarationExamples.x3d.txt"});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"(click to see source)"});
  }
}
}
