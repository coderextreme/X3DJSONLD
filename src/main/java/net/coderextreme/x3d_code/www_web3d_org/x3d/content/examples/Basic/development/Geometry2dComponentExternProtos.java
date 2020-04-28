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
public class Geometry2dComponentExternProtos {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new Geometry2dComponentExternProtos().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/development/Geometry2dComponentExternProtos.new.json");
    }
    public X3DObject initialize() {
ProtoInstanceObject ProtoInstance0 = null;
ProtoInstanceObject ProtoInstance1 = null;
ProtoInstanceObject ProtoInstance2 = null;
ProtoInstanceObject ProtoInstance3 = null;
ProtoInstanceObject ProtoInstance4 = null;
ProtoInstanceObject ProtoInstance5 = null;
ProtoInstanceObject ProtoInstance6 = null;
ProtoInstanceObject ProtoInstance7 = null;
ProtoInstanceObject ProtoInstance8 = null;
ProtoInstanceObject ProtoInstance9 = null;
ProtoInstanceObject ProtoInstance10 = null;
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("Geometry2dComponentExternProtos.x3d"))
        .addMeta(new metaObject().setName("description").setContent("ExternProto declarations and examples for developmental use showing X3D Geometry2D component nodes (Arc2D ArcClose2D Circle2D Disk2D Polyline2D Polypoint2D Rectangle2D TriangleSet2D), implemented as prototypes for backwards compatibility with VRML 97. Also provides Unfilled ProtoInstance versions of some nodes since FillProperties not possible in VRML 97. 2D nodes are considered particularly helpful for CADPart geometry and building user interfaces such as Heads-Up Displays (HUDs)."))
        .addMeta(new metaObject().setName("creator").setContent("Christos Kalogrias, Don Brutzman, Ken Curtin, Duane Davis"))
        .addMeta(new metaObject().setName("created").setContent("16 November 2003"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("TODO").setContent("Check Polypoint2D and point rendering order"))
        .addMeta(new metaObject().setName("warning").setContent("These examples are complete but only used for developmental testing, not regular X3D authoring."))
        .addMeta(new metaObject().setName("reference").setContent("Geometry2dComponentPrototypes.x3d"))
        .addMeta(new metaObject().setName("reference").setContent("Geometry2dComponentExamples.x3d"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geometry2D.html"))
        .addMeta(new metaObject().setName("subject").setContent("Geometry2D component nodes (Arc2D ArcClose2D Circle2D Disk2D Polyline2D Polypoint2D Rectangle2D TriangleSet2D)"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentExternProtos.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addComments(new CommentsBlock("===================="))
        .addComments(new CommentsBlock("Do not copy these ExternProtoDeclare statements! They are copied automatically to provide backwards compatibility for VRML97 when using X3dToVrml97.xslt stylesheet mappings."))
        .addComments(new CommentsBlock("===================="))
        .addChild(new WorldInfoObject().setTitle("Geometry2dComponentExternProtos.x3d"))
        .addChild(new ExternProtoDeclareObject().setName("Arc2D").setUrl(new MFStringObject(new MFString0().getArray()))
          .addField(new fieldObject().setType("SFFloat").setName("startAngle").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFFloat").setName("endAngle").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFFloat").setName("radius").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)))
        .addChild(new ExternProtoDeclareObject().setName("ArcClose2D").setUrl(new MFStringObject(new MFString1().getArray()))
          .addField(new fieldObject().setType("SFFloat").setName("startAngle").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFFloat").setName("endAngle").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFFloat").setName("radius").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFString").setName("closureType").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFBool").setName("solid").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)))
        .addChild(new ExternProtoDeclareObject().setName("Circle2D").setUrl(new MFStringObject(new MFString2().getArray()))
          .addField(new fieldObject().setType("SFFloat").setName("radius").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFBool").setName("solid").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)))
        .addChild(new ExternProtoDeclareObject().setName("Disk2D").setUrl(new MFStringObject(new MFString3().getArray()))
          .addField(new fieldObject().setType("SFFloat").setName("innerRadius").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFFloat").setName("outerRadius").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFBool").setName("solid").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)))
        .addChild(new ExternProtoDeclareObject().setName("Polyline2D").setUrl(new MFStringObject(new MFString4().getArray()))
          .addField(new fieldObject().setType("MFVec2f").setName("lineSegments").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFBool").setName("solid").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)))
        .addChild(new ExternProtoDeclareObject().setName("Polypoint2D").setUrl(new MFStringObject(new MFString5().getArray()))
          .addField(new fieldObject().setType("MFVec2f").setName("point").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)))
        .addChild(new ExternProtoDeclareObject().setName("Rectangle2D").setUrl(new MFStringObject(new MFString6().getArray()))
          .addField(new fieldObject().setType("SFVec2f").setName("size").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFBool").setName("solid").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)))
        .addChild(new ExternProtoDeclareObject().setName("TriangleSet2D").setUrl(new MFStringObject(new MFString7().getArray()))
          .addField(new fieldObject().setType("MFVec2f").setName("vertices").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFBool").setName("solid").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)))
        .addComments(new CommentsBlock("===================="))
        .addComments(new CommentsBlock("Additional Unfilled versions since FillProperties node not possible in native VRML 97"))
        .addComments(new CommentsBlock("===================="))
        .addChild(new ExternProtoDeclareObject().setName("ArcClose2DUnfilled").setUrl(new MFStringObject(new MFString8().getArray()))
          .addField(new fieldObject().setType("SFFloat").setName("startAngle").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFFloat").setName("endAngle").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFFloat").setName("radius").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFString").setName("closureType").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFBool").setName("solid").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)))
        .addChild(new ExternProtoDeclareObject().setName("Rectangle2DUnfilled").setUrl(new MFStringObject(new MFString9().getArray()))
          .addField(new fieldObject().setType("SFVec2f").setName("size").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFBool").setName("solid").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)))
        .addComments(new CommentsBlock("===================="))
        .addComments(new CommentsBlock("===================="))
        .addChild(new BackgroundObject().setGroundColor(new MFColorObject(new MFColor10().getArray())).setSkyColor(new MFColorObject(new MFColor11().getArray())))
        .addChild(new ViewpointObject().setDescription("Geometry2D Component Examples").setPosition(new float[] {0f,0f,12f}))
        .addComments(new CommentsBlock("===================="))
        .addComments(new CommentsBlock("Top row"))
        .addChild(new TransformObject().setTranslation(new float[] {-5f,2f,0f})
          .addChild(new ShapeObject()
            .setGeometry(ProtoInstance0 = new ProtoInstanceObject().setName("ArcClose2D"))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0f,0f,1f})))))
        .addChild(new TransformObject().setDEF("ArcClose2DUnfilledTransform").setTranslation(new float[] {-2.5f,2f,0f})
          .addChild(new ShapeObject()
            .setGeometry(ProtoInstance1 = new ProtoInstanceObject().setName("ArcClose2DUnfilled"))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setEmissiveColor(new float[] {0.2f,0.2f,1f})))))
        .addChild(new TransformObject().setTranslation(new float[] {-0.5f,2f,0f})
          .addChild(new ShapeObject()
            .setGeometry(ProtoInstance2 = new ProtoInstanceObject().setName("Arc2D"))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,0f})))))
        .addChild(new TransformObject().setTranslation(new float[] {2f,2f,0f})
          .addChild(new ShapeObject()
            .setGeometry(ProtoInstance3 = new ProtoInstanceObject().setName("Circle2D"))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,0f,0f})))))
        .addChild(new TransformObject().setTranslation(new float[] {5f,2f,0f})
          .addChild(new ShapeObject()
            .setGeometry(ProtoInstance4 = new ProtoInstanceObject().setName("Disk2D"))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.5f,1f,1f})))))
        .addComments(new CommentsBlock("===================="))
        .addComments(new CommentsBlock("Bottom row"))
        .addChild(new TransformObject().setTranslation(new float[] {-5f,-2f,0f})
          .addChild(new ShapeObject()
            .setGeometry(ProtoInstance5 = new ProtoInstanceObject().setName("Rectangle2D"))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))))
        .addChild(new TransformObject().setDEF("RectangleUnfilled").setTranslation(new float[] {-3f,-2f,0f})
          .addChild(new ShapeObject()
            .setGeometry(ProtoInstance6 = new ProtoInstanceObject().setName("Rectangle2DUnfilled"))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,0.2f,0.2f})))))
        .addChild(new TransformObject().setTranslation(new float[] {-0.5f,-2f,0f})
          .addChild(new ShapeObject()
            .setGeometry(ProtoInstance7 = new ProtoInstanceObject().setName("Polyline2D"))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0f,0f,0f}).setEmissiveColor(new float[] {1f,0.5f,1f})))))
        .addChild(new TransformObject().setTranslation(new float[] {2.5f,-2f,0f})
          .addChild(new ShapeObject()
            .setGeometry(ProtoInstance8 = new ProtoInstanceObject().setName("Polypoint2D"))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f}))))
          .addChild(new TransformObject().setTranslation(new float[] {0f,0.5f,-0.5f})
            .addChild(new ShapeObject()
              .setGeometry(ProtoInstance9 = new ProtoInstanceObject().setName("Rectangle2D").setDEF("BackDrop"))
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0f,0f,0f}))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,-0.15f,0.2f})
              .addChild(new ShapeObject()
                .setGeometry(new TextObject().setString(new MFStringObject(new MFString12().getArray()))
                  .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString13().getArray())).setSize(0.25f).setStyle("BOLD")))
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject()))))))
        .addChild(new TransformObject().setTranslation(new float[] {5f,-2f,0f})
          .addChild(new ShapeObject()
            .setGeometry(ProtoInstance10 = new ProtoInstanceObject().setName("TriangleSet2D"))
            .setAppearance(new AppearanceObject()
              .setFillProperties(new FillPropertiesObject().setDEF("TestFillProperties"))
              .setLineProperties(new LinePropertiesObject().setDEF("TestLineProperties").setLinewidthScaleFactor(1f)
                .setMetadata(new MetadataStringObject().setName("test LineProperties metadata child").setDEF("TestLinePropertiesMetaData")))
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0f,1f,0f}))))))      ;
ProtoInstance0
              .addFieldValue(new fieldValueObject().setName("closureType").setValue("PIE"));
