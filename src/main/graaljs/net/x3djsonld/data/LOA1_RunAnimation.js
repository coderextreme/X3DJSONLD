load('X3Dautoclass.js');

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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
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
  function doubleToFloat(d) {
    if (Float32Array) {
        return new Float32Array([d])[0];
    }
  }
LOA1_RunAnimation.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: PositionInterpolator DEF='HUMANOIDROOT_POSITION_ANIMATOR' keyValue field, scene-graph level=6, element #54, 24 total numbers made up of 8 3-tuple values */
	this.HUMANOIDROOT_POSITION_ANIMATOR_6_54_keyValue = new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(-0.0351),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.0351),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.04087),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.04886),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.04051),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.03666),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.03666),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.0351),doubleToFloat(0.0)], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='L_HIP_ANIMATOR' keyValue field, scene-graph level=6, element #63, 20 total numbers made up of 5 4-tuple values */
	this.L_HIP_ANIMATOR_6_63_keyValue = new MFRotation(Java.to([doubleToFloat(-0.9986),doubleToFloat(0.03354),doubleToFloat(0.04001),doubleToFloat(1.212),doubleToFloat(-0.9889),doubleToFloat(0.1328),doubleToFloat(0.06696),doubleToFloat(0.4025),doubleToFloat(0.9894),doubleToFloat(0.1453),doubleToFloat(0.009351),doubleToFloat(0.4114),doubleToFloat(-0.9963),doubleToFloat(0.07032),doubleToFloat(0.05003),doubleToFloat(0.7035),doubleToFloat(-0.9986),doubleToFloat(0.03354),doubleToFloat(0.04001),doubleToFloat(1.212)], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='R_HIP_ANIMATOR' keyValue field, scene-graph level=6, element #75, 20 total numbers made up of 5 4-tuple values */
	this.R_HIP_ANIMATOR_6_75_keyValue = new MFRotation(Java.to([doubleToFloat(0.9999),doubleToFloat(0.00293),doubleToFloat(-0.00989),doubleToFloat(0.402),doubleToFloat(-1.0),doubleToFloat(0.004977),doubleToFloat(-0.00497),doubleToFloat(0.5943),doubleToFloat(-1.0),doubleToFloat(0.003265),doubleToFloat(-0.001752),doubleToFloat(1.178),doubleToFloat(-0.9999),doubleToFloat(0.00815),doubleToFloat(-0.01093),doubleToFloat(0.3031),doubleToFloat(0.9999),doubleToFloat(0.00293),doubleToFloat(-0.00989),doubleToFloat(0.402)], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='R_KNEE_ANIMATOR' keyValue field, scene-graph level=6, element #78, 24 total numbers made up of 6 4-tuple values */
	this.R_KNEE_ANIMATOR_6_78_keyValue = new MFRotation(Java.to([doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.7004),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.011),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.892),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.188),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.3964),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.7004)], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='R_ANKLE_ANIMATOR' keyValue field, scene-graph level=6, element #81, 24 total numbers made up of 6 4-tuple values */
	this.R_ANKLE_ANIMATOR_6_81_keyValue = new MFRotation(Java.to([doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.2323),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.07843),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.09676),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.3274),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.3278),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.2323)], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='VL5_ANIMATOR' keyValue field, scene-graph level=6, element #87, 20 total numbers made up of 5 4-tuple values */
	this.VL5_ANIMATOR_6_87_keyValue = new MFRotation(Java.to([doubleToFloat(0.7651),doubleToFloat(0.6382),doubleToFloat(0.08586),doubleToFloat(0.2712),doubleToFloat(0.9999),doubleToFloat(0.002845),doubleToFloat(-0.01547),doubleToFloat(0.3756),doubleToFloat(0.7459),doubleToFloat(-0.6505),doubleToFloat(-0.1432),doubleToFloat(0.2416),doubleToFloat(0.9984),doubleToFloat(0.05536),doubleToFloat(-0.01154),doubleToFloat(0.3488),doubleToFloat(0.7651),doubleToFloat(0.6382),doubleToFloat(0.08586),doubleToFloat(0.2712)], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='L_SHOULDER_ANIMATOR' keyValue field, scene-graph level=6, element #93, 20 total numbers made up of 5 4-tuple values */
	this.L_SHOULDER_ANIMATOR_6_93_keyValue = new MFRotation(Java.to([doubleToFloat(0.9907),doubleToFloat(-0.07264),doubleToFloat(0.115),doubleToFloat(1.135),doubleToFloat(0.9291),doubleToFloat(-0.1222),doubleToFloat(0.349),doubleToFloat(0.1695),doubleToFloat(-0.9892),doubleToFloat(0.1364),doubleToFloat(-0.05394),doubleToFloat(0.5112),doubleToFloat(0.9942),doubleToFloat(-2.052E-4),doubleToFloat(0.1073),doubleToFloat(0.4975),doubleToFloat(0.9907),doubleToFloat(-0.07264),doubleToFloat(0.115),doubleToFloat(1.135)], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='L_ELBOW_ANIMATOR' keyValue field, scene-graph level=6, element #96, 20 total numbers made up of 5 4-tuple values */
	this.L_ELBOW_ANIMATOR_6_96_keyValue = new MFRotation(Java.to([doubleToFloat(0.9985),doubleToFloat(0.03887),doubleToFloat(0.03802),doubleToFloat(4.689),doubleToFloat(-0.965),doubleToFloat(-0.1889),doubleToFloat(-0.1821),doubleToFloat(1.415),doubleToFloat(0.9758),doubleToFloat(0.1563),doubleToFloat(0.1529),doubleToFloat(4.666),doubleToFloat(-0.9956),doubleToFloat(-0.0936),doubleToFloat(0.009826),doubleToFloat(1.126),doubleToFloat(0.9985),doubleToFloat(0.03887),doubleToFloat(0.03802),doubleToFloat(4.689)], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='R_SHOULDER_ANIMATOR' keyValue field, scene-graph level=6, element #102, 20 total numbers made up of 5 4-tuple values */
	this.R_SHOULDER_ANIMATOR_6_102_keyValue = new MFRotation(Java.to([doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.6979),doubleToFloat(0.9094),doubleToFloat(0.2062),doubleToFloat(-0.3613),doubleToFloat(0.4157),doubleToFloat(0.9637),doubleToFloat(0.1537),doubleToFloat(-0.2185),doubleToFloat(1.353),doubleToFloat(0.4864),doubleToFloat(0.08841),doubleToFloat(-0.8693),doubleToFloat(0.1716),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.6979)], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='R_ELBOW_ANIMATOR' keyValue field, scene-graph level=6, element #105, 20 total numbers made up of 5 4-tuple values */
	this.R_ELBOW_ANIMATOR_6_105_keyValue = new MFRotation(Java.to([doubleToFloat(0.9353),doubleToFloat(-0.2978),doubleToFloat(-0.191),doubleToFloat(4.222),doubleToFloat(-0.9362),doubleToFloat(0.2924),doubleToFloat(-0.1952),doubleToFloat(1.05),doubleToFloat(0.9941),doubleToFloat(-0.09719),doubleToFloat(-0.04725),doubleToFloat(4.512),doubleToFloat(-0.9594),doubleToFloat(0.2653),doubleToFloat(0.09579),doubleToFloat(1.525),doubleToFloat(0.9353),doubleToFloat(-0.2978),doubleToFloat(-0.191),doubleToFloat(4.222)], Java.type("float[]")));

	/** Large attribute array: Text string field, scene-graph level=5, element #133, 16 total values */
	this.Text_5_133_string = new MFString(new MFString("\"LOA1_RunAnimation.x3d\" \"defines a prototype\" \"for animating a humanoid.\" \"\" \"Click this text to see\" \"InterchangableActorsViaDynamicRouting example.\""));
  this.x3dModel = new X3D().setProfile("Immersive").setVersion("3.3")
  .setHead(new head()
    .addMeta(new meta().setName("title").setContent("LOA1_RunAnimation.x3d"))
    .addMeta(new meta().setName("description").setContent("Humanoid animation prototype reusable by any Humanoid."))
    .addMeta(new meta().setName("creator").setContent("Cindy Ballreich cindy@ballreich.net 3Name3D"))
    .addMeta(new meta().setName("rights").setContent("1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved."))
    .addMeta(new meta().setName("translator").setContent("Ozan APAYDIN"))
    .addMeta(new meta().setName("translated").setContent("30 October 2001"))
    .addMeta(new meta().setName("modified").setContent("23 May 2020"))
    .addMeta(new meta().setName("reference").setContent("http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl"))
    .addMeta(new meta().setName("reference").setContent("http://www.HAnim.org"))
    .addMeta(new meta().setName("reference").setContent("http://HAnim.org/Models"))
    .addMeta(new meta().setName("reference").setContent("http://HAnim.org/Nodes"))
    .addMeta(new meta().setName("subject").setContent("Nancy Run Animation HAnim 2001"))
    .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_RunAnimation.x3d"))
    .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName("license").setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("LOA1_RunAnimation.x3d"))
    .addChild(new ProtoDeclare().setName("LOA1_RunAnimation")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("cycleInterval").setType("SFTime").setAccessType("inputOutput").setValue("1"))
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
          .addChild(new PositionInterpolator("HUMANOIDROOT_POSITION_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.2182),doubleToFloat(0.2909),doubleToFloat(0.3091),doubleToFloat(0.7091),doubleToFloat(0.8),doubleToFloat(0.8182),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.HUMANOIDROOT_POSITION_ANIMATOR_6_54_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("HumanoidRoot_translation_changed"))))
          .addChild(new OrientationInterpolator("HUMANOIDROOT_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("HumanoidRoot_rotation_changed"))))
          .addChild(new OrientationInterpolator("SACROILIAC_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(0.9969),doubleToFloat(-0.05444),doubleToFloat(0.05596),doubleToFloat(0.07687),doubleToFloat(0.9969),doubleToFloat(-0.05444),doubleToFloat(0.05596),doubleToFloat(0.07687)], Java.type("float[]"))))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("lower_body_rotation_changed"))))
          .addChild(new OrientationInterpolator("L_HIP_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.2182),doubleToFloat(0.4909),doubleToFloat(0.7455),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.L_HIP_ANIMATOR_6_63_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("l_hip_rotation_changed"))))
          .addChild(new OrientationInterpolator("L_KNEE_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.2182),doubleToFloat(0.4909),doubleToFloat(0.7455),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.108),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.4265),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.7052),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(2.179),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.108)], Java.type("float[]"))))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("l_knee_rotation_changed"))))
          .addChild(new OrientationInterpolator("L_ANKLE_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.2182),doubleToFloat(0.3091),doubleToFloat(0.4909),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.03543),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.1037),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.4328),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.1929),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.03543)], Java.type("float[]"))))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("l_ankle_rotation_changed"))))
          .addChild(new OrientationInterpolator("L_MIDTARSAL_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.5),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.2),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("l_midtarsal_rotation_changed"))))
          .addChild(new OrientationInterpolator("R_HIP_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.2182),doubleToFloat(0.4909),doubleToFloat(0.7455),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.R_HIP_ANIMATOR_6_75_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("r_hip_rotation_changed"))))
          .addChild(new OrientationInterpolator("R_KNEE_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.03636),doubleToFloat(0.2182),doubleToFloat(0.4909),doubleToFloat(0.7455),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.R_KNEE_ANIMATOR_6_78_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("r_knee_rotation_changed"))))
          .addChild(new OrientationInterpolator("R_ANKLE_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.4909),doubleToFloat(0.7091),doubleToFloat(0.8),doubleToFloat(0.8182),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.R_ANKLE_ANIMATOR_6_81_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("r_ankle_rotation_changed"))))
          .addChild(new OrientationInterpolator("R_MIDTARSAL_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.5),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.2),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.2)], Java.type("float[]"))))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("r_midtarsal_rotation_changed"))))
          .addChild(new OrientationInterpolator("VL5_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.2545),doubleToFloat(0.4909),doubleToFloat(0.7636),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.VL5_ANIMATOR_6_87_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("vl5_rotation_changed"))))
          .addChild(new OrientationInterpolator("SKULLBASE_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.4909),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(0.6517),doubleToFloat(-0.7559),doubleToFloat(0.06211),doubleToFloat(0.2508),doubleToFloat(0.6467),doubleToFloat(0.7527),doubleToFloat(-0.1238),doubleToFloat(0.2344),doubleToFloat(0.6517),doubleToFloat(-0.7559),doubleToFloat(0.06211),doubleToFloat(0.2508)], Java.type("float[]"))))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("skullbase_rotation_changed"))))
          .addChild(new OrientationInterpolator("L_SHOULDER_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.2182),doubleToFloat(0.4909),doubleToFloat(0.7455),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.L_SHOULDER_ANIMATOR_6_93_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("l_shoulder_rotation_changed"))))
          .addChild(new OrientationInterpolator("L_ELBOW_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.2182),doubleToFloat(0.4909),doubleToFloat(0.7455),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.L_ELBOW_ANIMATOR_6_96_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("l_elbow_rotation_changed"))))
          .addChild(new OrientationInterpolator("L_WRIST_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(-0.0240995),doubleToFloat(-0.999682),doubleToFloat(0.00741506),doubleToFloat(0.120409),doubleToFloat(-0.0240995),doubleToFloat(-0.999682),doubleToFloat(0.00741506),doubleToFloat(0.120409)], Java.type("float[]"))))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("l_wrist_rotation_changed"))))
          .addChild(new OrientationInterpolator("R_SHOULDER_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.2182),doubleToFloat(0.4909),doubleToFloat(0.7455),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.R_SHOULDER_ANIMATOR_6_102_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("r_shoulder_rotation_changed"))))
          .addChild(new OrientationInterpolator("R_ELBOW_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.2182),doubleToFloat(0.4909),doubleToFloat(0.7455),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.R_ELBOW_ANIMATOR_6_105_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("r_elbow_rotation_changed"))))
          .addChild(new OrientationInterpolator("R_WRIST_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(-0.917742),doubleToFloat(-0.237244),doubleToFloat(-0.318536),doubleToFloat(0.214273),doubleToFloat(-0.917742),doubleToFloat(-0.237244),doubleToFloat(-0.318536),doubleToFloat(0.214273)], Java.type("float[]"))))
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
		var testObject = new LOA1_RunAnimation();
		print ("LOA1_RunAnimation execution self-validation test results: " + testObject.validateSelf());
	}
}
new LOA1_RunAnimation().main();