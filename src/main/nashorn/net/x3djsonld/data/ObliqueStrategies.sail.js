load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Text scripting and animation example using Oblique Strategies card set by Brian Eno. </p>
 <p> Related links: <a href="../../../Inspiration/ObliqueStrategies_sail.java">ObliqueStrategies_sail.java</a> source, <a href="../../../Inspiration/ObliqueStrategiesIndex.html" target="_top">ObliqueStrategies catalog page</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Inspiration/ObliqueStrategies.x3d">ObliqueStrategies.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Text scripting and animation example using Oblique Strategies card set by Brian Eno. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman, John Kelly, Ben Cheng </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 3 November 2013 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 18 October 2015 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../Inspiration/oblique.html">oblique.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> ObliqueStrategies.txt </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../Inspiration/ObliqueStrategiesScript.js">ObliqueStrategiesScript.js</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://music.hyperreal.org/artists/brian_eno/oblique/oblique.html" target="_blank">http://music.hyperreal.org/artists/brian_eno/oblique/oblique.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.eno-web.co.uk/obliques.html" target="_blank">http://www.eno-web.co.uk/obliques.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://gothpunk.com/haiku-intro.html" target="_blank">http://gothpunk.com/haiku-intro.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.rtqe.net/ObliqueStrategies/OSintro.html" target="_blank">http://www.rtqe.net/ObliqueStrategies/OSintro.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://en.wikipedia.org/wiki/Oblique_Strategies" target="_blank">https://en.wikipedia.org/wiki/Oblique_Strategies</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> Brian Eno, Oblique Strategies </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../Inspiration/images/ObliqueStrategiesEntryScreen.png">images/ObliqueStrategiesEntryScreen.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> audio </i> </td>
			<td> <a href="http://translate.google.com/translate_tts?tl=en&amp;q=hello%20X3D" target="_blank">http://translate.google.com/translate_tts?tl=en&amp;q=hello%20X3D</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> audio </i> </td>
			<td> translate_tts_HelloX3D.mp3 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> audio </i> </td>
			<td> translate_tts_HelloX3D.wav </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> multiliingual translation parameter </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://stackoverflow.com/questions/9163988/download-mp3-from-google-translate-text-to-speech" target="_blank">http://stackoverflow.com/questions/9163988/download-mp3-from-google-translate-text-to-speech</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.greenbot.com/article/2105862/how-to-get-started-with-google-text-to-speech.html" target="_blank">http://www.greenbot.com/article/2105862/how-to-get-started-with-google-text-to-speech.html</a> </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> under development, scene Sound/AudioClip triggering (or retrieved file format) not working </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> BSContact error: Script node TextScript: parse error: line 15 " var strategy = []; </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://X3dGraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategies.x3d" target="_blank">http://X3dGraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategies.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../Inspiration/../license.html">../license.html</a> </td>
		</tr>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center;" colspan="2">  &nbsp; </td>
		</tr>
	</table>

	<p>
		This program uses the
		<a href="http://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="http://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
	</p>

	* @author Don Brutzman, John Kelly, Ben Cheng
 */

