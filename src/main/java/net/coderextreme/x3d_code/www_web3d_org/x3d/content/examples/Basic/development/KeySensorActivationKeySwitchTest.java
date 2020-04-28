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
public class KeySensorActivationKeySwitchTest {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new KeySensorActivationKeySwitchTest().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/development/KeySensorActivationKeySwitchTest.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("KeySensorActivationKeySwitchTest.x3d"))
        .addMeta(new metaObject().setName("description").setContent("A simple scene to show KeySensor functionality using Text nodes."))
        .addMeta(new metaObject().setName("creator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("22 June 2001"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("warning").setContent("This doesn't work because there is no KeySensor implementation yet! Prototype script (written in Java) or native node support for KeySensor is needed."))
        .addMeta(new metaObject().setName("warning").setContent("enabled accessType needs to be changed to exposedField once supported by Script capabilities"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/x3d/specification-2000july/part1/nodesDef.html#KeySensor"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/x3d/sai/javadoc/org/web3d/x3d/sai/Core/KeySensor.html"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/KeySensorActivationKeySwitchTest.x3d"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/x3d/content/examples/Basic/ConformanceNist/Sensors/Keyboard/KeySensorActivationKeySwitchTest.x3d"))
        .addMeta(new metaObject().setName("subject").setContent("KeySensor"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addComments(new CommentsBlock("The KeySensor prototype can be omitted if native-node Keysensor support is provided by the VRML browser."))
        .addChild(new WorldInfoObject().setTitle("KeySensorActivationKeySwitchTest.x3d"))
        .addChild(new ProtoDeclareObject().setName("KeySensor")
          .setProtoInterface(new ProtoInterfaceObject()
            .addComments(new CommentsBlock("warning: enabled needs to become an exposedField once Scripts support exposedField"))
            .addField(new fieldObject().setType("SFBool").setName("enabled").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("true"))
            .addField(new fieldObject().setType("SFBool").setName("set_enabled").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType("SFBool").setName("enabled_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
            .addField(new fieldObject().setType("SFBool").setName("isActive").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
            .addField(new fieldObject().setType("SFInt32").setName("keyPress").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
            .addField(new fieldObject().setType("SFInt32").setName("keyRelease").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
            .addField(new fieldObject().setType("SFInt32").setName("actionKeyPress").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
            .addField(new fieldObject().setType("SFInt32").setName("actionKeyRelease").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
            .addField(new fieldObject().setType("SFBool").setName("altKey").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
            .addField(new fieldObject().setType("SFBool").setName("controlKey").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
            .addField(new fieldObject().setType("SFBool").setName("shiftKey").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)))
          .setProtoBody(new ProtoBodyObject()
            .addComments(new CommentsBlock("First node in prototype indicates node type, use Group so that this sensor is ChildNodeType."))
            .addChild(new GroupObject()
              .addChild(new ScriptObject().setDEF("KeySensorScript")
                .addField(new fieldObject().setType("SFBool").setName("altKey").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .addField(new fieldObject().setType("SFInt32").setName("keyPress").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .addField(new fieldObject().setType("SFBool").setName("set_enabled").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
                .addField(new fieldObject().setType("SFInt32").setName("keyRelease").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .addField(new fieldObject().setType("SFBool").setName("enabled").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
                .addField(new fieldObject().setType("SFBool").setName("shiftKey").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .addField(new fieldObject().setType("SFInt32").setName("actionKeyRelease").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .addField(new fieldObject().setType("SFBool").setName("isActive").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .addField(new fieldObject().setType("SFInt32").setName("actionKeyPress").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .addField(new fieldObject().setType("SFBool").setName("enabled_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .addField(new fieldObject().setType("SFBool").setName("controlKey").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("enabled").setProtoField("enabled"))
                  .addConnect(new connectObject().setNodeField("set_enabled").setProtoField("set_enabled"))
                  .addConnect(new connectObject().setNodeField("enabled_changed").setProtoField("enabled_changed"))
                  .addConnect(new connectObject().setNodeField("isActive").setProtoField("isActive"))
                  .addConnect(new connectObject().setNodeField("keyPress").setProtoField("keyPress"))
                  .addConnect(new connectObject().setNodeField("keyRelease").setProtoField("keyRelease"))
                  .addConnect(new connectObject().setNodeField("actionKeyPress").setProtoField("actionKeyPress"))
                  .addConnect(new connectObject().setNodeField("actionKeyRelease").setProtoField("actionKeyRelease"))
                  .addConnect(new connectObject().setNodeField("altKey").setProtoField("altKey"))
                  .addConnect(new connectObject().setNodeField("controlKey").setProtoField("controlKey"))
                  .addConnect(new connectObject().setNodeField("shiftKey").setProtoField("shiftKey")))
                .setSourceCode("ecmascript:\n"+
"\n"+
"// Native support for KeySensor node\n"+
"// or keyboard-access code needed!")))))
        .addComments(new CommentsBlock("============================================"))
        .addComments(new CommentsBlock("Enabling this KeySensor (from TouchSensor.isActive) disables all other KeySensors."))
        .addChild(new KeySensorObject().setDEF("SingleKeySensor").setEnabled(false))
        .addChild(new BillboardObject()
          .addChild(new TransformObject().setTranslation(new float[] {0f,2f,0f})
            .addChild(new ShapeObject()
              .setGeometry(new TextObject().setString(new MFStringObject(new MFString0().getArray()))
                .setFontStyle(new FontStyleObject().setDEF("MiddleMiddle").setJustify(new MFStringObject(new MFString1().getArray()))))
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.9f,0.9f,0.4f}))))
            .addChild(new TouchSensorObject().setDEF("StartMessageTouched").setDescription("Touch this text to enable KeySensor activation keys then press activation keys to test"))
            .addChild(new ROUTEObject().setFromField("isOver").setFromNode("StartMessageTouched").setToField("enabled").setToNode("SingleKeySensor")))
          .addChild(new TransformObject().setTranslation(new float[] {0f,-1f,0f})
            .addChild(new SwitchObject().setDEF("ActivationKeyMessageSwitch").setWhichChoice(0)
              .addComments(new CommentsBlock("ROUTE is not treated as a selectable child of Switch"))
              .addChild(new ROUTEObject().setFromField("actionKeyPress").setFromNode("SingleKeySensor").setToField("whichChoice").setToNode("ActivationKeyMessageSwitch"))
              .addChild(new ShapeObject().setDEF("Zero")
                .setGeometry(new TextObject().setString(new MFStringObject(new MFString2().getArray()))
                  .setFontStyle(new FontStyleObject().setUSE("MiddleMiddle")))
                .setAppearance(new AppearanceObject().setDEF("SelectionAppearance")
                  .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0f,1f,0f}))))
              .addChild(new ShapeObject().setDEF("One")
                .setGeometry(new TextObject().setString(new MFStringObject(new MFString3().getArray()))
                  .setFontStyle(new FontStyleObject().setUSE("MiddleMiddle")))
                .setAppearance(new AppearanceObject().setUSE("SelectionAppearance")))
              .addChild(new ShapeObject().setDEF("Two")
                .setGeometry(new TextObject().setString(new MFStringObject(new MFString4().getArray()))
                  .setFontStyle(new FontStyleObject().setUSE("MiddleMiddle")))
                .setAppearance(new AppearanceObject().setUSE("SelectionAppearance")))
              .addChild(new ShapeObject().setDEF("Three")
                .setGeometry(new TextObject().setString(new MFStringObject(new MFString5().getArray()))
                  .setFontStyle(new FontStyleObject().setUSE("MiddleMiddle")))
                .setAppearance(new AppearanceObject().setUSE("SelectionAppearance")))
              .addChild(new ShapeObject().setDEF("Four")
                .setGeometry(new TextObject().setString(new MFStringObject(new MFString6().getArray()))
                  .setFontStyle(new FontStyleObject().setUSE("MiddleMiddle")))
                .setAppearance(new AppearanceObject().setUSE("SelectionAppearance")))
              .addChild(new ShapeObject().setDEF("Five")
                .setGeometry(new TextObject().setString(new MFStringObject(new MFString7().getArray()))
                  .setFontStyle(new FontStyleObject().setUSE("MiddleMiddle")))
                .setAppearance(new AppearanceObject().setUSE("SelectionAppearance")))
              .addChild(new ShapeObject().setDEF("Six")
                .setGeometry(new TextObject().setString(new MFStringObject(new MFString8().getArray()))
                  .setFontStyle(new FontStyleObject().setUSE("MiddleMiddle")))
                .setAppearance(new AppearanceObject().setUSE("SelectionAppearance")))
              .addChild(new ShapeObject().setDEF("Seven")
                .setGeometry(new TextObject().setString(new MFStringObject(new MFString9().getArray()))
                  .setFontStyle(new FontStyleObject().setUSE("MiddleMiddle")))
                .setAppearance(new AppearanceObject().setUSE("SelectionAppearance")))
              .addChild(new ShapeObject().setDEF("Eight")
                .setGeometry(new TextObject().setString(new MFStringObject(new MFString10().getArray()))
                  .setFontStyle(new FontStyleObject().setUSE("MiddleMiddle")))
                .setAppearance(new AppearanceObject().setUSE("SelectionAppearance")))
              .addChild(new ShapeObject().setDEF("Nine")
                .setGeometry(new TextObject().setString(new MFStringObject(new MFString11().getArray()))
                  .setFontStyle(new FontStyleObject().setUSE("MiddleMiddle")))
                .setAppearance(new AppearanceObject().setUSE("SelectionAppearance")))
              .addChild(new ShapeObject().setDEF("Ten")
                .setGeometry(new TextObject().setString(new MFStringObject(new MFString12().getArray()))
                  .setFontStyle(new FontStyleObject().setUSE("MiddleMiddle")))
                .setAppearance(new AppearanceObject().setUSE("SelectionAppearance")))
              .addChild(new ShapeObject().setDEF("Eleven")
                .setGeometry(new TextObject().setString(new MFStringObject(new MFString13().getArray()))
                  .setFontStyle(new FontStyleObject().setUSE("MiddleMiddle")))
                .setAppearance(new AppearanceObject().setUSE("SelectionAppearance")))
              .addChild(new ShapeObject().setDEF("Twelve")
                .setGeometry(new TextObject().setString(new MFStringObject(new MFString14().getArray()))
                  .setFontStyle(new FontStyleObject().setUSE("MiddleMiddle")))
                .setAppearance(new AppearanceObject().setUSE("SelectionAppearance")))
              .addChild(new ShapeObject().setDEF("Thirteen")
                .setGeometry(new TextObject().setString(new MFStringObject(new MFString15().getArray()))
                  .setFontStyle(new FontStyleObject().setUSE("MiddleMiddle")))
                .setAppearance(new AppearanceObject().setUSE("SelectionAppearance")))
              .addChild(new ShapeObject().setDEF("Fourteen")
                .setGeometry(new TextObject().setString(new MFStringObject(new MFString16().getArray()))
                  .setFontStyle(new FontStyleObject().setUSE("MiddleMiddle")))
                .setAppearance(new AppearanceObject().setUSE("SelectionAppearance")))
              .addChild(new ShapeObject().setDEF("Fifteen")
                .setGeometry(new TextObject().setString(new MFStringObject(new MFString17().getArray()))
                  .setFontStyle(new FontStyleObject().setUSE("MiddleMiddle")))
                .setAppearance(new AppearanceObject().setUSE("SelectionAppearance")))
              .addChild(new ShapeObject().setDEF("Sixteen")
                .setGeometry(new TextObject().setString(new MFStringObject(new MFString18().getArray()))
                  .setFontStyle(new FontStyleObject().setUSE("MiddleMiddle")))
                .setAppearance(new AppearanceObject().setUSE("SelectionAppearance")))
              .addChild(new ShapeObject().setDEF("Seventeen")
                .setGeometry(new TextObject().setString(new MFStringObject(new MFString19().getArray()))
                  .setFontStyle(new FontStyleObject().setUSE("MiddleMiddle")))
                .setAppearance(new AppearanceObject().setUSE("SelectionAppearance")))
              .addChild(new ShapeObject().setDEF("Eighteen")
                .setGeometry(new TextObject().setString(new MFStringObject(new MFString20().getArray()))
                  .setFontStyle(new FontStyleObject().setUSE("MiddleMiddle")))
                .setAppearance(new AppearanceObject().setUSE("SelectionAppearance")))
              .addChild(new ShapeObject().setDEF("Nineteen")
                .setGeometry(new TextObject().setString(new MFStringObject(new MFString21().getArray()))
                  .setFontStyle(new FontStyleObject().setUSE("MiddleMiddle")))
                .setAppearance(new AppearanceObject().setUSE("SelectionAppearance")))
              .addChild(new ShapeObject().setDEF("Twenty")
                .setGeometry(new TextObject().setString(new MFStringObject(new MFString22().getArray()))
                  .setFontStyle(new FontStyleObject().setUSE("MiddleMiddle")))
                .setAppearance(new AppearanceObject().setUSE("SelectionAppearance")))))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Touch this text to enable","KeySensor activation keys then","press activation keys to test"});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"No activation keypress sensed...."});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"F1"});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"F2"});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"F3"});
  }
}
protected class MFString6 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"F4"});
  }
}
protected class MFString7 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"F5"});
  }
}
protected class MFString8 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"F6"});
  }
}
protected class MFString9 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"F7"});
  }
}
protected class MFString10 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"F8"});
  }
}
protected class MFString11 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"F9"});
  }
}
protected class MFString12 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"F10"});
  }
}
protected class MFString13 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"F11"});
  }
}
protected class MFString14 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"F12"});
  }
}
protected class MFString15 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"13: HOME"});
  }
}
protected class MFString16 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"14: END"});
  }
}
protected class MFString17 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"15: LEFT"});
  }
}
protected class MFString18 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"16: RIGHT"});
  }
}
protected class MFString19 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"17: UP"});
  }
}
protected class MFString20 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"18: DOWN"});
  }
}
protected class MFString21 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"19: PGUP"});
  }
}
protected class MFString22 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"20: PGDN"});
  }
}
}
