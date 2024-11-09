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
 * <p> This X3D scene includes a simple sound source which can be moved right and left. Depending on the position of the sound source, the user can hear the produced sound from the corresponding output speaker. Accordingly, there is a source that can be passed through a SpatialSound for the spatialization of the input audio. The approach is based on the relative position of the source and the listener, in comparison to the panner. </p>
 <p> Related links: <a href="../../../AudioSpatialSound/NeedClassName.java">NeedClassName.java</a> source, <a href="../../../AudioSpatialSound/SplitChannelsIndex.html" target="_top">SplitChannels catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../AudioSpatialSound/SplitChannels.x3d">SplitChannels.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> This X3D scene includes a simple sound source which can be moved right and left. Depending on the position of the sound source, the user can hear the produced sound from the corresponding output speaker. Accordingly, there is a source that can be passed through a SpatialSound for the spatialization of the input audio. The approach is based on the relative position of the source and the listener, in comparison to the panner. </td>
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
			<td> 23 April 2023 </td>
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
			<td> <a href="http://www.medialab.hmu.gr/minipages/x3domAudio" target="_blank">http://www.medialab.hmu.gr/minipages/x3domAudio</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/SplitChannels.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/SplitChannels.x3d</a> </td>
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

function NeedClassName
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
NeedClassName.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Full").setVersion("4.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("SplitChannels.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("This X3D scene includes a simple sound source which can be moved right and left. Depending on the position of the sound source, the user can hear the produced sound from the corresponding output speaker. Accordingly, there is a source that can be passed through a SpatialSound for the spatialization of the input audio. The approach is based on the relative position of the source and the listener, in comparison to the panner."))
    .addMeta((new autoclass.meta()).setName("info").setContent("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("created").setContent("28 October 2020"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("23 April 2023"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("CHANGELOG.txt"))
    .addMeta((new autoclass.meta()).setName("TODO").setContent("credit for audio files"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.medialab.hmu.gr/minipages/x3domAudio"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/SplitChannels.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("SplitChannels.x3d"))
    .addChild((new autoclass.NavigationInfo()).setId("NAV").setType("\"NONE\""))
    .addChild((new autoclass.Background()).setSkyColor(new autoclass.MFColor(java.newArray("float", [0.200,0.200,0.210]))))
    .addChild((new autoclass.Viewpoint()).setOrientation(1.0,0.0,0.0,-0.5).setPosition(0.0,500.0,600.0).setRetainUserOffsets(true))
    .addChild((new autoclass.Transform("PowerR")).setTranslation(100.0,400.0,400.0)
      .addChild((new autoclass.Transform()).setId("pR").setRotation(1.0,0.0,0.0,-0.5).setTranslation(0.0,40.0,0.0)
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance("audio_emit"))
            .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,1.0,0.0).setEmissiveColor(0.8,0.8,0.8).setSpecularColor(0.01,0.01,0.01)))
          .setGeometry((new autoclass.Box()).setSize(10.0,80.0,0.01))))
      .addChild((new autoclass.Transform()).setRotation(1.0,0.0,0.0,-0.5).setTranslation(-2.7,37.0,0.0)
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance("audio_emit2"))
            .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,1.0,0.0).setEmissiveColor(0.8,0.8,0.8).setSpecularColor(0.01,0.01,0.01))
            .setTexture((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"images/line.png\" \"https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png\""))))
          .setGeometry((new autoclass.Box()).setSize(25.0,83.0,0.01))))
      .addChild((new autoclass.Transform("volumeRight")).setRotation(1.0,0.0,0.0,-0.5).setScale(10.0,10.0,10.0).setTranslation(0.0,-10.0,0.0)
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setAmbientIntensity(0.0933).setDiffuseColor(0.345,0.345,0.882).setShininess(0.51).setSpecularColor(0.46,0.46,0.46)))
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"Right Channel Volume\""))
            .setFontStyle((new autoclass.FontStyle("VolumeFontStyle")).setFamily(new autoclass.MFString("\"Times\" \"SERIF\"")).setStyle("BOLD"))))))
    .addChild((new autoclass.Transform("PowerL")).setTranslation(-100.0,400.0,400.0)
      .addChild((new autoclass.Transform()).setId("pL").setRotation(1.0,0.0,0.0,-0.5).setTranslation(0.0,40.0,0.0)
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance("audio_emit3"))
            .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,1.0,0.0).setEmissiveColor(0.8,0.8,0.8).setSpecularColor(0.01,0.01,0.01)))
          .setGeometry((new autoclass.Box()).setSize(10.0,80.0,0.01))))
      .addChild((new autoclass.Transform()).setRotation(1.0,0.0,0.0,-0.5).setTranslation(13.2,37.0,0.0)
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance("audio_emit4"))
            .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,1.0,0.0).setEmissiveColor(0.8,0.8,0.8).setSpecularColor(0.01,0.01,0.01))
            .setTexture((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"images/line.png\" \"https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png\""))))
          .setGeometry((new autoclass.Box()).setSize(25.0,83.0,0.01))))
      .addChild((new autoclass.Transform("volumeLeft")).setRotation(1.0,0.0,0.0,-0.5).setScale(10.0,10.0,10.0).setTranslation(0.0,-10.0,0.0)
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setAmbientIntensity(0.0933).setDiffuseColor(0.345,0.345,0.882).setShininess(0.51).setSpecularColor(0.46,0.46,0.46)))
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"Left Channel Volume\""))
            .setFontStyle((new autoclass.FontStyle()))))))
    .addChild((new autoclass.Transform())
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance("floor"))
          .setMaterial((new autoclass.Material()).setDiffuseColor(0.1,0.1,0.1).setShininess(0.8).setSpecularColor(0.5,0.6,0.7)))
        .setGeometry((new autoclass.Box()).setSize(1500.0,10.0,500.0))))
    .addChild((new autoclass.ListenerPointSource()).setId("ListenerPointSource").setTrackCurrentView(true))
    .addChild((new autoclass.StreamAudioDestination()).setId("AudioDestination")
      .addChild((new autoclass.Gain()).setId("Gain3")
        .addChild((new autoclass.ChannelMerger()).setId("ChannelMerger")
          .addChild((new autoclass.ChannelSelector()).setId("ChannelSelector0")
            .addChild((new autoclass.Gain())))
          .addChild((new autoclass.ChannelSelector()).setChannelSelection(1).setId("ChannelSelector1")
            .addChild((new autoclass.Gain()))))))
    .addChild((new autoclass.ChannelSplitter("ChannelSplitter")).setChannelCountMode("EXPLICIT")
      .addChild((new autoclass.AudioClip()).setDescription("Violin").setUrl(new autoclass.MFString("\"sound/violin.mp3\" \"https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3\""))))
    .addChild((new autoclass.Transform("Audio3")).setRotation(1.0,0.0,0.0,-0.5).setTranslation(0.0,100.0,0.0)
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance("audio_emit5"))
          .setMaterial((new autoclass.Material()).setDiffuseColor(0.3,1.0,0.3).setEmissiveColor(0.8,0.8,0.8).setSpecularColor(0.01,0.01,0.01))
          .setTexture((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"images/loudspeaker.png\" \"https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/loudspeaker.png\""))))
        .setGeometry((new autoclass.Box()).setSize(100.0,100.0,0.001)))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return NeedClassName model
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
		var testObject = new NeedClassName();
		console.log ("NeedClassName execution self-validation test results: " + testObject.validateSelf());
	}
}
new NeedClassName().main();