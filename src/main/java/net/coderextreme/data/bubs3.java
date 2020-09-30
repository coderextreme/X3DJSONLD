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
public class bubs3 {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new bubs3().initialize().toFileJSON("../data/bubs3.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("bubs3.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("description").setContent("Tour around a prismatic sphere"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/bubs.x3d")))
      .setScene(new Scene()
        .addChild(new NavigationInfo().setType(new java.lang.String[] {"EXAMINE"}))
        .addChild(new Viewpoint().setPosition(new float[] {0f,0f,4f}).setOrientation(new float[] {1f,0f,0f,0f}).setDescription("Bubbles in action"))
        .addChild(new Background().setBackUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString0().getArray())).setBottomUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString1().getArray())).setFrontUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString2().getArray())).setLeftUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString3().getArray())).setRightUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString4().getArray())).setTopUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString5().getArray())).setSkyColor(new org.web3d.x3d.jsail.fields.MFColor(new MFColor6().getArray())).setTransparency(0f))
        .addChild(new Transform().setDEF("DECLBubble_bubbleA").setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
          .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
            .setGeometry(new Sphere().setRadius(0.25f))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {1f,0f,0f}).setTransparency(0.2f))))
          .addChild(new TimeSensor().setDEF("DECLBubble_bubbleA_bubbleClock").setCycleInterval(10d).setLoop(true))
          .addChild(new ROUTE().setFromNode("DECLBubble_bubbleA_bounce").setFromField("translation_changed").setToNode("DECLBubble_transform").setToField("set_translation"))
          .addChild(new ROUTE().setFromNode("DECLBubble_bubbleA_bounce").setFromField("scale_changed").setToNode("DECLBubble_transform").setToField("set_scale"))
          .addChild(new ROUTE().setFromNode("DECLBubble_bubbleA_bubbleClock").setFromField("fraction_changed").setToNode("DECLBubble_bubbleA_bounce").setToField("set_fraction"))
          .addX3DScript(new X3DScript().setDEF("DECLBubble_bubbleA_bounce")
            .addField(new field().setType("SFVec3f").setName("scale").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1 1 1"))
            .addField(new field().setType("SFVec3f").setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("SFVec3f").setName("velocity").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("SFVec3f").setName("scalvel").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("SFFloat").setName("set_fraction").setAccessType(field.ACCESSTYPE_INPUTONLY))))
        .addChild(new Transform().setDEF("DECLBubble_bubbleB").setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
          .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
            .setGeometry(new Sphere().setRadius(0.25f))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {1f,0f,0f}).setTransparency(0.2f))))
          .addChild(new TimeSensor().setDEF("DECLBubble_bubbleB_bubbleClock").setCycleInterval(10d).setLoop(true))
          .addChild(new ROUTE().setFromNode("DECLBubble_bubbleB_bounce").setFromField("translation_changed").setToNode("DECLBubble_transform").setToField("set_translation"))
          .addChild(new ROUTE().setFromNode("DECLBubble_bubbleB_bounce").setFromField("scale_changed").setToNode("DECLBubble_transform").setToField("set_scale"))
          .addChild(new ROUTE().setFromNode("DECLBubble_bubbleB_bubbleClock").setFromField("fraction_changed").setToNode("DECLBubble_bubbleB_bounce").setToField("set_fraction"))
          .addX3DScript(new X3DScript().setDEF("DECLBubble_bubbleB_bounce")
            .addField(new field().setType("SFVec3f").setName("scale").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1 1 1"))
            .addField(new field().setType("SFVec3f").setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("SFVec3f").setName("velocity").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("SFVec3f").setName("scalvel").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("SFFloat").setName("set_fraction").setAccessType(field.ACCESSTYPE_INPUTONLY))))
        .addChild(new Transform().setDEF("DECLBubble_bubbleC").setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
          .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
            .setGeometry(new Sphere().setRadius(0.25f))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {1f,0f,0f}).setTransparency(0.2f))))
          .addChild(new TimeSensor().setDEF("DECLBubble_bubbleC_bubbleClock").setCycleInterval(10d).setLoop(true))
          .addChild(new ROUTE().setFromNode("DECLBubble_bubbleC_bounce").setFromField("translation_changed").setToNode("DECLBubble_transform").setToField("set_translation"))
          .addChild(new ROUTE().setFromNode("DECLBubble_bubbleC_bounce").setFromField("scale_changed").setToNode("DECLBubble_transform").setToField("set_scale"))
          .addChild(new ROUTE().setFromNode("DECLBubble_bubbleC_bubbleClock").setFromField("fraction_changed").setToNode("DECLBubble_bubbleC_bounce").setToField("set_fraction"))
          .addX3DScript(new X3DScript().setDEF("DECLBubble_bubbleC_bounce")
            .addField(new field().setType("SFVec3f").setName("scale").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1 1 1"))
            .addField(new field().setType("SFVec3f").setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("SFVec3f").setName("velocity").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("SFVec3f").setName("scalvel").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("SFFloat").setName("set_fraction").setAccessType(field.ACCESSTYPE_INPUTONLY))))
        .addChild(new Transform().setDEF("DECLBubble_bubbleD").setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
          .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
            .setGeometry(new Sphere().setRadius(0.25f))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {1f,0f,0f}).setTransparency(0.2f))))
          .addChild(new TimeSensor().setDEF("DECLBubble_bubbleD_bubbleClock").setCycleInterval(10d).setLoop(true))
          .addChild(new ROUTE().setFromNode("DECLBubble_bubbleD_bounce").setFromField("translation_changed").setToNode("DECLBubble_transform").setToField("set_translation"))
          .addChild(new ROUTE().setFromNode("DECLBubble_bubbleD_bounce").setFromField("scale_changed").setToNode("DECLBubble_transform").setToField("set_scale"))
          .addChild(new ROUTE().setFromNode("DECLBubble_bubbleD_bubbleClock").setFromField("fraction_changed").setToNode("DECLBubble_bubbleD_bounce").setToField("set_fraction"))
          .addX3DScript(new X3DScript().setDEF("DECLBubble_bubbleD_bounce")
            .addField(new field().setType("SFVec3f").setName("scale").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1 1 1"))
            .addField(new field().setType("SFVec3f").setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("SFVec3f").setName("velocity").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("SFVec3f").setName("scalvel").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("SFFloat").setName("set_fraction").setAccessType(field.ACCESSTYPE_INPUTONLY)))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"});
  }
}
protected class MFString1 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"});
  }
}
protected class MFString2 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"});
  }
}
protected class MFString3 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"});
  }
}
protected class MFString4 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"});
  }
}
protected class MFString5 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"});
  }
}
protected class MFColor6 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0f,0f,0f});
  }
}
}
