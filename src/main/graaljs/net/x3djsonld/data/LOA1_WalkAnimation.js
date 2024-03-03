load('X3Dautoclass.js');

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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
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
  function doubleToFloat(d) {
    if (Float32Array) {
        return new Float32Array([d])[0];
    }
  }
LOA1_WalkAnimation.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: PositionInterpolator DEF='HUMANOIDROOT_POSITION_ANIMATOR' key field, scene-graph level=6, element #54, 19 total numbers */
	this.HUMANOIDROOT_POSITION_ANIMATOR_6_54_key = new MFFloat(Java.to([doubleToFloat(0.0),doubleToFloat(0.04167),doubleToFloat(0.125),doubleToFloat(0.1667),doubleToFloat(0.2083),doubleToFloat(0.25),doubleToFloat(0.2917),doubleToFloat(0.375),doubleToFloat(0.4583),doubleToFloat(0.5),doubleToFloat(0.5417),doubleToFloat(0.5833),doubleToFloat(0.625),doubleToFloat(0.7083),doubleToFloat(0.75),doubleToFloat(0.7917),doubleToFloat(0.875),doubleToFloat(0.9167),doubleToFloat(1.0)], Java.type("float[]")));

	/** Large attribute array: PositionInterpolator DEF='HUMANOIDROOT_POSITION_ANIMATOR' keyValue field, scene-graph level=6, element #54, 57 total numbers made up of 19 3-tuple values */
	this.HUMANOIDROOT_POSITION_ANIMATOR_6_54_keyValue = new MFVec3f() /* splitting up long array to improve readability */
	.append(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(-0.00928),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.003858),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.008847),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.01486),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.02641),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.03934),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.0502),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.07469),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.02732),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.01608),doubleToFloat(0.0)], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(-0.01129),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.005819),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.002004),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.002579),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.0143),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.03799),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.05648),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.045),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.00928),doubleToFloat(0.0)], Java.type("float[]"))));

	/** Large attribute array: OrientationInterpolator DEF='L_HIP_ANIMATOR' keyValue field, scene-graph level=6, element #63, 32 total numbers made up of 8 4-tuple values */
	this.L_HIP_ANIMATOR_6_63_keyValue = new MFRotation(Java.to([doubleToFloat(-0.873),doubleToFloat(0.06094),doubleToFloat(0.484),doubleToFloat(0.2865),doubleToFloat(0.9963),doubleToFloat(-0.01057),doubleToFloat(0.08481),doubleToFloat(0.2488),doubleToFloat(0.9965),doubleToFloat(0.01591),doubleToFloat(-0.08222),doubleToFloat(0.3836),doubleToFloat(-0.7018),doubleToFloat(-0.03223),doubleToFloat(-0.7117),doubleToFloat(0.1289),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.5518),doubleToFloat(-0.9964),doubleToFloat(0.02231),doubleToFloat(0.0817),doubleToFloat(0.5351),doubleToFloat(-0.9809),doubleToFloat(0.04912),doubleToFloat(0.1881),doubleToFloat(0.5204),doubleToFloat(-0.873),doubleToFloat(0.06094),doubleToFloat(0.484),doubleToFloat(0.2865)], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='L_KNEE_ANIMATOR' keyValue field, scene-graph level=6, element #66, 32 total numbers made up of 8 4-tuple values */
	this.L_KNEE_ANIMATOR_6_66_keyValue = new MFRotation(Java.to([doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.3226),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.1556),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.08678),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.8751),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.131),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.09961),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.3942),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.3226)], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='R_HIP_ANIMATOR' keyValue field, scene-graph level=6, element #75, 40 total numbers made up of 10 4-tuple values */
	this.R_HIP_ANIMATOR_6_75_keyValue = new MFRotation(Java.to([doubleToFloat(-0.5831),doubleToFloat(0.03511),doubleToFloat(0.8116),doubleToFloat(0.1481),doubleToFloat(-0.995),doubleToFloat(0.02296),doubleToFloat(0.09674),doubleToFloat(0.4683),doubleToFloat(-1.0),doubleToFloat(0.00192),doubleToFloat(0.007964),doubleToFloat(0.4732),doubleToFloat(-0.998),doubleToFloat(-0.0158),doubleToFloat(-0.06102),doubleToFloat(0.5079),doubleToFloat(-0.9911),doubleToFloat(-0.03541),doubleToFloat(-0.1286),doubleToFloat(0.5419),doubleToFloat(-0.9131),doubleToFloat(-0.06243),doubleToFloat(-0.403),doubleToFloat(0.3361),doubleToFloat(-0.4306),doubleToFloat(-0.07962),doubleToFloat(-0.899),doubleToFloat(0.07038),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.2571),doubleToFloat(0.9891),doubleToFloat(-0.02805),doubleToFloat(0.1444),doubleToFloat(0.3879),doubleToFloat(-0.5831),doubleToFloat(0.03511),doubleToFloat(0.8116),doubleToFloat(0.1481)], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='R_KNEE_ANIMATOR' keyValue field, scene-graph level=6, element #78, 40 total numbers made up of 10 4-tuple values */
	this.R_KNEE_ANIMATOR_6_78_keyValue = new MFRotation(Java.to([doubleToFloat(1),doubleToFloat(0),doubleToFloat(0),doubleToFloat(0.8573),doubleToFloat(1),doubleToFloat(0),doubleToFloat(0),doubleToFloat(0.8926),doubleToFloat(1),doubleToFloat(0),doubleToFloat(0),doubleToFloat(0.5351),doubleToFloat(1),doubleToFloat(0),doubleToFloat(0),doubleToFloat(0.1756),doubleToFloat(1),doubleToFloat(0),doubleToFloat(0),doubleToFloat(0.1194),doubleToFloat(1),doubleToFloat(0),doubleToFloat(0),doubleToFloat(0.3153),doubleToFloat(1),doubleToFloat(-1.176e-08),doubleToFloat(-4.971e-09),doubleToFloat(0.09354),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.08558),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.2475),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.8573)], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='R_ANKLE_ANIMATOR' keyValue field, scene-graph level=6, element #81, 44 total numbers made up of 11 4-tuple values */
	this.R_ANKLE_ANIMATOR_6_81_keyValue = new MFRotation() /* splitting up long array to improve readability */
	.append(new MFRotation(Java.to([doubleToFloat(0),doubleToFloat(0),doubleToFloat(1),doubleToFloat(0),doubleToFloat(-1),doubleToFloat(0),doubleToFloat(0),doubleToFloat(0.3533),doubleToFloat(-1),doubleToFloat(0),doubleToFloat(0),doubleToFloat(0.1072),doubleToFloat(1),doubleToFloat(0),doubleToFloat(0),doubleToFloat(0.2612),doubleToFloat(1),doubleToFloat(-1.641e-07),doubleToFloat(1.827e-08),doubleToFloat(0.1268),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.01793),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.05824),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.2398),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.35),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.3322)], Java.type("float[]"))))
	.append(new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]"))));

	/** Large attribute array: OrientationInterpolator DEF='VL5_ANIMATOR' keyValue field, scene-graph level=6, element #87, 24 total numbers made up of 6 4-tuple values */
	this.VL5_ANIMATOR_6_87_keyValue = new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0826),doubleToFloat(-0.01972),doubleToFloat(-0.5974),doubleToFloat(0.8017),doubleToFloat(0.08231),doubleToFloat(0.009296),doubleToFloat(-0.9648),doubleToFloat(0.2627),doubleToFloat(0.1734),doubleToFloat(-0.01238),doubleToFloat(0.9549),doubleToFloat(-0.2968),doubleToFloat(0.08732),doubleToFloat(-0.008125),doubleToFloat(0.9691),doubleToFloat(-0.2463),doubleToFloat(0.158),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0826)], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='SKULLBASE_ANIMATOR' keyValue field, scene-graph level=6, element #90, 40 total numbers made up of 10 4-tuple values */
	this.SKULLBASE_ANIMATOR_6_90_keyValue = new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.08642),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.1825),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.1505),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.1053),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.04391),doubleToFloat(0.0),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.03119),doubleToFloat(0.0),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.07936),doubleToFloat(0.0),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.1616),doubleToFloat(0.0),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.155),doubleToFloat(0.0),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.08642)], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='L_ELBOW_ANIMATOR' keyValue field, scene-graph level=6, element #96, 16 total numbers made up of 4 4-tuple values */
	this.L_ELBOW_ANIMATOR_6_96_keyValue = new MFRotation(Java.to([doubleToFloat(-1),doubleToFloat(-1.58298e-07),doubleToFloat(8.15967e-08),doubleToFloat(0.0659878),doubleToFloat(-1),doubleToFloat(-3.28826e-08),doubleToFloat(-2.31665e-08),doubleToFloat(0.488383),doubleToFloat(-1),doubleToFloat(3.06462e-06),doubleToFloat(-3.11947e-06),doubleToFloat(0.0177536),doubleToFloat(-1),doubleToFloat(-1.58298e-07),doubleToFloat(8.15967e-08),doubleToFloat(0.0659878)], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='L_WRIST_ANIMATOR' keyValue field, scene-graph level=6, element #99, 16 total numbers made up of 4 4-tuple values */
	this.L_WRIST_ANIMATOR_6_99_keyValue = new MFRotation(Java.to([doubleToFloat(1.51276e-06),doubleToFloat(-1),doubleToFloat(1.7724e-06),doubleToFloat(0.461076),doubleToFloat(-0.330195),doubleToFloat(-0.927451),doubleToFloat(0.175516),doubleToFloat(0.538852),doubleToFloat(0.0327774),doubleToFloat(-0.999314),doubleToFloat(-0.0172185),doubleToFloat(0.492033),doubleToFloat(1.51276e-06),doubleToFloat(-1),doubleToFloat(1.7724e-06),doubleToFloat(0.461076)], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='R_SHOULDER_ANIMATOR' keyValue field, scene-graph level=6, element #102, 16 total numbers made up of 4 4-tuple values */
	this.R_SHOULDER_ANIMATOR_6_102_keyValue = new MFRotation(Java.to([doubleToFloat(-1),doubleToFloat(-7.689e-07),doubleToFloat(-1.48e-07),doubleToFloat(0.09346),doubleToFloat(1),doubleToFloat(5.004e-08),doubleToFloat(2.254e-08),doubleToFloat(0.3197),doubleToFloat(-1),doubleToFloat(-1.104e-07),doubleToFloat(5.267e-10),doubleToFloat(0.1564),doubleToFloat(-1),doubleToFloat(-7.689e-07),doubleToFloat(-1.48e-07),doubleToFloat(0.09346)], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='R_ELBOW_ANIMATOR' keyValue field, scene-graph level=6, element #105, 16 total numbers made up of 4 4-tuple values */
	this.R_ELBOW_ANIMATOR_6_105_keyValue = new MFRotation(Java.to([doubleToFloat(-1),doubleToFloat(-4.45619e-08),doubleToFloat(2.70318e-08),doubleToFloat(0.411508),doubleToFloat(-1),doubleToFloat(8.16742e-07),doubleToFloat(-1.09556e-07),doubleToFloat(0.0925011),doubleToFloat(-1),doubleToFloat(-2.47628e-08),doubleToFloat(-7.02862e-09),doubleToFloat(0.572568),doubleToFloat(-1),doubleToFloat(-4.45619e-08),doubleToFloat(2.70318e-08),doubleToFloat(0.411508)], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='R_WRIST_ANIMATOR' keyValue field, scene-graph level=6, element #108, 16 total numbers made up of 4 4-tuple values */
	this.R_WRIST_ANIMATOR_6_108_keyValue = new MFRotation(Java.to([doubleToFloat(-0.8129),doubleToFloat(0.4759),doubleToFloat(-0.3357),doubleToFloat(0.1346),doubleToFloat(0.1533),doubleToFloat(-0.9878),doubleToFloat(0.02582),doubleToFloat(0.3902),doubleToFloat(-0.5701),doubleToFloat(0.7604),doubleToFloat(-0.311),doubleToFloat(0.366),doubleToFloat(-0.8129),doubleToFloat(0.4759),doubleToFloat(-0.3357),doubleToFloat(0.1346)], Java.type("float[]")));

	/** Large attribute array: Text string field, scene-graph level=5, element #133, 16 total values */
	this.Text_5_133_string = new MFString(new MFString("\"LOA1_WalkAnimation.x3d\" \"defines a prototype\" \"for animating a humanoid.\" \"\" \"Click this text to see\" \"InterchangableActorsViaDynamicRouting example.\""));
  this.x3dModel = new X3D().setProfile("Immersive").setVersion("3.3")
  .setHead(new head()
    .addMeta(new meta().setName("title").setContent("LOA1_WalkAnimation.x3d"))
    .addMeta(new meta().setName("description").setContent("Humanoid animation prototype reusable by any Humanoid."))
    .addMeta(new meta().setName("creator").setContent("Cindy Ballreich cindy@ballreich.net 3Name3D"))
    .addMeta(new meta().setName("rights").setContent("1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved."))
    .addMeta(new meta().setName("translator").setContent("Don Brutzman"))
    .addMeta(new meta().setName("translated").setContent("1 October 2001"))
    .addMeta(new meta().setName("modified").setContent("23 May 2020"))
    .addMeta(new meta().setName("reference").setContent("http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl"))
    .addMeta(new meta().setName("reference").setContent("http://HAnim.org/Specifications/HAnim2001"))
    .addMeta(new meta().setName("reference").setContent("http://HAnim.org/Models"))
    .addMeta(new meta().setName("reference").setContent("http://HAnim.org/Nodes"))
    .addMeta(new meta().setName("subject").setContent("Nancy Walk Animation HAnim 2001"))
    .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.x3d"))
    .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName("license").setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("LOA1_WalkAnimation.x3d"))
    .addChild(new ProtoDeclare().setName("LOA1_WalkAnimation")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("cycleInterval").setType("SFTime").setAccessType("inputOutput").setValue("2"))
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
          .addChild(new PositionInterpolator("HUMANOIDROOT_POSITION_ANIMATOR").setKey(this.HUMANOIDROOT_POSITION_ANIMATOR_6_54_key).setKeyValue(this.HUMANOIDROOT_POSITION_ANIMATOR_6_54_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("HumanoidRoot_translation_changed"))))
          .addChild(new OrientationInterpolator("HUMANOIDROOT_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("HumanoidRoot_rotation_changed"))))
          .addChild(new OrientationInterpolator("SACROILIAC_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.5),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-1.0),doubleToFloat(0.1056),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.09018),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-1.0),doubleToFloat(0.1056)], Java.type("float[]"))))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("lower_body_rotation_changed"))))
          .addChild(new OrientationInterpolator("L_HIP_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.25),doubleToFloat(0.375),doubleToFloat(0.5),doubleToFloat(0.6667),doubleToFloat(0.7917),doubleToFloat(0.9167),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.L_HIP_ANIMATOR_6_63_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("l_hip_rotation_changed"))))
          .addChild(new OrientationInterpolator("L_KNEE_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.2083),doubleToFloat(0.375),doubleToFloat(0.5),doubleToFloat(0.6667),doubleToFloat(0.7917),doubleToFloat(0.9167),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.L_KNEE_ANIMATOR_6_66_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("l_knee_rotation_changed"))))
          .addChild(new OrientationInterpolator("L_ANKLE_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.125),doubleToFloat(0.2083),doubleToFloat(0.375),doubleToFloat(0.6667),doubleToFloat(0.9167),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.06714),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.2152),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.3184),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.4717),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.2912),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.1222),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.06714)], Java.type("float[]"))))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("l_ankle_rotation_changed"))))
          .addChild(new OrientationInterpolator("L_MIDTARSAL_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.5),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.2),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("l_midtarsal_rotation_changed"))))
          .addChild(new OrientationInterpolator("R_HIP_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.125),doubleToFloat(0.2083),doubleToFloat(0.2917),doubleToFloat(0.375),doubleToFloat(0.5),doubleToFloat(0.6667),doubleToFloat(0.7917),doubleToFloat(0.9167),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.R_HIP_ANIMATOR_6_75_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("r_hip_rotation_changed"))))
          .addChild(new OrientationInterpolator("R_KNEE_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.125),doubleToFloat(0.2083),doubleToFloat(0.2917),doubleToFloat(0.375),doubleToFloat(0.5),doubleToFloat(0.6667),doubleToFloat(0.7917),doubleToFloat(0.9167),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.R_KNEE_ANIMATOR_6_78_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("r_knee_rotation_changed"))))
          .addChild(new OrientationInterpolator("R_ANKLE_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.125),doubleToFloat(0.2083),doubleToFloat(0.375),doubleToFloat(0.4583),doubleToFloat(0.5),doubleToFloat(0.6667),doubleToFloat(0.75),doubleToFloat(0.7917),doubleToFloat(0.9167),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.R_ANKLE_ANIMATOR_6_81_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("r_ankle_rotation_changed"))))
          .addChild(new OrientationInterpolator("R_MIDTARSAL_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.5),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.2),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.2)], Java.type("float[]"))))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("r_midtarsal_rotation_changed"))))
          .addChild(new OrientationInterpolator("VL5_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.2083),doubleToFloat(0.375),doubleToFloat(0.75),doubleToFloat(0.8333),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.VL5_ANIMATOR_6_87_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("vl5_rotation_changed"))))
          .addChild(new OrientationInterpolator("SKULLBASE_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.375),doubleToFloat(0.4167),doubleToFloat(0.5),doubleToFloat(0.5833),doubleToFloat(0.6667),doubleToFloat(0.75),doubleToFloat(0.8333),doubleToFloat(0.9167),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.SKULLBASE_ANIMATOR_6_90_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("skullbase_rotation_changed"))))
          .addChild(new OrientationInterpolator("L_SHOULDER_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.375),doubleToFloat(0.9167),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(1),doubleToFloat(0),doubleToFloat(0),doubleToFloat(0.1189),doubleToFloat(-1),doubleToFloat(-5.928e-07),doubleToFloat(1.525e-07),doubleToFloat(0.1861),doubleToFloat(1),doubleToFloat(-2.038e-07),doubleToFloat(-1.257e-07),doubleToFloat(0.3357),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.1189)], Java.type("float[]"))))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("l_shoulder_rotation_changed"))))
          .addChild(new OrientationInterpolator("L_ELBOW_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.375),doubleToFloat(0.9167),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.L_ELBOW_ANIMATOR_6_96_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("l_elbow_rotation_changed"))))
          .addChild(new OrientationInterpolator("L_WRIST_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.375),doubleToFloat(0.9167),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.L_WRIST_ANIMATOR_6_99_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("l_wrist_rotation_changed"))))
          .addChild(new OrientationInterpolator("R_SHOULDER_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.375),doubleToFloat(0.9167),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.R_SHOULDER_ANIMATOR_6_102_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("r_shoulder_rotation_changed"))))
          .addChild(new OrientationInterpolator("R_ELBOW_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.375),doubleToFloat(0.9167),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.R_ELBOW_ANIMATOR_6_105_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("r_elbow_rotation_changed"))))
          .addChild(new OrientationInterpolator("R_WRIST_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.375),doubleToFloat(0.9167),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.R_WRIST_ANIMATOR_6_108_keyValue)
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
		var testObject = new LOA1_WalkAnimation();
		print ("LOA1_WalkAnimation execution self-validation test results: " + testObject.validateSelf());
	}
}
new LOA1_WalkAnimation().main();