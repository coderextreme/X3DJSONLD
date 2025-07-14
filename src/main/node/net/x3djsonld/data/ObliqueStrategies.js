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
 * <p> Text scripting and animation example using Oblique Strategies card set by Brian Eno. </p>
 <p> Related links: <a href="../../../Inspiration/ObliqueStrategies.java">ObliqueStrategies.java</a> source, <a href="../../../Inspiration/ObliqueStrategiesIndex.html" target="_top">ObliqueStrategies catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
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
			<td> 10 November 2019 </td>
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
			<td style="text-align:right; vertical-align: text-top;"> <i> Sound </i> </td>
			<td> <a href="http://translate.google.com/translate_tts?tl=en&amp;q=hello%20X3D" target="_blank">http://translate.google.com/translate_tts?tl=en&amp;q=hello%20X3D</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Sound </i> </td>
			<td> <a href="../../../Inspiration/translate_tts_HelloX3D.mp3">translate_tts_HelloX3D.mp3</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Sound </i> </td>
			<td> <a href="../../../Inspiration/translate_tts_HelloX3D.wav">translate_tts_HelloX3D.wav</a> </td>
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
			<td> TODO resolve potential error in Script node TextScript: parse problem line 15 " var strategy = []; </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://gist.github.com/alotaiba/1728771" target="_blank">https://gist.github.com/alotaiba/1728771</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://stackoverflow.com/questions/35002003/how-to-use-google-translate-tts-with-the-new-v2-api" target="_blank">https://stackoverflow.com/questions/35002003/how-to-use-google-translate-tts-with-the-new-v2-api</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Sound </i> </td>
			<td> <a href="https://translate.google.com/translate_tts?ie=UTF-8&amp;client=tw-ob&amp;tl=en&amp;q=Hello+X3D4" target="_blank">https://translate.google.com/translate_tts?ie=UTF-8&amp;client=tw-ob&amp;tl=en&amp;q=Hello+X3D4</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Sound </i> </td>
			<td> <a href="../../../Inspiration/translate_tts_HelloX3D4.mp3">translate_tts_HelloX3D4.mp3</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://cloud.google.com/translate/docs/basic/translating-text" target="_blank">https://cloud.google.com/translate/docs/basic/translating-text</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategies.x3d" target="_blank">https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategies.x3d</a> </td>
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
		<a href="https://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToNodeJS.xslt" target="_blank">X3dToNodeJS.xslt</a>
		stylesheet to create NodeJS source code from an <code>.x3d</code> scene.
	</p>

	* @author Don Brutzman, John Kelly, Ben Cheng
 */

