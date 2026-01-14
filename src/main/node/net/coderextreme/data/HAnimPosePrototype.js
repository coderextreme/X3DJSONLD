import java from 'node-java';
import util from 'util';
import autoclass from '../../../X3Dautoclass.js';
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
      .setHead(new autoclass.head()
        .addMeta(new autoclass.meta().setName("title").setContent("HAnimPosePrototype.x3d"))
        .addMeta(new autoclass.meta().setName("description").setContent("Define an experimental new node to simply capture a single pose for an HAnimHumanoid model."))
        .addMeta(new autoclass.meta().setName("created").setContent("4 April 2025"))
        .addMeta(new autoclass.meta().setName("modified").setContent("Mon, 15 Sep 2025 05:20:09 GMT"))
        .addMeta(new autoclass.meta().setName("creator").setContent("Don Brutzman"))
        .addMeta(new autoclass.meta().setName("creator").setContent("Joe Williams"))
        .addMeta(new autoclass.meta().setName("warning").setContent("under development"))
        .addMeta(new autoclass.meta().setName("reference").setContent("HAnimPoseDesignNotes19MAR2025.pdf"))
        .addMeta(new autoclass.meta().setName("reference").setContent("HAnim Architecture volume 1 version 2.0, clause 4.8.2 Modelling of human-like HAnim figures, https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#ModellingOfHumanLikeHAnimFigures"))
        .addMeta(new autoclass.meta().setName("reference").setContent("HAnim Architecture volume 1 version 2.0, clause 4.8.3 Poses, https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Poses"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/HelloWorldScenes/HAnimPosePrototype.x3d")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.ProtoDeclare().setName("HAnimPose").setAppinfo("Assumes HAnimHumanoid configuration must be in I pose, which can be achieved by resetting every HAnimJoint to default values")
          .setProtoInterface(new autoclass.ProtoInterface()
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("enabled").setValue("true").setAppinfo("default value true"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setName("setPose").setAppinfo("this event tells the HAnimPose node to do it's thing!"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFSTRING).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("name").setValue("PoseName").setAppinfo("name of this pose"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_MFSTRING).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("namesPoseJoints").setValue("\"nameJoint1\" \"nameJoint2\" \"nameJoint3\" \"nameJoint4\"").setAppinfo("names of joints in pose"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_MFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("positionsPoseJoints").setAppinfo("positions of joints in pose"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_MFROTATION).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("rotationsPoseJoints").setAppinfo("rotations of joints in pose"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("whichChoice").setAppinfo("selects one of the HAnimHumanoid nodes"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_MFNODE).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("children").setAppinfo("references one or more HAnimHumanoid nodes, typically via USE references"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_MFNODE).setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setName("addChildren").setAppinfo("references one or more HAnimHumanoid nodes, typically via USE references"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_MFNODE).setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setName("removeChildren").setAppinfo("references one or more HAnimHumanoid nodes, typically via USE references"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("traceEnabled").setValue("true").setAppinfo("debug trace to Browser output console")))
          .setProtoBody(new autoclass.ProtoBody()
            .addChild(new autoclass.Switch().setDEF("PrototypeRootNode")
              .setIS(new autoclass.IS()
                .addConnect(new autoclass.connect().setNodeField("whichChoice").setProtoField("whichChoice"))
                .addConnect(new autoclass.connect().setNodeField("addChildren").setProtoField("addChildren"))
                .addConnect(new autoclass.connect().setNodeField("removeChildren").setProtoField("removeChildren"))
                .addConnect(new autoclass.connect().setNodeField("children").setProtoField("children"))))
            .addChild(new autoclass.MetadataString().setName("interface").setReference("https://www.web3d.org/specifications/X3Dv4/ISO-IEC19775-1v4-IS/Part01/concepts.html#InterfaceHierarchy").setValue(java.newArray("java.lang.String", ["X3DGroupingNode"])))
            .addChild(new autoclass.Script().setDEF("HAnimPoseScriptOperations").setDirectOutput(true)
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("enabled").setAppinfo("default value true"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setName("setPose").setAppinfo("this event tells the HAnimPose node to do it's thing!"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFSTRING).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("name").setAppinfo("name of this pose"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_MFSTRING).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("namesPoseJoints").setAppinfo("names of joints in pose"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_MFVEC3F).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("positionsPoseJoints").setAppinfo("positions of joints in pose"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_MFROTATION).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("rotationsPoseJoints").setAppinfo("rotations of joints in pose"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("whichChoice").setAppinfo("selects one of the HAnimHumanoid nodes"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_MFNODE).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("children").setAppinfo("references one or more HAnimHumanoid nodes, typically via USE references"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_MFNODE).setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setName("addChildren").setAppinfo("references one or more HAnimHumanoid nodes, typically via USE references"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_MFNODE).setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setName("removeChildren").setAppinfo("references one or more HAnimHumanoid nodes, typically via USE references"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("traceEnabled").setAppinfo("debug trace to Browser output console"))
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
              .setIS(new autoclass.IS()
                .addConnect(new autoclass.connect().setNodeField("enabled").setProtoField("enabled"))
                .addConnect(new autoclass.connect().setNodeField("setPose").setProtoField("setPose"))
                .addConnect(new autoclass.connect().setNodeField("name").setProtoField("name"))
                .addConnect(new autoclass.connect().setNodeField("namesPoseJoints").setProtoField("namesPoseJoints"))
                .addConnect(new autoclass.connect().setNodeField("positionsPoseJoints").setProtoField("positionsPoseJoints"))
                .addConnect(new autoclass.connect().setNodeField("rotationsPoseJoints").setProtoField("rotationsPoseJoints"))
                .addConnect(new autoclass.connect().setNodeField("whichChoice").setProtoField("whichChoice"))
                .addConnect(new autoclass.connect().setNodeField("children").setProtoField("children"))
                .addConnect(new autoclass.connect().setNodeField("addChildren").setProtoField("addChildren"))
                .addConnect(new autoclass.connect().setNodeField("removeChildren").setProtoField("removeChildren"))
                .addConnect(new autoclass.connect().setNodeField("traceEnabled").setProtoField("traceEnabled"))))))
        .addChild(new autoclass.WorldInfo().setDEF("ModelInfo").setTitle("HAnimPose Prototype").setInfo(java.newArray("java.lang.String", ["Design to illustrate a potential HAnimPose node"])))
        .addChild(new autoclass.NavigationInfo())
        .addChild(ProtoInstance0 = new autoclass.ProtoInstance().setName("HAnimPose"))
        .addChild(ProtoInstance1 = new autoclass.ProtoInstance().setName("HAnimPose")))      ;
ProtoInstance0
          .addFieldValue(new autoclass.fieldValue().setName("name").setValue("A"));
ProtoInstance0
          .addFieldValue(new autoclass.fieldValue().setName("namesPoseJoints").setValue("\"l_hip\" \"r_hip\""));
ProtoInstance0
          .addFieldValue(new autoclass.fieldValue().setName("positionsPoseJoints").setValue("0 0 0 0 0 0"));
ProtoInstance0
          .addFieldValue(new autoclass.fieldValue().setName("rotationsPoseJoints").setValue("0 0 1 0.2 0 0 1 -0.2"));
ProtoInstance1
          .addFieldValue(new autoclass.fieldValue().setName("name").setValue("T"));
ProtoInstance1
          .addFieldValue(new autoclass.fieldValue().setName("namesPoseJoints").setValue("\"l_shoulder\" \"r_shoulder\""));
ProtoInstance1
          .addFieldValue(new autoclass.fieldValue().setName("positionsPoseJoints").setValue("0 0 0 0 0 0"));
ProtoInstance1
          .addFieldValue(new autoclass.fieldValue().setName("rotationsPoseJoints").setValue("0 0 1 1.57 0 0 1 -1.57"));
    X3D0.toFileX3D("../data/HAnimPosePrototype.new.node.x3d");
    X3D0.toFileJSON("../data/HAnimPosePrototype.new.node.x3dj");
    process.exit(0);