ProtoInstance0
              .addFieldValue(new fieldValueObject().setName("startAngle").setValue("0.7"));
ProtoInstance0
              .addFieldValue(new fieldValueObject().setName("endAngle").setValue("3"));
ProtoInstance0
              .addFieldValue(new fieldValueObject().setName("radius").setValue("1"));
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("closureType").setValue("PIE"));
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("startAngle").setValue("0.7"));
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("endAngle").setValue("3"));
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("radius").setValue("1"));
ProtoInstance2
              .addFieldValue(new fieldValueObject().setName("startAngle").setValue("0"));
ProtoInstance2
              .addFieldValue(new fieldValueObject().setName("endAngle").setValue("1.570796"));
ProtoInstance2
              .addFieldValue(new fieldValueObject().setName("radius").setValue("1"));
ProtoInstance3
              .addFieldValue(new fieldValueObject().setName("radius").setValue("1"));
ProtoInstance4
              .addFieldValue(new fieldValueObject().setName("innerRadius").setValue("0.5"));
ProtoInstance4
              .addFieldValue(new fieldValueObject().setName("outerRadius").setValue("1"));
ProtoInstance5
              .addFieldValue(new fieldValueObject().setName("size").setValue("1 2"));
ProtoInstance6
              .addFieldValue(new fieldValueObject().setName("size").setValue("1 2"));
