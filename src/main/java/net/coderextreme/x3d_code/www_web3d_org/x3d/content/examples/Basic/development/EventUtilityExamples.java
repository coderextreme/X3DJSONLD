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
public class EventUtilityExamples {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new EventUtilityExamples().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/development/EventUtilityExamples.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("EventUtilityExamples.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Event utility node examples for boolean filtering and other event utility nodes."))
        .addMeta(new metaObject().setName("creator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("3 November 2002"))
        .addMeta(new metaObject().setName("modified").setContent("20 January 2020"))
        .addMeta(new metaObject().setName("subject").setContent("BooleanFilter BooleanToggle BooleanTrigger IntegerTrigger TimeTrigger"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityExamples.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addComments(new CommentsBlock("========================================"))
        .addComments(new CommentsBlock("ExternProtoDeclare definitions are used here only for language development - do not copy into other scenes!"))
        .addComments(new CommentsBlock("ExternProtoDeclare node support is provided either by X3D-compliant browser or X3dToVrml97.xslt ExternProtoDeclare definitions."))
        .addComments(new CommentsBlock("========================================"))
        .addChild(new WorldInfoObject().setTitle("EventUtilityExamples.x3d"))
        .addChild(new ExternProtoDeclareObject().setName("BooleanFilter").setAppinfo("BooleanFilter selectively passes true false or negated events.").setUrl(new MFStringObject(new MFString0().getArray()))
          .addField(new fieldObject().setType("SFBool").setName("set_boolean").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("set_boolean is the input value to be filtered."))
          .addField(new fieldObject().setType("SFBool").setName("inputTrue").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("inputTrue only passes a true value when set_boolean input is true."))
          .addField(new fieldObject().setType("SFBool").setName("inputFalse").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("inputFalse only passes a false value when set_boolean is false."))
          .addField(new fieldObject().setType("SFBool").setName("inputNegate").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("inputNegate provides opposite value by negating set_boolean input.")))
        .addComments(new CommentsBlock("========================================"))
        .addChild(new ExternProtoDeclareObject().setName("BooleanToggle").setAppinfo("BooleanToggle maintains state and negates output when a true input is provided.").setUrl(new MFStringObject(new MFString1().getArray()))
          .addField(new fieldObject().setType("SFBool").setName("set_boolean").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("If set_boolean input is true toggle state."))
          .addField(new fieldObject().setType("SFBool").setName("set_toggle").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("Reset persistent state value."))
          .addField(new fieldObject().setType("SFBool").setName("toggle").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Persistent state value that gets toggled or reset."))
          .addField(new fieldObject().setType("SFBool").setName("toggle_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Output toggled persistent state value."))
          .addComments(new CommentsBlock("warning: toggle depends on exposedField functionality in Script node, not compatible with VRML 97. implemented as inputOnly/initializeOnly/outputOnly triplet.")))
        .addComments(new CommentsBlock("========================================"))
        .addChild(new ExternProtoDeclareObject().setName("BooleanTrigger").setAppinfo("BooleanTrigger converts time events to boolean true events.").setUrl(new MFStringObject(new MFString2().getArray()))
          .addField(new fieldObject().setType("SFTime").setName("set_triggerTime").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("set_triggerTime provides input time event typical event sent is TouchSensor touchTime."))
          .addField(new fieldObject().setType("SFBool").setName("triggerTrue").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("triggerTrue outputs a true value whenever a triggerTime event is received.")))
        .addComments(new CommentsBlock("========================================"))
        .addChild(new ExternProtoDeclareObject().setName("IntegerTrigger").setAppinfo("IntegerTrigger converts boolean true or time input events to integer value (suitable for Switch node).").setUrl(new MFStringObject(new MFString3().getArray()))
          .addField(new fieldObject().setType("SFBool").setName("set_boolean").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("If set_boolean input is true trigger output of integer value."))
          .addField(new fieldObject().setType("SFInt32").setName("set_integerKey").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("Resets value used for output when triggered later."))
          .addField(new fieldObject().setType("SFInt32").setName("integerKey").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("integerKey is value for output when triggered."))
          .addField(new fieldObject().setType("SFInt32").setName("integerKey_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Reports change in integerKey value."))
          .addField(new fieldObject().setType("SFInt32").setName("triggerValue").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("triggerValue provides integer event output matching integerKey when true set_boolean received.")))
        .addComments(new CommentsBlock("========================================"))
        .addChild(new ExternProtoDeclareObject().setName("TimeTrigger").setAppinfo("TimeTrigger converts boolean true events to time events.").setUrl(new MFStringObject(new MFString4().getArray()))
          .addField(new fieldObject().setType("SFBool").setName("set_boolean").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("If set_boolean input is true trigger output time value."))
          .addField(new fieldObject().setType("SFTime").setName("triggerTime").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("triggerTime is output time event sent when set_boolean input is true.")))
        .addComments(new CommentsBlock("========================================"))
        .addChild(new GroupObject()
          .addChild(new TransformObject().setTranslation(new float[] {0f,3f,0f})
            .addChild(new AnchorObject().setDescription("Click for BooleanFilter example").setParameter(new MFStringObject(new MFString5().getArray())).setUrl(new MFStringObject(new MFString6().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.6f,0.6f,0.2f})))
                .setGeometry(new TextObject().setString(new MFStringObject(new MFString7().getArray()))
                  .setFontStyle(new FontStyleObject().setDEF("TextFont").setJustify(new MFStringObject(new MFString8().getArray())).setSize(0.8f).setStyle("BOLD"))))))
          .addChild(new TransformObject().setTranslation(new float[] {0f,1.5f,0f})
            .addChild(new AnchorObject().setDescription("Click for BooleanToggle example").setParameter(new MFStringObject(new MFString9().getArray())).setUrl(new MFStringObject(new MFString10().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.6f,0.6f,0.2f})))
                .setGeometry(new TextObject().setString(new MFStringObject(new MFString11().getArray()))
                  .setFontStyle(new FontStyleObject().setUSE("TextFont"))))))
          .addChild(new TransformObject()
            .addChild(new AnchorObject().setDescription("Click for BooleanTrigger example").setParameter(new MFStringObject(new MFString12().getArray())).setUrl(new MFStringObject(new MFString13().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.6f,0.6f,0.2f})))
                .setGeometry(new TextObject().setString(new MFStringObject(new MFString14().getArray()))
                  .setFontStyle(new FontStyleObject().setUSE("TextFont"))))))
          .addChild(new TransformObject().setTranslation(new float[] {0f,-1.5f,0f})
            .addChild(new AnchorObject().setDescription("Click for IntegerTrigger example").setParameter(new MFStringObject(new MFString15().getArray())).setUrl(new MFStringObject(new MFString16().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.6f,0.6f,0.2f})))
                .setGeometry(new TextObject().setString(new MFStringObject(new MFString17().getArray()))
                  .setFontStyle(new FontStyleObject().setUSE("TextFont"))))))
          .addChild(new TransformObject().setDEF("TimeTriggerTransform").setTranslation(new float[] {0f,-3f,0f})
            .addChild(new TouchSensorObject().setDEF("TimeTriggerTouchSensor").setDescription("Click forTimeTrigger example"))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.6f,0.6f,0.2f})))
              .setGeometry(new TextObject().setString(new MFStringObject(new MFString18().getArray()))
                .setFontStyle(new FontStyleObject().setUSE("TextFont")))))
          .addChild(new TimeTriggerObject().setDEF("TimeTriggerNode"))
          .addChild(new TimeSensorObject().setDEF("TimeTriggerTimeSensor").setCycleInterval(2d))
          .addChild(new OrientationInterpolatorObject().setDEF("TimeTriggerOrientationInterpolator").setKey(new MFFloatObject(new MFFloat19().getArray())).setKeyValue(new MFRotationObject(new MFRotation20().getArray())))
          .addChild(new ROUTEObject().setFromField("isActive").setFromNode("TimeTriggerTouchSensor").setToField("set_boolean").setToNode("TimeTriggerNode"))
          .addChild(new ROUTEObject().setFromField("triggerTime").setFromNode("TimeTriggerNode").setToField("startTime").setToNode("TimeTriggerTimeSensor"))
          .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("TimeTriggerTimeSensor").setToField("set_fraction").setToNode("TimeTriggerOrientationInterpolator"))
          .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("TimeTriggerOrientationInterpolator").setToField("set_rotation").setToNode("TimeTriggerTransform"))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"EventUtilityPrototypes.x3d#BooleanFilter","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d#BooleanFilter","EventUtilityPrototypes.wrl#BooleanFilter","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.wrl#BooleanFilter"});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"EventUtilityPrototypes.x3d#BooleanToggle","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d#BooleanToggle","EventUtilityPrototypes.wrl#BooleanToggle","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.wrl#BooleanToggle"});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"EventUtilityPrototypes.x3d#BooleanTrigger","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d#BooleanTrigger","EventUtilityPrototypes.wrl#BooleanTrigger","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.wrl#BooleanTrigger"});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"EventUtilityPrototypes.x3d#IntegerTrigger","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d#IntegerTrigger","EventUtilityPrototypes.wrl#IntegerTrigger","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.wrl#IntegerTrigger"});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"EventUtilityPrototypes.x3d#TimeTrigger","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d#TimeTrigger","EventUtilityPrototypes.wrl#TimeTrigger","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.wrl#TimeTrigger"});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_blank"});
  }
}
protected class MFString6 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../../Savage/Tools/HeadsUpDisplays/CrossHairExample.x3d","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairExample.x3d","../../Savage/Tools/HeadsUpDisplays/CrossHairExample.wrl","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairExample.wrl"});
  }
}
protected class MFString7 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"BooleanFilter example"});
  }
}
protected class MFString8 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFString9 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_blank"});
  }
}
protected class MFString10 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../../Savage/Tools/HeadsUpDisplays/CrossHairExample.x3d","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairExample.x3d","../../Savage/Tools/HeadsUpDisplays/CrossHairExample.wrl","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairExample.wrl"});
  }
}
protected class MFString11 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"BooleanToggle example"});
  }
}
protected class MFString12 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_blank"});
  }
}
protected class MFString13 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../../Savage/Tools/HeadsUpDisplays/CrossHairExample.x3d","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairExample.x3d","../../Savage/Tools/HeadsUpDisplays/CrossHairExample.wrl","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairExample.wrl"});
  }
}
protected class MFString14 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"BooleanTrigger example"});
  }
}
protected class MFString15 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_blank"});
  }
}
protected class MFString16 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../../Savage/Tools/Animation/MaterialChoiceExample.x3d","https://savage.nps.edu/Savage/Tools/Animation/MaterialChoiceExample.x3d","../../Savage/Tools/Animation/MaterialChoiceExample.wrl","https://savage.nps.edu/Savage/Tools/Animation/MaterialChoiceExample.wrl"});
  }
}
protected class MFString17 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"IntegerTrigger example"});
  }
}
protected class MFString18 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"TimeTrigger example"});
  }
}
protected class MFFloat19 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation20 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,1f,0f,0f,0f,1f,0f,3.14159f,0f,1f,0f,6.2432f});
  }
}
}
