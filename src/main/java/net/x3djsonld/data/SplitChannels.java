package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Sound.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> This X3D scene includes a simple sound source which can be moved right and left. Depending on the position of the sound source, the user can hear the produced sound from the corresponding output speaker. Accordingly, there is a source that can be passed through a SpatialSound for the spatialization of the input audio. The approach is based on the relative position of the source and the listener, in comparison to the panner. </p>
 <p> Related links: Catalog page <a href="../../../AudioSpatialSound/SplitChannelsIndex.html" target="_blank">SplitChannels</a>,  source <a href="../../../AudioSpatialSound/SplitChannels.java">SplitChannels.java</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet
	       (<a href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">version control</a>)
                which is used to create Java source code from an original <code>.x3d</code> model.
	</p>

	* @author Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman
 */

public class SplitChannels
{
	/** Default constructor to create this object. */
	public SplitChannels ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_FULL).setVersion(X3D.VERSION_4_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("SplitChannels.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("This X3D scene includes a simple sound source which can be moved right and left. Depending on the position of the sound source, the user can hear the produced sound from the corresponding output speaker. Accordingly, there is a source that can be passed through a SpatialSound for the spatialization of the input audio. The approach is based on the relative position of the source and the listener, in comparison to the panner."))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("28 October 2020"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("23 April 2023"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("CHANGELOG.txt"))
    .addMeta(new meta().setName(meta.NAME_TODO       ).setContent("credit for audio files"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.medialab.hmu.gr/minipages/x3domAudio"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/SplitChannels.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("SplitChannels.x3d"))
    .addChild(new NavigationInfo().setHtmlID("NAV").setType("\"NONE\""))
    .addChild(new Background().setSkyColor(new MFColor(new double[] {0.200,0.200,0.210})))
    .addChild(new Viewpoint().setOrientation(1.0,0.0,0.0,-0.5).setPosition(0.0,500.0,600.0).setRetainUserOffsets(true))
    .addChild(new Transform("PowerR").setTranslation(100.0,400.0,400.0)
      .addChild(new Transform().setHtmlID("pR").setRotation(1.0,0.0,0.0,-0.5).setTranslation(0.0,40.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance("audio_emit")
            .setMaterial(new Material().setDiffuseColor(0.0,1.0,0.0).setEmissiveColor(0.8,0.8,0.8).setSpecularColor(0.01,0.01,0.01)))
          .setGeometry(new Box().setSize(10.0,80.0,0.01))))
      .addChild(new Transform().setRotation(1.0,0.0,0.0,-0.5).setTranslation(-2.7,37.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance("audio_emit2")
            .setMaterial(new Material().setDiffuseColor(0.0,1.0,0.0).setEmissiveColor(0.8,0.8,0.8).setSpecularColor(0.01,0.01,0.01))
            .setTexture(new ImageTexture().setUrl(new String[] {"images/line.png","https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"})))
          .setGeometry(new Box().setSize(25.0,83.0,0.01))))
      .addChild(new Transform("volumeRight").setRotation(1.0,0.0,0.0,-0.5).setScale(10.0,10.0,10.0).setTranslation(0.0,-10.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0.0933).setDiffuseColor(0.345,0.345,0.882).setShininess(0.51).setSpecularColor(0.46,0.46,0.46)))
          .setGeometry(new Text().setString(new String[] {"Right Channel Volume"})
            .setFontStyle(new FontStyle("VolumeFontStyle").setFamily(new String[] {"Times","SERIF"}).setCssStyle("BOLD"))))))
    .addChild(new Transform("PowerL").setTranslation(-100.0,400.0,400.0)
      .addChild(new Transform().setHtmlID("pL").setRotation(1.0,0.0,0.0,-0.5).setTranslation(0.0,40.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance("audio_emit3")
            .setMaterial(new Material().setDiffuseColor(0.0,1.0,0.0).setEmissiveColor(0.8,0.8,0.8).setSpecularColor(0.01,0.01,0.01)))
          .setGeometry(new Box().setSize(10.0,80.0,0.01))))
      .addChild(new Transform().setRotation(1.0,0.0,0.0,-0.5).setTranslation(13.2,37.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance("audio_emit4")
            .setMaterial(new Material().setDiffuseColor(0.0,1.0,0.0).setEmissiveColor(0.8,0.8,0.8).setSpecularColor(0.01,0.01,0.01))
            .setTexture(new ImageTexture().setUrl(new String[] {"images/line.png","https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"})))
          .setGeometry(new Box().setSize(25.0,83.0,0.01))))
      .addChild(new Transform("volumeLeft").setRotation(1.0,0.0,0.0,-0.5).setScale(10.0,10.0,10.0).setTranslation(0.0,-10.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0.0933).setDiffuseColor(0.345,0.345,0.882).setShininess(0.51).setSpecularColor(0.46,0.46,0.46)))
          .setGeometry(new Text().setString(new String[] {"Left Channel Volume"})
            .setFontStyle(new FontStyle().setUSE("VolumeFontStyle"))))))
    .addChild(new Transform()
      .addChild(new Shape()
        .setAppearance(new Appearance("floor")
          .setMaterial(new Material().setDiffuseColor(0.1,0.1,0.1).setShininess(0.8).setSpecularColor(0.5,0.6,0.7)))
        .setGeometry(new Box().setSize(1500.0,10.0,500.0))))
    .addChild(new ListenerPointSource().setHtmlID("ListenerPointSource").setTrackCurrentView(true))
    .addChild(new StreamAudioDestination().setHtmlID("AudioDestination")
      .addChild(new Gain().setHtmlID("Gain3")
        .addChild(new ChannelMerger().setHtmlID("ChannelMerger")
          .addChild(new ChannelSelector().setHtmlID("ChannelSelector0")
            .addChild(new Gain().setUSE("ChannelSplitter")))
          .addChild(new ChannelSelector().setChannelSelection(1).setHtmlID("ChannelSelector1")
            .addChild(new Gain().setUSE("ChannelSplitter"))))))
    .addChild(new ChannelSplitter("ChannelSplitter").setChannelCountMode("EXPLICIT")
      .addChild(new AudioClip().setDescription("Violin").setUrl(new String[] {"sound/violin.mp3","https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"})))
    .addChild(new Transform("Audio3").setRotation(1.0,0.0,0.0,-0.5).setTranslation(0.0,100.0,0.0)
      .addChild(new Shape()
        .setAppearance(new Appearance("audio_emit5")
          .setMaterial(new Material().setDiffuseColor(0.3,1.0,0.3).setEmissiveColor(0.8,0.8,0.8).setSpecularColor(0.01,0.01,0.01))
          .setTexture(new ImageTexture().setUrl(new String[] {"images/loudspeaker.png","https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/loudspeaker.png"})))
        .setGeometry(new Box().setSize(100.0,100.0,0.001)))));
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
	 * @return SplitChannels model
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
        X3D thisExampleX3dModel = new SplitChannels().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.SplitChannels\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.SplitChannels self-validation test results: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());
        }
    }
}