ProtoInstance7
              .addFieldValue(new fieldValueObject().setName("lineSegments").setValue("-1 0 -0.5 1 0 0 0.5 1 1 0"));
ProtoInstance8
              .addFieldValue(new fieldValueObject().setName("point").setValue("-1 0 -0.5 1 0 0 0.5 1 1 0"));
ProtoInstance9
                .addFieldValue(new fieldValueObject().setName("size").setValue("2.5 2"));
ProtoInstance10
              .addFieldValue(new fieldValueObject().setName("vertices").setValue("0 0 1 1 -1 1 0 0 1 0.5 1 -0.5 0 0 -1 -2 -2 -1"));
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Geometry2dComponentPrototypes.wrl#Arc2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Arc2D","Geometry2dComponentPrototypes.x3d#Arc2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Arc2D"});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Geometry2dComponentPrototypes.wrl#ArcClose2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#ArcClose2D","Geometry2dComponentPrototypes.x3d#ArcClose2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#ArcClose2D"});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Geometry2dComponentPrototypes.wrl#Circle2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Circle2D","Geometry2dComponentPrototypes.x3d#Circle2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Circle2D"});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Geometry2dComponentPrototypes.wrl#Disk2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Disk2D","Geometry2dComponentPrototypes.x3d#Disk2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Disk2D"});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Geometry2dComponentPrototypes.wrl#Polyline2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Polyline2D","Geometry2dComponentPrototypes.x3d#Polyline2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Polyline2D"});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Geometry2dComponentPrototypes.wrl#Polypoint2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Polypoint2D","Geometry2dComponentPrototypes.x3d#Polypoint2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Polypoint2D"});
  }
}
protected class MFString6 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Geometry2dComponentPrototypes.wrl#Rectangle2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Rectangle2D","Geometry2dComponentPrototypes.x3d#Rectangle2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Rectangle2D"});
  }
}
protected class MFString7 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Geometry2dComponentPrototypes.wrl#TriangleSet2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#TriangleSet2D","Geometry2dComponentPrototypes.x3d#TriangleSet2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#TriangleSet2D"});
  }
}
protected class MFString8 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Geometry2dComponentPrototypes.wrl#ArcClose2DUnfilled","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#ArcClose2DUnfilled","Geometry2dComponentPrototypes.x3d#ArcClose2DUnfilled","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#ArcClose2DUnfilled"});
  }
}
protected class MFString9 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Geometry2dComponentPrototypes.wrl#Rectangle2DUnfilled","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Rectangle2DUnfilled","Geometry2dComponentPrototypes.x3d#Rectangle2DUnfilled","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Rectangle2DUnfilled"});
  }
}
protected class MFColor10 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0.3f,0.3f,0.3f});
  }
}
protected class MFColor11 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0.3f,0.3f,0.3f});
  }
}
protected class MFString12 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"PolyPoint2D","5 points"});
  }
}
protected class MFString13 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
}
