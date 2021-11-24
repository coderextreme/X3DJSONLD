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
 * <p> This example tests various color combination capabilities, and also demonstrating that filtering (negative colors) are not supported in the X3D/VRML color model. Discussion follows. There are 2 ways to combine colors: Additive (e.g. a TV screen, overlapping spotlights, or pointillist art), for example [red + green = yellow] [1 0 0 + 0 1 0 = 1 1 0]. Subtractive (e.g. mixing paints or stacking filters), for example [white background + yellow filter + cyan filter = green] [1 1 1 + 0 0 -1 + -1 0 0 = 0 1 0]. </p>
 <p> Related links: <a href="../../../development/AdditiveSubtractiveLight.java">AdditiveSubtractiveLight.java</a> source, <a href="../../../development/AdditiveSubtractiveLightIndex.html" target="_top">AdditiveSubtractiveLight catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/AdditiveSubtractiveLight.x3d">AdditiveSubtractiveLight.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> This example tests various color combination capabilities, and also demonstrating that filtering (negative colors) are not supported in the X3D/VRML color model. Discussion follows. There are 2 ways to combine colors: Additive (e.g. a TV screen, overlapping spotlights, or pointillist art), for example [red + green = yellow] [1 0 0 + 0 1 0 = 1 1 0]. Subtractive (e.g. mixing paints or stacking filters), for example [white background + yellow filter + cyan filter = green] [1 1 1 + 0 0 -1 + -1 0 0 = 0 1 0]. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Miriam English </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Xeena VRML importer, X3D-Edit 3.1, <a href="https://www.web3d.org/x3d/content/README.X3D-Edit.html" target="_blank">https://www.web3d.org/x3d/content/README.X3D-Edit.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Don Brutzman and MV4205 class </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 6 May 2003 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 6 May 2003 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../development/additive-subtractiveLight2.7May2003.x3d">additive-subtractiveLight2.7May2003.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.rgbworld.com/color.html" target="_blank">http://www.rgbworld.com/color.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../development/AdditiveSubtractiveLight.png">AdditiveSubtractiveLight.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> additive subtractive light examples </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/AdditiveSubtractiveLight.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/AdditiveSubtractiveLight.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Vrml97ToX3dNist, <a href="http://ovrt.nist.gov/v2_x3d.html" target="_blank">http://ovrt.nist.gov/v2_x3d.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../development/../license.html">../license.html</a> </td>
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

	* @author Miriam English
 */

