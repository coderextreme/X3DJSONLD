load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
ConfigurationProperties.setDeleteIntermediateFiles(false);
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
function doubleToFloat(d) {
    if (Float32Array)
	return new Float32Array(d);
}
var ProtoInstance0 = null;
var ProtoInstance1 = null;
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
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
            .addField(new field().setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("enabled").setValue("true").setAppinfo("default value true"))
            .addField(new field().setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY).setName("setPose").setAppinfo("this event tells the HAnimPose node to do it's thing!"))
            .addField(new field().setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("name").setValue("PoseName").setAppinfo("name of this pose"))
            .addField(new field().setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("namesPoseJoints").setValue("\"nameJoint1\" \"nameJoint2\" \"nameJoint3\" \"nameJoint4\"").setAppinfo("names of joints in pose"))
            .addField(new field().setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("positionsPoseJoints").setAppinfo("positions of joints in pose"))
            .addField(new field().setType(field.TYPE_MFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("rotationsPoseJoints").setAppinfo("rotations of joints in pose"))
            .addField(new field().setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("whichChoice").setAppinfo("selects one of the HAnimHumanoid nodes"))
            .addField(new field().setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("children").setAppinfo("references one or more HAnimHumanoid nodes, typically via USE references"))
            .addField(new field().setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY).setName("addChildren").setAppinfo("references one or more HAnimHumanoid nodes, typically via USE references"))
            .addField(new field().setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY).setName("removeChildren").setAppinfo("references one or more HAnimHumanoid nodes, typically via USE references"))
            .addField(new field().setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("traceEnabled").setValue("true").setAppinfo("debug trace to Browser output console")))
          .setProtoBody(new ProtoBody()
            .addChild(new Switch().setDEF("PrototypeRootNode")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("whichChoice").setProtoField("whichChoice"))
                .addConnect(new connect().setNodeField("addChildren").setProtoField("addChildren"))
                .addConnect(new connect().setNodeField("removeChildren").setProtoField("removeChildren"))
                .addConnect(new connect().setNodeField("children").setProtoField("children"))))
            .addChild(new MetadataString().setName("interface").setReference("https://www.web3d.org/specifications/X3Dv4/ISO-IEC19775-1v4-IS/Part01/concepts.html#InterfaceHierarchy").setValue(Java.to(["X3DGroupingNode"], Java.type("java.lang.String[]"))))
            .addChild(new Script().setDEF("HAnimPoseScriptOperations").setDirectOutput(true)
              .addField(new field().setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("enabled").setAppinfo("default value true"))
              .addField(new field().setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY).setName("setPose").setAppinfo("this event tells the HAnimPose node to do it's thing!"))
              .addField(new field().setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("name").setAppinfo("name of this pose"))
              .addField(new field().setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("namesPoseJoints").setAppinfo("names of joints in pose"))
              .addField(new field().setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("positionsPoseJoints").setAppinfo("positions of joints in pose"))
              .addField(new field().setType(field.TYPE_MFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("rotationsPoseJoints").setAppinfo("rotations of joints in pose"))
              .addField(new field().setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("whichChoice").setAppinfo("selects one of the HAnimHumanoid nodes"))
              .addField(new field().setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("children").setAppinfo("references one or more HAnimHumanoid nodes, typically via USE references"))
              .addField(new field().setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY).setName("addChildren").setAppinfo("references one or more HAnimHumanoid nodes, typically via USE references"))
              .addField(new field().setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY).setName("removeChildren").setAppinfo("references one or more HAnimHumanoid nodes, typically via USE references"))
              .addField(new field().setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("traceEnabled").setAppinfo("debug trace to Browser output console"))
              .setSourceCode(`ecmascript:

// Needed functionality:
// a. get access to a humanoid
// b. confirm skeletalConfiguration = 'BASIC' so we know that it has a valid default pose
// c. walk the tree for all joints, then set transation, scale, rotation to default values
// d. for each name/position/rotation triplet in the pose arrays, update the appropriate
//    HAnimJoint nodes to that corresponding set of values

var scriptName='HAnimPoseScript';

function initialize ()
{
    // TODO author initialization code (if any) goes here
    
    // check that array sizes are identical for namesPoseJoints, positionsPoseJoints, rotationsPoseJoints
    
    // check humanoid connectivity

    tracePrint ('initialization() successful');
}
function set_enabled (eventValue)
{
    // input eventValue received for inputOutput field enabled
    enabled = eventValue;
    tracePrint ('enabled = ' + enabled);

    // TODO author code (if any) goes here
}
function setPose (eventValue)
{
    // input eventValue received for inputOnly field setPose
    setPose = eventValue;

    tracePrint ('setPose = ' + setPose);

    // TODO author code (if any) goes here
}
function set_name (eventValue)
{
    // input eventValue received for inputOutput field name
    name = eventValue;
    tracePrint ('name = ' + name);

    // TODO author code (if any) goes here
}
function set_namesPoseJoints (eventValue)
{
    // input eventValue received for inputOutput field namesPoseJoints
    namesPoseJoints = eventValue;
    tracePrint ('namesPoseJoints = ' + namesPoseJoints);

    // TODO author code (if any) goes here
}
function set_positionsPoseJoints (eventValue)
{
    // input eventValue received for inputOutput field positionsPoseJoints
    positionsPoseJoints = eventValue;
    tracePrint ('positionsPoseJoints = ' + positionsPoseJoints);

    // TODO author code (if any) goes here
}
function set_rotationsPoseJoints (eventValue)
{
    // input eventValue received for inputOutput field rotationsPoseJoints
    rotationsPoseJoints = eventValue;
    tracePrint ('rotationsPoseJoints = ' + rotationsPoseJoints);

    // TODO author code (if any) goes here
}
function set_humanoid (eventValue)
{
    // input eventValue received for inputOutput field humanoid
    humanoid = eventValue;
    tracePrint ('humanoid = ' + humanoid);

    // TODO author code (if any) goes here
}
// ================== Trace output functions ==================

function tracePrint (outputString)
{
   // if traceEnabled is true, print outputString on X3D browser console
   if (traceEnabled)
      Browser.println ('[' + scriptName.toString()' ' + name.toString()': ' + outputString.toString() + ']');
}
function alwaysPrint (outputString)
{
      // always print outputString on X3D browser console
      Browser.println ('[' + scriptName.toString()' ' + name.toString()': ' + outputString.toString() + ']');
}
function set_traceEnabled (eventValue)
{
      // input eventValue received for inputOutput field
      traceEnabled = eventValue;
}
// ===========================================================`)
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
        .addChild(new WorldInfo().setDEF("ModelInfo").setTitle("HAnimPose Prototype").setInfo(Java.to(["Design to illustrate a potential HAnimPose node"], Java.type("java.lang.String[]"))))
        .addChild(new NavigationInfo())
        .addChild(ProtoInstance0 = new ProtoInstance().setName("HAnimPose"))
        .addChild(ProtoInstance1 = new ProtoInstance().setName("HAnimPose")))      ;
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
    X3D0.toFileX3D("../data/HAnimPosePrototype.new.graal.x3d");
    X3D0.toFileJSON("../data/HAnimPosePrototype.new.graal.x3dj");
