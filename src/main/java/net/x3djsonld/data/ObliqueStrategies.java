package net.x3djsonld.data;

import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Sound.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Text scripting and animation example using Oblique Strategies card set by Brian Eno. </p>
 <p> Related links: <a href="../../../Inspiration/ObliqueStrategies.java">ObliqueStrategies.java</a> source, <a href="../../../Inspiration/ObliqueStrategiesIndex.html" target="_top">ObliqueStrategies catalog page</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
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
		<a href="http://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet to create Java source code from an <code>.x3d</code> model.
	</p>

	* @author Don Brutzman, John Kelly, Ben Cheng
 */

public class ObliqueStrategies
{
	/** Default constructor to create this object. */
	public ObliqueStrategies ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
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
    .addChild(new BackgroundObject().setSkyColor(new MFColorObject(new float[] {0.419608f,0.427451f,1.0f})))
    .addChild(new TransformObject().setTranslation(0.0f,1.0f,0.0f).setScale(0.4f,0.4f,0.4f)
      .addChild(new TouchSensorObject("RandomTextClickedSensor").setDescription("Select to see a new strategy"))
      .addChild(new ShapeObject()
        .setGeometry(new TextObject().setString(new MFStringObject("\"Oblique Strategies\" \"\" \"(Over One Hundred Worthwhile Dilemmas)\" \"\" \"by Brian Eno and Peter Schmidt\""))
          .setFontStyle(new FontStyleObject("MessageFont").setJustify(new MFStringObject("\"MIDDLE\" \"MIDDLE\"")).setFamily(new MFStringObject("\"SANS\"")).setStyle("BOLD")))
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setDiffuseColor(1.0f,1.0f,1.0f))))
      .addChild(new TransformObject().setScale(10.0f,3.0f,1.0f)
        .addChild(new ShapeObject("HeadlineClickSurface")
          .setGeometry(new IndexedFaceSetObject().setSolid(false).setCoordIndex(new int[] {0,1,2,3,-1})
            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {1.0f,1.0f,0.0f,1.0f,-1.0f,0.0f,-1.0f,-1.0f,0.0f,-1.0f,1.0f,0.0f}))))
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setShininess(0.07f).setAmbientIntensity(0.245763f).setSpecularColor(0.336735f,0.051091f,0.051091f).setDiffuseColor(0.34773f,0.090909f,0.005289f).setTransparency(0.8f))))))
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
    .addChild(new TransformObject("CardTransform").setTranslation(0.0f,-1.5f,0.0f).setScale(0.4f,0.4f,0.4f)
      .addChild(new ShapeObject()
        .setGeometry(new TextObject("CardText")
          .setFontStyle(new FontStyleObject().setJustify(new MFStringObject("\"MIDDLE\" \"MIDDLE\"")).setFamily(new MFStringObject("\"SANS\"")).setStyle("BOLD")))
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setDiffuseColor(1.0f,1.0f,1.0f))))
      .addChild(new ROUTEObject().setFromNode("TextScript").setFromField("string_changed").setToNode("CardText").setToField("string"))
      .addChild(new SoundObject("CardSoundSpatialization").setMaxBack(100f).setMaxFront(100f).setMinBack(20f).setMinFront(20f)
        .addComments(" Make sure the sound source AudioClip is audible at the user location ")
        .addComments(" Not all X3D players seem to use the .mp3 ")
        .addComments(" &#38; is ampersand character, avoids escaping problems and inconsistencies in browsers and X3D players ")
        .addComments(" %20 is space character used in uri/url encoding ")
        .setSource(new AudioClipObject("TextToSpeechAudioClip").setDescription("sends strategy text google translate").setUrl(new MFStringObject("\"http://translate.google.com/translate_tts?tl=en&q=Feed%20the%20recording%20back%20out%20of%20the%20medium\" \"translate_tts_mp3FileFormatNotSupported.wav\""))))
      .addChild(new ROUTEObject().setFromNode("TextScript").setFromField("textToSpeechUrl").setToNode("TextToSpeechAudioClip").setToField("url"))
      .addChild(new ROUTEObject().setFromNode("TextScript").setFromField("newCardTime").setToNode("TextToSpeechAudioClip").setToField("startTime")))
    .addChild(new TransformObject().setTranslation(-3.2f,2.5f,0.0f).setScale(0.4f,0.4f,0.4f)
      .addChild(new TouchSensorObject("PreviousTextClickedSensor").setDescription("Select to see previous strategy"))
      .addChild(new ROUTEObject().setFromNode("PreviousTextClickedSensor").setFromField("isActive").setToNode("TextScript").setToField("selectPreviousCard"))
      .addChild(new ShapeObject()
        .setGeometry(new TextObject().setString(new MFStringObject("\"previous\""))
          .setFontStyle(new FontStyleObject().setUSE("MessageFont")))
        .setAppearance(new AppearanceObject("InterfaceAppearance")
          .setMaterial(new MaterialObject().setDiffuseColor(1.0f,0.0f,0.6f))))
      .addChild(new TransformObject().setScale(2.0f,0.6f,1.0f)
        .addChild(new ShapeObject("TransparentClickSurface")
          .addComments(" support Selectable Text with a scalable IFS ")
          .setGeometry(new IndexedFaceSetObject().setSolid(false).setCoordIndex(new int[] {0,1,2,3,-1})
            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {1.0f,1.0f,0.0f,1.0f,-1.0f,0.0f,-1.0f,-1.0f,0.0f,-1.0f,1.0f,0.0f}))))
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setTransparency(1f))))))
    .addChild(new TransformObject().setScale(0.4f,0.4f,0.4f).setTranslation(3.5f,2.5f,0.0f)
      .addChild(new TouchSensorObject("NextTextClickedSensor").setDescription("Select to see next strategy"))
      .addChild(new ROUTEObject().setFromNode("NextTextClickedSensor").setFromField("isActive").setToNode("TextScript").setToField("selectNextCard"))
      .addChild(new ShapeObject()
        .setGeometry(new TextObject().setString(new MFStringObject("\"next\""))
          .setFontStyle(new FontStyleObject().setUSE("MessageFont")))
        .setAppearance(new AppearanceObject().setUSE("InterfaceAppearance")))
      .addChild(new TransformObject().setScale(1.2f,0.6f,1.0f)
        .addChild(new ShapeObject().setUSE("TransparentClickSurface"))))
    .addChild(new TransformObject().setTranslation(-3.3f,-0.5f,0.0f).setScale(0.4f,0.4f,0.4f)
      .addChild(new TouchSensorObject().setUSE("RandomTextClickedSensor"))
      .addChild(new ROUTEObject().setFromNode("RandomTextClickedSensor").setFromField("isActive").setToNode("TextScript").setToField("selectRandomCard"))
      .addChild(new ShapeObject()
        .setGeometry(new TextObject().setString(new MFStringObject("\"random\""))
          .setFontStyle(new FontStyleObject().setUSE("MessageFont")))
        .setAppearance(new AppearanceObject().setUSE("InterfaceAppearance")))
      .addChild(new TransformObject().setScale(1.8f,0.6f,1.0f)
        .addChild(new ShapeObject().setUSE("TransparentClickSurface"))))
    .addChild(new TransformObject().setScale(0.4f,0.4f,0.4f).setTranslation(3.3f,-0.5f,0.0f)
      .addChild(new AnchorObject("TextToSpeechAnchor").setDescription("text to speech in browser").setParameter(new MFStringObject("\"target=_blank\"")).setUrl(new MFStringObject("\"http://translate.google.com/translate_tts?tl=en&q=Overtly%20resist%20change\""))
        .addChild(new ROUTEObject().setFromNode("TextScript").setFromField("textToSpeechUrl").setToNode("TextToSpeechAnchor").setToField("url"))
        .addChild(new ShapeObject()
          .setGeometry(new TextObject().setString(new MFStringObject("\"speech\""))
            .setFontStyle(new FontStyleObject().setUSE("MessageFont")))
          .setAppearance(new AppearanceObject().setUSE("InterfaceAppearance")))
        .addChild(new TransformObject().setScale(1.8f,0.6f,1.0f)
          .addChild(new ShapeObject().setUSE("TransparentClickSurface"))))));
  }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return ObliqueStrategies model
	 */
	public X3DObject getX3dModel()
	{	  
		return x3dModel;
	}
	   
    /** Default main() method provided for test purposes, uses CommandLine to set global ConfigurationProperties for this object.
     * @param args array of input parameters, provided as arguments
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html#handleArguments-java.lang.String:A-">X3DObject.handleArguments(args)</a>
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html#validationReport--">X3DObject.validationReport()</a>
     * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html">CommandLine</a>
     * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html#USAGE">CommandLine.USAGE</a>
     * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/ConfigurationProperties.html">ConfigurationProperties</a>
     */
    public static void main(String args[])
    {
        X3DObject exampleObject = new ObliqueStrategies().getX3dModel();

        exampleObject.handleArguments(args);
		boolean validate = (args.length == 0);
		for (String arg : args)
		{
			if (arg.toLowerCase().startsWith("-v") || arg.toLowerCase().contains("validate"))
			{
				validate = true;
				break;
			}
		}
		if (validate)
		{
			System.out.print("ObliqueStrategies self-validation test results: ");
			String validationResults = exampleObject.validationReport();
			System.out.println(validationResults);
		}
    }
}
