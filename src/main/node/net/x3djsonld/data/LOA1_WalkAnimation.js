var java = require('java');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: require('util').promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
var autoclass = require('./X3Dautoclass');

// Javadoc annotations follow, see below for source.
/**
 * <p> Humanoid animation prototype reusable by any Humanoid. </p>
 <p> Related links: LOA1_WalkAnimation.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.LOA1_WalkAnimation&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.x3d">LOA1_WalkAnimation.x3d</a> </td>
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
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 1 October 2001 </td>
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
			<td> <a href="http://HAnim.org/Specifications/HAnim2001" target="_blank">http://HAnim.org/Specifications/HAnim2001</a> </td>
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
			<td> Nancy Walk Animation HAnim 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.x3d</a> </td>
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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToNodeJS.xslt" target="_blank">X3dToNodeJS.xslt</a>
		stylesheet to create NodeJS source code from an <code>.x3d</code> scene.
	</p>

	* @author Cindy Ballreich cindy@ballreich.net 3Name3D
 */

function LOA1_WalkAnimation
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
LOA1_WalkAnimation.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: PositionInterpolator DEF='HUMANOIDROOT_POSITION_ANIMATOR' key field, scene-graph level=6, element #54, 19 total numbers */
	this.HUMANOIDROOT_POSITION_ANIMATOR_6_54_key = new autoclass.MFFloat(java.newArray("float", [0.0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1.0]));

	/** Large attribute array: PositionInterpolator DEF='HUMANOIDROOT_POSITION_ANIMATOR' keyValue field, scene-graph level=6, element #54, 57 total numbers made up of 19 3-tuple values */
	this.HUMANOIDROOT_POSITION_ANIMATOR_6_54_keyValue = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [0.0,-0.00928,0.0,0.0,-0.003858,0.0,0.0,-0.008847,0.0,0.0,-0.01486,0.0,0.0,-0.02641,0.0,0.0,-0.03934,0.0,0.0,-0.0502,0.0,0.0,-0.07469,0.0,0.0,-0.02732,0.0,0.0,-0.01608,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.0,-0.01129,0.0,0.0,-0.005819,0.0,0.0,-0.002004,0.0,0.0,-0.002579,0.0,0.0,-0.0143,0.0,0.0,-0.03799,0.0,0.0,-0.05648,0.0,0.0,-0.045,0.0,0.0,-0.00928,0.0])));

	/** Large attribute array: OrientationInterpolator DEF='L_HIP_ANIMATOR' keyValue field, scene-graph level=6, element #63, 32 total numbers made up of 8 4-tuple values */
	this.L_HIP_ANIMATOR_6_63_keyValue = new autoclass.MFRotation(java.newArray("float", [-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1.0,0.0,0.0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865]));

	/** Large attribute array: OrientationInterpolator DEF='L_KNEE_ANIMATOR' keyValue field, scene-graph level=6, element #66, 32 total numbers made up of 8 4-tuple values */
	this.L_KNEE_ANIMATOR_6_66_keyValue = new autoclass.MFRotation(java.newArray("float", [1.0,0.0,0.0,0.3226,1.0,0.0,0.0,0.1556,1.0,0.0,0.0,0.08678,1.0,0.0,0.0,0.8751,1.0,0.0,0.0,1.131,1.0,0.0,0.0,0.09961,1.0,0.0,0.0,0.3942,1.0,0.0,0.0,0.3226]));

	/** Large attribute array: OrientationInterpolator DEF='R_HIP_ANIMATOR' keyValue field, scene-graph level=6, element #75, 40 total numbers made up of 10 4-tuple values */
	this.R_HIP_ANIMATOR_6_75_keyValue = new autoclass.MFRotation(java.newArray("float", [-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1.0,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1.0,0.0,0.0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481]));

	/** Large attribute array: OrientationInterpolator DEF='R_KNEE_ANIMATOR' keyValue field, scene-graph level=6, element #78, 40 total numbers made up of 10 4-tuple values */
	this.R_KNEE_ANIMATOR_6_78_keyValue = new autoclass.MFRotation(java.newArray("float", [1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,-1.176e-08,-4.971e-09,0.09354,1.0,0.0,0.0,0.08558,1.0,0.0,0.0,0.2475,1.0,0.0,0.0,0.8573]));

	/** Large attribute array: OrientationInterpolator DEF='R_ANKLE_ANIMATOR' keyValue field, scene-graph level=6, element #81, 44 total numbers made up of 11 4-tuple values */
	this.R_ANKLE_ANIMATOR_6_81_keyValue = new autoclass.MFRotation() /* splitting up long array to improve readability */
	.append(new autoclass.MFRotation(java.newArray("float", [0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,-1.641e-07,1.827e-08,0.1268,-1.0,0.0,0.0,0.01793,-1.0,0.0,0.0,0.05824,-1.0,0.0,0.0,0.2398,-1.0,0.0,0.0,0.35,-1.0,0.0,0.0,0.3322])))
	.append(new autoclass.MFRotation(java.newArray("float", [0.0,0.0,1.0,0.0])));

	/** Large attribute array: OrientationInterpolator DEF='VL5_ANIMATOR' keyValue field, scene-graph level=6, element #87, 24 total numbers made up of 6 4-tuple values */
	this.VL5_ANIMATOR_6_87_keyValue = new autoclass.MFRotation(java.newArray("float", [0.0,1.0,0.0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0.0,1.0,0.0,0.0826]));

	/** Large attribute array: OrientationInterpolator DEF='SKULLBASE_ANIMATOR' keyValue field, scene-graph level=6, element #90, 40 total numbers made up of 10 4-tuple values */
	this.SKULLBASE_ANIMATOR_6_90_keyValue = new autoclass.MFRotation(java.newArray("float", [0.0,-1.0,0.0,0.08642,0.0,1.0,0.0,0.1825,0.0,1.0,0.0,0.1505,0.0,1.0,0.0,0.1053,0.0,1.0,0.0,0.04391,0.0,-1.0,0.0,0.03119,0.0,-1.0,0.0,0.07936,0.0,-1.0,0.0,0.1616,0.0,-1.0,0.0,0.155,0.0,-1.0,0.0,0.08642]));

	/** Large attribute array: OrientationInterpolator DEF='L_ELBOW_ANIMATOR' keyValue field, scene-graph level=6, element #96, 16 total numbers made up of 4 4-tuple values */
	this.L_ELBOW_ANIMATOR_6_96_keyValue = new autoclass.MFRotation(java.newArray("float", [-1,-1.58298e-07,8.15967e-08,0.0659878,-1,-3.28826e-08,-2.31665e-08,0.488383,-1,3.06462e-06,-3.11947e-06,0.0177536,-1,-1.58298e-07,8.15967e-08,0.0659878]));

	/** Large attribute array: OrientationInterpolator DEF='L_WRIST_ANIMATOR' keyValue field, scene-graph level=6, element #99, 16 total numbers made up of 4 4-tuple values */
	this.L_WRIST_ANIMATOR_6_99_keyValue = new autoclass.MFRotation(java.newArray("float", [1.51276e-06,-1,1.7724e-06,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,1.51276e-06,-1,1.7724e-06,0.461076]));

	/** Large attribute array: OrientationInterpolator DEF='R_SHOULDER_ANIMATOR' keyValue field, scene-graph level=6, element #102, 16 total numbers made up of 4 4-tuple values */
	this.R_SHOULDER_ANIMATOR_6_102_keyValue = new autoclass.MFRotation(java.newArray("float", [-1,-7.689e-07,-1.48e-07,0.09346,1,5.004e-08,2.254e-08,0.3197,-1,-1.104e-07,5.267e-10,0.1564,-1,-7.689e-07,-1.48e-07,0.09346]));

	/** Large attribute array: OrientationInterpolator DEF='R_ELBOW_ANIMATOR' keyValue field, scene-graph level=6, element #105, 16 total numbers made up of 4 4-tuple values */
	this.R_ELBOW_ANIMATOR_6_105_keyValue = new autoclass.MFRotation(java.newArray("float", [-1,-4.45619e-08,2.70318e-08,0.411508,-1,8.16742e-07,-1.09556e-07,0.0925011,-1,-2.47628e-08,-7.02862e-09,0.572568,-1,-4.45619e-08,2.70318e-08,0.411508]));

	/** Large attribute array: OrientationInterpolator DEF='R_WRIST_ANIMATOR' keyValue field, scene-graph level=6, element #108, 16 total numbers made up of 4 4-tuple values */
	this.R_WRIST_ANIMATOR_6_108_keyValue = new autoclass.MFRotation(java.newArray("float", [-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346]));

	/** Large attribute array: Text string field, scene-graph level=5, element #133, 16 total values */
	this.Text_5_133_string = new autoclass.MFString(new autoclass.MFString("\"LOA1_WalkAnimation.x3d\" \"defines a prototype\" \"for animating a humanoid.\" \"\" \"Click this text to see\" \"InterchangableActorsViaDynamicRouting example.\""));
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("LOA1_WalkAnimation.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Humanoid animation prototype reusable by any Humanoid."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Cindy Ballreich cindy@ballreich.net 3Name3D"))
    .addMeta((new autoclass.meta()).setName("rights").setContent("1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved."))
    .addMeta((new autoclass.meta()).setName("translator").setContent("Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("translated").setContent("1 October 2001"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("23 May 2020"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://HAnim.org/Specifications/HAnim2001"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://HAnim.org/Models"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://HAnim.org/Nodes"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("Nancy Walk Animation HAnim 2001"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("LOA1_WalkAnimation.x3d"))
    .addChild((new autoclass.ProtoDeclare()).setName("LOA1_WalkAnimation")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setName(cycleInterval).setType(SFTime).setAccessType(inputOutput).setValue(2))
        .addField((new autoclass.field()).setName(enabled).setType(SFBool).setAccessType(inputOutput).setValue(true))
        .addField((new autoclass.field()).setName(loop).setType(SFBool).setAccessType(inputOutput).setValue(true))
        .addField((new autoclass.field()).setName(startTime).setType(SFTime).setAccessType(inputOutput).setValue(0))
        .addField((new autoclass.field()).setName(stopTime).setType(SFTime).setAccessType(inputOutput).setValue(-1))
        .addField((new autoclass.field()).setName(fraction_changed).setType(SFFloat).setAccessType(outputOnly))
        .addField((new autoclass.field()).setName(isActive).setType(SFBool).setAccessType(outputOnly))
        .addField((new autoclass.field()).setName(HumanoidRoot_translation_changed).setType(SFVec3f).setAccessType(outputOnly.0))
        .addField((new autoclass.field()).setName(HumanoidRoot_rotation_changed).setType(SFRotation.0).setAccessType(outputOnly.0))
        .addField((new autoclass.field()).setName(lower_body_rotation_changed).setType(SFRotation.0).setAccessType(outputOnly.0))
        .addField((new autoclass.field()).setName(l_hip_rotation_changed).setType(SFRotation.0).setAccessType(outputOnly.0))
        .addField((new autoclass.field()).setName(l_knee_rotation_changed).setType(SFRotation.0).setAccessType(outputOnly.0))
        .addField((new autoclass.field()).setName(l_ankle_rotation_changed).setType(SFRotation.0).setAccessType(outputOnly.0))
        .addField((new autoclass.field()).setName(l_midtarsal_rotation_changed).setType(SFRotation.0).setAccessType(outputOnly.0))
        .addField((new autoclass.field()).setName(r_hip_rotation_changed).setType(SFRotation.0).setAccessType(outputOnly.0))
        .addField((new autoclass.field()).setName(r_knee_rotation_changed).setType(SFRotation.0).setAccessType(outputOnly.0))
        .addField((new autoclass.field()).setName(r_ankle_rotation_changed).setType(SFRotation.0).setAccessType(outputOnly.0))
        .addField((new autoclass.field()).setName(r_midtarsal_rotation_changed).setType(SFRotation.0).setAccessType(outputOnly.0))
        .addField((new autoclass.field()).setName(vl5_rotation_changed).setType(SFRotation.0).setAccessType(outputOnly.0))
        .addField((new autoclass.field()).setName(skullbase_rotation_changed).setType(SFRotation.0).setAccessType(outputOnly.0))
        .addField((new autoclass.field()).setName(l_shoulder_rotation_changed).setType(SFRotation.0).setAccessType(outputOnly.0))
        .addField((new autoclass.field()).setName(l_elbow_rotation_changed).setType(SFRotation.0).setAccessType(outputOnly.0))
        .addField((new autoclass.field()).setName(l_wrist_rotation_changed).setType(SFRotation.0).setAccessType(outputOnly.0))
        .addField((new autoclass.field()).setName(r_shoulder_rotation_changed).setType(SFRotation.0).setAccessType(outputOnly.0))
        .addField((new autoclass.field()).setName(r_elbow_rotation_changed).setType(SFRotation.0).setAccessType(outputOnly.0))
        .addField((new autoclass.field()).setName(r_wrist_rotation_changed).setType(SFRotation.0).setAccessType(outputOnly.0)))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Group())
          .addChild((new autoclass.TimeSensor("TIMER"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("cycleInterval").setProtoField("cycleInterval"))
              .addConnect((new autoclass.connect()).setNodeField("enabled").setProtoField("enabled"))
              .addConnect((new autoclass.connect()).setNodeField("loop").setProtoField("loop"))
              .addConnect((new autoclass.connect()).setNodeField("startTime").setProtoField("startTime"))
              .addConnect((new autoclass.connect()).setNodeField("stopTime").setProtoField("stopTime"))
              .addConnect((new autoclass.connect()).setNodeField("fraction_changed").setProtoField("fraction_changed"))
              .addConnect((new autoclass.connect()).setNodeField("isActive").setProtoField("isActive"))))
          .addChild((new autoclass.PositionInterpolator("HUMANOIDROOT_POSITION_ANIMATOR")).setKey(this.HUMANOIDROOT_POSITION_ANIMATOR_6_54_key).setKeyValue(this.HUMANOIDROOT_POSITION_ANIMATOR_6_54_keyValue)
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("HumanoidRoot_translation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("HUMANOIDROOT_ANIMATOR")).setKey(java.newArray("float", [0.0,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0])))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("HumanoidRoot_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("SACROILIAC_ANIMATOR")).setKey(java.newArray("float", [0.0,0.5,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [0.0,0.0,-1.0,0.1056,0.0,0.0,1.0,0.09018,0.0,0.0,-1.0,0.1056])))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("lower_body_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("L_HIP_ANIMATOR")).setKey(java.newArray("float", [0.0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1.0])).setKeyValue(this.L_HIP_ANIMATOR_6_63_keyValue)
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("l_hip_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("L_KNEE_ANIMATOR")).setKey(java.newArray("float", [0.0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1.0])).setKeyValue(this.L_KNEE_ANIMATOR_6_66_keyValue)
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("l_knee_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("L_ANKLE_ANIMATOR")).setKey(java.newArray("float", [0.0,0.125,0.2083,0.375,0.6667,0.9167,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [-1.0,0.0,0.0,0.06714,-1.0,0.0,0.0,0.2152,-1.0,0.0,0.0,0.3184,-1.0,0.0,0.0,0.4717,-1.0,0.0,0.0,0.2912,1.0,0.0,0.0,0.1222,-1.0,0.0,0.0,0.06714])))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("l_ankle_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("L_MIDTARSAL_ANIMATOR")).setKey(java.newArray("float", [0.0,0.5,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [1.0,0.0,0.0,0.0,1.0,0.0,0.0,-0.2,1.0,0.0,0.0,0.0])))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("l_midtarsal_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("R_HIP_ANIMATOR")).setKey(java.newArray("float", [0.0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1.0])).setKeyValue(this.R_HIP_ANIMATOR_6_75_keyValue)
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("r_hip_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("R_KNEE_ANIMATOR")).setKey(java.newArray("float", [0.0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1.0])).setKeyValue(this.R_KNEE_ANIMATOR_6_78_keyValue)
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("r_knee_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("R_ANKLE_ANIMATOR")).setKey(java.newArray("float", [0.0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1.0])).setKeyValue(this.R_ANKLE_ANIMATOR_6_81_keyValue)
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("r_ankle_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("R_MIDTARSAL_ANIMATOR")).setKey(java.newArray("float", [0.0,0.5,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [1.0,0.0,0.0,-0.2,1.0,0.0,0.0,0.0,1.0,0.0,0.0,-0.2])))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("r_midtarsal_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("VL5_ANIMATOR")).setKey(java.newArray("float", [0.0,0.2083,0.375,0.75,0.8333,1.0])).setKeyValue(this.VL5_ANIMATOR_6_87_keyValue)
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("vl5_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("SKULLBASE_ANIMATOR")).setKey(java.newArray("float", [0.0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1.0])).setKeyValue(this.SKULLBASE_ANIMATOR_6_90_keyValue)
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("skullbase_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("L_SHOULDER_ANIMATOR")).setKey(java.newArray("float", [0.0,0.375,0.9167,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [1,0,0,0.1189,-1,-5.928e-07,1.525e-07,0.1861,1,-2.038e-07,-1.257e-07,0.3357,1.0,0.0,0.0,0.1189])))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("l_shoulder_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("L_ELBOW_ANIMATOR")).setKey(java.newArray("float", [0.0,0.375,0.9167,1.0])).setKeyValue(this.L_ELBOW_ANIMATOR_6_96_keyValue)
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("l_elbow_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("L_WRIST_ANIMATOR")).setKey(java.newArray("float", [0.0,0.375,0.9167,1.0])).setKeyValue(this.L_WRIST_ANIMATOR_6_99_keyValue)
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("l_wrist_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("R_SHOULDER_ANIMATOR")).setKey(java.newArray("float", [0.0,0.375,0.9167,1.0])).setKeyValue(this.R_SHOULDER_ANIMATOR_6_102_keyValue)
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("r_shoulder_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("R_ELBOW_ANIMATOR")).setKey(java.newArray("float", [0.0,0.375,0.9167,1.0])).setKeyValue(this.R_ELBOW_ANIMATOR_6_105_keyValue)
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("r_elbow_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("R_WRIST_ANIMATOR")).setKey(java.newArray("float", [0.0,0.375,0.9167,1.0])).setKeyValue(this.R_WRIST_ANIMATOR_6_108_keyValue)
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("r_wrist_rotation_changed")))))
        .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("HUMANOIDROOT_POSITION_ANIMATOR").setToField("set_fraction"))
        .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("HUMANOIDROOT_ANIMATOR").setToField("set_fraction"))
        .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("SACROILIAC_ANIMATOR").setToField("set_fraction"))
        .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_HIP_ANIMATOR").setToField("set_fraction"))
        .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_KNEE_ANIMATOR").setToField("set_fraction"))
        .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_ANKLE_ANIMATOR").setToField("set_fraction"))
        .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_MIDTARSAL_ANIMATOR").setToField("set_fraction"))
        .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_HIP_ANIMATOR").setToField("set_fraction"))
        .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_KNEE_ANIMATOR").setToField("set_fraction"))
        .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_ANKLE_ANIMATOR").setToField("set_fraction"))
        .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_MIDTARSAL_ANIMATOR").setToField("set_fraction"))
        .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("VL5_ANIMATOR").setToField("set_fraction"))
        .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("SKULLBASE_ANIMATOR").setToField("set_fraction"))
        .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_SHOULDER_ANIMATOR").setToField("set_fraction"))
        .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_ELBOW_ANIMATOR").setToField("set_fraction"))
        .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("L_WRIST_ANIMATOR").setToField("set_fraction"))
        .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_SHOULDER_ANIMATOR").setToField("set_fraction"))
        .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_ELBOW_ANIMATOR").setToField("set_fraction"))
        .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("R_WRIST_ANIMATOR").setToField("set_fraction"))))
    .addComments(" ====================================== ")
    .addComments(" Point to example use in case someone inspects this file ")
    .addChild((new autoclass.Anchor()).setDescription("InterchangableActorsViaDynamicRouting").setParameter(new autoclass.MFString("\"target=_blank\"")).setUrl(new autoclass.MFString("\"InterchangableActorsViaDynamicRouting.x3d\" \"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d\" \"InterchangableActorsViaDynamicRouting.wrl\" \"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl\""))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.Text()).setString(this.Text_5_133_string)
          .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(0.8)))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,0.2))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return LOA1_WalkAnimation model
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
		validationResult += this.x3dModel.validate(); // walk entire tree to validate correctness
	}
	catch (e)
	{
		exceptionResult = e; // report exception failures, if any
	}
	if  (exceptionResult === "" && validationResult === "")
	     return "success";
	else
	{
		var returnMessage = "";
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
		var testObject = new LOA1_WalkAnimation();
		console.log ("LOA1_WalkAnimation execution self-validation test results: " + testObject.validateSelf());
	}
}
new LOA1_WalkAnimation().main();