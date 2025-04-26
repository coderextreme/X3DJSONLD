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
 <p> Related links: LOA1_RunAnimation.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.LOA1_RunAnimation&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_RunAnimation.x3d">LOA1_RunAnimation.x3d</a> </td>
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
			<td> Ozan APAYDIN </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 30 October 2001 </td>
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
			<td> Nancy Run Animation HAnim 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_RunAnimation.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_RunAnimation.x3d</a> </td>
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

function LOA1_RunAnimation
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
LOA1_RunAnimation.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: PositionInterpolator DEF='HUMANOIDROOT_POSITION_ANIMATOR' keyValue field, scene-graph level=6, element #54, 24 total numbers made up of 8 3-tuple values */
	this.HUMANOIDROOT_POSITION_ANIMATOR_6_54_keyValue = new autoclass.MFVec3f(java.newArray("float", [0.0,-0.0351,0.0,0.0,-0.0351,0.0,0.0,-0.04087,0.0,0.0,-0.04886,0.0,0.0,-0.04051,0.0,0.0,-0.03666,0.0,0.0,-0.03666,0.0,0.0,-0.0351,0.0]));

	/** Large attribute array: OrientationInterpolator DEF='L_HIP_ANIMATOR' keyValue field, scene-graph level=6, element #63, 20 total numbers made up of 5 4-tuple values */
	this.L_HIP_ANIMATOR_6_63_keyValue = new autoclass.MFRotation(java.newArray("float", [-0.9986,0.03354,0.04001,1.212,-0.9889,0.1328,0.06696,0.4025,0.9894,0.1453,0.009351,0.4114,-0.9963,0.07032,0.05003,0.7035,-0.9986,0.03354,0.04001,1.212]));

	/** Large attribute array: OrientationInterpolator DEF='R_HIP_ANIMATOR' keyValue field, scene-graph level=6, element #75, 20 total numbers made up of 5 4-tuple values */
	this.R_HIP_ANIMATOR_6_75_keyValue = new autoclass.MFRotation(java.newArray("float", [0.9999,0.00293,-0.00989,0.402,-1.0,0.004977,-0.00497,0.5943,-1.0,0.003265,-0.001752,1.178,-0.9999,0.00815,-0.01093,0.3031,0.9999,0.00293,-0.00989,0.402]));

	/** Large attribute array: OrientationInterpolator DEF='R_KNEE_ANIMATOR' keyValue field, scene-graph level=6, element #78, 24 total numbers made up of 6 4-tuple values */
	this.R_KNEE_ANIMATOR_6_78_keyValue = new autoclass.MFRotation(java.newArray("float", [1.0,0.0,0.0,0.7004,1.0,0.0,0.0,1.011,1.0,0.0,0.0,1.892,1.0,0.0,0.0,1.188,1.0,0.0,0.0,0.3964,1.0,0.0,0.0,0.7004]));

	/** Large attribute array: OrientationInterpolator DEF='R_ANKLE_ANIMATOR' keyValue field, scene-graph level=6, element #81, 24 total numbers made up of 6 4-tuple values */
	this.R_ANKLE_ANIMATOR_6_81_keyValue = new autoclass.MFRotation(java.newArray("float", [1.0,0.0,0.0,0.2323,-1.0,0.0,0.0,0.07843,-1.0,0.0,0.0,0.09676,-1.0,0.0,0.0,0.3274,-1.0,0.0,0.0,0.3278,1.0,0.0,0.0,0.2323]));

	/** Large attribute array: OrientationInterpolator DEF='VL5_ANIMATOR' keyValue field, scene-graph level=6, element #87, 20 total numbers made up of 5 4-tuple values */
	this.VL5_ANIMATOR_6_87_keyValue = new autoclass.MFRotation(java.newArray("float", [0.7651,0.6382,0.08586,0.2712,0.9999,0.002845,-0.01547,0.3756,0.7459,-0.6505,-0.1432,0.2416,0.9984,0.05536,-0.01154,0.3488,0.7651,0.6382,0.08586,0.2712]));

	/** Large attribute array: OrientationInterpolator DEF='L_SHOULDER_ANIMATOR' keyValue field, scene-graph level=6, element #93, 20 total numbers made up of 5 4-tuple values */
	this.L_SHOULDER_ANIMATOR_6_93_keyValue = new autoclass.MFRotation(java.newArray("float", [0.9907,-0.07264,0.115,1.135,0.9291,-0.1222,0.349,0.1695,-0.9892,0.1364,-0.05394,0.5112,0.9942,-2.052E-4,0.1073,0.4975,0.9907,-0.07264,0.115,1.135]));

	/** Large attribute array: OrientationInterpolator DEF='L_ELBOW_ANIMATOR' keyValue field, scene-graph level=6, element #96, 20 total numbers made up of 5 4-tuple values */
	this.L_ELBOW_ANIMATOR_6_96_keyValue = new autoclass.MFRotation(java.newArray("float", [0.9985,0.03887,0.03802,4.689,-0.965,-0.1889,-0.1821,1.415,0.9758,0.1563,0.1529,4.666,-0.9956,-0.0936,0.009826,1.126,0.9985,0.03887,0.03802,4.689]));

	/** Large attribute array: OrientationInterpolator DEF='R_SHOULDER_ANIMATOR' keyValue field, scene-graph level=6, element #102, 20 total numbers made up of 5 4-tuple values */
	this.R_SHOULDER_ANIMATOR_6_102_keyValue = new autoclass.MFRotation(java.newArray("float", [-1.0,0.0,0.0,0.6979,0.9094,0.2062,-0.3613,0.4157,0.9637,0.1537,-0.2185,1.353,0.4864,0.08841,-0.8693,0.1716,-1.0,0.0,0.0,0.6979]));

	/** Large attribute array: OrientationInterpolator DEF='R_ELBOW_ANIMATOR' keyValue field, scene-graph level=6, element #105, 20 total numbers made up of 5 4-tuple values */
	this.R_ELBOW_ANIMATOR_6_105_keyValue = new autoclass.MFRotation(java.newArray("float", [0.9353,-0.2978,-0.191,4.222,-0.9362,0.2924,-0.1952,1.05,0.9941,-0.09719,-0.04725,4.512,-0.9594,0.2653,0.09579,1.525,0.9353,-0.2978,-0.191,4.222]));

	/** Large attribute array: Text string field, scene-graph level=5, element #133, 16 total values */
	this.Text_5_133_string = new autoclass.MFString(new autoclass.MFString("\"LOA1_RunAnimation.x3d\" \"defines a prototype\" \"for animating a humanoid.\" \"\" \"Click this text to see\" \"InterchangableActorsViaDynamicRouting example.\""));
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("LOA1_RunAnimation.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Humanoid animation prototype reusable by any Humanoid."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Cindy Ballreich cindy@ballreich.net 3Name3D"))
    .addMeta((new autoclass.meta()).setName("rights").setContent("1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved."))
    .addMeta((new autoclass.meta()).setName("translator").setContent("Ozan APAYDIN"))
    .addMeta((new autoclass.meta()).setName("translated").setContent("30 October 2001"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("23 May 2020"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.HAnim.org"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://HAnim.org/Models"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://HAnim.org/Nodes"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("Nancy Run Animation HAnim 2001"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_RunAnimation.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("LOA1_RunAnimation.x3d"))
    .addChild((new autoclass.ProtoDeclare()).setName("LOA1_RunAnimation")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setName(cycleInterval).setType(SFTime).setAccessType(inputOutput).setValue(1))
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
          .addChild((new autoclass.PositionInterpolator("HUMANOIDROOT_POSITION_ANIMATOR")).setKey(java.newArray("float", [0.0,0.2182,0.2909,0.3091,0.7091,0.8,0.8182,1.0])).setKeyValue(this.HUMANOIDROOT_POSITION_ANIMATOR_6_54_keyValue)
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("HumanoidRoot_translation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("HUMANOIDROOT_ANIMATOR")).setKey(java.newArray("float", [0.0,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0])))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("HumanoidRoot_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("SACROILIAC_ANIMATOR")).setKey(java.newArray("float", [0.0,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [0.9969,-0.05444,0.05596,0.07687,0.9969,-0.05444,0.05596,0.07687])))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("lower_body_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("L_HIP_ANIMATOR")).setKey(java.newArray("float", [0.0,0.2182,0.4909,0.7455,1.0])).setKeyValue(this.L_HIP_ANIMATOR_6_63_keyValue)
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("l_hip_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("L_KNEE_ANIMATOR")).setKey(java.newArray("float", [0.0,0.2182,0.4909,0.7455,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [1.0,0.0,0.0,1.108,1.0,0.0,0.0,0.4265,1.0,0.0,0.0,0.7052,1.0,0.0,0.0,2.179,1.0,0.0,0.0,1.108])))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("l_knee_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("L_ANKLE_ANIMATOR")).setKey(java.newArray("float", [0.0,0.2182,0.3091,0.4909,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [1.0,0.0,0.0,0.03543,-1.0,0.0,0.0,0.1037,-1.0,0.0,0.0,0.4328,1.0,0.0,0.0,0.1929,1.0,0.0,0.0,0.03543])))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("l_ankle_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("L_MIDTARSAL_ANIMATOR")).setKey(java.newArray("float", [0.0,0.5,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [1.0,0.0,0.0,0.0,1.0,0.0,0.0,-0.2,1.0,0.0,0.0,0.0])))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("l_midtarsal_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("R_HIP_ANIMATOR")).setKey(java.newArray("float", [0.0,0.2182,0.4909,0.7455,1.0])).setKeyValue(this.R_HIP_ANIMATOR_6_75_keyValue)
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("r_hip_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("R_KNEE_ANIMATOR")).setKey(java.newArray("float", [0.0,0.03636,0.2182,0.4909,0.7455,1.0])).setKeyValue(this.R_KNEE_ANIMATOR_6_78_keyValue)
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("r_knee_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("R_ANKLE_ANIMATOR")).setKey(java.newArray("float", [0.0,0.4909,0.7091,0.8,0.8182,1.0])).setKeyValue(this.R_ANKLE_ANIMATOR_6_81_keyValue)
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("r_ankle_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("R_MIDTARSAL_ANIMATOR")).setKey(java.newArray("float", [0.0,0.5,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [1.0,0.0,0.0,-0.2,1.0,0.0,0.0,0.0,1.0,0.0,0.0,-0.2])))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("r_midtarsal_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("VL5_ANIMATOR")).setKey(java.newArray("float", [0.0,0.2545,0.4909,0.7636,1.0])).setKeyValue(this.VL5_ANIMATOR_6_87_keyValue)
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("vl5_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("SKULLBASE_ANIMATOR")).setKey(java.newArray("float", [0.0,0.4909,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [0.6517,-0.7559,0.06211,0.2508,0.6467,0.7527,-0.1238,0.2344,0.6517,-0.7559,0.06211,0.2508])))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("skullbase_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("L_SHOULDER_ANIMATOR")).setKey(java.newArray("float", [0.0,0.2182,0.4909,0.7455,1.0])).setKeyValue(this.L_SHOULDER_ANIMATOR_6_93_keyValue)
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("l_shoulder_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("L_ELBOW_ANIMATOR")).setKey(java.newArray("float", [0.0,0.2182,0.4909,0.7455,1.0])).setKeyValue(this.L_ELBOW_ANIMATOR_6_96_keyValue)
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("l_elbow_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("L_WRIST_ANIMATOR")).setKey(java.newArray("float", [0.0,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [-0.0240995,-0.999682,0.00741506,0.120409,-0.0240995,-0.999682,0.00741506,0.120409])))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("l_wrist_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("R_SHOULDER_ANIMATOR")).setKey(java.newArray("float", [0.0,0.2182,0.4909,0.7455,1.0])).setKeyValue(this.R_SHOULDER_ANIMATOR_6_102_keyValue)
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("r_shoulder_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("R_ELBOW_ANIMATOR")).setKey(java.newArray("float", [0.0,0.2182,0.4909,0.7455,1.0])).setKeyValue(this.R_ELBOW_ANIMATOR_6_105_keyValue)
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("r_elbow_rotation_changed"))))
          .addChild((new autoclass.OrientationInterpolator("R_WRIST_ANIMATOR")).setKey(java.newArray("float", [0.0,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273])))
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
   * @return LOA1_RunAnimation model
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
		var testObject = new LOA1_RunAnimation();
		console.log ("LOA1_RunAnimation execution self-validation test results: " + testObject.validateSelf());
	}
}
new LOA1_RunAnimation().main();