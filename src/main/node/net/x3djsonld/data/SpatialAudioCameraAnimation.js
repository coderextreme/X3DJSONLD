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
 * <p> In the last demo, there are two sound sources in different positions. Through the immersion in the X3D scene the user could attend a rational navigation. Whenever the camera moves in the direction of an existing sound source, the strength of this source increases, while the sound strength of the other (the second one) decreases and vice versa. Through this process, great realism of the scene is achieved, since it emulates the spatial sound in real world. </p>
 <p> Related links: <a href="../../../AudioSpatialSound/SpatialAudioCameraAnimation.java">SpatialAudioCameraAnimation.java</a> source, <a href="../../../AudioSpatialSound/SpatialAudioCameraAnimationIndex.html" target="_top">SpatialAudioCameraAnimation catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../AudioSpatialSound/SpatialAudioCameraAnimation.x3d">SpatialAudioCameraAnimation.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> In the last demo, there are two sound sources in different positions. Through the immersion in the X3D scene the user could attend a rational navigation. Whenever the camera moves in the direction of an existing sound source, the strength of this source increases, while the sound strength of the other (the second one) decreases and vice versa. Through this process, great realism of the scene is achieved, since it emulates the spatial sound in real world. </td>
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
			<td> 5 December 2021 </td>
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
			<td> <a href="https://www.medialab.hmu.gr/minipages/x3domAudio" target="_blank">https://www.medialab.hmu.gr/minipages/x3domAudio</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SpatialAudioCameraAnimation.x3d" target="_blank">https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SpatialAudioCameraAnimation.x3d</a> </td>
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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToNodeJS.xslt" target="_blank">X3dToNodeJS.xslt</a>
		stylesheet to create NodeJS source code from an <code>.x3d</code> scene.
	</p>

	* @author Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman
 */

