load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> This demo is the same with the Single Audio Demo, with the difference that it uses the Inline grouping node. Namely, the scene is an X3D file and all nodes are loaded by Inline node via the "url" of X3D file. </p>
 <p> Related links: <a href="../../../AudioSpatialSound/InlineSoundSource.java">InlineSoundSource.java</a> source, <a href="../../../AudioSpatialSound/InlineSoundSourceIndex.html" target="_top">InlineSoundSource catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../AudioSpatialSound/InlineSoundSource.x3d">InlineSoundSource.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> This demo is the same with the Single Audio Demo, with the difference that it uses the Inline grouping node. Namely, the scene is an X3D file and all nodes are loaded by Inline node via the "url" of X3D file. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> info </i> </td>
			<td> This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 28 October 2020 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 April 2021 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> CHANGELOG.txt </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> credit for audio files </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://medialab.hmu.gr/minipages/x3domAudio" target="_blank">https://medialab.hmu.gr/minipages/x3domAudio</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/InlineSoundSource.x3d" target="_blank">https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/InlineSoundSource.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 4.0, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../AudioSpatialSound/../license.html">../license.html</a> </td>
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

	* @author Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman
 */

function InlineSoundSource
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
InlineSoundSource.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: IndexedFaceSet DEF='Box001-GEOMETRY' coordIndex field, scene-graph level=5, element #20, 48 total numbers */
	this.Box001_GEOMETRY_5_20_coordIndex = new MFInt32Object(Java.to([0,1,2,-1,3,4,5,-1,6,7,8,-1,9,10,11,-1,12,13,14,-1,15,16,17,-1,18,19,20,-1,21,22,23,-1,24,25,26,-1,27,28,29,-1,30,31,32,-1,33,34,35,-1], Java.type("int[]")));

	/** Large attribute array: Coordinate point field, scene-graph level=6, element #20, 108 total numbers made up of 36 3-tuple values */
	this.Coordinate_6_20_point = new MFVec3fObject() /* splitting up long array to improve readability */
	.append(new MFVec3fObject(Java.to([-1000.000000,0.000000,1000.000000,-1000.000000,0.000000,-1000.000000,1000.000000,0.000000,-1000.000000,1000.000000,0.000000,-1000.000000,1000.000000,0.000000,1000.000000,-1000.000000,0.000000,1000.000000,-1000.000000,8.031588,1000.000000,1000.000000,8.031588,1000.000000,1000.000000,8.031588,-1000.000000,1000.000000,8.031588,-1000.000000], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([-1000.000000,8.031588,-1000.000000,-1000.000000,8.031588,1000.000000,-1000.000000,0.000000,1000.000000,1000.000000,0.000000,1000.000000,1000.000000,8.031588,1000.000000,1000.000000,8.031588,1000.000000,-1000.000000,8.031588,1000.000000,-1000.000000,0.000000,1000.000000,1000.000000,0.000000,1000.000000,1000.000000,0.000000,-1000.000000], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([1000.000000,8.031588,-1000.000000,1000.000000,8.031588,-1000.000000,1000.000000,8.031588,1000.000000,1000.000000,0.000000,1000.000000,1000.000000,0.000000,-1000.000000,-1000.000000,0.000000,-1000.000000,-1000.000000,8.031588,-1000.000000,-1000.000000,8.031588,-1000.000000,1000.000000,8.031588,-1000.000000,1000.000000,0.000000,-1000.000000], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([-1000.000000,0.000000,-1000.000000,-1000.000000,0.000000,1000.000000,-1000.000000,8.031588,1000.000000,-1000.000000,8.031588,1000.000000,-1000.000000,8.031588,-1000.000000,-1000.000000,0.000000,-1000.000000], Java.type("float[]"))));

	/** Large attribute array: Normal vector field, scene-graph level=6, element #21, 108 total numbers made up of 36 3-tuple values */
	this.Normal_6_21_vector = new MFVec3fObject() /* splitting up long array to improve readability */
	.append(new MFVec3fObject(Java.to([0.000000,-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,1.000000,0.000000], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([0.000000,1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,0.000000,1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,1.000000,1.000000,0.000000,0.000000,1.000000,0.000000,0.000000], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,-1.000000], Java.typ