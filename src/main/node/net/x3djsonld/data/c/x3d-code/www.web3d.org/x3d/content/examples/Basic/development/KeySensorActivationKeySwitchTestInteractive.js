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
 * <p> A simple scene to show KeySensor functionality using Interactive Profile. </p>
 <p> Related links: <a href="../../../development/KeySensorActivationKeySwitchTestInteractive.java">KeySensorActivationKeySwitchTestInteractive.java</a> source, <a href="../../../development/KeySensorActivationKeySwitchTestInteractiveIndex.html" target="_top">KeySensorActivationKeySwitchTestInteractive catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/KeySensorActivationKeySwitchTestInteractive.x3d">KeySensorActivationKeySwitchTestInteractive.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> A simple scene to show KeySensor functionality using Interactive Profile. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Mr. Philip Sand Hansel II, mr.phillip@home.com </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 8 July 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> This won't work because there is no KeySensor implementation yet! Prototype script (written in Java) or native node support for KeySensor is needed. </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> enabled needs to be changed to exposedField once supported by Script capabilities </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/specification-2000july/part1/nodesDef.html#KeySensor" target="_blank">https://www.web3d.org/x3d/specification-2000july/part1/nodesDef.html#KeySensor</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/sai/javadoc/org/web3d/x3d/sai/Core/KeySensor.html" target="_blank">https://www.web3d.org/x3d/sai/javadoc/org/web3d/x3d/sai/Core/KeySensor.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> KeySensor Interactive Profile </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/KeySensorActivationKeySwitchTestInteractive.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/KeySensorActivationKeySwitchTestInteractive.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/ConformanceNist/Sensors/Keyboard/KeySensorActivationKeySwitchTestInteractive.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/ConformanceNist/Sensors/Keyboard/KeySensorActivationKeySwitchTestInteractive.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
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

	* @author Mr. Philip Sand Hansel II, mr.phillip@home.com
 */

