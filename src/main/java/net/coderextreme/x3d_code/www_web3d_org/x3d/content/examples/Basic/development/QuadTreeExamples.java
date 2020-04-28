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
public class QuadTreeExamples {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new QuadTreeExamples().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/development/QuadTreeExamples.new.json");
    }
    public X3DObject initialize() {
ProtoInstanceObject ProtoInstance0 = null;
ProtoInstanceObject ProtoInstance1 = null;
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("QuadTreeExamples.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("26 June 2000"))
        .addMeta(new metaObject().setName("modified").setContent("20 January 2020"))
        .addMeta(new metaObject().setName("description").setContent("Show four ways of solving the QuadTree problem using native XML tags, PROTOs, IDREF/USE and MFNode children compatibly - view XML source to see DTD internal-subset declarations."))
        .addMeta(new metaObject().setName("error").setContent("Test to demonstrate DOCTYPE extensibility, this X3D scene not valid and does not render."))
        .addMeta(new metaObject().setName("warning").setContent("You must view full source of the DTD declarations (QuadTreeExamples.x3d.txt) to fully understand validation techniques in this file."))
        .addMeta(new metaObject().setName("reference").setContent("QuadTreeExamplesExplanation.html"))
        .addMeta(new metaObject().setName("reference").setContent("QuadTreeExamples.x3d.txt"))
        .addMeta(new metaObject().setName("reference").setContent("QuadTreeExamples.png"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/development/QuadTreeExamples.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.1, https://www.web3d.org/x3d/content/README.X3D-Edit.html"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addComments(new CommentsBlock("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"))
        .addComments(new CommentsBlock("Example solution approach #1"))
        .addComments(new CommentsBlock("Note that PROTO declarations are also provided for compatible backwards translation to VRML 97 encoding. They are not necessary for independent X3D use of the QuadTree examples."))
        .addChild(new ProtoDeclareObject().setName("QuadTree-USEchildren")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("MFNode").setName("upperLeftDEFName").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
            .addField(new fieldObject().setType("MFNode").setName("upperRightDEFName").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
            .addField(new fieldObject().setType("MFNode").setName("lowerLeftDEFName").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
            .addField(new fieldObject().setType("MFNode").setName("lowerRightDEFName").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
            .addField(new fieldObject().setType("MFNode").setName("children").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
            .addComments(new CommentsBlock("children field must be declared for any PROTOs or native-tag nodes with children")))
          .setProtoBody(new ProtoBodyObject()
            .addComments(new CommentsBlock("VRML 97 specification paragraph 4.8.3, PROTO definition semantics: \"A prototype definition consists of one or more nodes.\" PROTO body follows."))
            .addChild(new GroupObject()
              .addChild(new GroupObject().setDEF("GroupA")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("children").setProtoField("upperLeftDEFName"))))
              .addChild(new GroupObject().setDEF("GroupB")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("children").setProtoField("upperRightDEFName"))))
              .addChild(new GroupObject().setDEF("GroupC")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("children").setProtoField("lowerLeftDEFName"))))
              .addChild(new GroupObject().setDEF("GroupD")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("children").setProtoField("lowerRightDEFName")))))))
        .addComments(new CommentsBlock("Example solution approach #3"))
        .addChild(new ProtoDeclareObject().setName("QuadTree-TagChildren")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("MFNode").setName("upperLeftNode").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
              .addComments(new CommentsBlock("no initialization node")))
            .addField(new fieldObject().setType("MFNode").setName("upperRightNode").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
              .addComments(new CommentsBlock("no initialization node")))
            .addField(new fieldObject().setType("MFNode").setName("lowerLeftNode").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
              .addComments(new CommentsBlock("no initialization node")))
            .addField(new fieldObject().setType("MFNode").setName("lowerRightNode").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
              .addComments(new CommentsBlock("no initialization node")))
            .addField(new fieldObject().setType("MFNode").setName("children").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)))
          .setProtoBody(new ProtoBodyObject()
            .addComments(new CommentsBlock("PROTO body follows."))
            .addChild(new GroupObject()
              .addChild(new GroupObject().setDEF("GroupE")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("children").setProtoField("upperLeftNode"))))
              .addChild(new GroupObject().setDEF("GroupF")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("children").setProtoField("upperRightNode"))))
              .addChild(new GroupObject().setDEF("GroupG")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("children").setProtoField("lowerLeftNode"))))
              .addChild(new GroupObject().setDEF("GroupH")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("children").setProtoField("lowerRightNode")))))))
        .addComments(new CommentsBlock("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"))
        .addChild(new GroupObject()
          .addChild(new ViewpointObject().setDescription("View QuadTree examples").setPosition(new float[] {0f,0f,30f}))
          .addChild(new TransformObject().setDEF("Example_1").setTranslation(new float[] {0f,6f,0f})
            .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("QuadTree-USEchildren")))
          .addChild(new TransformObject().setDEF("Example_2").setTranslation(new float[] {0f,2f,0f})
            .setQuadTree-USEchildren(new QuadTree-USEchildrenObject().setNodeType("Group")
              .setFieldValue(new fieldValueObject().setName("children")
                .addComments(new CommentsBlock("children which follow are locally convenient and referenced via IDREF/USE"))
                .addChild(new TransformObject().setDEF("LOWER_RIGHT_EXAMPLE_2").setTranslation(new float[] {-6f,0f,4f})
                  .addChild(new ShapeObject()
                    .setGeometry(new TextObject().setString(new MFStringObject(new MFString1().getArray())))
                    .setAppearance(new AppearanceObject().setUSE("WHITE")))))
              .addFieldValue(new fieldValueObject().setName("upperLeftDEFName")
                .addChild(new TransformObject().setUSE("UPPER_LEFT")))
              .addFieldValue(new fieldValueObject().setName("upperRightDEFName")
                .addChild(new TransformObject().setUSE("UPPER_RIGHT")))
              .addFieldValue(new fieldValueObject().setName("lowerLeftDEFName")
                .addChild(new TransformObject().setUSE("LOWER_LEFT")))
              .addFieldValue(new fieldValueObject().setName("lowerRightDEFName")
                .addChild(new TransformObject().setUSE("LOWER_RIGHT_EXAMPLE_2")))))
          .addChild(new TransformObject().setDEF("Example_3").setTranslation(new float[] {0f,-2f,0f})
            .addChild(ProtoInstance1 = new ProtoInstanceObject().setName("QuadTree-TagChildren")))
          .addChild(new TransformObject().setDEF("Example_4").setTranslation(new float[] {0f,-6f,0f})
            .setQuadTree-TagChildren(new QuadTree-TagChildrenObject().setNodeType("Group")
              .setFieldValue(new fieldValueObject().setName("upperLeftNode")
                .addChild(new TransformObject().setUSE("UPPER_LEFT")))
              .addFieldValue(new fieldValueObject().setName("upperRightNode")
                .addChild(new TransformObject().setUSE("UPPER_RIGHT")))
              .addFieldValue(new fieldValueObject().setName("lowerLeftNode")
                .addChild(new TransformObject().setUSE("LOWER_LEFT")))
              .addFieldValue(new fieldValueObject().setName("lowerRightNode")
                .addChild(new TransformObject().setTranslation(new float[] {-6f,0f,4f})
                  .addChild(new ShapeObject()
                    .setGeometry(new TextObject().setString(new MFStringObject(new MFString3().getArray())))
                    .setAppearance(new AppearanceObject().setUSE("WHITE"))))
                .addChild(new WorldInfoObject().setInfo(new MFStringObject(new MFString4().getArray())))))))
        .addComments(new CommentsBlock("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -")))      ;
