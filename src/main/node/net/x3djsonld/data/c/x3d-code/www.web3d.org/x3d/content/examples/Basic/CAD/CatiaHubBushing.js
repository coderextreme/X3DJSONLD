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
 * <p> Provide a bushing part (a hollow cylinder) for use by CatiaHubAssemblyInline scene, using CADAssembly and Inline nodes. </p>
 <p> Related links: <a href="../../../CAD/CatiaHubBushing.java">CatiaHubBushing.java</a> source, <a href="../../../CAD/CatiaHubBushingIndex.html" target="_top">CatiaHubBushing catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../CAD/CatiaHubBushing.x3d">CatiaHubBushing.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Provide a bushing part (a hollow cylinder) for use by CatiaHubAssemblyInline scene, using CADAssembly and Inline nodes. </td>
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
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://en.wikipedia.org/wiki/Bushing_%28bearing%29#Bushing" target="_blank">http://en.wikipedia.org/wiki/Bushing_%28bearing%29#Bushing</a> </td>
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
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubBushing.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubBushing.x3d</a> </td>
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

function CatiaHubBushing
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
CatiaHubBushing.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=9, element #28, 112 total numbers */
	this.IndexedFaceSet_9_28_coordIndex = new autoclass.MFInt32(java.newArray("int", [0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1]));

	/** Large attribute array: Coordinate point field, scene-graph level=10, element #28, 90 total numbers made up of 30 3-tuple values */
	this.Coordinate_10_28_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [-30.0,1.69966E-14,0.0,-30.0,1.69966E-14,80.0,-29.2478,6.67563,0.0,-29.2478,6.67563,80.0,-27.0291,13.0165,0.0,-27.0291,13.0165,80.0,-23.4549,18.7047,0.0,-23.4549,18.7047,80.0,-18.7047,23.4549,0.0,-18.7047,23.4549,80.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-13.0165,27.0291,0.0,-13.0165,27.0291,80.0,-6.67563,29.2478,0.0,-6.67563,29.2478,80.0,8.49831E-15,30.0,0.0,8.49831E-15,30.0,80.0,6.67563,29.2478,0.0,6.67563,29.2478,80.0,13.0165,27.0291,0.0,13.0165,27.0291,80.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [18.7047,23.4549,0.0,18.7047,23.4549,80.0,23.4549,18.7047,0.0,23.4549,18.7047,80.0,27.0291,13.0165,0.0,27.0291,13.0165,80.0,29.2478,6.67563,0.0,29.2478,6.67563,80.0,30.0,0.0,0.0,30.0,0.0,80.0])));

	/** Large attribute array: Normal vector field, scene-graph level=10, element #29, 90 total numbers made up of 30 3-tuple values */
	this.Normal_10_29_vector = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [-1.0,0.0,0.0,-1.0,0.0,0.0,-0.97493,0.22251,0.0,-0.97493,0.22251,0.0,-0.90097,0.433882,0.0,-0.90097,0.433882,0.0,-0.781853,0.623463,0.0,-0.781853,0.623463,0.0,-0.623463,0.781853,0.0,-0.623463,0.781853,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.433882,0.90097,0.0,-0.433882,0.90097,0.0,-0.22251,0.97493,0.0,-0.22251,0.97493,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.22251,0.97493,0.0,0.22251,0.97493,0.0,0.433882,0.90097,0.0,0.433882,0.90097,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.623463,0.781853,0.0,0.623463,0.781853,0.0,0.781853,0.623463,0.0,0.781853,0.623463,0.0,0.90097,0.433882,0.0,0.90097,0.433882,0.0,0.97493,0.22251,0.0,0.97493,0.22251,0.0,1.0,0.0,0.0,1.0,0.0,0.0])));

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=9, element #34, 112 total numbers */
	this.IndexedFaceSet_9_34_coordIndex = new autoclass.MFInt32(java.newArray("int", [0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1]));

	/** Large attribute array: Coordinate point field, scene-graph level=10, element #34, 90 total numbers made up of 30 3-tuple values */
	this.Coordinate_10_34_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [30.0,0.0,0.0,30.0,0.0,80.0,29.2478,-6.67563,0.0,29.2478,-6.67563,80.0,27.0291,-13.0165,0.0,27.0291,-13.0165,80.0,23.4549,-18.7047,0.0,23.4549,-18.7047,80.0,18.7047,-23.4549,0.0,18.7047,-23.4549,80.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [13.0165,-27.0291,0.0,13.0165,-27.0291,80.0,6.67563,-29.2478,0.0,6.67563,-29.2478,80.0,-3.21563E-14,-30.0,0.0,-3.21563E-14,-30.0,80.0,-6.67563,-29.2478,0.0,-6.67563,-29.2478,80.0,-13.0165,-27.0291,0.0,-13.0165,-27.0291,80.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-18.7047,-23.4549,0.0,-18.7047,-23.4549,80.0,-23.4549,-18.7047,0.0,-23.4549,-18.7047,80.0,-27.0291,-13.0165,0.0,-27.0291,-13.0165,80.0,-29.2478,-6.67563,0.0,-29.2478,-6.67563,80.0,-30.0,1.69966E-14,0.0,-30.0,1.69966E-14,80.0])));

	/** Large attribute array: Normal vector field, scene-graph level=10, element #35, 90 total numbers made up of 30 3-tuple values */
	this.Normal_10_35_vector = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [1.0,0.0,0.0,1.0,0.0,0.0,0.97493,-0.22251,0.0,0.97493,-0.22251,0.0,0.90097,-0.433882,0.0,0.90097,-0.433882,0.0,0.781853,-0.623463,0.0,0.781853,-0.623463,0.0,0.623463,-0.781853,0.0,0.623463,-0.781853,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.433882,-0.90097,0.0,0.433882,-0.90097,0.0,0.22251,-0.97493,0.0,0.22251,-0.97493,0.0,0.0,-1.0,0.0,0.0,-1.0,0.0,-0.22251,-0.97493,0.0,-0.22251,-0.97493,0.0,-0.433882,-0.90097,0.0,-0.433882,-0.90097,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.623463,-0.781853,0.0,-0.623463,-0.781853,0.0,-0.781853,-0.623463,0.0,-0.781853,-0.623463,0.0,-0.90097,-0.433882,0.0,-0.90097,-0.433882,0.0,-0.97493,-0.22251,0.0,-0.97493,-0.22251,0.0,-1.0,0.0,0.0,-1.0,0.0,0.0])));

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=9, element #40, 96 total numbers */
	this.IndexedFaceSet_9_40_coordIndex = new autoclass.MFInt32(java.newArray("int", [0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1]));

	/** Large attribute array: Coordinate point field, scene-graph level=10, element #40, 78 total numbers made up of 26 3-tuple values */
	this.Coordinate_10_40_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [20.0,0.0,80.0,20.0,0.0,0.0,19.3185,-5.17638,80.0,19.3185,-5.17638,0.0,17.3205,-10.0,80.0,17.3205,-10.0,0.0,14.1421,-14.1421,80.0,14.1421,-14.1421,0.0,10.0,-17.3205,80.0,10.0,-17.3205,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [5.17638,-19.3185,80.0,5.17638,-19.3185,0.0,-3.67394E-15,-20.0,80.0,-3.67394E-15,-20.0,0.0,-5.17638,-19.3185,80.0,-5.17638,-19.3185,0.0,-10.0,-17.3205,80.0,-10.0,-17.3205,0.0,-14.1421,-14.1421,80.0,-14.1421,-14.1421,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-17.3205,-10.0,80.0,-17.3205,-10.0,0.0,-19.3185,-5.17638,80.0,-19.3185,-5.17638,0.0,-20.0,2.44929E-15,80.0,-20.0,2.44929E-15,0.0])));

	/** Large attribute array: Normal vector field, scene-graph level=10, element #41, 78 total numbers made up of 26 3-tuple values */
	this.Normal_10_41_vector = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [-1.0,0.0,0.0,-1.0,0.0,0.0,-0.965932,0.258797,0.0,-0.965932,0.258797,0.0,-0.866034,0.499985,0.0,-0.866034,0.499985,0.0,-0.707083,0.70713,0.0,-0.707083,0.70713,0.0,-0.499985,0.866034,0.0,-0.499985,0.866034,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.258797,0.965932,0.0,-0.258797,0.965932,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.258797,0.965932,0.0,0.258797,0.965932,0.0,0.499985,0.866034,0.0,0.499985,0.866034,0.0,0.707083,0.70713,0.0,0.707083,0.70713,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.866034,0.499985,0.0,0.866034,0.499985,0.0,0.965932,0.258797,0.0,0.965932,0.258797,0.0,1.0,0.0,0.0,1.0,0.0,0.0])));

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=9, element #46, 96 total numbers */
	this.IndexedFaceSet_9_46_coordIndex = new autoclass.MFInt32(java.newArray("int", [0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1]));

	/** Large attribute array: Coordinate point field, scene-graph level=10, element #46, 78 total numbers made up of 26 3-tuple values */
	this.Coordinate_10_46_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [-20.0,2.44929E-15,80.0,-20.0,2.44929E-15,0.0,-19.3185,5.17638,80.0,-19.3185,5.17638,0.0,-17.3205,10.0,80.0,-17.3205,10.0,0.0,-14.1421,14.1421,80.0,-14.1421,14.1421,0.0,-10.0,17.3205,80.0,-10.0,17.3205,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-5.17638,19.3185,80.0,-5.17638,19.3185,0.0,1.22465E-15,20.0,80.0,1.22465E-15,20.0,0.0,5.17638,19.3185,80.0,5.17638,19.3185,0.0,10.0,17.3205,80.0,10.0,17.3205,0.0,14.1421,14.1421,80.0,14.1421,14.1421,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [17.3205,10.0,80.0,17.3205,10.0,0.0,19.3185,5.17638,80.0,19.3185,5.17638,0.0,20.0,0.0,80.0,20.0,0.0,0.0])));

	/** Large attribute array: Normal vector field, scene-graph level=10, element #47, 78 total numbers made up of 26 3-tuple values */
	this.Normal_10_47_vector = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [1.0,0.0,0.0,1.0,0.0,0.0,0.965932,-0.258797,0.0,0.965932,-0.258797,0.0,0.866034,-0.499985,0.0,0.866034,-0.499985,0.0,0.707083,-0.70713,0.0,0.707083,-0.70713,0.0,0.499985,-0.866034,0.0,0.499985,-0.866034,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.258797,-0.965932,0.0,0.258797,-0.965932,0.0,0.0,-1.0,0.0,0.0,-1.0,0.0,-0.258797,-0.965932,0.0,-0.258797,-0.965932,0.0,-0.499985,-0.866034,0.0,-0.499985,-0.866034,0.0,-0.707083,-0.70713,0.0,-0.707083,-0.70713,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.866034,-0.499985,0.0,-0.866034,-0.499985,0.0,-0.965932,-0.258797,0.0,-0.965932,-0.258797,0.0,-1.0,0.0,0.0,-1.0,0.0,0.0])));

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=9, element #52, 208 total numbers */
	this.IndexedFaceSet_9_52_coordIndex = new autoclass.MFInt32(java.newArray("int", [0,1,2,-1,1,3,2,-1,2,3,4,-1,2,4,5,-1,4,6,5,-1,5,6,7,-1,5,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,12,14,15,-1,14,16,15,-1,15,16,17,-1,15,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,23,24,25,-1,24,26,25,-1,25,26,27,-1,27,26,28,-1,26,29,28,-1,28,29,30,-1,30,29,31,-1,29,32,31,-1,31,32,33,-1,32,34,33,-1,33,34,35,-1,34,36,35,-1,35,36,37,-1,37,36,38,-1,36,39,38,-1,38,39,40,-1,40,39,19,-1,39,41,19,-1,19,41,21,-1,41,42,21,-1,21,42,43,-1,44,1,0,-1,44,0,45,-1,44,45,46,-1,44,46,47,-1,44,47,48,-1,44,48,49,-1,44,49,50,-1,44,50,51,-1,44,51,24,-1,44,24,23,-1]));

	/** Large attribute array: Coordinate point field, scene-graph level=10, element #52, 156 total numbers made up of 52 3-tuple values */
	this.Coordinate_10_52_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [-23.4549,18.7047,0.0,-5.17638,19.3185,0.0,-27.0291,13.0165,0.0,-10.0,17.3205,0.0,-14.1421,14.1421,0.0,-29.2478,6.67563,0.0,-17.3205,10.0,0.0,-19.3185,5.17638,0.0,-30.0,1.69966E-14,0.0,-20.0,2.44929E-15,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-29.2478,-6.67563,0.0,-19.3185,-5.17638,0.0,-27.0291,-13.0165,0.0,-17.3205,-10.0,0.0,-14.1421,-14.1421,0.0,-23.4549,-18.7047,0.0,-10.0,-17.3205,0.0,-5.17638,-19.3185,0.0,-18.7047,-23.4549,0.0,-3.67394E-15,-20.0,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-13.0165,-27.0291,0.0,-3.21563E-14,-30.0,0.0,-6.67563,-29.2478,0.0,5.17638,19.3185,0.0,23.4549,18.7047,0.0,10.0,17.3205,0.0,27.0291,13.0165,0.0,14.1421,14.1421,0.0,17.3205,10.0,0.0,29.2478,6.67563,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [19.3185,5.17638,0.0,20.0,0.0,0.0,30.0,0.0,0.0,19.3185,-5.17638,0.0,29.2478,-6.67563,0.0,17.3205,-10.0,0.0,27.0291,-13.0165,0.0,14.1421,-14.1421,0.0,10.0,-17.3205,0.0,23.4549,-18.7047,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [5.17638,-19.3185,0.0,18.7047,-23.4549,0.0,13.0165,-27.0291,0.0,6.67563,-29.2478,0.0,1.22465E-15,20.0,0.0,-18.7047,23.4549,0.0,-13.0165,27.0291,0.0,-6.67563,29.2478,0.0,8.49831E-15,30.0,0.0,6.67563,29.2478,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [13.0165,27.0291,0.0,18.7047,23.4549,0.0])));

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=9, element #57, 208 total numbers */
	this.IndexedFaceSet_9_57_coordIndex = new autoclass.MFInt32(java.newArray("int", [0,1,2,-1,1,3,2,-1,2,3,4,-1,4,3,5,-1,3,6,5,-1,5,6,7,-1,7,6,8,-1,6,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,14,13,15,-1,13,16,15,-1,15,16,17,-1,17,16,18,-1,16,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,23,24,25,-1,24,26,25,-1,25,26,27,-1,25,27,28,-1,27,29,28,-1,28,29,30,-1,28,30,31,-1,30,32,31,-1,31,32,33,-1,32,34,33,-1,33,34,35,-1,34,36,35,-1,35,36,37,-1,35,37,38,-1,37,39,38,-1,38,39,40,-1,38,40,41,-1,40,18,41,-1,41,18,42,-1,18,20,42,-1,42,20,43,-1,44,24,23,-1,44,23,45,-1,44,45,46,-1,44,46,47,-1,44,47,48,-1,44,48,49,-1,44,49,50,-1,44,50,51,-1,44,51,1,-1,44,1,0,-1]));

	/** Large attribute array: Coordinate point field, scene-graph level=10, element #57, 156 total numbers made up of 52 3-tuple values */
	this.Coordinate_10_57_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [-5.17638,19.3185,80.0,-23.4549,18.7047,80.0,-10.0,17.3205,80.0,-27.0291,13.0165,80.0,-14.1421,14.1421,80.0,-17.3205,10.0,80.0,-29.2478,6.67563,80.0,-19.3185,5.17638,80.0,-20.0,2.44929E-15,80.0,-30.0,1.69966E-14,80.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-19.3185,-5.17638,80.0,-29.2478,-6.67563,80.0,-17.3205,-10.0,80.0,-27.0291,-13.0165,80.0,-14.1421,-14.1421,80.0,-10.0,-17.3205,80.0,-23.4549,-18.7047,80.0,-5.17638,-19.3185,80.0,-3.67394E-15,-20.0,80.0,-18.7047,-23.4549,80.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-3.21563E-14,-30.0,80.0,-13.0165,-27.0291,80.0,-6.67563,-29.2478,80.0,23.4549,18.7047,80.0,5.17638,19.3185,80.0,27.0291,13.0165,80.0,10.0,17.3205,80.0,14.1421,14.1421,80.0,29.2478,6.67563,80.0,17.3205,10.0,80.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [19.3185,5.17638,80.0,30.0,0.0,80.0,20.0,0.0,80.0,29.2478,-6.67563,80.0,19.3185,-5.17638,80.0,27.0291,-13.0165,80.0,17.3205,-10.0,80.0,14.1421,-14.1421,80.0,23.4549,-18.7047,80.0,10.0,-17.3205,80.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [5.17638,-19.3185,80.0,18.7047,-23.4549,80.0,13.0165,-27.0291,80.0,6.67563,-29.2478,80.0,1.22465E-15,20.0,80.0,18.7047,23.4549,80.0,13.0165,27.0291,80.0,6.67563,29.2478,80.0,8.49831E-15,30.0,80.0,-6.67563,29.2478,80.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-13.0165,27.0291,80.0,-18.7047,23.4549,80.0])));
  this.x3dModel = (new autoclass.X3D()).setProfile("Interchange").setVersion("3.1")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("CatiaHubBushing.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Provide a bushing part (a hollow cylinder) for use by CatiaHubAssemblyInline scene, using CADAssembly and Inline nodes."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Hyokwang Lee, PartDB Co., Ltd."))
    .addMeta((new autoclass.meta()).setName("translator").setContent("Xj3D, http://www.xj3d.org"))
    .addMeta((new autoclass.meta()).setName("created").setContent("25 July 2012"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("28 November 2019"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-X3DAbstractSpecification/Part01/components/CADGeometry.html"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("X3D CAD CADInterchange profile"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://en.wikipedia.org/wiki/Bushing_%28bearing%29#Bushing"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("CATIA V5 R18 and PartDB Converter with Xj3D"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubBushing.x3d"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setInfo(new autoclass.MFString("\"File created using CATIA\"")).setTitle("CatiaHubBushing.x3d"))
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
            .addChild((new autoclass.Group("_0272AA28"))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material("_material0")).setDiffuseColor(0.0,1.0,1.0)))
                .setGeometry((new autoclass.IndexedFaceSet()).setSolid(false).setCoordIndex(this.IndexedFaceSet_9_28_coordIndex)
                  .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_10_28_point))
                  .setNormal((new autoclass.Normal()).setVector(this.Normal_10_29_vector))))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setUSE("_material0")))
                .setGeometry((new autoclass.IndexedFaceSet()).setSolid(false).setCoordIndex(this.IndexedFaceSet_9_34_coordIndex)
                  .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_10_34_point))
                  .setNormal((new autoclass.Normal()).setVector(this.Normal_10_35_vector))))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setUSE("_material0")))
                .setGeometry((new autoclass.IndexedFaceSet()).setSolid(false).setCoordIndex(this.IndexedFaceSet_9_40_coordIndex)
                  .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_10_40_point))
                  .setNormal((new autoclass.Normal()).setVector(this.Normal_10_41_vector))))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setUSE("_material0")))
                .setGeometry((new autoclass.IndexedFaceSet()).setSolid(false).setCoordIndex(this.IndexedFaceSet_9_46_coordIndex)
                  .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_10_46_point))
                  .setNormal((new autoclass.Normal()).setVector(this.Normal_10_47_vector))))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setUSE("_material0")))
                .setGeometry((new autoclass.IndexedFaceSet()).setSolid(false).setCoordIndex(this.IndexedFaceSet_9_52_coordIndex)
                  .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_10_52_point))))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setUSE("_material0")))
                .setGeometry((new autoclass.IndexedFaceSet()).setSolid(false).setCoordIndex(this.IndexedFaceSet_9_57_coordIndex)
                  .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_10_57_point))))))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return CatiaHubBushing model
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
		var testObject = new CatiaHubBushing();
		console.log ("CatiaHubBushing execution self-validation test results: " + testObject.validateSelf());
	}
}
new CatiaHubBushing().main();
process.exit(0);