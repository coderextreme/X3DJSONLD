load('X3Dautoclass.js');

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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
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
  function doubleToFloat(d) {
    if (Float32Array) {
        return new Float32Array([d])[0];
    }
  }
Filters.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3D().setProfile("Full").setVersion("4.0")
  .setHead(new head()
    .addMeta(new meta().setName("title").setContent("Filters.x3d"))
    .addMeta(new meta().setName("description").setContent("This X3D scene involves three sound sources. Each of them is visualized by a 3D object (in our case is a sphere) that depicts the sound effects. Specifically, we have added filters through of them we are able to manage the different sound effects in an impressive way. Filters can be composed of a number of attributes, frequency, detune, gain and the quality factor which also known as Q. Furthermore, the filters are classified in some specific types, depending on the sound effects that produce. In detail, there is the Low-pass filter which can create more muffled sound. Another one is the High-pass filter, which is used to generate tinny sound. Equally important is the Band-pass filter, which cuts off low and high frequencies and passes through only these within a certain range. On the contrary, the Notch filter has exactly the opposite operation of the Band-pass filter. Then is the Low-shelf filter, its role is to change the amount of bass in a sound, as a result the frequencies that are lower than the current frequency get a boost, while them that are over it remain unchanged. Next, the High-shelf filter is responsible for the quantity of treble in a sound. Moreover, Peaking filter is used in order to handle the amount of midrange in a sound. Lastly, there is the All-pass filter, whose role is to introduce phaser effects."))
    .addMeta(new meta().setName("info").setContent("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API."))
    .addMeta(new meta().setName("creator").setContent("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman"))
    .addMeta(new meta().setName("created").setContent("28 October 2020"))
    .addMeta(new meta().setName("modified").setContent("5 December 2021"))
    .addMeta(new meta().setName("reference").setContent("CHANGELOG.txt"))
    .addMeta(new meta().setName("TODO").setContent("credit for audio files"))
    .addMeta(new meta().setName("reference").setContent("https://www.medialab.hmu.gr/minipages/x3domAudio"))
    .addMeta(new meta().setName("identifier").setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/Filters.x3d"))
    .addMeta(new meta().setName("generator").setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName("license").setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("Filters.x3d"))
    .addChild(new NavigationInfo().setId("NAV"))
    .addChild(new Background().setSkyColor(new MFColor(Java.to([doubleToFloat(0.200),doubleToFloat(0.200),doubleToFloat(0.200)], Java.type("float[]")))))
    .addChild(new Viewpoint().setDescription("View entire audio model").setOrientation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.5)).setPosition(doubleToFloat(0.0),doubleToFloat(500.0),doubleToFloat(600.0)).setRetainUserOffsets(true))
    .addChild(new Transform("TransformAudio1").setTranslation(doubleToFloat(-200.0),doubleToFloat(50.0),doubleToFloat(0.0))
      .addChild(new Shape()
        .setAppearance(new Appearance("audio_emit")
          .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.1),doubleToFloat(0.1),doubleToFloat(0.1)).setEmissiveColor(doubleToFloat(0.8),doubleToFloat(0.8),doubleToFloat(0.8)).setSpecularColor(doubleToFloat(0.01),doubleToFloat(0.01),doubleToFloat(0.01))))
        .setGeometry(new Sphere().setRadius(30))))
    .addChild(new Transform("TransformAudio2").setTranslation(doubleToFloat(0.0),doubleToFloat(50.0),doubleToFloat(0.0))
      .addChild(new Shape()
        .setAppearance(new Appearance("audio_emit2")
          .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.1),doubleToFloat(0.1),doubleToFloat(0.1)).setEmissiveColor(doubleToFloat(0.8),doubleToFloat(0.8),doubleToFloat(0.8)).setSpecularColor(doubleToFloat(0.01),doubleToFloat(0.01),doubleToFloat(0.01))))
        .setGeometry(new Sphere().setRadius(30))))
    .addChild(new Transform("TransformAudio3").setTranslation(doubleToFloat(200.0),doubleToFloat(50.0),doubleToFloat(0.0))
      .addChild(new Shape()
        .setAppearance(new Appearance("audio_emit3")
          .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.1),doubleToFloat(0.1),doubleToFloat(0.1)).setEmissiveColor(doubleToFloat(0.8),doubleToFloat(0.8),doubleToFloat(0.8)).setSpecularColor(doubleToFloat(0.01),doubleToFloat(0.01),doubleToFloat(0.01))))
        .setGeometry(new Sphere().setRadius(30))))
    .addChild(new Transform("AnimData").setId("AnimDataPoint").setTranslation(doubleToFloat(0.0),doubleToFloat(50.0),doubleToFloat(0.0)))
    .addChild(new Transform("AnimDataBoxH").setTranslation(doubleToFloat(0.0),doubleToFloat(100.0),doubleToFloat(0.0)))
    .addChild(new Transform("AnimDataBoxM").setTranslation(doubleToFloat(15.0),doubleToFloat(100.0),doubleToFloat(0.0)))
    .addChild(new Transform("AnimDataBoxL").setTranslation(doubleToFloat(30.0),doubleToFloat(100.0),doubleToFloat(0.0)))
    .addChild(new Transform("AnimDataBoxMM").setId("AnimDataBoxMMirror").setTranslation(doubleToFloat(-15.0),doubleToFloat(100.0),doubleToFloat(0.0)))
    .addChild(new Transform("AnimDataBoxLM").setId("AnimDataBoxLMirror").setTranslation(doubleToFloat(-30.0),doubleToFloat(100.0),doubleToFloat(0.0)))
    .addChild(new Transform()
      .addChild(new Shape()
        .setAppearance(new Appearance("floor")
          .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.1),doubleToFloat(0.1),doubleToFloat(0.1)).setShininess(0.8).setSpecularColor(doubleToFloat(0.5),doubleToFloat(0.6),doubleToFloat(0.7))))
        .setGeometry(new Cylinder().setRadius(500))))
    .addChild(new ListenerPointSource().setId("ListenerPointSource").setTrackCurrentView(true))
    .addChild(new StreamAudioDestination().setId("AudioDestination")
      .addChild(new DynamicsCompressor().setId("DynamicsCompressor")
        .addChild(new Gain().setId("Gain4")
          .addChild(new SpatialSound("Audio1")
            .addChild(new Gain().setId("Gain1")
              .addChild(new Analyser().setId("Analyser1")
                .addChild(new BiquadFilter().setDetune(50.0).setFrequency(600).setId("BiquadFilter1").setQualityFactor(30.0).setType("ALLPASS")
                  .addChild(new AudioClip().setDescription("Techno beat").setId("AudioClip1").setLoop(true).setUrl(new MFString("\"sound/techno_beat.mp3\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/techno_beat.mp3\"")))))))
          .addChild(new SpatialSound("Audio2")
            .addChild(new Gain().setId("Gain2")
              .addChild(new Analyser().setId("Analyser2")
                .addChild(new BiquadFilter().setDetune(15.0).setFrequency(600).setId("BiquadFilter2").setQualityFactor(15.0).setType("ALLPASS")
                  .addChild(new AudioClip().setDescription("Simple beat").setId("AudioClip2").setLoop(true).setUrl(new MFString("\"sound/beat.mp3\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/beat.mp3\"")))))))
          .addChild(new SpatialSound("Audio3")
            .addChild(new Gain().setId("Gain3")
              .addChild(new Analyser().setId("Analyser3")
                .addChild(new BiquadFilter().setFrequency(1000).setId("BiquadFilter3").setQualityFactor(0).setType("ALLPASS")
                  .addChild(new AudioClip().setDescription("Wobble loop").setId("AudioClip3").setLoop(true).setUrl(new MFString("\"sound/wobble_loop.mp3\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/wobble_loop.mp3\"")))))))))));
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
			meta = metaList[m];
			if (meta.getName().equals(meta.NAME_ERROR) ||
				meta.getName().equals(meta.NAME_WARNING) ||
				meta.getName().equals(meta.NAME_HINT) ||
				meta.getName().equals(meta.NAME_INFO) ||
				meta.getName().equals(meta.NAME_TODO))
			{
				metaResult += meta.toStringX3D();
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
		var testObject = new Filters();
		print ("Filters execution self-validation test results: " + testObject.validateSelf());
	}
}
new Filters().main();