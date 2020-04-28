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
public class EventUtilityPrototypes {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new EventUtilityPrototypes().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/development/EventUtilityPrototypes.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("EventUtilityPrototypes.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Event utility node prototypes for boolean filtering and other event utility nodes."))
        .addMeta(new metaObject().setName("creator").setContent("Nick Polys, Tony Parisi, Don Brutzman, Justin Couch"))
        .addMeta(new metaObject().setName("created").setContent("25 September 2002"))
        .addMeta(new metaObject().setName("modified").setContent("20 January 2020"))
        .addMeta(new metaObject().setName("warning").setContent("Under development, IntegerTrigger example needed."))
        .addMeta(new metaObject().setName("reference").setContent("EventUtilityExamples.x3d"))
        .addMeta(new metaObject().setName("subject").setContent("BooleanFilter BooleanToggle BooleanTrigger IntegerTrigger TimeTrigger"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("EventUtilityPrototypes.x3d"))
        .addChild(new ProtoDeclareObject().setName("BooleanFilter").setAppinfo("BooleanFilter selectively passes true false or negated events.")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFBool").setName("set_boolean").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("set_boolean is the input value to be filtered."))
            .addField(new fieldObject().setType("SFBool").setName("inputTrue").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("inputTrue only passes a true value when set_boolean input is true."))
            .addField(new fieldObject().setType("SFBool").setName("inputFalse").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("inputFalse only passes a false value when set_boolean is false."))
            .addField(new fieldObject().setType("SFBool").setName("inputNegate").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("inputNegate provides opposite value by negating set_boolean input.")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new ScriptObject().setDEF("BooleanFilterScript")
              .addField(new fieldObject().setType("SFBool").setName("set_boolean").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType("SFBool").setName("inputTrue").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
              .addField(new fieldObject().setType("SFBool").setName("inputFalse").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
              .addField(new fieldObject().setType("SFBool").setName("inputNegate").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("set_boolean").setProtoField("set_boolean"))
                .addConnect(new connectObject().setNodeField("inputTrue").setProtoField("inputTrue"))
                .addConnect(new connectObject().setNodeField("inputFalse").setProtoField("inputFalse"))
                .addConnect(new connectObject().setNodeField("inputNegate").setProtoField("inputNegate")))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function set_boolean (value, timestamp)\n"+
"{\n"+
"	if (value) inputTrue  = value;\n"+
"	else       inputFalse = value;\n"+
"	inputNegate = !value;\n"+
"\n"+
"//	if (value) Browser.print ('[BooleanFilter] set_boolean=' + value + ', inputTrue='  + inputTrue  + ', inputNegate=' + inputNegate);\n"+
"//	else       Browser.print ('[BooleanFilter] set_boolean=' + value + ', inputFalse=' + inputFalse + ', inputNegate=' + inputNegate);\n"+
"}"))))
        .addComments(new CommentsBlock("========================================"))
        .addChild(new ProtoDeclareObject().setName("BooleanToggle").setAppinfo("BooleanToggle maintains state and negates output when a true input is provided.")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFBool").setName("set_boolean").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("If set_boolean input is true toggle state."))
            .addField(new fieldObject().setType("SFBool").setName("set_toggle").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("Reset persistent state value."))
            .addField(new fieldObject().setType("SFBool").setName("toggle").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Persistent state value that gets toggled or reset.").setValue("false"))
            .addField(new fieldObject().setType("SFBool").setName("toggle_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Output toggled persistent state value."))
            .addComments(new CommentsBlock("warning: toggle depends on exposedField functionality in Script node, not compatible with VRML 97. implemented as inputOnly/initializeOnly/outputOnly triplet.")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addChild(new ScriptObject().setDEF("BooleanToggleScript")
                .addField(new fieldObject().setType("SFBool").setName("set_boolean").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
                .addField(new fieldObject().setType("SFBool").setName("set_toggle").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
                .addField(new fieldObject().setType("SFBool").setName("toggle").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("false"))
                .addField(new fieldObject().setType("SFBool").setName("toggle_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .addField(new fieldObject().setType("SFBool").setName("traceEnabled").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("false"))
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("set_boolean").setProtoField("set_boolean"))
                  .addConnect(new connectObject().setNodeField("set_toggle").setProtoField("set_toggle"))
                  .addConnect(new connectObject().setNodeField("toggle_changed").setProtoField("toggle_changed")))
                .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	if (traceEnabled) Browser.print ('[BooleanToggle] toggle=' + toggle);\n"+
"\n"+
"}\n"+
"function set_boolean (value, timestamp)\n"+
"{\n"+
"	if (value == true)  // only toggle on true input\n"+
"	{\n"+
"		if (toggle == true) toggle = false;\n"+
"		else                toggle = true;\n"+
"	}\n"+
"	toggle_changed = toggle;\n"+
"//	Browser.print ('[BooleanToggle] traceEnabled=' + traceEnabled);\n"+
"	if (traceEnabled) Browser.print ('[BooleanToggle] set_boolean=' + value + ', toggle=' + toggle);\n"+
"}\n"+
"function set_toggle (value, timestamp)\n"+
"{\n"+
"	toggle = value;\n"+
"	toggle_changed = toggle;\n"+
"	if (traceEnabled) Browser.print ('[BooleanToggle] set_toggle=' + set_toggle);\n"+
"}")))))
        .addComments(new CommentsBlock("========================================"))
        .addChild(new ProtoDeclareObject().setName("BooleanTrigger").setAppinfo("BooleanTrigger converts time events to boolean true events.")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFTime").setName("set_triggerTime").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("set_triggerTime provides input time event typical event sent is TouchSensor touchTime."))
            .addField(new fieldObject().setType("SFBool").setName("triggerTrue").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("triggerTrue outputs a true value whenever a triggerTime event is received.")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new ScriptObject().setDEF("TriggerBooleanScript")
              .addField(new fieldObject().setType("SFTime").setName("set_triggerTime").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType("SFBool").setName("triggerTrue").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("set_triggerTime").setProtoField("set_triggerTime"))
                .addConnect(new connectObject().setNodeField("triggerTrue").setProtoField("triggerTrue")))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function set_triggerTime (value, timestamp)\n"+
"{\n"+
"	triggerTrue = true;\n"+
"//	Browser.print ('triggerTrue = true');\n"+
"}"))))
        .addComments(new CommentsBlock("========================================"))
        .addChild(new ProtoDeclareObject().setName("IntegerTrigger").setAppinfo("IntegerTrigger converts boolean true or time input events to integer value (suitable for Switch node).")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFBool").setName("set_boolean").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("If set_boolean input is true trigger output of integer value."))
            .addField(new fieldObject().setType("SFInt32").setName("set_integerKey").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("Resets value used for output when triggered later."))
            .addField(new fieldObject().setType("SFInt32").setName("integerKey").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("integerKey is value for output when triggered.").setValue("-1"))
            .addField(new fieldObject().setType("SFInt32").setName("integerKey_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Reports change in integerKey value."))
            .addField(new fieldObject().setType("SFInt32").setName("triggerValue").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("triggerValue provides integer event output matching integerKey when true set_boolean received.")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addChild(new SwitchObject().setDEF("IntegerKeyHolder").setWhichChoice(-1)
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("whichChoice").setProtoField("integerKey"))))
              .addChild(new ScriptObject().setDEF("TriggerIntegerScript").setDirectOutput(true)
                .addField(new fieldObject().setType("SFBool").setName("set_boolean").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
                .addField(new fieldObject().setType("SFInt32").setName("set_integerKey").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
                .addField(new fieldObject().setType("SFNode").setName("integerKeyHolderNode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
                  .addChild(new SwitchObject().setUSE("IntegerKeyHolder")))
                .addField(new fieldObject().setType("SFInt32").setName("integerKey_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .addField(new fieldObject().setType("SFInt32").setName("triggerValue").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("set_boolean").setProtoField("set_boolean"))
                  .addConnect(new connectObject().setNodeField("set_integerKey").setProtoField("set_integerKey"))
                  .addConnect(new connectObject().setNodeField("integerKey_changed").setProtoField("integerKey_changed"))
                  .addConnect(new connectObject().setNodeField("triggerValue").setProtoField("triggerValue")))
                .setSourceCode("ecmascript:\n"+
"\n"+
"function set_boolean (inputValue, timestamp)\n"+
"{\n"+
"	if (inputValue == true)\n"+
"	{\n"+
"		integerKey = integerKeyHolderNode.whichChoice;\n"+
"		triggerValue = integerKey; // send output event\n"+
"	}\n"+
"}\n"+
"function set_integerKey (inputValue, timestamp)\n"+
"{\n"+
"	integerKey = inputValue;\n"+
"	integerKeyHolderNode.whichChoice = integerKey;\n"+
"	integerKey_changed = integerKey; // send output event\n"+
"}")))))
        .addComments(new CommentsBlock("========================================"))
        .addChild(new ProtoDeclareObject().setName("TimeTrigger").setAppinfo("TimeTrigger converts boolean true events to time events.")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFBool").setName("set_boolean").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("If set_boolean input is true trigger output time value."))
            .addField(new fieldObject().setType("SFTime").setName("triggerTime").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("triggerTime is output time event sent when set_boolean input is true.")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new ScriptObject().setDEF("TriggerTimeScript")
              .addField(new fieldObject().setType("SFBool").setName("set_boolean").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType("SFTime").setName("triggerTime").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("set_boolean").setProtoField("set_boolean"))
                .addConnect(new connectObject().setNodeField("triggerTime").setProtoField("triggerTime")))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function set_boolean (value, timestamp)\n"+
"{\n"+
"	if (value) triggerTime = timestamp;\n"+
"}"))))
        .addComments(new CommentsBlock("========================================"))
        .addChild(new AnchorObject().setDescription("EventUtilityExamples").setParameter(new MFStringObject(new MFString0().getArray())).setUrl(new MFStringObject(new MFString1().getArray()))
          .addChild(new ShapeObject()
            .setGeometry(new TextObject().setString(new MFStringObject(new MFString2().getArray()))
              .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString3().getArray())).setSize(0.9f)))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,1f,0.2f}))))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_blank"});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"EventUtilityExamples.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityExamples.x3d","EventUtilityExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityExamples.wrl"});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"EventUtilityPrototype","defines prototypes","","Click text to see","EventUtilityExamples"});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
}
