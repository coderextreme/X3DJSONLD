load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Humanoid animation prototype reusable by any Humanoid. </p>
 <p> Related links: LOA1_StopAnimation.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.LOA1_StopAnimation&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_StopAnimation.x3d">LOA1_StopAnimation.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Humanoid animation prototype reusable by any Humanoid. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Cindy Ballreich cindy@ballreich.net 3Name3D, Joe Williams, Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> rights </i> </td>
			<td> 1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Ozan APAYDIN </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 1 December 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 23 May 2020 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl" target="_blank">http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.HAnim.org" target="_blank">http://www.HAnim.org</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://HAnim.org/Models" target="_blank">http://HAnim.org/Models</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://HAnim.org/Nodes" target="_blank">http://HAnim.org/Nodes</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> Nancy Stand Animation HAnim 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_StopAnimation.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_StopAnimation.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/../license.html">../license.html</a> </td>
		</tr>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center;" colspan="2">  &nbsp; </td>
		</tr>
	</table>

	<p>
		This program uses the
		<a href="https://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
	</p>

	* @author Cindy Ballreich cindy@ballreich.net 3Name3D, Joe Williams, Don Brutzman
 */

function LOA1_StopAnimation
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
  function doubleToFloat(d) {
    if (Float32Array) {
        return new Float32Array([d])[0];
    }
  }
