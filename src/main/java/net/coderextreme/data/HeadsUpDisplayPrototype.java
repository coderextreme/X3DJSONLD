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
public class HeadsUpDisplayPrototype {
  public static void main(String[] args) {
    ConfigurationProperties.setShowDefaultAttributes(true);
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new HeadsUpDisplayPrototype().initialize().toFileJSON("../data/HeadsUpDisplayPrototype.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("HeadsUpDisplayPrototype.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Generic Heads Up Display (HUD) prototype to keep children on screen."))
        .addMeta(new metaObject().setName("creator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("9 November 2003"))
        .addMeta(new metaObject().setName("modified").setContent("14 January 2014"))
        .addMeta(new metaObject().setName("subject").setContent("HUD Heads Up Display"))
        .addMeta(new metaObject().setName("identifier").setContent("https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayPrototype.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../../license.html")))
      .setScene(new SceneObject()
        .addChild(new ProtoDeclareObject().setName("HeadsUpDisplay").setAppinfo("HeadsUpDisplay positions child geometry in screen space, movable by the user")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("MFNode").setName("children").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Displayed subscene positioned as a HUD.")
              .addComments(new CommentsBlock("default is null array of nodes")))
            .addField(new fieldObject().setType("MFNode").setName("dragChildren").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Additional HUD geometry which can be touched and dragged for repositioning. If this geometry goes offscreen (perhaps due to screen resizing) then it snaps back to original position.")
              .addComments(new CommentsBlock("default is null array of nodes")))
            .addField(new fieldObject().setType("SFVec3f").setName("locationOffset").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Modified screen location and distance (for size).").setValue("-2 -2 0"))
            .addField(new fieldObject().setType("SFBool").setName("traceEnabled").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Enable/disable console output for troubleshooting.").setValue("false")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addChild(new ProximitySensorObject().setDEF("WhereSensor").setSize(new float[] {1000000000f,1000000000f,1000000000f})
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("center").setProtoField("locationOffset"))))
              .addChild(new TransformObject().setDEF("FixedLocation")
                .addChild(new TransformObject().setDEF("MovableLocation")
                  .addChild(new TransformObject().setDEF("LocationOffset")
                    .setIS(new ISObject()
                      .addConnect(new connectObject().setNodeField("translation").setProtoField("locationOffset")))
                    .addChild(new TransformObject().setTranslation(new float[] {0f,0f,-10f})
                      .addChild(new GroupObject()
                        .setIS(new ISObject()
                          .addConnect(new connectObject().setNodeField("children").setProtoField("children"))))
                      .addChild(new GroupObject().setDEF("PlaneMovementSensorGroup")
                        .addChild(new GroupObject().setDEF("DragGeometry")
                          .setIS(new ISObject()
                            .addConnect(new connectObject().setNodeField("children").setProtoField("dragChildren"))))
                        .addChild(new PlaneSensorObject().setDEF("PlaneMovementSensor").setDescription("click and drag to move interface")
                          .setIS(new ISObject()
                            .addConnect(new connectObject().setNodeField("offset").setProtoField("locationOffset"))))
                        .addChild(new VisibilitySensorObject().setDEF("MovementVisibilitySensor"))
                        .addChild(new ScriptObject().setDEF("VisibilityControlScript")
                          .addField(new fieldObject().setType("SFBool").setName("traceEnabled").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
                          .addField(new fieldObject().setType("SFBool").setName("isVisible").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("true"))
                          .addField(new fieldObject().setType("SFVec3f").setName("planeSensorTranslation").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0"))
                          .addField(new fieldObject().setType("SFBool").setName("setIsVisible").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
                          .addField(new fieldObject().setType("SFBool").setName("setPlaneSensorIsActive").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
                          .addField(new fieldObject().setType("SFVec3f").setName("setPlaneSensorTranslation").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
                          .addField(new fieldObject().setType("SFVec3f").setName("translationChanged").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                          .addField(new fieldObject().setType("SFVec3f").setName("translationOffsetChanged").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                          .setIS(new ISObject()
                            .addConnect(new connectObject().setNodeField("traceEnabled").setProtoField("traceEnabled")))
                          .setSourceCode("ecmascript:\n"+
"\n"+
"function tracePrint (text)\n"+
"{\n"+
"	if (traceEnabled) Browser.print ('[HeadsUpDisplayPrototype VisibilityControlScript] ' + text);\n"+
"}\n"+
"function setIsVisible (value, timeStamp)\n"+
"{\n"+
"	isVisible = value;\n"+
"	tracePrint('isVisible=' + value);\n"+
"}\n"+
"function setPlaneSensorIsActive (value, timeStamp)\n"+
"{\n"+
"	tracePrint('PlaneSensor isActive=' + value);\n"+
"\n"+
"	if (value == false)\n"+
"	{\n"+
"		tracePrint('planeSensorTranslation=' + planeSensorTranslation);\n"+
"		if (isVisible)\n"+
"		{\n"+
"			translationChanged = planeSensorTranslation;\n"+
"		}\n"+
"		else\n"+
"		{\n"+
"			// fell off screen, reset to center\n"+
"			translationChanged = new SFVec3f(0, 0, 0);\n"+
"			translationOffsetChanged  = new SFVec3f(0, 0, 0);\n"+
"		}\n"+
"	}\n"+
"}\n"+
"function setPlaneSensorTranslation (value, timeStamp)\n"+
"{\n"+
"	planeSensorTranslation = value;\n"+
"	tracePrint('planeSensorTranslation=' + value);\n"+
"}"))
                        .addChild(new ROUTEObject().setFromField("isActive").setFromNode("PlaneMovementSensor").setToField("setPlaneSensorIsActive").setToNode("VisibilityControlScript"))
                        .addChild(new ROUTEObject().setFromField("translation_changed").setFromNode("PlaneMovementSensor").setToField("setPlaneSensorTranslation").setToNode("VisibilityControlScript"))
                        .addChild(new ROUTEObject().setFromField("isActive").setFromNode("MovementVisibilitySensor").setToField("setIsVisible").setToNode("VisibilityControlScript")))))
                  .addChild(new ROUTEObject().setFromField("translation_changed").setFromNode("PlaneMovementSensor").setToField("set_translation").setToNode("MovableLocation"))
                  .addChild(new ROUTEObject().setFromField("translationChanged").setFromNode("VisibilityControlScript").setToField("set_translation").setToNode("MovableLocation"))
                  .addChild(new ROUTEObject().setFromField("translationOffsetChanged").setFromNode("VisibilityControlScript").setToField("set_offset").setToNode("PlaneMovementSensor"))))
              .addChild(new ROUTEObject().setFromField("position_changed").setFromNode("WhereSensor").setToField("set_translation").setToNode("FixedLocation"))
              .addChild(new ROUTEObject().setFromField("orientation_changed").setFromNode("WhereSensor").setToField("set_rotation").setToNode("FixedLocation")))))
        .addComments(new CommentsBlock("===================="))
        .addChild(new BackgroundObject().setGroundColor(new MFColorObject(new MFColor0().getArray())).setSkyColor(new MFColorObject(new MFColor1().getArray())))
        .addChild(new AnchorObject().setDescription("HeadsUpDisplayExample").setParameter(new MFStringObject(new MFString2().getArray())).setUrl(new MFStringObject(new MFString3().getArray()))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0f,1f,1f}).setEmissiveColor(new float[] {0f,1f,1f})))
            .setGeometry(new TextObject().setString(new MFStringObject(new MFString4().getArray()))
              .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString5().getArray())).setSize(0.8f))))))      ;
    return X3D0;
    }
protected class MFColor0 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0.1f,0.1f,0.3f});
  }
}
protected class MFColor1 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0.5f,0.5f,0.1f});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_blank"});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"HeadsUpDisplayExample.x3d","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayrExample.x3d","HeadsUpDisplayExample.wrl","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayExample.wrl"});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"HeadsUpDisplayPrototype.x3d","is a Prototype definition file.","","To see an example scene using this node","click this text to view","HeadsUpDisplayExample.x3d"});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
}
