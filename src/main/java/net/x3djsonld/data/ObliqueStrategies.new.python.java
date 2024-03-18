package net.x3djsonld.data;

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

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> Text scripting and animation example using Oblique Strategies card set by Brian Eno. </p>
 <p> Related links: <a href="../../../Inspiration/ObliqueStrategies.java">ObliqueStrategies.java</a> source, <a href="../../../Inspiration/ObliqueStrategiesIndex.html" target="_top">ObliqueStrategies catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet
	       (<a href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">version&amp;nbsp;control</a>)
                is used to create Java source code from an original <code>.x3d</code> model.
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
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("ObliqueStrategies.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Text scripting and animation example using Oblique Strategies card set by Brian Eno."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman, John Kelly, Ben Cheng"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("3 November 2013"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("10 November 2019"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("oblique.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("ObliqueStrategies.txt"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("ObliqueStrategiesScript.js"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://music.hyperreal.org/artists/brian_eno/oblique/oblique.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.eno-web.co.uk/obliques.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://gothpunk.com/haiku-intro.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.rtqe.net/ObliqueStrategies/OSintro.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://en.wikipedia.org/wiki/Oblique_Strategies"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("Brian Eno, Oblique Strategies"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("images/ObliqueStrategiesEntryScreen.png"))
    .addMeta(new meta().setName(meta.NAME_SOUND      ).setContent("http://translate.google.com/translate_tts?tl=en&q=hello%20X3D"))
    .addMeta(new meta().setName(meta.NAME_SOUND      ).setContent("translate_tts_HelloX3D.mp3"))
    .addMeta(new meta().setName(meta.NAME_SOUND      ).setContent("translate_tts_HelloX3D.wav"))
    .addMeta(new meta().setName(meta.NAME_TODO       ).setContent("multiliingual translation parameter"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://stackoverflow.com/questions/9163988/download-mp3-from-google-translate-text-to-speech"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.greenbot.com/article/2105862/how-to-get-started-with-google-text-to-speech.html"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("under development, scene Sound/AudioClip triggering (or retrieved file format) not working"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("TODO resolve potential error in Script node TextScript: parse problem line 15 \" var strategy = [];"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://gist.github.com/alotaiba/1728771"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://stackoverflow.com/questions/35002003/how-to-use-google-translate-tts-with-the-new-v2-api"))
    .addMeta(new meta().setName(meta.NAME_SOUND      ).setContent("https://translate.google.com/translate_tts?ie=UTF-8&client=tw-ob&tl=en&q=Hello+X3D4"))
    .addMeta(new meta().setName(meta.NAME_SOUND      ).setContent("translate_tts_HelloX3D4.mp3"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://cloud.google.com/translate/docs/basic/translating-text"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategies.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("ObliqueStrategies.x3d"))
    .addChild(new NavigationInfo().setType("\"NONE\""))
    .addChild(new Background().setSkyColor(new MFColor(new double[] {0.419608,0.427451,1.0})))
    .addChild(new Transform().setScale(0.4,0.4,0.4).setTranslation(0.0,1.0,0.0)
      .addChild(new TouchSensor("RandomTextClickedSensor").setDescription("Select to see a new strategy"))
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
        .setGeometry(new Text().setString(new String[] {"Oblique Strategies","","(Over One Hundred Worthwhile Dilemmas)","","by Brian Eno and Peter Schmidt"})
          .setFontStyle(new FontStyle("MessageFont").setFamily(new String[] {"SANS"}).setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setCssStyle("BOLD"))))
      .addChild(new Transform().setScale(10.0,3.0,1.0)
        .addChild(new Shape("HeadlineClickSurface")
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0.245763).setDiffuseColor(0.34773,0.090909,0.005289).setShininess(0.07).setSpecularColor(0.336735,0.051091,0.051091).setTransparency(0.8)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3,-1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {1.0,1.0,0.0,1.0,-1.0,0.0,-1.0,-1.0,0.0,-1.0,1.0,0.0})))))))
    .addChild(new Script("TextScript").setUrl(new String[] {"ObliqueStrategiesScript.js","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategiesScript.js"})
      .addField(new field().setName("index").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0).setAppinfo("index for active strategy card, -1 means no selection"))
      .addField(new field().setName("string_changed").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("latest strategy card value"))
      .addField(new field().setName("textToSpeechUrl").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("\"url to invoke Google Translate\""))
      .addField(new field().setName("newCardTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("activate Sound node"))
      .addField(new field().setName("selectPreviousCard").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("selectNextCard").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("selectRandomCard").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("traceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true).setAppinfo("controls console tracing")))
    .addChild(new Transform("CardTransform").setScale(0.4,0.4,0.4).setTranslation(0.0,-1.5,0.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
        .setGeometry(new Text("CardText")
          .setFontStyle(new FontStyle().setFamily(new String[] {"SANS"}).setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setCssStyle("BOLD"))))
      .addChild(new ROUTE().setFromNode("TextScript").setFromField("string_changed").setToNode("CardText").setToField("string"))
      .addChild(new Sound("CardSoundSpatialization").setMaxBack(100.0).setMaxFront(100.0).setMinBack(20.0).setMinFront(20.0)
        .setSource(new AudioClip("TextToSpeechAudioClip").setDescription("sends strategy text google translate").setUrl(new String[] {"http://translate.google.com/translate_tts?tl=en&amp;q=Feed%20the%20recording%20back%20out%20of%20the%20medium","translate_tts_mp3FileFormatNotSupported.wav","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/translate_tts_mp3FileFormatNotSupported.wav"})))
      .addChild(new ROUTE().setFromNode("TextScript").setFromField("textToSpeechUrl").setToNode("TextToSpeechAudioClip").setToField("url"))
      .addChild(new ROUTE().setFromNode("TextScript").setFromField("newCardTime").setToNode("TextToSpeechAudioClip").setToField("startTime")))
    .addChild(new Transform().setScale(0.4,0.4,0.4).setTranslation(-3.2,2.5,0.0)
      .addChild(new TouchSensor("PreviousTextClickedSensor").setDescription("Select to see previous strategy"))
      .addChild(new ROUTE().setFromNode("PreviousTextClickedSensor").setFromField("isActive").setToNode("TextScript").setToField("selectPreviousCard"))
      .addChild(new Shape()
        .setAppearance(new Appearance("InterfaceAppearance")
          .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.6)))
        .setGeometry(new Text().setString(new String[] {"previous"})
          .setFontStyle(new FontStyle().setUSE("MessageFont"))))
      .addChild(new Transform().setScale(2.0,0.6,1.0)
        .addChild(new Shape("TransparentClickSurface")
          .setAppearance(new Appearance()
            .setMaterial(new Material().setTransparency(1.0)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3,-1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {1.0,1.0,0.0,1.0,-1.0,0.0,-1.0,-1.0,0.0,-1.0,1.0,0.0})))))))
    .addChild(new Transform().setScale(0.4,0.4,0.4).setTranslation(3.5,2.5,0.0)
      .addChild(new TouchSensor("NextTextClickedSensor").setDescription("Select to see next strategy"))
      .addChild(new ROUTE().setFromNode("NextTextClickedSensor").setFromField("isActive").setToNode("TextScript").setToField("selectNextCard"))
      .addChild(new Shape()
        .setAppearance(new Appearance().setUSE("InterfaceAppearance"))
        .setGeometry(new Text().setString(new String[] {"next"})
          .setFontStyle(new FontStyle().setUSE("MessageFont"))))
      .addChild(new Transform().setScale(1.2,0.6,1.0)
        .addChild(new Shape().setUSE("TransparentClickSurface"))))
    .addChild(new Transform().setScale(0.4,0.4,0.4).setTranslation(-3.3,-0.5,0.0)
      .addChild(new TouchSensor().setUSE("RandomTextClickedSensor"))
      .addChild(new ROUTE().setFromNode("RandomTextClickedSensor").setFromField("isActive").setToNode("TextScript").setToField("selectRandomCard"))
      .addChild(new Shape()
        .setAppearance(new Appearance().setUSE("InterfaceAppearance"))
        .setGeometry(new Text().setString(new String[] {"random"})
          .setFontStyle(new FontStyle().setUSE("MessageFont"))))
      .addChild(new Transform().setScale(1.8,0.6,1.0)
        .addChild(new Shape().setUSE("TransparentClickSurface"))))
    .addChild(new Transform().setScale(0.4,0.4,0.4).setTranslation(3.3,-0.5,0.0)
      .addChild(new Anchor("TextToSpeechAnchor").setDescription("text to speech in browser").setParameter(new String[] {"target=_blank"}).setUrl(new String[] {"http://translate.google.com/translate_tts?tl=en&amp;q=Overtly%20resist%20change"})
        .addChild(new ROUTE().setFromNode("TextScript").setFromField("textToSpeechUrl").setToNode("TextToSpeechAnchor").setToField("url"))
        .addChild(new Shape()
          .setAppearance(new Appearance().setUSE("InterfaceAppearance"))
          .setGeometry(new Text().setString(new String[] {"speech"})
            .setFontStyle(new FontStyle().setUSE("MessageFont"))))
        .addChild(new Transform().setScale(1.8,0.6,1.0)
          .addChild(new Shape().setUSE("TransparentClickSurface"))))));
            }
            catch (Exception ex)
            {       
                System.err.println ("*** Further hints on X3DJSAIL errors and exceptions at");
                System.err.println ("*** https://www.web3d.org/specifications/java/X3DJSAIL.html");
                throw (ex);
            }
	}
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return ObliqueStrategies model
	 */
	public X3D getX3dModel()
	{	  
		return x3dModel;
	}
	   
    /** 
     * Default main() method provided for test purposes, uses CommandLine to set global ConfigurationProperties for this object.
     * @param args array of input parameters, provided as arguments
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html#handleArguments-java.lang.String:A-">X3D.handleArguments(args)</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html#validationReport--">X3D.validationReport()</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html">CommandLine</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html#USAGE">CommandLine.USAGE</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/ConfigurationProperties.html">ConfigurationProperties</a>
     */
    public static void main(String args[])
    {
        System.out.println("Build this X3D model, showing validation diagnostics...");
        X3D thisExampleX3dModel = new ObliqueStrategies().getX3dModel();
//      System.out.println("X3D model construction complete.");
	
        // next handle command line arguments
        boolean hasArguments = (args != null) && (args.length > 0);
        boolean validate = true; // default
        boolean argumentsLoadNewModel = false;
        String  fileName = new String();

        if (args != null)
        {
                for (String arg : args)
                {
                        if (arg.toLowerCase().startsWith("-v") || arg.toLowerCase().contains("validate"))
                        {
                                validate = true; // making sure
                        }
                        if (arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_X3D) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_CLASSICVRML) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_X3DB) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_VRML97) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_EXI) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_GZIP) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_ZIP) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_HTML) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_XHTML))
                        {
                                argumentsLoadNewModel = true;
                                fileName = arg;
                        }
                }
        }
        if      (argumentsLoadNewModel)
                System.out.println("WARNING: \"net.x3djsonld.data.ObliqueStrategies\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.ObliqueStrategies self-validation test results: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());
        }
    }
}