function ObliqueStrategies
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
ObliqueStrategies.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("ObliqueStrategies.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Text scripting and animation example using Oblique Strategies card set by Brian Eno."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman, John Kelly, Ben Cheng"))
    .addMeta((new autoclass.meta()).setName("created").setContent("3 November 2013"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("10 November 2019"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("oblique.html"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("ObliqueStrategies.txt"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("ObliqueStrategiesScript.js"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://music.hyperreal.org/artists/brian_eno/oblique/oblique.html"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.eno-web.co.uk/obliques.html"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://gothpunk.com/haiku-intro.html"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.rtqe.net/ObliqueStrategies/OSintro.html"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://en.wikipedia.org/wiki/Oblique_Strategies"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("Brian Eno, Oblique Strategies"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("images/ObliqueStrategiesEntryScreen.png"))
    .addMeta((new autoclass.meta()).setName("Sound").setContent("http://translate.google.com/translate_tts?tl=en&q=hello%20X3D"))
    .addMeta((new autoclass.meta()).setName("Sound").setContent("translate_tts_HelloX3D.mp3"))
    .addMeta((new autoclass.meta()).setName("Sound").setContent("translate_tts_HelloX3D.wav"))
    .addMeta((new autoclass.meta()).setName("TODO").setContent("multiliingual translation parameter"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://stackoverflow.com/questions/9163988/download-mp3-from-google-translate-text-to-speech"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.greenbot.com/article/2105862/how-to-get-started-with-google-text-to-speech.html"))
    .addMeta((new autoclass.meta()).setName("warning").setContent("under development, scene Sound/AudioClip triggering (or retrieved file format) not working"))
    .addMeta((new autoclass.meta()).setName("warning").setContent("TODO resolve potential error in Script node TextScript: parse problem line 15 \" var strategy = [];"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://gist.github.com/alotaiba/1728771"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://stackoverflow.com/questions/35002003/how-to-use-google-translate-tts-with-the-new-v2-api"))
    .addMeta((new autoclass.meta()).setName("Sound").setContent("https://translate.google.com/translate_tts?ie=UTF-8&client=tw-ob&tl=en&q=Hello+X3D4"))
    .addMeta((new autoclass.meta()).setName("Sound").setContent("translate_tts_HelloX3D4.mp3"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://cloud.google.com/translate/docs/basic/translating-text"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategies.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("ObliqueStrategies.x3d"))
    .addChild((new autoclass.NavigationInfo()).setType("\"NONE\""))
    .addChild((new autoclass.Background()).setSkyColor(new autoclass.MFColor(java.newArray("float", [0.419608,0.427451,1.0]))))
    .addChild((new autoclass.Transform()).setScale(0.4,0.4,0.4).setTranslation(0.0,1.0,0.0)
      .addChild((new autoclass.TouchSensor("RandomTextClickedSensor")).setDescription("Select to see a new strategy"))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"Oblique Strategies\" \"\" \"(Over One Hundred Worthwhile Dilemmas)\" \"\" \"by Brian Eno and Peter Schmidt\""))
          .setFontStyle((new autoclass.FontStyle("MessageFont")).setFamily(new autoclass.MFString("\"SANS\"")).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")).setStyle("BOLD")))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,1.0))))
      .addChild((new autoclass.Transform()).setScale(10.0,3.0,1.0)
        .addChild((new autoclass.Shape("HeadlineClickSurface"))
          .setGeometry((new autoclass.IndexedFaceSet()).setSolid(false).setCoordIndex(java.newArray("int", [0,1,2,3,-1]))
            .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [1.0,1.0,0.0,1.0,-1.0,0.0,-1.0,-1.0,0.0,-1.0,1.0,0.0])))))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setAmbientIntensity(0.245763).setDiffuseColor(0.34773,0.090909,0.005289).setShininess(0.07).setSpecularColor(0.336735,0.051091,0.051091).setTransparency(0.8))))))
    .addChild((new autoclass.Script("TextScript")).setUrl(new autoclass.MFString("\"ObliqueStrategiesScript.js\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategiesScript.js\""))
      .addComments(" initialize() method includes unit test to printAllStrategies() to console ")
      .addComments(" TODO insert field definitions here (index string_changed previous next random) and then animate! ")
      .addField((new autoclass.field()).setName(index).setType(SFInt32).setAccessType(initializeOnly).setValue(0).setAppinfo(index for active strategy card, -1 means no selection))
      .addField((new autoclass.field()).setName(new autoclass.MFString("\"string_changed\"")).setType(new autoclass.MFString("\"MFString\"")).setAccessType(new autoclass.MFString("\"outputOnly\"")).setAppinfo(new autoclass.MFString("\"latest strategy card value\"")))
      .addField((new autoclass.field()).setName(new autoclass.MFString("\"textToSpeechUrl\"")).setType(new autoclass.MFString("\"MFString\"")).setAccessType(new autoclass.MFString("\"outputOnly\"")).setAppinfo(new autoclass.MFString("\"url to invoke Google Translate\"")))
      .addField((new autoclass.field()).setName(newCardTime).setType(SFTime).setAccessType(outputOnly).setAppinfo(activate Sound node))
      .addField((new autoclass.field()).setName(selectPreviousCard).setType(SFBool).setAccessType(inputOnly))
      .addField((new autoclass.field()).setName(selectNextCard).setType(SFBool).setAccessType(inputOnly))
      .addField((new autoclass.field()).setName(selectRandomCard).setType(SFBool).setAccessType(inputOnly))
      .addField((new autoclass.field()).setName(traceEnabled).setType(SFBool).setAccessType(initializeOnly).setValue(true).setAppinfo(controls console tracing)))
    .addChild((new autoclass.Transform("CardTransform")).setScale(0.4,0.4,0.4).setTranslation(0.0,-1.5,0.0)
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.Text("CardText"))
          .setFontStyle((new autoclass.FontStyle()).setFamily(new autoclass.MFString("\"SANS\"")).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")).setStyle("BOLD")))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,1.0))))
      .addChild((new autoclass.ROUTE()).setFromNode("TextScript").setFromField("string_changed").setToNode("CardText").setToField("string"))
      .addChild((new autoclass.Sound("CardSoundSpatialization")).setMaxBack(100).setMaxFront(100).setMinBack(20).setMinFront(20)
        .addComments(" Make sure the sound source AudioClip is audible at the user location ")
        .addComments(" Not all X3D players seem to use the .mp3 ")
        .addComments(" &#38; is ampersand character, avoids escaping problems and inconsistencies in browsers and X3D players ")
        .addComments(" %20 is space character used in uri/url encoding ")
        .setSource((new autoclass.AudioClip("TextToSpeechAudioClip")).setDescription("sends strategy text google translate").setUrl(new autoclass.MFString("\"http://translate.google.com/translate_tts?tl=en&amp;q=Feed%20the%20recording%20back%20out%20of%20the%20medium\" \"translate_tts_mp3FileFormatNotSupported.wav\" \"https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/translate_tts_mp3FileFormatNotSupported.wav\""))))
      .addChild((new autoclass.ROUTE()).setFromNode("TextScript").setFromField("textToSpeechUrl").setToNode("TextToSpeechAudioClip").setToField("url"))
      .addChild((new autoclass.ROUTE()).setFromNode("TextScript").setFromField("newCardTime").setToNode("TextToSpeechAudioClip").setToField("startTime")))
    .addChild((new autoclass.Transform()).setScale(0.4,0.4,0.4).setTranslation(-3.2,2.5,0.0)
      .addChild((new autoclass.TouchSensor("PreviousTextClickedSensor")).setDescription("Select to see previous strategy"))
      .addChild((new autoclass.ROUTE()).setFromNode("PreviousTextClickedSensor").setFromField("isActive").setToNode("TextScript").setToField("selectPreviousCard"))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"previous\""))
          .setFontStyle((new autoclass.FontStyle())))
        .setAppearance((new autoclass.Appearance("InterfaceAppearance"))
          .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,0.0,0.6))))
      .addChild((new autoclass.Transform()).setScale(2.0,0.6,1.0)
        .addChild((new autoclass.Shape("TransparentClickSurface"))
          .addComments(" support Selectable Text with a scalable IFS ")
          .setGeometry((new autoclass.IndexedFaceSet()).setSolid(false).setCoordIndex(java.newArray("int", [0,1,2,3,-1]))
            .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [1.0,1.0,0.0,1.0,-1.0,0.0,-1.0,-1.0,0.0,-1.0,1.0,0.0])))))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setTransparency(1))))))
    .addChild((new autoclass.Transform()).setScale(0.4,0.4,0.4).setTranslation(3.5,2.5,0.0)
      .addChild((new autoclass.TouchSensor("NextTextClickedSensor")).setDescription("Select to see next strategy"))
      .addChild((new autoclass.ROUTE()).setFromNode("NextTextClickedSensor").setFromField("isActive").setToNode("TextScript").setToField("selectNextCard"))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"next\""))
          .setFontStyle((new autoclass.FontStyle())))
        .setAppearance((new autoclass.Appearance())))
      .addChild((new autoclass.Transform()).setScale(1.2,0.6,1.0)
        .addChild((new autoclass.Shape()))))
    .addChild((new autoclass.Transform()).setScale(0.4,0.4,0.4).setTranslation(-3.3,-0.5,0.0)
      .addChild((new autoclass.TouchSensor()))
      .addChild((new autoclass.ROUTE()).setFromNode("RandomTextClickedSensor").setFromField("isActive").setToNode("TextScript").setToField("selectRandomCard"))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"random\""))
          .setFontStyle((new autoclass.FontStyle())))
        .setAppearance((new autoclass.Appearance())))
      .addChild((new autoclass.Transform()).setScale(1.8,0.6,1.0)
        .addChild((new autoclass.Shape()))))
    .addChild((new autoclass.Transform()).setScale(0.4,0.4,0.4).setTranslation(3.3,-0.5,0.0)
      .addChild((new autoclass.Anchor("TextToSpeechAnchor")).setDescription("text to speech in browser").setParameter(new autoclass.MFString("\"target=_blank\"")).setUrl(new autoclass.MFString("\"http://translate.google.com/translate_tts?tl=en&amp;q=Overtly%20resist%20change\""))
        .addChild((new autoclass.ROUTE()).setFromNode("TextScript").setFromField("textToSpeechUrl").setToNode("TextToSpeechAnchor").setToField("url"))
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"speech\""))
            .setFontStyle((new autoclass.FontStyle())))
          .setAppearance((new autoclass.Appearance())))
        .addChild((new autoclass.Transform()).setScale(1.8,0.6,1.0)
          .addChild((new autoclass.Shape()))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return ObliqueStrategies model
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
		var testObject = new ObliqueStrategies();
		console.log ("ObliqueStrategies execution self-validation test results: " + testObject.validateSelf());
	}
}
new ObliqueStrategies().main();