function ObliqueStrategies_sail
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
ObliqueStrategies_sail.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("ObliqueStrategies.x3d"))
    .addMeta(new metaObject().setName("description").setContent("Text scripting and animation example using Oblique Strategies card set by Brian Eno."))
    .addMeta(new metaObject().setName("creator").setContent("Don Brutzman, John Kelly, Ben Cheng"))
    .addMeta(new metaObject().setName("created").setContent("3 November 2013"))
    .addMeta(new metaObject().setName("modified").setContent("18 October 2015"))
    .addMeta(new metaObject().setName("reference").setContent("oblique.html"))
    .addMeta(new metaObject().setName("reference").setContent("ObliqueStrategies.txt"))
    .addMeta(new metaObject().setName("reference").setContent("ObliqueStrategiesScript.js"))
    .addMeta(new metaObject().setName("reference").setContent("http://music.hyperreal.org/artists/brian_eno/oblique/oblique.html"))
    .addMeta(new metaObject().setName("reference").setContent("http://www.eno-web.co.uk/obliques.html"))
    .addMeta(new metaObject().setName("reference").setContent("http://gothpunk.com/haiku-intro.html"))
    .addMeta(new metaObject().setName("reference").setContent("http://www.rtqe.net/ObliqueStrategies/OSintro.html"))
    .addMeta(new metaObject().setName("reference").setContent("https://en.wikipedia.org/wiki/Oblique_Strategies"))
    .addMeta(new metaObject().setName("subject").setContent("Brian Eno, Oblique Strategies"))
    .addMeta(new metaObject().setName("Image").setContent("images/ObliqueStrategiesEntryScreen.png"))
    .addMeta(new metaObject().setName("audio").setContent("http://translate.google.com/translate_tts?tl=en&q=hello%20X3D"))
    .addMeta(new metaObject().setName("audio").setContent("translate_tts_HelloX3D.mp3"))
    .addMeta(new metaObject().setName("audio").setContent("translate_tts_HelloX3D.wav"))
    .addMeta(new metaObject().setName("TODO").setContent("multiliingual translation parameter"))
    .addMeta(new metaObject().setName("reference").setContent("http://stackoverflow.com/questions/9163988/download-mp3-from-google-translate-text-to-speech"))
    .addMeta(new metaObject().setName("reference").setContent("http://www.greenbot.com/article/2105862/how-to-get-started-with-google-text-to-speech.html"))
    .addMeta(new metaObject().setName("warning").setContent("under development, scene Sound/AudioClip triggering (or retrieved file format) not working"))
    .addMeta(new metaObject().setName("warning").setContent("BSContact error: Script node TextScript: parse error: line 15 \" var strategy = [];"))
    .addMeta(new metaObject().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategies.x3d"))
    .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName("license").setContent("../license.html")))
  .setScene(new SceneObject()
    .addChild(new NavigationInfoObject())
    .addChild(new BackgroundObject().setSkyColor(new MFColorObject(Java.to([0.419608,0.427451,1.0], Java.type("float[]")))))
    .addChild(new TransformObject().setTranslation(0.0,1.0,0.0).setScale(0.4,0.4,0.4)
      .addChild(new TouchSensorObject("RandomTextClickedSensor").setDescription("Select to see a new strategy"))
      .addChild(new ShapeObject()
        .setGeometry(new TextObject().setString(new MFStringObject("\"Oblique Strategies\" \"\" \"(Over One Hundred Worthwhile Dilemmas)\" \"\" \"by Brian Eno and Peter Schmidt\""))
          .setFontStyle(new FontStyleObject("MessageFont").setJustify(new MFStringObject("\"MIDDLE\" \"MIDDLE\"")).setFamily(new MFStringObject("\"SANS\"")).setStyle("BOLD")))
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setDiffuseColor(1.0,1.0,1.0))))
      .addChild(new TransformObject().setScale(10.0,3.0,1.0)
        .addChild(new ShapeObject("HeadlineClickSurface")
          .setGeometry(new IndexedFaceSetObject().setSolid(false).setCoordIndex(Java.to([0,1,2,3,-1], Java.type("int[]")))
            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([1.0,1.0,0.0,1.0,-1.0,0.0,-1.0,-1.0,0.0,-1.0,1.0,0.0], Java.type("float[]"))))))
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setShininess(0.07).setAmbientIntensity(0.245763).setSpecularColor(0.336735,0.051091,0.051091).setDiffuseColor(0.34773,0.090909,0.005289).setTransparency(0.8))))))
    .addChild(new ScriptObject("TextScript").setUrl(new MFStringObject("\"./ObliqueStrategiesScript.js\""))
      .addComments(" initialize() method includes unit test to printAllStrategies() to console ")
      .addComments(" TODO insert field definitions here (index string_changed previous next random) and then animate! ")
      .addField(new fieldObject().setAccessType("initializeOnly").setName("index").setType("SFInt32").setValue("0").setAppinfo("index for active strategy card, -1 means no selection"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("string_changed").setType("MFString").setAppinfo("latest strategy card value"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("textToSpeechUrl").setType("MFString").setAppinfo("url to invoke Google Translate"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("newCardTime").setType("SFTime").setAppinfo("activate Sound node"))
      .addField(new fieldObject().setAccessType("inputOnly").setName("selectPreviousCard").setType("SFBool"))
      .addField(new fieldObject().setAccessType("inputOnly").setName("selectNextCard").setType("SFBool"))
      .addField(new fieldObject().setAccessType("inputOnly").setName("selectRandomCard").setType("SFBool"))
      .addField(new fieldObject().setAccessType("initializeOnly").setName("traceEnabled").setType("SFBool").setValue("true").setAppinfo("controls console tracing")))
    .addChild(new TransformObject("CardTransform").setTranslation(0.0,-1.5,0.0).setScale(0.4,0.4,0.4)
      .addChild(new ShapeObject()
        .setGeometry(new TextObject("CardText")
          .setFontStyle(new FontStyleObject().setJustify(new MFStringObject("\"MIDDLE\" \"MIDDLE\"")).setFamily(new MFStringObject("\"SANS\"")).setStyle("BOLD")))
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setDiffuseColor(1.0,1.0,1.0))))
      .addChild(new ROUTEObject().setFromNode("TextScript").setFromField("string_changed").setToNode("CardText").setToField("string"))
      .addChild(new SoundObject("CardSoundSpatialization").setMaxBack(100).setMaxFront(100).setMinBack(20).setMinFront(20)
        .addComments(" Make sure the sound source AudioClip is audible at the user location ")
        .addComments(" Not all X3D players seem to use the .mp3 ")
        .addComments(" &#38; is ampersand character, avoids escaping problems and inconsistencies in browsers and X3D players ")
        .addComments(" %20 is space character used in uri/url encoding ")
        .setSource(new AudioClipObject("TextToSpeechAudioClip").setDescription("sends strategy text google translate").setUrl(new MFStringObject("\"http://translate.google.com/translate_tts?tl=en&q=Feed%20the%20recording%20back%20out%20of%20the%20medium\" \"translate_tts_mp3FileFormatNotSupported.wav\""))))
      .addChild(new ROUTEObject().setFromNode("TextScript").setFromField("textToSpeechUrl").setToNode("TextToSpeechAudioClip").setToField("url"))
      .addChild(new ROUTEObject().setFromNode("TextScript").setFromField("newCardTime").setToNode("TextToSpeechAudioClip").setToField("startTime")))
    .addChild(new TransformObject().setTranslation(-3.2,2.5,0.0).setScale(0.4,0.4,0.4)
      .addChild(new TouchSensorObject("PreviousTextClickedSensor").setDescription("Select to see previous strategy"))
      .addChild(new ROUTEObject().setFromNode("PreviousTextClickedSensor").setFromField("isActive").setToNode("TextScript").setToField("selectPreviousCard"))
      .addChild(new ShapeObject()
        .setGeometry(new TextObject().setString(new MFStringObject("\"previous\""))
          .setFontStyle(new FontStyleObject().setUSE("MessageFont")))
        .setAppearance(new AppearanceObject("InterfaceAppearance")
          .setMaterial(new MaterialObject().setDiffuseColor(1.0,0.0,0.6))))
      .addChild(new TransformObject().setScale(2.0,0.6,1.0)
        .addChild(new ShapeObject("TransparentClickSurface")
          .addComments(" support Selectable Text with a scalable IFS ")
          .setGeometry(new IndexedFaceSetObject().setSolid(false).setCoordIndex(Java.to([0,1,2,3,-1], Java.type("int[]")))
            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([1.0,1.0,0.0,1.0,-1.0,0.0,-1.0,-1.0,0.0,-1.0,1.0,0.0], Java.type("float[]"))))))
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setTransparency(1))))))
    .addChild(new TransformObject().setScale(0.4,0.4,0.4).setTranslation(3.5,2.5,0.0)
      .addChild(new TouchSensorObject("NextTextClickedSensor").setDescription("Select to see next strategy"))
      .addChild(new ROUTEObject().setFromNode("NextTextClickedSensor").setFromField("isActive").setToNode("TextScript").setToField("selectNextCard"))
      .addChild(new ShapeObject()
        .setGeometry(new TextObject().setString(new MFStringObject("\"next\""))
          .setFontStyle(new FontStyleObject().setUSE("MessageFont")))
        .setAppearance(new AppearanceObject().setUSE("InterfaceAppearance")))
      .addChild(new TransformObject().setScale(1.2,0.6,1.0)
        .addChild(new ShapeObject().setUSE("TransparentClickSurface"))))
    .addChild(new TransformObject().setTranslation(-3.3,-0.5,0.0).setScale(0.4,0.4,0.4)
      .addChild(new TouchSensorObject().setUSE("RandomTextClickedSensor"))
      .addChild(new ROUTEObject().setFromNode("RandomTextClickedSensor").setFromField("isActive").setToNode("TextScript").setToField("selectRandomCard"))
      .addChild(new ShapeObject()
        .setGeometry(new TextObject().setString(new MFStringObject("\"random\""))
          .setFontStyle(new FontStyleObject().setUSE("MessageFont")))
        .setAppearance(new AppearanceObject().setUSE("InterfaceAppearance")))
      .addChild(new TransformObject().setScale(1.8,0.6,1.0)
        .addChild(new ShapeObject().setUSE("TransparentClickSurface"))))
    .addChild(new TransformObject().setScale(0.4,0.4,0.4).setTranslation(3.3,-0.5,0.0)
      .addChild(new AnchorObject("TextToSpeechAnchor").setDescription("text to speech in browser").setParameter(new MFStringObject("\"target=_blank\"")).setUrl(new MFStringObject("\"http://translate.google.com/translate_tts?tl=en&q=Overtly%20resist%20change\""))
        .addChild(new ROUTEObject().setFromNode("TextScript").setFromField("textToSpeechUrl").setToNode("TextToSpeechAnchor").setToField("url"))
        .addChild(new ShapeObject()
          .setGeometry(new TextObject().setString(new MFStringObject("\"speech\""))
            .setFontStyle(new FontStyleObject().setUSE("MessageFont")))
          .setAppearance(new AppearanceObject().setUSE("InterfaceAppearance")))
        .addChild(new TransformObject().setScale(1.8,0.6,1.0)
          .addChild(new ShapeObject().setUSE("TransparentClickSurface"))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return ObliqueStrategies_sail model
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
		var testObject = new ObliqueStrategies_sail();
		print ("ObliqueStrategies_sail execution self-validation test results: " + testObject.validateSelf());
	}
}
new ObliqueStrategies_sail().main();