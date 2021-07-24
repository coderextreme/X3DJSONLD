load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> List of all X3D4 audio graph nodes to test infrastructure and validation support. Absence of attributes means that checking and removal of default values is working. </p>
 <p> Related links: <a href="../../../AudioSpatialSound/AllAudioGraphNodesTest.java">AllAudioGraphNodesTest.java</a> source, <a href="../../../AudioSpatialSound/AllAudioGraphNodesTestIndex.html" target="_top">AllAudioGraphNodesTest catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../AudioSpatialSound/AllAudioGraphNodesTest.x3d">AllAudioGraphNodesTest.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> List of all X3D4 audio graph nodes to test infrastructure and validation support. Absence of attributes means that checking and removal of default values is working. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 25 October 2020 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 10 April 2021 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> Developmental test, no actual 3D model expected </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/AllAudioGraphNodesTest.x3d" target="_blank">https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/AllAudioGraphNodesTest.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
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

	* @author Don Brutzman
 */

function AllAudioGraphNodesTest
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
AllAudioGraphNodesTest.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3DObject().setProfile("Full").setVersion("4.0")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("AllAudioGraphNodesTest.x3d"))
    .addMeta(new metaObject().setName("description").setContent("List of all X3D4 audio graph nodes to test infrastructure and validation support. Absence of attributes means that checking and removal of default values is working."))
    .addMeta(new metaObject().setName("creator").setContent("Don Brutzman"))
    .addMeta(new metaObject().setName("created").setContent("25 October 2020"))
    .addMeta(new metaObject().setName("modified").setContent("10 April 2021"))
    .addMeta(new metaObject().setName("warning").setContent("Developmental test, no actual 3D model expected"))
    .addMeta(new metaObject().setName("identifier").setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/AllAudioGraphNodesTest.x3d"))
    .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName("license").setContent("../license.html")))
  .setScene(new SceneObject()
    .addChild(new WorldInfoObject().setTitle("AllAudioGraphNodes.x3d"))
    .addChild(new ShapeObject()
      .setGeometry(new BoxObject())
      .setAppearance(new AppearanceObject()
        .setAcousticProperties(new AcousticPropertiesObject())
        .setMaterial(new MaterialObject())))
    .addChild(new SpatialSoundObject()
      .addChild(new AnalyserObject()
        .addChild(new AudioDestinationObject()
          .addChild(new BiquadFilterObject()
            .addChild(new ChannelMergerObject()
              .addChild(new ChannelSelectorObject()
                .addChild(new ChannelSplitterObject()
                  .addChild(new ConvolverObject()
                    .addChild(new DelayObject()
                      .addChild(new DynamicsCompressorObject()
                        .addChild(new GainObject()
                          .addChild(new StreamAudioDestinationObject()
                            .addChild(new WaveShaperObject()
                              .addComments(" The following X3DSoundSourceNode nodes have no audio-graph children ")
                              .addChild(new BufferAudioSourceObject())
                              .addChild(new ListenerPointSourceObject())
                              .addChild(new MicrophoneSourceObject())
                              .addChild(new OscillatorSourceObject())
                              .addChild(new StreamAudioSourceObject()))))))))))))))
    .addChild(new SoundObject().setLocation(0.0,1.6,0.0)
      .setSource(new AudioClipObject().setDescription("testing").setUrl(new MFStringObject("\"sound/saxophone.mp3\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3\""))))
    .addChild(new SoundObject().setLocation(0.0,1.6,0.0)
      .setSource(new MovieTextureObject().setDescription("testing").setUrl(new MFStringObject("\"bogus.mpg\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/bogus.mpg\"")))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return AllAudioGraphNodesTest model
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
			if (meta.getName().equals(metaObject.NAME_ERROR) ||
				meta.getName().equals(metaObject.NAME_WARNING) ||
				meta.getName().equals(metaObject.NAME_HINT) ||
				meta.getName().equals(metaObject.NAME_INFO) ||
				meta.getName().equals(metaObject.NAME_TODO))
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
		var testObject = new AllAudioGraphNodesTest();
		print ("AllAudioGraphNodesTest execution self-validation test results: " + testObject.validateSelf());
	}
}
new AllAudioGraphNodesTest().main();