function KeySensorActivationKeySwitchTestInteractive
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
KeySensorActivationKeySwitchTestInteractive.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #34, 67 total numbers */
	this.PixelTexture_5_34_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,255,255,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,255,255,255,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #40, 67 total numbers */
	this.PixelTexture_5_40_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,255,255,0,0,0,0,0,255,0,0,255,0,0,0,0,255,255,255,255,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #46, 67 total numbers */
	this.PixelTexture_5_46_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,0,0,255,255,255,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #52, 67 total numbers */
	this.PixelTexture_5_52_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,0,255,255,255,0,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #58, 67 total numbers */
	this.PixelTexture_5_58_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,255,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #64, 67 total numbers */
	this.PixelTexture_5_64_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,255,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #70, 67 total numbers */
	this.PixelTexture_5_70_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,0,255,0,0,255,0,0,0,0,255,0,255,255,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #76, 67 total numbers */
	this.PixelTexture_5_76_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,255,255,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #82, 67 total numbers */
	this.PixelTexture_5_82_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,255,255,255,255,255,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #88, 67 total numbers */
	this.PixelTexture_5_88_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,255,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #94, 67 total numbers */
	this.PixelTexture_5_94_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,0,255,0,0,255,0,0,0,0,255,0,255,0,0,0,0,0,255,0,255,0,0,0,0,0,255,255,0,0,0,0,0,0,255,0,255,0,0,0,0,0,255,0,0,255,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #100, 67 total numbers */
	this.PixelTexture_5_100_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #106, 67 total numbers */
	this.PixelTexture_5_106_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,255,0,255,0,0,0,255,0,255,0,255,0,0,0,0,255,0,255,0,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #112, 67 total numbers */
	this.PixelTexture_5_112_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,255,255,0,0,0,0,255,255,0,255,0,0,0,0,255,0,0,255,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #118, 67 total numbers */
	this.PixelTexture_5_118_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,255,255,255,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #124, 67 total numbers */
	this.PixelTexture_5_124_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,255,255,0,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #130, 67 total numbers */
	this.PixelTexture_5_130_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,255,0,0,0,0,255,255,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #136, 67 total numbers */
	this.PixelTexture_5_136_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,0,255,0,0,255,0,0,0,0,255,0,255,0,0,0,0,0,255,255,0,0,0,0,0,0,255,0,255,0,0,0,0,0,255,0,0,255,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #142, 67 total numbers */
	this.PixelTexture_5_142_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,255,255,0,0,0,0,0,255,0,0,0,0,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #148, 67 total numbers */
	this.PixelTexture_5_148_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #154, 67 total numbers */
	this.PixelTexture_5_154_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #160, 67 total numbers */
	this.PixelTexture_5_160_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,255,0,255,0,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #166, 67 total numbers */
	this.PixelTexture_5_166_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,0,255,0,255,0,0,0,0,255,0,255,0,255,0,0,0,255,0,255,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #172, 67 total numbers */
	this.PixelTexture_5_172_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,255,0,0,0,255,0,0,0,0,255,0,255,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,255,0,255,0,0,0,0,255,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #178, 67 total numbers */
	this.PixelTexture_5_178_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,255,0,255,0,0,0,0,255,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #184, 67 total numbers */
	this.PixelTexture_5_184_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,255,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,255,0,0,0,0,255,255,255,255,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #190, 67 total numbers */
	this.PixelTexture_5_190_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,0,255,255,255,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #196, 67 total numbers */
	this.PixelTexture_5_196_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,0,255,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #202, 67 total numbers */
	this.PixelTexture_5_202_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,255,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #208, 67 total numbers */
	this.PixelTexture_5_208_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,255,255,255,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #214, 67 total numbers */
	this.PixelTexture_5_214_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,255,255,255,0,0,0,0,0,255,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #220, 67 total numbers */
	this.PixelTexture_5_220_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,255,255,0,0,0,0,0,255,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #226, 67 total numbers */
	this.PixelTexture_5_226_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,255,255,255,255,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #232, 67 total numbers */
	this.PixelTexture_5_232_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,0,255,255,0,0,0,0,0,255,0,0,255,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #238, 67 total numbers */
	this.PixelTexture_5_238_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,255,255,255,0,0,0,0,255,0,0,255,0,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #244, 67 total numbers */
	this.PixelTexture_5_244_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #250, 67 total numbers */
	this.PixelTexture_5_250_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #256, 67 total numbers */
	this.PixelTexture_5_256_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,255,0,0,0,0,0,0,255,255,0,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]));

	/** Large attribute array: PixelTexture image field, scene-graph level=5, element #262, 67 total numbers */
	this.PixelTexture_5_262_image = new autoclass.SFImage(java.newArray("int", [8,8,1,0,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]));
  this.x3dModel = (new autoclass.X3D()).setProfile("Interactive").setVersion("3.0")
  .setHead((new autoclass.head())
    .addComments(" component Core level 2 in support of ExternProtoDeclare hack for KeySensor ")
    .addComponent((new autoclass.component()).setName("Core").setLevel(2))
    .addMeta((new autoclass.meta()).setName("title").setContent("KeySensorActivationKeySwitchTestInteractive.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("A simple scene to show KeySensor functionality using Interactive Profile."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Mr. Philip Sand Hansel II, mr.phillip@home.com"))
    .addMeta((new autoclass.meta()).setName("translator").setContent("Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("created").setContent("8 July 2001"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("warning").setContent("This won't work because there is no KeySensor implementation yet! Prototype script (written in Java) or native node support for KeySensor is needed."))
    .addMeta((new autoclass.meta()).setName("warning").setContent("enabled needs to be changed to exposedField once supported by Script capabilities"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/x3d/specification-2000july/part1/nodesDef.html#KeySensor"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/x3d/sai/javadoc/org/web3d/x3d/sai/Core/KeySensor.html"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("KeySensor Interactive Profile"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/KeySensorActivationKeySwitchTestInteractive.x3d"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/x3d/content/examples/Basic/ConformanceNist/Sensors/Keyboard/KeySensorActivationKeySwitchTestInteractive.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("KeySensorActivationKeySwitchTestInteractive.x3d"))
    .addChild((new autoclass.ExternProtoDeclare()).setName("KeySensor").setUrl(new autoclass.MFString("\"KeySensorActivationKeySwitchTest.wrl#KeySensor\" \"https://www.web3d.org/x3d/content/examples/Basic/development/KeySensorActivationKeySwitchTest.wrl#KeySensor\" \"KeySensorActivationKeySwitchTest.x3d#KeySensor\" \"https://www.web3d.org/x3d/content/examples/Basic/development/KeySensorActivationKeySwitchTest.x3d#KeySensor\""))
      .addField((new autoclass.field()).setAccessType("outputOnly").setName("altKey").setType("SFBool"))
      .addField((new autoclass.field()).setAccessType("outputOnly").setName("keyPress").setType("SFInt32"))
      .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_enabled").setType("SFBool"))
      .addField((new autoclass.field()).setAccessType("outputOnly").setName("keyRelease").setType("SFInt32"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("enabled").setType("SFBool"))
      .addField((new autoclass.field()).setAccessType("outputOnly").setName("shiftKey").setType("SFBool"))
      .addField((new autoclass.field()).setAccessType("outputOnly").setName("actionKeyRelease").setType("SFInt32"))
      .addField((new autoclass.field()).setAccessType("outputOnly").setName("isActive").setType("SFBool"))
      .addField((new autoclass.field()).setAccessType("outputOnly").setName("enabled_changed").setType("SFBool"))
      .addField((new autoclass.field()).setAccessType("outputOnly").setName("actionKeyPress").setType("SFInt32"))
      .addField((new autoclass.field()).setAccessType("outputOnly").setName("controlKey").setType("SFBool")))
    .addChild((new autoclass.Viewpoint("Viewpoint1")).setDescription("Viewpoint1").setPosition(0.0,0.0,30.0).setFieldOfView(0.79))
    .addChild((new autoclass.KeySensor("SingleKeySensor")).setEnabled(false))
    .addChild((new autoclass.Shape("A"))
      .setAppearance((new autoclass.Appearance())
        .setMaterial((new autoclass.Material("red")).setDiffuseColor(1.0,0.0,0.0))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_34_image)))
      .setGeometry((new autoclass.IndexedFaceSet("slab")).setDEF("slab").setCreaseAngle(0.5).setCoordIndex(java.newArray("int", [0,1,2,-1,0,2,3,-1]))
        .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.5,0.5,0.5,-0.5,-0.5,0.5,0.5,-0.5,0.5,0.5,0.5,0.5]))))))
    .addChild((new autoclass.Shape("B"))
      .setAppearance((new autoclass.Appearance())
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_40_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("C"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_46_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("D"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_52_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("E"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_58_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("F"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_64_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("G"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_70_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("H"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_76_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("I"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_82_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("J"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_88_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("K"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_94_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("L"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_100_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("M"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_106_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("N"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_112_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("O"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_118_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("P"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_124_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("Q"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_130_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("R"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_136_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("S"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_142_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("T"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_148_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("U"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_154_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("V"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_160_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("W"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_166_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("X"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_172_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("Y"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_178_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("Z"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_184_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("One"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_190_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("Two"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_196_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("Three"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_202_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("Four"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_208_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("Five"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_214_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("Six"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_220_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("Seven"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_226_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("Eight"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_232_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("Nine"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_238_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("Zero"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_244_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("Colon"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_250_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("Comma"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_256_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Shape("Dot"))
      .setAppearance((new autoclass.Appearance())
        .setTextureTransform((new autoclass.TextureTransform()).setScale(0.75,1.0))
        .setMaterial((new autoclass.Material()).setUSE("red"))
        .setTexture((new autoclass.PixelTexture()).setImage(this.PixelTexture_5_262_image)))
      .setGeometry((new autoclass.IndexedFaceSet()).setUSE("slab")))
    .addChild((new autoclass.Group())
      .addChild((new autoclass.Transform()).setTranslation(0.0,5.0,0.0)
        .addChild((new autoclass.Transform()).setTranslation(-12.0,0.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("T")))
        .addChild((new autoclass.Transform()).setTranslation(-11.0,0.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("O")))
        .addChild((new autoclass.Transform()).setTranslation(-10.0,0.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("U")))
        .addChild((new autoclass.Transform()).setTranslation(-9.0,0.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("C")))
        .addChild((new autoclass.Transform()).setTranslation(-8.0,0.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("H")))
        .addChild((new autoclass.Transform()).setTranslation(-6.0,0.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("T")))
        .addChild((new autoclass.Transform()).setTranslation(-5.0,0.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("H")))
        .addChild((new autoclass.Transform()).setTranslation(-4.0,0.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("I")))
        .addChild((new autoclass.Transform()).setTranslation(-3.0,0.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("S")))
        .addChild((new autoclass.Transform()).setTranslation(-1.0,0.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("T")))
        .addChild((new autoclass.Transform())
          .addChild((new autoclass.Shape()).setUSE("E")))
        .addChild((new autoclass.Transform()).setTranslation(1.0,0.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("X")))
        .addChild((new autoclass.Transform()).setTranslation(2.0,0.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("T")))
        .addChild((new autoclass.Transform()).setTranslation(4.0,0.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("T")))
        .addChild((new autoclass.Transform()).setTranslation(5.0,0.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("O")))
        .addChild((new autoclass.Transform()).setTranslation(7.0,0.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("E")))
        .addChild((new autoclass.Transform()).setTranslation(8.0,0.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("N")))
        .addChild((new autoclass.Transform()).setTranslation(9.0,0.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("A")))
        .addChild((new autoclass.Transform()).setTranslation(10.0,0.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("B")))
        .addChild((new autoclass.Transform()).setTranslation(11.0,0.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("L")))
        .addChild((new autoclass.Transform()).setTranslation(12.0,0.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("E")))
        .addChild((new autoclass.Transform()).setTranslation(-15.0,-1.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("K")))
        .addChild((new autoclass.Transform()).setTranslation(-14.0,-1.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("E")))
        .addChild((new autoclass.Transform()).setTranslation(-13.0,-1.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("Y")))
        .addChild((new autoclass.Transform()).setTranslation(-12.0,-1.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("S")))
        .addChild((new autoclass.Transform()).setTranslation(-11.0,-1.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("E")))
        .addChild((new autoclass.Transform()).setTranslation(-10.0,-1.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("N")))
        .addChild((new autoclass.Transform()).setTranslation(-9.0,-1.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("S")))
        .addChild((new autoclass.Transform()).setTranslation(-8.0,-1.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("O")))
        .addChild((new autoclass.Transform()).setTranslation(-7.0,-1.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("R")))
        .addChild((new autoclass.Transform()).setTranslation(-5.0,-1.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("A")))
        .addChild((new autoclass.Transform()).setTranslation(-4.0,-1.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("C")))
        .addChild((new autoclass.Transform()).setTranslation(-3.0,-1.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("T")))
        .addChild((new autoclass.Transform()).setTranslation(-2.0,-1.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("I")))
        .addChild((new autoclass.Transform()).setTranslation(-1.0,-1.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("V")))
        .addChild((new autoclass.Transform()).setTranslation(0.0,-1.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("A")))
        .addChild((new autoclass.Transform()).setTranslation(1.0,-1.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("T")))
        .addChild((new autoclass.Transform()).setTranslation(2.0,-1.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("I")))
        .addChild((new autoclass.Transform()).setTranslation(3.0,-1.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("O")))
        .addChild((new autoclass.Transform()).setTranslation(4.0,-1.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("N")))
        .addChild((new autoclass.Transform()).setTranslation(6.0,-1.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("K")))
        .addChild((new autoclass.Transform()).setTranslation(7.0,-1.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("E")))
        .addChild((new autoclass.Transform()).setTranslation(8.0,-1.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("Y")))
        .addChild((new autoclass.Transform()).setTranslation(9.0,-1.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("S")))
        .addChild((new autoclass.Transform()).setTranslation(10.0,-1.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("Comma")))
        .addChild((new autoclass.Transform()).setTranslation(12.0,-1.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("T")))
        .addChild((new autoclass.Transform()).setTranslation(13.0,-1.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("H")))
        .addChild((new autoclass.Transform()).setTranslation(14.0,-1.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("E")))
        .addChild((new autoclass.Transform()).setTranslation(15.0,-1.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("N")))
        .addChild((new autoclass.Transform()).setTranslation(-15.0,-2.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("P")))
        .addChild((new autoclass.Transform()).setTranslation(-14.0,-2.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("R")))
        .addChild((new autoclass.Transform()).setTranslation(-13.0,-2.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("E")))
        .addChild((new autoclass.Transform()).setTranslation(-12.0,-2.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("S")))
        .addChild((new autoclass.Transform()).setTranslation(-11.0,-2.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("S")))
        .addChild((new autoclass.Transform()).setTranslation(-9.0,-2.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("A")))
        .addChild((new autoclass.Transform()).setTranslation(-8.0,-2.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("C")))
        .addChild((new autoclass.Transform()).setTranslation(-7.0,-2.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("T")))
        .addChild((new autoclass.Transform()).setTranslation(-6.0,-2.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("I")))
        .addChild((new autoclass.Transform()).setTranslation(-5.0,-2.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("V")))
        .addChild((new autoclass.Transform()).setTranslation(-4.0,-2.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("A")))
        .addChild((new autoclass.Transform()).setTranslation(-3.0,-2.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("T")))
        .addChild((new autoclass.Transform()).setTranslation(-2.0,-2.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("I")))
        .addChild((new autoclass.Transform()).setTranslation(-1.0,-2.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("O")))
        .addChild((new autoclass.Transform()).setTranslation(0.0,-2.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("N")))
        .addChild((new autoclass.Transform()).setTranslation(2.0,-2.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("K")))
        .addChild((new autoclass.Transform()).setTranslation(3.0,-2.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("E")))
        .addChild((new autoclass.Transform()).setTranslation(4.0,-2.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("Y")))
        .addChild((new autoclass.Transform()).setTranslation(5.0,-2.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("S")))
        .addChild((new autoclass.Transform()).setTranslation(7.0,-2.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("T")))
        .addChild((new autoclass.Transform()).setTranslation(8.0,-2.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("O")))
        .addChild((new autoclass.Transform()).setTranslation(10.0,-2.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("T")))
        .addChild((new autoclass.Transform()).setTranslation(11.0,-2.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("E")))
        .addChild((new autoclass.Transform()).setTranslation(12.0,-2.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("S")))
        .addChild((new autoclass.Transform()).setTranslation(13.0,-2.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("T")))
        .addChild((new autoclass.Transform()).setTranslation(14.0,-2.0,0.0)
          .addChild((new autoclass.Shape()).setUSE("Dot"))))
      .addChild((new autoclass.Switch("ActivationKeyMessageSwitch")).setWhichChoice(0)
        .addChild((new autoclass.Transform("Nokeypress")).setTranslation(-2.0,0.0,0.0)
          .addChild((new autoclass.Transform()).setTranslation(-13.0,-4.0,0.0)
            .addChild((new autoclass.Shape()).setUSE("N")))
          .addChild((new autoclass.Transform()).setTranslation(-12.0,-4.0,0.0)
            .addChild((new autoclass.Shape()).setUSE("O")))
          .addChild((new autoclass.Transform()).setTranslation(-10.0,-4.0,0.0)
            .addChild((new autoclass.Shape()).setUSE("A")))
          .addChild((new autoclass.Transform()).setTranslation(-9.0,-4.0,0.0)
            .addChild((new autoclass.Shape()).setUSE("C")))
          .addChild((new autoclass.Transform()).setTranslation(-8.0,-4.0,0.0)
            .addChild((new autoclass.Shape()).setUSE("T")))
          .addChild((new autoclass.Transform()).setTranslation(-7.0,-4.0,0.0)
            .addChild((new autoclass.Shape()).setUSE("I")))
          .addChild((new autoclass.Transform()).setTranslation(-6.0,-4.0,0.0)
            .addChild((new autoclass.Shape()).setUSE("V")))
          .addChild((new autoclass.Transform()).setTranslation(-5.0,-4.0,0.0)
            .addChild((new autoclass.Shape()).setUSE("A")))
          .addChild((new autoclass.Transform()).setTranslation(-4.0,-4.0,0.0)
            .addChild((new autoclass.Shape()).setUSE("T")))
          .addChild((new autoclass.Transform()).setTranslation(-3.0,-4.0,0.0)
            .addChild((new autoclass.Shape()).setUSE("I")))
          .addChild((new autoclass.Transform()).setTranslation(-2.0,-4.0,0.0)
            .addChild((new autoclass.Shape()).setUSE("O")))
          .addChild((new autoclass.Transform()).setTranslation(-1.0,-4.0,0.0)
            .addChild((new autoclass.Shape()).setUSE("N")))
          .addChild((new autoclass.Transform()).setTranslation(1.0,-4.0,0.0)
            .addChild((new autoclass.Shape()).setUSE("K")))
          .addChild((new autoclass.Transform()).setTranslation(2.0,-4.0,0.0)
            .addChild((new autoclass.Shape()).setUSE("E")))
          .addChild((new autoclass.Transform()).setTranslation(3.0,-4.0,0.0)
            .addChild((new autoclass.Shape()).setUSE("Y")))
          .addChild((new autoclass.Transform()).setTranslation(4.0,-4.0,0.0)
            .addChild((new autoclass.Shape()).setUSE("P")))
          .addChild((new autoclass.Transform()).setTranslation(5.0,-4.0,0.0)
            .addChild((new autoclass.Shape()).setUSE("R")))
          .addChild((new autoclass.Transform()).setTranslation(6.0,-4.0,0.0)
            .addChild((new autoclass.Shape()).setUSE("E")))
          .addChild((new autoclass.Transform()).setTranslation(7.0,-4.0,0.0)
            .addChild((new autoclass.Shape()).setUSE("S")))
          .addChild((new autoclass.Transform()).setTranslation(8.0,-4.0,0.0)
            .addChild((new autoclass.Shape()).setUSE("S")))
          .addChild((new autoclass.Transform()).setTranslation(10.0,-4.0,0.0)
            .addChild((new autoclass.Shape()).setUSE("S")))
          .addChild((new autoclass.Transform()).setTranslation(11.0,-4.0,0.0)
            .addChild((new autoclass.Shape()).setUSE("E")))
          .addChild((new autoclass.Transform()).setTranslation(12.0,-4.0,0.0)
            .addChild((new autoclass.Shape()).setUSE("N")))
          .addChild((new autoclass.Transform()).setTranslation(13.0,-4.0,0.0)
            .addChild((new autoclass.Shape()).setUSE("S")))
          .addChild((new autoclass.Transform()).setTranslation(14.0,-4.0,0.0)
            .addChild((new autoclass.Shape()).setUSE("E")))
          .addChild((new autoclass.Transform()).setTranslation(15.0,-4.0,0.0)
            .addChild((new autoclass.Shape()).setUSE("D")))
          .addChild((new autoclass.Transform()).setTranslation(16.0,-4.0,0.0)
            .addChild((new autoclass.Shape()).setUSE("Dot")))
          .addChild((new autoclass.Transform()).setTranslation(17.0,-4.0,0.0)
            .addChild((new autoclass.Shape()).setUSE("Dot"))))
        .addChild((new autoclass.Transform("Functions")).setTranslation(0.0,-6.0,0.0)
          .addChild((new autoclass.Transform("F1"))
            .addChild((new autoclass.Transform()).setTranslation(-1.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("F")))
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Shape()).setUSE("One"))))
          .addChild((new autoclass.Transform("F2")).setTranslation(0.0,-1.0,0.0)
            .addChild((new autoclass.Transform()).setTranslation(-1.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("F")))
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Shape()).setUSE("Two"))))
          .addChild((new autoclass.Transform("F3")).setTranslation(0.0,-2.0,0.0)
            .addChild((new autoclass.Transform()).setTranslation(-1.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("F")))
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Shape()).setUSE("Three"))))
          .addChild((new autoclass.Transform("F4")).setTranslation(0.0,-3.0,0.0)
            .addChild((new autoclass.Transform()).setTranslation(-1.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("F")))
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Shape()).setUSE("Four"))))
          .addChild((new autoclass.Transform("F5")).setTranslation(0.0,-4.0,0.0)
            .addChild((new autoclass.Transform()).setTranslation(-1.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("F")))
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Shape()).setUSE("Five"))))
          .addChild((new autoclass.Transform("F6")).setTranslation(0.0,-5.0,0.0)
            .addChild((new autoclass.Transform()).setTranslation(-1.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("F")))
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Shape()).setUSE("Six"))))
          .addChild((new autoclass.Transform("F7")).setTranslation(0.0,-6.0,0.0)
            .addChild((new autoclass.Transform()).setTranslation(-1.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("F")))
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Shape()).setUSE("Seven"))))
          .addChild((new autoclass.Transform("F8")).setTranslation(0.0,-7.0,0.0)
            .addChild((new autoclass.Transform()).setTranslation(-1.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("F")))
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Shape()).setUSE("Eight"))))
          .addChild((new autoclass.Transform("F9")).setTranslation(0.0,-8.0,0.0)
            .addChild((new autoclass.Transform()).setTranslation(-1.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("F")))
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Shape()).setUSE("Nine"))))
          .addChild((new autoclass.Transform("F10")).setTranslation(0.0,-9.0,0.0)
            .addChild((new autoclass.Transform()).setTranslation(-1.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("F")))
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Shape()).setUSE("One")))
            .addChild((new autoclass.Transform()).setTranslation(1.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("Zero"))))
          .addChild((new autoclass.Transform("F11")).setTranslation(0.0,-10.0,0.0)
            .addChild((new autoclass.Transform()).setTranslation(-1.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("F")))
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Shape()).setUSE("One")))
            .addChild((new autoclass.Transform()).setTranslation(1.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("One"))))
          .addChild((new autoclass.Transform("F12")).setTranslation(0.0,-11.0,0.0)
            .addChild((new autoclass.Transform()).setTranslation(-1.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("F")))
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Shape()).setUSE("One")))
            .addChild((new autoclass.Transform()).setTranslation(1.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("Two"))))
          .addChild((new autoclass.Transform("Home")).setTranslation(0.0,-12.0,0.0)
            .addChild((new autoclass.Transform()).setTranslation(-3.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("One")))
            .addChild((new autoclass.Transform()).setTranslation(-2.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("Three")))
            .addChild((new autoclass.Transform()).setTranslation(-1.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("Colon")))
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Shape()).setUSE("H")))
            .addChild((new autoclass.Transform()).setTranslation(1.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("O")))
            .addChild((new autoclass.Transform()).setTranslation(2.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("M")))
            .addChild((new autoclass.Transform()).setTranslation(3.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("E"))))
          .addChild((new autoclass.Transform("End")).setTranslation(0.0,-13.0,0.0)
            .addChild((new autoclass.Transform()).setTranslation(-3.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("One")))
            .addChild((new autoclass.Transform()).setTranslation(-2.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("Four")))
            .addChild((new autoclass.Transform()).setTranslation(-1.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("Colon")))
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Shape()).setUSE("E")))
            .addChild((new autoclass.Transform()).setTranslation(1.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("N")))
            .addChild((new autoclass.Transform()).setTranslation(2.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("D"))))
          .addChild((new autoclass.Transform("Left")).setTranslation(0.0,-14.0,0.0)
            .addChild((new autoclass.Transform()).setTranslation(-3.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("One")))
            .addChild((new autoclass.Transform()).setTranslation(-2.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("Five")))
            .addChild((new autoclass.Transform()).setTranslation(-1.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("Colon")))
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Shape()).setUSE("L")))
            .addChild((new autoclass.Transform()).setTranslation(1.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("E")))
            .addChild((new autoclass.Transform()).setTranslation(2.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("F")))
            .addChild((new autoclass.Transform()).setTranslation(2.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("T"))))
          .addChild((new autoclass.Transform("Right")).setTranslation(0.0,-15.0,0.0)
            .addChild((new autoclass.Transform()).setTranslation(-3.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("One")))
            .addChild((new autoclass.Transform()).setTranslation(-2.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("Six")))
            .addChild((new autoclass.Transform()).setTranslation(-1.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("Colon")))
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Shape()).setUSE("R")))
            .addChild((new autoclass.Transform()).setTranslation(1.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("I")))
            .addChild((new autoclass.Transform()).setTranslation(2.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("G")))
            .addChild((new autoclass.Transform()).setTranslation(2.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("H")))
            .addChild((new autoclass.Transform()).setTranslation(2.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("T"))))
          .addChild((new autoclass.Transform("Up")).setTranslation(0.0,-16.0,0.0)
            .addChild((new autoclass.Transform()).setTranslation(-3.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("One")))
            .addChild((new autoclass.Transform()).setTranslation(-2.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("Seven")))
            .addChild((new autoclass.Transform()).setTranslation(-1.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("Colon")))
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Shape()).setUSE("U")))
            .addChild((new autoclass.Transform()).setTranslation(1.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("P"))))
          .addChild((new autoclass.Transform("Down")).setTranslation(0.0,-17.0,0.0)
            .addChild((new autoclass.Transform()).setTranslation(-3.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("One")))
            .addChild((new autoclass.Transform()).setTranslation(-2.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("Eight")))
            .addChild((new autoclass.Transform()).setTranslation(-1.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("Colon")))
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Shape()).setUSE("D")))
            .addChild((new autoclass.Transform()).setTranslation(1.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("O")))
            .addChild((new autoclass.Transform()).setTranslation(2.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("W")))
            .addChild((new autoclass.Transform()).setTranslation(2.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("N"))))
          .addChild((new autoclass.Transform("PGUP")).setTranslation(0.0,-18.0,0.0)
            .addChild((new autoclass.Transform()).setTranslation(-3.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("One")))
            .addChild((new autoclass.Transform()).setTranslation(-2.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("Nine")))
            .addChild((new autoclass.Transform()).setTranslation(-1.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("Colon")))
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Shape()).setUSE("P")))
            .addChild((new autoclass.Transform()).setTranslation(1.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("G")))
            .addChild((new autoclass.Transform()).setTranslation(2.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("U")))
            .addChild((new autoclass.Transform()).setTranslation(2.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("P"))))
          .addChild((new autoclass.Transform("PGDN")).setTranslation(0.0,-19.0,0.0)
            .addChild((new autoclass.Transform()).setTranslation(-3.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("Two")))
            .addChild((new autoclass.Transform()).setTranslation(-2.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("Zero")))
            .addChild((new autoclass.Transform()).setTranslation(-1.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("Colon")))
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Shape()).setUSE("P")))
            .addChild((new autoclass.Transform()).setTranslation(1.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("G")))
            .addChild((new autoclass.Transform()).setTranslation(2.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("D")))
            .addChild((new autoclass.Transform()).setTranslation(2.0,0.0,0.0)
              .addChild((new autoclass.Shape()).setUSE("N")))))))
    .addChild((new autoclass.ROUTE()).setFromNode("SingleKeySensor").setFromField("actionKeyPress").setToNode("ActivationKeyMessageSwitch").setToField("whichChoice")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return KeySensorActivationKeySwitchTestInteractive model
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
		var testObject = new KeySensorActivationKeySwitchTestInteractive();
		console.log ("KeySensorActivationKeySwitchTestInteractive execution self-validation test results: " + testObject.validateSelf());
	}
}
new KeySensorActivationKeySwitchTestInteractive().main();
process.exit(0);