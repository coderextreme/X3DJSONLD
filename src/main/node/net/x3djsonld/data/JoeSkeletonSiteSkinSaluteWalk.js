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
 * <p> Attempting to show skeleton, skin, sites and animation. </p>
 <p> Related links: JoeSkeletonSiteSkinSaluteWalk.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.JoeSkeletonSiteSkinSaluteWalk&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/MotionAnimation/JoeSkeletonSiteSkinSaluteWalk.x3d">JoeSkeletonSiteSkinSaluteWalk.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Attempting to show skeleton, skin, sites and animation </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/MotionAnimation/JoeSkeletonSiteSkinSaluteWalk.original.x3dv">JoeSkeletonSiteSkinSaluteWalk.original.x3dv</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Joe D. Williams </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 9 January 2004 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 4 December 2022 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 4 December 2022 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Michalis Kamburelis </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/MotionAnimation/JoeSkeletonSiteSkinSaluteWalk.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/MotionAnimation/JoeSkeletonSiteSkinSaluteWalk.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> tovrmlx3d, <a href="https://castle-engine.io/view3dscene.php#section_converting" target="_blank">https://castle-engine.io/view3dscene.php#section_converting</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 4.0, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> filename </i> </td>
			<td> hanimLOA3A8320080320..x3dv 20080627 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> Under development, numerous errors and warnings </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> Provide feedback to tovrmlx3d converter </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> HAnimJoint cannot contain X3DChildNode elements, only HAnimJoint HAnimSegmet HAnimSite - improve diagnostics. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> ensure name prefix "Joe_" applied to all contained DEF values (not name field), perhaps correction automatically applied by X3DTidy </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> This is an HAnimV1 loa model, might need to convert to X3D4 to note loa value </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/MotionAnimation/../license.html">../license.html</a> </td>
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

	* @author Joe D. Williams
 */

