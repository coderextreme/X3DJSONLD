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
 * <p> This X3D scene involves three sound sources. Each of them is visualized by a 3D object (in our case is a sphere) that depicts the sound effects. Specifically, we have added filters through of them we are able to manage the different sound effects in an impressive way. Filters can be composed of a number of attributes, frequency, detune, gain and the quality factor which also known as Q. Furthermore, the filters are classified in some specific types, depending on the sound effects that produce. In detail, there is the Low-pass filter which can create more muffled sound. Another one is the High-pass filter, which is used to generate tinny sound. Equally important is the Band-pass filter, which cuts off low and high frequencies and passes through only these within a certain range. On the contrary, the Notch filter has exactly the opposite operation of the Band-pass filter. Then is the Low-shelf filter, its role is to change the amount of bass in a sound, as a result the frequencies that are lower than the current frequency get a boost, while them that are over it remain unchanged. Next, the High-shelf filter is responsible for the quantity of treble in a sound. Moreover, Peaking filter is used in order to handle the amount of midrange in a sound. Lastly, there is the All-pass filter, whose role is to introduce phaser effects. </p>
 <p> Related links: <a href="../../../AudioSpatialSound/Filters.java">Filters.java</a> source, <a href="../../../AudioSpatialSound/FiltersIndex.html" target="_top">Filters catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../AudioSpatialSound/Filters.x3d">Filters.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> This X3D scene involves three sound sources. Each of them is visualized by a 3D object (in our case is a sphere) that depicts the sound effects. Specifically, we have added filters through of them we are able to manage the different sound effects in an impressive way. Filters can be composed of a number of attributes, frequency, detune, gain and the quality factor which also known as Q. Furthermore, the filters are classified in some specific types, depending on the sound effects that produce. In detail, there is the Low-pass filter which can create more muffled sound. Another one is the High-pass filter, which is used to generate tinny sound. Equally important is the Band-pass filter, which cuts off low and high frequencies and passes through only these within a certain range. On the contrary, the Notch filter has exactly the opposite operation of the Band-pass filter. Then is the Low-shelf filter, its role is to change the amount of bass in a sound, as a result the frequencies that are lower than the current frequency get a boost, while them that are over it remain unchanged. Next, the High-shelf filter is responsible for the quantity of treble in a sound. Moreover, Peaking filter is used in order to handle the amount of midrange in a sound. Lastly, there is the All-pass filter, whose role is to introduce phaser effects. </td>
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
			<td> <a href="https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/Filters.x3d" target="_blank">https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/Filters.x3d</a> </td>
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