function AdditiveSubtractiveLight
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
AdditiveSubtractiveLight.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: ElevationGrid height field, scene-graph level=6, element #24, 400 total numbers */
	this.ElevationGrid_6_24_height = new autoclass.MFFloat(java.newArray("float", [0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0]));

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=7, element #116, 88 total numbers */
	this.IndexedFaceSet_7_116_coordIndex = new autoclass.MFInt32(java.newArray("int", [3,4,5,-1,3,5,2,-1,2,5,1,-1,1,5,0,-1,0,5,13,-1,13,5,14,-1,14,5,15,-1,15,5,16,-1,16,5,17,-1,17,5,18,-1,18,5,19,-1,19,5,20,-1,20,5,21,-1,21,5,22,-1,12,23,22,-1,12,5,11,-1,11,5,10,-1,10,5,9,-1,9,5,8,-1,8,5,7,-1,5,6,7,-1,5,12,22,-1]));

	/** Large attribute array: Coordinate point field, scene-graph level=8, element #116, 72 total numbers made up of 24 3-tuple values */
	this.Coordinate_8_116_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [0.0013,0.0,-0.5314,-0.1193,0.0,-0.5813,-0.2487,0.0,-0.5983,-0.3781,0.0,-0.5813,-0.4987,0.0,-0.5314,-0.6023,0.0,-0.4519,-0.6818,0.0,-0.3483,-0.7317,0.0,-0.2277,-0.7487,0.0,-0.0983,-0.7317,0.0,0.0311])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.6818,0.0,0.1517,-0.6023,0.0,0.2552,-0.4987,0.0,0.3347,0.0029,0.0,-0.5301,-0.099,0.0,-0.4519,-0.1785,0.0,-0.3483,-0.2284,0.0,-0.2277,-0.2455,0.0,-0.0983,-0.2453,0.0,-0.0967,-0.3478,0.0,-0.018])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.4272,0.0,0.0855,-0.4772,0.0,0.2061,-0.4942,0.0,0.3355,-0.4941,0.0,0.3366])));

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=7, element #122, 80 total numbers */
	this.IndexedFaceSet_7_122_coordIndex = new autoclass.MFInt32(java.newArray("int", [16,4,17,-1,17,6,18,-1,18,12,19,-1,19,12,20,-1,12,21,20,-1,12,18,13,-1,13,7,14,-1,8,15,14,-1,8,14,7,-1,7,18,6,-1,6,17,5,-1,5,17,4,-1,4,16,3,-1,3,16,2,-1,2,16,1,-1,1,16,0,-1,0,16,11,-1,11,16,10,-1,16,9,10,-1,18,7,13,-1]));

	/** Large attribute array: Coordinate point field, scene-graph level=8, element #122, 66 total numbers made up of 22 3-tuple values */
	this.Coordinate_8_122_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [0.7545,0.0,-0.0983,0.7375,0.0,-0.2277,0.6875,0.0,-0.3483,0.6081,0.0,-0.4519,0.5045,0.0,-0.5314,0.3839,0.0,-0.5813,0.2545,0.0,-0.5983,0.1251,0.0,-0.5813,0.0045,0.0,-0.5314,0.6081,0.0,0.2552])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.6875,0.0,0.1517,0.7375,0.0,0.0311,0.2342,0.0,-0.2277,0.1843,0.0,-0.3483,0.1048,0.0,-0.4519,0.0029,0.0,-0.5301,0.5056,0.0,0.3339,0.4887,0.0,0.2061,0.4388,0.0,0.0855,0.3593,0.0,-0.018])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.2558,0.0,-0.0975,0.2511,0.0,-0.0994])));

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=7, element #128, 88 total numbers */
	this.IndexedFaceSet_7_128_coordIndex = new autoclass.MFInt32(java.newArray("int", [12,8,13,-1,13,10,14,-1,14,19,15,-1,15,18,16,-1,18,17,16,-1,18,15,19,-1,19,14,20,-1,20,11,21,-1,21,0,22,-1,0,23,22,-1,0,21,11,-1,11,14,10,-1,10,13,9,-1,6,12,5,-1,5,12,4,-1,4,12,3,-1,3,12,2,-1,12,1,2,-1,7,8,12,-1,6,7,12,-1,8,9,13,-1,14,11,20,-1]));

	/** Large attribute array: Coordinate point field, scene-graph level=8, element #128, 72 total numbers made up of 24 3-tuple values */
	this.Coordinate_8_128_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [0.5058,0.0,0.3355,-0.4772,0.0,0.4649,-0.4272,0.0,0.5855,-0.3478,0.0,0.6891,-0.2442,0.0,0.7685,-0.1236,0.0,0.8185,0.0058,0.0,0.8355,0.1352,0.0,0.8185,0.2558,0.0,0.7685,0.3593,0.0,0.6891])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.4388,0.0,0.5855,0.4887,0.0,0.4649,-0.4941,0.0,0.3366,-0.3781,0.0,0.3846,-0.2487,0.0,0.4017,-0.1193,0.0,0.3846,0.0013,0.0,0.3347,0.0029,0.0,0.3334,0.0045,0.0,0.3347,0.1251,0.0,0.3846])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.2545,0.0,0.4017,0.3839,0.0,0.3846,0.5045,0.0,0.3347,0.5056,0.0,0.3339])));

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=7, element #134, 56 total numbers */
	this.IndexedFaceSet_7_134_coordIndex = new autoclass.MFInt32(java.newArray("int", [9,8,7,-1,9,7,15,-1,15,7,12,-1,12,7,13,-1,13,7,14,-1,14,7,11,-1,4,10,11,-1,4,7,3,-1,3,7,2,-1,2,7,1,-1,1,7,0,-1,0,7,5,-1,7,6,5,-1,7,4,11,-1]));

	/** Large attribute array: Coordinate point field, scene-graph level=8, element #134, 48 total numbers made up of 16 3-tuple values */
	this.Coordinate_8_134_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [0.5056,0.0,0.3339,0.4887,0.0,0.2061,0.4388,0.0,0.0855,0.3593,0.0,-0.018,0.2558,0.0,-0.0975,0.5045,0.0,0.3347,0.3839,0.0,0.3846,0.2545,0.0,0.4017,0.1251,0.0,0.3846,0.0045,0.0,0.3347])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.2511,0.0,-0.0994,0.2513,0.0,-0.0983,0.1048,0.0,0.2552,0.1843,0.0,0.1517,0.2342,0.0,0.0311,0.0029,0.0,0.3334])));

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=7, element #140, 48 total numbers */
	this.IndexedFaceSet_7_140_coordIndex = new autoclass.MFInt32(java.newArray("int", [8,1,9,-1,9,2,10,-1,10,2,11,-1,3,12,11,-1,3,11,2,-1,2,9,1,-1,1,8,0,-1,0,8,13,-1,13,8,7,-1,7,8,6,-1,6,8,5,-1,8,4,5,-1]));

	/** Large attribute array: Coordinate point field, scene-graph level=8, element #140, 42 total numbers made up of 14 3-tuple values */
	this.Coordinate_8_140_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.3781,0.0,0.3846,-0.2487,0.0,0.4017,-0.1193,0.0,0.3846,0.0013,0.0,0.3347,-0.3478,0.0,-0.018,-0.4272,0.0,0.0855,-0.4772,0.0,0.2061,-0.4942,0.0,0.3355,-0.2453,0.0,-0.0967,-0.2284,0.0,0.0311])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.1785,0.0,0.1517,-0.099,0.0,0.2552,0.0029,0.0,0.3334,-0.4941,0.0,0.3366])));

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=7, element #146, 48 total numbers */
	this.IndexedFaceSet_7_146_coordIndex = new autoclass.MFInt32(java.newArray("int", [1,2,11,-1,1,11,0,-1,0,11,12,-1,12,11,7,-1,7,11,8,-1,8,11,9,-1,9,11,10,-1,10,11,13,-1,13,11,6,-1,6,11,5,-1,5,11,4,-1,11,3,4,-1]));

	/** Large attribute array: Coordinate point field, scene-graph level=8, element #146, 42 total numbers made up of 14 3-tuple values */
	this.Coordinate_8_146_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [0.2342,0.0,-0.2277,0.1843,0.0,-0.3483,0.1048,0.0,-0.4519,-0.099,0.0,-0.4519,-0.1785,0.0,-0.3483,-0.2284,0.0,-0.2277,-0.2455,0.0,-0.0983,0.1352,0.0,-0.1475,0.0058,0.0,-0.1645,-0.1236,0.0,-0.1475])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.2442,0.0,-0.0975,0.0029,0.0,-0.5301,0.2511,0.0,-0.0994,-0.2453,0.0,-0.0967])));

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=7, element #152, 48 total numbers */
	this.IndexedFaceSet_7_152_coordIndex = new autoclass.MFInt32(java.newArray("int", [5,6,7,-1,5,7,4,-1,4,7,13,-1,13,7,11,-1,11,7,10,-1,10,7,9,-1,9,7,8,-1,8,7,12,-1,12,7,0,-1,0,7,3,-1,3,7,2,-1,7,1,2,-1]));

	/** Large attribute array: Coordinate point field, scene-graph level=8, element #152, 42 total numbers made up of 14 3-tuple values */
	this.Coordinate_8_152_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [0.2513,0.0,-0.0983,0.1048,0.0,0.2552,0.1843,0.0,0.1517,0.2342,0.0,0.0311,-0.2284,0.0,0.0311,-0.1785,0.0,0.1517,-0.099,0.0,0.2552,0.0029,0.0,0.3334,0.1352,0.0,-0.1475,0.0058,0.0,-0.1645])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.1236,0.0,-0.1475,-0.2442,0.0,-0.0975,0.2511,0.0,-0.0994,-0.2453,0.0,-0.0967])));
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("AdditiveSubtractiveLight.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("This example tests various color combination capabilities, and also demonstrating that filtering (negative colors) are not supported in the X3D/VRML color model. Discussion follows. There are 2 ways to combine colors: Additive (e.g. a TV screen, overlapping spotlights, or pointillist art), for example [red + green = yellow] [1 0 0 + 0 1 0 = 1 1 0]. Subtractive (e.g. mixing paints or stacking filters), for example [white background + yellow filter + cyan filter = green] [1 1 1 + 0 0 -1 + -1 0 0 = 0 1 0]."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Miriam English"))
    .addMeta((new autoclass.meta()).setName("translator").setContent("Xeena VRML importer, X3D-Edit 3.1, https://www.web3d.org/x3d/content/README.X3D-Edit.html"))
    .addMeta((new autoclass.meta()).setName("translator").setContent("Don Brutzman and MV4205 class"))
    .addMeta((new autoclass.meta()).setName("created").setContent("6 May 2003"))
    .addMeta((new autoclass.meta()).setName("translated").setContent("6 May 2003"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("additive-subtractiveLight2.7May2003.x3d"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.rgbworld.com/color.html"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("AdditiveSubtractiveLight.png"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("additive subtractive light examples"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/AdditiveSubtractiveLight.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("AdditiveSubtractiveLight.x3d"))
    .addChild((new autoclass.NavigationInfo()).setType(new autoclass.MFString("\"EXAMINE\"")).setHeadlight(false))
    .addChild((new autoclass.Viewpoint()).setDescription("entry").setPosition(0.0,-1.0,14.0).setJump(false))
    .addChild((new autoclass.Viewpoint()).setDescription("side").setPosition(-5.0,-1.0,3.0).setOrientation(0.0,1.0,0.0,-0.7).setJump(false))
    .addChild((new autoclass.Transform()).setTranslation(-6.2,0.0,-1.0)
      .addChild((new autoclass.Transform()).setTranslation(-3.0,2.8,0.0).setRotation(1.0,0.0,0.0,1.57)
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setAmbientIntensity(1.0).setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry((new autoclass.ElevationGrid()).setXSpacing(0.3).setZSpacing(0.3).setXDimension(20).setZDimension(20).setHeight(this.ElevationGrid_6_24_height))))
      .addChild((new autoclass.Transform()).setTranslation(0.0,-4.1,0.0)
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setAmbientIntensity(0.0).setEmissiveColor(0.5,0.5,0.5).setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"additive\" \"(correct)\""))
            .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\""))))))
      .addChild((new autoclass.Transform()).setTranslation(0.0,0.6,0.3)
        .addChild((new autoclass.Transform()).setTranslation(-0.6,0.0,0.0)
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setAmbientIntensity(0.0).setDiffuseColor(0.0,0.0,0.0).setEmissiveColor(1.0,0.0,0.0)))
            .setGeometry((new autoclass.Sphere()).setRadius(0.2)))
          .addChild((new autoclass.PointLight()).setAttenuation(0.0,1.0,0.0).setAmbientIntensity(0.5).setColor(1.0,0.0,0.0)))
        .addChild((new autoclass.Transform()).setTranslation(0.0,-1.2,0.0)
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setAmbientIntensity(0.0).setDiffuseColor(0.0,0.0,0.0).setEmissiveColor(0.0,1.0,0.0)))
            .setGeometry((new autoclass.Sphere()).setRadius(0.2)))
          .addChild((new autoclass.PointLight()).setAttenuation(0.0,1.0,0.0).setColor(0.0,1.0,0.0).setAmbientIntensity(0.5)))
        .addChild((new autoclass.Transform()).setTranslation(0.6,0.0,0.0)
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setAmbientIntensity(0.0).setDiffuseColor(0.0,0.0,0.0).setEmissiveColor(0.0,0.0,1.0)))
            .setGeometry((new autoclass.Sphere()).setRadius(0.2)))
          .addChild((new autoclass.PointLight()).setColor(0.0,0.0,1.0).setAttenuation(0.0,1.0,0.0).setAmbientIntensity(0.5)))))
    .addChild((new autoclass.Transform()).setTranslation(3.0,-0.1,-1.0)
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setAmbientIntensity(0.0).setDiffuseColor(1.0,1.0,1.0).setEmissiveColor(1.0,1.0,1.0)))
        .setGeometry((new autoclass.Box()).setSize(13.0,6.0,0.01)))
      .addChild((new autoclass.Transform()).setTranslation(0.0,-4.1,0.1)
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setAmbientIntensity(0.0).setEmissiveColor(0.5,0.5,0.5).setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"subtractive\" \"(incorrect)\""))
            .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")))))))
    .addChild((new autoclass.Transform()).setTranslation(-1.0,1.0,0.0)
      .addChild((new autoclass.Transform()).setTranslation(0.0,-3.0,0.0)
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setAmbientIntensity(0.0).setDiffuseColor(0.0,0.0,0.0)))
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"diffuse only\""))
            .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(0.6)))))
      .addChild((new autoclass.Transform()).setTranslation(-0.5,0.2,0.0).setRotation(1.0,0.0,0.0,1.57)
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setAmbientIntensity(0.0).setShininess(0.0).setDiffuseColor(0.0,1.0,1.0).setTransparency(0.5)))
          .setGeometry((new autoclass.Cylinder()).setHeight(0.01))))
      .addChild((new autoclass.Transform()).setTranslation(0.5,0.2,-0.01).setRotation(1.0,0.0,0.0,1.57)
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setAmbientIntensity(0.0).setShininess(0.0).setTransparency(0.5).setDiffuseColor(1.0,0.0,1.0)))
          .setGeometry((new autoclass.Cylinder()).setHeight(0.01))))
      .addChild((new autoclass.Transform()).setTranslation(0.0,-0.68,0.0).setRotation(1.0,0.0,0.0,1.57)
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setAmbientIntensity(0.0).setShininess(0.0).setTransparency(0.5).setDiffuseColor(1.0,1.0,0.0)))
          .setGeometry((new autoclass.Cylinder()).setHeight(0.01)))))
    .addChild((new autoclass.Transform()).setTranslation(2.5,1.0,0.0)
      .addChild((new autoclass.Transform()).setTranslation(0.0,-3.0,0.0)
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setAmbientIntensity(0.0).setDiffuseColor(0.0,0.0,0.0)))
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"emissive only\""))
            .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(0.6)))))
      .addChild((new autoclass.Transform()).setTranslation(-0.5,0.2,0.0).setRotation(1.0,0.0,0.0,1.57)
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setAmbientIntensity(0.0).setShininess(0.0).setDiffuseColor(0.0,0.0,0.0).setEmissiveColor(0.0,1.0,1.0).setTransparency(0.5)))
          .setGeometry((new autoclass.Cylinder()).setHeight(0.01))))
      .addChild((new autoclass.Transform()).setTranslation(0.5,0.2,-0.01).setRotation(1.0,0.0,0.0,1.57)
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setAmbientIntensity(0.0).setShininess(0.0).setDiffuseColor(0.0,0.0,0.0).setTransparency(0.5).setEmissiveColor(1.0,0.0,1.0)))
          .setGeometry((new autoclass.Cylinder()).setHeight(0.01))))
      .addChild((new autoclass.Transform()).setTranslation(0.0,-0.68,0.0).setRotation(1.0,0.0,0.0,1.57)
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setAmbientIntensity(0.0).setShininess(0.0).setDiffuseColor(0.0,0.0,0.0).setTransparency(0.5).setEmissiveColor(1.0,1.0,0.0)))
          .setGeometry((new autoclass.Cylinder()).setHeight(0.01)))))
    .addChild((new autoclass.Transform()).setTranslation(6.0,1.0,0.0)
      .addChild((new autoclass.Transform()).setTranslation(0.0,-2.5,0.0)
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setAmbientIntensity(0.0).setDiffuseColor(0.0,0.0,0.0)))
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"how it\" \"should look\" \"(faked)\""))
            .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(0.6)))))
      .addChild((new autoclass.Transform()).setRotation(1.0,0.0,0.0,1.57).setScale(2.0,2.0,2.0)
        .addChild((new autoclass.Transform())
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setAmbientIntensity(0.0).setShininess(0.0).setDiffuseColor(0.0,1.0,1.0).setEmissiveColor(0.0,1.0,1.0)))
            .setGeometry((new autoclass.IndexedFaceSet()).setCoordIndex(this.IndexedFaceSet_7_116_coordIndex)
              .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_8_116_point)))))
        .addChild((new autoclass.Transform())
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setAmbientIntensity(0.0).setShininess(0.0).setDiffuseColor(1.0,0.0,1.0).setEmissiveColor(1.0,0.0,1.0)))
            .setGeometry((new autoclass.IndexedFaceSet()).setCoordIndex(this.IndexedFaceSet_7_122_coordIndex)
              .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_8_122_point)))))
        .addChild((new autoclass.Transform())
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setAmbientIntensity(0.0).setShininess(0.0).setDiffuseColor(1.0,1.0,0.0).setEmissiveColor(1.0,1.0,0.0)))
            .setGeometry((new autoclass.IndexedFaceSet()).setCoordIndex(this.IndexedFaceSet_7_128_coordIndex)
              .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_8_128_point)))))
        .addChild((new autoclass.Transform())
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setAmbientIntensity(0.0).setShininess(0.0).setDiffuseColor(1.0,0.0,0.0).setEmissiveColor(1.0,0.0,0.0)))
            .setGeometry((new autoclass.IndexedFaceSet()).setCoordIndex(this.IndexedFaceSet_7_134_coordIndex)
              .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_8_134_point)))))
        .addChild((new autoclass.Transform())
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setAmbientIntensity(0.0).setShininess(0.0).setDiffuseColor(0.0,1.0,0.0).setEmissiveColor(0.0,1.0,0.0)))
            .setGeometry((new autoclass.IndexedFaceSet()).setCoordIndex(this.IndexedFaceSet_7_140_coordIndex)
              .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_8_140_point)))))
        .addChild((new autoclass.Transform())
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setAmbientIntensity(0.0).setShininess(0.0).setDiffuseColor(0.0,0.0,1.0).setEmissiveColor(0.0,0.0,1.0)))
            .setGeometry((new autoclass.IndexedFaceSet()).setCoordIndex(this.IndexedFaceSet_7_146_coordIndex)
              .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_8_146_point)))))
        .addChild((new autoclass.Transform())
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setAmbientIntensity(0.0).setShininess(0.0).setDiffuseColor(0.0,0.0,0.0)))
            .setGeometry((new autoclass.IndexedFaceSet()).setCoordIndex(this.IndexedFaceSet_7_152_coordIndex)
              .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_8_152_point))))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return AdditiveSubtractiveLight model
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
		var testObject = new AdditiveSubtractiveLight();
		console.log ("AdditiveSubtractiveLight execution self-validation test results: " + testObject.validateSelf());
	}
}
new AdditiveSubtractiveLight().main();
process.exit(0);