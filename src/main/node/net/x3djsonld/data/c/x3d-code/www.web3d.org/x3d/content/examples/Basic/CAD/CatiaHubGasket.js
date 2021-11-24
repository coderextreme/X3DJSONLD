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
 * <p> Provide a Gasket part for use by CatiaHubAssemblyInline using CADAssembly and Inline nodes. </p>
 <p> Related links: <a href="../../../CAD/CatiaHubGasket.java">CatiaHubGasket.java</a> source, <a href="../../../CAD/CatiaHubGasketIndex.html" target="_top">CatiaHubGasket catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../CAD/CatiaHubGasket.x3d">CatiaHubGasket.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Provide a Gasket part for use by CatiaHubAssemblyInline using CADAssembly and Inline nodes. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Hyokwang Lee, PartDB Co., Ltd. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Xj3D, <a href="http://www.xj3d.org" target="_blank">http://www.xj3d.org</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 25 July 2012 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 28 November 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-X3DAbstractSpecification/Part01/components/CADGeometry.html" target="_blank">https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-X3DAbstractSpecification/Part01/components/CADGeometry.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D CAD CADInterchange profile </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> CATIA V5 R18 and PartDB Converter with Xj3D </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubGasket.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubGasket.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../CAD/../license.html">../license.html</a> </td>
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

	* @author Hyokwang Lee, PartDB Co., Ltd.
 */