function JoeSkeletonSiteSkinSaluteWalk
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
JoeSkeletonSiteSkinSaluteWalk.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: WorldInfo title field, scene-graph level=4, element #22, 20 total values */
	this.WorldInfo_4_22_title = new autoclass.SFString("HAnim V1 LOA3 Skeleton Joint centers and Site translations 
Adapted for approximatrion of ManGLoss Site Location Example and 
HANIM 200x Default Joint Centers, LOA3");

	/** Large attribute array: Coordinate point field, scene-graph level=7, element #24, 18 total numbers made up of 6 3-tuple values */
	this.Coordinate_7_24_point = new autoclass.MFVec3f(java.newArray("float", [0.0,0.0099999997764825821,0.0,-0.0099999997764825821,0.0,0.0,0.0,0.0,0.015699999406933784,0.0099999997764825821,0.0,0.0,0.0,0.0,-0.0099999997764825821,0.0,-0.0099999997764825821,0.0]));

	/** Large attribute array: Coordinate point field, scene-graph level=7, element #31, 18 total numbers made up of 6 3-tuple values */
	this.Coordinate_7_31_point = new autoclass.MFVec3f(java.newArray("float", [0.0,0.0099999997764825821,0.0,-0.0099999997764825821,0.0,0.0,0.0,0.0,0.0099999997764825821,0.0099999997764825821,0.0,0.0,0.0,0.0,-0.0099999997764825821,0.0,-0.0099999997764825821,0.0]));

	/** Large attribute array: Coordinate point field, scene-graph level=11, element #56, 12 total numbers made up of 4 3-tuple values */
	this.Coordinate_11_56_point = new autoclass.MFVec3f(java.newArray("float", [0.0,0.92000001668930054,0.0,0.096100002527236938,0.9124000072479248,0.0,-0.094999998807907104,0.91710001230239868,0.002899999963119626,0.0,1.0449999570846558,-0.094999998807907104]));

	/** Large attribute array: Coordinate point field, scene-graph level=14, element #137, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_14_137_point = new autoclass.MFVec3f(java.newArray("float", [0.10000000149011612,0.068999998271465302,0.0,0.11500000208616257,0.030999999493360519,0.029999999329447746]));

	/** Large attribute array: Coordinate point field, scene-graph level=15, element #155, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_15_155_point = new autoclass.MFVec3f(java.newArray("float", [0.11500000208616257,0.030999999493360519,0.029999999329447746,0.11500000208616257,0.037000000476837158,0.090000003576278687]));

	/** Large attribute array: Coordinate point field, scene-graph level=16, element #167, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_16_167_point = new autoclass.MFVec3f(java.newArray("float", [0.11500000208616257,0.037000000476837158,0.090000003576278687,0.11500000208616257,0.019999999552965164,0.12200000137090683]));

	/** Large attribute array: Coordinate point field, scene-graph level=17, element #183, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_17_183_point = new autoclass.MFVec3f(java.newArray("float", [0.11500000208616257,0.019999999552965164,0.12200000137090683,0.13199999928474426,0.013000000268220901,0.18999999761581421]));

	/** Large attribute array: Coordinate point field, scene-graph level=14, element #270, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_14_270_point = new autoclass.MFVec3f(java.newArray("float", [-0.10000000149011612,0.071199998259544373,0.0,-0.10000000149011612,0.014999999664723873,-0.0099999997764825821]));

	/** Large attribute array: Coordinate point field, scene-graph level=15, element #289, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_15_289_point = new autoclass.MFVec3f(java.newArray("float", [-0.10000000149011612,0.014999999664723873,-0.0099999997764825821,-0.10000000149011612,0.019999999552965164,0.070000000298023224]));

	/** Large attribute array: Coordinate point field, scene-graph level=16, element #302, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_16_302_point = new autoclass.MFVec3f(java.newArray("float", [-0.10000000149011612,0.019999999552965164,0.070000000298023224,-0.10000000149011612,0.0099999997764825821,0.14000000059604645]));

	/** Large attribute array: Coordinate point field, scene-graph level=17, element #319, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_17_319_point = new autoclass.MFVec3f(java.newArray("float", [-0.10000000149011612,0.0099999997764825821,0.14000000059604645,-0.10429999977350235,0.0015999999595806003,0.20000000298023224]));

	/** Large attribute array: Coordinate point field, scene-graph level=28, element #513, 12 total numbers made up of 4 3-tuple values */
	this.Coordinate_28_513_point = new autoclass.MFVec3f(java.newArray("float", [0.0,1.5249999761581421,-0.071999996900558472,0.082000002264976501,1.4487999677658081,-0.035300001502037048,-0.029999999329447746,1.4600000381469727,0.019999999552965164,0.0,1.5399999618530273,-0.05000000074505806]));

	/** Large attribute array: Coordinate point field, scene-graph level=35, element #567, 9 total numbers made up of 3 3-tuple values */
	this.Coordinate_35_567_point = new autoclass.MFVec3f(java.newArray("float", [0.0,1.6299999952316284,-0.0099999997764825821,0.034000001847743988,1.659000039100647,0.059999998658895493,-0.034000001847743988,1.6549999713897705,0.064999997615814209]));

	/** Large attribute array: Coordinate point field, scene-graph level=36, element #594, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_36_594_point = new autoclass.MFVec3f(java.newArray("float", [0.034000001847743988,1.6549999713897705,0.064999997615814209,-0.034000001847743988,1.6549999713897705,0.064999997615814209]));

	/** Large attribute array: Coordinate point field, scene-graph level=36, element #602, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_36_602_point = new autoclass.MFVec3f(java.newArray("float", [0.034000001847743988,1.6549999713897705,0.064999997615814209,-0.034000001847743988,1.6549999713897705,0.064999997615814209]));

	/** Large attribute array: Coordinate point field, scene-graph level=28, element #618, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_28_618_point = new autoclass.MFVec3f(java.newArray("float", [0.082000002264976501,1.4487999677658081,-0.035300001502037048,0.096199996769428253,1.4269000291824341,-0.042399998754262924]));

	/** Large attribute array: Coordinate point field, scene-graph level=29, element #627, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_29_627_point = new autoclass.MFVec3f(java.newArray("float", [0.096199996769428253,1.4269000291824341,-0.042399998754262924,0.20000000298023224,1.440000057220459,-0.039999999105930328]));

	/** Large attribute array: Coordinate point field, scene-graph level=30, element #642, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_30_642_point = new autoclass.MFVec3f(java.newArray("float", [0.20290000736713409,1.440000057220459,-0.038699999451637268,0.20000000298023224,1.1388000249862671,-0.039999999105930328]));

	/** Large attribute array: Coordinate point field, scene-graph level=31, element #665, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_31_665_point = new autoclass.MFVec3f(java.newArray("float", [0.20000000298023224,1.1388000249862671,-0.039999999105930328,0.20000000298023224,0.87000000476837158,-0.039999999105930328]));

	/** Large attribute array: Coordinate point field, scene-graph level=32, element #686, 18 total numbers made up of 6 3-tuple values */
	this.Coordinate_32_686_point = new autoclass.MFVec3f(java.newArray("float", [0.20000000298023224,0.87000000476837158,-0.039999999105930328,0.19239999353885651,0.84719997644424438,-0.053399998694658279,0.19830000400543213,0.80239999294281006,-0.028000000864267349,0.19869999587535858,0.80290001630783081,-0.05299999937415123,0.1956000030040741,0.80190002918243408,-0.079400002956390381,0.19249999523162842,0.80659997463226318,-0.10360000282526016]));

	/** Large attribute array: Coordinate point field, scene-graph level=33, element #699, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_33_699_point = new autoclass.MFVec3f(java.newArray("float", [0.19239999353885651,0.84719997644424438,-0.053399998694658279,0.19509999454021454,0.82260000705718994,0.024599999189376831]));

	/** Large attribute array: Coordinate point field, scene-graph level=34, element #706, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_34_706_point = new autoclass.MFVec3f(java.newArray("float", [0.19509999454021454,0.82260000705718994,0.024599999189376831,0.19550000131130219,0.81590002775192261,0.046399999409914017]));

	/** Large attribute array: Coordinate point field, scene-graph level=35, element #713, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_35_713_point = new autoclass.MFVec3f(java.newArray("float", [0.19550000131130219,0.81590002775192261,0.046399999409914017,0.19820000231266022,0.80610001087188721,0.07590000331401825]));

	/** Large attribute array: Coordinate point field, scene-graph level=33, element #725, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_33_725_point = new autoclass.MFVec3f(java.newArray("float", [0.19830000400543213,0.80239999294281006,-0.028000000864267349,0.19830000400543213,0.78149998188018799,-0.028000000864267349]));

	/** Large attribute array: Coordinate point field, scene-graph level=34, element #732, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_34_732_point = new autoclass.MFVec3f(java.newArray("float", [0.19830000400543213,0.78149998188018799,-0.028000000864267349,0.20170000195503235,0.73629999160766602,-0.024800000712275505]));

	/** Large attribute array: Coordinate point field, scene-graph level=35, element #739, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_35_739_point = new autoclass.MFVec3f(java.newArray("float", [0.20170000195503235,0.73629999160766602,-0.024800000712275505,0.20280000567436218,0.71390002965927124,-0.023600000888109207]));

	/** Large attribute array: Coordinate point field, scene-graph level=36, element #746, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_36_746_point = new autoclass.MFVec3f(java.newArray("float", [0.20280000567436218,0.71390002965927124,-0.023600000888109207,0.20890000462532043,0.68580001592636108,-0.024499999359250069]));

	/** Large attribute array: Coordinate point field, scene-graph level=33, element #761, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_33_761_point = new autoclass.MFVec3f(java.newArray("float", [0.19869999587535858,0.80290001630783081,-0.05299999937415123,0.19869999587535858,0.78179997205734253,-0.05299999937415123]));

	/** Large attribute array: Coordinate point field, scene-graph level=34, element #768, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_34_768_point = new autoclass.MFVec3f(java.newArray("float", [0.19869999587535858,0.78179997205734253,-0.05299999937415123,0.2012999951839447,0.72729998826980591,-0.050299998372793198]));

	/** Large attribute array: Coordinate point field, scene-graph level=35, element #775, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_35_775_point = new autoclass.MFVec3f(java.newArray("float", [0.2012999951839447,0.72729998826980591,-0.050299998372793198,0.20260000228881836,0.70109999179840088,-0.049400001764297485]));

	/** Large attribute array: Coordinate point field, scene-graph level=36, element #782, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_36_782_point = new autoclass.MFVec3f(java.newArray("float", [0.20260000228881836,0.70109999179840088,-0.049400001764297485,0.20800000429153442,0.67309999465942383,-0.049100000411272049]));

	/** Large attribute array: Coordinate point field, scene-graph level=33, element #795, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_33_795_point = new autoclass.MFVec3f(java.newArray("float", [0.1956000030040741,0.80190002918243408,-0.079400002956390381,0.1956000030040741,0.78149998188018799,-0.079400002956390381]));

	/** Large attribute array: Coordinate point field, scene-graph level=34, element #802, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_34_802_point = new autoclass.MFVec3f(java.newArray("float", [0.1956000030040741,0.78149998188018799,-0.079400002956390381,0.19730000197887421,0.72869998216629028,-0.077699996531009674]));

	/** Large attribute array: Coordinate point field, scene-graph level=35, element #809, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_35_809_point = new autoclass.MFVec3f(java.newArray("float", [0.19730000197887421,0.72869998216629028,-0.077699996531009674,0.19830000400543213,0.70450001955032349,-0.076700001955032349]));

	/** Large attribute array: Coordinate point field, scene-graph level=36, element #816, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_36_816_point = new autoclass.MFVec3f(java.newArray("float", [0.19830000400543213,0.70450001955032349,-0.076700001955032349,0.20350000262260437,0.67500001192092896,-0.075599998235702515]));

	/** Large attribute array: Coordinate point field, scene-graph level=33, element #829, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_33_829_point = new autoclass.MFVec3f(java.newArray("float", [0.19249999523162842,0.80659997463226318,-0.10360000282526016,0.19249999523162842,0.78659999370574951,-0.10360000282526016]));

	/** Large attribute array: Coordinate point field, scene-graph level=34, element #836, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_34_836_point = new autoclass.MFVec3f(java.newArray("float", [0.19249999523162842,0.78659999370574951,-0.10360000282526016,0.19380000233650208,0.74519997835159302,-0.10239999741315842]));

	/** Large attribute array: Coordinate point field, scene-graph level=35, element #843, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_35_843_point = new autoclass.MFVec3f(java.newArray("float", [0.19380000233650208,0.74519997835159302,-0.10239999741315842,0.19480000436306,0.72769999504089355,-0.10170000046491623]));

	/** Large attribute array: Coordinate point field, scene-graph level=36, element #850, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_36_850_point = new autoclass.MFVec3f(java.newArray("float", [0.19480000436306,0.72769999504089355,-0.10170000046491623,0.20139999687671661,0.70090001821517944,-0.10119999945163727]));

	/** Large attribute array: Coordinate point field, scene-graph level=27, element #869, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_27_869_point = new autoclass.MFVec3f(java.newArray("float", [-0.029999999329447746,1.4600000381469727,0.019999999552965164,-0.090000003576278687,1.4099999666213989,-0.090000003576278687]));

	/** Large attribute array: Coordinate point field, scene-graph level=28, element #878, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_28_878_point = new autoclass.MFVec3f(java.newArray("float", [-0.090000003576278687,1.4099999666213989,-0.090000003576278687,-0.20000000298023224,1.440000057220459,-0.039999999105930328]));

	/** Large attribute array: Coordinate point field, scene-graph level=29, element #893, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_29_893_point = new autoclass.MFVec3f(java.newArray("float", [-0.20000000298023224,1.440000057220459,-0.039999999105930328,-0.20000000298023224,1.1388000249862671,-0.039999999105930328]));

	/** Large attribute array: Coordinate point field, scene-graph level=30, element #922, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_30_922_point = new autoclass.MFVec3f(java.newArray("float", [-0.20000000298023224,1.1388000249862671,-0.039999999105930328,-0.20000000298023224,0.88999998569488525,-0.039999999105930328]));

	/** Large attribute array: Coordinate point field, scene-graph level=31, element #943, 18 total numbers made up of 6 3-tuple values */
	this.Coordinate_31_943_point = new autoclass.MFVec3f(java.newArray("float", [-0.20000000298023224,0.88999998569488525,-0.039999999105930328,-0.20000000298023224,0.85000002384185791,0.0,-0.20000000298023224,0.8399999737739563,-0.014999999664723873,-0.20000000298023224,0.83499997854232788,-0.039999999105930328,-0.20000000298023224,0.83499997854232788,-0.064999997615814209,-0.20000000298023224,0.8399999737739563,-0.085000000894069672]));

	/** Large attribute array: Coordinate point field, scene-graph level=32, element #952, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_32_952_point = new autoclass.MFVec3f(java.newArray("float", [-0.20000000298023224,0.85000002384185791,0.0,-0.20000000298023224,0.81999999284744263,0.029999999329447746]));

	/** Large attribute array: Coordinate point field, scene-graph level=33, element #959, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_33_959_point = new autoclass.MFVec3f(java.newArray("float", [-0.20000000298023224,0.81999999284744263,0.029999999329447746,-0.20000000298023224,0.80000001192092896,0.05000000074505806]));

	/** Large attribute array: Coordinate point field, scene-graph level=34, element #968, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_34_968_point = new autoclass.MFVec3f(java.newArray("float", [-0.20000000298023224,0.80000001192092896,0.05000000074505806,-0.20000000298023224,0.77999997138977051,0.070000000298023224]));

	/** Large attribute array: Coordinate point field, scene-graph level=32, element #980, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_32_980_point = new autoclass.MFVec3f(java.newArray("float", [-0.20000000298023224,0.8399999737739563,-0.014999999664723873,-0.20000000298023224,0.7929999828338623,-0.014999999664723873]));

	/** Large attribute array: Coordinate point field, scene-graph level=33, element #989, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_33_989_point = new autoclass.MFVec3f(java.newArray("float", [-0.20000000298023224,0.7929999828338623,-0.014999999664723873,-0.20000000298023224,0.74500000476837158,-0.014999999664723873]));

	/** Large attribute array: Coordinate point field, scene-graph level=34, element #996, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_34_996_point = new autoclass.MFVec3f(java.newArray("float", [-0.20000000298023224,0.74500000476837158,-0.014999999664723873,-0.20000000298023224,0.72000002861022949,-0.014999999664723873]));

	/** Large attribute array: Coordinate point field, scene-graph level=35, element #1003, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_35_1003_point = new autoclass.MFVec3f(java.newArray("float", [-0.20000000298023224,0.72000002861022949,-0.014999999664723873,-0.20000000298023224,0.69499999284744263,-0.014999999664723873]));

	/** Large attribute array: Coordinate point field, scene-graph level=32, element #1016, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_32_1016_point = new autoclass.MFVec3f(java.newArray("float", [-0.20000000298023224,0.83499997854232788,-0.039999999105930328,-0.20000000298023224,0.78799998760223389,-0.039999999105930328]));

	/** Large attribute array: Coordinate point field, scene-graph level=33, element #1023, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_33_1023_point = new autoclass.MFVec3f(java.newArray("float", [-0.20000000298023224,0.78799998760223389,-0.039999999105930328,-0.20000000298023224,0.74000000953674316,-0.039999999105930328]));

	/** Large attribute array: Coordinate point field, scene-graph level=34, element #1030, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_34_1030_point = new autoclass.MFVec3f(java.newArray("float", [-0.20000000298023224,0.74000000953674316,-0.039999999105930328,-0.20000000298023224,0.71420001983642578,-0.039999999105930328]));

	/** Large attribute array: Coordinate point field, scene-graph level=35, element #1037, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_35_1037_point = new autoclass.MFVec3f(java.newArray("float", [-0.20000000298023224,0.71420001983642578,-0.039999999105930328,-0.20000000298023224,0.67580002546310425,-0.039999999105930328]));

	/** Large attribute array: Coordinate point field, scene-graph level=32, element #1052, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_32_1052_point = new autoclass.MFVec3f(java.newArray("float", [-0.20000000298023224,0.83499997854232788,-0.064999997615814209,-0.20000000298023224,0.7929999828338623,-0.064999997615814209]));

	/** Large attribute array: Coordinate point field, scene-graph level=33, element #1059, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_33_1059_point = new autoclass.MFVec3f(java.newArray("float", [-0.20000000298023224,0.7929999828338623,-0.064999997615814209,-0.20000000298023224,0.74000000953674316,-0.064999997615814209]));

	/** Large attribute array: Coordinate point field, scene-graph level=34, element #1066, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_34_1066_point = new autoclass.MFVec3f(java.newArray("float", [-0.20000000298023224,0.74000000953674316,-0.064999997615814209,-0.20000000298023224,0.71770000457763672,-0.064999997615814209]));

	/** Large attribute array: Coordinate point field, scene-graph level=35, element #1073, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_35_1073_point = new autoclass.MFVec3f(java.newArray("float", [-0.20000000298023224,0.71770000457763672,-0.064999997615814209,-0.20000000298023224,0.69499999284744263,-0.064999997615814209]));

	/** Large attribute array: Coordinate point field, scene-graph level=32, element #1086, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_32_1086_point = new autoclass.MFVec3f(java.newArray("float", [-0.20000000298023224,0.8399999737739563,-0.085000000894069672,-0.20000000298023224,0.79000002145767212,-0.085000000894069672]));

	/** Large attribute array: Coordinate point field, scene-graph level=33, element #1095, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_33_1095_point = new autoclass.MFVec3f(java.newArray("float", [-0.20000000298023224,0.79000002145767212,-0.085000000894069672,-0.20000000298023224,0.75499999523162842,-0.085000000894069672]));

	/** Large attribute array: Coordinate point field, scene-graph level=34, element #1102, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_34_1102_point = new autoclass.MFVec3f(java.newArray("float", [-0.20000000298023224,0.75499999523162842,-0.085000000894069672,-0.20000000298023224,0.73500001430511475,-0.085000000894069672]));

	/** Large attribute array: Coordinate point field, scene-graph level=35, element #1109, 6 total numbers made up of 2 3-tuple values */
	this.Coordinate_35_1109_point = new autoclass.MFVec3f(java.newArray("float", [-0.20000000298023224,0.73500001430511475,-0.085000000894069672,-0.20000000298023224,0.72000002861022949,-0.085000000894069672]));

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=7, element #1230, 2780 total numbers */
	this.IndexedFaceSet_7_1230_coordIndex = new autoclass.MFInt32(java.newArray("int", [0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]));

	/** Large attribute array: Coordinate DEF='JoeSkinCoord' point field, scene-graph level=8, element #1230, 1170 total numbers made up of 390 3-tuple values */
	this.JoeSkinCoord_8_1230_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [0.0,1.7699999809265137,0.0,0.0,1.6649999618530273,0.090000003576278687,-0.032999999821186066,1.6200000047683716,0.086999997496604919,0.032999999821186066,1.6200000047683716,0.086999997496604919,0.0,1.5499999523162842,0.097000002861022949,-0.076999999582767487,1.6399999856948853,-0.0099999997764825821,-0.052700001746416092,1.5800000429153442,0.014999999664723873,0.076999999582767487,1.6399999856948853,-0.0099999997764825821,0.052700001746416092,1.5800000429153442,0.014999999664723873,0.0,1.625,-0.092500001192092896])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.029999999329447746,1.4600000381469727,0.035000000149011612,0.0,1.440000057220459,0.029999999329447746,0.029999999329447746,1.4600000381469727,0.035000000149011612,-0.11349999904632568,1.3179999589920044,0.094999998807907104,0.11349999904632568,1.3179999589920044,0.094999998807907104,0.0,1.25,0.11299999803304672,-0.086999997496604919,1.190000057220459,0.090000003576278687,-0.093500003218650818,1.0299999713897705,0.075000002980232239,0.086999997496604919,1.190000057220459,0.090000003576278687,0.093500003218650818,1.0299999713897705,0.075000002980232239])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.14249999821186066,1.065000057220459,0.0032999999821186066,-0.15000000596046448,0.89999997615814209,-0.0099999997764825821,0.14249999821186066,1.065000057220459,0.0032999999821186066,0.15000000596046448,0.89999997615814209,-0.0099999997764825821,0.0,1.5299999713897705,-0.083999998867511749,0.0049000000581145287,1.1907999515533447,-0.1120000034570694,-0.077299997210502625,1.0190000534057617,-0.11999999731779099,0.077299997210502625,1.0190000534057617,-0.11999999731779099,0.004999999888241291,1.0915000438690186,-0.10909999907016754,-0.17800000309944153,1.4824999570846558,-0.061999998986721039])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.17000000178813934,1.3799999952316284,0.0070000002160668373,-0.18799999356269836,0.86760002374649048,-0.035999998450279236,-0.15999999642372131,1.3799999952316284,-0.12700000405311584,-0.20000000298023224,1.1388000249862671,-0.079999998211860657,-0.24400000274181366,1.1388000249862671,-0.039999999105930328,-0.16500000655651093,1.1388000249862671,-0.039999999105930328,-0.23000000417232513,1.1330000162124634,-0.054999999701976776,-0.19769999384880066,0.81699997186660767,-0.017699999734759331,-0.19410000741481781,0.67699998617172241,-0.042300000786781311,-0.21170000731945038,0.85600000619888306,-0.058400001376867294])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.19300000369548798,0.78899997472763062,-0.10639999806880951,0.17499999701976776,1.4824999570846558,-0.059999998658895493,0.17000000178813934,1.3799999952316284,0.0070000002160668373,0.18999999761581421,0.86449998617172241,-0.041499998420476913,0.15999999642372131,1.3799999952316284,-0.125,0.20000000298023224,1.1388000249862671,-0.079999998211860657,0.16500000655651093,1.1388000249862671,-0.039999999105930328,0.24400000274181366,1.1388000249862671,-0.039999999105930328,0.23000000417232513,1.1330000162124634,-0.054999999701976776,0.20090000331401825,0.81389999389648438,-0.02370000071823597])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.20559999346733093,0.67430001497268677,-0.048200000077486038,0.21420000493526459,0.85290002822875977,-0.064800001680850983,0.19290000200271606,0.78600001335144043,-0.11219999939203262,-0.10000000149011612,0.49129998683929443,-0.029999999329447746,-0.17000000178813934,0.46599999070167542,0.0,-0.05000000074505806,0.46599999070167542,0.0,-0.16500000655651093,0.0099999997764825821,0.11999999731779099,-0.15000000596046448,0.070000000298023224,0.0,-0.085000000894069672,0.086000002920627594,0.012500000186264515,-0.090000003576278687,0.056000001728534698,0.012500000186264515])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.11500000208616257,0.019999999552965164,0.12200000137090683,-0.11500000208616257,0.039999999105930328,-0.054999999701976776,-0.10999999940395355,0.010999999940395355,0.18999999761581421,0.099299997091293335,0.48800000548362732,-0.030999999493360519,0.17000000178813934,0.46599999070167542,0.0,0.05000000074505806,0.48669999837875366,0.0,0.16500000655651093,0.0099999997764825821,0.11999999731779099,0.15000000596046448,0.070000000298023224,0.0,0.085000000894069672,0.086000002920627594,0.012500000186264515,0.090000003576278687,0.056000001728534698,0.012500000186264515])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.11500000208616257,0.019999999552965164,0.12200000137090683,0.11500000208616257,0.039999999105930328,-0.054999999701976776,0.10999999940395355,0.010999999940395355,0.18999999761581421,0.0,0.875,0.0,-0.064599998295307159,1.5149999856948853,-0.037999998778104782,0.064599998295307159,1.5148999691009521,-0.037999998778104782,0.0,1.0722500085830688,0.090000003576278687,-0.10999999940395355,1.4270000457763672,-0.13750000298023224,-0.23499999940395355,1.4199999570846558,-0.0625,0.10999999940395355,1.4270000457763672,-0.13750000298023224])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.23499999940395355,1.4199999570846558,-0.0625,0.0,1.4099999666213989,-0.14499999582767487,0.0,0.92500001192092896,0.079999998211860657,-0.086999997496604919,1.190000057220459,-0.090000003576278687,0.086999997496604919,1.190000057220459,-0.090000003576278687,0.17200000584125519,1.3200000524520874,-0.029999999329447746,-0.17200000584125519,1.3200000524520874,-0.029999999329447746,0.15000000596046448,1.2300000190734863,-0.014999999664723873,-0.15000000596046448,1.2300000190734863,-0.014999999664723873,0.079000003635883331,0.92000001668930054,-0.14000000059604645])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.10000000149011612,0.89999997615814209,0.076999999582767487,-0.079000003635883331,0.92000001668930054,-0.14000000059604645,-0.10000000149011612,0.89999997615814209,0.075000002980232239,0.0,0.87000000476837158,0.0,0.17100000381469727,0.64999997615814209,0.0,0.019999999552965164,0.64999997615814209,0.0,0.10000000149011612,0.64999997615814209,-0.079999998211860657,0.10000000149011612,0.64999997615814209,0.070000000298023224,-0.17100000381469727,0.64999997615814209,0.0,-0.019999999552965164,0.64999997615814209,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.10000000149011612,0.64999997615814209,-0.079999998211860657,-0.10000000149011612,0.64999997615814209,0.070000000298023224,0.25,1.2699999809265137,-0.039999999105930328,0.17000000178813934,1.2699999809265137,-0.039999999105930328,0.20000000298023224,1.2699999809265137,-0.090000003576278687,0.20000000298023224,1.2699999809265137,0.019999999552965164,0.24400000274181366,1.1388000249862671,-0.039999999105930328,0.16500000655651093,1.1388000249862671,-0.039999999105930328,0.20000000298023224,1.1388000249862671,-0.079999998211860657,0.20000000298023224,1.1388000249862671,-0.013000000268220901])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.22499999403953552,1.0,-0.0099999997764825821,0.22499999403953552,1.0,-0.070000000298023224,0.18500000238418579,1.0,-0.0099999997764825821,0.18500000238418579,1.0,-0.070000000298023224,0.20000000298023224,1.1388000249862671,-0.039999999105930328,0.22499999403953552,0.92000001668930054,-0.039999999105930328,0.17499999701976776,0.92000001668930054,-0.039999999105930328,0.20000000298023224,0.92000001668930054,-0.064999997615814209,0.20000000298023224,0.92000001668930054,-0.014999999664723873,0.22499999403953552,0.88999998569488525,-0.039999999105930328])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.17499999701976776,0.88999998569488525,-0.039999999105930328,0.20000000298023224,0.88999998569488525,-0.064999997615814209,0.20000000298023224,0.88999998569488525,-0.014999999664723873,0.21799999475479126,0.86000001430511475,-0.039999999105930328,0.18400000035762787,0.86000001430511475,-0.039999999105930328,0.20000000298023224,0.87000000476837158,-0.070000000298023224,0.20000000298023224,0.87000000476837158,0.0,0.20999999344348907,0.85000002384185791,0.0,0.18539999425411224,0.85000002384185791,0.0,0.21199999749660492,0.8399999737739563,-0.014999999664723873])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.18299999833106995,0.8399999737739563,-0.014999999664723873,0.21299999952316284,0.83499997854232788,-0.039999999105930328,0.18999999761581421,0.83499997854232788,-0.039999999105930328,0.210999995470047,0.83499997854232788,-0.064999997615814209,0.19200000166893005,0.83499997854232788,-0.064999997615814209,0.20800000429153442,0.8399999737739563,-0.085000000894069672,0.18999999761581421,0.8399999737739563,-0.085000000894069672,0.20000000298023224,0.8399999737739563,-0.094999998807907104,0.21500000357627869,0.81999999284744263,0.0,0.19300000369548798,0.81499999761581421,0.004999999888241291])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.19799999892711639,0.80000001192092896,0.012000000104308128,0.20999999344348907,0.81999999284744263,0.029999999329447746,0.18999999761581421,0.81999999284744263,0.029999999329447746,0.20000000298023224,0.83499997854232788,0.039000000804662704,0.21199999749660492,0.80000001192092896,0.05000000074505806,0.18799999356269836,0.80000001192092896,0.05000000074505806,0.20000000298023224,0.80699998140335083,0.057000000029802322,0.20000000298023224,0.7929999828338623,0.035000000149011612,0.20000000298023224,0.77399998903274536,0.075999997556209564,0.21199999749660492,0.77999997138977051,0.070000000298023224])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.18799999356269836,0.77999997138977051,0.070000000298023224,0.20000000298023224,0.7850000262260437,0.075000002980232239,0.20000000298023224,0.76999998092651367,0.061999998986721039,0.21500000357627869,0.7929999828338623,-0.014999999664723873,0.18700000643730164,0.7929999828338623,-0.014999999664723873,0.20000000298023224,0.7929999828338623,-0.004999999888241291,0.21500000357627869,0.78799998760223389,-0.039999999105930328,0.18700000643730164,0.78799998760223389,-0.039999999105930328,0.21500000357627869,0.7929999828338623,-0.064999997615814209,0.18700000643730164,0.7929999828338623,-0.064999997615814209])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.20999999344348907,0.79000002145767212,-0.085000000894069672,0.18999999761581421,0.79000002145767212,-0.085000000894069672,0.20000000298023224,0.79000002145767212,-0.094999998807907104,0.18999999761581421,0.76999998092651367,-0.027499999850988388,0.18999999761581421,0.76999998092651367,-0.052499998360872269,0.18999999761581421,0.77999997138977051,-0.077500000596046448,0.21199999749660492,0.74500000476837158,-0.014999999664723873,0.18799999356269836,0.74500000476837158,-0.019999999552965164,0.20000000298023224,0.74500000476837158,-0.025499999523162842,0.20000000298023224,0.74500000476837158,-0.0044999998062849045])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.210999995470047,0.72000002861022949,-0.014999999664723873,0.18899999558925629,0.72000002861022949,-0.014999999664723873,0.20000000298023224,0.72000002861022949,-0.025200000032782555,0.20000000298023224,0.72000002861022949,-0.0048000002279877663,0.20999999344348907,0.69499999284744263,-0.014999999664723873,0.18999999761581421,0.69499999284744263,-0.014999999664723873,0.20000000298023224,0.69499999284744263,-0.02500000037252903,0.20000000298023224,0.69499999284744263,-0.004999999888241291,0.20000000298023224,0.68500000238418579,-0.014999999664723873,0.21500000357627869,0.74000000953674316,-0.039999999105930328])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.18500000238418579,0.74000000953674316,-0.039999999105930328,0.20000000298023224,0.74000000953674316,-0.054999999701976776,0.20000000298023224,0.74000000953674316,-0.02500000037252903,0.20999999344348907,0.71420001983642578,-0.039999999105930328,0.18999999761581421,0.71420001983642578,-0.039999999105930328,0.20000000298023224,0.71420001983642578,-0.05299999937415123,0.20000000298023224,0.71420001983642578,-0.027000000700354576,0.20999999344348907,0.68000000715255737,-0.039999999105930328,0.18999999761581421,0.68000000715255737,-0.039999999105930328,0.20000000298023224,0.68000000715255737,-0.05000000074505806])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.20000000298023224,0.68000000715255737,-0.029999999329447746,0.20000000298023224,0.67000001668930054,-0.039999999105930328,0.21199999749660492,0.74000000953674316,-0.064999997615814209,0.18799999356269836,0.74000000953674316,-0.064999997615814209,0.20000000298023224,0.74000000953674316,-0.075599998235702515,0.20000000298023224,0.74000000953674316,-0.054200001060962677,0.20999999344348907,0.71770000457763672,-0.064999997615814209,0.18999999761581421,0.71770000457763672,-0.064999997615814209,0.20000000298023224,0.71770000457763672,-0.075099997222423553,0.20000000298023224,0.71770000457763672,-0.054900001734495163])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.20999999344348907,0.69499999284744263,-0.064999997615814209,0.18999999761581421,0.69499999284744263,-0.064999997615814209,0.20000000298023224,0.69499999284744263,-0.075000002980232239,0.20000000298023224,0.69499999284744263,-0.054999999701976776,0.20000000298023224,0.68500000238418579,-0.064999997615814209,0.210999995470047,0.75499999523162842,-0.085000000894069672,0.18899999558925629,0.75499999523162842,-0.085000000894069672,0.20000000298023224,0.75499999523162842,-0.095200002193450928,0.20000000298023224,0.75499999523162842,-0.074799999594688416,0.20999999344348907,0.73500001430511475,-0.085000000894069672])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.18999999761581421,0.73500001430511475,-0.085000000894069672,0.20000000298023224,0.73500001430511475,-0.095100000500679016,0.20000000298023224,0.73500001430511475,-0.074900001287460327,0.20999999344348907,0.72000002861022949,-0.085000000894069672,0.18999999761581421,0.72000002861022949,-0.085000000894069672,0.20000000298023224,0.72000002861022949,-0.094999998807907104,0.20000000298023224,0.72000002861022949,-0.075000002980232239,0.20000000298023224,0.70999997854232788,-0.085000000894069672,-0.23000000417232513,1.2300000190734863,-0.039999999105930328,-0.15999999642372131,1.2300000190734863,-0.039999999105930328])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.20000000298023224,1.2350000143051147,-0.10499999672174454,-0.20000000298023224,1.2350000143051147,0.019999999552965164,-0.24400000274181366,1.1388000249862671,-0.039999999105930328,-0.16500000655651093,1.1388000249862671,-0.039999999105930328,-0.20000000298023224,1.1388000249862671,-0.079999998211860657,-0.20000000298023224,1.1388000249862671,0.013000000268220901,-0.22499999403953552,1.0,-0.0099999997764825821,-0.22499999403953552,1.0,-0.070000000298023224,-0.18500000238418579,1.0,-0.0099999997764825821,-0.18500000238418579,1.0,-0.070000000298023224])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.20000000298023224,1.1388000249862671,-0.039999999105930328,-0.22499999403953552,0.92000001668930054,-0.039999999105930328,-0.17499999701976776,0.92000001668930054,-0.039999999105930328,-0.20000000298023224,0.92000001668930054,-0.064999997615814209,-0.20000000298023224,0.92000001668930054,-0.014999999664723873,-0.22499999403953552,0.88999998569488525,-0.039999999105930328,-0.17499999701976776,0.88999998569488525,-0.039999999105930328,-0.20000000298023224,0.88999998569488525,-0.064999997615814209,-0.20000000298023224,0.88999998569488525,-0.014999999664723873,-0.21799999475479126,0.86000001430511475,-0.039999999105930328])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.18400000035762787,0.86000001430511475,-0.039999999105930328,-0.20000000298023224,0.87000000476837158,-0.070000000298023224,-0.20000000298023224,0.87000000476837158,0.0,-0.20999999344348907,0.85000002384185791,0.0,-0.18539999425411224,0.85000002384185791,0.0,-0.21199999749660492,0.8399999737739563,-0.014999999664723873,-0.18299999833106995,0.8399999737739563,-0.014999999664723873,-0.21299999952316284,0.83499997854232788,-0.039999999105930328,-0.18999999761581421,0.83499997854232788,-0.039999999105930328,-0.210999995470047,0.83499997854232788,-0.064999997615814209])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.19200000166893005,0.83499997854232788,-0.064999997615814209,-0.20800000429153442,0.8399999737739563,-0.085000000894069672,-0.18999999761581421,0.8399999737739563,-0.085000000894069672,-0.20000000298023224,0.8399999737739563,-0.094999998807907104,-0.21500000357627869,0.81999999284744263,0.0,-0.19300000369548798,0.81499999761581421,0.004999999888241291,-0.19799999892711639,0.80000001192092896,0.012000000104308128,-0.20999999344348907,0.81999999284744263,0.029999999329447746,-0.18999999761581421,0.81999999284744263,0.029999999329447746,-0.20000000298023224,0.83499997854232788,0.039000000804662704])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.21199999749660492,0.80000001192092896,0.05000000074505806,-0.18799999356269836,0.80000001192092896,0.05000000074505806,-0.20000000298023224,0.80699998140335083,0.057000000029802322,-0.20000000298023224,0.7929999828338623,0.035000000149011612,-0.20000000298023224,0.77399998903274536,0.075999997556209564,-0.21199999749660492,0.77999997138977051,0.070000000298023224,-0.18799999356269836,0.77999997138977051,0.070000000298023224,-0.20000000298023224,0.7850000262260437,0.075000002980232239,-0.20000000298023224,0.76999998092651367,0.061999998986721039,-0.21500000357627869,0.7929999828338623,-0.014999999664723873])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.18700000643730164,0.7929999828338623,-0.014999999664723873,-0.20000000298023224,0.7929999828338623,-0.004999999888241291,-0.21500000357627869,0.78799998760223389,-0.039999999105930328,-0.18700000643730164,0.78799998760223389,-0.039999999105930328,-0.21500000357627869,0.7929999828338623,-0.064999997615814209,-0.18700000643730164,0.7929999828338623,-0.064999997615814209,-0.20999999344348907,0.79000002145767212,-0.085000000894069672,-0.18999999761581421,0.79000002145767212,-0.085000000894069672,-0.20000000298023224,0.79000002145767212,-0.094999998807907104,-0.18999999761581421,0.76999998092651367,-0.027499999850988388])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.18999999761581421,0.76999998092651367,-0.052499998360872269,-0.18999999761581421,0.77999997138977051,-0.077500000596046448,-0.21199999749660492,0.74500000476837158,-0.014999999664723873,-0.18799999356269836,0.74500000476837158,-0.019999999552965164,-0.20000000298023224,0.74500000476837158,-0.025499999523162842,-0.20000000298023224,0.74500000476837158,-0.0044999998062849045,-0.210999995470047,0.72000002861022949,-0.014999999664723873,-0.18899999558925629,0.72000002861022949,-0.014999999664723873,-0.20000000298023224,0.72000002861022949,-0.025200000032782555,-0.20000000298023224,0.72000002861022949,-0.0048000002279877663])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.20999999344348907,0.69499999284744263,-0.014999999664723873,-0.18999999761581421,0.69499999284744263,-0.014999999664723873,-0.20000000298023224,0.69499999284744263,-0.02500000037252903,-0.20000000298023224,0.69499999284744263,-0.004999999888241291,-0.20000000298023224,0.68500000238418579,-0.014999999664723873,-0.21500000357627869,0.74000000953674316,-0.039999999105930328,-0.18500000238418579,0.74000000953674316,-0.039999999105930328,-0.20000000298023224,0.74000000953674316,-0.054999999701976776,-0.20000000298023224,0.74000000953674316,-0.02500000037252903,-0.20999999344348907,0.71420001983642578,-0.039999999105930328])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.18999999761581421,0.71420001983642578,-0.039999999105930328,-0.20000000298023224,0.71420001983642578,-0.05299999937415123,-0.20000000298023224,0.71420001983642578,-0.027000000700354576,-0.20999999344348907,0.68000000715255737,-0.039999999105930328,-0.18999999761581421,0.68000000715255737,-0.039999999105930328,-0.20000000298023224,0.68000000715255737,-0.05000000074505806,-0.20000000298023224,0.68000000715255737,-0.029999999329447746,-0.20000000298023224,0.67000001668930054,-0.039999999105930328,-0.21199999749660492,0.74000000953674316,-0.064999997615814209,-0.18799999356269836,0.74000000953674316,-0.064999997615814209])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.20000000298023224,0.74000000953674316,-0.075599998235702515,-0.20000000298023224,0.74000000953674316,-0.054200001060962677,-0.20999999344348907,0.71770000457763672,-0.064999997615814209,-0.18999999761581421,0.71770000457763672,-0.064999997615814209,-0.20000000298023224,0.71770000457763672,-0.075099997222423553,-0.20000000298023224,0.71770000457763672,-0.054900001734495163,-0.20999999344348907,0.69499999284744263,-0.064999997615814209,-0.18999999761581421,0.69499999284744263,-0.064999997615814209,-0.20000000298023224,0.69499999284744263,-0.075000002980232239,-0.20000000298023224,0.69499999284744263,-0.054999999701976776])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.20000000298023224,0.68500000238418579,-0.064999997615814209,-0.210999995470047,0.75499999523162842,-0.085000000894069672,-0.18899999558925629,0.75499999523162842,-0.085000000894069672,-0.20000000298023224,0.75499999523162842,-0.095200002193450928,-0.20000000298023224,0.75499999523162842,-0.074799999594688416,-0.20999999344348907,0.73500001430511475,-0.085000000894069672,-0.18999999761581421,0.73500001430511475,-0.085000000894069672,-0.20000000298023224,0.73500001430511475,-0.095100000500679016,-0.20000000298023224,0.73500001430511475,-0.074900001287460327,-0.20999999344348907,0.72000002861022949,-0.085000000894069672])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.18999999761581421,0.72000002861022949,-0.085000000894069672,-0.20000000298023224,0.72000002861022949,-0.094999998807907104,-0.20000000298023224,0.72000002861022949,-0.075000002980232239,-0.20000000298023224,0.70999997854232788,-0.085000000894069672,0.11500000208616257,0.46599999070167542,0.059999998658895493,0.11500000208616257,0.46599999070167542,-0.054999999701976776,0.15000000596046448,0.46599999070167542,0.0,0.05000000074505806,0.46599999070167542,0.0,0.17000000178813934,0.30000001192092896,0.0,0.059999998658895493,0.30000001192092896,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.10000000149011612,0.30000001192092896,-0.05000000074505806,0.10000000149011612,0.30000001192092896,0.05000000074505806,0.15000000596046448,0.070000000298023224,0.0,0.085000000894069672,0.086000002920627594,0.012500000186264515,0.11500000208616257,0.068999998271465302,-0.045000001788139343,0.11699999868869781,0.097499996423721313,0.061500001698732376,0.13750000298023224,0.0060000000521540642,-0.029999999329447746,0.094999998807907104,0.0060000000521540642,-0.029999999329447746,0.11500000208616257,0.014999999664723873,-0.045000001788139343,0.11500000208616257,0.059999998658895493,0.10000000149011612])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.11500000208616257,0.0,0.070000000298023224,0.16500000655651093,0.0,0.070000000298023224,0.094999998807907104,0.0,0.070000000298023224,0.11500000208616257,0.039999999105930328,0.12999999523162842,0.125,0.0,0.11999999731779099,0.16500000655651093,0.0,0.11999999731779099,0.086999997496604919,0.0,0.12200000137090683,0.090000003576278687,0.012000000104308128,0.18799999356269836,0.10999999940395355,0.010999999940395355,0.18999999761581421,0.12800000607967377,0.010999999940395355,0.18500000238418579])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.14200000464916229,0.010999999940395355,0.17800000309944153,0.15399999916553497,0.0099999997764825821,0.1679999977350235,-0.11500000208616257,0.46599999070167542,0.059999998658895493,-0.11500000208616257,0.46599999070167542,-0.054999999701976776,-0.17000000178813934,0.46599999070167542,0.0,-0.05000000074505806,0.46599999070167542,0.0,-0.17000000178813934,0.30000001192092896,0.0,-0.059999998658895493,0.30000001192092896,0.0,-0.10000000149011612,0.30000001192092896,-0.05000000074505806,-0.10000000149011612,0.30000001192092896,0.05000000074505806])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.15000000596046448,0.070000000298023224,0.0,-0.085000000894069672,0.086000002920627594,0.012500000186264515,-0.11500000208616257,0.068999998271465302,-0.045000001788139343,-0.11699999868869781,0.097499996423721313,0.061999998986721039,-0.13750000298023224,0.0060000000521540642,-0.029999999329447746,-0.094999998807907104,0.0060000000521540642,-0.029999999329447746,-0.094999998807907104,0.0060000000521540642,-0.029999999329447746,-0.11500000208616257,0.059999998658895493,0.10000000149011612,-0.11500000208616257,0.0,0.070000000298023224,-0.16500000655651093,0.0,0.070000000298023224])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.094999998807907104,0.0,0.070000000298023224,-0.11500000208616257,0.039999999105930328,0.12999999523162842,-0.125,0.0,0.11999999731779099,-0.16500000655651093,0.0,0.11999999731779099,-0.086999997496604919,0.0,0.12200000137090683,-0.090000003576278687,0.012000000104308128,0.18799999356269836,-0.10999999940395355,0.010999999940395355,0.18999999761581421,-0.12800000607967377,0.010999999940395355,0.18500000238418579,-0.14200000464916229,0.010999999940395355,0.17800000309944153,-0.15399999916553497,0.0099999997764825821,0.1679999977350235])));

	/** Large attribute array: Color color field, scene-graph level=8, element #1231, 2079 total numbers made up of 693 3-tuple values */
	this.Color_8_1231_color = new autoclass.MFColor() /* splitting up long array to improve readability */
	.append(new autoclass.MFColor(java.newArray("float", [1.0,0.0,0.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0])))
	.append(new autoclass.MFColor(java.newArray("float", [1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0])))
	.append(new autoclass.MFColor(java.newArray("float", [1.0,0.0,0.0,1.0,0.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0])))
	.append(new autoclass.MFColor(java.newArray("float", [1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0])))
	.append(new autoclass.MFColor(java.newArray("float", [0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0])))
	.append(new autoclass.MFColor(java.newArray("float", [0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0])))
	.append(new autoclass.MFColor(java.newArray("float", [0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,1.0])))
	.append(new autoclass.MFColor(java.newArray("float", [0.0,0.0,1.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0])))
	.append(new autoclass.MFColor(java.newArray("float", [1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0])))
	.append(new autoclass.MFColor(java.newArray("float", [1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0])))
	.append(new autoclass.MFColor(java.newArray("float", [0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0])))
	.append(new autoclass.MFColor(java.newArray("float", [0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0])))
	.append(new autoclass.MFColor(java.newArray("float", [0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0])))
	.append(new autoclass.MFColor(java.newArray("float", [0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0])))
	.append(new autoclass.MFColor(java.newArray("float", [0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0])))
	.append(new autoclass.MFColor(java.newArray("float", [0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0])))
	.append(new autoclass.MFColor(java.newArray("float", [0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0])))
	.append(new autoclass.MFColor(java.newArray("float", [0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0])))
	.append(new autoclass.MFColor(java.newArray("float", [0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0])))
	.append(new autoclass.MFColor(java.newArray("float", [0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0])))
	.append(new autoclass.MFColor(java.newArray("float", [0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0])))
	.append(new autoclass.MFColor(java.newArray("float", [0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0])))
	.append(new autoclass.MFColor(java.newArray("float", [0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0])))
	.append(new autoclass.MFColor(java.newArray("float", [0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0])))
	.append(new autoclass.MFColor(java.newArray("float", [0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0])))
	.append(new autoclass.MFColor(java.newArray("float", [0.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [0.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0])))
	.append(new autoclass.MFColor(java.newArray("float", [0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0])))
	.append(new autoclass.MFColor(java.newArray("float", [0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0])))
	.append(new autoclass.MFColor(java.newArray("float", [0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0])))
	.append(new autoclass.MFColor(java.newArray("float", [0.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,1.0])));

	/** Large attribute array: OrientationInterpolator DEF='Pitch' keyValue field, scene-graph level=3, element #1244, 24 total numbers made up of 6 4-tuple values */
	this.Pitch_3_1244_keyValue = new autoclass.MFRotation(java.newArray("float", [1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.2560000419616699,1.0,0.0,0.0,2.5120000839233398,1.0,0.0,0.0,3.7679998874664307,1.0,0.0,0.0,5.0240001678466797,1.0,0.0,0.0,6.2800002098083496]));

	/** Large attribute array: OrientationInterpolator DEF='Yaw' keyValue field, scene-graph level=3, element #1245, 24 total numbers made up of 6 4-tuple values */
	this.Yaw_3_1245_keyValue = new autoclass.MFRotation(java.newArray("float", [0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.2560000419616699,0.0,1.0,0.0,2.5120000839233398,0.0,1.0,0.0,3.7679998874664307,0.0,1.0,0.0,5.0240001678466797,0.0,1.0,0.0,6.2800002098083496]));

	/** Large attribute array: OrientationInterpolator DEF='Roll' keyValue field, scene-graph level=3, element #1246, 24 total numbers made up of 6 4-tuple values */
	this.Roll_3_1246_keyValue = new autoclass.MFRotation(java.newArray("float", [0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.2560000419616699,0.0,0.0,1.0,2.5120000839233398,0.0,0.0,1.0,3.7679998874664307,0.0,0.0,1.0,5.0240001678466797,0.0,0.0,1.0,6.2800002098083496]));

	/** Large attribute array: OrientationInterpolator DEF='vc6Yaw' key field, scene-graph level=3, element #1247, 9 total numbers */
	this.vc6Yaw_3_1247_key = new autoclass.MFFloat(java.newArray("float", [0.0,0.20000000298023224,0.40000000596046448,0.5,0.60000002384185791,0.69999998807907104,0.80000001192092896,0.89999997615814209,1.0]));

	/** Large attribute array: OrientationInterpolator DEF='vc6Yaw' keyValue field, scene-graph level=3, element #1247, 36 total numbers made up of 9 4-tuple values */
	this.vc6Yaw_3_1247_keyValue = new autoclass.MFRotation(java.newArray("float", [0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.69999998807907104,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,-1.0,0.0,0.0,0.5,-0.40000000596046448,-1.0,0.0,0.69999998807907104,-0.40000000596046448,-1.0,0.0,0.40000000596046448,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0]));

	/** Large attribute array: OrientationInterpolator DEF='r_sternoclavicularRoll' keyValue field, scene-graph level=3, element #1250, 28 total numbers made up of 7 4-tuple values */
	this.r_sternoclavicularRoll_3_1250_keyValue = new autoclass.MFRotation(java.newArray("float", [0.0,0.0,1.0,0.0,0.0,0.0,-1.0,0.10000000149011612,0.0,0.0,-1.0,0.2199999988079071,0.0,0.5,-1.0,0.27000001072883606,0.0,0.0,-1.0,0.10000000149011612,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0]));

	/** Large attribute array: OrientationInterpolator DEF='r_shoulderRoll' keyValue field, scene-graph level=3, element #1252, 24 total numbers made up of 6 4-tuple values */
	this.r_shoulderRoll_3_1252_keyValue = new autoclass.MFRotation(java.newArray("float", [1.0,0.0,0.0,0.0,0.0,0.0,-1.0,1.6599999666213989,-0.25,0.0,-1.0,1.7599999904632568,0.0,0.0,-1.0,1.2560000419616699,0.0,0.0,-1.0,0.05000000074505806,1.0,0.0,0.0,0.0]));

	/** Large attribute array: OrientationInterpolator DEF='r_ForeArmPitch' keyValue field, scene-graph level=3, element #1253, 28 total numbers made up of 7 4-tuple values */
	this.r_ForeArmPitch_3_1253_keyValue = new autoclass.MFRotation(java.newArray("float", [0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.55000001192092896,-1.0,-0.25,0.0,2.5499999523162842,-1.0,-0.25,0.0,2.5499999523162842,-1.0,-0.25,0.0,2.5499999523162842,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0]));

	/** Large attribute array: OrientationInterpolator DEF='r_wristRoll' key field, scene-graph level=3, element #1254, 8 total numbers */
	this.r_wristRoll_3_1254_key = new autoclass.MFFloat(java.newArray("float", [0.0,0.20000000298023224,0.40000000596046448,0.60000002384185791,0.64999997615814209,0.75,0.85000002384185791,1.0]));

	/** Large attribute array: OrientationInterpolator DEF='r_wristRoll' keyValue field, scene-graph level=3, element #1254, 32 total numbers made up of 8 4-tuple values */
	this.r_wristRoll_3_1254_keyValue = new autoclass.MFRotation(java.newArray("float", [0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,-0.55000001192092896,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.5499999523162842,0.0,0.0,-1.0,1.5499999523162842,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0]));

	/** Large attribute array: OrientationInterpolator DEF='r_handPitch' keyValue field, scene-graph level=3, element #1255, 24 total numbers made up of 6 4-tuple values */
	this.r_handPitch_3_1255_keyValue = new autoclass.MFRotation(java.newArray("float", [0.0,0.0,1.0,0.0,0.0,0.0,0.0099999997764825821,0.25,0.0,0.0,-0.0099999997764825821,0.029999999329447746,0.0,0.0,0.0099999997764825821,0.05000000074505806,0.0,0.0,0.0099999997764825821,0.0099999997764825821,0.0,0.0,1.0,0.0]));

	/** Large attribute array: OrientationInterpolator DEF='l_shoulderRoll' keyValue field, scene-graph level=3, element #1256, 24 total numbers made up of 6 4-tuple values */
	this.l_shoulderRoll_3_1256_keyValue = new autoclass.MFRotation(java.newArray("float", [0.25,0.0,1.0,1.7599999904632568,0.0,0.0,1.0,1.6599999666213989,0.25,0.0,1.0,1.7599999904632568,0.0,0.0,1.0,1.2560000419616699,0.0,0.0,1.0,0.05000000074505806,0.25,0.0,1.0,1.7599999904632568]));

	/** Large attribute array: PositionInterpolator DEF='HUMANOIDROOT_POSITION_ANIMATOR' key field, scene-graph level=4, element #1269, 19 total numbers */
	this.HUMANOIDROOT_POSITION_ANIMATOR_4_1269_key = new autoclass.MFFloat(java.newArray("float", [0.0,0.041669998317956924,0.125,0.16670000553131104,0.20829999446868896,0.25,0.29170000553131104,0.375,0.45829999446868896,0.5,0.54170000553131104,0.58329999446868896,0.625,0.70829999446868896,0.75,0.79170000553131104,0.875,0.91670000553131104,1.0]));

	/** Large attribute array: PositionInterpolator DEF='HUMANOIDROOT_POSITION_ANIMATOR' keyValue field, scene-graph level=4, element #1269, 57 total numbers made up of 19 3-tuple values */
	this.HUMANOIDROOT_POSITION_ANIMATOR_4_1269_keyValue = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [0.0,-0.0092799998819828033,0.0,0.0,-0.0038580000400543213,0.0,0.0,-0.0088470000773668289,0.0,0.0,-0.014860000461339951,0.0,0.0,-0.026410000398755074,0.0,0.0,-0.039340000599622726,0.0,0.0,-0.050200000405311584,0.0,0.0,-0.074689999222755432,0.0,0.0,-0.027319999411702156,0.0,0.0,-0.016079999506473541,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.0,-0.011289999820291996,0.0,0.0,-0.0058189998380839825,0.0,0.0,-0.0020039998926222324,0.0,0.0,-0.0025790000800043344,0.0,0.0,-0.014299999922513962,0.0,0.0,-0.03799000009894371,0.0,0.0,-0.056480001658201218,0.0,0.0,-0.045000001788139343,0.0,0.0,-0.0092799998819828033,0.0])));

	/** Large attribute array: OrientationInterpolator DEF='L_HIP_ANIMATOR' keyValue field, scene-graph level=4, element #1271, 32 total numbers made up of 8 4-tuple values */
	this.L_HIP_ANIMATOR_4_1271_keyValue = new autoclass.MFRotation(java.newArray("float", [-0.87300002574920654,0.060940001159906387,0.48399999737739563,0.28650000691413879,0.99629998207092285,-0.010569999925792217,0.084810003638267517,0.24879999458789825,0.99650001525878906,0.01590999960899353,-0.082220003008842468,0.38359999656677246,-0.70179998874664307,-0.03223000094294548,-0.71170002222061157,0.12890000641345978,-1.0,0.0,0.0,0.55180001258850098,-0.99639999866485596,0.022309999912977219,0.081699997186660767,0.53509998321533203,-0.98089998960494995,0.049120001494884491,0.18809999525547028,0.52039998769760132,-0.87300002574920654,0.060940001159906387,0.48399999737739563,0.28650000691413879]));

	/** Large attribute array: OrientationInterpolator DEF='L_KNEE_ANIMATOR' keyValue field, scene-graph level=4, element #1272, 32 total numbers made up of 8 4-tuple values */
	this.L_KNEE_ANIMATOR_4_1272_keyValue = new autoclass.MFRotation(java.newArray("float", [1.0,0.0,0.0,0.32260000705718994,1.0,0.0,0.0,0.15559999644756317,1.0,0.0,0.0,0.086779996752738953,1.0,0.0,0.0,0.87510001659393311,1.0,0.0,0.0,1.1310000419616699,1.0,0.0,0.0,0.099610000848770142,1.0,0.0,0.0,0.39419999718666077,1.0,0.0,0.0,0.32260000705718994]));

	/** Large attribute array: OrientationInterpolator DEF='L_ANKLE_ANIMATOR' keyValue field, scene-graph level=4, element #1273, 28 total numbers made up of 7 4-tuple values */
	this.L_ANKLE_ANIMATOR_4_1273_keyValue = new autoclass.MFRotation(java.newArray("float", [-1.0,0.0,0.0,0.067100003361701965,-1.0,0.0,0.0,0.21520000696182251,-1.0,0.0,0.0,0.31839999556541443,-1.0,0.0,0.0,0.47170001268386841,-1.0,0.0,0.0,0.29120001196861267,1.0,0.0,0.0,0.22220000624656677,-1.0,0.0,0.0,0.067100003361701965]));

	/** Large attribute array: OrientationInterpolator DEF='R_ANKLE_ANIMATOR' key field, scene-graph level=4, element #1274, 11 total numbers */
	this.R_ANKLE_ANIMATOR_4_1274_key = new autoclass.MFFloat(java.newArray("float", [0.0,0.125,0.20829999446868896,0.375,0.45829999446868896,0.5,0.66670000553131104,0.75,0.77999997138977051,0.91670000553131104,1.0]));

	/** Large attribute array: OrientationInterpolator DEF='R_ANKLE_ANIMATOR' keyValue field, scene-graph level=4, element #1274, 44 total numbers made up of 11 4-tuple values */
	this.R_ANKLE_ANIMATOR_4_1274_keyValue = new autoclass.MFRotation() /* splitting up long array to improve readability */
	.append(new autoclass.MFRotation(java.newArray("float", [0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.35330000519752502,-1.0,0.0,0.0,0.10719999670982361,1.0,0.0,0.0,0.40000000596046448,1.0,0.0,0.0,0.12700000405311584,-1.0,0.0,0.0,0.017999999225139618,-1.0,0.0,0.0,0.057999998331069946,-1.0,0.0,0.0,0.23999999463558197,-1.0,0.0,0.0,0.34999999403953552,-1.0,0.0,0.0,0.33000001311302185])))
	.append(new autoclass.MFRotation(java.newArray("float", [0.0,0.0,1.0,0.0])));

	/** Large attribute array: OrientationInterpolator DEF='L_metatarsal_ANIMATOR' keyValue field, scene-graph level=4, element #1277, 20 total numbers made up of 5 4-tuple values */
	this.L_metatarsal_ANIMATOR_4_1277_keyValue = new autoclass.MFRotation(java.newArray("float", [-1.0,0.0,0.0,0.30000001192092896,-1.0,0.0,0.0,0.15000000596046448,1.0,0.0,0.0,0.30000001192092896,0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.30000001192092896]));

	/** Large attribute array: OrientationInterpolator DEF='R_HIP_ANIMATOR' key field, scene-graph level=4, element #1278, 10 total numbers */
	this.R_HIP_ANIMATOR_4_1278_key = new autoclass.MFFloat(java.newArray("float", [0.0,0.125,0.20829999446868896,0.29170000553131104,0.375,0.5,0.66670000553131104,0.79170000553131104,0.91670000553131104,1.0]));

	/** Large attribute array: OrientationInterpolator DEF='R_HIP_ANIMATOR' keyValue field, scene-graph level=4, element #1278, 40 total numbers made up of 10 4-tuple values */
	this.R_HIP_ANIMATOR_4_1278_keyValue = new autoclass.MFRotation(java.newArray("float", [-0.58310002088546753,0.035110000520944595,0.81160002946853638,0.14810000360012054,-0.99500000476837158,0.022959999740123749,0.096739999949932098,0.46830001473426819,-1.0,0.0019000000320374966,0.0079600000753998756,0.4731999933719635,-0.99800002574920654,-0.015799999237060547,-0.061020001769065857,0.50789999961853027,-0.991100013256073,-0.035409998148679733,-0.12860000133514404,0.54189997911453247,-0.91310000419616699,-0.062430001795291901,-0.40299999713897705,0.3361000120639801,-0.43059998750686646,-0.079620003700256348,-0.89899998903274536,0.07038000226020813,1.0,0.0,0.0,0.25709998607635498,0.98909997940063477,-0.028049999848008156,0.14440000057220459,0.38789999485015869,-0.58310002088546753,0.035110000520944595,0.81160002946853638,0.14810000360012054]));

	/** Large attribute array: OrientationInterpolator DEF='R_KNEE_ANIMATOR' key field, scene-graph level=4, element #1279, 10 total numbers */
	this.R_KNEE_ANIMATOR_4_1279_key = new autoclass.MFFloat(java.newArray("float", [0.0,0.125,0.20829999446868896,0.29170000553131104,0.375,0.5,0.66670000553131104,0.79170000553131104,0.91670000553131104,1.0]));

	/** Large attribute array: OrientationInterpolator DEF='R_KNEE_ANIMATOR' keyValue field, scene-graph level=4, element #1279, 40 total numbers made up of 10 4-tuple values */
	this.R_KNEE_ANIMATOR_4_1279_keyValue = new autoclass.MFRotation(java.newArray("float", [1.0,0.0,0.0,0.85729998350143433,1.0,0.0,0.0,0.89259999990463257,1.0,0.0,0.0,0.53509998321533203,1.0,0.0,0.0,0.17560000717639923,1.0,0.0,0.0,0.11940000206232071,1.0,0.0,0.0,0.31529998779296875,1.0,0.0,0.0,0.093539997935295105,1.0,0.0,0.0,0.085579998791217804,1.0,0.0,0.0,0.24750000238418579,1.0,0.0,0.0,0.85729998350143433]));

	/** Large attribute array: OrientationInterpolator DEF='R_subtalar_ANIMATOR' key field, scene-graph level=4, element #1280, 7 total numbers */
	this.R_subtalar_ANIMATOR_4_1280_key = new autoclass.MFFloat(java.newArray("float", [0.0,0.22499999403953552,0.25,0.34999999403953552,0.44999998807907104,0.85000002384185791,0.9100000262260437]));

	/** Large attribute array: OrientationInterpolator DEF='R_subtalar_ANIMATOR' keyValue field, scene-graph level=4, element #1280, 32 total numbers made up of 8 4-tuple values */
	this.R_subtalar_ANIMATOR_4_1280_keyValue = new autoclass.MFRotation(java.newArray("float", [-1.0,0.0,0.0,0.10000000149011612,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.10000000149011612,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.10000000149011612,1.0,0.0,0.0,0.25,-1.0,0.0,0.0,0.10000000149011612]));

	/** Large attribute array: OrientationInterpolator DEF='R_metatarsal_ANIMATOR' keyValue field, scene-graph level=4, element #1282, 20 total numbers made up of 5 4-tuple values */
	this.R_metatarsal_ANIMATOR_4_1282_keyValue = new autoclass.MFRotation(java.newArray("float", [-1.0,0.0,0.0,0.15000000596046448,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.30000001192092896,-1.0,0.0,0.0,0.30000001192092896,-1.0,0.0,0.0,0.15000000596046448]));

	/** Large attribute array: OrientationInterpolator DEF='VL5_ANIMATOR' keyValue field, scene-graph level=4, element #1283, 24 total numbers made up of 6 4-tuple values */
	this.VL5_ANIMATOR_4_1283_keyValue = new autoclass.MFRotation(java.newArray("float", [0.0,1.0,0.0,0.082599997520446777,-0.01971999928355217,-0.5974000096321106,0.80169999599456787,0.082309998571872711,0.0092960000038146973,-0.96480000019073486,0.26269999146461487,0.17339999973773956,-0.012380000203847885,0.95490002632141113,-0.29679998755455017,0.087319999933242798,-0.0081249997019767761,0.96909999847412109,-0.24629999697208405,0.15800000727176666,0.0,1.0,0.0,0.082599997520446777]));

	/** Large attribute array: OrientationInterpolator DEF='SKULLBASE_ANIMATOR' key field, scene-graph level=4, element #1284, 10 total numbers */
	this.SKULLBASE_ANIMATOR_4_1284_key = new autoclass.MFFloat(java.newArray("float", [0.0,0.375,0.41670000553131104,0.5,0.58329999446868896,0.66670000553131104,0.75,0.83329999446868896,0.91670000553131104,1.0]));

	/** Large attribute array: OrientationInterpolator DEF='SKULLBASE_ANIMATOR' keyValue field, scene-graph level=4, element #1284, 40 total numbers made up of 10 4-tuple values */
	this.SKULLBASE_ANIMATOR_4_1284_keyValue = new autoclass.MFRotation(java.newArray("float", [0.0,-1.0,0.0,0.086400002241134644,0.0,1.0,0.0,0.18250000476837158,0.0,1.0,0.0,0.15049999952316284,0.0,1.0,0.0,0.10530000180006027,0.0,1.0,0.0,0.04391000047326088,0.0,-1.0,0.0,0.031190000474452972,0.0,-1.0,0.0,0.079360000789165497,0.0,-1.0,0.0,0.16159999370574951,0.0,-1.0,0.0,0.1550000011920929,0.0,-1.0,0.0,0.086419999599456787]));

	/** Large attribute array: OrientationInterpolator DEF='L_SHOULDER_ANIMATOR' keyValue field, scene-graph level=4, element #1285, 16 total numbers made up of 4 4-tuple values */
	this.L_SHOULDER_ANIMATOR_4_1285_keyValue = new autoclass.MFRotation(java.newArray("float", [1.0,0.0,0.40000000596046448,0.11999999731779099,-1.0,0.0,0.40000000596046448,0.18600000441074371,1.0,0.0,0.10000000149011612,0.335999995470047,1.0,0.0,0.40000000596046448,0.11999999731779099]));

	/** Large attribute array: OrientationInterpolator DEF='L_ELBOW_ANIMATOR' keyValue field, scene-graph level=4, element #1286, 16 total numbers made up of 4 4-tuple values */
	this.L_ELBOW_ANIMATOR_4_1286_keyValue = new autoclass.MFRotation(java.newArray("float", [-1.0,0.0,0.0,0.065999999642372131,-1.0,0.0,0.0,0.48800000548362732,-1.0,0.0,0.0,0.017699999734759331,-1.0,0.0,0.0,0.065987803041934967]));

	/** Large attribute array: OrientationInterpolator DEF='L_WRIST_ANIMATOR' keyValue field, scene-graph level=4, element #1287, 16 total numbers made up of 4 4-tuple values */
	this.L_WRIST_ANIMATOR_4_1287_keyValue = new autoclass.MFRotation(java.newArray("float", [0.0,-1.0,0.0,0.460999995470047,-0.33019998669624329,-0.92750000953674316,0.17550000548362732,0.53880000114440918,0.032777398824691772,-0.99931401014328003,-0.017218500375747681,0.49203300476074219,0.0,-1.0,0.0,0.4611000120639801]));

	/** Large attribute array: OrientationInterpolator DEF='R_SHOULDER_ANIMATOR' keyValue field, scene-graph level=4, element #1288, 16 total numbers made up of 4 4-tuple values */
	this.R_SHOULDER_ANIMATOR_4_1288_keyValue = new autoclass.MFRotation(java.newArray("float", [-1.0,0.0,-1.0,0.092000000178813934,1.0,0.0,-0.20000000298023224,0.31970000267028809,-1.0,0.0,-0.5,0.15639999508857727,-1.0,0.0,-1.0,0.092000000178813934]));

	/** Large attribute array: OrientationInterpolator DEF='R_ELBOW_ANIMATOR' keyValue field, scene-graph level=4, element #1289, 16 total numbers made up of 4 4-tuple values */
	this.R_ELBOW_ANIMATOR_4_1289_keyValue = new autoclass.MFRotation(java.newArray("float", [-1.0,0.0,0.0,0.41150000691413879,-1.0,0.0,0.0,0.092500001192092896,-1.0,0.0,0.0,0.57256799936294556,-1.0,0.0,0.0,0.4115079939365387]));

	/** Large attribute array: OrientationInterpolator DEF='R_WRIST_ANIMATOR' keyValue field, scene-graph level=4, element #1290, 16 total numbers made up of 4 4-tuple values */
	this.R_WRIST_ANIMATOR_4_1290_keyValue = new autoclass.MFRotation(java.newArray("float", [-0.81290000677108765,0.47589999437332153,-0.33570000529289246,0.13459999859333038,0.15330000221729279,-0.9878000020980835,0.025820000097155571,0.39019998908042908,-0.57010000944137573,0.76039999723434448,-0.31099998950958252,0.36599999666213989,-0.81290000677108765,0.47589999437332153,-0.33570000529289246,0.13459999859333038]));
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
  .setHead((new autoclass.head())
    .addComponent((new autoclass.component()).setName("H-Anim").setLevel(2))
    .addComments(" TODO fix X3D Tooltips entry for HAnim component ")
    .addMeta((new autoclass.meta()).setName("title").setContent("JoeSkeletonSiteSkinSaluteWalk.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Attempting to show skeleton, skin, sites and animation"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("JoeSkeletonSiteSkinSaluteWalk.original.x3dv"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Joe D. Williams"))
    .addMeta((new autoclass.meta()).setName("created").setContent("9 January 2004"))
    .addMeta((new autoclass.meta()).setName("translated").setContent("4 December 2022"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("4 December 2022"))
    .addMeta((new autoclass.meta()).setName("translator").setContent("Michalis Kamburelis"))
    .addMeta((new autoclass.meta()).setName("translator").setContent("Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/MotionAnimation/JoeSkeletonSiteSkinSaluteWalk.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("tovrmlx3d, https://castle-engine.io/view3dscene.php#section_converting"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("filename").setContent("hanimLOA3A8320080320..x3dv 20080627"))
    .addMeta((new autoclass.meta()).setName("warning").setContent("Under development, numerous errors and warnings"))
    .addMeta((new autoclass.meta()).setName("TODO").setContent("Provide feedback to tovrmlx3d converter"))
    .addMeta((new autoclass.meta()).setName("TODO").setContent("HAnimJoint cannot contain X3DChildNode elements, only HAnimJoint HAnimSegmet HAnimSite - improve diagnostics."))
    .addMeta((new autoclass.meta()).setName("TODO").setContent("ensure name prefix \"Joe_\" applied to all contained DEF values (not name field), perhaps correction automatically applied by X3DTidy"))
    .addMeta((new autoclass.meta()).setName("TODO").setContent("This is an HAnimV1 loa model, might need to convert to X3D4 to note loa value"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.Group("JointCenters_WorldInfo"))
      .addChild((new autoclass.WorldInfo()).setInfo(new autoclass.MFString("\"By Joe for Joe\"")).setTitle(this.WorldInfo_4_22_title)))
    .addChild((new autoclass.Group())
      .addChild((new autoclass.Transform()).setScale(10.0,10.0,10.0).setTranslation(0.0,3.0,0.0)
        .addChild((new autoclass.Shape("jointbox"))
          .setGeometry((new autoclass.IndexedFaceSet()).setCreaseAngle(0.10000000149011612).setCoordIndex(java.newArray("int", [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]))
            .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_7_24_point))
            .setColor((new autoclass.Color()).setColor(new autoclass.MFColor(java.newArray("float", [1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,0.0])))))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setAmbientIntensity(0.5).setDiffuseColor(0.0,0.0,0.0).setShininess(1).setTransparency(1)))))
      .addChild((new autoclass.Transform()).setScale(0.10000000149011612,0.10000000149011612,0.10000000149011612).setTranslation(0.0,0.10000000149011612,0.0)
        .addChild((new autoclass.Shape("sitebox"))
          .setGeometry((new autoclass.IndexedFaceSet()).setCreaseAngle(0.10000000149011612).setCoordIndex(java.newArray("int", [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]))
            .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_7_31_point)))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setAmbientIntensity(1).setDiffuseColor(1.0,0.0,0.0).setEmissiveColor(1.0,0.0,0.0).setShininess(0.69999998807907104).setSpecularColor(1.0,0.0,0.0).setTransparency(0.60000002384185791)))))
      .addChild((new autoclass.Transform()).setScale(0.10000000149011612,0.10000000149011612,0.10000000149011612).setTranslation(0.0,0.20000000298023224,0.0)
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
            .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,0.0,0.000099999997473787516,0.0])))))
          .setAppearance((new autoclass.Appearance("SegmentLine"))
            .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,1.0,0.0).setEmissiveColor(0.0,1.0,0.0).setSpecularColor(0.0,1.0,0.0).setTransparency(0.80000001192092896)))))
      .addChild((new autoclass.Transform()).setScale(0.10000000149011612,0.10000000149011612,0.10000000149011612).setTranslation(0.0,0.30000001192092896,0.0)
        .addChild((new autoclass.Shape("skinsphere"))
          .setGeometry((new autoclass.Sphere()).setRadius(0.004999999888241291))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setAmbientIntensity(0.5).setDiffuseColor(0.0,1.0,0.0).setEmissiveColor(0.0,1.0,0.0).setShininess(1).setSpecularColor(0.0,1.0,0.0))))))
    .addChild((new autoclass.Group("SpecHumanoid"))
      .addChild((new autoclass.Group("JoeISOHumanoid"))
        .addChild((new autoclass.HAnimHumanoid("JoeHumanoid")).setName("Joe").setVersion("1.0")
          .addJoints((new autoclass.HAnimJoint("Joe_HumanoidRoot")).setName("HumanoidRoot").setCenter(0.0,0.875,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setTranslation(0.0,0.875,0.0).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
            .addChild((new autoclass.HAnimSegment("Joe_sacrum")).setName("sacrum")
              .addChild((new autoclass.Shape()))
              .addChild((new autoclass.Shape())
                .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                  .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,0.875,0.0,0.0,0.92000001668930054,0.0])))))
                .setAppearance((new autoclass.Appearance()))))
            .addChild((new autoclass.HAnimJoint("Joe_sacroiliac")).setName("sacroiliac").setCenter(0.0,0.92000001668930054,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [17,19,20,21,22,23,26,27,73,82,89,91,93])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.34999999403953552,0.34999999403953552,1.0])).setTranslation(0.0,0.91490000486373901,0.0015999999595806003).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
              .addChild((new autoclass.HAnimSegment("Joe_pelvis")).setName("pelvis")
                .addChild((new autoclass.Shape()))
                .addChild((new autoclass.Shape())
                  .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1,0,2,-1,0,3,-1]))
                    .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_11_56_point)))
                  .setAppearance((new autoclass.Appearance())))
                .addChild((new autoclass.HAnimSite("Joe_l_iliocristale")).setName("l_iliocristale").setTranslation(0.14249999821186066,1.065000057220459,0.0032999999821186066)
                  .addChild((new autoclass.Shape())))
                .addChild((new autoclass.HAnimSite("Joe_l_trochanterion")).setName("l_trochanterion").setTranslation(0.15000000596046448,0.89999997615814209,-0.0099999997764825821)
                  .addChild((new autoclass.Shape())))
                .addChild((new autoclass.HAnimSite("Joe_r_iliocristale")).setName("r_iliocristale").setTranslation(-0.14249999821186066,1.065000057220459,0.0032999999821186066)
                  .addChild((new autoclass.Shape())))
                .addChild((new autoclass.HAnimSite("Joe_r_trochanterion")).setName("r_trochanterion").setTranslation(-0.15000000596046448,0.89999997615814209,-0.0099999997764825821)
                  .addChild((new autoclass.Shape())))
                .addChild((new autoclass.HAnimSite("Joe_l_asis")).setName("l_asis").setTranslation(0.093500003218650818,1.0299999713897705,0.075000002980232239)
                  .addChild((new autoclass.Shape())))
                .addChild((new autoclass.HAnimSite("Joe_r_asis")).setName("r_asis").setTranslation(-0.093500003218650818,1.0299999713897705,0.075000002980232239)
                  .addChild((new autoclass.Shape())))
                .addChild((new autoclass.HAnimSite("Joe_l_psis")).setName("l_psis").setTranslation(0.077299997210502625,1.0190000534057617,-0.11999999731779099)
                  .addChild((new autoclass.Shape())))
                .addChild((new autoclass.HAnimSite("Joe_r_psis")).setName("r_psis").setTranslation(-0.077299997210502625,1.0190000534057617,-0.11999999731779099)
                  .addChild((new autoclass.Shape())))
                .addChild((new autoclass.HAnimSite("Joe_floormarker")).setName("floormarker")
                  .addChild((new autoclass.Transform()).setScale(3.0,3.0,3.0)
                    .addChild((new autoclass.Shape()))))
                .addChild((new autoclass.HAnimSite("Joe_crotch")).setName("crotch").setTranslation(0.0,0.87000000476837158,-0.02199999988079071)
                  .addChild((new autoclass.Shape())))
                .addChild((new autoclass.Transform()).setTranslation(0.0,0.92000001668930054,0.079999998211860657)
                  .addChild((new autoclass.Shape())))
                .addChild((new autoclass.Transform()).setTranslation(0.0,0.87000000476837158,-0.02199999988079071)
                  .addChild((new autoclass.Shape()))))
              .addChild((new autoclass.HAnimJoint("Joe_l_hip")).setName("l_hip").setCenter(0.10000000149011612,0.92000001668930054,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [89,90,94,95,96,97])).setSkinCoordWeight(java.newArray("float", [0.64999997615814209,1.0,1.0,1.0,1.0,1.0])).setTranslation(0.10000000149011612,0.92000001668930054,0.0).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                .addChild((new autoclass.HAnimSegment("Joe_l_thigh")).setName("l_thigh")
                  .addChild((new autoclass.Shape()))
                  .addChild((new autoclass.Shape())
                    .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                      .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.10000000149011612,0.92000001668930054,0.0,0.11500000208616257,0.46599999070167542,0.0])))))
                    .setAppearance((new autoclass.Appearance())))
                  .addChild((new autoclass.HAnimSite("Joe_l_knee_crease")).setName("l_knee_crease").setTranslation(0.11500000208616257,0.46599999070167542,-0.054999999701976776)
                    .addChild((new autoclass.Shape())))
                  .addChild((new autoclass.HAnimSite("Joe_l_femoral_lateral_epicn")).setName("l_femoral_lateral_epicn").setTranslation(0.17000000178813934,0.46599999070167542,0.0)
                    .addChild((new autoclass.Shape())))
                  .addChild((new autoclass.HAnimSite("Joe_l_femoral_medial_epicn")).setName("l_femoral_medial_epicn").setTranslation(0.05000000074505806,0.46599999070167542,0.0)
                    .addChild((new autoclass.Shape())))
                  .addChild((new autoclass.Transform()).setTranslation(0.10000000149011612,0.89999997615814209,0.077500000596046448)
                    .addChild((new autoclass.Shape())))
                  .addChild((new autoclass.Transform()).setTranslation(0.079000003635883331,0.92000001668930054,-0.14000000059604645)
                    .addChild((new autoclass.Shape())))
                  .addChild((new autoclass.Transform()).setTranslation(0.17100000381469727,0.64999997615814209,0.0)
                    .addChild((new autoclass.Shape())))
                  .addChild((new autoclass.Transform()).setTranslation(0.019999999552965164,0.64999997615814209,0.0)
                    .addChild((new autoclass.Shape())))
                  .addChild((new autoclass.Transform()).setTranslation(0.10000000149011612,0.64999997615814209,-0.079999998211860657)
                    .addChild((new autoclass.Shape())))
                  .addChild((new autoclass.Transform()).setTranslation(0.10000000149011612,0.64999997615814209,0.070000000298023224)
                    .addChild((new autoclass.Shape()))))
                .addChild((new autoclass.HAnimJoint("Joe_l_knee")).setName("l_knee").setCenter(0.11500000208616257,0.46599999070167542,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [334,335,336,337,338,339,340,341])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0])).setTranslation(0.11500000208616257,0.46599999070167542,0.0).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                  .addChild((new autoclass.HAnimSegment("Joe_l_calf")).setName("l_calf")
                    .addChild((new autoclass.Shape()))
                    .addChild((new autoclass.Shape())
                      .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                        .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.11500000208616257,0.46599999070167542,0.0,0.10000000149011612,0.068999998271465302,0.0])))))
                      .setAppearance((new autoclass.Appearance())))
                    .addChild((new autoclass.HAnimSite("Joe_l_lateral_malleolus")).setName("l_lateral_malleolus").setTranslation(0.15000000596046448,0.070000000298023224,0.0)
                      .addChild((new autoclass.Shape())))
                    .addChild((new autoclass.HAnimSite("Joe_l_medial_malleolus")).setName("l_medial_malleolus").setTranslation(0.085000000894069672,0.086000002920627594,0.012500000186264515)
                      .addChild((new autoclass.Shape())))
                    .addChild((new autoclass.Transform()).setTranslation(0.11500000208616257,0.46599999070167542,0.059999998658895493)
                      .addChild((new autoclass.Shape())))
                    .addChild((new autoclass.Transform()).setTranslation(0.11500000208616257,0.46599999070167542,-0.054999999701976776)
                      .addChild((new autoclass.Shape())))
                    .addChild((new autoclass.Transform()).setTranslation(0.17000000178813934,0.46599999070167542,0.0)
                      .addChild((new autoclass.Shape())))
                    .addChild((new autoclass.Transform()).setTranslation(0.05000000074505806,0.46599999070167542,0.0)
                      .addChild((new autoclass.Shape())))
                    .addChild((new autoclass.Transform()).setTranslation(0.17000000178813934,0.30000001192092896,0.0)
                      .addChild((new autoclass.Shape())))
                    .addChild((new autoclass.Transform()).setTranslation(0.059999998658895493,0.30000001192092896,0.0)
                      .addChild((new autoclass.Shape())))
                    .addChild((new autoclass.Transform()).setTranslation(0.10000000149011612,0.30000001192092896,-0.05000000074505806)
                      .addChild((new autoclass.Shape())))
                    .addChild((new autoclass.Transform()).setTranslation(0.10000000149011612,0.30000001192092896,0.05000000074505806)
                      .addChild((new autoclass.Shape()))))
                  .addChild((new autoclass.HAnimJoint("Joe_l_ankle")).setName("l_ankle").setCenter(0.11500000208616257,0.068999998271465302,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [342,343,344,345])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0])).setTranslation(0.11500000208616257,0.068999998271465302,0.0).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                    .addChild((new autoclass.HAnimSegment("Joe_l_hindfoot")).setName("l_hindfoot")
                      .addChild((new autoclass.Shape()))
                      .addChild((new autoclass.Shape())
                        .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                          .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_14_137_point)))
                        .setAppearance((new autoclass.Appearance())))
                      .addChild((new autoclass.HAnimSite("Joe_l_sphyrion")).setName("l_sphyrion").setTranslation(0.090000003576278687,0.056000001728534698,0.012500000186264515)
                        .addChild((new autoclass.Shape())))
                      .addChild((new autoclass.HAnimSite("Joe_l_calcaneous_post")).setName("l_calcaneous_post").setTranslation(0.11500000208616257,0.039999999105930328,-0.054999999701976776)
                        .addChild((new autoclass.Shape())))
                      .addChild((new autoclass.Transform()).setTranslation(0.15000000596046448,0.070000000298023224,0.0)
                        .addChild((new autoclass.Shape())))
                      .addChild((new autoclass.Transform()).setTranslation(0.085000000894069672,0.086000002920627594,0.012500000186264515)
                        .addChild((new autoclass.Shape())))
                      .addChild((new autoclass.Transform()).setTranslation(0.11500000208616257,0.068999998271465302,-0.045000001788139343)
                        .addChild((new autoclass.Shape())))
                      .addChild((new autoclass.Transform()).setTranslation(0.11699999868869781,0.097499996423721313,0.061500001698732376)
                        .addChild((new autoclass.Shape()))))
                    .addChild((new autoclass.HAnimJoint("Joe_l_subtalar")).setName("l_subtalar").setCenter(0.11500000208616257,0.030999999493360519,0.029999999329447746).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [346,347,348,71])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0])).setTranslation(0.11500000208616257,0.030999999493360519,0.029999999329447746).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                      .addChild((new autoclass.HAnimSegment("Joe_l_l_midproximal")).setName("l_midproximal")
                        .addChild((new autoclass.Shape()))
                        .addChild((new autoclass.Shape())
                          .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                            .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_15_155_point)))
                          .setAppearance((new autoclass.Appearance())))
                        .addChild((new autoclass.Transform()).setTranslation(0.13750000298023224,0.0060000000521540642,-0.029999999329447746)
                          .addChild((new autoclass.Shape())))
                        .addChild((new autoclass.Transform()).setTranslation(0.094999998807907104,0.0060000000521540642,-0.029999999329447746)
                          .addChild((new autoclass.Shape())))
                        .addChild((new autoclass.Transform()).setTranslation(0.11500000208616257,0.014999999664723873,-0.045000001788139343)
                          .addChild((new autoclass.Shape()))))
                      .addChild((new autoclass.HAnimJoint("Joe_l_midtarsal")).setName("l_midtarsal").setCenter(0.11500000208616257,0.037000000476837158,0.090000003576278687).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [349,350,351,352])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0])).setTranslation(0.11500000208616257,0.037000000476837158,0.090000003576278687).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                        .addChild((new autoclass.HAnimSegment("Joe_l_middistal")).setName("l_middistal")
                          .addChild((new autoclass.Shape()))
                          .addChild((new autoclass.Shape())
                            .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                              .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_16_167_point)))
                            .setAppearance((new autoclass.Appearance())))
                          .addChild((new autoclass.HAnimSite("Joe_l_metatarsal_pha1")).setName("l_metatarsal_pha1").setTranslation(0.086999997496604919,0.0099999997764825821,0.12200000137090683)
                            .addChild((new autoclass.Shape())))
                          .addChild((new autoclass.Transform()).setTranslation(0.11500000208616257,0.059999998658895493,0.10000000149011612)
                            .addChild((new autoclass.Shape())))
                          .addChild((new autoclass.Transform()).setTranslation(0.11500000208616257,0.0,0.070000000298023224)
                            .addChild((new autoclass.Shape())))
                          .addChild((new autoclass.Transform()).setTranslation(0.16500000655651093,0.0,0.070000000298023224)
                            .addChild((new autoclass.Shape())))
                          .addChild((new autoclass.Transform()).setTranslation(0.094999998807907104,0.0,0.070000000298023224)
                            .addChild((new autoclass.Shape()))))
                        .addChild((new autoclass.HAnimJoint("Joe_l_metatarsal")).setName("l_metatarsal").setCenter(0.11500000208616257,0.019999999552965164,0.12200000137090683).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [353,354,355,356,357,358,359,360,361])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0])).setTranslation(0.11500000208616257,0.019999999552965164,0.12999999523162842).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                          .addChild((new autoclass.HAnimSegment("Joe_l_forefoot")).setName("l_forefoot")
                            .addChild((new autoclass.Shape()))
                            .addChild((new autoclass.Shape())
                              .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_17_183_point)))
                              .setAppearance((new autoclass.Appearance())))
                            .addChild((new autoclass.HAnimSite("Joe_l_metatarsal_pha5")).setName("l_metatarsal_pha5").setTranslation(0.16500000655651093,0.0099999997764825821,0.11999999731779099)
                              .addChild((new autoclass.Shape())))
                            .addChild((new autoclass.HAnimSite("Joe_l_digit2")).setName("l_digit2").setTranslation(0.10999999940395355,0.010999999940395355,0.18999999761581421)
                              .addChild((new autoclass.Shape())))
                            .addChild((new autoclass.Transform()).setTranslation(0.11500000208616257,0.039999999105930328,0.12999999523162842)
                              .addChild((new autoclass.Shape())))
                            .addChild((new autoclass.Transform()).setTranslation(0.125,0.0,0.11999999731779099)
                              .addChild((new autoclass.Shape())))
                            .addChild((new autoclass.Transform()).setTranslation(0.16500000655651093,0.0,0.11999999731779099)
                              .addChild((new autoclass.Shape())))
                            .addChild((new autoclass.Transform()).setTranslation(0.086999997496604919,0.0,0.12200000137090683)
                              .addChild((new autoclass.Shape())))
                            .addChild((new autoclass.Transform()).setTranslation(0.090000003576278687,0.012000000104308128,0.18799999356269836)
                              .addChild((new autoclass.Shape())))
                            .addChild((new autoclass.Transform()).setTranslation(0.10999999940395355,0.010999999940395355,0.18999999761581421)
                              .addChild((new autoclass.Shape())))
                            .addChild((new autoclass.Transform()).setTranslation(0.12800000607967377,0.010999999940395355,0.18500000238418579)
                              .addChild((new autoclass.Shape())))
                            .addChild((new autoclass.Transform()).setTranslation(0.14200000464916229,0.010999999940395355,0.17800000309944153)
                              .addChild((new autoclass.Shape())))
                            .addChild((new autoclass.Transform()).setTranslation(0.15399999916553497,0.0099999997764825821,0.1679999977350235)
                              .addChild((new autoclass.Shape()))))))))))
              .addChild((new autoclass.HAnimJoint("Joe_r_hip")).setName("r_hip").setCenter(-0.10000000149011612,0.92000001668930054,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [91,92,98,99,100,101])).setSkinCoordWeight(java.newArray("float", [0.64999997615814209,1.0,1.0,1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                .addChild((new autoclass.Transform()).setTranslation(-0.10000000149011612,0.92000001668930054,0.0)
                  .addChild((new autoclass.Shape())))
                .addChild((new autoclass.HAnimSegment("Joe_r_thigh")).setName("r_thigh")
                  .addChild((new autoclass.Shape())
                    .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                      .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.10000000149011612,0.92000001668930054,0.0,-0.10000000149011612,0.49129998683929443,0.0])))))
                    .setAppearance((new autoclass.Appearance())))
                  .addChild((new autoclass.HAnimSite("Joe_r_knee_crease")).setName("r_knee_crease").setTranslation(-0.11500000208616257,0.46599999070167542,-0.054999999701976776)
                    .addChild((new autoclass.Shape())))
                  .addChild((new autoclass.HAnimSite("Joe_r_femoral_lateral_epicn")).setName("r_femoral_lateral_epicn").setTranslation(-0.17000000178813934,0.46599999070167542,0.0)
                    .addChild((new autoclass.Shape())))
                  .addChild((new autoclass.HAnimSite("Joe_r_femoral_medial_epicn")).setName("r_femoral_medial_epicn").setTranslation(-0.05000000074505806,0.46599999070167542,0.0)
                    .addChild((new autoclass.Shape())))
                  .addChild((new autoclass.Transform()).setTranslation(-0.079000003635883331,0.92000001668930054,-0.14000000059604645)
                    .addChild((new autoclass.Shape())))
                  .addChild((new autoclass.Transform()).setTranslation(-0.10000000149011612,0.89999997615814209,0.075000002980232239)
                    .addChild((new autoclass.Shape())))
                  .addChild((new autoclass.Transform()).setTranslation(-0.17100000381469727,0.64999997615814209,0.0)
                    .addChild((new autoclass.Shape())))
                  .addChild((new autoclass.Transform()).setTranslation(-0.019999999552965164,0.64999997615814209,0.0)
                    .addChild((new autoclass.Shape())))
                  .addChild((new autoclass.Transform()).setTranslation(-0.10000000149011612,0.64999997615814209,-0.079999998211860657)
                    .addChild((new autoclass.Shape())))
                  .addChild((new autoclass.Transform()).setTranslation(-0.10000000149011612,0.64999997615814209,0.070000000298023224)
                    .addChild((new autoclass.Shape()))))
                .addChild((new autoclass.HAnimJoint("Joe_r_knee")).setName("r_knee").setCenter(-0.05000000074505806,0.46599999070167542,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [362,363,364,365,366,367,368,369])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                  .addChild((new autoclass.Transform()).setTranslation(-0.10000000149011612,0.49129998683929443,0.0)
                    .addChild((new autoclass.Shape())))
                  .addChild((new autoclass.HAnimSegment("Joe_r_calf")).setName("r_calf")
                    .addChild((new autoclass.Shape())
                      .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                        .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.10000000149011612,0.49129998683929443,0.0,-0.10000000149011612,0.071199998259544373,0.0])))))
                      .setAppearance((new autoclass.Appearance())))
                    .addChild((new autoclass.HAnimSite("Joe_r_lateral_malleolus")).setName("r_lateral_malleolus").setTranslation(-0.15000000596046448,0.070000000298023224,0.0)
                      .addChild((new autoclass.Shape())))
                    .addChild((new autoclass.HAnimSite("Joe_r_medial_malleolus")).setName("r_medial_malleolus").setTranslation(-0.085000000894069672,0.086000002920627594,0.012500000186264515)
                      .addChild((new autoclass.Shape())))
                    .addChild((new autoclass.Transform()).setTranslation(-0.11500000208616257,0.46599999070167542,0.059999998658895493)
                      .addChild((new autoclass.Shape())))
                    .addChild((new autoclass.Transform()).setTranslation(-0.11500000208616257,0.46599999070167542,-0.054999999701976776)
                      .addChild((new autoclass.Shape())))
                    .addChild((new autoclass.Transform()).setTranslation(-0.17000000178813934,0.46599999070167542,0.0)
                      .addChild((new autoclass.Shape())))
                    .addChild((new autoclass.Transform()).setTranslation(-0.05000000074505806,0.46599999070167542,0.0)
                      .addChild((new autoclass.Shape())))
                    .addChild((new autoclass.Transform()).setTranslation(-0.17000000178813934,0.30000001192092896,0.0)
                      .addChild((new autoclass.Shape())))
                    .addChild((new autoclass.Transform()).setTranslation(-0.059999998658895493,0.30000001192092896,0.0)
                      .addChild((new autoclass.Shape())))
                    .addChild((new autoclass.Transform()).setTranslation(-0.10000000149011612,0.30000001192092896,-0.05000000074505806)
                      .addChild((new autoclass.Shape())))
                    .addChild((new autoclass.Transform()).setTranslation(-0.10000000149011612,0.30000001192092896,0.05000000074505806)
                      .addChild((new autoclass.Shape()))))
                  .addChild((new autoclass.HAnimJoint("Joe_r_ankle")).setName("r_ankle").setCenter(-0.11500000208616257,0.068999998271465302,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [370,371,372,373])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                    .addChild((new autoclass.Transform()).setTranslation(-0.10000000149011612,0.071199998259544373,0.0)
                      .addChild((new autoclass.Shape())))
                    .addChild((new autoclass.HAnimSegment("Joe_r_hindfoot")).setName("r_hindfoot")
                      .addChild((new autoclass.Shape())
                        .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                          .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_14_270_point)))
                        .setAppearance((new autoclass.Appearance())))
                      .addChild((new autoclass.HAnimSite("Joe_r_sphyrion")).setName("r_sphyrion").setTranslation(-0.090000003576278687,0.056000001728534698,0.012500000186264515)
                        .addChild((new autoclass.Shape())))
                      .addChild((new autoclass.HAnimSite("Joe_r_calcaneous_post")).setName("r_calcaneous_post").setTranslation(-0.11500000208616257,0.039999999105930328,-0.054999999701976776)
                        .addChild((new autoclass.Shape())))
                      .addChild((new autoclass.Transform()).setTranslation(-0.15000000596046448,0.070000000298023224,0.0)
                        .addChild((new autoclass.Shape())))
                      .addChild((new autoclass.Transform()).setTranslation(-0.085000000894069672,0.086000002920627594,0.012500000186264515)
                        .addChild((new autoclass.Shape())))
                      .addChild((new autoclass.Transform()).setTranslation(-0.11500000208616257,0.068999998271465302,-0.045000001788139343)
                        .addChild((new autoclass.Shape())))
                      .addChild((new autoclass.Transform()).setTranslation(-0.11699999868869781,0.097499996423721313,0.061500001698732376)
                        .addChild((new autoclass.Shape()))))
                    .addChild((new autoclass.HAnimJoint("Joe_r_subtalar")).setName("r_subtalar").setCenter(-0.10000000149011612,0.014999999664723873,-0.0099999997764825821).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [374,375,376])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                      .addChild((new autoclass.Transform()).setTranslation(-0.10000000149011612,0.014999999664723873,-0.0099999997764825821)
                        .addChild((new autoclass.Shape())))
                      .addChild((new autoclass.HAnimSegment("Joe_r_midproximal")).setName("r_midproximal")
                        .addChild((new autoclass.Shape())
                          .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                            .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_15_289_point)))
                          .setAppearance((new autoclass.Appearance())))
                        .addChild((new autoclass.Transform()).setTranslation(-0.13750000298023224,0.0060000000521540642,-0.029999999329447746)
                          .addChild((new autoclass.Shape())))
                        .addChild((new autoclass.Transform()).setTranslation(-0.094999998807907104,0.0060000000521540642,-0.029999999329447746)
                          .addChild((new autoclass.Shape())))
                        .addChild((new autoclass.Transform()).setTranslation(-0.094999998807907104,0.0060000000521540642,-0.029999999329447746)
                          .addChild((new autoclass.Shape()))))
                      .addChild((new autoclass.HAnimJoint("Joe_r_midtarsal")).setName("r_midtarsal").setCenter(-0.11500000208616257,0.037000000476837158,0.090000003576278687).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [377,378,379,380])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                        .addChild((new autoclass.Transform()).setTranslation(-0.10000000149011612,0.019999999552965164,0.070000000298023224)
                          .addChild((new autoclass.Shape())))
                        .addChild((new autoclass.HAnimSegment("Joe_r_middistal")).setName("r_middistal")
                          .addChild((new autoclass.Shape())
                            .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                              .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_16_302_point)))
                            .setAppearance((new autoclass.Appearance())))
                          .addChild((new autoclass.HAnimSite("Joe_r_metatarsal_pha1")).setName("r_metatarsal_pha1").setTranslation(-0.11500000208616257,0.019999999552965164,0.12200000137090683)
                            .addChild((new autoclass.Shape())))
                          .addChild((new autoclass.Transform()).setTranslation(-0.11500000208616257,0.059999998658895493,0.10000000149011612)
                            .addChild((new autoclass.Shape())))
                          .addChild((new autoclass.Transform()).setTranslation(-0.11500000208616257,0.0,0.070000000298023224)
                            .addChild((new autoclass.Shape())))
                          .addChild((new autoclass.Transform()).setTranslation(-0.16500000655651093,0.0,0.070000000298023224)
                            .addChild((new autoclass.Shape())))
                          .addChild((new autoclass.Transform()).setTranslation(-0.16500000655651093,0.0,0.070000000298023224)
                            .addChild((new autoclass.Shape()))))
                        .addChild((new autoclass.HAnimJoint("Joe_r_metatarsal")).setName("r_metatarsal").setCenter(-0.10000000149011612,0.0099999997764825821,0.14000000059604645).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [381,382,383,384,385,386,387,388,389])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                          .addChild((new autoclass.Transform()).setTranslation(-0.10859999805688858,0.0099999997764825821,0.14000000059604645)
                            .addChild((new autoclass.Shape())))
                          .addChild((new autoclass.HAnimSegment("Joe_r_forefoot")).setName("r_forefoot")
                            .addChild((new autoclass.Shape())
                              .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_17_319_point)))
                              .setAppearance((new autoclass.Appearance())))
                            .addChild((new autoclass.HAnimSite("Joe_r_metatarsal_pha5")).setName("r_metatarsal_pha5").setTranslation(-0.16500000655651093,0.0099999997764825821,0.11999999731779099)
                              .addChild((new autoclass.Shape())))
                            .addChild((new autoclass.HAnimSite("Joe_r_digit2")).setName("r_digit2").setTranslation(-0.10999999940395355,0.010999999940395355,0.18999999761581421)
                              .addChild((new autoclass.Shape())))
                            .addChild((new autoclass.Transform()).setTranslation(-0.11500000208616257,0.039999999105930328,0.12999999523162842)
                              .addChild((new autoclass.Shape())))
                            .addChild((new autoclass.Transform()).setTranslation(-0.125,0.0,0.11999999731779099)
                              .addChild((new autoclass.Shape())))
                            .addChild((new autoclass.Transform()).setTranslation(-0.16500000655651093,0.0,0.11999999731779099)
                              .addChild((new autoclass.Shape())))
                            .addChild((new autoclass.Transform()).setTranslation(-0.086999997496604919,0.0,0.12200000137090683)
                              .addChild((new autoclass.Shape())))
                            .addChild((new autoclass.Transform()).setTranslation(-0.090000003576278687,0.012000000104308128,0.18799999356269836)
                              .addChild((new autoclass.Shape())))
                            .addChild((new autoclass.Transform()).setTranslation(-0.10999999940395355,0.010999999940395355,0.18999999761581421)
                              .addChild((new autoclass.Shape())))
                            .addChild((new autoclass.Transform()).setTranslation(-0.12800000607967377,0.010999999940395355,0.18500000238418579)
                              .addChild((new autoclass.Shape())))
                            .addChild((new autoclass.Transform()).setTranslation(-0.14200000464916229,0.010999999940395355,0.17800000309944153)
                              .addChild((new autoclass.Shape())))
                            .addChild((new autoclass.Transform()).setTranslation(-0.15399999916553497,0.0099999997764825821,0.1679999977350235)
                              .addChild((new autoclass.Shape())))))))))))
            .addChild((new autoclass.HAnimJoint("Joe_vl5")).setName("vl5").setCenter(0.0,1.0449999570846558,-0.094999998807907104).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [28,76])).setSkinCoordWeight(java.newArray("float", [1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
              .addChild((new autoclass.Transform()).setTranslation(0.0,1.0449999570846558,-0.094999998807907104)
                .addChild((new autoclass.Shape())))
              .addChild((new autoclass.HAnimSegment("Joe_toPelvisMarker")).setName("toPelvis")
                .addChild((new autoclass.Shape())
                  .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                    .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,1.0449999570846558,-0.094999998807907104,0.0,0.91490000486373901,0.0015999999595806003])))))
                  .setAppearance((new autoclass.Appearance()))))
              .addChild((new autoclass.HAnimSegment("Joe_l5")).setName("l5")
                .addChild((new autoclass.Shape())
                  .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                    .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,1.0449999570846558,-0.094999998807907104,0.0,1.0679999589920044,-0.085000000894069672])))))
                  .setAppearance((new autoclass.Appearance())))
                .addChild((new autoclass.HAnimSite("Joe_waist_preferred_post")).setName("waist_preferred_post").setTranslation(0.0,1.0915000438690186,-0.10909999907016754)
                  .addChild((new autoclass.Shape())))
                .addChild((new autoclass.HAnimSite("Joe_navel")).setName("navel").setTranslation(0.0,1.0722500085830688,0.090000003576278687)
                  .addChild((new autoclass.Shape()))))
              .addChild((new autoclass.HAnimJoint("Joe_vl4")).setName("vl4").setCenter(0.0,1.0679999589920044,-0.085000000894069672).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                .addChild((new autoclass.Transform()).setTranslation(0.0,1.0679999589920044,-0.085000000894069672)
                  .addChild((new autoclass.Shape())))
                .addChild((new autoclass.HAnimSegment("Joe_l4")).setName("l4")
                  .addChild((new autoclass.Shape())
                    .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                      .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,1.0679999589920044,-0.085000000894069672,0.0,1.0920000076293945,-0.072499997913837433])))))
                    .setAppearance((new autoclass.Appearance()))))
                .addChild((new autoclass.HAnimJoint("Joe_vl3")).setName("vl3").setCenter(0.0,1.0920000076293945,-0.072499997913837433).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                  .addChild((new autoclass.Transform()).setTranslation(0.0,1.0920000076293945,-0.072499997913837433)
                    .addChild((new autoclass.Shape())))
                  .addChild((new autoclass.HAnimSegment("Joe_l3")).setName("l3")
                    .addChild((new autoclass.Shape())
                      .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                        .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,1.0920000076293945,-0.072499997913837433,0.0,1.1200000047683716,-0.064999997615814209])))))
                      .setAppearance((new autoclass.Appearance()))))
                  .addChild((new autoclass.HAnimJoint("Joe_vl2")).setName("vl2").setCenter(0.0,1.1200000047683716,-0.064999997615814209).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [16,18,25,83,84,85,86,87,88])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,0.69999998807907104,1.0,0.80000001192092896])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                    .addChild((new autoclass.Transform()).setTranslation(0.0,1.1200000047683716,-0.064999997615814209)
                      .addChild((new autoclass.Shape())))
                    .addChild((new autoclass.HAnimSegment("Joe_l2")).setName("l2")
                      .addChild((new autoclass.Shape())
                        .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                          .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,1.1200000047683716,-0.064999997615814209,0.0,1.1459000110626221,-0.0625])))))
                        .setAppearance((new autoclass.Appearance())))
                      .addChild((new autoclass.HAnimSite("Joe_r_rib10")).setName("r_rib10").setTranslation(-0.086999997496604919,1.190000057220459,0.090000003576278687)
                        .addChild((new autoclass.Shape())))
                      .addChild((new autoclass.HAnimSite("Joe_l_rib10")).setName("l_rib10").setTranslation(0.086999997496604919,1.190000057220459,0.090000003576278687)
                        .addChild((new autoclass.Shape())))
                      .addChild((new autoclass.HAnimSite("Joe_rib10_midspine")).setName("rib10_midspine").setTranslation(0.0,1.1907999515533447,-0.11129999905824661)
                        .addChild((new autoclass.Shape())))
                      .addChild((new autoclass.Transform()).setTranslation(-0.086999997496604919,1.190000057220459,-0.090000003576278687)
                        .addChild((new autoclass.Shape())))
                      .addChild((new autoclass.Transform()).setTranslation(0.086999997496604919,1.190000057220459,-0.090000003576278687)
                        .addChild((new autoclass.Shape())))
                      .addChild((new autoclass.Transform()).setTranslation(0.17200000584125519,1.3200000524520874,-0.029999999329447746)
                        .addChild((new autoclass.Shape())))
                      .addChild((new autoclass.Transform()).setTranslation(-0.17200000584125519,1.3200000524520874,-0.029999999329447746)
                        .addChild((new autoclass.Shape())))
                      .addChild((new autoclass.Transform()).setTranslation(0.15000000596046448,1.2300000190734863,-0.014999999664723873)
                        .addChild((new autoclass.Shape())))
                      .addChild((new autoclass.Transform()).setTranslation(-0.15000000596046448,1.2300000190734863,-0.014999999664723873)
                        .addChild((new autoclass.Shape()))))
                    .addChild((new autoclass.HAnimJoint("Joe_vl1")).setName("vl1").setCenter(0.0,1.1459000110626221,-0.0625).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                      .addChild((new autoclass.Transform()).setTranslation(0.0,1.1459000110626221,-0.0625)
                        .addChild((new autoclass.Shape())))
                      .addChild((new autoclass.HAnimSegment("Joe_l1")).setName("l1")
                        .addChild((new autoclass.Shape())
                          .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                            .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,1.1459000110626221,-0.0625,0.0,1.1790000200271606,-0.068000003695487976])))))
                          .setAppearance((new autoclass.Appearance()))))
                      .addChild((new autoclass.HAnimJoint("Joe_vt12")).setName("vt12").setCenter(0.0,1.1790000200271606,-0.068000003695487976).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                        .addChild((new autoclass.Transform()).setTranslation(0.0,1.1790000200271606,-0.068000003695487976)
                          .addChild((new autoclass.Shape())))
                        .addChild((new autoclass.HAnimSegment("Joe_t12")).setName("t12")
                          .addChild((new autoclass.Shape())
                            .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                              .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,1.1790000200271606,-0.068000003695487976,0.0,1.2419999837875366,-0.090000003576278687])))))
                            .setAppearance((new autoclass.Appearance()))))
                        .addChild((new autoclass.HAnimJoint("Joe_vt11")).setName("vt11").setCenter(0.0,1.2678999900817871,-0.081000000238418579).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                          .addChild((new autoclass.Transform()).setTranslation(0.0,1.2144999504089355,-0.075499996542930603)
                            .addChild((new autoclass.Shape())))
                          .addChild((new autoclass.HAnimSegment("Joe_t11")).setName("t11")
                            .addChild((new autoclass.Shape())
                              .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,1.2144999504089355,-0.075499996542930603,0.0,1.2419999837875366,-0.090000003576278687])))))
                              .setAppearance((new autoclass.Appearance()))))
                          .addChild((new autoclass.HAnimJoint("Joe_vt10")).setName("vt10").setCenter(0.0,1.2419999837875366,-0.090000003576278687).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [15])).setSkinCoordWeight(java.newArray("float", [1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                            .addChild((new autoclass.Transform()).setTranslation(0.0,1.2419999837875366,-0.090000003576278687)
                              .addChild((new autoclass.Shape())))
                            .addChild((new autoclass.HAnimSegment("Joe_t10")).setName("t10")
                              .addChild((new autoclass.Shape())
                                .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                  .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,1.2419999837875366,-0.090000003576278687,0.0,1.2680000066757202,-0.10000000149011612])))))
                                .setAppearance((new autoclass.Appearance())))
                              .addChild((new autoclass.HAnimSite("Joe_substernale")).setName("substernale").setTranslation(0.0,1.25,0.11299999803304672)
                                .addChild((new autoclass.Shape()))))
                            .addChild((new autoclass.HAnimJoint("Joe_vt9")).setName("vt9").setCenter(0.0,1.2680000066757202,-0.10000000149011612).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [13,14])).setSkinCoordWeight(java.newArray("float", [1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                              .addChild((new autoclass.Transform()).setTranslation(0.0,1.2680000066757202,-0.10000000149011612)
                                .addChild((new autoclass.Shape())))
                              .addChild((new autoclass.HAnimSegment("Joe_t9")).setName("t9")
                                .addChild((new autoclass.Shape())
                                  .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                    .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,1.2680000066757202,-0.10000000149011612,0.0,1.2940000295639038,-0.10999999940395355])))))
                                  .setAppearance((new autoclass.Appearance())))
                                .addChild((new autoclass.HAnimSite("Joe_r_thelion")).setName("r_thelion").setTranslation(-0.11349999904632568,1.3179999589920044,0.094999998807907104)
                                  .addChild((new autoclass.Shape())))
                                .addChild((new autoclass.HAnimSite("Joe_l_thelion")).setName("l_thelion").setTranslation(0.11349999904632568,1.3179999589920044,0.094999998807907104)
                                  .addChild((new autoclass.Shape()))))
                              .addChild((new autoclass.HAnimJoint("Joe_vt8")).setName("vt8").setCenter(0.0,1.2940000295639038,-0.10999999940395355).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                .addChild((new autoclass.Transform()).setTranslation(0.0,1.2940000295639038,-0.10999999940395355)
                                  .addChild((new autoclass.Shape())))
                                .addChild((new autoclass.HAnimSegment("Joe_t8")).setName("t8")
                                  .addChild((new autoclass.Shape())
                                    .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                      .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,1.2940000295639038,-0.10999999940395355,0.0,1.3519999980926514,-0.11999999731779099])))))
                                    .setAppearance((new autoclass.Appearance()))))
                                .addChild((new autoclass.HAnimJoint("Joe_vt7")).setName("vt7").setCenter(0.0,1.3229999542236328,-0.11550000309944153).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                  .addChild((new autoclass.Transform()).setTranslation(0.0,1.3229999542236328,-0.11550000309944153)
                                    .addChild((new autoclass.Shape())))
                                  .addChild((new autoclass.HAnimSegment("Joe_t7")).setName("t7")
                                    .addChild((new autoclass.Shape())
                                      .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                        .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,1.3519999980926514,-0.11999999731779099,0.0,1.3810000419616699,-0.12349999696016312])))))
                                      .setAppearance((new autoclass.Appearance()))))
                                  .addChild((new autoclass.HAnimJoint("Joe_vt6")).setName("vt6").setCenter(0.0,1.3519999980926514,-0.11999999731779099).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                    .addChild((new autoclass.Transform()).setTranslation(0.0,1.3519999980926514,-0.11999999731779099)
                                      .addChild((new autoclass.Shape())))
                                    .addChild((new autoclass.HAnimSegment("Joe_t6")).setName("t6")
                                      .addChild((new autoclass.Shape())
                                        .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                          .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,1.3810000419616699,-0.12349999696016312,0.0,1.4099999666213989,-0.12349999696016312])))))
                                        .setAppearance((new autoclass.Appearance()))))
                                    .addChild((new autoclass.HAnimJoint("Joe_vt5")).setName("vt5").setCenter(0.0,1.3810000419616699,-0.12349999696016312).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                      .addChild((new autoclass.Transform()).setTranslation(0.0,1.3810000419616699,-0.12349999696016312)
                                        .addChild((new autoclass.Shape())))
                                      .addChild((new autoclass.HAnimSegment("Joe_t5")).setName("t5")
                                        .addChild((new autoclass.Shape())
                                          .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                            .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,1.4099999666213989,-0.12349999696016312,0.0,1.437999963760376,-0.11999999731779099])))))
                                          .setAppearance((new autoclass.Appearance()))))
                                      .addChild((new autoclass.HAnimJoint("Joe_vt4")).setName("vt4").setCenter(0.0,1.4099999666213989,-0.12349999696016312).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [81])).setSkinCoordWeight(java.newArray("float", [1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                        .addChild((new autoclass.Transform()).setTranslation(0.0,1.4099999666213989,-0.12349999696016312)
                                          .addChild((new autoclass.Shape())))
                                        .addChild((new autoclass.Transform()).setTranslation(0.0,1.4099999666213989,-0.14499999582767487)
                                          .addChild((new autoclass.Shape())))
                                        .addChild((new autoclass.HAnimSegment("Joe_t4")).setName("t4")
                                          .addChild((new autoclass.Shape())
                                            .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                              .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,1.4099999666213989,-0.12349999696016312,0.0,1.437999963760376,-0.11999999731779099])))))
                                            .setAppearance((new autoclass.Appearance()))))
                                        .addChild((new autoclass.HAnimJoint("Joe_vt3")).setName("vt3").setCenter(0.0,1.437999963760376,-0.11999999731779099).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                          .addChild((new autoclass.Transform()).setTranslation(0.0,1.437999963760376,-0.11999999731779099)
                                            .addChild((new autoclass.Shape())))
                                          .addChild((new autoclass.HAnimSegment("Joe_t3")).setName("t3")
                                            .addChild((new autoclass.Shape())
                                              .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,1.437999963760376,-0.11999999731779099,0.0,1.468000054359436,-0.10499999672174454])))))
                                              .setAppearance((new autoclass.Appearance()))))
                                          .addChild((new autoclass.HAnimJoint("Joe_vt2")).setName("vt2").setCenter(0.0,1.468000054359436,-0.10499999672174454).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                            .addChild((new autoclass.Transform()).setTranslation(0.0,1.468000054359436,-0.10499999672174454)
                                              .addChild((new autoclass.Shape())))
                                            .addChild((new autoclass.HAnimSegment("Joe_t2")).setName("t2")
                                              .addChild((new autoclass.Shape())
                                                .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                  .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,1.468000054359436,-0.10499999672174454,0.0,1.496999979019165,-0.090000003576278687])))))
                                                .setAppearance((new autoclass.Appearance()))))
                                            .addChild((new autoclass.HAnimJoint("Joe_vt1")).setName("vt1").setCenter(0.0,1.496999979019165,-0.090000003576278687).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [11,24])).setSkinCoordWeight(java.newArray("float", [1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                              .addChild((new autoclass.Transform()).setTranslation(0.0,1.496999979019165,-0.090000003576278687)
                                                .addChild((new autoclass.Shape())))
                                              .addChild((new autoclass.HAnimSegment("Joe_t1")).setName("t1")
                                                .addChild((new autoclass.Shape())
                                                  .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                    .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,1.496999979019165,-0.090000003576278687,0.0,1.5249999761581421,-0.071999996900558472])))))
                                                  .setAppearance((new autoclass.Appearance())))
                                                .addChild((new autoclass.HAnimSite("Joe_suprasternale")).setName("suprasternale").setTranslation(0.0,1.440000057220459,0.029999999329447746)
                                                  .addChild((new autoclass.Shape())))
                                                .addChild((new autoclass.HAnimSite("Joe_cervicale")).setName("cervicale").setTranslation(0.0,1.5299999713897705,-0.083999998867511749)
                                                  .addChild((new autoclass.Shape()))))
                                              .addChild((new autoclass.HAnimJoint("Joe_vc7")).setName("vc7").setCenter(0.0,1.5249999761581421,-0.071999996900558472).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [74,75])).setSkinCoordWeight(java.newArray("float", [1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                .addChild((new autoclass.Transform()).setTranslation(0.0,1.5249999761581421,-0.071999996900558472)
                                                  .addChild((new autoclass.Shape())))
                                                .addChild((new autoclass.HAnimSegment("Joe_c7")).setName("c7")
                                                  .addChild((new autoclass.Shape())
                                                    .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1,0,2,-1,0,3,-1]))
                                                      .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_28_513_point)))
                                                    .setAppearance((new autoclass.Appearance())))
                                                  .addChild((new autoclass.HAnimSite("Joe_r_neck_base")).setName("r_neck_base").setTranslation(-0.064599998295307159,1.5148999691009521,-0.038499999791383743)
                                                    .addChild((new autoclass.Shape())))
                                                  .addChild((new autoclass.HAnimSite("Joe_l_neck_base")).setName("l_neck_base").setTranslation(0.064599998295307159,1.5148999691009521,-0.038499999791383743)
                                                    .addChild((new autoclass.Shape()))))
                                                .addChild((new autoclass.HAnimJoint("Joe_vc6")).setName("vc6").setCenter(0.0,1.5399999618530273,-0.05000000074505806).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                  .addChild((new autoclass.Transform()).setTranslation(0.0,1.5399999618530273,-0.05000000074505806)
                                                    .addChild((new autoclass.Shape())))
                                                  .addChild((new autoclass.HAnimSegment("Joe_c6")).setName("c6")
                                                    .addChild((new autoclass.Shape())
                                                      .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                        .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,1.5399999618530273,-0.05000000074505806,0.0,1.5674999952316284,-0.025599999353289604])))))
                                                      .setAppearance((new autoclass.Appearance()))))
                                                  .addChild((new autoclass.HAnimJoint("Joe_vc5")).setName("vc5").setCenter(0.0,1.5520000457763672,-0.035000000149011612).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                    .addChild((new autoclass.Transform()).setTranslation(0.0,1.5520000457763672,-0.035000000149011612)
                                                      .addChild((new autoclass.Shape())))
                                                    .addChild((new autoclass.HAnimSegment("Joe_c5")).setName("c5")
                                                      .addChild((new autoclass.Shape())
                                                        .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                          .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,1.5674999952316284,-0.025599999353289604,0.0,1.5822499990463257,-0.018500000238418579])))))
                                                        .setAppearance((new autoclass.Appearance()))))
                                                    .addChild((new autoclass.HAnimJoint("Joe_vc4")).setName("vc4").setCenter(0.0,1.5674999952316284,-0.025599999353289604).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                      .addChild((new autoclass.Transform()).setTranslation(0.0,1.5674999952316284,-0.025599999353289604)
                                                        .addChild((new autoclass.Shape())))
                                                      .addChild((new autoclass.HAnimSegment("Joe_c4")).setName("c4")
                                                        .addChild((new autoclass.Shape())
                                                          .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                            .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,1.5822499990463257,-0.018500000238418579,0.0,1.5950000286102295,-0.017500000074505806])))))
                                                          .setAppearance((new autoclass.Appearance()))))
                                                      .addChild((new autoclass.HAnimJoint("Joe_vc3")).setName("vc3").setCenter(0.0,1.5822499990463257,-0.018500000238418579).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                        .addChild((new autoclass.Transform()).setTranslation(0.0,1.5822499990463257,-0.018500000238418579)
                                                          .addChild((new autoclass.Shape())))
                                                        .addChild((new autoclass.HAnimSegment("Joe_c3")).setName("c3")
                                                          .addChild((new autoclass.Shape())
                                                            .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                              .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,1.5950000286102295,-0.017500000074505806,0.0,1.6100000143051147,-0.014999999664723873])))))
                                                            .setAppearance((new autoclass.Appearance()))))
                                                        .addChild((new autoclass.HAnimJoint("Joe_vc2")).setName("vc2").setCenter(0.0,1.5950000286102295,-0.017500000074505806).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                          .addChild((new autoclass.Transform()).setTranslation(0.0,1.5950000286102295,-0.017500000074505806)
                                                            .addChild((new autoclass.Shape())))
                                                          .addChild((new autoclass.HAnimSegment("Joe_c2")).setName("c2")
                                                            .addChild((new autoclass.Shape())
                                                              .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,1.6100000143051147,-0.014999999664723873,0.0,1.6144000291824341,-0.0034000000450760126])))))
                                                              .setAppearance((new autoclass.Appearance()))))
                                                          .addChild((new autoclass.HAnimJoint("Joe_vc1")).setName("vc1").setCenter(0.0,1.6100000143051147,-0.014999999664723873).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                            .addChild((new autoclass.Transform()).setTranslation(0.0,1.6100000143051147,-0.014999999664723873)
                                                              .addChild((new autoclass.Shape())))
                                                            .addChild((new autoclass.HAnimSegment("Joe_c1")).setName("c1")
                                                              .addChild((new autoclass.Shape())
                                                                .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                  .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,1.6144000291824341,-0.0034000000450760126,0.0,1.6299999952316284,-0.0099999997764825821])))))
                                                                .setAppearance((new autoclass.Appearance()))))
                                                            .addChild((new autoclass.HAnimJoint("Joe_skullbase")).setName("skullbase").setCenter(0.0,1.6299999952316284,-0.0099999997764825821).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [0,1,2,3,4,5,6,7,8,9])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                              .addChild((new autoclass.Transform()).setTranslation(0.0,1.6299999952316284,-0.0099999997764825821)
                                                                .addChild((new autoclass.Transform()).setScale(2.0,2.0,2.0)
                                                                  .addChild((new autoclass.Shape()))))
                                                              .addChild((new autoclass.HAnimSegment("Joe_skull")).setName("skull")
                                                                .addChild((new autoclass.Shape())
                                                                  .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1,0,2,-1]))
                                                                    .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_35_567_point)))
                                                                  .setAppearance((new autoclass.Appearance())))
                                                                .addChild((new autoclass.HAnimSite("Joe_skull_tip")).setName("skull_tip").setTranslation(0.0,1.7699999809265137,0.0)
                                                                  .addChild((new autoclass.Shape())))
                                                                .addChild((new autoclass.HAnimSite("Joe_sellion")).setName("sellion").setTranslation(0.0,1.6649999618530273,0.090000003576278687)
                                                                  .addChild((new autoclass.Shape())))
                                                                .addChild((new autoclass.HAnimSite("Joe_r_infraorbitale")).setName("r_infraorbitale").setTranslation(-0.032999999821186066,1.6200000047683716,0.086999997496604919)
                                                                  .addChild((new autoclass.Shape())))
                                                                .addChild((new autoclass.HAnimSite("Joe_l_infraorbitale")).setName("l_infraorbitale").setTranslation(0.032999999821186066,1.6200000047683716,0.086999997496604919)
                                                                  .addChild((new autoclass.Shape())))
                                                                .addChild((new autoclass.HAnimSite("Joe_supramenton")).setName("supramenton").setTranslation(0.0,1.5499999523162842,0.097000002861022949)
                                                                  .addChild((new autoclass.Shape())))
                                                                .addChild((new autoclass.HAnimSite("Joe_r_tragion")).setName("r_tragion").setTranslation(-0.076999999582767487,1.6399999856948853,-0.0099999997764825821)
                                                                  .addChild((new autoclass.Shape())))
                                                                .addChild((new autoclass.HAnimSite("Joe_r_gonion")).setName("r_gonion").setTranslation(-0.052000001072883606,1.5800000429153442,0.014999999664723873)
                                                                  .addChild((new autoclass.Shape())))
                                                                .addChild((new autoclass.HAnimSite("Joe_l_tragion")).setName("l_tragion").setTranslation(0.076999999582767487,1.6399999856948853,-0.0099999997764825821)
                                                                  .addChild((new autoclass.Shape())))
                                                                .addChild((new autoclass.HAnimSite("Joe_l_gonion")).setName("l_gonion").setTranslation(0.063100002706050873,1.5800000429153442,0.014999999664723873)
                                                                  .addChild((new autoclass.Shape())))
                                                                .addChild((new autoclass.HAnimSite("Joe_nuchale")).setName("nuchale").setTranslation(0.0,1.625,-0.092500001192092896)
                                                                  .addChild((new autoclass.Shape()))))
                                                              .addChild((new autoclass.HAnimJoint("Joe_l_eyeball_joint")).setName("l_eyeball_joint").setCenter(0.034000001847743988,1.659000039100647,0.059999998658895493).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                                .addChild((new autoclass.Transform()).setScale(1.0,1.0,1.3999999761581421).setTranslation(0.034000001847743988,1.6549999713897705,0.064999997615814209)
                                                                  .addChild((new autoclass.Shape())))
                                                                .addChild((new autoclass.HAnimSegment("Joe_l_eyeball")).setName("l_eyeball")
                                                                  .addChild((new autoclass.Shape())
                                                                    .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                      .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_36_594_point)))
                                                                    .setAppearance((new autoclass.Appearance())))))
                                                              .addChild((new autoclass.HAnimJoint("Joe_r_eyeball_joint")).setName("r_eyeball_joint").setCenter(-0.034000001847743988,1.659000039100647,0.059999998658895493).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                                .addChild((new autoclass.Transform()).setScale(1.0,1.0,1.3999999761581421).setTranslation(-0.034000001847743988,1.6549999713897705,0.064999997615814209)
                                                                  .addChild((new autoclass.Shape())))
                                                                .addChild((new autoclass.HAnimSegment("Joe_r_eyeball")).setName("r_eyeball")
                                                                  .addChild((new autoclass.Shape())
                                                                    .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                      .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_36_602_point)))
                                                                    .setAppearance((new autoclass.Appearance())))))))))))))
                                              .addChild((new autoclass.HAnimJoint("Joe_l_sternoclavicular")).setName("l_sternoclavicular").setCenter(0.082000002264976501,1.4487999677658081,-0.035300001502037048).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [12])).setSkinCoordWeight(java.newArray("float", [1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                .addChild((new autoclass.Transform()).setTranslation(0.082000002264976501,1.4487999677658081,-0.035300001502037048)
                                                  .addChild((new autoclass.Shape())))
                                                .addChild((new autoclass.HAnimSegment("Joe_l_clavicle")).setName("l_clavicle")
                                                  .addChild((new autoclass.Shape())
                                                    .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                      .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_28_618_point)))
                                                    .setAppearance((new autoclass.Appearance())))
                                                  .addChild((new autoclass.HAnimSite("Joe_l_clavicale")).setName("l_clavicale").setTranslation(0.029999999329447746,1.4600000381469727,0.035000000149011612)
                                                    .addChild((new autoclass.Shape()))))
                                                .addChild((new autoclass.HAnimJoint("Joe_l_acromioclavicular")).setName("l_acromioclavicular").setCenter(0.096199996769428253,1.4269000291824341,-0.042399998754262924).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [79])).setSkinCoordWeight(java.newArray("float", [1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                  .addChild((new autoclass.Transform()).setTranslation(0.096199996769428253,1.4269000291824341,-0.042399998754262924)
                                                    .addChild((new autoclass.Shape())))
                                                  .addChild((new autoclass.HAnimSegment("Joe_l_scapula")).setName("l_scapula")
                                                    .addChild((new autoclass.Shape())
                                                      .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                        .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_29_627_point)))
                                                      .setAppearance((new autoclass.Appearance())))
                                                    .addChild((new autoclass.HAnimSite("Joe_l_acromion")).setName("l_acromion").setTranslation(0.17499999701976776,1.4824999570846558,-0.059999998658895493)
                                                      .addChild((new autoclass.Shape())))
                                                    .addChild((new autoclass.HAnimSite("Joe_l_axilla_ant")).setName("l_axilla_ant").setTranslation(0.17000000178813934,1.3799999952316284,0.0070000002160668373)
                                                      .addChild((new autoclass.Shape())))
                                                    .addChild((new autoclass.HAnimSite("Joe_l_axilla_post")).setName("l_axilla_post").setTranslation(0.15999999642372131,1.3799999952316284,-0.125)
                                                      .addChild((new autoclass.Shape())))
                                                    .addChild((new autoclass.Transform()).setTranslation(0.10999999940395355,1.4270000457763672,-0.13750000298023224)
                                                      .addChild((new autoclass.Shape()))))
                                                  .addChild((new autoclass.HAnimJoint("Joe_l_shoulder")).setName("l_shoulder").setCenter(0.20000000298023224,1.440000057220459,-0.039999999105930328).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [41,42,44,80,102,103,104,105])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                    .addChild((new autoclass.Transform()).setTranslation(0.20000000298023224,1.440000057220459,-0.039999999105930328)
                                                      .addChild((new autoclass.Shape())))
                                                    .addChild((new autoclass.HAnimSegment("Joe_l_upperarm")).setName("l_upperarm")
                                                      .addChild((new autoclass.Shape())
                                                        .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                          .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_30_642_point)))
                                                        .setAppearance((new autoclass.Appearance())))
                                                      .addChild((new autoclass.HAnimSite("Joe_l_humeral_medial_epicn")).setName("l_humeral_medial_epicn").setTranslation(0.16500000655651093,1.1388000249862671,-0.039999999105930328)
                                                        .addChild((new autoclass.Shape())))
                                                      .addChild((new autoclass.HAnimSite("Joe_l_radiale")).setName("l_radiale").setTranslation(0.23000000417232513,1.1330000162124634,-0.054999999701976776)
                                                        .addChild((new autoclass.Shape())))
                                                      .addChild((new autoclass.HAnimSite("Joe_l_humeral_lateral_epicn")).setName("l_humeral_lateral_epicn").setTranslation(0.24400000274181366,1.1388000249862671,-0.039999999105930328)
                                                        .addChild((new autoclass.Shape())))
                                                      .addChild((new autoclass.Transform()).setTranslation(0.23499999940395355,1.4199999570846558,-0.0625)
                                                        .addChild((new autoclass.Shape())))
                                                      .addChild((new autoclass.Transform()).setTranslation(0.25,1.2699999809265137,-0.039999999105930328)
                                                        .addChild((new autoclass.Shape())))
                                                      .addChild((new autoclass.Transform()).setTranslation(0.17000000178813934,1.2699999809265137,-0.039999999105930328)
                                                        .addChild((new autoclass.Shape())))
                                                      .addChild((new autoclass.Transform()).setTranslation(0.20000000298023224,1.2699999809265137,-0.090000003576278687)
                                                        .addChild((new autoclass.Shape())))
                                                      .addChild((new autoclass.Transform()).setTranslation(0.20000000298023224,1.2699999809265137,0.019999999552965164)
                                                        .addChild((new autoclass.Shape()))))
                                                    .addChild((new autoclass.HAnimJoint("Joe_l_elbow")).setName("l_elbow").setCenter(0.20000000298023224,1.1388000249862671,-0.039999999105930328).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [45,46,47,109,110,111,112,113,115,116,117,118])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                      .addChild((new autoclass.Transform()).setTranslation(0.20000000298023224,1.1388000249862671,-0.039999999105930328)
                                                        .addChild((new autoclass.Shape())))
                                                      .addChild((new autoclass.HAnimSegment("Joe_l_forearm")).setName("l_forearm")
                                                        .addChild((new autoclass.Shape())
                                                          .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                            .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_31_665_point)))
                                                          .setAppearance((new autoclass.Appearance())))
                                                        .addChild((new autoclass.HAnimSite("Joe_l_radial_styloid")).setName("l_radial_styloid").setTranslation(0.19009999930858612,0.86449998617172241,-0.041499998420476913)
                                                          .addChild((new autoclass.Shape())))
                                                        .addChild((new autoclass.HAnimSite("Joe_l_olecranon")).setName("l_olecranon").setTranslation(0.20000000298023224,1.1388000249862671,-0.079999998211860657)
                                                          .addChild((new autoclass.Shape())))
                                                        .addChild((new autoclass.Transform()).setTranslation(0.20000000298023224,1.1388000249862671,-0.013000000268220901)
                                                          .addChild((new autoclass.Shape())))
                                                        .addChild((new autoclass.Transform()).setTranslation(0.22499999403953552,1.0,-0.0099999997764825821)
                                                          .addChild((new autoclass.Shape())))
                                                        .addChild((new autoclass.Transform()).setTranslation(0.22499999403953552,1.0,-0.070000000298023224)
                                                          .addChild((new autoclass.Shape())))
                                                        .addChild((new autoclass.Transform()).setTranslation(0.18500000238418579,1.0,-0.0099999997764825821)
                                                          .addChild((new autoclass.Shape())))
                                                        .addChild((new autoclass.Transform()).setTranslation(0.18500000238418579,1.0,-0.070000000298023224)
                                                          .addChild((new autoclass.Shape()))))
                                                      .addChild((new autoclass.HAnimJoint("Joe_l_wrist")).setName("l_wrist").setCenter(0.20000000298023224,0.87000000476837158,-0.039999999105930328).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [119,120,121,122,123,124,125,126])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                        .addChild((new autoclass.Transform()).setTranslation(0.20000000298023224,0.87000000476837158,-0.039999999105930328)
                                                          .addChild((new autoclass.Shape())))
                                                        .addChild((new autoclass.HAnimSegment("Joe_l_hand")).setName("l_hand")
                                                          .addChild((new autoclass.Shape())
                                                            .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]))
                                                              .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_32_686_point)))
                                                            .setAppearance((new autoclass.Appearance())))
                                                          .addChild((new autoclass.HAnimSite("Joe_l_metacarpal_pha2")).setName("l_metacarpal_pha2").setTranslation(0.20090000331401825,0.81389999389648438,-0.02370000071823597)
                                                            .addChild((new autoclass.Shape())))
                                                          .addChild((new autoclass.HAnimSite("Joe_l_ulnar_styloid")).setName("l_ulnar_styloid").setTranslation(0.21420000493526459,0.85290002822875977,-0.064800001680850983)
                                                            .addChild((new autoclass.Shape())))
                                                          .addChild((new autoclass.HAnimSite("Joe_l_metacarpal_pha5")).setName("l_metacarpal_pha5").setTranslation(0.19290000200271606,0.78600001335144043,-0.11219999939203262)
                                                            .addChild((new autoclass.Shape()))))
                                                        .addChild((new autoclass.HAnimJoint("Joe_l_thumb1")).setName("l_thumb1").setCenter(0.19239999353885651,0.84719997644424438,-0.053399998694658279).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [127,128])).setSkinCoordWeight(java.newArray("float", [1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                          .addChild((new autoclass.Transform()).setTranslation(0.19239999353885651,0.84719997644424438,-0.053399998694658279)
                                                            .addChild((new autoclass.Shape())))
                                                          .addChild((new autoclass.HAnimSegment("Joe_l_thumb_metacarpal")).setName("l_thumb_metacarpal")
                                                            .addChild((new autoclass.Shape())
                                                              .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_33_699_point)))
                                                              .setAppearance((new autoclass.Appearance()))))
                                                          .addChild((new autoclass.HAnimJoint("Joe_l_thumb2")).setName("l_thumb2").setCenter(0.19509999454021454,0.82260000705718994,0.024599999189376831).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [138,139,140,141,142,143])).setSkinCoordWeight(java.newArray("float", [0.5,0.5,0.5,1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                            .addChild((new autoclass.Transform()).setTranslation(0.19509999454021454,0.82260000705718994,0.024599999189376831)
                                                              .addChild((new autoclass.Shape())))
                                                            .addChild((new autoclass.HAnimSegment("Joe_l_thumb_proximal")).setName("l_thumb_distal")
                                                              .addChild((new autoclass.Shape())
                                                                .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                  .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_34_706_point)))
                                                                .setAppearance((new autoclass.Appearance()))))
                                                            .addChild((new autoclass.HAnimJoint("Joe_l_thumb3")).setName("l_thumb3").setCenter(0.19550000131130219,0.81590002775192261,0.046399999409914017).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [144,145,146,147,148,149,150,151,152])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                              .addChild((new autoclass.Transform()).setTranslation(0.19550000131130219,0.81590002775192261,0.046399999409914017)
                                                                .addChild((new autoclass.Shape())))
                                                              .addChild((new autoclass.HAnimSegment("Joe_l_thumb_distal")).setName("l_thumb_distal")
                                                                .addChild((new autoclass.Shape())
                                                                  .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                    .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_35_713_point)))
                                                                  .setAppearance((new autoclass.Appearance())))
                                                                .addChild((new autoclass.HAnimSite("Joe_l_thumb_distal_tip")).setName("l_thumb_distal_tip").setTranslation(0.19820000231266022,0.80610001087188721,0.07590000331401825)
                                                                  .addChild((new autoclass.Shape())))))))
                                                        .addChild((new autoclass.HAnimJoint("Joe_l_index0")).setName("l_index0").setCenter(0.19830000400543213,0.80239999294281006,-0.028000000864267349).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [129,130])).setSkinCoordWeight(java.newArray("float", [1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                          .addChild((new autoclass.Transform()).setTranslation(0.19830000400543213,0.80239999294281006,-0.028000000864267349)
                                                            .addChild((new autoclass.Shape())))
                                                          .addChild((new autoclass.HAnimSegment("Joe_l_index_metacarpal")).setName("l_index_metacarpal")
                                                            .addChild((new autoclass.Shape())
                                                              .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_33_725_point)))
                                                              .setAppearance((new autoclass.Appearance()))))
                                                          .addChild((new autoclass.HAnimJoint("Joe_l_index1")).setName("l_index1").setCenter(0.19830000400543213,0.78149998188018799,-0.028000000864267349).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [138,139,140,153,154,155,163])).setSkinCoordWeight(java.newArray("float", [0.5,0.5,0.5,1.0,1.0,1.0,0.5])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                            .addChild((new autoclass.Transform()).setTranslation(0.19830000400543213,0.78149998188018799,-0.028000000864267349)
                                                              .addChild((new autoclass.Shape())))
                                                            .addChild((new autoclass.HAnimSegment("Joe_l_index_proximal")).setName("l_index_proximal")
                                                              .addChild((new autoclass.Shape())
                                                                .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                  .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_34_732_point)))
                                                                .setAppearance((new autoclass.Appearance()))))
                                                            .addChild((new autoclass.HAnimJoint("Joe_l_index2")).setName("l_index2").setCenter(0.20170000195503235,0.73629999160766602,-0.024800000712275505).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [166,167,168,169])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                              .addChild((new autoclass.Transform()).setTranslation(0.20170000195503235,0.73629999160766602,-0.024800000712275505)
                                                                .addChild((new autoclass.Shape())))
                                                              .addChild((new autoclass.HAnimSegment("Joe_l_index_middle")).setName("l_index_middle")
                                                                .addChild((new autoclass.Shape())
                                                                  .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                    .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_35_739_point)))
                                                                  .setAppearance((new autoclass.Appearance()))))
                                                              .addChild((new autoclass.HAnimJoint("Joe_l_index3")).setName("l_index3").setCenter(0.20280000567436218,0.71390002965927124,-0.023600000888109207).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [170,171,172,173,174,175,176,177,178])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                                .addChild((new autoclass.Transform()).setTranslation(0.20280000567436218,0.71390002965927124,-0.023600000888109207)
                                                                  .addChild((new autoclass.Shape())))
                                                                .addChild((new autoclass.HAnimSegment("Joe_l_index_distal")).setName("l_index_distal")
                                                                  .addChild((new autoclass.Shape())
                                                                    .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                      .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_36_746_point)))
                                                                    .setAppearance((new autoclass.Appearance())))
                                                                  .addChild((new autoclass.HAnimSite("Joe_l_index_distal_tip")).setName("l_index_distal_tip").setTranslation(0.20890000462532043,0.68580001592636108,-0.024499999359250069)
                                                                    .addChild((new autoclass.Shape())))
                                                                  .addChild((new autoclass.HAnimSite("Joe_l_dactylion")).setName("l_dactylion").setTranslation(0.20559999346733093,0.67430001497268677,-0.048200000077486038)
                                                                    .addChild((new autoclass.Shape()))))))))
                                                        .addChild((new autoclass.HAnimJoint("Joe_l_middle0")).setName("l_middle0").setCenter(0.19869999587535858,0.80290001630783081,-0.05299999937415123).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [131,132])).setSkinCoordWeight(java.newArray("float", [1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                          .addChild((new autoclass.Transform()).setTranslation(0.19869999587535858,0.80290001630783081,-0.05299999937415123)
                                                            .addChild((new autoclass.Shape())))
                                                          .addChild((new autoclass.HAnimSegment("Joe_l_middle_metacarpal")).setName("l_middle_metacarpal")
                                                            .addChild((new autoclass.Shape())
                                                              .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_33_761_point)))
                                                              .setAppearance((new autoclass.Appearance()))))
                                                          .addChild((new autoclass.HAnimJoint("Joe_l_middle1")).setName("l_middle1").setCenter(0.19869999587535858,0.78179997205734253,-0.05299999937415123).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [156,157,163,164])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,0.5,0.5])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                            .addChild((new autoclass.Transform()).setTranslation(0.19869999587535858,0.78179997205734253,-0.05299999937415123)
                                                              .addChild((new autoclass.Shape())))
                                                            .addChild((new autoclass.HAnimSegment("Joe_l_middle_proximal")).setName("l_middle_proximal")
                                                              .addChild((new autoclass.Shape())
                                                                .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                  .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_34_768_point)))
                                                                .setAppearance((new autoclass.Appearance()))))
                                                            .addChild((new autoclass.HAnimJoint("Joe_l_middle2")).setName("l_middle2").setCenter(0.2012999951839447,0.72729998826980591,-0.050299998372793198).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [179,180,181,182])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                              .addChild((new autoclass.Transform()).setTranslation(0.2012999951839447,0.72729998826980591,-0.050299998372793198)
                                                                .addChild((new autoclass.Shape())))
                                                              .addChild((new autoclass.HAnimSegment("Joe_l_middle_middle")).setName("l_middle_middle")
                                                                .addChild((new autoclass.Shape())
                                                                  .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                    .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_35_775_point)))
                                                                  .setAppearance((new autoclass.Appearance()))))
                                                              .addChild((new autoclass.HAnimJoint("Joe_l_middle3")).setName("l_middle3").setCenter(0.20260000228881836,0.70109999179840088,-0.049400001764297485).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [183,184,185,186,187,188,189,190,191])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                                .addChild((new autoclass.Transform()).setTranslation(0.20260000228881836,0.70109999179840088,-0.049400001764297485)
                                                                  .addChild((new autoclass.Shape())))
                                                                .addChild((new autoclass.HAnimSegment("Joe_l_middle_distal")).setName("l_middle_distal")
                                                                  .addChild((new autoclass.Shape())
                                                                    .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                      .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_36_782_point)))
                                                                    .setAppearance((new autoclass.Appearance())))
                                                                  .addChild((new autoclass.HAnimSite("Joe_l_middle_distal_tip")).setName("l_middle_distal_tip").setTranslation(0.20800000429153442,0.67309999465942383,-0.049100000411272049)
                                                                    .addChild((new autoclass.Shape()))))))))
                                                        .addChild((new autoclass.HAnimJoint("Joe_l_ring0")).setName("l_ring0").setCenter(0.1956000030040741,0.80190002918243408,-0.079400002956390381).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [133,134])).setSkinCoordWeight(java.newArray("float", [1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                          .addChild((new autoclass.Transform()).setTranslation(0.1956000030040741,0.80190002918243408,-0.079400002956390381)
                                                            .addChild((new autoclass.Shape())))
                                                          .addChild((new autoclass.HAnimSegment("Joe_l_ring_metacarpal")).setName("l_ring_metacarpal")
                                                            .addChild((new autoclass.Shape())
                                                              .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_33_795_point)))
                                                              .setAppearance((new autoclass.Appearance()))))
                                                          .addChild((new autoclass.HAnimJoint("Joe_l_ring1")).setName("l_ring1").setCenter(0.1956000030040741,0.78149998188018799,-0.079400002956390381).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [158,159,164,165])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,0.5,0.5])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                            .addChild((new autoclass.Transform()).setTranslation(0.1956000030040741,0.78149998188018799,-0.079400002956390381)
                                                              .addChild((new autoclass.Shape())))
                                                            .addChild((new autoclass.HAnimSegment("Joe_l_ring_proximal")).setName("l_ring_proximal")
                                                              .addChild((new autoclass.Shape())
                                                                .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                  .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_34_802_point)))
                                                                .setAppearance((new autoclass.Appearance()))))
                                                            .addChild((new autoclass.HAnimJoint("Joe_l_ring2")).setName("l_ring2").setCenter(0.19730000197887421,0.72869998216629028,-0.077699996531009674).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [192,193,194,195])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                              .addChild((new autoclass.Transform()).setTranslation(0.19730000197887421,0.72869998216629028,-0.077699996531009674)
                                                                .addChild((new autoclass.Shape())))
                                                              .addChild((new autoclass.HAnimSegment("Joe_l_ring_middle")).setName("l_ring_middle")
                                                                .addChild((new autoclass.Shape())
                                                                  .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                    .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_35_809_point)))
                                                                  .setAppearance((new autoclass.Appearance()))))
                                                              .addChild((new autoclass.HAnimJoint("Joe_l_ring3")).setName("l_ring3").setCenter(0.19830000400543213,0.70450001955032349,-0.076700001955032349).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [196,197,198,199,200,201,202,203,204])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                                .addChild((new autoclass.Transform()).setTranslation(0.19830000400543213,0.70450001955032349,-0.076700001955032349)
                                                                  .addChild((new autoclass.Shape())))
                                                                .addChild((new autoclass.HAnimSegment("Joe_l_ring_distal")).setName("l_ring_distal")
                                                                  .addChild((new autoclass.Shape())
                                                                    .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                      .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_36_816_point)))
                                                                    .setAppearance((new autoclass.Appearance())))
                                                                  .addChild((new autoclass.HAnimSite("Joe_l_ring_distal_tip")).setName("l_ring_distal_tip").setTranslation(0.20350000262260437,0.67500001192092896,-0.075599998235702515)
                                                                    .addChild((new autoclass.Shape()))))))))
                                                        .addChild((new autoclass.HAnimJoint("Joe_l_pinky0")).setName("l_pinky0").setCenter(0.19249999523162842,0.80659997463226318,-0.10360000282526016).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [135,136,137,165])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,0.5])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                          .addChild((new autoclass.Transform()).setTranslation(0.19249999523162842,0.80659997463226318,-0.10360000282526016)
                                                            .addChild((new autoclass.Shape())))
                                                          .addChild((new autoclass.HAnimSegment("Joe_l_pinky_metacarpal")).setName("l_pinky_metacarpal")
                                                            .addChild((new autoclass.Shape())
                                                              .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_33_829_point)))
                                                              .setAppearance((new autoclass.Appearance()))))
                                                          .addChild((new autoclass.HAnimJoint("Joe_l_pinky1")).setName("l_pinky1").setCenter(0.19249999523162842,0.78659999370574951,-0.10360000282526016).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [160,161,162])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                            .addChild((new autoclass.Transform()).setTranslation(0.19249999523162842,0.78659999370574951,-0.10360000282526016)
                                                              .addChild((new autoclass.Shape())))
                                                            .addChild((new autoclass.HAnimSegment("Joe_l_pinky_proximal")).setName("l_pinky_proximal")
                                                              .addChild((new autoclass.Shape())
                                                                .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                  .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_34_836_point)))
                                                                .setAppearance((new autoclass.Appearance()))))
                                                            .addChild((new autoclass.HAnimJoint("Joe_l_pinky2")).setName("l_pinky2").setCenter(0.19380000233650208,0.74519997835159302,-0.10239999741315842).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [205,206,207,208])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                              .addChild((new autoclass.Transform()).setTranslation(0.19380000233650208,0.74519997835159302,-0.10239999741315842)
                                                                .addChild((new autoclass.Shape())))
                                                              .addChild((new autoclass.HAnimSegment("Joe_l_pinky_middle")).setName("l_pinky_middle")
                                                                .addChild((new autoclass.Shape())
                                                                  .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                    .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_35_843_point)))
                                                                  .setAppearance((new autoclass.Appearance()))))
                                                              .addChild((new autoclass.HAnimJoint("Joe_l_pinky3")).setName("l_pinky3").setCenter(0.19480000436306,0.72769999504089355,-0.10170000046491623).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [209,210,211,212,213,214,215,216,217])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                                .addChild((new autoclass.Transform()).setTranslation(0.19480000436306,0.72769999504089355,-0.10170000046491623)
                                                                  .addChild((new autoclass.Shape())))
                                                                .addChild((new autoclass.HAnimSegment("Joe_l_pinky_distal")).setName("l_pinky_distal")
                                                                  .addChild((new autoclass.Shape())
                                                                    .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                      .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_36_850_point)))
                                                                    .setAppearance((new autoclass.Appearance())))
                                                                  .addChild((new autoclass.HAnimSite("Joe_l_pinky_distal_tip")).setName("l_pinky_distal_tip").setTranslation(0.20139999687671661,0.70090001821517944,-0.10119999945163727)
                                                                    .addChild((new autoclass.Shape()))))))))))))))
                                            .addChild((new autoclass.HAnimJoint("Joe_r_sternoclavicular")).setName("r_sternoclavicular").setCenter(-0.029999999329447746,1.4600000381469727,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [10])).setSkinCoordWeight(java.newArray("float", [1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                              .addChild((new autoclass.Transform()).setTranslation(-0.029999999329447746,1.4600000381469727,0.019999999552965164)
                                                .addChild((new autoclass.Shape())))
                                              .addChild((new autoclass.HAnimSegment("Joe_r_clavicle")).setName("r_clavicle")
                                                .addChild((new autoclass.Shape())
                                                  .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                    .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_27_869_point)))
                                                  .setAppearance((new autoclass.Appearance())))
                                                .addChild((new autoclass.HAnimSite("Joe_r_clavicale")).setName("r_clavicale").setTranslation(-0.029999999329447746,1.4600000381469727,0.035000000149011612)
                                                  .addChild((new autoclass.Shape()))))
                                              .addChild((new autoclass.HAnimJoint("Joe_r_acromioclavicular")).setName("r_acromioclavicular").setCenter(-0.090000003576278687,1.4099999666213989,-0.10999999940395355).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [77,29])).setSkinCoordWeight(java.newArray("float", [1.0,0.89999997615814209])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                .addChild((new autoclass.Transform()).setTranslation(-0.090000003576278687,1.4099999666213989,-0.090000003576278687)
                                                  .addChild((new autoclass.Shape())))
                                                .addChild((new autoclass.HAnimSegment("Joe_r_scapula")).setName("r_scapula")
                                                  .addChild((new autoclass.Shape())
                                                    .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                      .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_28_878_point)))
                                                    .setAppearance((new autoclass.Appearance())))
                                                  .addChild((new autoclass.HAnimSite("Joe_r_acromion")).setName("r_acromion").setTranslation(-0.17800000309944153,1.4824999570846558,-0.0625)
                                                    .addChild((new autoclass.Shape())))
                                                  .addChild((new autoclass.HAnimSite("Joe_r_axilla_ant")).setName("r_axilla_ant").setTranslation(-0.17000000178813934,1.3799999952316284,0.0070000002160668373)
                                                    .addChild((new autoclass.Shape())))
                                                  .addChild((new autoclass.HAnimSite("Joe_r_axilla_post")).setName("r_axilla_post").setTranslation(-0.15999999642372131,1.3799999952316284,-0.12700000405311584)
                                                    .addChild((new autoclass.Shape())))
                                                  .addChild((new autoclass.Transform()).setTranslation(-0.10999999940395355,1.4270000457763672,-0.13750000298023224)
                                                    .addChild((new autoclass.Shape()))))
                                                .addChild((new autoclass.HAnimJoint("Joe_r_shoulder")).setName("r_shoulder").setCenter(-0.20000000298023224,1.440000057220459,-0.039999999105930328).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [29,30,32,78,218,219,220,221,86,88])).setSkinCoordWeight(java.newArray("float", [0.10000000149011612,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.30000001192092896,0.20000000298023224])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                  .addChild((new autoclass.Transform()).setTranslation(-0.20000000298023224,1.440000057220459,-0.039999999105930328)
                                                    .addChild((new autoclass.Shape())))
                                                  .addChild((new autoclass.HAnimSegment("Joe_r_upperarm")).setName("r_upperarm")
                                                    .addChild((new autoclass.Shape())
                                                      .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                        .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_29_893_point)))
                                                      .setAppearance((new autoclass.Appearance())))
                                                    .addChild((new autoclass.HAnimSite("Joe_r_humeral_medial_epicn")).setName("r_humeral_medial_epicn").setTranslation(-0.16500000655651093,1.1388000249862671,-0.039999999105930328)
                                                      .addChild((new autoclass.Shape())))
                                                    .addChild((new autoclass.HAnimSite("Joe_r_radiale")).setName("r_radiale").setTranslation(-0.23000000417232513,1.1330000162124634,-0.054999999701976776)
                                                      .addChild((new autoclass.Shape())))
                                                    .addChild((new autoclass.HAnimSite("Joe_r_humeral_lateral_epicn")).setName("r_humeral_lateral_epicn").setTranslation(-0.24400000274181366,1.1388000249862671,-0.039999999105930328)
                                                      .addChild((new autoclass.Shape())))
                                                    .addChild((new autoclass.Transform()).setTranslation(-0.17800000309944153,1.4824999570846558,-0.0625)
                                                      .addChild((new autoclass.Shape())))
                                                    .addChild((new autoclass.Transform()).setTranslation(-0.17000000178813934,1.3799999952316284,0.0070000002160668373)
                                                      .addChild((new autoclass.Shape())))
                                                    .addChild((new autoclass.Transform()).setTranslation(-0.15999999642372131,1.3799999952316284,-0.12700000405311584)
                                                      .addChild((new autoclass.Shape())))
                                                    .addChild((new autoclass.Transform()).setTranslation(-0.23499999940395355,1.4199999570846558,-0.0625)
                                                      .addChild((new autoclass.Shape())))
                                                    .addChild((new autoclass.Transform()).setTranslation(-0.23000000417232513,1.2350000143051147,-0.039999999105930328)
                                                      .addChild((new autoclass.Shape())))
                                                    .addChild((new autoclass.Transform()).setTranslation(-0.15999999642372131,1.2300000190734863,-0.039999999105930328)
                                                      .addChild((new autoclass.Shape())))
                                                    .addChild((new autoclass.Transform()).setTranslation(-0.20000000298023224,1.2300000190734863,-0.10499999672174454)
                                                      .addChild((new autoclass.Shape())))
                                                    .addChild((new autoclass.Transform()).setTranslation(-0.20000000298023224,1.2350000143051147,0.019999999552965164)
                                                      .addChild((new autoclass.Shape()))))
                                                  .addChild((new autoclass.HAnimJoint("Joe_r_elbow")).setName("r_elbow").setCenter(-0.20000000298023224,1.1388000249862671,-0.039999999105930328).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [33,34,35,225,226,227,228,229,231,232,233,234])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                    .addChild((new autoclass.Transform()).setTranslation(-0.20000000298023224,1.1388000249862671,-0.039999999105930328)
                                                      .addChild((new autoclass.Shape())))
                                                    .addChild((new autoclass.HAnimSegment("Joe_r_forearm")).setName("r_forearm")
                                                      .addChild((new autoclass.Shape())
                                                        .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                          .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_30_922_point)))
                                                        .setAppearance((new autoclass.Appearance())))
                                                      .addChild((new autoclass.HAnimSite("Joe_r_radial_styloid")).setName("r_radial_styloid").setTranslation(-0.20000000298023224,0.89999997615814209,-0.014999999664723873)
                                                        .addChild((new autoclass.Shape())))
                                                      .addChild((new autoclass.HAnimSite("Joe_r_olecranon")).setName("r_olecranon").setTranslation(-0.20000000298023224,1.1388000249862671,-0.079999998211860657)
                                                        .addChild((new autoclass.Shape())))
                                                      .addChild((new autoclass.Transform()).setTranslation(-0.20000000298023224,1.1388000249862671,0.013000000268220901)
                                                        .addChild((new autoclass.Shape())))
                                                      .addChild((new autoclass.Transform()).setTranslation(-0.22499999403953552,1.0,-0.0099999997764825821)
                                                        .addChild((new autoclass.Shape())))
                                                      .addChild((new autoclass.Transform()).setTranslation(-0.22499999403953552,1.0,-0.070000000298023224)
                                                        .addChild((new autoclass.Shape())))
                                                      .addChild((new autoclass.Transform()).setTranslation(-0.18500000238418579,1.0,-0.0099999997764825821)
                                                        .addChild((new autoclass.Shape())))
                                                      .addChild((new autoclass.Transform()).setTranslation(-0.18500000238418579,1.0,-0.070000000298023224)
                                                        .addChild((new autoclass.Shape()))))
                                                    .addChild((new autoclass.HAnimJoint("Joe_r_wrist")).setName("r_wrist").setCenter(-0.20000000298023224,0.88999998569488525,-0.039999999105930328).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [235,236,237,238,239,240,241,242])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                      .addChild((new autoclass.Transform()).setTranslation(-0.20000000298023224,0.88999998569488525,-0.039999999105930328)
                                                        .addChild((new autoclass.Shape())))
                                                      .addChild((new autoclass.HAnimSegment("Joe_r_hand")).setName("r_hand")
                                                        .addChild((new autoclass.Shape())
                                                          .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]))
                                                            .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_31_943_point)))
                                                          .setAppearance((new autoclass.Appearance())))
                                                        .addChild((new autoclass.HAnimSite("Joe_r_ulnar_styloid")).setName("r_ulnar_styloid").setTranslation(-0.20000000298023224,0.89999997615814209,-0.085000000894069672)
                                                          .addChild((new autoclass.Shape()))))
                                                      .addChild((new autoclass.HAnimJoint("Joe_r_thumb1")).setName("r_thumb1").setCenter(-0.20000000298023224,0.85000002384185791,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [243,244])).setSkinCoordWeight(java.newArray("float", [1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                        .addChild((new autoclass.Transform()).setTranslation(-0.20000000298023224,0.85000002384185791,0.0)
                                                          .addChild((new autoclass.Shape())))
                                                        .addChild((new autoclass.HAnimSegment("Joe_r_thumb_metacarpal")).setName("r_thumb_metacarpal")
                                                          .addChild((new autoclass.Shape())
                                                            .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                              .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_32_952_point)))
                                                            .setAppearance((new autoclass.Appearance()))))
                                                        .addChild((new autoclass.HAnimJoint("Joe_r_thumb2")).setName("r_thumb2").setCenter(-0.20000000298023224,0.81999999284744263,0.029999999329447746).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [254,255,256,257,258,259])).setSkinCoordWeight(java.newArray("float", [0.5,0.5,0.5,1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                          .addChild((new autoclass.Transform()).setTranslation(-0.20000000298023224,0.81999999284744263,0.029999999329447746)
                                                            .addChild((new autoclass.Shape())))
                                                          .addChild((new autoclass.HAnimSegment("Joe_r_thumb_proximal")).setName("r_thumb_proximal")
                                                            .addChild((new autoclass.Shape())
                                                              .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_33_959_point)))
                                                              .setAppearance((new autoclass.Appearance()))))
                                                          .addChild((new autoclass.HAnimJoint("Joe_r_thumb3")).setName("r_thumb3").setCenter(-0.20000000298023224,0.80000001192092896,0.05000000074505806).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [260,261,262,263,264,265,266,267,268])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                            .addChild((new autoclass.Transform()).setTranslation(-0.20000000298023224,0.80000001192092896,0.05000000074505806)
                                                              .addChild((new autoclass.Shape())))
                                                            .addChild((new autoclass.Transform("Thumbnail")).setTranslation(-0.20000000298023224,0.7850000262260437,0.075000002980232239)
                                                              .addChild((new autoclass.Shape())))
                                                            .addChild((new autoclass.HAnimSegment("Joe_r_thumb_distal")).setName("r_thumb_distal")
                                                              .addChild((new autoclass.Shape())
                                                                .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                  .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_34_968_point)))
                                                                .setAppearance((new autoclass.Appearance())))
                                                              .addChild((new autoclass.HAnimSite("Joe_r_thumb_distal_tip")).setName("r_thumb_distal_tip").setTranslation(-0.20000000298023224,0.77999997138977051,0.070000000298023224)
                                                                .addChild((new autoclass.Shape())))))))
                                                      .addChild((new autoclass.HAnimJoint("Joe_r_index0")).setName("r_index0").setCenter(-0.20000000298023224,0.8399999737739563,-0.014999999664723873).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [245,246])).setSkinCoordWeight(java.newArray("float", [1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                        .addChild((new autoclass.Transform()).setTranslation(-0.20000000298023224,0.8399999737739563,-0.014999999664723873)
                                                          .addChild((new autoclass.Shape())))
                                                        .addChild((new autoclass.HAnimSegment("Joe_r_index_metacarpal")).setName("r_index_metacarpal")
                                                          .addChild((new autoclass.Shape())
                                                            .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                              .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_32_980_point)))
                                                            .setAppearance((new autoclass.Appearance())))
                                                          .addChild((new autoclass.HAnimSite("Joe_r_metacarpal_pha2")).setName("r_metacarpal_pha2").setTranslation(-0.20000000298023224,0.7929999828338623,-0.004999999888241291)
                                                            .addChild((new autoclass.Shape()))))
                                                        .addChild((new autoclass.HAnimJoint("Joe_r_index1")).setName("r_index1").setCenter(-0.20000000298023224,0.7929999828338623,-0.014999999664723873).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [254,255,256,269,270,271,279])).setSkinCoordWeight(java.newArray("float", [0.5,0.5,0.5,1.0,1.0,1.0,0.5])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                          .addChild((new autoclass.Transform()).setTranslation(-0.20000000298023224,0.7929999828338623,-0.014999999664723873)
                                                            .addChild((new autoclass.Shape())))
                                                          .addChild((new autoclass.HAnimSegment("Joe_r_index_proximal")).setName("r_index_proximal")
                                                            .addChild((new autoclass.Shape())
                                                              .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_33_989_point)))
                                                              .setAppearance((new autoclass.Appearance()))))
                                                          .addChild((new autoclass.HAnimJoint("Joe_r_index2")).setName("r_index2").setCenter(-0.20000000298023224,0.74500000476837158,-0.014999999664723873).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [282,283,284,285])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                            .addChild((new autoclass.Transform()).setTranslation(-0.20000000298023224,0.74500000476837158,-0.014999999664723873)
                                                              .addChild((new autoclass.Shape())))
                                                            .addChild((new autoclass.HAnimSegment("Joe_r_index_middle")).setName("r_index_middle")
                                                              .addChild((new autoclass.Shape())
                                                                .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                  .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_34_996_point)))
                                                                .setAppearance((new autoclass.Appearance()))))
                                                            .addChild((new autoclass.HAnimJoint("Joe_r_index3")).setName("r_index3").setCenter(-0.20000000298023224,0.72000002861022949,-0.014999999664723873).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [286,287,288,289,290,291,292,293,294])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                              .addChild((new autoclass.Transform()).setTranslation(-0.20000000298023224,0.72000002861022949,-0.014999999664723873)
                                                                .addChild((new autoclass.Shape())))
                                                              .addChild((new autoclass.HAnimSegment("Joe_r_index_distal")).setName("r_index_distal")
                                                                .addChild((new autoclass.Shape())
                                                                  .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                    .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_35_1003_point)))
                                                                  .setAppearance((new autoclass.Appearance())))
                                                                .addChild((new autoclass.HAnimSite("Joe_r_index_distal_tip")).setName("r_index_distal_tip").setTranslation(-0.20000000298023224,0.69499999284744263,-0.014999999664723873)
                                                                  .addChild((new autoclass.Shape()))))))))
                                                      .addChild((new autoclass.HAnimJoint("Joe_r_middle0")).setName("r_middle0").setCenter(-0.20000000298023224,0.83499997854232788,-0.039999999105930328).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [247,248])).setSkinCoordWeight(java.newArray("float", [1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                        .addChild((new autoclass.Transform()).setTranslation(-0.20000000298023224,0.83499997854232788,-0.039999999105930328)
                                                          .addChild((new autoclass.Shape())))
                                                        .addChild((new autoclass.HAnimSegment("Joe_r_middle_metacarpal")).setName("r_middle_metacarpal")
                                                          .addChild((new autoclass.Shape())
                                                            .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                              .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_32_1016_point)))
                                                            .setAppearance((new autoclass.Appearance()))))
                                                        .addChild((new autoclass.HAnimJoint("Joe_r_middle1")).setName("r_middle1").setCenter(-0.20000000298023224,0.78799998760223389,-0.039999999105930328).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [272,273,279,280])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,0.5,0.5])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                          .addChild((new autoclass.Transform()).setTranslation(-0.20000000298023224,0.78799998760223389,-0.039999999105930328)
                                                            .addChild((new autoclass.Shape())))
                                                          .addChild((new autoclass.HAnimSegment("Joe_r_middle_proximal")).setName("r_middle_proximal")
                                                            .addChild((new autoclass.Shape())
                                                              .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_33_1023_point)))
                                                              .setAppearance((new autoclass.Appearance()))))
                                                          .addChild((new autoclass.HAnimJoint("Joe_r_middle2")).setName("r_middle2").setCenter(-0.20000000298023224,0.74000000953674316,-0.039999999105930328).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [295,296,297,298])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                            .addChild((new autoclass.Transform()).setTranslation(-0.20000000298023224,0.74000000953674316,-0.039999999105930328)
                                                              .addChild((new autoclass.Shape())))
                                                            .addChild((new autoclass.HAnimSegment("Joe_r_middle_middle")).setName("r_middle_middle")
                                                              .addChild((new autoclass.Shape())
                                                                .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                  .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_34_1030_point)))
                                                                .setAppearance((new autoclass.Appearance()))))
                                                            .addChild((new autoclass.HAnimJoint("Joe_r_middle3")).setName("r_middle3").setCenter(-0.20000000298023224,0.71420001983642578,-0.039999999105930328).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [299,300,301,302,303,304,305,306,307])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                              .addChild((new autoclass.Transform()).setTranslation(-0.20000000298023224,0.71420001983642578,-0.039999999105930328)
                                                                .addChild((new autoclass.Shape())))
                                                              .addChild((new autoclass.HAnimSegment("Joe_r_middle_distal")).setName("r_middle_distal")
                                                                .addChild((new autoclass.Shape())
                                                                  .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                    .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_35_1037_point)))
                                                                  .setAppearance((new autoclass.Appearance())))
                                                                .addChild((new autoclass.HAnimSite("Joe_r_dactylion")).setName("r_dactylion").setTranslation(-0.20000000298023224,0.68000000715255737,-0.039999999105930328)
                                                                  .addChild((new autoclass.Shape())))
                                                                .addChild((new autoclass.HAnimSite("Joe_r_middle_distal_tip")).setName("r_middle_distal_tip").setTranslation(-0.20000000298023224,0.68000000715255737,-0.039999999105930328)
                                                                  .addChild((new autoclass.Shape()))))))))
                                                      .addChild((new autoclass.HAnimJoint("Joe_r_ring0")).setName("r_ring0").setCenter(-0.20000000298023224,0.83499997854232788,-0.064999997615814209).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [249,250])).setSkinCoordWeight(java.newArray("float", [1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                        .addChild((new autoclass.Transform()).setTranslation(-0.20000000298023224,0.83499997854232788,-0.064999997615814209)
                                                          .addChild((new autoclass.Shape())))
                                                        .addChild((new autoclass.HAnimSegment("Joe_r_ring_metacarpal")).setName("r_ring_metacarpal")
                                                          .addChild((new autoclass.Shape())
                                                            .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                              .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_32_1052_point)))
                                                            .setAppearance((new autoclass.Appearance()))))
                                                        .addChild((new autoclass.HAnimJoint("Joe_r_ring1")).setName("r_ring1").setCenter(-0.20000000298023224,0.7929999828338623,-0.064999997615814209).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [274,275,280,281])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,0.5,0.5])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                          .addChild((new autoclass.Transform()).setTranslation(-0.20000000298023224,0.7929999828338623,-0.064999997615814209)
                                                            .addChild((new autoclass.Shape())))
                                                          .addChild((new autoclass.HAnimSegment("Joe_r_ring_proximal")).setName("r_ring_proximal")
                                                            .addChild((new autoclass.Shape())
                                                              .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_33_1059_point)))
                                                              .setAppearance((new autoclass.Appearance()))))
                                                          .addChild((new autoclass.HAnimJoint("Joe_r_ring2")).setName("r_ring2").setCenter(-0.20000000298023224,0.74000000953674316,-0.064999997615814209).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [308,309,310,311])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                            .addChild((new autoclass.Transform()).setTranslation(-0.20000000298023224,0.74000000953674316,-0.064999997615814209)
                                                              .addChild((new autoclass.Shape())))
                                                            .addChild((new autoclass.HAnimSegment("Joe_r_ring_middle")).setName("r_ring_middle")
                                                              .addChild((new autoclass.Shape())
                                                                .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                  .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_34_1066_point)))
                                                                .setAppearance((new autoclass.Appearance()))))
                                                            .addChild((new autoclass.HAnimJoint("Joe_r_ring3")).setName("r_ring3").setCenter(-0.20000000298023224,0.71770000457763672,-0.064999997615814209).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [312,313,314,315,316,317,318,319,320])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                              .addChild((new autoclass.Transform()).setTranslation(-0.20000000298023224,0.71770000457763672,-0.064999997615814209)
                                                                .addChild((new autoclass.Shape())))
                                                              .addChild((new autoclass.HAnimSegment("Joe_r_ring_distal")).setName("r_ring_distal")
                                                                .addChild((new autoclass.Shape())
                                                                  .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                    .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_35_1073_point)))
                                                                  .setAppearance((new autoclass.Appearance())))
                                                                .addChild((new autoclass.HAnimSite("Joe_r_ring_distal_tip")).setName("r_ring_distal_tip").setTranslation(-0.20000000298023224,0.69499999284744263,-0.064999997615814209)
                                                                  .addChild((new autoclass.Shape()))))))))
                                                      .addChild((new autoclass.HAnimJoint("Joe_r_pinky0")).setName("r_pinky0").setCenter(-0.20000000298023224,0.8399999737739563,-0.085000000894069672).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [251,252,253,281])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,0.5])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                        .addChild((new autoclass.Transform()).setTranslation(-0.20000000298023224,0.8399999737739563,-0.085000000894069672)
                                                          .addChild((new autoclass.Shape())))
                                                        .addChild((new autoclass.HAnimSegment("Joe_r_pinky_metacarpal")).setName("r_pinky_metacarpal")
                                                          .addChild((new autoclass.Shape())
                                                            .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                              .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_32_1086_point)))
                                                            .setAppearance((new autoclass.Appearance())))
                                                          .addChild((new autoclass.HAnimSite("Joe_r_metacarpal_pha5")).setName("r_metacarpal_pha5").setTranslation(-0.20000000298023224,0.79000002145767212,-0.094999998807907104)
                                                            .addChild((new autoclass.Shape()))))
                                                        .addChild((new autoclass.HAnimJoint("Joe_r_pinky1")).setName("r_pinky1").setCenter(-0.20000000298023224,0.79000002145767212,-0.085000000894069672).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [276,277,278])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                          .addChild((new autoclass.Transform()).setTranslation(-0.20000000298023224,0.79000002145767212,-0.085000000894069672)
                                                            .addChild((new autoclass.Shape())))
                                                          .addChild((new autoclass.HAnimSegment("Joe_r_pinky_proximal")).setName("r_pinky_proximal")
                                                            .addChild((new autoclass.Shape())
                                                              .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_33_1095_point)))
                                                              .setAppearance((new autoclass.Appearance()))))
                                                          .addChild((new autoclass.HAnimJoint("Joe_r_pinky2")).setName("r_pinky2").setCenter(-0.20000000298023224,0.75499999523162842,-0.085000000894069672).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [321,322,323,324])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                            .addChild((new autoclass.Transform()).setTranslation(-0.20000000298023224,0.75499999523162842,-0.085000000894069672)
                                                              .addChild((new autoclass.Shape())))
                                                            .addChild((new autoclass.HAnimSegment("Joe_r_pinky_middle")).setName("r_pinky_middle")
                                                              .addChild((new autoclass.Shape())
                                                                .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                  .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_34_1102_point)))
                                                                .setAppearance((new autoclass.Appearance()))))
                                                            .addChild((new autoclass.HAnimJoint("Joe_r_pinky3")).setName("r_pinky3").setCenter(-0.20000000298023224,0.73500001430511475,-0.090000003576278687).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setSkinCoordIndex(java.newArray("int", [325,326,327,328,329,330,331,332,333])).setSkinCoordWeight(java.newArray("float", [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                              .addChild((new autoclass.Transform()).setTranslation(-0.20000000298023224,0.73500001430511475,-0.085000000894069672)
                                                                .addChild((new autoclass.Shape())))
                                                              .addChild((new autoclass.HAnimSegment("Joe_r_pinky_distal")).setName("r_pinky_distal")
                                                                .addChild((new autoclass.Shape())
                                                                  .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1]))
                                                                    .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_35_1109_point)))
                                                                  .setAppearance((new autoclass.Appearance())))
                                                                .addChild((new autoclass.HAnimSite("Joe_r_pinky_distal_tip")).setName("r_pinky_distal_tip").setTranslation(-0.20000000298023224,0.72000002861022949,-0.085000000894069672)
                                                                  .addChild((new autoclass.Shape()))))))))))))))))))))))))))))))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
          .addChild((new autoclass.Shape())
            .setSkin((new autoclass.IndexedFaceSet()).setCreaseAngle(3.0999999046325684).setCoordIndex(this.IndexedFaceSet_7_1230_coordIndex)
              .setCoord((new autoclass.Coordinate("JoeSkinCoord")).setPoint(this.JoeSkinCoord_8_1230_point))
              .setColor((new autoclass.Color()).setColor(this.Color_8_1231_color)))
            .setAppearance((new autoclass.Appearance())
              .setTexture((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"zBlueSpiralBkg2.gif\"")))
              .setMaterial((new autoclass.Material()).setAmbientIntensity(0.60000002384185791).setDiffuseColor(0.0,0.0,0.0).setShininess(0.60000002384185791))))
          .setSkinCoord((new autoclass.Coordinate()))
          .addSkeleton((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))))))
    .addChild((new autoclass.TimeSensor("Time1")).setCycleInterval(2.8599999999999999).setLoop(true))
    .addChild((new autoclass.TimeSensor("Time2")).setCycleInterval(5.7199999999999998).setLoop(true))
    .addChild((new autoclass.OrientationInterpolator("Pitch")).setKey(java.newArray("float", [0.0,0.20000000298023224,0.40000000596046448,0.60000002384185791,0.80000001192092896,1.0])).setKeyValue(this.Pitch_3_1244_keyValue))
    .addChild((new autoclass.OrientationInterpolator("Yaw")).setKey(java.newArray("float", [0.0,0.20000000298023224,0.40000000596046448,0.60000002384185791,0.80000001192092896,1.0])).setKeyValue(this.Yaw_3_1245_keyValue))
    .addChild((new autoclass.OrientationInterpolator("Roll")).setKey(java.newArray("float", [0.0,0.20000000298023224,0.40000000596046448,0.60000002384185791,0.80000001192092896,1.0])).setKeyValue(this.Roll_3_1246_keyValue))
    .addChild((new autoclass.OrientationInterpolator("vc6Yaw")).setKey(this.vc6Yaw_3_1247_key).setKeyValue(this.vc6Yaw_3_1247_keyValue))
    .addChild((new autoclass.ROUTE()).setFromNode("Time2").setFromField("fraction_changed").setToNode("vc6Yaw").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("vc6Yaw").setFromField("value_changed").setToNode("Joe_vc6").setToField("set_rotation"))
    .addChild((new autoclass.OrientationInterpolator("r_sternoclavicularRoll")).setKey(java.newArray("float", [0.0,0.20000000298023224,0.40000000596046448,0.5,0.69999998807907104,0.80000001192092896,1.0])).setKeyValue(this.r_sternoclavicularRoll_3_1250_keyValue))
    .addChild((new autoclass.OrientationInterpolator("r_acromioclavicularRoll")).setKey(java.newArray("float", [0.0,0.20000000298023224,0.40000000596046448,0.60000002384185791,0.80000001192092896,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,-0.05000000074505806,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0]))))
    .addChild((new autoclass.OrientationInterpolator("r_shoulderRoll")).setKey(java.newArray("float", [0.0,0.20000000298023224,0.40000000596046448,0.5,0.85000002384185791,1.0])).setKeyValue(this.r_shoulderRoll_3_1252_keyValue))
    .addChild((new autoclass.OrientationInterpolator("r_ForeArmPitch")).setKey(java.newArray("float", [0.0,0.15000000596046448,0.30000001192092896,0.5,0.69999998807907104,0.89999997615814209,1.0])).setKeyValue(this.r_ForeArmPitch_3_1253_keyValue))
    .addChild((new autoclass.OrientationInterpolator("r_wristRoll")).setKey(this.r_wristRoll_3_1254_key).setKeyValue(this.r_wristRoll_3_1254_keyValue))
    .addChild((new autoclass.OrientationInterpolator("r_handPitch")).setKey(java.newArray("float", [0.0,0.20000000298023224,0.40000000596046448,0.60000002384185791,0.80000001192092896,1.0])).setKeyValue(this.r_handPitch_3_1255_keyValue))
    .addChild((new autoclass.OrientationInterpolator("l_shoulderRoll")).setKey(java.newArray("float", [0.0,0.20000000298023224,0.40000000596046448,0.5,0.85000002384185791,1.0])).setKeyValue(this.l_shoulderRoll_3_1256_keyValue))
    .addChild((new autoclass.ROUTE()).setFromNode("Time2").setFromField("fraction_changed").setToNode("r_sternoclavicularRoll").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("Time2").setFromField("fraction_changed").setToNode("r_acromioclavicularRoll").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("Time2").setFromField("fraction_changed").setToNode("r_shoulderRoll").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("Time2").setFromField("fraction_changed").setToNode("r_ForeArmPitch").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("Time2").setFromField("fraction_changed").setToNode("r_wristRoll").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("Time2").setFromField("fraction_changed").setToNode("r_handPitch").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("r_sternoclavicularRoll").setFromField("value_changed").setToNode("Joe_r_sternoclavicular").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("r_acromioclavicularRoll").setFromField("value_changed").setToNode("Joe_r_acromioclavicular").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("r_shoulderRoll").setFromField("value_changed").setToNode("Joe_r_shoulder").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("r_ForeArmPitch").setFromField("value_changed").setToNode("Joe_r_elbow").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("r_wristRoll").setFromField("value_changed").setToNode("Joe_r_wrist").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("l_shoulderRoll").setFromField("value_changed").setToNode("Joe_l_shoulder").setToField("set_rotation"))
    .addChild((new autoclass.Group())
      .addChild((new autoclass.PositionInterpolator("HUMANOIDROOT_POSITION_ANIMATOR")).setKey(this.HUMANOIDROOT_POSITION_ANIMATOR_4_1269_key).setKeyValue(this.HUMANOIDROOT_POSITION_ANIMATOR_4_1269_keyValue))
      .addChild((new autoclass.OrientationInterpolator("HUMANOIDROOT_ANIMATOR")).setKey(java.newArray("float", [0.0,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0]))))
      .addChild((new autoclass.OrientationInterpolator("L_HIP_ANIMATOR")).setKey(java.newArray("float", [0.0,0.25,0.375,0.5,0.66670000553131104,0.79170000553131104,0.91670000553131104,1.0])).setKeyValue(this.L_HIP_ANIMATOR_4_1271_keyValue))
      .addChild((new autoclass.OrientationInterpolator("L_KNEE_ANIMATOR")).setKey(java.newArray("float", [0.0,0.20829999446868896,0.375,0.5,0.66670000553131104,0.79170000553131104,0.91670000553131104,1.0])).setKeyValue(this.L_KNEE_ANIMATOR_4_1272_keyValue))
      .addChild((new autoclass.OrientationInterpolator("L_ANKLE_ANIMATOR")).setKey(java.newArray("float", [0.0,0.125,0.20829999446868896,0.375,0.66670000553131104,0.91670000553131104,1.0])).setKeyValue(this.L_ANKLE_ANIMATOR_4_1273_keyValue))
      .addChild((new autoclass.OrientationInterpolator("R_ANKLE_ANIMATOR")).setKey(this.R_ANKLE_ANIMATOR_4_1274_key).setKeyValue(this.R_ANKLE_ANIMATOR_4_1274_keyValue))
      .addChild((new autoclass.OrientationInterpolator("L_subtalar_ANIMATOR")).setKey(java.newArray("float", [0.0,0.30000001192092896,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0]))))
      .addChild((new autoclass.OrientationInterpolator("L_MIDTARSAL_ANIMATOR")).setKey(java.newArray("float", [0.0,0.5,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [0.0,0.0,1.0,0.0,1.0,0.0,0.0,-0.20000000298023224,0.0,0.0,1.0,0.0]))))
      .addChild((new autoclass.OrientationInterpolator("L_metatarsal_ANIMATOR")).setKey(java.newArray("float", [0.0,0.20000000298023224,0.40000000596046448,0.80000001192092896,1.0])).setKeyValue(this.L_metatarsal_ANIMATOR_4_1277_keyValue))
      .addChild((new autoclass.OrientationInterpolator("R_HIP_ANIMATOR")).setKey(this.R_HIP_ANIMATOR_4_1278_key).setKeyValue(this.R_HIP_ANIMATOR_4_1278_keyValue))
      .addChild((new autoclass.OrientationInterpolator("R_KNEE_ANIMATOR")).setKey(this.R_KNEE_ANIMATOR_4_1279_key).setKeyValue(this.R_KNEE_ANIMATOR_4_1279_keyValue))
      .addChild((new autoclass.OrientationInterpolator("R_subtalar_ANIMATOR")).setKey(this.R_subtalar_ANIMATOR_4_1280_key).setKeyValue(this.R_subtalar_ANIMATOR_4_1280_keyValue))
      .addChild((new autoclass.OrientationInterpolator("R_MIDTARSAL_ANIMATOR")).setKey(java.newArray("float", [0.0,0.2199999988079071,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [1.0,0.0,0.0,-0.20000000298023224,0.0,0.0,1.0,0.0,1.0,0.0,0.0,-0.20000000298023224]))))
      .addChild((new autoclass.OrientationInterpolator("R_metatarsal_ANIMATOR")).setKey(java.newArray("float", [0.0,0.20000000298023224,0.40000000596046448,0.80000001192092896,1.0])).setKeyValue(this.R_metatarsal_ANIMATOR_4_1282_keyValue))
      .addChild((new autoclass.OrientationInterpolator("VL5_ANIMATOR")).setKey(java.newArray("float", [0.0,0.20829999446868896,0.375,0.75,0.83329999446868896,1.0])).setKeyValue(this.VL5_ANIMATOR_4_1283_keyValue))
      .addChild((new autoclass.OrientationInterpolator("SKULLBASE_ANIMATOR")).setKey(this.SKULLBASE_ANIMATOR_4_1284_key).setKeyValue(this.SKULLBASE_ANIMATOR_4_1284_keyValue))
      .addChild((new autoclass.OrientationInterpolator("L_SHOULDER_ANIMATOR")).setKey(java.newArray("float", [0.0,0.375,0.91670000553131104,1.0])).setKeyValue(this.L_SHOULDER_ANIMATOR_4_1285_keyValue))
      .addChild((new autoclass.OrientationInterpolator("L_ELBOW_ANIMATOR")).setKey(java.newArray("float", [0.0,0.375,0.91670000553131104,1.0])).setKeyValue(this.L_ELBOW_ANIMATOR_4_1286_keyValue))
      .addChild((new autoclass.OrientationInterpolator("L_WRIST_ANIMATOR")).setKey(java.newArray("float", [0.0,0.375,0.91670000553131104,1.0])).setKeyValue(this.L_WRIST_ANIMATOR_4_1287_keyValue))
      .addChild((new autoclass.OrientationInterpolator("R_SHOULDER_ANIMATOR")).setKey(java.newArray("float", [0.0,0.375,0.91670000553131104,1.0])).setKeyValue(this.R_SHOULDER_ANIMATOR_4_1288_keyValue))
      .addChild((new autoclass.OrientationInterpolator("R_ELBOW_ANIMATOR")).setKey(java.newArray("float", [0.0,0.375,0.91670000553131104,1.0])).setKeyValue(this.R_ELBOW_ANIMATOR_4_1289_keyValue))
      .addChild((new autoclass.OrientationInterpolator("R_WRIST_ANIMATOR")).setKey(java.newArray("float", [0.0,0.375,0.91670000553131104,1.0])).setKeyValue(this.R_WRIST_ANIMATOR_4_1290_keyValue)))
    .addChild((new autoclass.ROUTE()).setFromNode("Time1").setFromField("fraction_changed").setToNode("HUMANOIDROOT_POSITION_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("Time1").setFromField("fraction_changed").setToNode("HUMANOIDROOT_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("Time1").setFromField("fraction_changed").setToNode("L_HIP_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("Time1").setFromField("fraction_changed").setToNode("L_KNEE_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("Time1").setFromField("fraction_changed").setToNode("L_ANKLE_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("Time1").setFromField("fraction_changed").setToNode("L_subtalar_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("Time1").setFromField("fraction_changed").setToNode("L_MIDTARSAL_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("Time1").setFromField("fraction_changed").setToNode("L_metatarsal_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("Time1").setFromField("fraction_changed").setToNode("R_HIP_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("Time1").setFromField("fraction_changed").setToNode("R_KNEE_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("Time1").setFromField("fraction_changed").setToNode("R_ANKLE_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("Time1").setFromField("fraction_changed").setToNode("R_subtalar_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("Time1").setFromField("fraction_changed").setToNode("R_MIDTARSAL_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("Time1").setFromField("fraction_changed").setToNode("R_metatarsal_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("Time1").setFromField("fraction_changed").setToNode("VL5_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("Time1").setFromField("fraction_changed").setToNode("SKULLBASE_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("Time1").setFromField("fraction_changed").setToNode("L_SHOULDER_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("Time1").setFromField("fraction_changed").setToNode("L_ELBOW_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("Time1").setFromField("fraction_changed").setToNode("L_WRIST_ANIMATOR").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("HUMANOIDROOT_POSITION_ANIMATOR").setFromField("value_changed").setToNode("Joe_HumanoidRoot").setToField("set_translation"))
    .addChild((new autoclass.ROUTE()).setFromNode("HUMANOIDROOT_ANIMATOR").setFromField("value_changed").setToNode("Joe_HumanoidRoot").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("L_HIP_ANIMATOR").setFromField("value_changed").setToNode("Joe_l_hip").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("L_KNEE_ANIMATOR").setFromField("value_changed").setToNode("Joe_l_knee").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("L_ANKLE_ANIMATOR").setFromField("value_changed").setToNode("Joe_l_ankle").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("L_MIDTARSAL_ANIMATOR").setFromField("value_changed").setToNode("Joe_l_midtarsal").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("L_subtalar_ANIMATOR").setFromField("value_changed").setToNode("Joe_l_subtalar").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("L_metatarsal_ANIMATOR").setFromField("value_changed").setToNode("Joe_l_metatarsal").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("R_HIP_ANIMATOR").setFromField("value_changed").setToNode("Joe_r_hip").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("R_KNEE_ANIMATOR").setFromField("value_changed").setToNode("Joe_r_knee").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("R_ANKLE_ANIMATOR").setFromField("value_changed").setToNode("Joe_r_ankle").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("R_subtalar_ANIMATOR").setFromField("value_changed").setToNode("Joe_r_subtalar").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("R_MIDTARSAL_ANIMATOR").setFromField("value_changed").setToNode("Joe_r_midtarsal").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("R_metatarsal_ANIMATOR").setFromField("value_changed").setToNode("Joe_r_metatarsal").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("VL5_ANIMATOR").setFromField("value_changed").setToNode("Joe_vl5").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("SKULLBASE_ANIMATOR").setFromField("value_changed").setToNode("Joe_skullbase").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("L_SHOULDER_ANIMATOR").setFromField("value_changed").setToNode("Joe_l_shoulder").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("L_ELBOW_ANIMATOR").setFromField("value_changed").setToNode("Joe_l_elbow").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("L_WRIST_ANIMATOR").setFromField("value_changed").setToNode("Joe_l_wrist").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("R_SHOULDER_ANIMATOR").setFromField("value_changed").setToNode("Joe_r_shoulder").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("R_ELBOW_ANIMATOR").setFromField("value_changed").setToNode("Joe_r_elbow").setToField("set_rotation"))
    .addChild((new autoclass.ROUTE()).setFromNode("R_WRIST_ANIMATOR").setFromField("value_changed").setToNode("Joe_r_wrist").setToField("set_rotation"))
    .addChild((new autoclass.NavigationInfo()).setAvatarSize(java.newArray("float", [0.25,1.6000000238418579,0.75])).setHeadlight(false))
    .addChild((new autoclass.Viewpoint()).setDescription("Front Up View").setOrientation(-1.0,-1.0,0.0,0.55000001192092896).setPosition(-1.0,2.0,2.5))
    .addChild((new autoclass.Viewpoint()).setDescription("From Left View").setOrientation(0.30000001192092896,1.0,0.0,-1.5700000524520874).setPosition(-2.5,1.5,0.0))
    .addChild((new autoclass.Viewpoint()).setDescription("Front Mid View").setPosition(0.0,0.5,1.25))
    .addChild((new autoclass.Viewpoint()).setDescription("Front Feet View").setPosition(0.0,0.0,0.75))
    .addChild((new autoclass.Viewpoint()).setDescription("From Right View").setOrientation(0.0,1.0,0.0,1.5700000524520874).setPosition(1.0,1.0,0.0))
    .addChild((new autoclass.Viewpoint()).setDescription("Front Head View").setPosition(0.0,1.6499999761581421,0.75))
    .addChild((new autoclass.Viewpoint()).setDescription("Front Mid View").setPosition(0.0,1.0,1.75))
    .addChild((new autoclass.Viewpoint()).setDescription("Rear View").setOrientation(0.0,1.0,0.0,3.1400001049041748).setPosition(0.0,1.5,-4.0))
    .addChild((new autoclass.Viewpoint()).setDescription("Top View").setOrientation(1.0,0.0,0.0,-1.5700000524520874).setPosition(0.0,4.0,0.0))
    .addChild((new autoclass.Viewpoint()).setDescription("Bottom View").setOrientation(1.0,0.0,0.0,1.5700000524520874).setPosition(0.0,-4.0,0.0))
    .addChild((new autoclass.Background()).setGroundAngle(java.newArray("float", [1.5700000524520874])).setGroundColor(new autoclass.MFColor(java.newArray("float", [0.0,0.10000000149011612,0.0,0.0,0.10000000149011612,0.0]))).setSkyColor(new autoclass.MFColor(java.newArray("float", [0.0,0.0,0.10000000149011612]))))
    .addChild((new autoclass.Transform("cordsysfloor")).setScale(0.17499999701976776,0.17499999701976776,0.17499999701976776)
      .addChild((new autoclass.Inline()).setUrl(new autoclass.MFString("\"JointCoordinateAxes.x3dv\"")))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return JoeSkeletonSiteSkinSaluteWalk model
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
		var testObject = new JoeSkeletonSiteSkinSaluteWalk();
		console.log ("JoeSkeletonSiteSkinSaluteWalk execution self-validation test results: " + testObject.validateSelf());
	}
}
new JoeSkeletonSiteSkinSaluteWalk().main();