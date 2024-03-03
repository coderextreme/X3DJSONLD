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
  function doubleToFloat(d) {
    if (Float32Array) {
        return new Float32Array([d])[0];
    }
  }
LOA1_JumpAnimation.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: PositionInterpolator DEF='HUMANOIDROOT_POSITION_ANIMATOR' keyValue field, scene-graph level=6, element #54, 63 total numbers made up of 21 3-tuple values */
	this.HUMANOIDROOT_POSITION_ANIMATOR_6_54_keyValue = new MFVec3f() /* splitting up long array to improve readability */
	.append(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.01264),doubleToFloat(-0.01289),doubleToFloat(0.0),doubleToFloat(-0.04712),doubleToFloat(-0.03738),doubleToFloat(-3.345E-4),doubleToFloat(-0.1049),doubleToFloat(-0.05353),doubleToFloat(-5.712E-4),doubleToFloat(-0.1892),doubleToFloat(-0.06561),doubleToFloat(-8.233E-4),doubleToFloat(-0.286),doubleToFloat(-0.06276),doubleToFloat(-9.591E-4),doubleToFloat(-0.3795),doubleToFloat(-0.05148),doubleToFloat(-0.00106),doubleToFloat(-0.4484),doubleToFloat(-0.03656),doubleToFloat(-0.00106),doubleToFloat(-0.4484),doubleToFloat(-0.03656),doubleToFloat(-0.001122),doubleToFloat(-0.3269),doubleToFloat(-0.1499)], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([doubleToFloat(-8.616E-4),doubleToFloat(-0.13),doubleToFloat(-0.06358),doubleToFloat(-5.128E-4),doubleToFloat(-0.03123),doubleToFloat(-0.05488),doubleToFloat(4.779E-4),doubleToFloat(0.053),doubleToFloat(0.02732),doubleToFloat(1.728E-4),doubleToFloat(0.4148),doubleToFloat(0.006873),doubleToFloat(0.0),doubleToFloat(0.03045),doubleToFloat(0.02148),doubleToFloat(0.0),doubleToFloat(-0.01299),doubleToFloat(-0.01057),doubleToFloat(0.0),doubleToFloat(-0.06932),doubleToFloat(-0.01064),doubleToFloat(1.365E-4),doubleToFloat(-0.1037),doubleToFloat(-0.005059),doubleToFloat(1.279E-4),doubleToFloat(-0.07198),doubleToFloat(-0.007596),doubleToFloat(1.41E-4),doubleToFloat(-0.01626),doubleToFloat(-0.004935)], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))));

	/** Large attribute array: OrientationInterpolator DEF='HUMANOIDROOT_ANIMATOR' keyValue field, scene-graph level=6, element #57, 28 total numbers made up of 7 4-tuple values */
	this.HUMANOIDROOT_ANIMATOR_6_57_keyValue = new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.3273),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.3273),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='SACROILIAC_ANIMATOR' keyValue field, scene-graph level=6, element #60, 24 total numbers made up of 6 4-tuple values */
	this.SACROILIAC_ANIMATOR_6_60_keyValue = new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.1892),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.1892),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='L_HIP_ANIMATOR' keyValue field, scene-graph level=6, element #63, 44 total numbers made up of 11 4-tuple values */
	this.L_HIP_ANIMATOR_6_63_keyValue = new MFRotation() /* splitting up long array to improve readability */
	.append(new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(4.349),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(4.349),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(4.615),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.9136),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.3614),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.7869),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.3918),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.5433)], Java.type("float[]"))))
	.append(new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]"))));

	/** Large attribute array: OrientationInterpolator DEF='L_KNEE_ANIMATOR' keyValue field, scene-graph level=6, element #66, 32 total numbers made up of 8 4-tuple values */
	this.L_KNEE_ANIMATOR_6_66_keyValue = new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(2.047),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(2.047),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.566),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.5913),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.9235),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='L_ANKLE_ANIMATOR' keyValue field, scene-graph level=6, element #69, 56 total numbers made up of 14 4-tuple values */
	this.L_ANKLE_ANIMATOR_6_69_keyValue = new MFRotation() /* splitting up long array to improve readability */
	.append(new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.625),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.625),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.3364),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.2742),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.05078),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.2833),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.6667),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.2833),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.2108)], Java.type("float[]"))))
	.append(new MFRotation(Java.to([doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.375),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.3146),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.1174),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]"))));

	/** Large attribute array: OrientationInterpolator DEF='R_HIP_ANIMATOR' keyValue field, scene-graph level=6, element #75, 44 total numbers made up of 11 4-tuple values */
	this.R_HIP_ANIMATOR_6_75_keyValue = new MFRotation() /* splitting up long array to improve readability */
	.append(new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(4.433),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(4.433),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(4.647),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.8943),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.3698),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.4963),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.3829),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.5169)], Java.type("float[]"))))
	.append(new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]"))));

	/** Large attribute array: OrientationInterpolator DEF='R_KNEE_ANIMATOR' keyValue field, scene-graph level=6, element #78, 32 total numbers made up of 8 4-tuple values */
	this.R_KNEE_ANIMATOR_6_78_keyValue = new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(2.005),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(2.005),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.9507),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.5845),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.9054),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='R_ANKLE_ANIMATOR' keyValue field, scene-graph level=6, element #81, 56 total numbers made up of 14 4-tuple values */
	this.R_ANKLE_ANIMATOR_6_81_keyValue = new MFRotation() /* splitting up long array to improve readability */
	.append(new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.6735),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.6735),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.3527),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.3038),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.07964),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.3001),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.6509),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.3001),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.2087)], Java.type("float[]"))))
	.append(new MFRotation(Java.to([doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.3756),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.3279),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.1193),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]"))));

	/** Large attribute array: OrientationInterpolator DEF='VL5_ANIMATOR' keyValue field, scene-graph level=6, element #87, 24 total numbers made up of 6 4-tuple values */
	this.VL5_ANIMATOR_6_87_keyValue = new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0826),doubleToFloat(-0.01972),doubleToFloat(-0.5974),doubleToFloat(0.8017),doubleToFloat(0.08231),doubleToFloat(0.009296),doubleToFloat(-0.9648),doubleToFloat(0.2627),doubleToFloat(0.1734),doubleToFloat(-0.01238),doubleToFloat(0.9549),doubleToFloat(-0.2968),doubleToFloat(0.08732),doubleToFloat(-0.008125),doubleToFloat(0.9691),doubleToFloat(-0.2463),doubleToFloat(0.158),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0826)], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='SKULLBASE_ANIMATOR' keyValue field, scene-graph level=6, element #90, 24 total numbers made up of 6 4-tuple values */
	this.SKULLBASE_ANIMATOR_6_90_keyValue = new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.5989),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.5989),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.3216),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.06503),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='L_SHOULDER_ANIMATOR' keyValue field, scene-graph level=6, element #93, 28 total numbers made up of 7 4-tuple values */
	this.L_SHOULDER_ANIMATOR_6_93_keyValue = new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(-0.9987),doubleToFloat(0.02554),doubleToFloat(0.04498),doubleToFloat(1.57),doubleToFloat(-0.9987),doubleToFloat(0.02554),doubleToFloat(0.04498),doubleToFloat(1.57),doubleToFloat(1.0),doubleToFloat(4.113E-4),doubleToFloat(0.003055),doubleToFloat(4.114),doubleToFloat(-0.8413),doubleToFloat(0.3238),doubleToFloat(0.4329),doubleToFloat(1.453),doubleToFloat(-0.877),doubleToFloat(0.4198),doubleToFloat(0.2337),doubleToFloat(0.6009),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='L_ELBOW_ANIMATOR' keyValue field, scene-graph level=6, element #96, 24 total numbers made up of 6 4-tuple values */
	this.L_ELBOW_ANIMATOR_6_96_keyValue = new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.1229),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.1229),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.5976),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.3917),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='L_WRIST_ANIMATOR' keyValue field, scene-graph level=6, element #99, 28 total numbers made up of 7 4-tuple values */
	this.L_WRIST_ANIMATOR_6_99_keyValue = new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0672928),doubleToFloat(0.989475),doubleToFloat(-0.128107),doubleToFloat(4.15574),doubleToFloat(0.0672928),doubleToFloat(0.989475),doubleToFloat(-0.128107),doubleToFloat(4.15574),doubleToFloat(0.00364942),doubleToFloat(0.999901),doubleToFloat(0.0135896),doubleToFloat(4.5822),doubleToFloat(0.0),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.655922),doubleToFloat(-5.0618E-4),doubleToFloat(-0.999999),doubleToFloat(0.0012782),doubleToFloat(1.28397),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='R_SHOULDER_ANIMATOR' keyValue field, scene-graph level=6, element #102, 28 total numbers made up of 7 4-tuple values */
	this.R_SHOULDER_ANIMATOR_6_102_keyValue = new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.9992),doubleToFloat(0.02042),doubleToFloat(0.03558),doubleToFloat(4.688),doubleToFloat(0.9992),doubleToFloat(0.02042),doubleToFloat(0.03558),doubleToFloat(4.688),doubleToFloat(0.9989),doubleToFloat(-0.04623),doubleToFloat(0.005159),doubleToFloat(4.079),doubleToFloat(-0.8687),doubleToFloat(-0.2525),doubleToFloat(-0.4261),doubleToFloat(1.501),doubleToFloat(-0.941),doubleToFloat(-0.2893),doubleToFloat(-0.1754),doubleToFloat(0.4788),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='R_ELBOW_ANIMATOR' keyValue field, scene-graph level=6, element #105, 24 total numbers made up of 6 4-tuple values */
	this.R_ELBOW_ANIMATOR_6_105_keyValue = new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.04151),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.04151),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.5855),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.5852),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]")));

	/** Large attribute array: OrientationInterpolator DEF='R_WRIST_ANIMATOR' keyValue field, scene-graph level=6, element #108, 24 total numbers made up of 6 4-tuple values */
	this.R_WRIST_ANIMATOR_6_108_keyValue = new MFRotation(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(-0.0585279),doubleToFloat(0.983903),doubleToFloat(-0.168849),doubleToFloat(1.85956),doubleToFloat(-0.0585279),doubleToFloat(0.983903),doubleToFloat(-0.168849),doubleToFloat(1.85956),doubleToFloat(-0.00222418),doubleToFloat(0.99801),doubleToFloat(-0.0630095),doubleToFloat(1.46072),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.497349),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]")));

	/** Large attribute array: Text string field, scene-graph level=5, element #133, 16 total values */
	this.Text_5_133_string = new MFString(new MFString("\"LOA1_JumpAnimation.x3d\" \"defines a prototype\" \"for animating a humanoid.\" \"\" \"Click this text to see\" \"InterchangableActorsViaDynamicRouting example.\""));
  this.x3dModel = new X3D().setProfile("Immersive").setVersion("3.3")
  .setHead(new head()
    .addMeta(new meta().setName("title").setContent("LOA1_JumpAnimation.x3d"))
    .addMeta(new meta().setName("description").setContent("Humanoid animation prototype reusable by any Humanoid."))
    .addMeta(new meta().setName("creator").setContent("Cindy Ballreich cindy@ballreich.net 3Name3D"))
    .addMeta(new meta().setName("rights").setContent("1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved."))
    .addMeta(new meta().setName("translator").setContent("Scott Tufts"))
    .addMeta(new meta().setName("translated").setContent("1 December 2001"))
    .addMeta(new meta().setName("modified").setContent("23 May 2020"))
    .addMeta(new meta().setName("reference").setContent("http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl"))
    .addMeta(new meta().setName("reference").setContent("http://www.HAnim.org"))
    .addMeta(new meta().setName("reference").setContent("http://HAnim.org/Models"))
    .addMeta(new meta().setName("reference").setContent("http://HAnim.org/Nodes"))
    .addMeta(new meta().setName("subject").setContent("InterchangableActorsViaDynamicRouting Nancy jump Animation HAnim 2001"))
    .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_JumpAnimation.x3d"))
    .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName("license").setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("LOA1_JumpAnimation.x3d"))
    .addChild(new ProtoDeclare().setName("LOA1_JumpAnimation")
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
          .addChild(new TimeSensor("TIMER").setLoop(true)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("cycleInterval").setProtoField("cycleInterval"))
              .addConnect(new connect().setNodeField("enabled").setProtoField("enabled"))
              .addConnect(new connect().setNodeField("loop").setProtoField("loop"))
              .addConnect(new connect().setNodeField("startTime").setProtoField("startTime"))
              .addConnect(new connect().setNodeField("stopTime").setProtoField("stopTime"))
              .addConnect(new connect().setNodeField("fraction_changed").setProtoField("fraction_changed"))
              .addConnect(new connect().setNodeField("isActive").setProtoField("isActive"))))
          .addChild(new PositionInterpolator("HUMANOIDROOT_POSITION_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.04),doubleToFloat(0.08),doubleToFloat(0.12),doubleToFloat(0.16),doubleToFloat(0.2),doubleToFloat(0.24),doubleToFloat(0.28),doubleToFloat(0.32),doubleToFloat(0.36),doubleToFloat(0.4),doubleToFloat(0.44),doubleToFloat(0.48),doubleToFloat(0.64),doubleToFloat(0.76),doubleToFloat(0.8),doubleToFloat(0.84),doubleToFloat(0.88),doubleToFloat(0.92),doubleToFloat(0.96),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.HUMANOIDROOT_POSITION_ANIMATOR_6_54_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("HumanoidRoot_translation_changed"))))
          .addChild(new OrientationInterpolator("HUMANOIDROOT_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.28),doubleToFloat(0.32),doubleToFloat(0.48),doubleToFloat(0.64),doubleToFloat(0.76),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.HUMANOIDROOT_ANIMATOR_6_57_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("HumanoidRoot_rotation_changed"))))
          .addChild(new OrientationInterpolator("SACROILIAC_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.28),doubleToFloat(0.32),doubleToFloat(0.48),doubleToFloat(0.76),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.SACROILIAC_ANIMATOR_6_60_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("lower_body_rotation_changed"))))
          .addChild(new OrientationInterpolator("L_HIP_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.28),doubleToFloat(0.32),doubleToFloat(0.36),doubleToFloat(0.4),doubleToFloat(0.44),doubleToFloat(0.48),doubleToFloat(0.64),doubleToFloat(0.76),doubleToFloat(0.88),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.L_HIP_ANIMATOR_6_63_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("l_hip_rotation_changed"))))
          .addChild(new OrientationInterpolator("L_KNEE_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.28),doubleToFloat(0.32),doubleToFloat(0.48),doubleToFloat(0.64),doubleToFloat(0.76),doubleToFloat(0.88),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.L_KNEE_ANIMATOR_6_66_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("l_knee_rotation_changed"))))
          .addChild(new OrientationInterpolator("L_ANKLE_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.28),doubleToFloat(0.32),doubleToFloat(0.36),doubleToFloat(0.4),doubleToFloat(0.44),doubleToFloat(0.48),doubleToFloat(0.64),doubleToFloat(0.76),doubleToFloat(0.84),doubleToFloat(0.88),doubleToFloat(0.92),doubleToFloat(0.96),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.L_ANKLE_ANIMATOR_6_69_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("l_ankle_rotation_changed"))))
          .addChild(new OrientationInterpolator("L_MIDTARSAL_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.5),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.2),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("l_midtarsal_rotation_changed"))))
          .addChild(new OrientationInterpolator("R_HIP_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.28),doubleToFloat(0.32),doubleToFloat(0.36),doubleToFloat(0.4),doubleToFloat(0.44),doubleToFloat(0.48),doubleToFloat(0.64),doubleToFloat(0.76),doubleToFloat(0.88),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.R_HIP_ANIMATOR_6_75_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("r_hip_rotation_changed"))))
          .addChild(new OrientationInterpolator("R_KNEE_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.28),doubleToFloat(0.32),doubleToFloat(0.48),doubleToFloat(0.64),doubleToFloat(0.76),doubleToFloat(0.88),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.R_KNEE_ANIMATOR_6_78_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("r_knee_rotation_changed"))))
          .addChild(new OrientationInterpolator("R_ANKLE_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.28),doubleToFloat(0.32),doubleToFloat(0.36),doubleToFloat(0.4),doubleToFloat(0.44),doubleToFloat(0.48),doubleToFloat(0.64),doubleToFloat(0.76),doubleToFloat(0.84),doubleToFloat(0.88),doubleToFloat(0.92),doubleToFloat(0.96),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.R_ANKLE_ANIMATOR_6_81_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("r_ankle_rotation_changed"))))
          .addChild(new OrientationInterpolator("R_MIDTARSAL_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.5),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.2),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.2)], Java.type("float[]"))))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("r_midtarsal_rotation_changed"))))
          .addChild(new OrientationInterpolator("VL5_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.2083),doubleToFloat(0.375),doubleToFloat(0.75),doubleToFloat(0.8333),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.VL5_ANIMATOR_6_87_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("vl5_rotation_changed"))))
          .addChild(new OrientationInterpolator("SKULLBASE_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.28),doubleToFloat(0.32),doubleToFloat(0.48),doubleToFloat(0.76),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.SKULLBASE_ANIMATOR_6_90_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("skullbase_rotation_changed"))))
          .addChild(new OrientationInterpolator("L_SHOULDER_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.28),doubleToFloat(0.32),doubleToFloat(0.64),doubleToFloat(0.76),doubleToFloat(0.88),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.L_SHOULDER_ANIMATOR_6_93_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("l_shoulder_rotation_changed"))))
          .addChild(new OrientationInterpolator("L_ELBOW_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.28),doubleToFloat(0.32),doubleToFloat(0.64),doubleToFloat(0.76),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.L_ELBOW_ANIMATOR_6_96_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("l_elbow_rotation_changed"))))
          .addChild(new OrientationInterpolator("L_WRIST_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.28),doubleToFloat(0.32),doubleToFloat(0.64),doubleToFloat(0.76),doubleToFloat(0.88),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.L_WRIST_ANIMATOR_6_99_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("l_wrist_rotation_changed"))))
          .addChild(new OrientationInterpolator("R_SHOULDER_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.28),doubleToFloat(0.32),doubleToFloat(0.64),doubleToFloat(0.76),doubleToFloat(0.88),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.R_SHOULDER_ANIMATOR_6_102_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("r_shoulder_rotation_changed"))))
          .addChild(new OrientationInterpolator("R_ELBOW_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.28),doubleToFloat(0.32),doubleToFloat(0.64),doubleToFloat(0.76),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.R_ELBOW_ANIMATOR_6_105_keyValue)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("value_changed").setProtoField("r_elbow_rotation_changed"))))
          .addChild(new OrientationInterpolator("R_WRIST_ANIMATOR").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.28),doubleToFloat(0.32),doubleToFloat(0.64),doubleToFloat(0.76),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(this.R_WRIST_ANIMATOR_6_108_keyValue)
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
    .addChild(new Anchor().setDescription("see InterchangableActorsViaDynamicRouting scene").setParameter(new MFString("\"target=_blank\"")).setUrl(new MFString("\"InterchangableActorsViaDynamicRouting.x3d\" \"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d\" \"InterchangableActorsViaDynamicRouting.wrl\" \"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl\""))
      .addChild(new Shape()
        .setGeometry(new Text().setString(this.Text_5_133_string)
          .setFontStyle(new FontStyle().setJustify(new MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(0.8)))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(0.2)))))));
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
		var testObject = new LOA1_JumpAnimation();
		print ("LOA1_JumpAnimation execution self-validation test results: " + testObject.validateSelf());
	}
}
new LOA1_JumpAnimation().main();