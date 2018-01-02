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
public class X3dHeaderPrototypeSyntaxExamples {
  public static void main(String[] args) {
    ConfigurationProperties.setShowDefaultAttributes(true);
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new X3dHeaderPrototypeSyntaxExamples().initialize().toFileJSON("../data/X3dHeaderPrototypeSyntaxExamples.new.json");
    }
    public X3DObject initialize() {
ProtoInstanceObject ProtoInstance0 = null;
ProtoInstanceObject ProtoInstance1 = null;
ProtoInstanceObject ProtoInstance2 = null;
ProtoInstanceObject ProtoInstance3 = null;
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("Geospatial").setLevel(1))
        .addComponent(new componentObject().setName("NURBS").setLevel(2))
        .addComponent(new componentObject().setName("Core").setLevel(2))
        .addComponent(new componentObject().setName("Navigation").setLevel(1))
        .addComponent(new componentObject().setName("Text").setLevel(1))
        .addMeta(new metaObject().setName("title").setContent("X3dHeaderPrototypeSyntaxExamples.x3d"))
        .addMeta(new metaObject().setName("description").setContent("X3D scene header and prototype syntax examples. This example header indicates that the content is XML encoded, follows the Interactive Profile and explicitly lists additional necessary components. The X3D header may also contain additional semantic information. Used for specification EXAMPLE excerpts in 19776:1 XML Encoding."))
        .addMeta(new metaObject().setName("created").setContent("14 October 2002"))
        .addMeta(new metaObject().setName("modified").setContent("7 May 2017"))
        .addMeta(new metaObject().setName("creator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("specificationSection").setContent("X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 4.3 XML file syntax"))
        .addMeta(new metaObject().setName("specificationUrl").setContent("http://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/concepts.html#XMLFileSyntax"))
        .addMeta(new metaObject().setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/X3dHeaderPrototypeSyntaxExamples.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new ExternProtoDeclareObject().setName("ViewPositionOrientation").setUrl(new MFStringObject(new MFString0().getArray()))
          .addField(new fieldObject().setType("SFBool").setName("enabled").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFBool").setName("traceEnabled").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFBool").setName("set_traceEnabled").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFVec3f").setName("position_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFRotation").setName("orientation_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("MFString").setName("outputViewpointString").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)))
        .addChild(new ProtoDeclareObject().setName("NewWorldInfoNode")
          .setProtoBody(new ProtoBodyObject()
            .addChild(new WorldInfoObject().setDEF("ExamplePrototypeBody"))))
        .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("NewWorldInfoNode"))
        .addChild(new ProtoDeclareObject().setName("EmissiveMaterial")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFColor").setName("onlyColor").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("1 0 0")))
          .setProtoBody(new ProtoBodyObject()
            .addComments(new CommentsBlock("Override default diffuseColor value 0.8 0.8 0.8"))
            .addChild(new MaterialObject().setDiffuseColor(new float[] {0f,0f,0f})
              .addComments(new CommentsBlock("Connect emissiveColor field of current node to onlyColor field of parent ProtoDeclare."))
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("emissiveColor").setProtoField("onlyColor"))))))
        .addChild(new ProtoDeclareObject().setName("ShiftGroupUp2m")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("MFNode").setName("children").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new GroupObject().setDEF("DefaultNodeValue").setBboxSize(new float[] {2f,2f,2f})
                .addComments(new CommentsBlock("Authors need to override this node when creating the ProtoInstance fieldValue name=\"children\"")))))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject().setTranslation(new float[] {0f,2f,0f})
              .addChild(new GroupObject()
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("children").setProtoField("children")))))))
        .addChild(ProtoInstance1 = new ProtoInstanceObject().setName("ShiftGroupUp2m"))
        .addComments(new CommentsBlock("===================="))
        .addChild(new ViewpointObject().setDEF("ExampleSingleElement").setDescription("Hello syntax"))
        .addChild(new GroupObject().setDEF("ExampleChildElement")
          .addChild(new ShapeObject()
            .setGeometry(new BoxObject())
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.6f,0.4f,0.2f})))))
        .addChild(new TransformObject().setDEF("TransformExampleUSE").setRotation(new float[] {0f,1f,0f,0.78f}).setTranslation(new float[] {0f,2.5f,0f})
          .addChild(new GroupObject().setUSE("ExampleChildElement")))
        .addChild(new CollisionObject()
          .setProxy(new ShapeObject()
            .addComments(new CommentsBlock("note that Collision proxy Shape is not rendered"))
            .addComments(new CommentsBlock("alternative: Text string='\"He said, \\&quot;Immel did it!\\&quot;\"'"))
            .setGeometry(new TextObject().setString(new MFStringObject(new MFString1().getArray())))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject())))
          .addChild(new GroupObject().setUSE("ExampleChildElement")))
        .addChild(new TransformObject().setTranslation(new float[] {0f,-2.5f,0f})
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(ProtoInstance2 = new ProtoInstanceObject().setName("EmissiveMaterial")))
            .setGeometry(new TextObject().setString(new MFStringObject(new MFString2().getArray()))
              .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString3().getArray())).setSize(0.6f)))))
        .addChild(ProtoInstance3 = new ProtoInstanceObject().setName("ViewPositionOrientation"))
        .addChild(new TimeSensorObject().setDEF("Clock").setCycleInterval(4d).setLoop(true))
        .addChild(new OrientationInterpolatorObject().setDEF("Spinner").setKey(new MFFloatObject(new MFFloat4().getArray())).setKeyValue(new MFRotationObject(new MFRotation5().getArray())))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("Clock").setToField("set_fraction").setToNode("Spinner"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Spinner").setToField("rotation").setToNode("TransformExampleUSE"))
        .addChild(new InlineObject().setDEF("someInline").setUrl(new MFStringObject(new MFString6().getArray())))
        .addChild(new IMPORTObject().setAS("someInlineRoot").setImportedDEF("someName").setInlineDEF("someInline"))
        .addChild(new PositionInterpolatorObject().setDEF("StayInPlace").setKey(new MFFloatObject(new MFFloat7().getArray())).setKeyValue(new MFVec3fObject(new MFVec3f8().getArray())))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("Clock").setToField("set_fraction").setToNode("StayInPlace"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("StayInPlace").setToField("set_translation").setToNode("someInlineRoot")))      ;
ProtoInstance2
                .addFieldValue(new fieldValueObject().setName("onlyColor").setValue("0.2 0.6 0.6"));
ProtoInstance3
          .addFieldValue(new fieldValueObject().setName("enabled").setValue("true"));
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation".replaceAll("\"", "\\\""),"https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation".replaceAll("\"", "\\\""),"../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation".replaceAll("\"", "\\\""),"https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation".replaceAll("\"", "\\\"")});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"He said, \"Immel did it!\"".replaceAll("\"", "\\\"")});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"X3D Header Prototype syntax examples".replaceAll("\"", "\\\""),"(view console for EXTERNPROTO output)".replaceAll("\"", "\\\"")});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE".replaceAll("\"", "\\\""),"MIDDLE".replaceAll("\"", "\\\"")});
  }
}
protected class MFFloat4 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation5 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,1f,0f,0f,0f,1f,0f,3.14159f,0f,1f,0f,6.28318f});
  }
}
protected class MFString6 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"someUrl.x3d".replaceAll("\"", "\\\""),"http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/someUrl.x3d".replaceAll("\"", "\\\"")});
  }
}
protected class MFFloat7 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,1f});
  }
}
protected class MFVec3f8 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,0f,0f,0f});
  }
}
}