function Filters
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
Filters.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Full").setVersion("4.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("Filters.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("This X3D scene involves three sound sources. Each of them is visualized by a 3D object (in our case is a sphere) that depicts the sound effects. Specifically, we have added filters through of them we are able to manage the different sound effects in an impressive way. Filters can be composed of a number of attributes, frequency, detune, gain and the quality factor which also known as Q. Furthermore, the filters are classified in some specific types, depending on the sound effects that produce. In detail, there is the Low-pass filter which can create more muffled sound. Another one is the High-pass filter, which is used to generate tinny sound. Equally important is the Band-pass filter, which cuts off low and high frequencies and passes through only these within a certain range. On the contrary, the Notch filter has exactly the opposite operation of the Band-pass filter. Then is the Low-shelf filter, its role is to change the amount of bass in a sound, as a result the frequencies that are lower than the current frequency get a boost, while them that are over it remain unchanged. Next, the High-shelf filter is responsible for the quantity of treble in a sound. Moreover, Peaking filter is used in order to handle the amount of midrange in a sound. Lastly, there is the All-pass filter, whose role is to introduce phaser effects."))
    .addMeta((new autoclass.meta()).setName("info").setContent("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("created").setContent("28 October 2020"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("5 December 2021"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("CHANGELOG.txt"))
    .addMeta((new autoclass.meta()).setName("TODO").setContent("credit for audio files"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.medialab.hmu.gr/minipages/x3domAudio"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/Filters.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("Filters.x3d"))
    .addChild((new autoclass.NavigationInfo()).setId("NAV"))
    .addChild((new autoclass.Background()).setSkyColor(new autoclass.MFColor(java.newArray("float", [0.200,0.200,0.200]))))
    .addChild((new autoclass.Viewpoint()).setDescription("View entire audio model").setOrientation(1.0,0.0,0.0,-0.5).setPosition(0.0,500.0,600.0).setRetainUserOffsets(true))
    .addChild((new autoclass.Transform("TransformAudio1")).setTranslation(-200.0,50.0,0.0)
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance("audio_emit"))
          .setMaterial((new autoclass.Material()).setDiffuseColor(0.1,0.1,0.1).setEmissiveColor(0.8,0.8,0.8).setSpecularColor(0.01,0.01,0.01)))
        .setGeometry((new autoclass.Sphere()).setRadius(30))))
    .addChild((new autoclass.Transform("TransformAudio2")).setTranslation(0.0,50.0,0.0)
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance("audio_emit2"))
          .setMaterial((new autoclass.Material()).setDiffuseColor(0.1,0.1,0.1).setEmissiveColor(0.8,0.8,0.8).setSpecularColor(0.01,0.01,0.01)))
        .setGeometry((new autoclass.Sphere()).setRadius(30))))
    .addChild((new autoclass.Transform("TransformAudio3")).setTranslation(200.0,50.0,0.0)
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance("audio_emit3"))
          .setMaterial((new autoclass.Material()).setDiffuseColor(0.1,0.1,0.1).setEmissiveColor(0.8,0.8,0.8).setSpecularColor(0.01,0.01,0.01)))
        .setGeometry((new autoclass.Sphere()).setRadius(30))))
    .addChild((new autoclass.Transform("AnimData")).setId("AnimDataPoint").setTranslation(0.0,50.0,0.0))
    .addChild((new autoclass.Transform("AnimDataBoxH")).setTranslation(0.0,100.0,0.0))
    .addChild((new autoclass.Transform("AnimDataBoxM")).setTranslation(15.0,100.0,0.0))
    .addChild((new autoclass.Transform("AnimDataBoxL")).setTranslation(30.0,100.0,0.0))
    .addChild((new autoclass.Transform("AnimDataBoxMM")).setId("AnimDataBoxMMirror").setTranslation(-15.0,100.0,0.0))
    .addChild((new autoclass.Transform("AnimDataBoxLM")).setId("AnimDataBoxLMirror").setTranslation(-30.0,100.0,0.0))
    .addChild((new autoclass.Transform())
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance("floor"))
          .setMaterial((new autoclass.Material()).setDiffuseColor(0.1,0.1,0.1).setShininess(0.8).setSpecularColor(0.5,0.6,0.7)))
        .setGeometry((new autoclass.Cylinder()).setRadius(500))))
    .addChild((new autoclass.ListenerPointSource()).setId("ListenerPointSource").setTrackCurrentView(true))
    .addChild((new autoclass.StreamAudioDestination()).setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS").setId("AudioDestination")
      .addChild((new autoclass.DynamicsCompressor()).setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS").setId("DynamicsCompressor")
        .addChild((new autoclass.Gain()).setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS").setId("Gain4")
          .addChild((new autoclass.SpatialSound("Audio1")).setDistanceModel("INVERSE")
            .addChild((new autoclass.Gain()).setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS").setId("Gain1")
              .addChild((new autoclass.Analyser()).setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS").setId("Analyser1")
                .addChild((new autoclass.BiquadFilter()).setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS").setDetune(50.0).setFrequency(600).setId("BiquadFilter1").setQualityFactor(30.0).setType("allpass")
                  .addChild((new autoclass.AudioClip()).setDescription("Techno beat").setId("AudioClip1").setLoop(true).setUrl(new autoclass.MFString("\"sound/techno_beat.mp3\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/techno_beat.mp3\"")))))))
          .addChild((new autoclass.SpatialSound("Audio2")).setDistanceModel("INVERSE")
            .addChild((new autoclass.Gain()).setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS").setId("Gain2")
              .addChild((new autoclass.Analyser()).setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS").setId("Analyser2")
                .addChild((new autoclass.BiquadFilter()).setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS").setDetune(15.0).setFrequency(600).setId("BiquadFilter2").setQualityFactor(15.0).setType("allpass")
                  .addChild((new autoclass.AudioClip()).setDescription("Simple beat").setId("AudioClip2").setLoop(true).setUrl(new autoclass.MFString("\"sound/beat.mp3\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/beat.mp3\"")))))))
          .addChild((new autoclass.SpatialSound("Audio3")).setDistanceModel("INVERSE")
            .addChild((new autoclass.Gain()).setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS").setId("Gain3")
              .addChild((new autoclass.Analyser()).setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS").setId("Analyser3")
                .addChild((new autoclass.BiquadFilter()).setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS").setFrequency(1000).setId("BiquadFilter3").setQualityFactor(0).setType("allpass")
                  .addChild((new autoclass.AudioClip()).setDescription("Wobble loop").setId("AudioClip3").setLoop(true).setUrl(new autoclass.MFString("\"sound/wobble_loop.mp3\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/wobble_loop.mp3\"")))))))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return Filters model
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
		var testObject = new Filters();
		console.log ("Filters execution self-validation test results: " + testObject.validateSelf());
	}
}
new Filters().main();