LOA1_StopAnimation.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: Text string field, scene-graph level=5, element #133, 16 total values */
	this.Text_5_133_string = new MFString(new MFString("\"LOA1_StopAnimation.x3d\" \"defines a prototype\" \"for animating a humanoid.\" \"\" \"Click this text to see\" \"InterchangableActorsViaDynamicRouting example.\""));
  this.x3dModel = new X3D().setProfile("Immersive").setVersion("3.3")
  .setHead(new head()
    .addMeta(new meta().setName("title").setContent("LOA1_StopAnimation.x3d"))
    .addMeta(new meta().setName("description").setContent("Humanoid animation prototype reusable by any Humanoid."))
    .addMeta(new meta().setName("creator").setContent("Cindy Ballreich cindy@ballreich.net 3Name3D, Joe Williams, Don Brutzman"))
    .addMeta(new meta().setName("rights").setContent("1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved."))
    .addMeta(new meta().setName("translator").setContent("Ozan APAYDIN"))
    .addMeta(new meta().setName("created").setContent("1 December 2001"))
    .addMeta(new meta().setName("modified").setContent("23 May 2020"))
    .addMeta(new meta().setName("reference").setContent("http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl"))
    .addMeta(new meta().setName("reference").setContent("http://www.HAnim.org"))
    .addMeta(new meta().setName("reference").setContent("http://HAnim.org/Models"))
    .addMeta(new meta().setName("reference").setContent("http://HAnim.org/Nodes"))
    .addMeta(new meta().setName("subject").setContent("Nancy Stand Animation HAnim 2001"))
    .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_StopAnimation.x3d"))
    .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName("license").setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("LOA1_StopAnimation.x3d"))
    .addChild(new ProtoDeclare().setName("LOA1_StopAnimation")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("cycleInterval").setType("SFTime").setAccessType("inputOutput").setValue("0.009999999776482582"))
        .addField(new field().setName("enabled").setType("SFBool").setAccessType("inputOutput").setValue("true"))
        .addField(new field().setName("loop").setType("SFBool").setAccessType("inputOutput").setValue("true"))
        .addField(new field().setName("startTime").setType("SFTime").setAccessType("inputOutput").setValue("0"))
        .addField(new field().setName("stopTime").setType("SFTime").setAccessType("inputOutput").setValue("-1"))
        .addField(new field().setName("fraction_changed").setType("SFFloat").setAccessType("outputOnly"))
        .addField(new field().setName("isActive").setType("SFBool").setAccessType("outputOnly"))
        .addField(new field().setName("HumanoidRoot_translation_changed").setType("SFVec3f").setAccessType("outputOnly"))
        .addField(new field().setName("HumanoidRoot_rotation_changed").setType("SFRotation").setAccessType("outputOnly"))
        .addField(new field().setName("lower_body_rotation_changed").setType("SFRotation").setAccessType("outputOnly"))
        .addField(new field().setName("l_hip_rotation_changed").setType("SFRotation").setAccessType("outputOnly"))
        .addField(new field().setName("l_knee_rotation_changed").setType("SFRotation").setAccessType("outputOnly"))
        .addField(new field().setName("l_ankle_rotation_changed").setType("SFRotation").setAccessType("outputOnly"))
        .addField(new field().setName("l_midtarsal_rotation_changed").setType("SFRotation").setAccessType("outputOnly"))
        .addField(new field().setName("r_hip_rotation_changed").setType("SFRotation").setAccessType("outputOnly"))
        .addField(new field().setName("r_knee_rotation_changed").setType("SFRotation").setAccessType("outputOnly"))
        .addField(new field().setName("r_ankle_rotation_changed").setType("SFRotation").setAccessType("outputOnly"))
        .addField(new field().setName("r_midtarsal_rotation_changed").setType("SFRotation").setAccessType("outputOnly"))
        .addField(new field().setName("vl5_rotation_changed").setType("SFRotation").setAccessType("outputOnly"))
        .addField(new field().setName("skullbase_rotation_changed").setType("SFRotation").setAccessType("outputOnly"))
        .addField(new field().setName("l_shoulder_rotation_changed").setType("SFRotation").setAccessType("outputOnly"))
        .addField(new field().setName("l_elbow_rotation_changed").setType("SFRotation").setAccessType("outputOnly"))
        .addField(new field().setName("l_wrist_rotation_changed").setType("SFRotation").setAccessType("outputOnly"))
        .addField(new field().setName("r_shoulder_rotation_changed").setType("SFRotation").setAccessType("outputOnly"))
        .addField(new field().setName("r_elbow_rotation_changed").setType("SFRotation").setAccessType("outputOnly"))
        .addField(new field().setName("r_wrist_rotation_changed").setType("SFRotation").setAccessType("outputOnly")))
      .setProtoBody(new ProtoBody()
        .addChild(new Group()
          .addChild(new TimeSensor("TIMER")
            .setIS(new IS()
              .addConnect(new connect().setNodeField("cycleInterval").setProtoField("cycleInterval"))
              .addConnect(new connect().setNodeField("enabled").setProtoField("enabled"))
              .addConnect(new connect().setNodeField("loop").setProtoField("loop"))
              .addConnect(new connect().setNodeField("startTime").setProtoField("startTime"))
              .addConnect(new connect().setNodeField("stopTime").setProtoField("stopTime"))
              .addConnect(new connect().setNodeField("fraction_changed").setProtoField("fraction_changed"))
              .addConnect(new connect().setNodeField("isActive").setProtoField("isActive"))))
          .addChild(new PositionInterpolator("HUMANOIDROOT_POSITION_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("HumanoidRoot_translation_changed"))))
          .addChild(new OrientationInterpolator("HUMANOIDROOT_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]"))))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("HumanoidRoot_rotation_changed"))))
          .addChild(new OrientationInterpolator("SACROILIAC_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]"))))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("lower_body_rotation_changed"))))
          .addChild(new OrientationInterpolator("L_HIP_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]"))))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("l_hip_rotation_changed"))))
          .addChild(new OrientationInterpolator("L_KNEE_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]"))))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("l_knee_rotation_changed"))))
          .addChild(new OrientationInterpolator("L_ANKLE_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]"))))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("l_ankle_rotation_changed"))))
          .addChild(new OrientationInterpolator("L_MIDTARSAL_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("l_midtarsal_rotation_changed"))))
          .addChild(new OrientationInterpolator("R_HIP_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]"))))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("r_hip_rotation_changed"))))
          .addChild(new OrientationInterpolator("R_KNEE_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]"))))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("r_knee_rotation_changed"))))
          .addChild(new OrientationInterpolator("R_ANKLE_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]"))))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("r_ankle_rotation_changed"))))
          .addChild(new OrientationInterpolator("R_MIDTARSAL_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("r_midtarsal_rotation_changed"))))
          .addChild(new OrientationInterpolator("VL5_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]"))))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("vl5_rotation_changed"))))
          .addChild(new OrientationInterpolator("SKULLBASE_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]"))))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("skullbase_rotation_changed"))))
          .addChild(new OrientationInterpolator("L_SHOULDER_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]"))))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("l_shoulder_rotation_changed"))))
          .addChild(new OrientationInterpolator("L_ELBOW_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]"))))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("l_elbow_rotation_changed"))))
          .addChild(new OrientationInterpolator("L_WRIST_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]"))))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("l_wrist_rotation_changed"))))
          .addChild(new OrientationInterpolator("R_SHOULDER_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]"))))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("r_shoulder_rotation_changed"))))
          .addChild(new OrientationInterpolator("R_ELBOW_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]"))))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("r_elbow_rotation_changed"))))
          .addChild(new OrientationInterpolator("R_WRIST_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]"))))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("r_wrist_rotation_changed")))))
        .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("HUMANOIDROOT_POSITION_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("HUMANOIDROOT_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("SACROILIAC_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_HIP_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_KNEE_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_ANKLE_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_MIDTARSAL_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_HIP_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_KNEE_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_ANKLE_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_MIDTARSAL_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("VL5_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("SKULLBASE_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_SHOULDER_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_ELBOW_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_WRIST_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_SHOULDER_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_ELBOW_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_WRIST_ANIMATOR").setToField("set_fraction"))))
    .addComments(" ====================================== ")
    .addComments(" Point to example use in case someone inspects this file ")
    .addChild(new Anchor().setDescription("InterchangableActorsViaDynamicRouting").setParameter(new MFString("\"target=_blank\"")).setUrl(new MFString("\"InterchangableActorsViaDynamicRouting.x3d\" \"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d\" \"InterchangableActorsViaDynamicRouting.wrl\" \"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl\""))
      .addChild(new Shape()
        .setGeometry(new Text().setString(this.Text_5_133_string)
          .setFontStyle(new FontStyle().setJustify(new MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(0.8)))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(0.2)))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return LOA1_StopAnimation model
   */
  getX3dModel : function()
  {	  
	  return this.x3dModel;
  },
  
  /** Indicate X3DJSAIL validation results for this X3D model.
   * @return validation results plus exception information, if any
   */
  validateSelf : function()
  {
	var       metaResult = "";
	var validationResult = "";
	var  exceptionResult = "";
	try
	{
		this.initialize();
		
		if ((this.getX3dModel() == null) || (this.getX3dModel().getHead() == null))
		{
			validationResult = "empty scene, nothing to validate. " + this.x3dModel.validate();
			return validationResult;
		}
		// first list informational meta elements of interest
		var metaList = this.getX3dModel().getHead().getMetaList();
		for (var m in metaList) {
			var metaObject = metaList[m];
			if (metaObject.getName() === metaObject.NAME_ERROR ||
				metaObject.getName() === metaObject.NAME_WARNING ||
				metaObject.getName() === metaObject.NAME_HINT ||
				metaObject.getName() === metaObject.NAME_INFO ||
				metaObject.getName() === metaObject.NAME_TODO)
			{
				metaResult += metaObject.toStringX3D();
			}
		}
		validationResult += this.x3dModel.validate(); // walk entire tree to validate correctness
	}
	catch (e)
	{
		exceptionResult = e; // report exception failures, if any
	}
	if  (metaResult === "" && exceptionResult === "" && validationResult === "")
	     return "success";
	else
	{
		var returnMessage = metaResult;
		if  (exceptionResult !== "" && validationResult !== "")
			returnMessage += "\n*** ";
		returnMessage += exceptionResult;
		if  (exceptionResult === "" && validationResult !== "")
			returnMessage = "\n" + returnMessage; // skip line before meta tags, etc.
		returnMessage += validationResult;
		return returnMessage;
	}
  },
    /** Default main() method provided for test purposes.
     * @param argv input parameters
     */
    main : function (argv)
    {
		var testObject = new LOA1_StopAnimation();
		print ("LOA1_StopAnimation execution self-validation test results: " + testObject.validateSelf());
	}
}
new LOA1_StopAnimation().main();