function CatiaHubGasket
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
CatiaHubGasket.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=9, element #27, 136 total numbers */
	this.IndexedFaceSet_9_27_coordIndex = new autoclass.MFInt32(java.newArray("int", [0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1,28,29,30,-1,29,31,30,-1,30,31,32,-1,31,33,32,-1,32,33,34,-1,33,35,34,-1]));

	/** Large attribute array: Coordinate point field, scene-graph level=10, element #27, 108 total numbers made up of 36 3-tuple values */
	this.Coordinate_10_27_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [-45.0,0.0,0.0,-45.0,0.0,35.0,-44.2338,8.26873,0.0,-44.2338,8.26873,35.0,-41.9613,16.2559,0.0,-41.9613,16.2559,35.0,-38.2598,23.6894,0.0,-38.2598,23.6894,35.0,-33.2554,30.3163,0.0,-33.2554,30.3163,35.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-27.1186,35.9108,0.0,-27.1186,35.9108,35.0,-20.0582,40.2823,0.0,-20.0582,40.2823,35.0,-12.3148,43.2822,0.0,-12.3148,43.2822,35.0,-4.15208,44.808,0.0,-4.15208,44.808,35.0,4.15208,44.808,0.0,4.15208,44.808,35.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [12.3148,43.2822,0.0,12.3148,43.2822,35.0,20.0582,40.2823,0.0,20.0582,40.2823,35.0,27.1186,35.9108,0.0,27.1186,35.9108,35.0,33.2554,30.3163,0.0,33.2554,30.3163,35.0,38.2598,23.6894,0.0,38.2598,23.6894,35.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [41.9613,16.2559,0.0,41.9613,16.2559,35.0,44.2338,8.26873,0.0,44.2338,8.26873,35.0,45.0,0.0,0.0,45.0,0.0,35.0])));

	/** Large attribute array: Normal vector field, scene-graph level=10, element #28, 108 total numbers made up of 36 3-tuple values */
	this.Normal_10_28_vector = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [-1.0,0.0,0.0,-1.0,0.0,0.0,-0.982978,0.183721,0.0,-0.982978,0.183721,0.0,-0.932482,0.361217,0.0,-0.932482,0.361217,0.0,-0.850228,0.526414,0.0,-0.850228,0.526414,0.0,-0.739036,0.673666,0.0,-0.739036,0.673666,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.602619,0.798029,0.0,-0.602619,0.798029,0.0,-0.445723,0.895171,0.0,-0.445723,0.895171,0.0,-0.273659,0.961827,0.0,-0.273659,0.961827,0.0,-0.0922575,0.995735,0.0,-0.0922575,0.995735,0.0,0.0922575,0.995735,0.0,0.0922575,0.995735,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.273659,0.961827,0.0,0.273659,0.961827,0.0,0.445723,0.895171,0.0,0.445723,0.895171,0.0,0.602619,0.798029,0.0,0.602619,0.798029,0.0,0.739036,0.673666,0.0,0.739036,0.673666,0.0,0.850228,0.526414,0.0,0.850228,0.526414,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.932482,0.361217,0.0,0.932482,0.361217,0.0,0.982978,0.183721,0.0,0.982978,0.183721,0.0,1.0,0.0,0.0,1.0,0.0,0.0])));

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=9, element #33, 136 total numbers */
	this.IndexedFaceSet_9_33_coordIndex = new autoclass.MFInt32(java.newArray("int", [0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1,28,29,30,-1,29,31,30,-1,30,31,32,-1,31,33,32,-1,32,33,34,-1,33,35,34,-1]));

	/** Large attribute array: Coordinate point field, scene-graph level=10, element #33, 108 total numbers made up of 36 3-tuple values */
	this.Coordinate_10_33_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [45.0,0.0,0.0,45.0,0.0,35.0,44.2338,-8.26873,0.0,44.2338,-8.26873,35.0,41.9613,-16.2559,0.0,41.9613,-16.2559,35.0,38.2598,-23.6894,0.0,38.2598,-23.6894,35.0,33.2554,-30.3163,0.0,33.2554,-30.3163,35.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [27.1186,-35.9108,0.0,27.1186,-35.9108,35.0,20.0582,-40.2823,0.0,20.0582,-40.2823,35.0,12.3148,-43.2822,0.0,12.3148,-43.2822,35.0,4.15208,-44.808,0.0,4.15208,-44.808,35.0,-4.15208,-44.808,0.0,-4.15208,-44.808,35.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-12.3148,-43.2822,0.0,-12.3148,-43.2822,35.0,-20.0582,-40.2823,0.0,-20.0582,-40.2823,35.0,-27.1186,-35.9108,0.0,-27.1186,-35.9108,35.0,-33.2554,-30.3163,0.0,-33.2554,-30.3163,35.0,-38.2598,-23.6894,0.0,-38.2598,-23.6894,35.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-41.9613,-16.2559,0.0,-41.9613,-16.2559,35.0,-44.2338,-8.26873,0.0,-44.2338,-8.26873,35.0,-45.0,0.0,0.0,-45.0,0.0,35.0])));

	/** Large attribute array: Normal vector field, scene-graph level=10, element #34, 108 total numbers made up of 36 3-tuple values */
	this.Normal_10_34_vector = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [1.0,0.0,0.0,1.0,0.0,0.0,0.982978,-0.183721,0.0,0.982978,-0.183721,0.0,0.932482,-0.361217,0.0,0.932482,-0.361217,0.0,0.850228,-0.526414,0.0,0.850228,-0.526414,0.0,0.739036,-0.673666,0.0,0.739036,-0.673666,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.602619,-0.798029,0.0,0.602619,-0.798029,0.0,0.445723,-0.895171,0.0,0.445723,-0.895171,0.0,0.273659,-0.961827,0.0,0.273659,-0.961827,0.0,0.0922575,-0.995735,0.0,0.0922575,-0.995735,0.0,-0.0922575,-0.995735,0.0,-0.0922575,-0.995735,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.273659,-0.961827,0.0,-0.273659,-0.961827,0.0,-0.445723,-0.895171,0.0,-0.445723,-0.895171,0.0,-0.602619,-0.798029,0.0,-0.602619,-0.798029,0.0,-0.739036,-0.673666,0.0,-0.739036,-0.673666,0.0,-0.850228,-0.526414,0.0,-0.850228,-0.526414,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.932482,-0.361217,0.0,-0.932482,-0.361217,0.0,-0.982978,-0.183721,0.0,-0.982978,-0.183721,0.0,-1.0,0.0,0.0,-1.0,0.0,0.0])));

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=9, element #39, 112 total numbers */
	this.IndexedFaceSet_9_39_coordIndex = new autoclass.MFInt32(java.newArray("int", [0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1]));

	/** Large attribute array: Coordinate point field, scene-graph level=10, element #39, 90 total numbers made up of 30 3-tuple values */
	this.Coordinate_10_39_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [30.0,0.0,35.0,30.0,0.0,0.0,29.2478,-6.67563,35.0,29.2478,-6.67563,0.0,27.0291,-13.0165,35.0,27.0291,-13.0165,0.0,23.4549,-18.7047,35.0,23.4549,-18.7047,0.0,18.7047,-23.4549,35.0,18.7047,-23.4549,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [13.0165,-27.0291,35.0,13.0165,-27.0291,0.0,6.67563,-29.2478,35.0,6.67563,-29.2478,0.0,0.0,-30.0,35.0,0.0,-30.0,0.0,-6.67563,-29.2478,35.0,-6.67563,-29.2478,0.0,-13.0165,-27.0291,35.0,-13.0165,-27.0291,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-18.7047,-23.4549,35.0,-18.7047,-23.4549,0.0,-23.4549,-18.7047,35.0,-23.4549,-18.7047,0.0,-27.0291,-13.0165,35.0,-27.0291,-13.0165,0.0,-29.2478,-6.67563,35.0,-29.2478,-6.67563,0.0,-30.0,0.0,35.0,-30.0,0.0,0.0])));

	/** Large attribute array: Normal vector field, scene-graph level=10, element #40, 90 total numbers made up of 30 3-tuple values */
	this.Normal_10_40_vector = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [-1.0,0.0,0.0,-1.0,0.0,0.0,-0.97493,0.22251,0.0,-0.97493,0.22251,0.0,-0.90097,0.433882,0.0,-0.90097,0.433882,0.0,-0.781853,0.623463,0.0,-0.781853,0.623463,0.0,-0.623463,0.781853,0.0,-0.623463,0.781853,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.433882,0.90097,0.0,-0.433882,0.90097,0.0,-0.22251,0.97493,0.0,-0.22251,0.97493,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.22251,0.97493,0.0,0.22251,0.97493,0.0,0.433882,0.90097,0.0,0.433882,0.90097,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.623463,0.781853,0.0,0.623463,0.781853,0.0,0.781853,0.623463,0.0,0.781853,0.623463,0.0,0.90097,0.433882,0.0,0.90097,0.433882,0.0,0.97493,0.22251,0.0,0.97493,0.22251,0.0,1.0,0.0,0.0,1.0,0.0,0.0])));

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=9, element #45, 112 total numbers */
	this.IndexedFaceSet_9_45_coordIndex = new autoclass.MFInt32(java.newArray("int", [0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1]));

	/** Large attribute array: Coordinate point field, scene-graph level=10, element #45, 90 total numbers made up of 30 3-tuple values */
	this.Coordinate_10_45_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [-30.0,0.0,35.0,-30.0,0.0,0.0,-29.2478,6.67563,35.0,-29.2478,6.67563,0.0,-27.0291,13.0165,35.0,-27.0291,13.0165,0.0,-23.4549,18.7047,35.0,-23.4549,18.7047,0.0,-18.7047,23.4549,35.0,-18.7047,23.4549,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-13.0165,27.0291,35.0,-13.0165,27.0291,0.0,-6.67563,29.2478,35.0,-6.67563,29.2478,0.0,0.0,30.0,35.0,0.0,30.0,0.0,6.67563,29.2478,35.0,6.67563,29.2478,0.0,13.0165,27.0291,35.0,13.0165,27.0291,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [18.7047,23.4549,35.0,18.7047,23.4549,0.0,23.4549,18.7047,35.0,23.4549,18.7047,0.0,27.0291,13.0165,35.0,27.0291,13.0165,0.0,29.2478,6.67563,35.0,29.2478,6.67563,0.0,30.0,0.0,35.0,30.0,0.0,0.0])));

	/** Large attribute array: Normal vector field, scene-graph level=10, element #46, 90 total numbers made up of 30 3-tuple values */
	this.Normal_10_46_vector = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [1.0,0.0,0.0,1.0,0.0,0.0,0.97493,-0.22251,0.0,0.97493,-0.22251,0.0,0.90097,-0.433882,0.0,0.90097,-0.433882,0.0,0.781853,-0.623463,0.0,0.781853,-0.623463,0.0,0.623463,-0.781853,0.0,0.623463,-0.781853,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.433882,-0.90097,0.0,0.433882,-0.90097,0.0,0.22251,-0.97493,0.0,0.22251,-0.97493,0.0,0.0,-1.0,0.0,0.0,-1.0,0.0,-0.22251,-0.97493,0.0,-0.22251,-0.97493,0.0,-0.433882,-0.90097,0.0,-0.433882,-0.90097,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.623463,-0.781853,0.0,-0.623463,-0.781853,0.0,-0.781853,-0.623463,0.0,-0.781853,-0.623463,0.0,-0.90097,-0.433882,0.0,-0.90097,-0.433882,0.0,-0.97493,-0.22251,0.0,-0.97493,-0.22251,0.0,-1.0,0.0,0.0,-1.0,0.0,0.0])));

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=9, element #51, 248 total numbers */
	this.IndexedFaceSet_9_51_coordIndex = new autoclass.MFInt32(java.newArray("int", [0,1,2,-1,1,3,2,-1,2,3,4,-1,2,4,5,-1,4,6,5,-1,5,6,7,-1,6,8,7,-1,7,8,9,-1,7,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,17,18,16,-1,18,14,16,-1,19,20,21,-1,20,22,21,-1,21,22,23,-1,23,22,24,-1,22,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,28,27,29,-1,27,30,29,-1,29,30,31,-1,30,32,31,-1,31,32,33,-1,32,34,33,-1,33,34,35,-1,35,34,36,-1,34,37,36,-1,36,37,38,-1,37,39,38,-1,38,39,40,-1,41,18,17,-1,41,17,42,-1,41,42,43,-1,41,43,44,-1,41,44,45,-1,41,45,46,-1,41,46,47,-1,41,47,48,-1,41,48,49,-1,44,40,39,-1,44,39,50,-1,44,50,51,-1,44,51,52,-1,44,52,45,-1,53,1,0,-1,53,0,54,-1,53,54,55,-1,53,55,56,-1,53,56,57,-1,53,57,58,-1,53,58,59,-1,53,59,60,-1,53,60,61,-1,53,61,20,-1,53,20,19,-1]));

	/** Large attribute array: Coordinate point field, scene-graph level=10, element #51, 186 total numbers made up of 62 3-tuple values */
	this.Coordinate_10_51_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [-33.2554,30.3163,0.0,-6.67563,29.2478,0.0,-38.2598,23.6894,0.0,-13.0165,27.0291,0.0,-18.7047,23.4549,0.0,-41.9613,16.2559,0.0,-23.4549,18.7047,0.0,-44.2338,8.26873,0.0,-27.0291,13.0165,0.0,-29.2478,6.67563,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-45.0,0.0,0.0,-30.0,0.0,0.0,-44.2338,-8.26873,0.0,-29.2478,-6.67563,0.0,-41.9613,-16.2559,0.0,-27.0291,-13.0165,0.0,-23.4549,-18.7047,0.0,-18.7047,-23.4549,0.0,-38.2598,-23.6894,0.0,6.67563,29.2478,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [33.2554,30.3163,0.0,13.0165,27.0291,0.0,38.2598,23.6894,0.0,18.7047,23.4549,0.0,23.4549,18.7047,0.0,41.9613,16.2559,0.0,27.0291,13.0165,0.0,44.2338,8.26873,0.0,29.2478,6.67563,0.0,30.0,0.0,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [45.0,0.0,0.0,29.2478,-6.67563,0.0,44.2338,-8.26873,0.0,27.0291,-13.0165,0.0,41.9613,-16.2559,0.0,23.4549,-18.7047,0.0,18.7047,-23.4549,0.0,38.2598,-23.6894,0.0,13.0165,-27.0291,0.0,33.2554,-30.3163,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [6.67563,-29.2478,0.0,-33.2554,-30.3163,0.0,-13.0165,-27.0291,0.0,-6.67563,-29.2478,0.0,0.0,-30.0,0.0,4.15208,-44.808,0.0,-4.15208,-44.808,0.0,-12.3148,-43.2822,0.0,-20.0582,-40.2823,0.0,-27.1186,-35.9108,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [27.1186,-35.9108,0.0,20.0582,-40.2823,0.0,12.3148,-43.2822,0.0,0.0,30.0,0.0,-27.1186,35.9108,0.0,-20.0582,40.2823,0.0,-12.3148,43.2822,0.0,-4.15208,44.808,0.0,4.15208,44.808,0.0,12.3148,43.2822,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [20.0582,40.2823,0.0,27.1186,35.9108,0.0])));

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=9, element #56, 248 total numbers */
	this.IndexedFaceSet_9_56_coordIndex = new autoclass.MFInt32(java.newArray("int", [0,1,2,-1,1,3,2,-1,2,3,4,-1,4,3,5,-1,3,6,5,-1,5,6,7,-1,6,8,7,-1,7,8,9,-1,9,8,10,-1,8,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,17,18,15,-1,18,16,15,-1,19,20,21,-1,20,22,21,-1,21,22,23,-1,21,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,26,28,29,-1,28,30,29,-1,29,30,31,-1,30,32,31,-1,31,32,33,-1,32,34,33,-1,33,34,35,-1,33,35,36,-1,35,37,36,-1,36,37,38,-1,37,39,38,-1,38,39,40,-1,41,42,43,-1,41,43,44,-1,41,44,45,-1,41,45,46,-1,41,46,47,-1,41,47,48,-1,41,48,49,-1,41,49,18,-1,41,18,17,-1,47,46,50,-1,47,50,51,-1,47,51,52,-1,47,52,38,-1,47,38,40,-1,53,20,19,-1,53,19,54,-1,53,54,55,-1,53,55,56,-1,53,56,57,-1,53,57,58,-1,53,58,59,-1,53,59,60,-1,53,60,61,-1,53,61,1,-1,53,1,0,-1]));

	/** Large attribute array: Coordinate point field, scene-graph level=10, element #56, 186 total numbers made up of 62 3-tuple values */
	this.Coordinate_10_56_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [-6.67563,29.2478,35.0,-33.2554,30.3163,35.0,-13.0165,27.0291,35.0,-38.2598,23.6894,35.0,-18.7047,23.4549,35.0,-23.4549,18.7047,35.0,-41.9613,16.2559,35.0,-27.0291,13.0165,35.0,-44.2338,8.26873,35.0,-29.2478,6.67563,35.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-30.0,0.0,35.0,-45.0,0.0,35.0,-29.2478,-6.67563,35.0,-44.2338,-8.26873,35.0,-27.0291,-13.0165,35.0,-41.9613,-16.2559,35.0,-23.4549,-18.7047,35.0,-38.2598,-23.6894,35.0,-18.7047,-23.4549,35.0,33.2554,30.3163,35.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [6.67563,29.2478,35.0,38.2598,23.6894,35.0,13.0165,27.0291,35.0,18.7047,23.4549,35.0,41.9613,16.2559,35.0,23.4549,18.7047,35.0,44.2338,8.26873,35.0,27.0291,13.0165,35.0,29.2478,6.67563,35.0,45.0,0.0,35.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [30.0,0.0,35.0,44.2338,-8.26873,35.0,29.2478,-6.67563,35.0,41.9613,-16.2559,35.0,27.0291,-13.0165,35.0,23.4549,-18.7047,35.0,38.2598,-23.6894,35.0,18.7047,-23.4549,35.0,33.2554,-30.3163,35.0,13.0165,-27.0291,35.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [6.67563,-29.2478,35.0,-33.2554,-30.3163,35.0,-27.1186,-35.9108,35.0,-20.0582,-40.2823,35.0,-12.3148,-43.2822,35.0,-4.15208,-44.808,35.0,4.15208,-44.808,35.0,0.0,-30.0,35.0,-6.67563,-29.2478,35.0,-13.0165,-27.0291,35.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [12.3148,-43.2822,35.0,20.0582,-40.2823,35.0,27.1186,-35.9108,35.0,0.0,30.0,35.0,27.1186,35.9108,35.0,20.0582,40.2823,35.0,12.3148,43.2822,35.0,4.15208,44.808,35.0,-4.15208,44.808,35.0,-12.3148,43.2822,35.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-20.0582,40.2823,35.0,-27.1186,35.9108,35.0])));
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("CatiaHubGasket.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Provide a Gasket part for use by CatiaHubAssemblyInline using CADAssembly and Inline nodes."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Hyokwang Lee, PartDB Co., Ltd."))
    .addMeta((new autoclass.meta()).setName("translator").setContent("Xj3D, http://www.xj3d.org"))
    .addMeta((new autoclass.meta()).setName("created").setContent("25 July 2012"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("28 November 2019"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-X3DAbstractSpecification/Part01/components/CADGeometry.html"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("X3D CAD CADInterchange profile"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("CATIA V5 R18 and PartDB Converter with Xj3D"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubGasket.x3d"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setInfo(new autoclass.MFString("\"File created using CATIA\"")).setTitle("CatiaHubGasket.x3d"))
    .addChild((new autoclass.NavigationInfo()).setType(new autoclass.MFString("\"EXAMINE\" \"WALK\" \"FLY\"")))
    .addChild((new autoclass.Background()).setSkyColor(new autoclass.MFColor(java.newArray("float", [1.0,1.0,1.0]))))
    .addChild((new autoclass.Viewpoint()).setDescription("Main Viewpoint").setOrientation(0.326678,0.502925,0.800218,2.185925).setPosition(0.411502,0.183945,0.216403).setFieldOfView(0.471225))
    .addChild((new autoclass.Viewpoint()).setDescription("Iso View").setOrientation(0.187053,0.451587,0.872399,2.448076).setPosition(0.288675,0.288675,0.288675).setFieldOfView(0.471225))
    .addChild((new autoclass.Viewpoint()).setDescription("Front View").setFieldOfView(0.471225).setPosition(0.5,0.0,0.0).setOrientation(0.57735,0.57735,0.57735,2.094395))
    .addChild((new autoclass.Viewpoint()).setDescription("Back View").setPosition(-0.5,0.0,0.0).setFieldOfView(0.471225).setOrientation(0.57735,-0.57735,-0.57735,2.094395))
    .addChild((new autoclass.Viewpoint()).setDescription("Left View").setPosition(0.0,-0.5,0.0).setFieldOfView(0.471225).setOrientation(1.0,-1.73E-4,1.73E-4,1.570796))
    .addChild((new autoclass.Viewpoint()).setDescription("Right View").setOrientation(-1.22E-4,-0.707107,-0.707107,3.141348).setPosition(0.0,0.5,0.0).setFieldOfView(0.471225))
    .addChild((new autoclass.Viewpoint()).setDescription("Top View").setPosition(0.0,0.0,0.5).setOrientation(0.0,0.0,1.0,1.570796).setFieldOfView(0.471225))
    .addChild((new autoclass.Viewpoint()).setDescription("Bottom View").setPosition(0.0,0.0,-0.5).setFieldOfView(0.471225).setOrientation(0.707107,0.707107,0.0,3.141593))
    .addChild((new autoclass.Transform()).setScale(0.001,0.001,0.001)
      .addChild((new autoclass.Group())
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Group())
            .addChild((new autoclass.Group("_025EA748"))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material("_material0")).setDiffuseColor(0.0,1.0,0.0)))
                .setGeometry((new autoclass.IndexedFaceSet()).setSolid(false).setCoordIndex(this.IndexedFaceSet_9_27_coordIndex)
                  .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_10_27_point))
                  .setNormal((new autoclass.Normal()).setVector(this.Normal_10_28_vector))))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setUSE("_material0")))
                .setGeometry((new autoclass.IndexedFaceSet()).setSolid(false).setCoordIndex(this.IndexedFaceSet_9_33_coordIndex)
                  .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_10_33_point))
                  .setNormal((new autoclass.Normal()).setVector(this.Normal_10_34_vector))))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setUSE("_material0")))
                .setGeometry((new autoclass.IndexedFaceSet()).setSolid(false).setCoordIndex(this.IndexedFaceSet_9_39_coordIndex)
                  .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_10_39_point))
                  .setNormal((new autoclass.Normal()).setVector(this.Normal_10_40_vector))))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setUSE("_material0")))
                .setGeometry((new autoclass.IndexedFaceSet()).setSolid(false).setCoordIndex(this.IndexedFaceSet_9_45_coordIndex)
                  .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_10_45_point))
                  .setNormal((new autoclass.Normal()).setVector(this.Normal_10_46_vector))))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setUSE("_material0")))
                .setGeometry((new autoclass.IndexedFaceSet()).setSolid(false).setCoordIndex(this.IndexedFaceSet_9_51_coordIndex)
                  .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_10_51_point))))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setUSE("_material0")))
                .setGeometry((new autoclass.IndexedFaceSet()).setSolid(false).setCoordIndex(this.IndexedFaceSet_9_56_coordIndex)
                  .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_10_56_point))))))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return CatiaHubGasket model
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
		var testObject = new CatiaHubGasket();
		console.log ("CatiaHubGasket execution self-validation test results: " + testObject.validateSelf());
	}
}
new CatiaHubGasket().main();
process.exit(0);