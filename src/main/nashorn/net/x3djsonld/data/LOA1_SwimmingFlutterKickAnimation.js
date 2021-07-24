load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Humanoid animation prototype reusable by any Humanoid. </p>
 <p> Related links: LOA1_SwimmingFlutterKickAnimation.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.LOA1_SwimmingFlutterKickAnimation&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_SwimmingFlutterKickAnimation.x3d">LOA1_SwimmingFlutterKickAnimation.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Humanoid animation prototype reusable by any Humanoid. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Etsuko Lippi </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 13 December 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 23 May 2020 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> not yet tested, need to compare with NancyDivingExample interpolators </td>
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
			<td> Swimming flutter kick Animation HAnim 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_SwimmingFlutterKickAnimation.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_SwimmingFlutterKickAnimation.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.2, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
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

	* @author Etsuko Lippi
 */

function LOA1_SwimmingFlutterKickAnimation
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
LOA1_SwimmingFlutterKickAnimation.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: PositionInterpolator DEF='HUMANOIDROOT_POSITION_ANIMATOR' key field, scene-graph level=6, element #52, 19 total numbers */
	this.HUMANOIDROOT_POSITION_ANIMATOR_6_52_key = new MFFloatObject(Java.to([0.0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1.0], Java.type("float[]")));

	/** Large attribute array: PositionInterpolator DEF='HUMANOIDROOT_POSITION_ANIMATOR' keyValue field, scene-graph level=6, element #52, 57 total numbers made up of 19 3-tuple values */
	this.HUMANOIDROOT_POSITION_ANIMATOR_6_52_keyValue = new MFVec3fObject() /* splitting up long array to improve readability */
	.append(new MFVec3fObject(Java.to([0.0,-0.00928,0.0,0.0,-0.003858,0.0,0.0,-0.008847,0.0,0.0,-0.01486,0.0,0.0,-0.02641,0.0,0.0,-0.03934,0.0,0.0,-0.0502,0.0,0.0,-0.07469,0.0,0.0,-0.02732,0.0,0.0,-0.01608,0.0], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([0.0,-0.01129,0.0,0.0,-0.005819,0.0,0.0,-0.002004,0.0,0.0,-0.002579,0.0,0.0,-0.0143,0.0,0.0,-0.03799,0.0,0.0,-0.05648,0.0,0.0,-0.045,0.0,0.0,-0.00928,0.0], Java.type("float[]"))));

	/** Large attribute array: OrientationInterpolator DEF='L_HIP_ANIMATOR' keyValue field, scene-graph level=6, element #58, 28 total numbers made up of 7 4-tuple values */
	this.L_HIP_ANIMATOR_6_58_keyValue = new MFRotationObject(Java.to([-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-1.0,0.0,0.0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='L_KNEE_ANIMATOR' keyValue field, scene-graph level=6, element #61, 32 total numbers made up of 8 4-tuple values */
	this.L_KNEE_ANIMATOR_6_61_keyValue = new MFRotationObject(Java.to([1.0,0.0,0.0,0.3226,1.0,0.0,0.0,0.1556,1.0,0.0,0.0,0.08678,1.0,0.0,0.0,0.8751,1.0,0.0,0.0,1.131,1.0,0.0,0.0,0.09961,1.0,0.0,0.0,0.3942,1.0,0.0,0.0,0.3226], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='L_ANKLE_ANIMATOR' keyValue field, scene-graph level=6, element #64, 44 total numbers made up of 11 4-tuple values */
	this.L_ANKLE_ANIMATOR_6_64_keyValue = new MFRotationObject() /* splitting up long array to improve readability */
	.append(new MFRotationObject(Java.to([1.0,0.0,0.0,0.6001,1.0,0.0,0.0,0.6509,1.0,0.0,0.0,0.6001,1.0,0.0,0.0,0.6001,1.0,0.0,0.0,0.6509,1.0,0.0,0.0,0.6001,1.0,0.0,0.0,0.6001,1.0,0.0,0.0,0.6509,1.0,0.0,0.0,0.6001,1.0,0.0,0.0,0.6509], Java.type("float[]"))))
	.append(new MFRotationObject(Java.to([1.0,0.0,0.0,0.6001], Java.type("float[]"))));

	/** Large attribute array: OrientationInterpolator DEF='R_HIP_ANIMATOR' keyValue field, scene-graph level=6, element #67, 32 total numbers made up of 8 4-tuple values */
	this.R_HIP_ANIMATOR_6_67_keyValue = new MFRotationObject(Java.to([-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1.0,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9131,-0.06243,-0.403,0.3361,1.0,0.0,0.0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='R_KNEE_ANIMATOR' keyValue field, scene-graph level=6, element #70, 32 total numbers made up of 8 4-tuple values */
	this.R_KNEE_ANIMATOR_6_70_keyValue = new MFRotationObject(Java.to([1.0,0.0,0.0,0.8573,1.0,0.0,0.0,0.5351,1.0,0.0,0.0,0.1756,1.0,0.0,0.0,0.1194,1.0,0.0,0.0,0.3153,1.0,0.0,0.0,0.09354,1.0,0.0,0.0,0.08558,1.0,0.0,0.0,0.8573], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='R_ANKLE_ANIMATOR' keyValue field, scene-graph level=6, element #73, 44 total numbers made up of 11 4-tuple values */
	this.R_ANKLE_ANIMATOR_6_73_keyValue = new MFRotationObject() /* splitting up long array to improve readability */
	.append(new MFRotationObject(Java.to([1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8509,1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8509,1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8509], Java.type("float[]"))))
	.append(new MFRotationObject(Java.to([1.0,0.0,0.0,0.86001], Java.type("float[]"))));

	/** Large attribute array: OrientationInterpolator DEF='VL5_ANIMATOR' keyValue field, scene-graph level=6, element #76, 24 total numbers made up of 6 4-tuple values */
	this.VL5_ANIMATOR_6_76_keyValue = new MFRotationObject(Java.to([0.0,1.0,0.0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0.0,1.0,0.0,0.0826], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='SKULLBASE_ANIMATOR' keyValue field, scene-graph level=6, element #79, 56 total numbers made up of 14 4-tuple values */
	this.SKULLBASE_ANIMATOR_6_79_keyValue = new MFRotationObject() /* splitting up long array to improve readability */
	.append(new MFRotationObject(Java.to([-1.0,0.0,0.0,1.0,-1.0,0.0,0.0,1.0,-1.0,0.0,0.0,0.999,-1.0,0.0,0.0,0.99,-1.0,0.0,0.0,0.99,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9], Java.type("float[]"))))
	.append(new MFRotationObject(Java.to([-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,1.0], Java.type("float[]"))));

	/** Large attribute array: OrientationInterpolator DEF='L_SHOULDER_ANIMATOR' keyValue field, scene-graph level=6, element #82, 28 total numbers made up of 7 4-tuple values */
	this.L_SHOULDER_ANIMATOR_6_82_keyValue = new MFRotationObject(Java.to([0.0,0.0,1.0,0.1,0.0,0.0,1.0,0.2,0.0,0.0,1.0,0.2,0.86,0.25,0.42,0.5,0.86,0.25,0.42,0.8,0.86,0.25,0.42,0.4,0.86,0.25,0.42,0.2], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='L_ELBOW_ANIMATOR' keyValue field, scene-graph level=6, element #85, 24 total numbers made up of 6 4-tuple values */
	this.L_ELBOW_ANIMATOR_6_85_keyValue = new MFRotationObject(Java.to([0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.1229,-1.0,0.0,0.0,0.1229,-1.0,0.0,0.0,0.5976,-1.0,0.0,0.0,0.3917,0.0,0.0,1.0,0.0], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='R_SHOULDER_ANIMATOR' keyValue field, scene-graph level=6, element #91, 24 total numbers made up of 6 4-tuple values */
	this.R_SHOULDER_ANIMATOR_6_91_keyValue = new MFRotationObject(Java.to([0.0,0.0,1.0,0.0,0.9992,0.02042,0.03558,7.2,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0.0,0.0,1.0,0.0], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='R_ELBOW_ANIMATOR' keyValue field, scene-graph level=6, element #94, 24 total numbers made up of 6 4-tuple values */
	this.R_ELBOW_ANIMATOR_6_94_keyValue = new MFRotationObject(Java.to([0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.04151,-1.0,0.0,0.0,0.04151,-1.0,0.0,0.0,0.5855,-1.0,0.0,0.0,0.5852,0.0,0.0,1.0,0.0], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='R_WRIST_ANIMATOR' keyValue field, scene-graph level=6, element #97, 24 total numbers made up of 6 4-tuple values */
	this.R_WRIST_ANIMATOR_6_97_keyValue = new MFRotationObject(Java.to([0.0,0.0,1.0,0.0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0.0,1.0,0.0,0.497349,0.0,0.0,1.0,0.0], Java.type("float[]")));

	/** Large attribute array: Text string field, scene-graph level=5, element #120, 14 total values */
	this.Text_5_120_string = new MFStringObject(new MFStringObject("\"LOA1_SwimmingFlutterKickAnimation.x3d\" \"defines a prototype\" \"for animating a humanoid.\" \"\" \"Click text to see example.\""));
  this.x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("LOA1_SwimmingFlutterKickAnimation.x3d"))
    .addMeta(new metaObject().setName("description").setContent("Humanoid animation prototype reusable by any Humanoid."))
    .addMeta(new metaObject().setName("creator").setContent("Etsuko Lippi"))
    .addMeta(new metaObject().setName("created").setContent("13 December 2001"))
    .addMeta(new metaObject().setName("modified").setContent("23 May 2020"))
    .addMeta(new metaObject().setName("warning").setContent("not yet tested, need to compare with NancyDivingExample interpolators"))
    .addMeta(new metaObject().setName("reference").setContent("http://www.HAnim.org"))
    .addMeta(new metaObject().setName("reference").setContent("http://HAnim.org/Models"))
    .addMeta(new metaObject().setName("reference").setContent("http://HAnim.org/Nodes"))
    .addMeta(new metaObject().setName("subject").setContent("Swimming flutter kick Animation HAnim 2001"))
    .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_SwimmingFlutterKickAnimation.x3d"))
    .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName("license").setContent("../license.html")))
  .setScene(new SceneObject()
    .addChild(new WorldInfoObject().setTitle("LOA1_SwimmingFlutterKickAnimation.x3d"))
    .addChild(new ProtoDeclareObject().setName("LOA1_DivingAnimation")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("inputOutput").setName("cycleInterval").setType("SFTime").setValue("7"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("enabled").setType("SFBool").setValue("true"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("loop").setType("SFBool").setValue("true"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("startTime").setType("SFTime").setValue("0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("stopTime").setType("SFTime").setValue("-1"))
        .addField(new fieldObject().setAccessType("outputOnly").setName("fraction_changed").setType("SFFloat"))
        .addField(new fieldObject().setAccessType("outputOnly").setName("isActive").setType("SFBool"))
        .addField(new fieldObject().setAccessType("outputOnly").setName("HumanoidRoot_translation_changed").setType("SFVec3f"))
        .addField(new fieldObject().setAccessType("outputOnly").setName("HumanoidRoot_rotation_changed").setType("SFRotation"))
        .addField(new fieldObject().setAccessType("outputOnly").setName("lower_body_rotation_changed").setType("SFRotation"))
        .addField(new fieldObject().setAccessType("outputOnly").setName("l_hip_rotation_changed").setType("SFRotation"))
        .addField(new fieldObject().setAccessType("outputOnly").setName("l_knee_rotation_changed").setType("SFRotation"))
        .addField(new fieldObject().setAccessType("outputOnly").setName("l_ankle_rotation_changed").setType("SFRotation"))
        .addField(new fieldObject().setAccessType("outputOnly").setName("l_midtarsal_rotation_changed").setType("SFRotation"))
        .addField(new fieldObject().setAccessType("outputOnly").setName("r_hip_rotation_changed").setType("SFRotation"))
        .addField(new fieldObject().setAccessType("outputOnly").setName("r_knee_rotation_changed").setType("SFRotation"))
        .addField(new fieldObject().setAccessType("outputOnly").setName("r_ankle_rotation_changed").setType("SFRotation"))
        .addField(new fieldObject().setAccessType("outputOnly").setName("r_midtarsal_rotation_changed").setType("SFRotation"))
        .addField(new fieldObject().setAccessType("outputOnly").setName("vl5_rotation_changed").setType("SFRotation"))
        .addField(new fieldObject().setAccessType("outputOnly").setName("skullbase_rotation_changed").setType("SFRotation"))
        .addField(new fieldObject().setAccessType("outputOnly").setName("l_shoulder_rotation_changed").setType("SFRotation"))
        .addField(new fieldObject().setAccessType("outputOnly").setName("l_elbow_rotation_changed").setType("SFRotation"))
        .addField(new fieldObject().setAccessType("outputOnly").setName("l_wrist_rotation_changed").setType("SFRotation"))
        .addField(new fieldObject().setAccessType("outputOnly").setName("r_shoulder_rotation_changed").setType("SFRotation"))
        .addField(new fieldObject().setAccessType("outputOnly").setName("r_elbow_rotation_changed").setType("SFRotation"))
        .addField(new fieldObject().setAccessType("outputOnly").setName("r_wrist_rotation_changed").setType("SFRotation")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new GroupObject()
          .addChild(new TimeSensorObject("TIMER").setLoop(true)
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("cycleInterval").setProtoField("cycleInterval"))
              .addConnect(new connectObject().setNodeField("enabled").setProtoField("enabled"))
              .addConnect(new connectObject().setNodeField("loop").setProtoField("loop"))
              .addConnect(new connectObject().setNodeField("startTime").setProtoField("startTime"))
              .addConnect(new connectObject().setNodeField("stopTime").setProtoField("stopTime"))
              .addConnect(new connectObject().setNodeField("fraction_changed").setProtoField("fraction_changed"))
              .addConnect(new connectObject().setNodeField("isActive").setProtoField("isActive"))))
          .addChild(new PositionInterpolatorObject("HUMANOIDROOT_POSITION_ANIMATOR").setKeyValue(this.HUMANOIDROOT_POSITION_ANIMATOR_6_52_keyValue).setKey(this.HUMANOIDROOT_POSITION_ANIMATOR_6_52_key)
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("value_changed").setProtoField("HumanoidRoot_translation_changed"))))
          .addChild(new OrientationInterpolatorObject("HUMANOIDROOT_ANIMATOR").setKeyValue(new MFRotationObject(Java.to([0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0], Java.type("float[]")))).setKey(Java.to([0.0,1.0], Java.type("float[]")))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("value_changed").setProtoField("HumanoidRoot_rotation_changed"))))
          .addComments(" no SACROILIAC_ANIMATOR ")
          .addChild(new OrientationInterpolatorObject("L_HIP_ANIMATOR").setKeyValue(this.L_HIP_ANIMATOR_6_58_keyValue).setKey(Java.to([0.0,0.25,0.375,0.6667,0.7917,0.9167,1.0], Java.type("float[]")))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("value_changed").setProtoField("l_hip_rotation_changed"))))
          .addChild(new OrientationInterpolatorObject("L_KNEE_ANIMATOR").setKey(Java.to([0.0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1.0], Java.type("float[]"))).setKeyValue(this.L_KNEE_ANIMATOR_6_61_keyValue)
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("value_changed").setProtoField("l_knee_rotation_changed"))))
          .addChild(new OrientationInterpolatorObject("L_ANKLE_ANIMATOR").setKey(Java.to([0.0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1.0], Java.type("float[]"))).setKeyValue(this.L_ANKLE_ANIMATOR_6_64_keyValue)
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("value_changed").setProtoField("l_ankle_rotation_changed"))))
          .addComments(" no L_MIDTARSAL_ANIMATOR ")
          .addChild(new OrientationInterpolatorObject("R_HIP_ANIMATOR").setKeyValue(this.R_HIP_ANIMATOR_6_67_keyValue).setKey(Java.to([0.0,0.125,0.2083,0.2917,0.5,0.7917,0.9167,1.0], Java.type("float[]")))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("value_changed").setProtoField("r_hip_rotation_changed"))))
          .addChild(new OrientationInterpolatorObject("R_KNEE_ANIMATOR").setKey(Java.to([0.0,0.125,0.2083,0.375,0.5,0.6667,0.9167,1.0], Java.type("float[]"))).setKeyValue(this.R_KNEE_ANIMATOR_6_70_keyValue)
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("value_changed").setProtoField("r_knee_rotation_changed"))))
          .addChild(new OrientationInterpolatorObject("R_ANKLE_ANIMATOR").setKey(Java.to([0.0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1.0], Java.type("float[]"))).setKeyValue(this.R_ANKLE_ANIMATOR_6_73_keyValue)
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("value_changed").setProtoField("r_ankle_rotation_changed"))))
          .addComments(" no L_MIDTARSAL_ANIMATOR ")
          .addChild(new OrientationInterpolatorObject("VL5_ANIMATOR").setKey(Java.to([0.0,0.2083,0.375,0.75,0.8333,1.0], Java.type("float[]"))).setKeyValue(this.VL5_ANIMATOR_6_76_keyValue)
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("value_changed").setProtoField("vl5_rotation_changed"))))
          .addChild(new OrientationInterpolatorObject("SKULLBASE_ANIMATOR").setKeyValue(this.SKULLBASE_ANIMATOR_6_79_keyValue).setKey(Java.to([0.0,0.28,0.3,0.32,0.4,0.45,0.60,0.65,0.70,0.75,0.85,0.90,0.95,1.0], Java.type("float[]")))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("value_changed").setProtoField("skullbase_rotation_changed"))))
          .addChild(new OrientationInterpolatorObject("L_SHOULDER_ANIMATOR").setKeyValue(this.L_SHOULDER_ANIMATOR_6_82_keyValue).setKey(Java.to([0.0,0.25,0.375,0.6667,0.7917,0.9167,1.0], Java.type("float[]")))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("value_changed").setProtoField("l_shoulder_rotation_changed"))))
          .addChild(new OrientationInterpolatorObject("L_ELBOW_ANIMATOR").setKeyValue(this.L_ELBOW_ANIMATOR_6_85_keyValue).setKey(Java.to([0.0,0.28,0.32,0.64,0.76,1.0], Java.type("float[]")))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("value_changed").setProtoField("l_elbow_rotation_changed"))))
          .addChild(new OrientationInterpolatorObject("L_WRIST_ANIMATOR").setKeyValue(new MFRotationObject(Java.to([0.0,0.0,1.0,0.0,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0.0,0.0,1.0,0.0], Java.type("float[]")))).setKey(Java.to([0.0,0.32,0.64,0.88,1.0], Java.type("float[]")))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("value_changed").setProtoField("l_wrist_rotation_changed"))))
          .addChild(new OrientationInterpolatorObject("R_SHOULDER_ANIMATOR").setKeyValue(this.R_SHOULDER_ANIMATOR_6_91_keyValue).setKey(Java.to([0.0,0.45,0.64,0.76,0.88,1.0], Java.type("float[]")))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("value_changed").setProtoField("r_shoulder_rotation_changed"))))
          .addChild(new OrientationInterpolatorObject("R_ELBOW_ANIMATOR").setKeyValue(this.R_ELBOW_ANIMATOR_6_94_keyValue).setKey(Java.to([0.0,0.28,0.32,0.64,0.76,1.0], Java.type("float[]")))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("value_changed").setProtoField("r_elbow_rotation_changed"))))
          .addChild(new OrientationInterpolatorObject("R_WRIST_ANIMATOR").setKeyValue(this.R_WRIST_ANIMATOR_6_97_keyValue).setKey(Java.to([0.0,0.28,0.32,0.64,0.76,1.0], Java.type("float[]")))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("value_changed").setProtoField("r_wrist_rotation_changed")))))
        .addChild(new ROUTEObject().setFromNode("TIMER").setFromField("fraction_changed").setToNode("HUMANOIDROOT_POSITION_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TIMER").setFromField("fraction_changed").setToNode("HUMANOIDROOT_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TIMER").setFromField("fraction_changed").setToNode("SKULLBASE_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TIMER").setFromField("fraction_changed").setToNode("VL5_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_HIP_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_KNEE_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_ANKLE_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_HIP_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_KNEE_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_ANKLE_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_SHOULDER_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_ELBOW_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_WRIST_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_SHOULDER_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_ELBOW_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_WRIST_ANIMATOR").setToField("set_fraction"))))
    .addChild(new ViewpointObject().setDescription("LOA1_SwimmingFlutterKickAnimation scene").setPosition(0.0,0.0,12.0))
    .addChild(new AnchorObject().setDescription("Nancy Diving").setParameter(new MFStringObject("\"target=_blank\"")).setUrl(new MFStringObject("\"NancyDiving.x3d\" \"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.x3d\" \"NancyDiving.wrl\" \"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.wrl\""))
      .addChild(new ShapeObject()
        .setGeometry(new TextObject().setString(this.Text_5_120_string)
          .setFontStyle(new FontStyleObject().setJustify(new MFStringObject("\"MIDDLE\" \"MIDDLE\"")).setSize(0.8)))
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setDiffuseColor(1.0,1.0,0.2))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return LOA1_SwimmingFlutterKickAnimation model
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
			meta = metaList[m];
			if (meta.getName().equals(metaObject.NAME_ERROR) ||
				meta.getName().equals(metaObject.NAME_WARNING) ||
				meta.getName().equals(metaObject.NAME_HINT) ||
				meta.getName().equals(metaObject.NAME_INFO) ||
				meta.getName().equals(metaObject.NAME_TODO))
			{
				metaResult += meta.toStringX3D();
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
		var testObject = new LOA1_SwimmingFlutterKickAnimation();
		print ("LOA1_SwimmingFlutterKickAnimation execution self-validation test results: " + testObject.validateSelf());
	}
}
new LOA1_SwimmingFlutterKickAnimation().main();