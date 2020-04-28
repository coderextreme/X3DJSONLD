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
public class LoadSensorPrototype {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new LoadSensorPrototype().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/development/LoadSensorPrototype.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("LoadSensorPrototype.x3d"))
        .addMeta(new metaObject().setName("description").setContent("LoadSensor prototype for VRML 97 use. Assumes correct loading of resources and provides output events based on timeOut delay."))
        .addMeta(new metaObject().setName("created").setContent("26 December 2003"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("creator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("hint").setContent("Set LoadSensorScript traceEnabled true/false to enable/disable console trace text."))
        .addMeta(new metaObject().setName("warning").setContent("This LoadSensor implementation for VRML 97 only emulates LoadSensor events and cannot sense actual loading of watchList resources. Use an X3D-compliant browser for complete LoadSensor capability."))
        .addMeta(new metaObject().setName("reference").setContent("LoadSensorExample.x3d"))
        .addMeta(new metaObject().setName("reference").setContent("LoadSensorPrototypeInitializationTrace.txt"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorPrototype.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("LoadSensorPrototype.x3d"))
        .addChild(new ProtoDeclareObject().setName("LoadSensor").setAppinfo("LoadSensor monitors the progress and success of downloading URL elements over a network. Only nodes that contain a valid URL field (i.e. descendants of X3DUrlObject) may be specified as watchList children. Multiple nodes may be watched with a single LoadSensor.").setDocumentation("https://www.web3d.org/specifications/ISO-IEC-19775/Part01/components/networking.html#LoadSensor")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFBool").setName("enabled").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Enables/disables the sensor node.").setValue("true"))
            .addField(new fieldObject().setType("SFTime").setName("timeOut").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Maximum time for which the LoadSensor will monitor loading starting from when the sensor becomes active. timeOut=0 ordinarily indicates an indefinite time out period; i.e. the LoadSensor will wait until loading has completed either with success or failure timeOut=0 causes immediate loading for this implementation.").setValue("0"))
            .addField(new fieldObject().setType("MFNode").setName("watchList").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Zero or more nodes with url fields to monitor."))
            .addField(new fieldObject().setType("MFNode").setName("set_watchList").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("Change watchList MFNode array."))
            .addField(new fieldObject().setType("SFBool").setName("isActive").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("isActive=true when loading begins isActive=false when loading ends."))
            .addField(new fieldObject().setType("SFBool").setName("isLoaded").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("isLoaded=true when loading succeeds isLoaded=false when loading fails or timeOut reached."))
            .addField(new fieldObject().setType("SFTime").setName("loadTime").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("loadTime event is generated when loading has successfully completed."))
            .addField(new fieldObject().setType("SFFloat").setName("progress").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("progress [0..1] indicates fraction of loading complete."))
            .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("associated Metadata node.")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addChild(new TimeSensorObject().setDEF("Clock").setLoop(true)
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("enabled").setProtoField("enabled"))
                  .addConnect(new connectObject().setNodeField("cycleInterval").setProtoField("timeOut"))))
              .addChild(new ScriptObject().setDEF("LoadSensorScript").setDirectOutput(true)
                .addField(new fieldObject().setType("SFNode").setName("ClockNode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
                  .addChild(new TimeSensorObject().setUSE("Clock")))
                .addField(new fieldObject().setType("SFTime").setName("loopStart").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .addField(new fieldObject().setType("SFFloat").setName("fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
                .addField(new fieldObject().setType("SFFloat").setName("priorFraction").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0"))
                .addField(new fieldObject().setType("SFFloat").setName("progress").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .addField(new fieldObject().setType("MFNode").setName("watchList").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
                .addField(new fieldObject().setType("MFNode").setName("set_watchList").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
                .addField(new fieldObject().setType("SFBool").setName("isActive").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .addField(new fieldObject().setType("SFBool").setName("isLoaded").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .addField(new fieldObject().setType("SFTime").setName("loadTime").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .addField(new fieldObject().setType("SFBool").setName("traceEnabled").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("false"))
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("watchList").setProtoField("watchList"))
                  .addConnect(new connectObject().setNodeField("set_watchList").setProtoField("set_watchList"))
                  .addConnect(new connectObject().setNodeField("isActive").setProtoField("isActive"))
                  .addConnect(new connectObject().setNodeField("isLoaded").setProtoField("isLoaded"))
                  .addConnect(new connectObject().setNodeField("loadTime").setProtoField("loadTime"))
                  .addConnect(new connectObject().setNodeField("progress").setProtoField("progress")))
                .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	enabled = ClockNode.enabled;\n"+
"	tracePrint ('initialize() enabled=' + enabled);\n"+
"	if (enabled)\n"+
"	{\n"+
"		isActive = true;\n"+
"		// isLoaded event only sent upon completion\n"+
"		progress = 0.0;\n"+
"		tracePrintEvents ();\n"+
"		timeOut = ClockNode.cycleInterval;\n"+
"		tracePrint ('timeOut=' + timeOut);\n"+
"		if (timeOut <= 0.0) // instantaneous, no loop\n"+
"		{\n"+
"			isActive = false;\n"+
"			isLoaded = true;\n"+
"			progress = 1.0;\n"+
"			loadTime = timestamp;\n"+
"			tracePrintEvents ();\n"+
"		}\n"+
"	}\n"+
"}\n"+
"function fraction (value, timestamp)\n"+
"{\n"+
"	enabled = ClockNode.enabled;\n"+
"	if (enabled)\n"+
"		tracePrint ('progress=' + value + ', priorFraction=' + priorFraction);\n"+
"	// use priorFraction to check for looping, then stop loop\n"+
"	if (enabled && ((value >=1) || (value < priorFraction)))\n"+
"	{\n"+
"		isActive = false;\n"+
"		isLoaded = true;\n"+
"		loadTime = timestamp;\n"+
"		progress = 1;\n"+
"		tracePrintEvents ();\n"+
"		tracePrint ('complete');\n"+
"                loopStart = true;\n"+
"	}\n"+
"	else progress= value; // output event\n"+
"	priorFraction = progress;\n"+
"}\n"+
"function set_watchList (value, timestamp)\n"+
"{\n"+
"	watchList = value;\n"+
"}\n"+
"function tracePrintEvents ()\n"+
"{\n"+
"	tracePrint ('isActive=' + isActive);\n"+
"	tracePrint ('isLoaded=' + isLoaded);\n"+
"	tracePrint ('loadTime=' + loadTime);\n"+
"	tracePrint ('progress=' + progress);\n"+
"}\n"+
"function tracePrint (outputString)\n"+
"{\n"+
"	if (traceEnabled) Browser.print ('[LoadSensor]' + outputString);\n"+
"}\n"+
"function alwaysPrint (outputString)\n"+
"{\n"+
"	Browser.print ('[LoadSensor]' + outputString);\n"+
"}"))
              .addChild(new ROUTEObject().setFromField("loopStart").setFromNode("LoadSensorScript").setToField("startTime").setToNode("Clock"))
              .addChild(new ROUTEObject().setFromField("isActive").setFromNode("LoadSensorScript").setToField("enabled").setToNode("Clock"))
              .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("Clock").setToField("fraction").setToNode("LoadSensorScript"))
              .addChild(new CollisionObject().setEnabled(false)
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("proxy").setProtoField("metadata")))))))
        .addComments(new CommentsBlock("======================================"))
        .addComments(new CommentsBlock("Example use"))
        .addChild(new AnchorObject().setDescription("LoadSensorExample").setParameter(new MFStringObject(new MFString0().getArray())).setUrl(new MFStringObject(new MFString1().getArray()))
          .addChild(new ShapeObject()
            .setGeometry(new TextObject().setString(new MFStringObject(new MFString2().getArray()))
              .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString3().getArray())).setSize(0.7f)))
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
    return new MFStringObject(new java.lang.String[] {"LoadSensorExample.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorExample.x3d","LoadSensorExample.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorExample.wrl"});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"LoadSensorPrototype","defines a prototype","","Click on this text to see","LoadSensorExample scene"});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
}
