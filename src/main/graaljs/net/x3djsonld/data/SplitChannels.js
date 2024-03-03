load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> This X3D scene includes a simple sound source which can be moved right and left. Depending on the position of the sound source, the user can hear the produced sound from the corresponding output speaker. Accordingly, there is a source that can be passed through a SpatialSound for the spatialization of the input audio. The approach is based on the relative position of the source and the listener, in comparison to the panner. </p>
 <p> Related links: <a href="../../../AudioSpatialSound/SplitChannels.java">SplitChannels.java</a> source, <a href="../../../AudioSpatialSound/SplitChannelsIndex.html" target="_top">SplitChannels catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
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
			<td> <a href="http://www.medialab.hmu.gr/minipages/x3domAudio" target="_blank">http://www.medialab.hmu.gr/minipages/x3domAudio</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SplitChannels.x3d" target="_blank">https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SplitChannels.x3d</a> </td>
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

function SplitChannels
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
SplitChannels.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3D().setProfile("Full").setVersion("4.0")
  .setHead(new head()
    .addMeta(new meta().setName("title").setContent("SplitChannels.x3d"))
    .addMeta(new meta().setName("description").setContent("This X3D scene includes a simple sound source which can be moved right and left. Depending on the position of the sound source, the user can hear the produced sound from the corresponding output speaker. Accordingly, there is a source that can be passed through a SpatialSound for the spatialization of the input audio. The approach is based on the relative position of the source and the listener, in comparison to the panner."))
    .addMeta(new meta().setName("info").setContent("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API."))
    .addMeta(new meta().setName("creator").setContent("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman"))
    .addMeta(new meta().setName("created").setContent("28 October 2020"))
    .addMeta(new meta().setName("modified").setContent("5 December 2021"))
    .addMeta(new meta().setName("reference").setContent("CHANGELOG.txt"))
    .addMeta(new meta().setName("TODO").setContent("credit for audio files"))
    .addMeta(new meta().setName("reference").setContent("http://www.medialab.hmu.gr/minipages/x3domAudio"))
    .addMeta(new meta().setName("identifier").setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SplitChannels.x3d"))
    .addMeta(new meta().setName("generator").setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName("license").setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("SplitChannels.x3d"))
    .addChild(new NavigationInfo().setId("NAV").setType("NONE"))
    .addChild(new Background().setSkyColor(new MFColor(Java.to([doubleToFloat(0.200),doubleToFloat(0.200),doubleToFloat(0.210)], Java.type("float[]")))))
    .addChild(new Viewpoint().setOrientation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.5)).setPosition(doubleToFloat(0.0),doubleToFloat(500.0),doubleToFloat(600.0)).setRetainUserOffsets(true))
    .addChild(new Transform("PowerR").setTranslation(doubleToFloat(100.0),doubleToFloat(400.0),doubleToFloat(400.0))
      .addChild(new Transform().setId("pR").setRotation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.5)).setTranslation(doubleToFloat(0.0),doubleToFloat(40.0),doubleToFloat(0.0))
        .addChild(new Shape()
          .setAppearance(new Appearance("audio_emit")
            .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)).setEmissiveColor(doubleToFloat(0.8),doubleToFloat(0.8),doubleToFloat(0.8)).setSpecularColor(doubleToFloat(0.01),doubleToFloat(0.01),doubleToFloat(0.01))))
          .setGeometry(new Box().setSize(doubleToFloat(10.0),doubleToFloat(80.0),doubleToFloat(0.01)))))
      .addChild(new Transform().setRotation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.5)).setTranslation(doubleToFloat(-2.7),doubleToFloat(37.0),doubleToFloat(0.0))
        .addChild(new Shape()
          .setAppearance(new Appearance("audio_emit2")
            .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)).setEmissiveColor(doubleToFloat(0.8),doubleToFloat(0.8),doubleToFloat(0.8)).setSpecularColor(doubleToFloat(0.01),doubleToFloat(0.01),doubleToFloat(0.01)))
            .setTexture(new ImageTexture().setUrl(new MFString("\"images/line.png\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png\""))))
          .setGeometry(new Box().setSize(doubleToFloat(25.0),doubleToFloat(83.0),doubleToFloat(0.01)))))
      .addChild(new Transform("volumeRight").setRotation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.5)).setScale(doubleToFloat(10.0),doubleToFloat(10.0),doubleToFloat(10.0)).setTranslation(doubleToFloat(0.0),doubleToFloat(-10.0),doubleToFloat(0.0))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0.0933).setDiffuseColor(doubleToFloat(0.345),doubleToFloat(0.345),doubleToFloat(0.882)).setShininess(0.51).setSpecularColor(doubleToFloat(0.46),doubleToFloat(0.46),doubleToFloat(0.46))))
          .setGeometry(new Text().setString(new MFString("\"Right Channel Volume\""))
            .setFontStyle(new FontStyle().setFamily(new MFString("\"Times\"")).setStyle("BOLD"))))))
    .addChild(new Transform("PowerL").setTranslation(doubleToFloat(-100.0),doubleToFloat(400.0),doubleToFloat(400.0))
      .addChild(new Transform().setId("pL").setRotation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.5)).setTranslation(doubleToFloat(0.0),doubleToFloat(40.0),doubleToFloat(0.0))
        .addChild(new Shape()
          .setAppearance(new Appearance("audio_emit3")
            .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)).setEmissiveColor(doubleToFloat(0.8),doubleToFloat(0.8),doubleToFloat(0.8)).setSpecularColor(doubleToFloat(0.01),doubleToFloat(0.01),doubleToFloat(0.01))))
          .setGeometry(new Box().setSize(doubleToFloat(10.0),doubleToFloat(80.0),doubleToFloat(0.01)))))
      .addChild(new Transform().setRotation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.5)).setTranslation(doubleToFloat(13.2),doubleToFloat(37.0),doubleToFloat(0.0))
        .addChild(new Shape()
          .setAppearance(new Appearance("audio_emit4")
            .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)).setEmissiveColor(doubleToFloat(0.8),doubleToFloat(0.8),doubleToFloat(0.8)).setSpecularColor(doubleToFloat(0.01),doubleToFloat(0.01),doubleToFloat(0.01)))
            .setTexture(new ImageTexture().setUrl(new MFString("\"images/line.png\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png\""))))
          .setGeometry(new Box().setSize(doubleToFloat(25.0),doubleToFloat(83.0),doubleToFloat(0.01)))))
      .addChild(new Transform("volumeLeft").setRotation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.5)).setScale(doubleToFloat(10.0),doubleToFloat(10.0),doubleToFloat(10.0)).setTranslation(doubleToFloat(0.0),doubleToFloat(-10.0),doubleToFloat(0.0))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0.0933).setDiffuseColor(doubleToFloat(0.345),doubleToFloat(0.345),doubleToFloat(0.882)).setShininess(0.51).setSpecularColor(doubleToFloat(0.46),doubleToFloat(0.46),doubleToFloat(0.46))))
          .setGeometry(new Text().setString(new MFString("\"Left Channel Volume\""))
            .setFontStyle(new FontStyle().setFamily(new MFString("\"Times\"")).setStyle("BOLD"))))))
    .addChild(new Transform()
      .addChild(new Shape()
        .setAppearance(new Appearance("floor")
          .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.1),doubleToFloat(0.1),doubleToFloat(0.1)).setShininess(0.8).setSpecularColor(doubleToFloat(0.5),doubleToFloat(0.6),doubleToFloat(0.7))))
        .setGeometry(new Box().setSize(doubleToFloat(1500.0),doubleToFloat(10.0),doubleToFloat(500.0)))))
    .addChild(new ListenerPointSource().setId("ListenerPointSource").setTrackCurrentView(true))
    .addChild(new StreamAudioDestination().setId("AudioDestination")
      .addChild(new Gain().setId("Gain3")
        .addChild(new ChannelMerger().setId("ChannelMerger")
          .addChild(new ChannelSelector().setId("ChannelSelector0")
            .addChild(new Gain()))
          .addChild(new ChannelSelector().setChannelSelection(1).setId("ChannelSelector1")
            .addChild(new Gain())))))
    .addChild(new ChannelSplitter("ChannelSplitter").setChannelCountMode("EXPLICIT")
      .addChild(new AudioClip().setDescription("Violin").setUrl(new MFString("\"sound/violin.mp3\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3\""))))
    .addChild(new Transform("Audio3").setRotation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.5)).setTranslation(doubleToFloat(0.0),doubleToFloat(100.0),doubleToFloat(0.0))
      .addChild(new Shape()
        .setAppearance(new Appearance("audio_emit5")
          .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.3),doubleToFloat(1.0),doubleToFloat(0.3)).setEmissiveColor(doubleToFloat(0.8),doubleToFloat(0.8),doubleToFloat(0.8)).setSpecularColor(doubleToFloat(0.01),doubleToFloat(0.01),doubleToFloat(0.01)))
          .setTexture(new ImageTexture().setUrl(new MFString("\"images/loudspeaker.png\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/loudspeaker.png\""))))
        .setGeometry(new Box().setSize(doubleToFloat(100.0),doubleToFloat(100.0),doubleToFloat(0.001))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return SplitChannels model
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
			var metaObject = metaList[m];
			if (metaObject.getName() === metaObject.NAME_ERROR ||
				metaObject.getName() === metaObject.NAME_WARNING ||
				metaObject.getName() === metaObject.NAME_HINT ||
				metaObject.getName() === metaObject.NAME_INFO ||
				metaObject.getName() === metaObject.NAME_TODO)
			{
				metaResult += metaObject.toStringX3D();
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
		var testObject = new SplitChannels();
		print ("SplitChannels execution self-validation test results: " + testObject.validateSelf());
	}
}
new SplitChannels().main();