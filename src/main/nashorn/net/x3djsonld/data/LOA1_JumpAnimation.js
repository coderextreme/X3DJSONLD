load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Humanoid animation prototype reusable by any Humanoid. </p>
 <p> Related links: LOA1_JumpAnimation.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.LOA1_JumpAnimation&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_JumpAnimation.x3d">LOA1_JumpAnimation.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Humanoid animation prototype reusable by any Humanoid. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Cindy Ballreich cindy@ballreich.net 3Name3D </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> rights </i> </td>
			<td> 1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Scott Tufts </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
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
			<td> InterchangableActorsViaDynamicRouting Nancy jump Animation HAnim 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_JumpAnimation.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_JumpAnimation.x3d</a> </td>
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

	* @author Cindy Ballreich cindy@ballreich.net 3Name3D
 */

function LOA1_JumpAnimation
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
LOA1_JumpAnimation.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: PositionInterpolator DEF='HUMANOIDROOT_POSITION_ANIMATOR' keyValue field, scene-graph level=6, element #54, 63 total numbers made up of 21 3-tuple values */
	this.HUMANOIDROOT_POSITION_ANIMATOR_6_54_keyValue = new MFVec3fObject() /* splitting up long array to improve readability */
	.append(new MFVec3fObject(Java.to([0.0,0.0,0.0,0.0,-0.01264,-0.01289,0.0,-0.04712,-0.03738,-3.345E-4,-0.1049,-0.05353,-5.712E-4,-0.1892,-0.06561,-8.233E-4,-0.286,-0.06276,-9.591E-4,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.3269,-0.1499], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([-8.616E-4,-0.13,-0.06358,-5.128E-4,-0.03123,-0.05488,4.779E-4,0.053,0.02732,1.728E-4,0.4148,0.006873,0.0,0.03045,0.02148,0.0,-0.01299,-0.01057,0.0,-0.06932,-0.01064,1.365E-4,-0.1037,-0.005059,1.279E-4,-0.07198,-0.007596,1.41E-4,-0.01626,-0.004935], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([0.0,0.0,0.0], Java.type("float[]"))));

	/** Large attribute array: OrientationInterpolator DEF='HUMANOIDROOT_ANIMATOR' keyValue field, scene-graph level=6, element #57, 28 total numbers made up of 7 4-tuple values */
	this.HUMANOIDROOT_ANIMATOR_6_57_keyValue = new MFRotationObject(Java.to([0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.3273,1.0,0.0,0.0,0.3273,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='SACROILIAC_ANIMATOR' keyValue field, scene-graph level=6, element #60, 24 total numbers made up of 6 4-tuple values */
	this.SACROILIAC_ANIMATOR_6_60_keyValue = new MFRotationObject(Java.to([0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.1892,1.0,0.0,0.0,0.1892,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='L_HIP_ANIMATOR' keyValue field, scene-graph level=6, element #63, 44 total numbers made up of 11 4-tuple values */
	this.L_HIP_ANIMATOR_6_63_keyValue = new MFRotationObject() /* splitting up long array to improve readability */
	.append(new MFRotationObject(Java.to([0.0,0.0,1.0,0.0,1.0,0.0,0.0,4.349,1.0,0.0,0.0,4.349,1.0,0.0,0.0,4.615,-1.0,0.0,0.0,0.9136,-1.0,0.0,0.0,0.3614,0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.7869,-1.0,0.0,0.0,0.3918,-1.0,0.0,0.0,0.5433], Java.type("float[]"))))
	.append(new MFRotationObject(Java.to([0.0,0.0,1.0,0.0], Java.type("float[]"))));

	/** Large attribute array: OrientationInterpolator DEF='L_KNEE_ANIMATOR' keyValue field, scene-graph level=6, element #66, 32 total numbers made up of 8 4-tuple values */
	this.L_KNEE_ANIMATOR_6_66_keyValue = new MFRotationObject(Java.to([0.0,0.0,1.0,0.0,1.0,0.0,0.0,2.047,1.0,0.0,0.0,2.047,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.566,1.0,0.0,0.0,0.5913,1.0,0.0,0.0,0.9235,0.0,0.0,1.0,0.0], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='L_ANKLE_ANIMATOR' keyValue field, scene-graph level=6, element #69, 56 total numbers made up of 14 4-tuple values */
	this.L_ANKLE_ANIMATOR_6_69_keyValue = new MFRotationObject() /* splitting up long array to improve readability */
	.append(new MFRotationObject(Java.to([0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.625,-1.0,0.0,0.0,0.625,-1.0,0.0,0.0,0.3364,-1.0,0.0,0.0,0.2742,-1.0,0.0,0.0,0.05078,1.0,0.0,0.0,0.2833,1.0,0.0,0.0,0.6667,1.0,0.0,0.0,0.2833,-1.0,0.0,0.0,0.2108], Java.type("float[]"))))
	.append(new MFRotationObject(Java.to([-1.0,0.0,0.0,0.375,-1.0,0.0,0.0,0.3146,-1.0,0.0,0.0,0.1174,0.0,0.0,1.0,0.0], Java.type("float[]"))));

	/** Large attribute array: OrientationInterpolator DEF='R_HIP_ANIMATOR' keyValue field, scene-graph level=6, element #75, 44 total numbers made up of 11 4-tuple values */
	this.R_HIP_ANIMATOR_6_75_keyValue = new MFRotationObject() /* splitting up long array to improve readability */
	.append(new MFRotationObject(Java.to([0.0,0.0,1.0,0.0,1.0,0.0,0.0,4.433,1.0,0.0,0.0,4.433,1.0,0.0,0.0,4.647,-1.0,0.0,0.0,0.8943,-1.0,0.0,0.0,0.3698,0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.4963,-1.0,0.0,0.0,0.3829,-1.0,0.0,0.0,0.5169], Java.type("float[]"))))
	.append(new MFRotationObject(Java.to([0.0,0.0,1.0,0.0], Java.type("float[]"))));

	/** Large attribute array: OrientationInterpolator DEF='R_KNEE_ANIMATOR' keyValue field, scene-graph level=6, element #78, 32 total numbers made up of 8 4-tuple values */
	this.R_KNEE_ANIMATOR_6_78_keyValue = new MFRotationObject(Java.to([0.0,0.0,1.0,0.0,1.0,0.0,0.0,2.005,1.0,0.0,0.0,2.005,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.9507,1.0,0.0,0.0,0.5845,1.0,0.0,0.0,0.9054,0.0,0.0,1.0,0.0], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='R_ANKLE_ANIMATOR' keyValue field, scene-graph level=6, element #81, 56 total numbers made up of 14 4-tuple values */
	this.R_ANKLE_ANIMATOR_6_81_keyValue = new MFRotationObject() /* splitting up long array to improve readability */
	.append(new MFRotationObject(Java.to([0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.6735,-1.0,0.0,0.0,0.6735,-1.0,0.0,0.0,0.3527,-1.0,0.0,0.0,0.3038,-1.0,0.0,0.0,0.07964,1.0,0.0,0.0,0.3001,1.0,0.0,0.0,0.6509,1.0,0.0,0.0,0.3001,-1.0,0.0,0.0,0.2087], Java.type("float[]"))))
	.append(new MFRotationObject(Java.to([-1.0,0.0,0.0,0.3756,-1.0,0.0,0.0,0.3279,-1.0,0.0,0.0,0.1193,0.0,0.0,1.0,0.0], Java.type("float[]"))));

	/** Large attribute array: OrientationInterpolator DEF='VL5_ANIMATOR' keyValue field, scene-graph level=6, element #87, 24 total numbers made up of 6 4-tuple values */
	this.VL5_ANIMATOR_6_87_keyValue = new MFRotationObject(Java.to([0.0,1.0,0.0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0.0,1.0,0.0,0.0826], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='SKULLBASE_ANIMATOR' keyValue field, scene-graph level=6, element #90, 24 total numbers made up of 6 4-tuple values */
	this.SKULLBASE_ANIMATOR_6_90_keyValue = new MFRotationObject(Java.to([0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.5989,-1.0,0.0,0.0,0.5989,-1.0,0.0,0.0,0.3216,1.0,0.0,0.0,0.06503,0.0,0.0,1.0,0.0], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='L_SHOULDER_ANIMATOR' keyValue field, scene-graph level=6, element #93, 28 total numbers made up of 7 4-tuple values */
	this.L_SHOULDER_ANIMATOR_6_93_keyValue = new MFRotationObject(Java.to([0.0,0.0,1.0,0.0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1.0,4.113E-4,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0.0,0.0,1.0,0.0], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='L_ELBOW_ANIMATOR' keyValue field, scene-graph level=6, element #96, 24 total numbers made up of 6 4-tuple values */
	this.L_ELBOW_ANIMATOR_6_96_keyValue = new MFRotationObject(Java.to([0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.1229,-1.0,0.0,0.0,0.1229,-1.0,0.0,0.0,0.5976,-1.0,0.0,0.0,0.3917,0.0,0.0,1.0,0.0], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='L_WRIST_ANIMATOR' keyValue field, scene-graph level=6, element #99, 28 total numbers made up of 7 4-tuple values */
	this.L_WRIST_ANIMATOR_6_99_keyValue = new MFRotationObject(Java.to([0.0,0.0,1.0,0.0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0.0,-1.0,0.0,0.655922,-5.0618E-4,-0.999999,0.0012782,1.28397,0.0,0.0,1.0,0.0], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='R_SHOULDER_ANIMATOR' keyValue field, scene-graph level=6, element #102, 28 total numbers made up of 7 4-tuple values */
	this.R_SHOULDER_ANIMATOR_6_102_keyValue = new MFRotationObject(Java.to([0.0,0.0,1.0,0.0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0.0,0.0,1.0,0.0], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='R_ELBOW_ANIMATOR' keyValue field, scene-graph level=6, element #105, 24 total numbers made up of 6 4-tuple values */
	this.R_ELBOW_ANIMATOR_6_105_keyValue = new MFRotationObject(Java.to([0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.04151,-1.0,0.0,0.0,0.04151,-1.0,0.0,0.0,0.5855,-1.0,0.0,0.0,0.5852,0.0,0.0,1.0,0.0], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='R_WRIST_ANIMATOR' keyValue field, scene-graph level=6, element #108, 24 total numbers made up of 6 4-tuple values */
	this.R_WRIST_ANIMATOR_6_108_keyValue = new MFRotationObject(Java.to([0.0,0.0,1.0,0.0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0.0,1.0,0.0,0.497349,0.0,0.0,1.0,0.0], Java.type("float[]")));

	/** Large attribute array: Text string field, scene-graph level=5, element #133, 16 total values */
	this.Text_5_133_string = new MFStringObject(new MFStringObject("\"LOA1_JumpAnimation.x3d\" \"defines a prototype\" \"for animating a humanoid.\" \"\" \"Click this text to see\" \"InterchangableActorsViaDynamicRouting example.\""));
  this.x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("LOA1_JumpAnimation.x3d"))
    .addMeta(new metaObject().setName("description").setContent("Humanoid animation prototype reusable by any Humanoid."))
    .addMeta(new metaObject().setName("creator").setContent("Cindy Ballreich cindy@ballreich.net 3Name3D"))
    .addMeta(new metaObject().setName("rights").setContent("1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved."))
    .addMeta(new metaObject().setName("translator").setContent("Scott Tufts"))
    .addMeta(new metaObject().setName("translated").setContent("1 December 2001"))
    .addMeta(new metaObject().setName("modified").setContent("23 May 2020"))
    .addMeta(new metaObject().setName("reference").setContent("http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl"))
    .addMeta(new metaObject().setName("reference").setContent("http://www.HAnim.org"))
    .addMeta(new metaObject().setName("reference").setContent("http://HAnim.org/Models"))
    .addMeta(new metaObject().setName("reference").setContent("http://HAnim.org/Nodes"))
    .addMeta(new metaObject().setName("subject").setContent("InterchangableActorsViaDynamicRouting Nancy jump Animation HAnim 2001"))
    .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_JumpAnimation.x3d"))
    .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName("license").setContent("../license.html")))
  .setScene(new SceneObject()
    .addChild(new WorldInfoObject().setTitle("LOA1_JumpAnimation.x3d"))
    .addChild(new ProtoDeclareObject().setName("LOA1_JumpAnimation")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("inputOutput").setName("cycleInterval").setType("SFTime").setValue("2"))
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
          .addChild(new PositionInterpolatorObject("HUMANOIDROOT_POSITION_ANIMATOR").setKeyValue(this.HUMANOIDROOT_POSITION_ANIMATOR_6_54_keyValue).setKey(Java.to([0.0,0.04,0.08,0.12,0.16,0.2,0.24,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.8,0.84,0.88,0.92,0.96,1.0], Java.type("float[]")))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("value_changed").setProtoField("HumanoidRoot_translation_changed"))))
          .addChild(new OrientationInterpolatorObject("HUMANOIDROOT_ANIMATOR").setKeyValue(this.HUMANOIDROOT_ANIMATOR_6_57_keyValue).setKey(Java.to([0.0,0.28,0.32,0.48,0.64,0.76,1.0], Java.type("float[]")))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("value_changed").setProtoField("HumanoidRoot_rotation_changed"))))
          .addChild(new OrientationInterpolatorObject("SACROILIAC_ANIMATOR").setKeyValue(this.SACROILIAC_ANIMATOR_6_60_keyValue).setKey(Java.to([0.0,0.28,0.32,0.48,0.76,1.0], Java.type("float[]")))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("value_changed").setProtoField("lower_body_rotation_changed"))))
          .addChild(new OrientationInterpolatorObject("L_HIP_ANIMATOR").setKeyValue(this.L_HIP_ANIMATOR_6_63_keyValue).setKey(Java.to([0.0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1.0], Java.type("float[]")))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("value_changed").setProtoField("l_hip_rotation_changed"))))
          .addChild(new OrientationInterpolatorObject("L_KNEE_ANIMATOR").setKeyValue(this.L_KNEE_ANIMATOR_6_66_keyValue).setKey(Java.to([0.0,0.28,0.32,0.48,0.64,0.76,0.88,1.0], Java.type("float[]")))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("value_changed").setProtoField("l_knee_rotation_changed"))))
          .addChild(new OrientationInterpolatorObject("L_ANKLE_ANIMATOR").setKeyValue(this.L_ANKLE_ANIMATOR_6_69_keyValue).setKey(Java.to([0.0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1.0], Java.type("float[]")))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("value_changed").setProtoField("l_ankle_rotation_changed"))))
          .addChild(new OrientationInterpolatorObject("L_MIDTARSAL_ANIMATOR").setKey(Java.to([0.0,0.5,1.0], Java.type("float[]"))).setKeyValue(new MFRotationObject(Java.to([1.0,0.0,0.0,0.0,1.0,0.0,0.0,-0.2,1.0,0.0,0.0,0.0], Java.type("float[]"))))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("value_changed").setProtoField("l_midtarsal_rotation_changed"))))
          .addChild(new OrientationInterpolatorObject("R_HIP_ANIMATOR").setKeyValue(this.R_HIP_ANIMATOR_6_75_keyValue).setKey(Java.to([0.0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1.0], Java.type("float[]")))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("value_changed").setProtoField("r_hip_rotation_changed"))))
          .addChild(new OrientationInterpolatorObject("R_KNEE_ANIMATOR").setKeyValue(this.R_KNEE_ANIMATOR_6_78_keyValue).setKey(Java.to([0.0,0.28,0.32,0.48,0.64,0.76,0.88,1.0], Java.type("float[]")))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("value_changed").setProtoField("r_knee_rotation_changed"))))
          .addChild(new OrientationInterpolatorObject("R_ANKLE_ANIMATOR").setKeyValue(this.R_ANKLE_ANIMATOR_6_81_keyValue).setKey(Java.to([0.0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1.0], Java.type("float[]")))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("value_changed").setProtoField("r_ankle_rotation_changed"))))
          .addChild(new OrientationInterpolatorObject("R_MIDTARSAL_ANIMATOR").setKey(Java.to([0.0,0.5,1.0], Java.type("float[]"))).setKeyValue(new MFRotationObject(Java.to([1.0,0.0,0.0,-0.2,1.0,0.0,0.0,0.0,1.0,0.0,0.0,-0.2], Java.type("float[]"))))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("value_changed").setProtoField("r_midtarsal_rotation_changed"))))
          .addChild(new OrientationInterpolatorObject("VL5_ANIMATOR").setKey(Java.to([0.0,0.2083,0.375,0.75,0.8333,1.0], Java.type("float[]"))).setKeyValue(this.VL5_ANIMATOR_6_87_keyValue)
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("value_changed").setProtoField("vl5_rotation_changed"))))
          .addChild(new OrientationInterpolatorObject("SKULLBASE_ANIMATOR").setKeyValue(this.SKULLBASE_ANIMATOR_6_90_keyValue).setKey(Java.to([0.0,0.28,0.32,0.48,0.76,1.0], Java.type("float[]")))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("value_changed").setProtoField("skullbase_rotation_changed"))))
          .addChild(new OrientationInterpolatorObject("L_SHOULDER_ANIMATOR").setKeyValue(this.L_SHOULDER_ANIMATOR_6_93_keyValue).setKey(Java.to([0.0,0.28,0.32,0.64,0.76,0.88,1.0], Java.type("float[]")))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("value_changed").setProtoField("l_shoulder_rotation_changed"))))
          .addChild(new OrientationInterpolatorObject("L_ELBOW_ANIMATOR").setKeyValue(this.L_ELBOW_ANIMATOR_6_96_keyValue).setKey(Java.to([0.0,0.28,0.32,0.64,0.76,1.0], Java.type("float[]")))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("value_changed").setProtoField("l_elbow_rotation_changed"))))
          .addChild(new OrientationInterpolatorObject("L_WRIST_ANIMATOR").setKeyValue(this.L_WRIST_ANIMATOR_6_99_keyValue).setKey(Java.to([0.0,0.28,0.32,0.64,0.76,0.88,1.0], Java.type("float[]")))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("value_changed").setProtoField("l_wrist_rotation_changed"))))
          .addChild(new OrientationInterpolatorObject("R_SHOULDER_ANIMATOR").setKeyValue(this.R_SHOULDER_ANIMATOR_6_102_keyValue).setKey(Java.to([0.0,0.28,0.32,0.64,0.76,0.88,1.0], Java.type("float[]")))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("value_changed").setProtoField("r_shoulder_rotation_changed"))))
          .addChild(new OrientationInterpolatorObject("R_ELBOW_ANIMATOR").setKeyValue(this.R_ELBOW_ANIMATOR_6_105_keyValue).setKey(Java.to([0.0,0.28,0.32,0.64,0.76,1.0], Java.type("float[]")))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("value_changed").setProtoField("r_elbow_rotation_changed"))))
          .addChild(new OrientationInterpolatorObject("R_WRIST_ANIMATOR").setKeyValue(this.R_WRIST_ANIMATOR_6_108_keyValue).setKey(Java.to([0.0,0.28,0.32,0.64,0.76,1.0], Java.type("float[]")))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("value_changed").setProtoField("r_wrist_rotation_changed")))))
        .addChild(new ROUTEObject().setFromNode("TIMER").setFromField("fraction_changed").setToNode("HUMANOIDROOT_POSITION_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TIMER").setFromField("fraction_changed").setToNode("HUMANOIDROOT_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TIMER").setFromField("fraction_changed").setToNode("SACROILIAC_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_HIP_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_KNEE_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_ANKLE_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_MIDTARSAL_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_HIP_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_KNEE_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_ANKLE_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_MIDTARSAL_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TIMER").setFromField("fraction_changed").setToNode("VL5_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TIMER").setFromField("fraction_changed").setToNode("SKULLBASE_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_SHOULDER_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_ELBOW_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_WRIST_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_SHOULDER_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_ELBOW_ANIMATOR").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_WRIST_ANIMATOR").setToField("set_fraction"))))
    .addChild(new AnchorObject().setDescription("see InterchangableActorsViaDynamicRouting scene").setParameter(new MFStringObject("\"target=_blank\"")).setUrl(new MFStringObject("\"InterchangableActorsViaDynamicRouting.x3d\" \"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d\" \"InterchangableActorsViaDynamicRouting.wrl\" \"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl\""))
      .addChild(new ShapeObject()
        .setGeometry(new TextObject().setString(this.Text_5_133_string)
          .setFontStyle(new FontStyleObject().setJustify(new MFStringObject("\"MIDDLE\" \"MIDDLE\"")).setSize(0.8)))
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setDiffuseColor(1.0,1.0,0.2))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return LOA1_JumpAnimation model
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
		var testObject = new LOA1_JumpAnimation();
		print ("LOA1_JumpAnimation execution self-validation test results: " + testObject.validateSelf());
	}
}
new LOA1_JumpAnimation().main();