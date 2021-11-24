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
 * <p> Provide a Cap part for use by CatiaHubAssemblyInline using CADAssembly and Inline nodes. </p>
 <p> Related links: <a href="../../../CAD/CatiaHubCap.java">CatiaHubCap.java</a> source, <a href="../../../CAD/CatiaHubCapIndex.html" target="_top">CatiaHubCap catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../CAD/CatiaHubCap.x3d">CatiaHubCap.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Provide a Cap part for use by CatiaHubAssemblyInline using CADAssembly and Inline nodes. </td>
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
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubCap.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubCap.x3d</a> </td>
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

function CatiaHubCap
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
CatiaHubCap.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=9, element #27, 176 total numbers */
	this.IndexedFaceSet_9_27_coordIndex = new autoclass.MFInt32(java.newArray("int", [0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1,28,29,30,-1,29,31,30,-1,30,31,32,-1,31,33,32,-1,32,33,34,-1,33,35,34,-1,34,35,36,-1,35,37,36,-1,36,37,38,-1,37,39,38,-1,38,39,40,-1,39,41,40,-1,40,41,42,-1,41,43,42,-1,42,43,44,-1,43,45,44,-1]));

	/** Large attribute array: Coordinate point field, scene-graph level=10, element #27, 138 total numbers made up of 46 3-tuple values */
	this.Coordinate_10_27_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [-75.0,0.0,0.0,-75.0,0.0,20.0,-74.2366,10.6736,0.0,-74.2366,10.6736,20.0,-71.962,21.1299,0.0,-71.962,21.1299,20.0,-68.2224,31.1561,0.0,-68.2224,31.1561,20.0,-63.094,40.5481,0.0,-63.094,40.5481,20.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-56.6812,49.1146,0.0,-56.6812,49.1146,20.0,-49.1146,56.6812,0.0,-49.1146,56.6812,20.0,-40.5481,63.094,0.0,-40.5481,63.094,20.0,-31.1561,68.2224,0.0,-31.1561,68.2224,20.0,-21.1299,71.962,0.0,-21.1299,71.962,20.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-10.6736,74.2366,0.0,-10.6736,74.2366,20.0,0.0,75.0,0.0,0.0,75.0,20.0,10.6736,74.2366,0.0,10.6736,74.2366,20.0,21.1299,71.962,0.0,21.1299,71.962,20.0,31.1561,68.2224,0.0,31.1561,68.2224,20.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [40.5481,63.094,0.0,40.5481,63.094,20.0,49.1146,56.6812,0.0,49.1146,56.6812,20.0,56.6812,49.1146,0.0,56.6812,49.1146,20.0,63.094,40.5481,0.0,63.094,40.5481,20.0,68.2224,31.1561,0.0,68.2224,31.1561,20.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [71.962,21.1299,0.0,71.962,21.1299,20.0,74.2366,10.6736,0.0,74.2366,10.6736,20.0,75.0,0.0,0.0,75.0,0.0,20.0])));

	/** Large attribute array: Normal vector field, scene-graph level=10, element #28, 138 total numbers made up of 46 3-tuple values */
	this.Normal_10_28_vector = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [-1.0,0.0,0.0,-1.0,0.0,0.0,-0.989822,0.142308,0.0,-0.989822,0.142308,0.0,-0.959498,0.281716,0.0,-0.959498,0.281716,0.0,-0.909645,0.415387,0.0,-0.909645,0.415387,0.0,-0.841257,0.540635,0.0,-0.841257,0.540635,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.755771,0.654836,0.0,-0.755771,0.654836,0.0,-0.654836,0.755771,0.0,-0.654836,0.755771,0.0,-0.540635,0.841257,0.0,-0.540635,0.841257,0.0,-0.415387,0.909645,0.0,-0.415387,0.909645,0.0,-0.281716,0.959498,0.0,-0.281716,0.959498,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.142308,0.989822,0.0,-0.142308,0.989822,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.142308,0.989822,0.0,0.142308,0.989822,0.0,0.281716,0.959498,0.0,0.281716,0.959498,0.0,0.415387,0.909645,0.0,0.415387,0.909645,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.540635,0.841257,0.0,0.540635,0.841257,0.0,0.654836,0.755771,0.0,0.654836,0.755771,0.0,0.755771,0.654836,0.0,0.755771,0.654836,0.0,0.841257,0.540635,0.0,0.841257,0.540635,0.0,0.909645,0.415387,0.0,0.909645,0.415387,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.959498,0.281716,0.0,0.959498,0.281716,0.0,0.989822,0.142308,0.0,0.989822,0.142308,0.0,1.0,0.0,0.0,1.0,0.0,0.0])));

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=9, element #33, 176 total numbers */
	this.IndexedFaceSet_9_33_coordIndex = new autoclass.MFInt32(java.newArray("int", [0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1,28,29,30,-1,29,31,30,-1,30,31,32,-1,31,33,32,-1,32,33,34,-1,33,35,34,-1,34,35,36,-1,35,37,36,-1,36,37,38,-1,37,39,38,-1,38,39,40,-1,39,41,40,-1,40,41,42,-1,41,43,42,-1,42,43,44,-1,43,45,44,-1]));

	/** Large attribute array: Coordinate point field, scene-graph level=10, element #33, 138 total numbers made up of 46 3-tuple values */
	this.Coordinate_10_33_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [75.0,0.0,0.0,75.0,0.0,20.0,74.2366,-10.6736,0.0,74.2366,-10.6736,20.0,71.962,-21.1299,0.0,71.962,-21.1299,20.0,68.2224,-31.1561,0.0,68.2224,-31.1561,20.0,63.094,-40.5481,0.0,63.094,-40.5481,20.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [56.6812,-49.1146,0.0,56.6812,-49.1146,20.0,49.1146,-56.6812,0.0,49.1146,-56.6812,20.0,40.5481,-63.094,0.0,40.5481,-63.094,20.0,31.1561,-68.2224,0.0,31.1561,-68.2224,20.0,21.1299,-71.962,0.0,21.1299,-71.962,20.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [10.6736,-74.2366,0.0,10.6736,-74.2366,20.0,0.0,-75.0,0.0,0.0,-75.0,20.0,-10.6736,-74.2366,0.0,-10.6736,-74.2366,20.0,-21.1299,-71.962,0.0,-21.1299,-71.962,20.0,-31.1561,-68.2224,0.0,-31.1561,-68.2224,20.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-40.5481,-63.094,0.0,-40.5481,-63.094,20.0,-49.1146,-56.6812,0.0,-49.1146,-56.6812,20.0,-56.6812,-49.1146,0.0,-56.6812,-49.1146,20.0,-63.094,-40.5481,0.0,-63.094,-40.5481,20.0,-68.2224,-31.1561,0.0,-68.2224,-31.1561,20.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-71.962,-21.1299,0.0,-71.962,-21.1299,20.0,-74.2366,-10.6736,0.0,-74.2366,-10.6736,20.0,-75.0,0.0,0.0,-75.0,0.0,20.0])));

	/** Large attribute array: Normal vector field, scene-graph level=10, element #34, 138 total numbers made up of 46 3-tuple values */
	this.Normal_10_34_vector = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [1.0,0.0,0.0,1.0,0.0,0.0,0.989822,-0.142308,0.0,0.989822,-0.142308,0.0,0.959498,-0.281716,0.0,0.959498,-0.281716,0.0,0.909645,-0.415387,0.0,0.909645,-0.415387,0.0,0.841257,-0.540635,0.0,0.841257,-0.540635,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.755771,-0.654836,0.0,0.755771,-0.654836,0.0,0.654836,-0.755771,0.0,0.654836,-0.755771,0.0,0.540635,-0.841257,0.0,0.540635,-0.841257,0.0,0.415387,-0.909645,0.0,0.415387,-0.909645,0.0,0.281716,-0.959498,0.0,0.281716,-0.959498,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.142308,-0.989822,0.0,0.142308,-0.989822,0.0,0.0,-1.0,0.0,0.0,-1.0,0.0,-0.142308,-0.989822,0.0,-0.142308,-0.989822,0.0,-0.281716,-0.959498,0.0,-0.281716,-0.959498,0.0,-0.415387,-0.909645,0.0,-0.415387,-0.909645,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.540635,-0.841257,0.0,-0.540635,-0.841257,0.0,-0.654836,-0.755771,0.0,-0.654836,-0.755771,0.0,-0.755771,-0.654836,0.0,-0.755771,-0.654836,0.0,-0.841257,-0.540635,0.0,-0.841257,-0.540635,0.0,-0.909645,-0.415387,0.0,-0.909645,-0.415387,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.959498,-0.281716,0.0,-0.959498,-0.281716,0.0,-0.989822,-0.142308,0.0,-0.989822,-0.142308,0.0,-1.0,0.0,0.0,-1.0,0.0,0.0])));

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=9, element #39, 168 total numbers */
	this.IndexedFaceSet_9_39_coordIndex = new autoclass.MFInt32(java.newArray("int", [2,1,3,-1,1,4,3,-1,3,4,5,-1,4,6,5,-1,5,6,7,-1,6,8,7,-1,7,8,9,-1,8,10,9,-1,9,10,11,-1,10,12,11,-1,11,12,13,-1,12,14,13,-1,13,14,15,-1,14,16,15,-1,15,16,17,-1,16,18,17,-1,17,18,19,-1,18,20,19,-1,19,20,21,-1,20,22,21,-1,21,22,23,-1,22,24,23,-1,23,24,25,-1,24,26,25,-1,25,26,27,-1,26,28,27,-1,27,28,29,-1,28,30,29,-1,29,30,31,-1,30,32,31,-1,31,32,33,-1,32,34,33,-1,33,34,35,-1,34,36,35,-1,35,36,37,-1,36,38,37,-1,37,38,39,-1,38,40,39,-1,39,40,41,-1,40,42,41,-1,41,42,43,-1,0,1,2,-1]));

	/** Large attribute array: Coordinate point field, scene-graph level=10, element #39, 132 total numbers made up of 44 3-tuple values */
	this.Coordinate_10_39_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [0.0,75.0,0.0,10.6736,74.2366,0.0,-10.6736,74.2366,0.0,-21.1299,71.962,0.0,21.1299,71.962,0.0,-31.1561,68.2224,0.0,31.1561,68.2224,0.0,-40.5481,63.094,0.0,40.5481,63.094,0.0,-49.1146,56.6812,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [49.1146,56.6812,0.0,-56.6812,49.1146,0.0,56.6812,49.1146,0.0,-63.094,40.5481,0.0,63.094,40.5481,0.0,-68.2224,31.1561,0.0,68.2224,31.1561,0.0,-71.962,21.1299,0.0,71.962,21.1299,0.0,-74.2366,10.6736,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [74.2366,10.6736,0.0,-75.0,0.0,0.0,75.0,0.0,0.0,-74.2366,-10.6736,0.0,74.2366,-10.6736,0.0,-71.962,-21.1299,0.0,71.962,-21.1299,0.0,-68.2224,-31.1561,0.0,68.2224,-31.1561,0.0,-63.094,-40.5481,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [63.094,-40.5481,0.0,-56.6812,-49.1146,0.0,56.6812,-49.1146,0.0,-49.1146,-56.6812,0.0,49.1146,-56.6812,0.0,-40.5481,-63.094,0.0,40.5481,-63.094,0.0,-31.1561,-68.2224,0.0,31.1561,-68.2224,0.0,-21.1299,-71.962,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [21.1299,-71.962,0.0,-10.6736,-74.2366,0.0,10.6736,-74.2366,0.0,0.0,-75.0,0.0])));

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=9, element #44, 168 total numbers */
	this.IndexedFaceSet_9_44_coordIndex = new autoclass.MFInt32(java.newArray("int", [1,0,3,-1,0,4,3,-1,3,4,5,-1,4,6,5,-1,5,6,7,-1,6,8,7,-1,7,8,9,-1,8,10,9,-1,9,10,11,-1,10,12,11,-1,11,12,13,-1,12,14,13,-1,13,14,15,-1,14,16,15,-1,15,16,17,-1,16,18,17,-1,17,18,19,-1,18,20,19,-1,19,20,21,-1,20,22,21,-1,21,22,23,-1,22,24,23,-1,23,24,25,-1,24,26,25,-1,25,26,27,-1,26,28,27,-1,27,28,29,-1,28,30,29,-1,29,30,31,-1,30,32,31,-1,31,32,33,-1,32,34,33,-1,33,34,35,-1,34,36,35,-1,35,36,37,-1,36,38,37,-1,37,38,39,-1,38,40,39,-1,39,40,41,-1,40,42,41,-1,41,42,43,-1,0,1,2,-1]));

	/** Large attribute array: Coordinate point field, scene-graph level=10, element #44, 132 total numbers made up of 44 3-tuple values */
	this.Coordinate_10_44_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [-10.6736,74.2366,20.0,10.6736,74.2366,20.0,0.0,75.0,20.0,21.1299,71.962,20.0,-21.1299,71.962,20.0,31.1561,68.2224,20.0,-31.1561,68.2224,20.0,40.5481,63.094,20.0,-40.5481,63.094,20.0,49.1146,56.6812,20.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-49.1146,56.6812,20.0,56.6812,49.1146,20.0,-56.6812,49.1146,20.0,63.094,40.5481,20.0,-63.094,40.5481,20.0,68.2224,31.1561,20.0,-68.2224,31.1561,20.0,71.962,21.1299,20.0,-71.962,21.1299,20.0,74.2366,10.6736,20.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-74.2366,10.6736,20.0,75.0,0.0,20.0,-75.0,0.0,20.0,74.2366,-10.6736,20.0,-74.2366,-10.6736,20.0,71.962,-21.1299,20.0,-71.962,-21.1299,20.0,68.2224,-31.1561,20.0,-68.2224,-31.1561,20.0,63.094,-40.5481,20.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-63.094,-40.5481,20.0,56.6812,-49.1146,20.0,-56.6812,-49.1146,20.0,49.1146,-56.6812,20.0,-49.1146,-56.6812,20.0,40.5481,-63.094,20.0,-40.5481,-63.094,20.0,31.1561,-68.2224,20.0,-31.1561,-68.2224,20.0,21.1299,-71.962,20.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-21.1299,-71.962,20.0,10.6736,-74.2366,20.0,-10.6736,-74.2366,20.0,0.0,-75.0,20.0])));
  this.x3dModel = (new autoclass.X3D()).setProfile("Interchange").setVersion("3.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("CatiaHubCap.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Provide a Cap part for use by CatiaHubAssemblyInline using CADAssembly and Inline nodes."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Hyokwang Lee, PartDB Co., Ltd."))
    .addMeta((new autoclass.meta()).setName("translator").setContent("Xj3D, http://www.xj3d.org"))
    .addMeta((new autoclass.meta()).setName("created").setContent("25 July 2012"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("28 November 2019"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-X3DAbstractSpecification/Part01/components/CADGeometry.html"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("X3D CAD CADInterchange profile"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubCap.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("CATIA V5 R18 and PartDB Converter with Xj3D"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setInfo(new autoclass.MFString("\"File created using CATIA\"")).setTitle("CatiaHubCap.x3d"))
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
            .addChild((new autoclass.Group("_03E3C7E8"))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material("_material0")).setDiffuseColor(0.94902,0.635294,0.341176)))
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
                  .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_10_39_point))))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setUSE("_material0")))
                .setGeometry((new autoclass.IndexedFaceSet()).setSolid(false).setCoordIndex(this.IndexedFaceSet_9_44_coordIndex)
                  .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_10_44_point))))))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return CatiaHubCap model
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
		var testObject = new CatiaHubCap();
		console.log ("CatiaHubCap execution self-validation test results: " + testObject.validateSelf());
	}
}
new CatiaHubCap().main();
process.exit(0);