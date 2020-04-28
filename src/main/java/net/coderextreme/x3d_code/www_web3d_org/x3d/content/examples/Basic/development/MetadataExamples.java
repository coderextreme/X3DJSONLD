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
public class MetadataExamples {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new MetadataExamples().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/development/MetadataExamples.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("MetadataExamples.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Examples showing use of new X3D Metadata nodes in Core component (MetadataDouble MetadataFloat MetadataInteger MetadataSet MetadataString). Also provided: external prototype definitions for backwards compatibility with VRML 97."))
        .addMeta(new metaObject().setName("hint").setContent("Metadata nodes may be repositioned by a few lines if VRML97 parent node does not support the children field."))
        .addMeta(new metaObject().setName("creator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("17 November 2003"))
        .addMeta(new metaObject().setName("modified").setContent("20 January 2020"))
        .addMeta(new metaObject().setName("warning").setContent("The external prototype declarations in this file are only intended for use with browsers that do not already support the Metadata nodes."))
        .addMeta(new metaObject().setName("reference").setContent("MetadataPrototypes.x3d"))
        .addMeta(new metaObject().setName("subject").setContent("Metadata nodes, X3D Core component (MetadataBoolean MetadataDouble MetadataFloat MetadataInteger MetadataSet MetadataString)"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#Metadata"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#X3DMetadataObject"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#Nodereference"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/MetadataExamples.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addComments(new CommentsBlock("===================="))
        .addComments(new CommentsBlock("Do not copy these ExternProtoDeclare statements, they are only included for preparation of X3dToVrml97.xslt stylesheet mappings for backwards compatibility."))
        .addComments(new CommentsBlock("===================="))
        .addChild(new ExternProtoDeclareObject().setName("MetadataBoolean").setAppinfo("MetadataBoolean contains a list of booleans in the value field.").setUrl(new MFStringObject(new MFString0().getArray()))
          .addField(new fieldObject().setType("SFString").setName("name").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("default value"))
          .addField(new fieldObject().setType("MFBool").setName("value").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("default value"))
          .addField(new fieldObject().setType("SFString").setName("reference").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("default value"))
          .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")))
        .addChild(new ExternProtoDeclareObject().setName("MetadataDouble").setAppinfo("MetadataDouble contains a list of double-precision floating-point numbers in the value field.").setUrl(new MFStringObject(new MFString1().getArray()))
          .addField(new fieldObject().setType("SFString").setName("name").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("MFDouble").setName("value").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFString").setName("reference").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)))
        .addChild(new ExternProtoDeclareObject().setName("MetadataFloat").setAppinfo("MetadataFloat contains a list of floating-point numbers in the value field.").setUrl(new MFStringObject(new MFString2().getArray()))
          .addField(new fieldObject().setType("SFString").setName("name").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("MFFloat").setName("value").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFString").setName("reference").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)))
        .addChild(new ExternProtoDeclareObject().setName("MetadataInteger").setAppinfo("MetadataInteger contains a list of 32-bit integer numbers in the value field.").setUrl(new MFStringObject(new MFString3().getArray()))
          .addField(new fieldObject().setType("SFString").setName("name").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("MFInt32").setName("value").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("MFInt32").setName("set_value").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFString").setName("reference").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)))
        .addChild(new ExternProtoDeclareObject().setName("MetadataSet").setAppinfo("MetadataSet contains a list of nodes in the value field.").setUrl(new MFStringObject(new MFString4().getArray()))
          .addField(new fieldObject().setType("SFString").setName("name").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("MFNode").setName("value").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFString").setName("reference").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)))
        .addChild(new ExternProtoDeclareObject().setName("MetadataString").setAppinfo("MetadataString contains a set of strings in the value field.").setUrl(new MFStringObject(new MFString5().getArray()))
          .addField(new fieldObject().setType("SFString").setName("name").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("MFString").setName("value").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFString").setName("reference").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)))
        .addComments(new CommentsBlock("==========================="))
        .addComments(new CommentsBlock("Example Metadata node usage"))
        .addComments(new CommentsBlock("==========================="))
        .addChild(new GroupObject()
          .setMetadata(new MetadataBooleanObject().setName("sample boolean data").setDEF("MetadataBooleanInstance").setReference("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#MetadataBoolean").setValue(new MFBoolObject(new MFBool6().getArray())))
          .addChild(new TransformObject()
            .setMetadata(new MetadataDoubleObject().setName("sample double data").setDEF("MetadataDoubleInstance").setReference("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#MetadataDouble").setValue(new MFDoubleObject(new MFDouble7().getArray()))))
          .addChild(new TransformObject()
            .setMetadata(new MetadataFloatObject().setName("sample float data").setReference("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#MetadataFloat").setValue(new MFFloatObject(new MFFloat8().getArray()))
              .setMetadata(new MetadataDoubleObject().setUSE("MetadataDoubleInstance"))
              .addComments(new CommentsBlock("metadata child of metadata node (also note nested PROTO here, when translated)"))))
          .addChild(new TransformObject()
            .setMetadata(new MetadataIntegerObject().setName("sample integer data").setReference("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#MetadataInteger").setValue(new MFInt32Object(new MFInt329().getArray()))))
          .addChild(new TransformObject()
            .setMetadata(new MetadataSetObject().setName("sample data").setReference("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#MetadataSet")
              .setMetadata(new MetadataStringObject().setName("containerFieldDefaultTest").setValue(new MFStringObject(new MFString10().getArray())))
              .addComments(new CommentsBlock("be sure to set containerField='value' for all members of the contained set!"))
              .addValue(new MetadataBooleanObject().setName("MetadataSetValue1").setValue(new MFBoolObject(new MFBool11().getArray())))
              .addValue(new MetadataDoubleObject().setName("MetadataSetValue2").setValue(new MFDoubleObject(new MFDouble12().getArray())))
              .addValue(new MetadataFloatObject().setName("MetadataSetValue3").setValue(new MFFloatObject(new MFFloat13().getArray())))
              .addValue(new MetadataIntegerObject().setName("MetadataSetValue4").setValue(new MFInt32Object(new MFInt3214().getArray())))
              .addValue(new MetadataStringObject().setName("MetadataSetValue5").setValue(new MFStringObject(new MFString15().getArray())))))
          .addChild(new TransformObject()
            .setMetadata(new MetadataStringObject().setName("sample string data").setReference("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#MetadataString").setValue(new MFStringObject(new MFString16().getArray()))))
          .addChild(new GroupObject()
            .addChild(new WorldInfoObject().setDEF("TestMetadataChild")
              .setMetadata(new MetadataStringObject().setName("Backwards compatibility note").setValue(new MFStringObject(new MFString17().getArray()))))))
        .addComments(new CommentsBlock("===================="))
        .addChild(new AnchorObject().setDEF("LinkToExamples").setDescription("link to examples").setParameter(new MFStringObject(new MFString18().getArray())).setUrl(new MFStringObject(new MFString19().getArray()))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.8f,0.6f,0.2f})))
            .setGeometry(new TextObject().setString(new MFStringObject(new MFString20().getArray()))
              .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString21().getArray())).setSize(0.5f))))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MetadataPrototypes.x3d#MetadataBoolean","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d#MetadataBoolean","MetadataPrototypes.wrl#MetadataBoolean","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.wrl#MetadataBoolean"});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MetadataPrototypes.x3d#MetadataDouble","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d#MetadataDouble","MetadataPrototypes.wrl#MetadataDouble","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.wrl#MetadataDouble"});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MetadataPrototypes.x3d#MetadataFloat","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d#MetadataFloat","MetadataPrototypes.wrl#MetadataFloat","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.wrl#MetadataFloat"});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MetadataPrototypes.x3d#MetadataInteger","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d#MetadataInteger","MetadataPrototypes.wrl#MetadataInteger","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.wrl#MetadataInteger"});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MetadataPrototypes.x3d#MetadataSet","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d#MetadataSet","MetadataPrototypes.wrl#MetadataSet","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.wrl#MetadataSet"});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MetadataPrototypes.x3d#MetadataString","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d#MetadataString","MetadataPrototypes.wrl#MetadataString","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.wrl#MetadataString"});
  }
}
protected class MFBool6 {
  protected MFBoolObject getArray() {
    return new MFBoolObject(new boolean[] {true,false,true});
  }
}
protected class MFDouble7 {
  protected MFDoubleObject getArray() {
    return new MFDoubleObject(new double[] {1d,2d,3d});
  }
}
protected class MFFloat8 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,2f,3f});
  }
}
protected class MFInt329 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,3});
  }
}
protected class MFString10 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"This initial node is containerField=metadata on the MetadataSet, not part of the containerField=value set"});
  }
}
protected class MFBool11 {
  protected MFBoolObject getArray() {
    return new MFBoolObject(new boolean[] {true,false,true});
  }
}
protected class MFDouble12 {
  protected MFDoubleObject getArray() {
    return new MFDoubleObject(new double[] {0d,1d,2d});
  }
}
protected class MFFloat13 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {3f,4f,5f});
  }
}
protected class MFInt3214 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {6,7,8});
  }
}
protected class MFString15 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"string1","string2"});
  }
}
protected class MFString16 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"one two three","four five six"});
  }
}
protected class MFString17 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Metadata nodes are converted into comments when children [ ] field is not available in parent node"});
  }
}
protected class MFString18 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_blank"});
  }
}
protected class MFString19 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MetadataExamples.html","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataExamplesIndex.html"});
  }
}
protected class MFString20 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MetadataExamples is a developmental file to define","EXTERNPROTO signatures in VRML 97 syntax","Example usage of Metadata nodes also included.","","Click text to view source"});
  }
}
protected class MFString21 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
}