ProtoInstance0
              .addFieldValue(new fieldValueObject().setName("children")
                .addChild(new GroupObject()
                  .addChild(new TransformObject().setDEF("UPPER_LEFT").setTranslation(new float[] {4f,0f,4f})
                    .addChild(new ShapeObject()
                      .setAppearance(new AppearanceObject().setDEF("RED")
                        .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                      .setGeometry(new BoxObject())))
                  .addChild(new TransformObject().setDEF("UPPER_RIGHT").setTranslation(new float[] {3f,0f,-3f})
                    .addChild(new ShapeObject()
                      .setAppearance(new AppearanceObject().setDEF("GREEN")
                        .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0f,1f,0f})))
                      .setGeometry(new SphereObject())))
                  .addChild(new TransformObject().setDEF("LOWER_LEFT").setTranslation(new float[] {-3f,0f,-3f})
                    .addChild(new ShapeObject()
                      .setAppearance(new AppearanceObject().setDEF("BLUE")
                        .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.2f,0.2f,1f})))
                      .setGeometry(new CylinderObject())))
                  .addChild(new TransformObject().setDEF("LOWER_RIGHT").setTranslation(new float[] {-6f,0f,4f})
                    .addChild(new ShapeObject()
                      .setAppearance(new AppearanceObject().setDEF("WHITE")
                        .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,1f,1f})))
                      .setGeometry(new TextObject().setString(new MFStringObject(new MFString0().getArray())))))));
ProtoInstance0
              .addFieldValue(new fieldValueObject().setName("upperLeftDEFName")
                .addChild(new TransformObject().setUSE("UPPER_LEFT")));
ProtoInstance0
              .addFieldValue(new fieldValueObject().setName("upperRightDEFName")
                .addChild(new TransformObject().setUSE("UPPER_RIGHT")));
ProtoInstance0
              .addFieldValue(new fieldValueObject().setName("lowerLeftDEFName")
                .addChild(new TransformObject().setUSE("LOWER_LEFT")));
ProtoInstance0
              .addFieldValue(new fieldValueObject().setName("lowerRightDEFName")
                .addChild(new TransformObject().setUSE("LOWER_RIGHT")));
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("upperLeftNode")
                .addChild(new TransformObject().setUSE("UPPER_LEFT")));
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("upperRightNode")
                .addChild(new TransformObject().setUSE("UPPER_RIGHT")));
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("lowerLeftNode")
                .addChild(new TransformObject().setUSE("LOWER_LEFT")));
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("lowerRightNode")
                .addChild(new TransformObject().setTranslation(new float[] {-6f,0f,4f})
                  .addChild(new ShapeObject()
                    .setGeometry(new TextObject().setString(new MFStringObject(new MFString2().getArray())))
                    .setAppearance(new AppearanceObject().setUSE("WHITE")))));
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"QuadTree-USEchildren","ProtoInstance"});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"QuadTree-USEchildren","Native tags"});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"QuadTree-TagChildren","ProtoInstance"});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"QuadTree-TagChildren","Native tags"});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"this WorldInfo is here to demonstrate that the example is type MFNode"});
  }
}
}