function SpatialAudioCameraAnimation
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
SpatialAudioCameraAnimation.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: Viewpoint DEF='Camera001' description field, scene-graph level=3, element #17, 40 total values */
	this.Camera001_3_17_description = new autoclass.SFString("Viewpoint is like camera, prepositioned in locations (and directions) of interest. In this example the camera is the \"ears of the user\". So, if the trackCurrentView field from ListenerPointSource is TRUE then position and orientation matches the users current view");

	/** Large attribute array: OrientationInterpolator DEF='Camera001-ROT-INTERP' keyValue field, scene-graph level=3, element #20, 20 total numbers made up of 5 4-tuple values */
	this.Camera001_ROT_INTERP_3_20_keyValue = new autoclass.MFRotation(java.newArray("float", [1.0,0.0,0.0,-0.523599,0.999990,0.003554,0.002727,-1.309007,0.0,-0.965926,-0.258819,-3.141593,0.002282,-0.793351,-0.608760,-3.135645,1.0,-0.000001,-0.0,-0.523599]));
  this.x3dModel = (new autoclass.X3D()).setProfile("Full").setVersion("4.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("SpatialAudioCameraAnimation.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("In the last demo, there are two sound sources in different positions. Through the immersion in the X3D scene the user could attend a rational navigation. Whenever the camera moves in the direction of an existing sound source, the strength of this source increases, while the sound strength of the other (the second one) decreases and vice versa. Through this process, great realism of the scene is achieved, since it emulates the spatial sound in real world."))
    .addMeta((new autoclass.meta()).setName("info").setContent("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("created").setContent("28 October 2020"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("5 December 2021"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("CHANGELOG.txt"))
    .addMeta((new autoclass.meta()).setName("TODO").setContent("credit for audio files"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.medialab.hmu.gr/minipages/x3domAudio"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SpatialAudioCameraAnimation.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("SpatialAudioCameraAnimation.x3d"))
    .addChild((new autoclass.NavigationInfo()).setId("NAV"))
    .addChild((new autoclass.Background()).setBackUrl(new autoclass.MFString("\"images/generic/BK1.png\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png\"")).setBottomUrl(new autoclass.MFString("\"images/generic/DN1.png\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png\"")).setFrontUrl(new autoclass.MFString("\"images/generic/FR1.png\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png\"")).setLeftUrl(new autoclass.MFString("\"images/generic/LF1.png\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png\"")).setRightUrl(new autoclass.MFString("\"images/generic/RT1.png\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png\"")).setTopUrl(new autoclass.MFString("\"images/generic/UP1.png\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png\"")))
    .addChild((new autoclass.Viewpoint("Camera001")).setDescription(this.Camera001_3_17_description).setOrientation(1.0,0.0,0.0,-0.523599).setPosition(0.0,2000.0,3500.0))
    .addChild((new autoclass.TimeSensor("TIMER")).setCycleInterval(33.333332).setLoop(true))
    .addChild((new autoclass.PositionInterpolator("Camera001-POS-INTERP")).setKey(java.newArray("float", [0.0,0.25,0.5,0.75,1.0])).setKeyValue(new autoclass.MFVec3f(java.newArray("float", [0.0,2000.0,3500.0,0.0,2000.0,0.0,0.0,2000.0,-3500.0,0.0,2000.0,0.0,0.0,2000.0,3500.0]))))
    .addChild((new autoclass.OrientationInterpolator("Camera001-ROT-INTERP")).setKey(java.newArray("float", [0.0,0.25,0.5,0.75,1.0])).setKeyValue(this.Camera001_ROT_INTERP_3_20_keyValue))
    .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("Camera001-POS-INTERP").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("Camera001-POS-INTERP").setFromField("value_changed").setToNode("Camera001").setToField("set_position"))
    .addChild((new autoclass.ROUTE()).setFromNode("TIMER").setFromField("fraction_changed").setToNode("Camera001-ROT-INTERP").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("Camera001-ROT-INTERP").setFromField("value_changed").setToNode("Camera001").setToField("set_orientation"))
    .addChild((new autoclass.Transform("Floor")).setTranslation(1.241,0.000,0.358)
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance("WireColor"))
          .setMaterial((new autoclass.Material()).setDiffuseColor(0.122,0.114,0.125)))
        .setGeometry((new autoclass.Box()).setSize(2000.0,1.0,2000.0))))
    .addChild((new autoclass.Transform("TransformAudio1")).setTranslation(-933.123474,0.0,-926.253235)
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance("WireColor_1"))
          .setMaterial((new autoclass.Material()).setDiffuseColor(0.690196,0.101961,0.101961)))
        .setGeometry((new autoclass.Sphere()).setRadius(100)))
      .addChild((new autoclass.Billboard())
        .addChild((new autoclass.Transform("violin")).setRotation(1.0,0.0,0.0,-0.5).setScale(100.0,100.0,100.0).setTranslation(0.0,100.0,0.0)
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setAmbientIntensity(0.0933).setDiffuseColor(1.0,1.0,1.0).setShininess(0.51).setSpecularColor(0.46,0.46,0.46)))
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"Violin\""))
              .setFontStyle((new autoclass.FontStyle("ModelFontStyle")).setFamily(new autoclass.MFString("\"Times\" \"SERIF\"")).setStyle("BOLD")))))))
    .addChild((new autoclass.Transform("TransformAudio2")).setTranslation(933.475586,0.0,924.423218)
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance("WireColor_2"))
          .setMaterial((new autoclass.Material()).setDiffuseColor(0.105882,0.694118,0.580392)))
        .setGeometry((new autoclass.Sphere()).setRadius(100)))
      .addChild((new autoclass.Billboard())
        .addChild((new autoclass.Transform("saxophone")).setRotation(1.0,0.0,0.0,-0.5).setScale(100.0,100.0,100.0).setTranslation(0.0,100.0,0.0)
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setAmbientIntensity(0.0933).setDiffuseColor(1.0,1.0,1.0).setShininess(0.51).setSpecularColor(0.46,0.46,0.46)))
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"Saxophone\""))
              .setFontStyle((new autoclass.FontStyle()).setUSE("ModelFontStyle")))))))
    .addChild((new autoclass.ListenerPointSource()).setId("ListenerPointSource").setTrackCurrentView(true))
    .addChild((new autoclass.StreamAudioDestination()).setId("AudioDestination")
      .addChild((new autoclass.SpatialSound("Audio1")).setId("SpatialSound1")
        .addChild((new autoclass.Gain()).setId("Gain1")
          .addChild((new autoclass.AudioClip()).setDescription("Violin").setId("AudioClip1").setLoop(true).setUrl(new autoclass.MFString("\"sound/violin.mp3\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3\"")))))
      .addChild((new autoclass.SpatialSound("Audio2")).setId("SpatialSound2")
        .addChild((new autoclass.Gain()).setId("Gain2")
          .addChild((new autoclass.AudioClip()).setDescription("Saxophone").setId("AudioClip2").setLoop(true).setUrl(new autoclass.MFString("\"sound/saxophone.mp3\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3\"")))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return SpatialAudioCameraAnimation model
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
		var testObject = new SpatialAudioCameraAnimation();
		console.log ("SpatialAudioCameraAnimation execution self-validation test results: " + testObject.validateSelf());
		process.exit();
	}
}
new SpatialAudioCameraAnimation().main();