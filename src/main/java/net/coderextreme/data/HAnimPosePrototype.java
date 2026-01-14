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
import java.util.ArrayList;
import java.util.List;
import net.coderextreme.X3DRoots;
public class HAnimPosePrototype implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new HAnimPosePrototype().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/HAnimPosePrototype.new.java.x3d");
    model.toFileJSON("../data/HAnimPosePrototype.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
ProtoInstance ProtoInstance1 = null;
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("HAnimPosePrototype.x3d"))
        .addMeta(new meta().setName("description").setContent("Define an experimental new node to simply capture a single pose for an HAnimHumanoid model."))
        .addMeta(new meta().setName("created").setContent("4 April 2025"))
        .addMeta(new meta().setName("modified").setContent("Mon, 15 Sep 2025 05:20:09 GMT"))
        .addMeta(new meta().setName("creator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("creator").setContent("Joe Williams"))
        .addMeta(new meta().setName("warning").setContent("under development"))
        .addMeta(new meta().setName("reference").setContent("HAnimPoseDesignNotes19MAR2025.pdf"))
        .addMeta(new meta().setName("reference").setContent("HAnim Architecture volume 1 version 2.0, clause 4.8.2 Modelling of human-like HAnim figures, https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#ModellingOfHumanLikeHAnimFigures"))
        .addMeta(new meta().setName("reference").setContent("HAnim Architecture volume 1 version 2.0, clause 4.8.3 Poses, https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Poses"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/HelloWorldScenes/HAnimPosePrototype.x3d")))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("HAnimPose").setAppinfo("Assumes HAnimHumanoid configuration must be in I pose, which can be achieved by resetting every HAnimJoint to default values")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("enabled").setValue("true").setAppinfo("default value true"))
            .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_INPUTONLY).setName("setPose").setAppinfo("this event tells the HAnimPose node to do it's thing!"))
            .addField(new field().setType("SFString").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("name").setValue("PoseName").setAppinfo("name of this pose"))
            .addField(new field().setType("MFString").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("namesPoseJoints").setValue("\"nameJoint1\" \"nameJoint2\" \"nameJoint3\" \"nameJoint4\"").setAppinfo("names of joints in pose"))
            .addField(new field().setType("MFVec3f").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("positionsPoseJoints").setAppinfo("positions of joints in pose"))
            .addField(new field().setType("MFRotation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("rotationsPoseJoints").setAppinfo("rotations of joints in pose"))
            .addField(new field().setType("SFInt32").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("whichChoice").setAppinfo("selects one of the HAnimHumanoid nodes"))
            .addField(new field().setType("MFNode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("children").setAppinfo("references one or more HAnimHumanoid nodes, typically via USE references"))
            .addField(new field().setType("MFNode").setAccessType(field.ACCESSTYPE_INPUTONLY).setName("addChildren").setAppinfo("references one or more HAnimHumanoid nodes, typically via USE references"))
            .addField(new field().setType("MFNode").setAccessType(field.ACCESSTYPE_INPUTONLY).setName("removeChildren").setAppinfo("references one or more HAnimHumanoid nodes, typically via USE references"))
            .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("traceEnabled").setValue("true").setAppinfo("debug trace to Browser output console")))
          .setProtoBody(new ProtoBody()
            .addChild(new Switch().setDEF("PrototypeRootNode")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("whichChoice").setProtoField("whichChoice"))
                .addConnect(new connect().setNodeField("addChildren").setProtoField("addChildren"))
                .addConnect(new connect().setNodeField("removeChildren").setProtoField("removeChildren"))
                .addConnect(new connect().setNodeField("children").setProtoField("children"))))
            .addChild(new MetadataString().setName("interface").setReference("https://www.web3d.org/specifications/X3Dv4/ISO-IEC19775-1v4-IS/Part01/concepts.html#InterfaceHierarchy").setValue(new MFString0().getArray()))
            .addChild(new Script().setDEF("HAnimPoseScriptOperations").setDirectOutput(true)
              .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("enabled").setAppinfo("default value true"))
              .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_INPUTONLY).setName("setPose").setAppinfo("this event tells the HAnimPose node to do it's thing!"))
              .addField(new field().setType("SFString").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("name").setAppinfo("name of this pose"))
              .addField(new field().setType("MFString").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("namesPoseJoints").setAppinfo("names of joints in pose"))
              .addField(new field().setType("MFVec3f").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("positionsPoseJoints").setAppinfo("positions of joints in pose"))
              .addField(new field().setType("MFRotation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("rotationsPoseJoints").setAppinfo("rotations of joints in pose"))
              .addField(new field().setType("SFInt32").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("whichChoice").setAppinfo("selects one of the HAnimHumanoid nodes"))
              .addField(new field().setType("MFNode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("children").setAppinfo("references one or more HAnimHumanoid nodes, typically via USE references"))
              .addField(new field().setType("MFNode").setAccessType(field.ACCESSTYPE_INPUTONLY).setName("addChildren").setAppinfo("references one or more HAnimHumanoid nodes, typically via USE references"))
              .addField(new field().setType("MFNode").setAccessType(field.ACCESSTYPE_INPUTONLY).setName("removeChildren").setAppinfo("references one or more HAnimHumanoid nodes, typically via USE references"))
              .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("traceEnabled").setAppinfo("debug trace to Browser output console"))
              .setSourceCode("ecmascript:\n"+
"\n"+
"// Needed functionality:\n"+
"// a. get access to a humanoid\n"+
"// b. confirm skeletalConfiguration = 'BASIC' so we know that it has a valid default pose\n"+
"// c. walk the tree for all joints, then set transation, scale, rotation to default values\n"+
"// d. for each name/position/rotation triplet in the pose arrays, update the appropriate\n"+
"//    HAnimJoint nodes to that corresponding set of values\n"+
"\n"+
"var scriptName='HAnimPoseScript';\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"    // TODO author initialization code (if any) goes here\n"+
"    \n"+
"    // check that array sizes are identical for namesPoseJoints, positionsPoseJoints, rotationsPoseJoints\n"+
"    \n"+
"    // check humanoid connectivity\n"+
"\n"+
"    tracePrint ('initialization() successful');\n"+
"}\n"+
"function set_enabled (eventValue)\n"+
"{\n"+
"    // input eventValue received for inputOutput field enabled\n"+
"    enabled = eventValue;\n"+
"    tracePrint ('enabled = ' + enabled);\n"+
"\n"+
"    // TODO author code (if any) goes here\n"+
"}\n"+
"function setPose (eventValue)\n"+
"{\n"+
"    // input eventValue received for inputOnly field setPose\n"+
"    setPose = eventValue;\n"+
"\n"+
"    tracePrint ('setPose = ' + setPose);\n"+
"\n"+
"    // TODO author code (if any) goes here\n"+
"}\n"+
"function set_name (eventValue)\n"+
"{\n"+
"    // input eventValue received for inputOutput field name\n"+
"    name = eventValue;\n"+
"    tracePrint ('name = ' + name);\n"+
"\n"+
"    // TODO author code (if any) goes here\n"+
"}\n"+
"function set_namesPoseJoints (eventValue)\n"+
"{\n"+
"    // input eventValue received for inputOutput field namesPoseJoints\n"+
"    namesPoseJoints = eventValue;\n"+
"    tracePrint ('namesPoseJoints = ' + namesPoseJoints);\n"+
"\n"+
"    // TODO author code (if any) goes here\n"+
"}\n"+
"function set_positionsPoseJoints (eventValue)\n"+
"{\n"+
"    // input eventValue received for inputOutput field positionsPoseJoints\n"+
"    positionsPoseJoints = eventValue;\n"+
"    tracePrint ('positionsPoseJoints = ' + positionsPoseJoints);\n"+
"\n"+
"    // TODO author code (if any) goes here\n"+
"}\n"+
"function set_rotationsPoseJoints (eventValue)\n"+
"{\n"+
"    // input eventValue received for inputOutput field rotationsPoseJoints\n"+
"    rotationsPoseJoints = eventValue;\n"+
"    tracePrint ('rotationsPoseJoints = ' + rotationsPoseJoints);\n"+
"\n"+
"    // TODO author code (if any) goes here\n"+
"}\n"+
"function set_humanoid (eventValue)\n"+
"{\n"+
"    // input eventValue received for inputOutput field humanoid\n"+
"    humanoid = eventValue;\n"+
"    tracePrint ('humanoid = ' + humanoid);\n"+
"\n"+
"    // TODO author code (if any) goes here\n"+
"}\n"+
"// ================== Trace output functions ==================\n"+
"\n"+
"function tracePrint (outputString)\n"+
"{\n"+
"   // if traceEnabled is true, print outputString on X3D browser console\n"+
"   if (traceEnabled)\n"+
"      Browser.println ('[' + scriptName.toString()' ' + name.toString()': ' + outputString.toString() + ']');\n"+
"}\n"+
"function alwaysPrint (outputString)\n"+
"{\n"+
"      // always print outputString on X3D browser console\n"+
"      Browser.println ('[' + scriptName.toString()' ' + name.toString()': ' + outputString.toString() + ']');\n"+
"}\n"+
"function set_traceEnabled (eventValue)\n"+
"{\n"+
"      // input eventValue received for inputOutput field\n"+
"      traceEnabled = eventValue;\n"+
"}\n"+
"// ===========================================================")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("enabled").setProtoField("enabled"))
                .addConnect(new connect().setNodeField("setPose").setProtoField("setPose"))
                .addConnect(new connect().setNodeField("name").setProtoField("name"))
                .addConnect(new connect().setNodeField("namesPoseJoints").setProtoField("namesPoseJoints"))
                .addConnect(new connect().setNodeField("positionsPoseJoints").setProtoField("positionsPoseJoints"))
                .addConnect(new connect().setNodeField("rotationsPoseJoints").setProtoField("rotationsPoseJoints"))
                .addConnect(new connect().setNodeField("whichChoice").setProtoField("whichChoice"))
                .addConnect(new connect().setNodeField("children").setProtoField("children"))
                .addConnect(new connect().setNodeField("addChildren").setProtoField("addChildren"))
                .addConnect(new connect().setNodeField("removeChildren").setProtoField("removeChildren"))
                .addConnect(new connect().setNodeField("traceEnabled").setProtoField("traceEnabled"))))))
        .addChild(new WorldInfo().setDEF("ModelInfo").setTitle("HAnimPose Prototype").setInfo(new MFString1().getArray()))
        .addChild(new NavigationInfo())
        .addChild(ProtoInstance0 = new ProtoInstance().setName("HAnimPose"))
        .addChild(ProtoInstance1 = new ProtoInstance().setName("HAnimPose")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("name").setValue("A"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("namesPoseJoints").setValue("\"l_hip\" \"r_hip\""));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("positionsPoseJoints").setValue("0 0 0 0 0 0"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("rotationsPoseJoints").setValue("0 0 1 0.2 0 0 1 -0.2"));
ProtoInstance1
          .addFieldValue(new fieldValue().setName("name").setValue("T"));
ProtoInstance1
          .addFieldValue(new fieldValue().setName("namesPoseJoints").setValue("\"l_shoulder\" \"r_shoulder\""));
ProtoInstance1
          .addFieldValue(new fieldValue().setName("positionsPoseJoints").setValue("0 0 0 0 0 0"));
ProtoInstance1
          .addFieldValue(new fieldValue().setName("rotationsPoseJoints").setValue("0 0 1 1.57 0 0 1 -1.57"));
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"X3DGroupingNode"});
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Design to illustrate a potential HAnimPose node"});
  }
}
}
