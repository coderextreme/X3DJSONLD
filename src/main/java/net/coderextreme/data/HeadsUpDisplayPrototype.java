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
public class HeadsUpDisplayPrototype {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new HeadsUpDisplayPrototype().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/HeadsUpDisplayPrototype.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("HeadsUpDisplayPrototype.x3d"))
        .addMeta(new meta().setName("description").setContent("Generic Heads Up Display (HUD) prototype to keep children on screen."))
        .addMeta(new meta().setName("creator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("9 November 2003"))
        .addMeta(new meta().setName("modified").setContent("14 January 2014"))
        .addMeta(new meta().setName("subject").setContent("HUD Heads Up Display"))
        .addMeta(new meta().setName("identifier").setContent("https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayPrototype.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../../license.html")))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("HeadsUpDisplay").setAppinfo("HeadsUpDisplay positions child geometry in screen space, movable by the user")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("MFNode").setName("children").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Displayed subscene positioned as a HUD.")
              .addComments("default is null array of nodes"))
            .addField(new field().setType("MFNode").setName("dragChildren").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Additional HUD geometry which can be touched and dragged for repositioning. If this geometry goes offscreen (perhaps due to screen resizing) then it snaps back to original position.")
              .addComments("default is null array of nodes"))
            .addField(new field().setType("SFVec3f").setName("locationOffset").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Modified screen location and distance (for size).").setValue("-2 -2 0"))
            .addField(new field().setType("SFBool").setName("traceEnabled").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Enable/disable console output for troubleshooting.").setValue("false")))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new ProximitySensor().setDEF("WhereSensor").setSize(new float[] {1000000000f,1000000000f,1000000000f})
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("center").setProtoField("locationOffset"))))
              .addChild(new Transform().setDEF("FixedLocation")
                .addChild(new Transform().setDEF("MovableLocation")
                  .addChild(new Transform().setDEF("LocationOffset")
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField("translation").setProtoField("locationOffset")))
                    .addChild(new Transform().setTranslation(new float[] {0f,0f,-10f})
                      .addChild(new Group()
                        .setIS(new IS()
                          .addConnect(new connect().setNodeField("children").setProtoField("children"))))
                      .addChild(new Group().setDEF("PlaneMovementSensorGroup")
                        .addChild(new Group().setDEF("DragGeometry")
                          .setIS(new IS()
                            .addConnect(new connect().setNodeField("children").setProtoField("dragChildren"))))
                        .addChild(new PlaneSensor().setDEF("PlaneMovementSensor").setDescription("click and drag to move interface")
                          .setIS(new IS()
                            .addConnect(new connect().setNodeField("offset").setProtoField("locationOffset"))))
                        .addChild(new VisibilitySensor().setDEF("MovementVisibilitySensor"))
                        .addChild(new Script().setDEF("VisibilityControlScript")
                          .addField(new field().setType("SFBool").setName("traceEnabled").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
                          .addField(new field().setType("SFBool").setName("isVisible").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("true"))
                          .addField(new field().setType("SFVec3f").setName("planeSensorTranslation").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0"))
                          .addField(new field().setType("SFBool").setName("setIsVisible").setAccessType(field.ACCESSTYPE_INPUTONLY))
                          .addField(new field().setType("SFBool").setName("setPlaneSensorIsActive").setAccessType(field.ACCESSTYPE_INPUTONLY))
                          .addField(new field().setType("SFVec3f").setName("setPlaneSensorTranslation").setAccessType(field.ACCESSTYPE_INPUTONLY))
                          .addField(new field().setType("SFVec3f").setName("translationChanged").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                          .addField(new field().setType("SFVec3f").setName("translationOffsetChanged").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                          .setIS(new IS()
                            .addConnect(new connect().setNodeField("traceEnabled").setProtoField("traceEnabled")))
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
                        .addChild(new ROUTE().setFromField("isActive").setFromNode("PlaneMovementSensor").setToField("setPlaneSensorIsActive").setToNode("VisibilityControlScript"))
                        .addChild(new ROUTE().setFromField("translation_changed").setFromNode("PlaneMovementSensor").setToField("setPlaneSensorTranslation").setToNode("VisibilityControlScript"))
                        .addChild(new ROUTE().setFromField("isActive").setFromNode("MovementVisibilitySensor").setToField("setIsVisible").setToNode("VisibilityControlScript")))))
                  .addChild(new ROUTE().setFromField("translation_changed").setFromNode("PlaneMovementSensor").setToField("set_translation").setToNode("MovableLocation"))
                  .addChild(new ROUTE().setFromField("translationChanged").setFromNode("VisibilityControlScript").setToField("set_translation").setToNode("MovableLocation"))
                  .addChild(new ROUTE().setFromField("translationOffsetChanged").setFromNode("VisibilityControlScript").setToField("set_offset").setToNode("PlaneMovementSensor"))))
              .addChild(new ROUTE().setFromField("position_changed").setFromNode("WhereSensor").setToField("set_translation").setToNode("FixedLocation"))
              .addChild(new ROUTE().setFromField("orientation_changed").setFromNode("WhereSensor").setToField("set_rotation").setToNode("FixedLocation")))))
        .addComments("====================")
        .addChild(new Background().setGroundColor(new MFColor0().getArray()).setSkyColor(new MFColor1().getArray()))
        .addChild(new Anchor().setDescription("HeadsUpDisplayExample").setParameter(new MFString2().getArray()).setUrl(new MFString3().getArray())
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {0f,1f,1f}).setEmissiveColor(new float[] {0f,1f,1f})))
            .setGeometry(new Text().setString(new MFString4().getArray())
              .setFontStyle(new FontStyle().setJustify(new MFString5().getArray()).setSize(0.8f))))))      ;
    return X3D0;
    }
protected class MFColor0 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.1f,0.1f,0.3f});
  }
}
protected class MFColor1 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.5f,0.5f,0.1f});
  }
}
protected class MFString2 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_blank"});
  }
}
protected class MFString3 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"HeadsUpDisplayExample.x3d","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayrExample.x3d","HeadsUpDisplayExample.wrl","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayExample.wrl"});
  }
}
protected class MFString4 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"HeadsUpDisplayPrototype.x3d","is a Prototype definition file.","","To see an example scene using this node","click this text to view","HeadsUpDisplayExample.x3d"});
  }
}
protected class MFString5 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
}
